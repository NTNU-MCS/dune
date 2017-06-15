//***************************************************************************
// Author: Petter Norgren                                                   *
//***************************************************************************

// DUNE headers.
#include "PlanTracker.hpp"

namespace Simulators
{
  namespace TargetTracker
  {
    using DUNE_NAMESPACES;

    PlanTracker::PlanTracker()
     : m_progress(0.0)
     , m_plan(NULL)
    {

    }

    PlanTracker::~PlanTracker()
    {
      if(m_plan != NULL)
      {
        delete(m_plan);
      }
    }

    void PlanTracker::setPlanControlState(const IMC::PlanControlState *msg)
    {
      m_pcs = *msg;
    }

    void PlanTracker::setEstimatedState(const IMC::EstimatedState *msg)
    {
      m_estate = *msg;
    }

    bool PlanTracker::calculateEstimatedPlanProgress(float &x, float &y, float &z, float &psi, float &u, float &v, float &w)
    {
      (void)x;
      (void)y;
      (void)z;
      (void)psi;
      (void)u;
      (void)v;
      (void)w;

      return false;
    }

    bool PlanTracker::parsePlan(const IMC::PlanSpecification *spec, const std::set<uint16_t> *supported_maneuvers)
    {
      bool start_maneuver_ok = false;

      if (!spec->maneuvers.size())
      {
        printf("%s: no maneuvers.", spec->plan_id.c_str());
        return false;
      }

      IMC::MessageList<IMC::PlanManeuver>::const_iterator mitr;
      mitr = spec->maneuvers.begin();

      // parse maneuvers and transitions
      do
      {
        if (*mitr == NULL)
        {
          ++mitr;
          continue;
        }

        if ((*mitr)->data.isNull())
        {
          printf("%s: actual maneuver not specified.", (*mitr)->maneuver_id.c_str());
          return false;
        }

        const IMC::Message* m = (*mitr)->data.get();

        if (supported_maneuvers->find(m->getId()) == supported_maneuvers->end())
        {
          printf("%s: maneuver is not supported.", (*mitr)->maneuver_id.c_str());
          return false;
        }

        if ((*mitr)->maneuver_id == spec->start_man_id)
          start_maneuver_ok = true;

        PlanNode node;
        bool matched = false;

        node.pman = (*mitr);

        IMC::MessageList<IMC::PlanTransition>::const_iterator tritr;
        tritr = spec->transitions.begin();

        for (; tritr != spec->transitions.end(); ++tritr)
        {
          if (*tritr == NULL)
            continue;

          if ((*tritr)->dest_man == (*mitr)->maneuver_id)
            matched = true;

          if ((*tritr)->source_man == (*mitr)->maneuver_id)
            node.trans.push_back((*tritr));
        }

        // if a match was not found and this is not the start maneuver
        if (!matched && ((*mitr)->maneuver_id != spec->start_man_id))
        {
          printf("%s: maneuver has no incoming transition and it's not the initial maneuver.", (*mitr)->maneuver_id.c_str()); 
          return false;
        }

        //m_graph[(*mitr)->maneuver_id] = node;
        ++mitr;
      }
      while (mitr != spec->maneuvers.end());

      if (!start_maneuver_ok)
      {
        printf("%s: invalid start maneuver.", (*mitr)->maneuver_id.c_str()); 
        return false;
      }

      return true; 
    }
  }
}
