//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: d292e724592557940354dddbfc5a9d32                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.79533245899);
    msg.setSource(49292U);
    msg.setSourceEntity(5U);
    msg.setDestination(6257U);
    msg.setDestinationEntity(88U);
    msg.state = 75U;
    msg.flags = 33U;
    msg.description.assign("VPNSQKMFSVMXAJVZZPHTGETOXIGFALEQIJTHDFJXYMLGOKSTGHDILHOSBHQBACWVWJWCWRKIBUEFKOIPGERCYFQDPVDMSVIUOXMTLZAYGQDUNUUHDUTEPMMBDESPSDUSFHWANAYDSROPKEWYNRRJXJNZCURGKGZMBVIJZCWJLXYZRZOUHAXANA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.572690481467);
    msg.setSource(10942U);
    msg.setSourceEntity(54U);
    msg.setDestination(46257U);
    msg.setDestinationEntity(85U);
    msg.state = 63U;
    msg.flags = 185U;
    msg.description.assign("PNPYEBHDURHQOACQWJIFHYOUEBYTXIOVKLNCFOUNERVHZVNWDMXCZNGOLDCVXJQIEFBJHRDXTPLWOEXZJKYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.455499319227);
    msg.setSource(28155U);
    msg.setSourceEntity(34U);
    msg.setDestination(55119U);
    msg.setDestinationEntity(232U);
    msg.state = 245U;
    msg.flags = 81U;
    msg.description.assign("WJDAKBYILVONCSAHFNRBIRTDUPKWEEXYSZLOCPUGHTAWWVKKSWCYYQQQXFCZYISNQPCFHUVIIVKDJKXEUZDIMJTNRJGMDLYKVXDVWWWXINGEFGFUFORHHCOJPHUOZORJNBMRDP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.354920439745);
    msg.setSource(5032U);
    msg.setSourceEntity(53U);
    msg.setDestination(40942U);
    msg.setDestinationEntity(29U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.642407595437);
    msg.setSource(19935U);
    msg.setSourceEntity(133U);
    msg.setDestination(19947U);
    msg.setDestinationEntity(240U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.00774328389399);
    msg.setSource(65342U);
    msg.setSourceEntity(108U);
    msg.setDestination(5375U);
    msg.setDestinationEntity(152U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.567062374884);
    msg.setSource(368U);
    msg.setSourceEntity(223U);
    msg.setDestination(51438U);
    msg.setDestinationEntity(182U);
    msg.id = 244U;
    msg.label.assign("IOBEQWNZZPBEUTKDOIURMBQQIYAFRJHGEFUSOQETWTERVJDUYSNAEAZTOYGXLTOBCVUTCWFZTKHBHLVPVAKRFEQTWISLZCXDVDZDC");
    msg.component.assign("EGAHCWYNDTOZYBRJEKQSSYXRTKKFURQYBMQGSDCDTCHFWNTDTKSQZECSIICHVVWXZQUJGMAVCZYFOURLNCWEDDQAJSXTZVPFLKOZNOOBAUIWECIXAEHPUMRNVZRZPKXULBWRJQMPIJVWNDLTLVAMRVMGXQ");
    msg.act_time = 28409U;
    msg.deact_time = 42550U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.550490006853);
    msg.setSource(43630U);
    msg.setSourceEntity(21U);
    msg.setDestination(21802U);
    msg.setDestinationEntity(253U);
    msg.id = 42U;
    msg.label.assign("KINMPOOFHWAQDENXBDPTLVGVKOZGRRCLCBXUEHLBKWTODGJZPEATSTZYBUJUKFJAAZVYMAOTRXRFWCMQVTRQQFVPDLIGSQXFHNILYSTSPKZFZPZPEWUBTYJLIPXWIEWNNIZKMHGLDNAGKAXJGFOITMRNYXEGEHBZUYQUDK");
    msg.component.assign("VZUJQYDGGUHWLHPPDDKEAHJXIXCTAAKJYREDOPWZEYBJUTMNRZIJOIJQWIJWWGSXIFVFESZQZVOOXRASNZAWRCPNBVGMHVNDKZAMQOIFLKUUUCMPHOEECJKZQBSLKTVKLA");
    msg.act_time = 61270U;
    msg.deact_time = 56541U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.942309026807);
    msg.setSource(37637U);
    msg.setSourceEntity(227U);
    msg.setDestination(55445U);
    msg.setDestinationEntity(140U);
    msg.id = 140U;
    msg.label.assign("VUXPPNUVLMCZKAXELMTHIQDZ");
    msg.component.assign("KHFIVWSIUKAMUGOHYBGLVIBHXLYMRLMODLSOOJJDQPDOTZVXNKKPIVZCPCSNRIYYSFKTPCXR");
    msg.act_time = 2325U;
    msg.deact_time = 47790U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.364050700643);
    msg.setSource(22276U);
    msg.setSourceEntity(243U);
    msg.setDestination(10944U);
    msg.setDestinationEntity(119U);
    msg.id = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.778475109096);
    msg.setSource(65500U);
    msg.setSourceEntity(60U);
    msg.setDestination(45174U);
    msg.setDestinationEntity(164U);
    msg.id = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.334081568882);
    msg.setSource(2951U);
    msg.setSourceEntity(203U);
    msg.setDestination(47612U);
    msg.setDestinationEntity(12U);
    msg.id = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.802877313813);
    msg.setSource(21310U);
    msg.setSourceEntity(187U);
    msg.setDestination(28422U);
    msg.setDestinationEntity(48U);
    msg.op = 111U;
    msg.list.assign("XJUODXRGGWUYVKLYXSLQZCIFAOJYPCBBMWNBTVOYQWWUEZTLRKUZVNKKICOQVDITQXTMSBOCXOMNFXGRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.718427826404);
    msg.setSource(65284U);
    msg.setSourceEntity(28U);
    msg.setDestination(52557U);
    msg.setDestinationEntity(80U);
    msg.op = 8U;
    msg.list.assign("EXDHIBYMZCAIREHTQAHQDYOFSNJDETCKOGOFFTXALCTPKNKVFLLLWXWDNTLLNUGDQXEETJPZYOMHMJRZFMTJUOVGUVIZWOFY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.380989575513);
    msg.setSource(6927U);
    msg.setSourceEntity(247U);
    msg.setDestination(6459U);
    msg.setDestinationEntity(45U);
    msg.op = 114U;
    msg.list.assign("HXIPGYOAISUDCDTJLIHPKLLPPIOSYRDWBQFPPRRWUCDAVXAHRYJFBAVDFNDXKCCNJTHMNUBAXQNEWETEGZLZDFBJSLMOHYPJENBOYTCNLRGDZMLBIEFXQORFXRWABFKHWIMDNTTLZZOWMYCWJTCUSQOEQJPOZKFHESGXSSKXJAVKTAQKDXZMPXFNIUHOMGLMVIPEAVSVEUJYRHZCRGSSWWCZUHQBETKLYG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.946278234287);
    msg.setSource(62908U);
    msg.setSourceEntity(231U);
    msg.setDestination(44368U);
    msg.setDestinationEntity(222U);
    msg.value = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.292000285207);
    msg.setSource(5100U);
    msg.setSourceEntity(207U);
    msg.setDestination(11749U);
    msg.setDestinationEntity(235U);
    msg.value = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.483941764393);
    msg.setSource(8240U);
    msg.setSourceEntity(77U);
    msg.setDestination(52189U);
    msg.setDestinationEntity(124U);
    msg.value = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.570505883127);
    msg.setSource(15115U);
    msg.setSourceEntity(141U);
    msg.setDestination(6226U);
    msg.setDestinationEntity(50U);
    msg.consumer.assign("PNPJEVRDXQFQHKLXJECBTKUZVXDGTUMHLCZKOLBAAZYTSRMUEYPMUUMBCI");
    msg.message_id = 35535U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.193933162417);
    msg.setSource(41383U);
    msg.setSourceEntity(2U);
    msg.setDestination(12224U);
    msg.setDestinationEntity(184U);
    msg.consumer.assign("PHCGTSSWOXLDIYKWGZEIAUPEMNWBBIHLRAGEMTBSTXECBNURCOGCYZFORHQXYQURKOAPVUQMXEQGLZQJMEVGFPMBKNFJNITFUIIXCNNQXWREYUTKVNRYAQDSPZ");
    msg.message_id = 3142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.605752976403);
    msg.setSource(9493U);
    msg.setSourceEntity(185U);
    msg.setDestination(50135U);
    msg.setDestinationEntity(210U);
    msg.consumer.assign("UZHRQHCKHBVSPPKRLSKDGBSYJPJCPFROUBQKOOJCDVWIKZTKGQOYIALAFJTEXXTDEQQEAFNQGUWZGNGMXZTTJKLABSJMSYPSESYFCKRBCQUWWVQVCZYFZPEURNDMLYLZOOACHIDUSNMRWNENPAXDWAAMVKGRVDTIZEWDYHPNICXHZJNMIMWTXEFIMTVBLHWNPSLIAHDGOFAQOGLOBETULGCMRSJBOBFFHEUNPKUUMXIDGLTBHRXIQXVYXZY");
    msg.message_id = 28197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.0995586107931);
    msg.setSource(17432U);
    msg.setSourceEntity(90U);
    msg.setDestination(56516U);
    msg.setDestinationEntity(177U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.822948524824);
    msg.setSource(35078U);
    msg.setSourceEntity(206U);
    msg.setDestination(35920U);
    msg.setDestinationEntity(188U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.13386351552);
    msg.setSource(50497U);
    msg.setSourceEntity(117U);
    msg.setDestination(38172U);
    msg.setDestinationEntity(247U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.57502804123);
    msg.setSource(31699U);
    msg.setSourceEntity(51U);
    msg.setDestination(6204U);
    msg.setDestinationEntity(104U);
    msg.op = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.171795366271);
    msg.setSource(7864U);
    msg.setSourceEntity(88U);
    msg.setDestination(19328U);
    msg.setDestinationEntity(70U);
    msg.op = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.930317304841);
    msg.setSource(28748U);
    msg.setSourceEntity(129U);
    msg.setDestination(13841U);
    msg.setDestinationEntity(118U);
    msg.op = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.526534280633);
    msg.setSource(17284U);
    msg.setSourceEntity(47U);
    msg.setDestination(2200U);
    msg.setDestinationEntity(212U);
    msg.total_steps = 200U;
    msg.step_number = 198U;
    msg.step.assign("ZAQZHLUUXZAKRYWTIOZSIGXQWFPYDQQUCFTAFDGSDCZVVYZWBUMUEXWMLICHNBICEAXKIR");
    msg.flags = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.852968431842);
    msg.setSource(47004U);
    msg.setSourceEntity(205U);
    msg.setDestination(45024U);
    msg.setDestinationEntity(83U);
    msg.total_steps = 198U;
    msg.step_number = 108U;
    msg.step.assign("MBNIVPWYJDZXGZHCCBEVYWOADJIFAGMVWUXFOZGVSUFKEMLFKOOVRKGLZRAQFHUYPNSGSKQIJLZYPIDJPOCEQOBHKEXBJABGLWULBVFXKFOMSAKPZWYJXHWELGMSCFPFIQVVUMORCNUECDTPNYNIQOVLHDSFUQZBXARIADTRMNZIRQTMYAJIDXOLUMSYSTTRWHPHBESBTCHJNTLDKRETEWQDXQXG");
    msg.flags = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.962964279044);
    msg.setSource(18353U);
    msg.setSourceEntity(235U);
    msg.setDestination(37212U);
    msg.setDestinationEntity(53U);
    msg.total_steps = 218U;
    msg.step_number = 66U;
    msg.step.assign("FRLJUUNTGPTESEFWXXCCXDSLSHZTGVJVJLPVEDYHMDCNAHIMMVKXHKLRKOCUEPOBWABIRIAZEIFGNCZAJQRUJFHXWYXRKKTXEMMDRFNFILAIICPZCKQUOUWBSSDUWMPIZQVFWIYOMRXQDZHSWPNZMKZOVBOOZNKD");
    msg.flags = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.681249108332);
    msg.setSource(57755U);
    msg.setSourceEntity(11U);
    msg.setDestination(43378U);
    msg.setDestinationEntity(202U);
    msg.state = 253U;
    msg.error.assign("BVESFMRTHKNYVLIQFWXMWPKAQTPYJIZCPMBFUPFZPRKSZGQQBZLJXKFMYXKMSLLGALJDOQZQUEJGWZCOHSHDKTWMGENAWGBWMPXAWGVCPOQCDVZNULYIHUGJIBUJEZOXYAZKCYEUVIHNFYWCRXHTJTRFIQZGIHWVEADOUTWSIBVEDXTCBVDEJREDDMFRDOVELXUKSPXORACHIOAMPRGUJNXBVLHNNRQFYPARO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.389419497236);
    msg.setSource(35032U);
    msg.setSourceEntity(36U);
    msg.setDestination(2449U);
    msg.setDestinationEntity(219U);
    msg.state = 113U;
    msg.error.assign("XZJBMRIDCBOPGRAUEZDTYHFOBIIFUWMPTKSOIQNXMDNIERZYIVSZHMLJJMJARAANLNDZVETOQHFFMRGQVXZSUBAMRUXKHYKOPNQSSHBDTSGLWLEKHNGYRTTRRCEAHLFQDCYLSHREQCWVICWEFJOYEUPUCHCTVVKEESTTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.711130097456);
    msg.setSource(30008U);
    msg.setSourceEntity(207U);
    msg.setDestination(63584U);
    msg.setDestinationEntity(91U);
    msg.state = 90U;
    msg.error.assign("YGRTSCKBOTXUUATHMGRCEUPNTJVFXKYDWQSTZAMQHFWUKHCLLMZUWJEVZSXAFTBWJKFQDOTNYFVBNPOVHOGOVFGVJRUBKOAHNIKGMLLBRLDAAMRRNYIPERIPKDEOEDOJQMQPCGZNZVQQASJTLXUWHEMVTICYXEIDJDKOCJXLFPDJUWGLUFSYDFBCXLRCWPEAQYHBNURDFQNWMZIPSNGEZKYIXIOQPHCSNBTKMSWLMGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.875823206725);
    msg.setSource(25997U);
    msg.setSourceEntity(87U);
    msg.setDestination(27326U);
    msg.setDestinationEntity(129U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.390692095711);
    msg.setSource(17728U);
    msg.setSourceEntity(70U);
    msg.setDestination(32609U);
    msg.setDestinationEntity(158U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.943921443215);
    msg.setSource(36590U);
    msg.setSourceEntity(85U);
    msg.setDestination(30520U);
    msg.setDestinationEntity(89U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.0554569687072);
    msg.setSource(28367U);
    msg.setSourceEntity(239U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(169U);
    msg.op = 156U;
    msg.speed_min = 0.241094650265;
    msg.speed_max = 0.293489040086;
    msg.long_accel = 0.451930678498;
    msg.alt_max_msl = 0.497674185951;
    msg.dive_fraction_max = 0.211239273273;
    msg.climb_fraction_max = 0.639690169586;
    msg.bank_max = 0.6716966049;
    msg.p_max = 0.510021873434;
    msg.pitch_min = 0.294214196799;
    msg.pitch_max = 0.358286063084;
    msg.q_max = 0.802502352836;
    msg.g_min = 0.661319433269;
    msg.g_max = 0.775212144967;
    msg.g_lat_max = 0.291015352001;
    msg.rpm_min = 0.213818410017;
    msg.rpm_max = 0.732876657314;
    msg.rpm_rate_max = 0.280788041792;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.148682834557);
    msg.setSource(34742U);
    msg.setSourceEntity(144U);
    msg.setDestination(60311U);
    msg.setDestinationEntity(245U);
    msg.op = 51U;
    msg.speed_min = 0.0800978940457;
    msg.speed_max = 0.92211673194;
    msg.long_accel = 0.353025145279;
    msg.alt_max_msl = 0.351627789406;
    msg.dive_fraction_max = 0.453622713938;
    msg.climb_fraction_max = 0.000930596439149;
    msg.bank_max = 0.0105790485892;
    msg.p_max = 0.0763075736027;
    msg.pitch_min = 0.0984923330148;
    msg.pitch_max = 0.743016648671;
    msg.q_max = 0.233835632426;
    msg.g_min = 0.622738539506;
    msg.g_max = 0.824735326074;
    msg.g_lat_max = 0.229807520058;
    msg.rpm_min = 0.0384116256301;
    msg.rpm_max = 0.736939017783;
    msg.rpm_rate_max = 0.0164766906422;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.786074631282);
    msg.setSource(16498U);
    msg.setSourceEntity(221U);
    msg.setDestination(35226U);
    msg.setDestinationEntity(149U);
    msg.op = 187U;
    msg.speed_min = 0.224826847;
    msg.speed_max = 0.75201047967;
    msg.long_accel = 0.204906408631;
    msg.alt_max_msl = 0.644949542802;
    msg.dive_fraction_max = 0.769170533568;
    msg.climb_fraction_max = 0.372788125601;
    msg.bank_max = 0.720486536013;
    msg.p_max = 0.566923221565;
    msg.pitch_min = 0.61283428714;
    msg.pitch_max = 0.143319047126;
    msg.q_max = 0.851802855044;
    msg.g_min = 0.0213326744261;
    msg.g_max = 0.5416400901;
    msg.g_lat_max = 0.241994165437;
    msg.rpm_min = 0.625926774566;
    msg.rpm_max = 0.895641516765;
    msg.rpm_rate_max = 0.920685803579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.416485464851);
    msg.setSource(31559U);
    msg.setSourceEntity(89U);
    msg.setDestination(2216U);
    msg.setDestinationEntity(158U);
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 33128U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.298806662191);
    msg.setSource(20874U);
    msg.setSourceEntity(54U);
    msg.setDestination(40700U);
    msg.setDestinationEntity(14U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.0513957226239);
    msg.setSource(65074U);
    msg.setSourceEntity(167U);
    msg.setDestination(38616U);
    msg.setDestinationEntity(177U);
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 876196027U;
    tmp_msg_0.messages.assign("KQBOYXETOKLBQIOAIOYNSKVWAVQTNMSJQDSRWEXVSRUHGHMOYAZCDCYEQXCARNLTSFCFVZTMRCFPXUUDUKGFSLPGKCZHFXESKYOJRMJNFDVOQLSIPNPGSIDCXOQAFZTWQDLGJUBPKQVA");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.108394620495);
    msg.setSource(43792U);
    msg.setSourceEntity(227U);
    msg.setDestination(56096U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.490852044697;
    msg.lon = 0.753652138144;
    msg.height = 0.56002400253;
    msg.x = 0.148358590606;
    msg.y = 0.555250822171;
    msg.z = 0.0374882547736;
    msg.phi = 0.615796209517;
    msg.theta = 0.795364846196;
    msg.psi = 0.41421487648;
    msg.u = 0.26546185352;
    msg.v = 0.966456181309;
    msg.w = 0.175451757587;
    msg.p = 0.470255369875;
    msg.q = 0.0181307874195;
    msg.r = 0.183339819535;
    msg.svx = 0.723258523471;
    msg.svy = 0.0659494275393;
    msg.svz = 0.372065449648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.438169675382);
    msg.setSource(47733U);
    msg.setSourceEntity(132U);
    msg.setDestination(6651U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.380782534193;
    msg.lon = 0.311616789268;
    msg.height = 0.495441873365;
    msg.x = 0.622883270239;
    msg.y = 0.79421776936;
    msg.z = 0.827267399999;
    msg.phi = 0.426773427711;
    msg.theta = 0.509080060116;
    msg.psi = 0.43143118727;
    msg.u = 0.0234445480788;
    msg.v = 0.575817549083;
    msg.w = 0.314200349622;
    msg.p = 0.170884923972;
    msg.q = 0.845516209174;
    msg.r = 0.949451120665;
    msg.svx = 0.0244113630546;
    msg.svy = 0.200268546428;
    msg.svz = 0.837752373404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.0750670989072);
    msg.setSource(37757U);
    msg.setSourceEntity(88U);
    msg.setDestination(49126U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.813438200325;
    msg.lon = 0.673070513532;
    msg.height = 0.0433435541244;
    msg.x = 0.199328102724;
    msg.y = 0.251585599165;
    msg.z = 0.924422238345;
    msg.phi = 0.53789097342;
    msg.theta = 0.0504715822812;
    msg.psi = 0.244099714246;
    msg.u = 0.0787099165683;
    msg.v = 0.782924370597;
    msg.w = 0.152221844243;
    msg.p = 0.874626400476;
    msg.q = 0.219532353071;
    msg.r = 0.532639905131;
    msg.svx = 0.0112948927245;
    msg.svy = 0.203238813747;
    msg.svz = 0.626601208174;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.662073683725);
    msg.setSource(50003U);
    msg.setSourceEntity(184U);
    msg.setDestination(48959U);
    msg.setDestinationEntity(130U);
    msg.op = 4U;
    msg.entities.assign("EUHTRXYEJKVCYIZRPSVOEDQATWGPWCFLEGFAUUCIIDRUHQXDEMGAQXBOQYVELZDTGDJAISGHFSBMNMLKEMOZWMTKYYYVWZQXBHFNPJFBDOPOZDVQWJDSNPWAOKGIRGFULBMVOZIKOWAPKSUSAXYTCRCFUZZLMRSLHQHFIP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.796161346628);
    msg.setSource(16059U);
    msg.setSourceEntity(162U);
    msg.setDestination(61561U);
    msg.setDestinationEntity(134U);
    msg.op = 130U;
    msg.entities.assign("GBIBAETVVSJJLHZMWIPORGPBBZCETFBMYRVKYBXRSIIRBNTXEWXHAAKYFVQIYZRLCEDKMUCIRVNPZGWIZPKDTRLMWUADISEANCXHIQLJUYHVCXPZGGYVJUOPFHLOKWFFNMDSEQZHGTQXHJHQCORWLYZELFNXSFRQDAYEXWUQCQUAMNKSDGEZWWBSGSGFPUDOAHRUKFOXWPXKYUVHVAKKJGNDJJSSIC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.886471075246);
    msg.setSource(45428U);
    msg.setSourceEntity(39U);
    msg.setDestination(58488U);
    msg.setDestinationEntity(39U);
    msg.op = 217U;
    msg.entities.assign("AELHYFPKMWQBWLFSAHGIASEOISEBMMXMJPFQWMBFXNATUPGNLYRUOVPCZDSWHHCUEQOQUHHZRYMJISGXBSYXMVPGIZXTYOVQPBNEJZHSJTCSFVHALXZWEQGGRYIWURGTOCKFNBDYPQXAIPPBRVLDOBHDCTUYRIUEUOKSKWWCAFVKAFMLNTMLOBAXNFIZTDJGBKDYVURJJTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.471350338136);
    msg.setSource(34531U);
    msg.setSourceEntity(254U);
    msg.setDestination(8481U);
    msg.setDestinationEntity(34U);
    msg.type = 196U;
    msg.speed = 11746U;
    const char tmp_msg_0[] = {103, 126, -59, -19, -88, 121, 35, 22, -110, 41, -82, -63, 69, -33, 122, 116, -41, 58, 38, 59, 115, -12, -44, 3, 78, -1, 102, 12, 87, -64, 62, -15, -29, 108, -28, -55, -50, 2, 0, 104, 50, -36, -24, 5, 122, -39, -66, -104, -106, -42, -15, -16, -17, 48, 104, -3, 95, -24, 55};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.33896758128);
    msg.setSource(40738U);
    msg.setSourceEntity(18U);
    msg.setDestination(29035U);
    msg.setDestinationEntity(197U);
    msg.type = 121U;
    msg.speed = 55624U;
    const char tmp_msg_0[] = {16, -65, -107, -78, 9, -99, 53, -11, -27, -22, -83, -100, 61, 19, 109, 76, -70, 65, -94, -126, -6, -17, 52, -72, 81, -60, -39, 51, 12, 11, -107, 33, -58, 114, -45, -128, 79, -3, 25, -35, 104, -17, 95, 53, 64, -4, 44, -113, -91, -40, -106, 84, -59, 60, 69, -30, 19, -94, 111, -90, -59, 12, 20, 3, -119, -88, -84, 52, -79, -101, -79, 19, 66, 37, -66, 106, -90, -76, -75, 40, 62, 56, -53, 111, 14, 52, -80, 16, -37, -1, 34, -68, 57, -10, -50, 119, 90, 50, 86, 119, 88, -87, 117, 94, 84, 105, -59, -108, 28, -2, -75, -32, 101, 111, -87, 101, -31, 81, -40, 25, -61, 36, 77, 17, -15, -94, 7, -89, -50, 102, 96, -54, -23, -9, -35, 12, -81, -22, 84, 54, 17, 45, 77, 49, 12, 58, -91, 119, 60, -79, -59, 111, -127, -7, 113, -3, 77, -87, -40, -68, 0, -29, 117, 118, -18, 41, -69, -112, 35, -108, 49, 35, -61, -56, 106, 74, 52, 111, -77, 51, 3, -95, -71};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.658146695775);
    msg.setSource(21584U);
    msg.setSourceEntity(29U);
    msg.setDestination(55607U);
    msg.setDestinationEntity(250U);
    msg.type = 125U;
    msg.speed = 32729U;
    const char tmp_msg_0[] = {-75, 49, 119, 26, 96, 19, 75, 72, -5, 6, -63, 113, 99, 33, -120, -5, -113, 69, -14, 59, 25, -11, -55, 50, -117, -61, 75, -108, -101, 2, 69, -125, -31, -119, 70, 99, 123, -73, -4, 17, 126, -19, -25, -56, 1, 63, 49, 61, -63, -1, 105, -115, 11, 80, -87, -82, 64, 3, 16, 25, -24, -32, -2, 86, 4, 94, 53, 5, -23, -117, -122, -10, -47, 123, 45, 60, 17, 11, -101, -25, 80, -98, 80, -86, 18, -127, 102, 40, 86, 1, -126, -48, 113, 10, 17, -24, -75, -40, 121, 44, -107, -5, 105, 111, -71, -121, -103, 101, -82, 47, 36, -5, 87, -86, -54, -34, 101, 66, 83, -38, -119, 41, 32, -38, 44, -47, 92, -16, -28, -111, 67, 80, 26, 106, -96, 50, 114, 52, 87, 105, 98, -90, -79, 124, 51, -102, 107, 74, 81, 25, 36, 76, 107, 88, 31, 82, 93, 40, 17, -89, -67, 70, -75, 96, 44, -19, 85, 83, -84, -72, -120, 13, 55, -5, 66, 5, 115, -61, -113, 95, -35, 64, -55, 125, -18, 50, 59, -51, -32, 6, 94, 87, -37, 114, 0, 94, -14, 94, 0, -64, 35, 108, -40, 40, 78, 39, 93, 14, 17, 3, 13, -2, 70, -1, 118, 92, 91, 36, -92, 30, 30, 6, -11, 97, 116, -92, 85, -57, 119, -42, 63, 4, 28, -110, 105, -14, -27, 110, 124, -42, -77, 11, 45, 74, -42, -24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.694612962592);
    msg.setSource(34864U);
    msg.setSourceEntity(155U);
    msg.setDestination(3879U);
    msg.setDestinationEntity(82U);
    msg.op = 50U;
    msg.tas2acc_pgain = 0.441187693981;
    msg.bank2p_pgain = 0.980878236866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.424737081808);
    msg.setSource(4851U);
    msg.setSourceEntity(176U);
    msg.setDestination(46934U);
    msg.setDestinationEntity(244U);
    msg.op = 200U;
    msg.tas2acc_pgain = 0.352677871273;
    msg.bank2p_pgain = 0.204647376768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.356203664086);
    msg.setSource(6991U);
    msg.setSourceEntity(220U);
    msg.setDestination(11629U);
    msg.setDestinationEntity(209U);
    msg.op = 182U;
    msg.tas2acc_pgain = 0.0533119274005;
    msg.bank2p_pgain = 0.0284348342411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.289863835407);
    msg.setSource(15122U);
    msg.setSourceEntity(223U);
    msg.setDestination(38074U);
    msg.setDestinationEntity(66U);
    msg.available = 487936828U;
    msg.value = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.514175469313);
    msg.setSource(33210U);
    msg.setSourceEntity(252U);
    msg.setDestination(55922U);
    msg.setDestinationEntity(158U);
    msg.available = 2761254296U;
    msg.value = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.514682257455);
    msg.setSource(39692U);
    msg.setSourceEntity(215U);
    msg.setDestination(58552U);
    msg.setDestinationEntity(200U);
    msg.available = 1161392892U;
    msg.value = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.306389206524);
    msg.setSource(3845U);
    msg.setSourceEntity(115U);
    msg.setDestination(5152U);
    msg.setDestinationEntity(73U);
    msg.op = 86U;
    msg.snapshot.assign("BNNCEODVCNVUHKCTQKJOPSKOEJCORFJTWWIUQJMETOZQSMMBZRNQTISHTPKTWXTURAEUVFZRHFJGLNGQZWHQNGRLBLLBFJIVGDJXKOXARXUYSICADWUBNWHFZVKED");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2119191005U;
    tmp_msg_0.messages.assign("HYDHXVTXYBJLRSDCPDZNSPICLQFHIQEGQTXOZPXXOPQEUDBRPECQUCFBIDHCYABJWKVFXZYGSNMVZIVAGQQHLAJIUYN");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.0323223223297);
    msg.setSource(55175U);
    msg.setSourceEntity(145U);
    msg.setDestination(13514U);
    msg.setDestinationEntity(12U);
    msg.op = 151U;
    msg.snapshot.assign("NZGFORFRYILOXVCVXSIHECCLPQDEFPVYWBPNOBNLKECJKEKYVVBDNKFMNDVOLLHQBFFZWNLDAZXALUJHQNNHFKQXTWQUM");
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 182U;
    tmp_msg_0.op = 222U;
    tmp_msg_0.possimerr = 0.926379027307;
    tmp_msg_0.converg = 0.479853242672;
    tmp_msg_0.turbulence = 0.110331736729;
    tmp_msg_0.possimmon = 137U;
    tmp_msg_0.commmon = 66U;
    tmp_msg_0.convergmon = 252U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.164818813462);
    msg.setSource(39580U);
    msg.setSourceEntity(219U);
    msg.setDestination(13326U);
    msg.setDestinationEntity(17U);
    msg.op = 193U;
    msg.snapshot.assign("VUDBTCXNYHMCXOVZUIDAJRYOWMIALASAKWXGSCMWZFLEIUDZSXYOWEHAHHFFPWUGEQQJKPQQONRQBH");
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.373095782113;
    tmp_msg_0.aoa = 0.194259245866;
    tmp_msg_0.ssa = 0.0526547198196;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.111026753276);
    msg.setSource(53627U);
    msg.setSourceEntity(223U);
    msg.setDestination(22112U);
    msg.setDestinationEntity(166U);
    msg.op = 148U;
    msg.name.assign("RXHSPITOUIDWNSHAZZAOYTWARQDNWOZIKBLCCFOGNLJGRUNRZPGGMYYSCFBDGRTECXKYTTIJHCQQRWVLUQNSSFFYMMIXFLMPJWHWPQEMUVOZGMOEYLFPUUWVHOMDVVJFPKOOEIULETGQQJHACBJVJBPPUCBZXFUBIALMRDDIJLNNLGXTSAAZFXVJVFBNKEZMQHBYUTVAPXBQWVCDSHGKSHZNSKEDRHTNRPCWIIYEXKYJEECKLOAXQKZDKY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.757732996012);
    msg.setSource(38176U);
    msg.setSourceEntity(92U);
    msg.setDestination(53400U);
    msg.setDestinationEntity(95U);
    msg.op = 138U;
    msg.name.assign("SKOTNJOGEXZGQNTLBWAYVNFLZCJIVWFBTFEZZBBDBNCIKHFKHCRXYGHYLXWIAHMYELHUXWKGDJWTSSQUPROCDOTKOWDTKFUMRLWNGQHDZUTXVUSGLEBRQANQHZVFCQPBJRXPM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.241972825823);
    msg.setSource(6096U);
    msg.setSourceEntity(221U);
    msg.setDestination(41852U);
    msg.setDestinationEntity(39U);
    msg.op = 12U;
    msg.name.assign("XUDHJBXEYTLIPPHYGIAJGXGXUHTGQWFQCIPEJDEBTSCFWRMYBPAYNRGORW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.837331239875);
    msg.setSource(12293U);
    msg.setSourceEntity(189U);
    msg.setDestination(56989U);
    msg.setDestinationEntity(135U);
    msg.type = 175U;
    msg.htime = 0.186223504216;
    msg.context.assign("AMIMDDCSLGCMPGZEBXKALNICOZNRUJWCYPOREATGBYIBDJTSJNDFATMRLWLVWFECKNCPHPLNGMYGOLQJOHXWKQWPIQRFBTISIYHRZINSCYPDWUUHVCLEMKQPSAHQWMYIEOQYZ");
    msg.text.assign("RSIJANYBMNWBVKHFDUAWSRGGMYVHUQBVJGNMLKDZVHIISHMSQILIATKMSGUUXEPDEFTLQZNVAHLGKOUYEPQVJLZIYGCSXTIKKFPWXZOPCEXXKNHVGPRVMKAOCACWPECOBSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.236261711045);
    msg.setSource(25486U);
    msg.setSourceEntity(85U);
    msg.setDestination(36860U);
    msg.setDestinationEntity(42U);
    msg.type = 4U;
    msg.htime = 0.249752030334;
    msg.context.assign("SZYCBAYZJWHQUOTXHLXKACNXSMWTNDAUJJBECHKAQROMBMFBHYZJGXTUICJNOVWYWBABREFKBWTJRPLLXXLJGLUCMIGEZFRCZLMNMJVFFZZHEKGNOUTCJERYHOTVVQYKAQTLPIDANJPLIKWMLYABXFYHDISWHKGRPVSMKPXDMSIIITSEGWYSUIVPQPVRFDU");
    msg.text.assign("EBPLZADIRNYARRKKUMESFBRDOPXEAVKSLKDFXJQHILTPKXRGHUYTQAXPRTTBPMRLTOLZIABIZXQICWWMHVKUZJCGLLSDNMVVHAGCVUGKFVBGMMNNJYCFBNWLXXHNJOBTWSYEKJKWSWAAHTAYYIETIQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.552343921537);
    msg.setSource(40983U);
    msg.setSourceEntity(201U);
    msg.setDestination(10136U);
    msg.setDestinationEntity(55U);
    msg.type = 65U;
    msg.htime = 0.275812237804;
    msg.context.assign("YBKHPMSBKZNDZGNJBGUXFIEMPDMGCSOTCRXBEMQQHMNPAPOQMLQQBXRJZZVRDRFYZDTVAXGXUWLUGFCUCDA");
    msg.text.assign("HKIGYPRCQJUTMWSXUQJTDLCZEIABLGTGDVRBEQXNMJIAFIQUMBXIFYPNBMFROPUVVJFQKNSJSURZOTNLWSTTJHVCLSJCIJYOGLIFZZGRDYZNTLWQMQBAEPLXCXQCXPYROKADEXMPHAMHQDEKYRISUVSKRFMDZUNPKPYSHBLQCMZEGRGOEFPWDVXDDBTYNASHNXULRBIL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.961297831216);
    msg.setSource(11127U);
    msg.setSourceEntity(46U);
    msg.setDestination(28965U);
    msg.setDestinationEntity(22U);
    msg.command = 141U;
    msg.htime = 0.556410650872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.806833920116);
    msg.setSource(26852U);
    msg.setSourceEntity(153U);
    msg.setDestination(64669U);
    msg.setDestinationEntity(222U);
    msg.command = 26U;
    msg.htime = 0.25473043684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.288804193151);
    msg.setSource(22955U);
    msg.setSourceEntity(200U);
    msg.setDestination(7668U);
    msg.setDestinationEntity(142U);
    msg.command = 105U;
    msg.htime = 0.717497489208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.919915209336);
    msg.setSource(19458U);
    msg.setSourceEntity(152U);
    msg.setDestination(62895U);
    msg.setDestinationEntity(116U);
    msg.op = 119U;
    msg.file.assign("QBTIPQEBYGHMZPOKYGXULYKNKLIFPUIAITIWGSPFOQUCDPFXRATWZMSPKLNGKMOSORMQXMSCEJCDUNDXWKAZLYRGQDSDKJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.0522309206235);
    msg.setSource(12311U);
    msg.setSourceEntity(123U);
    msg.setDestination(14576U);
    msg.setDestinationEntity(8U);
    msg.op = 59U;
    msg.file.assign("XBFRYJMGJDBGFDRLEAKZSZVCOIGYIJLRAAXKJBKHXSYQPKPJOCMNQEIRHNWWNGDNFMHMQPWNUXPTCZLSQSIYECUCGHOVVMAUWRSQPSUDKZWX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.81462837924);
    msg.setSource(39392U);
    msg.setSourceEntity(88U);
    msg.setDestination(31204U);
    msg.setDestinationEntity(225U);
    msg.op = 13U;
    msg.file.assign("KLLYQCUICRBKYJHTZDSPOCYFOGHZXFQXSZIDBNFCDUTLWLAPBQMSOCGYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.0254325488087);
    msg.setSource(63763U);
    msg.setSourceEntity(148U);
    msg.setDestination(31341U);
    msg.setDestinationEntity(51U);
    msg.op = 4U;
    msg.clock = 0.232746463114;
    msg.tz = 91;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.84369669495);
    msg.setSource(59992U);
    msg.setSourceEntity(187U);
    msg.setDestination(39972U);
    msg.setDestinationEntity(103U);
    msg.op = 197U;
    msg.clock = 0.0342260981818;
    msg.tz = -81;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.0626520566795);
    msg.setSource(47385U);
    msg.setSourceEntity(141U);
    msg.setDestination(15132U);
    msg.setDestinationEntity(92U);
    msg.op = 57U;
    msg.clock = 0.285879848068;
    msg.tz = -82;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.0669069898641);
    msg.setSource(58012U);
    msg.setSourceEntity(77U);
    msg.setDestination(54589U);
    msg.setDestinationEntity(128U);
    msg.conductivity = 0.0439344265902;
    msg.temperature = 0.565213723075;
    msg.depth = 0.741990667061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.0457182113044);
    msg.setSource(27134U);
    msg.setSourceEntity(53U);
    msg.setDestination(5452U);
    msg.setDestinationEntity(54U);
    msg.conductivity = 0.0202020189918;
    msg.temperature = 0.223049050553;
    msg.depth = 0.375322177308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.0486020931067);
    msg.setSource(40423U);
    msg.setSourceEntity(224U);
    msg.setDestination(26450U);
    msg.setDestinationEntity(215U);
    msg.conductivity = 0.404427454734;
    msg.temperature = 0.504182166136;
    msg.depth = 0.550349543591;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.991640893846);
    msg.setSource(25199U);
    msg.setSourceEntity(180U);
    msg.setDestination(56658U);
    msg.setDestinationEntity(40U);
    msg.altitude = 0.46677264425;
    msg.roll = 48798U;
    msg.pitch = 11279U;
    msg.yaw = 42784U;
    msg.speed = 28417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.341483958113);
    msg.setSource(35296U);
    msg.setSourceEntity(229U);
    msg.setDestination(56199U);
    msg.setDestinationEntity(158U);
    msg.altitude = 0.600500265717;
    msg.roll = 27048U;
    msg.pitch = 22282U;
    msg.yaw = 60030U;
    msg.speed = -2648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.496609538735);
    msg.setSource(13207U);
    msg.setSourceEntity(59U);
    msg.setDestination(1657U);
    msg.setDestinationEntity(179U);
    msg.altitude = 0.139140587324;
    msg.roll = 62264U;
    msg.pitch = 49923U;
    msg.yaw = 62427U;
    msg.speed = -13200;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.13539440373);
    msg.setSource(53622U);
    msg.setSourceEntity(253U);
    msg.setDestination(57034U);
    msg.setDestinationEntity(203U);
    msg.altitude = 0.621937610957;
    msg.width = 0.735322338435;
    msg.length = 0.744000758045;
    msg.bearing = 0.170679126153;
    msg.pxl = 16425;
    msg.encoding = 74U;
    const char tmp_msg_0[] = {-63, -107, -15, -101, 11, -36, -72, -58, -63, 15, 93, -106, 38, -84, -11, -119, 122, -11, -1, -29, 48, -53, -8, 20, 110, -45, -39, -97, 56, -13, -98, -22, -72, 110, 35, -8, -121, 0, -72, 11, 70, -6, 60, 47, 2, 120, -105, 67, -111, 109, 112, 10, -31, -114, -90, -121, 48, -41, -28, 5, -84, -10, 26, 94, -48, 51, 19, 26, 113, -51, 120, 17, -122, 52, 30, 26, 51, -25, -63, 49, 102, 71, 89, 38, -38, 46, -80, 47, 33, -28, 16, -116, 49, 117, 2, 84, 92, -98, 83, 110, -78, -114, -108, 35, 100, 45, 30, 125, 56, 14, 95, -117, 79, -44, -123, -4, 5, -10, 31, -10, 56, -54, 109, 31, 31, -12, -115, -62, -20, -11, 87, -12, -103, -70, 124, 1, 116, -26, -21, -89, 124, 122, 99, 82, 87, -49, 92, -71, 92, 118, 26, -7, 88, 68, 71, -39, -54};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.26579975568);
    msg.setSource(48934U);
    msg.setSourceEntity(28U);
    msg.setDestination(53156U);
    msg.setDestinationEntity(137U);
    msg.altitude = 0.735569132891;
    msg.width = 0.0722565356647;
    msg.length = 0.602303885435;
    msg.bearing = 0.266240370322;
    msg.pxl = 10875;
    msg.encoding = 66U;
    const char tmp_msg_0[] = {125, -106, 67, -77, 119, 0, -28, -58, -104, -76, -54, -100, 19, 100, -27, 105, -81, 19, -28, -40, 32, -106, -87, -59, -44, -82, 12, -101, 50, -86, 53, 79, -79, 52, -58, -103, 23, -113, 73, 61, -96, -18, -42, -20, -62, -122, 69, 22, -11, 20, -96, -9, 54, 67, -90, -104, -93, 33, -70, 22, -65, 49, 18, 114, 17, -95, 19, -105, 65, -74, -90, -31, -62, -61, 82, -123, 62, -122, -39, -15, 80, 31, -122, 33, -25, -27, 122, -114, -120, 107, 75, -32, -35, -6, -127, 17, 18, 53, -107, 126, -50, 99, -23, 63, 60, 88, 21, -53, 8, -50, 2, 115, 29, -84, -102, 55, -16, -73, -105, -57, -108, -56, 122, -87, -28, -98, 15, 75, 86, -103, -16, -75, -52, -28, 7, 92};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.29022680573);
    msg.setSource(27136U);
    msg.setSourceEntity(29U);
    msg.setDestination(21390U);
    msg.setDestinationEntity(93U);
    msg.altitude = 0.940447823338;
    msg.width = 0.769873141284;
    msg.length = 0.561475986606;
    msg.bearing = 0.0310206387666;
    msg.pxl = -29533;
    msg.encoding = 163U;
    const char tmp_msg_0[] = {50, 92, 102, -50, -62, -121, 15, -19, -81, -94, 12, -74, 44, 107, -1, 108, 39, 67, -118, 81, 63, 79, 83, 3, 4, 25, -113, -40, -113, 30, -37, -91, -79, 8, -23, -57, -24, -22, 116, 116, 24, -100, 7, 67, -5, -63, -51, -93, -50};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.930164723211);
    msg.setSource(41274U);
    msg.setSourceEntity(243U);
    msg.setDestination(30472U);
    msg.setDestinationEntity(237U);
    msg.text.assign("JXSTVTDVQXFTDFYHUWPGMVXZCBOSIKLRVRDPPSMTGDDW");
    msg.type = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.654811383207);
    msg.setSource(63710U);
    msg.setSourceEntity(220U);
    msg.setDestination(13916U);
    msg.setDestinationEntity(41U);
    msg.text.assign("OYGAREQUJTFXFOOCQANUXRZXDRXYDASQBXKAQRNYUBDJFKBJMHAVRLZEGNJOPHGWTWIVVWNUGFNUHOIKKWQMBTJPWKEUQUGVXIMHTAJHIDDDLLPYVVGLDSXEEBYISZRQOFIFGJOVBFDWZMUAFCHZOPWLPXWSMZTFMLSSGYZJWPM");
    msg.type = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.43048325418);
    msg.setSource(37957U);
    msg.setSourceEntity(134U);
    msg.setDestination(38720U);
    msg.setDestinationEntity(210U);
    msg.text.assign("ZDUMSVRXQYVXZBHAKNDGACWADFISMKSAVWBEAMZKLIJPSLNROGSVZQAXTTEQRUZPJUIJBPJTBUTVPIHSGCJUTWGTGSRGYXEONUTSUXOGVLFODEEIRZLWNVCQMMBDSAAEZOAGKYTOOAKJZCDCDWVVZTRBYDFLQU");
    msg.type = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.735138738953);
    msg.setSource(11440U);
    msg.setSourceEntity(204U);
    msg.setDestination(40631U);
    msg.setDestinationEntity(83U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.764243053585);
    msg.setSource(4539U);
    msg.setSourceEntity(7U);
    msg.setDestination(14413U);
    msg.setDestinationEntity(38U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.0936484990004);
    msg.setSource(13749U);
    msg.setSourceEntity(78U);
    msg.setDestination(9909U);
    msg.setDestinationEntity(86U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.962249433048);
    msg.setSource(11560U);
    msg.setSourceEntity(120U);
    msg.setDestination(38247U);
    msg.setDestinationEntity(4U);
    msg.sys_name.assign("ERBKZXGFONLZTIHRLGKIUHNVSOAHQXHOKBDIUWSVSUHCARTCOGGNEFWJPCOEAWJKHBJUDSNJKOXJUAZWIVQBCBXHDUSGPOFLTKVGCMMWXLR");
    msg.sys_type = 216U;
    msg.owner = 44930U;
    msg.lat = 0.163653269867;
    msg.lon = 0.0335413611321;
    msg.height = 0.880129186838;
    msg.services.assign("DLQUNZACDAEDJGKGLBLTZOPWCQHYXFZXPHSJOWMOEYKTKOVRTMVFTNLWVPDJMXGHQXRTTEMAVRIZOWBIMJIASUOQACDBXEMQRFNJSREMBLBMUIIHYJCQHQPRDMIYFZAIFDMGCQKVAIUNKUYYJINVGWCYWLCPQGHTETVSGBWEJHHYOAFKWZKHTSUOUVWHASXJRRSNSXGCNKFZTBJPKGBFRXZWQCYYNPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.918772658469);
    msg.setSource(24298U);
    msg.setSourceEntity(233U);
    msg.setDestination(64732U);
    msg.setDestinationEntity(176U);
    msg.sys_name.assign("KAWIKTWOYAQLJZBUBIXOGNBJBEDVSJJSNOHQBCDAXXVDIXZTTHFSXCMFDPQMTUMCZFGCULEHNTYZUTMCYNRRVKHDKYJISZVPGEVXXGINUWMCKDQZEOSLILUHPEWYKSVNGGJKQJMIFHTPPYKIELBFVOGPOLDKDDLSDLMOCRNGAPUEXMCZWSRIRUABGCPTWHMHOVELZAQZ");
    msg.sys_type = 161U;
    msg.owner = 19625U;
    msg.lat = 0.10433842779;
    msg.lon = 0.288945227355;
    msg.height = 0.90379095516;
    msg.services.assign("XNYLNVZPBSTXAHDPXGSSBNJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.463270834177);
    msg.setSource(64421U);
    msg.setSourceEntity(24U);
    msg.setDestination(23866U);
    msg.setDestinationEntity(175U);
    msg.sys_name.assign("KDDRMRWIVMXKSJHPSSSQUOZFVKAMAYXHUQFFKFZZGSLSDRIFEVLNAUGNOGUIJILTOKJAARTRNJDITJXOBZCASTCKIPYUFBZRYJAHWTVVSBQWCPVJPQLCTEZEEYWJYJQDBRPSZGCXBWHHBUCALUVCZOMGNNXZGDUTZNXPMYMLFUEFYBLQOUHLNEGFCIEYYBWDOEKQCRNEWMVTHOGDEAXLWGFPXHKWHIPKCIYWBJIBQNVS");
    msg.sys_type = 211U;
    msg.owner = 39084U;
    msg.lat = 0.175827990675;
    msg.lon = 0.528468453169;
    msg.height = 0.99239224645;
    msg.services.assign("BDDTHBKWIVYUHIBWEFYBYFINHQZSTRSAZMNTPCNUMTMBZLSCODMMLTISYFMGREJPHTDQVSKUXCWMFQBRAWGTNQLGREGNPSRLSARJJFQFBYTLNVPMOJGCCARYPUBWDVOQOVELKJQBHDAEXIJVALKHKMXKIGXXFXPIAUOLDJUYCCSZNDGXEYKZVEJSCHGQXWOHAKUUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.311208151355);
    msg.setSource(50709U);
    msg.setSourceEntity(177U);
    msg.setDestination(54104U);
    msg.setDestinationEntity(220U);
    msg.service.assign("FMQQUJIABREIRDEAMTRDSLLJNFZOTQGWDVKOYKUXKLPRIFIKCHSDFHISLRWUSDVRM");
    msg.service_type = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.293555611713);
    msg.setSource(48713U);
    msg.setSourceEntity(234U);
    msg.setDestination(31449U);
    msg.setDestinationEntity(201U);
    msg.service.assign("FVHJKYDZWOTXAQQJZYRFKMGWQEYYZLZZLSJZJKIFHCZAYFKDRATIBPHPDBYVNPVCLLYDLCCTNSESGVBAXXKOCDIHIUDRBQPDWSEN");
    msg.service_type = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.0275727893616);
    msg.setSource(42276U);
    msg.setSourceEntity(99U);
    msg.setDestination(22697U);
    msg.setDestinationEntity(251U);
    msg.service.assign("KIDHHLAESBMZJBGVQUMWWTRKDOZJCEQACISELNNRELUOWQJSGWTEATWPV");
    msg.service_type = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.594239112284);
    msg.setSource(19506U);
    msg.setSourceEntity(150U);
    msg.setDestination(49398U);
    msg.setDestinationEntity(232U);
    msg.value = 0.743832077303;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.271320433139);
    msg.setSource(5695U);
    msg.setSourceEntity(143U);
    msg.setDestination(44407U);
    msg.setDestinationEntity(124U);
    msg.value = 0.205318818857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.739572720509);
    msg.setSource(3693U);
    msg.setSourceEntity(234U);
    msg.setDestination(65009U);
    msg.setDestinationEntity(201U);
    msg.value = 0.518530656329;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.511922872232);
    msg.setSource(41292U);
    msg.setSourceEntity(194U);
    msg.setDestination(51580U);
    msg.setDestinationEntity(112U);
    msg.value = 0.681113623135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.290182237586);
    msg.setSource(62602U);
    msg.setSourceEntity(157U);
    msg.setDestination(10109U);
    msg.setDestinationEntity(103U);
    msg.value = 0.441448500788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.542632724348);
    msg.setSource(27491U);
    msg.setSourceEntity(225U);
    msg.setDestination(27195U);
    msg.setDestinationEntity(133U);
    msg.value = 0.264932885546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.163256564967);
    msg.setSource(64633U);
    msg.setSourceEntity(183U);
    msg.setDestination(45444U);
    msg.setDestinationEntity(167U);
    msg.value = 0.878221520706;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.74170661945);
    msg.setSource(60937U);
    msg.setSourceEntity(220U);
    msg.setDestination(60899U);
    msg.setDestinationEntity(183U);
    msg.value = 0.317602886346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.142244986151);
    msg.setSource(25035U);
    msg.setSourceEntity(149U);
    msg.setDestination(6617U);
    msg.setDestinationEntity(148U);
    msg.value = 0.65677081931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.855712543322);
    msg.setSource(30015U);
    msg.setSourceEntity(91U);
    msg.setDestination(11198U);
    msg.setDestinationEntity(240U);
    msg.number.assign("JTVEWQBKTGWJULUKDOTLEJNACPWGLFUSXNKEMPDYSAXVZAENYDPVQWSBWNNHISEROGBHBLROQTCMPLOT");
    msg.timeout = 34229U;
    msg.contents.assign("NUAMGMPZDVBKKLJKFNIROOQUVAFYFYWRYSBRRQICLZVTTDOJZSAXQOSGNYKBIGZSTNNLDO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.420841490253);
    msg.setSource(34366U);
    msg.setSourceEntity(254U);
    msg.setDestination(18699U);
    msg.setDestinationEntity(1U);
    msg.number.assign("KSIECAVIKVDBNPYXJDEJEOFQCHBHAWVWPZFONGUPGIAGNKZQCMMFBYWKIVHVCJNBMYWQATIULCLLQHNZASLHBROFUMRDEUFTHUKQPXRLFPVWDNOTHUYZLOKOPERINAASAKQTNRZXBRHIJTKLWDPOQCJFGWTTKLPYECUJXQCZEDWGFXPSCBIEEDSYNDVBKM");
    msg.timeout = 25306U;
    msg.contents.assign("WUQQRGWXIJGIRXBKVRCJKUSXTXAMJCUJZHSVQEOFICRKENLYLSSATXZLMZHYUHUGBBIJCDMKJUJONAPHAHHEPDVDYLKFEHCXYPLFROORMTWPRBKCSZLSNAJIVORBXWZUKQDPZWPWIFHDFVSTQQAEVJKGQLPLCYFZTEKGPFZVOSFMOXYHBEOIGUPNQWTTAYLLAWCGEFOGAUCRHZDNRKBVEFVABXNIIWDNTPYZSD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.198221368925);
    msg.setSource(40766U);
    msg.setSourceEntity(84U);
    msg.setDestination(51428U);
    msg.setDestinationEntity(249U);
    msg.number.assign("WEXYYDGJKVG");
    msg.timeout = 7209U;
    msg.contents.assign("NWRJQEBMQIODNKNHQSHPZMEYYEXNNSTNKYVCUFUJJETTOIQXDGXIRGULBKZKID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.805585649305);
    msg.setSource(34665U);
    msg.setSourceEntity(114U);
    msg.setDestination(24426U);
    msg.setDestinationEntity(185U);
    msg.seq = 4170857228U;
    msg.destination.assign("EGHHMYKXNSTNPWRJFRCGLBOZMKFMPEWUZAIWTDUUEZBNVQLAPARETKYZQAWVUBVPEKGSAQSGLPIZXBSEJWMDWQCIUHDELTQXANYMOPJYUKCNCBIRZVUPZGXYHTQSFVADVFTIYROJMLSEMORWMLKBDXRZTSDCKNMFSYNXNGWXFHLUOQACXILWPOFGGATFHHOOBVVJJHMLVGNRHZHBIEAEXXDUSGFJJBDIRKKOTDCPR");
    msg.timeout = 55406U;
    const char tmp_msg_0[] = {104, -41, -69, -40, -125, 119, -2, -25, -94, 45, -73, 29, -37, 85, 102, 20, 98, 81, 45, -61, -108, -77, -104, 42, 112, 26, -109, -86, 84, 80, -43};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.413124197399);
    msg.setSource(17044U);
    msg.setSourceEntity(2U);
    msg.setDestination(1242U);
    msg.setDestinationEntity(140U);
    msg.seq = 3109442273U;
    msg.destination.assign("SUQLVKXQBOPBELDAULMFOXHLXEKGJPVAFHPQRUHISSPLAJGMMAKQXNLJJYVS");
    msg.timeout = 29115U;
    const char tmp_msg_0[] = {96, 95, -71, -22, 68, 15, -49, -83, 47, 24, 87, -9, -98, -123, 59, 102, -87, 45, -19, -97, 56, -82, -82, 116, 60, -49, 123, 126, 74, -81, -106, 85, 93, 55, 57, -60, -118, -32, -116, 49, -128, -110, -126, -115, -85, -63, -21, -37, 2, -102, -35, -126, -63, -8, -9, -73, 27, -91, 118, 80, 14, 6, -3, 41, -89, -2, -79, -10, 63, -42, -112, -123, 79, 3, -121, 45, 81, 18, -97, 95, -85, 30, 97, -120, -43, 8, -39, 73, 104, -22, -12, -45, 75, 74, -114, 77, 33, 102, -23, -75, 26, 17};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.325479666418);
    msg.setSource(20255U);
    msg.setSourceEntity(161U);
    msg.setDestination(43455U);
    msg.setDestinationEntity(88U);
    msg.seq = 589394507U;
    msg.destination.assign("HGWDFOCBOQPRJQVIIWSPGFOBSXKESNWVMDFTGRKIKYQBLIDOXCNIHGVUQVIMEGFEJPFVAMCATSZYZEOBDPNASYLCOBAZRRRBFYKCNIDFFHXZCAYYHUJRGLLBBMQDPTEXEXLLKWUEICOBVLGH");
    msg.timeout = 1940U;
    const char tmp_msg_0[] = {-119, 126, 102, 41, 3, -43, 94, -67, 73, -13, 66, 61, -128, 111, 66, 80, -46, -69, 90, 45, 14, -90, 114, 83, -49, -25, -113, -37, 19, -27, -76, 50, -50, -56, -35, 9, 105, -2, 2, -56, 25, 37, 74, 7, 34, 34, 70, 87, 69, 70, -115, 110, 23, 67, 77, 87, -13, 111, -40, -39, -72, -71, -18, -49, -52, 2, -26, -44, 48, -32, 5, -62, 32, -7, 101, 32, -41, 81, 64, -27, -23, -85, -43, 64, 122, -26, 12, -12, -60, 14, 9, -120, 103, -96, -74, 13, 108, 37, -80, -103, 57, -89, 54, -5, 109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.791193107771);
    msg.setSource(9539U);
    msg.setSourceEntity(77U);
    msg.setDestination(18525U);
    msg.setDestinationEntity(74U);
    msg.source.assign("NSMUFDGDXYAVQBDMLVJQTWPIWKHSHLPBAMAVZYBMZCRMGJHFGJAXSLHNIOOIPLIZPYAUWQXHFUGJNYPJCXDOQZHTERPZLQKVGZLZJJKJXCUERKLEHWCEEFWOITTXUDGVCBXAKESPU");
    const char tmp_msg_0[] = {5, -111, -126, 122, -42, -72, -35, 60, 28, -44, -127, -90, -59, 52, -99, 62, 5, 68, -88, -55, 125, -87, 19, -98, 40, 116, 111, 46, -97, -116, -4, 84, 100, -62, -16, 13, 73, -43, 70, 42, 113, 82, 121, 116, -85, -76, -40, 86, 111, 44, 48, 120, -29, 110, -123, -60, -59, 83, -29, 77, -46, -115, 32, 10, -127, 18, -32, 120, 46, 18, -29, -6, -48, -8, 108, -67, -71, -6, 55, -23, 35, -20, 29, -67, 12, 35, -87, 63, 82, -9, -103, -91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.528972006153);
    msg.setSource(47792U);
    msg.setSourceEntity(183U);
    msg.setDestination(25159U);
    msg.setDestinationEntity(231U);
    msg.source.assign("KJHAKCUATSAQFZGOZLYLMWXVHKMFIOTWSVFHDLCMHOUYXLLGWNLUREUEZBRDMOYEHMHZABSGYOXEETIKRX");
    const char tmp_msg_0[] = {125, -36, -125, -83, 58, -56, -93, 95, 104, -67, 72, 57, -47, -50, -98, 121, 70, -6, 50, 76, 96, 28, -55, -57, -104, 52, 42, -116, -108, 120, 80, 37, -50, -125, -52, -64, 37, 98, -45, -98, -27, 36, -121, -73};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.615692770246);
    msg.setSource(22063U);
    msg.setSourceEntity(101U);
    msg.setDestination(54001U);
    msg.setDestinationEntity(214U);
    msg.source.assign("OHDDCGJXGPKLASLOYNGCBINRXDFALZJBTAYPOMUHKISBQVNZZUPNTVLFWOXETQEYOZDDGWNKYTGSAQVXPNBAFEVFKJAQCVXCQDCXOPZPRIZJULVTDBBFYQQKCSTSUTAJHNFRCMAWKTFULBFIVWEUPOK");
    const char tmp_msg_0[] = {-50, -39, -18, 82, 27, -116, 64, -118, 35, 77, -102, -86, 51, 101, -28, 14, -51, -54, 6, -121, -63, 56, 80, 64, 108, -88, -16, -98, -65, -78, 63, -97, -94, -42, -28, 72, -65, -17, -113, -113, -110, 96, 56, -42, -27, 3, -23, 125, 107, 13, 82, -22, -33, 58, 78, 53, 30, 63, -18, -56, -119, -32, 41, -30, 21, 98, -52, -26, -81, -34, -122, 83, 47, -6, -38, 10, 96, -3, 46, 68, 83, -128, 124, 73, -55, -113, -111, -101, 76, -40, 98, 101, -41, 74, 86, 8, 100, 21, -13, -70, 78, 3, 116, -89, -107, 37, 24, -51, 50, 119, 29, 45, -65, 79, -28, 61, -51, -97, 112, 44, -128, -41, -80, -115, 60, 125, -7, 76, -18, -81, -77, -60, -41, 55, -115, 32, 86, -11, -43, -23, -114, 89, 106, -88, -5, -46, 90, 7, 87, -5, -82, -43, -29, -22, 46, -58, 71, 48, 114, -82, 64, -75, 101, -98, 98, 117, -31, 73, 61, 28, -3, -118, 120, -95, 23, -109, 36, 109, -71, -81, -87, -104, -46, -7, -97, 11, 55, 68, 40, 56, -44, -126, 100, 61, -54, -109, -1, -48, 80, 73, -80, -60, -62, -100, -114, -22, 51, -46, 61, 45, -37, 29, 77, -31, -61, -83, -86, -61, 87, -64, 81, -24, 85, -50, 11, 68, -15, 80, 80, 94, -78, -12, 6, 23, 26, 112, -73, -70, 45, -96, 69, -19, 101, -121, -72, -90, 84, -9, -125, -99};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.293664425116);
    msg.setSource(56101U);
    msg.setSourceEntity(108U);
    msg.setDestination(34523U);
    msg.setDestinationEntity(155U);
    msg.seq = 2148868291U;
    msg.state = 160U;
    msg.error.assign("PTEUUCNKUXEGNGZSASWRHYJBCXYVELDPCAIEQWPCPYGHFZIPVXYUQEZRDSBFNCDQZCIIEHFSXAKDVIRVMMDOAWGVGASJZTIINYJOHBHLPLNYFIFHWBCWRJDBMSSRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.604876293123);
    msg.setSource(48364U);
    msg.setSourceEntity(139U);
    msg.setDestination(31299U);
    msg.setDestinationEntity(168U);
    msg.seq = 637167462U;
    msg.state = 107U;
    msg.error.assign("AIEGPMNXYMDMQKWNFRGHDUHHEPHOIXGAFXTOTDPKAJOVNHGKZYURZYZINOEBXZKWGMTYBOJIUULAENLSXVSWUFXUWBEDQSGMSLMSYKKPHTADCSUVXSNODXWBWLBTYJIPBPCCL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.0931751277448);
    msg.setSource(35698U);
    msg.setSourceEntity(10U);
    msg.setDestination(59626U);
    msg.setDestinationEntity(13U);
    msg.seq = 531707601U;
    msg.state = 120U;
    msg.error.assign("ADOYUILGJQKFNPKUZXABTCBFDLPJJNOCLQBMSEMVZSTVMYBEFCAUEHDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.228086027424);
    msg.setSource(27652U);
    msg.setSourceEntity(139U);
    msg.setDestination(7854U);
    msg.setDestinationEntity(81U);
    msg.origin.assign("ZNKTMUFHKFITIQGOXFJQCJXVXQXU");
    msg.text.assign("KMBHKAWCJLQSGKGPXCDDHOU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.341359655574);
    msg.setSource(12649U);
    msg.setSourceEntity(240U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(48U);
    msg.origin.assign("DEZBZZIQJWWSNGOOWFACTMXRFWTEFRPRIDKLVUSPJRUNKGTISMAICQNHUFWYJNVXRGXMWEFEPJCWVYJMOLUFEIUSIUNHRGDPZHXVKQAYXDUMLVXYYYUBBD");
    msg.text.assign("OUKWXBFTWHFXPMMQJCNQSVMENFJZPSIFJXUBTGUCDYFGEZHYKEASRQLRTRVAXQQODSVQRCNJHYYAHQBVIWPBRXCSAFMSWZVEGENAYZVPXSTNGVFRZXOVQKLRYBCLUAHEAPNVOFHGXYPIZDGJOBWKRDCWIDUIXZTFPGBEDOTCKGTKOLCETLAXALCLCWLORKYMLPEQDGFTIHYJIITMBZYUVPUNNKDKHEQDOMWJMJZJSAMBSOHPNBDNWIZLH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.349710018044);
    msg.setSource(6652U);
    msg.setSourceEntity(37U);
    msg.setDestination(57296U);
    msg.setDestinationEntity(124U);
    msg.origin.assign("HXGXCNQWFFPMMZMCQODUWWCNGJDKLVOPEERQGATTITVQTQZSKFVGRJDWHUPFGJZJRTXOGBDPBDLLZKOWIWACVSCLOTNNUVXVNRWAVKKYSUZACIIMMREXEUBOYAVBPJVEMODTALHBZOQWOFUSYPXSQLZHHHIBISBYDHCJBPCAGFNKYAJSNBUDYRZEGRJMALXWNILPNONUCYLBEHPIQFDDMJEEGWFQUZTISTRRLKITEXKHAFGK");
    msg.text.assign("ZPUOMYHHCXYQDBSNNDMRPJFXFWAGNRLQQFKBGQCVLMFOBEPTPRRPKDSDEEIQYJZPGIHYAWQUANNRAJZLFBGQPCKXVAAORWBHWZCARJKVIYFOOJOQSDIYMCANVGPCVRCSDJMSUZTMELZGEKDBRZIWPSLLEATZKOHFYJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.990841695019);
    msg.setSource(11517U);
    msg.setSourceEntity(23U);
    msg.setDestination(21043U);
    msg.setDestinationEntity(136U);
    msg.origin.assign("RHLWCNWJINQOEMIABEXRDORFOBMZWTZIUGSXFBETEHTHYUGKXYUQMYUZEDJNLYNASTLZQWBEAGVHFZFMIASTF");
    msg.htime = 0.701939386586;
    msg.lat = 0.874009594473;
    msg.lon = 0.969611591076;
    const char tmp_msg_0[] = {34, 101, 112, -83, -124, -53, -90, 86, -17, 124, -58, -128, -10, 0, -1, 125, -44, 13, 60, 122, -51, 39, -91, -71, -121, -85, 32, 74, -76, 55, -57, 68, -62, -78, 59, 120, -60, -82, -123, 4, 104, 106, 13, -46, 86, -18, -48, -95, -75, -45, 51, -128, -38, -125, -20, -33, 100, 65, 126, 64, -95, 65, 6, -2, 116, -34, -106, 35, -100, -92, -95, 77, 52, -49, -111, 57, 112, 126, 43, -98, 43, -57, -38, -52, 106, 46, 8, 124, 100, 78, 116, -24, 19, 63, 84, -72, -23, 75, 85, 12, 28, 116, -44, 96, -53, 107, -9, -23, -73, -19, -126, -33, -102, -4, -8, -7, 93, -95, 124, 20, -48, -67, 45, 54, -13, -13, -56, 69, 88, 66, -71, -2, 107, 105, 11, -76, 84, -121, 119, 54, 32, -31, -31, 59, 51, 59, -59, 1, 72, -21, -65, 48, 20, 42, 89, 101, 60, -62, -82, 31, 91, -89, -95, 93, -107, 53, 68, 18, 34, 93, 50, -78, -93, 59, 50, 93, 98, -88, -18, 119, 58, 27, -123, 24, -86, 9, -17, 59, -62, -54, -106, 107, -21, 72, 101, -1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.157473364139);
    msg.setSource(38612U);
    msg.setSourceEntity(22U);
    msg.setDestination(28462U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("KSYNABLJZOEOMAPRDJZJWFAGFVSONFCBRSEEDXOAGDHNMIHYSJGKLPTLVVPYFTDIXMBHQMORYIGZVYENKGEGFRRVPQQHZLYVPQWKZWOWKGOFTIWCQKECDDFBCKTHROCFPRCHJXXQPRTWRITNADNLSCTVAHOHPUDADUFGL");
    msg.htime = 0.387432965666;
    msg.lat = 0.0230929846945;
    msg.lon = 0.329715416909;
    const char tmp_msg_0[] = {-86, -10, -97, -113, 20, -12, 3, 68, -89, -105, -103, -63, -37, -59, 94, -46, -101, -92, 94, 100, 57, 44, 63, -54, -60, 90, -45, 45, -56, 89, -55, -57, -112, 16, -56, -102, -15, 23, 70, 15, 67, -36, -121, 122, -32, -116, 122, 102, -40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.057226638377);
    msg.setSource(18806U);
    msg.setSourceEntity(92U);
    msg.setDestination(54154U);
    msg.setDestinationEntity(55U);
    msg.origin.assign("MNTHFEBVJQJZN");
    msg.htime = 0.576359296001;
    msg.lat = 0.493648820851;
    msg.lon = 0.658638462859;
    const char tmp_msg_0[] = {13, 76, 79, 93, -14, -120, -128, -109, 47, 81, -123, -113, -71, 106, 12, -42, -51, -82, 111, 82, -110, 31, -74, 25, -98, 90, -97, -26, 88, 91, -2, 60, -14, -1, -107, 0, 118, -125, -107, -83, -37, -58, -46, 72, -116, 112, -1, 84, -74, -70, 56, 19, -22, -18, 84, 95, -84, -52, -88, 14, 95, 12, 3, 106, 69, -30, 57, 3, -113, -15, -37, 124, 92, -66, 0, -35, -101, -51, -113, 64, 23, 14, -45, 23, -4, -71, 38, -94, -35, -86, -110, -56, -62, 19, -54, 85, -57, 25, -21, 68, -44, 37, 108, 99, -23, 3, -84, 116, 55, -12, -116, 20, 80, 35, -2, 32, 67, 42, 6, 67, -112, -88, -18, -58, 58, -64, -17, 73, -70, 35, -108, 77, 120, 64, -51, -37, 103, -20, 109, -6, -100, -43, -103, -118, 65, -34, 50, -111, -73, 53, -104, 51, 124, -67, 72, 105, 26, -19, -7, -53, -69, 122, 126, 33, 103, 2, -23, -111, 38, -46, 88, -3, 18, 44, -58, 83, -10, -97, 98, 56, -106, 54, -32, 88, -99, -95, 32, -49, -128, 99, 2, 29, -5, -5, 87, -43, 55, 91, 90, 73, 84, -76, -82, 45, 90, 86, 109, -39, -115, 84, -55, -12, 103, -47, 56, -33, 71, 19, -40, -55, -109, -2, -8, -112, 41, 76, 39, -26, -23, -20, 32, -37, 38, -87, 65, 43, -68, 91, -84, -42, -85, 37, 43, 67, -60};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.921716873928);
    msg.setSource(21257U);
    msg.setSourceEntity(141U);
    msg.setDestination(37145U);
    msg.setDestinationEntity(106U);
    msg.req_id = 42921U;
    msg.ttl = 62992U;
    msg.destination.assign("LJMPIUYXSZBSIBTBPTIRURMXKSVPCZINHRKXYCLXJEKBAZBJDOVRPWGAVDOZFVFPMRHTRGTPNSDFXAQLOBEUWBZUXPNQMFRLMENANANISPAVSFHGFGQWKQQHICZTXUDVCEUJIQKHMRMWZFDXSUGWWOEQTVJLAEIULHAWKNLONQBKCXNCEQHOKCNZOYTMYXEDGILHDURWLATMTJBYWJFGYYIEFSKVAFMDOCJHDGVQYUYBVZSDKYTPCHJSJPCEGO");
    const char tmp_msg_0[] = {95, -22, -16, -13, 62, -76, 34, -60, -102, -99, -69, -8, 126, -113, 72, -82, 23, 61, 36, -121, -77, 60, 106, -85, -113, -99, 109, -82, 76, -37, 108, 32, -28, -51, -110, -11, 123, 83, -125, -11, -17, -10, -98, -38, -9, 63, -115, 3, 101, 45, -59, -65, -118, -90, 59, 74, -52, -91, 54, 112, 108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.877073694623);
    msg.setSource(58045U);
    msg.setSourceEntity(233U);
    msg.setDestination(36747U);
    msg.setDestinationEntity(194U);
    msg.req_id = 27818U;
    msg.ttl = 56235U;
    msg.destination.assign("WIFQUVCKWXMDTGXAQEGEDIYFPVWQRAUCJQPHLRGRNPXOVIBTBIYMYKBWAPSTVNYFXMZHSYISOKEFBXHGYNFRAONNRBFDBNBCLGCHLTQXIXVALZVKUWPUOTXPRLYSOMADYHQCVSILOJTLTFVTZRWJSIGSAGWRNYPODDJPFEWKZUYGTBDJEHVHBNDXSLUMECQGEDVRIKQQUZAZQJECUMPWMOKWOJXKMPNMTJFUMEENKSHUCLDJZAIHBJHCCSZF");
    const char tmp_msg_0[] = {125, 86, 33, 75, 74, 95, -55, 124, 5, 48, 123, -36, -54, 102, 102, -82, -77, 123, 35, 84, -93, 122, -11, 68, -55, -9, -64, -64, 118};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.483606238018);
    msg.setSource(51743U);
    msg.setSourceEntity(155U);
    msg.setDestination(47047U);
    msg.setDestinationEntity(224U);
    msg.req_id = 50286U;
    msg.ttl = 16478U;
    msg.destination.assign("ZJUYVCNGEHPMFJJAUQXJDKXPCLZPVPCCDDXLIP");
    const char tmp_msg_0[] = {111, -75, -16, 36, 102, 12, -27, -1, -73, 18, -60, -59, 79, 61, 48, -20, -52, 104, -11, 12, -127, 84, -110, 121, 77, -57, -90, 56, 74, -19, 70, 102, -90, 49, 60, -20, 50, 21, -85, 106, 79};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.878037432714);
    msg.setSource(35868U);
    msg.setSourceEntity(35U);
    msg.setDestination(54169U);
    msg.setDestinationEntity(207U);
    msg.req_id = 4491U;
    msg.status = 68U;
    msg.text.assign("DDFBLMDWUJEDMNIWEAQHSZYFRYKMVKQJAWLATVBLPSTVJKCCUSHFPEXNLJTQTGYZKTZUQUXIMDKGAYRPZSCFBQDYYEYGSJPKZNTOHLFQNJSUZASXEGWULKUSINEPEHLVNNMAGBDHOBTHGXNGVMPTIYGCRVZCWMFOSOWCRALVXUTGRBYEMZVOWWPXCJFDQBINEQLOIIXBHVYJIRRJAKDPRSHMCFRACP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.687980303848);
    msg.setSource(8360U);
    msg.setSourceEntity(254U);
    msg.setDestination(26749U);
    msg.setDestinationEntity(160U);
    msg.req_id = 38441U;
    msg.status = 107U;
    msg.text.assign("RPOBAPJBTUOTVLVWYYAKGAUEDNJFRAROENYLHQIHXQSZDOVGNOKMLWMGIFJQQWUAEHTIYPIOZTCQNCVACLFGPNUPXVHEKITBBBBSIFNMNVQTUAJMMKIHTJPQJSZEPGOSQKVXAFUWCNJGTBFVXLHRRDFYJOGRBNROLCQWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.995033438097);
    msg.setSource(31006U);
    msg.setSourceEntity(197U);
    msg.setDestination(6422U);
    msg.setDestinationEntity(168U);
    msg.req_id = 54473U;
    msg.status = 203U;
    msg.text.assign("VHVGBTZNUIVIZNHCMQABMOSJKOKMQARBMJABKFCCWKISGCAVHPZMXJUFPTUBWMXXXUJUMUMVZXAKPCUPQWJJGKENWWQZOVDYQGYYRCAIGORKFQSDKYTESPEGQANTRQTSGCXLRBLLRQDFWFBWVYEOTJILMDDYKBGYVSWNZVORPIFFEGHIUTGNHAAHZPZBHSRXDLANXJDZMTYXCXOLRTHEPOUWSNOCUDHJFOKNELDIIQSFDECLNSELYYPJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.197075166804);
    msg.setSource(54543U);
    msg.setSourceEntity(105U);
    msg.setDestination(9510U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("UFRNYPHTTZAGIESPFGM");
    msg.links = 3559101012U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.78864211323);
    msg.setSource(62209U);
    msg.setSourceEntity(246U);
    msg.setDestination(31589U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("ABCRURPEPALOOFKFHIXDPMND");
    msg.links = 430560751U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.570288367264);
    msg.setSource(31095U);
    msg.setSourceEntity(176U);
    msg.setDestination(38498U);
    msg.setDestinationEntity(144U);
    msg.group_name.assign("FBKDSEYQEKNDZMCZWTBKNQGYRCPIIFXTGJJHFBWVABCOBSQRAOTHZZNPQAKANHSGSSCJWLHGCRAVGNEZPXQRQSFYEUMNVUJZEMERAPYGHSJBUOLUDTDEKKCIYSPLXWXWPJMXJL");
    msg.links = 1281839898U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.804191645196);
    msg.setSource(19457U);
    msg.setSourceEntity(42U);
    msg.setDestination(4642U);
    msg.setDestinationEntity(39U);
    msg.groupname.assign("EWFOIJADITVWBDGEKMTPKJEXYPNKVLLMEWTDDTEZSCFAGW");
    msg.action = 211U;
    msg.grouplist.assign("THOTCGNASJEOVPEQFAHRAGNPJXTFJERXXNXKWCKUXFNGHZHJVOBJVYGILJMPCJSQNHLQYQDPIUNHBYVZSYIFCUIKWUPGVCBAMGUMWMEKLEGPXCWAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.3283803908);
    msg.setSource(42934U);
    msg.setSourceEntity(107U);
    msg.setDestination(19335U);
    msg.setDestinationEntity(252U);
    msg.groupname.assign("VMJOSRLSFXPTXQZXBBGKTXVEMDNTHNGGVKBJZAEMDVUHCETBHWTWIOVIYYPWRKAPDBMLRTOINXSCQRAGXPAWYYWRFFRSXGPULMJSMUENSDKCZIKMTOODJHIKUURZFUUYHYKZZUYBHYDCEKZZBDGJFCMJNEOLKUGNJQRLYNICWRVFLIONVXAOWSNLWCALHHXZAZBDX");
    msg.action = 72U;
    msg.grouplist.assign("LLTUAFBMSWXVHRUNKXIEWNZFRWPJTSFYAYDPIDZNDUQXTYRSCKZDRCADVPIYJHIDSNOSCMGAYOAHBZRPWNKYJTOGTOREMWEVRBFTQMFUEWVMVJEBZZNIJKJNDMCSTYFCJCIDBBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.972809610595);
    msg.setSource(49373U);
    msg.setSourceEntity(77U);
    msg.setDestination(10441U);
    msg.setDestinationEntity(137U);
    msg.groupname.assign("ALBZIICPIZRMWNNHJEDULECRLMMGXEPZETIDQGCZSAWKRELZUFFQDCRKWANRZGGCQBALTXOMVUBKOPYQOUSGTXFNYIUXVNHUNTTPOOMBUJWCVIIPZCWSQXVBSCEJHMHAJDZRPYAZYYWYNLJJJIWIGHRBLUSOGKYAPFAVDEVGBRVKPNHSXMQMHQPWBDDFSEVW");
    msg.action = 248U;
    msg.grouplist.assign("LVQIFUYOSOBOWFZTNRXSBPQVBTRNARATSDIRISMWZYBKXNQRLKXZFWPRGMCDJWQZQBEXJHJTPARGOLGEOKWHLVRKOYYYXVXURTULIVUHLJCPONWJQDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.573606795);
    msg.setSource(39816U);
    msg.setSourceEntity(191U);
    msg.setDestination(63395U);
    msg.setDestinationEntity(97U);
    msg.value = 0.814848850885;
    msg.sys_src = 36182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.277433366433);
    msg.setSource(46065U);
    msg.setSourceEntity(54U);
    msg.setDestination(3065U);
    msg.setDestinationEntity(187U);
    msg.value = 0.178330542326;
    msg.sys_src = 31516U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.732474518153);
    msg.setSource(46324U);
    msg.setSourceEntity(140U);
    msg.setDestination(1197U);
    msg.setDestinationEntity(111U);
    msg.value = 0.767321882831;
    msg.sys_src = 12240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.624210195049);
    msg.setSource(62099U);
    msg.setSourceEntity(94U);
    msg.setDestination(46339U);
    msg.setDestinationEntity(65U);
    msg.value = 0.245248124764;
    msg.units = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.049508631302);
    msg.setSource(21456U);
    msg.setSourceEntity(70U);
    msg.setDestination(8133U);
    msg.setDestinationEntity(80U);
    msg.value = 0.754575521144;
    msg.units = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.951079625503);
    msg.setSource(50932U);
    msg.setSourceEntity(90U);
    msg.setDestination(28201U);
    msg.setDestinationEntity(94U);
    msg.value = 0.346228198059;
    msg.units = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.0858193381319);
    msg.setSource(38433U);
    msg.setSourceEntity(234U);
    msg.setDestination(21951U);
    msg.setDestinationEntity(140U);
    msg.base_lat = 0.429252172438;
    msg.base_lon = 0.181337877957;
    msg.base_time = 0.377303858863;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 44282U;
    tmp_msg_0.priority = -42;
    tmp_msg_0.x = 19292;
    tmp_msg_0.y = -16463;
    tmp_msg_0.z = 32302;
    tmp_msg_0.t = -17261;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("OKEOIPAEBQOVIYOIQOJKPRCALNQAAUCTUTZJDDWUJRXSUFGWFQLOXGLVIKHMYJNNOULGGZESQJCHBOGKNQPZLRCNEDZWJYLCBVUVFCZEAMVVGNVNZKGXXFOPRJFXSSTSPYRUSTRXYBMMTBXGXQKKUWTRNWGDABHZWWRPQEIYIDEMILHWEQ");
    tmp_tmp_msg_0_0.lat = 0.914404710814;
    tmp_tmp_msg_0_0.lon = 0.022257271077;
    tmp_tmp_msg_0_0.depth = 0.829961909373;
    tmp_tmp_msg_0_0.query_channel = 167U;
    tmp_tmp_msg_0_0.reply_channel = 253U;
    tmp_tmp_msg_0_0.transponder_delay = 81U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.140936488297);
    msg.setSource(41877U);
    msg.setSourceEntity(34U);
    msg.setDestination(46117U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.560685503029;
    msg.base_lon = 0.278737961347;
    msg.base_time = 0.0497316378794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.407262522636);
    msg.setSource(32477U);
    msg.setSourceEntity(232U);
    msg.setDestination(21717U);
    msg.setDestinationEntity(37U);
    msg.base_lat = 0.116047468509;
    msg.base_lon = 0.69451333798;
    msg.base_time = 0.596432933072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.598494994468);
    msg.setSource(41288U);
    msg.setSourceEntity(154U);
    msg.setDestination(47923U);
    msg.setDestinationEntity(101U);
    msg.base_lat = 0.780579909088;
    msg.base_lon = 0.176216478014;
    msg.base_time = 0.64199120895;
    const char tmp_msg_0[] = {1, 75, -47, -89, 68, 61, -2, 32, -106, 16, 39, -53, 94, -116, -110, 73, 59, 48, 89, -126, -26, 74, 35, -64, -122, -11, 93, -122, 14, -43, -74, -6, 59, -10, 11, -60, 77, 77, 118, -117, -73, -1, 120, -1, -33, 108, 79, 107, -30, -31, -101, -123, 86, -128, -8, -123, 101, -55, 49, -63, -75, 69, 75, -98, 76, -39, 92, 17, -27, 8, -113, 34, -94, -104, -45, -14, -56, -120, -84, -94, -33, 105, -54, 71, 26, -61, -125, -88, 46, 71, -14, 67, 119, 60, -7, 23, 47, 75, 78, -125, -60, -80, -14, 64, -72, 6, 30, -113, 44, -14, -126, 47, 106, -7, -125, 124, -84, 41, 115, -39, -77, 89, 21, -44, -128, -85, 125, 94, 125, 66, 19, 28, 57, -10, 118, 60, 99, 40, 125, 65, 51, -109, 59, -107, -116, -126, 3, -124, 62, 23, 48, 115, -116, 35, 13, -99, 93, 103, 61, -121, 56, 101, 108, 49, 81, 41, -29, -65, -88, 72, -97, 37, -100, 54, 67, 83, 76, -88, -57, 72, -114, -120, 61, 76, 36, -43, 105, -57, -42, 119, 113, 25, 25, 50, -80, -108, 87, 48, 40, 45, 114, -46, 43, 100, 124, 15, 0, -87, 118, -123, -99, -65, -92, 114, -66, 25, -78, 102, 65, -102, -92, 55, 82, -8, 59, 95, 27, -58, 47, 65, 27, 13};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.844263067014);
    msg.setSource(4262U);
    msg.setSourceEntity(200U);
    msg.setDestination(37176U);
    msg.setDestinationEntity(21U);
    msg.base_lat = 0.124830390928;
    msg.base_lon = 0.47999438921;
    msg.base_time = 0.343275984552;
    const char tmp_msg_0[] = {54, 82, 5, -83, 50, -125, 86, 88, 89, -66, 6, 54, -71, 68, 91, -112, -114, 100, -44, -109, 75, 39, -56, -13, 34, -57, 82, -40, 49, -17, -128, -35, 16, -106, 53, 97, -7, 35, 0, 49, -61, -22, 119, 75, -1, -43, -11, -98, 61, 79, 105, -96, 14, 1, -40, -30, -89, 15, -40, 107, 49, 21, -31, 66, -24, -74, 16, 2, 79, -53, -29, -29, -101, 58, 46, 79, -108, 117, -84, 78, 125, -46, -103, -75, -77, 59, 65, -9, -77, 100, -117, -127, -61, 1, 66, 63, 85, 125, -59, 83, -72, 110, 70, 42, -18, 61, -24, 120, 6, -109, 19, -99, 29, 91, 75, -115, 86, 15, -127, 19, 78, -75, -26, -93, -94, -59, 111, -85, -47, 103, -20, -74, -23, -88, -126, -6, 22, 102, -29, 6, -8, -84, 15, 47, 80, -98, 21, 106, 0, 54, -122, -29, -76, 11, -8, -67, 78, 60, 105, 32, 58, 105, -123, -89, 56, -73, -20, 51, -115, -107, 50, 100, 68, -121, 125, 21, 48, -110, -57, 105, 48, 13, -11, -118, 38, 36, -17, -65, 72, -81, -43};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.226977772786);
    msg.setSource(20473U);
    msg.setSourceEntity(239U);
    msg.setDestination(14668U);
    msg.setDestinationEntity(97U);
    msg.base_lat = 0.336809718196;
    msg.base_lon = 0.979830775029;
    msg.base_time = 0.807679785849;
    const char tmp_msg_0[] = {-70, 59, -32, 119, 21, 96, -87, -2, 7, -25, -126, 24, 24, -20, -27, 57, 117, -12, -14, -50, -120, 71, 21, -82, 21, -64, 86, -41, 29, -32, 41, 50, -42, 104, -64, -38, -28, 42, -121, 120, -9, -98, 65, 84, -73, -57, -128, -60, -127, 20, -20, -114, -3, -2, 31, 67, -128, 31, -11, -75, 123, -109, -98, 1, -1, 18, -4, -36, 60, -68, -38, 72, -80, -58, 37, -85, 87, -38, 32, 84, 10, 12, -79, 83, -10, -15, -44, -118, 100, 123, 40, 88, 82, -37, -123, -97, 6, 118, -80, 61, 7, 32, 9, -37, -76, 50, -78, 106, -102, -102, -23, -116, -111, -109, 87, -40, 99, -100, -115, -18, -100, -92, 31, -71};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.11658940871);
    msg.setSource(15686U);
    msg.setSourceEntity(203U);
    msg.setDestination(7375U);
    msg.setDestinationEntity(66U);
    msg.sys_id = 51962U;
    msg.priority = 52;
    msg.x = 22544;
    msg.y = -340;
    msg.z = 15777;
    msg.t = -16402;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.684443676116;
    tmp_msg_0.y = 0.26300346641;
    tmp_msg_0.z = 0.403054008528;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.558578316115);
    msg.setSource(19214U);
    msg.setSourceEntity(189U);
    msg.setDestination(20774U);
    msg.setDestinationEntity(60U);
    msg.sys_id = 38541U;
    msg.priority = -78;
    msg.x = -16673;
    msg.y = -6142;
    msg.z = -30877;
    msg.t = -9139;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.33633163342;
    tmp_msg_0.lon = 0.319143453666;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.923853874526);
    msg.setSource(1212U);
    msg.setSourceEntity(232U);
    msg.setDestination(36037U);
    msg.setDestinationEntity(73U);
    msg.sys_id = 38290U;
    msg.priority = 26;
    msg.x = 8384;
    msg.y = 11383;
    msg.z = 449;
    msg.t = -9305;
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 16172U;
    tmp_msg_0.type = 88U;
    tmp_msg_0.tow = 2644029336U;
    tmp_msg_0.base_lat = 0.801714219175;
    tmp_msg_0.base_lon = 0.61719459132;
    tmp_msg_0.base_height = 0.562182010821;
    tmp_msg_0.n = 0.679562037838;
    tmp_msg_0.e = 0.780407519025;
    tmp_msg_0.d = 0.982030654459;
    tmp_msg_0.v_n = 0.694405021536;
    tmp_msg_0.v_e = 0.773032987068;
    tmp_msg_0.v_d = 0.0278403688688;
    tmp_msg_0.satellites = 53U;
    tmp_msg_0.iar_hyp = 45745U;
    tmp_msg_0.iar_ratio = 0.226678476759;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.24732770526);
    msg.setSource(48808U);
    msg.setSourceEntity(84U);
    msg.setDestination(57142U);
    msg.setDestinationEntity(84U);
    msg.req_id = 22136U;
    msg.type = 93U;
    msg.max_size = 50459U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.382408707157;
    tmp_msg_0.base_lon = 0.399766797403;
    tmp_msg_0.base_time = 0.645084509115;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.610576236708);
    msg.setSource(61933U);
    msg.setSourceEntity(137U);
    msg.setDestination(35342U);
    msg.setDestinationEntity(231U);
    msg.req_id = 8551U;
    msg.type = 10U;
    msg.max_size = 60577U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.93464682022;
    tmp_msg_0.base_lon = 0.967171951882;
    tmp_msg_0.base_time = 0.251084205569;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 19453U;
    tmp_tmp_msg_0_0.destination = 54762U;
    tmp_tmp_msg_0_0.timeout = 0.66728588468;
    IMC::Depth tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.50933021889;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.40565484021);
    msg.setSource(60503U);
    msg.setSourceEntity(80U);
    msg.setDestination(30010U);
    msg.setDestinationEntity(95U);
    msg.req_id = 17040U;
    msg.type = 125U;
    msg.max_size = 26647U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0706027810009;
    tmp_msg_0.base_lon = 0.954578733203;
    tmp_msg_0.base_time = 0.84038699574;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 22271U;
    tmp_tmp_msg_0_0.priority = -7;
    tmp_tmp_msg_0_0.x = 16525;
    tmp_tmp_msg_0_0.y = -2585;
    tmp_tmp_msg_0_0.z = 27922;
    tmp_tmp_msg_0_0.t = 19603;
    IMC::Airflow tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.va = 0.663587529081;
    tmp_tmp_tmp_msg_0_0_0.aoa = 0.768427918033;
    tmp_tmp_tmp_msg_0_0_0.ssa = 0.2837716477;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.250132668569);
    msg.setSource(39591U);
    msg.setSourceEntity(55U);
    msg.setDestination(42582U);
    msg.setDestinationEntity(138U);
    msg.original_source = 37834U;
    msg.destination = 30139U;
    msg.timeout = 0.700873479829;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("ZZWYQUWSAXADBWEHEAXLHECQTYGMUSSWTDSWPMRWRBRCGCUWQKUGYCNMUVJXONZOGSHIDJYRNQRISUBDNOPGBRIIBZVKZJQFCKQSDEVGRSOHXINEOTVKBWYGTEXSXJAUGVTELVTTYNFNPELJMADZHC");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.70865837352);
    msg.setSource(10375U);
    msg.setSourceEntity(214U);
    msg.setDestination(32828U);
    msg.setDestinationEntity(108U);
    msg.original_source = 10612U;
    msg.destination = 51433U;
    msg.timeout = 0.21574382806;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("VKDBESWCQPERMGJZYNYATHUHBFTNFLMGETGZYUCANZZJNMWOEQGHLQDKARVEUSKWKCXTSPLJCFEYTZLMVYEPLHRWYIQASFCMPJUHNXGUNFKLVGUBDJCWGXWBDYVTZBPROJZSIUBORXDKMNSDAFXBJCMULEIMCCFXONRXXUWAZAYPPKOQBTADWTNKDQQZLVIORARKBURNOOYIFSHBHSRGQQ");
    tmp_msg_0.message_id = 61974U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.596884033342);
    msg.setSource(31960U);
    msg.setSourceEntity(113U);
    msg.setDestination(58889U);
    msg.setDestinationEntity(115U);
    msg.original_source = 43548U;
    msg.destination = 33904U;
    msg.timeout = 0.303721751162;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.909530557994;
    tmp_msg_0.y = 0.864684723786;
    tmp_msg_0.z = 0.0844187777259;
    tmp_msg_0.phi = 0.193059531021;
    tmp_msg_0.theta = 0.501790058055;
    tmp_msg_0.psi = 0.816828866279;
    tmp_msg_0.p = 0.165432529994;
    tmp_msg_0.q = 0.655883191019;
    tmp_msg_0.r = 0.586098550342;
    tmp_msg_0.u = 0.122515564982;
    tmp_msg_0.v = 0.318700796386;
    tmp_msg_0.w = 0.437347584662;
    tmp_msg_0.bias_psi = 0.780149168843;
    tmp_msg_0.bias_r = 0.682921292457;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.0436884518737);
    msg.setSource(15768U);
    msg.setSourceEntity(29U);
    msg.setDestination(42030U);
    msg.setDestinationEntity(37U);
    msg.id = 37U;
    msg.range = 0.291389679988;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.0932891242807);
    msg.setSource(50421U);
    msg.setSourceEntity(82U);
    msg.setDestination(15500U);
    msg.setDestinationEntity(185U);
    msg.id = 31U;
    msg.range = 0.90412737406;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.037423588845);
    msg.setSource(15915U);
    msg.setSourceEntity(26U);
    msg.setDestination(12823U);
    msg.setDestinationEntity(108U);
    msg.id = 169U;
    msg.range = 0.0488593151524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.653015626236);
    msg.setSource(40741U);
    msg.setSourceEntity(41U);
    msg.setDestination(47812U);
    msg.setDestinationEntity(35U);
    msg.beacon.assign("NZJTIOAEOBPUFSVTWTJ");
    msg.lat = 0.915127951772;
    msg.lon = 0.777759860219;
    msg.depth = 0.743346786012;
    msg.query_channel = 45U;
    msg.reply_channel = 187U;
    msg.transponder_delay = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.734496686181);
    msg.setSource(442U);
    msg.setSourceEntity(130U);
    msg.setDestination(22038U);
    msg.setDestinationEntity(137U);
    msg.beacon.assign("QMNMDYSTRTEUJXEXALWGHWWSJXLDBPMBRVFMDQGQUFWVHICHG");
    msg.lat = 0.486650343682;
    msg.lon = 0.11246464339;
    msg.depth = 0.427147688543;
    msg.query_channel = 23U;
    msg.reply_channel = 191U;
    msg.transponder_delay = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.0979512440285);
    msg.setSource(35525U);
    msg.setSourceEntity(143U);
    msg.setDestination(18317U);
    msg.setDestinationEntity(187U);
    msg.beacon.assign("ITWODFXDHBPMTKMQMJMBUHNIDYHCSAVDHWRBMVCQDGGDZFOXSISDYRCRCKIVSEKXSQKOKKHVIRBLPXLBGWGZBEGQANPADUGGXMLQBHJOSMJQZGQFPCABLWYKNVTVHPGZZUIYGUBWPNDETXLAZMIJZKLXPTTKNEIVWZHYFPUJJCRYIRJYJLVNZTISERWHYHUVCAOXULTUAORNWAMFSTLYOWOZLYEEAOWM");
    msg.lat = 0.317024630653;
    msg.lon = 0.852084559374;
    msg.depth = 0.447738485456;
    msg.query_channel = 77U;
    msg.reply_channel = 152U;
    msg.transponder_delay = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.118721909907);
    msg.setSource(10286U);
    msg.setSourceEntity(128U);
    msg.setDestination(19694U);
    msg.setDestinationEntity(197U);
    msg.op = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.336405611253);
    msg.setSource(33208U);
    msg.setSourceEntity(92U);
    msg.setDestination(20038U);
    msg.setDestinationEntity(75U);
    msg.op = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.431487321696);
    msg.setSource(33867U);
    msg.setSourceEntity(205U);
    msg.setDestination(752U);
    msg.setDestinationEntity(100U);
    msg.op = 167U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZMYICQCAAJGIOYADQZIZHOYTKMZUKXBG");
    tmp_msg_0.lat = 0.361467015042;
    tmp_msg_0.lon = 0.844208494484;
    tmp_msg_0.depth = 0.699145815189;
    tmp_msg_0.query_channel = 129U;
    tmp_msg_0.reply_channel = 74U;
    tmp_msg_0.transponder_delay = 23U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.773098538839);
    msg.setSource(24460U);
    msg.setSourceEntity(4U);
    msg.setDestination(64416U);
    msg.setDestinationEntity(69U);
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.563092716539;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.129261306308);
    msg.setSource(60920U);
    msg.setSourceEntity(250U);
    msg.setDestination(12577U);
    msg.setDestinationEntity(100U);
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.627611614686;
    tmp_msg_0.m = 0.92551297271;
    tmp_msg_0.n = 0.704589505251;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.699950129149);
    msg.setSource(12314U);
    msg.setSourceEntity(226U);
    msg.setDestination(48567U);
    msg.setDestinationEntity(193U);
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 124U;
    tmp_msg_0.mnames.assign("XBIIMLPEXZJFADUVLJSWNBZGYHJVOIXUIXBHWERFTXVOQTOIVMBIJFKPAVSHCEADTFKAEGDIGDPKSOM");
    tmp_msg_0.ecount = 54U;
    tmp_msg_0.enames.assign("RGCEYQXJZHLHQSOOLTBVMYLFBBICUNKANXSHOBTFZFRRDIBJVJEKYMACGMJYX");
    tmp_msg_0.ccount = 38U;
    tmp_msg_0.cnames.assign("KICWQOBKNWLHCUPTSDZIICMHYUMTZFZFJJSKOCGCXDEXOSYEUXVDTWFMPLKYEJLWUYIPAHKNRQRIBZITAWQVRGVAAUVXRKKTIYUTEGWRFFEEWBLBNMMVCFYNJPRCAHNYNQIRPHHYUOOBMSKDJWZSTPRULTGBDPWYKSQXFGZJLVHXIDQBTMLOGAIO");
    tmp_msg_0.last_error.assign("VTIHTWELWONMQVBMFYKTPFXMFHCVXRDBHPAWMDGBSKNVUZVUFSKCNCOTRQUGBAJOZEAVKPYEZZYRHHOKADCNZIQLRGECGXKIGAST");
    tmp_msg_0.last_error_time = 0.344900760325;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.337112315481);
    msg.setSource(54010U);
    msg.setSourceEntity(226U);
    msg.setDestination(58435U);
    msg.setDestinationEntity(16U);
    msg.op = 161U;
    msg.system.assign("HRSPPXESJCGJRMNIVMCMJKFTFUYJCDVRQHDRXTYK");
    msg.range = 0.521014067692;
    IMC::AcousticMessage tmp_msg_0;
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.353805271793;
    tmp_tmp_msg_0_0.lon = 0.20194775703;
    tmp_tmp_msg_0_0.z = 0.134021393815;
    tmp_tmp_msg_0_0.z_units = 214U;
    tmp_tmp_msg_0_0.speed = 0.320338026505;
    tmp_tmp_msg_0_0.speed_units = 154U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.887356552308;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.874015436975;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("VHTXIHXKMXGFARXVBBVGLZBZWAMYLXKKZWTUJFGDCIZ");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.606102532787);
    msg.setSource(21523U);
    msg.setSourceEntity(108U);
    msg.setDestination(59267U);
    msg.setDestinationEntity(108U);
    msg.op = 245U;
    msg.system.assign("HICUVLBUFM");
    msg.range = 0.402133193573;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.779889498242;
    tmp_msg_0.time_next_service = 0.657684048617;
    tmp_msg_0.time_motor_next_service = 0.0617941248427;
    tmp_msg_0.time_idle_ground = 0.765876483391;
    tmp_msg_0.time_idle_air = 0.115958534007;
    tmp_msg_0.time_idle_water = 0.531570945214;
    tmp_msg_0.time_idle_underwater = 0.768437833182;
    tmp_msg_0.time_idle_unknown = 0.473358817188;
    tmp_msg_0.time_motor_ground = 0.262095486527;
    tmp_msg_0.time_motor_air = 0.904810161083;
    tmp_msg_0.time_motor_water = 0.388586971232;
    tmp_msg_0.time_motor_underwater = 0.234198639389;
    tmp_msg_0.time_motor_unknown = 0.122561057841;
    tmp_msg_0.rpm_min = -4378;
    tmp_msg_0.rpm_max = 2333;
    tmp_msg_0.depth_max = 0.186718848447;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.026084917159);
    msg.setSource(35224U);
    msg.setSourceEntity(52U);
    msg.setDestination(34741U);
    msg.setDestinationEntity(193U);
    msg.op = 62U;
    msg.system.assign("PCNPRJRBGLJTRSXYFWHWXEDYWHNOAVINMWIKBRETOTFBNYWDOFEUHXHLBRUXTQCZCXVYLQPQSMMBIPSUNPQVBAUQEVOUAZEVEIMGWTEDHQXTNUAGGWUKTVFHVZJTHJJLVKDN");
    msg.range = 0.322314336592;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 21793U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.934295598999);
    msg.setSource(36158U);
    msg.setSourceEntity(238U);
    msg.setDestination(56083U);
    msg.setDestinationEntity(125U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.254594649738);
    msg.setSource(19137U);
    msg.setSourceEntity(48U);
    msg.setDestination(24797U);
    msg.setDestinationEntity(102U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.0853424161079);
    msg.setSource(41768U);
    msg.setSourceEntity(159U);
    msg.setDestination(50162U);
    msg.setDestinationEntity(111U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.0712553375673);
    msg.setSource(53646U);
    msg.setSourceEntity(82U);
    msg.setDestination(2369U);
    msg.setDestinationEntity(152U);
    msg.list.assign("TTLKHDAVWYHSLYEUDXVDAAUJEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.945918336801);
    msg.setSource(45405U);
    msg.setSourceEntity(125U);
    msg.setDestination(37487U);
    msg.setDestinationEntity(253U);
    msg.list.assign("UXYSOMPSKQQHPIZMQZOSQFEVENJLGAZXSGYACWZBSTKXTTTXDTNMGUIYWJFGZRLPYVKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.834531523756);
    msg.setSource(2362U);
    msg.setSourceEntity(212U);
    msg.setDestination(21932U);
    msg.setDestinationEntity(18U);
    msg.list.assign("WJNEFZKTHZIKTMXFQQEWTFNZSOPYSJFEBNPPUMDEMKEGGFHUZVRXDKECTJORIOKQRGSTZKIVDRPXMLICNXKXAAZBBBXVMBDHWYHFYRMCUDPKXUNZUGCXZTRSNTGSLKGWFHEURJUTWCIIPGLPVDELEOBKPCWOYBWATWQYOODGNECJYARGFFAOLYHAYLXUDMVAHIBHSQQRWMLXSDSIQQCVWJQJUZJGMJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.896894574055);
    msg.setSource(41307U);
    msg.setSourceEntity(241U);
    msg.setDestination(8106U);
    msg.setDestinationEntity(242U);
    msg.peer.assign("NGIJNESBUEFWQBTSKPVMDBWEBFLJLMMMUOYDAKLLSDWRKFDJTOKEPXZRFPVGZREPQJNKZAXCUCZAKQQBEOBHFPCTGZYQUMXUYUHGSTZWAKGOWWICKYTCMSAZSGGSTODSRIBXAHYVOOVNCQKRYGOBYZXJXIIRYYCNDVCERWPJEHWPDOQTSJDVIJIVLECLTUAHIWHDGHALNFHSAV");
    msg.rssi = 0.146094054975;
    msg.integrity = 41021U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.766715126057);
    msg.setSource(47437U);
    msg.setSourceEntity(15U);
    msg.setDestination(1087U);
    msg.setDestinationEntity(185U);
    msg.peer.assign("NIMHXASIXLIYQDFRFMYTDZBMINJNATAFXBZJXSPLFHLQYVYJEPREWLXBKXWUHKWMCQJREYWOFQOYXMWOJOCOZQUOFCKCTKGHRDDKYHDCXPKJCTFIUVCEHLNS");
    msg.rssi = 0.654555006;
    msg.integrity = 50262U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.79391341106);
    msg.setSource(28133U);
    msg.setSourceEntity(44U);
    msg.setDestination(54286U);
    msg.setDestinationEntity(13U);
    msg.peer.assign("RYVBBQTEEHHDUTPYGIVRDYQUREHIUDGYBRJGQPFXIHVVUXGUDVFQPZYXWVYTSCNMPOSMFJSVNAOSRWFLFWHTPAJAONCGYQPEWCMIYCQBPXWURLOKLLUCRSZNWZEPMJCIKP");
    msg.rssi = 0.807737796422;
    msg.integrity = 30986U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.409326609595);
    msg.setSource(3544U);
    msg.setSourceEntity(50U);
    msg.setDestination(49634U);
    msg.setDestinationEntity(31U);
    msg.value = -30511;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.566477925466);
    msg.setSource(12937U);
    msg.setSourceEntity(220U);
    msg.setDestination(16529U);
    msg.setDestinationEntity(35U);
    msg.value = 30885;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.648101163451);
    msg.setSource(29238U);
    msg.setSourceEntity(37U);
    msg.setDestination(1242U);
    msg.setDestinationEntity(139U);
    msg.value = 13820;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.600761247322);
    msg.setSource(35787U);
    msg.setSourceEntity(231U);
    msg.setDestination(41805U);
    msg.setDestinationEntity(156U);
    msg.value = 0.792169129574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.609169854652);
    msg.setSource(8360U);
    msg.setSourceEntity(153U);
    msg.setDestination(41206U);
    msg.setDestinationEntity(37U);
    msg.value = 0.929609632826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.112888109349);
    msg.setSource(9997U);
    msg.setSourceEntity(185U);
    msg.setDestination(27100U);
    msg.setDestinationEntity(211U);
    msg.value = 0.291638009115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.61636189277);
    msg.setSource(15752U);
    msg.setSourceEntity(123U);
    msg.setDestination(53087U);
    msg.setDestinationEntity(81U);
    msg.value = 0.143275674821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.299437088924);
    msg.setSource(43545U);
    msg.setSourceEntity(157U);
    msg.setDestination(26622U);
    msg.setDestinationEntity(203U);
    msg.value = 0.844937833507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.255210205872);
    msg.setSource(59236U);
    msg.setSourceEntity(113U);
    msg.setDestination(4977U);
    msg.setDestinationEntity(15U);
    msg.value = 0.745731231406;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.0851402999722);
    msg.setSource(63669U);
    msg.setSourceEntity(173U);
    msg.setDestination(25526U);
    msg.setDestinationEntity(123U);
    msg.validity = 8131U;
    msg.type = 247U;
    msg.utc_year = 16301U;
    msg.utc_month = 16U;
    msg.utc_day = 143U;
    msg.utc_time = 0.717253744539;
    msg.lat = 0.761852336314;
    msg.lon = 0.260791719221;
    msg.height = 0.146003709366;
    msg.satellites = 78U;
    msg.cog = 0.904827679533;
    msg.sog = 0.741032273925;
    msg.hdop = 0.239186072389;
    msg.vdop = 0.204246632977;
    msg.hacc = 0.18576739503;
    msg.vacc = 0.176305849884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.471280859784);
    msg.setSource(23306U);
    msg.setSourceEntity(161U);
    msg.setDestination(61166U);
    msg.setDestinationEntity(125U);
    msg.validity = 19829U;
    msg.type = 90U;
    msg.utc_year = 44430U;
    msg.utc_month = 116U;
    msg.utc_day = 5U;
    msg.utc_time = 0.771634973348;
    msg.lat = 0.0562699944417;
    msg.lon = 0.410696745383;
    msg.height = 0.982794480872;
    msg.satellites = 152U;
    msg.cog = 0.0338530300847;
    msg.sog = 0.114780603625;
    msg.hdop = 0.982936925871;
    msg.vdop = 0.712373451661;
    msg.hacc = 0.101008032955;
    msg.vacc = 0.504437000313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.745103036579);
    msg.setSource(54575U);
    msg.setSourceEntity(62U);
    msg.setDestination(18643U);
    msg.setDestinationEntity(175U);
    msg.validity = 36408U;
    msg.type = 124U;
    msg.utc_year = 50687U;
    msg.utc_month = 155U;
    msg.utc_day = 248U;
    msg.utc_time = 0.248107094515;
    msg.lat = 0.479751077745;
    msg.lon = 0.95012551637;
    msg.height = 0.999934590956;
    msg.satellites = 33U;
    msg.cog = 0.928571620774;
    msg.sog = 0.697760120916;
    msg.hdop = 0.673598345041;
    msg.vdop = 0.572367713568;
    msg.hacc = 0.701891902266;
    msg.vacc = 0.893883817787;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.328161144128);
    msg.setSource(30610U);
    msg.setSourceEntity(217U);
    msg.setDestination(20195U);
    msg.setDestinationEntity(195U);
    msg.time = 0.356101993659;
    msg.phi = 0.533334199678;
    msg.theta = 0.390763701724;
    msg.psi = 0.355609237438;
    msg.psi_magnetic = 0.9380361232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.311263827558);
    msg.setSource(23549U);
    msg.setSourceEntity(200U);
    msg.setDestination(24907U);
    msg.setDestinationEntity(75U);
    msg.time = 0.481840617971;
    msg.phi = 0.518998588417;
    msg.theta = 0.508795840792;
    msg.psi = 0.101426539712;
    msg.psi_magnetic = 0.64867179889;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.489423705648);
    msg.setSource(33343U);
    msg.setSourceEntity(210U);
    msg.setDestination(17427U);
    msg.setDestinationEntity(200U);
    msg.time = 0.628343807226;
    msg.phi = 0.0770593862233;
    msg.theta = 0.635276490068;
    msg.psi = 0.591658861057;
    msg.psi_magnetic = 0.952303789257;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.580617917574);
    msg.setSource(27364U);
    msg.setSourceEntity(175U);
    msg.setDestination(24382U);
    msg.setDestinationEntity(119U);
    msg.time = 0.766923007336;
    msg.x = 0.997258806451;
    msg.y = 0.185085393083;
    msg.z = 0.784674764049;
    msg.timestep = 0.639338487496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.175784044258);
    msg.setSource(33840U);
    msg.setSourceEntity(198U);
    msg.setDestination(4511U);
    msg.setDestinationEntity(166U);
    msg.time = 0.263181108578;
    msg.x = 0.852061272292;
    msg.y = 0.426703607394;
    msg.z = 0.800096594772;
    msg.timestep = 0.140166804897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.118877292417);
    msg.setSource(26607U);
    msg.setSourceEntity(240U);
    msg.setDestination(63765U);
    msg.setDestinationEntity(19U);
    msg.time = 0.258787478825;
    msg.x = 0.444262298108;
    msg.y = 0.037748674488;
    msg.z = 0.726201904994;
    msg.timestep = 0.95988246347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.642165078293);
    msg.setSource(4216U);
    msg.setSourceEntity(163U);
    msg.setDestination(57444U);
    msg.setDestinationEntity(227U);
    msg.time = 0.906496960929;
    msg.x = 0.250459573656;
    msg.y = 0.056334236908;
    msg.z = 0.925356515706;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.567902338417);
    msg.setSource(39254U);
    msg.setSourceEntity(27U);
    msg.setDestination(11716U);
    msg.setDestinationEntity(63U);
    msg.time = 0.593815705821;
    msg.x = 0.459773549254;
    msg.y = 0.0148141841152;
    msg.z = 0.342251977708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.517250140621);
    msg.setSource(42725U);
    msg.setSourceEntity(208U);
    msg.setDestination(43462U);
    msg.setDestinationEntity(59U);
    msg.time = 0.126727348743;
    msg.x = 0.756052488905;
    msg.y = 0.233224692154;
    msg.z = 0.218624287579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.352758763855);
    msg.setSource(38789U);
    msg.setSourceEntity(210U);
    msg.setDestination(44366U);
    msg.setDestinationEntity(68U);
    msg.time = 0.234427806839;
    msg.x = 0.610755825152;
    msg.y = 0.829135592568;
    msg.z = 0.43076996466;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.212789949034);
    msg.setSource(21334U);
    msg.setSourceEntity(51U);
    msg.setDestination(17054U);
    msg.setDestinationEntity(222U);
    msg.time = 0.754602651714;
    msg.x = 0.264728602202;
    msg.y = 0.873218395283;
    msg.z = 0.893471426987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.814165312761);
    msg.setSource(40631U);
    msg.setSourceEntity(133U);
    msg.setDestination(48904U);
    msg.setDestinationEntity(128U);
    msg.time = 0.701685141875;
    msg.x = 0.175251905495;
    msg.y = 0.588591015102;
    msg.z = 0.38522303487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.305994480706);
    msg.setSource(9291U);
    msg.setSourceEntity(24U);
    msg.setDestination(62698U);
    msg.setDestinationEntity(197U);
    msg.time = 0.423970231449;
    msg.x = 0.187932277937;
    msg.y = 0.0098445278728;
    msg.z = 0.962456720712;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.254688275107);
    msg.setSource(33022U);
    msg.setSourceEntity(18U);
    msg.setDestination(60015U);
    msg.setDestinationEntity(179U);
    msg.time = 0.634248282614;
    msg.x = 0.6821378443;
    msg.y = 0.419937435881;
    msg.z = 0.14845177044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.0994466241727);
    msg.setSource(64217U);
    msg.setSourceEntity(106U);
    msg.setDestination(27626U);
    msg.setDestinationEntity(74U);
    msg.time = 0.610562406393;
    msg.x = 0.438122917593;
    msg.y = 0.00274166541882;
    msg.z = 0.0989460196075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.407079445285);
    msg.setSource(58994U);
    msg.setSourceEntity(15U);
    msg.setDestination(15753U);
    msg.setDestinationEntity(68U);
    msg.validity = 225U;
    msg.x = 0.227261689531;
    msg.y = 0.0883070578757;
    msg.z = 0.7719508168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.597898018832);
    msg.setSource(42430U);
    msg.setSourceEntity(5U);
    msg.setDestination(50577U);
    msg.setDestinationEntity(104U);
    msg.validity = 88U;
    msg.x = 0.681771526062;
    msg.y = 0.0464622253887;
    msg.z = 0.0949698957496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.174710358162);
    msg.setSource(27188U);
    msg.setSourceEntity(62U);
    msg.setDestination(29684U);
    msg.setDestinationEntity(3U);
    msg.validity = 83U;
    msg.x = 0.217470826212;
    msg.y = 0.941763076477;
    msg.z = 0.31024886093;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.0367592502619);
    msg.setSource(23375U);
    msg.setSourceEntity(103U);
    msg.setDestination(21541U);
    msg.setDestinationEntity(0U);
    msg.validity = 144U;
    msg.x = 0.507755906855;
    msg.y = 0.816437737364;
    msg.z = 0.589963266624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.225468481574);
    msg.setSource(15007U);
    msg.setSourceEntity(8U);
    msg.setDestination(9055U);
    msg.setDestinationEntity(205U);
    msg.validity = 249U;
    msg.x = 0.0314735037164;
    msg.y = 0.302143498203;
    msg.z = 0.412036021682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.429789557888);
    msg.setSource(56810U);
    msg.setSourceEntity(187U);
    msg.setDestination(41118U);
    msg.setDestinationEntity(126U);
    msg.validity = 247U;
    msg.x = 0.746175664559;
    msg.y = 0.817360793236;
    msg.z = 0.167497647174;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.0404862464754);
    msg.setSource(43791U);
    msg.setSourceEntity(248U);
    msg.setDestination(43899U);
    msg.setDestinationEntity(26U);
    msg.time = 0.80084941756;
    msg.x = 0.938844398637;
    msg.y = 0.346142515197;
    msg.z = 0.746140564475;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.0350181659496);
    msg.setSource(23667U);
    msg.setSourceEntity(223U);
    msg.setDestination(60021U);
    msg.setDestinationEntity(30U);
    msg.time = 0.678263200015;
    msg.x = 0.202024373203;
    msg.y = 0.220830987663;
    msg.z = 0.700900203692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.140502841923);
    msg.setSource(62337U);
    msg.setSourceEntity(197U);
    msg.setDestination(37527U);
    msg.setDestinationEntity(37U);
    msg.time = 0.927383446304;
    msg.x = 0.202964597017;
    msg.y = 0.98530158;
    msg.z = 0.200311153442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.469737100171);
    msg.setSource(64169U);
    msg.setSourceEntity(22U);
    msg.setDestination(53082U);
    msg.setDestinationEntity(73U);
    msg.validity = 79U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.598991282314;
    tmp_msg_0.y = 0.264776607294;
    tmp_msg_0.z = 0.797598787921;
    tmp_msg_0.phi = 0.381667572715;
    tmp_msg_0.theta = 0.493418822914;
    tmp_msg_0.psi = 0.973502201483;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.162663487403;
    tmp_msg_1.beam_height = 0.340542186386;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.904962893545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.0711290867958);
    msg.setSource(62246U);
    msg.setSourceEntity(198U);
    msg.setDestination(61252U);
    msg.setDestinationEntity(14U);
    msg.validity = 155U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0506930267232;
    tmp_msg_0.beam_height = 0.826494229093;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.476906008387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.614190805497);
    msg.setSource(48182U);
    msg.setSourceEntity(108U);
    msg.setDestination(12649U);
    msg.setDestinationEntity(163U);
    msg.validity = 224U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.107744582784;
    tmp_msg_0.y = 0.927202702161;
    tmp_msg_0.z = 0.301880988505;
    tmp_msg_0.phi = 0.611717046351;
    tmp_msg_0.theta = 0.623808294049;
    tmp_msg_0.psi = 0.423654216704;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.684018149393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.113160655842);
    msg.setSource(35327U);
    msg.setSourceEntity(202U);
    msg.setDestination(27490U);
    msg.setDestinationEntity(55U);
    msg.value = 0.450530967395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.0221582324943);
    msg.setSource(13688U);
    msg.setSourceEntity(254U);
    msg.setDestination(57479U);
    msg.setDestinationEntity(134U);
    msg.value = 0.326783846173;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.597931540307);
    msg.setSource(35693U);
    msg.setSourceEntity(107U);
    msg.setDestination(57771U);
    msg.setDestinationEntity(237U);
    msg.value = 0.847166785713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.573090634357);
    msg.setSource(22004U);
    msg.setSourceEntity(176U);
    msg.setDestination(37375U);
    msg.setDestinationEntity(149U);
    msg.value = 0.227803729377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.358149499892);
    msg.setSource(17107U);
    msg.setSourceEntity(47U);
    msg.setDestination(41768U);
    msg.setDestinationEntity(40U);
    msg.value = 0.731404409157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.92142804813);
    msg.setSource(39579U);
    msg.setSourceEntity(117U);
    msg.setDestination(13500U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0574518135598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.90332991865);
    msg.setSource(37035U);
    msg.setSourceEntity(175U);
    msg.setDestination(5337U);
    msg.setDestinationEntity(168U);
    msg.value = 0.976955840673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.384111208636);
    msg.setSource(27551U);
    msg.setSourceEntity(194U);
    msg.setDestination(61523U);
    msg.setDestinationEntity(163U);
    msg.value = 0.421859327393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.124677344199);
    msg.setSource(10174U);
    msg.setSourceEntity(19U);
    msg.setDestination(17980U);
    msg.setDestinationEntity(212U);
    msg.value = 0.495670735393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.902626204066);
    msg.setSource(20424U);
    msg.setSourceEntity(254U);
    msg.setDestination(52989U);
    msg.setDestinationEntity(192U);
    msg.value = 0.505983746558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.674154902986);
    msg.setSource(17256U);
    msg.setSourceEntity(211U);
    msg.setDestination(45193U);
    msg.setDestinationEntity(63U);
    msg.value = 0.698202756829;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.0311493489439);
    msg.setSource(64847U);
    msg.setSourceEntity(162U);
    msg.setDestination(527U);
    msg.setDestinationEntity(97U);
    msg.value = 0.594342291965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.860044302116);
    msg.setSource(7108U);
    msg.setSourceEntity(134U);
    msg.setDestination(41584U);
    msg.setDestinationEntity(154U);
    msg.value = 0.667878848389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.768321584906);
    msg.setSource(20638U);
    msg.setSourceEntity(140U);
    msg.setDestination(49718U);
    msg.setDestinationEntity(1U);
    msg.value = 0.347008030093;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.172327973515);
    msg.setSource(58830U);
    msg.setSourceEntity(137U);
    msg.setDestination(14973U);
    msg.setDestinationEntity(67U);
    msg.value = 0.618853689162;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.676763153697);
    msg.setSource(12926U);
    msg.setSourceEntity(209U);
    msg.setDestination(931U);
    msg.setDestinationEntity(65U);
    msg.value = 0.375064198718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.416754955467);
    msg.setSource(23219U);
    msg.setSourceEntity(244U);
    msg.setDestination(36053U);
    msg.setDestinationEntity(162U);
    msg.value = 0.449477173294;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.0407627050708);
    msg.setSource(53964U);
    msg.setSourceEntity(195U);
    msg.setDestination(15143U);
    msg.setDestinationEntity(244U);
    msg.value = 0.412166517723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.360645776353);
    msg.setSource(18783U);
    msg.setSourceEntity(182U);
    msg.setDestination(41324U);
    msg.setDestinationEntity(214U);
    msg.value = 0.616517168859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.634132701185);
    msg.setSource(16824U);
    msg.setSourceEntity(49U);
    msg.setDestination(8195U);
    msg.setDestinationEntity(195U);
    msg.value = 0.723544995722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.973531260264);
    msg.setSource(33994U);
    msg.setSourceEntity(79U);
    msg.setDestination(51357U);
    msg.setDestinationEntity(56U);
    msg.value = 0.588621394175;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.928852387635);
    msg.setSource(48379U);
    msg.setSourceEntity(156U);
    msg.setDestination(6006U);
    msg.setDestinationEntity(0U);
    msg.value = 0.498774670574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.970600733626);
    msg.setSource(58837U);
    msg.setSourceEntity(105U);
    msg.setDestination(3261U);
    msg.setDestinationEntity(43U);
    msg.value = 0.604388138432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.670135386164);
    msg.setSource(38821U);
    msg.setSourceEntity(128U);
    msg.setDestination(47411U);
    msg.setDestinationEntity(104U);
    msg.value = 0.330619657673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.428035641044);
    msg.setSource(64638U);
    msg.setSourceEntity(86U);
    msg.setDestination(47640U);
    msg.setDestinationEntity(245U);
    msg.direction = 0.334476402402;
    msg.speed = 0.445087731654;
    msg.turbulence = 0.430681187453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.653570333069);
    msg.setSource(25127U);
    msg.setSourceEntity(65U);
    msg.setDestination(16476U);
    msg.setDestinationEntity(11U);
    msg.direction = 0.0464389155599;
    msg.speed = 0.357255679302;
    msg.turbulence = 0.990507967326;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.621450007575);
    msg.setSource(28227U);
    msg.setSourceEntity(174U);
    msg.setDestination(46235U);
    msg.setDestinationEntity(29U);
    msg.direction = 0.00967740880878;
    msg.speed = 0.414385682805;
    msg.turbulence = 0.348367265752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.276281929748);
    msg.setSource(39756U);
    msg.setSourceEntity(53U);
    msg.setDestination(62130U);
    msg.setDestinationEntity(219U);
    msg.value = 0.782545155069;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.590435815388);
    msg.setSource(38054U);
    msg.setSourceEntity(246U);
    msg.setDestination(42201U);
    msg.setDestinationEntity(173U);
    msg.value = 0.0845474521772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.82030458784);
    msg.setSource(48358U);
    msg.setSourceEntity(213U);
    msg.setDestination(38756U);
    msg.setDestinationEntity(29U);
    msg.value = 0.712014243924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.747266044903);
    msg.setSource(26079U);
    msg.setSourceEntity(49U);
    msg.setDestination(14921U);
    msg.setDestinationEntity(86U);
    msg.value.assign("WHNBUKANHQSUQFCZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.836632067177);
    msg.setSource(60590U);
    msg.setSourceEntity(144U);
    msg.setDestination(28982U);
    msg.setDestinationEntity(125U);
    msg.value.assign("PSLUNZMAEDYVSDHXUOEZFCQXUEMEQNCVMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.214206215337);
    msg.setSource(10763U);
    msg.setSourceEntity(91U);
    msg.setDestination(34363U);
    msg.setDestinationEntity(179U);
    msg.value.assign("GQHXWZFAWCDBHBIQHZUPGNXFODMXHXLQWQHPAAGZWBPTMYFDQVNEXAFFCJNTOUCJUBJTKYJGH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.141085800743);
    msg.setSource(51573U);
    msg.setSourceEntity(133U);
    msg.setDestination(2914U);
    msg.setDestinationEntity(24U);
    const char tmp_msg_0[] = {107, 86, 48, 39, -34, 48, 90, -39, -99, -69, 85, -3, -121, -32, 58, 37, -128, -29, 56, -43, 123, 51, -49, 34, -69, -83, 104, -111, -63, -104, 84, 29, -64, 53, 27, -127, 79, -82, 8, 16, 24, -100, -63, -45, 55, -23, 121, 55, -75, 69, -107, 40, 48, 115, -123, -45, -6, -108, 53, -84, -17, -88, -41, 88, -37, -27, -122, 85, -8, -105, -30, 71, -110, -125, -7, 109, 116, -61, -124, -28, 61, 52, 95, 30, 100, -76, -56, 104, -10, -110, 66, -44, 116, 57, 36, -53, 9, 15, 58, 25, -103, 110, -101, -81, -58, -128, -19, 107, 10, -25, -95, 59, -84, 15, 61, -93, -16, 37, 67, 29, -6, -72, 104, -52, 108, 19, 107, -22, -60, 76, 72, -66, -81, 87, -68, 39, 99, 116, -30, 123, -51, -7, 9, -36, -126, -34, 32, -77, -52, -89, -13, -98, 56, 120, -86, 96, 88, -52, -115, 107, 76, 91, 38, 84, -65, -70, -45, -112, -97, 12, 107, 72, 91, -7, 58, 12, -73, 7, -42, -58, -106, 42, 100, -27, -126, -60, 20, 14, 94, 15, 113, -68, -77, 52, -118, -113, -56, -113, -47, 26, -66, 88, 42, 72, -40, 81, 1, -114, -70, -70, -51, -67, -107, -32, -22, -39, -81, -61, -10, -62, -58, -90, 36, -128, -77, -9, -60, -125, -41, -50, 12, 15, -94, -35, -108, 68, -13, 73, 122, -43, 55, -47, -47, -35, 90, -78, -122, -14};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.990104559966);
    msg.setSource(52759U);
    msg.setSourceEntity(237U);
    msg.setDestination(50655U);
    msg.setDestinationEntity(158U);
    const char tmp_msg_0[] = {117, -80, -93, -56, -97, -3, 114, -92, -23, -55, -76, 44, -72, -126, -58, 40, 27, 55, -4, -99, -122, -109, 103, -39, 109, 62, -2, -26, -116, 69, 121, -79, 91, 52, -10, -42, -34, -106, -71, -90, -115, 113, 24, -104, 18, 86, -97, 108, 63, 12, 88, 65, -90, 51, -33, 32, 121, 126, 120, 11, -28, 104, 5, -105, 108, -102, 44, 10, -114, -49, -23, -11, 123, -87, 9, -67, 94, -114, -81, -128, -39, -83, -111, 62, 66, 0, 120, 82, -23, 52, -41, 4, 52, -24, 68, 96, -10, 38, 55, 57, 55, -42, -121, 120, -8, 101, -97, -66, 25, -37, -45, -52, -61, -95, 52, 21, -88, -16, -54, -117, 124, -73, -23, -93, 114, -109, 29, 16, 97, -29, -27, -13, 82, -49, 41, -31, -12, 42, 46, 7, -4, -44, -127, -60, 95, 7, 56, -119, -26, 92, -74, 18, 123, 110, 42, -69, -39, 61, 86, 119, 11, -125, 68, -103, 77};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.416636906334);
    msg.setSource(14123U);
    msg.setSourceEntity(154U);
    msg.setDestination(6741U);
    msg.setDestinationEntity(38U);
    const char tmp_msg_0[] = {-15, 38, -71, 13, -84, -30, 93, -116, -56, -6, -88, 51, -124, -128, -89, 100, -71, -26, 110, -110, 117, -88, 115, 46, 18, 103, -127, -9, -90, 28, -110, 36, 105, -17, -4, -18, 84, -71, 105, -54, -26, 83, 87, -44, 15, -94, 74, -13, 63, 118, -19, -125, -42, 42, -58, 105, 76, -48, -27, -72, 14, -43, -52, -21, 78, -89, 24, 31, 37, 123, -76, -15, 60, 60, -100, 62, 56, -82, 16, 87, -93, -111, -1, 3, 125, -49, 39, -95, -124, 90, 47, -35, -77, -58, -46, -54, 81, -72, 51, -118, 7, 77, 89, 19, -40, -45, 44, -109, -11, -98, -29, 116, -88, -87, 106, 115, 96, 4, -67, -76, 112, 4, 51, -61, -13, 48, 62, 83, 13, -44, 124, 39, -28, -72, -36, 67, -97, 104, 62, -9, -113, 103, -122, -20, 94, 29, -66, 104, 86, -55, -27, -107, 119, -107, 11, -44, 38, -58, 7, 125, 117, 92, 117, 79, -43, 97, 18, 113, -109, 50, -92, 56, -37, -45, -95, 45, 33, -101, -98, -85, 65, -110, 37, 121, -100, -51, 100, 117, -98, -25, 103, 23};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.154203334437);
    msg.setSource(63358U);
    msg.setSourceEntity(242U);
    msg.setDestination(34254U);
    msg.setDestinationEntity(93U);
    msg.type = 0U;
    msg.frequency = 3075597889U;
    msg.min_range = 2980U;
    msg.max_range = 3898U;
    msg.bits_per_point = 215U;
    msg.scale_factor = 0.768476118143;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.473509777138;
    tmp_msg_0.beam_height = 0.847161468897;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-3, -108, -120, -36, -102, -29, 30, -15, -103, 12, 117, 31, -2, -13, 121, 45, -46, -119, -128, -126, 9, 34, 58, 64, 7, 66, -38, -48, -60, -31, 122, -110, -47, -55, -64, -21, -31, -85, -84, 15, 88, 10, -95, -25, 68, -128, -39, 126, -33, -95, 30, -127, -86, 67, 96, -105, 88, -110, -71, -65, 108, -102, -86, 73, -91, 16, 96, -94, -118, 0, 74, 123, -29, -51, 63, -101, 18, 0, -14, -56, 104, -63, 12, -46, -40, 4, -6, -104, 48, -90, -60, 18, -28, 39, -115, 16, 103, 56, -64, -117, -31, 21, -85, 104, -11, -92, 115, -11, -34, -33, -122, -127, -82, -29, 85, 12, 101, -46, -70, -38, -48, 28, 7, 65, 109, -35, 60, 30, 54, 65, -108, 72, -49, -114, -67, 2, 30, 93, -114, -90, -34, 69, -51, 102, -115, 107, 63, 88, 81, 13, -59, -70, -120, -120, -99, -82, -40, -27, 24, 39, 52, -99, 46, -110, 10, -38, -42, -22, -102, -40, 1, 21, -49, -97, 52, 107, 97, -38};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.60712194224);
    msg.setSource(23761U);
    msg.setSourceEntity(236U);
    msg.setDestination(43743U);
    msg.setDestinationEntity(222U);
    msg.type = 209U;
    msg.frequency = 203523808U;
    msg.min_range = 50731U;
    msg.max_range = 2870U;
    msg.bits_per_point = 208U;
    msg.scale_factor = 0.496816487866;
    const char tmp_msg_0[] = {-9, -107, -87, 54, -85, 97, -72, 61, -101, -33, 99, -49, -47, -91, -37, 1, -7, 89, -69, -111, 21, -98, 18, -66, 69, 52, -35, -101, -100, 4, -61, -5, -71, 20, -127, -58, -89, 109, -38};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.65303348079);
    msg.setSource(35644U);
    msg.setSourceEntity(82U);
    msg.setDestination(5821U);
    msg.setDestinationEntity(246U);
    msg.type = 244U;
    msg.frequency = 705826496U;
    msg.min_range = 18559U;
    msg.max_range = 9602U;
    msg.bits_per_point = 186U;
    msg.scale_factor = 0.202577321878;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.266757814565;
    tmp_msg_0.beam_height = 0.700843908778;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {27, 97, -114, 75, -123, 96, -124, -44, 29, -5, 121, -83, -31, -21, -18, 117, 94, 49, 5, -16, 9, 93, -7, -100, 116, -39, -2, -97, -71, -87, -79, 75, 32, -17, 121, 65, -21, 37, 12, 110, 19, 82, 25, -121, 15, -107, -48, -90, -123, 44, -28, -31, 33, -18, -67, -117, 73, -9, 41, 37, 84, -20, -63, -81, 89, 8, -66, -15, 17, -42, -34, 17, 44, 70, 117, 28, 89, -49, 109, 36, -61, -94, 13, 39, -99, -53, -98, 21, -7, 86, 0, -32, 2, -30, -110, 11, -94, 124, -80, -77, -5, -7, 35, -72, -109, -99, -63, 34, -2, 62, -52, 66, -33, 81, -39, 59, 15, -85, 35, -77, -75, -61, 29, -120, -32, 46, 74, 106, -76, -90, 76, 17, -113, 45, -14, -53, -67, -15, -8, -55, 24, 99, -96, -1, 65, 84, 30, 106, 67, 29, 54, -116, -24, 86, 59, -89, -113, 104, 89, 12, -23, -126, -7, -72, -6, -10, 47, -89, -69, 28, -37, 46, 52, 21, -21, 100, 121, -23, 108, -75, 87, 64, 49, -3, 23, -22, 107, 39, 77, -74, -78, -113, -107, 46, 58, 65, -60, -23, -30, -87, 33, -23, 122, 83, 94, 108, 49, 9, -13, -124, -36, 74, 54, -83, 19, -57, -126, 41, -20, 22, -40, -52, 48, 30, -89, 95, -77, 87, -83, 85, -112, 117, 59, -18, -19, 25, 32, 109, 68, 0, -53, 5, -95, -10};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.0746686021743);
    msg.setSource(61551U);
    msg.setSourceEntity(59U);
    msg.setDestination(34585U);
    msg.setDestinationEntity(214U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.671423267372);
    msg.setSource(16756U);
    msg.setSourceEntity(89U);
    msg.setDestination(11292U);
    msg.setDestinationEntity(250U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.908237979881);
    msg.setSource(28611U);
    msg.setSourceEntity(106U);
    msg.setDestination(37756U);
    msg.setDestinationEntity(92U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.286530754628);
    msg.setSource(49091U);
    msg.setSourceEntity(91U);
    msg.setDestination(1728U);
    msg.setDestinationEntity(248U);
    msg.op = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.320671551248);
    msg.setSource(49243U);
    msg.setSourceEntity(210U);
    msg.setDestination(23061U);
    msg.setDestinationEntity(187U);
    msg.op = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.400277794291);
    msg.setSource(54738U);
    msg.setSourceEntity(38U);
    msg.setDestination(15798U);
    msg.setDestinationEntity(2U);
    msg.op = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.764364724613);
    msg.setSource(23013U);
    msg.setSourceEntity(25U);
    msg.setDestination(39625U);
    msg.setDestinationEntity(229U);
    msg.value = 0.948582188337;
    msg.confidence = 0.652756593544;
    msg.opmodes.assign("XAVLERUMBXOZOGCKQTRPWHVOHHTUVUQSMRTKUUXLHBS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.812849388067);
    msg.setSource(17321U);
    msg.setSourceEntity(60U);
    msg.setDestination(62937U);
    msg.setDestinationEntity(97U);
    msg.value = 0.587661986811;
    msg.confidence = 0.107153696684;
    msg.opmodes.assign("NEZZRNWYUFIXIOPOQDUAHLGENGQWXRFZRSYMTVBPCDXYGBRIQSRXNCHWILSZPOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.407343020718);
    msg.setSource(4657U);
    msg.setSourceEntity(1U);
    msg.setDestination(14273U);
    msg.setDestinationEntity(151U);
    msg.value = 0.926555659186;
    msg.confidence = 0.229615108042;
    msg.opmodes.assign("RVEZWKNDVKPGQUSEVDRTDCBELHNMUWVRYINLMABMDQTFRBHUCUZZOIAOYVUKLHCGAKDOFXSDQPIWYGVURHGAVEADMTJEXNGCJOIAXNZLBBCFIMKUZKQUMMXFEWGKPRSSQKPEDRLYHQCCXGOZFSVNYIJEPSHWWTECCQLANBLGTFOXY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.86069824458);
    msg.setSource(35219U);
    msg.setSourceEntity(21U);
    msg.setDestination(50387U);
    msg.setDestinationEntity(173U);
    msg.itow = 332232580U;
    msg.lat = 0.817234213843;
    msg.lon = 0.717558900756;
    msg.height_ell = 0.0623253704968;
    msg.height_sea = 0.0496533718928;
    msg.hacc = 0.535402123807;
    msg.vacc = 0.695756796659;
    msg.vel_n = 0.433742928673;
    msg.vel_e = 0.449600739219;
    msg.vel_d = 0.602109448173;
    msg.speed = 0.418247015681;
    msg.gspeed = 0.222527052308;
    msg.heading = 0.524905960059;
    msg.sacc = 0.283258400322;
    msg.cacc = 0.536563863925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.516007854807);
    msg.setSource(2567U);
    msg.setSourceEntity(161U);
    msg.setDestination(7095U);
    msg.setDestinationEntity(230U);
    msg.itow = 3362490921U;
    msg.lat = 0.253750469862;
    msg.lon = 0.688089509577;
    msg.height_ell = 0.289514938895;
    msg.height_sea = 0.948757463503;
    msg.hacc = 0.832620945119;
    msg.vacc = 0.90106915806;
    msg.vel_n = 0.596203298471;
    msg.vel_e = 0.265335238342;
    msg.vel_d = 0.380343320142;
    msg.speed = 0.570968876607;
    msg.gspeed = 0.66463082567;
    msg.heading = 0.247087232537;
    msg.sacc = 0.884553044751;
    msg.cacc = 0.794715598948;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.17463524541);
    msg.setSource(32570U);
    msg.setSourceEntity(112U);
    msg.setDestination(8554U);
    msg.setDestinationEntity(138U);
    msg.itow = 1406519949U;
    msg.lat = 0.034354986304;
    msg.lon = 0.107000812352;
    msg.height_ell = 0.764228768532;
    msg.height_sea = 0.604844316855;
    msg.hacc = 0.492214029657;
    msg.vacc = 0.206068634509;
    msg.vel_n = 0.936324386494;
    msg.vel_e = 0.709358253797;
    msg.vel_d = 0.862339028233;
    msg.speed = 0.265212587907;
    msg.gspeed = 0.505646963294;
    msg.heading = 0.768731016;
    msg.sacc = 0.165255239412;
    msg.cacc = 0.844772669065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.771126586434);
    msg.setSource(17702U);
    msg.setSourceEntity(181U);
    msg.setDestination(27305U);
    msg.setDestinationEntity(13U);
    msg.id = 238U;
    msg.value = 0.058994905442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.958668541764);
    msg.setSource(40572U);
    msg.setSourceEntity(63U);
    msg.setDestination(8167U);
    msg.setDestinationEntity(166U);
    msg.id = 239U;
    msg.value = 0.256654863935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.882749868384);
    msg.setSource(10282U);
    msg.setSourceEntity(90U);
    msg.setDestination(45674U);
    msg.setDestinationEntity(4U);
    msg.id = 68U;
    msg.value = 0.391785170914;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.842170998192);
    msg.setSource(62301U);
    msg.setSourceEntity(165U);
    msg.setDestination(43624U);
    msg.setDestinationEntity(79U);
    msg.x = 0.515968208641;
    msg.y = 0.486978496852;
    msg.z = 0.441216351708;
    msg.phi = 0.19030930783;
    msg.theta = 0.721178049119;
    msg.psi = 0.3944698813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.672914630754);
    msg.setSource(6515U);
    msg.setSourceEntity(243U);
    msg.setDestination(60934U);
    msg.setDestinationEntity(109U);
    msg.x = 0.49544635233;
    msg.y = 0.222336206108;
    msg.z = 0.0330825608822;
    msg.phi = 0.779934338263;
    msg.theta = 0.364992605523;
    msg.psi = 0.064727383881;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.875072796749);
    msg.setSource(30098U);
    msg.setSourceEntity(157U);
    msg.setDestination(64800U);
    msg.setDestinationEntity(238U);
    msg.x = 0.581417873622;
    msg.y = 0.644376439902;
    msg.z = 0.306965496282;
    msg.phi = 0.509709553586;
    msg.theta = 0.445835316524;
    msg.psi = 0.233937752078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.993491028646);
    msg.setSource(17989U);
    msg.setSourceEntity(117U);
    msg.setDestination(46124U);
    msg.setDestinationEntity(17U);
    msg.beam_width = 0.762635547368;
    msg.beam_height = 0.183307661331;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.991309958554);
    msg.setSource(63913U);
    msg.setSourceEntity(169U);
    msg.setDestination(40685U);
    msg.setDestinationEntity(250U);
    msg.beam_width = 0.0108546840091;
    msg.beam_height = 0.339000743302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.158956388509);
    msg.setSource(43929U);
    msg.setSourceEntity(5U);
    msg.setDestination(4955U);
    msg.setDestinationEntity(196U);
    msg.beam_width = 0.84679263185;
    msg.beam_height = 0.888813303123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.641247046597);
    msg.setSource(45420U);
    msg.setSourceEntity(120U);
    msg.setDestination(43693U);
    msg.setDestinationEntity(235U);
    msg.sane = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.774903181015);
    msg.setSource(17539U);
    msg.setSourceEntity(168U);
    msg.setDestination(6724U);
    msg.setDestinationEntity(174U);
    msg.sane = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.165448270516);
    msg.setSource(42650U);
    msg.setSourceEntity(9U);
    msg.setDestination(1910U);
    msg.setDestinationEntity(113U);
    msg.sane = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.393502070737);
    msg.setSource(23592U);
    msg.setSourceEntity(3U);
    msg.setDestination(10636U);
    msg.setDestinationEntity(36U);
    msg.value = 0.70693744728;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.621885734977);
    msg.setSource(63869U);
    msg.setSourceEntity(34U);
    msg.setDestination(61564U);
    msg.setDestinationEntity(127U);
    msg.value = 0.0650186094019;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.43899801142);
    msg.setSource(29627U);
    msg.setSourceEntity(175U);
    msg.setDestination(33302U);
    msg.setDestinationEntity(1U);
    msg.value = 0.990613926808;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.881545083242);
    msg.setSource(16663U);
    msg.setSourceEntity(119U);
    msg.setDestination(6980U);
    msg.setDestinationEntity(60U);
    msg.value = 0.464920617339;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.521748993323);
    msg.setSource(4330U);
    msg.setSourceEntity(128U);
    msg.setDestination(58599U);
    msg.setDestinationEntity(227U);
    msg.value = 0.587269823648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.480068317655);
    msg.setSource(37203U);
    msg.setSourceEntity(190U);
    msg.setDestination(59124U);
    msg.setDestinationEntity(222U);
    msg.value = 0.619054164758;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.63146293446);
    msg.setSource(10599U);
    msg.setSourceEntity(36U);
    msg.setDestination(57214U);
    msg.setDestinationEntity(191U);
    msg.value = 0.158264519674;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.593485093586);
    msg.setSource(12694U);
    msg.setSourceEntity(173U);
    msg.setDestination(13755U);
    msg.setDestinationEntity(251U);
    msg.value = 0.151387124694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.75951145082);
    msg.setSource(22733U);
    msg.setSourceEntity(253U);
    msg.setDestination(14869U);
    msg.setDestinationEntity(3U);
    msg.value = 0.8947470457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.187661556035);
    msg.setSource(48914U);
    msg.setSourceEntity(155U);
    msg.setDestination(18822U);
    msg.setDestinationEntity(95U);
    msg.value = 0.239058145713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.160982906568);
    msg.setSource(8626U);
    msg.setSourceEntity(71U);
    msg.setDestination(49145U);
    msg.setDestinationEntity(117U);
    msg.value = 0.19541463204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.318777232328);
    msg.setSource(13526U);
    msg.setSourceEntity(150U);
    msg.setDestination(36274U);
    msg.setDestinationEntity(165U);
    msg.value = 0.425270296161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.54406560641);
    msg.setSource(32618U);
    msg.setSourceEntity(126U);
    msg.setDestination(29713U);
    msg.setDestinationEntity(147U);
    msg.value = 0.816489175972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.873893773031);
    msg.setSource(38328U);
    msg.setSourceEntity(23U);
    msg.setDestination(55622U);
    msg.setDestinationEntity(38U);
    msg.value = 0.576556961088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.85111092149);
    msg.setSource(54576U);
    msg.setSourceEntity(186U);
    msg.setDestination(6554U);
    msg.setDestinationEntity(56U);
    msg.value = 0.731561162955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.0013596699991);
    msg.setSource(27521U);
    msg.setSourceEntity(219U);
    msg.setDestination(40018U);
    msg.setDestinationEntity(163U);
    msg.value = 0.714882632449;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.270628590035);
    msg.setSource(18839U);
    msg.setSourceEntity(111U);
    msg.setDestination(50621U);
    msg.setDestinationEntity(147U);
    msg.value = 0.0517358310672;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.0786103434405);
    msg.setSource(45210U);
    msg.setSourceEntity(13U);
    msg.setDestination(38720U);
    msg.setDestinationEntity(226U);
    msg.value = 0.88181272476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.346955667465);
    msg.setSource(26748U);
    msg.setSourceEntity(162U);
    msg.setDestination(432U);
    msg.setDestinationEntity(15U);
    msg.value = 0.0777914047233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.208828191783);
    msg.setSource(57067U);
    msg.setSourceEntity(201U);
    msg.setDestination(11412U);
    msg.setDestinationEntity(8U);
    msg.value = 0.09815925419;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.207908592752);
    msg.setSource(65106U);
    msg.setSourceEntity(50U);
    msg.setDestination(46588U);
    msg.setDestinationEntity(225U);
    msg.value = 0.446815796316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.953494713708);
    msg.setSource(53866U);
    msg.setSourceEntity(230U);
    msg.setDestination(10741U);
    msg.setDestinationEntity(130U);
    msg.value = 0.190037199554;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.764682113351);
    msg.setSource(32838U);
    msg.setSourceEntity(163U);
    msg.setDestination(40290U);
    msg.setDestinationEntity(42U);
    msg.value = 0.526760239484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.987258067906);
    msg.setSource(57537U);
    msg.setSourceEntity(175U);
    msg.setDestination(11387U);
    msg.setDestinationEntity(230U);
    msg.value = 0.226187990653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.969482999916);
    msg.setSource(56727U);
    msg.setSourceEntity(148U);
    msg.setDestination(62167U);
    msg.setDestinationEntity(249U);
    msg.validity = 28398U;
    msg.type = 106U;
    msg.tow = 3145702120U;
    msg.base_lat = 0.349934858716;
    msg.base_lon = 0.192609630276;
    msg.base_height = 0.774144084435;
    msg.n = 0.874251794089;
    msg.e = 0.442856026335;
    msg.d = 0.425034849216;
    msg.v_n = 0.858119250464;
    msg.v_e = 0.785748999505;
    msg.v_d = 0.323856436269;
    msg.satellites = 147U;
    msg.iar_hyp = 51240U;
    msg.iar_ratio = 0.98969935197;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.972728305575);
    msg.setSource(2305U);
    msg.setSourceEntity(223U);
    msg.setDestination(4095U);
    msg.setDestinationEntity(32U);
    msg.validity = 53779U;
    msg.type = 148U;
    msg.tow = 430630701U;
    msg.base_lat = 0.283467464569;
    msg.base_lon = 0.641413497934;
    msg.base_height = 0.988941415343;
    msg.n = 0.0721458529958;
    msg.e = 0.943858916392;
    msg.d = 0.307186886194;
    msg.v_n = 0.806060955148;
    msg.v_e = 0.545599090425;
    msg.v_d = 0.499379800365;
    msg.satellites = 57U;
    msg.iar_hyp = 15260U;
    msg.iar_ratio = 0.945570121319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.476155254905);
    msg.setSource(49284U);
    msg.setSourceEntity(154U);
    msg.setDestination(23674U);
    msg.setDestinationEntity(171U);
    msg.validity = 47116U;
    msg.type = 88U;
    msg.tow = 2771291979U;
    msg.base_lat = 0.336566247309;
    msg.base_lon = 0.8005750814;
    msg.base_height = 0.668306896255;
    msg.n = 0.816230287185;
    msg.e = 0.201756170115;
    msg.d = 0.621022073128;
    msg.v_n = 0.519837851682;
    msg.v_e = 0.930674348605;
    msg.v_d = 0.767899198288;
    msg.satellites = 47U;
    msg.iar_hyp = 38413U;
    msg.iar_ratio = 0.791960359355;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.517020329715);
    msg.setSource(59374U);
    msg.setSourceEntity(248U);
    msg.setDestination(58128U);
    msg.setDestinationEntity(77U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.230360918737;
    tmp_msg_0.lon = 0.737665514491;
    tmp_msg_0.height = 0.921739880056;
    tmp_msg_0.x = 0.110779298541;
    tmp_msg_0.y = 0.248923984606;
    tmp_msg_0.z = 0.0476449279631;
    tmp_msg_0.phi = 0.89526728696;
    tmp_msg_0.theta = 0.932145468546;
    tmp_msg_0.psi = 0.141940510369;
    tmp_msg_0.u = 0.536947754842;
    tmp_msg_0.v = 0.6711219871;
    tmp_msg_0.w = 0.61914139479;
    tmp_msg_0.vx = 0.270681479335;
    tmp_msg_0.vy = 0.271752641746;
    tmp_msg_0.vz = 0.577580538464;
    tmp_msg_0.p = 0.563002492905;
    tmp_msg_0.q = 0.33480873756;
    tmp_msg_0.r = 0.200967319935;
    tmp_msg_0.depth = 0.967725664676;
    tmp_msg_0.alt = 0.587653048458;
    msg.state.set(tmp_msg_0);
    msg.type = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.855304313201);
    msg.setSource(56117U);
    msg.setSourceEntity(60U);
    msg.setDestination(28628U);
    msg.setDestinationEntity(88U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.365855122365;
    tmp_msg_0.lon = 0.237858751893;
    tmp_msg_0.height = 0.710952956141;
    tmp_msg_0.x = 0.216629486582;
    tmp_msg_0.y = 0.616007715505;
    tmp_msg_0.z = 0.672501697109;
    tmp_msg_0.phi = 0.514108817706;
    tmp_msg_0.theta = 0.772903351074;
    tmp_msg_0.psi = 0.229001529804;
    tmp_msg_0.u = 0.98703584687;
    tmp_msg_0.v = 0.822083392823;
    tmp_msg_0.w = 0.640999971308;
    tmp_msg_0.vx = 0.764836700627;
    tmp_msg_0.vy = 0.10627040921;
    tmp_msg_0.vz = 0.191512422897;
    tmp_msg_0.p = 0.756609456137;
    tmp_msg_0.q = 0.313576663991;
    tmp_msg_0.r = 0.685016420128;
    tmp_msg_0.depth = 0.763619048211;
    tmp_msg_0.alt = 0.704714774153;
    msg.state.set(tmp_msg_0);
    msg.type = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.712152918982);
    msg.setSource(62142U);
    msg.setSourceEntity(244U);
    msg.setDestination(44567U);
    msg.setDestinationEntity(67U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.823977817076;
    tmp_msg_0.lon = 0.943125427217;
    tmp_msg_0.height = 0.268821090665;
    tmp_msg_0.x = 0.17245680148;
    tmp_msg_0.y = 0.928055186375;
    tmp_msg_0.z = 0.0756120235101;
    tmp_msg_0.phi = 0.373068757588;
    tmp_msg_0.theta = 0.979550392279;
    tmp_msg_0.psi = 0.74432774415;
    tmp_msg_0.u = 0.410959718319;
    tmp_msg_0.v = 0.633216293456;
    tmp_msg_0.w = 0.521669838783;
    tmp_msg_0.vx = 0.750814368133;
    tmp_msg_0.vy = 0.954987078089;
    tmp_msg_0.vz = 0.433003516323;
    tmp_msg_0.p = 0.181602100719;
    tmp_msg_0.q = 0.607035258341;
    tmp_msg_0.r = 0.232231823027;
    tmp_msg_0.depth = 0.315047760233;
    tmp_msg_0.alt = 0.0457282115062;
    msg.state.set(tmp_msg_0);
    msg.type = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.733805978695);
    msg.setSource(39604U);
    msg.setSourceEntity(120U);
    msg.setDestination(56764U);
    msg.setDestinationEntity(204U);
    msg.value = 0.106225861411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.223343785666);
    msg.setSource(62461U);
    msg.setSourceEntity(119U);
    msg.setDestination(27700U);
    msg.setDestinationEntity(23U);
    msg.value = 0.834781024151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.94004703117);
    msg.setSource(6606U);
    msg.setSourceEntity(245U);
    msg.setDestination(43629U);
    msg.setDestinationEntity(85U);
    msg.value = 0.0769848476913;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.977579643715);
    msg.setSource(60945U);
    msg.setSourceEntity(99U);
    msg.setDestination(36334U);
    msg.setDestinationEntity(17U);
    msg.value = 0.283782000812;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.692002043809);
    msg.setSource(28761U);
    msg.setSourceEntity(33U);
    msg.setDestination(21734U);
    msg.setDestinationEntity(78U);
    msg.value = 0.408050811009;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.146131612928);
    msg.setSource(9977U);
    msg.setSourceEntity(84U);
    msg.setDestination(38940U);
    msg.setDestinationEntity(187U);
    msg.value = 0.635503920156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.830094020443);
    msg.setSource(47683U);
    msg.setSourceEntity(214U);
    msg.setDestination(9316U);
    msg.setDestinationEntity(0U);
    msg.value = 0.0461134125005;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.981552556117);
    msg.setSource(60443U);
    msg.setSourceEntity(95U);
    msg.setDestination(47639U);
    msg.setDestinationEntity(49U);
    msg.value = 0.437558940615;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.29981801794);
    msg.setSource(21778U);
    msg.setSourceEntity(52U);
    msg.setDestination(23010U);
    msg.setDestinationEntity(161U);
    msg.value = 0.587266677558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.0679639757142);
    msg.setSource(60551U);
    msg.setSourceEntity(60U);
    msg.setDestination(29271U);
    msg.setDestinationEntity(146U);
    msg.value = 0.778922570057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.623160789611);
    msg.setSource(30875U);
    msg.setSourceEntity(30U);
    msg.setDestination(21885U);
    msg.setDestinationEntity(45U);
    msg.value = 0.227496960449;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.814534534503);
    msg.setSource(15111U);
    msg.setSourceEntity(52U);
    msg.setDestination(8238U);
    msg.setDestinationEntity(74U);
    msg.value = 0.834479932369;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.167157828689);
    msg.setSource(60678U);
    msg.setSourceEntity(201U);
    msg.setDestination(1956U);
    msg.setDestinationEntity(23U);
    msg.value = 0.822239025648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.913041244043);
    msg.setSource(64074U);
    msg.setSourceEntity(190U);
    msg.setDestination(15649U);
    msg.setDestinationEntity(9U);
    msg.value = 0.391312455566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.432971777601);
    msg.setSource(52166U);
    msg.setSourceEntity(224U);
    msg.setDestination(44853U);
    msg.setDestinationEntity(97U);
    msg.value = 0.327204377708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.49473097862);
    msg.setSource(44036U);
    msg.setSourceEntity(74U);
    msg.setDestination(21460U);
    msg.setDestinationEntity(47U);
    msg.id = 147U;
    msg.zoom = 71U;
    msg.action = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.636623226277);
    msg.setSource(23778U);
    msg.setSourceEntity(135U);
    msg.setDestination(42217U);
    msg.setDestinationEntity(231U);
    msg.id = 218U;
    msg.zoom = 201U;
    msg.action = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.973202258761);
    msg.setSource(31609U);
    msg.setSourceEntity(119U);
    msg.setDestination(13237U);
    msg.setDestinationEntity(213U);
    msg.id = 93U;
    msg.zoom = 64U;
    msg.action = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.408449652967);
    msg.setSource(9291U);
    msg.setSourceEntity(227U);
    msg.setDestination(552U);
    msg.setDestinationEntity(160U);
    msg.id = 254U;
    msg.value = 0.0667189742559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.868331241347);
    msg.setSource(29447U);
    msg.setSourceEntity(42U);
    msg.setDestination(46227U);
    msg.setDestinationEntity(114U);
    msg.id = 227U;
    msg.value = 0.327905919227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.308231208581);
    msg.setSource(45185U);
    msg.setSourceEntity(157U);
    msg.setDestination(39418U);
    msg.setDestinationEntity(64U);
    msg.id = 197U;
    msg.value = 0.254360351256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.523484564096);
    msg.setSource(21012U);
    msg.setSourceEntity(124U);
    msg.setDestination(2917U);
    msg.setDestinationEntity(25U);
    msg.id = 196U;
    msg.value = 0.859192197806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.715893898676);
    msg.setSource(35403U);
    msg.setSourceEntity(46U);
    msg.setDestination(34713U);
    msg.setDestinationEntity(120U);
    msg.id = 212U;
    msg.value = 0.822698427994;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.655864868542);
    msg.setSource(2585U);
    msg.setSourceEntity(114U);
    msg.setDestination(57608U);
    msg.setDestinationEntity(12U);
    msg.id = 4U;
    msg.value = 0.733586490264;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.535766325424);
    msg.setSource(53109U);
    msg.setSourceEntity(35U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(16U);
    msg.id = 234U;
    msg.angle = 0.415083658258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.260079795319);
    msg.setSource(4992U);
    msg.setSourceEntity(10U);
    msg.setDestination(23092U);
    msg.setDestinationEntity(94U);
    msg.id = 118U;
    msg.angle = 0.949238784683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.598693436468);
    msg.setSource(49706U);
    msg.setSourceEntity(157U);
    msg.setDestination(46002U);
    msg.setDestinationEntity(80U);
    msg.id = 93U;
    msg.angle = 0.304571247684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.157220743106);
    msg.setSource(28641U);
    msg.setSourceEntity(87U);
    msg.setDestination(29915U);
    msg.setDestinationEntity(158U);
    msg.op = 111U;
    msg.actions.assign("THUDXLGZRGEFCMVVADQUFHFMQMKNGVRIWWEIOWQQCZISTHWANBYZLYEKSTSKFSNKFATAPERINHIPMARGCVEDYUXHOOJYBEJWGVPQGTYZMDCXLCFIXLIUPFNVZWPSWNAPDJTMNLLLZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.438330149486);
    msg.setSource(18189U);
    msg.setSourceEntity(197U);
    msg.setDestination(64157U);
    msg.setDestinationEntity(216U);
    msg.op = 156U;
    msg.actions.assign("RGBRSVZYQRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.504421023526);
    msg.setSource(35909U);
    msg.setSourceEntity(36U);
    msg.setDestination(10557U);
    msg.setDestinationEntity(33U);
    msg.op = 73U;
    msg.actions.assign("AYXZRCWSBIDDNGFLZGKYTRMUKRPTPEIXKJLXMDXCVLARWQJFKFOXQFCZFEPMRZJQYZZVFSWVGEURUUNLSCQXGZANSVFVWQYRXDCUKWTBNEPTLEYPGJQNJTIYMIARAWCBSZSCNECIZOMJGPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.327725497404);
    msg.setSource(15260U);
    msg.setSourceEntity(104U);
    msg.setDestination(10872U);
    msg.setDestinationEntity(148U);
    msg.actions.assign("XLJQRQXMODYEDGCRFPBBIDNNHNFLLIFSZUTQVAIZFZLPNO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.0225492141552);
    msg.setSource(49127U);
    msg.setSourceEntity(7U);
    msg.setDestination(29580U);
    msg.setDestinationEntity(243U);
    msg.actions.assign("OHFLZIJPNVMMZNBUHKOQEZYEGPJNNECZTRKSAOVTZTVBROQAGSEHCFQAHYRPNBXVUBKPMAKIJFVXGXADZEGATBUYANQGWWDZRGLIIXXSYPLCTFAGDISUZDKNUPWWLLUFXFAKETMSVILCRHEMYEHYQKSDOIONRELFUJBHICWPYPRBKSFXQJMOJQVVZDEOPCVXTMUSPBFDBXMYYCTDWJOMILIRUCTUYASHTJQQCGSHMJWOWZKNDVXCRLLBGKGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.828698630734);
    msg.setSource(63263U);
    msg.setSourceEntity(140U);
    msg.setDestination(44982U);
    msg.setDestinationEntity(144U);
    msg.actions.assign("SGGTWVHNYOYBHDJGYJKTMCDMAIHNCPTTNTKEUKSBXEVXHSZIOFPBQIIXRYYNDSIKZCFVOZLPENWPJZDZLEGRDLBFUHRUBVXLUHGVXACMMFRZQJENZSEMYWVDWRQZLNEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.649345052056);
    msg.setSource(38426U);
    msg.setSourceEntity(126U);
    msg.setDestination(65021U);
    msg.setDestinationEntity(65U);
    msg.button = 247U;
    msg.value = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.265649381002);
    msg.setSource(50159U);
    msg.setSourceEntity(98U);
    msg.setDestination(65165U);
    msg.setDestinationEntity(61U);
    msg.button = 82U;
    msg.value = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.216714555299);
    msg.setSource(51213U);
    msg.setSourceEntity(136U);
    msg.setDestination(40290U);
    msg.setDestinationEntity(223U);
    msg.button = 172U;
    msg.value = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.428112140775);
    msg.setSource(29024U);
    msg.setSourceEntity(201U);
    msg.setDestination(21038U);
    msg.setDestinationEntity(164U);
    msg.op = 119U;
    msg.text.assign("YGZUIDMFHFXQAWHGSRRANZERGJSONBROCAQNDUWAEVXPWMHLTFPESCLJXPAHLOPEMFEJTXCZYYEXKRKENIYWOSHUZCZRMICKYPVSJLRFIJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.56512351512);
    msg.setSource(59977U);
    msg.setSourceEntity(147U);
    msg.setDestination(49511U);
    msg.setDestinationEntity(20U);
    msg.op = 236U;
    msg.text.assign("LBLCBKYESOTUHJBDVZMPOCRJGCLZMVWEBPFNWPJKHHCQVYQCIUDHIWXXXPRMWUPCJQKGICELJFSOWEOKFMBOAQHUHLDULVTRCDCYSFWAENIEIAAQNXRXRZSWTOJKZCANOPIRYNVNBBKEMZZPAWSXDJQPIMINRKJFUTLMAODVZPAVAQVTYKXZKEGGTDYDMGRENJPUFBZUXUSHFNYITYUVVGKZGAJWLYFTRFIYXQHGOQSMHNBRGSOBGXETWLHTMF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.490449208617);
    msg.setSource(39877U);
    msg.setSourceEntity(78U);
    msg.setDestination(37451U);
    msg.setDestinationEntity(152U);
    msg.op = 103U;
    msg.text.assign("ZUNATFGIJMUFPP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.143643700693);
    msg.setSource(20405U);
    msg.setSourceEntity(124U);
    msg.setDestination(53132U);
    msg.setDestinationEntity(35U);
    msg.op = 12U;
    msg.time_remain = 0.156823473897;
    msg.sched_time = 0.620673761245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.832153078267);
    msg.setSource(50595U);
    msg.setSourceEntity(33U);
    msg.setDestination(12506U);
    msg.setDestinationEntity(243U);
    msg.op = 83U;
    msg.time_remain = 0.142405420768;
    msg.sched_time = 0.0635944999761;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.62923777616);
    msg.setSource(14247U);
    msg.setSourceEntity(170U);
    msg.setDestination(56648U);
    msg.setDestinationEntity(241U);
    msg.op = 33U;
    msg.time_remain = 0.76445060751;
    msg.sched_time = 0.630738211629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.600890973987);
    msg.setSource(22932U);
    msg.setSourceEntity(68U);
    msg.setDestination(39631U);
    msg.setDestinationEntity(67U);
    msg.name.assign("YNDGDWCCHBMTATBLKAJCFCAWPBDHJXLJKEIRTORYYHZMLDQTPDJLHTVSYVBVDVHEUGOXSSANUEBHQXXVRZAFOUPVIRSBOKQMWIEFLW");
    msg.op = 197U;
    msg.sched_time = 0.284558774221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.292954529643);
    msg.setSource(19138U);
    msg.setSourceEntity(69U);
    msg.setDestination(44342U);
    msg.setDestinationEntity(217U);
    msg.name.assign("VCIJQRERLPAFHLFHABGWDONZQNHJFYSHAQVYDIQGYJBKXEVZDVGSQYZRCCM");
    msg.op = 46U;
    msg.sched_time = 0.213784304176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.793590960321);
    msg.setSource(32814U);
    msg.setSourceEntity(243U);
    msg.setDestination(32639U);
    msg.setDestinationEntity(153U);
    msg.name.assign("IZKSIBPMPHNYCBOMVYXIWBBXPHOFSCAKWCXMXNHHOXGNJGJVDBHJFSBCRGMKX");
    msg.op = 91U;
    msg.sched_time = 0.498641483995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.400342575682);
    msg.setSource(26164U);
    msg.setSourceEntity(74U);
    msg.setDestination(35938U);
    msg.setDestinationEntity(27U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.614258729684);
    msg.setSource(55211U);
    msg.setSourceEntity(176U);
    msg.setDestination(10295U);
    msg.setDestinationEntity(212U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.699576731276);
    msg.setSource(59655U);
    msg.setSourceEntity(64U);
    msg.setDestination(53906U);
    msg.setDestinationEntity(144U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.255789672728);
    msg.setSource(25134U);
    msg.setSourceEntity(39U);
    msg.setDestination(49771U);
    msg.setDestinationEntity(76U);
    msg.name.assign("AXCNPBIGKOWYDMBAUSKBLATZZLZZRXHSRNQJRDQYIIDIFCMKTJYPAU");
    msg.state = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.0976634545156);
    msg.setSource(22256U);
    msg.setSourceEntity(168U);
    msg.setDestination(28612U);
    msg.setDestinationEntity(128U);
    msg.name.assign("WLFQXABOHNILHPIHKWMXSRZYHUYUBLZCQIPKKHTTNCCDIUVOEYJPLKWXQRRJXZENVVTVCDENEOXDUEZNMGPSKBGMIUZPLYJF");
    msg.state = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.0876413761042);
    msg.setSource(42137U);
    msg.setSourceEntity(254U);
    msg.setDestination(13900U);
    msg.setDestinationEntity(127U);
    msg.name.assign("GSCFXRISMSHTOMD");
    msg.state = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.913726132706);
    msg.setSource(45673U);
    msg.setSourceEntity(117U);
    msg.setDestination(57268U);
    msg.setDestinationEntity(81U);
    msg.name.assign("VUWPSLLAEXABCMRAYRHIDOXTGMZJZYBNCHYZBUKLDCLHHXFTWETGTJKQBFOHSPMBRCVYFKXVQNENVNYMNDPDXYFQVBTCLOXAKNKNZ");
    msg.value = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.338902605039);
    msg.setSource(5169U);
    msg.setSourceEntity(94U);
    msg.setDestination(11066U);
    msg.setDestinationEntity(52U);
    msg.name.assign("GAVQYWFZPPRADAAVHTOUEUWEVMICQJWFXKRGYKDKZPECGPUNGSMVIFXOZMBPWDWMPMUBFIIYHTVZXWRTDLOQIHQYAGLRZQJUVVRLEUORUOIOFUDJWJHACVTYSNPUNONKYJEXONBRSGHLECJPGBK");
    msg.value = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.0627983635189);
    msg.setSource(38040U);
    msg.setSourceEntity(222U);
    msg.setDestination(33620U);
    msg.setDestinationEntity(176U);
    msg.name.assign("XTQOXVXZRWVKUIGEMBRCPZLZWTMINPACJFDHSCGQNZVOYASBGPFYIWWPKBRRUTZWLGXNLBJXOVKPJYAMJDMN");
    msg.value = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.0118584768864);
    msg.setSource(22678U);
    msg.setSourceEntity(79U);
    msg.setDestination(38003U);
    msg.setDestinationEntity(131U);
    msg.name.assign("WTXNVTEVJRGCANRQFDKEQZEFCBWKFDYBUCOGAOSHTMVORWIHNEPNWPIUVMDRLZLYFWLCBYSJYFLKWHEKQSTPYOVFTGEKBZQGIBOHIKLKHURUIMNVCSIBAJFOXZZEOEGHPHJVWYYUENDLSGCRNPUPTUVQWQUYCFPMMQDFXOKAZCLELDYTRHMMGBHITJQWPRGXZIOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.24782846123);
    msg.setSource(11329U);
    msg.setSourceEntity(49U);
    msg.setDestination(13676U);
    msg.setDestinationEntity(244U);
    msg.name.assign("WHJUENWRSNVEWRCCIKZJZRUYLPWEZBNTOLRMBVCQTYEBFVRIMMPVDGUCKUXYIHTZNWIJAIZDESAFHZTBAUKFHAGLINFASKDKSUYQPLFOJCPRJCSUKMEUMLSPYTYSLEZDAGQKGTAFNWFRQVPZLTXLXEPXFVRNJUVMBGLXOXXIBWPVJBCHXAWQHVYYVGTGQXHSTYHDBOOUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.429453875407);
    msg.setSource(47257U);
    msg.setSourceEntity(23U);
    msg.setDestination(12508U);
    msg.setDestinationEntity(213U);
    msg.name.assign("IFKXSCBWEHORVGJUMDRHXLABAAXHPPTGFJJALXILBWHZZJKROJWBGGNHMVDTXRLMAFEQYQNZTNNSPUDYZUCPVSBIDNTIKKYIDSVPOOJNDDYLRJQP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.971935615483);
    msg.setSource(19284U);
    msg.setSourceEntity(3U);
    msg.setDestination(40354U);
    msg.setDestinationEntity(195U);
    msg.name.assign("XFQQQATBVEBPSOLJIXAKTKDITTBOUHVWYVDRMECXNTVYUHFEQXFCMYWUWRCMRJVBVSFAGGKAYWPIPWYIECKWBZHSAIXPFSNYHKLQTHFGMRMGBJANSDZZLJVYOTKJHQHBUAESGTTOERNCQRNRSDSXJMZJPSBFQZHEUFRGWZCBXPJMUCLGMRWJKKESZYUDXJMROGCONPDUALYDVOW");
    msg.value = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.469562217376);
    msg.setSource(24509U);
    msg.setSourceEntity(155U);
    msg.setDestination(39337U);
    msg.setDestinationEntity(82U);
    msg.name.assign("TMKUPOTWGOGEZWCBBAWRVAWIEMVSTDFJVLOZYHWSHXNMTQELKLXMJQHWGKWPVBAZXCQSDCCGHMVYXMNBPSKFPWVHYKLAMKHIJGOVGPKPRACFRJLFXFDGFEAJDKEOHSEUJPITZFCOUJZTXOQXIDFPIHDGRYOQRPBNBOLQXRYZSSIUUNYMYZPIULMAQULRSTCXNIVUBARJZQNYDGSDKKTIRQNBRELEHCNMYNZEX");
    msg.value = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.880384043024);
    msg.setSource(7784U);
    msg.setSourceEntity(189U);
    msg.setDestination(64899U);
    msg.setDestinationEntity(204U);
    msg.name.assign("TXOCCDRLHLVLFDBEMYWPBVCCIUIMOMIAPNKHWQVJYUKHALQJIFTEGZXFTNAXNYLSJXMBMSTNOZGFLQZGXFDUXMSDXDLGYIQRLKVZJHVMRZETAQDYJKSJVWVWVPQSYZCAVQDAWPOAHERUBSJOGPZXZZEYUWCFBDGRGQPPIESOMCHKQPURCIRDOYSWJKFGBHYDTSTNROLNIHGBCJHHNRZBELKCUWSERFTMBAPYEXVAENN");
    msg.value = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.27958970388);
    msg.setSource(63823U);
    msg.setSourceEntity(40U);
    msg.setDestination(23453U);
    msg.setDestinationEntity(5U);
    msg.id = 231U;
    msg.period = 384773482U;
    msg.duty_cycle = 541885915U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.798592172459);
    msg.setSource(49562U);
    msg.setSourceEntity(150U);
    msg.setDestination(12354U);
    msg.setDestinationEntity(198U);
    msg.id = 15U;
    msg.period = 163825835U;
    msg.duty_cycle = 2122495803U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.463934019849);
    msg.setSource(55219U);
    msg.setSourceEntity(230U);
    msg.setDestination(20232U);
    msg.setDestinationEntity(51U);
    msg.id = 178U;
    msg.period = 3814664095U;
    msg.duty_cycle = 3365094893U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.602012334094);
    msg.setSource(12838U);
    msg.setSourceEntity(2U);
    msg.setDestination(14687U);
    msg.setDestinationEntity(13U);
    msg.id = 178U;
    msg.period = 1814824022U;
    msg.duty_cycle = 1055900854U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.622213553414);
    msg.setSource(23826U);
    msg.setSourceEntity(53U);
    msg.setDestination(50421U);
    msg.setDestinationEntity(27U);
    msg.id = 229U;
    msg.period = 1928849255U;
    msg.duty_cycle = 3474289528U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.124083890798);
    msg.setSource(49047U);
    msg.setSourceEntity(242U);
    msg.setDestination(9229U);
    msg.setDestinationEntity(0U);
    msg.id = 38U;
    msg.period = 3133398224U;
    msg.duty_cycle = 813660947U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.0512218509658);
    msg.setSource(5323U);
    msg.setSourceEntity(190U);
    msg.setDestination(6799U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.157217988654;
    msg.lon = 0.697542432553;
    msg.height = 0.995726732989;
    msg.x = 0.77397589511;
    msg.y = 0.0346519111862;
    msg.z = 0.520863914677;
    msg.phi = 0.716197536273;
    msg.theta = 0.361230214855;
    msg.psi = 0.0431820582707;
    msg.u = 0.378962197953;
    msg.v = 0.144930395411;
    msg.w = 0.055789599814;
    msg.vx = 0.204176313736;
    msg.vy = 0.149642940321;
    msg.vz = 0.56643974425;
    msg.p = 0.521115975202;
    msg.q = 0.303649032151;
    msg.r = 0.640173620225;
    msg.depth = 0.571577497022;
    msg.alt = 0.633615025452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.926389971519);
    msg.setSource(33690U);
    msg.setSourceEntity(193U);
    msg.setDestination(59708U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.633260212784;
    msg.lon = 0.89457035679;
    msg.height = 0.26403120312;
    msg.x = 0.719000010789;
    msg.y = 0.0577396157745;
    msg.z = 0.678206236606;
    msg.phi = 0.773158709143;
    msg.theta = 0.958125784345;
    msg.psi = 0.739188806431;
    msg.u = 0.414260682451;
    msg.v = 0.406091832041;
    msg.w = 0.931905212826;
    msg.vx = 0.459840862894;
    msg.vy = 0.779932000252;
    msg.vz = 0.0404459646376;
    msg.p = 0.74399037338;
    msg.q = 0.198525651339;
    msg.r = 0.291177415562;
    msg.depth = 0.696845270476;
    msg.alt = 0.883157277399;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.703366804945);
    msg.setSource(34157U);
    msg.setSourceEntity(122U);
    msg.setDestination(30415U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.256547589505;
    msg.lon = 0.540077072141;
    msg.height = 0.477016661205;
    msg.x = 0.902576436837;
    msg.y = 0.716266531866;
    msg.z = 0.494968088574;
    msg.phi = 0.664911873896;
    msg.theta = 0.306974728428;
    msg.psi = 0.696502004218;
    msg.u = 0.527118824972;
    msg.v = 0.843162025066;
    msg.w = 0.906398783919;
    msg.vx = 0.542285729661;
    msg.vy = 0.196499698827;
    msg.vz = 0.0367957988402;
    msg.p = 0.14804840262;
    msg.q = 0.535227080008;
    msg.r = 0.481388838713;
    msg.depth = 0.603047113471;
    msg.alt = 0.133018331056;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.881606236044);
    msg.setSource(3530U);
    msg.setSourceEntity(41U);
    msg.setDestination(682U);
    msg.setDestinationEntity(54U);
    msg.x = 0.875200443076;
    msg.y = 0.903939267456;
    msg.z = 0.25660905972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.273785950883);
    msg.setSource(45349U);
    msg.setSourceEntity(71U);
    msg.setDestination(64057U);
    msg.setDestinationEntity(0U);
    msg.x = 0.794117004775;
    msg.y = 0.0484948773219;
    msg.z = 0.175830873927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.984104324894);
    msg.setSource(18115U);
    msg.setSourceEntity(20U);
    msg.setDestination(45673U);
    msg.setDestinationEntity(200U);
    msg.x = 0.229324610331;
    msg.y = 0.557055896374;
    msg.z = 0.191068640584;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.456627297747);
    msg.setSource(16330U);
    msg.setSourceEntity(104U);
    msg.setDestination(34603U);
    msg.setDestinationEntity(156U);
    msg.value = 0.696639696234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.639030615369);
    msg.setSource(33941U);
    msg.setSourceEntity(91U);
    msg.setDestination(47108U);
    msg.setDestinationEntity(209U);
    msg.value = 0.313365837946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.696602471048);
    msg.setSource(11106U);
    msg.setSourceEntity(239U);
    msg.setDestination(36357U);
    msg.setDestinationEntity(219U);
    msg.value = 0.889822912846;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.881290597157);
    msg.setSource(35648U);
    msg.setSourceEntity(236U);
    msg.setDestination(20778U);
    msg.setDestinationEntity(125U);
    msg.value = 0.0326613319485;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.0304715266457);
    msg.setSource(27840U);
    msg.setSourceEntity(65U);
    msg.setDestination(5265U);
    msg.setDestinationEntity(171U);
    msg.value = 0.995899837673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.0474944686708);
    msg.setSource(30355U);
    msg.setSourceEntity(206U);
    msg.setDestination(23504U);
    msg.setDestinationEntity(101U);
    msg.value = 0.76987008884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.832441326909);
    msg.setSource(24355U);
    msg.setSourceEntity(129U);
    msg.setDestination(34856U);
    msg.setDestinationEntity(222U);
    msg.x = 0.958194846019;
    msg.y = 0.499500249684;
    msg.z = 0.660274349194;
    msg.phi = 0.535283898261;
    msg.theta = 0.829936221536;
    msg.psi = 0.698389652618;
    msg.p = 0.239602574853;
    msg.q = 0.649107954504;
    msg.r = 0.238975228737;
    msg.u = 0.145245200255;
    msg.v = 0.300974853318;
    msg.w = 0.469888832479;
    msg.bias_psi = 0.561614498576;
    msg.bias_r = 0.326731732466;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.896596960632);
    msg.setSource(1180U);
    msg.setSourceEntity(125U);
    msg.setDestination(35905U);
    msg.setDestinationEntity(9U);
    msg.x = 0.0569231793459;
    msg.y = 0.0403993474817;
    msg.z = 0.564411653219;
    msg.phi = 0.702835524532;
    msg.theta = 0.640189881505;
    msg.psi = 0.658692707427;
    msg.p = 0.29389874492;
    msg.q = 0.229812986598;
    msg.r = 0.466337197129;
    msg.u = 0.711520951796;
    msg.v = 0.815054476478;
    msg.w = 0.819403279639;
    msg.bias_psi = 0.138479589059;
    msg.bias_r = 0.57661362161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.14216487755);
    msg.setSource(47161U);
    msg.setSourceEntity(98U);
    msg.setDestination(36542U);
    msg.setDestinationEntity(46U);
    msg.x = 0.135486558398;
    msg.y = 0.161110282016;
    msg.z = 0.315180433443;
    msg.phi = 0.0206242997577;
    msg.theta = 0.40362565751;
    msg.psi = 0.669618730886;
    msg.p = 0.485465565379;
    msg.q = 0.0283888136259;
    msg.r = 0.72098740619;
    msg.u = 0.00913833629185;
    msg.v = 0.616436137818;
    msg.w = 0.731030793966;
    msg.bias_psi = 0.011284210967;
    msg.bias_r = 0.407608320073;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.285550618611);
    msg.setSource(38517U);
    msg.setSourceEntity(0U);
    msg.setDestination(35431U);
    msg.setDestinationEntity(100U);
    msg.bias_psi = 0.91902784226;
    msg.bias_r = 0.501038421492;
    msg.cog = 0.614127607112;
    msg.cyaw = 0.901185079447;
    msg.lbl_rej_level = 0.8413958936;
    msg.gps_rej_level = 0.671448324468;
    msg.custom_x = 0.139308708293;
    msg.custom_y = 0.0112547153881;
    msg.custom_z = 0.0253135119786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.136442708832);
    msg.setSource(20566U);
    msg.setSourceEntity(127U);
    msg.setDestination(43324U);
    msg.setDestinationEntity(51U);
    msg.bias_psi = 0.312579647765;
    msg.bias_r = 0.16837691234;
    msg.cog = 0.923157754958;
    msg.cyaw = 0.191442055081;
    msg.lbl_rej_level = 0.5840317741;
    msg.gps_rej_level = 0.276937289001;
    msg.custom_x = 0.836435281515;
    msg.custom_y = 0.54968894559;
    msg.custom_z = 0.263823743367;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.66427123693);
    msg.setSource(20963U);
    msg.setSourceEntity(222U);
    msg.setDestination(30404U);
    msg.setDestinationEntity(6U);
    msg.bias_psi = 0.720661146785;
    msg.bias_r = 0.0922871121534;
    msg.cog = 0.703318215093;
    msg.cyaw = 0.135802832986;
    msg.lbl_rej_level = 0.62720286832;
    msg.gps_rej_level = 0.971886456566;
    msg.custom_x = 0.166543769773;
    msg.custom_y = 0.518820478872;
    msg.custom_z = 0.360454648907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.878249077187);
    msg.setSource(19990U);
    msg.setSourceEntity(155U);
    msg.setDestination(46277U);
    msg.setDestinationEntity(88U);
    msg.utc_time = 0.659713857881;
    msg.reason = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.258992601692);
    msg.setSource(13438U);
    msg.setSourceEntity(74U);
    msg.setDestination(28864U);
    msg.setDestinationEntity(240U);
    msg.utc_time = 0.353651531376;
    msg.reason = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.84564617719);
    msg.setSource(42094U);
    msg.setSourceEntity(77U);
    msg.setDestination(4076U);
    msg.setDestinationEntity(84U);
    msg.utc_time = 0.41494863751;
    msg.reason = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.239873656179);
    msg.setSource(34233U);
    msg.setSourceEntity(140U);
    msg.setDestination(31944U);
    msg.setDestinationEntity(88U);
    msg.id = 204U;
    msg.range = 0.657270557673;
    msg.acceptance = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.115387929814);
    msg.setSource(40209U);
    msg.setSourceEntity(204U);
    msg.setDestination(60766U);
    msg.setDestinationEntity(91U);
    msg.id = 33U;
    msg.range = 0.389580663671;
    msg.acceptance = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.556095925878);
    msg.setSource(47274U);
    msg.setSourceEntity(19U);
    msg.setDestination(29333U);
    msg.setDestinationEntity(236U);
    msg.id = 218U;
    msg.range = 0.403664123589;
    msg.acceptance = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.909976116674);
    msg.setSource(35308U);
    msg.setSourceEntity(168U);
    msg.setDestination(10491U);
    msg.setDestinationEntity(72U);
    msg.type = 68U;
    msg.reason = 165U;
    msg.value = 0.35468444689;
    msg.timestep = 0.918602975631;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.160622557697);
    msg.setSource(7968U);
    msg.setSourceEntity(82U);
    msg.setDestination(33990U);
    msg.setDestinationEntity(219U);
    msg.type = 160U;
    msg.reason = 115U;
    msg.value = 0.842478223534;
    msg.timestep = 0.558033895821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.169990911897);
    msg.setSource(44225U);
    msg.setSourceEntity(70U);
    msg.setDestination(1994U);
    msg.setDestinationEntity(176U);
    msg.type = 167U;
    msg.reason = 238U;
    msg.value = 0.56648145219;
    msg.timestep = 0.855700221491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.502831406741);
    msg.setSource(48764U);
    msg.setSourceEntity(85U);
    msg.setDestination(60385U);
    msg.setDestinationEntity(236U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WYSIRSHJVENWZCCOCQSQAEGQUEPPKWKMOPQGMILVEVASLHSNBDXDCROTABQIPHEFNBWCJDDKGPDJXPGCFWSMUNFOJBKVXBULMGGBCTNPHYILWDKRIBEYFLEUZMTKXQLRFWENWUHXHAKMKJZMAXGSGRLPFJHFYVILZ");
    tmp_msg_0.lat = 0.988553450182;
    tmp_msg_0.lon = 0.0986184601202;
    tmp_msg_0.depth = 0.776889554074;
    tmp_msg_0.query_channel = 67U;
    tmp_msg_0.reply_channel = 90U;
    tmp_msg_0.transponder_delay = 220U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.177911415396;
    msg.y = 0.30826191057;
    msg.var_x = 0.402804357088;
    msg.var_y = 0.152688306134;
    msg.distance = 0.54043399435;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.405965763127);
    msg.setSource(17878U);
    msg.setSourceEntity(74U);
    msg.setDestination(33226U);
    msg.setDestinationEntity(128U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NUBVLFPKUZUCIQLLFJAZGEZFQERQMBICKHCBGODQKNBXTXTPHDFRAMI");
    tmp_msg_0.lat = 0.855894298497;
    tmp_msg_0.lon = 0.314747860575;
    tmp_msg_0.depth = 0.157069457865;
    tmp_msg_0.query_channel = 109U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 132U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.128861404328;
    msg.y = 0.380088866819;
    msg.var_x = 0.0447915432014;
    msg.var_y = 0.705988240153;
    msg.distance = 0.416589018579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.264062665375);
    msg.setSource(33142U);
    msg.setSourceEntity(32U);
    msg.setDestination(62083U);
    msg.setDestinationEntity(107U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NVZFLYNXNEDFMDCNZLJMIYIVHVJQNOEDBJKQVQQKYBCHYEPDETLQRMHTJADJUGRUSMJZYMKJXQXJOVLLGGFHTJEAOCQUYADBFTBDIGPKKRUISHPGURCZFPBAPTLATSPGANPBOAIDMUXSEXBHICJZWGXRXBIPZZCGFPNAMOSSLMWISMEETEVZWSHBDM");
    tmp_msg_0.lat = 0.316984544719;
    tmp_msg_0.lon = 0.200816372272;
    tmp_msg_0.depth = 0.237481762921;
    tmp_msg_0.query_channel = 177U;
    tmp_msg_0.reply_channel = 126U;
    tmp_msg_0.transponder_delay = 246U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.566255013027;
    msg.y = 0.95912928354;
    msg.var_x = 0.183741145032;
    msg.var_y = 0.858469114074;
    msg.distance = 0.333457137029;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.0500779896665);
    msg.setSource(43559U);
    msg.setSourceEntity(227U);
    msg.setDestination(47248U);
    msg.setDestinationEntity(205U);
    msg.state = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.825507553992);
    msg.setSource(17354U);
    msg.setSourceEntity(137U);
    msg.setDestination(46552U);
    msg.setDestinationEntity(85U);
    msg.state = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.275343201497);
    msg.setSource(49406U);
    msg.setSourceEntity(188U);
    msg.setDestination(18049U);
    msg.setDestinationEntity(217U);
    msg.state = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.818636732321);
    msg.setSource(45455U);
    msg.setSourceEntity(209U);
    msg.setDestination(46642U);
    msg.setDestinationEntity(133U);
    msg.x = 0.666262986222;
    msg.y = 0.744080738062;
    msg.z = 0.649207394285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.320341838225);
    msg.setSource(36867U);
    msg.setSourceEntity(80U);
    msg.setDestination(55813U);
    msg.setDestinationEntity(143U);
    msg.x = 0.467086080778;
    msg.y = 0.845320887326;
    msg.z = 0.942953279378;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.933812928701);
    msg.setSource(18855U);
    msg.setSourceEntity(144U);
    msg.setDestination(58539U);
    msg.setDestinationEntity(71U);
    msg.x = 0.622427200226;
    msg.y = 0.307464917419;
    msg.z = 0.789680645103;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.142495549622);
    msg.setSource(41237U);
    msg.setSourceEntity(143U);
    msg.setDestination(14394U);
    msg.setDestinationEntity(224U);
    msg.va = 0.190983076956;
    msg.aoa = 0.839503164408;
    msg.ssa = 0.854274122227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.0349499351773);
    msg.setSource(22036U);
    msg.setSourceEntity(104U);
    msg.setDestination(62347U);
    msg.setDestinationEntity(168U);
    msg.va = 0.34562720082;
    msg.aoa = 0.155037103997;
    msg.ssa = 0.625090216309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.323064789911);
    msg.setSource(13270U);
    msg.setSourceEntity(198U);
    msg.setDestination(49108U);
    msg.setDestinationEntity(102U);
    msg.va = 0.14335099479;
    msg.aoa = 0.884028157362;
    msg.ssa = 0.970548403316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.702106461906);
    msg.setSource(21859U);
    msg.setSourceEntity(10U);
    msg.setDestination(39044U);
    msg.setDestinationEntity(225U);
    msg.value = 0.831546571967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.212192811089);
    msg.setSource(46294U);
    msg.setSourceEntity(127U);
    msg.setDestination(33905U);
    msg.setDestinationEntity(134U);
    msg.value = 0.971078879414;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.807322045976);
    msg.setSource(27681U);
    msg.setSourceEntity(235U);
    msg.setDestination(47233U);
    msg.setDestinationEntity(189U);
    msg.value = 0.706579078595;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.982696442633);
    msg.setSource(27323U);
    msg.setSourceEntity(47U);
    msg.setDestination(41489U);
    msg.setDestinationEntity(163U);
    msg.value = 0.683365392291;
    msg.z_units = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.212151781966);
    msg.setSource(33381U);
    msg.setSourceEntity(230U);
    msg.setDestination(24608U);
    msg.setDestinationEntity(36U);
    msg.value = 0.253183909968;
    msg.z_units = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.067393168207);
    msg.setSource(2007U);
    msg.setSourceEntity(127U);
    msg.setDestination(42388U);
    msg.setDestinationEntity(152U);
    msg.value = 0.457601105857;
    msg.z_units = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.849030720635);
    msg.setSource(3648U);
    msg.setSourceEntity(48U);
    msg.setDestination(51799U);
    msg.setDestinationEntity(94U);
    msg.value = 0.251037649815;
    msg.speed_units = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.0568192598113);
    msg.setSource(39518U);
    msg.setSourceEntity(210U);
    msg.setDestination(38521U);
    msg.setDestinationEntity(186U);
    msg.value = 0.0885030934508;
    msg.speed_units = 200U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.160417155198);
    msg.setSource(35611U);
    msg.setSourceEntity(228U);
    msg.setDestination(26845U);
    msg.setDestinationEntity(128U);
    msg.value = 0.473951027597;
    msg.speed_units = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.0816708650257);
    msg.setSource(10615U);
    msg.setSourceEntity(204U);
    msg.setDestination(50544U);
    msg.setDestinationEntity(160U);
    msg.value = 0.819313542972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.343799343252);
    msg.setSource(21033U);
    msg.setSourceEntity(157U);
    msg.setDestination(12895U);
    msg.setDestinationEntity(242U);
    msg.value = 0.461403880104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.00796429391622);
    msg.setSource(37334U);
    msg.setSourceEntity(141U);
    msg.setDestination(56680U);
    msg.setDestinationEntity(106U);
    msg.value = 0.54849995096;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.140793543069);
    msg.setSource(10393U);
    msg.setSourceEntity(131U);
    msg.setDestination(42643U);
    msg.setDestinationEntity(195U);
    msg.value = 0.971499313777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.608733053986);
    msg.setSource(56391U);
    msg.setSourceEntity(149U);
    msg.setDestination(50162U);
    msg.setDestinationEntity(36U);
    msg.value = 0.290466971621;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.756659236626);
    msg.setSource(35854U);
    msg.setSourceEntity(188U);
    msg.setDestination(46710U);
    msg.setDestinationEntity(6U);
    msg.value = 0.670931493032;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.689279545954);
    msg.setSource(7547U);
    msg.setSourceEntity(31U);
    msg.setDestination(14644U);
    msg.setDestinationEntity(205U);
    msg.value = 0.535350808153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.229772857618);
    msg.setSource(22174U);
    msg.setSourceEntity(136U);
    msg.setDestination(57095U);
    msg.setDestinationEntity(46U);
    msg.value = 0.827918658142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.214208843532);
    msg.setSource(47202U);
    msg.setSourceEntity(49U);
    msg.setDestination(19439U);
    msg.setDestinationEntity(11U);
    msg.value = 0.357287815967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.0770847768381);
    msg.setSource(59110U);
    msg.setSourceEntity(18U);
    msg.setDestination(13511U);
    msg.setDestinationEntity(172U);
    msg.path_ref = 1090437058U;
    msg.start_lat = 0.0564627020024;
    msg.start_lon = 0.190046732466;
    msg.start_z = 0.287242925633;
    msg.start_z_units = 145U;
    msg.end_lat = 0.149685646288;
    msg.end_lon = 0.433292326386;
    msg.end_z = 0.872287489217;
    msg.end_z_units = 42U;
    msg.speed = 0.909726724513;
    msg.speed_units = 81U;
    msg.lradius = 0.987675279922;
    msg.flags = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.116283175601);
    msg.setSource(27633U);
    msg.setSourceEntity(122U);
    msg.setDestination(33673U);
    msg.setDestinationEntity(91U);
    msg.path_ref = 3902886057U;
    msg.start_lat = 0.880498407096;
    msg.start_lon = 0.264573023063;
    msg.start_z = 0.399125575369;
    msg.start_z_units = 111U;
    msg.end_lat = 0.368557787616;
    msg.end_lon = 0.476804148819;
    msg.end_z = 0.405305846484;
    msg.end_z_units = 67U;
    msg.speed = 0.604560994812;
    msg.speed_units = 151U;
    msg.lradius = 0.264082099768;
    msg.flags = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.697393566269);
    msg.setSource(15333U);
    msg.setSourceEntity(94U);
    msg.setDestination(4212U);
    msg.setDestinationEntity(204U);
    msg.path_ref = 586087501U;
    msg.start_lat = 0.0426681796572;
    msg.start_lon = 0.236680653407;
    msg.start_z = 0.0806811074056;
    msg.start_z_units = 126U;
    msg.end_lat = 0.751677701529;
    msg.end_lon = 0.448333823848;
    msg.end_z = 0.915729177685;
    msg.end_z_units = 241U;
    msg.speed = 0.372629712416;
    msg.speed_units = 69U;
    msg.lradius = 0.297327975423;
    msg.flags = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.751292491542);
    msg.setSource(21818U);
    msg.setSourceEntity(103U);
    msg.setDestination(34277U);
    msg.setDestinationEntity(186U);
    msg.x = 0.36676113549;
    msg.y = 0.218734273148;
    msg.z = 0.91112378853;
    msg.k = 0.732356592151;
    msg.m = 0.99078478853;
    msg.n = 0.858478022035;
    msg.flags = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.626021392359);
    msg.setSource(25537U);
    msg.setSourceEntity(97U);
    msg.setDestination(54395U);
    msg.setDestinationEntity(11U);
    msg.x = 0.60668420653;
    msg.y = 0.355758836032;
    msg.z = 0.73099349566;
    msg.k = 0.416143550725;
    msg.m = 0.42940455308;
    msg.n = 0.835696022935;
    msg.flags = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.405077566843);
    msg.setSource(30031U);
    msg.setSourceEntity(111U);
    msg.setDestination(7103U);
    msg.setDestinationEntity(67U);
    msg.x = 0.813301264413;
    msg.y = 0.188715289633;
    msg.z = 0.442737142564;
    msg.k = 0.336523395701;
    msg.m = 0.739304656429;
    msg.n = 0.257755211105;
    msg.flags = 124U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.900112438867);
    msg.setSource(63747U);
    msg.setSourceEntity(9U);
    msg.setDestination(14085U);
    msg.setDestinationEntity(228U);
    msg.value = 0.437273563653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.847181930185);
    msg.setSource(21216U);
    msg.setSourceEntity(174U);
    msg.setDestination(29744U);
    msg.setDestinationEntity(194U);
    msg.value = 0.843522835101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.203635999219);
    msg.setSource(45261U);
    msg.setSourceEntity(81U);
    msg.setDestination(28075U);
    msg.setDestinationEntity(251U);
    msg.value = 0.975841122852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.17805358088);
    msg.setSource(50683U);
    msg.setSourceEntity(4U);
    msg.setDestination(52832U);
    msg.setDestinationEntity(149U);
    msg.u = 0.609978902165;
    msg.v = 0.373697785789;
    msg.w = 0.0966205901443;
    msg.p = 0.982770698712;
    msg.q = 0.62614766383;
    msg.r = 0.0643140303951;
    msg.flags = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.330906749187);
    msg.setSource(6138U);
    msg.setSourceEntity(92U);
    msg.setDestination(52768U);
    msg.setDestinationEntity(3U);
    msg.u = 0.554648212017;
    msg.v = 0.619831118196;
    msg.w = 0.989783590367;
    msg.p = 0.139961437605;
    msg.q = 0.270820339328;
    msg.r = 0.674831473341;
    msg.flags = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.383578651337);
    msg.setSource(31286U);
    msg.setSourceEntity(216U);
    msg.setDestination(5211U);
    msg.setDestinationEntity(220U);
    msg.u = 0.272833589663;
    msg.v = 0.339088399963;
    msg.w = 0.533237571806;
    msg.p = 0.804180894465;
    msg.q = 0.929072987922;
    msg.r = 0.241880090942;
    msg.flags = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.0418650533068);
    msg.setSource(64689U);
    msg.setSourceEntity(86U);
    msg.setDestination(7814U);
    msg.setDestinationEntity(207U);
    msg.path_ref = 527242912U;
    msg.start_lat = 0.203089795909;
    msg.start_lon = 0.361920282192;
    msg.start_z = 0.90005018685;
    msg.start_z_units = 2U;
    msg.end_lat = 0.808948392953;
    msg.end_lon = 0.744245374094;
    msg.end_z = 0.417934455931;
    msg.end_z_units = 55U;
    msg.lradius = 0.19628076797;
    msg.flags = 205U;
    msg.x = 0.486654255208;
    msg.y = 0.173863770433;
    msg.z = 0.67680868759;
    msg.vx = 0.380224183842;
    msg.vy = 0.776142024195;
    msg.vz = 0.230834986794;
    msg.course_error = 0.770861683201;
    msg.eta = 60629U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.852933615978);
    msg.setSource(47541U);
    msg.setSourceEntity(11U);
    msg.setDestination(62423U);
    msg.setDestinationEntity(218U);
    msg.path_ref = 3525079935U;
    msg.start_lat = 0.943521251615;
    msg.start_lon = 0.300365502289;
    msg.start_z = 0.111021336885;
    msg.start_z_units = 118U;
    msg.end_lat = 0.844513977743;
    msg.end_lon = 0.577050371739;
    msg.end_z = 0.304747704768;
    msg.end_z_units = 88U;
    msg.lradius = 0.926027521321;
    msg.flags = 122U;
    msg.x = 0.889561475005;
    msg.y = 0.268235444933;
    msg.z = 0.375769603977;
    msg.vx = 0.634325432705;
    msg.vy = 0.870932926299;
    msg.vz = 0.731632256777;
    msg.course_error = 0.913793071172;
    msg.eta = 2967U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.0836680317686);
    msg.setSource(28374U);
    msg.setSourceEntity(143U);
    msg.setDestination(6572U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 3507322349U;
    msg.start_lat = 0.652513987552;
    msg.start_lon = 0.097782268067;
    msg.start_z = 0.00966845913625;
    msg.start_z_units = 146U;
    msg.end_lat = 0.952000622297;
    msg.end_lon = 0.339869684608;
    msg.end_z = 0.914340227347;
    msg.end_z_units = 11U;
    msg.lradius = 0.0482256642417;
    msg.flags = 21U;
    msg.x = 0.457881345713;
    msg.y = 0.782300669748;
    msg.z = 0.11538306289;
    msg.vx = 0.918734913886;
    msg.vy = 0.472105382163;
    msg.vz = 0.686756959267;
    msg.course_error = 0.494994540923;
    msg.eta = 11866U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.370898232682);
    msg.setSource(52508U);
    msg.setSourceEntity(19U);
    msg.setDestination(20706U);
    msg.setDestinationEntity(142U);
    msg.k = 0.740557620477;
    msg.m = 0.801018024114;
    msg.n = 0.657881618638;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.377379657079);
    msg.setSource(59657U);
    msg.setSourceEntity(53U);
    msg.setDestination(36612U);
    msg.setDestinationEntity(145U);
    msg.k = 0.137434362869;
    msg.m = 0.577512010134;
    msg.n = 0.0609693064586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.0479805561343);
    msg.setSource(49320U);
    msg.setSourceEntity(192U);
    msg.setDestination(56755U);
    msg.setDestinationEntity(71U);
    msg.k = 0.449778948514;
    msg.m = 0.52006517014;
    msg.n = 0.247622259799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.534680971865);
    msg.setSource(26846U);
    msg.setSourceEntity(72U);
    msg.setDestination(63472U);
    msg.setDestinationEntity(22U);
    msg.p = 0.582556757438;
    msg.i = 0.984622814058;
    msg.d = 0.697036277675;
    msg.a = 0.516400485555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.382373572208);
    msg.setSource(60876U);
    msg.setSourceEntity(150U);
    msg.setDestination(50254U);
    msg.setDestinationEntity(17U);
    msg.p = 0.530434293663;
    msg.i = 0.797029073061;
    msg.d = 0.192606692131;
    msg.a = 0.632152444687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.32449500728);
    msg.setSource(43925U);
    msg.setSourceEntity(17U);
    msg.setDestination(40042U);
    msg.setDestinationEntity(199U);
    msg.p = 0.109331171414;
    msg.i = 0.700198783935;
    msg.d = 0.137697898602;
    msg.a = 0.180105079901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.921515233973);
    msg.setSource(6634U);
    msg.setSourceEntity(99U);
    msg.setDestination(53097U);
    msg.setDestinationEntity(238U);
    msg.op = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.0725007854505);
    msg.setSource(15646U);
    msg.setSourceEntity(164U);
    msg.setDestination(52753U);
    msg.setDestinationEntity(235U);
    msg.op = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.554465996511);
    msg.setSource(52946U);
    msg.setSourceEntity(61U);
    msg.setDestination(46394U);
    msg.setDestinationEntity(129U);
    msg.op = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.406040485435);
    msg.setSource(17970U);
    msg.setSourceEntity(109U);
    msg.setDestination(60131U);
    msg.setDestinationEntity(234U);
    msg.x = 0.257196141289;
    msg.y = 0.232376032602;
    msg.z = 0.401296264617;
    msg.vx = 0.442460143485;
    msg.vy = 0.781618076744;
    msg.vz = 0.407707943796;
    msg.ax = 0.14046030654;
    msg.ay = 0.811391932903;
    msg.az = 0.851575400153;
    msg.flags = 18518U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.0334122231046);
    msg.setSource(60565U);
    msg.setSourceEntity(78U);
    msg.setDestination(4277U);
    msg.setDestinationEntity(109U);
    msg.x = 0.506514550877;
    msg.y = 0.914822969347;
    msg.z = 0.90148411186;
    msg.vx = 0.220210274148;
    msg.vy = 0.120610046397;
    msg.vz = 0.601172668019;
    msg.ax = 0.477727280229;
    msg.ay = 0.522558237331;
    msg.az = 0.768916307134;
    msg.flags = 39095U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.187186185113);
    msg.setSource(50587U);
    msg.setSourceEntity(47U);
    msg.setDestination(48500U);
    msg.setDestinationEntity(95U);
    msg.x = 0.352675452403;
    msg.y = 0.920980260601;
    msg.z = 0.0895177476887;
    msg.vx = 0.799844258725;
    msg.vy = 0.688587621988;
    msg.vz = 0.188936192742;
    msg.ax = 0.817917909223;
    msg.ay = 0.681996247737;
    msg.az = 0.372505678385;
    msg.flags = 36295U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.55840691867);
    msg.setSource(55473U);
    msg.setSourceEntity(12U);
    msg.setDestination(40924U);
    msg.setDestinationEntity(37U);
    msg.value = 0.00401579024119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.371745988426);
    msg.setSource(26437U);
    msg.setSourceEntity(6U);
    msg.setDestination(59717U);
    msg.setDestinationEntity(47U);
    msg.value = 0.647648526129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.392909833304);
    msg.setSource(14845U);
    msg.setSourceEntity(105U);
    msg.setDestination(61929U);
    msg.setDestinationEntity(61U);
    msg.value = 0.800230246707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.255809339121);
    msg.setSource(25617U);
    msg.setSourceEntity(212U);
    msg.setDestination(40394U);
    msg.setDestinationEntity(210U);
    msg.timeout = 28980U;
    msg.lat = 0.0202811667497;
    msg.lon = 0.443207775593;
    msg.z = 0.600082015711;
    msg.z_units = 89U;
    msg.speed = 0.842478320117;
    msg.speed_units = 37U;
    msg.roll = 0.911181206309;
    msg.pitch = 0.395678328825;
    msg.yaw = 0.976370142155;
    msg.custom.assign("GPYJVYZLSGIRPFLEZHEBIW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.787954242108);
    msg.setSource(55002U);
    msg.setSourceEntity(77U);
    msg.setDestination(8572U);
    msg.setDestinationEntity(46U);
    msg.timeout = 54800U;
    msg.lat = 0.621956925672;
    msg.lon = 0.802667308862;
    msg.z = 0.112079409784;
    msg.z_units = 98U;
    msg.speed = 0.255963603093;
    msg.speed_units = 250U;
    msg.roll = 0.285734135337;
    msg.pitch = 0.47291966211;
    msg.yaw = 0.706796233314;
    msg.custom.assign("EBGXMFHVJHCWCYFWESARWFTVDMDODZIFCHZGHRXZWBKLKKGWQTRYZTSMUSVFCJOQMAULPCQGNNDWVNHBASTXIRLJGPNGKUUSPYYKOIYLMX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.503456614258);
    msg.setSource(57511U);
    msg.setSourceEntity(55U);
    msg.setDestination(33032U);
    msg.setDestinationEntity(249U);
    msg.timeout = 37582U;
    msg.lat = 0.0351122383561;
    msg.lon = 0.528041743561;
    msg.z = 0.601495023579;
    msg.z_units = 180U;
    msg.speed = 0.857902821825;
    msg.speed_units = 31U;
    msg.roll = 0.962323696164;
    msg.pitch = 0.405495779089;
    msg.yaw = 0.519971445809;
    msg.custom.assign("SEDXYEXZLGVRUNDQAPNJGNKIWFMCXHITFMDHLBORIQZYEODLJUBQEAHQMKOZQCCZXPJWSSIYVBDRIAMWGGTETIVWXGKQPNNYARUIYJONZHNEBHVWNCBFKMLCROHBXJSZYFVXVEYGDDOHMMTNFSABJPLPPOKJHRAFDQZLVCLBGTKHFHFWSJRUWMRXUFTSTZSCPAURP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.846118645056);
    msg.setSource(7884U);
    msg.setSourceEntity(250U);
    msg.setDestination(59243U);
    msg.setDestinationEntity(95U);
    msg.timeout = 39010U;
    msg.lat = 0.204961318771;
    msg.lon = 0.25046351082;
    msg.z = 0.992928915257;
    msg.z_units = 185U;
    msg.speed = 0.197079486138;
    msg.speed_units = 251U;
    msg.duration = 15426U;
    msg.radius = 0.880332427447;
    msg.flags = 206U;
    msg.custom.assign("VFIPBRSFGOSBHVBRAAMPLCQDLVSUXZJUQGQYWOPCIJUJHTHZQYHGIFZHKCNEULJZYZMKQTGWFQTEEITFUTZJXOOAMXVNWNBBHXIKGREORXCIMAHKANWMMCJUNIQSANWNYCVGHPPW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.273441254804);
    msg.setSource(54995U);
    msg.setSourceEntity(129U);
    msg.setDestination(30913U);
    msg.setDestinationEntity(51U);
    msg.timeout = 34538U;
    msg.lat = 0.908816472574;
    msg.lon = 0.912112549398;
    msg.z = 0.519909888438;
    msg.z_units = 132U;
    msg.speed = 0.25498534588;
    msg.speed_units = 235U;
    msg.duration = 4007U;
    msg.radius = 0.486611898164;
    msg.flags = 213U;
    msg.custom.assign("TGSNYQYSMVYYVEPLJPMORGRAYJEMNKITDXWKNNWDHHHPLDHDOCXGGLQUZZHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.698710734135);
    msg.setSource(24470U);
    msg.setSourceEntity(214U);
    msg.setDestination(1458U);
    msg.setDestinationEntity(166U);
    msg.timeout = 15271U;
    msg.lat = 0.681192830033;
    msg.lon = 0.212956951305;
    msg.z = 0.322997613157;
    msg.z_units = 52U;
    msg.speed = 0.441764715369;
    msg.speed_units = 237U;
    msg.duration = 32512U;
    msg.radius = 0.678895447135;
    msg.flags = 200U;
    msg.custom.assign("NRRPLEWENXZSWQHXALUCMJEGJCBIPDVYCHDXGYIDCSVDPWHLIIZLOHKMIXNQBLOFAURSNKFWSOTAXYKQDETOHPXVNUDGRBSJAFULECESYYIJDLXOHZVAJIGTTNTVRDTLJKWGWCPGJBMKOJQOZAOHAYWKKRCBUMIRPAYQUNEBKZJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.728963431689);
    msg.setSource(5289U);
    msg.setSourceEntity(241U);
    msg.setDestination(61723U);
    msg.setDestinationEntity(169U);
    msg.custom.assign("FVMCCLJPPMDVUNOEYOJDNWEIHNDTRXQPSIZKHLTNZTWJVIGAQJWFAHXKVSGLSBTWKPVEOEAFSXFKZUYSGWACIHKKYDPEMBVOOIPXHRJDDTMDNUGTTYRRBKLECRQGCUZXSLXKPLIBRLHGBQNXTJQNOYZFXABENCCHKEOPWBTZSYRAXYDTQHAIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.824551650291);
    msg.setSource(60954U);
    msg.setSourceEntity(98U);
    msg.setDestination(50979U);
    msg.setDestinationEntity(147U);
    msg.custom.assign("RHBATNOLPRJXOGPIGEWJSQJVKEMGFYDRESVPMVFCINIOZIFUZOVYHCGKWQFWXHNTGZTBUMIISPPAPBXYHMUBPGLQWWSEPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.35649180135);
    msg.setSource(65192U);
    msg.setSourceEntity(203U);
    msg.setDestination(44960U);
    msg.setDestinationEntity(39U);
    msg.custom.assign("ZXHERNEXLXRECCKRUWCPTCAHFTWBTAXOQDWUAYGJYWSAOTMNBKRSKMOFMGYDNBJRUIEVDOFXLPBRSTIFKISMWOJGKTZOHHVSLZPCZTYBLKFHIUNQLMLIDUEMODBCXPGMGEVTZENWQEIXQQODUFSYGLNSQQBQQYHPFIVDAZAMRUPHNTLFRGWBAEHOVFPVWKPEWQJGSKGUCRKVXDCFTJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.943870197952);
    msg.setSource(8474U);
    msg.setSourceEntity(218U);
    msg.setDestination(38841U);
    msg.setDestinationEntity(49U);
    msg.timeout = 19689U;
    msg.lat = 0.205127485981;
    msg.lon = 0.317119246857;
    msg.z = 0.175833531313;
    msg.z_units = 89U;
    msg.duration = 49566U;
    msg.speed = 0.292241111162;
    msg.speed_units = 234U;
    msg.type = 71U;
    msg.radius = 0.955963756482;
    msg.length = 0.088347059116;
    msg.bearing = 0.309433575229;
    msg.direction = 172U;
    msg.custom.assign("SXJZVHTLGPYKCTKHIRLJDSSQUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.44906613241);
    msg.setSource(46941U);
    msg.setSourceEntity(43U);
    msg.setDestination(59531U);
    msg.setDestinationEntity(187U);
    msg.timeout = 5538U;
    msg.lat = 0.320198446061;
    msg.lon = 0.89468211976;
    msg.z = 0.58299579243;
    msg.z_units = 13U;
    msg.duration = 6273U;
    msg.speed = 0.750927227639;
    msg.speed_units = 224U;
    msg.type = 13U;
    msg.radius = 0.621812901071;
    msg.length = 0.548413759309;
    msg.bearing = 0.584943309325;
    msg.direction = 171U;
    msg.custom.assign("VQPEAZBHDJZWTBNGXKSEPVOQISGLIFBJPTCJBRCZIAMHFKQY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.379866937404);
    msg.setSource(44992U);
    msg.setSourceEntity(208U);
    msg.setDestination(31430U);
    msg.setDestinationEntity(21U);
    msg.timeout = 16305U;
    msg.lat = 0.150068176858;
    msg.lon = 0.447871175055;
    msg.z = 0.853301474415;
    msg.z_units = 49U;
    msg.duration = 37433U;
    msg.speed = 0.124921805718;
    msg.speed_units = 241U;
    msg.type = 112U;
    msg.radius = 0.254398257523;
    msg.length = 0.673516862063;
    msg.bearing = 0.276819896097;
    msg.direction = 32U;
    msg.custom.assign("UGETXWIHVUTAYSPARPTXVMLEJJDREUWLCYPFAYDSXLPRPBNOWWUBOLZRFNQSMNXFHUDSQGQXZFNJGTGWTQOIQIDJVUOYJBAIRMGNKTSCMZIEWHKCXJKZQIASMZZQBHFGRNOYSHQCUMKRLIIPEKJPFKZZLNYGVOMGBGLFRLKH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.275361512446);
    msg.setSource(64614U);
    msg.setSourceEntity(103U);
    msg.setDestination(58037U);
    msg.setDestinationEntity(207U);
    msg.duration = 5655U;
    msg.custom.assign("DQYSKFEUBAQGPRYHMVUVIQQNAPBPFKPYPILDHXKGONMHGLEHYBUFWGEDUQWOCTVQITGMJRSBPFZKGMDHAGIYAZSLWCDPAGYEJJSAJHZVBPZRIJUCVXBOUWUKJVZNEFSNGRKZLJTVWKOLOSDINDUHQMNMITCTNXBQKEXCJDFTZXMETGWWOECCUFWHKIREXIUKMRWYZOJORWDMHROSZBVLPICCVFNDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.0524091088778);
    msg.setSource(28322U);
    msg.setSourceEntity(20U);
    msg.setDestination(24883U);
    msg.setDestinationEntity(126U);
    msg.duration = 2436U;
    msg.custom.assign("XVLCDHNYUKRAIJTFAWJVAIHEXSCIHTDBMPMEZBACPTRKEINHYQCYOZDJPKUXIDXYJDNHNPUIIQDOUGUUEVMBKBSSLXYNWCJNCFFPOLSGMMTGFKSJBLEZZVGVLAZPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.567139839395);
    msg.setSource(14827U);
    msg.setSourceEntity(112U);
    msg.setDestination(31636U);
    msg.setDestinationEntity(53U);
    msg.duration = 2104U;
    msg.custom.assign("ARQPPLXYPJSGHTBNSPJRSDQWVQIMGRQHFXWBOKXNFI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.449287696626);
    msg.setSource(1294U);
    msg.setSourceEntity(12U);
    msg.setDestination(32620U);
    msg.setDestinationEntity(34U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.275426407339;
    msg.control.set(tmp_msg_0);
    msg.duration = 38806U;
    msg.custom.assign("VRLPCXJDHECUPEKGHL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.000390619896222);
    msg.setSource(58433U);
    msg.setSourceEntity(200U);
    msg.setDestination(49449U);
    msg.setDestinationEntity(133U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.368391992643;
    msg.control.set(tmp_msg_0);
    msg.duration = 28430U;
    msg.custom.assign("RZSTVNLDCLVPKMKDSABVUQIJSHAHBIKFZBKZCOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.348256460992);
    msg.setSource(62268U);
    msg.setSourceEntity(129U);
    msg.setDestination(25732U);
    msg.setDestinationEntity(96U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2840606265U;
    tmp_msg_0.start_lat = 0.37870814766;
    tmp_msg_0.start_lon = 0.608525754958;
    tmp_msg_0.start_z = 0.669868109526;
    tmp_msg_0.start_z_units = 134U;
    tmp_msg_0.end_lat = 0.729046744;
    tmp_msg_0.end_lon = 0.367387854632;
    tmp_msg_0.end_z = 0.574604439616;
    tmp_msg_0.end_z_units = 183U;
    tmp_msg_0.speed = 0.874396928661;
    tmp_msg_0.speed_units = 203U;
    tmp_msg_0.lradius = 0.330108255651;
    tmp_msg_0.flags = 5U;
    msg.control.set(tmp_msg_0);
    msg.duration = 54471U;
    msg.custom.assign("OCUMJYOFRHSLCXEASNSKRQPIAHPWYKLBZCPXSXWNMYGML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.290187436871);
    msg.setSource(9722U);
    msg.setSourceEntity(159U);
    msg.setDestination(35778U);
    msg.setDestinationEntity(136U);
    msg.timeout = 50648U;
    msg.lat = 0.335984945008;
    msg.lon = 0.91909165393;
    msg.z = 0.88737257101;
    msg.z_units = 243U;
    msg.speed = 0.403654119329;
    msg.speed_units = 217U;
    msg.bearing = 0.353392439595;
    msg.cross_angle = 0.269976582295;
    msg.width = 0.762547156995;
    msg.length = 0.838339516095;
    msg.hstep = 0.38010011127;
    msg.coff = 72U;
    msg.alternation = 128U;
    msg.flags = 221U;
    msg.custom.assign("GLONFOXBWECSMROCQTHVRZDNLLVKUVMPNDEVTYXQHKYWEGEKEYRLDKTMPCIEZZFHUFBMAOIUIKKRWOCBPCQGFIWMHIKSXSTTQBMDFSLZAGOVOQOWFJAUGYPCNDQIQXLWKXERYJI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.501395181568);
    msg.setSource(19002U);
    msg.setSourceEntity(157U);
    msg.setDestination(13954U);
    msg.setDestinationEntity(235U);
    msg.timeout = 36629U;
    msg.lat = 0.563623666153;
    msg.lon = 0.512293975595;
    msg.z = 0.137058861854;
    msg.z_units = 207U;
    msg.speed = 0.931876381052;
    msg.speed_units = 30U;
    msg.bearing = 0.555930669202;
    msg.cross_angle = 0.779063190614;
    msg.width = 0.107972864049;
    msg.length = 0.680775224037;
    msg.hstep = 0.0615498848154;
    msg.coff = 225U;
    msg.alternation = 141U;
    msg.flags = 195U;
    msg.custom.assign("ZGGGKSZPZYNBQDHFZSBPXCOZASYJFLHWBESJKXHZUMONPRNEDENYWJHCGZGJTRUEQECIWMGFVLSJOXCVLBXECXFYUQBYABRSQOWZLHHSHIFQKLGDITEBCCGHPWPDWZLHBUIQTY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.234835442462);
    msg.setSource(44927U);
    msg.setSourceEntity(160U);
    msg.setDestination(33222U);
    msg.setDestinationEntity(51U);
    msg.timeout = 30944U;
    msg.lat = 0.938956180816;
    msg.lon = 0.841936084778;
    msg.z = 0.779386686178;
    msg.z_units = 185U;
    msg.speed = 0.805460483858;
    msg.speed_units = 165U;
    msg.bearing = 0.682776958891;
    msg.cross_angle = 0.109104008714;
    msg.width = 0.611438154674;
    msg.length = 0.15695516813;
    msg.hstep = 0.367093888999;
    msg.coff = 75U;
    msg.alternation = 91U;
    msg.flags = 148U;
    msg.custom.assign("AFPVSHYSXXAXCNIAOGFEBLHNDOKXRGJYRGRLQJGOGHKIILB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.976702654456);
    msg.setSource(47726U);
    msg.setSourceEntity(77U);
    msg.setDestination(14071U);
    msg.setDestinationEntity(189U);
    msg.timeout = 46292U;
    msg.lat = 0.730347047162;
    msg.lon = 0.637801666497;
    msg.z = 0.30052004916;
    msg.z_units = 180U;
    msg.speed = 0.0947868501822;
    msg.speed_units = 159U;
    msg.custom.assign("AFWRLHTGHENRZTXTXSVBBJECLTAIOCFNPIURAURXLFAQMLCCVKGFNLXXBJMGEKDZUUEIVMMQHCUEBIVVSIQRVWKYZPFYUWBISSYXCDCSWAVXEAMRPYIDDPEBJNLKAIHNPSUHUMTCFWOGVYGNDQNZCLANZOHXLKJTYJHJVZQGGEOPKHWTRKYMKUAFOLPVZDGTEHPZJTYBQDWKWJFZOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.267839580173);
    msg.setSource(63109U);
    msg.setSourceEntity(39U);
    msg.setDestination(46261U);
    msg.setDestinationEntity(65U);
    msg.timeout = 14473U;
    msg.lat = 0.548072021977;
    msg.lon = 0.14322943716;
    msg.z = 0.643962377697;
    msg.z_units = 121U;
    msg.speed = 0.347382655291;
    msg.speed_units = 76U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.962239073046;
    tmp_msg_0.y = 0.142574318791;
    tmp_msg_0.z = 0.72610140151;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HEEEUBADDOPRFTMTGUSAOGFWQCZGEIWMPNNKHFTCOCDVIFSZQCZDRLJQGZMOKGPWDLIHORFYLYRHFAHCNYUJAVQBXJNYTHVYUQLIWZSOEHMZFNUJCESISOJYAZFEOAJTXXOWQDKOVGIVNUNWARRQRMAXBPULBVKBNYXPDTAFRELNWCMWPKJDVBJTUMKHCSLTMJPQMXUFJBI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.307532899613);
    msg.setSource(42499U);
    msg.setSourceEntity(25U);
    msg.setDestination(26181U);
    msg.setDestinationEntity(204U);
    msg.timeout = 4149U;
    msg.lat = 0.961160492367;
    msg.lon = 0.177916265989;
    msg.z = 0.980980845694;
    msg.z_units = 25U;
    msg.speed = 0.710201058793;
    msg.speed_units = 186U;
    msg.custom.assign("KVRAKOTYQFQCEDEYSXBUOUIWTARMQEGKPRNDCALJAQZKNDEUQLUUXCDXMCRGCGXGBYIGEMIWMHXXHLJNKCYSVOWLHOFVFLFVWLNOJPICSZCNYAWKOUJQRZUYXHLJYRNXOKEBSLANORNFVJGSOBRALESTPAPZUDQBKDMFIHHGHHZGTMUVZQQICXJYTJSMRIZASZSMBSFVOTWXGCVJDUIBIBYIYBKFPNDWMTTEDBWLVZPT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.718724199187);
    msg.setSource(4000U);
    msg.setSourceEntity(207U);
    msg.setDestination(59741U);
    msg.setDestinationEntity(81U);
    msg.x = 0.286159845756;
    msg.y = 0.644988730021;
    msg.z = 0.886573463902;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.42620164481);
    msg.setSource(30575U);
    msg.setSourceEntity(93U);
    msg.setDestination(51585U);
    msg.setDestinationEntity(12U);
    msg.x = 0.0172757776503;
    msg.y = 0.872286089199;
    msg.z = 0.850562427949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.906000640519);
    msg.setSource(50015U);
    msg.setSourceEntity(221U);
    msg.setDestination(32277U);
    msg.setDestinationEntity(73U);
    msg.x = 0.290013441387;
    msg.y = 0.513340478951;
    msg.z = 0.960675805201;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.764504949753);
    msg.setSource(57077U);
    msg.setSourceEntity(202U);
    msg.setDestination(6985U);
    msg.setDestinationEntity(254U);
    msg.timeout = 25262U;
    msg.lat = 0.195232429924;
    msg.lon = 0.125747234869;
    msg.z = 0.640724162666;
    msg.z_units = 208U;
    msg.amplitude = 0.814917428322;
    msg.pitch = 0.196017336751;
    msg.speed = 0.903312333742;
    msg.speed_units = 27U;
    msg.custom.assign("EUNUBVZGNTLKYCNFITXCHLTZDDVZGBPJHVHGQSMDRQMNSPDEEADJWUFIAAOXEFMAJCYVYKLWEQWZHUUXFYZQNWIYHPBWAJFJRWTMFWMNMVIBFSDMOXZRFSBGPUFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.832840565013);
    msg.setSource(44587U);
    msg.setSourceEntity(61U);
    msg.setDestination(36698U);
    msg.setDestinationEntity(239U);
    msg.timeout = 591U;
    msg.lat = 0.519933286987;
    msg.lon = 0.681496994457;
    msg.z = 0.350626819419;
    msg.z_units = 32U;
    msg.amplitude = 0.101743710401;
    msg.pitch = 0.028245281661;
    msg.speed = 0.270475298523;
    msg.speed_units = 66U;
    msg.custom.assign("ORKZWFSCVAMGZSQEAXKXXEPMNXBTEOHSPBTTCEVGJEXZQEJIIMCJRIBAN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.711029787502);
    msg.setSource(57553U);
    msg.setSourceEntity(168U);
    msg.setDestination(64280U);
    msg.setDestinationEntity(48U);
    msg.timeout = 39644U;
    msg.lat = 0.942070930086;
    msg.lon = 0.771438452117;
    msg.z = 0.13195985632;
    msg.z_units = 13U;
    msg.amplitude = 0.0141508200449;
    msg.pitch = 0.841070260411;
    msg.speed = 0.606620840269;
    msg.speed_units = 197U;
    msg.custom.assign("MPJZMDUXISQZNFMVMVSPIYYNZTGLUHQGTROBZTPXIMDVBVPJBTUKQKVNBUFJAEONRMIUUFWFCZDFHBKGRACZEHSPDJLMGYJAQGSFFL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.821440496597);
    msg.setSource(57899U);
    msg.setSourceEntity(217U);
    msg.setDestination(40197U);
    msg.setDestinationEntity(35U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.151606131351);
    msg.setSource(50087U);
    msg.setSourceEntity(76U);
    msg.setDestination(42204U);
    msg.setDestinationEntity(126U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.556110552268);
    msg.setSource(25181U);
    msg.setSourceEntity(126U);
    msg.setDestination(38353U);
    msg.setDestinationEntity(164U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.741532242943);
    msg.setSource(8119U);
    msg.setSourceEntity(35U);
    msg.setDestination(32094U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.334828960621;
    msg.lon = 0.134782502753;
    msg.z = 0.473044008942;
    msg.z_units = 83U;
    msg.radius = 0.266063764672;
    msg.duration = 48217U;
    msg.speed = 0.741361607382;
    msg.speed_units = 11U;
    msg.custom.assign("BDHJFEIPWGRKGJUOVPEKMHNXWJWKISRSGEEUOXERDWSLZIMOVQUYGKTNIHNBOYDPQZWABNTKSLVZXITVLPFDHMTBNKCQVBHRMCVVJLQCCYESPZPLLETFYDINCNGLZAKBCMQYSSXVCAHLRTMZFDRCZWCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.813749101533);
    msg.setSource(51280U);
    msg.setSourceEntity(237U);
    msg.setDestination(26940U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.814670616398;
    msg.lon = 0.104113432112;
    msg.z = 0.783478213835;
    msg.z_units = 186U;
    msg.radius = 0.668743266446;
    msg.duration = 40093U;
    msg.speed = 0.661805482039;
    msg.speed_units = 190U;
    msg.custom.assign("ITMYFKODXNSAMRHJJKDRAPZKBDVVTZQUUYVSHJWRCGKVBFSNNJIMQBWJFOKTRUZDJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.0537095216628);
    msg.setSource(59144U);
    msg.setSourceEntity(38U);
    msg.setDestination(20053U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.395675150259;
    msg.lon = 0.837028242002;
    msg.z = 0.895390272387;
    msg.z_units = 129U;
    msg.radius = 0.154893539838;
    msg.duration = 18453U;
    msg.speed = 0.512121416105;
    msg.speed_units = 219U;
    msg.custom.assign("ELXQOEIIZEQFHVBOBWJKUVWLLXAIROGMBECTQOWJCNDATLPASEFIFVJUXANRWFXUXO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.457681269285);
    msg.setSource(54303U);
    msg.setSourceEntity(59U);
    msg.setDestination(57366U);
    msg.setDestinationEntity(127U);
    msg.timeout = 22781U;
    msg.flags = 242U;
    msg.lat = 0.973157636741;
    msg.lon = 0.030386429906;
    msg.start_z = 0.664580800323;
    msg.start_z_units = 8U;
    msg.end_z = 0.906107199077;
    msg.end_z_units = 162U;
    msg.radius = 0.987451968692;
    msg.speed = 0.499530755904;
    msg.speed_units = 127U;
    msg.custom.assign("RKWCMCCGWMXLPNVPQFXIECLYOTDBOYFNRVAUTOENQDGBYYTYJQJXNDIUBXGFKSSKADLYVWSWAVXQZKSFAZULCXKVBQRDXRSFUWRUQJUBAPOZFYANEPQKNWEOITLMGZUHDPXGJJHMBCUSWIBVGWTLRUBLISGEBEGZOKEEJCJMAGOQTWKHHTTLCPPVFNGZDACZVJVUIFSRSEOQYCLMRQNRTW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.319784062227);
    msg.setSource(40973U);
    msg.setSourceEntity(169U);
    msg.setDestination(9692U);
    msg.setDestinationEntity(63U);
    msg.timeout = 41643U;
    msg.flags = 57U;
    msg.lat = 0.51361881486;
    msg.lon = 0.163213373172;
    msg.start_z = 0.861118795838;
    msg.start_z_units = 41U;
    msg.end_z = 0.70917762366;
    msg.end_z_units = 16U;
    msg.radius = 0.11898531139;
    msg.speed = 0.927344902761;
    msg.speed_units = 188U;
    msg.custom.assign("UHYNLMFYJXSZZHZHXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.151388639342);
    msg.setSource(13896U);
    msg.setSourceEntity(166U);
    msg.setDestination(8704U);
    msg.setDestinationEntity(181U);
    msg.timeout = 19983U;
    msg.flags = 222U;
    msg.lat = 0.885101143567;
    msg.lon = 0.114963568526;
    msg.start_z = 0.522482409894;
    msg.start_z_units = 14U;
    msg.end_z = 0.740476818789;
    msg.end_z_units = 13U;
    msg.radius = 0.215997464608;
    msg.speed = 0.700501645475;
    msg.speed_units = 137U;
    msg.custom.assign("VBIIWXOOVMCPZHSKKPDIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.559508335967);
    msg.setSource(41828U);
    msg.setSourceEntity(207U);
    msg.setDestination(5910U);
    msg.setDestinationEntity(213U);
    msg.timeout = 60165U;
    msg.lat = 0.987486994413;
    msg.lon = 0.896194285837;
    msg.z = 0.749959186247;
    msg.z_units = 82U;
    msg.speed = 0.164717281294;
    msg.speed_units = 231U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.393828730329;
    tmp_msg_0.y = 0.507260620368;
    tmp_msg_0.z = 0.309029523794;
    tmp_msg_0.t = 0.156348945532;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IJJYPPNYOFYJGWEBDSINQKYMMNWCXPSNKQAXYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.863101457486);
    msg.setSource(337U);
    msg.setSourceEntity(247U);
    msg.setDestination(6976U);
    msg.setDestinationEntity(25U);
    msg.timeout = 40864U;
    msg.lat = 0.43298754586;
    msg.lon = 0.193192065702;
    msg.z = 0.695602601123;
    msg.z_units = 111U;
    msg.speed = 0.567605544203;
    msg.speed_units = 224U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.21702867147;
    tmp_msg_0.y = 0.448494540629;
    tmp_msg_0.z = 0.855503283431;
    tmp_msg_0.t = 0.884256812236;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PNAEUDOBYTEUTIWYRVMINMOFVCBJVOZVGSAHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.00791451476794);
    msg.setSource(34319U);
    msg.setSourceEntity(71U);
    msg.setDestination(46413U);
    msg.setDestinationEntity(37U);
    msg.timeout = 37086U;
    msg.lat = 0.686845452019;
    msg.lon = 0.0522546552409;
    msg.z = 0.589806927556;
    msg.z_units = 84U;
    msg.speed = 0.889993094877;
    msg.speed_units = 56U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.53661142565;
    tmp_msg_0.y = 0.347685213553;
    tmp_msg_0.z = 0.69654745395;
    tmp_msg_0.t = 0.940455810098;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WITKXYZNDFNWWXOTJMCRXDPEAOUQCAGGTQLNMKCOLHVSNYWXHDEFRFMRVZPRGIVUMQSSLLLULFHEIJDYZSCTKQMGHAAOXBRAJEOETUDZGSHQHRXDHTPOJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.521610449998);
    msg.setSource(5264U);
    msg.setSourceEntity(247U);
    msg.setDestination(15475U);
    msg.setDestinationEntity(132U);
    msg.x = 0.581030164086;
    msg.y = 0.288174229874;
    msg.z = 0.197562810599;
    msg.t = 0.556166334546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.716564173905);
    msg.setSource(31978U);
    msg.setSourceEntity(30U);
    msg.setDestination(31978U);
    msg.setDestinationEntity(102U);
    msg.x = 0.152017690313;
    msg.y = 0.31058394518;
    msg.z = 0.812205208089;
    msg.t = 0.548938994677;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.923128735102);
    msg.setSource(22114U);
    msg.setSourceEntity(170U);
    msg.setDestination(23077U);
    msg.setDestinationEntity(166U);
    msg.x = 0.678193801434;
    msg.y = 0.995097018438;
    msg.z = 0.754840552862;
    msg.t = 0.325068047673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.885228795847);
    msg.setSource(50716U);
    msg.setSourceEntity(74U);
    msg.setDestination(14196U);
    msg.setDestinationEntity(21U);
    msg.timeout = 49070U;
    msg.name.assign("JROMBSGUZOSZQJPSRDFGILYTKIKWYGQIMRJTVVWASWCHVDJTMGYUXESKYOYKTUVADTALEQXBNWPMNTYXEXRSQWNENGOYSVCMCHGAZPIWKIQMFWDFKZDPRURZCABGLABDHUMURFXEJHZQFKUZXCDNLWDSTBDPCOQVTGOPGDMAVFAQPMIJARBNVLQEJFYZLEEOXOFVYKPEZSUTJRJHCRVXLCBOATPHBZIFIWSKYPCHFHIGHJUUWELLNM");
    msg.custom.assign("MYICLHPYJRGCROVKUVLGNYNACYJEPDRAKQOWAFXKEXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.529629976987);
    msg.setSource(32796U);
    msg.setSourceEntity(34U);
    msg.setDestination(50528U);
    msg.setDestinationEntity(143U);
    msg.timeout = 18171U;
    msg.name.assign("HFBQTNZSECRVKDLDNASYCKHFHPKPAHBXIOLUFUNBWSVIRTXDXMSUOTJ");
    msg.custom.assign("PMLVZUQQNZNDJSECCJVMWZLRKKUXPDIFSYUIXSBJEYZRXFPFEMZAAKZOMEEWYVYGOJBETPLVTYQPPCHKVIDOXASLAGOIGBIPSQPDDIOFHSWXXARDAEBRMNBFEREJGBSCCWVKTXJHGDCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.117256653999);
    msg.setSource(28612U);
    msg.setSourceEntity(93U);
    msg.setDestination(16020U);
    msg.setDestinationEntity(127U);
    msg.timeout = 1983U;
    msg.name.assign("NIYTGRIDOKNPCOWTJXDKEMSICHYMWXTSTGBWYLKFYHNREIYELAJYBUCTHEVSQQUQDMNKNRBLJUGOLPDAGFXQSAOOBUOVMPVKZLQRRZRXOABMIGCPAONTNLTJWHDBXZSPOTVPJLCACFMYETRXSMJWPZKUJUOYHDDFVPGBIUEKZEQQDZARTBCSKLIKECNXV");
    msg.custom.assign("OXTVNHJOKWLBGPEGAQEZEIRHOJWMMEAWSQPODYKRFUXAWYBOHJMFCPIRGBDLUZUJUALNHWZRXYXYFURZBLIEXQNWTHIDNHONDAAYICLJMDTPGMNRGUDSGRBHBEPPXFXNCVCEMRTYSQBOCZVTZZLATDFUGBNQKQXTTKMKLIOIWEVJNQPSKSILPZZKEVAJDQDVTCBVASQHCMCXYLGRHJUQEP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.196342530115);
    msg.setSource(11681U);
    msg.setSourceEntity(199U);
    msg.setDestination(2566U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.889174932094;
    msg.lon = 0.0160626590295;
    msg.z = 0.70002737977;
    msg.z_units = 149U;
    msg.speed = 0.0906959980915;
    msg.speed_units = 213U;
    msg.start_time = 0.827541151003;
    msg.custom.assign("FQCSPGUUTUDPYSZESBSUMOKRGSKZZLHZBBDTCTVGVRDEANKPLLWKFRXZCDMOYPAJHBMYVV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.278102388279);
    msg.setSource(29995U);
    msg.setSourceEntity(127U);
    msg.setDestination(38081U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.0344562149449;
    msg.lon = 0.626159410694;
    msg.z = 0.687025227154;
    msg.z_units = 71U;
    msg.speed = 0.86396467811;
    msg.speed_units = 30U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.271786101162;
    tmp_msg_0.y = 0.394450663844;
    tmp_msg_0.z = 0.518505694128;
    tmp_msg_0.t = 0.590690527057;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 15067U;
    tmp_msg_1.off_x = 0.23497075148;
    tmp_msg_1.off_y = 0.337326001742;
    tmp_msg_1.off_z = 0.520138195417;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0485599033803;
    msg.custom.assign("WLBUGITRCPTBJUBODVPQRDRLVFCYOKUYYBDTXGGJXSPWPBPTZXSOIAHVLMOSXAUWTZFEWGXGJUUUMVKILQCTMHKFTWMHHYOYKKIYYNWMITCACLQDDBDNHZNSRKVVJKQRNNFCOCCZERQHNSJEMENUKZPMHWFEWGNQMPHANVZSVNLHDJKDQGQALJLGBIWYXZZAXSIFYRIEEEOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.351864754131);
    msg.setSource(7556U);
    msg.setSourceEntity(99U);
    msg.setDestination(24292U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.551688210385;
    msg.lon = 0.866979538512;
    msg.z = 0.603787556091;
    msg.z_units = 83U;
    msg.speed = 0.363862786034;
    msg.speed_units = 102U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.490165417506;
    tmp_msg_0.y = 0.0427588090894;
    tmp_msg_0.z = 0.228192614719;
    tmp_msg_0.t = 0.32480031659;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.05929362376;
    msg.custom.assign("LAGYPFJJBCYGJITGRCSTXHADPXQECEPWZVQLMGNBYJZJVCIRLFIGQLBDQMWNOBTKZDVMFISUBSMGRPUBNKUNHGASRVMRSREVCNBEFBYVCKLWAAWFRYNZKOUGYPHIEZMXFKVDINMKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.717186342331);
    msg.setSource(2888U);
    msg.setSourceEntity(150U);
    msg.setDestination(6074U);
    msg.setDestinationEntity(2U);
    msg.vid = 4319U;
    msg.off_x = 0.388623549202;
    msg.off_y = 0.28012455081;
    msg.off_z = 0.880332535292;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.31974804464);
    msg.setSource(41596U);
    msg.setSourceEntity(44U);
    msg.setDestination(60557U);
    msg.setDestinationEntity(254U);
    msg.vid = 2717U;
    msg.off_x = 0.658426033839;
    msg.off_y = 0.782960418306;
    msg.off_z = 0.0673580624831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.136925904102);
    msg.setSource(152U);
    msg.setSourceEntity(1U);
    msg.setDestination(7222U);
    msg.setDestinationEntity(92U);
    msg.vid = 9607U;
    msg.off_x = 0.867504553758;
    msg.off_y = 0.353377609564;
    msg.off_z = 0.649259509627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.989625331831);
    msg.setSource(33267U);
    msg.setSourceEntity(236U);
    msg.setDestination(40619U);
    msg.setDestinationEntity(66U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.218773279017);
    msg.setSource(6139U);
    msg.setSourceEntity(229U);
    msg.setDestination(43094U);
    msg.setDestinationEntity(222U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.48007357361);
    msg.setSource(39921U);
    msg.setSourceEntity(66U);
    msg.setDestination(225U);
    msg.setDestinationEntity(77U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.599985930385);
    msg.setSource(34436U);
    msg.setSourceEntity(169U);
    msg.setDestination(20278U);
    msg.setDestinationEntity(38U);
    msg.mid = 21738U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.884630948118);
    msg.setSource(36112U);
    msg.setSourceEntity(151U);
    msg.setDestination(2430U);
    msg.setDestinationEntity(45U);
    msg.mid = 17273U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.0107789039602);
    msg.setSource(41615U);
    msg.setSourceEntity(17U);
    msg.setDestination(53025U);
    msg.setDestinationEntity(36U);
    msg.mid = 55661U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.178763974882);
    msg.setSource(49905U);
    msg.setSourceEntity(112U);
    msg.setDestination(54858U);
    msg.setDestinationEntity(15U);
    msg.state = 27U;
    msg.eta = 48877U;
    msg.info.assign("ZSBLDRSPOXIDNNKWRUJZAMYISLUVBWTVOARTQUQZNNQQSGZLPFUNXPUSCTMLOXPJCJDAPDEBBOQTVLAHJGCWTUQUXJNKTVGIEGEGJTAEHCGHMMMOXRSMVSPVILXEKYEBJVFIPSTWGYLFJFSXRMCFYRCBNFBONQLGDDTKBQYMQWRVYIFLTZDNAKZMUIZPAMBWNYPCRJWCDZODSGEKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.994764745644);
    msg.setSource(43234U);
    msg.setSourceEntity(199U);
    msg.setDestination(20390U);
    msg.setDestinationEntity(232U);
    msg.state = 124U;
    msg.eta = 62876U;
    msg.info.assign("QMARIHCOONVAXSUKYDETYUIQHAJKYWQPXSWTGTZAYSGMUJAGKSFLDKVCFGETXMYVPOQIJSMSNXVHUJKTWSTBDDELQULFBXJZWMQEUXYCMVODZWCWBYIQUDJGOAEKVNGWFNRDHHHSRNCOBOO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.0194113750995);
    msg.setSource(20513U);
    msg.setSourceEntity(149U);
    msg.setDestination(64279U);
    msg.setDestinationEntity(91U);
    msg.state = 222U;
    msg.eta = 10594U;
    msg.info.assign("HOBTNNLMPZIFEKOVRTKLLDVAUODHUBBKYUADHDGYYTBNLMJCFZGLGPPIEISRZSYGFBCAXVNFQDAZEI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.155945987549);
    msg.setSource(19605U);
    msg.setSourceEntity(243U);
    msg.setDestination(11634U);
    msg.setDestinationEntity(162U);
    msg.system = 10321U;
    msg.duration = 6595U;
    msg.speed = 0.364759638193;
    msg.speed_units = 237U;
    msg.x = 0.680310370589;
    msg.y = 0.579542194374;
    msg.z = 0.611097285432;
    msg.z_units = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.896816687392);
    msg.setSource(54994U);
    msg.setSourceEntity(167U);
    msg.setDestination(38351U);
    msg.setDestinationEntity(104U);
    msg.system = 512U;
    msg.duration = 42134U;
    msg.speed = 0.012373945773;
    msg.speed_units = 210U;
    msg.x = 0.475060224306;
    msg.y = 0.469676006435;
    msg.z = 0.0706142413956;
    msg.z_units = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.948119180551);
    msg.setSource(18719U);
    msg.setSourceEntity(229U);
    msg.setDestination(41275U);
    msg.setDestinationEntity(45U);
    msg.system = 60427U;
    msg.duration = 9232U;
    msg.speed = 0.714534375371;
    msg.speed_units = 86U;
    msg.x = 0.89781705619;
    msg.y = 0.0358956869956;
    msg.z = 0.340749868796;
    msg.z_units = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.755357926672);
    msg.setSource(11444U);
    msg.setSourceEntity(145U);
    msg.setDestination(18073U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.524858379031;
    msg.lon = 0.512854822989;
    msg.speed = 0.546624051719;
    msg.speed_units = 38U;
    msg.duration = 2031U;
    msg.sys_a = 36840U;
    msg.sys_b = 49895U;
    msg.move_threshold = 0.658003143337;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.0945443507153);
    msg.setSource(21390U);
    msg.setSourceEntity(201U);
    msg.setDestination(63053U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.652269141576;
    msg.lon = 0.85701004905;
    msg.speed = 0.758391997619;
    msg.speed_units = 40U;
    msg.duration = 6205U;
    msg.sys_a = 37165U;
    msg.sys_b = 33135U;
    msg.move_threshold = 0.0016307216471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.0403466318813);
    msg.setSource(58497U);
    msg.setSourceEntity(105U);
    msg.setDestination(21536U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.392394881134;
    msg.lon = 0.0977116592811;
    msg.speed = 0.896467578483;
    msg.speed_units = 75U;
    msg.duration = 22235U;
    msg.sys_a = 32993U;
    msg.sys_b = 46087U;
    msg.move_threshold = 0.276559835707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.0574019868263);
    msg.setSource(30071U);
    msg.setSourceEntity(145U);
    msg.setDestination(7956U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.771797554304;
    msg.lon = 0.0830862189523;
    msg.z = 0.201888707172;
    msg.z_units = 38U;
    msg.speed = 0.0462224209946;
    msg.speed_units = 170U;
    msg.custom.assign("DOZXYYRUHVHEETXTMNLMHKWMSQGQDVAOHBIIUMZZNAXMCGVAANPCJLSUORACIWZEKOPAIOYGFTGDTWCTIIPFBBCWDVRHVBEGTKERSWXKKHBBVLGWZZNYXTZLEGABPHWNDKQUUJZCOSEQDPYYXFRSUUJFBGLCHXFIRLUPVQUXPWFJQWCOVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.858352342907);
    msg.setSource(55291U);
    msg.setSourceEntity(187U);
    msg.setDestination(51646U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.183564267634;
    msg.lon = 0.143192921453;
    msg.z = 0.654674759363;
    msg.z_units = 38U;
    msg.speed = 0.388241896695;
    msg.speed_units = 164U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0994444230799;
    tmp_msg_0.lon = 0.223546581023;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FFCFOYXEOIPRXBKOVLLGPVUOMDZETQUKLFCVUKJDEVKQLEKJOJGYXPTFJMYGVDTJCXYFDRPAUWITMSBXDMDILSDRATXLFYAGMWBQVSRBYCWNNIGEZNOFISZQHSCJUWIIZPJHGCAMPWEPSNPPLHVYQZLANSFQLXTQGXOYOBW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.491310513889);
    msg.setSource(29895U);
    msg.setSourceEntity(55U);
    msg.setDestination(51510U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.165688040852;
    msg.lon = 0.744611393818;
    msg.z = 0.327131176615;
    msg.z_units = 225U;
    msg.speed = 0.556341641378;
    msg.speed_units = 181U;
    msg.custom.assign("AANCXLLPMYGPQABEQAUORHTYMCAMFVTWWNPKJQYTCZWVBUYUFOKODLWRNXJUPEEPHRSRLLMMKBUQEBEFGSYDSEOHAKJNCZKITEPJXFOTMEZCGQTSBSBRAYQCZXKVHOOVDDPHPIGNBL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.0702562981117);
    msg.setSource(30190U);
    msg.setSourceEntity(127U);
    msg.setDestination(62264U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.497504364591;
    msg.lon = 0.625946417498;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.15971224371);
    msg.setSource(16492U);
    msg.setSourceEntity(162U);
    msg.setDestination(36821U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.691729132625;
    msg.lon = 0.605471728446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.735158193258);
    msg.setSource(57082U);
    msg.setSourceEntity(15U);
    msg.setDestination(7674U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.514251044103;
    msg.lon = 0.369316645177;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.449700810366);
    msg.setSource(18789U);
    msg.setSourceEntity(130U);
    msg.setDestination(57599U);
    msg.setDestinationEntity(190U);
    msg.timeout = 40113U;
    msg.lat = 0.629512871933;
    msg.lon = 0.680903438561;
    msg.z = 0.0187931342103;
    msg.z_units = 218U;
    msg.pitch = 0.89006358881;
    msg.amplitude = 0.340793788047;
    msg.duration = 12311U;
    msg.speed = 0.541332927361;
    msg.speed_units = 213U;
    msg.radius = 0.718663649923;
    msg.direction = 225U;
    msg.custom.assign("KBCYGWJVXMISHOIGBSIBTDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.820808920438);
    msg.setSource(28759U);
    msg.setSourceEntity(75U);
    msg.setDestination(56298U);
    msg.setDestinationEntity(218U);
    msg.timeout = 48282U;
    msg.lat = 0.771677455319;
    msg.lon = 0.826837607151;
    msg.z = 0.488492599236;
    msg.z_units = 49U;
    msg.pitch = 0.96300447292;
    msg.amplitude = 0.641771098147;
    msg.duration = 4177U;
    msg.speed = 0.666907138818;
    msg.speed_units = 202U;
    msg.radius = 0.506195111248;
    msg.direction = 83U;
    msg.custom.assign("BTPHWUFCDWMNIRGOYIVRCLXTSERCZSXJCWQDLUAPTTJDENEABPRKPXYTDSINBHKDSVXKEVIBGUYVUFJFSQEKJGMZVQENSOLFGDOMLTFMXAGHTKZANROASNYGCJAYMJUPLUIDFEOBXLUHJYIZAKBXSRUWTQDWVWMYVZYQSXQKLNEEXRMBVNADQITXFYHRHRMGVFUKFAOZKLOPCPWPKHZGWODNMEWIGCIQHTJVZYBIWQHCQCARHSNCLPZZB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.9046020535);
    msg.setSource(61665U);
    msg.setSourceEntity(241U);
    msg.setDestination(26514U);
    msg.setDestinationEntity(10U);
    msg.timeout = 13618U;
    msg.lat = 0.596952112804;
    msg.lon = 0.996353224532;
    msg.z = 0.829513023599;
    msg.z_units = 160U;
    msg.pitch = 0.593382819533;
    msg.amplitude = 0.0913234287616;
    msg.duration = 45140U;
    msg.speed = 0.857661379944;
    msg.speed_units = 244U;
    msg.radius = 0.173798311189;
    msg.direction = 17U;
    msg.custom.assign("ILDZQFIGSUVCG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.577660594555);
    msg.setSource(63940U);
    msg.setSourceEntity(222U);
    msg.setDestination(62568U);
    msg.setDestinationEntity(197U);
    msg.formation_name.assign("ATZEWOXQTL");
    msg.reference_frame = 162U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53433U;
    tmp_msg_0.off_x = 0.572012915234;
    tmp_msg_0.off_y = 0.0853701097836;
    tmp_msg_0.off_z = 0.1422216526;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UHETRKHHHTDNZXZPRCVIUOYGEISHVVQLOTOBLWODDKHVHAQLZELGEYVWWDGCRAJDXGSCPIJZMRTSBJBXYZKPZKHMSNFTYAXNMYHJJQUYMQRPGRBWBPRPXJNIVOMVXQIXOPPXNZWTEQYCMCILEXENMWPGSFCSSJSTAAJWHZLWVJDQEBCWGFGQKUOOFKOUBRDLXVUMIBJUTNRORUCGASAIFFFFTEECIKNSLYYAQZDQIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.430736808514);
    msg.setSource(15449U);
    msg.setSourceEntity(192U);
    msg.setDestination(35598U);
    msg.setDestinationEntity(100U);
    msg.formation_name.assign("BDDWIQOQKWEZNCDOYUOQAHMQTIEEWJIGDMBAUJXGCNEISSBD");
    msg.reference_frame = 162U;
    msg.custom.assign("CXZKJELASXKDOVMSNRRTBQBYHPWWECGCKFTAOXDEQCZPRAXPBRMHRAMVLMIWCWXDHFVHHIJYTMJDHUVGHTQMYMBNKDGZDALIUGXZQTRWAHCQJVOBVCNAYKCWAPFTEJIMZPRUEFJGIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.582759871296);
    msg.setSource(26221U);
    msg.setSourceEntity(31U);
    msg.setDestination(1176U);
    msg.setDestinationEntity(145U);
    msg.formation_name.assign("LIKETNRXZDPGMIFAYXSDCTEMCIBXMQHIBUQVOUT");
    msg.reference_frame = 102U;
    msg.custom.assign("JFUBAAMTSRSGSIYYXZVPDECJLMJXCSCMGBZLQWMBHDCITJKYNSIVAURLEZHQLKSRYLDGZFUKVEKQRQOEOAJJHLTLSRMFTVZYKLWWEFNBDIPWIEZTCVKIXXZYEPNXINNGOBHWSBOQVOTQSAPXFTYAVJXZAAGMNQIKRTRUUGHYEXMUPPWHCPUKFIMHZYFCUWRVNPCQOENPMOBTCKPFNVWWSWRCBUVROQBHK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.640850454644);
    msg.setSource(39473U);
    msg.setSourceEntity(227U);
    msg.setDestination(38740U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("AZYHDRZVJEKXJUEPZXPFNISVJHLWDFWOWWTPUUWBACODAIS");
    msg.formation_name.assign("XGWVYCZNSWNAPHVIBMERFADAKYLMNZGKUIXHSRHVEQYLGOEUOGLEUTXSMYSFKYIMUQPRKMPDMZDRNZWDOORLUFJCEDIKTNDXKKIWFLJJVBEQTVUBUSSEBECMEVYDCPNIWJVLXNZFPNTJZGMBJPHSCABZHGWRYIHZAMWCUDFPKIAPJCFFCTCOUFTRQSEQCYTYZVKZDOIABOAHRXVUGTRN");
    msg.plan_id.assign("PUYGYVQXESHCJMNYXIWUCYJCIJTVWEBPURVIPENKVLSNBKJMTCDVHDIXQOZTOOWOTULDERSGFWBLVDFLYHGHYCJTDRFHPXNNDIHQCGTFMEPMFOUWDGRWNXSMGIIYERJQMUATGSEKPEMWROVHLBZPMCOHNAYQJDHXTQEACLRBBKZCJFWBLNWZZVPVYISRLBXGGAKRLIZVINSASTOXKKCKAAFARUFFKDQEPMJQQZMDAZUAGKZYUXZ");
    msg.description.assign("JDSGCIOVOXKKXVFMNLMPUNLMTJCAWTODEKZIFHHRIBGSXZPCUZHAJCYPVGZPHYSMSWLLWDHSTZQTPBRFLAZLVBOUEIWZMUTYKUGU");
    msg.leader_speed = 0.571901990442;
    msg.leader_bank_lim = 0.168178419751;
    msg.pos_sim_err_lim = 0.301000465475;
    msg.pos_sim_err_wrn = 0.857506420646;
    msg.pos_sim_err_timeout = 61818U;
    msg.converg_max = 0.765754230371;
    msg.converg_timeout = 51862U;
    msg.comms_timeout = 39226U;
    msg.turb_lim = 0.572827629455;
    msg.custom.assign("BFCIBOMNURKPJDNQWJUNRGXEYFTJUSVDSNLQPOSOKTUKPMZFJACMYEZDJTWUHNBVXHUHOVMZWCJEYQHKSZVJHLDRMNXIYBTCNHWVIMIAXGWIEVNPKDCRLBGXHPQWEBYGDLSVWZPQOVSOZHEVQLKSCGTDEDMCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.0421544618746);
    msg.setSource(45814U);
    msg.setSourceEntity(130U);
    msg.setDestination(5576U);
    msg.setDestinationEntity(87U);
    msg.group_name.assign("QWJULEKMLHUKSPYO");
    msg.formation_name.assign("OKQKRGOSAAWUMSFHZCYFCNCDWHQOXOWGOGMMDNDUFVFXSUQLPKHWEGEKQKLMCOVPUZGBFOYOWAXZEWTZIENPAEDMTFPFNWUZXTVZPDKVMQABMJTWIZLJIJUYRUPUVEITJYJJKCVNBENHHWLMYXZTQXIKACPRXJVHMYBJVIFRRDSNMEGELODTRTBCRRZGYQKHBACXIGRQIWZFVFBPNGNXNSCDBIRUQLUGLDTYAYPTD");
    msg.plan_id.assign("JPGTZHJRCWMTDJNPEFFBOGPLDUPEHEDBEOCGIPRXYNIYQMDWXPMCSYQIXFGNBDXCFNLNZJUWZMRBSJYECQIPXQSQSMLTNGENHIKANJXAZFNESTDBULVRYWULJDFYKOFMISSKDVRGIAKFXAHJRUUKGVQYXZTSUAPYODUVTPLOHQUYBWQKVBRWBRKSJHKHMCZFLLICVGKRHLIARVSOAQKMLHOUVZGFGCVYJAWAWOZCDXQETXWTWZCPT");
    msg.description.assign("TOHNWUMEOALUOYFZPGGBCEBTJKTDPBUWEABOUVPIKFPGZJRRTYMPTVLVQJKJMAWZPRLBGWISSJFAYCBAPVFBZNRVQLDOVIMKYSLOKINNOJADRSNDUNPEMKXBSDCXSGXVRCGVHMDQQHQGENXQTNMFFMYCOCHWYLZVGIOIDRHKZXVNKWZUHAJEGUEHQSAUSTMDXTBEUKQWQX");
    msg.leader_speed = 0.822799408825;
    msg.leader_bank_lim = 0.40394337089;
    msg.pos_sim_err_lim = 0.085423453997;
    msg.pos_sim_err_wrn = 0.705252923954;
    msg.pos_sim_err_timeout = 45212U;
    msg.converg_max = 0.100152140805;
    msg.converg_timeout = 42072U;
    msg.comms_timeout = 40868U;
    msg.turb_lim = 0.717685326896;
    msg.custom.assign("BVHWDSVCMSMMJJLOMWFWQYIVSQGUPJHKBZXCQVEPTDJKZECEILJKWPPHINYQIYIZYGSLNLMRNDJGCCEFYFHUFAVERWFDTVQPJSD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.0249447822553);
    msg.setSource(5183U);
    msg.setSourceEntity(107U);
    msg.setDestination(21355U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("HOBBEUYGMVALEYGBJCOBBYRYFXSUOTMHGLOACGPAOKMCZQZVIFDRXVIUWZZZXQIDRTMHYREEJQNWACRNJFMCNWONTRTVOBELKENFLCDJWLPWHLPKQXYHKYEZPISPBGVMNUJBISHTFJTRNMJSLQGKPSNWXCTAIMDLSWCRAXKYQNVSUOQHLKWZQSFFEPYEPKQDIQEXIG");
    msg.formation_name.assign("FNUDMQWUKOPCIMORLTYCCDSFAAPQVWKISXOVFZTEBPAGIWQLXSRLBYUHVWGGONOLJBEKXRDTEXMJLQVDHGNGWIGUBZSPDYOGXRNVZTSXXGHTYCPVBYERHXRGZBIVQHJFPENZVCAMFALZJITESFKXEHOKNAUNKKNDMBDPSLBFKJDCASFRBPHQJLQARJNDTAOP");
    msg.plan_id.assign("YLQMNVZLPFGZKMGKBVUJGOJNEIDKZYKLGJQEJHFYKFJZRCHHWNZLTQIPCRGBNBUWXDTVARXNGANWRICVDLVRSIODNJECVWLAGEHLQFUIPSRFUPAWIBWSCBLSAMUNKDBCPZONXTWKSRDVOGPPFSTYJGQVATXYEIYQZHSBCOXSRHALQQEZDUEEKARTDIDDYTYMAYEZPMZOTMFHIXHPOMKBXVGSHWWCEMQKIUMYHNOFJRCJVTOPTBLF");
    msg.description.assign("ILGHIHVKWOPHMATFBFZYPPVKFSTCYBOLZDYLGJAAKLRUXOITXNQYWNFGDIHEMDUJAMNKTSNEIJKYSWKBJESULZMGDCOLGVUWTVMXMQUAAZVXAZSKTXCSEWQCCEBJZMLEDRIEXOCFVRZPDQUUAFORTYLWPZNYMYJGJMJZWFFTLECRXGHNVFMSTDBQDOC");
    msg.leader_speed = 0.360063440595;
    msg.leader_bank_lim = 0.214373746048;
    msg.pos_sim_err_lim = 0.166477138389;
    msg.pos_sim_err_wrn = 0.165053667354;
    msg.pos_sim_err_timeout = 27046U;
    msg.converg_max = 0.925738080752;
    msg.converg_timeout = 65434U;
    msg.comms_timeout = 56305U;
    msg.turb_lim = 0.697130031023;
    msg.custom.assign("SHEPEDYVFDKTYLOOKMSXJTCMUADHYRVFFSJLBEIPFKKWDMNZWXJIZXDWZYCUPVGBCDYGYSVUCUPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.592194416415);
    msg.setSource(63644U);
    msg.setSourceEntity(46U);
    msg.setDestination(31735U);
    msg.setDestinationEntity(226U);
    msg.control_src = 6204U;
    msg.control_ent = 161U;
    msg.timeout = 0.152266578016;
    msg.loiter_radius = 0.8837529989;
    msg.altitude_interval = 0.759418308447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.685079121463);
    msg.setSource(27106U);
    msg.setSourceEntity(200U);
    msg.setDestination(53737U);
    msg.setDestinationEntity(196U);
    msg.control_src = 34415U;
    msg.control_ent = 43U;
    msg.timeout = 0.633186749352;
    msg.loiter_radius = 0.446507187218;
    msg.altitude_interval = 0.735095545104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.554709803588);
    msg.setSource(6752U);
    msg.setSourceEntity(248U);
    msg.setDestination(57468U);
    msg.setDestinationEntity(235U);
    msg.control_src = 16831U;
    msg.control_ent = 207U;
    msg.timeout = 0.505090867126;
    msg.loiter_radius = 0.646770848859;
    msg.altitude_interval = 0.342028928153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.391430628055);
    msg.setSource(29800U);
    msg.setSourceEntity(137U);
    msg.setDestination(23755U);
    msg.setDestinationEntity(179U);
    msg.flags = 141U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.60426484966;
    tmp_msg_0.speed_units = 105U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.575503693062;
    tmp_msg_1.z_units = 240U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.473667976423;
    msg.lon = 0.366043443131;
    msg.radius = 0.442791105077;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.0612022929318);
    msg.setSource(47877U);
    msg.setSourceEntity(204U);
    msg.setDestination(172U);
    msg.setDestinationEntity(86U);
    msg.flags = 87U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.29498691355;
    tmp_msg_0.speed_units = 156U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0077714836965;
    tmp_msg_1.z_units = 45U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.47710894833;
    msg.lon = 0.472938722651;
    msg.radius = 0.608655167497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.761108668491);
    msg.setSource(32201U);
    msg.setSourceEntity(49U);
    msg.setDestination(60724U);
    msg.setDestinationEntity(156U);
    msg.flags = 58U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.699738974024;
    tmp_msg_0.speed_units = 55U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.768084976604;
    tmp_msg_1.z_units = 85U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.669960992941;
    msg.lon = 0.106402770183;
    msg.radius = 0.835823132458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.659119114735);
    msg.setSource(17208U);
    msg.setSourceEntity(110U);
    msg.setDestination(15240U);
    msg.setDestinationEntity(116U);
    msg.control_src = 10857U;
    msg.control_ent = 103U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 239U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.988415564987;
    tmp_tmp_msg_0_0.speed_units = 195U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.338208236737;
    tmp_tmp_msg_0_1.z_units = 183U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.696462980355;
    tmp_msg_0.lon = 0.79211995433;
    tmp_msg_0.radius = 0.24286537434;
    msg.reference.set(tmp_msg_0);
    msg.state = 34U;
    msg.proximity = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.0983258809548);
    msg.setSource(34013U);
    msg.setSourceEntity(114U);
    msg.setDestination(23207U);
    msg.setDestinationEntity(68U);
    msg.control_src = 22642U;
    msg.control_ent = 221U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 196U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.346128499419;
    tmp_tmp_msg_0_0.speed_units = 196U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.71056416303;
    tmp_tmp_msg_0_1.z_units = 215U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.434470612197;
    tmp_msg_0.lon = 0.661906108808;
    tmp_msg_0.radius = 0.969257502142;
    msg.reference.set(tmp_msg_0);
    msg.state = 43U;
    msg.proximity = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.702809292538);
    msg.setSource(26801U);
    msg.setSourceEntity(95U);
    msg.setDestination(27128U);
    msg.setDestinationEntity(207U);
    msg.control_src = 12917U;
    msg.control_ent = 153U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 51U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.892786722361;
    tmp_tmp_msg_0_0.speed_units = 115U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.752434327727;
    tmp_tmp_msg_0_1.z_units = 97U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0577023352189;
    tmp_msg_0.lon = 0.792007078646;
    tmp_msg_0.radius = 0.676146646065;
    msg.reference.set(tmp_msg_0);
    msg.state = 206U;
    msg.proximity = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.0619897027279);
    msg.setSource(62382U);
    msg.setSourceEntity(6U);
    msg.setDestination(33438U);
    msg.setDestinationEntity(112U);
    msg.ax_cmd = 0.861687837351;
    msg.ay_cmd = 0.855357992971;
    msg.az_cmd = 0.997648696592;
    msg.ax_des = 0.213591406934;
    msg.ay_des = 0.792092754074;
    msg.az_des = 0.653125809698;
    msg.virt_err_x = 0.867237342432;
    msg.virt_err_y = 0.0300848339183;
    msg.virt_err_z = 0.340032977995;
    msg.surf_fdbk_x = 0.561360695414;
    msg.surf_fdbk_y = 0.31348272677;
    msg.surf_fdbk_z = 0.503809775912;
    msg.surf_unkn_x = 0.114479284103;
    msg.surf_unkn_y = 0.919397615129;
    msg.surf_unkn_z = 0.323790252949;
    msg.ss_x = 0.218871619379;
    msg.ss_y = 0.0684952711441;
    msg.ss_z = 0.0388640708762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.651985552393);
    msg.setSource(20579U);
    msg.setSourceEntity(249U);
    msg.setDestination(24538U);
    msg.setDestinationEntity(249U);
    msg.ax_cmd = 0.288051998894;
    msg.ay_cmd = 0.66851542395;
    msg.az_cmd = 0.00510035629813;
    msg.ax_des = 0.0178615475631;
    msg.ay_des = 0.453425580639;
    msg.az_des = 0.713970401664;
    msg.virt_err_x = 0.427878537867;
    msg.virt_err_y = 0.147514845158;
    msg.virt_err_z = 0.576906889998;
    msg.surf_fdbk_x = 0.977835844372;
    msg.surf_fdbk_y = 0.843304598565;
    msg.surf_fdbk_z = 0.758653861364;
    msg.surf_unkn_x = 0.703072579504;
    msg.surf_unkn_y = 0.0488964526688;
    msg.surf_unkn_z = 0.95324464229;
    msg.ss_x = 0.0177735321543;
    msg.ss_y = 0.20021144872;
    msg.ss_z = 0.795774259964;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OAWFCDNSAQGOYCXULMLRYDMEXWHMCGBTMZEZYDJFFVQJUZTWHIYJQTOFGYUAPDWIMNCBUJKRSQLZUWVPMESGXJAWKMINOBYHKZPRMNEPVASBFXDMGOGRQVZEABUJTFCNSZHHUKUVEKVYNCLTWEHDOXXLDPNZGHTUWJIGJFVVKXKHGXTPYKKDA");
    tmp_msg_0.dist = 0.76445833957;
    tmp_msg_0.err = 0.692609241178;
    tmp_msg_0.ctrl_imp = 0.276907682761;
    tmp_msg_0.rel_dir_x = 0.439868640871;
    tmp_msg_0.rel_dir_y = 0.552771423183;
    tmp_msg_0.rel_dir_z = 0.514405989346;
    tmp_msg_0.err_x = 0.411808142503;
    tmp_msg_0.err_y = 0.364435927491;
    tmp_msg_0.err_z = 0.074401901356;
    tmp_msg_0.rf_err_x = 0.558482377408;
    tmp_msg_0.rf_err_y = 0.592814605491;
    tmp_msg_0.rf_err_z = 0.917962163541;
    tmp_msg_0.rf_err_vx = 0.207361975907;
    tmp_msg_0.rf_err_vy = 0.819424569343;
    tmp_msg_0.rf_err_vz = 0.331077479394;
    tmp_msg_0.ss_x = 0.744088991592;
    tmp_msg_0.ss_y = 0.592778103033;
    tmp_msg_0.ss_z = 0.417217415347;
    tmp_msg_0.virt_err_x = 0.351768008508;
    tmp_msg_0.virt_err_y = 0.0600299486043;
    tmp_msg_0.virt_err_z = 0.22129794404;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.884453469711);
    msg.setSource(3188U);
    msg.setSourceEntity(188U);
    msg.setDestination(9614U);
    msg.setDestinationEntity(175U);
    msg.ax_cmd = 0.148445748467;
    msg.ay_cmd = 0.907662399713;
    msg.az_cmd = 0.0568430675229;
    msg.ax_des = 0.32131801114;
    msg.ay_des = 0.859222274137;
    msg.az_des = 0.141213946403;
    msg.virt_err_x = 0.764971010226;
    msg.virt_err_y = 0.538271429292;
    msg.virt_err_z = 0.0386473905328;
    msg.surf_fdbk_x = 0.222553591046;
    msg.surf_fdbk_y = 0.589042364271;
    msg.surf_fdbk_z = 0.636358388714;
    msg.surf_unkn_x = 0.898933521072;
    msg.surf_unkn_y = 0.139588350493;
    msg.surf_unkn_z = 0.973507625462;
    msg.ss_x = 0.916850147038;
    msg.ss_y = 0.598939052205;
    msg.ss_z = 0.971539739599;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KTVWXCUDAUIMECWMFNTKSPHTFSCGZLVZIEXVBXQSIADPWRLDHOJWOKRVRXFBKBBJFFNRKGLBEINWRLUJFLBXNDYYZHRYSPUQAYJTXGEJZKABWQQMKHHDEWIGJGGQIEACHRGACDJFONNAJKZVUYPQMCQTOZCBGWKSYPTXNUHVRHDBRFIAUUHJWMSLENPEYCTNNQLVEMSBGCDVOYTLTPCFUOXGYSAMYOQTLZRDWIPXSE");
    tmp_msg_0.dist = 0.67696111584;
    tmp_msg_0.err = 0.689779856041;
    tmp_msg_0.ctrl_imp = 0.359720869503;
    tmp_msg_0.rel_dir_x = 0.0723256419161;
    tmp_msg_0.rel_dir_y = 0.35976027999;
    tmp_msg_0.rel_dir_z = 0.57732123147;
    tmp_msg_0.err_x = 0.866216707923;
    tmp_msg_0.err_y = 0.924799175033;
    tmp_msg_0.err_z = 0.972404765794;
    tmp_msg_0.rf_err_x = 0.0904361468118;
    tmp_msg_0.rf_err_y = 0.600428377325;
    tmp_msg_0.rf_err_z = 0.794619734216;
    tmp_msg_0.rf_err_vx = 0.328506127189;
    tmp_msg_0.rf_err_vy = 0.621362406336;
    tmp_msg_0.rf_err_vz = 0.0411718535788;
    tmp_msg_0.ss_x = 0.150537642974;
    tmp_msg_0.ss_y = 0.0528533771635;
    tmp_msg_0.ss_z = 0.372032954077;
    tmp_msg_0.virt_err_x = 0.598067231615;
    tmp_msg_0.virt_err_y = 0.9483840429;
    tmp_msg_0.virt_err_z = 0.000374218566895;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.744890144948);
    msg.setSource(20595U);
    msg.setSourceEntity(121U);
    msg.setDestination(27497U);
    msg.setDestinationEntity(174U);
    msg.s_id.assign("EQNVXOWIOBMOWKRHMIDBSTCFBPWRLMJKUJZHIAFKHQIRGKMZDJKW");
    msg.dist = 0.906996645822;
    msg.err = 0.660258247713;
    msg.ctrl_imp = 0.47910513342;
    msg.rel_dir_x = 0.107270968315;
    msg.rel_dir_y = 0.824517608429;
    msg.rel_dir_z = 0.130800360073;
    msg.err_x = 0.556346991001;
    msg.err_y = 0.156099284864;
    msg.err_z = 0.71015929266;
    msg.rf_err_x = 0.344743196192;
    msg.rf_err_y = 0.549053683336;
    msg.rf_err_z = 0.802416706902;
    msg.rf_err_vx = 0.266963888854;
    msg.rf_err_vy = 0.585471927541;
    msg.rf_err_vz = 0.482580645859;
    msg.ss_x = 0.793215566254;
    msg.ss_y = 0.194615135291;
    msg.ss_z = 0.075491249672;
    msg.virt_err_x = 0.89330606454;
    msg.virt_err_y = 0.827480212437;
    msg.virt_err_z = 0.476934179673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.240116970719);
    msg.setSource(34028U);
    msg.setSourceEntity(97U);
    msg.setDestination(36989U);
    msg.setDestinationEntity(129U);
    msg.s_id.assign("GTQJCMWSNKUSIXJFJKWDLHARELXNHEXBZZLNAKVRRSBHCNCMXLQOOFCLIJTOXUESGDTLGTUSUFWGQQMJGNYYBAPKDQCNIUEJAPRWQUXFIRVPPKTWAAMWDLY");
    msg.dist = 0.281560863995;
    msg.err = 0.963323281539;
    msg.ctrl_imp = 0.86775128417;
    msg.rel_dir_x = 0.484721509749;
    msg.rel_dir_y = 0.272535003532;
    msg.rel_dir_z = 0.800419219544;
    msg.err_x = 0.243718863424;
    msg.err_y = 0.824294987661;
    msg.err_z = 0.650417549503;
    msg.rf_err_x = 0.842050447696;
    msg.rf_err_y = 0.904137125936;
    msg.rf_err_z = 0.348657131013;
    msg.rf_err_vx = 0.486567645312;
    msg.rf_err_vy = 0.287960792027;
    msg.rf_err_vz = 0.170431458352;
    msg.ss_x = 0.816631808839;
    msg.ss_y = 0.185786082859;
    msg.ss_z = 0.748801819199;
    msg.virt_err_x = 0.464016116849;
    msg.virt_err_y = 0.143257640373;
    msg.virt_err_z = 0.795787189752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.400553391383);
    msg.setSource(62653U);
    msg.setSourceEntity(65U);
    msg.setDestination(11372U);
    msg.setDestinationEntity(206U);
    msg.s_id.assign("BIHCAGTNJDRSMURICLQGFMGKXKIRPXGEUKSNKMPXHHAYOYCMYOXPTDSRNHWVFWERMLYVT");
    msg.dist = 0.434114722171;
    msg.err = 0.0390790806902;
    msg.ctrl_imp = 0.659865363597;
    msg.rel_dir_x = 0.791334158733;
    msg.rel_dir_y = 0.76821013565;
    msg.rel_dir_z = 0.0633166782075;
    msg.err_x = 0.310531559714;
    msg.err_y = 0.810085860068;
    msg.err_z = 0.0540865209178;
    msg.rf_err_x = 0.737872666212;
    msg.rf_err_y = 0.0488335839887;
    msg.rf_err_z = 0.563582286895;
    msg.rf_err_vx = 0.884717977944;
    msg.rf_err_vy = 0.0793369741693;
    msg.rf_err_vz = 0.122204193565;
    msg.ss_x = 0.307655371385;
    msg.ss_y = 0.314468717434;
    msg.ss_z = 0.197623214486;
    msg.virt_err_x = 0.612305812604;
    msg.virt_err_y = 0.461451012905;
    msg.virt_err_z = 0.887786145985;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.678790919134);
    msg.setSource(59733U);
    msg.setSourceEntity(216U);
    msg.setDestination(215U);
    msg.setDestinationEntity(168U);
    msg.timeout = 31649U;
    msg.rpm = 0.645926760196;
    msg.direction = 127U;
    msg.custom.assign("KNHWYWOWXTWYGTXBIHNUZROLHBURTZRKYOIFCRTAXOZAKJQEGSYXNA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.265397018605);
    msg.setSource(62184U);
    msg.setSourceEntity(3U);
    msg.setDestination(56619U);
    msg.setDestinationEntity(62U);
    msg.timeout = 25488U;
    msg.rpm = 0.514051158901;
    msg.direction = 101U;
    msg.custom.assign("WRQQQBWLCVYBYXKCAVFHPNQZIGWMYHEBRUSMAMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.553939760059);
    msg.setSource(65274U);
    msg.setSourceEntity(28U);
    msg.setDestination(15960U);
    msg.setDestinationEntity(157U);
    msg.timeout = 51832U;
    msg.rpm = 0.111912676161;
    msg.direction = 247U;
    msg.custom.assign("AQEDCDPHUPBFHUCLBNBVYOXRAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.191511595221);
    msg.setSource(8075U);
    msg.setSourceEntity(133U);
    msg.setDestination(42061U);
    msg.setDestinationEntity(150U);
    msg.formation_name.assign("NRIKIAMBPQMORSFXAOTLDLFWJGZDLURNHSBHWWQGSKLBCBYXXSBDUANEEKQQYSUZRMNIQJPYUHNCZVIDOFUNVKJGLSSCHPDRIBSUQSIOEJDZYFIHLTZSJQWJYNCPQWAECWCNQFMKATEZUEFTGWGFXCGDJKFITEYAPVAVARLHFGOVHBMZZVVPKRDOMYVZTWXWMRPOKAJUXTIXOMKOHTEMWRCLJGDXFVBHCJTUKBPDPVEGUMLOLTQZNGCYEBX");
    msg.type = 187U;
    msg.op = 169U;
    msg.group_name.assign("KIZAHDPGRLUREZPOTYPLKUGSCRLQKYEUJSVRMIYNWLIHNITWHASTSSHKNZDBQFZVNKHBFLXQJTQXLCFXXAZTXJNKWVOZYXVVMPPUNBJERZOWDFFHCGROMKBHLUHKPUMAOULEEUIURFJAFBQDXDBDQTPMVHGQWMWODQBGIOOEAGSWOJKQYCACYGYBNMCRMLWRINFVVDGPRGPWFA");
    msg.plan_id.assign("CEUYZTJLFOYWFALQMNGPVSQNQNJCZXDEEAKVIXFINDNDYOLUCWA");
    msg.description.assign("KNFJLHCCRDZBGBLCQYVQDCENDIYBOANSDWBZOXIPXHHPKLHZRPBKNBCKMMCSRGCJPOFYJDWUTVGULMJGOKYCAOEXXWYNYPGYEHXMLUEKHFVSULQDJZNUEXUPJJHMFAOTPPSBARGQRUYTWIXUVAFQIGIRSTEPNLQISJOZQYJSIQRAAWQXMVBN");
    msg.reference_frame = 127U;
    msg.leader_bank_lim = 0.153887377474;
    msg.leader_speed_min = 0.385362902246;
    msg.leader_speed_max = 0.870779725631;
    msg.leader_alt_min = 0.328919829605;
    msg.leader_alt_max = 0.51291750526;
    msg.pos_sim_err_lim = 0.130918869983;
    msg.pos_sim_err_wrn = 0.364055126127;
    msg.pos_sim_err_timeout = 11939U;
    msg.converg_max = 0.642847446198;
    msg.converg_timeout = 34711U;
    msg.comms_timeout = 30611U;
    msg.turb_lim = 0.300185951059;
    msg.custom.assign("QVBBCIEINDYYGIWOJZHGCAXTKTHXCXXYSMTLHLAZZFMMRHJEFTKMBEVSAFNPBHYTBDMXFNUDVDWQPTZXNKPZGDPLREIIASHDWJYOKGIANMFSHGPZFNXTREBWUAXWALSLROOEUIPRLOYYSITKWPHAUQNJZWLOUDGKKMMJOPKCSJCHEVCRBAXPVDRIJVGVGGVFJSWTYCTQYDFDQWOQMUOILFRUJCEYASGKECZQBPUNFMNVQUVEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.224986214952);
    msg.setSource(28004U);
    msg.setSourceEntity(244U);
    msg.setDestination(31619U);
    msg.setDestinationEntity(215U);
    msg.formation_name.assign("OFOYUXGUFYGKKVEYWSIGPVDNAPHWQZREVGLUXXIPQLIPFSTULMOWYIRBORSWEBACXCKDTHTCFEYMCDQHNDWMFLHNBVXXBDTYUAFYGGHCSNXMDMFBIKKSANRXRAUITQEYFKCSJDOAGHOLMBWUCXRSVZQDYJHVZTBGCLMBMXRCZEJKJAFUZHNNOYEQBJOTZE");
    msg.type = 219U;
    msg.op = 22U;
    msg.group_name.assign("ZTSZMBPKZVJJPRAJWFZUSMIOBLEJWGNGIAKNIHNLVEBPVPDKJGRRRTFURGLVQEIYWBGEPHUVSIYXXDVVWPZ");
    msg.plan_id.assign("QGGTXJBRAQRP");
    msg.description.assign("URNQNZGDHNTUOMYRLSKWQMRXLAJHCPRAIBKEVGRLGFQEBJXYIEWIAGEVADWVXZYCSFFGQUGKUUTOHMCZEVPWNKIPSLQMYBJLLIENXFXFNQCTSQUSARGAYKAQNNRJVBDUTGIDHWSUBNWOLJCZGDTYPEZIOCDOPFPXOTKBTBHBZWZZSZEOXFWVYOMNWFHMTUKQPKH");
    msg.reference_frame = 63U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 12978U;
    tmp_msg_0.off_x = 0.510494610292;
    tmp_msg_0.off_y = 0.544081198955;
    tmp_msg_0.off_z = 0.940670629374;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.513061843117;
    msg.leader_speed_min = 0.185923946168;
    msg.leader_speed_max = 0.95701902853;
    msg.leader_alt_min = 0.428104079208;
    msg.leader_alt_max = 0.382358621444;
    msg.pos_sim_err_lim = 0.362749495928;
    msg.pos_sim_err_wrn = 0.00897086884068;
    msg.pos_sim_err_timeout = 38703U;
    msg.converg_max = 0.425454544438;
    msg.converg_timeout = 48375U;
    msg.comms_timeout = 21306U;
    msg.turb_lim = 0.285503779494;
    msg.custom.assign("DKBQJWOWHWOVKYJBXHSMXYSDCLIDIGNLKFXMTAQSFBZYGBLMGRKAXIBLVDFGNBJPAVHK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.0984858872734);
    msg.setSource(2035U);
    msg.setSourceEntity(125U);
    msg.setDestination(37513U);
    msg.setDestinationEntity(63U);
    msg.formation_name.assign("YJKFGJCIOBSCCZMFTYTENIHWFBEKRGKNSUORGLYMYSKEAMBAWQQLSUGPHFAAIMBFYPYDVLDYVOATNFGJIGZKRLBIWFSQXPHOCJQDMCVDKOZNSPDTVVEEDGYCCSMZOIJWOCQBWMHJUZDXWNEFDEZBPVQKPRFVGBJTWTLOKIUCZIMYEUXOHYKZSCUXEHDQMJDHX");
    msg.type = 5U;
    msg.op = 178U;
    msg.group_name.assign("KKFYDLGOJDZGZGDRBXRLJMOMUVTFIXXREFTPBQMYROFSMSLFAWESLKWCYHCYZXPTEVQCYCIWWEFIJBWTYCFBTGNHZJFOKONNAYPEGPAGSZDJMPBVAVERAXOLCEXGSVTTMDHVUVCJJRAHUIYLWWCLOUHWWPRWTPCMXZIQQYBDUJNNSMQZEEITAEFGUIIBZSYRBMP");
    msg.plan_id.assign("LUTBSOGOFAZDNGVYEPKVZURAJSXBNKMFQQHBPGKIOKJWZWGPLLVTE");
    msg.description.assign("YAJJMMPNCLPLLNVZBFWXMHUIXPWBDMPGEXHKVCAPVLXLRJWMJQHNINKTTTYOOSBDSEHTZGJPUWOODBCRSUMKTFBSCCFEAHQTQT");
    msg.reference_frame = 50U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22377U;
    tmp_msg_0.off_x = 0.803868057256;
    tmp_msg_0.off_y = 0.419895342803;
    tmp_msg_0.off_z = 0.618757995102;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.278565256358;
    msg.leader_speed_min = 0.413116463728;
    msg.leader_speed_max = 0.394513727542;
    msg.leader_alt_min = 0.480383096934;
    msg.leader_alt_max = 0.149321643424;
    msg.pos_sim_err_lim = 0.876785902583;
    msg.pos_sim_err_wrn = 0.136695725595;
    msg.pos_sim_err_timeout = 40953U;
    msg.converg_max = 0.912928193733;
    msg.converg_timeout = 4036U;
    msg.comms_timeout = 56240U;
    msg.turb_lim = 0.448273379561;
    msg.custom.assign("GXFIVDQKACYBKHVEZNYKBZJPAOBMAEKHNJXDGGMZQOUMNSIPAYCCTCPZBNCZNQKGZAWRFZRMLSGLJMYXEONKOBRCMTVQDUGVUDQWWBUECGDRJOVZRGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.782037696215);
    msg.setSource(16951U);
    msg.setSourceEntity(158U);
    msg.setDestination(7111U);
    msg.setDestinationEntity(128U);
    msg.timeout = 412U;
    msg.lat = 0.0572007183847;
    msg.lon = 0.637182636357;
    msg.z = 0.673189740804;
    msg.z_units = 53U;
    msg.speed = 0.69398114502;
    msg.speed_units = 169U;
    msg.custom.assign("SMQARXTLNKFCBNQXKWLRHLYEQFIUKWPDFCJEGPOCYKYSQKQIGSBAAYOPXAYWPSOEZGNGPVHHRHSABLMZETLNNRFBPMSXUZKWHLIHYTCWCRVIYGJEXKIRDDFFDBNZKJOPUJDLWSRENUBHXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.196598094686);
    msg.setSource(33530U);
    msg.setSourceEntity(146U);
    msg.setDestination(35560U);
    msg.setDestinationEntity(94U);
    msg.timeout = 54752U;
    msg.lat = 0.856249002979;
    msg.lon = 0.0885900161254;
    msg.z = 0.281854637799;
    msg.z_units = 158U;
    msg.speed = 0.562353397138;
    msg.speed_units = 1U;
    msg.custom.assign("OTVPDTPVUKNGZDFMHSMNQNWMUHZREBEAGMBOJIPRKNRILZLCGHCJZKQNXSFWJACZWVMOSLKZLJFJYGARUTSCYOISACX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.955493646452);
    msg.setSource(38810U);
    msg.setSourceEntity(84U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(83U);
    msg.timeout = 7824U;
    msg.lat = 0.0961126637857;
    msg.lon = 0.713827976877;
    msg.z = 0.893036474959;
    msg.z_units = 154U;
    msg.speed = 0.0612312838585;
    msg.speed_units = 102U;
    msg.custom.assign("TXMNWZWKGZNLGKGWFYLDLKJJSDMGVUPXLRUACMMAVCSJVZYQFJDFEUSJLUZBHCRDQRIZHZBVAIZXAQOBVDXQOTROKMVOPPUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.879492116111);
    msg.setSource(24599U);
    msg.setSourceEntity(28U);
    msg.setDestination(26477U);
    msg.setDestinationEntity(85U);
    msg.timeout = 42527U;
    msg.lat = 0.776969672765;
    msg.lon = 0.108463283152;
    msg.z = 0.558956360658;
    msg.z_units = 186U;
    msg.speed = 0.340906507437;
    msg.speed_units = 123U;
    msg.custom.assign("REOQHMGCQOSFQGYBLADUZHCILUSWJAEQCJDSIJQJMVVHPFUXNSWBGADKDVCGFFLUECQUXQXVIIANEEEJCKYMILPOOJNHTCLTSXKWURCGDMGJDYAZGLQJHXVHUPLYVMKTONNLIOCMNKPTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.713877960778);
    msg.setSource(15097U);
    msg.setSourceEntity(64U);
    msg.setDestination(39155U);
    msg.setDestinationEntity(181U);
    msg.timeout = 19858U;
    msg.lat = 0.513620288265;
    msg.lon = 0.961933107514;
    msg.z = 0.0434476434591;
    msg.z_units = 143U;
    msg.speed = 0.0880273873645;
    msg.speed_units = 17U;
    msg.custom.assign("UEEFHDJGIVBZFSEKYODNKOWHZUBZQQYFRIVJWXTMMOCJDQNZHTWXNDYRELCYYZYRPXCQANDLVZYGSISUVFKVFXKBXFFHM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.967489921868);
    msg.setSource(9719U);
    msg.setSourceEntity(64U);
    msg.setDestination(28489U);
    msg.setDestinationEntity(33U);
    msg.timeout = 54736U;
    msg.lat = 0.219270922219;
    msg.lon = 0.170529592806;
    msg.z = 0.274846772484;
    msg.z_units = 18U;
    msg.speed = 0.73118931645;
    msg.speed_units = 68U;
    msg.custom.assign("GIKGUCJNJFWAYEFGRLABYBCNZQBRTFUOPPSONHAWHGAGRWVBETCJIKPAZGINTZGAMMMIHIGTLMSTCVPVRFRFHNQEKQBJBUMWEFLXOTCDDZVXGPEDXDUBCKKXLLSDTWEZBQKWKIABHPQLSDWXHNVJUYQRFKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.097834676096);
    msg.setSource(42383U);
    msg.setSourceEntity(155U);
    msg.setDestination(48077U);
    msg.setDestinationEntity(8U);
    msg.arrival_time = 0.948039237303;
    msg.lat = 0.758048537221;
    msg.lon = 0.318831344895;
    msg.z = 0.0607190178496;
    msg.z_units = 63U;
    msg.travel_z = 0.340787516092;
    msg.travel_z_units = 105U;
    msg.delayed = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.504079053541);
    msg.setSource(13121U);
    msg.setSourceEntity(253U);
    msg.setDestination(32303U);
    msg.setDestinationEntity(9U);
    msg.arrival_time = 0.858177452056;
    msg.lat = 0.196066126566;
    msg.lon = 0.98028935858;
    msg.z = 0.696467694452;
    msg.z_units = 175U;
    msg.travel_z = 0.329656548321;
    msg.travel_z_units = 98U;
    msg.delayed = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.488785921263);
    msg.setSource(47241U);
    msg.setSourceEntity(61U);
    msg.setDestination(26850U);
    msg.setDestinationEntity(224U);
    msg.arrival_time = 0.795749090722;
    msg.lat = 0.487202115325;
    msg.lon = 0.275150450467;
    msg.z = 0.166880054686;
    msg.z_units = 155U;
    msg.travel_z = 0.722351180788;
    msg.travel_z_units = 222U;
    msg.delayed = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.519759845261);
    msg.setSource(21147U);
    msg.setSourceEntity(175U);
    msg.setDestination(31534U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.243134356477;
    msg.lon = 0.680653858656;
    msg.z = 0.2234688567;
    msg.z_units = 248U;
    msg.speed = 0.207194490349;
    msg.speed_units = 166U;
    msg.bearing = 0.905444976039;
    msg.cross_angle = 0.96262333515;
    msg.width = 0.675192256888;
    msg.length = 0.966520627438;
    msg.coff = 179U;
    msg.angaperture = 0.743664301435;
    msg.range = 33511U;
    msg.overlap = 221U;
    msg.flags = 116U;
    msg.custom.assign("ZPKSWRBFQRUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.270487684427);
    msg.setSource(7956U);
    msg.setSourceEntity(239U);
    msg.setDestination(2066U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.0566441200991;
    msg.lon = 0.964217922563;
    msg.z = 0.465654991081;
    msg.z_units = 3U;
    msg.speed = 0.141409158398;
    msg.speed_units = 27U;
    msg.bearing = 0.702063308552;
    msg.cross_angle = 0.733192666365;
    msg.width = 0.61784878258;
    msg.length = 0.591304537054;
    msg.coff = 96U;
    msg.angaperture = 0.0145696228085;
    msg.range = 14797U;
    msg.overlap = 43U;
    msg.flags = 73U;
    msg.custom.assign("VWJZSAKOKRXXXKWQJHQFLAZVZHBNMCIQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.753563713734);
    msg.setSource(14034U);
    msg.setSourceEntity(209U);
    msg.setDestination(40830U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.445218678442;
    msg.lon = 0.0709836410123;
    msg.z = 0.833453908724;
    msg.z_units = 223U;
    msg.speed = 0.346437950455;
    msg.speed_units = 183U;
    msg.bearing = 0.934163933955;
    msg.cross_angle = 0.431162422001;
    msg.width = 0.918982898826;
    msg.length = 0.572355265546;
    msg.coff = 31U;
    msg.angaperture = 0.421773891572;
    msg.range = 43015U;
    msg.overlap = 4U;
    msg.flags = 229U;
    msg.custom.assign("ZLSAVRVRXCROLFZPDFFKKJHFOIUWMNKVRYDIHLDGEVENJHERYOJXTAJPWTWWEVYMOJKMQRIZOBBDPCHFAENNYGULWXJLPQQUZLLYOXRAZGCDHPFMXQNIASTGJMKRMUXLZYFEWIQGPCFTIIOQPPZTXTMVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.031972391226);
    msg.setSource(44205U);
    msg.setSourceEntity(68U);
    msg.setDestination(32011U);
    msg.setDestinationEntity(229U);
    msg.timeout = 26481U;
    msg.lat = 0.770168508911;
    msg.lon = 0.262652628501;
    msg.z = 0.390521654542;
    msg.z_units = 210U;
    msg.speed = 0.742101428765;
    msg.speed_units = 177U;
    msg.syringe0 = 161U;
    msg.syringe1 = 82U;
    msg.syringe2 = 127U;
    msg.custom.assign("SAUJNDQQLIYKKZCFHTPURDVMGJBDHDTPUVFYOXSVLCZOGESHUAGDIJENSHSTYZXAUNKZZXLOREIPPTORQHCLEWTQGQJMWFUXTBQBBTWARIBKXGYFUKJIDVMHCFAPXKDMWXCWMKZYPCBZUEFYLGOZSFMLHCPSTWZPRJUEAYWPCXLLNLVAEJBKGNYLTBIAHNAVDNJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.948431830213);
    msg.setSource(14716U);
    msg.setSourceEntity(94U);
    msg.setDestination(21517U);
    msg.setDestinationEntity(168U);
    msg.timeout = 52225U;
    msg.lat = 0.994381859832;
    msg.lon = 0.0432738015398;
    msg.z = 0.73706073475;
    msg.z_units = 95U;
    msg.speed = 0.579151525827;
    msg.speed_units = 191U;
    msg.syringe0 = 252U;
    msg.syringe1 = 25U;
    msg.syringe2 = 91U;
    msg.custom.assign("XJASGFHVBQKDYQEIJGMANONUBJQLQGQYHYRVRFFCSGIRYDPASONLVSLGJCPGZYPENYMXYUWFWRJEMXCDIXWHXAHVACHHBIUKWOKDEIZNAOEFJLKBFCNZPCNMTOSTFUBUKZTBKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.832115451415);
    msg.setSource(28921U);
    msg.setSourceEntity(27U);
    msg.setDestination(10751U);
    msg.setDestinationEntity(20U);
    msg.timeout = 64795U;
    msg.lat = 0.149348002077;
    msg.lon = 0.309278035219;
    msg.z = 0.0970311361746;
    msg.z_units = 40U;
    msg.speed = 0.330674245807;
    msg.speed_units = 231U;
    msg.syringe0 = 220U;
    msg.syringe1 = 66U;
    msg.syringe2 = 248U;
    msg.custom.assign("LFJVWUSMZWXMQPINZJDHHGIKZXXYQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.95211111374);
    msg.setSource(11153U);
    msg.setSourceEntity(85U);
    msg.setDestination(28658U);
    msg.setDestinationEntity(102U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.145026631991);
    msg.setSource(3209U);
    msg.setSourceEntity(238U);
    msg.setDestination(14225U);
    msg.setDestinationEntity(201U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.615827563426);
    msg.setSource(10204U);
    msg.setSourceEntity(212U);
    msg.setDestination(26814U);
    msg.setDestinationEntity(227U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.550103385877);
    msg.setSource(57611U);
    msg.setSourceEntity(195U);
    msg.setDestination(43245U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.182977739927;
    msg.lon = 0.404131503814;
    msg.z = 0.0262672558281;
    msg.z_units = 160U;
    msg.speed = 0.866457723203;
    msg.speed_units = 77U;
    msg.takeoff_pitch = 0.77519920654;
    msg.custom.assign("ADPHXAOJWWYTSPGWPIXPUHIXSMUVEDFKZHIKVEWUDYOKLQFKHNJHWUOPTITLXZOJNONUMZRLVDRMEMSABXJGHECIHDIYCVFXFARTYNDJYHPIVPVQQTDDVPCRGCNFTIHBWAMOGJOJMKRMJUYMGBQVFRCZCXITCBFKHZGSYBCRWRKSVSLSTBEDPFUNCZWABZVBEJPQLBFQWUYLGOYSTNLULADSSZFNZEKAJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.134382507391);
    msg.setSource(54687U);
    msg.setSourceEntity(140U);
    msg.setDestination(39105U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.995519498244;
    msg.lon = 0.0555912017483;
    msg.z = 0.125104490705;
    msg.z_units = 11U;
    msg.speed = 0.184411627263;
    msg.speed_units = 163U;
    msg.takeoff_pitch = 0.726972742372;
    msg.custom.assign("CTVSHAVMKHSWWNETHKOXRJPXDGFGTIRDXWTEYESDQJBRILVMFYLLTLPCURXCJTIGUBBDEDHJLOOKIYVZIIFNBVMADPQQWZWEBUMZAJKTDROLXHPNGTFSOHLQMWCLCYLCEHSRWCWBFZVOKQQRKXFPUGGAHTJSAAADKQSSOPJZMSKHAIYDJYEUUUQYIXDWNEYNNVVBRFGLHZMPM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.943077026239);
    msg.setSource(57910U);
    msg.setSourceEntity(194U);
    msg.setDestination(43468U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.625921660928;
    msg.lon = 0.643936948585;
    msg.z = 0.117976805511;
    msg.z_units = 130U;
    msg.speed = 0.726512139913;
    msg.speed_units = 49U;
    msg.takeoff_pitch = 0.472503243152;
    msg.custom.assign("CXINQVQDMJOXNEDTYFASESLCGEYLTZMZQFWTBEQIUFUHFBFFEXGIJPSASACKQYWAPEPFKDANYCGPNVVYKLNUIPLGVDVGATAWGWOURQXHDLIOYVIHLATCIANXUMPSBDHBSPVOMENDKZOBDNPXOJXWUCHYMPPNSMLIRHBFJVGZHXROUVTWESQBDQWTHJWRUWRUOZRZKQFRKIKOTCXLMNYSKLGZYEWBMJBFHRCRJRGSKQJAGICEKBOYUTMJDMJTZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.294712688824);
    msg.setSource(38362U);
    msg.setSourceEntity(143U);
    msg.setDestination(58320U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.402500578504;
    msg.lon = 0.732126800081;
    msg.z = 0.0811506374098;
    msg.z_units = 16U;
    msg.speed = 0.81046251447;
    msg.speed_units = 193U;
    msg.abort_z = 0.331683283558;
    msg.bearing = 0.425055065794;
    msg.glide_slope = 197U;
    msg.glide_slope_alt = 0.47224671121;
    msg.custom.assign("HJRSUCSGLRYIVOYQUUQIQCAJNKMHNDDBLKESNMHYJCEPVLHOWHOBVLVPRSPUWUDFVLCBLJLYVFBAJAMJAOOGAFFQHRJQFPKBXSRGPZMMHXNIRTFPLGSZVOPUZLNZTSQEWJTZAAWBXRMHRFAZBEWQDHEEOYGTQTXTFTMMWGGQSCYYGXSGMFWISKZCBZIOCTIIYWRPJKBUYXUEIDTKNCKDDWRYKOJXVZICZXWTP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.81963089546);
    msg.setSource(49974U);
    msg.setSourceEntity(54U);
    msg.setDestination(7571U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.154247795053;
    msg.lon = 0.491068282669;
    msg.z = 0.811148743993;
    msg.z_units = 143U;
    msg.speed = 0.292619451645;
    msg.speed_units = 247U;
    msg.abort_z = 0.988483911569;
    msg.bearing = 0.196128635977;
    msg.glide_slope = 127U;
    msg.glide_slope_alt = 0.256135750895;
    msg.custom.assign("MPLNNFURXZKWCBRPELUIPCCVLROOUBSLIWFTFMJJPNCPLOGMIESMFZXCUUQFFJMUDROAMLCPFDVQYARXHDTASTAGWXJXFBACWRRWHXEIZHIBCMVCQOTPUDSYKAWAZLVBJXLWSXHLPYKJSGSSNEVAFHBDTHYZKIYVUDOGJNRNVYTDSCAYKNTZIIMZWDESOGXZEHOIBRXWQVVAYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.986166667654);
    msg.setSource(25407U);
    msg.setSourceEntity(177U);
    msg.setDestination(50770U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.803820695073;
    msg.lon = 0.0419586344346;
    msg.z = 0.06744183926;
    msg.z_units = 247U;
    msg.speed = 0.260800612166;
    msg.speed_units = 242U;
    msg.abort_z = 0.957685240568;
    msg.bearing = 0.32522588103;
    msg.glide_slope = 156U;
    msg.glide_slope_alt = 0.818283170435;
    msg.custom.assign("BVMYCRPHRHHLMBNQCPNQFAMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.875935981042);
    msg.setSource(1257U);
    msg.setSourceEntity(215U);
    msg.setDestination(33988U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.602605152952;
    msg.lon = 0.0102729790138;
    msg.speed = 0.426252079477;
    msg.speed_units = 253U;
    msg.limits = 3U;
    msg.max_depth = 0.443290460278;
    msg.min_alt = 0.491439657929;
    msg.time_limit = 0.0555017871431;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.125177968589;
    tmp_msg_0.lon = 0.16283848357;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("JLYBBHIMGLUXKAFXVCJPUDEVIJZCWMEESRFHVBUSCZDIDAIQYGFZKHJUMVPCTQWFNZTBBKQTRKKVTESPYLFGHNDNOMRHOMFSWWLQNTQBBPWGXAWUVPONMTVGVDUOQAYJYKMB");
    msg.custom.assign("QUPFLVPOVEXBROWBAYXTNZXWFIQSNPQMVJQGDEXBAYXMQNZZJBLRIHTYWFJMGEJQSSFSFUSPGIXVPDZRQLHIQTPBKLIGTABWACADVLDTMHCKZJYAKZZTJWIVGDHYUYNMKFUSTNWVEILHLGFNMRRTDOYNARHPGKBGCBTQPLAYEPCWURGJSJMUWKCDUIVRGNCEDMTMZHSEFODMOHELSRBECPUOFCIUQXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.837068302827);
    msg.setSource(10681U);
    msg.setSourceEntity(238U);
    msg.setDestination(21243U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.952176839675;
    msg.lon = 0.271771698046;
    msg.speed = 0.549659726575;
    msg.speed_units = 74U;
    msg.limits = 152U;
    msg.max_depth = 0.0069311717659;
    msg.min_alt = 0.181525520228;
    msg.time_limit = 0.187443192376;
    msg.controller.assign("ERVHINLNMTCBUNLXYDYBQHMXKTNWEJFORQAMKPEBAEFQUEJHYWOXFBDVXLGGHPVKBZQABRCZYNOMVTMLEJZJDQWCBLZYCTTQGSIZFRRHPXRODDQNUDDFWAUFKNVIWLXPGJIVZQATOATVICZZRFONHSSHLXJIPYBJYGCSPKTVKSCYIKOIQUMPGFOPWSYSKPMWBJMNZSVTCGIARCUUAZWGUYEONLWPKGFJSJCRHOBXDUATFM");
    msg.custom.assign("RUOQZCBWVTMPLWMFAMIWZWOLGKRELAHKRLBHTIOUSPEIOPUYVNWAFNZGXXBTRYCFUZXQBWQFVHANEYQTELPJNACDZNVXWIBAKTDJEAPCJXKCQHXMIJNGMBXMIQWNVSKHJSIDEKGJVFVQMFCQHORIJDKPYIOJNEKGRFDEPCVUYJZWBSGVONE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.530044004648);
    msg.setSource(32724U);
    msg.setSourceEntity(146U);
    msg.setDestination(35349U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.10707022247;
    msg.lon = 0.455782144601;
    msg.speed = 0.0597716293417;
    msg.speed_units = 181U;
    msg.limits = 201U;
    msg.max_depth = 0.880215635552;
    msg.min_alt = 0.494710420334;
    msg.time_limit = 0.751326412558;
    msg.controller.assign("ZTUIIQZEGGAMCSYXQGZZWTSNIKPEWYJBTK");
    msg.custom.assign("OURVIYRMAOUPNCHMRPYJIVQOEGIID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.760172917671);
    msg.setSource(57797U);
    msg.setSourceEntity(146U);
    msg.setDestination(33034U);
    msg.setDestinationEntity(55U);
    msg.target.assign("PMOBFRSJXQXCLDAJIJFTKIOYVQTYQKEYLUPGYTHDYKEQFUISGYEBXRBBCHILEEVVGCOCASNABSHOCYUKCJKFZMZZ");
    msg.max_speed = 0.777478630991;
    msg.speed_units = 224U;
    msg.lat = 0.215434644488;
    msg.lon = 0.93351993032;
    msg.z = 0.73132397905;
    msg.z_units = 126U;
    msg.custom.assign("KUSKYCGWWAVJFBCXKBJYXTHOBEFJHXNCBOTPJOQIRLRZWLUKBHGNNFCTZAOLXPYXXFITQLDXAMPOCKOZVHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.642340205563);
    msg.setSource(61861U);
    msg.setSourceEntity(252U);
    msg.setDestination(44480U);
    msg.setDestinationEntity(247U);
    msg.target.assign("WOZMPQTXBKKLZYSSZTDPMSRPWDLNOCMWWUMNHGSOTAELBOYOYCKDCGUUBNXLOXRICQQDEJICIYXLYFEJTVQMIVZXCIDNAEYBQTGTTVZLFXHKWOWDFDPJJFEXVEZAFBAUSAP");
    msg.max_speed = 0.062810053356;
    msg.speed_units = 250U;
    msg.lat = 0.498158722723;
    msg.lon = 0.20732878112;
    msg.z = 0.871997881483;
    msg.z_units = 195U;
    msg.custom.assign("GWPWSAVQXOELHTYUSOXHQRWDDHAXXCUDDAQBEBDXOXFLZIKUNHGLFJAPSBYCXOUNJZXKYVFKCJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.831425648144);
    msg.setSource(58540U);
    msg.setSourceEntity(27U);
    msg.setDestination(60785U);
    msg.setDestinationEntity(124U);
    msg.target.assign("XVONTJAKGOQAHYWUIXDIMPNNHATMWAO");
    msg.max_speed = 0.0637745274198;
    msg.speed_units = 88U;
    msg.lat = 0.745164048098;
    msg.lon = 0.5362574875;
    msg.z = 0.536362766338;
    msg.z_units = 147U;
    msg.custom.assign("WXDLNJTOKNZPOIGDNYEQDWUZAJSPMRGUWYOBNXFFVAWILNKMGJCMZNGPEEQVDXSJUTDUKAKHJRDE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.0713663476813);
    msg.setSource(24883U);
    msg.setSourceEntity(223U);
    msg.setDestination(42594U);
    msg.setDestinationEntity(1U);
    msg.op_mode = 129U;
    msg.error_count = 129U;
    msg.error_ents.assign("RQHMGFPMKZFOQAPJIFJKZCDDJNLCENANOSCHTXNSQGISIMGADJHMGUULJEWXBPHXSQWDBYOKZIFOWDRVCEMMBTP");
    msg.maneuver_type = 33048U;
    msg.maneuver_stime = 0.163878595623;
    msg.maneuver_eta = 14076U;
    msg.control_loops = 2813256931U;
    msg.flags = 23U;
    msg.last_error.assign("WYUJKPGTJHVVGIXILMDUGJOLJHBVIAHLTTDKNJNNEXSIUFEZMYYUZFLDFDDYACGRMKYFFJCXTPTNQVAKMKSYGAGUIPAMMRVKWUXZPHPCIOHSEXWMVWKRQTHQAWOQPVYBSIXBNOMYMDGUTRPLFQIPRYBZDNILOHEAWGEEXJFSK");
    msg.last_error_time = 0.7314507423;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.564733468489);
    msg.setSource(51526U);
    msg.setSourceEntity(189U);
    msg.setDestination(55062U);
    msg.setDestinationEntity(131U);
    msg.op_mode = 182U;
    msg.error_count = 28U;
    msg.error_ents.assign("IMNKPIKWTAEBIOYYMQJLQYUPYYCAHSDPFTZRRHMZUGXQNAOWTFGZSPALBBHVKJQZNEWMIINFQLFAYNDNJNGBORRUUFXXRLXIWROTOXXMZEIUQPQSJPDCDTHIKVQLLRCCPWTOCBFEGYDQLRXKFDPHSBZEFOSCEGWVCMVDKVJEVPNEZCHSAKMBGCTLMVMWWINGXAVSYSLNU");
    msg.maneuver_type = 206U;
    msg.maneuver_stime = 0.0785068828948;
    msg.maneuver_eta = 52512U;
    msg.control_loops = 1613052620U;
    msg.flags = 247U;
    msg.last_error.assign("WGPJVBBNUUWZNGKVEOMFNPSTHTSXFJMEMVBUTCEYRLPYZXUAFEDDRLFJTUWLHBLZANJXXEZLDPDNEKRINHQYQBSNLDDTKZMGCTTAJKAROZIWIAYKFQVVAOBUSZZOQMECWELQHILIXYHBAYGKJRDHBOPCVPIOMQKFFJMGMWBVPOHQYCFGHMVRBVCVRE");
    msg.last_error_time = 0.639189542173;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.15241856803);
    msg.setSource(31564U);
    msg.setSourceEntity(43U);
    msg.setDestination(64918U);
    msg.setDestinationEntity(27U);
    msg.op_mode = 154U;
    msg.error_count = 18U;
    msg.error_ents.assign("RPSMZKLIMKEHRXQOLOBRRGDWBIZTADJMMNTAJYIZSSIDOHPWELNI");
    msg.maneuver_type = 16359U;
    msg.maneuver_stime = 0.136310332834;
    msg.maneuver_eta = 9007U;
    msg.control_loops = 2867425522U;
    msg.flags = 56U;
    msg.last_error.assign("UBJTGZQYRLQCLUNBTGGOHRIEZWFAMUBUVMDJKKQXSBMLYLEGMWYTYYFAKZHJHKEGGYNNVIDDNAAFYPH");
    msg.last_error_time = 0.905706536689;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.291069398706);
    msg.setSource(10187U);
    msg.setSourceEntity(76U);
    msg.setDestination(22558U);
    msg.setDestinationEntity(70U);
    msg.type = 249U;
    msg.request_id = 22801U;
    msg.command = 5U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("VEJKPHRTPCPBECJMUCGGPXLOEAXBAWZHCFUTWOMOKBRJGNRSNLQCHNYVBLMTBQUUUJFPVASDMIALWTOKYVYBZKGXVKIHDXLGFYQUZEVXBOMSD");
    tmp_msg_0.max_speed = 0.544408242733;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.lat = 0.604288492461;
    tmp_msg_0.lon = 0.58657376306;
    tmp_msg_0.z = 0.866660910235;
    tmp_msg_0.z_units = 168U;
    tmp_msg_0.custom.assign("IYYGKFJLWUZWZCBDHBWKZSAHLVITPHUTYXHHMVBICABPCSNRJMMHIBZTBBLLBIXVJINTPNDOYLDMXATDLRPOTUEEQHGOFNOUAMVIKRKWRNWAQDWOPQVQXFIXNLCSOREJJTB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16417U;
    msg.info.assign("LQITZBSBXCABMIOMOYHKERTTQBUOIPZYDGAVLYJGPKPLIOLVHZWIZLFEUQMIKFEAPCZNXMODSFBRDXUFRJXDEUNDNGZXBAKITJGOIQTGMGJEVEQFODZKOQUTIUBWQWVYERDFFLTYHXAVFXSJMDZRZNAHLCMHCNBWKYQNVNJJSVTKSCHCMRWYYVHCEPRMCBJGIKWCAPJSJKTRPSWUOGVAHULUHPQHNUPVEWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.853787483204);
    msg.setSource(52425U);
    msg.setSourceEntity(128U);
    msg.setDestination(13785U);
    msg.setDestinationEntity(17U);
    msg.type = 167U;
    msg.request_id = 58081U;
    msg.command = 217U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 44107U;
    tmp_msg_0.lat = 0.674292194261;
    tmp_msg_0.lon = 0.556172978451;
    tmp_msg_0.z = 0.725854026665;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.speed = 0.787362109376;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.roll = 0.532408619861;
    tmp_msg_0.pitch = 0.750295500169;
    tmp_msg_0.yaw = 0.909212523359;
    tmp_msg_0.custom.assign("CKUDHAXIWPTTRYMRTCEOGECITEVBABBXSCWFGDSXTZLUDGYRXZWLTHVKNYGBLRKSEKWFUADEMNRRBKQVOPYRDEUVGWPBFIFGMJNYNVJYROFSNBLKOBPMPGWQIAKNSXACTYOMHHSWVKQZIJMCVTYKUXKZUJCZFHBNANISUHIWTOZEUZIYCOHPNQXMYZSEEDBJUMLQMVOCAEJQGJPJHNFFZMFXS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41458U;
    msg.info.assign("CDLPXAWHILKHQUCBZENWFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.239783769956);
    msg.setSource(15872U);
    msg.setSourceEntity(174U);
    msg.setDestination(58914U);
    msg.setDestinationEntity(71U);
    msg.type = 241U;
    msg.request_id = 4097U;
    msg.command = 91U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 23955U;
    tmp_msg_0.custom.assign("FEMPLKTXGRMNCYEPAKOVEAUJVKZZVQOLGFSZQOTPDEUZLBVZOQSKIBJFVKUHWYNPQRONTPGIXNIOQHDVDCSLDJLQSAFISZNWLCBMMIRFYJKGBTINFCXPTBIQFRUWLPUGQMJLHHTGLBDZWMWYSKFVCBZSERRVWKFSHXBX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46484U;
    msg.info.assign("CPRKJDNZXAQULKSVAQFNFEOUODXBEWEZQPITAZPTSEJRBRYNDZFTBMGUCGCAHRQVHYXQKOHRGFQKCWOYGGAWSUQLJWFRFYKYLPTEHARIVPLSEFITBUYRIBSSOHWML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.878965396824);
    msg.setSource(1719U);
    msg.setSourceEntity(82U);
    msg.setDestination(32959U);
    msg.setDestinationEntity(16U);
    msg.command = 248U;
    msg.entities.assign("NHKPYHXNYYCTVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.64619288652);
    msg.setSource(40453U);
    msg.setSourceEntity(125U);
    msg.setDestination(17790U);
    msg.setDestinationEntity(93U);
    msg.command = 69U;
    msg.entities.assign("RXMBGMADIZJYAXBDKWHWRJTSZNCBBCMJVHLEZVPPTJOBAFDPXAUXLHJRSOVYBHDEUBIVRKILHJVDGQWONPUNJIWQYIGAUNSRGFWHDMF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.946999951541);
    msg.setSource(6835U);
    msg.setSourceEntity(179U);
    msg.setDestination(56791U);
    msg.setDestinationEntity(108U);
    msg.command = 17U;
    msg.entities.assign("LHCOHYLWHJNOGGIKRQILQFMXKNZFYOFAGTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.800495859261);
    msg.setSource(44147U);
    msg.setSourceEntity(183U);
    msg.setDestination(28048U);
    msg.setDestinationEntity(85U);
    msg.mcount = 163U;
    msg.mnames.assign("UVDGGAXZJVDAJPZPIWCHPRZIGZDLJXVBNZTTKFWMREHCIGNRKJWERUHNKBVKMOACPBGOVBTEDYXQKLQETFETHOXYMZYLNGWHTOQUGQODIFFHFSIDWUMANKNNSHIIYYLMRBMWVSXYYSUASTTAPWUPDPCOCXX");
    msg.ecount = 100U;
    msg.enames.assign("QSGADIXHBXQDAENMWFAILEBQPXBSKQUZCQCAAJSPRHKWTVIGGVYNRTDLVHBISVTGQUBZYOFRURBKGQUKTMMTFYPYESEIFXJNYHKYTKZVWBQKXZWNWOZ");
    msg.ccount = 249U;
    msg.cnames.assign("FZGJQMGXKIYKSMLMCTZLGQIOAJGEOKPCLYIZGYUODIUAVWQUCHOXRNRNZPWYKCPDZXCFPBIPUVJLLSFQTKHQKSEBFXUCWWUZDSCPYNPCUVFRLQWAFTDDRSYLAPAXDJBMPFQVSNTSBGINMZRAXRWG");
    msg.last_error.assign("DTMCBVYZGNNLIFMECPBFHNPLDPESCBDAPRUEJHREDLGKUSFSNINLVDIFCZOTIUYCAAPSGBOOHGFAIYJUHGNJYZLXRQOGWTESYKVDGFVGTESKUSFABXXRTTWZPRKHLKBOCNHSMMRQNNTQTWORDVHQJYXPWHPJAQJIWMMMJEOYBYQZKIIZTLUZ");
    msg.last_error_time = 0.546412029576;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.628076024237);
    msg.setSource(57224U);
    msg.setSourceEntity(24U);
    msg.setDestination(41473U);
    msg.setDestinationEntity(45U);
    msg.mcount = 108U;
    msg.mnames.assign("PFAQZOGWWCUBNAWUIPZSPEENZXLIUFXLNKHLICOROVGRVGKYOAPZMKODMRLPGYTHA");
    msg.ecount = 93U;
    msg.enames.assign("CSPBDZKPGKGRHCDMRFGBMXMTGNSGXOTEOCTINXICZJTEEJFSTDECWYYEEHBOJBJNWOTZANFMMAQPSQUACZQOLMFTLQURJRONWRXLZH");
    msg.ccount = 34U;
    msg.cnames.assign("VCEEMSXGEGKFAHOVIZFWTZHWDRRMSPLHDCLTPPWTGKKCKRBZKBODDDHGBMKZXSYKZTPIFJXQDQHAPVGMYQDICYGYMXTOOEWTLNUXLSJOABRXFRBLNMJAMSUCJLAAKLEVBPFOYU");
    msg.last_error.assign("LTVBESQXIFGOSPRHOM");
    msg.last_error_time = 0.989138909114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.996729363309);
    msg.setSource(43403U);
    msg.setSourceEntity(228U);
    msg.setDestination(13859U);
    msg.setDestinationEntity(43U);
    msg.mcount = 90U;
    msg.mnames.assign("IGHFVRQOBAUWRKOTPIGRMWIXKMRLKXUYDTYOFZSEXHJOCKJXPQSTTOWSIIAZNBQAGQHZDRCFVWMDUDMXSSPFNTPFZMWGKUZDWPGYUMEHCNELPANHBBTXLVVECQCRAOCJXYUUUGINEBJMQGLJLNFELMMOLGPAFKDJSHKLXYKLAHFIJBZUTSWDYBFET");
    msg.ecount = 70U;
    msg.enames.assign("NQHBHEQEKNAJPCUREDVVHTZHLGEIMIYFKXSLMLWXSSLCWHDJTTWGJGJMTTSQFZVMBBOCDDLORCHPENXFIAVUQAUQCITMXOVAOFWYSNFFPWDOTOAKDBCBHQYFWAYNFYBKPXSPWHMFAEBZZAEJJXVYSSOGKIJUXIXCOEUBTMRPFEAZBNGRMYKZMCBILQCQRCDOZZLWPVKGPOPDGQS");
    msg.ccount = 73U;
    msg.cnames.assign("UNGUUBKQDZUZXOSSKVVNOIXCECXZFKAJBJEQBVQONIAIQOEPMCLFMDJMCEQKYSJWSDJRFHLYTLNWTMVGEULTRBVWRQFDMWZNAXHFJZSZYPHYINUWXLZRSQHYBWACXTCDNFSEQKJQPVKHPXBGMMNYWBKTPFKITKMJDIKDGLTFHRCMOQUORPWGCRADOBGRCSPOAZYHLNZ");
    msg.last_error.assign("NKBDZETCFZTLLRHDAEMGLERQGJQQMVDNZRKAKYAZGXDAIMPYFIVBRFXGOMOPTRBTYIUBXCJWCMNULMYNKRRNXEHULTKUOWZJDWYPSCXIEKXPVBDVVJHERIZLFYOFNBTUSJCXJDGSHMSTSHHPQQEQGYEIYUUNNHKPXZPJQNVOMAQLXFGBDIFSSCRVLIAOFJUCWHK");
    msg.last_error_time = 0.195603534778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.927845971979);
    msg.setSource(4166U);
    msg.setSourceEntity(102U);
    msg.setDestination(65272U);
    msg.setDestinationEntity(253U);
    msg.mask = 120U;
    msg.max_depth = 0.0217272937888;
    msg.min_altitude = 0.356681717679;
    msg.max_altitude = 0.031678654395;
    msg.min_speed = 0.890620025084;
    msg.max_speed = 0.844046162967;
    msg.max_vrate = 0.0145271652435;
    msg.lat = 0.531690066804;
    msg.lon = 0.130051874506;
    msg.orientation = 0.638256334865;
    msg.width = 0.108895524943;
    msg.length = 0.49088726254;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.657963128136);
    msg.setSource(21626U);
    msg.setSourceEntity(127U);
    msg.setDestination(19437U);
    msg.setDestinationEntity(203U);
    msg.mask = 150U;
    msg.max_depth = 0.804469564153;
    msg.min_altitude = 0.194010523017;
    msg.max_altitude = 0.532495765365;
    msg.min_speed = 0.337815361288;
    msg.max_speed = 0.619104087955;
    msg.max_vrate = 0.505520523355;
    msg.lat = 0.171422085478;
    msg.lon = 0.000136805911899;
    msg.orientation = 0.980816860358;
    msg.width = 0.500908628288;
    msg.length = 0.805230448074;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.585008285594);
    msg.setSource(45571U);
    msg.setSourceEntity(228U);
    msg.setDestination(17065U);
    msg.setDestinationEntity(41U);
    msg.mask = 180U;
    msg.max_depth = 0.00566266298777;
    msg.min_altitude = 0.783205860078;
    msg.max_altitude = 0.22022175078;
    msg.min_speed = 0.645917993961;
    msg.max_speed = 0.788343910004;
    msg.max_vrate = 0.432536149963;
    msg.lat = 0.348870631716;
    msg.lon = 0.791818195664;
    msg.orientation = 0.520431467566;
    msg.width = 0.866763330139;
    msg.length = 0.358763473182;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.272892484514);
    msg.setSource(10112U);
    msg.setSourceEntity(86U);
    msg.setDestination(54764U);
    msg.setDestinationEntity(88U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.212775534643);
    msg.setSource(29321U);
    msg.setSourceEntity(118U);
    msg.setDestination(61632U);
    msg.setDestinationEntity(189U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.216156663557);
    msg.setSource(4713U);
    msg.setSourceEntity(199U);
    msg.setDestination(64681U);
    msg.setDestinationEntity(149U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.232107236456);
    msg.setSource(32609U);
    msg.setSourceEntity(238U);
    msg.setDestination(31444U);
    msg.setDestinationEntity(222U);
    msg.duration = 39949U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.85285411395);
    msg.setSource(35312U);
    msg.setSourceEntity(214U);
    msg.setDestination(26208U);
    msg.setDestinationEntity(135U);
    msg.duration = 45630U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.685399701769);
    msg.setSource(47413U);
    msg.setSourceEntity(101U);
    msg.setDestination(59662U);
    msg.setDestinationEntity(35U);
    msg.duration = 17888U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.494215625422);
    msg.setSource(40768U);
    msg.setSourceEntity(209U);
    msg.setDestination(5153U);
    msg.setDestinationEntity(244U);
    msg.enable = 232U;
    msg.mask = 388833670U;
    msg.scope_ref = 1708836096U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.238215975908);
    msg.setSource(64561U);
    msg.setSourceEntity(207U);
    msg.setDestination(21811U);
    msg.setDestinationEntity(224U);
    msg.enable = 227U;
    msg.mask = 3361552670U;
    msg.scope_ref = 1455050726U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.437484852672);
    msg.setSource(38372U);
    msg.setSourceEntity(130U);
    msg.setDestination(32949U);
    msg.setDestinationEntity(120U);
    msg.enable = 145U;
    msg.mask = 2477350138U;
    msg.scope_ref = 3988844047U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.720299355482);
    msg.setSource(50590U);
    msg.setSourceEntity(111U);
    msg.setDestination(37296U);
    msg.setDestinationEntity(189U);
    msg.medium = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.651350438447);
    msg.setSource(43349U);
    msg.setSourceEntity(119U);
    msg.setDestination(5286U);
    msg.setDestinationEntity(89U);
    msg.medium = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.257952268818);
    msg.setSource(51010U);
    msg.setSourceEntity(133U);
    msg.setDestination(16212U);
    msg.setDestinationEntity(77U);
    msg.medium = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.201158828532);
    msg.setSource(40539U);
    msg.setSourceEntity(92U);
    msg.setDestination(33115U);
    msg.setDestinationEntity(227U);
    msg.value = 0.565455354539;
    msg.type = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.811761487676);
    msg.setSource(64914U);
    msg.setSourceEntity(85U);
    msg.setDestination(32904U);
    msg.setDestinationEntity(82U);
    msg.value = 0.687675984058;
    msg.type = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.632387217087);
    msg.setSource(18974U);
    msg.setSourceEntity(37U);
    msg.setDestination(1772U);
    msg.setDestinationEntity(79U);
    msg.value = 0.206946223462;
    msg.type = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.793773527785);
    msg.setSource(19786U);
    msg.setSourceEntity(46U);
    msg.setDestination(44640U);
    msg.setDestinationEntity(230U);
    msg.possimerr = 0.834910642767;
    msg.converg = 0.567073567095;
    msg.turbulence = 0.546309541098;
    msg.possimmon = 189U;
    msg.commmon = 15U;
    msg.convergmon = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.33490187549);
    msg.setSource(53859U);
    msg.setSourceEntity(29U);
    msg.setDestination(42556U);
    msg.setDestinationEntity(73U);
    msg.possimerr = 0.738831627932;
    msg.converg = 0.908270913076;
    msg.turbulence = 0.704221353129;
    msg.possimmon = 166U;
    msg.commmon = 46U;
    msg.convergmon = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.740746691544);
    msg.setSource(50138U);
    msg.setSourceEntity(6U);
    msg.setDestination(14344U);
    msg.setDestinationEntity(187U);
    msg.possimerr = 0.652592133892;
    msg.converg = 0.385007582912;
    msg.turbulence = 0.943729109708;
    msg.possimmon = 89U;
    msg.commmon = 242U;
    msg.convergmon = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.47123455702);
    msg.setSource(39592U);
    msg.setSourceEntity(243U);
    msg.setDestination(30924U);
    msg.setDestinationEntity(97U);
    msg.autonomy = 148U;
    msg.mode.assign("WXAEWTBDZWDXOTGXKKLCXFZQGKTNOPYVQKRDYJFHHENMDNMSVKWOQHDAUQXIQOSOVUCOFCICDQANEFKQCPRJUSLPHVDNVLITRTHJFMOROYPCEPQKBZIALLTXUYZJGPWHJZPFJUAUBXGWVFLGZYPIVJIQSGLIUGQSAHXMHDCRFKIBFETEISNAKIAYYZMLESGTBBXNHZCUJKLBJSSRHJOMVDMBZEONWYYNYADLRWFCUVMPBNSGTRCRARUEMBXPWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.327967403276);
    msg.setSource(6538U);
    msg.setSourceEntity(13U);
    msg.setDestination(29723U);
    msg.setDestinationEntity(57U);
    msg.autonomy = 110U;
    msg.mode.assign("EQSBXMVXMCGCBJAIAGPYXRDQXFUWBJDIDMNECVQDEJSUGEDTADSTS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.909658151054);
    msg.setSource(42304U);
    msg.setSourceEntity(238U);
    msg.setDestination(24933U);
    msg.setDestinationEntity(66U);
    msg.autonomy = 247U;
    msg.mode.assign("WDRZZUQHJGNMJLADTDSLUFXCEEDBNJFXOTKUOTGXJBYPSWAIITNZFRVXDRVWYJLAVPVMHLCOYANOTIEXKXCACBEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.273755036547);
    msg.setSource(42223U);
    msg.setSourceEntity(7U);
    msg.setDestination(61737U);
    msg.setDestinationEntity(164U);
    msg.type = 135U;
    msg.op = 169U;
    msg.possimerr = 0.258263397742;
    msg.converg = 0.729176854985;
    msg.turbulence = 0.490256101488;
    msg.possimmon = 213U;
    msg.commmon = 1U;
    msg.convergmon = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.277486562298);
    msg.setSource(64304U);
    msg.setSourceEntity(107U);
    msg.setDestination(57080U);
    msg.setDestinationEntity(212U);
    msg.type = 195U;
    msg.op = 207U;
    msg.possimerr = 0.555949102412;
    msg.converg = 0.529039608973;
    msg.turbulence = 0.538060291695;
    msg.possimmon = 147U;
    msg.commmon = 127U;
    msg.convergmon = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.837931862547);
    msg.setSource(58426U);
    msg.setSourceEntity(148U);
    msg.setDestination(6105U);
    msg.setDestinationEntity(153U);
    msg.type = 21U;
    msg.op = 2U;
    msg.possimerr = 0.13274637707;
    msg.converg = 0.576387639979;
    msg.turbulence = 0.180223517692;
    msg.possimmon = 161U;
    msg.commmon = 170U;
    msg.convergmon = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.475494351283);
    msg.setSource(31869U);
    msg.setSourceEntity(34U);
    msg.setDestination(16718U);
    msg.setDestinationEntity(48U);
    msg.op = 198U;
    msg.comm_interface = 137U;
    msg.period = 52774U;
    msg.sys_dst.assign("WIRQDQIFBMTCIMPUCBPHXAOQUDSQCTCILUMCOHLLSDQZMBNGBOSDOFZXNOXJVZDNMRZNPNFXHCPN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.194579922277);
    msg.setSource(27117U);
    msg.setSourceEntity(41U);
    msg.setDestination(49757U);
    msg.setDestinationEntity(125U);
    msg.op = 14U;
    msg.comm_interface = 19U;
    msg.period = 64119U;
    msg.sys_dst.assign("SJUNASVIKJTBWJAGUNSXXQWKXIBWQSNLHSGFAIKYLKVRTFFZDOMAHJOTWUDEXXDEEXHRZPUBSNGLQCBYMYTEJPWIYCMROJQAWZDINIXWANAPNTFTYPEHQYJVWROELNVRGJCORFOIFVRQFASGEPJHGQRGLNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.390370440659);
    msg.setSource(44312U);
    msg.setSourceEntity(239U);
    msg.setDestination(50570U);
    msg.setDestinationEntity(181U);
    msg.op = 252U;
    msg.comm_interface = 40U;
    msg.period = 54240U;
    msg.sys_dst.assign("WISWNRFLESPCLUNMBHGHVUXVMDDNAPJEYUBHYNQKKWJBOZIGVGWUFFRFHBDORMMCPMEPQBIOUHZOFHGXBRCQQJBQVZJKFBTINWIWUAPHQJZVCXYTTIXZZEYIMTNPKCXGSNICLWLHZRUKJDTXLMKGBDQCVKQQSEYDHTAXMCBTQNKVS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.293251251601);
    msg.setSource(9080U);
    msg.setSourceEntity(116U);
    msg.setDestination(27134U);
    msg.setDestinationEntity(114U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.570533755277);
    msg.setSource(55486U);
    msg.setSourceEntity(183U);
    msg.setDestination(32688U);
    msg.setDestinationEntity(247U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.542508485236);
    msg.setSource(56032U);
    msg.setSourceEntity(238U);
    msg.setDestination(31180U);
    msg.setDestinationEntity(193U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.542926610345);
    msg.setSource(11181U);
    msg.setSourceEntity(169U);
    msg.setDestination(16674U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("RWTPKSFIGUQHTDCCHKBWTAZDTCBVRTKLUZVAPQMIERDJXJDPQLNYAXMYTMXGHNBLAUIRFCCNVFZOWAQEHSSUEAWLJDCDVDSPBGZVJBLEORRZEZBIOGIXMYLSPJWIWBOHJETKXZTXPGIRNDYUKQKHFKNMFESYPQUNFNHGLAXRQVDLGXEYRUSASHQVOZXJUPDMYCJWBHZOR");
    msg.description.assign("EBEIMUOELGTUCHFRJTRKQINZCPNWCSM");
    msg.vnamespace.assign("MINJIWIUMIPUCTGTSRUMLKYPLBGNDAIEZJKQCHQPKOHDWMTTYYAMRJAPOGYAAKW");
    msg.start_man_id.assign("JHWDVLUKBKVJPYUDGNIOLQQSZKAAGGCGMTRPFMTDUMMEWPJWPCRLYDMFQRZXUCNOACHOBOXIPBIPACILEQDWEWMLSTHBQNTKKYZHMHFNSURUFJZHIDANXSSROKMLSJYBKTNWSA");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PHIQSMTCSLDTJFBOEUGOKXAJGSTEYUUGQBPRAOGAIZDVPJYBWNEVRQMJGDRTIMNVFTTQFEPLYSKECGSFIKTGDDCYVTJVKSURAEPYZJDUXXPLO");
    tmp_msg_0.dest_man.assign("VZFDLPVUUXOKUFAGTAQMZIYSFYOVRQGHBWQOVRECWPAKJNYFGPJVESOANHKKWZCFZYPXCHKSGYECIEZWHINRWSYLNAAWXTLJHOHBUJRWMLJPEDTTQMORBXHNSHIXMXJMGLSWOLBRAQHDINMTUJDBQVBACBTUUBIFFXYNGSBDDWVMQLFZSENEGVYAFICBPNEMEGOTCMTCKEZJXXKPI");
    tmp_msg_0.conditions.assign("LSSPSBHVPJNELBIOWQFEGOTDYCNZGKTMUTLREEFUQIJRFRCJLXOLAQZABTOKAXJPZWRHWAVWLYUKHZYOVJMBTDIUPGNQDXGIAHBCPCTGOFCAGCKUERRYMCEQOUKOEKYPSVHFVYNCPCUBHXUOSMNXENXFTMFJDBDVKGRNQPAWGLHAPZRTKNUVLYWKKQWNDVZFHHXJIRQDJQIELXAMYBZTGSHSSVGAJ");
    msg.transitions.push_back(tmp_msg_0);
    IMC::MsgList tmp_msg_1;
    IMC::PathPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.0870941407302;
    tmp_tmp_msg_1_0.y = 0.94883536929;
    tmp_tmp_msg_1_0.z = 0.961115723417;
    tmp_msg_1.msgs.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.414953082343);
    msg.setSource(63532U);
    msg.setSourceEntity(140U);
    msg.setDestination(57620U);
    msg.setDestinationEntity(158U);
    msg.plan_id.assign("WQVMIKZXLNVQTKMANRRBVUYRJTSFZGFUMQIEDIJOYKIYWIBZSAWMVCYSRABQKEFDDLBATFRNPZQPLIVUMPFRWEAUEWZMXMJDGKCSJFDXHYNNXCVHHGJXBTLHCUEVQYIBQMPVSHRPBOSBPQOTXCLGBNLGSQPFEWGOTOJEYYNATGAUHCRRKXOYEVSSTZGCEWEHZRZWJUIACZNPOKPMHNFCIAHDFTWFHWLOKDNXUVOYJQJXZOXUBDCLDTSKAL");
    msg.description.assign("UGIJVAESLWONLOYQURSIVQPYKHZUNEQFTGXJZMBFFENNCDTPHSWVZOQSIPWXVDQEMCMGJCJDDKJWJRRXLXWAHGLTESZZQFEJXAUNLVLVIUVTUETFERIDIXLBYWXOHBOBXHKVGNDGJNGXCFYPSKMCFZOOKEBSCSFXQHPCIMODZRARNICK");
    msg.vnamespace.assign("XFTGARONMGLCSGTGWVSCDKKNPJCRDIPYIJOGPFMEBQYYBOWMTIZUPFVFRUANTJTWZBBSFLIVAJUMLSMLWXTQHRSLZQEKEPGJOXNOPCMTUJCEZGKOPSGW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GZOZZLATQRIMMVUJEZGATYOSOUGHDB");
    tmp_msg_0.value.assign("GLTYXNEWRALARVMYJWZNSZCDWMOUPGJRCNVAWJTKBCYIRYCOHOXMQGQUTIULVGPAPFDKNHIXRKUYJLBLN");
    tmp_msg_0.type = 106U;
    tmp_msg_0.access = 4U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KBJCRLHQGIHOUGBPZDASCFATWPJNGDIPMAHTQGWJYTALYZVKAYYCHPVJQNEXMZIGKCUFSFIOSXPUHXWWQZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.952581903779);
    msg.setSource(9744U);
    msg.setSourceEntity(9U);
    msg.setDestination(46822U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("RGYTVTBNZVVXRHPLMAHVPMRWAXYONSDMAIUROSLODZCGNZQIFQJLLTGGSCPSMABUWVJQWCWTKJULDUNWEKFQPHOYZIMZZUQS");
    msg.description.assign("GTRWISIBIUSDJDYFQBXQEYVUQCCLSHVOMNZMTQQOZMMJWYGUQAWTKKBIBTROZGAOCMVAAMBLUICKORCELKDKZODVVXNXZUXYGLPBPANEGWRELAIRHRXOFTLVHW");
    msg.vnamespace.assign("WDGADFJEIQZNYKVIKQLSLQODZBXRZVEZVWAMKYZAPMWJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BENUDLWAVOI");
    tmp_msg_0.value.assign("RAFLNHCENVKCEAAETUKNIDXOYGRAXJHTDYCSCHFLUPWQEARTIRWSKGTWICQAQYNHHFYFYQGNBDQEDDWMDTWABOSUKRMRZTVRGRAKYLVGTCNHWYFVQPSRGZKIZJPBLBJBNOXTPJDZFNGZBNYUXNHLUBIQFXZCOSHJIBQXMCUZMIVEFUSEOKUPWJLXVOEPBESMZPGLLDXMLYXVEJMJGKMOJXBWKGYSDKMIULOVZQSPIFSPCTUWJQH");
    tmp_msg_0.type = 62U;
    tmp_msg_0.access = 101U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("INVTZAYFUINIGPOIWPHRRAYXJWSQBOCBSNRCGNVRVZFQWCHADMLDFPBKRAVMSVJEUJSFBXDBKXTRXMHWCQDLZFAXSHCNTCUCRBYOEFD");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("MUINHTBNSDLFUVGHYMUCYURIWOMPWXQIFGOAEGEMZTPJIZJTJAEPLZALQXPHXRNCADSVZJOKSXSTQUIMKUQYBGUMDZRTWJTEOLAUQYFJWXJOXEFFEKJRRCWJLCCXKIEZLEQVSODGHYXGSLBNF");
    tmp_msg_1.dest_man.assign("KOGWUFMIQLIZUUGMXDCCVDDOXKOPRWYTNTNZUUHXC");
    tmp_msg_1.conditions.assign("BFOJSREIZQWRBFGJJXEZSRNDJUUZNUIUFSPSXESAYJXOWYYFYHTRYMNICWRXXLSFTPQDQZWBDACEVMVFRGRXLYUCMKPTIQKOIBMAZQLODPQPYBKAMQTBOAUNCUDGIHBLCNHGIHCEVGIUPKJPV");
    IMC::ScheduledGoto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.arrival_time = 0.154594856496;
    tmp_tmp_msg_1_0.lat = 0.16321394215;
    tmp_tmp_msg_1_0.lon = 0.00397794049077;
    tmp_tmp_msg_1_0.z = 0.93877609403;
    tmp_tmp_msg_1_0.z_units = 114U;
    tmp_tmp_msg_1_0.travel_z = 0.968419544831;
    tmp_tmp_msg_1_0.travel_z_units = 44U;
    tmp_tmp_msg_1_0.delayed = 134U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::RemoteSensorInfo tmp_msg_2;
    tmp_msg_2.id.assign("IMAGLFDQQKDGSEYWIINCLJWAYZRBJFVRYJOACWMCBWLCMZKFJVOZPBLBFKVKIDQDNYVQT");
    tmp_msg_2.sensor_class.assign("RBCLIQJLGPOPDBDDBEMMTXYCULIEHJUQWRWHNTYCAKKOPDSDDICUJVUPUAPNMFQTRWLSCXIOOLTVYQFEKTZNHOPPVLWMZXWURBFZHPGKKZSHCGTQAOBEHMYVQNFBHSJFKPNM");
    tmp_msg_2.lat = 0.417387856645;
    tmp_msg_2.lon = 0.820946963632;
    tmp_msg_2.alt = 0.692052825969;
    tmp_msg_2.heading = 0.710758164556;
    tmp_msg_2.data.assign("KNWSQHTCCIQOVPXJZQRJNR");
    msg.start_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.543304170989);
    msg.setSource(56125U);
    msg.setSourceEntity(105U);
    msg.setDestination(52522U);
    msg.setDestinationEntity(236U);
    msg.maneuver_id.assign("XLDFXBUVWAZLCFAVXIWBKKOCQKOBTNTDJXAVYDFSKGILMUGZWENERFERQYZWGMYSPMCNRGWVPMDDBFEQAHGXMZRTUXSVL");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 20519U;
    tmp_msg_0.rpm = 0.709783491609;
    tmp_msg_0.direction = 10U;
    tmp_msg_0.custom.assign("NZGPKHEPYINPIVSVDCGUNMSOBYMLBJTSPDPPSUMZQZBTPHHYMSSTIYMZGJGSCEQTUDIABRTHVMDYXOIFIGXFUARBRJDRHDCBDYCNDOJQFIJSMSLRFLDWRFEWNQHWAF");
    msg.data.set(tmp_msg_0);
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DFHXXTEQWOTCPPTGUBBOJGADUKZMDJIQMKAXNUDEHTRIZFKQIZDPOMVKZAFBTBYHALUNSYOUPYWBNQEZIHGEYPKYXKRXMNXJJZLGECXWCLSHMAWLPVERVVHAHFCLVBWSGZJQHTVATDBSDJRLKVVGMFCTCIKOBRHTEDQYNWZOPTEWDIXRNIMXPRAJWNWMAGXOUEINYUNYBFFJS");
    tmp_msg_1.plan_size = 53367U;
    tmp_msg_1.change_time = 0.169453988416;
    tmp_msg_1.change_sid = 15696U;
    tmp_msg_1.change_sname.assign("BWJKROGQDMCFZOSPGBNIWKVGURNCVDWACZAPNLDVMDQMFAEROTAGVURLPYPYUSIUQBNDTGALNIETXSJKEHTZGVFPBIHOQWQFKJJBGLPCKIVYDQWFILOUQEHPZWDVIGAKSONSMELNSYCADHMSPLJXWANUXCCSEIYMQRXBVYUYCFO");
    const char tmp_tmp_msg_1_0[] = {-18, -67, 44, -3, -124, -38, -107, -26, -83, 58, -68, -48, 116, 62, -92, 18, 9, -72, 18, 25, -60, -62, -25, -20, -117, 93, 25, -50, 32, -25, 7, 41, -106, 37, -26, 94, -100, 30, -43, 108, -99, 107, 118, -120, -76, 86, 76, 44, 12, 120, 48, 120, 115, -26, -120, -99, -20, -25, -23, -64, 45, -34, 119, 121, 88, -8, 87, -100, -52, -104, 88, 73, -34, -19, -105, 125, -8, -109, 91, -91, -85, -100, -70, -65, -9, 15, -98, -13, -115, -121, 78, 118, -107, 115, 83, -16, 22, -92, -15, -61, -11, -41, 1, -35, -110, 118, -45, -3, 40, -117, 12, -116, -92, -113, 42, -77, -118, 41, -57, 108, -12, 100, -25, 44, 96, 29, 98, -82, 95, -34, -74, -92, -73, 69, -72, 121, 103, -65, 17, 120, -44, -8, -107, -126, -62, -40, 28, -99, -124, -98, 22, -119, 38, 36, 43, 38, 80, -111, -99, 78, 65, -9, 12, 32, 57, -122, -104, -107, 74, -105, 83, -41, 81, 56, -55};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SystemGroup tmp_msg_2;
    tmp_msg_2.groupname.assign("JKVXKZHRIPPDPDAEOKFLYDQTLAYVLJZXEATEKBZOGCGETTDKZLQORCVPLGSZRAJUGAICSNWFDWIIREPCYQOMRHAGJYMEJUFBEAJVTRDFWNUITG");
    tmp_msg_2.action = 247U;
    tmp_msg_2.grouplist.assign("BPQOVSFRTWFSVWQKTHGULBGJKVBPXTNEILPEK");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.400011126734);
    msg.setSource(1478U);
    msg.setSourceEntity(149U);
    msg.setDestination(59981U);
    msg.setDestinationEntity(102U);
    msg.maneuver_id.assign("BZCHKCWCFDLCDNNOMUPBFNTUTFJOMEILRDBXDWJXREHOQNVACIIHPHKWJKA");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 46008U;
    tmp_msg_0.lat = 0.462818806673;
    tmp_msg_0.lon = 0.025271615461;
    tmp_msg_0.z = 0.789109024979;
    tmp_msg_0.z_units = 77U;
    tmp_msg_0.speed = 0.388004841438;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.custom.assign("HLRBPBKAMIMSYIYYU");
    msg.data.set(tmp_msg_0);
    IMC::Dislodge tmp_msg_1;
    tmp_msg_1.timeout = 51966U;
    tmp_msg_1.rpm = 0.463960019021;
    tmp_msg_1.direction = 123U;
    tmp_msg_1.custom.assign("ALCSSZBSZJQICLUPLEFLADOSLRWQTSNXUEOWBVSKDXZHQJGXRMOBYNIPGTCNJMUDXVZMYUADRTQHIPDWCDTEPHVOVIEGPOLGPBRFAQXDLRENVXYJCIYWROPSRMSKJ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CompressedImage tmp_msg_2;
    tmp_msg_2.frameid = 19U;
    const char tmp_tmp_msg_2_0[] = {-125, -1, -40, -126, -95, 51, 115, 28, -121, -82, -111, 110, 40, -68, -19, -33, -101, 62, 92, 34, -124, 110, -108, 39, -100, 82, -83, -59, -96, -82, 11, 79, -124, -33, 1, 71, -40, 48, -115, -43, -100, -127, 100, -64, -19, -114, 50, 65, -114, -96, 22, -1, 26, 122, -49, -71, 112, -94, -60, -63, 122, -108, -39, 93, -47, 107, 86, -27, -32, 56, -120, 21, 1, -88, 18, 99, 16, 26, 34, -67, -110, -37, -40, 18, -21, -53, 89, -76, -26, -14, -88, 37, -81, 16, -76, -83, 29, -115, -17, -119, -63, 12, 20, -24, 81, -55, -121, -88, -91, -47, -79, 56, 94, -73, -38, -122, -95, -85, -76, -94, -121, -125, 36, 107, 79, -19, -93, 103, -51, -59, -82, -74, -98, -58, -14, -92, -61, -16, 96, 100, -27, 62, -117, 6, 95, 95, 4, -122, -111, -50, -37, -98, 0, -3, -96, 38, 119, 57, -126, 28, -24, -92, -20, -109, 62, 2, -120, 28, -31, -62, 24, -61, -12, -122, 70, 122, -15, 59, 63, -104, -15, 0, 38, 118, -82, 6, 83, 39, -99, -50, 20, -110, -113, -77, 114, 98, -31, 72, 116, -94, -85, -19, -93, 107, 125, 37, -29, -6, 71, -30, 17, -42, -94, 117, 103, 91, -74, -2, -105, 80, -5, -13, -113, 37, -15, -111, 1, -29, 30, 54, -30, -73, 54, 108, -93, -52, 54, -70, 98, 103, -16};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.364379843443);
    msg.setSource(32823U);
    msg.setSourceEntity(70U);
    msg.setDestination(34769U);
    msg.setDestinationEntity(82U);
    msg.maneuver_id.assign("OIZINFAYVAKUXUKEDBIIEILIYRRGBOMDALQGYXIN");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 42379U;
    tmp_msg_0.lat = 0.129624716697;
    tmp_msg_0.lon = 0.535121922449;
    tmp_msg_0.z = 0.971437048082;
    tmp_msg_0.z_units = 151U;
    tmp_msg_0.speed = 0.361334443269;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.duration = 1512U;
    tmp_msg_0.radius = 0.544611305935;
    tmp_msg_0.flags = 7U;
    tmp_msg_0.custom.assign("ZPESIURQGFYZXVREHYIAKQNRHMKAXOBQWRZLFNHFOVNSGESCBDERUFZ");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.786353805395);
    msg.setSource(10174U);
    msg.setSourceEntity(253U);
    msg.setDestination(52748U);
    msg.setDestinationEntity(34U);
    msg.source_man.assign("EJOZBYALCYXZATSZSUSJILKFBTQJFRIKIHGUBAWOEINADOSNHHDVNRQYQBUPUWXQVLBFITJAERRKCJXWFNEWGVXGMKDYEWSIWKMIDUMTVMWDPFKUYEXMPCWTPMZREMPSEHNOELTBCXZDLYXSGGCLGNVOCGNIKWAFXDTPSJKNNPVFIMPCIGTPRXSAHBUJRACQBFOHZYZLQKVGQVHHAFODLKLTGHF");
    msg.dest_man.assign("GHKNPLJIXKGAOKVDRHQTAQUTHJZBVRXMBMQQDZMMINJYFLUBO");
    msg.conditions.assign("FYITBNDKXRXZRRCJCQOGTTGBHJNNSFJJRKEEUTBSJGPGCOWNJAZGHSDZKKIBUCBZRWJMHLADBHNPMICLHPUGTOKASLVFZOUHOQNWTAXDWLXKYCAVYMWXVQIUYWOUFPTQVFVFHYWQSZEXWDUPYYD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.787082683016);
    msg.setSource(61138U);
    msg.setSourceEntity(137U);
    msg.setDestination(30001U);
    msg.setDestinationEntity(63U);
    msg.source_man.assign("XEIZEYWZAQQYVOBAANXTLA");
    msg.dest_man.assign("JBMBZARCSSGPUGWXHYKUHXLPEJNZNHLJIEMXQAUQFIQYBLPKVIWINERHKRWMXZZSXENIYFTQAOVMYDPCKHESPZLSGNGOKYYSLVDNLKYFUEKXQQTFVLFIHTGSHXCVFBGDPOTPVWEEMWGPTKBU");
    msg.conditions.assign("OLQBZSQMCYVXWDKKGSFMLOLGGPVQPWHZVVHCDLVYNEZBGGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.689324031585);
    msg.setSource(9395U);
    msg.setSourceEntity(15U);
    msg.setDestination(63045U);
    msg.setDestinationEntity(27U);
    msg.source_man.assign("RIHWIJRTIVHCRUHFDNIABEEVOZQZWDTINLVFMYSCYXXYVOFZQHTJSWGLYKXUAYUOQABKLNQWINMLFBWVYTZPYEMDHPQTDNVXTZCNKYZMHPDRJEA");
    msg.dest_man.assign("PUJIRBZKOEMNNHXVBPHQIKWXJTHCZZZYILNJOQUCTSLUOYVYFSCIEEOGSTWSGFCGFSDCKHGCXGSNWKPYRPAVVIAVVVPDGZYKCGIQJOADILUYCUJTXVXEHINUYVIIRGDHOBHRFEXESQBDYBOGMFWBWNLXADZXRBKWRAAFUPTXLAKRLETWQVZCOPXKJBYFCHLDLMLMMDPQUZTWJOPJR");
    msg.conditions.assign("TSSCPFYVIAXWHLXTPAGQNOVIXONCEDILQRBFMLVHTGJXXNDWJYBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.902868268332);
    msg.setSource(36893U);
    msg.setSourceEntity(141U);
    msg.setDestination(48953U);
    msg.setDestinationEntity(199U);
    msg.command = 239U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MWTEUWFUYFFEBVZNYLYLQWGACZVPKVCRVNOATJBGCIALFNCINENCRJXLZYWMKUWPBARWZJXSHWFIGANVKCAHLYBKDHQXHLMMDSNUXYXKIDPHQQZWIOKHQLNRSJZPUEDRLETXQIIOPJURACBVJPHTOQOQYJMORSDTSSQFGHVWHHUNLEZBPFCCTKUYFXEBGIRXUEJGNPFSOFDOTIVIGAXOCQOEUDMWJBSARZPPXJ");
    tmp_msg_0.description.assign("VXMOZXFYCXBFYYXEVPBKXLAPIGTKHQLUQVGCIGAFDKQICMUGUVRMDTKHJTNEOUNEJNHGSKIEWDAWMYTTWDWYXDWMDGUFVZXNMBRPILBJSURMRYTQGZGAAGZPHISKQLLWPRVSOKISULENVLOJHKBYACZSDDHEFHYVUAXZDEHSKPBRMCNOACV");
    tmp_msg_0.vnamespace.assign("KPMYPFWJJPAGILZCZNNLACTKXCAFRLVCHSHVXQRCHLFEMPSXOSWHBDFOUAUQAFEBFTSUEZGCPQWYMWROXKUMHYTHWLIPFVRBGDVINIGVDXTRQSAZUVTJUHUWDEIEZIVUYVMHHBPBCDJDEAIOGYTZPNNXNZKOKPSKZDTQYG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FBGWSYTFLJCTKOGEORJVOMXLWYTYTHFBHUSJMBCVGQJVARVCEFEBOKXEXSOESFHPYJRTSKSWOWZNSRUXKXQLUJMFDNBPCHTAZCUDXNSUWZDPMEPWPNUEVXLYQBWNXRMHURZLVIIWYQZRKJNXWJGCBMDZDKHLL");
    tmp_tmp_msg_0_0.value.assign("OHHPEZGOTQQHOSEJQGINJWEMDJHFNKDKVK");
    tmp_tmp_msg_0_0.type = 222U;
    tmp_tmp_msg_0_0.access = 175U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EOTSCUQILHTGKYPZVMAYVCTAHCTXMAAFGULXQYVVWSIMBKEFLDEISIDUARZSVJPLYNZVWEIXTSODKJIYDOSAUQAFWIRCBXNZPRJUDWJAIWEEMIVKLITPEPLOAQNXKJBQABYSHUYOKQOTVSLGMEBTQJZFTQCCDBUHOLOGLNGNUYLWCYCSTMYWPMD");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("IAZRUTISBLUIZPPBRQNCEMNP");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 36697U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.71789230421;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.12165950093;
    tmp_tmp_tmp_msg_0_1_0.z = 0.289302672031;
    tmp_tmp_tmp_msg_0_1_0.z_units = 92U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.207555127341;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 199U;
    tmp_tmp_tmp_msg_0_1_0.duration = 54579U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.878900689543;
    tmp_tmp_tmp_msg_0_1_0.flags = 240U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WCTQXALPYLRVLCOGXVESTJAIVNOAKTYDFMRSLICWUHMWBHNXVJKUBFNCVQTONMBSDXNHNHDJVEALLSXPKCBFZPPUIGQRYMKBESELZEVZQSGYTXRJAGHIRFAFBRWZUKCOGVGTHEEEMIPJRPISWUJUIVWQJFXHBTNUKYORDZBFHZPKBQYLSGMFUTIKADMWMQCDAZDJTQSJTEKOOEXNQDIZNGGWYPCFAMDOBAYWKQPRSX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("GAJKFTWUPLMRKAUQHJSMBXPKOZGYLNUINFYIJCGPVBPKTEUIFLMALMIRVZOGYWTUACHWHBHROHJIVTYNHDQCSCIQEDZXYTMXWGAEYBQGWVYEQBESLNPNKRDSJRVHTEJTBPQXCZAKVDXYSVZLYQFZQDXEBWXBVTBJSWYKUWF");
    tmp_tmp_msg_0_2.dest_man.assign("BBFJSXFRKGTEPBQFIXYQRUNRSTBVZWWTLFASDFLJRMZRPYGTJKDRVYWJBDPOSDPAHBC");
    tmp_tmp_msg_0_2.conditions.assign("ZFRGZKGAEMVOXP");
    IMC::VelocityDelta tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.time = 0.704571000567;
    tmp_tmp_tmp_msg_0_2_0.x = 0.926613246209;
    tmp_tmp_tmp_msg_0_2_0.y = 0.697785355883;
    tmp_tmp_tmp_msg_0_2_0.z = 0.967547767789;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::CompressedHistory tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.base_lat = 0.311606895018;
    tmp_tmp_msg_0_3.base_lon = 0.47313919956;
    tmp_tmp_msg_0_3.base_time = 0.265154225229;
    const char tmp_tmp_tmp_msg_0_3_0[] = {-102, -16, 10, -69, -85, 99, 21, 87, -12, 19, -86, -43, 108, -12, -41, 108, 61, -120, -117, 75, -22, -62, 5, 108, -35, -19, 20, 104, -98, -127, -17, 32, 38, 15, 67, -74, 42, 113, -75, 48, 114, -54, -104, -96, -121, 36, 4, 52, 25, 73, 79, 0, 6, -76, -90, 16, 48, -125, 89, -40, 98, -8, -75, -10, -41, -18, 113, -16, -2, -85, 80, -83, 23, -35, 31, -32, 9, 118, 92, -91, 20, 98, 96, -28, 104, -22, 1, 103, -114, -112, -30, -35, 119, -27, -37, 19, -97, -16, -107, -101, -38, 50, 10, 67, 95, 47, 79, -76, 54, 59, -42, 11, 76, 69, 1, 17, -68, 53, 60, -86, 27, 60, 96, 91, -89, -4, 24, -105, 89, 9, -53, -100, -27, 2, 108, -114, -120, 13, -16, 45, -78, -82, 22, 25, 36, 122, -105, -57, -88, -38, -128, 3, -43, -48, 117, 57, 22, -118, -1, 2, -10, 7, -103, -60, 55, 126, -78, 0, 86, 88, -121, 36, 54, 104, -125, 102};
    tmp_tmp_msg_0_3.data.assign(tmp_tmp_tmp_msg_0_3_0, tmp_tmp_tmp_msg_0_3_0 + sizeof(tmp_tmp_tmp_msg_0_3_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.942657677576);
    msg.setSource(9153U);
    msg.setSourceEntity(84U);
    msg.setDestination(53913U);
    msg.setDestinationEntity(112U);
    msg.command = 20U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BSHEIDHDKQQOTWUVPKFRHTLCFMOUQKETACFBQTIANSBZKCJWGBPSIHCZPPZSJSROWZGNACIQYNYNBXRGDJMPKKPGIULXVAXMXYGDCRXLXUFNPFCIAMNXYJHXLIPYZEHDASMKYFRYUIOQIVKZSOOUZEWUBJDCTOZIFQWLWLNSXLOBQWLENMHFVEGMBYZTHNLSYDTEZVYMRJBCRQJSDCTRVEPUA");
    tmp_msg_0.description.assign("CJQBEXNJWVEJTULTFTPRQWQDIEGVLUOFGDJSKDVSPMJXWUHWLXPOYFBFSSU");
    tmp_msg_0.vnamespace.assign("ZHVMELDRJWBFBSTYESBSZOKLFVTHMTNWHEVTYUQQQXAGDLZRIPYXZFEJIIBOQNGKALDPURVDCDYRUUQWXZJQEJHVPKAPQSHXQDMZIWZOICPMSVYFHNLKAYGOGDPCCPLGGAEJFIFDBSXEUHLMKVBWTCOPXIAZDAJAIHFKKWHCRJMNEOSNBGVOILTTPKLUUURNYFNSATOMWINSTHGXTJBPZNXECMMKXVWFURGGU");
    tmp_msg_0.start_man_id.assign("UMHKWWVFBCTLPDNWROQLKTXTEKRIPZILGJGIWLIDRSSCPFAZFTJAWXOQNREDPVFMBEFTSPVWTJBHIPMBREMOGNZHNNMGSYOWKEYJZCCQEJMHNUJSBTAVVSDSHOSFQAYIYKKZSHZIPLNTCLDPUZGURPKCVHFZBAQEEQQJMUXUVYJDOAVFWGRPBXCZEYXILFQARKUDKRDTXUXVBYQ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("LMHDZNIHEWPUBVIBIKIIQBYESJSGKKWUZKSDMGLSEDHTTKJHSQVNXVWFDWNOPCMEKJNXQADZOVJVCFQNYCCREMVZKWJCDPIBGTJKYZBDMXFVSXAOQUQPMLKJLANFVMDQJUUBULHUEUMHGXRPPZVJFRZJUHDRBPCIITNFACBEGZZPSWFXOAEATYRQTLTRKXMARXQGHRBLWONZNAYVGQCGPRWHXEWOWTUC");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("PJKSOVPINJMPMPKSCRANYWMQIZLSXGYKYPUBKWNLZIXIXKWWENRXGWMUDKHFKXQTHRKHDQVXUQFZZOVLEHSFTBDJZXUQLTAYCJANAMTJLEWMFSWPPQVGRCBTABOZCNBRHWDEMHMGJVYOQCOTUULVUEGSOXRLAACBVEYDCZYDLOVEFYITTGEUYGEDLZRUJZFBFUQBRXOITSISHMQIJPGRAIXBDWKGPCOHPKHVRGVMLSADAFDCJHYNOCJIN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ETYZPVTIXWQJNSIWMPMAWXWNSCVMAKZHZNVOYDWZBICFPHSZJBLSYCEYKHXRHMMKYYTUYQDDNPPFYEZSOTCHTGBUSCWOEJIOGDTGVFOMNUBJRKPAJQQGDXDKFDGGCLKUREXPAPQCEEHPKLOGRRVAKVAGAHATMFNVFVAMNRGCMRFYIJLXNHVIWLOZUBB");
    tmp_tmp_msg_0_1.dest_man.assign("XFBJGKRUUMMSKNCXZSCQTJCLVBZFURCOHIQYNIQDDQNEAWZOTUYAWXMRAPXDMRGGBHXWKYIOJOJMSLRLPQRABOYIOEQSMOUWTLJFFWMLKLHIOANMUGCLUQPHXVLYAEVZOBAKFKHYFPIZRLWDTRAGHDTUXHJGTOPLVJJECGFNTCFKARSBWBDZJDVDMZEKBTMPHTTSIUVVGIEYCZKRWYSWHNECEQEXFVPEIGSQNDSNNF");
    tmp_tmp_msg_0_1.conditions.assign("EBHZYCGUMTLHSGWQDPZVTZUYYWKCRUDBUSTINXENLHPMIMKIPBQTABHYLGPSBYGQHPPPIKFVYDCRDOZUWRTEGMJFTDUHGVJANOXKZHQANCCLQZMJFBHVKXNDZTOUDLFUJJBQQUJRNOAXAEJOXYMSEMCJTWKBTWWHYFIISYMRGOEFCZKSAELCJASQTNQQDCEOKNIMFG");
    IMC::AutopilotMode tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.autonomy = 12U;
    tmp_tmp_tmp_msg_0_1_0.mode.assign("UAQFFKDYMNIWIYGZMOWLFQAVRVYGAFHGMLVRSFPRCTXNYPRKXBAFORLIBDHTOAXMAVXRNZLZUNLGEZBQDUBCNEGCHTM");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Conductivity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.440929445593;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.734458761218);
    msg.setSource(34688U);
    msg.setSourceEntity(227U);
    msg.setDestination(27733U);
    msg.setDestinationEntity(117U);
    msg.command = 40U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LCPMSHRFMHZQTCQFHLOPNJTZCDZLDAOHPKQCBLTDJQXTPUHOPEAACRUIJXSBKOWXIKIVXDBZFBXAQOEGVSEWYBENZXRVANOGNGPHLIXNNHLDMZEUOCQSFAAKYQNJPPGRECPIYFJUDDXZYLSWNIQTBVFEKOEJXAFMDZSIJVGFIMTWQRDWGYBGCQOY");
    tmp_msg_0.description.assign("CXJOUYGHKEGDLGIETMHNMOGZTXINDMLAKZXBYDOOTWUWINDMJJEHEZBPXTWSZACVFJNUJZADPHICPCELMSAJBDDOTJYWHFUUCROUQKPEZNVVEHCVRLVPOFUUSSYYBTWYRITGRLTGRXPPSVJIGEFQBOWNADZIVNSSFQOCPKNLCJEQQFHFEOXYYYQZHBVUKAQDSLLWRZQQRDNFXKJSNFPCMALQTWGTM");
    tmp_msg_0.vnamespace.assign("TYAZPEHUSJNNGJQADRGXVDZMOKAGILFIGZIGRANQW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZUOTBDGCQIWKSLIFNLTIMGOKBDZRULSMXUGAJZKJXTOFJLWYGLOWWCPAXBBPLCEWVIPDIEPTXSWTWTPHVNCRUKDPSUMQMVEXRFJWDLVFYYSKWZYMFANHZHZUAMJVQRGYEEIZXFMUPDNGORZFDMABQMOQQIADRGGNHJXLOYJQEBUEHTRAHQKYGRKCFBCIBHEDNDLZSUATXMWNHHXPNCJYJYVASQVSIHCIPFVEZEOGBTVORJPTQYKNUFKCSOLS");
    tmp_tmp_msg_0_0.value.assign("AVBBRLBKLIWPNLFQZYZDXRGXIDATAITOJCMBSHEUCAPYRZSPCQQVUHCFBWGOVZHRKPBDYNWTKLTEQYRHBJVLQPTYQGVDIJPOCBHUXKJSDROXIHEWYTMYUWRCMWNUHWFELXYCTRIFASGAFGGOEZFMFSJTSMTCKXKOQHZXRKNVDLVNKWNMUUJ");
    tmp_tmp_msg_0_0.type = 45U;
    tmp_tmp_msg_0_0.access = 199U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OPQEUUYNRFPCKFHWTITNERHAJJMXXXZSVEIDFDHZKPERLKQNEYTAOJUEQTQCJUUQCVSZSBKBCJYXBIWRAXBRILPZFIPEACNMATWLTQMYAWFNGMNXOZGAXOKCUFELHQLLHDSTOOLPKDCVWSGXVENWIZMIBWBCGYSOUPKZYRRIDDHUUD");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZGCWVKHAAMBHJEMLCUJLMDYZGWINNOUEKTZRRMIEJLVAEDXYRZCPYIFKSRTAAQUTWJSPPQXXBWHCJMXAXMULFUMDIEDUTENOGHVDHJKMPLLWFBV");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.600399478583;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.204522316161;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.307980682879;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 215U;
    tmp_tmp_tmp_msg_0_1_0.limits = 77U;
    tmp_tmp_tmp_msg_0_1_0.max_depth = 0.310631005624;
    tmp_tmp_tmp_msg_0_1_0.min_alt = 0.895721550208;
    tmp_tmp_tmp_msg_0_1_0.time_limit = 0.728372351638;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.554365042678;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.475435503586;
    tmp_tmp_tmp_msg_0_1_0.area_limits.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.controller.assign("LKHKTLTUJBFDWJZTZXKUGMQBHFNKRKWWXMZPKDHEFJPYLDYLUVQCOIKPHEKRPFPUHJQPBRPCVSNCEYDLCGRMBDVIRXWSUMDWNBRIEJAXSBHSDA");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BUBZOPPKRHVZBSDKOIBGGWVPUECABOCDXOQYYLCHNZLPJVXWDWTPZKHVFWMNXOXRKDOIEVHDLFKSPZLYMCODNYZCACNJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TrexToken tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeline.assign("XRSEWAMGAXPGCMRTSOXDLWBSLWRVJLHCUTFEYZKUDCWVDUAMIZIBQQFXWCKHBXYNQUOTFVFZVFUIJPEYOXEBNDQYTQIKNHKTSKENETJJDOMWERHBCXBACZMTMZSDBTHBAGMQFUXYZGECNZYRMAZNSIQGOIKUTFJZXOR");
    tmp_tmp_tmp_msg_0_1_1.predicate.assign("XNISURYGBDESTPSOHJFBQGXEDZLJRMZWTZWTEIWRHXECBZQTNRGPZSJAQBKNDWMPMBYHAWVNVMVKSFHHJICAVYFQPSQXEWSCOAPWAOFGRCPMERLTKFXVPVAYUNCNHZACKCILJGDVWGAPTODEQDLZZRYDIUKVJDLTMOT");
    IMC::TrexAttribute tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.name.assign("WUXLANEJWBQMGSUKNZMMOJTTDCPRAPHVARIOTYJPLAEQXWXXKCJFLDMOIAKVHZKYOMQTLSBEN");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.attr_type = 75U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.min.assign("UJOCACCDETCZPWBQDXSUYCFYNTOUEEBRTLSRVXMRSZMVZAYVRKGQJBEWRNLRUCHJMSXYMIYUHAQIHMGMGPPYKYPLADLXYGUIINTIDSKZEBDDAEHAXPVEBXQXKVQOZRIASEFJLNMWZHSDSZVGICGWSBVFGRIWUNZ");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.max.assign("QZWVLRZEDWBUHJOEQEZTSQAVQTDBYIOGGIDATROXNVNE");
    tmp_tmp_tmp_msg_0_1_1.attributes.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("PFFVDSYFQOAXANKEQUXGISULYTBKMXTKTHDBEZQVWBOIXSGEPLRUKTZPGULYXJLHZCJIMTZDLEEDFHIZONCCHOSKKTPRKAWBDRCDESKRWMPTFQEECRCBNMVUPSRFAFTHZNZBJSWVJWNWUQVFJYTCONGXPOJQBWNYLYQKEVJHGVCPNYLYLGCGHHIISJOZUAMEMSMJRPXNUF");
    tmp_tmp_msg_0_2.dest_man.assign("BAXPTVZLWQTEBVHHYSMOGYYFYCPQDQIBOMAZBELKGIPBCMJVZYCDVCWUMKSFYSDHVOUSEUYYOFEAMCNE");
    tmp_tmp_msg_0_2.conditions.assign("ONMXAPRPMEGIYIKISOESBHYXJTQFFKROMVNTVWOWEFROLHKILKBDKFLCIJLEODSWEJZLUOAPQHYTBGGDIXKQGXZASCSNIJSNATHWRGDJZRGGEKBDVAECQFCYEWRTHJPHWD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::ReportedState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.700281728111;
    tmp_tmp_msg_0_3.lon = 0.978341424979;
    tmp_tmp_msg_0_3.depth = 0.0250122144766;
    tmp_tmp_msg_0_3.roll = 0.508212940627;
    tmp_tmp_msg_0_3.pitch = 0.316040161224;
    tmp_tmp_msg_0_3.yaw = 0.403407867085;
    tmp_tmp_msg_0_3.rcp_time = 0.148395453685;
    tmp_tmp_msg_0_3.sid.assign("CMEXUOMUQZUHSZIFDFNCPFZYP");
    tmp_tmp_msg_0_3.s_type = 127U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::PWM tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.id = 3U;
    tmp_tmp_msg_0_4.period = 2939125248U;
    tmp_tmp_msg_0_4.duty_cycle = 328615990U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.943307658985);
    msg.setSource(48355U);
    msg.setSourceEntity(113U);
    msg.setDestination(3750U);
    msg.setDestinationEntity(193U);
    msg.state = 205U;
    msg.plan_id.assign("FLQNIXQTBUUTUPTPXJIPDKJOVIWPDFAOTWIGHWKAYELLVFRROYHNHMNLUVANUEGMZKYZRGMODNPYZNYTIPXTMEHGCSCRSMIMSVXEMVYODXUWFONCGHGZJHPCEXKBZYMFJXTSQECIBBQKJMDDQRCVTTLLJVCBPSUJYKEEFCXGEABFFZGWRPQDBAFKHL");
    msg.comm_level = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.677583367193);
    msg.setSource(64486U);
    msg.setSourceEntity(248U);
    msg.setDestination(11975U);
    msg.setDestinationEntity(91U);
    msg.state = 132U;
    msg.plan_id.assign("DBTWDRGYJBUZUJTENTZAXFHKHURQMXGRPNQEQKATBJWZUYOIIVMMFEKKDJLDTWNWYQHJGAFGVSAOMSPCLEPXMRDEBSZYICXOTPAOLLUHWHLQIKSIMXHNGCOZOOYABLGWYNUXVNTQJKLYQUBGCZFXCYKAKXEVYQOZIUBC");
    msg.comm_level = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.0801616451836);
    msg.setSource(53626U);
    msg.setSourceEntity(71U);
    msg.setDestination(39187U);
    msg.setDestinationEntity(53U);
    msg.state = 170U;
    msg.plan_id.assign("HKDPTKMVZZZESCJAROFXXPEJOYQSVCOYHNUNLWFZWXDHOHOKOUAOPWLBVVBDATHPYLCRINZXBRYCATRMMSBRNDNWUKZHNYSIFFFBGLHEMGGICXELKDGXXAUUNW");
    msg.comm_level = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.32017050426);
    msg.setSource(26269U);
    msg.setSourceEntity(158U);
    msg.setDestination(24775U);
    msg.setDestinationEntity(69U);
    msg.type = 230U;
    msg.op = 105U;
    msg.request_id = 3742U;
    msg.plan_id.assign("TSDKKVSKKXVNMLHPBHCHHXVNKQADTBJZOIHJSQMRNDAOOQELZKNTMIXPIIGIOSDWNEXCWMBREGIXLWYPYPWEDXJSTGRNMZQQCJDBAHYUGAFLRKOFURRY");
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("YGMWZTEBFBVZKGTSEKPDYFYGMAIXKALUNFKIWAQFOGDYFRESAYVVNSWMOUPQYZJWIJNCBGXMKUCTPP");
    tmp_msg_0.message_id = 4153U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CWKWAYDJXUPNVWDGYZJLIIVIJRSBFMOUKHOFVAIPUOLVEZBFARUGQRGUOATUZVPISJOOPMAXHWWSCFQPIKJZQWITMNSOTXNDRKYLDLGHXCIVRLJUFYRZZQECHGVXQZNFPFKDBFQHJDSISASKYPFBTWOKGTMBXNWAMKJHTDSOBCBCDCUGXLGJTQMLTBFXZHEWNMSEJYIROHMWBPYQGQEZRCNVAMQLTEYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.117635392714);
    msg.setSource(39581U);
    msg.setSourceEntity(185U);
    msg.setDestination(53541U);
    msg.setDestinationEntity(123U);
    msg.type = 8U;
    msg.op = 192U;
    msg.request_id = 29486U;
    msg.plan_id.assign("LMTIFVTKYLTXRFWOAGWBYCEDAOFZUKTSVQHYSLYHUEQYQEOGLKRNYHFGDDRFVQITPYSBBVENKCDMRXIGZOOQPIZANMFDCUMJZRJECQUMUZPARSGXXJOZJRRSIGAUCLOTXNBBMAKCTILWTBQSAEOECGDHOHBLPSUZUKRT");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.286272967708;
    tmp_msg_0.type = 204U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TNLGVADAWHWXUOUYUYEQSTLOZLCOLTPKMQVKLDSKFUBIIZYBAHGNJPOMGEMUPYVRZHDYMFMJXRKHEXHWMSCNNGTAPFLGJOVVJBPDWCGKBMYEJCIWXFVKNERZTQZLUVICDOPUETAJXAXICIYQISHZZFOEGAGFRVDNPNUWBSRXIJZVSVIPHDHZRLJMGNNWOITDFFSCQTWSMYXOQTZJQUJCRAMBEQSL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.131262742409);
    msg.setSource(65105U);
    msg.setSourceEntity(144U);
    msg.setDestination(58999U);
    msg.setDestinationEntity(228U);
    msg.type = 205U;
    msg.op = 42U;
    msg.request_id = 2622U;
    msg.plan_id.assign("LNOULLDHRPGBZCLLDYFGUVEMSGAYRYXWWTPNOXTDLIMYGFACMHUDGJEYWJEANPHNBMIRMIKOOQNWIYPOXYVZZCIDSUALZRKWXOMTHVFKRCWENAHHBQQVFCTXDGISJZHZTPGOJUTBQKSXIJJXLCADUBEITAZJMNSKLVQEYUSKPSPGOEKKDRNPWXHBIPDUWGZZXQBRQCPYVTEFFFKBJBVWJSIQYBHAQCHVAETFLNTCVRAJU");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 157U;
    tmp_msg_0.op = 2U;
    tmp_msg_0.request_id = 6567U;
    tmp_msg_0.plan_id.assign("BEJZKYHVNREBFGLIIYOZVRRONUEILTCOSBTHQCLUVVBXNICWHGFYJPONXWGQ");
    tmp_msg_0.flags = 59988U;
    IMC::RemoteSensorInfo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("AETQNNOFXGDYRAYGVXYPRLZNTHTKPXBVFFAPNTWYRXSOMUEOZRZBJVXIKQWPQVLRWYJMBKDPEDNLTPIMHJOHWTEQHJLALWAHJZEHOSFSCPMSQCWUGVFCUBICIIERNGUTTJDXFUIDMMLRQBICPUPONYYFEKJDKOCSEVJZGCIMSBSZVXDRJAQDWHZNKLUIYHGSWUAQBKFHHNVMRADQOAAQZVCBFEGLGVYMKFEGTWPXIYDUBRCBGLZCOLSTK");
    tmp_tmp_msg_0_0.sensor_class.assign("YTIBZYHCOXNRKTEJOCFBKVCMROYXUJFPOJSIMEDSZONQAWXWKREHNDWTDRYABWQYCFYTRORVQQVTFDXWQAAPFMPVJNHYMCBFUGBSHEWDTI");
    tmp_tmp_msg_0_0.lat = 0.882982980854;
    tmp_tmp_msg_0_0.lon = 0.296494960177;
    tmp_tmp_msg_0_0.alt = 0.894337386313;
    tmp_tmp_msg_0_0.heading = 0.903919477935;
    tmp_tmp_msg_0_0.data.assign("JBVVDBTOOGVDEOEHGLFENPXSFJXIOBJZNUSEQXVQAKKCKHBONXYYXRXYJWQIEDYTZETLPQFTPUUGLRKZDGHKNVEIAIGDAWJJLMVFXHRRTKKKVDYMUDXMMH");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("JQNNOUTWXJKIRNZDKHQQHKVGVEQAMHCBIMUUMKNFVZBDXFJHYGCUKONFERTPLBGZSABOMICFYZUWUQKKRPHHDGDRWCBSCLSAXZZHPLWOSZCLMQPLMENUOGAFETXSDLYNEXJCIGVPOFDTIFEMWNLNASPDEYKUPQTJRYFSYOZTBJCB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VIOSHFLVVRSXCZJAZMYDABKOOVJNAPYIQLSWEGTXODAABBCXWGRJIYJXEQGOZVBPVCLCKZJTXZZQYRXZMIEGCIOTONYMBULEPMRMSQGCVPKFEDXCNAUHXHEQVVUOYPMUSWRQOBYFMTHKILWNNKDEAHMSFTWRTRNEWQNYNKQLSKWFMPATPRCKUDDBGFUQZBLHT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.102457163383);
    msg.setSource(42668U);
    msg.setSourceEntity(242U);
    msg.setDestination(47112U);
    msg.setDestinationEntity(135U);
    msg.plan_count = 2911U;
    msg.plan_size = 163347215U;
    msg.change_time = 0.807977983714;
    msg.change_sid = 55039U;
    msg.change_sname.assign("ATWHEEPLLOUZLWUDLTHQYKGIMHQUSFSJGGJANAOCQDRL");
    const char tmp_msg_0[] = {-116, -67, 86, 39, 14, -122, -66, -45, 110, 39, -120, 7, 39, 7, -7, 42, 126, 67, -53, -31, -126, 11, 87, 20, -75, 10, -118, -46, -54, -63, -46, -14, 53, -103, -107, -73, -63, -65, 91, 121, 41, -74, -77, -1, -102, -68, 110, -52, 86, -51, -112, 109, 66, -55, -120, 23, -82, -5, 110, -58, 117, 105, 11, -119, -1, -79, -17, -19, -93, -4, -24, -111, -102, -117, 75, -76, -35, 109, -77, 4, 20, 4, 8, -11, -9, 119, -85, 13, -72, 37, 111, 21, -121, 102, 23, -11, -12, -96, -59, -68, -15, -58, 38, -17, 39, -113, 113, 24, 55, 89, 26, -72, 29, -124, -27, -124, -22, 105, 0, -78, -92, -41, -113, -43, 84, 118, 122, 73, 35, 70, 75, -32, -60, -119, -103, 54, -5, 111, -73, 35, -1, 40, -37, 23, 42, 113, 83, -79, -9, -108, 97, -58, -123, 99, 107, -4, -34, 88, -2, 17, -46, -63, -119, -108, 107, -55, 16, 13, 76, -96, -48, -74, 1, -108, -97, -34, 45, -22, -83, -26, -7, 71, 29, 66, 100, -81, 52, 87, -5, -75, -75, -33, 2};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NVQSVKQHEKRKIJNJRBCQGJAZEPSVHDQBUTDALPHGKSYOZJNSLXINSTEQTWIGBNIPKCVJVMQHWOAQTRWTXIBZPYMGFTLJCGIHSWFJTNEFXRUXXGZYDZVEGIEHEUOHPUYELKBPBTHOCJLWDHXPNAATPSMCXUBOKNMFSPLZQMNDUYMZFECORQYOTCDZJMAWBRKODXU");
    tmp_msg_1.plan_size = 62587U;
    tmp_msg_1.change_time = 0.540546482132;
    tmp_msg_1.change_sid = 65520U;
    tmp_msg_1.change_sname.assign("DFFJXBMYFOESJBGYVKMZZQIEDOSHXATRNOHJLQGVJZCHIBEOYUZXDUZPCWFCUJBNNOF");
    const char tmp_tmp_msg_1_0[] = {-110, 68, -94, 117, 106, 88, -104, 21, 80, -34, 81, 68, -98, -49, -123, -61, 120, 108, 79, -41, -72, 69, 39, 100, 57, -21, -70, -56, 22, -41, 40, -66, -64, -83, 83, 33, -78, -8, 86, 39, 88, 67, -26, 98, -32, -62, -85, 66, -24, -70, 126, 122, 93, 71, 120, -9, -11, -26, 91, -121, -115, -21, -58, -20, 102, 69, -124, 59, 25, 123, -54, 121, -52, -106, -114, 120, 24, 13, 107, 81, 103, 125, -63, 112, -116, 85, -118, -71, -33, -25, -41, -90, 111, -119, 26, 27, -47, -88, 125, -30, -107, -118, -83, 123, -47, 85, -126, -116, 20, 3, -96, 66, -66, 35, -79, -103, 41, 8, 3, 91, -44, -25, 50, -116, 111, -90, 3, 62, 35, -43, -113, 20, -69, 6, -74, 122, 82, 37, 24, -41, -76, 50, 87, 96, -20, -36, 82, -124, -59, -113, 28, 121, 28, 14, -67, -89, 27, -40, 62, -106, 84, -78, 10, 52, -26, -115, -115, 61, -79, -125, 101, 69, -98, -117, 84, 88, -35, 54, -56, -111, -69, 104, 56, -26, -86, 64, -45, 66, 84};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.128238249535);
    msg.setSource(54189U);
    msg.setSourceEntity(123U);
    msg.setDestination(31946U);
    msg.setDestinationEntity(32U);
    msg.plan_count = 8587U;
    msg.plan_size = 1216623365U;
    msg.change_time = 0.424869739442;
    msg.change_sid = 7688U;
    msg.change_sname.assign("UTZMXEXCBZQNJCWFIKWNBGXBDIOSUWLUREGYJJCRRVQHFGZDBNNQGXWZARJSFCPTEKSMDMHIAUTVQMQRAZJPBFPPVFYDUECBPSFOSOSBYMOCMQQIOSPEHVKGIHBIQWKAYAFJHLPYGGAQZMJIHDAVXZMWHNRIZDETQKPOAOXOESCXRZACDZTRELTECLVFUGNHMINVKXDLLVTNYFOTGJMLIBWOJYKUKW");
    const char tmp_msg_0[] = {-112, -89, 86, 57, -24, 48, -66, -97, -82, -124, 29, -105, -49, 50, 22, 58, -122, -36, -39, -29, 90, 85, -10, -126, 108, 46, 80, 114, 10, -68, -54, -105, -102, -121, -20, 59, -65, 31, 69, 27, -100, -65, 3, 32, -49, -40, 96, -118, 116, -76, 105, -79, -68, 44, -14, -114, -84, -74, -44, -6, -44, 45, 70, -117, -91, -124, 59, -111, -4, -59, 126, -2, -80, 57, 78, 55, 118, 3, -116, 49, -94, 42, 12, -103, 88, 53, 17, 117, -118, 27, 122, 109, -89, -99, 29, 6, 96, 113, 104, 114, -8, 77, 51, 2, -25, 89, 109, -100, -34, 13, -62, 17, -52, -106, 64, 97, -84, 65, -45, -27, 54, -93, 102, 109, -98, -29, -1, -111, 99, -10, -117, 11, 32, -56, -22, 32, -60, -27, 41, 76, 124, 63, -99, 100, 51, 102, 117, -47, 22, 77, 74, 36, -74, -64, 99, 47, 102, -30, -114, -36, -68, 15, 51, -24, 114, 12, 92, -79, -117, -105, 29, -4, 46, -47, -114, -87, 124, 126, -110, 31, 53, -56, -54, -33, 78, -106, -21, -52, 4, -104, -9, 96, 28, -51, 80, 12, 65, -75, 98, -5, -91, -13, -121, -113, -108, 39, -124, -127, 91, 66, 107, 49, -20, -96, 9, -104, -40, -111, 30, -82, 23, -77, 83, 61};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.356139805785);
    msg.setSource(15140U);
    msg.setSourceEntity(18U);
    msg.setDestination(8535U);
    msg.setDestinationEntity(244U);
    msg.plan_count = 55610U;
    msg.plan_size = 2846396797U;
    msg.change_time = 0.808493693929;
    msg.change_sid = 3260U;
    msg.change_sname.assign("YSSFBWTXRYOHFXWXHOHVYUIAAIWWNNEUTTZDNRQSYJBVEKKSQTGIZUSHALWQNAPFLJCDIIXZLBAFTGTTJLMLAVPNYBZHPJQXPGGVGCFEKRMWOMQROZJYSKTNMEJFCMERRQAFZBYNDSQKLEMUIEJBIKWFVZMCHXCLBLOLPUAGCUGGRXRIJLUQXKRSAFXKDOSUTNPIOUVABDEMHQSR");
    const char tmp_msg_0[] = {113, -92, 122, 110, -36, 17, -98, 58, 126, 100, 116, 69, -44, -16, 59, -16, 9, 23, -118, 5, 100, -6, -120, 65, 61, 78, -119, 94, -64, 84, 1, 55, -11, 93, 88, -3, 110, -98, 89, 113, 113, -39, 122, 44, -10, -99, 57, 2, 80, -40, 3, -27, 23, 15, 79, -36, 72, -38, 74, 26, -103, -48, 41, 62, -3, -18, -20, -46, -54, 7, 15, 67, 107, -79, 35, -97, 76, 123, 82, 45, 105, 34, 66, -90, -14, 50, 74, -47, -98, 4, 43, 24, 90, 28, 58, 19, -127, -44, -4, -82, -17, 104, 117, -117, 17, -52, -101, -119, -73, -87, 9, 1, -106, -58, 125, -49, -94, -14, 33, -48, 80, -98, 72, 99, -95, -3, 25, -104, -56, -18, -46, 81, 107, -33, 103, -127, 48, 124, -56, -61, 62, 85, -75, -89, -33, -106, -44, 24, -99, 122, 72, 64, -43, -23, -52, -47, -35, -8, -31, -7, -88, -110, 57, -14, 52, -78, -4, 74, -66, -22, 74, -92, 8, -66, 73, 96, -40, 66, -99, 65, -69, 56, 18, 116, 36, 98, 43, 70, -75, 66, 50, 109, 73, -54, -91, 41, -50, 2, 55, -75};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.684907564114);
    msg.setSource(37922U);
    msg.setSourceEntity(131U);
    msg.setDestination(43202U);
    msg.setDestinationEntity(167U);
    msg.plan_id.assign("GNMXTVGIMNYXMHOJQHPUTXSYPCNLMUDFMSALWVBOOUCBQEZLEHHRKHLMQBEITTRASDWHREPLVTCJGTYVZABGXNJVJQEXSQOPXYJHLNAMVVIFKWZHZN");
    msg.plan_size = 10202U;
    msg.change_time = 0.166376282663;
    msg.change_sid = 28939U;
    msg.change_sname.assign("ANPDUKMECZBSMTUBCRIEIZXNUFGZRGKHFPAHAVJBCTVWTWUIMPONBOFCWRTBLWKVALCWPVRCMYVBYKSTRPFRQZSFAZARQHMZUYQLQSDKWDVTGPNDXZJTKWEFCHQAJOINYDGJRPIPKCWDIBRTXENXXXUJOHTHOQEYLPJSDOQQSXIYHSCSEVSGMLLABGEKQVXJEO");
    const char tmp_msg_0[] = {-18, 2, 52, 1, 63, -20, -65, -58, 50, 88, 124, -12, -74, 110, 101, 49, -82, -80, 111, 52, 8, -77, -112, -31, -98, 78, 109, 97, 57, -51, -123, 110, -95, -80, -4, 92, -20, -30, -99, 76, -22, -23, -55, -33, 49, 8, -67, -31, -112, 21, 104, 112, -73, -21, -57, 99, 5};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.988973556249);
    msg.setSource(62799U);
    msg.setSourceEntity(64U);
    msg.setDestination(41322U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("MGYLQLHMDRPLDBPKNTRWEIAYUBZYDJESHSEKKYJIJLWEZFSTWWSAXXHTUGEDNBQOUZKVHKVCMGAOJWZRGXCQLXNSIXMXQMSVCHJGBILXUJFUASJALBXUTTNOQOAGOYGUJPTKMOJXPCCTXRWMYIOCMGESBIPFHKIVFNFJLAZDTZDIHAEBIDQZNVFETKRQBHRKPVPCEOQVNZOMRUFYGCY");
    msg.plan_size = 23734U;
    msg.change_time = 0.0737042068289;
    msg.change_sid = 61498U;
    msg.change_sname.assign("NXQJVLUKJZMEVYHCJYRLPOGFRZLBSCHEYHPYEYYQMJTMINCUVWOVTOPFCULWXHHJWMAINRABYHZKUYLCBJUDJHIKYEWGSXFRXOEZUCBIVNDEGMZDRGJRQETWDQRLJGXWZUKIMSZQBOANQAOUGPAGMFIENIBFXIWTYDKKPOMVRAEFKPPBLELCXSXQWTDFUUQTCOPQCFAHANNFDADPQKTXOGBZZNGTKWDICNTSLSITZJSOPR");
    const char tmp_msg_0[] = {56, 113, -3, -68, -66, -108, 42, 42, -82, 47, -124, -14, -74, -64, 21, 76, 50, 29, -49, 74, 16, 79, 125, 104, -50, 63, -106, 48, -92, -21, -109, 7, -17, -36, -92, -86, -8, 124, 19, 121, -123, 96, -36, -9, -45, -105, -65, -103, 64, 71, -66, -26, 12, -47, 21, 54, -34, 33, 95, 29, 24, 2, -100, -16, 114, -45, -37, -128, 5, -50, -97, -9, -17, -87, 84, 35, 97, -42, 80, -6, 96, -64, 80, -91, 5, 120, -31, -44, -24, -3, -22, -19, -5, -6, 12, 18, 30, 94, 94, -44, 41, 32, 49, -53, 121, 19, -71, -97, 0, -74, 88, 59, 11, -41, -52, 45, -38, -16, -125, 37, -22, 94, 53, 40, -128, 95, 17, 99, -38, -68, 103, -59, -32, 87, -115, -68, 95, -30, 117, 13, 51, 76, -52, -16, 80, 25, -114, -20, -122, 50, 54, 65, -5, -44, -61, 34, 19, 100, 15, -46, 6, 11, 100, 119, -107, 36, -42, -22, 62};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.336974175566);
    msg.setSource(310U);
    msg.setSourceEntity(58U);
    msg.setDestination(32723U);
    msg.setDestinationEntity(215U);
    msg.plan_id.assign("VBKMWNHQGLGOVYLFYOFNUCWLFNKREYXBWHGUQAPYZTHMMSKIXAIXTQVWENLTATENIHXYTHZCPURPGXIJLHEDVHATZBVMCOKHVRUWSDFFSXDQPMWKBRHZZAGTORCXKGECXDSOSKPBSVJBSXQRTKLCPAYLIVVWICAUDNENUIEGAQOJQYYFFMPJZUBBBQE");
    msg.plan_size = 24497U;
    msg.change_time = 0.674975954352;
    msg.change_sid = 57525U;
    msg.change_sname.assign("LBWTFARRMCHWNGVZGPUYEXDIHXJXOTPDICJGHKEEAGZYMWUHBLBCYQAKOSGUEAXJSZXKOYCIZDCHPTGQEPGNWJERASNFMSBVTQESBIQMPTBFRNFIJQMRNOUZZECVYIZOIK");
    const char tmp_msg_0[] = {102, 21, 94, -27, 97, 119, 107, 41, 35, -5, -45, 88, -73, -18, -38, -16, 110, -96, 20, 34, 49, 93, -30, -8, -36, -6, 84, 69, 70, 87, -6, -4, 7, 18, -39, 0, -120, -44, -29, -44, -69, 36, -120, -22, -108, -16, 2, 70, 36, 13, 110, -107, -9, 118, 2, -100, -77, 73, -7, 20, -80, 103, 17, -100, -91, -73, 20, 64};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.365639114879);
    msg.setSource(38834U);
    msg.setSourceEntity(112U);
    msg.setDestination(61008U);
    msg.setDestinationEntity(97U);
    msg.type = 78U;
    msg.op = 92U;
    msg.request_id = 62417U;
    msg.plan_id.assign("OKCDXEAKKNOMWPRCANUIHO");
    msg.flags = 12886U;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 47U;
    tmp_msg_0.frag_number = 129U;
    tmp_msg_0.num_frags = 195U;
    const char tmp_tmp_msg_0_0[] = {-77, 64, -95, 70, 78, 57, 2, 67, 84, 80, -109, 6, -40, 88, 83, 17, -74, 28, 10, -19, 91, 47, 64, 15, -88, -112, 30, -6, 98, -95, -77, -80, 15, -81, -113, 84, 114, 43, 91, 117, -126, 62, 106, 88, 36, -1, -81, -7, -85, 83, -67, -115, 124, -115, 123, 29, 94, -116, -88, 84, 56, -89, -50, 91, -54, -40, 74, -13, 126, -3, 10, -14, 67, -86, -32, -95, 74, 71, 120, 2, 39, 29, -126, 118, 107, -106, 78, 50, -106, -33, -99, -109, 28, -15, 113};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RCPCJPRFTOXJXBSDNYHETLGMHCYYMPLFBFZIVXDJYRASRRLHIJJWARGBVMCUJEQBSXVPYGPJPZCYSEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.280407685044);
    msg.setSource(60950U);
    msg.setSourceEntity(156U);
    msg.setDestination(63294U);
    msg.setDestinationEntity(235U);
    msg.type = 195U;
    msg.op = 22U;
    msg.request_id = 45496U;
    msg.plan_id.assign("DBSYXEAVPXHCPDEJGACEMLAQFOVLTSRKOPDPTFADQOBOHKNICFACMXSBZRPDEXSEMVKHILICZEWTYNPYDYNQL");
    msg.flags = 17244U;
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 195U;
    tmp_msg_0.value = 0.210745702093;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HLHGPREKZVOSRZOTBTCKJXMRUKHYMYWWVLZFEHTNKKQRTQKQNSZCDXUNDNNZGAIOVHSTQORNLCSLCYBPTBYRICQSQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.634362652252);
    msg.setSource(19661U);
    msg.setSourceEntity(159U);
    msg.setDestination(58866U);
    msg.setDestinationEntity(8U);
    msg.type = 104U;
    msg.op = 109U;
    msg.request_id = 12634U;
    msg.plan_id.assign("VDEFLUKMGREYEYGVUWDTPVMIUVMBAEGANZCBJUKTSKZFOFMATCPQYOCOWKUGIZJWCCLPAXISFKRQOGFEHSJDWAXHOERHITTLDHPAYUNICINIWNENVDYDQIVMWELJTHVTOKXXLIXYWGWFSZSRNRRATHXWGPQZVHAMYSOJFHHOCBYQRJLIZXBX");
    msg.flags = 32289U;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.00216464916123;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IZHETJBFRIBADJKMQPQYEJYYLNALDLHXCSWNUKQRRCBCKKERXXGNZXDUWIROOVALIMQOUHTQJXCBLMVQTCCZLKGZISGBYMSQLUFJMTDKNMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.658874288108);
    msg.setSource(34777U);
    msg.setSourceEntity(200U);
    msg.setDestination(36819U);
    msg.setDestinationEntity(118U);
    msg.state = 185U;
    msg.plan_id.assign("QARSPDZMDDDKSNLWKAWRDNKYSVKMFIJRSRMV");
    msg.plan_eta = -1295251902;
    msg.plan_progress = 0.266744215409;
    msg.man_id.assign("AQBYBDWNWRGDAPSHXWCXSPFOIRTZTTGILALCODFNKOLHQCZZWECBLLJXPURBFEPXKVIGKIYKZRDCEBQYSXAPFDGPRBPMAXHYMJYTAVVWMHSIYUMHWERPDIOHUGCMQEQWRNILKFMQVOUNHYAVZSVUG");
    msg.man_type = 31648U;
    msg.man_eta = 1243764514;
    msg.last_outcome = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.295209183819);
    msg.setSource(52800U);
    msg.setSourceEntity(51U);
    msg.setDestination(42893U);
    msg.setDestinationEntity(22U);
    msg.state = 235U;
    msg.plan_id.assign("NKCZSDJSGHXKWNMLHMUJMJKOKKAPCFXGSNJPZVSRVWUCNIYVVADGBEIVUQEUZRAHGLYRFJFEKRWPNCKGXUIYFTHYIQMRDCWEAHXUXFTBLRRNPOXHLGTNZISQDDQAFYXDUVWXRQIDIBBMIWVPHFKLNWMTQYUQOEUSPAVQJE");
    msg.plan_eta = 806938504;
    msg.plan_progress = 0.614753970743;
    msg.man_id.assign("ZADFVNNVYFCMCEBFOVRVDYMJLEXKEZWSLGQLSMLFHOLEDIYZIUGCUEKCYJSTRZHOODMVOGJSMVBRXLQVYRXLVVHLJRTJIKFMIUGAUPUWVZJCKXSKZEFSGKFFSCWHNDUQZERBAIAPFQOGSNNJGOHXIADPITOTTDBJEHWFPURUMXEMPDQQSYUTZKMONYLRJCZBBRTLXNPHYQNRQPNQWAKWCGWIMJZSAYNTPUB");
    msg.man_type = 45214U;
    msg.man_eta = 771370233;
    msg.last_outcome = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.663755249865);
    msg.setSource(34720U);
    msg.setSourceEntity(110U);
    msg.setDestination(54640U);
    msg.setDestinationEntity(178U);
    msg.state = 17U;
    msg.plan_id.assign("SMZUVBILWTSGEHYDAEVOKKLUJXVLDLZLLCFFIADEWFWTQKIPQUKNQHQFPUGJSKEKUHWTYDIRBPZWMXQONJFTNPVPDOZQTXKRFVBARUJFAWJRIWYCOGQAVMQCNIDNBPOGHHZAKKXQSELVYFNIPGTZSBUBXTDMQJWJPBXNSSZCFOHILDIMUISEFJRAJGRXCNWSZH");
    msg.plan_eta = -976495079;
    msg.plan_progress = 0.74486322718;
    msg.man_id.assign("MVYIFIKDMYKRKHOECSIYETJMBGGYXVHMKMULCQLXSSFWYXHZJWDEUQZUFQUVLVUZIVNDWBPMVIHKBBOQWEOAYQUFWDPFEQMJVTQTUROZIBNSNKSGKRVXZPDJPXLG");
    msg.man_type = 43903U;
    msg.man_eta = 1674326108;
    msg.last_outcome = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.0874997669507);
    msg.setSource(30198U);
    msg.setSourceEntity(5U);
    msg.setDestination(53662U);
    msg.setDestinationEntity(54U);
    msg.name.assign("ZTSEUROEPQQCIDMYBMNNFRSUBTGYJBESZKYDZKHXEPEMVAUKUKCLCCSPADRGLRPITGWDBYMKFEBOJKJJOEIFDYISENTKMQWNUUBPLPZWWFVBZXKGWAPMAVHDADAGJVIX");
    msg.value.assign("SLFUHYJCDIMBYAEJXRATSNFYFZSHRYWDDCDBXYESIELWTPEJOCSOXUTZRDUXLGAYDYVKEPQNWDBUUQOEBBGEVEHPTSTDDSQFIRRITIPCVTSMVLOGAHOZRCMOKCGFUIFNZMMYKVQPHMNQZIUVNXPLLCOHJMZCGKRSMXACGWDTJQHPZNUKAIVKELHHPKRJUXFWGFJRZVNFIYWFLWGOOBBQAMBXTWJYWVINBKZMQEHAOUCZXVAGSXLANJPWPLGQ");
    msg.type = 46U;
    msg.access = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.432594294908);
    msg.setSource(63513U);
    msg.setSourceEntity(239U);
    msg.setDestination(39788U);
    msg.setDestinationEntity(230U);
    msg.name.assign("ORLORQUICWCESFPVGRWEJDWFISSKGSYDKGCTGTAQJBPXVKIVDLPWKKOTODAOMMBHUVBSVGVQSMNTMWHAAEBTFZZJZPH");
    msg.value.assign("NUWVUZTDCWUSGBLUISGKIQVQRXBAHBAKZHWYXYYCFTHGUYQIVYHOSMBVRDJYJFYQDPQNJPRHPLXOLSFTKTTFVWRWPIVVNNONDXZAQIMMXHWUEUCOTKMCPPKYGZNQVEHZDLOGSJMMJGTXUNSZJQLZEIGRXOATGAUFJCNEIWQYDXLTSIHKHWDZQURELAPDSEBJXENGCBBXYKPRRAMWBVCNMZLIHDOJCFCFZAVARAPKWFJCSTL");
    msg.type = 207U;
    msg.access = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.478396222324);
    msg.setSource(36877U);
    msg.setSourceEntity(36U);
    msg.setDestination(25636U);
    msg.setDestinationEntity(40U);
    msg.name.assign("QEWEDJTGWSGENZJQHFLQWIIEYRYNHAINWYJONIKYJRLPRDULBRBYEIVEUCVSAFRNXBDFKQGREYPOUTYASRBUICATUGOIXXWFJLTRGPZDDLOBHXBVKSLVSZDDGNHQQWDMJUTAMSZZHAMHUKAJZPOTJEPTUPFLCXAKROGCHNYVQUMMXFGKXXUXYMSCSVKHVWDPNRWOVF");
    msg.value.assign("VCWOPQIDBPTNMGDSKZTGEHEUKMSSOHINJSSULSPCHWYCEXSQMJTXYUYMZPMGFZUFTBKSZGNAFJNECFWQQHQFQUBOBOIBBXACOQSQXLNNVUOSVUXKUMDWFOYATJEVIPDHYGCGAREHGWHYWF");
    msg.type = 170U;
    msg.access = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.850662102497);
    msg.setSource(61687U);
    msg.setSourceEntity(150U);
    msg.setDestination(4198U);
    msg.setDestinationEntity(20U);
    msg.cmd = 94U;
    msg.op = 119U;
    msg.plan_id.assign("YQJZACNGTJIASISXZHYZPARNKTRKSPGCFFLILKHQAXGNYRKBHTOPUBOXWVHJOLJTLZMKSHKVCDIZYFYMJOOODCWFEYFJUDQBEBBTXNWFGPJFWGWPLSKHDTRGMPHGMVSCXMNTVDEAWCUTAULXOIDWPVTZDIAINVGEKSMBYYNJDIQZPCFZXEFQIWTRUQORSDRBJCM");
    msg.params.assign("CPFICHLOARGFGVOVJMSSHPGFOXWDONUHJWHLOSDGMBDNWZXQZSMRGAPKOMSTFGCSWZKLKQNTGBPCGCHDAMLAQHUKUBMJLQLSIRFYKYERNQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.0234317222961);
    msg.setSource(5958U);
    msg.setSourceEntity(185U);
    msg.setDestination(434U);
    msg.setDestinationEntity(106U);
    msg.cmd = 8U;
    msg.op = 216U;
    msg.plan_id.assign("DLLPVBJMHQRNTJOJZFDAUJSIGCDEHJYCLOYVGNWVTAJCXHWIMOTAQJTWXLIBUHHDUSAZIZZ");
    msg.params.assign("WMYRSFGJIHUMFUVNNSYSIREHHMZWUGPTLRKNYFCEYRLWBVWBQTZDXPJCBVNRHPJABHDNCOMJPTZWJOSTOENGOFRQPKQUASVCRZZCEUCBVEFTOCIXXPVKZRFZMPIIRVUGIVGAWDQUKTAHKKKBWCJOTXNQQLZDZJGTSSNXUYUQDOLFPFYOGUXWLYEMACFIRYCJTHSQESIENQWXLDGMDPXLGLLMLXAIYFPDJMVGHIYTNDHOMWAAQEZDABB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.971974326827);
    msg.setSource(49626U);
    msg.setSourceEntity(231U);
    msg.setDestination(780U);
    msg.setDestinationEntity(212U);
    msg.cmd = 221U;
    msg.op = 200U;
    msg.plan_id.assign("AXIAUWZBFPFOTGJUQZKIHZCEGIOIUUHNYNNXYHQSDBEUQXGJVLHTWXFTNFWOJUARFNRZRSAMIQSWLBGGVCYUEPOIVOPZMXAFPOMBDRMPNKHJWSZKAQJNJCVJANLJRMTFTZGYUKMERQYAIHDMAXLENUSKXBPCTKYDEGIKODPZRDOSELESXVBXEMKEVKCNHSDWD");
    msg.params.assign("LYLSSOBHNWKXCNBBSJGGLPWQHXHWZTUNUEICNKQEJXDPDMBADFTQAAVSMXQXRAUEATROILOQMJBPRNWGUKWTHIUGKEWIPGTOFRCLCKVVOMONGVFIJYVPFFCDWZLKHRBLZIAFFFGCPOUJWNXOIFSJEJMHAYQNGVDQRBYVPCPSMMYKPCYXANTFQSBEIKTJUBEHHLZUHDWXJKZVMVCENOYRHITAGUMXTOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.391570117486);
    msg.setSource(10223U);
    msg.setSourceEntity(239U);
    msg.setDestination(25089U);
    msg.setDestinationEntity(173U);
    msg.group_name.assign("KWOKBBVRYSMRBSZMCVACNCOBGUEGWYUWHDIMANSCQVWGOWPHGFHQUYLXBEQCIJEOEJZDATGFCRVXUFXEGAIZGKYUFFSWHOGOKDLPFQDBNZLKZUPUMZNIJKNIYAQTJFTIELUZHCBKDGMFYVNLBDHJMWJPMMWRRUOQNXTBAURXHVGWPOXNQCBPOYJCQRLKXRWNRLEPRMJLTXITKXDLDAEPFDESSSTVIVSSEIXKYSIOAVAAJMQZCZJY");
    msg.op = 76U;
    msg.lat = 0.866129342841;
    msg.lon = 0.339122581911;
    msg.height = 0.360430561004;
    msg.x = 0.0179839018254;
    msg.y = 0.689937906283;
    msg.z = 0.248617469186;
    msg.phi = 0.0527920425578;
    msg.theta = 0.00604255913986;
    msg.psi = 0.142754142956;
    msg.vx = 0.10385744044;
    msg.vy = 0.495558106705;
    msg.vz = 0.991379585227;
    msg.p = 0.802679014125;
    msg.q = 0.15241890605;
    msg.r = 0.688089639357;
    msg.svx = 0.31728144167;
    msg.svy = 0.354491153795;
    msg.svz = 0.564315438563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.915241820045);
    msg.setSource(59370U);
    msg.setSourceEntity(112U);
    msg.setDestination(12980U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("LONECXMTIKUHFYTIGQZGQRKODBSTEQFNRIHBXLHXFNTNHBTXWTNXDUSSQUMDCDACICGSGLMWPZOXPHGMVGPQBAZVCIEWZVAZCQHMKMUATDTSNASPHJRNIVEODYLYPULYYMAUGWBOSJWFVJVUCGAIXIBVLYKXEEDUZZJKFHRSZXPIDANPJJKZRXYFAKAIWOFONNYKOEVKEJLRBUPRYDSBROWBLMOLBQJQP");
    msg.op = 15U;
    msg.lat = 0.663919425544;
    msg.lon = 0.757329567747;
    msg.height = 0.231491393769;
    msg.x = 0.518323959911;
    msg.y = 0.659811521778;
    msg.z = 0.0823513120845;
    msg.phi = 0.924413411455;
    msg.theta = 0.622698380123;
    msg.psi = 0.83040078083;
    msg.vx = 0.535415927306;
    msg.vy = 0.227163588392;
    msg.vz = 0.500070316927;
    msg.p = 0.991984562096;
    msg.q = 0.502862467171;
    msg.r = 0.0293866364633;
    msg.svx = 0.419851127047;
    msg.svy = 0.209585703104;
    msg.svz = 0.581205381302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.253388609766);
    msg.setSource(39234U);
    msg.setSourceEntity(49U);
    msg.setDestination(1001U);
    msg.setDestinationEntity(140U);
    msg.group_name.assign("YDERWUPOTJBPXPKBWRTYKCACUNNDVQAIQEGEFQAXIRUHJAPMYVHWLPYBFGSYZUZXOOTUDTHSRXSGKZYJBSCOHMAFDNMCBIGJZLRKEUCRZJGXTWHGQSLDCYIJMQZNADGFVWZYQS");
    msg.op = 212U;
    msg.lat = 0.160282236404;
    msg.lon = 0.129923928852;
    msg.height = 0.105187035128;
    msg.x = 0.49011199018;
    msg.y = 0.364150097666;
    msg.z = 0.708815049407;
    msg.phi = 0.0122200331154;
    msg.theta = 0.681371553127;
    msg.psi = 0.816027694043;
    msg.vx = 0.901642671296;
    msg.vy = 0.702490755342;
    msg.vz = 0.127287536487;
    msg.p = 0.00287001721144;
    msg.q = 0.789550544624;
    msg.r = 0.98004102711;
    msg.svx = 0.303040402184;
    msg.svy = 0.939795156086;
    msg.svz = 0.684758645224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.106201362132);
    msg.setSource(44952U);
    msg.setSourceEntity(81U);
    msg.setDestination(1914U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("UVRJBOGHFBNGGAHCULYQKHUWXSLXRXRSFWHHGVERSSNQRUWJIYOCQLWFOGLDUIEQJQMWHZTNOCXSTLAIGPEFUPFEYLFCPHTYMPKMYWPZVYKSQAJDMYDCTNBPXNADFTAOBZBJQEKKXXKKJZOCBPNFKZTGHSIYGRRNXDMQTAVR");
    msg.type = 31U;
    msg.properties = 185U;
    msg.durations.assign("BMGXTWUGXFBVFHUWDLJKORHTSILEOVNZMQTUWKWIUHAAAADILLDJQWNHCDDXQTXYBUXWJOPOEVLGMYILNSNGOGHPUIMKZEUXS");
    msg.distances.assign("KRXMRLJQIGHIEDBKUIOSXPDVFMFNSNNXQAKYIZBZZIUMPQFEGWUAKUBJGTWONWSIKDJABVKGWUPFMYAEPRZSATACXQJXRSMJKNYZEGIBSCWLGNCZHHOOCTVUHBILTADFHGPQT");
    msg.actions.assign("VVIGCAUXDNQGDETEUJZMBFICYULMRPZTFOUMDGUIQZZCSGIBNWSGIWBVTXQKLYVOKIBGWGPVSEOTMXQETWLQXXDTXBERKPFVSXNEQYJAETKWOZTAFSAIAQNFBXSEIWUCHRTFRAWHPHJTLARWLKMPPRGMJHCJSCNBOZAJCILYVOVCZHVDPMHYXMDKUUERCZNLODBFZNMYBJQD");
    msg.fuel.assign("HOXQPPAADFEXCECUCYVGNOQJOLXFELXPRTEUZPBVXJEBAUFZASBPGTTEQNTTSHNYQQVHHMDILTBCHPDVDMJSOHKJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.317494525404);
    msg.setSource(55891U);
    msg.setSourceEntity(251U);
    msg.setDestination(12624U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("HIBYKSDVZQADQOWNRNCOIKPQCNYUYPPNVSMZRLQRQTWXNDYIVGAVMUFETAGSIZXMCSNXBXTRQARGCITOAUHKZYUVZJVVWSDTFGCDWELGNOGKXDXQLSHJTUXGZJCEFESPDMYJNDRRJXHDDSYXFBJSXHAZLTKUKIPNPFLAYWWJKPUJLOOMEKGETZRQBIRHFJBFTLIEVAGHALOZWEVWMOHAPSOCKLWOPFUFHIVPBZYUMTFEEBKYNMIMBB");
    msg.type = 185U;
    msg.properties = 11U;
    msg.durations.assign("ZUNWNEJUBZOIQXKNUNCIHWLQRFSGKVINWSGBBWHEZGHOHOOLMJRKLUEPYLKYIQXMMBZLWJFIISIPUVJDGVEVFYTDTQFDQREDHAJCOUCCOQTGALHLXSTFPXSMNIOSEGMVRZGEVQKMPXRGZJBINOWXSCFTQTDBDBVVHRZCNDAHBDKDXKWYXBATLCPABMYGQVRMKMCAUYCHJTFGYAPEEFWCKFZTRNPDPJRLYNVYSUJORWP");
    msg.distances.assign("OLQHBFPNFXLGXVETRSCZKURIDJPURIIDSTGFMWLFZCPEEVUOBBLCPOKFHXGVOLSJAXPDVGIDVQMBDXOYCRMDTAZAAINRTUHNLUWQJCRDWTAFTQBHQXMNCXGORAQOVXKPLVHVHVHWZFZLJYSGFEUJCMCQGGWYO");
    msg.actions.assign("SQWLEHMLSDUPAHRUMMIOFAEPLXOZHWOWFCSHNXIWBXZUBOPLYAQQRBAOBNVIKREYXFHWNOVEOHAAVTXEDQFSYSPITTKNFELLYXDIFIWCKZGGJACEAGVTUDASUGJXVKZQULWKYVQVKVUPTWJUVYCNZMFPRCYMPLUNHLHMUBWCDHZJGCKBXRYGJENXOIQFPVSXDRWB");
    msg.fuel.assign("UKFVWATMQQFRNOZRBXKGVEFJXSKSUPNLFPDNEIVLJVTJTLHXNJAHEDUWEIGFVTMWPMQCXJKSUZLMCWTVWIOXDARMELLPLOPEAUACXAWANYRTIFCMAHLKSSORBVTGIDIBGPZZRMQYFZDMYXOOEYBRCMYLDIJYNFDHKYQZXKUKEVNXAHVHCRMGSPIIBGRDPEPQSFIWZG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.603075251158);
    msg.setSource(16939U);
    msg.setSourceEntity(213U);
    msg.setDestination(43542U);
    msg.setDestinationEntity(121U);
    msg.plan_id.assign("DLYXFHWEJPGYUEFEPAMHTZIUFVMNYXBOGIOCUGWQPKXSCINNZDKZBENEZNZRBFTALQGTNTQBDDUNGETHCMJVREIEZXLWQMGPGOWVFTWVYPDWOSTAOXKQPRMBVJWPGLQEHJRHPUUQOCPSXSTLALMQDAWXFBFZUBUIYVHRZHYJCVOYOLOIRBTAKHIGSRSANSJSYJQKFFXXDSSDVKUFWGRMHCTAVXIKMNCM");
    msg.type = 170U;
    msg.properties = 172U;
    msg.durations.assign("EOFAJHHYOWIDJUUFDZBZVWKKOADUSEAZZPVFVVNBIWBOYLUNKRJRLGJHWGQPCQTGKDMLIDYLXGWMLOQUZAUQSFVJJPEFPKDTAWPBKHSPZTHUNIAJHMAMZGBQGCSNYAKKCXRGNIFMCANWHFOXBYPGCUOLMPLUQESDJXTPKVISGXSIFVMQEBDXXVJTFBJYNE");
    msg.distances.assign("CBHIGFJHCEPTCRBVDGPSSSBOIWBMOVIVTQXMWGPWVMDUHNJAHKRKAJZECMCFMVUUDMRPRUOIDWALDKBEOE");
    msg.actions.assign("BVKJNKBGDKHQCCRAEICRCMPBHTLODSXCIXAZGGOQYSTDUWLOMOCBUMLBVTONJPTHEWAJLSKKLMGNIOXXTSRVLFYMBEYZJOUALQOCHFEYPSDKIPMWZUTEATWFBBYDHEBUNAXWKKQXANHFFFCYGQIUSOPZGSCRWIBHVPVRUVZII");
    msg.fuel.assign("JQBQZTSPCRVAUISQHFPYPTZVLEGDGKMMTJHOHSZSNYYQWCVEJCCMPGEBYVANJCMSSIFOKRSAFGKLUHDCJEZRINUTEFZGAXRIAFQHHJLANRTNVOTEWQYWWEIIMBOWXOARKJFBMIEDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.228292946347);
    msg.setSource(39060U);
    msg.setSourceEntity(184U);
    msg.setDestination(16466U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.451861937648;
    msg.lon = 0.739909970869;
    msg.depth = 0.177275514454;
    msg.roll = 0.746953373534;
    msg.pitch = 0.658803772349;
    msg.yaw = 0.22314007368;
    msg.rcp_time = 0.768933814366;
    msg.sid.assign("IZDZLWVPIMYHBVXCKAEVHLVBVFWNXMJCRDSJRTFNPKEJOIRBQLKJQOTGVAQCSZWCRDENKECFDHZTJNCOXDXTOEEUORCONDFKRLFQGKAGZNZLDORQSWMRMFXLHBEKYJVLVDPQAPGNEOIPKQUBPGTWPFAJMVWAHBGMFXNLNMAUYGUBKTWXKIFHGUYPIYOLEMYUWABPXSPTOUQRXSUSHCTZMIF");
    msg.s_type = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.314471093259);
    msg.setSource(16097U);
    msg.setSourceEntity(197U);
    msg.setDestination(51343U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.25821893096;
    msg.lon = 0.334300594938;
    msg.depth = 0.732665590512;
    msg.roll = 0.127343020501;
    msg.pitch = 0.584953166513;
    msg.yaw = 0.0491957590863;
    msg.rcp_time = 0.859016520389;
    msg.sid.assign("TVYAEGSNPPSOTPCPHADFMKIABOOFJWBYCIEKZZMIIWDHFYSYJBARBZRTRK");
    msg.s_type = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.713790094392);
    msg.setSource(5577U);
    msg.setSourceEntity(45U);
    msg.setDestination(64001U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.22794775247;
    msg.lon = 0.726781721606;
    msg.depth = 0.480482004591;
    msg.roll = 0.392823427292;
    msg.pitch = 0.501746199277;
    msg.yaw = 0.234744282365;
    msg.rcp_time = 0.367910165153;
    msg.sid.assign("DQZRAHXPOAANXYOFVQTSZNGCAVATXJMTRXWYVLFIBURAFEBJLQCQXWWQWOE");
    msg.s_type = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.632671494258);
    msg.setSource(52342U);
    msg.setSourceEntity(229U);
    msg.setDestination(61518U);
    msg.setDestinationEntity(146U);
    msg.id.assign("TDQDUKVOPURWLHUZXZBJXMTZMRMOONVIAFEUGLMWNLTNIAMLHANSQESMLSKUPSCVXVPDJUWJNOLGSBROOMWBPNQHSIHWFRNKKFHCQFJAPXWDGZETEYTDIMPCKADHCJEVTAFGECXVNEZYBGDRQXIOFXVRBGACYXDECGUZLJBLYQVKEJSYFACZNP");
    msg.sensor_class.assign("LPJIKZSCEWJIAFAOTQSPBADULAPSZQBVCCNPDFJDROUBIRGOEYXRCFWVCFUXCOIOCQNFLTBLDHVBEMGTEXHMIKDGXWEEPNTVFMYPENZRMJPTITGXXDOQBZJVYXXSOWZMLBNOWNUTHREXHLRLTUUUXVAGJSSDWBSMGQZFOCRYFRNGPAAWF");
    msg.lat = 0.986418741238;
    msg.lon = 0.812374828403;
    msg.alt = 0.788761842926;
    msg.heading = 0.123422369888;
    msg.data.assign("UXOUNLNGHRBKPKJLOSXNDQAYDWWPHBOKVYEDTMQORBLGRDWQVZCZVUDEAJTNUJCZBACWZFBEDPWSJVICCMFLIOPGLELXLPUKJEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.824637287303);
    msg.setSource(3476U);
    msg.setSourceEntity(121U);
    msg.setDestination(24274U);
    msg.setDestinationEntity(1U);
    msg.id.assign("OOCRXPWTNVSWPOLOSCXRHQWSSGUSLIFMWUHMHMGV");
    msg.sensor_class.assign("RDGVLWSVBSQEAHCZDQIKBXSQFHGTYIIDZRAXUIVFDPTKAGNZZCWGZLKKTWBTMKHVMNPWSMMSNAYD");
    msg.lat = 0.862441105912;
    msg.lon = 0.634237620148;
    msg.alt = 0.995343669606;
    msg.heading = 0.87207056386;
    msg.data.assign("CLVKJGROPYQYDNYWWRXQPRUMQKTHIPQINXBZHLTWEUIYZUJISPIOEJBDHTWCACMFRTXHRFSUZHBTZEYMTQBKNZENRVUVSYQJWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.376601076616);
    msg.setSource(24477U);
    msg.setSourceEntity(217U);
    msg.setDestination(6448U);
    msg.setDestinationEntity(112U);
    msg.id.assign("KOXTMULIYGWKAVNZWKVXJNRYRODPHJJMBTILIOWYRFKXZTVLCUEWAVBPNZBUSDMYZGNQPBUITJEDNFXMHWZQETUHJCGHGKWSJHYKFQUPRBRTVGDOCIPADSJTCSFPDNOECPXPRWHFQASEKVIXLDDCAMHJSSEMMUVGUAMEKLYCWXTFENDVHLZATVHZEXXBIHSRBQBUVYBGKOWGQSWXEQJUFTASFLJIOPMFOIBYOKZGQAAFLQNNDYRLPIZNZCMOG");
    msg.sensor_class.assign("FAFOOXVELPKWAZFYNVZTRVHZPAOSQPKPTFGGEKUWABQVOLBFURDQGITMIJ");
    msg.lat = 0.495777169572;
    msg.lon = 0.910696695495;
    msg.alt = 0.144639754929;
    msg.heading = 0.204764455359;
    msg.data.assign("GDYXGTVUAPVLZCLWGOGOZIQWUWJDELGOVWRNQJSPXBEHZLPKCSUGHMYVJURFNZRMOHSGPPZDSHTOKPKNTIOXJDYVPMTMJNNHKDZIYGFAJCIAUEGPWTQCSLNZZUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.584050319555);
    msg.setSource(61599U);
    msg.setSourceEntity(98U);
    msg.setDestination(51361U);
    msg.setDestinationEntity(72U);
    msg.id.assign("BXFWMNFEMMNPEAHPQQHVMGZIEAGGXZGXKSLCGKNYRCUFNVKOXUJXWWHAJTNQMGFTDSPODVOGLSSOFWBWDNKHAYISULEBSCHDEDQLFVOPXLJOKKDBUREUIERPTPJLFDMDQGRZQYTQBBQKYZUXXDBCOZHZVFUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.900251254238);
    msg.setSource(37383U);
    msg.setSourceEntity(129U);
    msg.setDestination(8837U);
    msg.setDestinationEntity(38U);
    msg.id.assign("CTKGFEFZNHRREFIWQBGVCXUCKRQOPQEPTACNJCISSLAGCYVLFKCYPAKRWTDCTEAQLXOMACEDDITVRHOBJSARXNTLEGUGHKXWWHSNBLFIJJWZKFTDXOQPZHMZSRXILOFDHLPEXQHZJMEAUTPMSZXGBVBBHXTUWWYJDNVLSNQRGBJVYWHVDGWUBIKREANYMZJZOUZIFODQINJJKKLSMGAAMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.813261452618);
    msg.setSource(20171U);
    msg.setSourceEntity(137U);
    msg.setDestination(7582U);
    msg.setDestinationEntity(176U);
    msg.id.assign("FTCQNXZBMKQSXMNYSVDCBVWTGUV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.375328083916);
    msg.setSource(65207U);
    msg.setSourceEntity(125U);
    msg.setDestination(60455U);
    msg.setDestinationEntity(47U);
    msg.id.assign("VYLZWBEANRFDZGJVFVIVWILNZCELKHMAQ");
    msg.feature_type = 224U;
    msg.rgb_red = 18U;
    msg.rgb_green = 105U;
    msg.rgb_blue = 54U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.14510293339;
    tmp_msg_0.lon = 0.0872847228414;
    tmp_msg_0.alt = 0.117432073124;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.549787641196);
    msg.setSource(43147U);
    msg.setSourceEntity(70U);
    msg.setDestination(38960U);
    msg.setDestinationEntity(81U);
    msg.id.assign("YFGMHPRTTNPJZTBJKPCNLKDWDOJSYVSNIVOSODMQAJSHLGMIAMPWWXXEBGLQPSXWWABHROOQOPGNBLCDYBPVORZMEZYEQVIUXFSTZYBNOTCPQXTLVNY");
    msg.feature_type = 19U;
    msg.rgb_red = 94U;
    msg.rgb_green = 247U;
    msg.rgb_blue = 97U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.175188027262;
    tmp_msg_0.lon = 0.538827042798;
    tmp_msg_0.alt = 0.071605251265;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.661499459581);
    msg.setSource(15340U);
    msg.setSourceEntity(19U);
    msg.setDestination(41876U);
    msg.setDestinationEntity(105U);
    msg.id.assign("ITOUWJWDHLSDCCILMIANVONSSRCFFZENSYVVATNCFLUOYKYBVRQMHGHFUWQTAMPTBSTNKORHMDRLZFABWMQEDXXLWJGJWQZZCZYVEPPNOOUVHQCJKSOOJZKFRUYZDARIXPWXWSGQYEKSGMUWFJQTDFEIAXGHPQJGDWRTOHMXVIAVTOKBKZLDUPKJSXCMLYLDGHMBZTRYPQPNLNGTEMDIGUUXYXHACBHIRPEKXZFNSQ");
    msg.feature_type = 107U;
    msg.rgb_red = 91U;
    msg.rgb_green = 51U;
    msg.rgb_blue = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.40308484333);
    msg.setSource(607U);
    msg.setSourceEntity(187U);
    msg.setDestination(8071U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.881155980206;
    msg.lon = 0.892150808587;
    msg.alt = 0.865307324383;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.204385477835);
    msg.setSource(37965U);
    msg.setSourceEntity(93U);
    msg.setDestination(12274U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.940760410029;
    msg.lon = 0.0229366426364;
    msg.alt = 0.0658620712522;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.561036699284);
    msg.setSource(47750U);
    msg.setSourceEntity(27U);
    msg.setDestination(33348U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.692505014613;
    msg.lon = 0.703406372624;
    msg.alt = 0.19648644849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.171207557664);
    msg.setSource(2195U);
    msg.setSourceEntity(228U);
    msg.setDestination(15287U);
    msg.setDestinationEntity(146U);
    msg.type = 140U;
    msg.id.assign("FEDAXFGPZBOUYKPNQZVHDYMOHTFHDHHRQVDOIQMNGMRSYIMKVPLFZUEPUMITWCXSKLKNVBXTQOSFBEQXAJXLRADAKBOCSTGLCGYWNNFHKWRXZTPWJBQYKRIWIDDCXNNJACJCNORVTMDLCKTBHIGOWG");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.206410193957;
    tmp_msg_0.lon = 0.000610352351801;
    tmp_msg_0.z = 0.717279183312;
    tmp_msg_0.z_units = 203U;
    tmp_msg_0.speed = 0.214767516585;
    tmp_msg_0.speed_units = 171U;
    tmp_msg_0.takeoff_pitch = 0.52425005103;
    tmp_msg_0.custom.assign("IQFPSTMHKLLMMBEIOPNVQWMMDADRLDWEMZOWLNRKNFPXJQTXPEYCGBFNEQDVGGYQQTWUJKJSXKHYZLFDAELJIUCTFSYHKHYGWRHFOGDJDPVARAYXOWNGHHOZCKRXBZKGVWUTPDOCXXMYKBXZAWMCOKJTUQDRLNSZGBNJXVBCGRKNXJRHIWCCRLGZHRAPBBOAFUQLVEOIFJUCALVES");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.250556999353);
    msg.setSource(16515U);
    msg.setSourceEntity(146U);
    msg.setDestination(691U);
    msg.setDestinationEntity(253U);
    msg.type = 183U;
    msg.id.assign("MNHYHKBVULAIZCJFVFKFDWXRYWWCUTJXBKYLDZFTRSBMVAVJOQYATACNKQEHDWWBEHVIVFCQTFKWDLDOLIMIEQNBRYZXISHAJTRNKJYDJDESUGDUEZUVTTCJHNGKIHSLEUNAMLQFAGWYBUYGAGGOQPRLMEHSLJMPVOOMOBXZQRPMXEXJAIDTHPGYZQPSPWVSY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NMBOIGVPZTYIZKNKHTTHIQCCWFBLHBOZZKVHUJP");
    tmp_msg_0.value.assign("ISFROFDQGGVRIJDGVQWMQBWLPJZZNNOAJLOBCMMWMYQEGQCTDKUIGPDVHTXTGMKPBQHFUZMVSNRPKNSVPYWTUUBTIAYZLMUSDOEWXBPQEAHTHBXINYUUSBTEOTJCULWRAIHVHCFRELWNCXYYVJSGHMBXSCPRSIILZACREXPNEDSARIKKYGOQFZHSPDCVBAVRYNYKOGQVYXFUDADHLAWRFOLJL");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.73885729054);
    msg.setSource(43982U);
    msg.setSourceEntity(111U);
    msg.setDestination(45165U);
    msg.setDestinationEntity(175U);
    msg.type = 247U;
    msg.id.assign("FNXCRHGXMWUQBLIWDTLYRPNLBXDSCLUGTXFKHMAXRBXJHYVKYPTWWEZIDYWCOGGEQFUHHLYKQYOQESNCVSGXURCSZNIOQFQNAFALOGMFCCWKSEPKKMRIOQDIBKTIJIQHDPCAJMVAXNWEJOSJOOSJP");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 239U;
    tmp_msg_0.range = 0.340079323027;
    tmp_msg_0.acceptance = 179U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.10525564582);
    msg.setSource(59787U);
    msg.setSourceEntity(72U);
    msg.setDestination(11763U);
    msg.setDestinationEntity(179U);
    msg.localname.assign("RNZCHKLJAQLSTUKZUTWTXNNNMSXUIUIUPPJFSCYSAVDDULPMJGHQQXRASQBIQNWBGTOASAZYGKBEEVOCXKGIDBFFAOQOCJFVICHGYHUJEBRWROEZVYZGHDOYAVPEHKPNFBXSLMWKSRMCHNLMWYDETGFLPXQCZMDBILEZWRCTXIFNTIOQKYFXVCHBYHXZWVXTWVULDRLSVOJWAKWTJEQVEOIMJKBNZMRNJCYDHTFEYUDMOZDJUFQRSBPAPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.144022166546);
    msg.setSource(47237U);
    msg.setSourceEntity(42U);
    msg.setDestination(8722U);
    msg.setDestinationEntity(110U);
    msg.localname.assign("UJIEDEXWDOKBPIDLRTREIUBQARNGVTXUZDLVTECOHSYNMQMKCWLPIRENCGRRXBFPLNHASLFPFCPZMPMANHBEJJIJSSTJOCBKGPOUDEBPFHYLEQNODIGWNSHGSXQVBJSOYMNKPOCYDASNLWHRXUJCFMQQZMVSVJQZKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.179967223528);
    msg.setSource(16302U);
    msg.setSourceEntity(171U);
    msg.setDestination(23552U);
    msg.setDestinationEntity(159U);
    msg.localname.assign("EFADWIFQBZCSQYDSHFKVCPUWYJHTJRPTLWOIDGTYRNGNHXGZAYFJWDSQASZUOMUEMNFXDPBJGSWIEDBZBCJMBIVEWCHQOVROJXOPKWQWYLGQZDZRVKYSOUKYVKIZEZMWUDCFJHLAVRMLCGBIVRQWXOLZRTPUUNHAFFBICEIMGTKP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DABKAIZMPTBLOCYSWJTVJKABYLQJUXJMETSLNHUCVLDPGLHEINARMTTXZUSHGGLIXSUPSAKTSNNXYVFIMWQXDHOOWEPWYQNIGSDLOXXQGCUWSKRPWHZT");
    tmp_msg_0.sys_type = 75U;
    tmp_msg_0.owner = 6241U;
    tmp_msg_0.lat = 0.234477073022;
    tmp_msg_0.lon = 0.830055949738;
    tmp_msg_0.height = 0.594427030679;
    tmp_msg_0.services.assign("WAJRICLSDKVRTBAYLOCLTVQKZMNCDGCRQIMCSTITRDXWHHKYRNRDUYNUXUFFQVINSCYZKPJBVSSRSUSJUAJOHMCBAGBYUVNNFWMYABMEZXXMMGYXDGWGSPHUEOHZOVVOPDOLZTGKPHDEGXRQLPQFRNYBGTTZNIEQFBTUXUMPLEHXVWKIZECJDEVKIFSADWHKQWKJURQNTQAJBPJJCIPIXFKZZJEWFSPZPVBIC");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.591166548094);
    msg.setSource(1174U);
    msg.setSourceEntity(9U);
    msg.setDestination(50218U);
    msg.setDestinationEntity(28U);
    msg.timeline.assign("GPAZQRVPFHUYCTOSYOUWQMQGFLOETFBWLHZXJYWSJSIIJHLEMQWDISKOTBIUDAGKVNFEHCSOIBKAKVRLJSQCVJMWJXBPFMXNXNZPVYUKNCVAJCWEWEUJWELZAYBDPWDDTUGMJK");
    msg.predicate.assign("CVXLLHHGBITQZJQRUHVVSTVYXRYB");
    msg.attributes.assign("XRORPLJIHKEERQAQWSSOWFTWBCDQGFJLKANHYEQDLHKSYVTYIQEGSZJWRIVTWDGBLPJKSGBFVVPKRCODTAXNWFAJOIUZYLUHTBOFWSZDEYLNFZPMAJCRPUIIILNVAQZTMPQUNEXEHNBOFIGFMZOEXGGBILSMVNBGIJOVPOXSASQXBRZPPADHCMXGZVWQKKLBLWNWEUXHTOSKKKJFYDEMPNFCXUTRYZZUJDHUYUVD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.827244443898);
    msg.setSource(58942U);
    msg.setSourceEntity(51U);
    msg.setDestination(5406U);
    msg.setDestinationEntity(228U);
    msg.timeline.assign("FOCZXNLKRZGBVNWSALDTKZYQOUDVPANDCTEUNYWFMNESUOEPLVFYHYVMWKJRRYLQOISHGUZIVSTZHMSQJKBJMDBDDWCIWHUUFOLCCRSKNXAGJXTJFKGBBQLCCQANNQBTJPAAJZSQHMDRZIGFLKQTXICFJBTREVHEJJQIYRKPAOXXHUVDGOAWGHZYEYPKVRDMIFZPSBABECOMPLCIPAGTWX");
    msg.predicate.assign("UENUSPWSPIXYZ");
    msg.attributes.assign("IUJKOYTWVQGKSUJILAHIMZJKXJHTWSBOVYFNDUKEEWSSCPTLBVNEZEFPAOOGDMXXZXUCZGUDRYXPHLOGBDITNHRVLMASWCBECKXJZTF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.00478591845094);
    msg.setSource(15745U);
    msg.setSourceEntity(22U);
    msg.setDestination(28366U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("ABDHSDPKWFTWUNBBQLQTAWZXWGMXYFOQPWAYGGHZEQACHHCYVLPGGKOMFGJKEXCQLKQFNBZCEUKGRIIWCRNEXCBZUOGLDLODQTMWQKWAHEFRUNQKEKGI");
    msg.predicate.assign("LWVBHOWEWDTKLIJSFGMOQOCBNXHJAMQBTC");
    msg.attributes.assign("SPWIOBHZAIQEYNRGMBDPYNJHTESROWUJXACZSVKYOWVVUZCKQLSSUOXPJNBOBKWICLEXEFJCPLCITDMQLSQRRTSWTBJUPOLZTWOGFEVFAKTHNWRTPNZPON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.256667135321);
    msg.setSource(13058U);
    msg.setSourceEntity(218U);
    msg.setDestination(27973U);
    msg.setDestinationEntity(148U);
    msg.command = 29U;
    msg.goal_id.assign("IWQGDIORTVUVBQYLILNJAAVDONAXNLVMGYZRIRBIPLKSUKBIGPYGCSPE");
    msg.goal_xml.assign("QGLBJELMFLUHGLAVMSJUKJZDLRCJIVRNCZDGQNTTPAHPEUHEWZVNNWASDFHGRBKRPCPDQYQSFKHWJYORXNTIGADCIBXQKKOIZVMZORXQAMNYPXGBHMTFWKLJBSEUWMAYVGPEUVIIWSGDHSCVCTBTZTPSGNBEYTHXFVMCRFSWXDOFIPYQUMNKLSYJUGHUYUCZOLUNZQQXDZRLPQSAEDCMFEJOKYLVHXAIFBEOJRTTJRAZEPOODXXWICBBIKWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.640996537918);
    msg.setSource(61622U);
    msg.setSourceEntity(218U);
    msg.setDestination(40334U);
    msg.setDestinationEntity(125U);
    msg.command = 189U;
    msg.goal_id.assign("RYCCTKDJVXQAKKHNRLESOZKBGYSOTGGHVFWILCKACRMAPXXMBYUBVPQMYUNUE");
    msg.goal_xml.assign("KQCVGSMEAEOCDYEMXCTRUZHVCLMYXNPGIPCDYTYUJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.410774111876);
    msg.setSource(11215U);
    msg.setSourceEntity(117U);
    msg.setDestination(52422U);
    msg.setDestinationEntity(227U);
    msg.command = 221U;
    msg.goal_id.assign("UVCYAPCOHYTDFL");
    msg.goal_xml.assign("GMCKRXUVIKWDLZLKSABXBUAQCPCUKZRTPHYZFTUGHMCTKGOWDIPLYFJIXDYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.492250668527);
    msg.setSource(14062U);
    msg.setSourceEntity(145U);
    msg.setDestination(15413U);
    msg.setDestinationEntity(5U);
    msg.op = 18U;
    msg.goal_id.assign("TOTUAKOYPVYBNBTZHEDWXXSDOQBZKMBRJAPFPYJQFACDWDUHZQZIAAOSKVMRVZMPJDGBMZBHKHSXBBNIWQREOJCWVIIQRVGGEGIKOEJFRZRHFYTECRDOFYZLNNPYWTPAMPJXLLSEFMUSDXLHITRTXSYCFZTLJCRDJUCGWEQUKBGBESLWPVCGUFCNQXXSAEPFYRYNK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GVIFEBWJSRIUJOCKODWMZAYXKNEUTQJTOXCIUGLBJDXVQXXT");
    tmp_msg_0.predicate.assign("ANUOPJZESVFSDRWYDKDLASILJJJQZOCNTHTBUOFGDJHNUGFEKPNYOIVRDYKUWCYRHXWXEZWAMFHNAOYFMLNMKOGRBYLFXHOESFTBDXCMDLRCJDMORMVVQWVEWYQIKAKPPYLIGCHVUTBXRSTZZKRSTQIEFXSWPGNAZBIHMNZQPLHJGUTPNAMTQVWZYWL");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.309163487827);
    msg.setSource(32793U);
    msg.setSourceEntity(246U);
    msg.setDestination(28586U);
    msg.setDestinationEntity(86U);
    msg.op = 91U;
    msg.goal_id.assign("RAPZMOROUOYTHQJHHWCDGAOLWLBCNODCAXKLTNSPYPAECLXPSVZGKKZGNUAESMWESTJDHXUTCZKTMFNEEADZZUSMINICLRIMSGYBJXOTIBKWCQUKIBQWDZJBSNAFFSGPEIPHVHXGVUCBROVUYGDCXLMPSLAJIDIXCFHIVJTKONYXTQFEYADUEUZJDQHPSQTNOZRVYKEJWBRRMWTGNZRYYJBBYVF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NQMVUNYTUVNXNAXJMISJOAKFHHCVJXIANEQUKQMBETVVSNKWOYRSJOIQBJLCCCDICSDBTQGPUMGQKHSDIOYAFJLFFGHTXVRWXETTWDXNYWZHEFMBVGKACHKSLLGBEEMFBJHRUGXPBDZPURYBAFPLHYIGJCXQSKLWPIMJUNDKFWEAVGTZDPEHARWILQTHKO");
    tmp_msg_0.predicate.assign("ACNRLHMQZMVKOKENWAJEWKEFGWBACKHDRGBUXVLIOSXXDIHNZTGDFCQNCZIRBEEZQWOTEAPQWTSJVTPVIKMLYZBVYOGZYTQGFPMZZWOXREDUKMQGVYDTDJPVUKFPVMPDQCFEDNXXBMYEFFATWOKSAXXNSSWBSLZUIBNOASJVKIPLOJGUHPTAPVRHYEJRKHRQYBIADANWLHIMJLLIDSCCYNHCUBHFFRYUJQIMOROMGFSGBUCXLNJJT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IETKMXSHDFGHRDTYUPKXZKCWOFBXYYNTLRKVTHOQZFMDMVHZLWIHFKAXOEDSMRUGSBFKXNCEIQJPOHSUVIFJOPIWGLQWCEJFVTDJBFNGBEMTCWMGZUFFQLZBENDQCBEAPXTJRCSHVXUQPXLWSBGOUVJEIRKZGYPIYLWQAJYNXRHVEAWNCRVALOSTOSDAPYNSZWAZCBLKIGMJIZNMAZABMPUCTQBVR");
    tmp_tmp_msg_0_0.attr_type = 127U;
    tmp_tmp_msg_0_0.min.assign("XKCWKGFGMONZIONIRQLOYDYRQMUEETOIHXGEDTPSZFSLSNZJUKVRZUVCDTQZOZVUOHAMDDRIFYAFXBBIAQGTSSBJJQTTCFDORMSVITUPDYKVNBHYRAQOOTNXDNHTKEGZUEZUPSIECHLBHAEXGLMJBKRRQGLPJOKCFXAYQXMEWLKAJJHGGUKLANWIIPLVIVWJUUBXZZJRBNPWDSGPDJAPCMPCPHQXBYXWCYENEWBMSHYCALWFWCMHFMNS");
    tmp_tmp_msg_0_0.max.assign("JXIEAQYOYNHWSODWZTSBXWPZBSINBIAHZXRIBTTZEMLKJPYKQDOFMNOSEKVI");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.564660548573);
    msg.setSource(10437U);
    msg.setSourceEntity(237U);
    msg.setDestination(14684U);
    msg.setDestinationEntity(248U);
    msg.op = 48U;
    msg.goal_id.assign("UCXSNOBYCKMCFQSKHEVPCKDCKTSUCJAPDSYUBKAKIWDQGNBDXRQTDETQLAEJLW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HJNKUFWJXXUZIQGQTEPPKKERHQUZTRCXEMBAUWJYMODRIXMVHCVSPBPCRJLYAGAABRFLPLSEYZNJSIMGBEIKACSBRQYZLFAHFVNTDOBLNOVDCXDRGOZRVTTYUUXMWIDAKXZNYWYUQYWDFUXKJDSQRGOE");
    tmp_msg_0.predicate.assign("XOCJBLOFYACPAXQASEGHLJXURVLCPUZRYKTXAJVVJIHVWUZVQFNMIOEKMZZXMUCKKDVHSCBQIJZP");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.910047220754);
    msg.setSource(46416U);
    msg.setSourceEntity(37U);
    msg.setDestination(43071U);
    msg.setDestinationEntity(75U);
    msg.name.assign("RTXDRSGYTXVVJZQGOZFWMEZNJLTHKUXVYCZPBGCKYCYBDWTCMKKHECTYXTLFPAGPCACRYEFLOIRDXYCHWZIINHBAPDSFJALHETVTZBJUENNVMFBALQSGU");
    msg.attr_type = 77U;
    msg.min.assign("FGVYGDPJQPQSJJIESJBRTGKFSBYBLHLJJQWTCGSPUDSDTHDXAPTEOUJCUSBZJQCKPAXVKVYVFBVFCWLXQEGVMCMHHEQGNCWRYKNFLCWZNXIARHKVMJDTLWENEAUYIXBRTPWGTWKYZRSBHPUIUHIZNVDNBRXOXCKFPRXE");
    msg.max.assign("UAJJQLUVYKHTCGCTNVPFGKYMXCTAESGIHKTYGBETXDXYDSCIQIAHJLWNQSQHRFLFBVGQPBNEFYDZNKBNERDICPESMLDQIUVWZHDOMCUYAGWRUKBJEJORZHHXRLFOZAIKPUODQGRLJPNMSPMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.962799103828);
    msg.setSource(2593U);
    msg.setSourceEntity(11U);
    msg.setDestination(14850U);
    msg.setDestinationEntity(232U);
    msg.name.assign("BCXFWDHLYZTIGXNAGFSVEQKPMJRMSKMENYDPPDTVWJMBHUHWXEABDJQJFIYDWBJOOUKTIPQATIKFEOGWMSSHEYNPQDEXCKWXARIBCSGSTARKLUOJFVLOUZXKBALZWJIZNUAVALLHHQLIXWVOKDQACPXYSUTTSZVEFOZBUTGCIYVRTGZSKNBNDBYMJQCHOYGCRNEGVQCQYBVEMRRMUCVXRFWTHZPNRUOYWM");
    msg.attr_type = 145U;
    msg.min.assign("NRDYSHJZRRIOGFQPICVZWYJKNWFNGRBBNFWTZGQVIYRKLEEUVTRQGXSZZEEDKBSUXPHWMOIICDTAIRSFWOHVOZKYDIFGBWTQPU");
    msg.max.assign("QNJQALAVWYUNNIDKKZPUOWCDIABFOQANTXPMWNHXMIOUHCWMSSRQJUCVVRGZEQSVECPIDTVJUTYTMTWHIROSKLMQNFSPGBXLLQNEPZXVTGMCBDAKXDZGWXHLEKKSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.524844635823);
    msg.setSource(53636U);
    msg.setSourceEntity(161U);
    msg.setDestination(65373U);
    msg.setDestinationEntity(31U);
    msg.name.assign("ZOKCREZTPAZXUJWWGOFVCKGBGZATYFODFAXSEJCOFVLMSYXKABHGVWMVOSODVQIDJHUMFNPPPKSAHJUERIWHLYCINJFDZPUL");
    msg.attr_type = 208U;
    msg.min.assign("PSYLAJTIKKIGTNBZZZQUSBRNKXDGERBTOKXDCRRDIGPOHIILYNAFAXKWSYQVUVGYMVEIHEDIMSOYDBME");
    msg.max.assign("MCPJRPZHRGFLOAWNEBGFYPSHQVKILVZYKFXRBWFXCZOCHTCUFOLWCSMWNKJZVBQIDHNEXMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.237643587124);
    msg.setSource(13025U);
    msg.setSourceEntity(25U);
    msg.setDestination(33009U);
    msg.setDestinationEntity(233U);
    msg.timeline.assign("RIYCDBGIZONEHPPZYQLGSOMUOMLHJQOUERUWNPJJRIOIALYVQFUDUOBOHMHWLCLFSBCVAKRICXWPZUMNWYXLFMDPBAFLXXDVFYJDOFJMWXRSJYTNEWKPHBCQBTDHZKKIUYECYERGVGJQWNPSKEBRQMVIXNOQEWNQMLUIVDAJHFZPHGBVRFTTXAHESD");
    msg.predicate.assign("ULNIKBFFCVAXSASEXVEADKKQSTXHZPDEIWIVMQAVGGUEMGBEDBZQCPRCXNDRZBCPHJZWSTVWLGLHLEUYRPNDCOCQNTRUTIRQLDVLEKLSMMXBSFWTBVHYOBFWLGYATLENDPVBXQFBYUNJSUJQVKZDWUYFMPTHHCYOXCJOFAXYKAFQPRWGCF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.566238059381);
    msg.setSource(63952U);
    msg.setSourceEntity(27U);
    msg.setDestination(10323U);
    msg.setDestinationEntity(129U);
    msg.timeline.assign("IZTTHAYQVMLPKHJWQGFGAHUPYPEBWSRJOAPQNTIGRMJLRBMCBJRDFNPXVCJDX");
    msg.predicate.assign("TMNCEDSOKAWKQPLZLDKMEXIHYZGUYUSAVPULQKNZRGSGZPTZLMTCEQVMBFOFTYWNFWAEIBKKDCSMDFVRRAHOJFKIEPULZAQWTLJPFUOQVBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.684653286972);
    msg.setSource(39714U);
    msg.setSourceEntity(83U);
    msg.setDestination(44972U);
    msg.setDestinationEntity(81U);
    msg.timeline.assign("YTJHFLOFWSJKQIYVODDKRLQNX");
    msg.predicate.assign("GHHIZAWKRWTTODHBCJIXDTSNYPJNMHOFCYUQMNPXNPZANUZKDVZWLRHQTBFSNEYFBMLJSJUIXEFVWTKIPQOOMEKYLAUNVXIJEUSMBDWYXITNAFKYQGAZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.47280236551);
    msg.setSource(35898U);
    msg.setSourceEntity(52U);
    msg.setDestination(30664U);
    msg.setDestinationEntity(226U);
    msg.reactor.assign("CYHGJLRXTMJZNLRBSVCOTPQLELDVKHTVHUWQIUBAPSSOAGBXQRZGSNTVIDCCELBAYTQFBFWSABSCLKKEXFZIRHSWTGLAETYYMXWDKODAVIQMNNQXQUWFFEYNTSOFWKMTVEZURXHQNZDIWIAKAWPGSFIRXDZQVRKYNOUN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RVCOQWIWLREZWPJYKTTSXHWCFOGOTGHFDXKPBQVIUSYFDXLHCOERWNWACOQYUSJDVICIENNRJKLADXZAXEQEOVFQUSIKGVPIPMNAOXBBOLZVCTARJSRGEOXS");
    tmp_msg_0.predicate.assign("QKYRAPDXMTWGGUMESMZGJWAAPXK");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.361270628289);
    msg.setSource(62782U);
    msg.setSourceEntity(206U);
    msg.setDestination(46366U);
    msg.setDestinationEntity(236U);
    msg.reactor.assign("NDQCMINOWFLVRDSATDUPXJUOHBXPRNMJYLHRIKOCWSFE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QZGORHRYRNESY");
    tmp_msg_0.predicate.assign("ZZDEPABFJPPZQXSWZRQKDIVAJGAHFVSRNWOGJUMBTATMZKYCWOTHWLIISJFCCCZNEHGWFEDJGEEFCUAUVDTYBNGFNTMDQSXKRNTOOLWXLXQEOHOBDMTMRJQRCSKVBNOSBLNCZUYXTHJLUIXLDHMHIDEKAQRPIXKVESGRXUEQNQIPWWDVYBZYHPWCRKXLYVOLYTIAFQWBUDGZJKMMGJNQS");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.817850323427);
    msg.setSource(32154U);
    msg.setSourceEntity(246U);
    msg.setDestination(28714U);
    msg.setDestinationEntity(197U);
    msg.reactor.assign("HZSUUVDDOLPLEDXIRLDTSFOVMKJMEMGCZEFSQPTZAWXXHZOUAHPKEMOEHGLCWJBJABQJNFUGBKFMJWVQTZVRIPYDCENKRWDFAHICQAVALIQLILXIFERGZYXERBAEGBMQQIRJYIYQVDJIPZFPKTCVMTDWULGPUUWFHH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OHIDQNXMUKOQMRZCEGEJCMCBVRNVRFCFFRQBUFGQPDBDNEJCMELNMXUXLSGPHJSDCYHRZPDXIADHOMRKUUASJLIU");
    tmp_msg_0.predicate.assign("HRYZMACSJSTNMHEBHHTKLXRZUXJFSCIWOPBGTXKUOIZKBWLANNFKWIOMIYVVASAAWNOZAEVWGMNURQFUQRVDVPCODJDUUXUZTCYLNRCFXVPKREAGBITUSWDFDGQQNQVXESMZVGTEYULYYFRCILQLJTGMTMONKIWGOCXJPKTGHFZFJBPLNZZPSGBUBQVQEHPHMQBPPXBEHDROEBCJ");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.543012463811);
    msg.setSource(40741U);
    msg.setSourceEntity(123U);
    msg.setDestination(50059U);
    msg.setDestinationEntity(185U);
    msg.topic.assign("TASNRRIFVWXAIVQLVSTNLMKTRBGDMQDDBPEZMVBHKFWWLHCZQZPHIFUICKAFAYZDPQDYHHFXCKLWDGHKJPREJMNJTEZAUECEMXBGSYKMKTUQUWSCVOSPBGTACHBHPUCERRLVSQIHFGJQYSIYMGXXGJEJZPHRBOJSURGZSGOOXYVOGCBUJOEAZPXULBOKYMLDTLYIYTVWUPNNOCCBE");
    msg.data.assign("ECEDEXNFTBFDPNQSFPCHHZFIIVWTHHDJGTKLBTMSHCOWCGHEMGUIKXCRDMBUYFLKORVZCQGCRJNAGRPLZUSELOZGGVAOAYSRWJJVVFROKTXNJVHDQWOPFALMOEAPBSACUMRTUSXNZEWQAJZZLHKFYBLWBWPIINYEQXXJWKXYTDTGNUVSFNWIAUNEBSBQTPOGKUVQJOZHUIAHLMPMVLGDEQYBBQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.925895007944);
    msg.setSource(44556U);
    msg.setSourceEntity(186U);
    msg.setDestination(19976U);
    msg.setDestinationEntity(84U);
    msg.topic.assign("OYXPDMZVMWMARSSNRHEHZGGUYLWWUPKJPLMWDQSCSSDOYINLSGYZTEBHQRYFPRTOEUXICCANVIUMOLBEAXAVKTHCRICIABAGNTKKLWKVNHTXCBFIXXNBNGMUXBSUQLACHFWPLL");
    msg.data.assign("EINJYRFHZTNWUOFIEGOQGHOPBGDHYLMPJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.222231919931);
    msg.setSource(36730U);
    msg.setSourceEntity(117U);
    msg.setDestination(26523U);
    msg.setDestinationEntity(48U);
    msg.topic.assign("WOHTFKPREVIGJIUSWGEFWSIYFGALZVVCUCLSAJXSEFOKCRPIQZMLARPKXBBAKRQOLVNGOHJYFY");
    msg.data.assign("WBZOXLMDCQQUDTFIVNBPKVFZYQVTVIDKMRVWLSBLZGDRICEZENTJPWGKZNBYOXFRZGGUYQKPAOZBMMSQXKEAMLHJTXITQVCCOAKVDRMTIXIMUOHRWQXHBGPUWMNFUWSJWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.385000241977);
    msg.setSource(13724U);
    msg.setSourceEntity(142U);
    msg.setDestination(52926U);
    msg.setDestinationEntity(158U);
    msg.frameid = 159U;
    const char tmp_msg_0[] = {28, 12, 114, 114, 34, 71, -72, 21, 126, -118, 10, 86, 39, -100, 51, 51, -95};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.971695998865);
    msg.setSource(18448U);
    msg.setSourceEntity(191U);
    msg.setDestination(45759U);
    msg.setDestinationEntity(30U);
    msg.frameid = 147U;
    const char tmp_msg_0[] = {-37, -55, 28, -53, -40, -118, -111, -108, 90, -49, -70, 115, -53, 124, 23, 36, 3, 69, -52, 88, 81, -81, -4, -81, 80, -92, -39, -90, -99, -10, -126, 108, -1, 126, 27, -95, -94, 93, -115, 21, 119, 72, 96, -47, -112, -7, 116, -26, -121, -21, -114, 101, -114, 67, 77, 33, 102, 16, -42, 26, -68, 53, -100, 117, -20, 103, -90, 69, -25, -33, 44, -11, -57, -49, -100, -12, 61, 26, 23, 31, -125, -101, 20, 18, 93, -61, 107, -98, 84, -75, 46, 26, -49, 13, -39, -57, -8, -10, 109, -97, 19};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.319740645256);
    msg.setSource(33321U);
    msg.setSourceEntity(139U);
    msg.setDestination(1463U);
    msg.setDestinationEntity(74U);
    msg.frameid = 243U;
    const char tmp_msg_0[] = {-112, 66, 25, 33, -41, 20, -56, -112, -40, -38, 64, -120, -47, 75, -83, -66, 105, -96, -89, 93, 103, -72, -63, 56, 91, -87, -54, 43, 16, -100, -17, -95, 47, -87, -123, 123, 51, 116, 54, -10, 46, -112, 26, -49, -3, -68, -20, -80, 76, 76, -107, 121, -75, -75, 100, -19, 80, 1, 12, 124, 67, 84, 51, -124, -36, 108, -22, 27, 69, 42, 77, 3, 91, 96, 65, -71, -12, -45, 30, 59, 101, 97, -114, 90, 31, -33, -8, 63, 86, -117, 71, -22, -47, -39, 74, 91, -48, -74, 123, -61, 62, -26, -115, 19, -78, -54, -42, -8, 13, -34, -95, 105, -127, -99, -98, -22, -11, -33, -46, -28, -114, -90, -68, 68, 2, 26, -36, -118, -3, 125, -128, 52, -76, 33, -66, -95, 47, -17, -81, -71, 49, -18, -61, 108, -95, 66, 74, -90, 67, 89, -78, -50, 13, -64, -100, 82, -35, -84, 68, 34, -125, 97, 99, -74, -25, 41, -15, 46, 27, 35, 120, -20, 103, 49, -26, 83, -96, -9, -11, 42, -61, 84, -120, -13, 3, 87, -39, -31, -92, -81, 114, -49, -26, 64, 84, -58, -80, -7, -124, -24, -69, 43, 110, 106, -33, 105, -60, 76, 23, 83, -95, 3, -64, -88, 24, 117, 37, 90, -111, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.984874467297);
    msg.setSource(57411U);
    msg.setSourceEntity(231U);
    msg.setDestination(34375U);
    msg.setDestinationEntity(12U);
    msg.fps = 229U;
    msg.quality = 206U;
    msg.reps = 71U;
    msg.tsize = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.285965149697);
    msg.setSource(56543U);
    msg.setSourceEntity(129U);
    msg.setDestination(48397U);
    msg.setDestinationEntity(102U);
    msg.fps = 100U;
    msg.quality = 212U;
    msg.reps = 75U;
    msg.tsize = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.57401532803);
    msg.setSource(7429U);
    msg.setSourceEntity(138U);
    msg.setDestination(55473U);
    msg.setDestinationEntity(77U);
    msg.fps = 193U;
    msg.quality = 198U;
    msg.reps = 210U;
    msg.tsize = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.479736460827);
    msg.setSource(41197U);
    msg.setSourceEntity(10U);
    msg.setDestination(58702U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.24969654585;
    msg.lon = 0.184270823556;
    msg.depth = 123U;
    msg.speed = 0.336178952902;
    msg.psi = 0.814571027457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.997555484255);
    msg.setSource(45425U);
    msg.setSourceEntity(178U);
    msg.setDestination(4691U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.876822321761;
    msg.lon = 0.202223418483;
    msg.depth = 92U;
    msg.speed = 0.285444749845;
    msg.psi = 0.615041448284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.894318636376);
    msg.setSource(22682U);
    msg.setSourceEntity(218U);
    msg.setDestination(12924U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.193625701317;
    msg.lon = 0.342866157947;
    msg.depth = 19U;
    msg.speed = 0.0599273372321;
    msg.psi = 0.136709434156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.952351181235);
    msg.setSource(51317U);
    msg.setSourceEntity(162U);
    msg.setDestination(21645U);
    msg.setDestinationEntity(219U);
    msg.label.assign("MGCDUYTBAIJVMGBPUTMJBDJPBVYTXWMXZHZHFZMOFGTQEKLUBJAMLGXOVGRBPPYIBJRZSDFJSQFEKUFNYZHICEPGAPQSJYLXKUSEZWUXTWHWRVIYAODWERVRAWBHMPYVMPGECNTZGUVKSFOEOXTBNIRNRAKUHPDEZQLOXNWVARQLFDKLCRAQTHDQQKBJNIMEFCFXSHDWLCSCLHZKYLZXHYAVSDCDXACFONNKTGOJSCQ");
    msg.lat = 0.993115855976;
    msg.lon = 0.926400475826;
    msg.z = 0.795625887446;
    msg.z_units = 236U;
    msg.cog = 0.582728585961;
    msg.sog = 0.010948485172;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.744796203525);
    msg.setSource(12318U);
    msg.setSourceEntity(236U);
    msg.setDestination(35422U);
    msg.setDestinationEntity(245U);
    msg.label.assign("VGZSXHNKFXYWHVTBJXFQYSTMIPKIUOESJQNVEUAOXQJSLUEBWHPCFDFFIVOJNKWABMNRGAWDANAGOUIEUZYGTHJUXHMMZHDPLECIYODXWSUZWFILQQMKTKAPMCPTYATYSOXHZHRFBPJVWMVTDRKHJDDCEWWGNDJSILQURXSVIEQOK");
    msg.lat = 0.247873313685;
    msg.lon = 0.38751959456;
    msg.z = 0.158260275113;
    msg.z_units = 169U;
    msg.cog = 0.736957218807;
    msg.sog = 0.133006432909;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.175701821862);
    msg.setSource(28891U);
    msg.setSourceEntity(191U);
    msg.setDestination(2867U);
    msg.setDestinationEntity(218U);
    msg.label.assign("OOGYQRLJXDGQCNHZEMJQYMTGMGHFNHPXJWXRFOIZWKRVULPHYYJPXZSIVBVPAYGUIUAOZTWETTEYCUFFCBKOFXAALGKSIAGAXZUJPBZJHVSRXWSKQWSBPAYZNDNREDMVNFJTFDAVGOEXMGHSANLDYWOVIVUWJKJBICNMRHOPTRBIUUVCBWCKZYTLTHDCYLDGLQCPUPMSWQIQMEKFKTQRKRDNHXBMCBAVEXZNEDZLOTWSKNSOMPBFIQIRFJ");
    msg.lat = 0.696846218507;
    msg.lon = 0.281740740504;
    msg.z = 0.72172078117;
    msg.z_units = 84U;
    msg.cog = 0.141750218368;
    msg.sog = 0.862067599605;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.14629595726);
    msg.setSource(6919U);
    msg.setSourceEntity(229U);
    msg.setDestination(52837U);
    msg.setDestinationEntity(245U);
    msg.name.assign("PNVLDMWQSWIQZJJZKAJUGKTFPISUFKLPYCBFMJLDGAYIFDZXQNLDYRDAHPUZNRDGRQGWCSAFLOLQMQNKHSRJMMWSKXWENRLAIGDTMHJYIHNKECAKCLUAWEBGIYRBIGXOMKOEO");
    msg.value.assign("LKGMIAVSFMCUORBWJHOSROCZWMCNYUDCTVTFALLPNUHCKJQNSYTOLTGYTPJMXHMEZECEWKKGHJHLAQRINUNQCKGSYPUAKDZBWFHVZGOLPNBJKEAVXQVXCYTXEUTSZFHXWGMNQIMBBIEHVOWDLXCBAZYIJQGWFGVEZGWSLXAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.239229992136);
    msg.setSource(27450U);
    msg.setSourceEntity(125U);
    msg.setDestination(25937U);
    msg.setDestinationEntity(227U);
    msg.name.assign("SRFMQOSCUPDAYQBVTVKNENJLMKGCMQAPRKWZWVXENPQXCOILORBPOGUFOJUWQKZREDTHUFAGRQDUBMLZTBCFCCVFWIRRHXIZEXTWAGBWWJSRZFHHJGUDQYZPHMUOESYSAOXILPXZDBTEFYV");
    msg.value.assign("UWJKJKKIEWXDBEZHTJNBOQMRTHXZWYLUMGNALHIWUGPUJNSJRLZKDQRFMHCOZHREDRAVKSANPQCLQDZMSBDTDDWAYCBMTXMPGCFJQISDGRSIIMJVLGUWKUZBOLNYFTQPEYCNKSZTYZMCVOYOTVNFALQLQZBEUESFCUCYPVPYQRXWRXUOSVKWPHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.665061133369);
    msg.setSource(12715U);
    msg.setSourceEntity(2U);
    msg.setDestination(23437U);
    msg.setDestinationEntity(178U);
    msg.name.assign("WGUPCWGGYUAH");
    msg.value.assign("BEFUUWZRPTTWBAJSWVUKDUEFQGOOAWCDNASGQCIJPSSABWHGNRCETYLURPMEULDGXFXZIIHMGRTKWNPERSQNLXJVDHPHYQYLVQKOCHVT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.910418353359);
    msg.setSource(11923U);
    msg.setSourceEntity(1U);
    msg.setDestination(21632U);
    msg.setDestinationEntity(39U);
    msg.name.assign("IOWWPXUDSAXSQABEUQYEUPJRWWTDFOECVSRWSDXUQLXZVRBDOCVBEKMWGCVSQCTGJYZNPUIIHHEKKNBSRONPQOAMKDVHUQHEZJMDDPONAZLCAFFNJJQNGBGTSXUJXWVASYZBHPEXHMIPDIAFAHNAJXJBKXLTMMGIUMTRBHPUIOYCKSACCYPDGJZNBVMWGERDYIHLQFRPKKLLKBEZFOGZXCKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.723731418465);
    msg.setSource(59213U);
    msg.setSourceEntity(42U);
    msg.setDestination(9798U);
    msg.setDestinationEntity(90U);
    msg.name.assign("MFOGPEPIGSZUIHIKTUXWJUBOBYTFYTQDTDQANAVYWFBYJPITETOIPJBUZRQZMMYHUJLVGVSSTWSULKZKFJSKVDNCLPRKORINKZTTPELSPOHHJACJKRXUDXZRVFRBGQCRWYCIA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DGOSVFBOENCCIBPHHIPVPPPAHWZRKARDPNOGXGMEOTIMNSTQRCRJUXRTQKJCEYCQYRFTUBDPVRSQUSQGOZQKPUBKTHJIAAYJLRLCYUXIGLKXNLRDYJYTLHTGCLFBMTTVNCSQSHIFAZWJMKWAPXHFG");
    tmp_msg_0.value.assign("IROCQFKANPDNUALYMALMIXHAPNMTWFUTBZAQGZZVGYMJZPXGNCYRMVUEBQSODXQWHSVUTYNKDLULXDCGGFDAGRHRWODBWWBDIHLJPTZVQVTTEATEDSBXEFRKIFZXBQYYPHLUNVRYWQUNMWVVFLEPHOCDF");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.227598014408);
    msg.setSource(27834U);
    msg.setSourceEntity(155U);
    msg.setDestination(2766U);
    msg.setDestinationEntity(190U);
    msg.name.assign("SUFDZIPYJXMOCBYSSKLZPDESJCRKTFQSZUBXENPVELVWYUFWHUGPGDJUTOXBUCNAHCDOSKTMLGRTVHPVITIMCKQHAZWKMTGIM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XSTGBROZKJPNZUCXWRTFIMR");
    tmp_msg_0.value.assign("XFHFKMANQTVAWJHETLYGCHWSIGABALLNWGYEOTKPPKNPQUJEFCKCCSJGQJRRBUDHHPKKGDTFXQDEFGFQORBXPEFERLIWIKABPDFIXQSUUEEUNWMCXRTBJYALNRVDXGHNZZNXDSQFICIBKLGWHOWAIHUOSSBJTPUSXACCZOQOJWVLAUYTQTPYVWYOXLVLGJXKBNBDZRNJZTBCPEM");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.0475614787632);
    msg.setSource(16564U);
    msg.setSourceEntity(27U);
    msg.setDestination(1759U);
    msg.setDestinationEntity(214U);
    msg.name.assign("FKPEUZXYDFUPHRTEDBGPHMXZKLTWFRZLGCQDJRSTZOBLJVBHVRIQFVVIHNTWRQMZXNIPGQJOUMDCFLYSXTKJSEEEICAFTVMHKXWDDFWVKNYHABQOBWSCABYEIAQJNIIQYRYAPRPXGZIXVJSKJTQPDOVXLWTBNXUYNKFOAEVJGHZALSBASMPSPTDWAYK");
    msg.visibility.assign("XVKADHUCLDBRTJZBKHGBPVFQTXCQEXXCVFZQLQWSSFOZBRKYMFVGDMQWPICOAZNGOXWMPUTXYCMQNNWRNJTZNMCPEOJSUERUDEFUEJUNGUXYIKWIVZSHOHASNYETPREKKHQBJDVMLNGAQLKRLWAFPHXOCHJRDDOYDZSIFPJTALXWHGUJUMKFQSUIBZAWDAYYLPKYLQGBAIVGXRRCTOWVNMYZV");
    msg.scope.assign("QZPRVNSYKIBUBMNWLATSTXERSDHMKWYAWLRZPLXYXINGGHHJXHAAXKCOUVCFFBVYEYXWGUZOOJHEJRJLYENINFAUQJSOEVADMTPTIEDIJFOAGCKUFITDIRUKDVWLKYHBQMOEFZOGPCF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.790095504933);
    msg.setSource(61197U);
    msg.setSourceEntity(46U);
    msg.setDestination(20889U);
    msg.setDestinationEntity(7U);
    msg.name.assign("RYGJIGHLAWXFCTOONRMCCBOMQHYUUCFRABKVPZRXIVJOMCPOEDXTDANVDGYPMLRRMDRYHXTDBNHVJJNOLFNFLTGNSALKDPZWWJKAOILUTSUAHFCXNBPPQTFXYGKBJREPKQKIJNFFRSHLDHZURJLFVUELGPYSIEDFVEJIKXMJTIZXQKNGBQMGQVWQEBGKNQVLUZPIEHBSOSBVOZQCXTZHTMHX");
    msg.visibility.assign("BZECLXQZEHMAIZIGIETXGQJABMHUDZNCWVJGFMEZDYKMKVREYEXHJFRLAUKUXDNIPIRTALLKTJHAOGBXEMLPBCWSWHVQVWRUKKUAUYTPRSDLCJXSRMGMFTKNQTZOMNWQQPSNAZVJJOSBJJPHBDLROPQDUNGBCMWCXDVFZ");
    msg.scope.assign("IUMZMDGVMXLFZFHOZNCESSBFGAQAZCBBSMZYMCGAMTMDFWPLCZYFLWOQBCQTMIWOHAPVUARBIWLUEHHNUYYLPWXZXFYWIVHVLDSJVSORKGGTBEQBATNSLVFEJCOCXUQWHQUBUHODERVWYIIKDJKMKPZJOJGGGDNDETTSF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.0566150056955);
    msg.setSource(23972U);
    msg.setSourceEntity(253U);
    msg.setDestination(29373U);
    msg.setDestinationEntity(67U);
    msg.name.assign("WOVPBZKSMHZS");
    msg.visibility.assign("IZVJKKYBCTHHLKMDRBUOBACUYRZESBDUKRRRMZOXNXWBQJOEIHJLPLMBBWVXQPLTOFGEKFUZZDMXPSEJONTKJAVOWMQTVPSEHLCCDUIKWWVIDDKRUIQRPWQZAHOKQGPVGNLHXMDY");
    msg.scope.assign("PUZKHSMVQKMHMZBZDMXFKKCQRMIEYAWOLBPNELPJLYHCZAFQWZIHKSHHSTGBQNKMXRWYSNXRQPBCBLXJAVVPECTWYOXSCNRDJGUXSAOYGZIYSDDYGAUVEDTRSOXAIGJUECHUOVDWURGISYLRHWMWZVAIFDQUVJMYUBZGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.077030753198);
    msg.setSource(17525U);
    msg.setSourceEntity(218U);
    msg.setDestination(54506U);
    msg.setDestinationEntity(119U);
    msg.name.assign("LPWDMPGVTHTZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.172989477291);
    msg.setSource(5683U);
    msg.setSourceEntity(165U);
    msg.setDestination(22174U);
    msg.setDestinationEntity(173U);
    msg.name.assign("PIZZSUZAMVHLTBWD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ERQWSCUEWAWDAAOTOZHASQQRXCBOLYVCLVQEIHZEPFRFWOBCASKENLCBQLMNVBTJAKEXIXPDXZSRVCWNIBRIXMPOZRQUTUGPOPZPREGBOSMPFNJYZITUSBIHDXVFGMMMGURWLKQVZWNTCSLDTYSNIDPDKDDGGZNJVIUHIUJYDANFKHGYKQUBCWVXTURNTHJAXKFQCERPSTKYWMESJBZFVZVGHLMKWMOOCYJBLHJOXITYLHFKFAGHUGFEPJ");
    tmp_msg_0.value.assign("RPCHXZKHWKANLDOMTACHKFTOBBGUVDAFXTFBIOSJXNFPLZXWHSKLHJHJJLIMCBZWCSVAFXFIKSEMSBGEJPWZ");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.618683821529);
    msg.setSource(62467U);
    msg.setSourceEntity(230U);
    msg.setDestination(61U);
    msg.setDestinationEntity(212U);
    msg.name.assign("KCNTHEPYIADEOCWTOBJRDYBWAVBJLJSUFKAQWBWFN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BZHPJYWTKFRNBTEUGMETJOPGZZDILWAWTQYUCBSVUBVDOLSUFDFBIEGTNDNRSASJPJZMZTPMPXKRAMHYGSDTKWTDKLCKBXN");
    tmp_msg_0.value.assign("JZUIKTCPVWFFCGXHXFPUETYMMCEOMZXBLETKLZPWJESXMCECIGLAHGUNWADAIVRCVTFTLVDHVQQLXDRZBGZFKVAABLCHDRJUXKJPFXVBHSJAKYSNNNYUZDNTSZKAWZGKHKJKMRJRQTNLCRYECGGWSHBAJIYPVFIDIPNXYMFJWKUQDUQDRQHTOOWEPTQYRSZXBEMOFOFA");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.18564461639);
    msg.setSource(51301U);
    msg.setSourceEntity(156U);
    msg.setDestination(56117U);
    msg.setDestinationEntity(230U);
    msg.name.assign("AFFUNWEWPNTTHJMNYWPGYWLVBLQSGTLLXZRNHTAOPBBQFZBMGSFXCURRCQPJKRYOEYAMDYJADCUMPVKSDLOBRXKMOECTPFZDSDHNIQEOJJLZXSGAGHOGMUPZQACSFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.0333915660083);
    msg.setSource(5434U);
    msg.setSourceEntity(146U);
    msg.setDestination(43504U);
    msg.setDestinationEntity(83U);
    msg.name.assign("ZLRFBEULLAZASABKNDDIFJOMGOJGTWCBRDSPDHFFIWOWMPXSEENYRNVDFWHKSIBGMZJFZUHBMXOVDKWLXFJGICQHLVOJPYSWEWIQCZHEGBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.464174936135);
    msg.setSource(60925U);
    msg.setSourceEntity(119U);
    msg.setDestination(57076U);
    msg.setDestinationEntity(75U);
    msg.name.assign("MVKSBQMXRJCIZKNXLOUWLJSYAEPFMHLYGQWBGXSKHZUAHAZTYIRZIHPOEPLGSDENXLZNBKGRWLTXKYDYNQHWFDJOJNNWAFAWCHTGFBUSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.240779797955);
    msg.setSource(41898U);
    msg.setSourceEntity(64U);
    msg.setDestination(1031U);
    msg.setDestinationEntity(205U);
    msg.timeout = 2937005996U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.33972041034);
    msg.setSource(3257U);
    msg.setSourceEntity(119U);
    msg.setDestination(26229U);
    msg.setDestinationEntity(130U);
    msg.timeout = 1663792209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.824097864422);
    msg.setSource(11885U);
    msg.setSourceEntity(253U);
    msg.setDestination(23733U);
    msg.setDestinationEntity(13U);
    msg.timeout = 4058196500U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.360645700435);
    msg.setSource(22456U);
    msg.setSourceEntity(128U);
    msg.setDestination(53617U);
    msg.setDestinationEntity(188U);
    msg.sessid = 3084279587U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.597285557675);
    msg.setSource(49993U);
    msg.setSourceEntity(125U);
    msg.setDestination(6096U);
    msg.setDestinationEntity(120U);
    msg.sessid = 2084740074U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.760100474052);
    msg.setSource(51085U);
    msg.setSourceEntity(37U);
    msg.setDestination(45197U);
    msg.setDestinationEntity(93U);
    msg.sessid = 1108678282U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.44607723108);
    msg.setSource(39674U);
    msg.setSourceEntity(161U);
    msg.setDestination(34432U);
    msg.setDestinationEntity(109U);
    msg.sessid = 1622079131U;
    msg.messages.assign("UKYYVRUQBLBHNSEFPGZWBTELWCSUVSNFRLDGDELZLOMXFFVPMZFUTTGIUIQRECMOAVQWTAOCJUPTVAHASINGZEYQCBJFAGSTEMZZQOUBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.583033790816);
    msg.setSource(4608U);
    msg.setSourceEntity(214U);
    msg.setDestination(30072U);
    msg.setDestinationEntity(216U);
    msg.sessid = 2242416880U;
    msg.messages.assign("WFPAGULELSUDMWMNEVFZQEWFUGMZQOJXDJPHRRZXVUJDNEZIOYIAKVOBQYWBTLGCJYKAUNBSSCCRGMCXKNWNJCLYPBSZVSHFURDGUAWVCOWOMBQVFSDDIGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.778922799841);
    msg.setSource(8059U);
    msg.setSourceEntity(195U);
    msg.setDestination(39197U);
    msg.setDestinationEntity(243U);
    msg.sessid = 2661068401U;
    msg.messages.assign("VZRAVYVMQGYSEJKIEETZXHPYPAAQMNJRGSFKEJPNXRKEUZQCBEQATELCATORUGUUTYJPJRTGOIZWKYHDWASEUMSANUMBLBVOLXPURNZAZKESWXAXUXO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.377396362342);
    msg.setSource(23354U);
    msg.setSourceEntity(178U);
    msg.setDestination(63854U);
    msg.setDestinationEntity(69U);
    msg.sessid = 3409236764U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.110873317823);
    msg.setSource(27305U);
    msg.setSourceEntity(96U);
    msg.setDestination(15259U);
    msg.setDestinationEntity(158U);
    msg.sessid = 2018912996U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.170485936119);
    msg.setSource(44693U);
    msg.setSourceEntity(91U);
    msg.setDestination(47968U);
    msg.setDestinationEntity(11U);
    msg.sessid = 1344019571U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.324105823608);
    msg.setSource(14004U);
    msg.setSourceEntity(165U);
    msg.setDestination(13530U);
    msg.setDestinationEntity(95U);
    msg.sessid = 4010625990U;
    msg.status = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.901516605621);
    msg.setSource(14349U);
    msg.setSourceEntity(22U);
    msg.setDestination(34127U);
    msg.setDestinationEntity(31U);
    msg.sessid = 1950668985U;
    msg.status = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.482356069985);
    msg.setSource(40341U);
    msg.setSourceEntity(17U);
    msg.setDestination(50356U);
    msg.setDestinationEntity(136U);
    msg.sessid = 2480188656U;
    msg.status = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.709549438973);
    msg.setSource(4471U);
    msg.setSourceEntity(207U);
    msg.setDestination(58224U);
    msg.setDestinationEntity(115U);
    msg.name.assign("YCEUKWXILMBMZVMXEZHSFNMROVVCLSMYRUBGJQYUDQREGNKXNGEJTDMNYAOSSHTFDNWFXZRJAXHOBPPZSRKNNYKYAPQENQWQLFJILZAWCHVAMWEOASHBOTMUPEFPDOATAMTYLFIGVJBXZJZURQYGRQIEGIFGDYHEPBBBIC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.223424437788);
    msg.setSource(35639U);
    msg.setSourceEntity(92U);
    msg.setDestination(44633U);
    msg.setDestinationEntity(235U);
    msg.name.assign("USNZTYPMZMSIMUNOEBRSGTQRJOLWXVWNUYQFIKTSVZCNFMHBFEVFQONCQWSUMFJQIBNMUITWYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.743337650873);
    msg.setSource(19636U);
    msg.setSourceEntity(32U);
    msg.setDestination(61079U);
    msg.setDestinationEntity(150U);
    msg.name.assign("JVPDCKHQKBQYDNYXMXGLAZNFKOMLXOYHWHYXCTHSZKBRPEWBRYMPLOBACXIJKQVMCAXGNPFULYGHHNMVQKCDKDIBWFQXYWFMETGIDNLSIVXUFVKQUMDFIJATBSYROTJNEPJICFWYZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.515683852048);
    msg.setSource(54703U);
    msg.setSourceEntity(163U);
    msg.setDestination(46872U);
    msg.setDestinationEntity(55U);
    msg.name.assign("ETXDXXALVWZHJCJCLDTOQJFCLVGMTYBQIAHRMHBKDYSPFGWLORKQAIXSGJPTFOFOPBTDYRIPLEZQYKVVNGYREKIBCLWVDOQYXUEWZPTIUZPEXTKONLPFLNUMGHNLUNNKVDMEAGFEUOOQSJMJRWIMBNUFCXYURSZQNZBKMBADRVCWGAHWVNSSCUXDHJVQMUKOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.421869302107);
    msg.setSource(16654U);
    msg.setSourceEntity(172U);
    msg.setDestination(53828U);
    msg.setDestinationEntity(155U);
    msg.name.assign("OUFRYHWLELFFCERGFOETZSWOBETKJKTHHOKVIUWIUPQTNCKRMGQJXKBHVSFYDYLQACOJRVWNSNBIJZDJDBOWDGJCYBMRVGMNRIYXPHKPVADCFWNBFNIYJZOIKDDJXYEXQXWAKONMAQKVBGFGVGEMWCMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.185460320865);
    msg.setSource(46104U);
    msg.setSourceEntity(146U);
    msg.setDestination(24316U);
    msg.setDestinationEntity(189U);
    msg.name.assign("KDILXAGGMOYCGURIRIZJEYWWLHAFJGLOCXIYHVADHPQOHUOREBVHIRPBFWVQKBSEMASRRRTAQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.0382886462763);
    msg.setSource(6075U);
    msg.setSourceEntity(157U);
    msg.setDestination(1016U);
    msg.setDestinationEntity(197U);
    msg.type = 89U;
    msg.error.assign("OULLLKGXDADWCEIUOOCLFDTRCDDINMOJRKJSYRYWLUCMGFRWSJGGBLPJEWMKPFAXAXNYKZSPGFVATSZHMTSWJZBQRNXIVVFKQVSEIUMQUXOHIVZTGMYDGUYAYHPORMBWIXINVUQMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.0997515544394);
    msg.setSource(17646U);
    msg.setSourceEntity(68U);
    msg.setDestination(16858U);
    msg.setDestinationEntity(68U);
    msg.type = 9U;
    msg.error.assign("FSGZQZQRVJVBEIWBZFOMLNQGMFUECGAUNSPFJMZLIPSSEJLJYYUCWKZSVTYUPSGYSMUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.0869618227078);
    msg.setSource(40244U);
    msg.setSourceEntity(235U);
    msg.setDestination(62313U);
    msg.setDestinationEntity(127U);
    msg.type = 100U;
    msg.error.assign("LVRJIYGDRZYMJBLZOWNHFWXWIAITATKHJKKWPOZYHSUBEGEOTTFBNAZDABIJTXFJLRFUWECLCWSCWZKIQGSLNCPPIHZKEIXUCASOWNNVTRNAHEBTKYDBDZQHRPJXUGQRQGYRENGJZTFLORGMEOHIXAEVJTSLUUOMNUDOCFFPILGSRKVKPZPOYSAEBVGFYJEYGACUDBYPZMQMANMDVTXQUOCJSSXFDVQKQUHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.859498030389);
    msg.setSource(9022U);
    msg.setSourceEntity(222U);
    msg.setDestination(49702U);
    msg.setDestinationEntity(191U);
    msg.seq = 39842U;
    msg.sys_dst.assign("KMMLDRSQGEPAMNRXXNMQJVUWPVPTIENQYRIZLAXNAWYRBFGLWKBTCJPNWCLMXNEKGIJZDZJCOSOYVCFGDPBULHJDQGKUUCRGODOYPZIZCERBVWJFKFTFGMMSLSSOGOJSUNLDCCYIAVULZBIVESUHXFBAVKUSIKAMLVXNTBROZHHWQMWYVAOZIA");
    msg.flags = 50U;
    const char tmp_msg_0[] = {-102, 73, 74, -51, -78, -84, -81, -108, 63, -11, 96, 41, -59, 46, 24, -25, -52, 46, 22, 104, -99, 49, -22, -45, 36, -60, -13, 56, -118, -76, 29, -75, -119, -78, -118, -70, 12, -70, 107, -110, 106, 89, -19, -15, 1, -95, 51, -86, 32, 99, 125, 34, -76, -76, -99, -60, 53, 54, 74, -22, -21, 53, -40, -124, 71, -8, -122};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.181402687006);
    msg.setSource(38303U);
    msg.setSourceEntity(248U);
    msg.setDestination(31621U);
    msg.setDestinationEntity(64U);
    msg.seq = 23367U;
    msg.sys_dst.assign("CZPJYMUOQIOWCTYGPGIFSPFQKILZDFQXE");
    msg.flags = 198U;
    const char tmp_msg_0[] = {22, -13, 94, -11, 111, -18, -33, 39, -78, -89, 35, -110, -1, -93, 16, -12, -91, 99, 117, -83, -106, 95, 120, 121, -66, -115, -93, 15, 50, -111, -88, -35, 106, -35, -45, -30, -72, 31, 104, -73, -121, 32, 109, -118, -46, 112, -50, -26, 21, 109, 100, -11, -102, -104, 12, -16, -104, 61, -120, 27, 63, 126, -80, 15, 78, 45, -112, 104, 109, -64, -67, -13, -35, 45, 120, 19, 101, 14, 77, 126, -121, 61, -3, -115, 117, -108, -86, -98, -21, -3, 31, -38, 122, 15, -14, -51, -12, -75, -77, -70, -10, 22, -92, 4, 29, 97, -70, 53, -63, 107, 110, -3, -50, 38, 99, -31, 29, -19, 60, -90, -9, 8, -75, 119, 45, 56, -62, -42, 25, -113, 53, -45, 42, -14, 64, -95, -60, -40, -115, 26, -59, -124, -88, 6, 106, 34, -126, 33, -44, 73, -72, -14, -70, 108, -120, 113, -48, 62, -116, -120, 3, 18, 124, -9, -126, -106, 75, -125, -79, -12, 41, -82, -125, 103};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.59965322316);
    msg.setSource(60806U);
    msg.setSourceEntity(23U);
    msg.setDestination(30316U);
    msg.setDestinationEntity(22U);
    msg.seq = 9300U;
    msg.sys_dst.assign("XJLVECJKNMHMGKWCADFCVJEBURANIXZZNBHMXMIHPAXAKNLIGLWQUYVALMZXJQLVISYXRWOVVDGBQYSGRGYVQTFFUEOYDCUKIOVKECZSZOWGKTYPGLUFZLRQDJCPQQQRPKRDSIYEOBKPHTAXXPOOVTGJEKAJOEFATPZBUQDYIVWSNDCKBZMJEYFWTBPRYHTTAHNSRNCNMJLLFPUTIEEBTRUXIMRUUDMFNCQWGDGLHSCBAIHZWSFFONOJH");
    msg.flags = 25U;
    const char tmp_msg_0[] = {70, 107, 88, 54, -71, 103, -126, -97, -90, -105, -35, 63, 28, -31, -99, 77, -71, -34, 1, -36, -57, -104, -113, 33, -93, -72, -92, -34, -109, 13, -112, -19, 37, -30, 109, -126, -124, 5, -82, 25, -88, -73, -16, 72, -8, 35, -103, 95, -86, -95, 6, 123, 105, -74, -118, 102, -87, 54, -41, -88, 36, 7, -1, -51, -109, 3, 91, 47, 68, 57, -48, 37, -12, -26, 66, 26, -73, 41, 28, 57, -124, -113, -95, 11, -9, 92, 123, 59, 55, -122, -44, 44, 85, -11, -115, -87, -63, -58, 10, -5, -77, -65, -4, -18, 69, -107, 45, 111, 55, 88, -59, 10, -24, 72, 116, -26, 85, 75, 63, 28, 9, 43, -88, 51, -106, 110, 9, 89, -118, 61, 64, -4, -50, -30, 66, -118, 116, 70, -54, -123, 72, -79, 69, -6, -54, 74, 23, -14, -32, 115, 121, -62, 26, -61, -81, 34, -63, -48, -18, 4, -1, -33, -98, 24, 13, -83, -105, 67, -11, 115};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.0675657325402);
    msg.setSource(35507U);
    msg.setSourceEntity(16U);
    msg.setDestination(44114U);
    msg.setDestinationEntity(116U);
    msg.sys_src.assign("YFUEKVEBPQCVAUHNSVOUUYNMDXCKFKJHEPTGJHWGNWKGPMGUJIPQSFNYRLVSZSUAYYVWZZJPLZIAPPHOSBDYFEQWKHHTRZTGXOKVAELXFBDOCNUDDVFGLKBSNFQTJZFRPDA");
    msg.sys_dst.assign("CLFVEBGTZTHYRPIXHVDIEERDVHNUVZLGFLKWDBKCEQMZODDNUMRQHCJRILFABSNIPPKVYTXAJHTXLJGQEPVTPPKZMLKSXRVLUKWQYTYWFIAFMJZYXQGCFOVEPGFOWOLZIRHKJHIMMSAGYCCDGBVLUMJRKRAXEOPSATTCHWKBJBONOZMQUYCFJS");
    msg.flags = 125U;
    const char tmp_msg_0[] = {-81, 100, 113, -88, -72, -100, 15, -83, -28, -30, -106, 0, -10, -24, -29, -77, -77, 2, 41, 60, -99, 119, -60, -33, 64, -23, -6, -109, 123, -15, 15, 119, 96, -23, 20, 99, 77, 24, -43, 27, -20, -116, 105, -86, 97, 51, 0, 76, -104, -86, -99, -74, 44, 71, -20, -121, 111, -22, 102, 103, 95, 72, -109, 113, -47, 115, -102, 71, -78, 42, -102, -52, 101, 118, 51, -93, -78, 117, -7, 68, 70, -47, 105, 44, -78, 31, -60, 4, 96, -123, 116, 33, -102, -110, -75, -46, -5, 47, 29, -55, 23, 61, -81, -91, -49, 124, 82, 82, -52, -24, 99, -61, 85, 35, -113, 117, -47, -17, -4, -24, -45, -105, 109, -24, -30, 95, -32, 68, -7, -26, -48, 120, 1, -58, 50, -112, -27, -49, -10, -3, 72, 2, 120, -80, -81, -35, -100, -15, 43, -114, 86, -5, -59, 30, 44, -101, -68, -32, 55, -36, -3, -33, 65, -40, -13, 72, -93, -88, 110, 17, -63, 114, -77, -121, 48, 112, 74, -71, 89, 47, -94, -52, 22, 44, 35, 121, -104, 83, -6, -31, -16, -46, -90, -20, 106, 1, 125, 85, 75};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.474385387625);
    msg.setSource(38975U);
    msg.setSourceEntity(96U);
    msg.setDestination(42045U);
    msg.setDestinationEntity(84U);
    msg.sys_src.assign("ZRGXITZANXOJBEWDFJIAYTHQDSMFSZWMUKGRHRUIHQVAMUCIVLBCHLIMBCCXEDPYDPZWZQCVLGQDMTNHYRXVFXAHGYDTFBHGLJXPNYVLSPBITCEYNOCTSNNTUMJOWBJDRGVTSKYSFJBPYLUP");
    msg.sys_dst.assign("SPIKMABHPIRZMKGWGDOAHSGBNFLHYFOBVORMYXQDZYWREJXBQPHPXKPRUFCHCRCMRPNVMFJUJGTQALBCZDARQFMPVVURNKNXMXYAYIWIPBLGQIKEQAMLTJWSAQNMKDLSWPCZJQYEEBFEJBNJLOXFZFETLLVUXBOZIKXUVYROWWDAWSRZTUVTCUTVQWCHTSYINNJDWHGLPITZBIJODOQYOESLZEXIGSSGCHJUKMCDC");
    msg.flags = 47U;
    const char tmp_msg_0[] = {-80, -12, 56, 43, -95, -120, 120, 115, -109, 62, -75, -114, -63, -84, -98, 102, 64, 10, 43, -34, 73, -30, 115, -72, 72, -42, 22, -76, 106, 10, 73, 105, -61, 115, -18, -26, -88, 62, 121, -9, 109, -105, -30, 122, -117, -32, 28, 101, -60, 12, 8, 119, 0, 16, 13, 57, 120, 3, -47, -69, 123, 46, -46, -38, -119, -38, -53, -50, -34, 23, -10, -34, -122, 14, -112, 112, 121, 78, -61, -95, -87, -37, 6, 8, 125, 121, 66, 2, 49, 25, 20, -111, -10, -33, -51, 62, 39, 77, 31, -87, 34, -75, -52, 59, -72, 59, -118, -107, -72, 0, 70, 89, 24, 63, -107, -39, 120, 105, -86, 111, 79, -42, -65, -4, -4, -105, 123, 102, -61, -8, -121, 112, -79, 35, -36, 61, 7, 54, 79, -30, 41, 2, 24, 26, -121, 5, -41, 100, -24, 19, -37, -104, -2, 17, -97, 76, -91, -97, -67, -113, 9, 27, 33, -36, -128, -106, 11, -50, -126, -59, 90, -82};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.283908433085);
    msg.setSource(54517U);
    msg.setSourceEntity(198U);
    msg.setDestination(57901U);
    msg.setDestinationEntity(45U);
    msg.sys_src.assign("NOGDZKMICYAVFBMHHQUKPOXIRRZJQLHYXCPMZVLYFOKTLWGKMPTANNJXTTJSVOGRHBGCDFZBIEIISUVGYAENBCXLOYEMSUFPEUWDERYFYEKARATEDRFNGISJJOSUUKKWQJOCMMADKBZ");
    msg.sys_dst.assign("OIKOQLYCIJMVZWJDNRAJRBZMJEASOBVGQIDWVMTFEKHTIBUOBNYCJVQHPITAADNFKQHEFHLCVQNTLEVHAKYJYHJMDGQPF");
    msg.flags = 161U;
    const char tmp_msg_0[] = {51, -37, 105, -53, 77, 15, 27, 51, 48, 10, -2, -98, -40, 121, 123, -18, 93, -43, -86, -108, -100, 18, -92, -57, -81, 32, 92, 37, -51, -66, -78, 47, 15, 123, -43, -3, 4, -61, 105, 63, 36, 109, -35, -12, 11, 4, 15, 119, 7, 73, -1, 31, -22, 53, -96, -91, -97, -55, 11, 68, 38, -105, 22, -79, -76, -88, -49, 20, 82, -49, 27, -118, 61, -65, -27, -84, 11, 69, -125, 83, 12, -3, -12, 104, -26, -89, -86, -77, 81, 90, -99, -89, -43, 84, 119, 122, -81, -33, 120, 112, 43, -67, 105, -32, -116, 126, -69, -26, 48, 84, -92, 25, 15, 25, 53, 94, -30, 10, -45, -121, -6, -72, 92, -43, 78, -87, 21, -83, 22, 20, -12, -49, -3, -74, 27, 39, 39, -19, -90, 115, -17, 58, 62, -61, 56, 60, 94, 111, 126, 31, 47, 8, 0, -45, 107, 3, -27, 112, -69, -115, -117, 36, 37, -95, -104, 82, 114, -98, -65, 5, 96, 44, -75, 119, -1, 18, -25, 47, 72, 28, -40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.675388489639);
    msg.setSource(56262U);
    msg.setSourceEntity(219U);
    msg.setDestination(57399U);
    msg.setDestinationEntity(164U);
    msg.seq = 18252U;
    msg.value = 33U;
    msg.error.assign("MDLWQFJSCBAPYMYDBSEHIXVCFWSANYTPPTOLMCPRZOWGUKGTAHXGKDPIABICSKROZWRSUKXSHGMYFSDFUASLWPWOEZNZLDBGOHDAJFINNQICQBNARKNEHWRQIWBJYRLVIMR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.216179051449);
    msg.setSource(26167U);
    msg.setSourceEntity(39U);
    msg.setDestination(6577U);
    msg.setDestinationEntity(216U);
    msg.seq = 26206U;
    msg.value = 181U;
    msg.error.assign("ESIVDNPJVXMMDPCRMFKZVEUIZNXLJVDUYYFBWEALDNPGYRDNQTKHPCQGNYXTWUGSPRESHKUPGNPFJYGBQQOOMAJWOLDQIIISTFBOLGEZUMRVUNNBIVXAHDSXFTJSTDRCYOWXXZIZGLICGEJOMUWZVUWFHNWUFPOBMLCHGIOKMTLBZZVEDTCFRJJHVJEHQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.100510954781);
    msg.setSource(49217U);
    msg.setSourceEntity(67U);
    msg.setDestination(3423U);
    msg.setDestinationEntity(147U);
    msg.seq = 10814U;
    msg.value = 105U;
    msg.error.assign("OFPILTCZDYRJWAZKNQTQORXNLVFFVYKBDGOZFAQUSSYYMUEIGOJHFRKPNQDWXCQJRHUYIEPVPGJPUAWTMCOVLNTSTDLBZHICGGVNKXLOSAPUCZMHAHPVAFPKLECLVBDWSANAZJFRLECOIYTSRNQGMMIRJWPYSUICUADXGTOFZNWWKBWGXZRQKMBIEFDSHBQQGJWSXBQECMRONVUVMBEEVKTALCDDIFYWN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.771025019313);
    msg.setSource(29577U);
    msg.setSourceEntity(33U);
    msg.setDestination(5142U);
    msg.setDestinationEntity(209U);
    msg.seq = 16127U;
    msg.sys.assign("TDRWWMGZKVWVVEXAPBMDWUUDZCICFEEDNSRIRANOAGAVCWBLYCUUTARSPMYVODLQXTEZKXNJQWBIJOWQZCSBAPOHDMEFIJHXMXZK");
    msg.value = 0.149992601489;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.235952763782);
    msg.setSource(7948U);
    msg.setSourceEntity(174U);
    msg.setDestination(58368U);
    msg.setDestinationEntity(103U);
    msg.seq = 35561U;
    msg.sys.assign("UZALAZQDOSGZPZFZPNXWUMLIIQYJBRYMKFBSSUORQIWEAWVSUCMAAHEONQUCJYVIXBXJLVRRGJOSIHDFXGCFZEMQOVMQYXIYYHOLPAKNTAMGPNAPTCKM");
    msg.value = 0.238415887204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.789728629284);
    msg.setSource(58565U);
    msg.setSourceEntity(40U);
    msg.setDestination(16000U);
    msg.setDestinationEntity(171U);
    msg.seq = 63446U;
    msg.sys.assign("PNNBRQEFMXCENWOUOIFKLRFLXNPGGJWORAFPHQXYIUEEZQERBYSKVPRCPMTTUNQOQAZANDTIBZKZADCFAGJCOPLHZAODSZXVXABMLM");
    msg.value = 0.38090468313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.616740723042);
    msg.setSource(57652U);
    msg.setSourceEntity(2U);
    msg.setDestination(1296U);
    msg.setDestinationEntity(117U);
    msg.action = 127U;
    msg.longain = 0.218071932567;
    msg.latgain = 0.851759788608;
    msg.bondthick = 3160176687U;
    msg.leadgain = 0.469918928204;
    msg.deconflgain = 0.130616444161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.721370889718);
    msg.setSource(36096U);
    msg.setSourceEntity(80U);
    msg.setDestination(33802U);
    msg.setDestinationEntity(51U);
    msg.action = 114U;
    msg.longain = 0.829002746331;
    msg.latgain = 0.194761076868;
    msg.bondthick = 2009037491U;
    msg.leadgain = 0.359357049769;
    msg.deconflgain = 0.827506499803;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.376674532184);
    msg.setSource(9453U);
    msg.setSourceEntity(246U);
    msg.setDestination(56589U);
    msg.setDestinationEntity(135U);
    msg.action = 5U;
    msg.longain = 0.0182526214539;
    msg.latgain = 0.0481644376949;
    msg.bondthick = 2577434940U;
    msg.leadgain = 0.770900602229;
    msg.deconflgain = 0.993616009314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.743670662593);
    msg.setSource(39362U);
    msg.setSourceEntity(97U);
    msg.setDestination(19294U);
    msg.setDestinationEntity(66U);
    msg.err_mean = 0.711611661786;
    msg.dist_min_abs = 0.916268706925;
    msg.dist_min_mean = 0.0906876216882;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.551613670236);
    msg.setSource(16500U);
    msg.setSourceEntity(23U);
    msg.setDestination(13069U);
    msg.setDestinationEntity(100U);
    msg.err_mean = 0.806610773762;
    msg.dist_min_abs = 0.720620415928;
    msg.dist_min_mean = 0.508054483104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.352030081753);
    msg.setSource(24537U);
    msg.setSourceEntity(141U);
    msg.setDestination(3764U);
    msg.setDestinationEntity(151U);
    msg.err_mean = 0.289547364087;
    msg.dist_min_abs = 0.00450677202497;
    msg.dist_min_mean = 0.51283833718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.675643601645);
    msg.setSource(56352U);
    msg.setSourceEntity(101U);
    msg.setDestination(2727U);
    msg.setDestinationEntity(112U);
    msg.action = 12U;
    msg.lon_gain = 0.447461798351;
    msg.lat_gain = 0.539804761448;
    msg.bond_thick = 0.927792954731;
    msg.lead_gain = 0.594484550041;
    msg.deconfl_gain = 0.275493462509;
    msg.accel_switch_gain = 0.693507160783;
    msg.safe_dist = 0.921092669754;
    msg.deconflict_offset = 0.687340942427;
    msg.accel_safe_margin = 0.216802676839;
    msg.accel_lim_x = 0.375925111818;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.458505020573);
    msg.setSource(65099U);
    msg.setSourceEntity(3U);
    msg.setDestination(47480U);
    msg.setDestinationEntity(72U);
    msg.action = 242U;
    msg.lon_gain = 0.62129439089;
    msg.lat_gain = 0.872448654717;
    msg.bond_thick = 0.331834209536;
    msg.lead_gain = 0.245261975704;
    msg.deconfl_gain = 0.270868426717;
    msg.accel_switch_gain = 0.0797554039294;
    msg.safe_dist = 0.188285483464;
    msg.deconflict_offset = 0.513114224405;
    msg.accel_safe_margin = 0.926798767183;
    msg.accel_lim_x = 0.89196579075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.126209084499);
    msg.setSource(3736U);
    msg.setSourceEntity(159U);
    msg.setDestination(50705U);
    msg.setDestinationEntity(249U);
    msg.action = 173U;
    msg.lon_gain = 0.869274346029;
    msg.lat_gain = 0.332441710687;
    msg.bond_thick = 0.894353274676;
    msg.lead_gain = 0.00687207169224;
    msg.deconfl_gain = 0.0514790132752;
    msg.accel_switch_gain = 0.119339214787;
    msg.safe_dist = 0.127276060058;
    msg.deconflict_offset = 0.306213850756;
    msg.accel_safe_margin = 0.980225404701;
    msg.accel_lim_x = 0.707335757793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.714656400026);
    msg.setSource(5404U);
    msg.setSourceEntity(174U);
    msg.setDestination(19537U);
    msg.setDestinationEntity(191U);
    msg.type = 70U;
    msg.op = 3U;
    msg.err_mean = 0.939390347798;
    msg.dist_min_abs = 0.954239710788;
    msg.dist_min_mean = 0.0468499065957;
    msg.roll_rate_mean = 0.843046812052;
    msg.time = 0.900519468194;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 194U;
    tmp_msg_0.lon_gain = 0.14964212553;
    tmp_msg_0.lat_gain = 0.315627359842;
    tmp_msg_0.bond_thick = 0.202303000885;
    tmp_msg_0.lead_gain = 0.644301204516;
    tmp_msg_0.deconfl_gain = 0.66680256324;
    tmp_msg_0.accel_switch_gain = 0.845433786285;
    tmp_msg_0.safe_dist = 0.923016877039;
    tmp_msg_0.deconflict_offset = 0.656482994387;
    tmp_msg_0.accel_safe_margin = 0.450958093971;
    tmp_msg_0.accel_lim_x = 0.241349927529;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.878615228135);
    msg.setSource(2730U);
    msg.setSourceEntity(84U);
    msg.setDestination(10333U);
    msg.setDestinationEntity(150U);
    msg.type = 226U;
    msg.op = 114U;
    msg.err_mean = 0.251732287216;
    msg.dist_min_abs = 0.333390685053;
    msg.dist_min_mean = 0.675637378748;
    msg.roll_rate_mean = 0.743898970448;
    msg.time = 0.17332520475;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 152U;
    tmp_msg_0.lon_gain = 0.631671971187;
    tmp_msg_0.lat_gain = 0.751408049526;
    tmp_msg_0.bond_thick = 0.550445261619;
    tmp_msg_0.lead_gain = 0.437864294392;
    tmp_msg_0.deconfl_gain = 0.456933148378;
    tmp_msg_0.accel_switch_gain = 0.527798673826;
    tmp_msg_0.safe_dist = 0.21500213752;
    tmp_msg_0.deconflict_offset = 0.38040460136;
    tmp_msg_0.accel_safe_margin = 0.707187226365;
    tmp_msg_0.accel_lim_x = 0.342534515777;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.802189782501);
    msg.setSource(5286U);
    msg.setSourceEntity(206U);
    msg.setDestination(7128U);
    msg.setDestinationEntity(60U);
    msg.type = 83U;
    msg.op = 7U;
    msg.err_mean = 0.590394188205;
    msg.dist_min_abs = 0.610370983676;
    msg.dist_min_mean = 0.555948133193;
    msg.roll_rate_mean = 0.125296649909;
    msg.time = 0.0561212130633;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 163U;
    tmp_msg_0.lon_gain = 0.517441254323;
    tmp_msg_0.lat_gain = 0.912480837518;
    tmp_msg_0.bond_thick = 0.882127459283;
    tmp_msg_0.lead_gain = 0.309939795867;
    tmp_msg_0.deconfl_gain = 0.863865268189;
    tmp_msg_0.accel_switch_gain = 0.710989369333;
    tmp_msg_0.safe_dist = 0.810147231084;
    tmp_msg_0.deconflict_offset = 0.484713665777;
    tmp_msg_0.accel_safe_margin = 0.0987585758247;
    tmp_msg_0.accel_lim_x = 0.564176894351;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.90220352256);
    msg.setSource(12470U);
    msg.setSourceEntity(47U);
    msg.setDestination(49906U);
    msg.setDestinationEntity(32U);
    msg.uid = 48U;
    msg.frag_number = 242U;
    msg.num_frags = 228U;
    const char tmp_msg_0[] = {-107, 89, -47, 3, -8, -47, 109, 81, -11, -69, -103, 94, 18, -58, -66, 23, -48, -115, -72, 97, 101, 71, 30, -14, -86, 108, -125, 27, -98, 91, -38, 41, -34, -93, 12, 52, 84, 45, 65, -46, 86, 82, -11, -110, -48, 18, 8, -39, -28, 104, -92, 42, -35, 103, -49, 49, 41, 111, -9, -60, -128, -11, 40, 26, -14, 57, 54, 95, -86, 104, -40, 34, -99, -107, 91, 70, -102, 35, 52, -35, 83, 76, -16, -124, 22, -124, 119, -81, 108, -92, 40, -29, -64, -22, -112, -36, 69, 22, 97, -98, 75, 12, -16, 44, -62, -2, 120, -32, 108, 93, 115, -30, 105, 54, -58, 12, 108, -103, 84, -108, 20, -43, -18, 55, -22, 44, 17, 36, 44, 69, -127, -12, 2, -82, -31, -116, -23, 126, -78, 122, -19, -40, -15, -19, -45, 29, 117, 40, -15, 3, 89, -113, 29, -9, 29, 23, 37, 83, 70, -3, 118, 33, 67, -123, 17, 19, -60, 41, -22, 95, -51, 13, 109, -104, -65, -113, 2, 51, 124, 2, -98, 72, -62, 71, 108, 23, 111, -123, -116, -107, 90, -59, -123, 52, 34, 58, 83, -74, 60, 37, -26, 2, 106, 60, -87, 124, -15, -8, 103, -53, 96, -44, -104, -99, -110, -59, -74, 69, -115, 44, 73, 106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.662347324342);
    msg.setSource(56239U);
    msg.setSourceEntity(135U);
    msg.setDestination(60991U);
    msg.setDestinationEntity(79U);
    msg.uid = 40U;
    msg.frag_number = 191U;
    msg.num_frags = 205U;
    const char tmp_msg_0[] = {35, -96, 26, 103, 51, -74, 72, 59, 1, -111, 15, 124, 102, 20, -39, -113, 16, -46, -43, -77, -29, 118, -48, 90, -80, 6, 51, -57, 104, -114, 24, 116, -116, -65, -127, 22, -115, 54, 27, 76, -100, 69, 17, -9, 52, 20, 116, -9, -61, -112, 106, -68, -116, 47, 43, 42, -62, 63, 96, 49, -45, -109, 112, -44, 88, 100, -10, -89, -41, 52, 93, 77, -87, -67, 45, -55, 41, -80, 124, 35, -1, -54, -51, 98, 20, 75, 75, 102, 46, -111, 16, 99, -75, -68, -55, -94, 27, 113, -74, -53, 0, -21, -60, -82, 36, -69, 109, 36, 52, -90, -36, -119, 95, 92, -115, 49, 98, -115, -91, 41, -41, 91, 91, 94, 108, 43};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.908583961713);
    msg.setSource(11931U);
    msg.setSourceEntity(191U);
    msg.setDestination(19840U);
    msg.setDestinationEntity(83U);
    msg.uid = 242U;
    msg.frag_number = 32U;
    msg.num_frags = 122U;
    const char tmp_msg_0[] = {83, -64, 108, 100, 119, 125, -54, -124, 75, 27, -37, -11, -17, -89, 6, 19, 60, -111, -14, -110, 71, 85, 97, 72, -22, 89, 10, -44, 91, -52, 108, -82, 64, -100, -41, 21, -26, -53, -101, 88, 57, -102, -121, -94, 105, 6, -70, 63, -44};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.532954711597);
    msg.setSource(22654U);
    msg.setSourceEntity(235U);
    msg.setDestination(35378U);
    msg.setDestinationEntity(220U);
    msg.content_type.assign("YQGYWQJYGUQUPXKBRJKALNMZHFRGCREPENWXNJBYGMPJBIXLWUWALPNWFADABAICSEQSMONLVKHKZQOOHNRUQJNFKCIQTBLCJAMFZPXMCOBPEXZNCMFKPNMTGWZVFGYUDPJZYRIFOYWTJQUMYOINIDTXZVVZOAWTRSXOFCVZURWLRHXEYSEVWDSSFMIOHQBQVHTEKFIUUCBKEGLTKSBRRETTGHVOMHTVS");
    const char tmp_msg_0[] = {-107, -78, 120, 117, 7, 124, 10, 64, 77, -3, 44, 0, -97, 2, 6, -42, -2, -35, 29, 84, 88, -109, 10, 58, -61, -38, 107, 88, -71, -106, -81, 86, 28, -100, 122, -81, 84, -98, -61, 44, -63, 119, -11, -2, 55, 23, -62, -34, 35, -68, 109, -27, 39, 102, 65, 52, -16, 104, 106, 34, -11, -38, 12, 58, 77, 62, 26, -75, -101, -15, 121, 79, -116, 96, -88, 22, -125, 105, -121, -26, -35, 108, -82, -14, 19, 93, 114, -76, -104, -73, -71, 98, 57, 71, -114, 101, -91, 55, -60, -73, -94, 14, 39, -66, -100, -34, -28, -4, 50, 125, -10, 20, 29, 50, 104, 93, 23, 7, 109, -82, 73, -9, -103, -125, -91, 104, 70, 110, -98, -60, 89, 17, 71, 5, 61, 61, 20, -27, 6, 82, -115, -89, -23, -72, 20, -32, 30};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.375447873139);
    msg.setSource(29996U);
    msg.setSourceEntity(63U);
    msg.setDestination(31096U);
    msg.setDestinationEntity(122U);
    msg.content_type.assign("DVSLFYKCGEBOUPNUYYTKRUDUCBVAPJRKKOQLMWQGWVNRJCEIJGDJRMWJRBYBXXPFPLOSWRCGS");
    const char tmp_msg_0[] = {27, 14, -113, 81, -46, 113, 80, 7, -33, -38, -123, -110, -93, 123, -37, -25, 57, -126, -93, 50, -99, -93, -123, -117, 37, 19, -62, -111, -2, 50, -77, 35, -14, 89, 44, 63, 95, 110, -122, 57, -126};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.741907152086);
    msg.setSource(62657U);
    msg.setSourceEntity(249U);
    msg.setDestination(25011U);
    msg.setDestinationEntity(89U);
    msg.content_type.assign("RYTCGJQHXIHUGBPNKH");
    const char tmp_msg_0[] = {-79, -10, 119, 79, -55, 68, -98, -21, 103, -81, 31, -84, -119, 106, 90, 72, 89, -121, 83, 19, -36, -13, 86, -109, 116, -6, -30, 12, -3, -81, 91, -70, -103, 90, -101, -117, -123, 58, -67, 69, 117, 97, 31, -91, -32, -3, 40, 10, 48, -20, -66, -95, -117, -105, 61, 86, -21, -99, -87, 47, 89, 15, -29, 124, -41, -20, 77, -18, 109, -77, -20, 102, 94, -103, -122, 7, 13, 115, -35, -102, -37, -78, -33, 88, 99, 63, 94, 125, -71, -101, 23, 78, -14, -112, 82, 50, 35, 45, 117, -40, 104, 36, 11, 41, -106, 35, 102, 35, -8, -111, -39, 56, 9, 18, -37, -74, -26, 99, -66, -114, -7, -84, 44, 45, -95, 62, -50, -80, -95, 80, 74, 13, -21, -92, 58, -11, 81, 14, 99, -58, 46, 31, -40, 17, -94, 53, 88, 65, -34, 53, -11, 74, -126, -30, 46, -86};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.630818203321);
    msg.setSource(22195U);
    msg.setSourceEntity(167U);
    msg.setDestination(3711U);
    msg.setDestinationEntity(188U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.985918617135);
    msg.setSource(63024U);
    msg.setSourceEntity(234U);
    msg.setDestination(4370U);
    msg.setDestinationEntity(20U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.1261167275);
    msg.setSource(57381U);
    msg.setSourceEntity(158U);
    msg.setDestination(28904U);
    msg.setDestinationEntity(209U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.165007598039);
    msg.setSource(22011U);
    msg.setSourceEntity(75U);
    msg.setDestination(18297U);
    msg.setDestinationEntity(245U);
    msg.target = 524U;
    msg.bearing = 0.567609442384;
    msg.elevation = 0.613078538017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.490426547747);
    msg.setSource(27678U);
    msg.setSourceEntity(113U);
    msg.setDestination(21832U);
    msg.setDestinationEntity(128U);
    msg.target = 14996U;
    msg.bearing = 0.184170664211;
    msg.elevation = 0.704837320289;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.811852381072);
    msg.setSource(14816U);
    msg.setSourceEntity(30U);
    msg.setDestination(14431U);
    msg.setDestinationEntity(158U);
    msg.target = 44616U;
    msg.bearing = 0.833586067907;
    msg.elevation = 0.788886766438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.0745006252135);
    msg.setSource(6034U);
    msg.setSourceEntity(145U);
    msg.setDestination(10411U);
    msg.setDestinationEntity(132U);
    msg.target = 26146U;
    msg.x = 0.960617373383;
    msg.y = 0.540238819775;
    msg.z = 0.993861602652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.16643548761);
    msg.setSource(38432U);
    msg.setSourceEntity(138U);
    msg.setDestination(62797U);
    msg.setDestinationEntity(27U);
    msg.target = 43425U;
    msg.x = 0.786150264659;
    msg.y = 0.634486374539;
    msg.z = 0.0409532004469;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.187086815445);
    msg.setSource(21698U);
    msg.setSourceEntity(65U);
    msg.setDestination(28084U);
    msg.setDestinationEntity(55U);
    msg.target = 30670U;
    msg.x = 0.211790035168;
    msg.y = 0.633067184278;
    msg.z = 0.866584614377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.2853850035);
    msg.setSource(18671U);
    msg.setSourceEntity(6U);
    msg.setDestination(18881U);
    msg.setDestinationEntity(42U);
    msg.target = 11355U;
    msg.lat = 0.350998032598;
    msg.lon = 0.346117921695;
    msg.z_units = 37U;
    msg.z = 0.539338501092;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.28763832251);
    msg.setSource(31353U);
    msg.setSourceEntity(42U);
    msg.setDestination(38046U);
    msg.setDestinationEntity(220U);
    msg.target = 3227U;
    msg.lat = 0.494022035685;
    msg.lon = 0.770854327099;
    msg.z_units = 84U;
    msg.z = 0.55222472043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.935648222153);
    msg.setSource(18332U);
    msg.setSourceEntity(23U);
    msg.setDestination(62220U);
    msg.setDestinationEntity(168U);
    msg.target = 34156U;
    msg.lat = 0.452028991821;
    msg.lon = 0.114251499504;
    msg.z_units = 210U;
    msg.z = 0.0639271545871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.771477851367);
    msg.setSource(30508U);
    msg.setSourceEntity(98U);
    msg.setDestination(2936U);
    msg.setDestinationEntity(188U);
    msg.locale.assign("TDABSZTMXHJ");
    const char tmp_msg_0[] = {-31, -84, -127, -1, 62, -96, -128, -71, 44, -1, 53, 42, -25, -92, -114, -49, 67, 64, 6, -75, -82, 120, 77, -97, 0, -52, 8, 95};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.73519500016);
    msg.setSource(54136U);
    msg.setSourceEntity(173U);
    msg.setDestination(15211U);
    msg.setDestinationEntity(207U);
    msg.locale.assign("FCNDXUJAIARPMTAMJZRBHYTIYGNBCKPHEGIPVYHMGMKDSALHKZISCCRMBDIKLPFVHSTKQQXFGHLERLFPFBQYNQQWWDIEAMGAWXIPFNYEOXRTJRODJUOCBLSLSXEUKOYFNFHPOAWBYCWSPVHNZEGXWAAUCFJOZXGQVQMWTGKYEVLCDWVWDUB");
    const char tmp_msg_0[] = {101, -25, -51, 82, 9, -1, -51, -18, 94, -120, 27, 115, 35, -24, 30, -94, -113, 17, -17, 90, -88, -16, 81, -121, -128, 120, -84, -2, 109, 76, 83, 73, 108, 17, -40, -54, 112, -105, -104, -21, -79, 57, 74, 52, -81, 87, 21, -86, 29, -100, 0, -126, -8, 40, -55, -89, 65, -122, 22, -32, -115, 15, -82, 52, -99, -116, 83, -8, 72, -5, 118, -27, -99, -66, -27, -84, -120, 35, -19, 5, 113, 1};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.511814858142);
    msg.setSource(32643U);
    msg.setSourceEntity(23U);
    msg.setDestination(19375U);
    msg.setDestinationEntity(50U);
    msg.locale.assign("PSTPIQUZHCOUASHUDNDLWQVNBVNLKLIKRTSSRPWIJDVPEHITWUYHOMENOGLROZEKZFKFFOLBJGRMXWQHNKRTSNPBAPXYMCFPALVBLQIKWBQNCDFTFYNZDAMYCJEUWBVMVGMBCFQXBSQEAHCCWJQGVSXAPZKEGJOIDZRWZRUACSKXHGWUZNEIHTMYXPGRHKQUYBTMBXWXFXIKYZETJXJIJELOIAMFAETRVOLYSLSCAV");
    const char tmp_msg_0[] = {-84, -2, 99, -81, -85, 114, -1, -39, -7, -61, 45, 108, -113, -24, 119, 10, 81, -80, 98, -6, -44, -68, 97, 121, -73, 50, 73, -36, -22, 36, -113, -77, 101, -78, 18, -122, 62, 76, 71, -19, -10, -87, 66, 66, 24, -91, 32, 54, 1, 80, 10, 101, -54, 103, 123, -18, -97, -74, 86, -14, 28, 15, 34, 67, -19, 91, -54, -102, -92, 66, 22, 20, 101, -123, -111, 59, -32, 99, -86, -84, -72, 116, 91, -59, 63, 94, 71, -70, 73, 30, -76, 112, 65, -22, -21, 24, 51, -11, -105, 87, -87, -59, -63, 107, 107, 1, 125, -18, -17, 39, -27, -98, -104, -51, 115, 119, 42, 50, 35, -2, -104, 104, -45, -80, -80, 27, 56, -10, 97, 4, 94, 13, 7, 8, -25, -119, -77, -78, 79, 117, -117, -7, -115, -42, -24, 51, -38, 20, 14, -42, 92, 26, 24, -34, 24, -1, 52, 15, 32, -27, -125, 124, -46, -16, -55, 119, 28, 61, -67, -60, -53, -53, 76, 6, -126, 104, 10, 81, -52, -27, 85, -32, 35, -49, -102, -119, -26, 44, -23, 5, 25, 57, -8, -60, 107, -22};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.869220708558);
    msg.setSource(37492U);
    msg.setSourceEntity(139U);
    msg.setDestination(55510U);
    msg.setDestinationEntity(105U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.960064217965);
    msg.setSource(1583U);
    msg.setSourceEntity(162U);
    msg.setDestination(63862U);
    msg.setDestinationEntity(65U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.391015187307);
    msg.setSource(36137U);
    msg.setSourceEntity(52U);
    msg.setDestination(2854U);
    msg.setDestinationEntity(235U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.444941288207);
    msg.setSource(33666U);
    msg.setSourceEntity(109U);
    msg.setDestination(47373U);
    msg.setDestinationEntity(228U);
    msg.camid = 158U;
    msg.x = 28768U;
    msg.y = 64005U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.0940283732511);
    msg.setSource(35518U);
    msg.setSourceEntity(197U);
    msg.setDestination(37958U);
    msg.setDestinationEntity(29U);
    msg.camid = 22U;
    msg.x = 4780U;
    msg.y = 63359U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.787665842042);
    msg.setSource(44210U);
    msg.setSourceEntity(243U);
    msg.setDestination(19983U);
    msg.setDestinationEntity(84U);
    msg.camid = 167U;
    msg.x = 44261U;
    msg.y = 57217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.866310174078);
    msg.setSource(44884U);
    msg.setSourceEntity(220U);
    msg.setDestination(40055U);
    msg.setDestinationEntity(239U);
    msg.camid = 248U;
    msg.x = 17151U;
    msg.y = 39019U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.342274140712);
    msg.setSource(17769U);
    msg.setSourceEntity(254U);
    msg.setDestination(47386U);
    msg.setDestinationEntity(240U);
    msg.camid = 56U;
    msg.x = 56760U;
    msg.y = 54251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.0508953019269);
    msg.setSource(17529U);
    msg.setSourceEntity(154U);
    msg.setDestination(17053U);
    msg.setDestinationEntity(185U);
    msg.camid = 153U;
    msg.x = 25524U;
    msg.y = 40808U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.515042103621);
    msg.setSource(3534U);
    msg.setSourceEntity(17U);
    msg.setDestination(59954U);
    msg.setDestinationEntity(251U);
    msg.tracking = 199U;
    msg.lat = 0.122585257832;
    msg.lon = 0.592010317641;
    msg.x = 0.0863284044047;
    msg.y = 0.446160896812;
    msg.z = 0.877383626041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.927903110118);
    msg.setSource(7437U);
    msg.setSourceEntity(230U);
    msg.setDestination(19788U);
    msg.setDestinationEntity(114U);
    msg.tracking = 74U;
    msg.lat = 0.456127817004;
    msg.lon = 0.272167679679;
    msg.x = 0.766314745385;
    msg.y = 0.148731034045;
    msg.z = 0.532944069824;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.179543313687);
    msg.setSource(18408U);
    msg.setSourceEntity(56U);
    msg.setDestination(17283U);
    msg.setDestinationEntity(221U);
    msg.tracking = 128U;
    msg.lat = 0.745815257237;
    msg.lon = 0.860066029476;
    msg.x = 0.696829930863;
    msg.y = 0.222207380614;
    msg.z = 0.538801539662;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.904297086449);
    msg.setSource(62902U);
    msg.setSourceEntity(8U);
    msg.setDestination(2438U);
    msg.setDestinationEntity(172U);
    msg.target.assign("LPMAHXJMWUQNPZNAUEIONE");
    msg.lbearing = 0.459629781345;
    msg.lelevation = 0.567560730004;
    msg.bearing = 0.787604222224;
    msg.elevation = 0.672510346529;
    msg.phi = 0.341184339662;
    msg.theta = 0.675304359424;
    msg.psi = 0.566418688997;
    msg.accuracy = 0.26973722061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.909340792337);
    msg.setSource(23184U);
    msg.setSourceEntity(63U);
    msg.setDestination(35855U);
    msg.setDestinationEntity(144U);
    msg.target.assign("IUEEVFPGWEMQICMYGBCVFOSYUDOSHGKHIWHHUIIETZGQASUBWQFNKTERNICFDDKBOMJDLROUARRRBPCWAHTXVLVHJWCDUMOKUHGNJSUSFRBVBZGHXZMTQRYOMXECGEXKRPTSZZTNCW");
    msg.lbearing = 0.667019274081;
    msg.lelevation = 0.261269179704;
    msg.bearing = 0.1377381128;
    msg.elevation = 0.119107776555;
    msg.phi = 0.663261088938;
    msg.theta = 0.971856906336;
    msg.psi = 0.542269355695;
    msg.accuracy = 0.542027696114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.361761722522);
    msg.setSource(27731U);
    msg.setSourceEntity(27U);
    msg.setDestination(51340U);
    msg.setDestinationEntity(100U);
    msg.target.assign("IMPTSHINFATFRLWLCSPQGKNJJBLNCZGZVIVOFPQSQZPDOGKURYYARJMKKCFXHVVJXEUESUCIILBRTLZANCDVSVGGPOERFYZZIEQKVAYSWTDOXQGTWSHEPMWMELEOFGJNXDNOFCPDHHWWZLSR");
    msg.lbearing = 0.960002190261;
    msg.lelevation = 0.456767376596;
    msg.bearing = 0.905975823588;
    msg.elevation = 0.330314441695;
    msg.phi = 0.252257773758;
    msg.theta = 0.4261084362;
    msg.psi = 0.101531814365;
    msg.accuracy = 0.78516106359;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.781017443255);
    msg.setSource(41742U);
    msg.setSourceEntity(39U);
    msg.setDestination(31362U);
    msg.setDestinationEntity(64U);
    msg.target.assign("QJDIAZDBJYIHGFDXIMGNPHIPPRUGGQDPRYELKLIWFGKMDVCAWFOJYJYXWSUOUMGNFONYEBKBDSUKIMLEEJOCUPWFTWLEYWDBXXZJQRKLGHZOZWFNUMVYDFCCGLTAZHFATESNHKANWNPCCGSVMRSBAKUUFVZBMHHTTTCRZDSNJHXWEMQSVYTRPXRHVBRLNBQAHLYWBPPQTEZVMLRXJEUSOYOKQJMQDQCXKEIFZRLCIXUXANBSTISCV");
    msg.x = 0.548610767544;
    msg.y = 0.290360360888;
    msg.z = 0.231016060366;
    msg.n = 0.455465799204;
    msg.e = 0.025708355587;
    msg.d = 0.643829154641;
    msg.phi = 0.912944318557;
    msg.theta = 0.894977601608;
    msg.psi = 0.925116849168;
    msg.accuracy = 0.352195938256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.483183553124);
    msg.setSource(19889U);
    msg.setSourceEntity(242U);
    msg.setDestination(46504U);
    msg.setDestinationEntity(207U);
    msg.target.assign("IVMJEODCWTLUVWOXNWMAUDWGQFHKVNVYWUBXIVZGHZLPRRRHBJTJYWZMZJKTSKTLPNRIYIJSBWCEFYVIAPAXQLWZZLJSNR");
    msg.x = 0.630778656056;
    msg.y = 0.153914470196;
    msg.z = 0.319704868284;
    msg.n = 0.298713500324;
    msg.e = 0.54506657465;
    msg.d = 0.501925591779;
    msg.phi = 0.819422322741;
    msg.theta = 0.492656524413;
    msg.psi = 0.723278580671;
    msg.accuracy = 0.0787987578278;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.572913859326);
    msg.setSource(53095U);
    msg.setSourceEntity(43U);
    msg.setDestination(35357U);
    msg.setDestinationEntity(198U);
    msg.target.assign("JVENZSIXXPCWLBKVFYNAKTRLKFEJPJYVZUAYQCCXCGZ");
    msg.x = 0.427585067464;
    msg.y = 0.369123682985;
    msg.z = 0.925200257492;
    msg.n = 0.887056231109;
    msg.e = 0.268928399138;
    msg.d = 0.148536767253;
    msg.phi = 0.709159420792;
    msg.theta = 0.72562522662;
    msg.psi = 0.00667874611845;
    msg.accuracy = 0.637770869236;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.946013194985);
    msg.setSource(37762U);
    msg.setSourceEntity(42U);
    msg.setDestination(40466U);
    msg.setDestinationEntity(101U);
    msg.target.assign("SIHJFUCVVLOHTSKMKEBOEHFVOUYIZLZ");
    msg.lat = 0.94532462928;
    msg.lon = 0.111878312508;
    msg.z_units = 149U;
    msg.z = 0.0401549055948;
    msg.accuracy = 0.908564484266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.158394260299);
    msg.setSource(26641U);
    msg.setSourceEntity(224U);
    msg.setDestination(58018U);
    msg.setDestinationEntity(241U);
    msg.target.assign("FTCVUYQDLOGZZGWUMWQVNTSHSLVIEINVMXUFBGLLOWOXTUAIFOERZHRBWSDEMJLPKEFIZONMARJYEHQZBPXNSJLPKQBANBCPPIFPRIKJSSYAGQLOXUWGCDUIWKWKOYJBDASXHAYWDAYVPMGXHKCOTNJIQNRKDPHHGCDBXDCFGSHCAGYZZKCFRANATOTXBQFMCLSJXKYUZZTUMQZUHRMVGLOESDHNLDJETVTTCFRNQJVYIYVQIXMW");
    msg.lat = 0.757096336493;
    msg.lon = 0.766167035359;
    msg.z_units = 30U;
    msg.z = 0.683504298347;
    msg.accuracy = 0.164695655589;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.322185147751);
    msg.setSource(24977U);
    msg.setSourceEntity(159U);
    msg.setDestination(31835U);
    msg.setDestinationEntity(196U);
    msg.target.assign("STALMPYQOXOPUMXWYXKXQLSSJKZAGBICUGMRMTMAPQGAEYWTLDOIPXFKYRLGCGOTPYFCZRFNWCVKAJQSLQCLWXBMJVYNDIFBASOUWUCHEDUBRPCHIDPUAZVESJYSXINOLWWNTDOPHWVFQDCALYGNFTTVVHJBFQOEJRSNECV");
    msg.lat = 0.478444040828;
    msg.lon = 0.222694342456;
    msg.z_units = 4U;
    msg.z = 0.954446202305;
    msg.accuracy = 0.740635002463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.424296613449);
    msg.setSource(11418U);
    msg.setSourceEntity(181U);
    msg.setDestination(22046U);
    msg.setDestinationEntity(63U);
    msg.name.assign("CMJTLMNJVTKZJWUAN");
    msg.lat = 0.542452290857;
    msg.lon = 0.0632237631075;
    msg.z = 0.0922676219259;
    msg.z_units = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.909584827905);
    msg.setSource(12044U);
    msg.setSourceEntity(190U);
    msg.setDestination(14091U);
    msg.setDestinationEntity(222U);
    msg.name.assign("SDNBQTDZBHXDFKWIVL");
    msg.lat = 0.898207949413;
    msg.lon = 0.400589260156;
    msg.z = 0.493592264823;
    msg.z_units = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.733718337046);
    msg.setSource(37812U);
    msg.setSourceEntity(245U);
    msg.setDestination(11374U);
    msg.setDestinationEntity(161U);
    msg.name.assign("ZSPRDIJJAQRFFSFRUZFSVCLUCSRBQUQZEJGIMMBHFNUSQYTAYLORZUOZWCPWBBVNJITCVVOHTWEATARTUPQCABJMNGTHYPGTINHOXQWHXXJITMSFTFULYCGVYWPJCIXSSPLNEOLXMWLIDSLGQZPODDPOEXSIGEMEHEYBWHDKLZXDFEMXYKNBGIKZUOQWEHJMVQMKJRVNDRIAYHJYYA");
    msg.lat = 0.0698971118975;
    msg.lon = 0.795345701046;
    msg.z = 0.96072871391;
    msg.z_units = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.28387068595);
    msg.setSource(56524U);
    msg.setSourceEntity(51U);
    msg.setDestination(36736U);
    msg.setDestinationEntity(28U);
    msg.op = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.772637222715);
    msg.setSource(51980U);
    msg.setSourceEntity(77U);
    msg.setDestination(21119U);
    msg.setDestinationEntity(225U);
    msg.op = 53U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("SZXNDZUDRRFILLBNYDJFNSIFVBAZKPOFEPQOYJSKMKTJOGBRLVABDIZDTRCHQUQXEZOIOJCZGJCIPMVZWMEGYRXGAELSTMRLLDCFYVUCHSNWNKPPJAWOPMOVCIHMBGWXVRQXEKGOUSBKNUUCIFWRQCLBYGNIETYQLVWNJJXPAN");
    tmp_msg_0.lat = 0.995578610524;
    tmp_msg_0.lon = 0.14816478229;
    tmp_msg_0.z = 0.359027388377;
    tmp_msg_0.z_units = 100U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.905956550993);
    msg.setSource(25860U);
    msg.setSourceEntity(232U);
    msg.setDestination(10068U);
    msg.setDestinationEntity(210U);
    msg.op = 171U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CMQJALMGLYRXMJE");
    tmp_msg_0.lat = 0.884650469584;
    tmp_msg_0.lon = 0.160008131003;
    tmp_msg_0.z = 0.210634267193;
    tmp_msg_0.z_units = 131U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.137257189427);
    msg.setSource(37649U);
    msg.setSourceEntity(23U);
    msg.setDestination(1004U);
    msg.setDestinationEntity(55U);
    msg.value = 0.129981797814;
    msg.type = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.85707198926);
    msg.setSource(22222U);
    msg.setSourceEntity(7U);
    msg.setDestination(53048U);
    msg.setDestinationEntity(58U);
    msg.value = 0.750980360581;
    msg.type = 127U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.328998013152);
    msg.setSource(19954U);
    msg.setSourceEntity(37U);
    msg.setDestination(27601U);
    msg.setDestinationEntity(46U);
    msg.value = 0.309989455588;
    msg.type = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.0498061101862);
    msg.setSource(43806U);
    msg.setSourceEntity(236U);
    msg.setDestination(52869U);
    msg.setDestinationEntity(187U);
    msg.value = 0.857011260692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.780027921979);
    msg.setSource(15213U);
    msg.setSourceEntity(127U);
    msg.setDestination(55917U);
    msg.setDestinationEntity(38U);
    msg.value = 0.970926640044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.843166734526);
    msg.setSource(24699U);
    msg.setSourceEntity(167U);
    msg.setDestination(13638U);
    msg.setDestinationEntity(92U);
    msg.value = 0.120187747121;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.215920506518);
    msg.setSource(57420U);
    msg.setSourceEntity(248U);
    msg.setDestination(40118U);
    msg.setDestinationEntity(19U);
    msg.timestamp_last_service = 0.223365298009;
    msg.time_next_service = 0.610446328927;
    msg.time_motor_next_service = 0.840462821152;
    msg.time_idle_ground = 0.334128256464;
    msg.time_idle_air = 0.843824545704;
    msg.time_idle_water = 0.532260875442;
    msg.time_idle_underwater = 0.365004447547;
    msg.time_idle_unknown = 0.492006891004;
    msg.time_motor_ground = 0.0584744050119;
    msg.time_motor_air = 0.531244788018;
    msg.time_motor_water = 0.338332224399;
    msg.time_motor_underwater = 0.282694006029;
    msg.time_motor_unknown = 0.341515941699;
    msg.rpm_min = -15749;
    msg.rpm_max = 9544;
    msg.depth_max = 0.0432504859733;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.156708747973);
    msg.setSource(49536U);
    msg.setSourceEntity(211U);
    msg.setDestination(30749U);
    msg.setDestinationEntity(166U);
    msg.timestamp_last_service = 0.184485406064;
    msg.time_next_service = 0.998251712028;
    msg.time_motor_next_service = 0.943088602269;
    msg.time_idle_ground = 0.295715567709;
    msg.time_idle_air = 0.471177643146;
    msg.time_idle_water = 0.994274230041;
    msg.time_idle_underwater = 0.336694805224;
    msg.time_idle_unknown = 0.557120383203;
    msg.time_motor_ground = 0.313127859434;
    msg.time_motor_air = 0.541240542224;
    msg.time_motor_water = 0.52797644411;
    msg.time_motor_underwater = 0.456763901443;
    msg.time_motor_unknown = 0.167588649546;
    msg.rpm_min = 27105;
    msg.rpm_max = 17992;
    msg.depth_max = 0.0699162077177;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.957652359842);
    msg.setSource(14421U);
    msg.setSourceEntity(254U);
    msg.setDestination(7463U);
    msg.setDestinationEntity(1U);
    msg.timestamp_last_service = 0.0256825878247;
    msg.time_next_service = 0.743492476936;
    msg.time_motor_next_service = 0.942732952231;
    msg.time_idle_ground = 0.406625629597;
    msg.time_idle_air = 0.0325841542161;
    msg.time_idle_water = 0.608021956591;
    msg.time_idle_underwater = 0.335377125597;
    msg.time_idle_unknown = 0.621118572132;
    msg.time_motor_ground = 0.706470509683;
    msg.time_motor_air = 0.73304409699;
    msg.time_motor_water = 0.160068643054;
    msg.time_motor_underwater = 0.464749760099;
    msg.time_motor_unknown = 0.506172718305;
    msg.rpm_min = -15195;
    msg.rpm_max = -7096;
    msg.depth_max = 0.214644858077;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.509460299322);
    msg.setSource(2199U);
    msg.setSourceEntity(225U);
    msg.setDestination(50522U);
    msg.setDestinationEntity(203U);
    msg.severity = 81U;
    msg.text.assign("TTEAMVUSUZXOMFJPPCAPPWGKLRDPYDGEXKCWQOZJSTNCOFKFEIHTNWLLIWICBEFBMYYZBEMABXVTQRGWBXMDIRTSVMWOUHAIEWNRNLCZMOLRSLJQRUYBVTVGQIKIJQQCAFAXONAOKQOLRVAGEUYFSYXY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.382495375342);
    msg.setSource(2442U);
    msg.setSourceEntity(48U);
    msg.setDestination(55767U);
    msg.setDestinationEntity(164U);
    msg.severity = 110U;
    msg.text.assign("IAVMYXLDZHQHRNOZIQOGFJXXVULTYVDIEKWWHFTEOGCWQUHDQIKTEDSWTKUCGNYIZBFVUSOGEFKNHMMZUDYWJTRVPWYFSSEBWNBYJYQJSXOSZQCOCPMVCRMCGJNMXULQIGQCHPLXLQKJDPQDEXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.507727623544);
    msg.setSource(44014U);
    msg.setSourceEntity(135U);
    msg.setDestination(46485U);
    msg.setDestinationEntity(134U);
    msg.severity = 85U;
    msg.text.assign("VZRTUDAIVZFRSLDRFKPJPFHYTDNQEDSOQAZWOAKLMLKRSQOYIPZWCRNCKHSACXBOXRYLAFECWLLBLMUHXNOQYTHWBNPSFRWUSBETRGQMLCGMXNFEIQYALDEMPZYTQXHQABQGMXDAGSVDGNZPJKRUFNRUWVWSPINXIJHWLTQNOGVZJAUEKTHCOEBWEJMBYIAOJWKXKOUGYMGCZHVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.607175969868);
    msg.setSource(1006U);
    msg.setSourceEntity(3U);
    msg.setDestination(49782U);
    msg.setDestinationEntity(203U);
    msg.channel = -38;
    msg.value = 1721754479;
    msg.gain = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.601133185741);
    msg.setSource(64309U);
    msg.setSourceEntity(90U);
    msg.setDestination(13246U);
    msg.setDestinationEntity(196U);
    msg.channel = 33;
    msg.value = -723869015;
    msg.gain = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.71263634834);
    msg.setSource(1721U);
    msg.setSourceEntity(89U);
    msg.setDestination(60588U);
    msg.setDestinationEntity(245U);
    msg.channel = 89;
    msg.value = -86028918;
    msg.gain = 32U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
