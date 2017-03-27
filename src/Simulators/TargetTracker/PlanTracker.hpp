//***************************************************************************
// Author: Petter Norgren                                                   *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace TargetTracker
  {
    using DUNE_NAMESPACES;

    //! Graph nodes (a maneuver and its outgoing transitions)
    struct PlanNode
    {
      //! Pointer to a plan maneuver
      IMC::PlanManeuver* pman;
      //! Vector of pointers to plan transitions
      std::vector<IMC::PlanTransition*> trans;
    };

    //! Mapping between maneuver IDs and graph nodes
    typedef std::map<std::string, PlanNode> PlanMap;

    class PlanTracker
    {
        public:
          PlanTracker();
          ~PlanTracker();

          bool parsePlan(const IMC::PlanSpecification *spec, const std::set<uint16_t> *supported_maneuvers);

          bool calculateEstimatedPlanProgress(float &x, float &y, float &z, float &psi, float &u, float &v, float &w);
          
          void setEstimatedState(const IMC::EstimatedState *msg);
          void setPlanControlState(const IMC::PlanControlState *msg);

        private: 
          IMC::EstimatedState m_estate;
          IMC::PlanControlState m_pcs;
          float m_progress;
          PlanMap *m_plan;
    };
  }
}
