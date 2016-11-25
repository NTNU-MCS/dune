//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 6aaa9c7287633275734709db667b9953                            *
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
    msg.setTimeStamp(0.280078513951);
    msg.setSource(6138U);
    msg.setSourceEntity(168U);
    msg.setDestination(9926U);
    msg.setDestinationEntity(35U);
    msg.state = 134U;
    msg.flags = 16U;
    msg.description.assign("UPWSEZXXYRTGIHNWKPKPOEYSBQPLIXCIWWCGJEAVFTMWLLOOULVVCQHTSUXXLEFGITVVYBGFLLIHSXZJFGIHPCTPHQGXOMROKPDCABZMRKGDNYDZOYJUIEKDZNAQKUSZAVAZDAUZAWQTTPFYHMMEJBSNVCFLRFUYJCCSLZDXQKFBEFXCQHHIKNVBTOMDRYHAEMSQGPBJGYNRURM");

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
    msg.setTimeStamp(0.43675833163);
    msg.setSource(14700U);
    msg.setSourceEntity(244U);
    msg.setDestination(8547U);
    msg.setDestinationEntity(134U);
    msg.state = 1U;
    msg.flags = 8U;
    msg.description.assign("WPIVUKVYEEFEHQKPIZBIERVQNJONWVMLFLJGHKMWUKWQRDOKVHMYSKTCCVPCDWCYREVALSUOPTU");

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
    msg.setTimeStamp(0.808269249349);
    msg.setSource(20865U);
    msg.setSourceEntity(156U);
    msg.setDestination(59507U);
    msg.setDestinationEntity(182U);
    msg.state = 235U;
    msg.flags = 18U;
    msg.description.assign("RGRLXUBKAYRBFNSFXBKWIGQOAPCKJHLLKVJAPTBNKVDMTSLVZFFVPPHEVVKEQYWKUUOCRJECAUXWINPJPSMOOTJLBXXQJLFQXDWFWZYESDSBHTMCLTROZGEOZIEWIXNNLQQABSFXONLICMRHSVCUBTHNGPKWIQQGLXMDZMAYPTDFZISUHOAIGWBCCNFKNNOQTYIAYCZZMDMGJQJEHRRVHJITDDTHYYWRFEDOHSUAMKGUUWVJYPZCXMGEUY");

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
    msg.setTimeStamp(0.380037205836);
    msg.setSource(18238U);
    msg.setSourceEntity(145U);
    msg.setDestination(42230U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.228612717413);
    msg.setSource(31863U);
    msg.setSourceEntity(73U);
    msg.setDestination(38820U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.0252972508775);
    msg.setSource(54434U);
    msg.setSourceEntity(206U);
    msg.setDestination(464U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.763663058362);
    msg.setSource(48001U);
    msg.setSourceEntity(249U);
    msg.setDestination(55273U);
    msg.setDestinationEntity(2U);
    msg.id = 231U;
    msg.label.assign("TFRTGIGXEXTUDNKOHLMBXRPRMJGXRKIHALEHKEUKOEHYZATWNCIHBSJCMSYVUAGWWATWYPXVMAAMPTOPURJJUSLVUZNSUSGFVSBMWLVSAAPFLNDCQNDCRYXUINOIUFEAESHJSKMPOZOYLLWVCCTXNQOYZWQOQRJHGFDCEFTH");
    msg.component.assign("LDLZNMNOPFUNFKUAJSZBXXQLSZCMQHQQGEVEZZBZCIUTXJGHCKKDOYAIIRFIVJPAXTWVLVHRMBVQFEPCHVLGEWNUNRQKCKTQEIPXCJTDDYMOWJHYMRTFLRFWJIUTOSL");
    msg.act_time = 62396U;
    msg.deact_time = 783U;

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
    msg.setTimeStamp(0.661401288052);
    msg.setSource(34445U);
    msg.setSourceEntity(14U);
    msg.setDestination(2017U);
    msg.setDestinationEntity(142U);
    msg.id = 250U;
    msg.label.assign("KMFOTULXSUTJFYHZBKCPVIXUVOEIZWHOYXIZOGZURUXNAPFNRMGTFWFKZMJVWMLRIJTEGQSGDGPAYLKAVPKEZESCGMMXVBSOMXQKGLCAJCIOBXQEYZCACCEBSLDVYPSUHDQFNSVLETIYBQSVLHKNQCHEMRRJDUBZDCNHGUBXROIIADONIPPLHCOFRWPKYAJGAFJQNVJY");
    msg.component.assign("FIXFRCSXEAVNVUKFUQSASKLAGBDNABKNBBPXSSCMUKOYGUAKOKDHAQVMSWEZBBGKVHAPBXRSWMVGVOZC");
    msg.act_time = 55645U;
    msg.deact_time = 61165U;

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
    msg.setTimeStamp(0.474157305962);
    msg.setSource(733U);
    msg.setSourceEntity(246U);
    msg.setDestination(10301U);
    msg.setDestinationEntity(82U);
    msg.id = 68U;
    msg.label.assign("NJYTOSIPLDYYRFDCIRSFZXWKGGBBPDNAEXURZDRFQCUZXGORWQNBYDDYTWAIPEEIFKPVBIGWBJACAJUQMWMLNPKTJXXMQRYFZBAGUXTMAUOOITPLICQJ");
    msg.component.assign("PSDMRPWUFKFBJIRJCMARGYQNPREOWBWUDUQOFXOPATDUZABXLYQXKWLOIABSBKZKGKTLCQOWNY");
    msg.act_time = 12009U;
    msg.deact_time = 31767U;

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
    msg.setTimeStamp(0.127362951369);
    msg.setSource(35804U);
    msg.setSourceEntity(101U);
    msg.setDestination(22962U);
    msg.setDestinationEntity(225U);
    msg.id = 161U;

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
    msg.setTimeStamp(0.977327088204);
    msg.setSource(23567U);
    msg.setSourceEntity(11U);
    msg.setDestination(19206U);
    msg.setDestinationEntity(187U);
    msg.id = 213U;

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
    msg.setTimeStamp(0.320452099566);
    msg.setSource(65522U);
    msg.setSourceEntity(135U);
    msg.setDestination(20374U);
    msg.setDestinationEntity(200U);
    msg.id = 194U;

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
    msg.setTimeStamp(0.558390861615);
    msg.setSource(50298U);
    msg.setSourceEntity(203U);
    msg.setDestination(16582U);
    msg.setDestinationEntity(199U);
    msg.op = 251U;
    msg.list.assign("QROACWIKNNADTRQXPMGXPILTXHYDHGZDMKYJBYNAEWMWINBOTKYSCUDHPVPISEKSETFSCTDVIUHGHVYOQDIKOFBAUHJRZRWBDJAHGHSPIRFBEDIIPPFOMBEQZCCJRVGAESVQKGNKOCPWQNRKOQCZLXKRVCDJXIMGPLSYOTWJUEZBLNLURFNOLQWUYZMQLSCA");

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
    msg.setTimeStamp(0.646477404055);
    msg.setSource(11494U);
    msg.setSourceEntity(94U);
    msg.setDestination(30306U);
    msg.setDestinationEntity(87U);
    msg.op = 109U;
    msg.list.assign("HVYDHAFYBVMQKUFWRQDGJSCLQFQYBJIWSIPIHKBKTDTUCW");

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
    msg.setTimeStamp(0.0149236611603);
    msg.setSource(1097U);
    msg.setSourceEntity(5U);
    msg.setDestination(32105U);
    msg.setDestinationEntity(93U);
    msg.op = 167U;
    msg.list.assign("NBDKEANWIMROHJLQYVKUBVHDNVCRIAWYBZPAAIGVRJIVWPCKUGTKTMNWDFYWMAYXFQBSJGTXPODCQIRALYHTZXOMATDDLXYWLIWMUMCUTJMMVVETJKYYBPZJCFFUZNXGSEPOKGVQHVJTHXSHEISANSVIZASCWJBZNFOQRIQZJXOSEBGUYHKREAHFBKFGCSLOQZUFGQRYGLESNOWTDKDQTMSLQURFLERGXDRCFXLBBEUZ");

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
    msg.setTimeStamp(0.668353905413);
    msg.setSource(43543U);
    msg.setSourceEntity(129U);
    msg.setDestination(2372U);
    msg.setDestinationEntity(123U);
    msg.value = 38U;

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
    msg.setTimeStamp(0.830717235583);
    msg.setSource(59334U);
    msg.setSourceEntity(53U);
    msg.setDestination(5889U);
    msg.setDestinationEntity(74U);
    msg.value = 69U;

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
    msg.setTimeStamp(0.665393426887);
    msg.setSource(33888U);
    msg.setSourceEntity(113U);
    msg.setDestination(8181U);
    msg.setDestinationEntity(59U);
    msg.value = 39U;

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
    msg.setTimeStamp(0.1239121587);
    msg.setSource(52538U);
    msg.setSourceEntity(55U);
    msg.setDestination(48772U);
    msg.setDestinationEntity(78U);
    msg.consumer.assign("PSOAKSJYTIFHHJTMTMHSTDGBGVFCZVRNZXUQHRFDNDWCVTUCOKAKRNGMBYKYQQGOUAMCDZRTFEAULJIEUTSEENXIQDILELSLANLGMYQXZBARYBDAWXQPZHGAOOIFJIMZBETXRUJNIHDGWGRSYHLVCODYDMZUBAWNERWXVPWEQCKDZNLI");
    msg.message_id = 60186U;

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
    msg.setTimeStamp(0.161209250225);
    msg.setSource(52106U);
    msg.setSourceEntity(5U);
    msg.setDestination(54808U);
    msg.setDestinationEntity(76U);
    msg.consumer.assign("KCSEPYNCFIDOKQMBOUUNZAAJ");
    msg.message_id = 37901U;

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
    msg.setTimeStamp(0.295549903147);
    msg.setSource(63136U);
    msg.setSourceEntity(72U);
    msg.setDestination(42516U);
    msg.setDestinationEntity(159U);
    msg.consumer.assign("RGGEAOMTBJKOLIWVYRWVVLBMRJQXJXG");
    msg.message_id = 38084U;

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
    msg.setTimeStamp(0.994139655268);
    msg.setSource(39644U);
    msg.setSourceEntity(119U);
    msg.setDestination(55382U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.793314832173);
    msg.setSource(24506U);
    msg.setSourceEntity(234U);
    msg.setDestination(3664U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.252079150647);
    msg.setSource(28375U);
    msg.setSourceEntity(163U);
    msg.setDestination(47177U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.267081677387);
    msg.setSource(30045U);
    msg.setSourceEntity(139U);
    msg.setDestination(58933U);
    msg.setDestinationEntity(223U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.694897261849);
    msg.setSource(63738U);
    msg.setSourceEntity(103U);
    msg.setDestination(15051U);
    msg.setDestinationEntity(247U);
    msg.op = 245U;

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
    msg.setTimeStamp(0.07702921129);
    msg.setSource(40615U);
    msg.setSourceEntity(109U);
    msg.setDestination(22930U);
    msg.setDestinationEntity(90U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.0600510971903);
    msg.setSource(59060U);
    msg.setSourceEntity(133U);
    msg.setDestination(38437U);
    msg.setDestinationEntity(170U);
    msg.total_steps = 154U;
    msg.step_number = 126U;
    msg.step.assign("BAQMSXZZIRFKWVEQQTYRFMK");
    msg.flags = 72U;

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
    msg.setTimeStamp(0.325152398145);
    msg.setSource(3496U);
    msg.setSourceEntity(52U);
    msg.setDestination(151U);
    msg.setDestinationEntity(114U);
    msg.total_steps = 188U;
    msg.step_number = 93U;
    msg.step.assign("CBVOUQYONHLZXOZHPTCXKBHACUMDRHYQGFBTQVTLDLUNAPPFDLKRIQLJGXEOGTUTVLWAOSSRLXPKVCYBCWFAFSRKIUGGVCJXKP");
    msg.flags = 234U;

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
    msg.setTimeStamp(0.611976228061);
    msg.setSource(16693U);
    msg.setSourceEntity(18U);
    msg.setDestination(45610U);
    msg.setDestinationEntity(150U);
    msg.total_steps = 223U;
    msg.step_number = 45U;
    msg.step.assign("WNVLKUFKIVPSPCVRFZOJBCLLQLDZPXXKEDXSOTYHBJJWOGGKEQURJMWKWWFGPDAZCQYSJTTMPQAVGCLDTLNQEJJZIXDRMLYINEEBQNCGYPCHNXUIPVTYPFHFKDUARFUAPSYNHMTBFBWSDOYVMDKGUBRPAUUWXRAIMNHSTCDJEOUFASKHZIURFEMYGFEBXOYOHKQGXQBASNLVCTKOIVEHJAOXVZGHXESZITMWJMCBZRH");
    msg.flags = 10U;

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
    msg.setTimeStamp(0.789185616459);
    msg.setSource(51919U);
    msg.setSourceEntity(119U);
    msg.setDestination(14821U);
    msg.setDestinationEntity(194U);
    msg.state = 127U;
    msg.error.assign("UOSJVYHWVYQKDIBFEJKUMCDFVJMWYBBJTN");

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
    msg.setTimeStamp(0.137691160088);
    msg.setSource(130U);
    msg.setSourceEntity(93U);
    msg.setDestination(33190U);
    msg.setDestinationEntity(29U);
    msg.state = 4U;
    msg.error.assign("OAJBTZCZZLKCLNWZZAIJVPKINJADBMEUPMGKADXONRGKQPIIJDFVECMBUCWIMDQPDFGEEPS");

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
    msg.setTimeStamp(0.217508028657);
    msg.setSource(21979U);
    msg.setSourceEntity(165U);
    msg.setDestination(34090U);
    msg.setDestinationEntity(38U);
    msg.state = 27U;
    msg.error.assign("WVTKSFVHCKQOHJGSLE");

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
    msg.setTimeStamp(0.61931552139);
    msg.setSource(42738U);
    msg.setSourceEntity(99U);
    msg.setDestination(5057U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.877195317985);
    msg.setSource(63762U);
    msg.setSourceEntity(144U);
    msg.setDestination(31464U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.531571473327);
    msg.setSource(18962U);
    msg.setSourceEntity(97U);
    msg.setDestination(46005U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.760424481907);
    msg.setSource(35201U);
    msg.setSourceEntity(105U);
    msg.setDestination(20123U);
    msg.setDestinationEntity(163U);
    msg.op = 147U;
    msg.speed_min = 0.233036482093;
    msg.speed_max = 0.460274193289;
    msg.long_accel = 0.769519429907;
    msg.alt_max_msl = 0.448156910832;
    msg.dive_fraction_max = 0.501149902772;
    msg.climb_fraction_max = 0.767725621586;
    msg.bank_max = 0.998630598926;
    msg.p_max = 0.214274939875;
    msg.pitch_min = 0.7795460696;
    msg.pitch_max = 0.363966604553;
    msg.q_max = 0.30104986738;
    msg.g_min = 0.374233242467;
    msg.g_max = 0.242126443374;
    msg.g_lat_max = 0.722996514095;
    msg.rpm_min = 0.844233776274;
    msg.rpm_max = 0.272100963229;
    msg.rpm_rate_max = 0.901515855433;

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
    msg.setTimeStamp(0.600636162247);
    msg.setSource(22134U);
    msg.setSourceEntity(171U);
    msg.setDestination(49656U);
    msg.setDestinationEntity(212U);
    msg.op = 125U;
    msg.speed_min = 0.680556936308;
    msg.speed_max = 0.0725064653749;
    msg.long_accel = 0.515479132657;
    msg.alt_max_msl = 0.983693295068;
    msg.dive_fraction_max = 0.758256944963;
    msg.climb_fraction_max = 0.917548522455;
    msg.bank_max = 0.179412586925;
    msg.p_max = 0.0872127543606;
    msg.pitch_min = 0.900537558984;
    msg.pitch_max = 0.174838821847;
    msg.q_max = 0.360259091979;
    msg.g_min = 0.746736799264;
    msg.g_max = 0.237982013248;
    msg.g_lat_max = 0.167639974961;
    msg.rpm_min = 0.619790906585;
    msg.rpm_max = 0.575859813209;
    msg.rpm_rate_max = 0.514562061156;

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
    msg.setTimeStamp(0.748173347578);
    msg.setSource(64402U);
    msg.setSourceEntity(87U);
    msg.setDestination(36548U);
    msg.setDestinationEntity(150U);
    msg.op = 148U;
    msg.speed_min = 0.718102876078;
    msg.speed_max = 0.385224838444;
    msg.long_accel = 0.672647629677;
    msg.alt_max_msl = 0.68445372921;
    msg.dive_fraction_max = 0.600265214435;
    msg.climb_fraction_max = 0.973887484242;
    msg.bank_max = 0.926609303944;
    msg.p_max = 0.655158313132;
    msg.pitch_min = 0.310537884976;
    msg.pitch_max = 0.802042918621;
    msg.q_max = 0.900474123643;
    msg.g_min = 0.0980080919594;
    msg.g_max = 0.851373779158;
    msg.g_lat_max = 0.816227293434;
    msg.rpm_min = 0.945923821312;
    msg.rpm_max = 0.00764605903261;
    msg.rpm_rate_max = 0.364724019002;

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
    msg.setTimeStamp(0.800196239171);
    msg.setSource(44630U);
    msg.setSourceEntity(250U);
    msg.setDestination(44256U);
    msg.setDestinationEntity(38U);
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.16948182957;
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
    msg.setTimeStamp(0.282942421134);
    msg.setSource(59397U);
    msg.setSourceEntity(71U);
    msg.setDestination(33172U);
    msg.setDestinationEntity(243U);
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("ALBTCCXAFFXHXMVPZVUEHRUVMSDRGPSCEJLJNUJYPKXHINNDXJWYIBYOMTAPOHZGSQCNOYGCJICDYBVMJPGQQNFWGEFLPKKHLFEPMWEYTBSXJAOJRQKCXSZRNIJKBGOBFUWWSQPQIUZRTVFVEJGLHURQUKDBZGLNFLBKVSDXMOMHPLNTEVYDOAAMBAZZSTXZIQCTEAKHHKGWIURVMWWDLYIVUFQOIAEDQSSRWDRUPFECC");
    tmp_msg_0.state = 128U;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.284387512705);
    msg.setSource(13559U);
    msg.setSourceEntity(183U);
    msg.setDestination(58508U);
    msg.setDestinationEntity(213U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.47435297102;
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
    msg.setTimeStamp(0.845563612412);
    msg.setSource(51312U);
    msg.setSourceEntity(101U);
    msg.setDestination(17797U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.775166477858;
    msg.lon = 0.823519227536;
    msg.height = 0.303264446059;
    msg.x = 0.387692060141;
    msg.y = 0.0969780603638;
    msg.z = 0.263616461023;
    msg.phi = 0.561284940748;
    msg.theta = 0.00815654918307;
    msg.psi = 0.208993282787;
    msg.u = 0.137222894917;
    msg.v = 0.00658915048061;
    msg.w = 0.918876736194;
    msg.p = 0.351409526578;
    msg.q = 0.603392216114;
    msg.r = 0.495690096387;
    msg.svx = 0.327125153315;
    msg.svy = 0.12834834654;
    msg.svz = 0.116654606216;

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
    msg.setTimeStamp(0.0820190958146);
    msg.setSource(46792U);
    msg.setSourceEntity(117U);
    msg.setDestination(4962U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.716295436518;
    msg.lon = 0.969794406219;
    msg.height = 0.113911282474;
    msg.x = 0.63531060393;
    msg.y = 0.310620228221;
    msg.z = 0.242726356525;
    msg.phi = 0.855764771798;
    msg.theta = 0.51201678907;
    msg.psi = 0.429960825533;
    msg.u = 0.942309589718;
    msg.v = 0.274753568575;
    msg.w = 0.745154003317;
    msg.p = 0.29951165501;
    msg.q = 0.318440355744;
    msg.r = 0.223171038299;
    msg.svx = 0.944571623385;
    msg.svy = 0.0955900487497;
    msg.svz = 0.94465677472;

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
    msg.setTimeStamp(0.169785608087);
    msg.setSource(42364U);
    msg.setSourceEntity(130U);
    msg.setDestination(8345U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.620510149127;
    msg.lon = 0.145716472665;
    msg.height = 0.254518607371;
    msg.x = 0.914336518015;
    msg.y = 0.10836717706;
    msg.z = 0.391888068784;
    msg.phi = 0.0773796370012;
    msg.theta = 0.312046780811;
    msg.psi = 0.915587656924;
    msg.u = 0.779230688963;
    msg.v = 0.58610656259;
    msg.w = 0.961316676248;
    msg.p = 0.801743999195;
    msg.q = 0.926019698793;
    msg.r = 0.983540086215;
    msg.svx = 0.733941896419;
    msg.svy = 0.519236988023;
    msg.svz = 0.366572555236;

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
    msg.setTimeStamp(0.157570173673);
    msg.setSource(64907U);
    msg.setSourceEntity(87U);
    msg.setDestination(54105U);
    msg.setDestinationEntity(79U);
    msg.op = 59U;
    msg.entities.assign("IAUJOWTWCJYAEPBNHAEGLQXBMWJEUQAYBZICBKIOEIPWAGRSFVQGAFUEMSDKCSFGDWAUIYTVN");

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
    msg.setTimeStamp(0.0742020443488);
    msg.setSource(34140U);
    msg.setSourceEntity(166U);
    msg.setDestination(33524U);
    msg.setDestinationEntity(33U);
    msg.op = 238U;
    msg.entities.assign("YHPFBFAEEUCQTPCUVPLLEKYGZZQTWJINPDFXWLBVCSKBGKFTJAHEQUCHFANQIRMNSMSHDGRMXM");

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
    msg.setTimeStamp(0.558071771642);
    msg.setSource(9585U);
    msg.setSourceEntity(226U);
    msg.setDestination(6923U);
    msg.setDestinationEntity(62U);
    msg.op = 127U;
    msg.entities.assign("NWWYUWBSJIAUSFUQGHHUOJAVXLYIKXQGPHQTIKNFNYIHGUCJOORRFPWKYAWVVIZVCXTXOOGNVMWCZGDRBKJPBSEHNVMWWLOUDSONTBRANBWBGSKXZLTOYJCZQYIEGPKFZHLCZZXTKQLLEHWCGDASA");

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
    msg.setTimeStamp(0.557663450561);
    msg.setSource(45987U);
    msg.setSourceEntity(208U);
    msg.setDestination(59327U);
    msg.setDestinationEntity(217U);
    msg.type = 105U;
    msg.speed = 4428U;
    const char tmp_msg_0[] = {-67, -74, -62, 27, 80, 104, 7, 84, 47, 44, 44, -38, 44, -60, -95, -2, -15, 94, -11, -119, -106, 24, 108, -63, 2, 79, -109, 36, -127, 57, -120, -76, -124, 85, 2, -19, -100, -26, 32, 17, -26, 108, -74, -110, 94, -64, -54, -43, -113, 28, -84, -40, 34, -6, 90, 18, 88, -83, -58, -76, -125, 38, 86, 78, 8, 17, -57, -46, 120, 45, -104, 33, -62, 40, 55, 117, -113, 118, 47, -89, -83, -128, -1, -21, -62, -63, -44, 16, 93, -78, 92, 14, 1, -67, 9, 26, -87, -71, -100, 27, -115, -32, 48, -18, 62, 71, -58, 48, -31, 65, 121, -121, 8, 43, -53, -96, -63, 117, -93, -94, 96, 23, -74, -20, 102, 0, -101, 45, -124, 55, 10, 6, -50, 33, -100, -119, 106, -19, -128, -57, 56, 91, 85, 25, -79, 20, -89, 95, -57, -52, -82, -23, -81, -54, -41, 62, -53, 4, 37, -86, 121, 77, 21, -41, 46, -42, -30, 48, 29, -71, -57, 32, -74, -123, -122, -65, 114, 89, 54, 77, -51};
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
    msg.setTimeStamp(0.281251784994);
    msg.setSource(51517U);
    msg.setSourceEntity(194U);
    msg.setDestination(47717U);
    msg.setDestinationEntity(63U);
    msg.type = 18U;
    msg.speed = 47120U;
    const char tmp_msg_0[] = {-68, -4, 107, -2, 83, 79, -94, 37, 54, 49, 11, 89, 10, 67, 90, 75, -9, -102, -18, -114, -61, 8, -7, -33, -28, -105, -118, -111, 78, -32, -76, -26, 124, -94, -62, 82, -115, 3, 104, 96, -98, 5, 73, 77, -94, 103, 79, -65, -64, 10, 99, -61, 91, -83, 72, -3, -8, -74, 36, 109, 103, -107, -43, 90, 10, -63, 125, 81, -61, 34, -24, 91, -39, -22, 94, -27, -11, -116, 101, 63, 82, 36, -74, 57, 0, 95, 1, 26, 108, -100, -127, 3, 18, 33, 19, 60, 60, 86, -22, -113, 35, 18, -121, 77, -118, -73, -44, -104, -25, -26, -72, -26, 78, 105, 99, 104, 114, -9, -76, -9, 15, -6, -30, -35, 35, 7, -44, 56, -116, 60, 108, 99, 17, -87, -41, 32, 38, 6, -10, 34, -13, -40, -121, 28, 12};
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
    msg.setTimeStamp(0.564819836465);
    msg.setSource(53483U);
    msg.setSourceEntity(189U);
    msg.setDestination(7322U);
    msg.setDestinationEntity(108U);
    msg.type = 221U;
    msg.speed = 19835U;
    const char tmp_msg_0[] = {108, -1, -25, 53, 94, -118, 31, -17, -65, 37, 26, -23};
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
    msg.setTimeStamp(0.876659924137);
    msg.setSource(25293U);
    msg.setSourceEntity(212U);
    msg.setDestination(24011U);
    msg.setDestinationEntity(186U);
    msg.op = 6U;
    msg.tas2acc_pgain = 0.971506003504;
    msg.bank2p_pgain = 0.425208641415;

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
    msg.setTimeStamp(0.483731812936);
    msg.setSource(17014U);
    msg.setSourceEntity(147U);
    msg.setDestination(52912U);
    msg.setDestinationEntity(208U);
    msg.op = 45U;
    msg.tas2acc_pgain = 0.231054482789;
    msg.bank2p_pgain = 0.774931932797;

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
    msg.setTimeStamp(0.238029309437);
    msg.setSource(60504U);
    msg.setSourceEntity(41U);
    msg.setDestination(55414U);
    msg.setDestinationEntity(72U);
    msg.op = 16U;
    msg.tas2acc_pgain = 0.700569376911;
    msg.bank2p_pgain = 0.561059386024;

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
    msg.setTimeStamp(0.0814670785937);
    msg.setSource(49680U);
    msg.setSourceEntity(204U);
    msg.setDestination(61650U);
    msg.setDestinationEntity(218U);
    msg.available = 2235811476U;
    msg.value = 87U;

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
    msg.setTimeStamp(0.13684139535);
    msg.setSource(47111U);
    msg.setSourceEntity(157U);
    msg.setDestination(51930U);
    msg.setDestinationEntity(68U);
    msg.available = 1484086437U;
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
    msg.setTimeStamp(0.133569936128);
    msg.setSource(42983U);
    msg.setSourceEntity(126U);
    msg.setDestination(25556U);
    msg.setDestinationEntity(196U);
    msg.available = 641886312U;
    msg.value = 175U;

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
    msg.setTimeStamp(0.41397150797);
    msg.setSource(27290U);
    msg.setSourceEntity(6U);
    msg.setDestination(31489U);
    msg.setDestinationEntity(164U);
    msg.op = 148U;
    msg.snapshot.assign("NBFPEYIIYEVVUKYNDGLZSSIAFRFLHWCPXSKZGBUSYVKKUMRZDRMVTPEPOOZMJACLSQLDWPPZUGYIGXQNJFRCLPQDVNKLRLGAQXAER");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.293154814509;
    tmp_msg_0.lon = 0.458136272547;
    tmp_msg_0.depth = 20U;
    tmp_msg_0.speed = 0.348809939883;
    tmp_msg_0.psi = 0.0343767871505;
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
    msg.setTimeStamp(0.737620791596);
    msg.setSource(5398U);
    msg.setSourceEntity(131U);
    msg.setDestination(42238U);
    msg.setDestinationEntity(144U);
    msg.op = 66U;
    msg.snapshot.assign("DNUGLJYDKOZSEMKCIVXTBAJIIGWPZWSZIWDZJPTSUNQKEQUCUTXTBGYJUNVKWRAUZQGETOUIARFYKLGXAPFEEMHLLJGWONNWDKTYWJFVNMQKXIMNOLDWCYCGBKZBOFRLIJXQYDKAUJGCODJHP");
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 23U;
    IMC::UsblModem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EKLEVPWFFQCWGUHCYDQJBIRXFGDIUPNFSBDSNLGGZLQQFUMMKTPCAYPTUXALXCTOMRKAPZRDFVLYSYJCWWFTGKVPERTTFWXIUJDEZDIVWEYEINLWXHBSXHAYYPNTLBOAKQUJJJCOMFUOBHNMQSBRGJEAJZSEZGJWRYLVXUNLKNHPZNOXSSKFODDVBXVJGMYNCIZPOTDAOZRQZQKBGCOIWAVOBNEYMMIHCMIVEMSTURARIATLBSDZQ");
    tmp_tmp_msg_0_0.lat = 0.571415947951;
    tmp_tmp_msg_0_0.lon = 0.541989234169;
    tmp_tmp_msg_0_0.z = 0.778494650297;
    tmp_tmp_msg_0_0.z_units = 13U;
    tmp_msg_0.modems.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.811526752796);
    msg.setSource(53112U);
    msg.setSourceEntity(137U);
    msg.setDestination(41666U);
    msg.setDestinationEntity(45U);
    msg.op = 236U;
    msg.snapshot.assign("LFGGSAAWIMFQHPDUVOIOGPWCRKTAHJZMNABUKLNATLXJICVEYXOXZFXFFHYDHWPWFYDFNJREGTYQAXTGEXLOCQSBQOKNWTQDKDHILBIYGSQJRCTUZRCTZZLUSIQYVPVTVGBWKQJKUUNVOPHPBIRWPHXLILDRURQMCSYZDIJZMCHRNWCZMHPSVSLNJEERKFMFZOKMNGAWVTKXEOCJFUWQMLDGXBJVAMNRS");
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.160469203977;
    tmp_msg_0.y = 0.688749243624;
    tmp_msg_0.z = 0.136692367102;
    tmp_msg_0.vx = 0.106591518989;
    tmp_msg_0.vy = 0.619831005743;
    tmp_msg_0.vz = 0.0146123276557;
    tmp_msg_0.ax = 0.757720678856;
    tmp_msg_0.ay = 0.411511021031;
    tmp_msg_0.az = 0.603523091551;
    tmp_msg_0.flags = 46721U;
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
    msg.setTimeStamp(0.390403209679);
    msg.setSource(61096U);
    msg.setSourceEntity(157U);
    msg.setDestination(60688U);
    msg.setDestinationEntity(18U);
    msg.op = 58U;
    msg.name.assign("KMZPYLFFOCITAUOSPEJANCFBYODIYTJBFUMKFPZUDZGPKSLXZKSVNJLYN");

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
    msg.setTimeStamp(0.936261732775);
    msg.setSource(51716U);
    msg.setSourceEntity(30U);
    msg.setDestination(55365U);
    msg.setDestinationEntity(114U);
    msg.op = 34U;
    msg.name.assign("QFIIPVFMBIUCJMEDSYPEGNTLTNHRCDCMGPYBEXJYFTKUNOXNRKJIHRHFXZCMNWSSBOUOBHTINESBXXXSFHLVHBBZCVRMGFHDZOZJTKDJQPDUGAPUQBWUKVQSBOOGXTFAPLWEWZNISMMHMLDVROULSZKECOQZJTJTKGNXRYDWR");

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
    msg.setTimeStamp(0.748965541334);
    msg.setSource(59275U);
    msg.setSourceEntity(158U);
    msg.setDestination(56576U);
    msg.setDestinationEntity(223U);
    msg.op = 62U;
    msg.name.assign("CYGQZRIUKITVVJFLSCELLHJBGJIMABEGIYBWMIKFKYFHXCZMGUZHITMLHKBADVXROSNARPSANMJ");

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
    msg.setTimeStamp(0.708988196211);
    msg.setSource(13670U);
    msg.setSourceEntity(68U);
    msg.setDestination(29782U);
    msg.setDestinationEntity(163U);
    msg.type = 88U;
    msg.htime = 0.469855801406;
    msg.context.assign("WNPJYPTXFILLSUNAFCIDQQDFBSHCFMIZKZUQGZRKQZSISHWLSGTGGJYGXMRJYXRMPTDYMHCNELYLOTEYZGUHNEMUNCAZPWETLAKBZNMKSQFAQSRPRBQDUVLOLVMIWFHFHJUYITBPKMMVFUHTWJSWGCOVDBPHNQCUILEKKZKRRQIOYAHUEUEBEFPJGEHYOEXJXCVTDWVSIPDAABOBLFNBJVOOVXMCANIY");
    msg.text.assign("IWKPDAXXZJLLRHUWVQZKW");

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
    msg.setTimeStamp(0.476069846502);
    msg.setSource(42962U);
    msg.setSourceEntity(28U);
    msg.setDestination(39323U);
    msg.setDestinationEntity(108U);
    msg.type = 72U;
    msg.htime = 0.263526520004;
    msg.context.assign("EFAVDXSIAODJCFCKJGWBKWHTMAGGQZBILVZQBZHLIWPERAYJRJJDCEEWZNHUSVQNLAIXESSMVSUUCWOEYBNBUCHTXKORLCUMGLGTQQVMTZCSSEBXCUWIFGSGHKMBVDLWPBDARPIJHLKZHEKQMPQHRPOAKTIUFFWOJRTXNVOBYOYFJRMYRAMXCBIEGDTZYZOFOKPYLNRZWFKSYNRDVXCPTPOVPQNKHYQGDHXYTDUEDNGJFTSLVMIJNWXUXFZMA");
    msg.text.assign("MVCDXADKAUXIKJBKWHFTAKDGIVEKRWBVQUYKIFJKEXBAECNRXPOJAZJGOBOSLWUONWDSPUHAJIDLXMOCHMOFQUSHILPWCQDPMPYVNITEKMJBOQAGNNSJFXLZADFM");

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
    msg.setTimeStamp(0.757591590373);
    msg.setSource(12350U);
    msg.setSourceEntity(134U);
    msg.setDestination(3885U);
    msg.setDestinationEntity(140U);
    msg.type = 205U;
    msg.htime = 0.933824684715;
    msg.context.assign("NPIBFDQCVLKOKLMZESGZSKBRORMOWIFFGDACYBSRFHWQHIABFWOXEBUNHRBWGNGKPMHPUIKQMIJDOLOUWEJCHFHZYVVJCJYMCMOALPHELKNTCZTSWARGZUTWGEUYSOUWQJAYRBXFYPDMJVUAXXPJCTYBVLHWSXZVXZZGTHTRLSQDATKABDGCFKRKLGNQOXPIJILPQUZCXQNBVFXRRFYEQIZYSTUDITVUMEWVVMJKEEXAGONMSQTJLPEYICDAPN");
    msg.text.assign("AKDHLGEXSFBBXFLPTIVYGUUINZAYBHCUJTPSYWSKVSNZMVQMKNZ");

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
    msg.setTimeStamp(0.514764135749);
    msg.setSource(20244U);
    msg.setSourceEntity(131U);
    msg.setDestination(51526U);
    msg.setDestinationEntity(229U);
    msg.command = 163U;
    msg.htime = 0.629214294425;

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
    msg.setTimeStamp(0.990865873438);
    msg.setSource(64998U);
    msg.setSourceEntity(113U);
    msg.setDestination(43231U);
    msg.setDestinationEntity(230U);
    msg.command = 138U;
    msg.htime = 0.57491754252;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 142U;
    tmp_msg_0.htime = 0.964885513175;
    tmp_msg_0.context.assign("XQKVXIHOKKRMKFORAXNLULRJXLOFBJOZEGFHMPEYLMMMBVVVPRCZYGSIVIJFJSTFCAHGKAIZAJPYKPDWPVLDNJGBHBZACMEALYHHSXYQXRVRVBIMZUBDDMSANXFWGOPZQWOEPGQNBUOPTLEPUOUZWNTNVCIEWCSEMTTVJUIDIYSDRBSUQEJNBALSESQUIGWGKCZNXGNWKJUITKOKC");
    tmp_msg_0.text.assign("KIXCZONSXNUOFEZJSQRJTUKSZAWVDZQHRBBEHDLRDQFBZONIWRTKSMEPNL");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0980755245717);
    msg.setSource(48733U);
    msg.setSourceEntity(244U);
    msg.setDestination(44216U);
    msg.setDestinationEntity(131U);
    msg.command = 226U;
    msg.htime = 0.047081627107;

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
    msg.setTimeStamp(0.24344372874);
    msg.setSource(53133U);
    msg.setSourceEntity(23U);
    msg.setDestination(10286U);
    msg.setDestinationEntity(48U);
    msg.op = 37U;
    msg.file.assign("YNZLHNRMBZGURXFWIZGPJJWDSKFZECJMIEUWBMINQISTGTEFHVOTZEOFXVPMQIHOCKSKDTRFAZTDYPTJUBMUDJDPKBQCNLIRTAJDSHMGBXASTWOYORLZYMBWVFRMXORNNIAKSREJVAEUYSUCFHEVZIXZYVCBUNOQFCYGWHLQDFHJPBGXTQNLKYRDANVBVEISQTW");

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
    msg.setTimeStamp(0.818632443844);
    msg.setSource(21704U);
    msg.setSourceEntity(82U);
    msg.setDestination(9049U);
    msg.setDestinationEntity(84U);
    msg.op = 53U;
    msg.file.assign("ILYKAXPFKQDBMWTQNALJUDSKGADHTATSCAYAGCPOWQHWYCWWHGUKQ");

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
    msg.setTimeStamp(0.351828238418);
    msg.setSource(34089U);
    msg.setSourceEntity(171U);
    msg.setDestination(52446U);
    msg.setDestinationEntity(123U);
    msg.op = 157U;
    msg.file.assign("USIRYYMVIVJENWPWEABFGQTCYIXKUFAYVX");

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
    msg.setTimeStamp(0.72981574912);
    msg.setSource(6816U);
    msg.setSourceEntity(103U);
    msg.setDestination(51084U);
    msg.setDestinationEntity(85U);
    msg.op = 36U;
    msg.clock = 0.322851231355;
    msg.tz = 16;

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
    msg.setTimeStamp(0.831306299581);
    msg.setSource(62927U);
    msg.setSourceEntity(187U);
    msg.setDestination(20757U);
    msg.setDestinationEntity(134U);
    msg.op = 60U;
    msg.clock = 0.650406385671;
    msg.tz = -113;

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
    msg.setTimeStamp(0.250162754953);
    msg.setSource(52664U);
    msg.setSourceEntity(193U);
    msg.setDestination(34974U);
    msg.setDestinationEntity(77U);
    msg.op = 74U;
    msg.clock = 0.400030921767;
    msg.tz = -9;

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
    msg.setTimeStamp(0.361682927062);
    msg.setSource(25146U);
    msg.setSourceEntity(131U);
    msg.setDestination(16445U);
    msg.setDestinationEntity(157U);
    msg.conductivity = 0.072776141569;
    msg.temperature = 0.0642353182248;
    msg.depth = 0.352674231297;

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
    msg.setTimeStamp(0.391747843609);
    msg.setSource(3081U);
    msg.setSourceEntity(5U);
    msg.setDestination(18547U);
    msg.setDestinationEntity(155U);
    msg.conductivity = 0.439517340184;
    msg.temperature = 0.919225742317;
    msg.depth = 0.378078274797;

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
    msg.setTimeStamp(0.252867788325);
    msg.setSource(36846U);
    msg.setSourceEntity(158U);
    msg.setDestination(47131U);
    msg.setDestinationEntity(77U);
    msg.conductivity = 0.301064799115;
    msg.temperature = 0.347570661124;
    msg.depth = 0.874297740743;

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
    msg.setTimeStamp(0.858374818489);
    msg.setSource(36844U);
    msg.setSourceEntity(216U);
    msg.setDestination(12396U);
    msg.setDestinationEntity(64U);
    msg.altitude = 0.621762584762;
    msg.roll = 62561U;
    msg.pitch = 27167U;
    msg.yaw = 16209U;
    msg.speed = 13448;

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
    msg.setTimeStamp(0.526890730429);
    msg.setSource(29982U);
    msg.setSourceEntity(53U);
    msg.setDestination(13319U);
    msg.setDestinationEntity(61U);
    msg.altitude = 0.532856881583;
    msg.roll = 6623U;
    msg.pitch = 48735U;
    msg.yaw = 43318U;
    msg.speed = -444;

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
    msg.setTimeStamp(0.0429923517676);
    msg.setSource(51272U);
    msg.setSourceEntity(170U);
    msg.setDestination(44479U);
    msg.setDestinationEntity(229U);
    msg.altitude = 0.115274465306;
    msg.roll = 8503U;
    msg.pitch = 35771U;
    msg.yaw = 43808U;
    msg.speed = -23905;

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
    msg.setTimeStamp(0.50675891096);
    msg.setSource(57874U);
    msg.setSourceEntity(253U);
    msg.setDestination(33790U);
    msg.setDestinationEntity(3U);
    msg.altitude = 0.0209498076768;
    msg.width = 0.996120482953;
    msg.length = 0.000215814744487;
    msg.bearing = 0.604082477665;
    msg.pxl = 23731;
    msg.encoding = 48U;
    const char tmp_msg_0[] = {56, -9, 92, 89, -14, -81, 121, 92, -105, 39, -107, 17, -59, -4, 27, 125, 126, 120, -120, 59, -69, 8, -27, 49, 68, 114, -124, 81, -123, 37, -30, 46, 67, -34, -120, -49, -26, 82, -11, -59, -116, -55, 85, -42, 99, -118, 18, -23, -102, 59, -77, 19, -21, 58, -83, -73, -65, -81, -20, 88, 25, 62, 86, -82, -20, 82, -57, 114, 117, 94, -6, 4, 19, -72, -69, -34, 123, -107, -62, -111, 58, 95, -76, -126, -119, -67, 94, 122, -1, -115, -74, 1, 94, -112, -65, -15, 73, -82, -58, 32, 95, 56, 54, -81, 22, -48, 110, 41, 11, -109, 122, 50, -23, 95, -2, -110, 126, 69, 41, -110, 11, 69, 40, 76, -127, -79, 27, -41, -88, 40, 123, 99, -93, -109, -70, 113, -98, 106, 6, -104, 53, 58, 81, 15, 29, 4, 48, -76, 43, -18, -106, 8, -127, 122, 95, -6, -62, -110, -65, 72, -37, -67, 93, -118, 33, 32, 49, 93, -5, -112, -104, -13, -60, 67, 35, 84, -87, 49, 70, -72, 65, -42, 52, 11, 38, -95, -22, -30, 0, 91, 90, -123, 84, -75, -91, -106, 100, 105, 10, 14, -59, -18, 38, -58, 4, 95, 59, 102, 109, -48, -78, -67, -28, -12, 19, -73, -118, 15, 57, -38, -75, 117, -70, -108, 102, 21, 122, -22, -71, -118, -122, 31, 91, 84, -69, -89, 45, -28, -101, -30, -39, 2, -81, -43, -11, 113};
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
    msg.setTimeStamp(0.106643091931);
    msg.setSource(54211U);
    msg.setSourceEntity(234U);
    msg.setDestination(37852U);
    msg.setDestinationEntity(224U);
    msg.altitude = 0.697127231853;
    msg.width = 0.949361658632;
    msg.length = 0.0855420433054;
    msg.bearing = 0.0698861489291;
    msg.pxl = -9981;
    msg.encoding = 242U;
    const char tmp_msg_0[] = {-127, 60, 45, -86, -120, -34, -2, 17, 58, -89, 121, -119, 111, 120, -30, 25, -32, -24, 26, -14, 89, 40, 113, 20, -61, 96, -64, -31, 117, -35, -36, -91, 96, 25, -49, 44, 49, 110, 95, -78, -42, -34, -25, 15, -99, -61, -123, 27, 91, 40, -51, 108, 75, 14, -92, 94, 110, -103, -96, -106, -102, 26, -56, -119, -90, 30, -123, -94, 32, -121, 73, 85, 111, -112, 9, 83, 47, -111, 103, -126, -9, -78, -128, 85, 39, -94, -92, -63, -42, 30, -70, -108, -35, 37, 29, 115, 38, -90, 25, -44, -123, 68, -74, 38, -63, -17, 76, 24, 30, 67, -57, -117, 60, 34, -96, 71, -73, -15, 6, 126, -93, -31, -33, 48, 49, 69, -30};
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
    msg.setTimeStamp(0.86480420084);
    msg.setSource(33557U);
    msg.setSourceEntity(104U);
    msg.setDestination(20244U);
    msg.setDestinationEntity(100U);
    msg.altitude = 0.215370003045;
    msg.width = 0.731722384768;
    msg.length = 0.00247540707727;
    msg.bearing = 0.954068151366;
    msg.pxl = 16867;
    msg.encoding = 3U;
    const char tmp_msg_0[] = {-109, 110, -83, -34, 81, -39, -47, -111, 83, 120, 84, -116, -27, 105, 22, -112, 90, 82, -113, -101, 117, -11, 68, 125, -69, 12, 31, 26, 10, -123, 99, 49, 39, -119, -44, 56, 39, 12, 108, -14, -39, -97, 28, 77, -107, 54, -118, 13, -123, -73, 6, -117, -39, 71, -91, -99, -77, -125, -116, 34, 92, 111, 118, -91, 114, 94, 57, -90, -65, 123, -122, 75, -108, -110, -61, 123, 75, 67, 56, 21, -59, -9, 68, -1, 80, -49, -125, 90, 118, 113, -122, -106, 28, 86, 60, -112, -10, -32, -2, 11, -127, -124, 115, -120, -39, 71, 16, -116, 4, -2, -7, 112, -112, -31, 18, -127, 79, -27, 13, -58, 36, 61, -109, 16, -98, -85, 10, 39, 50, 77, 1, 9, 51, 109, -63, 98, -7, 1, -45, 21, -119, -95, -6, 56, -127, -31, 102, -46, -18, -74, -115, -100, 51, -126, 79, -48, 29, 66, -20, -15, 117, 108, -49, 73, -119, 6, -21, 34, -39, 45, -37, 70, -93, -91, -43, 102, 27, 33, 123, 119, -17, -69, 45, -114, 9, -4, 65, 74, -73, -97, -96, 47, 70, -14, 14, -81, -92, -18, -36, -110, 106, -32, -51, 15, 75, 2, 104, -105, -103, 91, 7, 47, 68, -1, -68, -42, 55, -43, -124};
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
    msg.setTimeStamp(0.62018823872);
    msg.setSource(27781U);
    msg.setSourceEntity(139U);
    msg.setDestination(34087U);
    msg.setDestinationEntity(131U);
    msg.text.assign("KKRQXLWOTICTXOMKGNLUMMXVYSWACZZRIPZALTANOVLAZHSTSTRLUMIMIPRGWMHRJVQGDEXDUWSWSFRNHDQPDFDEIDZQDCJHVEKBOHYPLIHCXQWNYHJKJGLCRTEDWXAKUFHWANFWJOMAIBPDQTTPBGQBYNSOFOYVBIQBLFKOJAYHIUPLSYZCTVJFQVXJDNEEIYWPCBUZ");
    msg.type = 91U;

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
    msg.setTimeStamp(0.445432112516);
    msg.setSource(14595U);
    msg.setSourceEntity(238U);
    msg.setDestination(43557U);
    msg.setDestinationEntity(213U);
    msg.text.assign("ULCJVSCDXFYGHZOKBWLCEGFXVRABDJASWXLNWYNICMZRRMFQVIXROCOABZYWJJIANTGXHSK");
    msg.type = 243U;

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
    msg.setTimeStamp(0.435959000336);
    msg.setSource(62887U);
    msg.setSourceEntity(246U);
    msg.setDestination(1952U);
    msg.setDestinationEntity(54U);
    msg.text.assign("SWGAWTHIGIVCSIHRDJILOVDDLITQVYLBUBRQSRBYWUPZWHPDACYYKKAZBFXSIENVEPMBQNINSTORHDYHPSEXCOMEHJZCTKYGQNUUKNIXFUWUYZMUFYRQAOQQLGWEQJAO");
    msg.type = 227U;

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
    msg.setTimeStamp(0.771868698046);
    msg.setSource(4919U);
    msg.setSourceEntity(179U);
    msg.setDestination(37275U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.122612201143);
    msg.setSource(2098U);
    msg.setSourceEntity(167U);
    msg.setDestination(10637U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.692831597998);
    msg.setSource(3872U);
    msg.setSourceEntity(211U);
    msg.setDestination(43701U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.310499645193);
    msg.setSource(36812U);
    msg.setSourceEntity(6U);
    msg.setDestination(55822U);
    msg.setDestinationEntity(92U);
    msg.sys_name.assign("VCJDZDCVTRQFGRAEHKMIVWLZGKMBYIIKPSQLXBCKZATPQSKJJSFCRVPDALGBNEEYJUQANQQZMOOXRNCUAPFRESCEOUBSKFROGWLIKGAPNEFIGYTZJOIZHAWOLNNOQHVIDLDRHP");
    msg.sys_type = 152U;
    msg.owner = 48876U;
    msg.lat = 0.213138843274;
    msg.lon = 0.547799970501;
    msg.height = 0.891098147065;
    msg.services.assign("WGOUCFTFPDMQQWBLOZPERUNOQEGTJQCHCCIDTIHLWUKVAMSFGTYNPXHHCAMREDFLSZBWKJNMVLQHU");

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
    msg.setTimeStamp(0.8753276213);
    msg.setSource(42874U);
    msg.setSourceEntity(160U);
    msg.setDestination(55234U);
    msg.setDestinationEntity(159U);
    msg.sys_name.assign("AXLQFUPONUHFXDKVHDBSKYBRAHBSJMNGVYYAZEIKKRJLGHTSZWPGXMQAKCVHA");
    msg.sys_type = 106U;
    msg.owner = 41365U;
    msg.lat = 0.0605744745883;
    msg.lon = 0.575103017559;
    msg.height = 0.0253196010082;
    msg.services.assign("GDAQYPIIBOHCQNVDSNFKZGUWLSHNKJFEJSNPRWMRUNGQJKJGKWYXATIMAMCFIKKPCQETXOXCZMATUUUODMEZEXYEKDVBWUERAYLBPJSREMLRZDXVYUJQLPWKBBYCFJCNFHDLOFXHWFWVSXMRUMNOBBTTCYODIHZAIPSZUVLJWEBOZQNPTCVZAUTHTJZAPTIYSHZSLPVDHMLRKBFGDJFIFGIRVLPHVAELOGGRIXH");

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
    msg.setTimeStamp(0.716131160646);
    msg.setSource(49456U);
    msg.setSourceEntity(33U);
    msg.setDestination(11625U);
    msg.setDestinationEntity(74U);
    msg.sys_name.assign("IQLATCLZGMPWJKOIGESNCXHTVAYCKYLQEBWMGQE");
    msg.sys_type = 196U;
    msg.owner = 13335U;
    msg.lat = 0.637380326543;
    msg.lon = 0.696764781475;
    msg.height = 0.382815469692;
    msg.services.assign("MDMRLHUGICUBFNDONQTOLKYBVXSEFDCXTPRNFPUQEXJWITZGTYYEIILDXOJHVDXWFUKPGTJAFCSWACUFPWJWSUNWTQRFCLUBFSZDRYZYWRAOLEGQZALKSNLUMVXGPGBPYAEMMMOZASAKZIYHDDVIREARLBRMCIHKLZHVFNSOBNOQYGIVGSQVRGOSZFXKJVGTKUPQQLBNUBPIVZCKXPVETJOHXAZOYSMKAHJNYBWEHCICXDWREDWJNPH");

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
    msg.setTimeStamp(0.0767362778423);
    msg.setSource(59419U);
    msg.setSourceEntity(182U);
    msg.setDestination(51511U);
    msg.setDestinationEntity(29U);
    msg.service.assign("INLKWINDHYHJAEOYWSPHSFIQVYRWNQQBJLVHLERUZNXLGLGDWATASYAUPDUVNWJWRZMDXXNWSMMUTQAJZJYYOXZCXNYSMHCIZOXHZVACKVTDHVRNWDPIOGFJKDTCZQFLYMEQHLUUBSCKUAJCCSRKPFGSUZKGZCFDMBFVPGEIOBBLKGOXMIBYIQBZPOQRWDGVREXSMEWTOPC");
    msg.service_type = 172U;

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
    msg.setTimeStamp(0.338644668242);
    msg.setSource(23635U);
    msg.setSourceEntity(29U);
    msg.setDestination(44930U);
    msg.setDestinationEntity(193U);
    msg.service.assign("QEPENAEKIMSYBDLKQLBVRVNWXUTBKHDJFKXQHFRCYDXIXUHVTKVESNZTT");
    msg.service_type = 60U;

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
    msg.setTimeStamp(0.0942500667389);
    msg.setSource(32781U);
    msg.setSourceEntity(104U);
    msg.setDestination(59436U);
    msg.setDestinationEntity(184U);
    msg.service.assign("MEPDMAKKBRGKWSAGZLCXNNBTNNHUWZNAYYTDIKCSVKDPOKCJTJFLICWXWCVLALAQPKCFVUOAPDTQECESBXPOJWIRWBRENOZVQNJVTBJBZIVUPXFXQNUQYZRHHPNCEXKTJWHADWOUDEOLBQMZTHTFDEVHQSAHTHYFIQXEBLBEIMNLETYLHXUAUILJMSYIYQGMZLGWJOFVZDYGVFBFSHGDGIMGRFPXURYK");
    msg.service_type = 228U;

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
    msg.setTimeStamp(0.106465981522);
    msg.setSource(19809U);
    msg.setSourceEntity(247U);
    msg.setDestination(16447U);
    msg.setDestinationEntity(117U);
    msg.value = 0.33529884987;

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
    msg.setTimeStamp(0.311798222874);
    msg.setSource(7291U);
    msg.setSourceEntity(73U);
    msg.setDestination(23003U);
    msg.setDestinationEntity(103U);
    msg.value = 0.353124240361;

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
    msg.setTimeStamp(0.298473454463);
    msg.setSource(23222U);
    msg.setSourceEntity(71U);
    msg.setDestination(41330U);
    msg.setDestinationEntity(198U);
    msg.value = 0.78282348922;

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
    msg.setTimeStamp(0.0886146214726);
    msg.setSource(18861U);
    msg.setSourceEntity(209U);
    msg.setDestination(2915U);
    msg.setDestinationEntity(144U);
    msg.value = 0.142234938501;

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
    msg.setTimeStamp(0.476138928678);
    msg.setSource(29788U);
    msg.setSourceEntity(74U);
    msg.setDestination(2789U);
    msg.setDestinationEntity(120U);
    msg.value = 0.214469825103;

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
    msg.setTimeStamp(0.253745480207);
    msg.setSource(47311U);
    msg.setSourceEntity(194U);
    msg.setDestination(9842U);
    msg.setDestinationEntity(190U);
    msg.value = 0.648840745962;

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
    msg.setTimeStamp(0.37185220293);
    msg.setSource(1930U);
    msg.setSourceEntity(37U);
    msg.setDestination(63269U);
    msg.setDestinationEntity(70U);
    msg.value = 0.00400858337268;

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
    msg.setTimeStamp(0.455763870258);
    msg.setSource(40911U);
    msg.setSourceEntity(218U);
    msg.setDestination(46036U);
    msg.setDestinationEntity(236U);
    msg.value = 0.733780083021;

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
    msg.setTimeStamp(0.921667200437);
    msg.setSource(47080U);
    msg.setSourceEntity(227U);
    msg.setDestination(421U);
    msg.setDestinationEntity(93U);
    msg.value = 0.254552040545;

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
    msg.setTimeStamp(0.789676531935);
    msg.setSource(32069U);
    msg.setSourceEntity(165U);
    msg.setDestination(32156U);
    msg.setDestinationEntity(239U);
    msg.number.assign("HGBGBTYVMQUAWJNCNTOUGLPLMHIJXSFIQFLJARMCNCYTCLEAYXUCXZYVAVRTHLGODSSNYXJQWJDTZSJFPOTKVXPYZDLTEDKGSNJSUBOZRMMAICJBHDLKU");
    msg.timeout = 59646U;
    msg.contents.assign("EWFESLFUVOVVCJQJYLZSDSXTQZEFALRTVKOADXZRJBNEKAGNJSMQJSGVKHICZRZDCNQARENFUGXPEWIGIZNOGBCUYTXHXLWMEKKFMXQYHROBYPSWQELLFVTWIRGTXGHWBDEKBSIIJKGBCM");

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
    msg.setTimeStamp(0.45776763716);
    msg.setSource(32614U);
    msg.setSourceEntity(153U);
    msg.setDestination(62590U);
    msg.setDestinationEntity(46U);
    msg.number.assign("RADKLPCARIKTMNCEFLJWEOWWRWUVXBOIGXIJUOGSGHQDGJQAZSNXKFCVNRCPUJGSZWTVIWHWCIDSLUMJAVTWPGQBHRDXUEFQSACKFYPLKZETLYUTXDKXEYQINEPLAQKJTBEDUANKDZUDIBIOJOHJMWCFFYCB");
    msg.timeout = 46761U;
    msg.contents.assign("PVWEGKARQHPBSLPWWPPGXEHHKRCIMXPRKHUASDXBLPDNEGUMOYYUKRKGQOMXZFMWHDTBXNKMN");

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
    msg.setTimeStamp(0.163808022624);
    msg.setSource(6387U);
    msg.setSourceEntity(148U);
    msg.setDestination(18697U);
    msg.setDestinationEntity(109U);
    msg.number.assign("FIFBFNAUZOWPDICBDTLHNVTGLWYUVVGJLGOVHQQKUXMOWIZQYMODBJZNKSLQNXGWSZMEOPMEPXZBFTFXLL");
    msg.timeout = 15635U;
    msg.contents.assign("CNSEEICBZRYNWEPDRNKXTQZMCGWKLHOBBAIVLUVMTMTSPASQZJPDVPXWKXOCCFBQOEMUKLDOQJCXIXMEKFSSCYGAHHAUSXIZURUKBMJKQGRRQEZYFIACEA");

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
    msg.setTimeStamp(0.58128788975);
    msg.setSource(4655U);
    msg.setSourceEntity(2U);
    msg.setDestination(58132U);
    msg.setDestinationEntity(60U);
    msg.seq = 2372802152U;
    msg.destination.assign("ANXIKWFFBUGPITFFPSEJKDHQWIQPOL");
    msg.timeout = 18779U;
    const char tmp_msg_0[] = {-113, 114, 66, 112, 121, -127, 29, 21, -73, 96, 53, -120, -69, -55, 52, -93, 70, 102, -79, 37, -33, -76, -52, -85, 32, -66, -83, 118, -83, 12, -25, 125, -11, -105, 60};
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
    msg.setTimeStamp(0.28266992973);
    msg.setSource(29081U);
    msg.setSourceEntity(183U);
    msg.setDestination(5017U);
    msg.setDestinationEntity(53U);
    msg.seq = 3790108857U;
    msg.destination.assign("QQZNYBENYAGCUKOCREEXMAJSOUBZRAMMBHCBXSJQTNJDLAAAVIGZDTGLVLZTJJHOKUWKRWKGPDEIZEPKB");
    msg.timeout = 54637U;
    const char tmp_msg_0[] = {-39, 108, -37, -116, 92, -106, 117, 3, -97, -25, -36, 6, 19, 50, 95, -59, -60, -108, 56, -29, -98, 49, 106, -18, -56, 108, 74, 72, 31, -101, 105, -55, -74, -46, -124, 24, -113, -65, -6, -33, -46, -18, 121, -43, 118, 11, -15, 96, 75, -2, 62, 39, -58, 71, -5, -115, -105, -44, -126, 28, -29, -127, -19, 118, -54, 122, 126, -4, -34, -27, -54, 46, 7, 85, 8, 50, -21, 49, -127, 4, 86, 87, -95, -66, 19, 108, -62, -24, -86, 10, -46, -123, 120, 117, -1, 119, -7, 1, 73, 21, 26, -49, 70, -38, -95, 10, -62, 75, 89, 14, -121, 85, 2, 107, -30, -98, -99, 80, 83, 76, 93, 17, 124, -19, 47, -97, 15, 2, 52, 93, -125, 105, -55, -25, 11, 30, -107, -120, 86, 81, -67, -42, -59, -24, 102, 97, -27, 32, 33, 89, 16, -117, 2, 95, -23};
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
    msg.setTimeStamp(0.0601353221191);
    msg.setSource(63293U);
    msg.setSourceEntity(96U);
    msg.setDestination(277U);
    msg.setDestinationEntity(223U);
    msg.seq = 3976266832U;
    msg.destination.assign("FTCFEIHLHSDXKZSQWCVSRDRLJPPYNXCGMYZMONOQIJUXRHBNKVNACXJBWUXHGHKKXLYKAIUBXMVBTWCYRQZTOUNEEGQROWJZEHLG");
    msg.timeout = 37893U;
    const char tmp_msg_0[] = {83, 51, -7, 111, -37, 61, 26, -104, 94, -57, 109, -69, -7, -6, -82, 47, -77, -28, 122, 81, 77, 61, 40, -50, -74, 59, -86, 38, 73};
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
    msg.setTimeStamp(0.172784037857);
    msg.setSource(15115U);
    msg.setSourceEntity(223U);
    msg.setDestination(48248U);
    msg.setDestinationEntity(73U);
    msg.source.assign("PMIWFZKLHWOZLZNYHUQGLAELDMBGYPWUVODTPLNRBHFFSEJSIUMEJBKDLXLRXYPBPYDMWVDDSSFUIRYKVATQJKXKQFBCEYEAWNVMUYOHXQLOVRCHTZAHXGYFUIXRPLCCKVWTFBKSIIKZBWGRCMAVJMOECTJAZDR");
    const char tmp_msg_0[] = {64, -49, 96, 36, -109, 116, 16, -43, -46, -29, -39, 46, -57, -35, 91, 34, -77, 124, 53, 34, -14, 91, 44, 65, 68, -66, -38, 8, 89, 18, 13, -57, 70, -40, -117, -17, -87, -74};
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
    msg.setTimeStamp(0.638816994931);
    msg.setSource(4107U);
    msg.setSourceEntity(6U);
    msg.setDestination(41182U);
    msg.setDestinationEntity(238U);
    msg.source.assign("MRHRGSYNOYJMNESCOHOOKWWGXZCSQBECLYJXDLXEJPEEVMLWUHBEXGZVAUAPGWTNJKHTLVMFADRFLTNJJNFXPRIRHBPKDVTLCDSIFZDCQLKRXWDAIIMKIUKQXSIPBMGIHFVV");
    const char tmp_msg_0[] = {-124, 92, 3, 69, -108, -97, -25, 68, -44, 89, 111, -84, -42, 10, -32, 39, 90, -112, -128, 12, 110, 1, 53, -23, 59, 119, -29, 79, -26, -102, -82, -118, 59, -14, 93, -27};
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
    msg.setTimeStamp(0.583349483078);
    msg.setSource(10057U);
    msg.setSourceEntity(228U);
    msg.setDestination(31972U);
    msg.setDestinationEntity(33U);
    msg.source.assign("GSVXPBQRIGXRBUKYROZOMCAHBQNKCPPMAYBAR");
    const char tmp_msg_0[] = {-48, -118, 13, 101, -107, -76, 19, -65, -102, 30, -33, -46, -36, 5, 92, -106, 97, 82, -89, 37, -15, -108, -6, -12, -119, -123, -2, -52, -36, 67, 65, -14, 18, 14, 13, 76, -108, -20, -128, 54, -7, 28, 82, -37, 33, -50, 58, -115, -85, 98, -9, -23, -24, -86, -51, 50, 100, 96, -48, -30, 98, -101, -12, -128, -5, 90, 99, 37, -45, -42, -42, 62, 4, -94, -61, 54, -88, 124, -105, -126, -44, -74, 96, -99, 100, -108, -20, 124, 98, -60, -17, -25, -56, -60, 16, 8, -75, -32, 52, 73, 76, -120, 79, 41, 48, -67, 35, 89, 66, 0, 126, 64, -113, 15, -82, 118, 113, 1, 123, 30, -80, -121, -3, -57, -59, -54, -96, -32, 75, -28, 0, -54, 80, 102, -6, 83, 49, -69, -70, -49, -30, -107, 101, 23, -41, 30, -85, -78, -66, 54, -98, -76, -41, -43, 111, -76, -26, -122};
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
    msg.setTimeStamp(0.37235687817);
    msg.setSource(36943U);
    msg.setSourceEntity(130U);
    msg.setDestination(11033U);
    msg.setDestinationEntity(225U);
    msg.seq = 2844391058U;
    msg.state = 239U;
    msg.error.assign("BUVHTNGKSRVUYABHQZOBHENZTHFLUMLRTXBIINCPIFZAAFDEGQGAFAIKFNEOHDWOPKMOSEVLSMZZUCNMZKESCEBUCHQJQUQARODNBKZXOJGDXLLWSRPDVKA");

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
    msg.setTimeStamp(0.617261163266);
    msg.setSource(45767U);
    msg.setSourceEntity(58U);
    msg.setDestination(46426U);
    msg.setDestinationEntity(110U);
    msg.seq = 2046637351U;
    msg.state = 156U;
    msg.error.assign("PGOYJWAVMKFHIFMSEBVVSLJLTHQTQGRHFEOXHCTOJTXDPBYFBJURMREJUVDHUWYSAYCLBCZKQNMDAIOZJFKANOGZFQXCHUVPCZTHAUFNFXYPYCUSVWMCASSGLDDGMEWENUJCRZEKDPBUXCIWTVIIIUPDHREMRVMJGTJRSBDOBDYXRAKEOQNZQRJNZ");

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
    msg.setTimeStamp(0.0212221345344);
    msg.setSource(21950U);
    msg.setSourceEntity(166U);
    msg.setDestination(26060U);
    msg.setDestinationEntity(145U);
    msg.seq = 3731622482U;
    msg.state = 136U;
    msg.error.assign("UPIAHPYSLBQUDWGLRMDAYUJTGFOASTSDOKBMPFHWZSBRPSSPZJKVBDSRIHXONENCZUKJTHTQIGEFOWMVDGAGKFJBBTRZICHVTMFRRHZENMCNXVILYJWONRJZFDJHIHKYEZTFUKUMNPLWQTSFHAOPVRKUMDYUKDAQQVXAOZPQGYJACMZCXXVXPMZBIYLSBGEINJKFK");

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
    msg.setTimeStamp(0.908961832144);
    msg.setSource(14544U);
    msg.setSourceEntity(178U);
    msg.setDestination(9653U);
    msg.setDestinationEntity(174U);
    msg.origin.assign("INXORESLGROMMRSSOQXDKVVMAUVPDKGOHSVABCBNHZBZCPNNQIUERVEBFNDZPHYTOJTHTAAGXLOJILDHZDNDMGDGLPYVWATJWXFZYGUZEPFBZJYLMWTXVF");
    msg.text.assign("OTCZBQWWDDVBIHWLTFULUIRLEKQCDWCALMUMNRDTFDRKSVFIFVKFCGOZBJRKFQTUZMHEAAVHNHUQBARWIIULYUIZOJVSGMXPV");

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
    msg.setTimeStamp(0.126970494253);
    msg.setSource(32374U);
    msg.setSourceEntity(46U);
    msg.setDestination(10050U);
    msg.setDestinationEntity(71U);
    msg.origin.assign("GEIOYOZZZMGJJZZYKPJYOIQXKDCUGVYDKIAFDHFUBYHHHRNLNHSRQVSNKZXZWQGOFOVKVGNVYGFTCFXKLPIPCWWXHMEBDTKQMSFGCNRFQPQGLDWWIVDZMLEBKNYRSJLWYRUVQSGAUEQLGOJATIAKJEXTZBIOJNOLARDMXWTPLTJWAINVUXMCAEIXPXBROFAMSLEQDFAURBCCCNZFJURTREBUVPNKMVLPMYCHXADS");
    msg.text.assign("IANCPTYHYWPJTMDGWSMETKAUXUFIJAWEVICAWZNTRWVHQBHGNJSLOAZYVGVVLCKKHQKSQNEHGDRBCEUFTYPBPJRQFPHCMSJYIWLMZIBMFHMRKRGOPMMFBXZXRKSGEUUQTWIWXUTEYHCZQDFSPOIKVIWDBNYQOJEWDQNDSRJLMTOZLNOANXIXJPUKLKBXGATETQQPFCLKRYOLCEYZFFNEZLBSDBMXULGDAOVGXOJBGZ");

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
    msg.setTimeStamp(0.650232459044);
    msg.setSource(3155U);
    msg.setSourceEntity(94U);
    msg.setDestination(4780U);
    msg.setDestinationEntity(197U);
    msg.origin.assign("ZYGRUXFJVOKRKAGFMBTJEISLLCTIZMTZHURVACUOAYPSQNHTYMCILEIMJFWZALPOLFWGEXKHHVLGUSDSIBKCSQKYONMBHKNFETJQDWFFDJPBUEWXWNNZXSCUNVPDNOCGTCVSFAMQBWUXKJHIJPMPXAVSGGJYMVZIFRWBDLCAYRNXCVYTEQHZEBLGXNEMKRRPOZIHHWBFOKTOPDWQITHYJCBDYRUWXPGUXBIQGQAQAREZKELVSDDNUDMSLJTRZY");
    msg.text.assign("LLLROPYBAOTGTQFXLASDACRZEHEWDXAFXQDGFAKBIGIKZUZAVTZCJSCZHRMJLOSHGQENNPVUYSQLDJXYRJUVYUMBKISYVPEVTQJEAXDDLPUMAVNWIIBGGWEOBPSHHWPNBYNDQRSIBOOEOTUGGWJKKJDYCCGTWWDJXMBZMNHRFALLAHUQRNPQKTEINKPSIWFTQPZYSFQJCUMVFRCKXOHPIINCFVNUTXRLRHJDOWFEMYMVHEZFVTKXBBZCWOX");

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
    msg.setTimeStamp(0.755761062994);
    msg.setSource(44094U);
    msg.setSourceEntity(133U);
    msg.setDestination(64070U);
    msg.setDestinationEntity(167U);
    msg.origin.assign("QHZQSWQOKVRNSYLJ");
    msg.htime = 0.659294008126;
    msg.lat = 0.0521253482322;
    msg.lon = 0.281047861643;
    const char tmp_msg_0[] = {-51, -93, -19, 36, 99, -38, -37, -10, 118, -37, 72, -119, 113, -65, -80, -49, 68, 102, -52, -14, -113, 42, 91, 93, 65, -40, 77, -98, -67, -115, -31, -58, 69, -92, 84, -97, 108, -38, -2, -127, -37, -31, -40, 51, -35, -14, 12, -121, 115, -97, -108, 89, -30, -106, 92, -88, 126, -99, 67, -69, -102, 15, 18, -16, -117, 83, 125, -27, 4, 76, 3, -80, 121, -125, -34, 53, 17, 31, 55, -34, -99};
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
    msg.setTimeStamp(0.836331307887);
    msg.setSource(48858U);
    msg.setSourceEntity(234U);
    msg.setDestination(17600U);
    msg.setDestinationEntity(117U);
    msg.origin.assign("MCJNAAUENRTYFWIFWHXZLSETFBXBBVDDFWVCHPIJAVCAVGGMPPTWXOJLZJYFHMLYAEUSMVIQGHXEZRXNHRUQHDUDXSLWNGKSKFNYZBZKZYYVPIMKKUAHTLIOOBFLKOPTAR");
    msg.htime = 0.195086324131;
    msg.lat = 0.377097018455;
    msg.lon = 0.0196991153598;
    const char tmp_msg_0[] = {-104, -21, -49, -102, -62, -106, 109, -4, 42, -5, 16, 44, 26, -112, -38, -109, -111, -50, 113, 36, 71, -7, -110, -88, -47, -103, -51, 102, 0, -90, 124, 65, 59, -85, 72, -102, -11, -75, 86, -102, -89, -106, -85, 115, -45, 6, 69, -122, 118, -2, 109, -21, 53, 34, -21, -1, -4, -26, -124, -94, -82, -4, 105, -4, 68, 105, -82, 12, -6, -10, -71, -36, -28, -76, -102, 46, -102, -43, 95, 89, 79, 103, 101, 115, 79, 42, 121, 13, 19, -52, -76, -51, 36, 95, 0, 111, 52, -116, 73, -21, -59, -37, -103, 17, -48, 87, -26, -58, -66, -109, 22, 97, -38, 119, 77, -98, 53, 17, -61, -37, -19, 31, 109, -46, -10, 25, -44, -32, 71, 108, 29, 57, 10, -117, -31, 105, -13, 16, 52, -111, -126, 37, -12, -81, -49, -78, 6, 126, -28, -48, 8, 73, -39, 68, 102, 83, 69, -34, 99, 58, 94, -16, -52, 4, 71, 105, 124, 115, 20, -35, -74, 71, -53, -51, 58, 18, -31, 37, 78, 27, 117, -42, -100, 116, -33, 125, -117, -124, -13, -63, 83, 93, -61, -101, -107, -74, -90, -91, -91, 9, 83, -121, -42, 76, 87, -36, 0, -79, 19, 46, 106, -29, 89, -113};
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
    msg.setTimeStamp(0.424082296813);
    msg.setSource(20728U);
    msg.setSourceEntity(117U);
    msg.setDestination(54435U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("QHGTPKKKUNJGKMXGLZPFXRCEWJWETFPPVVBZSHRNVUOPTIZQRELYFKHWQFZDRGIPLYJOINUTDVCFYUAZZCOPDCWECJMVZLWMXHHHNMFOHHFJLGSQSCUCTJXYWKJGNPNXTQBFKABDRTVT");
    msg.htime = 0.753753837457;
    msg.lat = 0.797840326334;
    msg.lon = 0.0383063166731;
    const char tmp_msg_0[] = {-48, -60, -100, -100, 61, -81, 31, 94, 24, 123, -14, -15, 12, -98, 83, 37, -33, 101, -111, -8, 45, 106, -55, -98, 101, 44, -54, 32, 86, -46, 60, -122, -5, 65, -37, -19, 120, 38, -109, 86, 77, 114, 121, -111, 54, -12, -10, -119, -12, -47, -17, 86, -33, -75, -2, 123, -100, 93, -103, 25, -54, -94, -85, 122, 70, -51, 71, -119, -7, 119, -109, 117, -20, 50, -101, -43, -36, -22, 25, -45, -114, -76, -66, -78, -4, 48, -122};
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
    msg.setTimeStamp(0.418766651326);
    msg.setSource(15304U);
    msg.setSourceEntity(109U);
    msg.setDestination(56072U);
    msg.setDestinationEntity(217U);
    msg.req_id = 162U;
    msg.ttl = 60465U;
    msg.destination.assign("JVLSNBGJSHUMHYZQWTDNEWGJIQAQOCAOVARXGYXAHQDOXGKQOLUTTGCFMTYESYSTPGDTPYUOLMDIRGRNSEWYIVPMRTAJODH");
    const char tmp_msg_0[] = {108, -48, -100, -70, 100, -44, -29, -42, 5, -43, 58, 45, -114, 121, 109, -87, 74, 0, -102, 30, 116, -6, 33, -88, -20, 9, 74, -86, 91, -18, -63, -73, -6, 109, -58, 28, -125, -97, -87, 87, -85, 8, 89, 66, 80, -74, 12, -9, 80, -120, 17, 126, 63, -125, 86, 75, -47, -12, -48, -80, -102, -121, -124, -110, 10, 58, 21, 91, -84, 101, -42};
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
    msg.setTimeStamp(0.351618963959);
    msg.setSource(62897U);
    msg.setSourceEntity(98U);
    msg.setDestination(19119U);
    msg.setDestinationEntity(149U);
    msg.req_id = 5597U;
    msg.ttl = 49743U;
    msg.destination.assign("CNAAVLWVZTKFFOXUKMHIEUBPMWWKAMSVTWLDTSRMUJOUJXOXXOFQCMKPBHTEEZULSDCWEUKN");
    const char tmp_msg_0[] = {118, 1, -80, -70, -103, -75, -117, 71, -85, -67, -43, -10, 38, 117, -67, -86, 13, -103, -42, 44, 76, -96, 117, -14, -84, -82, 109, 93, 40, 79, -81, -56, -26, -16, -1, -127, 37, 68, -119, -41, 58, -72, -121, 84, -121, -26, 35, 95, 73, -18, 122, -124, -126, 24, 56, -95, 7, 122, -31, 14, -5, 9, -50, -98, 61, -44, 80, -14, 3, -27, -1, -44, 36, -73, -102, -2, -65, 12, -90, -5, -44, 36, 79, 96, -61, 109};
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
    msg.setTimeStamp(0.4500392285);
    msg.setSource(62691U);
    msg.setSourceEntity(142U);
    msg.setDestination(49004U);
    msg.setDestinationEntity(99U);
    msg.req_id = 50038U;
    msg.ttl = 23826U;
    msg.destination.assign("ERAXGWZKFHKQGLNWCSBLRXNYXIMAQSMRAUWNBENKMJFYFFQNPYDJSAYRZ");
    const char tmp_msg_0[] = {-5, 120, 40, 10, -120, 91, -65, -35, 23, 113, -87, -41, -14, 113, -78, -118, 4, -38, -93, 77, -17, -82, -25, -4, 31, -122, 36, -20, 31, -30, 58, 92, 119, 89, -71, 28, -6, 95, -2, -8, -114, 125, 45, -59, -118, 20, 17, -67, 101, 86, 60, -128, 86, -39, 66, 69, 100, 68, 32, -59, 59, 94, 81, 106, -1, 47, 67, 32, 124, 84, -108, -29, -107, -60, -72, 83, 101, -113, -94, 35, 38, 29, -71, 28, -63, -119, 56, -8, 71, -73, -54, -101, 71, -18, -97, 31, 28, -33, 28, -77, -125, 19, 114, 27, 21, 50, 43, 84, 96, -78, -21, 55, -96, 83, 116, -44, 68, -5, 26, -58, 115, -70, -87, -58, 108, -47, -50, -89, 88, 95, -106, 92, 126, 101, 57, 98, 27, 84, -125, -20, -16, 59, -124, 81, -1, 112, -63, -79, 103, -55, 0, -96, 76, -74, 43, -45, 78, -115, 71, 11, -94, -73, 38, -126, 72, 34, 52, 2, 95, 62, -69, 58, -37, 94, -30, -65, -110, 44, 27, -30, 93, -56, 82, 55, -37, -56, 57, 4, -8, 91, 36, -66, -108, -61, 107, 92, -99, 80, 61, 118, -126, -99, -111, -107, -20, 26, -51, -49, -28, -59, -76, -59, -113, -47, -88, 14, 43, 74, -68, -15};
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
    msg.setTimeStamp(0.921033266772);
    msg.setSource(29423U);
    msg.setSourceEntity(76U);
    msg.setDestination(42105U);
    msg.setDestinationEntity(238U);
    msg.req_id = 6362U;
    msg.status = 5U;
    msg.text.assign("HIGWYLWKEQTPMBWCBIRLCUOZAXHMIZHOSOAZUDDRZBXJMEIBLBMOVCSKVRSCYCGNXFQZTZJILMUAUVBAYXTVSZJWGZWNDTORYVIQAQTIYPVXYKRDDNSDVIXJMTCMKFKNRBNHDEKLPTAWQKOVPEYJQUHFYEAVQLWYDEECDGFBHXWIXFSAQOFHPGKLMBSUNLCHRPPAGRSFWUZOSNLPMFUJZYIHKKJCV");

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
    msg.setTimeStamp(0.773266521102);
    msg.setSource(27920U);
    msg.setSourceEntity(252U);
    msg.setDestination(27885U);
    msg.setDestinationEntity(200U);
    msg.req_id = 12216U;
    msg.status = 189U;
    msg.text.assign("LWZOJYNCNFDFXNUQETVYJAHMSKBRSKXIZSFLMUIYUSGVOZXKQGSELEOFOMPTDMWUHMRSAVQPUPTRZJCWTXE");

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
    msg.setTimeStamp(0.00114002683773);
    msg.setSource(2467U);
    msg.setSourceEntity(46U);
    msg.setDestination(35169U);
    msg.setDestinationEntity(69U);
    msg.req_id = 50128U;
    msg.status = 121U;
    msg.text.assign("OVGMZXXKLKHCQDMXUTYICBVNXYFDBBDAZZLOSESJCKAGIQLIFQFWZQROOIICKELTTBRPEJYAYZIHTQRIYBSEWVJSZWFCUKAJFPIVVKMVZHUVBDWWPCSORWJXGL");

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
    msg.setTimeStamp(0.139958100935);
    msg.setSource(16884U);
    msg.setSourceEntity(141U);
    msg.setDestination(54231U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("OHDFUWGOZPXSVKKKFGVPVYWRVASREUBVQTAZYZQHDXMKMGESWQRZGLIUUJNNKPVSTBJINCURYDEBALRRJHRCXXYQQSQLTAQCBCXIDTPCOHZXSPIPKUECMJFJQYDKPWAGPNGGYWTMVDLBLYHWZWOGNEKBNHDDQOTTMSUFLCRFNZTIWLDNMFXJKJXZSPPYTIEHIMEOLF");
    msg.links = 3409161509U;

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
    msg.setTimeStamp(0.0757931525121);
    msg.setSource(33877U);
    msg.setSourceEntity(169U);
    msg.setDestination(18375U);
    msg.setDestinationEntity(194U);
    msg.group_name.assign("RIYESEGBEAPRKIGHXOULJFRIWOASQWFRDEKWVQPHSHRKYZIJGVRGSHUBNDSQGEXZXAXHOINMNLFWGMHQRBJOODVADOPKMGFCBBPNCLMDGKTWJSWCFPZSZIMQWSYEVTCZUPTBGCFMVVRIOTMLNYCAWHKJQGLIEAHNYF");
    msg.links = 2561200436U;

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
    msg.setTimeStamp(0.623265810811);
    msg.setSource(28212U);
    msg.setSourceEntity(12U);
    msg.setDestination(53553U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("EJWKQFTUENACVDIHBXOXXPJPZOJXQKDIUSACJRQREUYAJYVGHTCJEHRVZKBVQRMWIYNGQSLICUMMYNLDGAGVYJQIKFLOBESEQPSDZBDCGHWOHZZ");
    msg.links = 775527617U;

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
    msg.setTimeStamp(0.22211837175);
    msg.setSource(41884U);
    msg.setSourceEntity(219U);
    msg.setDestination(43020U);
    msg.setDestinationEntity(150U);
    msg.groupname.assign("YJRKOKHTUBRYRAIILVKOCCTRBFGONOBFRSLMSGORMPPDGCGQGTJQXIIJLBPZORAOGWTEHUHKPIKATQWBDPZFTWJWCUSRNERUAGMTQFMDBOVQKNSPYNWTQWHLIIIQLBINAXLYYVZDVZSQXCOYCEXFHLQFTZYZSPXHNKUZXSWPXCCMEDBUPCMKYZAVSJEMADDWPLGYEEAUHVEVXJVBDWIHHMKMNJOVEYMFJFFJUECNKAZTXDRBQLHWSXV");
    msg.action = 121U;
    msg.grouplist.assign("JMFDKBHFVBLSDTHZEAUBBTNDPVFBUVPNUIOLMLYMITSEKWGDXTDDZMPCAJSOZZQNRVCIRCNOORROPNYOJMIPUQUYRZIPIPVNWGXUZMVHQAYLCAXNHGLADQQABDHIAZFUMOGIWIDXCMWAQEQPJXIBNYEWXKSNBXCKVYTGERXEPFYZCARQJJMSJWWKSHQWUGWKEWSGMVPHLGEHBTESTGCHXOYCURCVLSHOOXRKLNT");

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
    msg.setTimeStamp(0.750288915467);
    msg.setSource(56880U);
    msg.setSourceEntity(174U);
    msg.setDestination(34910U);
    msg.setDestinationEntity(33U);
    msg.groupname.assign("NPPGWLNLJYZORGKTMJJMAVCJATHBKNIYQRYAKRKJSAIVEDAHWNVACVILQEHCOGOIRSOZG");
    msg.action = 134U;
    msg.grouplist.assign("AUMZQLREEZQVYKIOSOMMNOYIXKZRKTUBDUCHELVBGANITEUPBOUDCCXSPTTAWXGEYMKCNLCROONPBRWGYJPHFHBLWNZOSETBVDXYPNSXGLCROXRWTSCAYIBWHZBKHHBPDNRPKQIETGUXMJSGDRQAFFCHLAMXFLVCFYBNYJQJDZMVUYQXYEVQVN");

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
    msg.setTimeStamp(0.137009994914);
    msg.setSource(65063U);
    msg.setSourceEntity(221U);
    msg.setDestination(16401U);
    msg.setDestinationEntity(247U);
    msg.groupname.assign("NWYKIZOOJIYTOHITZMCDJGNYDRLSSBUOPHPEDNLNYUXTMIBMFZJSEGWRTHBVZMVTZYQFWOKUNBJTCNLGMTZSQXUHIDEQSCMUKKAVAXAUUOPYSQBBTMYBFMXBGAGCQKEZEZJEZAQWQXPIGRSPFULNOLEJWXPHGRWJNWRWQDFVDOOHFKUSYJQBCX");
    msg.action = 62U;
    msg.grouplist.assign("WWAUBJMFERVRQEOWJZNIS");

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
    msg.setTimeStamp(0.506717229541);
    msg.setSource(46103U);
    msg.setSourceEntity(156U);
    msg.setDestination(55814U);
    msg.setDestinationEntity(75U);
    msg.value = 0.17209396997;
    msg.sys_src = 50643U;

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
    msg.setTimeStamp(0.383471591878);
    msg.setSource(59878U);
    msg.setSourceEntity(192U);
    msg.setDestination(17209U);
    msg.setDestinationEntity(67U);
    msg.value = 0.870757650283;
    msg.sys_src = 57247U;

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
    msg.setTimeStamp(0.22837744999);
    msg.setSource(48102U);
    msg.setSourceEntity(163U);
    msg.setDestination(38971U);
    msg.setDestinationEntity(124U);
    msg.value = 0.724677080039;
    msg.sys_src = 14363U;

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
    msg.setTimeStamp(0.30497980537);
    msg.setSource(41307U);
    msg.setSourceEntity(199U);
    msg.setDestination(30873U);
    msg.setDestinationEntity(224U);
    msg.value = 0.366408304857;
    msg.units = 219U;

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
    msg.setTimeStamp(0.690683058757);
    msg.setSource(58986U);
    msg.setSourceEntity(188U);
    msg.setDestination(51419U);
    msg.setDestinationEntity(171U);
    msg.value = 0.694155009082;
    msg.units = 86U;

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
    msg.setTimeStamp(0.854784899397);
    msg.setSource(11187U);
    msg.setSourceEntity(27U);
    msg.setDestination(11484U);
    msg.setDestinationEntity(33U);
    msg.value = 0.035837291848;
    msg.units = 97U;

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
    msg.setTimeStamp(0.178203412888);
    msg.setSource(52712U);
    msg.setSourceEntity(53U);
    msg.setDestination(55698U);
    msg.setDestinationEntity(126U);
    msg.base_lat = 0.295357726746;
    msg.base_lon = 0.723787991043;
    msg.base_time = 0.174523027956;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 35077U;
    tmp_msg_0.priority = 104;
    tmp_msg_0.x = -19941;
    tmp_msg_0.y = 5015;
    tmp_msg_0.z = -31913;
    tmp_msg_0.t = -25348;
    IMC::FormState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.possimerr = 0.14138527854;
    tmp_tmp_msg_0_0.converg = 0.696493544171;
    tmp_tmp_msg_0_0.turbulence = 0.0603218153135;
    tmp_tmp_msg_0_0.possimmon = 186U;
    tmp_tmp_msg_0_0.commmon = 142U;
    tmp_tmp_msg_0_0.convergmon = 169U;
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
    msg.setTimeStamp(0.272414348347);
    msg.setSource(59646U);
    msg.setSourceEntity(165U);
    msg.setDestination(25203U);
    msg.setDestinationEntity(29U);
    msg.base_lat = 0.23755292113;
    msg.base_lon = 0.0409164429527;
    msg.base_time = 0.36491562975;

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
    msg.setTimeStamp(0.973913593934);
    msg.setSource(14970U);
    msg.setSourceEntity(105U);
    msg.setDestination(21286U);
    msg.setDestinationEntity(229U);
    msg.base_lat = 0.703646839208;
    msg.base_lon = 0.52566826508;
    msg.base_time = 0.876326746375;

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
    msg.setTimeStamp(0.156308472398);
    msg.setSource(37916U);
    msg.setSourceEntity(201U);
    msg.setDestination(51764U);
    msg.setDestinationEntity(160U);
    msg.base_lat = 0.448418455;
    msg.base_lon = 0.910808256383;
    msg.base_time = 0.738028974378;
    const char tmp_msg_0[] = {-83, 54, -107, 12, 62, 0, 41, 63, 8, -87, -16, 48, -61, -125};
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
    msg.setTimeStamp(0.457425732737);
    msg.setSource(23746U);
    msg.setSourceEntity(160U);
    msg.setDestination(18367U);
    msg.setDestinationEntity(69U);
    msg.base_lat = 0.401762055763;
    msg.base_lon = 0.184565849663;
    msg.base_time = 0.635787787078;
    const char tmp_msg_0[] = {-3, 3, 55, -120, -62, -94, 76, 111, 9, 76, 25};
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
    msg.setTimeStamp(0.201683193683);
    msg.setSource(16966U);
    msg.setSourceEntity(161U);
    msg.setDestination(36760U);
    msg.setDestinationEntity(48U);
    msg.base_lat = 0.997930538028;
    msg.base_lon = 0.577715291018;
    msg.base_time = 0.619026446003;
    const char tmp_msg_0[] = {-24, -25, 72, -6, -52, -99, 22, 25, -5, 0, -86, -95, -90, -23, -82, -54, 91, -99, 94, -17, -58, -73, 118, 49, 76, 15, -103, -69, 102, -7, 4, -55, -39, 21, 126, 47, -68, -93, -6, 90, -85, 24, 68, 99, -26, 105, -46, 99, -55, -69, -107, -124, -31, -56, -26, -74, -3, 49, -86, 81, -43, -8, -67, -57, 38, 97, 96, 46, -1, -34, -90, -40, -12, -105, -78, -109, -21, -12, 64, -107, 82, 95, -84, -99, 32, -72, -55, 15, 1, 90, -42, 83, -114, 19, -67, -47, 52, -9, 27, 0, 73, -60, 47, -121, 85, 13};
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
    msg.setTimeStamp(0.997274001955);
    msg.setSource(31266U);
    msg.setSourceEntity(81U);
    msg.setDestination(48581U);
    msg.setDestinationEntity(20U);
    msg.sys_id = 12980U;
    msg.priority = -30;
    msg.x = -23075;
    msg.y = 22984;
    msg.z = 31318;
    msg.t = 8518;
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.116677583139);
    msg.setSource(58699U);
    msg.setSourceEntity(74U);
    msg.setDestination(47381U);
    msg.setDestinationEntity(240U);
    msg.sys_id = 1365U;
    msg.priority = -95;
    msg.x = -29623;
    msg.y = 25374;
    msg.z = -11272;
    msg.t = -9102;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.932841983446;
    tmp_msg_0.i = 0.562350031997;
    tmp_msg_0.d = 0.0391051368301;
    tmp_msg_0.a = 0.011209804797;
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
    msg.setTimeStamp(0.49556167377);
    msg.setSource(55923U);
    msg.setSourceEntity(49U);
    msg.setDestination(39553U);
    msg.setDestinationEntity(192U);
    msg.sys_id = 44978U;
    msg.priority = 51;
    msg.x = 17633;
    msg.y = -30426;
    msg.z = -16568;
    msg.t = 23056;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.590106742609;
    tmp_msg_0.lon = 0.472620346314;
    tmp_msg_0.height = 0.646545963663;
    tmp_msg_0.x = 0.823235097557;
    tmp_msg_0.y = 0.20660769906;
    tmp_msg_0.z = 0.390335853096;
    tmp_msg_0.phi = 0.0672286373934;
    tmp_msg_0.theta = 0.913344019859;
    tmp_msg_0.psi = 0.442521914084;
    tmp_msg_0.u = 0.190374550528;
    tmp_msg_0.v = 0.991023859617;
    tmp_msg_0.w = 0.247465818833;
    tmp_msg_0.p = 0.334437152124;
    tmp_msg_0.q = 0.113358081091;
    tmp_msg_0.r = 0.135898956823;
    tmp_msg_0.svx = 0.159848238667;
    tmp_msg_0.svy = 0.164429292379;
    tmp_msg_0.svz = 0.551782166145;
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
    msg.setTimeStamp(0.975854900473);
    msg.setSource(10070U);
    msg.setSourceEntity(188U);
    msg.setDestination(15927U);
    msg.setDestinationEntity(5U);
    msg.req_id = 5775U;
    msg.type = 67U;
    msg.max_size = 10498U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.68826226784;
    tmp_msg_0.base_lon = 0.579339583004;
    tmp_msg_0.base_time = 0.611609563837;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 55139U;
    tmp_tmp_msg_0_0.destination = 26688U;
    tmp_tmp_msg_0_0.timeout = 0.0859407860937;
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("EXHBITKBBVLOIZPARREVUKNNUGYTCFWHOEMLDHRTUODBZYZVMKYURSMLIELPXCFTLXWLTDZFGPCVZRBLKPPGUJQOSJBOCIQVKDSIHGXROSEDVAHIPUTKDCGSWCQMOINXWCMGUGYYWXTKSYCJFHYIATBHLLFCWQJWDARDAWOSNQUZHQAKQKLNYVPYSQRMWEYSBPXUGUXKXNNJMEFTSQJENQMJRNFDHJVZNZETCG");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 68U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("KHPPNODYCJTDXAGWQBSFSOJEEBTVOQFFKBCHZLPXPLOEPUOGTIQDCZDWNICPXUZCUVIVAVQMIRDSODHXUZQYQBKWMEHAURRICVPFYJHBYTNNGFQLDRGOFJVWXGZIYSVASILHGMCBB");
    tmp_tmp_tmp_msg_0_0_0.max.assign("YQTMXLSGFNJFWGZYODZRLLZKXWJUOWWHTNHSLNXNMTIIHBRLDKBYEFVNTTNBOCFRCVBPRDLQTCYXVMEZSTAXRCZIGABAYKETPEMKWSZCOPQVIYWYHVSJOMZMJDUDWPZODOJQSVCYIDKBWKQPXFSEUKUHINEYAJXERSUUHXFQBOULAQZUGNSPRNHKHKIGCJEIIFCGDPHKMTAJBVVJFVVXTDXPZNWLGBLAGDYAWURASUE");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.521470353296);
    msg.setSource(30206U);
    msg.setSourceEntity(254U);
    msg.setDestination(16986U);
    msg.setDestinationEntity(77U);
    msg.req_id = 2838U;
    msg.type = 252U;
    msg.max_size = 24051U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.627863693853;
    tmp_msg_0.base_lon = 0.649532474943;
    tmp_msg_0.base_time = 0.881971857246;
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
    msg.setTimeStamp(0.281000285757);
    msg.setSource(29166U);
    msg.setSourceEntity(74U);
    msg.setDestination(9287U);
    msg.setDestinationEntity(156U);
    msg.req_id = 47609U;
    msg.type = 118U;
    msg.max_size = 31567U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.669624374007;
    tmp_msg_0.base_lon = 0.423406256092;
    tmp_msg_0.base_time = 0.318620081392;
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
    msg.setTimeStamp(0.87889772854);
    msg.setSource(56785U);
    msg.setSourceEntity(202U);
    msg.setDestination(37822U);
    msg.setDestinationEntity(207U);
    msg.original_source = 47201U;
    msg.destination = 22335U;
    msg.timeout = 0.928617829526;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 43685U;
    tmp_msg_0.bearing = 0.385433541465;
    tmp_msg_0.elevation = 0.679101732594;
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
    msg.setTimeStamp(0.278944940953);
    msg.setSource(32336U);
    msg.setSourceEntity(14U);
    msg.setDestination(40731U);
    msg.setDestinationEntity(116U);
    msg.original_source = 12629U;
    msg.destination = 4604U;
    msg.timeout = 0.0753613074907;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.570425086643;
    tmp_msg_0.speed = 0.804453296924;
    tmp_msg_0.turbulence = 0.393698901861;
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
    msg.setTimeStamp(0.529641650796);
    msg.setSource(42564U);
    msg.setSourceEntity(207U);
    msg.setDestination(59216U);
    msg.setDestinationEntity(188U);
    msg.original_source = 60418U;
    msg.destination = 3032U;
    msg.timeout = 0.478260450025;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 243U;
    const char tmp_tmp_msg_0_0[] = {-61, -26, 102, -123, -17, 5, 72, 112, 98, 86, 114, 113, 36, 43, -104, -28, 24, -23, 99, -26, 93, 115, 111, 92, 63, 100, -89, 14, 90, -81, 11, -32, -47, 17, 70, -34, 87, -121, -34, -71, -73, 114, 42, 59, 95, 107, -66, -111, -107, -6, -71};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.892410768017);
    msg.setSource(25091U);
    msg.setSourceEntity(61U);
    msg.setDestination(64498U);
    msg.setDestinationEntity(121U);
    msg.id = 89U;
    msg.range = 0.546348019587;

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
    msg.setTimeStamp(0.806686676679);
    msg.setSource(57226U);
    msg.setSourceEntity(85U);
    msg.setDestination(14231U);
    msg.setDestinationEntity(216U);
    msg.id = 103U;
    msg.range = 0.749536024667;

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
    msg.setTimeStamp(0.442310910684);
    msg.setSource(24123U);
    msg.setSourceEntity(33U);
    msg.setDestination(65519U);
    msg.setDestinationEntity(142U);
    msg.id = 111U;
    msg.range = 0.27361131624;

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
    msg.setTimeStamp(0.459598152095);
    msg.setSource(1585U);
    msg.setSourceEntity(233U);
    msg.setDestination(16802U);
    msg.setDestinationEntity(89U);
    msg.beacon.assign("GSXNVFWACWQPSLPGJOHTBCAUXJKOAGBRFINALJLZHTEPAMDLDISQCSMEZPTQLSUOHOZKCKSPNCAZWMUOIDGYWP");
    msg.lat = 0.244884472049;
    msg.lon = 0.0593436520341;
    msg.depth = 0.291605883251;
    msg.query_channel = 236U;
    msg.reply_channel = 175U;
    msg.transponder_delay = 50U;

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
    msg.setTimeStamp(0.0979114079131);
    msg.setSource(45930U);
    msg.setSourceEntity(108U);
    msg.setDestination(32221U);
    msg.setDestinationEntity(27U);
    msg.beacon.assign("NDFGJEGBGVAFTSZJORUZPSTXMQMXZSCVKIRPTOWIAWOPQXHTNGZLOZJIUEMYOVLDMDCWUHLBOFYYHOQJQXHMCKAFWLPPJPIWFXLFNYRVTZGDSCEQMERRYABHBGPMGJFPYEPKRAXEIBEAJTZTCTLSMQMHZJUUAHKNKBOVKCDIMADXDFIVKQWWVTLWYPNJGFDYVHDQNKFUWJTVYBBABNDEGRNKLVGCUIUOWQXISCRSNLSXEOZRUK");
    msg.lat = 0.630925475686;
    msg.lon = 0.88965597575;
    msg.depth = 0.905980302826;
    msg.query_channel = 40U;
    msg.reply_channel = 192U;
    msg.transponder_delay = 134U;

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
    msg.setTimeStamp(0.660285006937);
    msg.setSource(45985U);
    msg.setSourceEntity(218U);
    msg.setDestination(37215U);
    msg.setDestinationEntity(240U);
    msg.beacon.assign("GXISXXKSPDBWNQUUEOHUIMMASDLTLBVPSHEEMNRVZOMXOEBYCTJYHIYMNBBQSLWNPTUMRIWIYGZZFNJPOVXJYDYJPZCCHCPDUKXDSARHQUJTLOOWGTGLELCRJIBLFFQDILNAGEFLCK");
    msg.lat = 0.270666573048;
    msg.lon = 0.113208552452;
    msg.depth = 0.386457791021;
    msg.query_channel = 130U;
    msg.reply_channel = 242U;
    msg.transponder_delay = 19U;

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
    msg.setTimeStamp(0.160776350799);
    msg.setSource(25793U);
    msg.setSourceEntity(105U);
    msg.setDestination(30210U);
    msg.setDestinationEntity(183U);
    msg.op = 111U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DTITXYWMITDUOZRUYUVKBDRSLSUHRZKEZEDDSBNYGWEIQJRMMEIWNJTHOXTMXIKXVSKWYKNFBIMABWYZOUAHFKRQFFIODVXSQHAREMPTDSJMFJQADLYCEZEOYPSPQZBJVFCMCFOCIVGBQKVVZOCPICNNJHLHDPR");
    tmp_msg_0.lat = 0.960279223986;
    tmp_msg_0.lon = 0.878674555157;
    tmp_msg_0.depth = 0.620501062585;
    tmp_msg_0.query_channel = 63U;
    tmp_msg_0.reply_channel = 98U;
    tmp_msg_0.transponder_delay = 135U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.924018821438);
    msg.setSource(24548U);
    msg.setSourceEntity(167U);
    msg.setDestination(26329U);
    msg.setDestinationEntity(118U);
    msg.op = 52U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SNMVBIFHYEYGZOXPNQQETDYUSGBOLXWIAQMEUQORWHKPPJMCSVCJCLRZWWJESAKLRGRBHMUEZUXJQLNEHUDKAUBRIAJDWXHBPFXNUDPRRVDAPRINEVPLUTKPDLTOTYANNNZTCTLQAMGIUOTUFSMJVSWPZKOEGTZMQEQHHIGGKJWGMXICWVJGVFTYZMZTFKMBSXIYDYJYYSHGHXBSVOCISNBQOFALKRDAQFBJXV");
    tmp_msg_0.lat = 0.374945255761;
    tmp_msg_0.lon = 0.0486613729044;
    tmp_msg_0.depth = 0.256452118638;
    tmp_msg_0.query_channel = 20U;
    tmp_msg_0.reply_channel = 177U;
    tmp_msg_0.transponder_delay = 196U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.932929385129);
    msg.setSource(41294U);
    msg.setSourceEntity(206U);
    msg.setDestination(54706U);
    msg.setDestinationEntity(190U);
    msg.op = 124U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QXTRZVIVPXAPORNIHFPPANGYJLQAXPKJULTBXLRRZCVNKOKRYSSGOUDNMYYJEWUMXRNQWNLUKCDNHAGCVZCRDMYINVYVMRYHSEFQEMVSQMKGMBOUGYVSTIOJHQBGDEZHTQAKCWSWVIMYUPTZKGFCVAKPHABQOOZYUSZOEUIHDTDHQRETDJXLJFLCTFJHABXLBJIMNTJWZGIFZNUUDPSPCFIOW");
    tmp_msg_0.lat = 0.979110936832;
    tmp_msg_0.lon = 0.744757816667;
    tmp_msg_0.depth = 0.70135134726;
    tmp_msg_0.query_channel = 170U;
    tmp_msg_0.reply_channel = 95U;
    tmp_msg_0.transponder_delay = 233U;
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
    msg.setTimeStamp(0.949349241309);
    msg.setSource(22360U);
    msg.setSourceEntity(170U);
    msg.setDestination(23331U);
    msg.setDestinationEntity(61U);
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("FDRAIEVBHSNCBLFGEPQCGVZAZSZWHFTEURSHSOABDJHUQAQIOKFJOIRZBCDATCWPWBJMQNQZDHILMNBIWNK");
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
    msg.setTimeStamp(0.0196216582891);
    msg.setSource(59214U);
    msg.setSourceEntity(171U);
    msg.setDestination(39248U);
    msg.setDestinationEntity(15U);
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 42U;
    tmp_msg_0.request_id = 19353U;
    tmp_msg_0.command = 4U;
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.568044297123;
    tmp_tmp_msg_0_0.lon = 0.730247843085;
    tmp_tmp_msg_0_0.z = 0.0582278378241;
    tmp_tmp_msg_0_0.z_units = 146U;
    tmp_tmp_msg_0_0.speed = 0.0189878111477;
    tmp_tmp_msg_0_0.speed_units = 86U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.388184511004;
    tmp_tmp_tmp_msg_0_0_0.y = 0.340991352629;
    tmp_tmp_tmp_msg_0_0_0.z = 0.695785819167;
    tmp_tmp_tmp_msg_0_0_0.t = 0.357012498101;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_time = 0.426489714485;
    tmp_tmp_msg_0_0.custom.assign("NKECVHXRMSYWBAAQTVJAJPCWOZLUEXGGDMJILIQRSUCZNBOJMVUPXZRCDDFUKPGDNFO");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 35393U;
    tmp_msg_0.info.assign("PLBOZVMALXAYVPKTJRTFMCGMRXEPHIRQQNKILISLJTSSKGPQWDAREZKXVCVMCLFHCENRZGMWBLWUTEJIYQAODUOCUHIILQIQVHSBFJTLMYDNDENJHOFFMXQWNZTAKVRTEWSDBHYBTVWHKJEMDZVBUAZNVASBPGLEIYSTEAYUXOWJQCBOFRXUIOXJQXMKJCXYDONCGCYUBGGORKNYPPBKZQGKHJWXCS");
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
    msg.setTimeStamp(0.999769037752);
    msg.setSource(9672U);
    msg.setSourceEntity(241U);
    msg.setDestination(25246U);
    msg.setDestinationEntity(113U);
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 59U;
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
    msg.setTimeStamp(0.061050933787);
    msg.setSource(34425U);
    msg.setSourceEntity(209U);
    msg.setDestination(11238U);
    msg.setDestinationEntity(123U);
    msg.op = 111U;
    msg.system.assign("XUKWDCCNUUWSRUOHARGZPDSESYEXCRZZLLNGPAXKDBAFNYFRGTUBRIUQJXYMNUVF");
    msg.range = 0.395562728038;
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.941931005748;
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
    msg.setTimeStamp(0.431830277811);
    msg.setSource(46793U);
    msg.setSourceEntity(229U);
    msg.setDestination(31093U);
    msg.setDestinationEntity(169U);
    msg.op = 54U;
    msg.system.assign("FLSJERMLRBMYXQUTZXXHMTMWDALZVLFVWCAZWHFACZVQRPJQERHUCBOHKGZHMVHRLGJWASCXIORWGXBUKIEQXZFWCOELUMYXJVQZLVRCROEETDBPSWZBOPYFJOSMYIBUDBLIDCANTFHHGIXGTPWSQQWSKQNUFFDFCJUWSKNOSYOPVCABYNJIEGHZDGNNXYEIYVZQFURQPBSPYNNUT");
    msg.range = 0.0974489040829;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.921359468066;
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
    msg.setTimeStamp(0.111935193746);
    msg.setSource(27961U);
    msg.setSourceEntity(77U);
    msg.setDestination(15644U);
    msg.setDestinationEntity(211U);
    msg.op = 75U;
    msg.system.assign("VQODSXRCNESIZVUGUXJYUHGLIRHNMPYDKQRTJKAMFPANMYRZCZBGODHDONYQWYDITOENBQRHSWJSREOBETC");
    msg.range = 0.892276095753;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 100U;
    const char tmp_tmp_msg_0_0[] = {-128, -25, -2, -77, -123, 11, -99, 95, 44, 32, 44, 49, 126, 110, 72, 124, -44, -116, 70, 122, -59, -1, -36, 91, 40, -108, -89, 109, 8, 100, 18};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.461815935048);
    msg.setSource(32889U);
    msg.setSourceEntity(228U);
    msg.setDestination(29072U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.811809129725);
    msg.setSource(16854U);
    msg.setSourceEntity(42U);
    msg.setDestination(19831U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.380973671938);
    msg.setSource(13585U);
    msg.setSourceEntity(32U);
    msg.setDestination(34799U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.608285249947);
    msg.setSource(18821U);
    msg.setSourceEntity(1U);
    msg.setDestination(46840U);
    msg.setDestinationEntity(224U);
    msg.list.assign("WVNWQJCIMGAEROFTUUYYFKZIFAZVBLLSBEUUAWJRCAKBMXYCZXXEMMBNYTRKKHGHWGPHLKQLBTMXWTVJVSTDDSAXWATBIF");

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
    msg.setTimeStamp(0.092666641449);
    msg.setSource(31769U);
    msg.setSourceEntity(111U);
    msg.setDestination(10703U);
    msg.setDestinationEntity(26U);
    msg.list.assign("AOUNSWMITQLVRFPTFMLWONGOSBAMCPJFQTTUABYGOOVJJZKRRFUKXYKVGGEDHJTEHBQRQRAWPOBESWSZJBUBWMNYGWWGEABPNDXIKPDKSQXMMHFEATOJTEZDVHBGMNXULFPHPLIFIRMJHUQUENIWSAFIDSVLNAVTTXAEHCVPXXDUSKEZJZLHXYCHZRIXDZVKQQITBOPLARUKILCSQVNGYBDCMKD");

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
    msg.setTimeStamp(0.982068182405);
    msg.setSource(44131U);
    msg.setSourceEntity(206U);
    msg.setDestination(23789U);
    msg.setDestinationEntity(200U);
    msg.list.assign("JSHXLQIMFHQQRBICTICYAZLENOFMNDBTGNYFHPNFUVGWPYBVTVKKNXBVDUGXAJWOTYUIYXXEJBQTMZYMKCXAPZHBCFDRKSBRMGZLJJZRARSPDECZFRWWXHSLTFHEENJLQVHIPPLGGJQNJMPQJYBUUAKATDVVZSDLEOSQSPLKWIADWMLRECHKGMVFTMRWUOAPMUNXWDKVCPQRDESGTGNUDUUHHOFOYSY");

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
    msg.setTimeStamp(0.353370893343);
    msg.setSource(56856U);
    msg.setSourceEntity(44U);
    msg.setDestination(49912U);
    msg.setDestinationEntity(217U);
    msg.peer.assign("VZFJXZBUQYNXARCVZWLSZYUHDBNXURACDBKCLWLSTNWYIPASDNEDUITSSZQKYGYKQTHNNQFSLVRF");
    msg.rssi = 0.400442401649;
    msg.integrity = 61592U;

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
    msg.setTimeStamp(0.524084842967);
    msg.setSource(63790U);
    msg.setSourceEntity(59U);
    msg.setDestination(43307U);
    msg.setDestinationEntity(43U);
    msg.peer.assign("BBZJZRLTGUVUFSPXJPCFBNIFWIDHHGRNLGFXKGCSQYZDPLAHWUYGDWNVBWEQEVUBKTYRVXJLZVMEMDRLCEZDQYWBZKIHHZXCSJBOWYYKRIXTOYNPJWZACGMGHFSOEFNJJTAAQCXPRHNRULRZXQTULEQXKKKGFGDAALIZB");
    msg.rssi = 0.151287041145;
    msg.integrity = 20191U;

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
    msg.setTimeStamp(0.336008881969);
    msg.setSource(13729U);
    msg.setSourceEntity(147U);
    msg.setDestination(31609U);
    msg.setDestinationEntity(31U);
    msg.peer.assign("VJCTXZAEJDABPGHIAEMPSVWZHIVNGBTFSKTLNQOAQFRRGWQKRFRFIGPXHCMJAVGWLQHPPCCNUBIQSMBFMSOIKDHCFZNNLEIEVKOLTXGSFCTMEQJZYPBXPNUVDQXOGWJNCCLDBMBITUEUMMLXAKYLWIJOXCBVGPYSTALHDEXZHDTDOYUOWRYWRKYAWOPKKZJEWDIRJ");
    msg.rssi = 0.240316753504;
    msg.integrity = 52600U;

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
    msg.setTimeStamp(0.466902187707);
    msg.setSource(15861U);
    msg.setSourceEntity(43U);
    msg.setDestination(3234U);
    msg.setDestinationEntity(130U);
    msg.value = 23441;

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
    msg.setTimeStamp(0.184963333655);
    msg.setSource(35266U);
    msg.setSourceEntity(228U);
    msg.setDestination(39742U);
    msg.setDestinationEntity(138U);
    msg.value = 32190;

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
    msg.setTimeStamp(0.0972156741939);
    msg.setSource(26739U);
    msg.setSourceEntity(35U);
    msg.setDestination(40467U);
    msg.setDestinationEntity(164U);
    msg.value = -20045;

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
    msg.setTimeStamp(0.36962675899);
    msg.setSource(42777U);
    msg.setSourceEntity(30U);
    msg.setDestination(19595U);
    msg.setDestinationEntity(25U);
    msg.value = 0.126755404735;

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
    msg.setTimeStamp(0.105987825762);
    msg.setSource(10925U);
    msg.setSourceEntity(140U);
    msg.setDestination(49700U);
    msg.setDestinationEntity(155U);
    msg.value = 0.288458505871;

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
    msg.setTimeStamp(0.726503221342);
    msg.setSource(3340U);
    msg.setSourceEntity(243U);
    msg.setDestination(50028U);
    msg.setDestinationEntity(1U);
    msg.value = 0.451664832987;

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
    msg.setTimeStamp(0.933800152257);
    msg.setSource(59203U);
    msg.setSourceEntity(122U);
    msg.setDestination(62770U);
    msg.setDestinationEntity(198U);
    msg.value = 0.880864310478;

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
    msg.setTimeStamp(0.736989462721);
    msg.setSource(31347U);
    msg.setSourceEntity(133U);
    msg.setDestination(58987U);
    msg.setDestinationEntity(148U);
    msg.value = 0.430241269144;

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
    msg.setTimeStamp(0.167058209097);
    msg.setSource(61377U);
    msg.setSourceEntity(222U);
    msg.setDestination(61098U);
    msg.setDestinationEntity(2U);
    msg.value = 0.48546053096;

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
    msg.setTimeStamp(0.618260802737);
    msg.setSource(40479U);
    msg.setSourceEntity(164U);
    msg.setDestination(65395U);
    msg.setDestinationEntity(66U);
    msg.validity = 15963U;
    msg.type = 145U;
    msg.utc_year = 14062U;
    msg.utc_month = 146U;
    msg.utc_day = 132U;
    msg.utc_time = 0.424168193729;
    msg.lat = 0.342838739107;
    msg.lon = 0.553013974632;
    msg.height = 0.734707677938;
    msg.satellites = 153U;
    msg.cog = 0.231377137142;
    msg.sog = 0.186211479731;
    msg.hdop = 0.574010390524;
    msg.vdop = 0.186069780415;
    msg.hacc = 0.430470607621;
    msg.vacc = 0.882266779519;

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
    msg.setTimeStamp(0.926021326374);
    msg.setSource(5819U);
    msg.setSourceEntity(209U);
    msg.setDestination(675U);
    msg.setDestinationEntity(125U);
    msg.validity = 1719U;
    msg.type = 92U;
    msg.utc_year = 31311U;
    msg.utc_month = 12U;
    msg.utc_day = 113U;
    msg.utc_time = 0.660541881333;
    msg.lat = 0.583455399436;
    msg.lon = 0.38495496522;
    msg.height = 0.0763002537935;
    msg.satellites = 160U;
    msg.cog = 0.936140369758;
    msg.sog = 0.549668046627;
    msg.hdop = 0.430557124457;
    msg.vdop = 0.765980378453;
    msg.hacc = 0.153393005832;
    msg.vacc = 0.056371723147;

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
    msg.setTimeStamp(0.447856915403);
    msg.setSource(5181U);
    msg.setSourceEntity(130U);
    msg.setDestination(24121U);
    msg.setDestinationEntity(184U);
    msg.validity = 16913U;
    msg.type = 121U;
    msg.utc_year = 1843U;
    msg.utc_month = 225U;
    msg.utc_day = 109U;
    msg.utc_time = 0.459379197731;
    msg.lat = 0.0932473540153;
    msg.lon = 0.14698477011;
    msg.height = 0.618724971742;
    msg.satellites = 181U;
    msg.cog = 0.773900632541;
    msg.sog = 0.44157161015;
    msg.hdop = 0.806719031206;
    msg.vdop = 0.557380834991;
    msg.hacc = 0.265669651751;
    msg.vacc = 0.0694089704467;

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
    msg.setTimeStamp(0.703804648819);
    msg.setSource(37368U);
    msg.setSourceEntity(103U);
    msg.setDestination(24489U);
    msg.setDestinationEntity(127U);
    msg.time = 0.0814216853641;
    msg.phi = 0.839520361068;
    msg.theta = 0.742017357912;
    msg.psi = 0.617933813243;
    msg.psi_magnetic = 0.0113782681019;

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
    msg.setTimeStamp(0.386278429293);
    msg.setSource(15217U);
    msg.setSourceEntity(166U);
    msg.setDestination(5972U);
    msg.setDestinationEntity(120U);
    msg.time = 0.181195773811;
    msg.phi = 0.287045761914;
    msg.theta = 0.834738089361;
    msg.psi = 0.109900601065;
    msg.psi_magnetic = 0.221192160019;

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
    msg.setTimeStamp(0.74782651319);
    msg.setSource(23436U);
    msg.setSourceEntity(11U);
    msg.setDestination(28249U);
    msg.setDestinationEntity(20U);
    msg.time = 0.0581156406117;
    msg.phi = 0.594092047932;
    msg.theta = 0.587437061153;
    msg.psi = 0.695017108904;
    msg.psi_magnetic = 0.227104268886;

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
    msg.setTimeStamp(0.561929234199);
    msg.setSource(6972U);
    msg.setSourceEntity(190U);
    msg.setDestination(15318U);
    msg.setDestinationEntity(107U);
    msg.time = 0.254947528432;
    msg.x = 0.777981323568;
    msg.y = 0.100200769807;
    msg.z = 0.412004241351;
    msg.timestep = 0.258634523524;

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
    msg.setTimeStamp(0.0906573586139);
    msg.setSource(31999U);
    msg.setSourceEntity(28U);
    msg.setDestination(62233U);
    msg.setDestinationEntity(146U);
    msg.time = 0.251757434478;
    msg.x = 0.119984559776;
    msg.y = 0.547685510167;
    msg.z = 0.630115812454;
    msg.timestep = 0.217048969177;

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
    msg.setTimeStamp(0.772946078394);
    msg.setSource(2101U);
    msg.setSourceEntity(155U);
    msg.setDestination(63775U);
    msg.setDestinationEntity(69U);
    msg.time = 0.62445506482;
    msg.x = 0.991339174344;
    msg.y = 0.851644727192;
    msg.z = 0.537050662521;
    msg.timestep = 0.103603822594;

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
    msg.setTimeStamp(0.804326444374);
    msg.setSource(1916U);
    msg.setSourceEntity(99U);
    msg.setDestination(39689U);
    msg.setDestinationEntity(235U);
    msg.time = 0.535424525416;
    msg.x = 0.975488172177;
    msg.y = 0.755766014534;
    msg.z = 0.830001659289;

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
    msg.setTimeStamp(0.45176059107);
    msg.setSource(23465U);
    msg.setSourceEntity(187U);
    msg.setDestination(6046U);
    msg.setDestinationEntity(86U);
    msg.time = 0.242300708488;
    msg.x = 0.488236924347;
    msg.y = 0.564011688054;
    msg.z = 0.55275008285;

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
    msg.setTimeStamp(0.383422385469);
    msg.setSource(43626U);
    msg.setSourceEntity(138U);
    msg.setDestination(63360U);
    msg.setDestinationEntity(42U);
    msg.time = 0.843763273411;
    msg.x = 0.107045898613;
    msg.y = 0.525120070388;
    msg.z = 0.257495106341;

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
    msg.setTimeStamp(0.488719690151);
    msg.setSource(57764U);
    msg.setSourceEntity(183U);
    msg.setDestination(54932U);
    msg.setDestinationEntity(227U);
    msg.time = 0.0512414903351;
    msg.x = 0.336175947837;
    msg.y = 0.930254774101;
    msg.z = 0.583153400901;

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
    msg.setTimeStamp(0.34586701863);
    msg.setSource(19901U);
    msg.setSourceEntity(95U);
    msg.setDestination(30301U);
    msg.setDestinationEntity(105U);
    msg.time = 0.865935947079;
    msg.x = 0.542927922829;
    msg.y = 0.0741491180453;
    msg.z = 0.41533409262;

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
    msg.setTimeStamp(0.408801678552);
    msg.setSource(14242U);
    msg.setSourceEntity(103U);
    msg.setDestination(55286U);
    msg.setDestinationEntity(51U);
    msg.time = 0.27833178837;
    msg.x = 0.832607989282;
    msg.y = 0.278304904531;
    msg.z = 0.215997097979;

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
    msg.setTimeStamp(0.500691169733);
    msg.setSource(41706U);
    msg.setSourceEntity(2U);
    msg.setDestination(46490U);
    msg.setDestinationEntity(229U);
    msg.time = 0.657031064718;
    msg.x = 0.798373031144;
    msg.y = 0.983731428239;
    msg.z = 0.941681483599;

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
    msg.setTimeStamp(0.649078252539);
    msg.setSource(65311U);
    msg.setSourceEntity(45U);
    msg.setDestination(17934U);
    msg.setDestinationEntity(168U);
    msg.time = 0.290498165965;
    msg.x = 0.661097621747;
    msg.y = 0.868907344752;
    msg.z = 0.235238124171;

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
    msg.setTimeStamp(0.842931102073);
    msg.setSource(9928U);
    msg.setSourceEntity(202U);
    msg.setDestination(2081U);
    msg.setDestinationEntity(143U);
    msg.time = 0.118600120557;
    msg.x = 0.752995758784;
    msg.y = 0.879524323795;
    msg.z = 0.835677387;

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
    msg.setTimeStamp(0.817821685591);
    msg.setSource(58144U);
    msg.setSourceEntity(84U);
    msg.setDestination(29397U);
    msg.setDestinationEntity(167U);
    msg.validity = 83U;
    msg.x = 0.523842296074;
    msg.y = 0.699497763993;
    msg.z = 0.978506284284;

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
    msg.setTimeStamp(0.600539555575);
    msg.setSource(44005U);
    msg.setSourceEntity(91U);
    msg.setDestination(13532U);
    msg.setDestinationEntity(147U);
    msg.validity = 98U;
    msg.x = 0.215641650261;
    msg.y = 0.0384431490275;
    msg.z = 0.120204307857;

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
    msg.setTimeStamp(0.703528264601);
    msg.setSource(10841U);
    msg.setSourceEntity(222U);
    msg.setDestination(12160U);
    msg.setDestinationEntity(182U);
    msg.validity = 44U;
    msg.x = 0.0140687264808;
    msg.y = 0.429641139934;
    msg.z = 0.167721606841;

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
    msg.setTimeStamp(0.146023274564);
    msg.setSource(30675U);
    msg.setSourceEntity(238U);
    msg.setDestination(16025U);
    msg.setDestinationEntity(97U);
    msg.validity = 158U;
    msg.x = 0.378841754936;
    msg.y = 0.758702993402;
    msg.z = 0.82675947861;

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
    msg.setTimeStamp(0.476183712596);
    msg.setSource(18854U);
    msg.setSourceEntity(114U);
    msg.setDestination(35910U);
    msg.setDestinationEntity(194U);
    msg.validity = 107U;
    msg.x = 0.596907118935;
    msg.y = 0.568567106138;
    msg.z = 0.561382079239;

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
    msg.setTimeStamp(0.830140883958);
    msg.setSource(53153U);
    msg.setSourceEntity(53U);
    msg.setDestination(23938U);
    msg.setDestinationEntity(201U);
    msg.validity = 19U;
    msg.x = 0.59334005426;
    msg.y = 0.405789734169;
    msg.z = 0.571463615034;

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
    msg.setTimeStamp(0.0833329936121);
    msg.setSource(49906U);
    msg.setSourceEntity(238U);
    msg.setDestination(11449U);
    msg.setDestinationEntity(73U);
    msg.time = 0.287079616196;
    msg.x = 0.817629232542;
    msg.y = 0.450590256458;
    msg.z = 0.674187829481;

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
    msg.setTimeStamp(0.550027925768);
    msg.setSource(49810U);
    msg.setSourceEntity(113U);
    msg.setDestination(54877U);
    msg.setDestinationEntity(172U);
    msg.time = 0.937299764408;
    msg.x = 0.0275399561965;
    msg.y = 0.5760123675;
    msg.z = 0.764157265293;

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
    msg.setTimeStamp(0.125212160623);
    msg.setSource(32551U);
    msg.setSourceEntity(153U);
    msg.setDestination(50653U);
    msg.setDestinationEntity(152U);
    msg.time = 0.506905717244;
    msg.x = 0.787398414853;
    msg.y = 0.37754516453;
    msg.z = 0.946909091226;

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
    msg.setTimeStamp(0.970824969861);
    msg.setSource(37684U);
    msg.setSourceEntity(43U);
    msg.setDestination(46985U);
    msg.setDestinationEntity(69U);
    msg.validity = 73U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.633278739374;
    tmp_msg_0.y = 0.0645609411309;
    tmp_msg_0.z = 0.0997186726047;
    tmp_msg_0.phi = 0.152088645941;
    tmp_msg_0.theta = 0.716237538002;
    tmp_msg_0.psi = 0.483318430902;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.834322213531;
    tmp_msg_1.beam_height = 0.88999406792;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.264593734852;

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
    msg.setTimeStamp(0.49402307311);
    msg.setSource(30821U);
    msg.setSourceEntity(93U);
    msg.setDestination(55925U);
    msg.setDestinationEntity(6U);
    msg.validity = 227U;
    msg.value = 0.0138247088706;

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
    msg.setTimeStamp(0.235161854592);
    msg.setSource(60355U);
    msg.setSourceEntity(60U);
    msg.setDestination(53891U);
    msg.setDestinationEntity(189U);
    msg.validity = 13U;
    msg.value = 0.301298620182;

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
    msg.setTimeStamp(0.0924352553078);
    msg.setSource(25849U);
    msg.setSourceEntity(53U);
    msg.setDestination(55782U);
    msg.setDestinationEntity(110U);
    msg.value = 0.292663872015;

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
    msg.setTimeStamp(0.41103451341);
    msg.setSource(35862U);
    msg.setSourceEntity(217U);
    msg.setDestination(12225U);
    msg.setDestinationEntity(8U);
    msg.value = 0.762345167573;

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
    msg.setTimeStamp(0.581352271023);
    msg.setSource(63663U);
    msg.setSourceEntity(163U);
    msg.setDestination(16012U);
    msg.setDestinationEntity(33U);
    msg.value = 0.638605838835;

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
    msg.setTimeStamp(0.0220768447287);
    msg.setSource(33688U);
    msg.setSourceEntity(119U);
    msg.setDestination(49646U);
    msg.setDestinationEntity(225U);
    msg.value = 0.0866362881235;

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
    msg.setTimeStamp(0.627316957579);
    msg.setSource(12159U);
    msg.setSourceEntity(194U);
    msg.setDestination(65153U);
    msg.setDestinationEntity(224U);
    msg.value = 0.196142262812;

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
    msg.setTimeStamp(0.527177980033);
    msg.setSource(64045U);
    msg.setSourceEntity(234U);
    msg.setDestination(27226U);
    msg.setDestinationEntity(93U);
    msg.value = 0.174375446876;

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
    msg.setTimeStamp(0.0258450920241);
    msg.setSource(58204U);
    msg.setSourceEntity(251U);
    msg.setDestination(40910U);
    msg.setDestinationEntity(171U);
    msg.value = 0.837263668073;

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
    msg.setTimeStamp(0.772940626711);
    msg.setSource(59723U);
    msg.setSourceEntity(244U);
    msg.setDestination(39614U);
    msg.setDestinationEntity(8U);
    msg.value = 0.0327349356958;

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
    msg.setTimeStamp(0.739432738436);
    msg.setSource(12395U);
    msg.setSourceEntity(25U);
    msg.setDestination(44006U);
    msg.setDestinationEntity(113U);
    msg.value = 0.0105104272034;

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
    msg.setTimeStamp(0.525965098006);
    msg.setSource(47348U);
    msg.setSourceEntity(172U);
    msg.setDestination(13977U);
    msg.setDestinationEntity(145U);
    msg.value = 0.79608160189;

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
    msg.setTimeStamp(0.707350404966);
    msg.setSource(55351U);
    msg.setSourceEntity(231U);
    msg.setDestination(41769U);
    msg.setDestinationEntity(53U);
    msg.value = 0.1060782731;

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
    msg.setTimeStamp(0.391868992323);
    msg.setSource(45057U);
    msg.setSourceEntity(63U);
    msg.setDestination(7671U);
    msg.setDestinationEntity(21U);
    msg.value = 0.236663098038;

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
    msg.setTimeStamp(0.656515621646);
    msg.setSource(18071U);
    msg.setSourceEntity(124U);
    msg.setDestination(42900U);
    msg.setDestinationEntity(160U);
    msg.value = 0.164305961281;

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
    msg.setTimeStamp(0.225974765565);
    msg.setSource(53989U);
    msg.setSourceEntity(192U);
    msg.setDestination(8663U);
    msg.setDestinationEntity(129U);
    msg.value = 0.695200769248;

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
    msg.setTimeStamp(0.11147101049);
    msg.setSource(17957U);
    msg.setSourceEntity(23U);
    msg.setDestination(58194U);
    msg.setDestinationEntity(162U);
    msg.value = 0.875433494721;

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
    msg.setTimeStamp(0.246982753967);
    msg.setSource(34242U);
    msg.setSourceEntity(209U);
    msg.setDestination(50066U);
    msg.setDestinationEntity(36U);
    msg.value = 0.296840989314;

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
    msg.setTimeStamp(0.147716229701);
    msg.setSource(27978U);
    msg.setSourceEntity(9U);
    msg.setDestination(48684U);
    msg.setDestinationEntity(240U);
    msg.value = 0.807083294697;

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
    msg.setTimeStamp(0.396390570355);
    msg.setSource(39966U);
    msg.setSourceEntity(210U);
    msg.setDestination(25349U);
    msg.setDestinationEntity(239U);
    msg.value = 0.859458926366;

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
    msg.setTimeStamp(0.0328034161043);
    msg.setSource(6263U);
    msg.setSourceEntity(182U);
    msg.setDestination(22967U);
    msg.setDestinationEntity(187U);
    msg.value = 0.289398952538;

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
    msg.setTimeStamp(0.148265889277);
    msg.setSource(12U);
    msg.setSourceEntity(238U);
    msg.setDestination(10642U);
    msg.setDestinationEntity(250U);
    msg.value = 0.65439214602;

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
    msg.setTimeStamp(0.550511541728);
    msg.setSource(39488U);
    msg.setSourceEntity(254U);
    msg.setDestination(31308U);
    msg.setDestinationEntity(203U);
    msg.value = 0.130736381326;

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
    msg.setTimeStamp(0.722009669059);
    msg.setSource(60022U);
    msg.setSourceEntity(38U);
    msg.setDestination(61684U);
    msg.setDestinationEntity(175U);
    msg.value = 0.0343263667543;

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
    msg.setTimeStamp(0.358885081076);
    msg.setSource(13633U);
    msg.setSourceEntity(37U);
    msg.setDestination(38537U);
    msg.setDestinationEntity(210U);
    msg.value = 0.268244132492;

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
    msg.setTimeStamp(0.0320032779166);
    msg.setSource(54562U);
    msg.setSourceEntity(193U);
    msg.setDestination(17428U);
    msg.setDestinationEntity(10U);
    msg.value = 0.462535963363;

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
    msg.setTimeStamp(0.0455699743202);
    msg.setSource(65304U);
    msg.setSourceEntity(24U);
    msg.setDestination(12895U);
    msg.setDestinationEntity(104U);
    msg.direction = 0.939864090221;
    msg.speed = 0.7967184967;
    msg.turbulence = 0.0526914149563;

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
    msg.setTimeStamp(0.968500969575);
    msg.setSource(49222U);
    msg.setSourceEntity(116U);
    msg.setDestination(37414U);
    msg.setDestinationEntity(26U);
    msg.direction = 0.0428228561159;
    msg.speed = 0.896475944065;
    msg.turbulence = 0.61164978558;

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
    msg.setTimeStamp(0.536166560627);
    msg.setSource(58539U);
    msg.setSourceEntity(102U);
    msg.setDestination(9097U);
    msg.setDestinationEntity(164U);
    msg.direction = 0.391909295468;
    msg.speed = 0.459415039777;
    msg.turbulence = 0.300301280361;

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
    msg.setTimeStamp(0.132235842903);
    msg.setSource(34034U);
    msg.setSourceEntity(50U);
    msg.setDestination(38999U);
    msg.setDestinationEntity(93U);
    msg.value = 0.216604184018;

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
    msg.setTimeStamp(0.356212456372);
    msg.setSource(16223U);
    msg.setSourceEntity(12U);
    msg.setDestination(26706U);
    msg.setDestinationEntity(14U);
    msg.value = 0.346127407076;

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
    msg.setTimeStamp(0.895687085696);
    msg.setSource(58987U);
    msg.setSourceEntity(181U);
    msg.setDestination(12678U);
    msg.setDestinationEntity(144U);
    msg.value = 0.751794562851;

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
    msg.setTimeStamp(0.972321342179);
    msg.setSource(12847U);
    msg.setSourceEntity(167U);
    msg.setDestination(1305U);
    msg.setDestinationEntity(61U);
    msg.value.assign("YFIOPVBPWECGUBYHCSWYVRTG");

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
    msg.setTimeStamp(0.782200511039);
    msg.setSource(7061U);
    msg.setSourceEntity(71U);
    msg.setDestination(38716U);
    msg.setDestinationEntity(86U);
    msg.value.assign("WSRFABJMXHOWORBMVQHWTUKOMCTMWQXXTIHEIQPCVYNLNUIEILONAZBFDYHYBMRQPULCDXECEQXELHYGUMWBYWLOFFLFZJBPUZKSDPZWQWIRQVTXMRURJBRXSHNZEAUKJV");

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
    msg.setTimeStamp(0.714453835984);
    msg.setSource(19490U);
    msg.setSourceEntity(195U);
    msg.setDestination(21527U);
    msg.setDestinationEntity(211U);
    msg.value.assign("FFENYQBISMNTYIMYTCXLLZMVFKJQGWOWYBBLPPFCSHJNMDPNMXYSZAHWQYLSUDVVKTKODFZEAHVGGNXLWJWNVXAALTTQUMDKZHEWTEMBCRILWRYCGPTUQHVWRKAXAZRUCESQOGRMBJLGEGAOZZREMOZOPACJFWC");

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
    msg.setTimeStamp(0.560972195434);
    msg.setSource(56495U);
    msg.setSourceEntity(250U);
    msg.setDestination(26155U);
    msg.setDestinationEntity(242U);
    const char tmp_msg_0[] = {68, 3, -19, -80, -101, 67, -29, 97, 1, -36, 52, 31, 102, 37, 63, 26, 84, 38, 71, -53, -78, -75, -9, -60, -53, -87, 112, 38, -84, -39, -113, -125, 39, -69, 71, 19, 106, -37, 114, 47, 0, 105, 30, 97, -58, -39, -112, -13};
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
    msg.setTimeStamp(0.459536345016);
    msg.setSource(58202U);
    msg.setSourceEntity(228U);
    msg.setDestination(51390U);
    msg.setDestinationEntity(124U);
    const char tmp_msg_0[] = {-71, -22, -54, -99, 57, -81, -116, -119, -111, 22, 56, 72, 118, -96, 79, 86, 107, -41, -99, 30, -6, -120, -109, 119, -93, -20, 48, -61, 64, 82, 0, -58, -80, -96, 80, 50, 87, 106, 61, 27, -8, 113, 105, 46, -20, -59, -96, -31, 5, -76, 92, 78, -108, -72, 83, -123, 110, -33, 10, -80, 40, -47, -24, 26, 4, -87, -18, -112, -118, -25, 14, -49, -99, -21, 7, -116, -67, 51, -90, -122, 61, -55, 99, -37, 113, 88, 16, 2, 107, -9, -121, 12, 51, 21, 102, 84, -125, 42, -81, 89, -92, 67, 114, -28, -72, -9, 3, 113, 21, 43, 70, 17, -75, 44, 78, -48, -7, 40, -75, 30, 112, -75, -66, -122, -7, 121, 121};
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
    msg.setTimeStamp(0.392328705304);
    msg.setSource(21980U);
    msg.setSourceEntity(173U);
    msg.setDestination(47545U);
    msg.setDestinationEntity(105U);
    const char tmp_msg_0[] = {-9, 19, -36, 113, 79, 58, -4, 64, -69, -31, -127, -104, 100, -101, -16, 15, -115, -32, 88, -22, -73, 18, 76, 126, -128, -38, -99, 6, -100, 32, 83, -55, -86, 56, -91, 3, 24, 84, 118, -13, 116, 69, 27, -76, -25, -64, -27, 85, 111, -13, -110, -72, -81, -45, 124, -92, -85, -10, -118, 44, 71, 106, -111, 84, 102, -121, 92, -51, -39, 3, 4, 114, -70, 75, 89, 88, 123, 83, -29, -127, -28, 75, -104, -63, -122, -75, -70, 74, -82, -68, 26, 114, -14, -116, 96, 115, 12, -120, -85, 38, 1, -10, 42, 71, 73, 65, -17, -99, 64, 94, -31, -45, -94, -52, -4, 115, 57, -31, 31, -55, -33, 35, 116, -118, -38, 44, -112, 23, 89, -22, 104, 97, -101, 125, 62, -93, -10, -32, 101, -36, -80, -69, -105, 109, -113, -52, 70, -17, -41, 20, -12, 82, -42, 60, 109, -15, 92, -2, -2, 71, -11, -93};
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
    msg.setTimeStamp(0.651388580014);
    msg.setSource(23065U);
    msg.setSourceEntity(65U);
    msg.setDestination(11545U);
    msg.setDestinationEntity(190U);
    msg.type = 97U;
    msg.frequency = 2614903568U;
    msg.min_range = 62352U;
    msg.max_range = 28218U;
    msg.bits_per_point = 116U;
    msg.scale_factor = 0.746384925144;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.490541227357;
    tmp_msg_0.beam_height = 0.389161266838;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {111, -25, -120, 39, -33, -123, 93, 96, -68, 109, -85, -87, -47, -44, -48, -23, -97, 100, 27, 54, 69, 100, 55, 41, 62, -31, -31, 43, 82, 43, 91, 121, -93, -127, -32, 103, -89, -16, -127, 103, 109, -55, 93, 37, 24, -125, -12, 124, -27, -104, 45, 42, 1, -58, 33, -17, -60, 8, 56, 12, -53, 30, -74, 2, -11, -7, -107, 103, 81, -69, 95, 64, 110, 58, -24, 7, 55, 43, 6, -93, 17, 123, -63, -85, -67, 75, -33, -69, 96, -58, -15, 36, 58, 39, 97, -21, -96, -2, 5, 67, -100, -61, -12, 52, 101, -27, 19, -88, -115, -85, -62, -100, -58, 15, -6, -18, 117, 69, -90, -47, 64, -29, -67, -98, 35, 73, -128, 64, -113, -96, 125, 17, -72, -37, -44, -71, -7, 50, -92, 123, 36, -19, 39, 67, -82, 37, -45, -105, 99, 56, -45, -101, 111, -125, 122, -125, 109, -118, -80, 71, -5, 105, -60, 43, 114, 74, -115, -34, 29, 48, -34, 54, -4, 31, -65, 110, 55, 83, -62, -86, -21, 36, -92, -60, -20, -19, 83, -93, -12, 26, 3, -112, -44, 1};
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
    msg.setTimeStamp(0.792831350041);
    msg.setSource(18626U);
    msg.setSourceEntity(112U);
    msg.setDestination(25418U);
    msg.setDestinationEntity(200U);
    msg.type = 100U;
    msg.frequency = 1832480375U;
    msg.min_range = 56207U;
    msg.max_range = 17287U;
    msg.bits_per_point = 212U;
    msg.scale_factor = 0.547386523746;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.79083595314;
    tmp_msg_0.beam_height = 0.0743540273778;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {52, 83, 5, 49, -49, -92, -72, 25, -23, 48, -33, 91, 94, 78, 49, 53, 51, 39, -71, 41, 18, 100, 123, -70, 69, -34, -24, 105, 105, 121, 2, -76, -20, -40, 78, -72, -100, 80, 104, 91, -106, 106, -70, 4, 112, 18, 35, -14, 70, -30, 76, -21, -43, -86, -126, 82, -39, -8, 88, 86, 68, 39, -32, 58, 48, -86, -6, -91, 49, 41, 28, 114, -64, 17, -49, -109, 73, 39, 83, 31, -66, 56, 114, -90, 110, -119, -89, -105, -18, 80, 6, 60, -112, -90, -123, 41, 19, -123, 19, -4, 12, -63, 37, -110, -67, -75, -63, 43, -90, 32, -93, -82, -90, 103, 86, -64, 62, 72, 110, -8, -56, -42, -81, 98, -82, -109, 25, -19, 19, -20, -56, -86, 30, -117, -73, 19, 8, 5, -75, -50, -50, 64, -16, -33};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.352124364776);
    msg.setSource(57641U);
    msg.setSourceEntity(77U);
    msg.setDestination(23585U);
    msg.setDestinationEntity(188U);
    msg.type = 72U;
    msg.frequency = 2163564163U;
    msg.min_range = 48646U;
    msg.max_range = 9316U;
    msg.bits_per_point = 120U;
    msg.scale_factor = 0.867744212323;
    const char tmp_msg_0[] = {-47, -92, -88, 25, -27, -99, 62, 81, 42, 89, -28, -28, -111, 107, -104, 22, -117, -6, 20, -105, 36, -90, -103, 11, 78, 67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.00203745865953);
    msg.setSource(41323U);
    msg.setSourceEntity(1U);
    msg.setDestination(34124U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.290108114769);
    msg.setSource(64183U);
    msg.setSourceEntity(175U);
    msg.setDestination(42510U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.619725677486);
    msg.setSource(47423U);
    msg.setSourceEntity(129U);
    msg.setDestination(35868U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.173623548156);
    msg.setSource(12599U);
    msg.setSourceEntity(122U);
    msg.setDestination(31687U);
    msg.setDestinationEntity(208U);
    msg.op = 112U;

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
    msg.setTimeStamp(0.148786324353);
    msg.setSource(59098U);
    msg.setSourceEntity(90U);
    msg.setDestination(8352U);
    msg.setDestinationEntity(247U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.85768427439);
    msg.setSource(61006U);
    msg.setSourceEntity(52U);
    msg.setDestination(42220U);
    msg.setDestinationEntity(206U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.526700807347);
    msg.setSource(53606U);
    msg.setSourceEntity(33U);
    msg.setDestination(20799U);
    msg.setDestinationEntity(142U);
    msg.value = 0.0372054798124;
    msg.confidence = 0.148280779295;
    msg.opmodes.assign("JVVWEBOREBJYOTRGXMVVFYXZHDLNEQZVKTRANJJEOM");

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
    msg.setTimeStamp(0.230812024919);
    msg.setSource(55237U);
    msg.setSourceEntity(154U);
    msg.setDestination(34390U);
    msg.setDestinationEntity(127U);
    msg.value = 0.65129941119;
    msg.confidence = 0.895715536151;
    msg.opmodes.assign("WERHZOTCQPOTAMSNKRGBPVZCVJOZUKEXPEAOGQJUEUFYRNXLAUWMFACLIEGIPTNDXILHWTVVWFFBKTDLRTU");

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
    msg.setTimeStamp(0.458466465698);
    msg.setSource(48299U);
    msg.setSourceEntity(111U);
    msg.setDestination(48562U);
    msg.setDestinationEntity(49U);
    msg.value = 0.579232214224;
    msg.confidence = 0.0635823751148;
    msg.opmodes.assign("QVOWFFUSOFQFZQKCSVDDAICIITFPZNYXXJPEAJDXYIDELAKWVURPYBIAOQLRCSHNXHDOKEKMTRGELUXMHYTLVTYFOHQPCG");

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
    msg.setTimeStamp(0.624343028136);
    msg.setSource(3959U);
    msg.setSourceEntity(59U);
    msg.setDestination(11532U);
    msg.setDestinationEntity(243U);
    msg.itow = 2451817038U;
    msg.lat = 0.596805145624;
    msg.lon = 0.0445599485335;
    msg.height_ell = 0.301100614122;
    msg.height_sea = 0.130324965149;
    msg.hacc = 0.975398315772;
    msg.vacc = 0.032984100407;
    msg.vel_n = 0.329294294403;
    msg.vel_e = 0.72826689817;
    msg.vel_d = 0.504304768739;
    msg.speed = 0.305148249137;
    msg.gspeed = 0.87674613991;
    msg.heading = 0.211398798588;
    msg.sacc = 0.484931552573;
    msg.cacc = 0.164571089075;

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
    msg.setTimeStamp(0.417155281303);
    msg.setSource(14463U);
    msg.setSourceEntity(174U);
    msg.setDestination(44890U);
    msg.setDestinationEntity(174U);
    msg.itow = 277179726U;
    msg.lat = 0.0737606831241;
    msg.lon = 0.63275014555;
    msg.height_ell = 0.952526602335;
    msg.height_sea = 0.912134070642;
    msg.hacc = 0.555084159233;
    msg.vacc = 0.84067013611;
    msg.vel_n = 0.798895758097;
    msg.vel_e = 0.556858219071;
    msg.vel_d = 0.941971949022;
    msg.speed = 0.762462166634;
    msg.gspeed = 0.469201087092;
    msg.heading = 0.405507318414;
    msg.sacc = 0.0430118074242;
    msg.cacc = 0.588277413999;

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
    msg.setTimeStamp(0.851709398702);
    msg.setSource(15565U);
    msg.setSourceEntity(113U);
    msg.setDestination(65412U);
    msg.setDestinationEntity(163U);
    msg.itow = 2760144153U;
    msg.lat = 0.194595153872;
    msg.lon = 0.0943829822473;
    msg.height_ell = 0.306552866401;
    msg.height_sea = 0.891391118666;
    msg.hacc = 0.411722988138;
    msg.vacc = 0.720732771963;
    msg.vel_n = 0.538524720809;
    msg.vel_e = 0.5849941108;
    msg.vel_d = 0.642638950282;
    msg.speed = 0.473634488378;
    msg.gspeed = 0.554547428671;
    msg.heading = 0.126196897709;
    msg.sacc = 0.0111894651865;
    msg.cacc = 0.774946439485;

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
    msg.setTimeStamp(0.586567265058);
    msg.setSource(30408U);
    msg.setSourceEntity(182U);
    msg.setDestination(58028U);
    msg.setDestinationEntity(14U);
    msg.id = 127U;
    msg.value = 0.55921928774;

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
    msg.setTimeStamp(0.206008019779);
    msg.setSource(46222U);
    msg.setSourceEntity(241U);
    msg.setDestination(8290U);
    msg.setDestinationEntity(26U);
    msg.id = 226U;
    msg.value = 0.230489632381;

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
    msg.setTimeStamp(0.810780750995);
    msg.setSource(45438U);
    msg.setSourceEntity(171U);
    msg.setDestination(3722U);
    msg.setDestinationEntity(56U);
    msg.id = 15U;
    msg.value = 0.551111490553;

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
    msg.setTimeStamp(0.758960852601);
    msg.setSource(33338U);
    msg.setSourceEntity(120U);
    msg.setDestination(30865U);
    msg.setDestinationEntity(100U);
    msg.x = 0.606994519133;
    msg.y = 0.706927062484;
    msg.z = 0.533317178887;
    msg.phi = 0.205088660857;
    msg.theta = 0.939348263998;
    msg.psi = 0.624031289199;

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
    msg.setTimeStamp(0.0418713770955);
    msg.setSource(12862U);
    msg.setSourceEntity(235U);
    msg.setDestination(60156U);
    msg.setDestinationEntity(183U);
    msg.x = 0.403043466641;
    msg.y = 0.35946947618;
    msg.z = 0.568968287461;
    msg.phi = 0.284630679656;
    msg.theta = 0.573111174308;
    msg.psi = 0.0398240507727;

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
    msg.setTimeStamp(0.00422746789991);
    msg.setSource(36489U);
    msg.setSourceEntity(92U);
    msg.setDestination(25772U);
    msg.setDestinationEntity(70U);
    msg.x = 0.406346046102;
    msg.y = 0.863154506762;
    msg.z = 0.733648010328;
    msg.phi = 0.971186995456;
    msg.theta = 0.356325030096;
    msg.psi = 0.447957255151;

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
    msg.setTimeStamp(0.583557240036);
    msg.setSource(62322U);
    msg.setSourceEntity(49U);
    msg.setDestination(5221U);
    msg.setDestinationEntity(36U);
    msg.beam_width = 0.545211461311;
    msg.beam_height = 0.621706749686;

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
    msg.setTimeStamp(0.532611287487);
    msg.setSource(25309U);
    msg.setSourceEntity(186U);
    msg.setDestination(47518U);
    msg.setDestinationEntity(155U);
    msg.beam_width = 0.526564991492;
    msg.beam_height = 0.228703340051;

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
    msg.setTimeStamp(0.928483431668);
    msg.setSource(63681U);
    msg.setSourceEntity(157U);
    msg.setDestination(14355U);
    msg.setDestinationEntity(95U);
    msg.beam_width = 0.977067000475;
    msg.beam_height = 0.746574278777;

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
    msg.setTimeStamp(0.843063511132);
    msg.setSource(45084U);
    msg.setSourceEntity(9U);
    msg.setDestination(41204U);
    msg.setDestinationEntity(244U);
    msg.sane = 179U;

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
    msg.setTimeStamp(0.413090423068);
    msg.setSource(65U);
    msg.setSourceEntity(177U);
    msg.setDestination(1005U);
    msg.setDestinationEntity(160U);
    msg.sane = 203U;

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
    msg.setTimeStamp(0.995445105332);
    msg.setSource(19026U);
    msg.setSourceEntity(237U);
    msg.setDestination(51593U);
    msg.setDestinationEntity(30U);
    msg.sane = 250U;

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
    msg.setTimeStamp(0.967459871696);
    msg.setSource(51589U);
    msg.setSourceEntity(230U);
    msg.setDestination(31596U);
    msg.setDestinationEntity(113U);
    msg.value = 0.531648495309;

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
    msg.setTimeStamp(0.244707550025);
    msg.setSource(34026U);
    msg.setSourceEntity(38U);
    msg.setDestination(35729U);
    msg.setDestinationEntity(127U);
    msg.value = 0.92177357318;

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
    msg.setTimeStamp(0.958059591443);
    msg.setSource(64097U);
    msg.setSourceEntity(211U);
    msg.setDestination(15350U);
    msg.setDestinationEntity(215U);
    msg.value = 0.545091737569;

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
    msg.setTimeStamp(0.535786530109);
    msg.setSource(4241U);
    msg.setSourceEntity(28U);
    msg.setDestination(42190U);
    msg.setDestinationEntity(116U);
    msg.value = 0.478789269355;

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
    msg.setTimeStamp(0.577446118611);
    msg.setSource(43741U);
    msg.setSourceEntity(56U);
    msg.setDestination(15227U);
    msg.setDestinationEntity(141U);
    msg.value = 0.445250267341;

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
    msg.setTimeStamp(0.745386539911);
    msg.setSource(4854U);
    msg.setSourceEntity(216U);
    msg.setDestination(57976U);
    msg.setDestinationEntity(122U);
    msg.value = 0.229751010662;

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
    msg.setTimeStamp(0.225056283002);
    msg.setSource(24928U);
    msg.setSourceEntity(15U);
    msg.setDestination(52320U);
    msg.setDestinationEntity(220U);
    msg.value = 0.756141489787;

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
    msg.setTimeStamp(0.0163149553312);
    msg.setSource(33200U);
    msg.setSourceEntity(189U);
    msg.setDestination(56442U);
    msg.setDestinationEntity(140U);
    msg.value = 0.729399730629;

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
    msg.setTimeStamp(0.337865494693);
    msg.setSource(34941U);
    msg.setSourceEntity(35U);
    msg.setDestination(45301U);
    msg.setDestinationEntity(93U);
    msg.value = 0.766068063882;

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
    msg.setTimeStamp(0.841889154509);
    msg.setSource(25227U);
    msg.setSourceEntity(205U);
    msg.setDestination(57761U);
    msg.setDestinationEntity(39U);
    msg.value = 0.726194569652;

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
    msg.setTimeStamp(0.931301653592);
    msg.setSource(25884U);
    msg.setSourceEntity(146U);
    msg.setDestination(38086U);
    msg.setDestinationEntity(247U);
    msg.value = 0.0651459761183;

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
    msg.setTimeStamp(0.579452497801);
    msg.setSource(25786U);
    msg.setSourceEntity(195U);
    msg.setDestination(8512U);
    msg.setDestinationEntity(231U);
    msg.value = 0.176172505542;

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
    msg.setTimeStamp(0.219281515467);
    msg.setSource(27567U);
    msg.setSourceEntity(234U);
    msg.setDestination(57776U);
    msg.setDestinationEntity(61U);
    msg.value = 0.989543230487;

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
    msg.setTimeStamp(0.132008894435);
    msg.setSource(5340U);
    msg.setSourceEntity(163U);
    msg.setDestination(21460U);
    msg.setDestinationEntity(65U);
    msg.value = 0.107093402007;

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
    msg.setTimeStamp(0.586093700942);
    msg.setSource(35567U);
    msg.setSourceEntity(175U);
    msg.setDestination(6254U);
    msg.setDestinationEntity(63U);
    msg.value = 0.819970438996;

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
    msg.setTimeStamp(0.784709195217);
    msg.setSource(53473U);
    msg.setSourceEntity(174U);
    msg.setDestination(3505U);
    msg.setDestinationEntity(37U);
    msg.value = 0.965602852523;

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
    msg.setTimeStamp(0.580253429432);
    msg.setSource(8007U);
    msg.setSourceEntity(79U);
    msg.setDestination(51714U);
    msg.setDestinationEntity(94U);
    msg.value = 0.94921144751;

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
    msg.setTimeStamp(0.653517173922);
    msg.setSource(7232U);
    msg.setSourceEntity(190U);
    msg.setDestination(21488U);
    msg.setDestinationEntity(24U);
    msg.value = 0.126240244364;

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
    msg.setTimeStamp(0.681084845847);
    msg.setSource(52811U);
    msg.setSourceEntity(51U);
    msg.setDestination(41420U);
    msg.setDestinationEntity(100U);
    msg.value = 0.42659922089;

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
    msg.setTimeStamp(0.488433515078);
    msg.setSource(17806U);
    msg.setSourceEntity(191U);
    msg.setDestination(17651U);
    msg.setDestinationEntity(28U);
    msg.value = 0.318330708824;

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
    msg.setTimeStamp(0.438125452012);
    msg.setSource(61994U);
    msg.setSourceEntity(74U);
    msg.setDestination(58987U);
    msg.setDestinationEntity(110U);
    msg.value = 0.134764046733;

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
    msg.setTimeStamp(0.282594240947);
    msg.setSource(40873U);
    msg.setSourceEntity(20U);
    msg.setDestination(61833U);
    msg.setDestinationEntity(233U);
    msg.value = 0.910477091123;

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
    msg.setTimeStamp(0.231107510134);
    msg.setSource(44361U);
    msg.setSourceEntity(95U);
    msg.setDestination(16226U);
    msg.setDestinationEntity(115U);
    msg.value = 0.518152934093;

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
    msg.setTimeStamp(0.188251328825);
    msg.setSource(16162U);
    msg.setSourceEntity(213U);
    msg.setDestination(40588U);
    msg.setDestinationEntity(241U);
    msg.value = 0.602801767301;

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
    msg.setTimeStamp(0.154924879349);
    msg.setSource(11369U);
    msg.setSourceEntity(70U);
    msg.setDestination(61463U);
    msg.setDestinationEntity(249U);
    msg.validity = 34217U;
    msg.type = 192U;
    msg.tow = 3465050104U;
    msg.base_lat = 0.831701670512;
    msg.base_lon = 0.449955411737;
    msg.base_height = 0.166162633537;
    msg.n = 0.00308630550804;
    msg.e = 0.47002219143;
    msg.d = 0.573283689626;
    msg.v_n = 0.927706083799;
    msg.v_e = 0.171113905447;
    msg.v_d = 0.184721102343;
    msg.satellites = 88U;
    msg.iar_hyp = 43797U;
    msg.iar_ratio = 0.619171593986;

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
    msg.setTimeStamp(0.481793768324);
    msg.setSource(20429U);
    msg.setSourceEntity(27U);
    msg.setDestination(752U);
    msg.setDestinationEntity(183U);
    msg.validity = 32860U;
    msg.type = 208U;
    msg.tow = 521806444U;
    msg.base_lat = 0.0118948164738;
    msg.base_lon = 0.00802416690746;
    msg.base_height = 0.974776117171;
    msg.n = 0.124617120997;
    msg.e = 0.0566433204589;
    msg.d = 0.34766456306;
    msg.v_n = 0.59811063949;
    msg.v_e = 0.492634570167;
    msg.v_d = 0.829258056279;
    msg.satellites = 6U;
    msg.iar_hyp = 64201U;
    msg.iar_ratio = 0.937590587415;

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
    msg.setTimeStamp(0.0875902295466);
    msg.setSource(44964U);
    msg.setSourceEntity(153U);
    msg.setDestination(13892U);
    msg.setDestinationEntity(199U);
    msg.validity = 11990U;
    msg.type = 41U;
    msg.tow = 4144757107U;
    msg.base_lat = 0.659053959271;
    msg.base_lon = 0.772649367712;
    msg.base_height = 0.54932965845;
    msg.n = 0.577413055657;
    msg.e = 0.0750402945921;
    msg.d = 0.170037480599;
    msg.v_n = 0.100956224752;
    msg.v_e = 0.0510723717168;
    msg.v_d = 0.0615678812164;
    msg.satellites = 105U;
    msg.iar_hyp = 35366U;
    msg.iar_ratio = 0.552177920563;

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
    msg.setTimeStamp(0.947522112475);
    msg.setSource(4848U);
    msg.setSourceEntity(106U);
    msg.setDestination(45488U);
    msg.setDestinationEntity(204U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.467911460726;
    tmp_msg_0.lon = 0.550800914615;
    tmp_msg_0.height = 0.803569103452;
    tmp_msg_0.x = 0.359381161732;
    tmp_msg_0.y = 0.401464185991;
    tmp_msg_0.z = 0.809537269797;
    tmp_msg_0.phi = 0.0348205899297;
    tmp_msg_0.theta = 0.255417098701;
    tmp_msg_0.psi = 0.294122269427;
    tmp_msg_0.u = 0.923283719261;
    tmp_msg_0.v = 0.751132391741;
    tmp_msg_0.w = 0.573286447243;
    tmp_msg_0.vx = 0.716627735656;
    tmp_msg_0.vy = 0.19840205184;
    tmp_msg_0.vz = 0.342436460195;
    tmp_msg_0.p = 0.359539897136;
    tmp_msg_0.q = 0.37934603949;
    tmp_msg_0.r = 0.818517654327;
    tmp_msg_0.depth = 0.356545187951;
    tmp_msg_0.alt = 0.0690790917862;
    msg.state.set(tmp_msg_0);
    msg.type = 1U;

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
    msg.setTimeStamp(0.0571895202726);
    msg.setSource(57205U);
    msg.setSourceEntity(62U);
    msg.setDestination(54526U);
    msg.setDestinationEntity(113U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.761173257999;
    tmp_msg_0.lon = 0.577654547129;
    tmp_msg_0.height = 0.505615472497;
    tmp_msg_0.x = 0.252115465301;
    tmp_msg_0.y = 0.781551147525;
    tmp_msg_0.z = 0.585582336689;
    tmp_msg_0.phi = 0.773841276325;
    tmp_msg_0.theta = 0.000975977831344;
    tmp_msg_0.psi = 0.555170814842;
    tmp_msg_0.u = 0.873410099867;
    tmp_msg_0.v = 0.768723308628;
    tmp_msg_0.w = 0.0310148278934;
    tmp_msg_0.vx = 0.0610213199632;
    tmp_msg_0.vy = 0.193357458093;
    tmp_msg_0.vz = 0.933927342693;
    tmp_msg_0.p = 0.0530673630732;
    tmp_msg_0.q = 0.656350505886;
    tmp_msg_0.r = 0.489120568307;
    tmp_msg_0.depth = 0.880729116358;
    tmp_msg_0.alt = 0.203553233256;
    msg.state.set(tmp_msg_0);
    msg.type = 49U;

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
    msg.setTimeStamp(0.294326913118);
    msg.setSource(17744U);
    msg.setSourceEntity(27U);
    msg.setDestination(61013U);
    msg.setDestinationEntity(209U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.173133861364;
    tmp_msg_0.lon = 0.617487943228;
    tmp_msg_0.height = 0.936592977615;
    tmp_msg_0.x = 0.595715848887;
    tmp_msg_0.y = 0.871110495777;
    tmp_msg_0.z = 0.401287233668;
    tmp_msg_0.phi = 0.645874568058;
    tmp_msg_0.theta = 0.25993539493;
    tmp_msg_0.psi = 0.307498746189;
    tmp_msg_0.u = 0.792646036267;
    tmp_msg_0.v = 0.61718841436;
    tmp_msg_0.w = 0.590293240236;
    tmp_msg_0.vx = 0.250136897391;
    tmp_msg_0.vy = 0.80735659035;
    tmp_msg_0.vz = 0.291619686843;
    tmp_msg_0.p = 0.0969857861873;
    tmp_msg_0.q = 0.381190214629;
    tmp_msg_0.r = 0.139890504108;
    tmp_msg_0.depth = 0.764997383376;
    tmp_msg_0.alt = 0.670310071192;
    msg.state.set(tmp_msg_0);
    msg.type = 145U;

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
    msg.setTimeStamp(0.735367628163);
    msg.setSource(43091U);
    msg.setSourceEntity(236U);
    msg.setDestination(54815U);
    msg.setDestinationEntity(112U);
    msg.value = 0.197906017954;

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
    msg.setTimeStamp(0.641345836389);
    msg.setSource(19034U);
    msg.setSourceEntity(188U);
    msg.setDestination(21300U);
    msg.setDestinationEntity(174U);
    msg.value = 0.996776196141;

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
    msg.setTimeStamp(0.179932786835);
    msg.setSource(35953U);
    msg.setSourceEntity(157U);
    msg.setDestination(40158U);
    msg.setDestinationEntity(215U);
    msg.value = 0.557015180509;

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
    msg.setTimeStamp(0.44797196018);
    msg.setSource(29057U);
    msg.setSourceEntity(201U);
    msg.setDestination(37377U);
    msg.setDestinationEntity(81U);
    msg.value = 0.405007230475;

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
    msg.setTimeStamp(0.910368921688);
    msg.setSource(55848U);
    msg.setSourceEntity(102U);
    msg.setDestination(58299U);
    msg.setDestinationEntity(0U);
    msg.value = 0.121905896793;

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
    msg.setTimeStamp(0.734548744993);
    msg.setSource(15057U);
    msg.setSourceEntity(155U);
    msg.setDestination(51946U);
    msg.setDestinationEntity(38U);
    msg.value = 0.979623017701;

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
    msg.setTimeStamp(0.257885812938);
    msg.setSource(45530U);
    msg.setSourceEntity(20U);
    msg.setDestination(45833U);
    msg.setDestinationEntity(207U);
    msg.value = 0.610534079491;

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
    msg.setTimeStamp(0.795470830364);
    msg.setSource(17067U);
    msg.setSourceEntity(7U);
    msg.setDestination(19491U);
    msg.setDestinationEntity(132U);
    msg.value = 0.653989276662;

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
    msg.setTimeStamp(0.827688550644);
    msg.setSource(18594U);
    msg.setSourceEntity(230U);
    msg.setDestination(47633U);
    msg.setDestinationEntity(129U);
    msg.value = 0.918769973715;

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
    msg.setTimeStamp(0.632178729494);
    msg.setSource(57269U);
    msg.setSourceEntity(211U);
    msg.setDestination(3007U);
    msg.setDestinationEntity(119U);
    msg.value = 0.813391218443;

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
    msg.setTimeStamp(0.561515635959);
    msg.setSource(33488U);
    msg.setSourceEntity(209U);
    msg.setDestination(19502U);
    msg.setDestinationEntity(2U);
    msg.value = 0.840475958887;

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
    msg.setTimeStamp(0.385945714778);
    msg.setSource(52624U);
    msg.setSourceEntity(5U);
    msg.setDestination(51166U);
    msg.setDestinationEntity(2U);
    msg.value = 0.820862414762;

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
    msg.setTimeStamp(0.99121711514);
    msg.setSource(2978U);
    msg.setSourceEntity(181U);
    msg.setDestination(19584U);
    msg.setDestinationEntity(38U);
    msg.value = 0.566377666435;

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
    msg.setTimeStamp(0.982442788713);
    msg.setSource(13525U);
    msg.setSourceEntity(247U);
    msg.setDestination(15486U);
    msg.setDestinationEntity(81U);
    msg.value = 0.209035032644;

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
    msg.setTimeStamp(0.273061181634);
    msg.setSource(14195U);
    msg.setSourceEntity(247U);
    msg.setDestination(54244U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0302009267743;

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
    msg.setTimeStamp(0.740347133632);
    msg.setSource(19484U);
    msg.setSourceEntity(135U);
    msg.setDestination(44383U);
    msg.setDestinationEntity(149U);
    msg.id = 37U;
    msg.zoom = 83U;
    msg.action = 178U;

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
    msg.setTimeStamp(0.891284240246);
    msg.setSource(10998U);
    msg.setSourceEntity(130U);
    msg.setDestination(62U);
    msg.setDestinationEntity(23U);
    msg.id = 8U;
    msg.zoom = 132U;
    msg.action = 251U;

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
    msg.setTimeStamp(0.625371249784);
    msg.setSource(7130U);
    msg.setSourceEntity(229U);
    msg.setDestination(24448U);
    msg.setDestinationEntity(26U);
    msg.id = 231U;
    msg.zoom = 4U;
    msg.action = 254U;

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
    msg.setTimeStamp(0.701780386672);
    msg.setSource(49912U);
    msg.setSourceEntity(186U);
    msg.setDestination(25923U);
    msg.setDestinationEntity(189U);
    msg.id = 10U;
    msg.value = 0.895777373756;

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
    msg.setTimeStamp(0.841378844894);
    msg.setSource(27222U);
    msg.setSourceEntity(167U);
    msg.setDestination(37672U);
    msg.setDestinationEntity(28U);
    msg.id = 149U;
    msg.value = 0.216796362966;

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
    msg.setTimeStamp(0.154891812659);
    msg.setSource(43719U);
    msg.setSourceEntity(171U);
    msg.setDestination(36108U);
    msg.setDestinationEntity(137U);
    msg.id = 44U;
    msg.value = 0.524643222809;

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
    msg.setTimeStamp(0.516343441091);
    msg.setSource(25453U);
    msg.setSourceEntity(246U);
    msg.setDestination(20579U);
    msg.setDestinationEntity(247U);
    msg.id = 112U;
    msg.value = 0.772731305409;

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
    msg.setTimeStamp(0.446252438378);
    msg.setSource(7836U);
    msg.setSourceEntity(38U);
    msg.setDestination(24120U);
    msg.setDestinationEntity(183U);
    msg.id = 254U;
    msg.value = 0.968930888795;

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
    msg.setTimeStamp(0.370652574683);
    msg.setSource(25084U);
    msg.setSourceEntity(80U);
    msg.setDestination(8661U);
    msg.setDestinationEntity(150U);
    msg.id = 37U;
    msg.value = 0.571455175806;

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
    msg.setTimeStamp(0.178640078594);
    msg.setSource(35146U);
    msg.setSourceEntity(23U);
    msg.setDestination(9932U);
    msg.setDestinationEntity(9U);
    msg.id = 39U;
    msg.angle = 0.651067177879;

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
    msg.setTimeStamp(0.578855467557);
    msg.setSource(62551U);
    msg.setSourceEntity(79U);
    msg.setDestination(24264U);
    msg.setDestinationEntity(98U);
    msg.id = 104U;
    msg.angle = 0.615436484677;

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
    msg.setTimeStamp(0.93774125605);
    msg.setSource(10060U);
    msg.setSourceEntity(213U);
    msg.setDestination(14815U);
    msg.setDestinationEntity(207U);
    msg.id = 11U;
    msg.angle = 0.554451931211;

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
    msg.setTimeStamp(0.206362499144);
    msg.setSource(2414U);
    msg.setSourceEntity(96U);
    msg.setDestination(37695U);
    msg.setDestinationEntity(144U);
    msg.op = 7U;
    msg.actions.assign("WDAOSQVQGMYOYHUNTPOOBYPRZWFVKSTRZVMHKTXBPSJXBSQDTGODPKBIZAJNPUHXTRNPDNKXACSFCNKSFPQMXLKYVNIGWXNKLJMRZFFTEQKYFZEHDZOLLCW");

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
    msg.setTimeStamp(0.482777969775);
    msg.setSource(63945U);
    msg.setSourceEntity(254U);
    msg.setDestination(12015U);
    msg.setDestinationEntity(195U);
    msg.op = 32U;
    msg.actions.assign("JSDIOOFLRKVEOUGVUUWQYPEWNIWCXZATFFHUAXFPCGWRMBKJTUSXXGYRHCMNJIRBKXGZQFZWCXLZISNRYVCSZHGEALTFLSSPLUJVXDOJSZTDPXRHMKTRVWBHYBAEUGBTEHYRJECCONQHUWBPTNYOGAHCBFFLOMJUTYPUOBYOMNWIGRIATMSKVIEWMDAMKHJDASFWKCKIQ");

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
    msg.setTimeStamp(3.99085446098e-05);
    msg.setSource(64165U);
    msg.setSourceEntity(5U);
    msg.setDestination(6996U);
    msg.setDestinationEntity(230U);
    msg.op = 152U;
    msg.actions.assign("XHKDZDABMHFDYPFRTEDLUJSZJJKVAQAOVTRKBHOEMSFLTZPEPBEVVSRSWUWBBJVQGAAQEKLXKGPKEVNOSFYP");

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
    msg.setTimeStamp(0.993352304502);
    msg.setSource(7371U);
    msg.setSourceEntity(32U);
    msg.setDestination(25315U);
    msg.setDestinationEntity(239U);
    msg.actions.assign("GDQNATPKGEQUPFUWSZKXQMZLISGBJMDGRAMYLHPSUZIOAQNDHHOBBFNMEPWOXLEPVTDTJTLTLTJKJZMWXLGIIEKRMOPXHXULSCFVPCURXDCGKHAYMRNCFYZCQPRDEBSQZUNONDRVTQJCEWEWVWVKPRIAVTFOLYGUCQDOYBHAUHXTJHAHYIJFIPWFBWVYOKSOBVEGMLNBYWYGQVFMJRAOCEBINDVLNSHMZXEXKRUXIY");

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
    msg.setTimeStamp(0.48184829132);
    msg.setSource(29855U);
    msg.setSourceEntity(203U);
    msg.setDestination(61481U);
    msg.setDestinationEntity(81U);
    msg.actions.assign("KTAJTXQCDZEUJFBJIVHKKSHFJSEYNPQMTAZCOQIRDIZAKEUXWBJXRCSIYAXULOXGHQUIONRVDTVULCEOPBGCUWSDKGGMAOMFRFDBBWYXPOUWFMJS");

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
    msg.setTimeStamp(0.65428657382);
    msg.setSource(64013U);
    msg.setSourceEntity(89U);
    msg.setDestination(9556U);
    msg.setDestinationEntity(26U);
    msg.actions.assign("OYUQCLONVTCGYEVVCINUYJNJMCNBPGOSTEFCWQLSJPNWGOINUFHWZAUPDQKDPYNGMQIITBUQZYSNJMDGRKGEGLXXEZITPG");

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
    msg.setTimeStamp(0.503407551688);
    msg.setSource(24304U);
    msg.setSourceEntity(106U);
    msg.setDestination(47988U);
    msg.setDestinationEntity(96U);
    msg.button = 90U;
    msg.value = 242U;

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
    msg.setTimeStamp(0.768481021124);
    msg.setSource(26915U);
    msg.setSourceEntity(154U);
    msg.setDestination(19156U);
    msg.setDestinationEntity(150U);
    msg.button = 133U;
    msg.value = 147U;

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
    msg.setTimeStamp(0.407356011442);
    msg.setSource(48459U);
    msg.setSourceEntity(158U);
    msg.setDestination(36179U);
    msg.setDestinationEntity(15U);
    msg.button = 135U;
    msg.value = 157U;

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
    msg.setTimeStamp(0.764496475581);
    msg.setSource(22305U);
    msg.setSourceEntity(162U);
    msg.setDestination(21327U);
    msg.setDestinationEntity(211U);
    msg.op = 104U;
    msg.text.assign("UXJTCQJBXPQTYAWFRCSIEUYYASGGNPHWUD");

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
    msg.setTimeStamp(0.518238325009);
    msg.setSource(12656U);
    msg.setSourceEntity(108U);
    msg.setDestination(26989U);
    msg.setDestinationEntity(53U);
    msg.op = 192U;
    msg.text.assign("SVOQNIKFTOMAZKMZPFJAZQAFTSRCMZUQAVLDWBIJHZXYKKUPBRHOASXVXFXOMPCTNIMOGWJYTPDNMVUHMNLVCVUNJBTEQCJZKJYXUDFISQOOQZEOUDALNFGCVLLRCHJFKEWHYSWBWPYPDBLHKIWEOAN");

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
    msg.setTimeStamp(0.541883070803);
    msg.setSource(37721U);
    msg.setSourceEntity(88U);
    msg.setDestination(19340U);
    msg.setDestinationEntity(8U);
    msg.op = 77U;
    msg.text.assign("LDSDRZDUZPPNBDRRBBSXIENIYETPGRYTUTLKANUVJOVVVAOMEKVDMXQUOJILSMAOUHUAISDLEZCYZKEBHKCJAFPULGXJTFZDSYEEBTGIWIQFWHGCMCRKORAFBMVIZCTXXCAHYFOFXTTDUVVGDWGSJXCLLOTMWXNQBQYGSWBLCJMIOERXHDFZOHRAGIKUSKILAYMVNHTRPMK");

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
    msg.setTimeStamp(0.848300156007);
    msg.setSource(62279U);
    msg.setSourceEntity(127U);
    msg.setDestination(41261U);
    msg.setDestinationEntity(226U);
    msg.op = 0U;
    msg.time_remain = 0.444532419024;
    msg.sched_time = 0.169285573426;

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
    msg.setTimeStamp(0.412233977793);
    msg.setSource(14815U);
    msg.setSourceEntity(84U);
    msg.setDestination(39412U);
    msg.setDestinationEntity(203U);
    msg.op = 156U;
    msg.time_remain = 0.769500482675;
    msg.sched_time = 0.411506456239;

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
    msg.setTimeStamp(0.403803361719);
    msg.setSource(13797U);
    msg.setSourceEntity(221U);
    msg.setDestination(21994U);
    msg.setDestinationEntity(235U);
    msg.op = 54U;
    msg.time_remain = 0.84930734702;
    msg.sched_time = 0.544395561524;

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
    msg.setTimeStamp(0.84538231628);
    msg.setSource(57389U);
    msg.setSourceEntity(215U);
    msg.setDestination(65016U);
    msg.setDestinationEntity(230U);
    msg.name.assign("TSQNEULUAFACBKGPEYLIDWCNQLGASHVZHAWBWXC");
    msg.op = 92U;
    msg.sched_time = 0.535213406227;

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
    msg.setTimeStamp(0.113513955925);
    msg.setSource(31268U);
    msg.setSourceEntity(101U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(20U);
    msg.name.assign("QGKLBWZSQKQFRUYRIJMTIDJBSXHVKDIESTXQBCAOGGHUTLVOLQBLHCYFWCEBMUJONLUWYSVLRHMPEWMTOWWDDDRUIWKDFSVCAPSFMLRNONAZGECILNONODWAGZTKPZRIS");
    msg.op = 52U;
    msg.sched_time = 0.243334750374;

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
    msg.setTimeStamp(0.112844663802);
    msg.setSource(45124U);
    msg.setSourceEntity(38U);
    msg.setDestination(35157U);
    msg.setDestinationEntity(151U);
    msg.name.assign("LETDXHENBENSASBQKLRFWNVOSPXGRIHCIBIJCUHGFKEJXYYSGRDTKWUMITQQJLJQXHRLJDGXST");
    msg.op = 65U;
    msg.sched_time = 0.383391954181;

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
    msg.setTimeStamp(0.920895757078);
    msg.setSource(18081U);
    msg.setSourceEntity(121U);
    msg.setDestination(62898U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.315149274464);
    msg.setSource(39814U);
    msg.setSourceEntity(254U);
    msg.setDestination(62211U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.301572032011);
    msg.setSource(10046U);
    msg.setSourceEntity(166U);
    msg.setDestination(57054U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.0509161367345);
    msg.setSource(43698U);
    msg.setSourceEntity(211U);
    msg.setDestination(48924U);
    msg.setDestinationEntity(197U);
    msg.name.assign("SLWBXOAXFTCJAUHDQVKMFKQQRJKXNVRDLFWALXPSGRWEXEIFMIHOETYXEUHCPUZBOKMJCNMAPMCXOIMCPCCHGLZJBSZVAUPYFUYWNOESWLPDJAAKBDRWXCDSGEZYBJVRNIQVBMCVQZNQLTGSHFDIWWKNXPQRIPRTHXZEPYDPIOGNYTSZJNRWSEKVJFAKZLOVTFCRNYIHYSSWAZBK");
    msg.state = 229U;

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
    msg.setTimeStamp(0.850537563489);
    msg.setSource(49298U);
    msg.setSourceEntity(40U);
    msg.setDestination(21042U);
    msg.setDestinationEntity(240U);
    msg.name.assign("YVGCWOPOLLJTBOXODA");
    msg.state = 68U;

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
    msg.setTimeStamp(0.603106012468);
    msg.setSource(57903U);
    msg.setSourceEntity(158U);
    msg.setDestination(64890U);
    msg.setDestinationEntity(42U);
    msg.name.assign("YNUSMLJUAAEAUQUPCNVFOXHUMTMQIWHGKVHJPCLMHNRQEQXNXYEPXFLDBFVYHCVII");
    msg.state = 45U;

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
    msg.setTimeStamp(0.305273453373);
    msg.setSource(20135U);
    msg.setSourceEntity(206U);
    msg.setDestination(47453U);
    msg.setDestinationEntity(122U);
    msg.name.assign("PGAIMCDNZMWVGBAVOVIMJOMWQFJTJVPGBUFUNQEHWDRDWSCBSODWFLXXCHXBODDEZGLPTCDNHCHKVPQSMIIWZOUMLJTI");
    msg.value = 182U;

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
    msg.setTimeStamp(0.478030682764);
    msg.setSource(61224U);
    msg.setSourceEntity(198U);
    msg.setDestination(57820U);
    msg.setDestinationEntity(190U);
    msg.name.assign("OKGDCLRANVGZC");
    msg.value = 75U;

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
    msg.setTimeStamp(0.676261546216);
    msg.setSource(60404U);
    msg.setSourceEntity(49U);
    msg.setDestination(43005U);
    msg.setDestinationEntity(120U);
    msg.name.assign("UVIEQKVXVYUBREKDLZNCYW");
    msg.value = 176U;

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
    msg.setTimeStamp(0.426922772195);
    msg.setSource(64716U);
    msg.setSourceEntity(82U);
    msg.setDestination(35168U);
    msg.setDestinationEntity(182U);
    msg.name.assign("PKCCWWXJKNBABBKRSHJXDKXJCQQUOYRFSJBCVTML");

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
    msg.setTimeStamp(0.977102362164);
    msg.setSource(56748U);
    msg.setSourceEntity(77U);
    msg.setDestination(57461U);
    msg.setDestinationEntity(188U);
    msg.name.assign("KFZDPEAIBVMXZLFWQGOCJYHMOOOITQHZMUCZHFOWPFMERATHIEEFUGDWTHBCBNT");

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
    msg.setTimeStamp(0.0903466556189);
    msg.setSource(26042U);
    msg.setSourceEntity(44U);
    msg.setDestination(12461U);
    msg.setDestinationEntity(9U);
    msg.name.assign("JSDRVNNHDOEPFPDXYJLFGNXMIBCPXKEXRMRCGCGNHXKOEGBXFXZPBMHNTDZATUWSQSDGRVQYGVAWQUFZYQBPQSWCEQVAXSUYVBYBDSIHUWTJURRWDETNUQTKGVFALLRSCUBFPYZZOTJOYZWCBAAWHKOJWKATLEQHTVIEFOKTROIQMACIMDIJLOOUJKJRZGHCELUMEGNASMZYWDPFKQYKUVNXJPBOKITZ");

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
    msg.setTimeStamp(0.884461083567);
    msg.setSource(50389U);
    msg.setSourceEntity(121U);
    msg.setDestination(8373U);
    msg.setDestinationEntity(20U);
    msg.name.assign("HLCEWKBCSZOSVETUAEGPFHPXNBLWBPKBTIZXQPPKSRGILWVAMKLMWXXGRWYGFZMACEPRUUZBFWMPTYBIFNUDIQDJZYFVACUSJYSEJBEUTLHSQMZKYRRQTR");
    msg.value = 94U;

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
    msg.setTimeStamp(0.822084400145);
    msg.setSource(9709U);
    msg.setSourceEntity(227U);
    msg.setDestination(60284U);
    msg.setDestinationEntity(77U);
    msg.name.assign("KTBMYGSFMCYWKHKZUVDCSLYZFESVBNERUUMPVDJHKBPLEYEFZRTACNNNWSHHKWQEFOOPHGJVABOKIIZHSUJRUBWGMIXCBELRTODMMZJQZUSVVLRYIGTAWHLCORSPJZWRTUSTUVPUCPODHISYQTFJINQMXZVFLBYRQHLDADXMJEALTIWPRZWETLINDDPXJGNHNKEMKOROFPQF");
    msg.value = 165U;

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
    msg.setTimeStamp(0.767913625739);
    msg.setSource(3607U);
    msg.setSourceEntity(33U);
    msg.setDestination(65229U);
    msg.setDestinationEntity(26U);
    msg.name.assign("PAVUWFYNVYZGEETAWWRJYLUOSUXBLEYHEMOUPARPXKXGISKXESQLMMFGBYQBJQHNCRMXOVFCFSHTOMILPQCOIJOLLHRUJNUKKSFJKXYYSVAAPGBWVZKVCJPNRSGKHOQNNCBBDIPTEYLWZHCFFDPWTSQPKBZMXYVXJFWIQAEUQOQTEKINHDAZGCGDCNDLVOTHZIQBSJZUNBMTGIVTCGHA");
    msg.value = 30U;

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
    msg.setTimeStamp(0.31082285066);
    msg.setSource(14027U);
    msg.setSourceEntity(204U);
    msg.setDestination(42450U);
    msg.setDestinationEntity(88U);
    msg.id = 226U;
    msg.period = 2498640107U;
    msg.duty_cycle = 2325684633U;

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
    msg.setTimeStamp(0.696698268481);
    msg.setSource(11035U);
    msg.setSourceEntity(176U);
    msg.setDestination(4912U);
    msg.setDestinationEntity(33U);
    msg.id = 129U;
    msg.period = 2991606836U;
    msg.duty_cycle = 2433130956U;

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
    msg.setTimeStamp(0.502716235882);
    msg.setSource(25084U);
    msg.setSourceEntity(209U);
    msg.setDestination(48416U);
    msg.setDestinationEntity(57U);
    msg.id = 252U;
    msg.period = 2101169603U;
    msg.duty_cycle = 2801616798U;

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
    msg.setTimeStamp(0.137864570643);
    msg.setSource(8614U);
    msg.setSourceEntity(25U);
    msg.setDestination(40153U);
    msg.setDestinationEntity(246U);
    msg.id = 87U;
    msg.period = 4073465548U;
    msg.duty_cycle = 1573197781U;

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
    msg.setTimeStamp(0.34216205642);
    msg.setSource(22055U);
    msg.setSourceEntity(165U);
    msg.setDestination(61662U);
    msg.setDestinationEntity(52U);
    msg.id = 49U;
    msg.period = 276444203U;
    msg.duty_cycle = 786460374U;

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
    msg.setTimeStamp(0.551510614587);
    msg.setSource(29566U);
    msg.setSourceEntity(11U);
    msg.setDestination(46626U);
    msg.setDestinationEntity(31U);
    msg.id = 101U;
    msg.period = 775190392U;
    msg.duty_cycle = 1297118241U;

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
    msg.setTimeStamp(0.144303675078);
    msg.setSource(1176U);
    msg.setSourceEntity(186U);
    msg.setDestination(24242U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.155226041316;
    msg.lon = 0.453157810376;
    msg.height = 0.969389531739;
    msg.x = 0.667705309769;
    msg.y = 0.0593009797159;
    msg.z = 0.257930006084;
    msg.phi = 0.561002186418;
    msg.theta = 0.775843220688;
    msg.psi = 0.12269680087;
    msg.u = 0.525215506244;
    msg.v = 0.377268225024;
    msg.w = 0.479972094454;
    msg.vx = 0.995624636384;
    msg.vy = 0.183458793319;
    msg.vz = 0.530775645833;
    msg.p = 0.151838365335;
    msg.q = 0.328544672296;
    msg.r = 0.998644075636;
    msg.depth = 0.852412891831;
    msg.alt = 0.924428848159;

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
    msg.setTimeStamp(0.773200143286);
    msg.setSource(39692U);
    msg.setSourceEntity(200U);
    msg.setDestination(25114U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.264962418118;
    msg.lon = 0.493797793435;
    msg.height = 0.423661982458;
    msg.x = 0.572829077762;
    msg.y = 0.609912553022;
    msg.z = 0.41038832316;
    msg.phi = 0.229978340779;
    msg.theta = 0.981970347563;
    msg.psi = 0.211226416334;
    msg.u = 0.497704355353;
    msg.v = 0.534717600167;
    msg.w = 0.479796279389;
    msg.vx = 0.223750902419;
    msg.vy = 0.445312624211;
    msg.vz = 0.150794605566;
    msg.p = 0.550934866076;
    msg.q = 0.900684658882;
    msg.r = 0.820727838096;
    msg.depth = 0.450937942782;
    msg.alt = 0.699786252363;

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
    msg.setTimeStamp(0.82615890101);
    msg.setSource(45493U);
    msg.setSourceEntity(169U);
    msg.setDestination(34936U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.294781315762;
    msg.lon = 0.182036228028;
    msg.height = 0.606399338536;
    msg.x = 0.626198679799;
    msg.y = 0.601151240685;
    msg.z = 0.0170836388215;
    msg.phi = 0.817275715806;
    msg.theta = 0.193251493555;
    msg.psi = 0.371470098683;
    msg.u = 0.0100721382597;
    msg.v = 0.051161019731;
    msg.w = 0.666680837136;
    msg.vx = 0.0775389851183;
    msg.vy = 0.323945733742;
    msg.vz = 0.714880411802;
    msg.p = 0.420641964253;
    msg.q = 0.0547880818018;
    msg.r = 0.668103264493;
    msg.depth = 0.377971871692;
    msg.alt = 0.758632019915;

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
    msg.setTimeStamp(0.268825173974);
    msg.setSource(40411U);
    msg.setSourceEntity(153U);
    msg.setDestination(43005U);
    msg.setDestinationEntity(106U);
    msg.x = 0.141314492626;
    msg.y = 0.218805902684;
    msg.z = 0.792629612791;

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
    msg.setTimeStamp(0.255861416073);
    msg.setSource(47961U);
    msg.setSourceEntity(207U);
    msg.setDestination(21421U);
    msg.setDestinationEntity(100U);
    msg.x = 0.275137177768;
    msg.y = 0.209612031612;
    msg.z = 0.678308645308;

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
    msg.setTimeStamp(0.58531922709);
    msg.setSource(52026U);
    msg.setSourceEntity(104U);
    msg.setDestination(14330U);
    msg.setDestinationEntity(27U);
    msg.x = 0.906800623389;
    msg.y = 0.918609862587;
    msg.z = 0.11471585574;

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
    msg.setTimeStamp(0.241074505533);
    msg.setSource(65042U);
    msg.setSourceEntity(18U);
    msg.setDestination(23808U);
    msg.setDestinationEntity(39U);
    msg.value = 0.917043664783;

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
    msg.setTimeStamp(0.147994888358);
    msg.setSource(5661U);
    msg.setSourceEntity(70U);
    msg.setDestination(51506U);
    msg.setDestinationEntity(61U);
    msg.value = 0.963234325382;

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
    msg.setTimeStamp(0.155985205664);
    msg.setSource(33943U);
    msg.setSourceEntity(71U);
    msg.setDestination(21052U);
    msg.setDestinationEntity(83U);
    msg.value = 0.638927561901;

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
    msg.setTimeStamp(0.0658177003858);
    msg.setSource(47197U);
    msg.setSourceEntity(217U);
    msg.setDestination(5398U);
    msg.setDestinationEntity(138U);
    msg.value = 0.629530633001;

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
    msg.setTimeStamp(0.935710840222);
    msg.setSource(54049U);
    msg.setSourceEntity(104U);
    msg.setDestination(3668U);
    msg.setDestinationEntity(167U);
    msg.value = 0.259833419346;

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
    msg.setTimeStamp(0.00226495989682);
    msg.setSource(28749U);
    msg.setSourceEntity(54U);
    msg.setDestination(12615U);
    msg.setDestinationEntity(245U);
    msg.value = 0.0382663328361;

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
    msg.setTimeStamp(0.957638894963);
    msg.setSource(11298U);
    msg.setSourceEntity(204U);
    msg.setDestination(4373U);
    msg.setDestinationEntity(114U);
    msg.x = 0.432281928822;
    msg.y = 0.0479751785015;
    msg.z = 0.945608709848;
    msg.phi = 0.826402627494;
    msg.theta = 0.827134473298;
    msg.psi = 0.0640242945613;
    msg.p = 0.366163853752;
    msg.q = 0.776354069071;
    msg.r = 0.561767980909;
    msg.u = 0.63694813522;
    msg.v = 0.937984674499;
    msg.w = 0.709649994418;
    msg.bias_psi = 0.223960099205;
    msg.bias_r = 0.628396908962;

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
    msg.setTimeStamp(0.144146161566);
    msg.setSource(58290U);
    msg.setSourceEntity(119U);
    msg.setDestination(60211U);
    msg.setDestinationEntity(190U);
    msg.x = 0.222779334486;
    msg.y = 0.116140053819;
    msg.z = 0.550212993888;
    msg.phi = 0.276044952857;
    msg.theta = 0.483481414031;
    msg.psi = 0.408965937998;
    msg.p = 0.525207012033;
    msg.q = 0.342824622063;
    msg.r = 0.64971699622;
    msg.u = 0.619968199336;
    msg.v = 0.210647585726;
    msg.w = 0.0998389097966;
    msg.bias_psi = 0.169352217244;
    msg.bias_r = 0.424088911709;

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
    msg.setTimeStamp(0.372007557498);
    msg.setSource(58506U);
    msg.setSourceEntity(39U);
    msg.setDestination(362U);
    msg.setDestinationEntity(156U);
    msg.x = 0.738743240439;
    msg.y = 0.656603796515;
    msg.z = 0.690002075753;
    msg.phi = 0.209271302172;
    msg.theta = 0.867428163693;
    msg.psi = 0.908121339872;
    msg.p = 0.531758423516;
    msg.q = 0.108242421119;
    msg.r = 0.366717300146;
    msg.u = 0.820429700758;
    msg.v = 0.162709605288;
    msg.w = 0.232717410623;
    msg.bias_psi = 0.903588798763;
    msg.bias_r = 0.702424040855;

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
    msg.setTimeStamp(0.654392116752);
    msg.setSource(24500U);
    msg.setSourceEntity(100U);
    msg.setDestination(23798U);
    msg.setDestinationEntity(170U);
    msg.bias_psi = 0.860403533529;
    msg.bias_r = 0.533784835779;
    msg.cog = 0.366010444059;
    msg.cyaw = 0.822754455846;
    msg.lbl_rej_level = 0.490982966902;
    msg.gps_rej_level = 0.514670061538;
    msg.custom_x = 0.645016332879;
    msg.custom_y = 0.851877377154;
    msg.custom_z = 0.47379538914;

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
    msg.setTimeStamp(0.46784685888);
    msg.setSource(40712U);
    msg.setSourceEntity(225U);
    msg.setDestination(14871U);
    msg.setDestinationEntity(71U);
    msg.bias_psi = 0.882025192535;
    msg.bias_r = 0.950057410664;
    msg.cog = 0.356302264416;
    msg.cyaw = 0.0740761628757;
    msg.lbl_rej_level = 0.192046343034;
    msg.gps_rej_level = 0.144973455722;
    msg.custom_x = 0.43209873091;
    msg.custom_y = 0.94513866721;
    msg.custom_z = 0.688504216;

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
    msg.setTimeStamp(0.293488485015);
    msg.setSource(59857U);
    msg.setSourceEntity(176U);
    msg.setDestination(24106U);
    msg.setDestinationEntity(245U);
    msg.bias_psi = 0.646645099546;
    msg.bias_r = 0.351471371157;
    msg.cog = 0.821800585675;
    msg.cyaw = 0.737349783136;
    msg.lbl_rej_level = 0.668468270638;
    msg.gps_rej_level = 0.709283156616;
    msg.custom_x = 0.89343648322;
    msg.custom_y = 0.466269715577;
    msg.custom_z = 0.644581363298;

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
    msg.setTimeStamp(0.984546699881);
    msg.setSource(38514U);
    msg.setSourceEntity(101U);
    msg.setDestination(3948U);
    msg.setDestinationEntity(207U);
    msg.utc_time = 0.745843769402;
    msg.reason = 115U;

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
    msg.setTimeStamp(0.732737688263);
    msg.setSource(36931U);
    msg.setSourceEntity(65U);
    msg.setDestination(54060U);
    msg.setDestinationEntity(198U);
    msg.utc_time = 0.719637575107;
    msg.reason = 226U;

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
    msg.setTimeStamp(0.643250133911);
    msg.setSource(63221U);
    msg.setSourceEntity(250U);
    msg.setDestination(27159U);
    msg.setDestinationEntity(155U);
    msg.utc_time = 0.775993037925;
    msg.reason = 96U;

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
    msg.setTimeStamp(0.221973538132);
    msg.setSource(33593U);
    msg.setSourceEntity(198U);
    msg.setDestination(6595U);
    msg.setDestinationEntity(132U);
    msg.id = 153U;
    msg.range = 0.869363789719;
    msg.acceptance = 23U;

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
    msg.setTimeStamp(0.65526827731);
    msg.setSource(26832U);
    msg.setSourceEntity(48U);
    msg.setDestination(33857U);
    msg.setDestinationEntity(74U);
    msg.id = 43U;
    msg.range = 0.470322347706;
    msg.acceptance = 243U;

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
    msg.setTimeStamp(0.5533620542);
    msg.setSource(33287U);
    msg.setSourceEntity(199U);
    msg.setDestination(2402U);
    msg.setDestinationEntity(87U);
    msg.id = 229U;
    msg.range = 0.705494704204;
    msg.acceptance = 29U;

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
    msg.setTimeStamp(0.00887084398555);
    msg.setSource(24010U);
    msg.setSourceEntity(125U);
    msg.setDestination(33963U);
    msg.setDestinationEntity(90U);
    msg.type = 44U;
    msg.reason = 209U;
    msg.value = 0.71696607213;
    msg.timestep = 0.34899110373;

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
    msg.setTimeStamp(0.588501436068);
    msg.setSource(34263U);
    msg.setSourceEntity(211U);
    msg.setDestination(30847U);
    msg.setDestinationEntity(93U);
    msg.type = 52U;
    msg.reason = 155U;
    msg.value = 0.954707210699;
    msg.timestep = 0.599746255385;

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
    msg.setTimeStamp(0.488616494524);
    msg.setSource(60125U);
    msg.setSourceEntity(3U);
    msg.setDestination(32979U);
    msg.setDestinationEntity(168U);
    msg.type = 214U;
    msg.reason = 107U;
    msg.value = 0.616929257973;
    msg.timestep = 0.0862063286205;

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
    msg.setTimeStamp(0.143198340152);
    msg.setSource(42527U);
    msg.setSourceEntity(67U);
    msg.setDestination(19601U);
    msg.setDestinationEntity(62U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XCJGVYRRXVGMBJAWLCVKSNDVVCPKDDEAUTHILWXRFMRRQ");
    tmp_msg_0.lat = 0.861792722676;
    tmp_msg_0.lon = 0.031936813789;
    tmp_msg_0.depth = 0.413276064992;
    tmp_msg_0.query_channel = 32U;
    tmp_msg_0.reply_channel = 199U;
    tmp_msg_0.transponder_delay = 68U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.600512695425;
    msg.y = 0.445503142647;
    msg.var_x = 0.880029699027;
    msg.var_y = 0.690535418491;
    msg.distance = 0.288317042822;

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
    msg.setTimeStamp(0.317926800984);
    msg.setSource(8696U);
    msg.setSourceEntity(89U);
    msg.setDestination(42877U);
    msg.setDestinationEntity(103U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LXDZAAKKTLKLNUAKZVVYDTJGPUBYRWQRUWFNIXSDZODVCYLFOHPVSTRFRMINWNBFYUBLLEOVKJMRZZEICXCLQOXC");
    tmp_msg_0.lat = 0.746271748762;
    tmp_msg_0.lon = 0.0196609549977;
    tmp_msg_0.depth = 0.854615568064;
    tmp_msg_0.query_channel = 13U;
    tmp_msg_0.reply_channel = 135U;
    tmp_msg_0.transponder_delay = 159U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0651282863522;
    msg.y = 0.279854387289;
    msg.var_x = 0.239219767236;
    msg.var_y = 0.277090673107;
    msg.distance = 0.434430122675;

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
    msg.setTimeStamp(0.283986595687);
    msg.setSource(61888U);
    msg.setSourceEntity(134U);
    msg.setDestination(62899U);
    msg.setDestinationEntity(157U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SFDGOUGPTLUWZVSPOIQLAWERUYZMXETCAFTCFEDUZCJWISOHOQMYNZNHMKVFIEZDAXQKLEVSKXEOCUFMTKDCFUMNTXBFCGHNHPMKIOBBXVMQSBJYUWJBECZXMSPD");
    tmp_msg_0.lat = 0.969359361012;
    tmp_msg_0.lon = 0.948767499144;
    tmp_msg_0.depth = 0.812347362293;
    tmp_msg_0.query_channel = 109U;
    tmp_msg_0.reply_channel = 90U;
    tmp_msg_0.transponder_delay = 238U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.282234161393;
    msg.y = 0.873459232471;
    msg.var_x = 0.353756208688;
    msg.var_y = 0.814843809654;
    msg.distance = 0.789726561177;

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
    msg.setTimeStamp(0.704683816074);
    msg.setSource(23536U);
    msg.setSourceEntity(64U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(232U);
    msg.state = 214U;

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
    msg.setTimeStamp(0.964738902845);
    msg.setSource(41613U);
    msg.setSourceEntity(225U);
    msg.setDestination(52224U);
    msg.setDestinationEntity(22U);
    msg.state = 143U;

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
    msg.setTimeStamp(0.603149418724);
    msg.setSource(64336U);
    msg.setSourceEntity(181U);
    msg.setDestination(38944U);
    msg.setDestinationEntity(53U);
    msg.state = 208U;

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
    msg.setTimeStamp(0.308179430917);
    msg.setSource(46641U);
    msg.setSourceEntity(225U);
    msg.setDestination(65286U);
    msg.setDestinationEntity(9U);
    msg.x = 0.946574988433;
    msg.y = 0.213679784204;
    msg.z = 0.0647404973871;

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
    msg.setTimeStamp(0.625129259727);
    msg.setSource(18136U);
    msg.setSourceEntity(120U);
    msg.setDestination(32773U);
    msg.setDestinationEntity(70U);
    msg.x = 0.112347522194;
    msg.y = 0.826904978959;
    msg.z = 0.756118107295;

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
    msg.setTimeStamp(0.163307659866);
    msg.setSource(10697U);
    msg.setSourceEntity(154U);
    msg.setDestination(17264U);
    msg.setDestinationEntity(62U);
    msg.x = 0.8168994999;
    msg.y = 0.788972737127;
    msg.z = 0.337745695293;

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
    msg.setTimeStamp(0.0418939921658);
    msg.setSource(58728U);
    msg.setSourceEntity(57U);
    msg.setDestination(41962U);
    msg.setDestinationEntity(203U);
    msg.va = 0.142049867745;
    msg.aoa = 0.909950688324;
    msg.ssa = 0.863189769663;

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
    msg.setTimeStamp(0.892042948104);
    msg.setSource(29030U);
    msg.setSourceEntity(14U);
    msg.setDestination(56898U);
    msg.setDestinationEntity(152U);
    msg.va = 0.606815858171;
    msg.aoa = 0.0440496381731;
    msg.ssa = 0.570668891188;

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
    msg.setTimeStamp(0.0859739728864);
    msg.setSource(58698U);
    msg.setSourceEntity(150U);
    msg.setDestination(16985U);
    msg.setDestinationEntity(208U);
    msg.va = 0.0218583235963;
    msg.aoa = 0.855271591756;
    msg.ssa = 0.201896191811;

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
    msg.setTimeStamp(0.68384037229);
    msg.setSource(46198U);
    msg.setSourceEntity(78U);
    msg.setDestination(57339U);
    msg.setDestinationEntity(151U);
    msg.value = 0.873699814321;

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
    msg.setTimeStamp(0.473738226838);
    msg.setSource(29710U);
    msg.setSourceEntity(215U);
    msg.setDestination(382U);
    msg.setDestinationEntity(236U);
    msg.value = 0.94991614166;

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
    msg.setTimeStamp(0.42677636284);
    msg.setSource(60616U);
    msg.setSourceEntity(42U);
    msg.setDestination(11677U);
    msg.setDestinationEntity(78U);
    msg.value = 0.942980511074;

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
    msg.setTimeStamp(0.85369691347);
    msg.setSource(35144U);
    msg.setSourceEntity(84U);
    msg.setDestination(1416U);
    msg.setDestinationEntity(198U);
    msg.value = 0.49230416133;
    msg.z_units = 150U;

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
    msg.setTimeStamp(0.949675332742);
    msg.setSource(19008U);
    msg.setSourceEntity(153U);
    msg.setDestination(35448U);
    msg.setDestinationEntity(185U);
    msg.value = 0.976488033912;
    msg.z_units = 42U;

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
    msg.setTimeStamp(0.196252677475);
    msg.setSource(1045U);
    msg.setSourceEntity(80U);
    msg.setDestination(65401U);
    msg.setDestinationEntity(40U);
    msg.value = 0.539883798053;
    msg.z_units = 106U;

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
    msg.setTimeStamp(0.549883021652);
    msg.setSource(26872U);
    msg.setSourceEntity(169U);
    msg.setDestination(27924U);
    msg.setDestinationEntity(127U);
    msg.value = 0.19061786636;
    msg.speed_units = 11U;

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
    msg.setTimeStamp(0.0507335359601);
    msg.setSource(64719U);
    msg.setSourceEntity(185U);
    msg.setDestination(18664U);
    msg.setDestinationEntity(116U);
    msg.value = 0.742818152102;
    msg.speed_units = 31U;

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
    msg.setTimeStamp(0.917286361472);
    msg.setSource(8437U);
    msg.setSourceEntity(94U);
    msg.setDestination(40031U);
    msg.setDestinationEntity(154U);
    msg.value = 0.265111707278;
    msg.speed_units = 198U;

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
    msg.setTimeStamp(0.443113757214);
    msg.setSource(50833U);
    msg.setSourceEntity(136U);
    msg.setDestination(16676U);
    msg.setDestinationEntity(86U);
    msg.value = 0.406418983975;

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
    msg.setTimeStamp(0.100788014177);
    msg.setSource(9892U);
    msg.setSourceEntity(149U);
    msg.setDestination(34360U);
    msg.setDestinationEntity(50U);
    msg.value = 0.91482857148;

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
    msg.setTimeStamp(0.554967527569);
    msg.setSource(64696U);
    msg.setSourceEntity(135U);
    msg.setDestination(59110U);
    msg.setDestinationEntity(201U);
    msg.value = 0.586174868557;

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
    msg.setTimeStamp(0.136486771962);
    msg.setSource(17332U);
    msg.setSourceEntity(23U);
    msg.setDestination(3367U);
    msg.setDestinationEntity(90U);
    msg.value = 0.426269346321;

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
    msg.setTimeStamp(0.198971445946);
    msg.setSource(64419U);
    msg.setSourceEntity(8U);
    msg.setDestination(30114U);
    msg.setDestinationEntity(186U);
    msg.value = 0.355625991838;

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
    msg.setTimeStamp(0.151142183454);
    msg.setSource(25500U);
    msg.setSourceEntity(209U);
    msg.setDestination(22216U);
    msg.setDestinationEntity(90U);
    msg.value = 0.406447941803;

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
    msg.setTimeStamp(0.398199527276);
    msg.setSource(7542U);
    msg.setSourceEntity(84U);
    msg.setDestination(20770U);
    msg.setDestinationEntity(177U);
    msg.value = 0.20834996343;

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
    msg.setTimeStamp(0.487114224577);
    msg.setSource(53137U);
    msg.setSourceEntity(38U);
    msg.setDestination(50125U);
    msg.setDestinationEntity(49U);
    msg.value = 0.0846837618165;

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
    msg.setTimeStamp(0.511784462047);
    msg.setSource(23650U);
    msg.setSourceEntity(189U);
    msg.setDestination(57191U);
    msg.setDestinationEntity(180U);
    msg.value = 0.763728295911;

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
    msg.setTimeStamp(0.657067680026);
    msg.setSource(61630U);
    msg.setSourceEntity(84U);
    msg.setDestination(20103U);
    msg.setDestinationEntity(240U);
    msg.path_ref = 365186359U;
    msg.start_lat = 0.583544483256;
    msg.start_lon = 0.511796661708;
    msg.start_z = 0.108639330756;
    msg.start_z_units = 1U;
    msg.end_lat = 0.517167658661;
    msg.end_lon = 0.885273192182;
    msg.end_z = 0.74170522949;
    msg.end_z_units = 231U;
    msg.speed = 0.857797807662;
    msg.speed_units = 207U;
    msg.lradius = 0.141129148813;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.0632034632446);
    msg.setSource(3037U);
    msg.setSourceEntity(51U);
    msg.setDestination(46245U);
    msg.setDestinationEntity(110U);
    msg.path_ref = 3143220144U;
    msg.start_lat = 0.672401486909;
    msg.start_lon = 0.873302037324;
    msg.start_z = 0.700673227704;
    msg.start_z_units = 135U;
    msg.end_lat = 0.295185067321;
    msg.end_lon = 0.763961603687;
    msg.end_z = 0.949149429277;
    msg.end_z_units = 181U;
    msg.speed = 0.238572837497;
    msg.speed_units = 233U;
    msg.lradius = 0.458777378196;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.564714733061);
    msg.setSource(40231U);
    msg.setSourceEntity(204U);
    msg.setDestination(40635U);
    msg.setDestinationEntity(223U);
    msg.path_ref = 3201231386U;
    msg.start_lat = 0.311310010304;
    msg.start_lon = 0.800835291335;
    msg.start_z = 0.817436954182;
    msg.start_z_units = 93U;
    msg.end_lat = 0.662601549596;
    msg.end_lon = 0.584336643906;
    msg.end_z = 0.33085182619;
    msg.end_z_units = 122U;
    msg.speed = 0.213393922289;
    msg.speed_units = 123U;
    msg.lradius = 0.311681724034;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.848228678116);
    msg.setSource(7378U);
    msg.setSourceEntity(217U);
    msg.setDestination(57057U);
    msg.setDestinationEntity(120U);
    msg.x = 0.0781357472587;
    msg.y = 0.36592725916;
    msg.z = 0.854610999334;
    msg.k = 0.0384464664945;
    msg.m = 0.0706219111088;
    msg.n = 0.769955397817;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.586022660876);
    msg.setSource(25587U);
    msg.setSourceEntity(19U);
    msg.setDestination(9904U);
    msg.setDestinationEntity(138U);
    msg.x = 0.97571151054;
    msg.y = 0.929602226318;
    msg.z = 0.649328047168;
    msg.k = 0.545698853091;
    msg.m = 0.305304879506;
    msg.n = 0.687216937933;
    msg.flags = 223U;

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
    msg.setTimeStamp(0.760704675239);
    msg.setSource(23886U);
    msg.setSourceEntity(170U);
    msg.setDestination(16835U);
    msg.setDestinationEntity(132U);
    msg.x = 0.147125819757;
    msg.y = 0.093970475571;
    msg.z = 0.896574073493;
    msg.k = 0.314054736137;
    msg.m = 0.274616359502;
    msg.n = 0.815741051829;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.309286689607);
    msg.setSource(46302U);
    msg.setSourceEntity(73U);
    msg.setDestination(12707U);
    msg.setDestinationEntity(245U);
    msg.value = 0.0277425927771;

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
    msg.setTimeStamp(0.753736352921);
    msg.setSource(5371U);
    msg.setSourceEntity(198U);
    msg.setDestination(22343U);
    msg.setDestinationEntity(91U);
    msg.value = 0.835863425437;

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
    msg.setTimeStamp(0.361935882527);
    msg.setSource(29935U);
    msg.setSourceEntity(89U);
    msg.setDestination(27901U);
    msg.setDestinationEntity(4U);
    msg.value = 0.343428635256;

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
    msg.setTimeStamp(0.198046497816);
    msg.setSource(37960U);
    msg.setSourceEntity(160U);
    msg.setDestination(57356U);
    msg.setDestinationEntity(253U);
    msg.u = 0.597902966547;
    msg.v = 0.604137043168;
    msg.w = 0.777647281864;
    msg.p = 0.510923278004;
    msg.q = 0.536505764214;
    msg.r = 0.416064396997;
    msg.flags = 21U;

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
    msg.setTimeStamp(0.906516954227);
    msg.setSource(50797U);
    msg.setSourceEntity(216U);
    msg.setDestination(21969U);
    msg.setDestinationEntity(62U);
    msg.u = 0.737823876565;
    msg.v = 0.384683592741;
    msg.w = 0.913320707076;
    msg.p = 0.293283543006;
    msg.q = 0.52483978989;
    msg.r = 0.194448005771;
    msg.flags = 139U;

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
    msg.setTimeStamp(0.978293436155);
    msg.setSource(18336U);
    msg.setSourceEntity(236U);
    msg.setDestination(6497U);
    msg.setDestinationEntity(83U);
    msg.u = 0.0260194869212;
    msg.v = 0.243568096778;
    msg.w = 0.00504535061614;
    msg.p = 0.748897991816;
    msg.q = 0.920223395699;
    msg.r = 0.810147124803;
    msg.flags = 199U;

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
    msg.setTimeStamp(0.0991572983669);
    msg.setSource(31991U);
    msg.setSourceEntity(1U);
    msg.setDestination(4705U);
    msg.setDestinationEntity(79U);
    msg.path_ref = 1858800220U;
    msg.start_lat = 0.515079441609;
    msg.start_lon = 0.576297908964;
    msg.start_z = 0.557229041764;
    msg.start_z_units = 115U;
    msg.end_lat = 0.296122933889;
    msg.end_lon = 0.66847094944;
    msg.end_z = 0.447421912175;
    msg.end_z_units = 165U;
    msg.lradius = 0.648728297018;
    msg.flags = 188U;
    msg.x = 0.556098667778;
    msg.y = 0.220868823439;
    msg.z = 0.810832755801;
    msg.vx = 0.771307787859;
    msg.vy = 0.996232817918;
    msg.vz = 0.316857908043;
    msg.course_error = 0.979879054183;
    msg.eta = 15055U;

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
    msg.setTimeStamp(0.891903822126);
    msg.setSource(59185U);
    msg.setSourceEntity(209U);
    msg.setDestination(225U);
    msg.setDestinationEntity(70U);
    msg.path_ref = 2707098003U;
    msg.start_lat = 0.586415709006;
    msg.start_lon = 0.438321719683;
    msg.start_z = 0.496216420026;
    msg.start_z_units = 141U;
    msg.end_lat = 0.573193806961;
    msg.end_lon = 0.857308414913;
    msg.end_z = 0.763413334742;
    msg.end_z_units = 217U;
    msg.lradius = 0.0157977666113;
    msg.flags = 129U;
    msg.x = 0.199417730219;
    msg.y = 0.977043781885;
    msg.z = 0.0957624719232;
    msg.vx = 0.362854980961;
    msg.vy = 0.614663570138;
    msg.vz = 0.865335520611;
    msg.course_error = 0.0346088468924;
    msg.eta = 28111U;

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
    msg.setTimeStamp(0.0142394637296);
    msg.setSource(5527U);
    msg.setSourceEntity(139U);
    msg.setDestination(8223U);
    msg.setDestinationEntity(206U);
    msg.path_ref = 1342131903U;
    msg.start_lat = 0.477483178928;
    msg.start_lon = 0.860507262226;
    msg.start_z = 0.559382053726;
    msg.start_z_units = 8U;
    msg.end_lat = 0.374633921688;
    msg.end_lon = 0.161138395955;
    msg.end_z = 0.99356873674;
    msg.end_z_units = 254U;
    msg.lradius = 0.904489458098;
    msg.flags = 25U;
    msg.x = 0.910814484111;
    msg.y = 0.241611714295;
    msg.z = 0.010681506817;
    msg.vx = 0.130946182452;
    msg.vy = 0.751891463058;
    msg.vz = 0.359097651085;
    msg.course_error = 0.748716389847;
    msg.eta = 21227U;

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
    msg.setTimeStamp(0.51440191745);
    msg.setSource(3641U);
    msg.setSourceEntity(58U);
    msg.setDestination(11129U);
    msg.setDestinationEntity(158U);
    msg.k = 0.640762885897;
    msg.m = 0.574373581492;
    msg.n = 0.475136500571;

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
    msg.setTimeStamp(0.936772947635);
    msg.setSource(36440U);
    msg.setSourceEntity(136U);
    msg.setDestination(45107U);
    msg.setDestinationEntity(38U);
    msg.k = 0.848539723235;
    msg.m = 0.702127855963;
    msg.n = 0.00683445309937;

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
    msg.setTimeStamp(0.451230455912);
    msg.setSource(11284U);
    msg.setSourceEntity(101U);
    msg.setDestination(29024U);
    msg.setDestinationEntity(254U);
    msg.k = 0.807216826031;
    msg.m = 0.973152166191;
    msg.n = 0.730209757451;

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
    msg.setTimeStamp(0.460700459882);
    msg.setSource(23641U);
    msg.setSourceEntity(36U);
    msg.setDestination(54945U);
    msg.setDestinationEntity(33U);
    msg.p = 0.789440660869;
    msg.i = 0.620859223691;
    msg.d = 0.291902793654;
    msg.a = 0.179792095085;

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
    msg.setTimeStamp(0.813691402386);
    msg.setSource(57404U);
    msg.setSourceEntity(188U);
    msg.setDestination(42199U);
    msg.setDestinationEntity(71U);
    msg.p = 0.197804507622;
    msg.i = 0.20256409027;
    msg.d = 0.472098516958;
    msg.a = 0.791494226263;

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
    msg.setTimeStamp(0.73502995448);
    msg.setSource(28484U);
    msg.setSourceEntity(225U);
    msg.setDestination(61649U);
    msg.setDestinationEntity(222U);
    msg.p = 0.183055482338;
    msg.i = 0.209203363513;
    msg.d = 0.273122106511;
    msg.a = 0.45229695558;

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
    msg.setTimeStamp(0.845465410843);
    msg.setSource(13549U);
    msg.setSourceEntity(25U);
    msg.setDestination(30267U);
    msg.setDestinationEntity(28U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.158527233239);
    msg.setSource(30478U);
    msg.setSourceEntity(132U);
    msg.setDestination(26800U);
    msg.setDestinationEntity(153U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.498345480479);
    msg.setSource(59071U);
    msg.setSourceEntity(195U);
    msg.setDestination(1109U);
    msg.setDestinationEntity(219U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.445349762506);
    msg.setSource(22714U);
    msg.setSourceEntity(16U);
    msg.setDestination(62310U);
    msg.setDestinationEntity(178U);
    msg.x = 0.334517385269;
    msg.y = 0.00767317124698;
    msg.z = 0.66581532671;
    msg.vx = 0.16345236997;
    msg.vy = 0.842247138024;
    msg.vz = 0.510397724483;
    msg.ax = 0.609460078727;
    msg.ay = 0.871710972626;
    msg.az = 0.952214507059;
    msg.flags = 26149U;

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
    msg.setTimeStamp(0.589358920466);
    msg.setSource(52186U);
    msg.setSourceEntity(42U);
    msg.setDestination(12568U);
    msg.setDestinationEntity(26U);
    msg.x = 0.640056256585;
    msg.y = 0.6347081627;
    msg.z = 0.114407711482;
    msg.vx = 0.69385193537;
    msg.vy = 0.266310699845;
    msg.vz = 0.688865060863;
    msg.ax = 0.0608418609153;
    msg.ay = 0.568668844021;
    msg.az = 0.354697931166;
    msg.flags = 32786U;

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
    msg.setTimeStamp(0.733046322992);
    msg.setSource(30541U);
    msg.setSourceEntity(126U);
    msg.setDestination(17354U);
    msg.setDestinationEntity(59U);
    msg.x = 0.351591265629;
    msg.y = 0.0256571349728;
    msg.z = 0.341740319238;
    msg.vx = 0.431818603122;
    msg.vy = 0.555180465457;
    msg.vz = 0.427360370186;
    msg.ax = 0.103589318027;
    msg.ay = 0.612344827873;
    msg.az = 0.967953529731;
    msg.flags = 9264U;

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
    msg.setTimeStamp(0.722915616646);
    msg.setSource(50760U);
    msg.setSourceEntity(95U);
    msg.setDestination(52128U);
    msg.setDestinationEntity(253U);
    msg.value = 0.182066096322;

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
    msg.setTimeStamp(0.0680806435655);
    msg.setSource(12315U);
    msg.setSourceEntity(44U);
    msg.setDestination(45377U);
    msg.setDestinationEntity(75U);
    msg.value = 0.245007928974;

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
    msg.setTimeStamp(0.874879456407);
    msg.setSource(55602U);
    msg.setSourceEntity(144U);
    msg.setDestination(30502U);
    msg.setDestinationEntity(144U);
    msg.value = 0.0422282650737;

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
    msg.setTimeStamp(0.963035909394);
    msg.setSource(10051U);
    msg.setSourceEntity(22U);
    msg.setDestination(16383U);
    msg.setDestinationEntity(158U);
    msg.timeout = 38279U;
    msg.lat = 0.885820259908;
    msg.lon = 0.609831033892;
    msg.z = 0.197861269482;
    msg.z_units = 146U;
    msg.speed = 0.179762682873;
    msg.speed_units = 242U;
    msg.roll = 0.614153520225;
    msg.pitch = 0.222939283584;
    msg.yaw = 0.621463113994;
    msg.custom.assign("UTYHZEUKHIRGSIEAOABCKXDLQWZHHQKIFUZGFLWEPVGPFIFTDBG");

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
    msg.setTimeStamp(0.501593603732);
    msg.setSource(59729U);
    msg.setSourceEntity(66U);
    msg.setDestination(16582U);
    msg.setDestinationEntity(215U);
    msg.timeout = 38024U;
    msg.lat = 0.366856634083;
    msg.lon = 0.291916461211;
    msg.z = 0.883868749617;
    msg.z_units = 124U;
    msg.speed = 0.993787880957;
    msg.speed_units = 86U;
    msg.roll = 0.991048515706;
    msg.pitch = 0.395947183942;
    msg.yaw = 0.646990264409;
    msg.custom.assign("JNFDLDOHPQULYLLLAXRXISTAVSCUWVHTNLWPDCOOPJBWIHCFPYJALZGEPSINUVENSJULJRPMTMCYIXEZGQKMSRAUFVYTQBQGBYLCQJHJCGHVBQHOZEBOAKKIVKUASWSOOTIGBFMUHZTFDFXKDUWDSFOJEGICQSDFZY");

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
    msg.setTimeStamp(0.783098035903);
    msg.setSource(44910U);
    msg.setSourceEntity(207U);
    msg.setDestination(5641U);
    msg.setDestinationEntity(80U);
    msg.timeout = 10066U;
    msg.lat = 0.313533302419;
    msg.lon = 0.651604560825;
    msg.z = 0.583382291159;
    msg.z_units = 118U;
    msg.speed = 0.246303110799;
    msg.speed_units = 248U;
    msg.roll = 0.933231712866;
    msg.pitch = 0.288205032607;
    msg.yaw = 0.043202106003;
    msg.custom.assign("MMWCBDDKTWVGNCLJZOOHZSMVQCAFFVESZWJXSGGOIWOJWGCKVFUXJZMSVZVBSPUEURMRCUAJHLYYAQLLKPNCZLSQODEWNKLYAFICIWOEYOQUAKGFDOVELIHBXMFIPAKBZUYPDNIYLNXJOFEWFVRLPAYQIKQITCHRABBQEHQTGMEAZHXKLMWIBRGUDPBTDGHIDQDDXNBMTHKRESZSPT");

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
    msg.setTimeStamp(0.946051449739);
    msg.setSource(28529U);
    msg.setSourceEntity(1U);
    msg.setDestination(40574U);
    msg.setDestinationEntity(34U);
    msg.timeout = 18022U;
    msg.lat = 0.932325467276;
    msg.lon = 0.916116026914;
    msg.z = 0.313877765701;
    msg.z_units = 155U;
    msg.speed = 0.850786353098;
    msg.speed_units = 201U;
    msg.duration = 46848U;
    msg.radius = 0.826832033319;
    msg.flags = 175U;
    msg.custom.assign("CFWSAWQIVZCMXUJVBTGSFYNTAGCILJWKSTGHCUNKUDWJXLOWQOPINAEJARGCMTPTEPSXGDBJRQBFRNTQNITAYHAZFZOGLLLNHLKYTFXRXCVIJHMFTKVEBWJELYGXRKYVSXKKYTQGDOURSLGYDUDRAXZBJBMXKOPAG");

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
    msg.setTimeStamp(0.938034347192);
    msg.setSource(4808U);
    msg.setSourceEntity(194U);
    msg.setDestination(35487U);
    msg.setDestinationEntity(20U);
    msg.timeout = 6818U;
    msg.lat = 0.284489915849;
    msg.lon = 0.708808156191;
    msg.z = 0.872332437258;
    msg.z_units = 109U;
    msg.speed = 0.50817240535;
    msg.speed_units = 132U;
    msg.duration = 55630U;
    msg.radius = 0.579793465797;
    msg.flags = 230U;
    msg.custom.assign("FNTDKWTBGGPRUGMCCYWKVABIHUEFMYOPEXPVECQOVDPQSQAZBWKSCCGIRLFPLBYNMBCYYDFARKJVHUDCMQLBHJLPWEANIZZSTGFJJMLZRSNYOSYEBXMNDJDQGYSOHTZJGEMXKREYBNUHAIVRCDWB");

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
    msg.setTimeStamp(0.175456661948);
    msg.setSource(18588U);
    msg.setSourceEntity(212U);
    msg.setDestination(28414U);
    msg.setDestinationEntity(228U);
    msg.timeout = 340U;
    msg.lat = 0.883156226667;
    msg.lon = 0.976377815237;
    msg.z = 0.49770302579;
    msg.z_units = 93U;
    msg.speed = 0.886599818247;
    msg.speed_units = 143U;
    msg.duration = 16403U;
    msg.radius = 0.684951478209;
    msg.flags = 125U;
    msg.custom.assign("KIXNJROBVRJNUIAPNMEVTECQWMDIPMFJGBVDKRNNTMNGJPHRPPKZBSNAIQOSKEELOAHVYPTFHDYLVFOFRDRDKUVMWMJFTDPKEOWXJUESGKHZBFDGBAAJZUTPYLFQWEDNLVGPRXZWIKZCNTOCXSO");

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
    msg.setTimeStamp(0.69552427114);
    msg.setSource(53705U);
    msg.setSourceEntity(143U);
    msg.setDestination(16291U);
    msg.setDestinationEntity(31U);
    msg.custom.assign("PZOEJEVDNMIMBEMICDYBAECCUPHMVXNGJDQSNQSAPOJWZRBFACHRUKKTSCANYMQZBRTJLMGIKXHCGYCOLSUPYROXZSBGOFXHFFKTLSGR");

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
    msg.setTimeStamp(0.824165265505);
    msg.setSource(28573U);
    msg.setSourceEntity(111U);
    msg.setDestination(34314U);
    msg.setDestinationEntity(118U);
    msg.custom.assign("CIEHVQLFFVGDYMNZXOVTZMJEPTGFDHPTFAHIQQMXRKKCFFPQPEUJXWYMSUNSGCURGLVAVYXWILQMZGWEVUWDNDZXFJGSSLJWUFKRSBNYDTYWFSGDIVNTXDLCUTNHHCXO");

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
    msg.setTimeStamp(0.915389457142);
    msg.setSource(62124U);
    msg.setSourceEntity(179U);
    msg.setDestination(5626U);
    msg.setDestinationEntity(41U);
    msg.custom.assign("PLEPWJRMOEZAGQXLXOTTWIRCKVWLQOMJFFMYJKZWJZPFWHCUJERHPSNGKAXJSCEHNWAPHUGJVCVKVGXWSLUABQEQXBGIHYDRNXYVHHBLUDTAYCCUL");

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
    msg.setTimeStamp(0.464275218963);
    msg.setSource(51981U);
    msg.setSourceEntity(248U);
    msg.setDestination(31971U);
    msg.setDestinationEntity(45U);
    msg.timeout = 1597U;
    msg.lat = 0.260714343279;
    msg.lon = 0.182138333176;
    msg.z = 0.941422269965;
    msg.z_units = 69U;
    msg.duration = 15286U;
    msg.speed = 0.165115790253;
    msg.speed_units = 91U;
    msg.type = 250U;
    msg.radius = 0.187551040793;
    msg.length = 0.26411643574;
    msg.bearing = 0.791025181312;
    msg.direction = 201U;
    msg.custom.assign("EQSIHPZLFHNHIIAZKBNGBTKCJYCWVUCXNARZGFEJJUERRCUIGQEXTACLWLYXSGPOHNEWPKJWNDDRWNYKTQIRFAZZJIGIHDBD");

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
    msg.setTimeStamp(0.142976970365);
    msg.setSource(60689U);
    msg.setSourceEntity(249U);
    msg.setDestination(717U);
    msg.setDestinationEntity(69U);
    msg.timeout = 34101U;
    msg.lat = 0.655467719572;
    msg.lon = 0.129356750948;
    msg.z = 0.495152998921;
    msg.z_units = 16U;
    msg.duration = 40093U;
    msg.speed = 0.132333947105;
    msg.speed_units = 59U;
    msg.type = 242U;
    msg.radius = 0.0485883843984;
    msg.length = 0.539567601605;
    msg.bearing = 0.159055547171;
    msg.direction = 241U;
    msg.custom.assign("KMTZVINILLMMYYVKPILCXUPRQIUYBTCGJFPZEHGDQF");

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
    msg.setTimeStamp(0.492094560838);
    msg.setSource(831U);
    msg.setSourceEntity(75U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(243U);
    msg.timeout = 4005U;
    msg.lat = 0.144388173869;
    msg.lon = 0.841339791682;
    msg.z = 0.0444404775099;
    msg.z_units = 241U;
    msg.duration = 2860U;
    msg.speed = 0.901510688277;
    msg.speed_units = 172U;
    msg.type = 147U;
    msg.radius = 0.493291948392;
    msg.length = 0.631091190018;
    msg.bearing = 0.654465014329;
    msg.direction = 121U;
    msg.custom.assign("RDQGWYODZIJQZZHUHWUIARJQLSCSJMRCDBBCUWOCPHDIEJYRFQAHLYZVMABKNNTOVTJFXIMYRKWPTYXXEYAGQWBNFZFXMDXKULPYLJIYJOIAEXVXQSNPHNSUQZHETDTKOGKBANDSPDQCSZPRGJXSKFHIRVLPAYVNFFEIVKLGEOAPHBMHEINNJUKPSEUZOMMUMBWSULGXBETWGYTGTWKKJORHBSZEGQTI");

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
    msg.setTimeStamp(0.631729198704);
    msg.setSource(11972U);
    msg.setSourceEntity(155U);
    msg.setDestination(42844U);
    msg.setDestinationEntity(234U);
    msg.duration = 19405U;
    msg.custom.assign("URUJCUCGGIFSTXXVVVJO");

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
    msg.setTimeStamp(0.525239644956);
    msg.setSource(3572U);
    msg.setSourceEntity(185U);
    msg.setDestination(21987U);
    msg.setDestinationEntity(29U);
    msg.duration = 49121U;
    msg.custom.assign("HQWRHWGKNYYUCFLZLGNNIAFUBYSNXLJBJSCTVBIQIUFINZQZLOOCPPEYQDJGDHZPJJTSOMQKSXHAVRZWAHJOHKOBSQJVIXNAHAZJPZBEGOVLODXBYTPMUMCFWITZYMEFKNMIIWFZWEJDIWNVAFGOVKXLARDUZXGTLVTMUHRSUBEQCLUTSWKDRXXEMPEATWFTCYMSHXDIBQLKPCRLAAYMJPRQKQNFECCDSRVKVRWKGDHFGYYONG");

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
    msg.setTimeStamp(0.310181303739);
    msg.setSource(49873U);
    msg.setSourceEntity(187U);
    msg.setDestination(34918U);
    msg.setDestinationEntity(178U);
    msg.duration = 63544U;
    msg.custom.assign("PKBNEZFOPLDXDOOEUGQSHEWGIUCJXXAHBIMJCXIFFSBMKINNANWILPYTUMDYXYDRSUNNBTUHHVWXKMJLXYEZQDZKOOPAZMYLVKAQAZJFERWPSLRFOKFPMQXNXHZGWDEYDGKQDTUVPKOYICVTWUYJNPREQZGQCIVMJJAEAGMWBIZRLKASHKBJWUFBR");

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
    msg.setTimeStamp(0.613693902302);
    msg.setSource(3426U);
    msg.setSourceEntity(5U);
    msg.setDestination(9972U);
    msg.setDestinationEntity(180U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.365034056872;
    tmp_msg_0.speed_units = 104U;
    msg.control.set(tmp_msg_0);
    msg.duration = 29254U;
    msg.custom.assign("UZYRTNHLHJWYXDO");

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
    msg.setTimeStamp(0.795725651537);
    msg.setSource(64743U);
    msg.setSourceEntity(89U);
    msg.setDestination(35029U);
    msg.setDestinationEntity(134U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.283863698355;
    msg.control.set(tmp_msg_0);
    msg.duration = 44656U;
    msg.custom.assign("WONLZZNPMQUVRBDVNPVKODGEHYUHDMLXKHPARYZMGSQICYZKBZJUNVIMRTUWILPOXPTQVOZHNUYKFJNSUJQKIELACGYQMSCVTPYEGAFGNOEWMCBSBTWFLQBDKLPLRMCFDCJOHZPRUSEPAFZCSXCHBWIIVCJXXGTWJIWBMRSZNJFYUHOEOTNIFRHIQBAGVAGJEK");

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
    msg.setTimeStamp(0.0417590644988);
    msg.setSource(53875U);
    msg.setSourceEntity(35U);
    msg.setDestination(58469U);
    msg.setDestinationEntity(158U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.847931569322;
    msg.control.set(tmp_msg_0);
    msg.duration = 40763U;
    msg.custom.assign("JPKXKTVIAIDLCYTY");

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
    msg.setTimeStamp(0.68181583344);
    msg.setSource(12870U);
    msg.setSourceEntity(225U);
    msg.setDestination(13562U);
    msg.setDestinationEntity(73U);
    msg.timeout = 2974U;
    msg.lat = 0.654698094747;
    msg.lon = 0.763163888303;
    msg.z = 0.509272969105;
    msg.z_units = 211U;
    msg.speed = 0.41230858938;
    msg.speed_units = 222U;
    msg.bearing = 0.630740537471;
    msg.cross_angle = 0.298407103174;
    msg.width = 0.325401016938;
    msg.length = 0.307296085073;
    msg.hstep = 0.67917838197;
    msg.coff = 132U;
    msg.alternation = 25U;
    msg.flags = 142U;
    msg.custom.assign("GDPKCKMNZCXQERHNFMWVNQBCKRPOYOOEWYIAXBVYASNFVUMVKMGBQXMIIFJNIDYPEFXRQXTR");

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
    msg.setTimeStamp(0.0567477227533);
    msg.setSource(14370U);
    msg.setSourceEntity(152U);
    msg.setDestination(12168U);
    msg.setDestinationEntity(70U);
    msg.timeout = 57439U;
    msg.lat = 0.241323888684;
    msg.lon = 0.244373294821;
    msg.z = 0.0985131244791;
    msg.z_units = 89U;
    msg.speed = 0.517937805253;
    msg.speed_units = 210U;
    msg.bearing = 0.933233908804;
    msg.cross_angle = 0.0126218951311;
    msg.width = 0.989400515612;
    msg.length = 0.761912908894;
    msg.hstep = 0.0272947361454;
    msg.coff = 154U;
    msg.alternation = 1U;
    msg.flags = 127U;
    msg.custom.assign("POHFCFPVCOEBJNNW");

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
    msg.setTimeStamp(0.246394648179);
    msg.setSource(13465U);
    msg.setSourceEntity(28U);
    msg.setDestination(22166U);
    msg.setDestinationEntity(192U);
    msg.timeout = 52373U;
    msg.lat = 0.0510522989646;
    msg.lon = 0.221382277217;
    msg.z = 0.281117653402;
    msg.z_units = 246U;
    msg.speed = 0.597148368628;
    msg.speed_units = 122U;
    msg.bearing = 0.984172012358;
    msg.cross_angle = 0.577776070757;
    msg.width = 0.976588381913;
    msg.length = 0.404699943441;
    msg.hstep = 0.557478404701;
    msg.coff = 154U;
    msg.alternation = 25U;
    msg.flags = 155U;
    msg.custom.assign("RYLTDIWYJGJLGUNMWFQKRVBTNLAOCXHYTIETSDLPMKUFTYYFYKTOGHWSXCMBPJWAFQMFXNALAXDULVPQSRCBLUHLXIJOSQUDYCZTHEUEYZKPOBEPICGEESWNSCEQFAVEKAOJVNNQIQDISCGPWNDOURGHXTPVEMOSFHTVDIOGRBSMQFRWVHWXMZHVWNYJZFBLJACOEIKZUVYQLIGJARN");

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
    msg.setTimeStamp(0.38791411259);
    msg.setSource(13856U);
    msg.setSourceEntity(228U);
    msg.setDestination(49116U);
    msg.setDestinationEntity(76U);
    msg.timeout = 44760U;
    msg.lat = 0.395568397731;
    msg.lon = 0.163533338623;
    msg.z = 0.0934778580829;
    msg.z_units = 27U;
    msg.speed = 0.599899532467;
    msg.speed_units = 209U;
    msg.custom.assign("JAULHWFDNUTMAPEIXONTYNZUCVXMIGCEBQSSHZBUMXDLYQKPFZLVZUPMSHAYGXHFCDGIBKUCCXERCZOQHIJUIDAWSVXLRRTQYJXVGLAHJRMWKBVOJOTRMECJWCARNOHDPAKAVEXGEWKFUOTJDLXPVXOKZSQQLOESIGEMYZOWKURVMUABLZZDQGJT");

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
    msg.setTimeStamp(0.95178313758);
    msg.setSource(55941U);
    msg.setSourceEntity(161U);
    msg.setDestination(40197U);
    msg.setDestinationEntity(163U);
    msg.timeout = 54249U;
    msg.lat = 0.622646032816;
    msg.lon = 0.218969481201;
    msg.z = 0.509891623553;
    msg.z_units = 90U;
    msg.speed = 0.776801836149;
    msg.speed_units = 248U;
    msg.custom.assign("TRGVXMNIWOFFF");

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
    msg.setTimeStamp(0.298767321778);
    msg.setSource(56574U);
    msg.setSourceEntity(96U);
    msg.setDestination(7158U);
    msg.setDestinationEntity(179U);
    msg.timeout = 34765U;
    msg.lat = 0.879323513385;
    msg.lon = 0.212001744319;
    msg.z = 0.114999793328;
    msg.z_units = 221U;
    msg.speed = 0.406727624197;
    msg.speed_units = 42U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.384407116846;
    tmp_msg_0.y = 0.0813598826062;
    tmp_msg_0.z = 0.813571148428;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YJJOLRBEIPYFMFYXVTEIWOJGIZNACBHGAHXXECLWVSGMIWGILBYREWKZEROCPCQOMVQCSVNGOZJECFTVTNTJPNRBHMPNNQNAKWUEGEAFKZQBPVRKMMD");

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
    msg.setTimeStamp(0.133200231131);
    msg.setSource(53564U);
    msg.setSourceEntity(38U);
    msg.setDestination(32939U);
    msg.setDestinationEntity(62U);
    msg.x = 0.322489281739;
    msg.y = 0.813629781832;
    msg.z = 0.116366328651;

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
    msg.setTimeStamp(0.0442324640331);
    msg.setSource(44610U);
    msg.setSourceEntity(235U);
    msg.setDestination(56151U);
    msg.setDestinationEntity(50U);
    msg.x = 0.184749252833;
    msg.y = 0.145363347847;
    msg.z = 0.336476356225;

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
    msg.setTimeStamp(0.382663080361);
    msg.setSource(51974U);
    msg.setSourceEntity(104U);
    msg.setDestination(62831U);
    msg.setDestinationEntity(130U);
    msg.x = 0.762354806134;
    msg.y = 0.27407686931;
    msg.z = 0.358265691084;

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
    msg.setTimeStamp(0.669368484126);
    msg.setSource(27729U);
    msg.setSourceEntity(102U);
    msg.setDestination(8430U);
    msg.setDestinationEntity(220U);
    msg.timeout = 8251U;
    msg.lat = 0.744831634252;
    msg.lon = 0.768975494035;
    msg.z = 0.316646600754;
    msg.z_units = 19U;
    msg.amplitude = 0.867629082928;
    msg.pitch = 0.291439392688;
    msg.speed = 0.3566719417;
    msg.speed_units = 248U;
    msg.custom.assign("JDKJUZYFUDKYOTYCDGKNPQEBWREFPNIEUJIIVFTISNNEBFWRUOFXWSDGNRVBZZNBUQCWYDUPLMSRWGZBGINDVHYCAVWDMTSOFYRPSMICOUHQPAXXDLDTEJM");

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
    msg.setTimeStamp(0.689040392401);
    msg.setSource(11852U);
    msg.setSourceEntity(211U);
    msg.setDestination(12898U);
    msg.setDestinationEntity(8U);
    msg.timeout = 35828U;
    msg.lat = 0.649086494548;
    msg.lon = 0.113863930617;
    msg.z = 0.652626428741;
    msg.z_units = 10U;
    msg.amplitude = 0.729457182488;
    msg.pitch = 0.9039032449;
    msg.speed = 0.769883675907;
    msg.speed_units = 213U;
    msg.custom.assign("DVDEHZAMQIXRYPRFEDRXZOIOWUYWTGRJBMMGMCFKXWCPVMEJGWQBGKXCNPBTGKSEHJTXHIKLLIGHZVISDYWVOLNQLPFEVSCKLMQKDCDJHTUTAQO");

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
    msg.setTimeStamp(0.0864876059195);
    msg.setSource(52233U);
    msg.setSourceEntity(65U);
    msg.setDestination(64448U);
    msg.setDestinationEntity(241U);
    msg.timeout = 16608U;
    msg.lat = 0.389267199026;
    msg.lon = 0.787287637965;
    msg.z = 0.241798628454;
    msg.z_units = 124U;
    msg.amplitude = 0.255668917994;
    msg.pitch = 0.214286730168;
    msg.speed = 0.636147894062;
    msg.speed_units = 154U;
    msg.custom.assign("PRBQEFBBVTJKVQAYMMZTEJVFHUDDSAVXNWMYCWOPM");

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
    msg.setTimeStamp(0.315853085115);
    msg.setSource(34559U);
    msg.setSourceEntity(235U);
    msg.setDestination(65083U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.912823350055);
    msg.setSource(21317U);
    msg.setSourceEntity(59U);
    msg.setDestination(35562U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.866953207683);
    msg.setSource(24439U);
    msg.setSourceEntity(142U);
    msg.setDestination(17115U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.678357221025);
    msg.setSource(33003U);
    msg.setSourceEntity(109U);
    msg.setDestination(21292U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.941884171425;
    msg.lon = 0.95332670434;
    msg.z = 0.100760476396;
    msg.z_units = 18U;
    msg.radius = 0.0477790533408;
    msg.duration = 19543U;
    msg.speed = 0.427228537407;
    msg.speed_units = 189U;
    msg.custom.assign("MOWHHIEISQNQTVVVWNAAVSQBYVBJPVCXUSPABSKLRKTCACNULFEIZSEPDEMLTEKSZZBRGANRUZJMOLLBXAGPPRTYHHGGIMOQWJQYHUCTWGXAJYVEDFOPBPOOIYGVZNWJETMYGJJNQKEWQFZAYPMKCUKOCLMPISFTSQXHKMFRUXKRZYVSOVCRMJUIZBOLDITUJQEAEBWNHRDDZIRWXXAFDXCGBKFUDDWDHCLWJZHDFLN");

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
    msg.setTimeStamp(0.872506158899);
    msg.setSource(13725U);
    msg.setSourceEntity(130U);
    msg.setDestination(1289U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.554699655617;
    msg.lon = 0.9343775754;
    msg.z = 0.676822256916;
    msg.z_units = 194U;
    msg.radius = 0.296100104956;
    msg.duration = 55952U;
    msg.speed = 0.0618664224038;
    msg.speed_units = 130U;
    msg.custom.assign("AAEAGVVWEGFLAKSVCPUUJDUJBLPBEVCEPFGEXJKGKCNEYFWXSAZUWQTRZTP");

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
    msg.setTimeStamp(0.122762275126);
    msg.setSource(60988U);
    msg.setSourceEntity(114U);
    msg.setDestination(21710U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.481858458888;
    msg.lon = 0.163456100038;
    msg.z = 0.318688457602;
    msg.z_units = 140U;
    msg.radius = 0.300095920017;
    msg.duration = 33309U;
    msg.speed = 0.864739413673;
    msg.speed_units = 241U;
    msg.custom.assign("ZSLLLBZRREOZCKDSLWXMTUXXOTQBV");

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
    msg.setTimeStamp(0.719439136699);
    msg.setSource(739U);
    msg.setSourceEntity(44U);
    msg.setDestination(58520U);
    msg.setDestinationEntity(248U);
    msg.timeout = 39825U;
    msg.flags = 241U;
    msg.lat = 0.703274688373;
    msg.lon = 0.697751553922;
    msg.start_z = 0.641636947672;
    msg.start_z_units = 111U;
    msg.end_z = 0.234308719083;
    msg.end_z_units = 87U;
    msg.radius = 0.248083397727;
    msg.speed = 0.712876361653;
    msg.speed_units = 14U;
    msg.custom.assign("AOYRTNEDOEUFKMVXNYTWAHUXYVRSAIESJLCPECERFDZTMRJAWRFBJTFCDGCDMBPCEUFAPMGVRITAHPQVEQOO");

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
    msg.setTimeStamp(0.723727363279);
    msg.setSource(37339U);
    msg.setSourceEntity(242U);
    msg.setDestination(36058U);
    msg.setDestinationEntity(247U);
    msg.timeout = 10878U;
    msg.flags = 252U;
    msg.lat = 0.329234936171;
    msg.lon = 0.161814523538;
    msg.start_z = 0.911119793281;
    msg.start_z_units = 225U;
    msg.end_z = 0.152147213265;
    msg.end_z_units = 64U;
    msg.radius = 0.32014568431;
    msg.speed = 0.630796491133;
    msg.speed_units = 89U;
    msg.custom.assign("UYCUYVIWGATCXDTACTYZMBNKJHOLQPXSGQGYPHMIZFYZSWLVVYMTONDWEMRVLREOLRJHNKKFNBFJCOQDRPLXRAZGJPHPBFIWOTGASVYLKXPGKOIZUPOUDLSCQUUEGMJETGMIKRJDAEKNFJWBCBSCNSJUODBIQBXJWZUSSIFTQWO");

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
    msg.setTimeStamp(0.0802029697597);
    msg.setSource(60412U);
    msg.setSourceEntity(153U);
    msg.setDestination(41036U);
    msg.setDestinationEntity(124U);
    msg.timeout = 52105U;
    msg.flags = 154U;
    msg.lat = 0.201897772672;
    msg.lon = 0.910223833727;
    msg.start_z = 0.276699672621;
    msg.start_z_units = 206U;
    msg.end_z = 0.238314474091;
    msg.end_z_units = 211U;
    msg.radius = 0.0694815874135;
    msg.speed = 0.0763723699589;
    msg.speed_units = 135U;
    msg.custom.assign("KELNMDIKRJNUSIIWCTMUEQWZNARPYKATTYCEHFLVAHJPDAJMUOTSAKOLAKEFVCDLZT");

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
    msg.setTimeStamp(0.0176333167301);
    msg.setSource(45767U);
    msg.setSourceEntity(115U);
    msg.setDestination(50570U);
    msg.setDestinationEntity(236U);
    msg.timeout = 26170U;
    msg.lat = 0.0368179122896;
    msg.lon = 0.188363964453;
    msg.z = 0.518933123084;
    msg.z_units = 191U;
    msg.speed = 0.730664561303;
    msg.speed_units = 79U;
    msg.custom.assign("AWGKINBALLEMOAYTYHBUOJJQLYUZAGQWRHKKGWLZSFPROLBLNHLVDWHSZOVSBWPGUSJWHJCCIKZOILRVDCYPVNOFYCFFAKIUSRAVQTDZETHAXNROKDMLEQNCGMFMYKIRESTUGJXTOYEQVDRUEITNSWJVYIYJJUFATQURHPQXLDBEMXDIDVWHBITBERFKZQMPDBMFXEPPPTZAVPGCWHZQFS");

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
    msg.setTimeStamp(0.296415837378);
    msg.setSource(765U);
    msg.setSourceEntity(144U);
    msg.setDestination(57809U);
    msg.setDestinationEntity(164U);
    msg.timeout = 54690U;
    msg.lat = 0.890876089828;
    msg.lon = 0.329226354731;
    msg.z = 0.414217676131;
    msg.z_units = 41U;
    msg.speed = 0.957395648473;
    msg.speed_units = 243U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.434528358686;
    tmp_msg_0.y = 0.733914636247;
    tmp_msg_0.z = 0.260427084675;
    tmp_msg_0.t = 0.56282487472;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WXWLFMETVYQHTIVIJTPLLBQYANQKUYFNWGGYFMSZOHKRVEIAEEQNXGBWFJFNBIBMPGDRUDHKLKDXFFXFDLAYQWJMEXPQSUD");

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
    msg.setTimeStamp(0.504247338622);
    msg.setSource(54582U);
    msg.setSourceEntity(167U);
    msg.setDestination(58383U);
    msg.setDestinationEntity(156U);
    msg.timeout = 717U;
    msg.lat = 0.340866465323;
    msg.lon = 0.832758904983;
    msg.z = 0.224934608307;
    msg.z_units = 162U;
    msg.speed = 0.775779650513;
    msg.speed_units = 179U;
    msg.custom.assign("CMOONDDVYCIGVURPTKOXPOWHTPJHSCAEIPRZYDOJQKYVUFLLJUEUEHKYR");

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
    msg.setTimeStamp(0.913271439757);
    msg.setSource(17390U);
    msg.setSourceEntity(177U);
    msg.setDestination(27697U);
    msg.setDestinationEntity(215U);
    msg.x = 0.804002702552;
    msg.y = 0.944750015886;
    msg.z = 0.0227510864979;
    msg.t = 0.00329687633821;

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
    msg.setTimeStamp(0.68152502365);
    msg.setSource(2407U);
    msg.setSourceEntity(112U);
    msg.setDestination(45580U);
    msg.setDestinationEntity(243U);
    msg.x = 0.763196261471;
    msg.y = 0.489781868413;
    msg.z = 0.313807672674;
    msg.t = 0.618268085198;

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
    msg.setTimeStamp(0.554953201319);
    msg.setSource(28253U);
    msg.setSourceEntity(144U);
    msg.setDestination(9404U);
    msg.setDestinationEntity(43U);
    msg.x = 0.435230234085;
    msg.y = 0.604612067183;
    msg.z = 0.0471514874195;
    msg.t = 0.350535344255;

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
    msg.setTimeStamp(0.896464443571);
    msg.setSource(33116U);
    msg.setSourceEntity(122U);
    msg.setDestination(35906U);
    msg.setDestinationEntity(172U);
    msg.timeout = 5318U;
    msg.name.assign("ZABRQIAMKSCHREEXKFEJNQHPKHJJFTGOWHTVBLSLCWQEVCEEULFKDZQTOUYFVIMTTATVWSYNUPWVXLQXROYDCLJQBKDGTHANOLGGBKGEZZPXDOFROQKWZCNOMBYGVMEHOGMIULUGRNBRRSCYPSUUDNWFHNXBNZDQXWICFMZTJXWCZJHXTLRJNVYDOPCODHFEMBCYUJISHNKFSGMBLPFSKDVIYPPYRTSEYKIMMJIAWRQUSJXVUPAIXLAZQIAZ");
    msg.custom.assign("FGGSKCPKQCBYXXSYUYIEQJRXGMQZOCLQHYKRDAFTUITDHYTRAQWGMVYFVTAWCJDXJFFEWXBOFLMBQPNKBCVSVKWXMWPTHUVZJHKQXNJAXNRTMPDWKOLESUQCCQDEORANPVERZTUNNAADKZVMCUHSTZHLJWPGSALOIYLFBBZUEGVMLSRVVLFKDLDXIYONJQNDHGPYTJMMRAIPOIROIO");

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
    msg.setTimeStamp(0.345847473486);
    msg.setSource(8290U);
    msg.setSourceEntity(67U);
    msg.setDestination(50143U);
    msg.setDestinationEntity(25U);
    msg.timeout = 40353U;
    msg.name.assign("DWMXWMPFRVQFAZKIZXKCIYHOKBLBOASFLZBJVBWJGQZXCPDAUGIPDICNBNOCPQHHLTAUUFLSFDSTERHJRNTUCNLDASQRSNVHLTMZXRRSCXSALITKEQZMNSIOYGUJ");
    msg.custom.assign("DUPWGTGCKEHDMVDPFZYBXGSDQWXMHHKLJYXNQKJUACCTIADRJHUZIBEBNYODKXBLUZWPGOPYKZYCXMDSMRWOTQEFNRWOGITONLWJRHGMMCIZFTOYFYSFALXLGYEAPEPIZOSARRTDXIPUQLAMCETAQ");

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
    msg.setTimeStamp(0.160227988961);
    msg.setSource(64954U);
    msg.setSourceEntity(13U);
    msg.setDestination(15126U);
    msg.setDestinationEntity(45U);
    msg.timeout = 53072U;
    msg.name.assign("ZIDICBFRCAJHGGBQGWQHPVZDGMEXUYUBERCEKZZOATVIUVERRSLJBKGDMUJTVWJXWPFLHVTJIJCDSNSJXQIZPDIUUWQZEDRXLTIORYHMGYTKNVAYRCICQNCKZTSWXKMYOPSLVEQAHEWPFKFESJDWOQCBXMWJZGWVNZXMRFF");
    msg.custom.assign("WNBUDLCZFNJZAEKCYQCKUJUTJSKFWMFGGFLYGABQQNITIFUYQZWONTESKJCKDGPSWNVUDXMAQBRGPXPZBUMVRAKHTKSIGXEHAPKYLYQLIOIMJLHLVYDXFRIOPQNGQHMOJSAZKNHYRHVBFVUXMOVXTAGFXMWMLEWZHHUVAAWDSUZEXEOLLNLVJDXQCBRCCTYTORTRVWPDJRHOTJESADCXZCESSZTIEPZWIBPMFPWUMJIBSNNCHYRGVDOYBKBGF");

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
    msg.setTimeStamp(0.716515164532);
    msg.setSource(39657U);
    msg.setSourceEntity(2U);
    msg.setDestination(27054U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.271918308921;
    msg.lon = 0.942494707056;
    msg.z = 0.215506347517;
    msg.z_units = 167U;
    msg.speed = 0.844054955854;
    msg.speed_units = 68U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39414U;
    tmp_msg_0.off_x = 0.385369568818;
    tmp_msg_0.off_y = 0.624785698386;
    tmp_msg_0.off_z = 0.185984710797;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0823821006872;
    msg.custom.assign("MPSFRTOJUJVSJGYYHYPBTVAJYMDNXFPJOUXWQULMG");

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
    msg.setTimeStamp(0.802675947805);
    msg.setSource(52273U);
    msg.setSourceEntity(111U);
    msg.setDestination(37318U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.234306529733;
    msg.lon = 0.608078173669;
    msg.z = 0.612971666892;
    msg.z_units = 70U;
    msg.speed = 0.843602564506;
    msg.speed_units = 176U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.158588317428;
    tmp_msg_0.y = 0.284901418745;
    tmp_msg_0.z = 0.429618902032;
    tmp_msg_0.t = 0.438883290319;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 64174U;
    tmp_msg_1.off_x = 0.0425911964722;
    tmp_msg_1.off_y = 0.381768772434;
    tmp_msg_1.off_z = 0.946245729677;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.487200565714;
    msg.custom.assign("OWUVJTZIPNXCILRLMKKFHNJESZDYFTIQTCHMHNDLOXCPMTRSJLPVFRCISXUNABLNGVFKQAQZKRJBOYDROUWJUZBEROLWROHUPMTKMVEEDXAVTVGFQAJSAZYPPXUPETHTGUCFYZIQHRMAOVENQVKRJKEGVUXMOSWGEOBYCSBJBXDFNISHGQYIVBKNAWSLBDWTAFOPILZGWHQJZCDQKAGBMWKJSGNGPXHDANZILFCRQXSUYCMIUXPYTFZMDYLYHW");

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
    msg.setTimeStamp(0.431554310509);
    msg.setSource(54069U);
    msg.setSourceEntity(188U);
    msg.setDestination(10509U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.901354988378;
    msg.lon = 0.607596530596;
    msg.z = 0.326505698011;
    msg.z_units = 96U;
    msg.speed = 0.507844647784;
    msg.speed_units = 135U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.627129882412;
    tmp_msg_0.y = 0.791937936349;
    tmp_msg_0.z = 0.683628438345;
    tmp_msg_0.t = 0.452523014141;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 64968U;
    tmp_msg_1.off_x = 0.0812722830649;
    tmp_msg_1.off_y = 0.401308609164;
    tmp_msg_1.off_z = 0.482509434173;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.331246204499;
    msg.custom.assign("VBRJYGWEFVMHCQBVYAMGJMNCFWGDLEOZXHWEBZMAPSDDBVQMLYROWGINAKSANYLROZTLDJZUYEGSHZNPIPMTNEKJICKLOVTEICXVCTVFRNTFTWVZKCEAGKBNOVMAOOXTNUBHSUXSKNLEKSVHJRUFQBUDKXZFQWDPYGPXHLWWCZAIDXOKURPIWJRGZIPQLJHWAEQPYLODGTFUSRFUFAIQMYCBLIXREGTQIMQCXDDFNRYSCQZBUPJM");

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
    msg.setTimeStamp(0.259879967175);
    msg.setSource(49831U);
    msg.setSourceEntity(150U);
    msg.setDestination(876U);
    msg.setDestinationEntity(105U);
    msg.vid = 36259U;
    msg.off_x = 0.0631605496663;
    msg.off_y = 0.607804028017;
    msg.off_z = 0.516056434459;

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
    msg.setTimeStamp(0.119481622738);
    msg.setSource(22884U);
    msg.setSourceEntity(190U);
    msg.setDestination(4092U);
    msg.setDestinationEntity(110U);
    msg.vid = 23121U;
    msg.off_x = 0.800322482954;
    msg.off_y = 0.388290093897;
    msg.off_z = 0.888122737079;

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
    msg.setTimeStamp(0.625994943298);
    msg.setSource(18829U);
    msg.setSourceEntity(31U);
    msg.setDestination(22584U);
    msg.setDestinationEntity(145U);
    msg.vid = 37950U;
    msg.off_x = 0.294093800304;
    msg.off_y = 0.293695469252;
    msg.off_z = 0.24317645326;

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
    msg.setTimeStamp(0.562082861306);
    msg.setSource(13995U);
    msg.setSourceEntity(132U);
    msg.setDestination(30405U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.526246874906);
    msg.setSource(50601U);
    msg.setSourceEntity(172U);
    msg.setDestination(60388U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.46288987746);
    msg.setSource(42745U);
    msg.setSourceEntity(13U);
    msg.setDestination(8480U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.220772429052);
    msg.setSource(27578U);
    msg.setSourceEntity(173U);
    msg.setDestination(50309U);
    msg.setDestinationEntity(30U);
    msg.mid = 23971U;

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
    msg.setTimeStamp(0.962478475974);
    msg.setSource(16451U);
    msg.setSourceEntity(244U);
    msg.setDestination(51459U);
    msg.setDestinationEntity(96U);
    msg.mid = 34482U;

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
    msg.setTimeStamp(0.0349946242341);
    msg.setSource(54632U);
    msg.setSourceEntity(5U);
    msg.setDestination(26537U);
    msg.setDestinationEntity(51U);
    msg.mid = 36622U;

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
    msg.setTimeStamp(0.0610792608591);
    msg.setSource(34716U);
    msg.setSourceEntity(29U);
    msg.setDestination(8797U);
    msg.setDestinationEntity(214U);
    msg.state = 246U;
    msg.eta = 61678U;
    msg.info.assign("ZRXQDEAFPSBHJDVFLPMUVXBDPRCJHYQNBIMARVOOVCMANPELQWUGPGPDJUZWSIWCCNLMEOPWMRKGPMQCRCOHRXESQDWUZIIYEAYHNHZTTODOJPBNGVFWLYEUTOYDIZAZMQGBQAJURIBZHQXN");

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
    msg.setTimeStamp(0.477380752284);
    msg.setSource(60044U);
    msg.setSourceEntity(93U);
    msg.setDestination(46544U);
    msg.setDestinationEntity(207U);
    msg.state = 51U;
    msg.eta = 6803U;
    msg.info.assign("FERQHXSQSUFVKJAKEPWNZCVMXPJMVRYKGRTPQFOFTUNKOCNRENHCSCXGHMFQVTPFQPTIGBDEYMLYGNGUVJSACASBWDENAAIPUFJVOJDAYWNHEVRHTGIZXPZZOJHLPSYUDMHOAYBBMCOSICZAXWHAUUWQBLYVBJGQLILUZIMWKWVIDBBQLRMDKTWXLYJNZF");

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
    msg.setTimeStamp(0.927898526331);
    msg.setSource(44978U);
    msg.setSourceEntity(172U);
    msg.setDestination(13542U);
    msg.setDestinationEntity(143U);
    msg.state = 148U;
    msg.eta = 31076U;
    msg.info.assign("WEQINDLVDGSLETSBZXCMKYKLTFAHZXXWRYVGBASMZEGMQYNCWWXHYKCCBIONGCPIJXZJT");

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
    msg.setTimeStamp(0.0811829073489);
    msg.setSource(42890U);
    msg.setSourceEntity(96U);
    msg.setDestination(41756U);
    msg.setDestinationEntity(160U);
    msg.system = 19908U;
    msg.duration = 50374U;
    msg.speed = 0.365684177734;
    msg.speed_units = 94U;
    msg.x = 0.355997132544;
    msg.y = 0.499766592845;
    msg.z = 0.425633032248;
    msg.z_units = 164U;

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
    msg.setTimeStamp(0.837291983384);
    msg.setSource(22574U);
    msg.setSourceEntity(152U);
    msg.setDestination(59677U);
    msg.setDestinationEntity(74U);
    msg.system = 10220U;
    msg.duration = 26507U;
    msg.speed = 0.490695822494;
    msg.speed_units = 149U;
    msg.x = 0.879775401494;
    msg.y = 0.378789172376;
    msg.z = 0.558130434122;
    msg.z_units = 226U;

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
    msg.setTimeStamp(0.33761229305);
    msg.setSource(2041U);
    msg.setSourceEntity(46U);
    msg.setDestination(6997U);
    msg.setDestinationEntity(68U);
    msg.system = 7256U;
    msg.duration = 735U;
    msg.speed = 0.0955224745141;
    msg.speed_units = 95U;
    msg.x = 0.0644498052647;
    msg.y = 0.41348387677;
    msg.z = 0.0191914833929;
    msg.z_units = 121U;

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
    msg.setTimeStamp(0.205858616516);
    msg.setSource(5738U);
    msg.setSourceEntity(120U);
    msg.setDestination(21101U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.307668554441;
    msg.lon = 0.985293193152;
    msg.speed = 0.873410451438;
    msg.speed_units = 128U;
    msg.duration = 47245U;
    msg.sys_a = 35006U;
    msg.sys_b = 4369U;
    msg.move_threshold = 0.260122555416;

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
    msg.setTimeStamp(0.690703525689);
    msg.setSource(11153U);
    msg.setSourceEntity(27U);
    msg.setDestination(17499U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.825732289416;
    msg.lon = 0.596875886588;
    msg.speed = 0.386478495175;
    msg.speed_units = 137U;
    msg.duration = 34653U;
    msg.sys_a = 20729U;
    msg.sys_b = 20452U;
    msg.move_threshold = 0.759495421305;

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
    msg.setTimeStamp(0.93938095729);
    msg.setSource(30625U);
    msg.setSourceEntity(196U);
    msg.setDestination(46370U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.688162562165;
    msg.lon = 0.119263620108;
    msg.speed = 0.0625986758964;
    msg.speed_units = 160U;
    msg.duration = 8463U;
    msg.sys_a = 53076U;
    msg.sys_b = 33763U;
    msg.move_threshold = 0.830382742149;

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
    msg.setTimeStamp(0.826797420139);
    msg.setSource(50196U);
    msg.setSourceEntity(32U);
    msg.setDestination(59533U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.45554617713;
    msg.lon = 0.50156154634;
    msg.z = 0.124270048164;
    msg.z_units = 119U;
    msg.speed = 0.217955142359;
    msg.speed_units = 120U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.700080026624;
    tmp_msg_0.lon = 0.945722082664;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DDMRNIVCRCLVCKIASFCXYBCMWXTLDGJSKL");

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
    msg.setTimeStamp(0.666970199406);
    msg.setSource(59517U);
    msg.setSourceEntity(184U);
    msg.setDestination(16854U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.328182412489;
    msg.lon = 0.6542531209;
    msg.z = 0.563276731211;
    msg.z_units = 6U;
    msg.speed = 0.328810307639;
    msg.speed_units = 249U;
    msg.custom.assign("REZMNBYSQULOGPLPUTJFPUFOIJMMWCWNMSACAEMXOEXWEPHRZRIAEVUKJGRNABJGSXCLAHMMPETTOXVQVZLTHHIXOMUZUBRBYSUCAAVSIGHGIDNKOCGLJJTTHLSVKVUHAFDBBJQSLBXCLRCDPQUZBDIGMOFQIDHRDDJCQPWFXKZQWDOBYWSNWVZZDSBHNKRJYYYCPCGKETKGFGLJEWVZPDYXITVWYNPOWTXMFVKSAFZQINHOQFUETEXKK");

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
    msg.setTimeStamp(0.293004327);
    msg.setSource(37007U);
    msg.setSourceEntity(226U);
    msg.setDestination(43285U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.680229157001;
    msg.lon = 0.216057395117;
    msg.z = 0.769864684926;
    msg.z_units = 17U;
    msg.speed = 0.403949253602;
    msg.speed_units = 78U;
    msg.custom.assign("OEZAEMWXPNBTFTSYIMYYDDCISVDMOJEFNGQCQABRJSONTLMJRRUTLQJBKZPSGMOKPCZXAWTRWBWBAHNZXIBXXKUCRSLUTVSDWPXPUHIGYAAZAWQPBHQLDWRGKEOENVFVMLTJAYFCCQTOPYCDSGRGEIQCTLDJRZVEJQNEFKXAFXBMONNEVTMEOKDGCPAUONFRFNDCKWVWRZOUU");

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
    msg.setTimeStamp(0.266791157349);
    msg.setSource(41928U);
    msg.setSourceEntity(49U);
    msg.setDestination(34113U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.715399913448;
    msg.lon = 0.614484290495;

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
    msg.setTimeStamp(0.240932457215);
    msg.setSource(31686U);
    msg.setSourceEntity(188U);
    msg.setDestination(35533U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.641539917753;
    msg.lon = 0.368665068506;

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
    msg.setTimeStamp(0.442988289389);
    msg.setSource(38117U);
    msg.setSourceEntity(215U);
    msg.setDestination(63756U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.208510196627;
    msg.lon = 0.956292116511;

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
    msg.setTimeStamp(0.11224510356);
    msg.setSource(60213U);
    msg.setSourceEntity(115U);
    msg.setDestination(9725U);
    msg.setDestinationEntity(204U);
    msg.timeout = 13062U;
    msg.lat = 0.644914551182;
    msg.lon = 0.461262059487;
    msg.z = 0.462008954177;
    msg.z_units = 105U;
    msg.pitch = 0.526943195953;
    msg.amplitude = 0.551845529748;
    msg.duration = 4133U;
    msg.speed = 0.917269375088;
    msg.speed_units = 141U;
    msg.radius = 0.225341145449;
    msg.direction = 10U;
    msg.custom.assign("LSMTZNSBYTRCFAFDIZZBDQYNDHQKMJWKMKABIOVXWPJXOLPORBNYLUVGOQWIVDBJAPCQOAPLDXJAYTUNTFBVXKRIXKGHCCATNFMFMMPTBMWPHULIHWABPEFROEFZAXOGEVUYSCRKDCGYZ");

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
    msg.setTimeStamp(0.894002114382);
    msg.setSource(56403U);
    msg.setSourceEntity(185U);
    msg.setDestination(19734U);
    msg.setDestinationEntity(208U);
    msg.timeout = 54532U;
    msg.lat = 0.727252214453;
    msg.lon = 0.539512738806;
    msg.z = 0.908056341399;
    msg.z_units = 221U;
    msg.pitch = 0.397531868848;
    msg.amplitude = 0.278373457673;
    msg.duration = 60635U;
    msg.speed = 0.0696748902937;
    msg.speed_units = 43U;
    msg.radius = 0.741447675253;
    msg.direction = 9U;
    msg.custom.assign("HVQZVBNJKKHTBCWXDGRPOSCUZSQZIXNETTHWIDCFYLHYQKDPHTMYEZHDYUJUSSQRNAAQDZGQSBOGKVTKPIANUBIDOBXQNKZOVAXWFTNVELFIVXWCOJAGC");

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
    msg.setTimeStamp(0.396010484766);
    msg.setSource(37751U);
    msg.setSourceEntity(80U);
    msg.setDestination(43071U);
    msg.setDestinationEntity(46U);
    msg.timeout = 20125U;
    msg.lat = 0.291171165151;
    msg.lon = 0.474415528839;
    msg.z = 0.78377696705;
    msg.z_units = 61U;
    msg.pitch = 0.0600986236702;
    msg.amplitude = 0.0965094488091;
    msg.duration = 36003U;
    msg.speed = 0.105914875162;
    msg.speed_units = 12U;
    msg.radius = 0.834462062422;
    msg.direction = 233U;
    msg.custom.assign("RPTFPMHUYRJHQXALLTYBFEBHKNZMUTYBPFTACJWVYTSOURVXSRGBAVDEEOOXKDRBHVXQTCJLXLDOBYSRKJYHEQSGKAPFUJGTXVJWOZLJJNECINCLZQFNGMKTYHSLEQIGVFPJBFMNOZWBMX");

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
    msg.setTimeStamp(0.739283793757);
    msg.setSource(20447U);
    msg.setSourceEntity(252U);
    msg.setDestination(14917U);
    msg.setDestinationEntity(212U);
    msg.formation_name.assign("NOVPNCNCCBEANILOVOUHXARACSXUETULGYLHDLZREAIZBEYIATHFQFMHAXTBPQMTPPMFLSFTHBKSYMDTFVWUGDSVXYKKNZXQFVYGQPFYEFHZGJJDWIBHZBQEYIZGUZOZCNOERUJXQURBJIADWCQXLAMNAXEWVZOOUPKTXVRDJIOMEFJVWPNCRJIEKCDWRYKSLTSGUXKMHVPBPDTWRDIC");
    msg.reference_frame = 69U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42145U;
    tmp_msg_0.off_x = 0.630729273351;
    tmp_msg_0.off_y = 0.822677646221;
    tmp_msg_0.off_z = 0.604599717813;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NDXNNPYIYYLOPREIKWRNESCAQOWZVETYMWHUQHITCDZPSQLTBSBDSPLDFBEVYJBAPOVDMDJGCWZZICICALUQCROFFKVSCULSEGGV");

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
    msg.setTimeStamp(0.704360087083);
    msg.setSource(31270U);
    msg.setSourceEntity(127U);
    msg.setDestination(34184U);
    msg.setDestinationEntity(52U);
    msg.formation_name.assign("OJSQZKTWFFFZWWDVHWHDGPBSYCQKHLNOAIYNUDPGNRGCJTJQEYYWNOLPMOVMTCCNVTQXRCAVHXFMAYTLND");
    msg.reference_frame = 29U;
    msg.custom.assign("RFEDMKBMFXLIBSSQAQKVSZNHFALXJVFJWRVBQXXVASUIHSFGQMSEUMCBVSMWSKHMUFHNAPWJDDKDOQEKOPBOGELPTSENZTAFTNGUQQEQQENZCSKGWZDOUFAEOTRUIKMQZBFIRTCNJVLCWHGCJALTVPUZLHYHJVYAE");

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
    msg.setTimeStamp(0.236284164389);
    msg.setSource(42908U);
    msg.setSourceEntity(72U);
    msg.setDestination(19633U);
    msg.setDestinationEntity(45U);
    msg.formation_name.assign("FFGHLBYBTGZYVKUFPYDBACLXYQWBIFZYOIZPOPHHFHTMTWYPJMJIVLOSSESAVEMRCUCVKINYNTQOVCJOCKUQWXVDGQBKAJTTJBYVBNONUADNZSWWEHJUZZVMQAWUFPULTPRLSCTQQPIMWXGEKJXLGGIJPRMJL");
    msg.reference_frame = 152U;
    msg.custom.assign("PTIUXHDJAU");

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
    msg.setTimeStamp(0.280603268791);
    msg.setSource(12230U);
    msg.setSourceEntity(91U);
    msg.setDestination(11113U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("YVXTDYWGITVCUKMVEY");
    msg.formation_name.assign("FYVPMLAZXXFISOLPIGANQGJYPZFFJPLHJCQOCLUCALXEBSERDRZFIIVZROESWMWFLQHECNCOXDLBOETRUQPEKIHPLKTXDKVVUTDDGBVHQJDTFHFZI");
    msg.plan_id.assign("FMUCRNJMFMRZJSATQMFHXMEGEVZPLSTKVRH");
    msg.description.assign("CXBPGJGLJCRSXPTIXBWUJFOCSSBMAFTWLEBQKMAIEVPEZZMKMKNNXWSZGKMCVDIDCFCKVBMTKDCNIPYXVLHWKGPFLTHOSUEAOXITIRNLIZWGIXPMTFBYARRNLURYRHEVDMQHFHWCYODZQEEQWJJPYAQANUCUQLOHLUGFABFHLRBEOOKGQFNYSTWJUQHAOPQUIUXWSRWKKYRQGNZVRPDOVDNZITYHHDNATMXBXJSAJJFGDOYVCPG");
    msg.leader_speed = 0.414245896132;
    msg.leader_bank_lim = 0.179799572584;
    msg.pos_sim_err_lim = 0.908714384369;
    msg.pos_sim_err_wrn = 0.199343253487;
    msg.pos_sim_err_timeout = 13856U;
    msg.converg_max = 0.550539342838;
    msg.converg_timeout = 17724U;
    msg.comms_timeout = 27009U;
    msg.turb_lim = 0.61540351046;
    msg.custom.assign("YKPLPHXGMQQXGJEVJONOINSF");

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
    msg.setTimeStamp(0.221219728452);
    msg.setSource(50360U);
    msg.setSourceEntity(30U);
    msg.setDestination(54693U);
    msg.setDestinationEntity(165U);
    msg.group_name.assign("DPKLRRPSJKZEXVERTXPCYMMWQRJUJZNGIORGBOCFHPSCFQAOWIEHHXNJFFGLZMXKVVSVZLZHALXUMDDLTWUTFPMXULIECINBZXYJQALGYSYMPGJGOABZDEKFVYSYHWJAKSDPJHSILDFWIOBDVQBKCHTTHRQAHIWAUPLABGEFBJWDILDMQCXYNAPMSCYRQCTZWZUVAKVOSTBKKBQKEYURFETNMVGJUYUEXGGNRM");
    msg.formation_name.assign("LTYYWNPZMPXOONEZLQDSZMCAYIOEIQPFMECKKDADANRVDGLUBLEDDSPKXJEATNEK");
    msg.plan_id.assign("HJUUILYQJINDSLHMOAPGQGCDQYYWSEMQKXWCBXRNTSMENMLOVRTGRT");
    msg.description.assign("PCZPNTFEHUTPTTABCIEQGFMLTNLBXNIQZYSICJYEZUEDQMNOROODKCPG");
    msg.leader_speed = 0.570911891674;
    msg.leader_bank_lim = 0.492081692397;
    msg.pos_sim_err_lim = 0.724227178264;
    msg.pos_sim_err_wrn = 0.414522828466;
    msg.pos_sim_err_timeout = 36872U;
    msg.converg_max = 0.0293867257333;
    msg.converg_timeout = 61277U;
    msg.comms_timeout = 8842U;
    msg.turb_lim = 0.288692800344;
    msg.custom.assign("BXJMXAHVNFEAKEVGJFXHOEYKEKIRTLOAAXEASPESFMJQSWCOGCACSFOFZRBHVPPYLEPWFBVCWZGUGIBPVTJSUNFRGZDWWWBQMPHOOHGJLKBYRINIIJC");

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
    msg.setTimeStamp(0.871977437494);
    msg.setSource(26364U);
    msg.setSourceEntity(109U);
    msg.setDestination(19251U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("BUASMJEJSLMBTUVDYPJWOTIZESJNACESZLWIEOMIAKEHPAMBBKWQ");
    msg.formation_name.assign("JSRQKETHYEPABBZMGJXWLVCSYMIRSENCLDOURBWMZDGNFIURZLGWVCTCSFKALXIHWBNUONDQH");
    msg.plan_id.assign("XLJCMWSAINZNAVMQIWCUXPMBFKUWA");
    msg.description.assign("ESNRNDIJRGMPAQIUPLKUJKGLZUKNFCEYZYBDVRLBRAGYXTFKQKSFTXPGOQVCNHGHAVYCNOSCAIXNHZYLMLHWXIGAUSBV");
    msg.leader_speed = 0.968333917097;
    msg.leader_bank_lim = 0.10294863896;
    msg.pos_sim_err_lim = 0.296136205899;
    msg.pos_sim_err_wrn = 0.754555696891;
    msg.pos_sim_err_timeout = 952U;
    msg.converg_max = 0.815759361932;
    msg.converg_timeout = 24658U;
    msg.comms_timeout = 1462U;
    msg.turb_lim = 0.810474294014;
    msg.custom.assign("KZNGTDTDGXOREUZJDUCFBYPGYWSDSVOIGSKKRSBPFKPIQERPFNLFIMTYPVSQLNHCHZBAOFNDWYLYWQXHBUWHHMGZRUGEBDNVIOXMRISTGBMNNZIDOLVTCOKUOQVTADYCOFLCQINAQZEQWMHKRBRRHDNQBOGCAXEJWCWPYHYDAUTWPXLJVVFLWAKGZBTMLRJECUNXKZCGKFAOIJTFSZCLVVLMPPXESIYAUKHT");

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
    msg.setTimeStamp(0.218084731833);
    msg.setSource(54048U);
    msg.setSourceEntity(51U);
    msg.setDestination(743U);
    msg.setDestinationEntity(139U);
    msg.control_src = 16558U;
    msg.control_ent = 69U;
    msg.timeout = 0.230689277043;
    msg.loiter_radius = 0.783068434585;
    msg.altitude_interval = 0.65869343428;

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
    msg.setTimeStamp(0.978776244479);
    msg.setSource(999U);
    msg.setSourceEntity(219U);
    msg.setDestination(47769U);
    msg.setDestinationEntity(211U);
    msg.control_src = 49192U;
    msg.control_ent = 237U;
    msg.timeout = 0.358004702606;
    msg.loiter_radius = 0.310887026652;
    msg.altitude_interval = 0.589227576312;

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
    msg.setTimeStamp(0.510631702854);
    msg.setSource(28910U);
    msg.setSourceEntity(63U);
    msg.setDestination(61918U);
    msg.setDestinationEntity(178U);
    msg.control_src = 35337U;
    msg.control_ent = 108U;
    msg.timeout = 0.956971048117;
    msg.loiter_radius = 0.178045426862;
    msg.altitude_interval = 0.144023223916;

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
    msg.setTimeStamp(0.175432841343);
    msg.setSource(50564U);
    msg.setSourceEntity(106U);
    msg.setDestination(63154U);
    msg.setDestinationEntity(152U);
    msg.flags = 60U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.638542875713;
    tmp_msg_0.speed_units = 47U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.81327687266;
    tmp_msg_1.z_units = 142U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.257082892692;
    msg.lon = 0.434953066059;
    msg.radius = 0.155976775372;

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
    msg.setTimeStamp(0.981630708296);
    msg.setSource(44703U);
    msg.setSourceEntity(153U);
    msg.setDestination(31852U);
    msg.setDestinationEntity(229U);
    msg.flags = 227U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.500964749891;
    tmp_msg_0.speed_units = 66U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.230058205971;
    tmp_msg_1.z_units = 33U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.325601561745;
    msg.lon = 0.0466159186368;
    msg.radius = 0.265622839054;

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
    msg.setTimeStamp(0.629343627009);
    msg.setSource(43683U);
    msg.setSourceEntity(47U);
    msg.setDestination(17785U);
    msg.setDestinationEntity(27U);
    msg.flags = 141U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0377068618702;
    tmp_msg_0.speed_units = 210U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.161248360598;
    tmp_msg_1.z_units = 130U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.346597602949;
    msg.lon = 0.468746058166;
    msg.radius = 0.14506716741;

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
    msg.setTimeStamp(0.335435355192);
    msg.setSource(31824U);
    msg.setSourceEntity(184U);
    msg.setDestination(20747U);
    msg.setDestinationEntity(138U);
    msg.control_src = 15841U;
    msg.control_ent = 246U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 64U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0352414808128;
    tmp_tmp_msg_0_0.speed_units = 186U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.186895845539;
    tmp_tmp_msg_0_1.z_units = 73U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.319099111748;
    tmp_msg_0.lon = 0.0454207503255;
    tmp_msg_0.radius = 0.266109168318;
    msg.reference.set(tmp_msg_0);
    msg.state = 124U;
    msg.proximity = 14U;

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
    msg.setTimeStamp(0.300497232797);
    msg.setSource(20090U);
    msg.setSourceEntity(112U);
    msg.setDestination(41591U);
    msg.setDestinationEntity(238U);
    msg.control_src = 409U;
    msg.control_ent = 175U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 54U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.442797201328;
    tmp_tmp_msg_0_0.speed_units = 156U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.488179667031;
    tmp_tmp_msg_0_1.z_units = 222U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.389712295156;
    tmp_msg_0.lon = 0.6884179832;
    tmp_msg_0.radius = 0.0241605686294;
    msg.reference.set(tmp_msg_0);
    msg.state = 125U;
    msg.proximity = 184U;

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
    msg.setTimeStamp(0.0892191225613);
    msg.setSource(5969U);
    msg.setSourceEntity(24U);
    msg.setDestination(25848U);
    msg.setDestinationEntity(232U);
    msg.control_src = 47276U;
    msg.control_ent = 128U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 67U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.322322685642;
    tmp_tmp_msg_0_0.speed_units = 69U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.617643036823;
    tmp_tmp_msg_0_1.z_units = 125U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.733534319175;
    tmp_msg_0.lon = 0.96003360692;
    tmp_msg_0.radius = 0.333930596039;
    msg.reference.set(tmp_msg_0);
    msg.state = 92U;
    msg.proximity = 193U;

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
    msg.setTimeStamp(0.5929353869);
    msg.setSource(48188U);
    msg.setSourceEntity(48U);
    msg.setDestination(32677U);
    msg.setDestinationEntity(251U);
    msg.ax_cmd = 0.590837637222;
    msg.ay_cmd = 0.654025137182;
    msg.az_cmd = 0.569623684833;
    msg.ax_des = 0.0639836905815;
    msg.ay_des = 0.0356139177581;
    msg.az_des = 0.659201852492;
    msg.virt_err_x = 0.417202455632;
    msg.virt_err_y = 0.0656644011399;
    msg.virt_err_z = 0.866409674579;
    msg.surf_fdbk_x = 0.909047862082;
    msg.surf_fdbk_y = 0.0521437036668;
    msg.surf_fdbk_z = 0.112269847936;
    msg.surf_unkn_x = 0.118966618906;
    msg.surf_unkn_y = 0.642509814806;
    msg.surf_unkn_z = 0.914816407671;
    msg.ss_x = 0.820213860007;
    msg.ss_y = 0.734358739562;
    msg.ss_z = 0.486073868814;

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
    msg.setTimeStamp(0.213195605412);
    msg.setSource(21949U);
    msg.setSourceEntity(33U);
    msg.setDestination(2638U);
    msg.setDestinationEntity(239U);
    msg.ax_cmd = 0.146929670529;
    msg.ay_cmd = 0.72487120272;
    msg.az_cmd = 0.428553138027;
    msg.ax_des = 0.771177774874;
    msg.ay_des = 0.233051958006;
    msg.az_des = 0.157404148014;
    msg.virt_err_x = 0.0401216362704;
    msg.virt_err_y = 0.786685658018;
    msg.virt_err_z = 0.321591290942;
    msg.surf_fdbk_x = 0.250902244152;
    msg.surf_fdbk_y = 0.954863838796;
    msg.surf_fdbk_z = 0.781044462601;
    msg.surf_unkn_x = 0.974434387448;
    msg.surf_unkn_y = 0.97309388267;
    msg.surf_unkn_z = 0.218122653278;
    msg.ss_x = 0.462797122311;
    msg.ss_y = 0.365236983877;
    msg.ss_z = 0.282765521099;

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
    msg.setTimeStamp(0.307392280992);
    msg.setSource(60381U);
    msg.setSourceEntity(245U);
    msg.setDestination(29384U);
    msg.setDestinationEntity(119U);
    msg.ax_cmd = 0.415533697328;
    msg.ay_cmd = 0.846288546959;
    msg.az_cmd = 0.450974560004;
    msg.ax_des = 0.30257893602;
    msg.ay_des = 0.797929939119;
    msg.az_des = 0.690313658019;
    msg.virt_err_x = 0.195892554907;
    msg.virt_err_y = 0.622805255278;
    msg.virt_err_z = 0.328897293708;
    msg.surf_fdbk_x = 0.447231446443;
    msg.surf_fdbk_y = 0.605347653959;
    msg.surf_fdbk_z = 0.913555034752;
    msg.surf_unkn_x = 0.393574401033;
    msg.surf_unkn_y = 0.423961222866;
    msg.surf_unkn_z = 0.106403596037;
    msg.ss_x = 0.765958375874;
    msg.ss_y = 0.818988616308;
    msg.ss_z = 0.669267366365;

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
    msg.setTimeStamp(0.20991822702);
    msg.setSource(47598U);
    msg.setSourceEntity(202U);
    msg.setDestination(61983U);
    msg.setDestinationEntity(89U);
    msg.s_id.assign("BXTUAVLDMRMLFZEOVXIIYWHJXSRDZUXIUCLGFTQEGHTMONRNOBCKHMUWCSTRQJYITTHLGCNIIASUFEYNPYPTFTEJLJTKMKEPNDWFEBAEQCUVYQNYMHSLKGSYRQBVWAFUBKRVRFVMBJXGJJHZEJZAWWEXGSXWHHOZNSQJZPNASIDGLIKLCTPFKVYYWBNVSUP");
    msg.dist = 0.26006042712;
    msg.err = 0.255032326953;
    msg.ctrl_imp = 0.169243981824;
    msg.rel_dir_x = 0.677399145208;
    msg.rel_dir_y = 0.476728584659;
    msg.rel_dir_z = 0.236219426076;
    msg.err_x = 0.852837402444;
    msg.err_y = 0.221736268935;
    msg.err_z = 0.802752989951;
    msg.rf_err_x = 0.55152469393;
    msg.rf_err_y = 0.827728232849;
    msg.rf_err_z = 0.0277536444508;
    msg.rf_err_vx = 0.11244004516;
    msg.rf_err_vy = 0.0306723974399;
    msg.rf_err_vz = 0.404287964571;
    msg.ss_x = 0.914931575494;
    msg.ss_y = 0.994291840062;
    msg.ss_z = 0.554466752625;
    msg.virt_err_x = 0.450267769435;
    msg.virt_err_y = 0.443061304931;
    msg.virt_err_z = 0.639929002139;

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
    msg.setTimeStamp(0.0478607379373);
    msg.setSource(35706U);
    msg.setSourceEntity(246U);
    msg.setDestination(5278U);
    msg.setDestinationEntity(234U);
    msg.s_id.assign("PQOLVSGNGVYDVMJHBIMHYXVENOLPANLYHDORHMQHJEXVLQBKUCWVPORRTJNZCUIHCTBKFADMXYKJMFGTNOXXNEZXZMKUKLUARJAWFUBUEOIK");
    msg.dist = 0.577283921882;
    msg.err = 0.914687950748;
    msg.ctrl_imp = 0.886846837689;
    msg.rel_dir_x = 0.523446302588;
    msg.rel_dir_y = 0.538212446976;
    msg.rel_dir_z = 0.293847307179;
    msg.err_x = 0.186592647589;
    msg.err_y = 0.985418693715;
    msg.err_z = 0.962505331602;
    msg.rf_err_x = 0.0750545879006;
    msg.rf_err_y = 0.15329661749;
    msg.rf_err_z = 0.109030978517;
    msg.rf_err_vx = 0.200495546555;
    msg.rf_err_vy = 0.441900122814;
    msg.rf_err_vz = 0.394236777298;
    msg.ss_x = 0.410642943434;
    msg.ss_y = 0.374914204135;
    msg.ss_z = 0.58700904451;
    msg.virt_err_x = 0.753533455589;
    msg.virt_err_y = 0.384528590019;
    msg.virt_err_z = 0.12503288277;

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
    msg.setTimeStamp(0.670391922279);
    msg.setSource(32546U);
    msg.setSourceEntity(16U);
    msg.setDestination(30372U);
    msg.setDestinationEntity(176U);
    msg.s_id.assign("RMUOAWIFDLGAODFPHCOEBGBBWGTDWHKMNSNIHYGZCCUWQNVASFJCNWHGMPTNMFKZBSSWWCXEQPLBHZLYDPGICVT");
    msg.dist = 0.97759486015;
    msg.err = 0.956294702183;
    msg.ctrl_imp = 0.334149931921;
    msg.rel_dir_x = 0.779612716777;
    msg.rel_dir_y = 0.161071717455;
    msg.rel_dir_z = 0.0679576846509;
    msg.err_x = 0.103577322378;
    msg.err_y = 0.0455959189533;
    msg.err_z = 0.499316764878;
    msg.rf_err_x = 0.825353186188;
    msg.rf_err_y = 0.090093106206;
    msg.rf_err_z = 0.615270064339;
    msg.rf_err_vx = 0.319651208984;
    msg.rf_err_vy = 0.666517158366;
    msg.rf_err_vz = 0.593623432731;
    msg.ss_x = 0.106072265669;
    msg.ss_y = 0.440328795097;
    msg.ss_z = 0.997726305263;
    msg.virt_err_x = 0.810913166875;
    msg.virt_err_y = 0.982935284229;
    msg.virt_err_z = 0.752068243251;

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
    msg.setTimeStamp(0.962785918929);
    msg.setSource(31408U);
    msg.setSourceEntity(145U);
    msg.setDestination(51681U);
    msg.setDestinationEntity(233U);
    msg.timeout = 29988U;
    msg.rpm = 0.169020136175;
    msg.direction = 100U;
    msg.custom.assign("PELHNEZACIQRABXDERBGMMVEZSGNOVDDSJ");

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
    msg.setTimeStamp(0.99921879256);
    msg.setSource(52833U);
    msg.setSourceEntity(161U);
    msg.setDestination(25504U);
    msg.setDestinationEntity(188U);
    msg.timeout = 74U;
    msg.rpm = 0.731489014181;
    msg.direction = 4U;
    msg.custom.assign("TTOXCBRXNLPCOLBYKLYFHWFIBKOKMUSCVGVJGBUTPXXEQSAEHWGMXRGHTOPNOEMMOFGCEFWICVELHMGAIIRIZZVMNXMAZOFZSAAQTTJFRANLG");

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
    msg.setTimeStamp(0.751735099516);
    msg.setSource(62825U);
    msg.setSourceEntity(63U);
    msg.setDestination(11225U);
    msg.setDestinationEntity(69U);
    msg.timeout = 38765U;
    msg.rpm = 0.814109121642;
    msg.direction = 57U;
    msg.custom.assign("OLEPVVGCQUFMBWSRZIRGDSZXQQGWVIDYMRKNTYGIPTPXRIBUCLPBYSOJECFXONGJEFOUATWHPXEVAVQEINLOAZVZZVRVQWUWFBSNNMIUJLDYGOSINKPCKYGAKTHMJTTZHMVBRYULIECKSKHTHAXOCQPADGNKRLHFPLREWGEMYLBHTMHLFRFKJXTZHJYCKJZWMWWBTXDQSMOJOUKQWCINIOVFEBSZQXDAZNYCSDFJMQPANRUAXBLX");

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
    msg.setTimeStamp(0.48020372718);
    msg.setSource(63875U);
    msg.setSourceEntity(239U);
    msg.setDestination(9929U);
    msg.setDestinationEntity(249U);
    msg.formation_name.assign("NKCSOBRODHF");
    msg.type = 25U;
    msg.op = 118U;
    msg.group_name.assign("OINHNGLHJKDCKCWXWYTRZJMYGALRVMXKSYXLKWJLBUPYWOLIOTDZGHQVZVPWCZRIYZQBACNJZQUTRKXVNHQBDHPDNFZHSRUPQCEOEFBVRBSDKINSUBOQFRWTSESHLTCTXQOTXEYIDECXNBQZSJGMGIBILAUVMAHLCEUBYMPGUSLZDAFEYYDVFBOJFMXUJEX");
    msg.plan_id.assign("BOXDUZAUONRXINHLLIHJSNHJLLJGW");
    msg.description.assign("XBNMXBRBFTSCTBXZLBDNADJVAYOQRHMMIVEGBWRYEZEIJPOOAJUSIVOXQDRIRBGAXCGUYVJUFQDVJKUEXFRTZHLOP");
    msg.reference_frame = 78U;
    msg.leader_bank_lim = 0.0907024636999;
    msg.leader_speed_min = 0.740605276737;
    msg.leader_speed_max = 0.855598222624;
    msg.leader_alt_min = 0.426436330712;
    msg.leader_alt_max = 0.0804624497698;
    msg.pos_sim_err_lim = 0.429295214546;
    msg.pos_sim_err_wrn = 0.648133949073;
    msg.pos_sim_err_timeout = 65185U;
    msg.converg_max = 0.48878818295;
    msg.converg_timeout = 23057U;
    msg.comms_timeout = 46537U;
    msg.turb_lim = 0.0243030798115;
    msg.custom.assign("BGNWZQQSQYURHIMQVKIGCGYCNSZNQIRLCJXMMTUDPMCWFTKIJKXZQLRYESUESWFSGITFSKKPNHQWWCUCMONOILKYNFMVECIXBTGAAERAJDLZHWUYJZVEDJEANAJFHXYGGOVONGRMLXFLZVWDJPOHQCPEYSFHSEZLXJBRXBDFPVVEURBAXBUKPTRPTTEJ");

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
    msg.setTimeStamp(0.995198911086);
    msg.setSource(16739U);
    msg.setSourceEntity(22U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(184U);
    msg.formation_name.assign("XGEXKULZCWHEZAIYDETMCBJICTKLPNSROYFXBHEVJTUZCUCZLAPYOXISDMNWXWNJVHBLKEUIQIMNJJDKJQRBSFVSOSGNVZPDBMBQUOJWQNIQEFZFKBEEPQGRPDKLJEVOBGATTHPP");
    msg.type = 195U;
    msg.op = 7U;
    msg.group_name.assign("NMCRLGZHDPTXYXWQTDIGNSISTWIEYLEMQHGZEVHZKCUXOFDYIVMYUCPOMFOYGSEUNTNVPAQUFWJAMFAZIOBDFSCVXGRLNXTKNB");
    msg.plan_id.assign("SMSPRXJGSJTOWNYXKZJHALPPKXUAKQMOJDCULSHXVAXXUKMIZZREFCRVPAMOUXZUHSEPPVTOKGNGSGNZWGEFWQHZFPIIHYBQWFGYTINXHUDMMTAQMQKQAKRDCCDBOQNJYAXJFXBWELRLLETRQWZULDNVFACTSDAIECCBTNJETVYBQORILFYRONDOQIOHKDH");
    msg.description.assign("GLKVKEITPYDCFNYKTEITPHOPQQBEZWODJTJXSNLIKJVWZFAHZFTOIOJBBHBPRXNPDMZNVWFRAISAROGCZFOANJMEUPHBMTQDVSXUQBDHULUGGYKMJWNDYOGRLPYBJMTTBJVOJSCHAQFNDEQDRUFUHZNWRGOLRCPSDWXYCOPUHQFMLKYAILQZIYZWLDVIBQZUCQMMNTEKCESGZGIMSEHPCUJRYAVKSLFUKFCIVXYAEKLWCAHGTAGNXBXEWS");
    msg.reference_frame = 156U;
    msg.leader_bank_lim = 0.442216519253;
    msg.leader_speed_min = 0.836935097861;
    msg.leader_speed_max = 0.610409014732;
    msg.leader_alt_min = 0.810810250738;
    msg.leader_alt_max = 0.902924440059;
    msg.pos_sim_err_lim = 0.359189525804;
    msg.pos_sim_err_wrn = 0.653032209616;
    msg.pos_sim_err_timeout = 9731U;
    msg.converg_max = 0.491190977887;
    msg.converg_timeout = 58538U;
    msg.comms_timeout = 12630U;
    msg.turb_lim = 0.478555188242;
    msg.custom.assign("VNDLDCXXPRLXSKRZRSURTQULWBXJCHYFHLXEVGAYOKCRYROHTOMIBMMHAEFLSFJGIESJJGITWTFDBQFHOEWRNZFVISQUZKBAYVDDISULTKINQVOJFEOQAETYPDPWXNVYYQVHFWJNWIQAPQXGADDOHWPWQGOBSBGVCZEOUZAUCZJBGMXRDWHWPZLIJNMKKXNHNAFZXMSGK");

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
    msg.setTimeStamp(0.734261493327);
    msg.setSource(51959U);
    msg.setSourceEntity(98U);
    msg.setDestination(49586U);
    msg.setDestinationEntity(45U);
    msg.formation_name.assign("BIOWJQSXUEASEDXTNOEWDPLSWVWRIHQYLHTUBMCKXPNVOYHAZQITPGRAAZREGRCJZ");
    msg.type = 175U;
    msg.op = 224U;
    msg.group_name.assign("NPBNCSCUPIIXNAHFCJOGNXEVRBFYMSMRVAORCGMHTFYQNMTLSMELXFTYPYZQWFFMAJZRAEGIJKSXSCIQRMIUYBXNHDZWJOZFRSGAOEPVWBNXMLHWEHKUQRVPOPUBL");
    msg.plan_id.assign("BGBMVYSYDABZHAURJWLXBUEJWBOFIRAJOYOPQZLCUKVAKFUQAIDRIXTVEHEWAHDUXRPNJHHBLLWQZSUDIAOTTHKWGKIZEDXOZJPPXVJRBURYPGETJTXKQDGCYDUTYVEMIMTFVFLXBGCBGSQQMOQROYLPTWLNWKEOHFNNMHUJLCNZWXKTNGXOTWYRANWAKSIYNMZESPMSVCSXGQQGY");
    msg.description.assign("HHRHYJIRTARMBVYMRLAKTFONFZFVJZSKJWMWBULYVEJPTPOMIQGLNYAGGLUHFBXCLUDUWNJTNDNKQSOQRHEZKCEZGJPRKJZDZMSGLOHVLQTF");
    msg.reference_frame = 151U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 12425U;
    tmp_msg_0.off_x = 0.913697791443;
    tmp_msg_0.off_y = 0.855517701852;
    tmp_msg_0.off_z = 0.125166103972;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.193245455262;
    msg.leader_speed_min = 0.339107316131;
    msg.leader_speed_max = 0.0897180771685;
    msg.leader_alt_min = 0.588548052275;
    msg.leader_alt_max = 0.00954856461186;
    msg.pos_sim_err_lim = 0.701802587716;
    msg.pos_sim_err_wrn = 0.368930455178;
    msg.pos_sim_err_timeout = 44166U;
    msg.converg_max = 0.283301264404;
    msg.converg_timeout = 21230U;
    msg.comms_timeout = 54585U;
    msg.turb_lim = 0.455121306524;
    msg.custom.assign("TVSFWAFAONQAPXXDKPWHPWQFBYFFX");

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
    msg.setTimeStamp(0.0114729978832);
    msg.setSource(57863U);
    msg.setSourceEntity(110U);
    msg.setDestination(52595U);
    msg.setDestinationEntity(165U);
    msg.timeout = 5475U;
    msg.lat = 0.133431380522;
    msg.lon = 0.501438086046;
    msg.z = 0.617844616188;
    msg.z_units = 254U;
    msg.speed = 0.0364220814511;
    msg.speed_units = 128U;
    msg.custom.assign("EMILNEQJDUYRAVLEMPAUQXHTIJCKWEXRCCGKOZQYLNFXMEWJBSOFSMGHDBACKQFYXZEMVOLQVPPIBNDZDYOHIOHERBTOLQAMUCKDGQMGUCBCFUMZJXSYPJAIGUJBOKASSLWDHHVBFZXATKTLAGPDZIFJWREFPNWOTFWJNFBGZNEMLYWTAYLKBHAIXJ");

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
    msg.setTimeStamp(0.69634131877);
    msg.setSource(39272U);
    msg.setSourceEntity(87U);
    msg.setDestination(12037U);
    msg.setDestinationEntity(236U);
    msg.timeout = 13762U;
    msg.lat = 0.913791475271;
    msg.lon = 0.304012915554;
    msg.z = 0.618111638629;
    msg.z_units = 177U;
    msg.speed = 0.931977165425;
    msg.speed_units = 172U;
    msg.custom.assign("IVWCNOLARRRSOKHHZKAMZBGYUPYWJQYZQZOCLWHMNXNOEQYBQPGGSFHJKWVTRHRBCZEJTYVRGVDIGQXLONMTIFJMYKBNBXIDEQGJCDXVAKYCNUOFRNZPOOMHJFQXYSQRSCSFVOEKUANPLAPMPHWEIFVLILJUGWAJLJIEDFEUBIUDAMWT");

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
    msg.setTimeStamp(0.140430015029);
    msg.setSource(1894U);
    msg.setSourceEntity(198U);
    msg.setDestination(30403U);
    msg.setDestinationEntity(6U);
    msg.timeout = 49811U;
    msg.lat = 0.988107047339;
    msg.lon = 0.476409576648;
    msg.z = 0.335548282695;
    msg.z_units = 193U;
    msg.speed = 0.566771561041;
    msg.speed_units = 45U;
    msg.custom.assign("SCLMYXDOELYHFCEPWUYZBGODLVDYSZPQDTJRHAODGRGOPWPOPVXYGBZHVCMKULIAQENHDIXKZDGKKZLTNFILVUYGESUSRTOAXYASFQQRWNXHENPFCHYDFJCILMBJGCIWIXBTPTSKJRUABQWJRNPEWFHXIHIWXFCLHGQRWZDUGZZTRTRJCQURLIBQFWNQEBJUYGAVLAKOYKIMVMKEHVFDXSBSMSFOBVBMXZKJNTQZ");

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
    msg.setTimeStamp(0.133764285729);
    msg.setSource(47148U);
    msg.setSourceEntity(157U);
    msg.setDestination(21189U);
    msg.setDestinationEntity(194U);
    msg.timeout = 58909U;
    msg.lat = 0.672289588612;
    msg.lon = 0.0521971429669;
    msg.z = 0.187005074587;
    msg.z_units = 79U;
    msg.speed = 0.498188900257;
    msg.speed_units = 130U;
    msg.custom.assign("IBJYINPDYMNQVXGFGFSYNXHIOHRRBJSZCNMLSQQPZDWCEZO");

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
    msg.setTimeStamp(0.600464889064);
    msg.setSource(8454U);
    msg.setSourceEntity(246U);
    msg.setDestination(60300U);
    msg.setDestinationEntity(98U);
    msg.timeout = 63793U;
    msg.lat = 0.758900422427;
    msg.lon = 0.0280911272419;
    msg.z = 0.017577071628;
    msg.z_units = 130U;
    msg.speed = 0.254334330984;
    msg.speed_units = 247U;
    msg.custom.assign("SNDWDKKBELGRECTESIIPADEHKPMBDJSMBPNOIXCCMRIGTCMQXPCYEVSHNY");

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
    msg.setTimeStamp(0.14708262627);
    msg.setSource(1154U);
    msg.setSourceEntity(118U);
    msg.setDestination(31454U);
    msg.setDestinationEntity(183U);
    msg.timeout = 62786U;
    msg.lat = 0.648515751273;
    msg.lon = 0.308633580201;
    msg.z = 0.87863490537;
    msg.z_units = 253U;
    msg.speed = 0.32207679698;
    msg.speed_units = 26U;
    msg.custom.assign("CGSJUGIWZWDKJPFLUIHXXFEICTLXDHCWZIWVRLUEEKUBGBYALPSPDXKOMOWGONTHKWMATQSKOAMFOVQRFFPPUVTNMYHNECJZGQUKWCVBUWUIIVJSLZDRTFRVRDLCYKAKYZMELMVJJBYAQSZM");

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
    msg.setTimeStamp(0.198719924745);
    msg.setSource(26130U);
    msg.setSourceEntity(127U);
    msg.setDestination(10535U);
    msg.setDestinationEntity(244U);
    msg.arrival_time = 0.739521975743;
    msg.lat = 0.440595541496;
    msg.lon = 0.671144682972;
    msg.z = 0.905106850523;
    msg.z_units = 10U;
    msg.travel_z = 0.0547555751356;
    msg.travel_z_units = 95U;
    msg.delayed = 33U;

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
    msg.setTimeStamp(0.86857576396);
    msg.setSource(46761U);
    msg.setSourceEntity(35U);
    msg.setDestination(6603U);
    msg.setDestinationEntity(173U);
    msg.arrival_time = 0.41754906153;
    msg.lat = 0.644909154808;
    msg.lon = 0.0748939798611;
    msg.z = 0.658081983487;
    msg.z_units = 166U;
    msg.travel_z = 0.328595263942;
    msg.travel_z_units = 222U;
    msg.delayed = 26U;

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
    msg.setTimeStamp(0.426830976468);
    msg.setSource(55225U);
    msg.setSourceEntity(142U);
    msg.setDestination(14113U);
    msg.setDestinationEntity(15U);
    msg.arrival_time = 0.0339127876017;
    msg.lat = 0.127889335617;
    msg.lon = 0.466004530307;
    msg.z = 0.855154323704;
    msg.z_units = 96U;
    msg.travel_z = 0.41446430884;
    msg.travel_z_units = 67U;
    msg.delayed = 83U;

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
    msg.setTimeStamp(0.438112282115);
    msg.setSource(24641U);
    msg.setSourceEntity(197U);
    msg.setDestination(36328U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.611981048931;
    msg.lon = 0.632046764314;
    msg.z = 0.522569761754;
    msg.z_units = 192U;
    msg.speed = 0.713707097218;
    msg.speed_units = 150U;
    msg.bearing = 0.84942033227;
    msg.cross_angle = 0.975333782456;
    msg.width = 0.115550385928;
    msg.length = 0.692882311995;
    msg.coff = 119U;
    msg.angaperture = 0.942193120897;
    msg.range = 6474U;
    msg.overlap = 129U;
    msg.flags = 205U;
    msg.custom.assign("SOVQJUIYBOSSNHSRWOLCAEHFYMTENHGOFBFYVWGSCYEDENADZCWPAGCWZIPHVSTRRIXCQJZMGIMKZCFAJHNGKOWBJEXNEXYOFEFMMAZPYHXJFXOKDLDQKBHMKZZRPCOATVQSUHKGDJWAMUWNRXKLEUALLNAJWCPFTVFVXIUOXDWTQJYRYMPHKNDXKYZIIUBGDPUQIZGBBMUJQNLP");

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
    msg.setTimeStamp(0.333187113312);
    msg.setSource(57225U);
    msg.setSourceEntity(148U);
    msg.setDestination(36392U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.51320629884;
    msg.lon = 0.539015579728;
    msg.z = 0.999357257953;
    msg.z_units = 151U;
    msg.speed = 0.36387944493;
    msg.speed_units = 19U;
    msg.bearing = 0.142799396473;
    msg.cross_angle = 0.114580077172;
    msg.width = 0.43491236106;
    msg.length = 0.876377974544;
    msg.coff = 148U;
    msg.angaperture = 0.40772960175;
    msg.range = 43674U;
    msg.overlap = 115U;
    msg.flags = 90U;
    msg.custom.assign("ONWYYZZOYCHYGAROZNILDOPAAOGUDJIDFPCUDWRPDQGCSXSQBMEBFOMSRQBUXLTBEAWIGGDKYPAYESSQZQLVUUXMEHZ");

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
    msg.setTimeStamp(0.625756522767);
    msg.setSource(5077U);
    msg.setSourceEntity(183U);
    msg.setDestination(24507U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.510049543211;
    msg.lon = 0.12143318765;
    msg.z = 0.337007291622;
    msg.z_units = 15U;
    msg.speed = 0.0829489798225;
    msg.speed_units = 131U;
    msg.bearing = 0.754765294328;
    msg.cross_angle = 0.663081199946;
    msg.width = 0.0145280719364;
    msg.length = 0.719079958786;
    msg.coff = 117U;
    msg.angaperture = 0.535998285441;
    msg.range = 26830U;
    msg.overlap = 242U;
    msg.flags = 134U;
    msg.custom.assign("WHVOGSVVSCKZTNLALZFKHZGVKVPJQKNYDPEOACCYIQATVMKXFZRCBCRHVSMUNWDRYMMXECGFEYTBRNUHHMUCYKZOJUBHXFCSDXQOUAPJQUPEMEWWADLLSOGQULFNSOQKBNYQWHPKDBXYSBG");

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
    msg.setTimeStamp(0.822066024715);
    msg.setSource(50995U);
    msg.setSourceEntity(208U);
    msg.setDestination(29692U);
    msg.setDestinationEntity(114U);
    msg.timeout = 50991U;
    msg.lat = 0.748684893539;
    msg.lon = 0.995455104758;
    msg.z = 0.683352553801;
    msg.z_units = 207U;
    msg.speed = 0.322467160251;
    msg.speed_units = 244U;
    msg.syringe0 = 196U;
    msg.syringe1 = 112U;
    msg.syringe2 = 249U;
    msg.custom.assign("YNBDQDFQESQKVMYQSMMEDFSJYJWVCLAKDIFFEVZILCLPHHC");

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
    msg.setTimeStamp(0.214564022204);
    msg.setSource(2815U);
    msg.setSourceEntity(171U);
    msg.setDestination(32234U);
    msg.setDestinationEntity(98U);
    msg.timeout = 35244U;
    msg.lat = 0.831597565363;
    msg.lon = 0.60401879873;
    msg.z = 0.380169759943;
    msg.z_units = 150U;
    msg.speed = 0.977795720044;
    msg.speed_units = 120U;
    msg.syringe0 = 249U;
    msg.syringe1 = 85U;
    msg.syringe2 = 141U;
    msg.custom.assign("IRFEJXZXCWNUZDRDJENUYRRTMZKDPXJMHUWRCYVXHRDLAAYXZNBWSGFGNSNOMDVOGMPHYMLAJEIHWGFTJZEUTIYCHBICAVHUWKOFOSTGOVZZWRAKCCBLFGL");

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
    msg.setTimeStamp(0.661243752764);
    msg.setSource(3421U);
    msg.setSourceEntity(42U);
    msg.setDestination(57537U);
    msg.setDestinationEntity(127U);
    msg.timeout = 56744U;
    msg.lat = 0.298873601819;
    msg.lon = 0.269206500947;
    msg.z = 0.00846868736626;
    msg.z_units = 168U;
    msg.speed = 0.665998654396;
    msg.speed_units = 88U;
    msg.syringe0 = 167U;
    msg.syringe1 = 147U;
    msg.syringe2 = 13U;
    msg.custom.assign("TWULSFBTRYJFQXTMTCQARKABQDFOVCSVSGSWMBQUGERSQUMTLMMTEDXOSGPKBFVKBJSKNLHKCRTLWUEXBWZBMYIIJVAZKCGNLMHQFJKMOTOLNKFOQVRXLOXRAGHYXV");

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
    msg.setTimeStamp(0.161983548389);
    msg.setSource(22413U);
    msg.setSourceEntity(116U);
    msg.setDestination(52189U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.80209082258);
    msg.setSource(33227U);
    msg.setSourceEntity(82U);
    msg.setDestination(35023U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.640588019113);
    msg.setSource(1360U);
    msg.setSourceEntity(179U);
    msg.setDestination(39349U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.490111373926);
    msg.setSource(8970U);
    msg.setSourceEntity(253U);
    msg.setDestination(36809U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.232487439632;
    msg.lon = 0.226352802234;
    msg.z = 0.273217692826;
    msg.z_units = 197U;
    msg.speed = 0.110338847956;
    msg.speed_units = 245U;
    msg.takeoff_pitch = 0.489291123468;
    msg.custom.assign("BUGLQFJRVWVSOLDFYOKPEIEHCHASDHMLMKPPNIWNZRLEDGSFHKXEIJFOTBUIZQZSTMEATAKX");

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
    msg.setTimeStamp(0.00957010628636);
    msg.setSource(4125U);
    msg.setSourceEntity(173U);
    msg.setDestination(28423U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.31441567282;
    msg.lon = 0.278609075435;
    msg.z = 0.101759710746;
    msg.z_units = 187U;
    msg.speed = 0.480314703827;
    msg.speed_units = 188U;
    msg.takeoff_pitch = 0.305053123776;
    msg.custom.assign("QYUGZLUHBLTGINSNDWRWTAZBBXXFWPUEEOHUNJBCISLFSHLHQYXXIOJOGEWCOVHMPRPYFHKPQEXAZULRMZWAIGOKSFBMUAHFMRLDVCPAJINUVZRMHOVTPEMYMEAZEFJJOISVQYXGSWZUPQBQGJCYMNDJLLFPTWPVCDLVJDDNWWMOMSDJCIDTRSBAFNYKQUBNTNURIYIPACSCYK");

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
    msg.setTimeStamp(0.345748114799);
    msg.setSource(61208U);
    msg.setSourceEntity(145U);
    msg.setDestination(47670U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.0704076025057;
    msg.lon = 0.469396428509;
    msg.z = 0.537944986411;
    msg.z_units = 118U;
    msg.speed = 0.119169371011;
    msg.speed_units = 174U;
    msg.takeoff_pitch = 0.57479513717;
    msg.custom.assign("FOEXSOYMIXWFKNCARYDDKCFQOAYMBZXPMGNIOMUPBTYBQPIRSCLBUABZASMIFJHIPJCHKZUSHTNFLNJNCSLEXGISBKTNKQIITDBIYDPXARVRKMVCSJEVXGVMJQNUHFAOKDQAOENUPWVDUQRWRHZWVDNETCCMKBOQJ");

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
    msg.setTimeStamp(0.727334287282);
    msg.setSource(14972U);
    msg.setSourceEntity(200U);
    msg.setDestination(17624U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.937707826799;
    msg.lon = 0.616876994426;
    msg.z = 0.340550506396;
    msg.z_units = 40U;
    msg.speed = 0.955061287022;
    msg.speed_units = 122U;
    msg.abort_z = 0.634285719442;
    msg.bearing = 0.427007216214;
    msg.glide_slope = 72U;
    msg.glide_slope_alt = 0.0328355749851;
    msg.custom.assign("QHAITCWLKJYKSFALVABPTHRJPQNYYUJPYGOVGGVTKTRABSIJBXTREFPDTISDARXPJIGXLKLOONOLZVFRUMYDQIYDMJFCBCMUSHEMEVZPUIEFOPKKKEHDVLG");

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
    msg.setTimeStamp(0.579525372444);
    msg.setSource(16376U);
    msg.setSourceEntity(215U);
    msg.setDestination(42968U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.682679061129;
    msg.lon = 0.198067637227;
    msg.z = 0.898367113405;
    msg.z_units = 79U;
    msg.speed = 0.0689943672717;
    msg.speed_units = 252U;
    msg.abort_z = 0.901864095296;
    msg.bearing = 0.315094126031;
    msg.glide_slope = 134U;
    msg.glide_slope_alt = 0.553863325123;
    msg.custom.assign("BOPZLCNGPAJZIGTYCZAXMUOXIHUDHSHGAMCFJMFGXVKPWQDBAXHMRDOQRYKXMAOGDNLVREMDOMJGIHCFPWRSGRIONQJEJ");

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
    msg.setTimeStamp(0.382522616085);
    msg.setSource(10153U);
    msg.setSourceEntity(108U);
    msg.setDestination(62573U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.198817560987;
    msg.lon = 0.867615965059;
    msg.z = 0.951699849567;
    msg.z_units = 90U;
    msg.speed = 0.0551214907971;
    msg.speed_units = 169U;
    msg.abort_z = 0.114927026923;
    msg.bearing = 0.407831232353;
    msg.glide_slope = 36U;
    msg.glide_slope_alt = 0.30332174682;
    msg.custom.assign("DYHIOMWGMKZXIRASYWN");

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
    msg.setTimeStamp(0.950721184453);
    msg.setSource(59656U);
    msg.setSourceEntity(155U);
    msg.setDestination(44897U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.159560833528;
    msg.lon = 0.0938807254925;
    msg.speed = 0.792041096554;
    msg.speed_units = 20U;
    msg.limits = 46U;
    msg.max_depth = 0.869963996193;
    msg.min_alt = 0.852022339535;
    msg.time_limit = 0.380744238803;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.322725060482;
    tmp_msg_0.lon = 0.954264555205;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("IUWJHZCYXYUFGOBMJDCEPDTLVJLJRRTFENJLMLQFGVHLPWICONKNOZEEBUUKZVSJXYYMBUCSWQISDOHZVGXFKXYXVCBFGVEDUYASPNYNWSQTTXRGWAHKAVIZJARZWXRVICLHTDLALOMNXSOTUCOWPCVHKRZFKPBBUYSP");
    msg.custom.assign("ZFAMNKVWTZHNAPYFVQGQCVPPBHATBFKMYKPAXNYFMMOFBZGJNHGKARFSFSNIIELZHTYHODLNBIDTTQMFHRSLTRXDWDKXUVSIZFZSWRECJBWJWWEEPOUBIRXCVWBKJXNAFKXGTDBJWIUZLCAQJKEJVXCLWBPGHLGPOQSVCVBUGMMOYCGRREIIQOSCNJAAVXYKTYYDUZQTIDUMNRMGJGLUUEMRIEZSVXDLQCQ");

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
    msg.setTimeStamp(0.127565200253);
    msg.setSource(24980U);
    msg.setSourceEntity(28U);
    msg.setDestination(28616U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.764162804157;
    msg.lon = 0.630784346335;
    msg.speed = 0.741516881561;
    msg.speed_units = 55U;
    msg.limits = 200U;
    msg.max_depth = 0.209543431628;
    msg.min_alt = 0.342683889726;
    msg.time_limit = 0.651473230516;
    msg.controller.assign("GTBHWGNUOEVUURZNW");
    msg.custom.assign("WUZYGCDNIUOKNATNUUTMBQPTXPELKGFZMWGHDAXKHROEGJAHGGJRYVETIVMDWBMVFYSRPKUAUTCLMJXFIHDCWALHRGHSQJDQRMRQXOWGLHSHJPZQVDYLEKZOKTIXCDGXWAIFVIIBFQNDJKXRBEMCFEYBY");

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
    msg.setTimeStamp(0.866492406252);
    msg.setSource(40174U);
    msg.setSourceEntity(182U);
    msg.setDestination(12271U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.456596749594;
    msg.lon = 0.121970219616;
    msg.speed = 0.447702547037;
    msg.speed_units = 35U;
    msg.limits = 155U;
    msg.max_depth = 0.187656887962;
    msg.min_alt = 0.102766211361;
    msg.time_limit = 0.909464704714;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.116400598422;
    tmp_msg_0.lon = 0.0728911107718;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ZAZUNRXHMWDXCVHIIKKVMYTBLTSYURDIQPHTYAJIQWBFGVAUGSNYINSIJILEOWQVAJOGUCVKCYTBWLHMOSMEZGQQMRUKUOYEZSHVAJOMPEFKXGTOAQBZWXDPVOJTXYGBACTZWFMCVU");
    msg.custom.assign("SOESMPQWEQRCUHKY");

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
    msg.setTimeStamp(0.332039797202);
    msg.setSource(16595U);
    msg.setSourceEntity(53U);
    msg.setDestination(56277U);
    msg.setDestinationEntity(16U);
    msg.target.assign("ZEQLPBBIFXNRDZDJNTAKBPXMPWMHMRDHTQCRCSIVDBWXYOYXQPCBGNUFEURYHZQFAAJMNFOQYVMOZPHQKUTAFPOADZQDEFOGD");
    msg.max_speed = 0.280329305206;
    msg.speed_units = 251U;
    msg.lat = 0.783720272886;
    msg.lon = 0.523448511597;
    msg.z = 0.431297073461;
    msg.z_units = 164U;
    msg.custom.assign("XTHVCCGCYQUABSECTKGMHIJESLEVKFTSKUVNKOAZRDRUSNUZIUTEAUOBCZFWZH");

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
    msg.setTimeStamp(0.400284216008);
    msg.setSource(30686U);
    msg.setSourceEntity(40U);
    msg.setDestination(44110U);
    msg.setDestinationEntity(26U);
    msg.target.assign("AADCRZCRCKSZHCEYSLMFXOTUNDITNUQHRKFOBYULFDQHF");
    msg.max_speed = 0.966130533858;
    msg.speed_units = 154U;
    msg.lat = 0.64188601703;
    msg.lon = 0.768806988099;
    msg.z = 0.385198180622;
    msg.z_units = 7U;
    msg.custom.assign("MGAVDHCMXUNPUMXNTZCQZXOFNLKKQEVXWUVESBWBPJRTDHZIYPGZULSNIQXPEAWALRHXSFVGYGEGTTYXIFBAXDQXKHDRROBIWSEPKTSQIOLZAJPNAHUUDBGFDLBJVTTHABLMCJKIS");

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
    msg.setTimeStamp(0.421437093188);
    msg.setSource(13547U);
    msg.setSourceEntity(92U);
    msg.setDestination(10685U);
    msg.setDestinationEntity(125U);
    msg.target.assign("RXFWMYKUIFSKLFAXSZMFXLSTNWHDTABSUYVDXQAUYPDNFNLCTEQZJHUPBBADDGSIIVQWWEGDJFARMOUCGVCZBZQWJEFCNVCFVLZLQRDUVXMPYJKSRNUSXLPDRLUQBEYPWAKRJLXN");
    msg.max_speed = 0.585634643992;
    msg.speed_units = 45U;
    msg.lat = 0.873673654064;
    msg.lon = 0.156951503508;
    msg.z = 0.454756024817;
    msg.z_units = 21U;
    msg.custom.assign("VAWORNEXPJREUDMNLXDJRTEUOXKSINCFWMDHQPQPCGSCIAPVKWTQECUXBQHALSPXXIHRWVGSDBMZPOVDYWBOSRCFWUTHZVHVGJKGOZLVFIRGNHXYTLTENBBUNDAZKIMPQQVXCEPVHDHAIONIFJEGQMRJKMLLQNYGURPWZDYFGHNEGCWBHVCRDAOATOUJLTLOUNMCMFIASMKWQABIPJOJWTKSFJRFBKGZEBKZXYZSKCUJFULDTYM");

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
    msg.setTimeStamp(0.906022612415);
    msg.setSource(8413U);
    msg.setSourceEntity(245U);
    msg.setDestination(39269U);
    msg.setDestinationEntity(91U);
    msg.op_mode = 220U;
    msg.error_count = 65U;
    msg.error_ents.assign("BJHLCOQTWZFMCFSFSULEPRVHYTNLQLWGAXH");
    msg.maneuver_type = 23499U;
    msg.maneuver_stime = 0.224256794806;
    msg.maneuver_eta = 7212U;
    msg.control_loops = 1403979020U;
    msg.flags = 62U;
    msg.last_error.assign("KLRHYNEPJRLLABNPMYIBIYIVHJXQOIBPENKTWODDAWNFGMZHCSXVQOLEGSVLQNDHUEOAXDUWIMJTRMAMPSMYPMHFAKKVFERUVFWXJHVWLFPSABGETCEOZNJNPBYADWIAAUGDTOFZGFBYZUDTBBJRJLZ");
    msg.last_error_time = 0.778282835066;

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
    msg.setTimeStamp(0.950636001792);
    msg.setSource(58578U);
    msg.setSourceEntity(132U);
    msg.setDestination(63748U);
    msg.setDestinationEntity(13U);
    msg.op_mode = 241U;
    msg.error_count = 78U;
    msg.error_ents.assign("ZJLFBURJVXNACXCYHWVFODMGIYGFKNYDTEBADNFXHRGHHMABTJRTLENIYJPXRESFWCUUZVEBNSDAWDWRPHIQQKLNLKXCSROCVMCJRENMOJQTMSITGOPAXVZRPTMSNZ");
    msg.maneuver_type = 45851U;
    msg.maneuver_stime = 0.766420023205;
    msg.maneuver_eta = 26119U;
    msg.control_loops = 1434617402U;
    msg.flags = 56U;
    msg.last_error.assign("ZDDLMUWYEDKGCAUZYXGXFJIZQTTHCOHWVUGVKNROQNFOVQELGBIYBFMQPPCLJHFDMPEHMEXKQBUJGJYCGKJGXHCPLADWJCSDNXKTAWUVDRSQWBMYYZZAEOIIIXCSGZQRKTAHTPMAFJWBPYVKZORBRTKEOUHYEKCRXMHWYDBIFNQULGJXXQASTFNH");
    msg.last_error_time = 0.322307808111;

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
    msg.setTimeStamp(0.448742305694);
    msg.setSource(45256U);
    msg.setSourceEntity(12U);
    msg.setDestination(61719U);
    msg.setDestinationEntity(222U);
    msg.op_mode = 97U;
    msg.error_count = 38U;
    msg.error_ents.assign("VUWONCGGGDBGYDQFQWMKROIHTVPDUYMNUWXXCXFOAPDJHQDTABKEIQQKFHBKJEXBLLRUOCZSRMSIMIXTADLSKMGRFQUN");
    msg.maneuver_type = 23384U;
    msg.maneuver_stime = 0.953080876692;
    msg.maneuver_eta = 34801U;
    msg.control_loops = 937344257U;
    msg.flags = 118U;
    msg.last_error.assign("ZOMSQWUXRMIRDBBWXMQVLYJSOEEWYPWKRRTICOVXPASGZWHYNXLOEWDGNHYJRGGXVCKKSOLVIOSINVPZIMGCAEZTTCUUZLCHOVGTPFPRSPLHKQZDCEJTZOPFBADVRSHKAKPAALUJHMOQUKXEQDNRJBCJISLWCYKUNPYGNMFTFDFFIDYMVGFZIHYFSHQKEHQZABH");
    msg.last_error_time = 0.315771063697;

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
    msg.setTimeStamp(0.559788358453);
    msg.setSource(38676U);
    msg.setSourceEntity(219U);
    msg.setDestination(1268U);
    msg.setDestinationEntity(117U);
    msg.type = 94U;
    msg.request_id = 26835U;
    msg.command = 246U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 45317U;
    tmp_msg_0.rpm = 0.245153411208;
    tmp_msg_0.direction = 154U;
    tmp_msg_0.custom.assign("OCTBQUGMLEFMHYEZCTXAPZOBPOEWVBMNHZPJDMHQVFCJSRQOZGYYZNQKUMSHFQMEPBUYXSNHJARBKBQNTOICKBCJSDZWQIGOFLJLAAVUKLIURDKYRVPSYVKCYIUQIMWORTUWMYCBZXFVDKFKLSIGZDLWSVNAEFSWHRMJNRPUROLJEYHPGTTBXOTZEGTHCVZXARPXSLHIAHWFDNDURAGSFNLANBXIEVTKCLVQWGQYEJXDJGIPEWPKNI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13378U;
    msg.info.assign("UBJTURQTADWLEHEFKEYASYSNSHNXBMIWDWRFPWIUMDCUWCZTYAMFWAJNPBMCBSJSYBTDGYPVCIRQOCTNQGAJXEILUTUOQFHEMAFXVFWEPCKSGZOYXOKNCKPGXQRNHLALGRRVIBYTIGLXDYJYKMQNYOETSZ");

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
    msg.setTimeStamp(0.271911031359);
    msg.setSource(39492U);
    msg.setSourceEntity(185U);
    msg.setDestination(51743U);
    msg.setDestinationEntity(247U);
    msg.type = 184U;
    msg.request_id = 60885U;
    msg.command = 121U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.0400691482672;
    tmp_msg_0.lon = 0.777471245283;
    tmp_msg_0.z = 0.963878761591;
    tmp_msg_0.z_units = 146U;
    tmp_msg_0.speed = 0.201276586656;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.custom.assign("QYSZWURUDYROVKYPPEUBPAUYHI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 54284U;
    msg.info.assign("RCZZASBCQYPSLNCFWTEVAMZLPMOBVRNNXHHDVVDYNUAKPHISZUCTMVFZUORZHHMKNEIHIETFXNIJ");

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
    msg.setTimeStamp(0.365721167222);
    msg.setSource(7795U);
    msg.setSourceEntity(230U);
    msg.setDestination(43690U);
    msg.setDestinationEntity(143U);
    msg.type = 128U;
    msg.request_id = 25556U;
    msg.command = 63U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.975467143439;
    tmp_msg_0.lon = 0.935202711085;
    tmp_msg_0.z = 0.0753582008122;
    tmp_msg_0.z_units = 22U;
    tmp_msg_0.speed = 0.379275526887;
    tmp_msg_0.speed_units = 174U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.505755118219;
    tmp_tmp_msg_0_0.lon = 0.279246150899;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("KHETCKUKPLFLBQGBPLHFOHANACZMQJDGSMBVEUWJJITZOVTKPIFQQWNUBLKPCWHTKJHFSEYSYOUDKPLMYBWIPDEFSXMRITERRVPXEVJBCGSZDVDFNZUXGTVBLHBZOQS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5471U;
    msg.info.assign("EPHTKBSBPDPEYSPWQFEANEMKSGATZAJESDMKDYFFLAVNFFCLJEVATDTDOP");

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
    msg.setTimeStamp(0.153149738354);
    msg.setSource(32059U);
    msg.setSourceEntity(107U);
    msg.setDestination(48872U);
    msg.setDestinationEntity(184U);
    msg.command = 140U;
    msg.entities.assign("IEMNWBUSQMNEUHVYRMHDBGHVPOLJWXSPVOKMPSRNPDANMQFVZTIBCGIUERGZXDOQDTQZGSFZVPJPCTWOZMJIXZFLJYBPSTKTZTEQGYXIAWDHREGKLNCRHDRCQBFAALKENDWKQIAOVKQEHNUYYMBJYTEDCYAULIKVVWBARXW");

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
    msg.setTimeStamp(0.594850992771);
    msg.setSource(56616U);
    msg.setSourceEntity(41U);
    msg.setDestination(16596U);
    msg.setDestinationEntity(247U);
    msg.command = 123U;
    msg.entities.assign("XBASCGJZDMCRLWRWRILVRBWHFPGHJESDKZXTNKUVNJJDO");

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
    msg.setTimeStamp(0.678169525793);
    msg.setSource(63567U);
    msg.setSourceEntity(208U);
    msg.setDestination(62722U);
    msg.setDestinationEntity(179U);
    msg.command = 87U;
    msg.entities.assign("ZHDYWSLHSPEXRETXTRKMNFNDCWBLUAZBKXOYGXCKMHAPMINMNSPIWADBVOMUSSRJUXBGRHKMBTXYYVHLTKRGGOZTFAPTNZGGFKOVTFGQVVIJHPQWDJDMDAVSQIZDUZYUWAGSUEIEICZOJGURLXLNKCEJHUJGBYOPTWQQXWBVUSSODNFLEWJEZJLVDBAFPPMLRERCDBRXVOEPNOOCWBYPFAQATNFIYKCLHNJYIKQHVFSMTXWQLYQ");

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
    msg.setTimeStamp(0.410092913841);
    msg.setSource(41972U);
    msg.setSourceEntity(94U);
    msg.setDestination(45403U);
    msg.setDestinationEntity(170U);
    msg.mcount = 186U;
    msg.mnames.assign("MXPGLDKSRYFVHHWCFWEUPVXWUUAQIBXUMPFADSVMJEFDJOLPAGOELCTLWTJYEOYHUCROYMIGPBCNWELEKIBQUQENXQGONWKOLYOLHJIPNRTRGZXBKCCPGRLGQFKMTIRIDUBIAYJYENTOWZXKMRUIFHZYNTJAIJXDGSADZQSANTBIPYZQSHW");
    msg.ecount = 132U;
    msg.enames.assign("OWEDVFWQBTAGWYXAFROKYNQRGYQXPCIYLJAJFVZVZPOEGFLZEHRIQCFRWCIEBJSHJFKXABMJNMTEMGLOACYXZHDOPGACEISLPUDEWTKNSVDNRXPRBUZPHKBSWTQVDEGIFZSWGIIFQTKAAHBLXTLMSTRMJCBHYZVCNNZXQSHNCULZCDXXRBLRAUQEDMQKDLUEWBWQ");
    msg.ccount = 62U;
    msg.cnames.assign("IILCBRCGCBEFYUKDPXAQONWXTJURFYAWW");
    msg.last_error.assign("LEFBKHADZIWVJSEPXOARHNBWPDIUEGWZBBIGIFTITYFQYLPEEYTWRRAZVEKUOKOWBUWNXJBRNKLGBMYZKZGJKEIUCROCMFHNFANLVLCQPJQMDKHHSQLGXTEZSLY");
    msg.last_error_time = 0.490047451139;

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
    msg.setTimeStamp(0.992531835762);
    msg.setSource(14294U);
    msg.setSourceEntity(64U);
    msg.setDestination(21795U);
    msg.setDestinationEntity(93U);
    msg.mcount = 71U;
    msg.mnames.assign("BASKZKTYAADNCNYFCUWDNRRVAFLLSPDRZWMEGPJVHQYOASWQTWWLUNZIAXFJZZCXOBFEQPGECHSJVZYTKUTSXGOUMEFOWKGIZHVZQNAWWAIIVCSHPJRTAIORMRCBJEEKQVVTGQKEPWNLPZMPPXBJLNBVBRUMVOLXTDGFLGIQCSCAEHRNLDLFMYHTX");
    msg.ecount = 225U;
    msg.enames.assign("MZXRCYNMRASCYPEHTPSBTEIIZGHFABGFROBXHNUOPXXWOUGNXEXHCDLYXEZFVWFLMMKZLJBSTRNMWWQCYTAJMZSYMCYBEIJPBUUTAVPEVRHDFEOPCYJDWJVDKLKHJPALAMDGKYNKSFDFEPJW");
    msg.ccount = 190U;
    msg.cnames.assign("NWRMPSZKPVHJWMXGYQRYDGAHLOPUXFRAJTNPWIWTCIUBQIAHPLICUBDJFQJGVWYHLQHXTEYYGHTCIAREUZIFYMLRBJXOKEQCBGZXKAUEUCVCRESFODGJMLGRNJAKAEYIJASJPMOAWWKMXEFCUNBQPMDKPTCDDUTFSHQIKGYSSXZINXZOOVKFDVQPFERPULVKYDMN");
    msg.last_error.assign("KWEASDMKUXHHFEKUIYTHMCMFILHYTWVNCJWTOUZBKNKTENGQGJ");
    msg.last_error_time = 0.519743588841;

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
    msg.setTimeStamp(0.784355211021);
    msg.setSource(9711U);
    msg.setSourceEntity(173U);
    msg.setDestination(25589U);
    msg.setDestinationEntity(14U);
    msg.mcount = 134U;
    msg.mnames.assign("GIWGCEQFLPFZIQHHUYFPQMFZNKQZNAEPMRKOIBADWGTBANFKRQHMTRBDIOGFYPPBAEHUNVHMHROYSZWPANHTCRJLNVXVJUWLGLAJDKJXDFUXXSIHCYLZKRNEZSKMEBPPCKZCJTLCNYXAXUBBIJWPXSOOVATSPUARSIRDMCQ");
    msg.ecount = 95U;
    msg.enames.assign("PZITTEFLOWOCTFCXZNAODNFOMVNRSDXHQMADJSXOWCXPRYXGZVDDEKVQJJURKZKGHIQWDYOAITIMURTSIDBHGQBZEJUEYROMAYVMCKSVILFXVMASJEALJWJELJVTCXSKVXQUZHMQAVKZGUMHSZCOTCFCXGHTPEYZMRXPCLZAWBOAFGGQQIKENDSTPRWDRYYBWBKYBLJSNYKYLBNLUNUIHPAFEH");
    msg.ccount = 58U;
    msg.cnames.assign("IUWGRAKSIMHQYEHLDACVXMSNJJUAQKLHILGFLGXBMMVTBUZAZZZZEQSCBCXEPITHHPUCEVMWYUYZVRGWDKOUYXKDVKTVQLOJDMMIQGJLUTARFEEBQCRFNHXOGFWJYDBDOCNAWVGJXVYJLFPINWEREFJOKCBSIQBIO");
    msg.last_error.assign("ICGHJKYIXWBTPHRHPDKFHCZDKRPUMAEZURMOGMSJVGBWYWDEJQMPGYJKWZKIMXTKAGVMQBTPNWURMSDLSUZCSHSTXITGQJMEDORFFNWXYYEASSHZGSJUB");
    msg.last_error_time = 0.0574508664271;

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
    msg.setTimeStamp(0.747436299747);
    msg.setSource(48570U);
    msg.setSourceEntity(124U);
    msg.setDestination(33450U);
    msg.setDestinationEntity(180U);
    msg.mask = 166U;
    msg.max_depth = 0.0737931359612;
    msg.min_altitude = 0.546729488887;
    msg.max_altitude = 0.310686693859;
    msg.min_speed = 0.763046520141;
    msg.max_speed = 0.801811330776;
    msg.max_vrate = 0.846411448141;
    msg.lat = 0.841004366514;
    msg.lon = 0.347987187758;
    msg.orientation = 0.993115455932;
    msg.width = 0.323915881236;
    msg.length = 0.749325368692;

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
    msg.setTimeStamp(0.146038488571);
    msg.setSource(27351U);
    msg.setSourceEntity(205U);
    msg.setDestination(5270U);
    msg.setDestinationEntity(190U);
    msg.mask = 28U;
    msg.max_depth = 0.557170074516;
    msg.min_altitude = 0.642885011059;
    msg.max_altitude = 0.387458725957;
    msg.min_speed = 0.755553656849;
    msg.max_speed = 0.158246454681;
    msg.max_vrate = 0.583839030147;
    msg.lat = 0.972150441727;
    msg.lon = 0.947316608326;
    msg.orientation = 0.513513291272;
    msg.width = 0.657213697366;
    msg.length = 0.349941835058;

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
    msg.setTimeStamp(0.406412871869);
    msg.setSource(15914U);
    msg.setSourceEntity(161U);
    msg.setDestination(32956U);
    msg.setDestinationEntity(43U);
    msg.mask = 243U;
    msg.max_depth = 0.927917125182;
    msg.min_altitude = 0.252137507904;
    msg.max_altitude = 0.580803087144;
    msg.min_speed = 0.725039484458;
    msg.max_speed = 0.530182986697;
    msg.max_vrate = 0.736130157012;
    msg.lat = 0.0840280001214;
    msg.lon = 0.0282135437638;
    msg.orientation = 0.69938218602;
    msg.width = 0.764208161379;
    msg.length = 0.932076484696;

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
    msg.setTimeStamp(0.352399013193);
    msg.setSource(16740U);
    msg.setSourceEntity(238U);
    msg.setDestination(31286U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.155895826768);
    msg.setSource(5832U);
    msg.setSourceEntity(52U);
    msg.setDestination(21953U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.356858782489);
    msg.setSource(32422U);
    msg.setSourceEntity(48U);
    msg.setDestination(58192U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.874926750046);
    msg.setSource(46860U);
    msg.setSourceEntity(81U);
    msg.setDestination(64696U);
    msg.setDestinationEntity(207U);
    msg.duration = 47389U;

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
    msg.setTimeStamp(0.607562455821);
    msg.setSource(7863U);
    msg.setSourceEntity(244U);
    msg.setDestination(1031U);
    msg.setDestinationEntity(5U);
    msg.duration = 45617U;

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
    msg.setTimeStamp(0.132239434221);
    msg.setSource(54328U);
    msg.setSourceEntity(215U);
    msg.setDestination(45978U);
    msg.setDestinationEntity(44U);
    msg.duration = 18866U;

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
    msg.setTimeStamp(0.853592380273);
    msg.setSource(3030U);
    msg.setSourceEntity(204U);
    msg.setDestination(25576U);
    msg.setDestinationEntity(194U);
    msg.enable = 187U;
    msg.mask = 474022783U;
    msg.scope_ref = 2873086944U;

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
    msg.setTimeStamp(0.861332381187);
    msg.setSource(32787U);
    msg.setSourceEntity(236U);
    msg.setDestination(59872U);
    msg.setDestinationEntity(89U);
    msg.enable = 0U;
    msg.mask = 1795007991U;
    msg.scope_ref = 3241704600U;

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
    msg.setTimeStamp(0.669957866266);
    msg.setSource(573U);
    msg.setSourceEntity(214U);
    msg.setDestination(14067U);
    msg.setDestinationEntity(185U);
    msg.enable = 130U;
    msg.mask = 1834041791U;
    msg.scope_ref = 1013544643U;

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
    msg.setTimeStamp(0.508056223477);
    msg.setSource(14325U);
    msg.setSourceEntity(9U);
    msg.setDestination(38704U);
    msg.setDestinationEntity(185U);
    msg.medium = 21U;

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
    msg.setTimeStamp(0.68646179843);
    msg.setSource(56028U);
    msg.setSourceEntity(73U);
    msg.setDestination(684U);
    msg.setDestinationEntity(109U);
    msg.medium = 117U;

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
    msg.setTimeStamp(0.794794250335);
    msg.setSource(4959U);
    msg.setSourceEntity(21U);
    msg.setDestination(28985U);
    msg.setDestinationEntity(223U);
    msg.medium = 172U;

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
    msg.setTimeStamp(0.19789261169);
    msg.setSource(2050U);
    msg.setSourceEntity(83U);
    msg.setDestination(26063U);
    msg.setDestinationEntity(117U);
    msg.value = 0.128979791256;
    msg.type = 28U;

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
    msg.setTimeStamp(0.813280767835);
    msg.setSource(57838U);
    msg.setSourceEntity(204U);
    msg.setDestination(12636U);
    msg.setDestinationEntity(221U);
    msg.value = 0.887271224453;
    msg.type = 96U;

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
    msg.setTimeStamp(0.539340370604);
    msg.setSource(25080U);
    msg.setSourceEntity(227U);
    msg.setDestination(4U);
    msg.setDestinationEntity(141U);
    msg.value = 0.902764421714;
    msg.type = 68U;

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
    msg.setTimeStamp(0.0478904425292);
    msg.setSource(1626U);
    msg.setSourceEntity(98U);
    msg.setDestination(25062U);
    msg.setDestinationEntity(137U);
    msg.possimerr = 0.787147078268;
    msg.converg = 0.0373323523923;
    msg.turbulence = 0.622882586419;
    msg.possimmon = 157U;
    msg.commmon = 131U;
    msg.convergmon = 133U;

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
    msg.setTimeStamp(0.544423929086);
    msg.setSource(55145U);
    msg.setSourceEntity(12U);
    msg.setDestination(53877U);
    msg.setDestinationEntity(179U);
    msg.possimerr = 0.0918051367631;
    msg.converg = 0.337269387954;
    msg.turbulence = 0.386393254228;
    msg.possimmon = 167U;
    msg.commmon = 212U;
    msg.convergmon = 79U;

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
    msg.setTimeStamp(0.365124189989);
    msg.setSource(3137U);
    msg.setSourceEntity(209U);
    msg.setDestination(45253U);
    msg.setDestinationEntity(175U);
    msg.possimerr = 0.723574853465;
    msg.converg = 0.146452857394;
    msg.turbulence = 0.352719474879;
    msg.possimmon = 243U;
    msg.commmon = 188U;
    msg.convergmon = 111U;

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
    msg.setTimeStamp(0.740067881611);
    msg.setSource(10729U);
    msg.setSourceEntity(184U);
    msg.setDestination(51286U);
    msg.setDestinationEntity(90U);
    msg.autonomy = 99U;
    msg.mode.assign("EHTGYMDJRBRGLRWJAUCMQRBOXSUCYYQOJJHCQNNSFVEPYRHHIGZKORIRLAQGCSKCJMDLDLSBWNANBUPJMFPQGLAHTVT");

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
    msg.setTimeStamp(0.43661781472);
    msg.setSource(55713U);
    msg.setSourceEntity(112U);
    msg.setDestination(23279U);
    msg.setDestinationEntity(114U);
    msg.autonomy = 14U;
    msg.mode.assign("JBWOQRMLOUEYSNORBTCJNQINPVXOYDXGLGGYPUFVKCHYXNNLDLFKTJKWZBBAVFQTEGMNOHFXUHZCXWHLMBSGEERESLINXLEEJPUTCMFSXRRAJAWJRHJSWILWFQZZUIUSJQVHDSTXAETTJYVSMVBXMLHOPORMCWHZNDARNKTPFOCVIKU");

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
    msg.setTimeStamp(0.472440934054);
    msg.setSource(63275U);
    msg.setSourceEntity(242U);
    msg.setDestination(48548U);
    msg.setDestinationEntity(143U);
    msg.autonomy = 143U;
    msg.mode.assign("PHYEAOHYMBKGUBXWTIKOZRCJPNLKZEDXOYAGAVCTZXKBIQVUIQYYBPZDIGDZACYHHTTDHMSEEFRLMCGPZBLTFGDGOPPXHMLAJWSDQWFJSUMIJJUVKXJRJQXWVSTNLWFXOLKMMDHLSCUFKDOTNPMP");

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
    msg.setTimeStamp(0.35815029556);
    msg.setSource(19321U);
    msg.setSourceEntity(165U);
    msg.setDestination(25705U);
    msg.setDestinationEntity(239U);
    msg.type = 1U;
    msg.op = 249U;
    msg.possimerr = 0.508885362408;
    msg.converg = 0.560345313775;
    msg.turbulence = 0.915592954616;
    msg.possimmon = 229U;
    msg.commmon = 29U;
    msg.convergmon = 71U;

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
    msg.setTimeStamp(0.0868365821821);
    msg.setSource(63047U);
    msg.setSourceEntity(143U);
    msg.setDestination(569U);
    msg.setDestinationEntity(132U);
    msg.type = 145U;
    msg.op = 26U;
    msg.possimerr = 0.849940313593;
    msg.converg = 0.840132437847;
    msg.turbulence = 0.270080214423;
    msg.possimmon = 12U;
    msg.commmon = 180U;
    msg.convergmon = 170U;

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
    msg.setTimeStamp(0.0528568670338);
    msg.setSource(53526U);
    msg.setSourceEntity(63U);
    msg.setDestination(47236U);
    msg.setDestinationEntity(95U);
    msg.type = 161U;
    msg.op = 10U;
    msg.possimerr = 0.16850234679;
    msg.converg = 0.042299673081;
    msg.turbulence = 0.468602815007;
    msg.possimmon = 190U;
    msg.commmon = 45U;
    msg.convergmon = 205U;

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
    msg.setTimeStamp(0.060699555873);
    msg.setSource(32866U);
    msg.setSourceEntity(248U);
    msg.setDestination(63775U);
    msg.setDestinationEntity(148U);
    msg.op = 17U;
    msg.comm_interface = 45U;
    msg.period = 15145U;
    msg.sys_dst.assign("CPKIKZGGTPEPUISAWTVPOVQMKSHEEUOBQBKIDJMYTADHEMCYEHQTJHSQQFJGLHBABLZRQDXCOBMJMKCARVIVIYBFSPDUPOMJCIDYWAMRVGEGKEJXZLMVPRRLEVOZOFLZCTTYEEZXDUKIHROGNPNXOJYQLJFWHUXNUUZIWQCDXQHBYJVYOUMWDO");

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
    msg.setTimeStamp(0.303647387454);
    msg.setSource(9410U);
    msg.setSourceEntity(198U);
    msg.setDestination(14186U);
    msg.setDestinationEntity(190U);
    msg.op = 195U;
    msg.comm_interface = 27U;
    msg.period = 52467U;
    msg.sys_dst.assign("ZBKFERFOGMSTAONLAUKYTWSGRXIVKNFDQWEEDKXEHCDCJXIOQQCAUUWMGEKWSFMYLRSYJUBTZZRVOXQIYUFJTRMUTOPUXUDAXOALQIJQWNBBET");

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
    msg.setTimeStamp(0.905044591932);
    msg.setSource(32877U);
    msg.setSourceEntity(194U);
    msg.setDestination(38478U);
    msg.setDestinationEntity(85U);
    msg.op = 194U;
    msg.comm_interface = 98U;
    msg.period = 5297U;
    msg.sys_dst.assign("TXUASZZZGPUEJWAZLYAPNDKICSLKMDWRBCSZTVNUCLYSHGYWIEIRFBQHXGDHRBEEOVGJQWLUDYMUHKKPFTJPLMMQVWIFAKPMZGGTFHEEYYMJCXBLRVTHNJBXSERRZOIJIXAPMWRDFTQVACHYGPSOKGXNCDKPAYZBQWJBBVAUNTIDOBDHQFWRKWIOLVUXQKOVOGUAQEHI");

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
    msg.setTimeStamp(0.0965494246836);
    msg.setSource(36707U);
    msg.setSourceEntity(122U);
    msg.setDestination(28715U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.479488114123);
    msg.setSource(9581U);
    msg.setSourceEntity(167U);
    msg.setDestination(27148U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.238770637643);
    msg.setSource(46936U);
    msg.setSourceEntity(194U);
    msg.setDestination(57601U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.355197883558);
    msg.setSource(36509U);
    msg.setSourceEntity(230U);
    msg.setDestination(38792U);
    msg.setDestinationEntity(159U);
    msg.plan_id.assign("DGQLOWEOWUJOALBOBRLFSITCBUFTCEUXGQKGRFVHBOPGWAMWWPHCUKXUWALNVGIIYQKJMSZDSTDYFTRYFEBWKOJMYVSHVVGHIUXYHMQJDQJRTDJYRRMCGECFBLRLMHITKWXEACNNZLOXALTZVSQQJNCNXBWMOSSLI");
    msg.description.assign("FVLGOYOPPBLKOEOWDQLUQUYASOKGBFDDIUNFKHSCIQUHGALMIVSSXZQVDSDLCIHZBXSYNHYMWAPNVABHHXZLWKAYOUIJAPJKHVYYFVVTZAJRMWQFGDTUNGXJEURPNMVFWMOZLPJRUJYFANLEIKCRGUBOCEGKGMEBDUBWEWJKQLTASXTGBTMRTCTXYIIENYXNDPNCDACXFRQRHTJRTHBBNXCGE");
    msg.vnamespace.assign("TJAUAFUTROXUCBVDSWXZYSJVGMBWYEKGGXUOPHKHMXBEO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BHCMQJSGCGISIWXMDKRRBFEDNTYSCHYWSMEHAPCRVUDDTJWPSHZZBZFSWXANQXQZHCQDNLDTPNLUVLCIFCMSFYTDOBOBUXPQMRNSHCMZLIE");
    tmp_msg_0.value.assign("OOQBOARBYBFXFDEXNYTNATUABBJIWWSWSCWTUFWWFARHZLSHUQEHGHUWGAOXVMMJPABEPILEDXSNSFNCVQLKBVTTXUIBRVKZYINZZJSOGKCFLMFAXKYUGOLSYXUOMATIQNYGTDVZMGIDGKOXCCQKEPNJNSRKTJUHDUOPFSMZCPRJEQQVRKPWJTDUHXQXKEDHMRLLH");
    tmp_msg_0.type = 106U;
    tmp_msg_0.access = 142U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AVXWPNPVNHHPINLEYWHQRXODJOIWOWIYUCDQTKGIDRXRYNFMQILPOYBTDUCJFSXBAFMUWWVPCNATVDSHMZTQUEFWSMACMTGZTQZSULZBMIOFSBJCLHGZFWKJ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("NLIHVESJHTDIUEVMFHYZYGXPHMGOCMLFWYYXKJVBBJWCJNIUGZFKVLKQUQYDJNDL");
    tmp_msg_1.dest_man.assign("XSCUGOWDWENDAUBVLJAYPPYVWZCBMJKYHLSXZQLQJSHUMZHQQWCKNAZIBGNJUEIQSCLERQMTRFYBGOUJHBXDBMZPKAAOGOTWCESKXUFFAYRJYVJHFLABIRZORGTVXLYMDMIJHRVQPEEKUGKGUWX");
    tmp_msg_1.conditions.assign("GJYZNPNYTSIKXDDXQPHQFWQYWPJOCRQVHJKZFOENUXKVIAUNFSRYOXNUDMBHWFDSORZLQHXVXRCULESYEMPTKVRVQSLTZCVKOAJBRHYLMNITKGCIAMTZBTMOOEJJMIOSQCBEXCJXPIVDITAICWSGZUGSBUTXFDWZRYNSWJHYGLACCOZPDEBVDMMBGPIFMJKWJUNRPGFZBHPDNQOULRVLKTHAUARGPQWBAILKEUNEH");
    msg.transitions.push_back(tmp_msg_1);
    IMC::DepthOffset tmp_msg_2;
    tmp_msg_2.value = 0.716047339262;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.770112885083);
    msg.setSource(2954U);
    msg.setSourceEntity(133U);
    msg.setDestination(26042U);
    msg.setDestinationEntity(9U);
    msg.plan_id.assign("TGWKGYVEYTVNOBMWYRVQAEJWZJNFTCIXVLFRUQXYFRYXWRRSCLAOLBIOUDHJVQIRCUGDKSX");
    msg.description.assign("XAQQKZWGPDKCEBWGFXHZRNQGSZVQCTSCBUNIOFTZVFBUHXESKVJVRDGYTYAHELNJHQRXBMNPJXMIIDEOJOYGIBTHYWUTVWNSFENXUOPMHKTSFCLYOFOMUGRAREKSCCMKO");
    msg.vnamespace.assign("RXSUIHFKHIJTQIDGZWGUQICCAXTPMBJTDCBEWRLTNVXZPULMGUEFCPPCDSBRBTVBWFJYJSQYZDPLSDZCHTDQVOKUZBBPZVEZGWUKLHQWHMFODVSVXAELCYKQYXOENAWBWLOYZXERSEAOWEFVCJFIHKNOXQFHLTJLOYDGJY");
    msg.start_man_id.assign("VMXMSUCAWJXYPHSSSXWGIDETQEZPCHBNTOBMPCLSWVNBTEUJVWYVUNIEZTMPBAKQRKGIXEYHMWBIBGEOKXEANSPJHKTJXOHLSKDFZYFMDOALUNXNABTNICIFPEFEMRAQHTJFPJQDNCOOCWDAL");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 44623U;
    tmp_msg_0.custom.assign("HBOTESJIQRRFOVWQLIRIYWWATFZLCUDNBGTOQMLZQUJYGNHDAIZJSICQUTKGZOMQVBPABYKKZMZXVFYRDBEVEAHLOAFOUSXQAVDRCPTTXSIJAHHDXIPEOILPZOCBJRWCUXJGMXPWUCAEFXNRJW");
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.12726683055);
    msg.setSource(3962U);
    msg.setSourceEntity(217U);
    msg.setDestination(55325U);
    msg.setDestinationEntity(219U);
    msg.plan_id.assign("FFPDSATTNBZJOSIBMPQJMDCOTXZYCBFUFRKPXWPFJISQWKNUEBOOWAVOQYQSXQZHERFIGERCBSMSWFEEYYNDPBIZMIAPOFZQRSCHKYDIVTXFIHRTNXLYLSYVAOEDNTEWPEOMLAXTGPHDVKZLHDCRAKNIQXJXTWGDROMYJBJVVUDCHN");
    msg.description.assign("SONWVTZMLDABFVLAFIQRYQYQKWTBEXREZWSTNQCDVSDWAJGBOREIQIDWLRVHBAJFMAFOXHCGBUITJKREEGTPHEVCFNZKVPBCFQUKUMHZURMXGGXHLNEIGYHKXKNULE");
    msg.vnamespace.assign("EPBAVSDEOEVGWZLNAQSWSKUTZOFINXSDQAHXNBWKSGKAXNRRMNMPVFDYGIROKTFMAEIOROYJYGZIHBCKQMVJEVEDOXHZUYQPXXFGOUFUSGKGUAVJCWYTFTNYQMJCLBSUJVFUOSEULGEIPTFWJYSIFBILBQZCJIAGTCZWPRMTKZHMCPXMUWHDKNRDPIVGBTRLLLYHZELXXHXDLPHLCQRW");
    msg.start_man_id.assign("TWXGSFQLWHTIUHZGYTKMVKQRRXJYEVOKBBJCKICRIUAOWFIZFCJCQAPBDAUFGNXJFBNLFRSZQHVQBEUSOTHCKVQLKUSMCADHRMOMMZVEUCVQGYQ");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 6004U;
    tmp_msg_0.ttl = 65062U;
    tmp_msg_0.destination.assign("NUPRDKREHTAMZPDSBTXHLYUWZUXZUUSMDNVLMJWIWLUIWNAZAHUGHJCYRLXFXGSCJNVSFXFOAQSEUQRTAPQSKDOFWRKYODVTFENWQFVSTRZVKICFPQHPZEFAWLKHNNVUKZYCWZDVRDYD");
    const char tmp_tmp_msg_0_0[] = {29, 100, -32, 13, 99, 121, 86, -51, -38, 114, -116, 123, -22, -123, 29, -74, 87, -30, -68, 32, 87, 110, -45, 45, 121, 116, -111, -113, 73, -128, -22, -11, -64, -106, -18, -101, -12, 26, -21, 2, 30, -99, 63, 40, 11, 3, -30, -42, -82, 94, -115, -16, -53, -71, -43, -27, 25, 66, -9, -126, -24, -11, -126, 112, -33, 113, -107, -53, -38, 46, 47, -86, -65, 98, -58, 124, 33, -108, -18, -65, -80, -43, 77, 72, 99, -93, -98, 66, -38, -25, 46, -61, -122, -1, -46, 104, 5, 6, -62, 83, -64, 21, 124, 115, -70, -10, 34};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.851449624588);
    msg.setSource(18228U);
    msg.setSourceEntity(136U);
    msg.setDestination(15870U);
    msg.setDestinationEntity(213U);
    msg.maneuver_id.assign("JENQCHPZDBMXYGYELJMRLBXSCSJFRZWFBULTMEFQNQPXMMAULHHSJIVSGBVHDLDYFHOJHCKLAUPHBIAZVWJGNRWOYKXGGPCQNVYVXYIDVZFAVSWNBVTDZFTYDWQOTOTGSKZLRJICLYKWANXQPNTERTCE");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.568530716954;
    tmp_msg_0.lon = 0.316881725795;
    tmp_msg_0.z = 0.0442041119674;
    tmp_msg_0.z_units = 88U;
    tmp_msg_0.speed = 0.622683237719;
    tmp_msg_0.speed_units = 8U;
    tmp_msg_0.abort_z = 0.278425309885;
    tmp_msg_0.bearing = 0.874929019162;
    tmp_msg_0.glide_slope = 217U;
    tmp_msg_0.glide_slope_alt = 0.670177198152;
    tmp_msg_0.custom.assign("AAAVOLAGMRHYSVXTEKHXBESKMUDFWQPRFIEYXSLFPCXDEVKKOTTACBOXMKROOJPIPJNMTCHDYHNOCFJVNUBZRMBTNCIZXZDHLZWWPLGJFUGZWHFYWXNCTKVWBLQJDNRVSWJRNCQHQABGDIQUJXFRYVRIUAUFKMUUZIFTEBEUKROAWPLNVDGHDQHYPYAJPQLQPSNLGJESBFCZZXBGSEZISMLHDLMBECKVPR");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.436697621008);
    msg.setSource(32468U);
    msg.setSourceEntity(3U);
    msg.setDestination(1659U);
    msg.setDestinationEntity(129U);
    msg.maneuver_id.assign("RHCJCZZQNPTSRLKMMZZVTQAQABLGSAWEPMBYLNMGFIIPNENAKBSOLROUTJSXVZMDVHJNSRMJXHEVPSGJYMBXTOUOQLWWDCHWIRHIACFEJHORVGBKGCA");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("OLIIPYGPZTKMIUKGVITRSJJVAPLWJPAAHNENNQYCNQYLIWCDFEUUXERCYDDJHSXEXSWVKGRNLZHDMXQTROUOSTLNIKHONIFQOTDHEWPMRGFHUKTYYXBAVDGBWXARCSZTGUJMRLIAQXYUFSFZOGVERMNVBWNMCYJGQKDBGNPXYCLTVLBPZW");
    msg.data.set(tmp_msg_0);
    IMC::Tachograph tmp_msg_1;
    tmp_msg_1.timestamp_last_service = 0.390660386984;
    tmp_msg_1.time_next_service = 0.352676889531;
    tmp_msg_1.time_motor_next_service = 0.141810504685;
    tmp_msg_1.time_idle_ground = 0.975768157126;
    tmp_msg_1.time_idle_air = 0.449002472105;
    tmp_msg_1.time_idle_water = 0.460650321615;
    tmp_msg_1.time_idle_underwater = 0.979178541764;
    tmp_msg_1.time_idle_unknown = 0.582253578306;
    tmp_msg_1.time_motor_ground = 0.542698918902;
    tmp_msg_1.time_motor_air = 0.440868331789;
    tmp_msg_1.time_motor_water = 0.0261017932741;
    tmp_msg_1.time_motor_underwater = 0.92494524887;
    tmp_msg_1.time_motor_unknown = 0.576096598047;
    tmp_msg_1.rpm_min = 8190;
    tmp_msg_1.rpm_max = 27416;
    tmp_msg_1.depth_max = 0.628275243526;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::FormationParameters tmp_msg_2;
    tmp_msg_2.formation_name.assign("JXKBOUJUOGCY");
    tmp_msg_2.reference_frame = 126U;
    tmp_msg_2.custom.assign("ONHUFWACFFHPELQUTUMOJIMRPKECXXCUNSXIIVXFILCBWWZHUYDYTBNIJHXLLRJDKWQCZSAKPTTGERQBSVUJJYWNQAGBXRSMSCYNEGEQSSOGZRDNCMZMBMPVWBOETVBHWDDPHLK");
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
    msg.setTimeStamp(0.794622458591);
    msg.setSource(6269U);
    msg.setSourceEntity(70U);
    msg.setDestination(25536U);
    msg.setDestinationEntity(226U);
    msg.maneuver_id.assign("BICGDIODDYSHWBRKXXIIHXMMOYQ");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 57644U;
    tmp_msg_0.lat = 0.794715393616;
    tmp_msg_0.lon = 0.751744919779;
    tmp_msg_0.z = 0.928796601062;
    tmp_msg_0.z_units = 173U;
    tmp_msg_0.duration = 41007U;
    tmp_msg_0.speed = 0.883410151276;
    tmp_msg_0.speed_units = 125U;
    tmp_msg_0.type = 8U;
    tmp_msg_0.radius = 0.675239608507;
    tmp_msg_0.length = 0.840720354564;
    tmp_msg_0.bearing = 0.92327728794;
    tmp_msg_0.direction = 140U;
    tmp_msg_0.custom.assign("XPXSEUEDADMTJXMSWLZHLFTEVBYQPFDISCZMMOUBGQRNAOBFRAELJSXCMUDBCLCYAIKFYLIPYRIPNPXLMUPHIDAVYOMWOGRNMWHATD");
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
    msg.setTimeStamp(0.515329502537);
    msg.setSource(64987U);
    msg.setSourceEntity(140U);
    msg.setDestination(21394U);
    msg.setDestinationEntity(93U);
    msg.source_man.assign("QMVKGPLSJTDZNRNZEMYIYEMZPTFAYXUHCZEDMZRYWPEKFHFVBNQNXQWWABWFDGCLDPDFHBBCQYVQGGWPBVTCFUEVDOICGLFRSIAAAELOKPKLJVSOHJGYIGVCPQWTHMVBIUNFZPJSAHLSPKTSXINXJFRNUHZAYEVONCBWDRUJMUILJATTRYKCXIORRAZK");
    msg.dest_man.assign("TGENGNEIIOZDUFRHBAKVXTGURSHHMKDWQHBCYWZYPIFIIOTYBTEGCBSJAPGHHKOZKQSBJWZAROGDNEZIUNGWQLTOEXG");
    msg.conditions.assign("YIXTAYLOOJJVBWCDE");

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
    msg.setTimeStamp(0.0172495637188);
    msg.setSource(22760U);
    msg.setSourceEntity(231U);
    msg.setDestination(32262U);
    msg.setDestinationEntity(239U);
    msg.source_man.assign("LFVGBLLGARECNZTKOQCOJOJDBKVUTRPUTANMPROYMMQKYOQHHBFIMJHDXCVQOVBSGAHHHYDWEGWZRLWVAFIPJSBMUXUDTLXFDMOITGNWZUUMXLMRFLGCVKDUCAOEINLGIHQAHQSLSCKJZJXMTABGESPJFFRZYEKOBGPNSWRBZPRTQRTIYYNZIANOAAXVECNKGXSPQDRNKTJSYMDETWQF");
    msg.dest_man.assign("JNGHXIQTBKHDQTYKOEVHITVCWLZGELQMXOIDAPURFYTBCMFHDEHDUWOGQDVYJHSKSECDZZEIGRVPALATYULJPNPAVXNUCNAAPQDFKYRPXFCWQTBZIBPMWHOCMEQKWXARFC");
    msg.conditions.assign("MTRYBAEBGAPLVHBJHKMDJLWOTXRLCLPGURAEDNNOPJVEKLEHQZTPJTYKFNAYYBH");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 188U;
    tmp_msg_0.mask = 2822380814U;
    tmp_msg_0.scope_ref = 3512058646U;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.60409512957);
    msg.setSource(23085U);
    msg.setSourceEntity(136U);
    msg.setDestination(46294U);
    msg.setDestinationEntity(78U);
    msg.source_man.assign("OVVFLLHUGRHTBSGAXWGVNTVIUNKMHYLWIHL");
    msg.dest_man.assign("KLVHLCIHVDGKNWJQTGZITGGZQCJUIYBUEFMXUGRNFBPVLDVKJUAAHOCHGSZPANKDDBUWPUJZRCSOXBYTFYFLZORRWQIRUERTOUVACAHHXJQNIFCKYCAWTPQWGZTMWAEWIJKOYDFPKVXADFLISXKTLSGSMSTNTFVOPSMDJEJDPJCQSMMCBFYJRZAEADWUSLXXMBNNB");
    msg.conditions.assign("RVBPFDOJPURWXZDUEUJNKNNZCAGDWKVVCKLFJOZDQOXCQBWEQUHMVFXCBVYKIBJTKZLYMFUDTYTWBTTCEIJBKAYKNANNI");

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
    msg.setTimeStamp(0.144753210224);
    msg.setSource(58986U);
    msg.setSourceEntity(12U);
    msg.setDestination(61979U);
    msg.setDestinationEntity(194U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UKILJSZGPUWSZZDPUMXEAMEGOHSRCFVUZWOYXHWWANPZMNCKUWLVGETERQOETOMPTFLSFLYIQRCHKQCKWHIANAPCPZVTCHVIPIXYTGALFUGVFTDQJINBTJHDBBK");
    tmp_msg_0.description.assign("ZUAEFDYIWOWDJTFNBIHNPMVRRQ");
    tmp_msg_0.vnamespace.assign("WWWLOLJGWWXHOBDXZCTJYTFIVKKEPCYDLBVYPVNIEOTBACEDUZPCAEGSGHKUDQUFBNTLHMMQJXCFVRUTCLNFLPIOAGHZYSABFKLRPHNWUNBPSSQFJAIDLTYWJVWQMBINOBSRRMDBCNXOETDQUEZKSSQWGHXXOPGMDMMSJCVZBSAJEZGAVIKQYGKCXUTVXVUINUMJMQELRKNHXHTJYHRYCYZGDVRODZOFPRHROLIINFRPEKEZJITQQAGMSAZYFX");
    tmp_msg_0.start_man_id.assign("KYSPPDVTNTPMWPOAHNXDQLRBIWJIUXUZXHEZBROQDSBPRZJLIXCKHKLNSRHUEIAFXBXAFNGVZWRJEDIFTCLCDWKSVUEAMLVZPWUJAPWNLTZYFKICLCHRGHNHFYLCEVQBDMAYVUGOGEAICYFIMUSOSDWVGFDOFYWLJYQOHYSMIYRWIMXDHZVUDOKMANPJZJVOTPRMKQZFQCBFBSMGJBKXTENEOONZTTQX");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("PTTWZNEFNBXUQVAADDVVMSYYIWFKPEXRIMMUWCUAZZCBLMOZZRADCVNMTAPANSUBVXIPCRIQEGYKXTJHITDQYQJGLBAX");
    tmp_tmp_msg_0_0.dest_man.assign("XFZWQVOBLZWFOVNXAJNWMDSQYJLVILEXAOAP");
    tmp_tmp_msg_0_0.conditions.assign("DVFBFYFVBGQBZRNIHEUIVLNSRKCZOKXESHN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::Elevator tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 38421U;
    tmp_tmp_msg_0_1.flags = 130U;
    tmp_tmp_msg_0_1.lat = 0.532357651812;
    tmp_tmp_msg_0_1.lon = 0.111986493263;
    tmp_tmp_msg_0_1.start_z = 0.526680818241;
    tmp_tmp_msg_0_1.start_z_units = 0U;
    tmp_tmp_msg_0_1.end_z = 0.0972460733959;
    tmp_tmp_msg_0_1.end_z_units = 122U;
    tmp_tmp_msg_0_1.radius = 0.248640152099;
    tmp_tmp_msg_0_1.speed = 0.962365004812;
    tmp_tmp_msg_0_1.speed_units = 159U;
    tmp_tmp_msg_0_1.custom.assign("BYWTJIFLMTPIHBMJZRHUUTXPXTTJPUJQVEUAJMCPTXZVCMOLNWREKINDFYEYBDAUSMABCSVYGOJVKLDDRWZGQKEGAHYUOGFGFYMPCEHNEWBTQEJCHDQOD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.728025644634);
    msg.setSource(7973U);
    msg.setSourceEntity(178U);
    msg.setDestination(38708U);
    msg.setDestinationEntity(122U);
    msg.command = 200U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OONHZDKONCFAWLJFSKCNMDDDMRHWXIVCIQPCVIAYGQFATQHWBOUUAJYWP");
    tmp_msg_0.description.assign("QYYNOQZJWPUZEIPVZXHYHRSQXUHLXEQGVVWPDCTLHJCHGPFTTNXOZECUQCORLMRZFRDEDWWQJEACZIPIFBDNKLWJJISGTSVQBMWFNHNFMYQOUASUTGYJSEIKDLITDCILGAEPWVGKZCOXVBWRIGGRKVEKDKBVEBZUMFLAJNMTPRB");
    tmp_msg_0.vnamespace.assign("ABXEJNZLRCTGPSGMSABPNXYQWFITEGXTBGPOEPWBLGZDCLZDRSKXUHTOHWMJIAOJOEQ");
    tmp_msg_0.start_man_id.assign("RQPDHGAUFVLPDMKSZGKDOAPRJEUNDFGOHDQCGNWIXTFCLAZNXRAUTSFUGZYYVWZXUFDAUAWMURXCINBIKTMRKHUBBOKIXGOYPLGQTIBFTRQPYOAEXDNCUSVECJVESIJLYCOZPLLSQMVELWQPRVWHLDWLCBBEMTFYPHXZRT");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("FOVAPCDNAFXKCLFIQBNLRVTQEVRRGQCPUNYZJMPBHANSTCZXFYDMVXIPZQKWEORJGBQXJFBOTXUUXFMOIQYBPHPDMHTFRTUICDDCYUHUQBCGLSFYEBYUPMIUVKLSPDWKLAGHCWJCRSXIBOWGWIAVWZGAKNEAEJPJNJGL");
    tmp_tmp_msg_0_0.dest_man.assign("XBPCIXHHDCNPLEBIIMAFVJRFHMUBKLSXKV");
    tmp_tmp_msg_0_0.conditions.assign("OHIULBALDSPQZGXJRDQXCBNYJBWWQDBIARBPADHGTDTGAEZENOSRZCLHXWVAFCHRSNYILQLEDTNBNXWMEHPMRWECFQOMMVXKFEFCRXHTZJOXOCIJUTCIORFOGGSFVTAWYMYHUZUFOLMMEDJECSEOVQIJEWTQSGVXDATGKLUMXYPKZRWACJGKKBNPCNHZLPUKPUPUYBBRSPRQVNVVLSQKDJXZAKQHVYOMDGPVGYANUFKIZSZYTYTIMUJBJK");
    IMC::FormCtrlParam tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.action = 55U;
    tmp_tmp_tmp_msg_0_0_0.longain = 0.766464025476;
    tmp_tmp_tmp_msg_0_0_0.latgain = 0.749557198862;
    tmp_tmp_tmp_msg_0_0_0.bondthick = 1545099191U;
    tmp_tmp_tmp_msg_0_0_0.leadgain = 0.234865454668;
    tmp_tmp_tmp_msg_0_0_0.deconflgain = 0.77236751543;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::IdleManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.duration = 13269U;
    tmp_tmp_msg_0_1.custom.assign("AKMQQBDBVCNUOZZOSZKMLMWRNKFCUAOMRWKZJFQRTPOFXPFVUKEVDBCPCAUXENJLYWLKFYPOWJPPEXFYEETVNSOGJFLANEZHYDHDGCYGYDRBDUYEOKXBLNMSZOGMXJVADDWRFWMBYHQRTKWMLVJZWLIIGDTRXIMNZSCLVOGFEIHMQTATPABJW");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.692280716968);
    msg.setSource(18622U);
    msg.setSourceEntity(175U);
    msg.setDestination(619U);
    msg.setDestinationEntity(85U);
    msg.command = 243U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NBODHKBDRCIADFAYXTHXAT");
    tmp_msg_0.description.assign("CHXYXHRTBHBKLRLIDMGSJEJBOIVJFNFPWYXUPZSDNXIMAAGPGQBQSBNVTUTEXLGEZRA");
    tmp_msg_0.vnamespace.assign("KZYFQHMFTWJNUOUFQBGKB");
    tmp_msg_0.start_man_id.assign("FQAMFCZHPOAXBUTHOIRNEOQJWEDUMAMKOLSKJDQTKVOQCNCFTLKCJIZPCSSDNERNHMZKZZJDYHRSXTEXLHFDVAUVEBJTDKUINOAQKSLERNIZNVSBVFHSYGWDGSCYNJGCQXFLBJYSAOPMXEPXRSGWGYNOHQZPWIBTVFLZEUXYQVPFUHDGZCVQTMTBTBGCEUILKRFGCVXVLREIBYRXPDOBUXLUWGJWWHJMQRLA");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("FZSEWAQUDKURNPTDKHLDCOCVSZIUNOUIYDSCOFOZDPNZZPBDKSFMVYXLQGVEQYETMM");
    tmp_tmp_msg_0_0.dest_man.assign("DRWBYTOURSHDJPDHLBLGASNVIFKQPWESQCARHHUALBFAKYJDIWHPGDPGKSIIBKNNXAGRJYMVGTKVBBTTMEVLDKJFKZTYZKMRTCBVZCJUWDLSMVZECMXYJOTHRTRMAPZUHYSXWCIFDRTEQCJC");
    tmp_tmp_msg_0_0.conditions.assign("SSXPJVCLWOLDRCRTBYYOFFMAIPKSHQHMQWOZHXZWDEBFNEEATBXAVKSPVURARBCEJTHPIKQRPJXMDPOUHPAMCEEWYUVEAVYZCIDZTBIBNGTCVNOXYFMGNDKQVKSBZNZGYESDGGIMMTVIKOUGWVUBHOGICLLREWMQLTXKJIGNMJAYVZQXXFJWPCZDLKQOHFJCWAGLRNKDROHJUAUKWNFPLIFBBCXURHNTF");
    IMC::LblRange tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 199U;
    tmp_tmp_tmp_msg_0_0_0.range = 0.323129341052;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::Land tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.732714528037;
    tmp_tmp_msg_0_1.lon = 0.683886137374;
    tmp_tmp_msg_0_1.z = 0.245186982057;
    tmp_tmp_msg_0_1.z_units = 195U;
    tmp_tmp_msg_0_1.speed = 0.218143109094;
    tmp_tmp_msg_0_1.speed_units = 214U;
    tmp_tmp_msg_0_1.abort_z = 0.861446388701;
    tmp_tmp_msg_0_1.bearing = 0.974660572127;
    tmp_tmp_msg_0_1.glide_slope = 35U;
    tmp_tmp_msg_0_1.glide_slope_alt = 0.343329703963;
    tmp_tmp_msg_0_1.custom.assign("QEIOMZULUILHIHWRVMDWAWPSLKTXAUCOLIUWIGGEWMRNGZQBBQVJDSXMNUHZPZZJMJEDQYKTRYVXSGCDAVZFTACMEAXFQTVYKGEWTNNUGBRNBJRFHULEZVMSBJPAPHQXWNSNJ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.412539217733);
    msg.setSource(47311U);
    msg.setSourceEntity(183U);
    msg.setDestination(50562U);
    msg.setDestinationEntity(191U);
    msg.state = 3U;
    msg.plan_id.assign("HRAWRXAODISPDFGEFYFQAVWTPIJIHDLSOZSUZIDAJLNHKXYNVJBMMNAZOKJWBRTQRETPLCZFKPTOFNUYSWBLGUFUSBXBMEZCSAEZRXYMDCHRMJZXCGDMAJEFEGSRELVYGILOWPHMSQGSKN");
    msg.comm_level = 54U;

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
    msg.setTimeStamp(0.45850907303);
    msg.setSource(58149U);
    msg.setSourceEntity(186U);
    msg.setDestination(40503U);
    msg.setDestinationEntity(120U);
    msg.state = 228U;
    msg.plan_id.assign("FXSONWUNXJLVZJCYRSGIUSSKQSVNCCMTZOFELAZNVOVOAMNPSJTPBEVIF");
    msg.comm_level = 249U;

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
    msg.setTimeStamp(0.598602241185);
    msg.setSource(47632U);
    msg.setSourceEntity(98U);
    msg.setDestination(5160U);
    msg.setDestinationEntity(168U);
    msg.state = 99U;
    msg.plan_id.assign("NZIIERWLNODFPNWDDDLNJVKFBYEOLHPGKSUZFKMXYTIEACJWGDMZQLCVIAXIFCSDYRKAEIMUHYPSUZCOSQRSSUCPLLJMAIZMNFBQTBDEXFTVAQFAYASRNMZXPRJWEXQOSLLXVW");
    msg.comm_level = 118U;

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
    msg.setTimeStamp(0.487260558245);
    msg.setSource(2684U);
    msg.setSourceEntity(0U);
    msg.setDestination(45966U);
    msg.setDestinationEntity(104U);
    msg.type = 168U;
    msg.op = 202U;
    msg.request_id = 28481U;
    msg.plan_id.assign("UMKTVJZEUGFTVWIZFBFUWDEXYJESKOZSHVPOMAXRDBXJVHQYNRKSJXTNHZPINFQHD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WDTLAMPVGTKMDCOCPZGKUQCRZJMSQYVSVDJHPQHNDLZOSSCTXGBPOWSLQPUQXEFRBXNTMDZHJOWENIDVCEMKVZJRHKWLSAYYGBBMWOMHDGLZJWTTAKWKUYFSNYFGWGCBMVYOIPDFTZF");
    tmp_msg_0.predicate.assign("TBEJFJZDWJUUEQWPJSWHCYETKHDNNXWGSBXLFYRILTCFTDRELFTDLQAFLWLUWNTBAARVMZPZEUYIXEPSVPXAUTRMSSOSUOOROTLONPMMTZPCQDXPTNCDGHQRRSKMWQZAFNHHHVGOZMABFZHKPYWDQQNDJLXGXCQYNJJUGIDAAMUVNQHSXJGWJIVEMAKEJMIYBMCFXPVVAKZQPKOBVGCGIHSCVIKOZYGOSYKBFVBRYXKCRHBCWGRLINEDKIUE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RTCLEUXIREKPHVJPUKTRKQEPZNHFQFEVFAFFVLMLXMDJCTGODPCNNGAIVJSIJHUIJBBUTTPRWIDMFWQYANARGFEGILXZWVTBUUHIZLEUUJRBZSYWBXDYXXYHTKPCLDXBKODKBQAZDAIGAYVMMSBVHZFOYOGOPNCSYMWNZHCZRJROYEMJLQQSFGSNCJEURPVWKTSWJXQOWHEAXQUMBXYZKINASGEGLKOVVCOIZTYWQCLPRW");
    tmp_tmp_msg_0_0.attr_type = 216U;
    tmp_tmp_msg_0_0.min.assign("DQTZYSUGAETBFNAEKCRHUQWVFJEOELNCYNPWNGCUYOVBWLMPDLDAS");
    tmp_tmp_msg_0_0.max.assign("AEMPIZRFLVCHOLMWRJBEJVHTFJMXMNOOJNIQZFTKRDYVQTBOWUWVPSSHLXEUXZIUFUCNNDLAFEIZAMBDRCPJHNLCQBQVJDBBOZLDKGKDNUOEVISRBQYHCNMENTVIGBHPJZFDCOKNSSZXHUXDMQJYKSRQEKWVILRUAPBQY");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ADLVFDGLPRPAZBYUBHEIUCXTEHHDLMJNFMPQGRIGOYKALAQPSFCMJWUDHNGAETZSPMAEQKYZHVWRZBYCKSPDKKRGLWONXWNTCXJKOCGTLQNNOAFXBBBFMRFHMKVSBXAZVEVQWKFCOIGSOGKERXJPSWIWSJPAOWMHTYCEULPEEVJLNSACZJHTVFCUZKIBY");

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
    msg.setTimeStamp(0.54753328856);
    msg.setSource(60472U);
    msg.setSourceEntity(207U);
    msg.setDestination(9488U);
    msg.setDestinationEntity(201U);
    msg.type = 3U;
    msg.op = 104U;
    msg.request_id = 45174U;
    msg.plan_id.assign("VOEICRJQIXWTDDMDYKSJDSHBPJTNZZPAGDR");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 39213U;
    tmp_msg_0.plan_size = 2605652006U;
    tmp_msg_0.change_time = 0.564655751518;
    tmp_msg_0.change_sid = 58163U;
    tmp_msg_0.change_sname.assign("CLWOPGJJJFBZPWRQJFYOPAMDAIKQHTLCZHELLSGJBTEBPYMRFWBEUTXULYIFDYCRHTLHHPKQDIGIRAMSQCXUWZNXQBPFPXIAMDCYMASMSGBHIXOVDRCVEEZGWUOKJKZBTMXKCLWP");
    const char tmp_tmp_msg_0_0[] = {74, 115, 38, -68, -88, 0, 45, 57, 19, -29, 96, -55, 65, -52, -74, -103, -77, 117, 105, -45, 56, 107, 36, -55, 0, -39, -124, -103, -27, 119, 53, -56, 65, 57, 56, -121, -24, 81, -102, 117, 46, -120, -28, 55, 33, -103, 28, 48, -22, 94, 110, -4, 31, -68, 29, 38, 81, -103, -2, -114, 65, -98, -28, 92, -94, 69, -35, -19, 117, -84, -1, -87, -46, -5, 48, 61, -42, -55, 75, 14, 84, -125, 12, -75, -52, -6, -50, -107, -7, -109, 109, 44, -69, 22, 31, -13, -114, 94, -42, 100, -118, -50, -122, 80, 52, 35, -13, -65, -64, -44, -127, 47, 1, -74, 27, 41, -122, 109, 111, -25, 45, 111, -48, 122, -33, 105, -112, 10, -47, 118, -63, -121, 44, -96, -55, 117, 88, -123, 55, 7, -116, -102, -120, 125, -83, -94, -62, 47, -18, 83, 60, 85, 8, -128, 32, -42, 98, -105, -85, 75, 36, -23, 45, -109, 68, 27, -94, -57, -18, -95, 70, -124, 77, 41, 42, 19, -10, -101, -61, -104, -31, 45, 71, -5, 90, -79, -30, 60, -67, 81, -62, 54, 49, 117, 116, 52, 9, -43, 33, 99, -40, -109, -29, -46, 78, 72, -41};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UYLMZQDLAVWYUMVMDAWMZGSDBRZGRNJAVEGRGORCFGVJBOHTCXUSHKKUIBDXHPUQSKJRNLYJPHLTDTAAGAREQASBHSCIYGXEJPOEDHPNKYFTUTYQHUTZYVFVUVECNSLXFKEXUHBFLZXCHOPQSNEEMCAYCJKOQXTCRAPMIISQFKWCNWIBJIPMLSPPTMLMAFJWBSVZWIDYGIRNFWOEWJIJBOVQXLDNZOHMBWTF");

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
    msg.setTimeStamp(0.513130593993);
    msg.setSource(25670U);
    msg.setSourceEntity(0U);
    msg.setDestination(12542U);
    msg.setDestinationEntity(102U);
    msg.type = 200U;
    msg.op = 6U;
    msg.request_id = 11426U;
    msg.plan_id.assign("DPPNAWKCOZIWTQSJWYYDVNDDMHZXFLFWEWJUDAOYAXPKZCTUTLREMVVLES");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 39800U;
    tmp_msg_0.rpm = 0.737935324282;
    tmp_msg_0.direction = 55U;
    tmp_msg_0.custom.assign("FTCYXXXTFLGTJMCNBYWKNOOJEWEDSPWFMLRFSMOIFSOIGWNNYVSDVVRYYAPOPLBYFGQMVEBBAPDBVSXAAKYKDWZIPLRVRC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OVZGBJGKIAUFVBJLJWBCGYSGBCRTVTLSDAZDMQVEOFWCTSSELDAVCLMWPYFLHMMSYXJXTKYCTAMMIDBJAIREJJFNWVGZRWOFRXVYLTQYNHSHUSXSMLPINZKKADDCAWHEUVPIBRRGZDQTRRMOAYTSPHZQCUEGPFVIIKEXICUXROQIADLHDFUP");

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
    msg.setTimeStamp(0.628993249614);
    msg.setSource(29606U);
    msg.setSourceEntity(11U);
    msg.setDestination(37709U);
    msg.setDestinationEntity(189U);
    msg.plan_count = 6580U;
    msg.plan_size = 2369048260U;
    msg.change_time = 0.753793838141;
    msg.change_sid = 59513U;
    msg.change_sname.assign("ENDWBTDMYXKBAUNJONRKEWIHUQSXCSZXVPVLKVMVVDZEWRPAKYPKGQZFLVAIGDLGSMDGCYLNRKGM");
    const char tmp_msg_0[] = {-44, 46, -69, 113, 82, -62, -90, 31, -123, -23, 53, -8, 61, -70, -16, -1, 12, 56, 64, 45, -37, -18, 51, 126, -69, -41, -120, 80, -2, 117};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.403531609283);
    msg.setSource(32813U);
    msg.setSourceEntity(49U);
    msg.setDestination(40756U);
    msg.setDestinationEntity(87U);
    msg.plan_count = 21783U;
    msg.plan_size = 4277013615U;
    msg.change_time = 0.132129602743;
    msg.change_sid = 21946U;
    msg.change_sname.assign("XCTNOERWGZWJUIJABQEZWIJLROFSSZOPJNKNDKNVXZGFHORMHYGFPXUWASVCHCFRWFRLLVJYBQVIFLGQYZNHILLHEQMLCXICXYQMYCATVOBHMQXMHMKPDCOFZRABPNYESJXOUPEEPDCGLOCBYDONSLTIXTTTVGBUDUTRDPAEBWQGYYTPKKNQSHUCKSFZFXWRXKVBKNNZVADMOUBSKMDQTYSDBWHIAUKMIGIGURISUJETPJAJ");
    const char tmp_msg_0[] = {48, -34, 54, 96, -14, -67, 34, -29, 78, 122, -107, -41, -115, -94, -35, 80, -11, -58, -58, 8, -40, 2, 54, -67, 124, -27, -37, -68, -42, 33, -48, 7, 30, -88, 50, -43, -106, 84, 25, -89, -9, -82, 125, -33, 120, 2, -89, -6, 98, -34, 87, -58, 98, -31, -126, 59, 46, 83, 62, 66, -115, -96, -82, -13, -72, 32, 27, -35, 65, 108, 11, -25, -73, 36, -26, 84, -123, -126, 61, 3, -49, -17, -97, 45, -104, -110, -54, 10, 125, -114, -71, 104, -25, -44, -53, -16, 104, 29, 81, 14, -69};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VHGEUBAFNCMXNZGTDZACWAHHTDFFTQRDJLMURXUNILOZKUADYEYERTVBPCOJOOBCBIUGYHQYWXNULQVSXPZWPLHVBRUHTFEUPIKKQCCMKIMFZJMJGSEDYJRWKWVNZCKQIMORIDOVSXGASVCABMUX");
    tmp_msg_1.plan_size = 32833U;
    tmp_msg_1.change_time = 0.892283262567;
    tmp_msg_1.change_sid = 15815U;
    tmp_msg_1.change_sname.assign("GXMPKJUTAJQGNICUBHBLVEWEPJTIIDSUVQKACVPPGYXGFLFCBLAOCDSHMOLDJROFBDQSEVOSUAZAZJLQSPCYRPRZWIWXDWNXFSZZBTFVFAHUHNMMKMAZGBIKHEYKNMJTINPSCYKOYDEGEWGOBOJGSSWLOJXGHYTDIPQWNCV");
    const char tmp_tmp_msg_1_0[] = {67, -38, -109, -81, 73, 72, -9, -128, -104, -50, 47, 14, 115, -75, 22, -80, -57, -16, -98, 85, -20, 30, 106, 90, 113, -61, -87, -114, 36, -84, -90, -73, 33, 38, -88, -2, -91, 40, 125, 75, 82, 121, -76, -59, 99, -102, 94, -52, -49, 116, 0, -64, 51, -39, -3, -67, 109, -61, 11, -16, 110, 20, -23, 73, 126, 21, 102, -1, 16, 80, 7, 110, 122, 51, 95, 78, -9, 124, -6, -5, -41, 54, -52, -45, -64, 76, 64, -21, -86, -6, -125, -46, 66, -85, -33, -113, -90, -28, 118, -5, -119, 99, -14, 51, -2, -61, -82, -115, -36, -67, -124, -48, 126, -73, 91, -100, -29, 42, 40, 19, -21, 38, -24, -101, -35, 10, 115, 1, 71, -91, -96, -55, 34, 97, 18, -55, 21, 79, -8, 11, 38, 105, -57, 34, 34, 88, -124, -4, 52, -44, 107, -86, 1, -17, 99, 31, 53, 26, 100, 54, -53, -52, -22, 65, 63, -6, 97, 52, 1, -42, 77, -81, 17, 96, 43, -97, -22, 42, 2, 8, 91, -105, -28, 83, -87, -90, 112, 19, -117, 121, 103, 112, 35};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.977603661655);
    msg.setSource(42438U);
    msg.setSourceEntity(100U);
    msg.setDestination(10477U);
    msg.setDestinationEntity(97U);
    msg.plan_count = 26798U;
    msg.plan_size = 2602391936U;
    msg.change_time = 0.419601899981;
    msg.change_sid = 46973U;
    msg.change_sname.assign("LBNOXTXUMJFTOEPHPKHVYCZMOLOEZSJXGEQHIOCUHXNIQUYBFHRNBDYEACPGGKASKJFUVZVAPFIBQKJTWAUWXESOOPTFWCPDBKKYHBJZRHSXJTLOZZWENCSMMGHTJCUAEAYVFCXCYRHTDGUMBIQVNJUFQLTDVIDURGLZZBGWSVTRERFWPYXDVWLKKKAUVILISRZLBWKFAAQDYJZXYNREMWGWMFPOSCISPNLGRYBERDJTQCQ");
    const char tmp_msg_0[] = {-41, -27, -59, 71, 55, -80, 6, -119, 120, -6, 66, 83, -97, -58, -125, -66, -87, 116, -111, 36, 82, -23, 8, 99, -33, -100, 22, 7, -105, 74, 61, -100, 55, -29, 24, 83, -109, 124, -82, 46, 117, -67, -45, 21, -99};
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
    msg.setTimeStamp(0.556748722016);
    msg.setSource(46325U);
    msg.setSourceEntity(246U);
    msg.setDestination(55702U);
    msg.setDestinationEntity(93U);
    msg.plan_id.assign("XAXTWUVABDUPVXDQZKZSKGDPKRVFHRADTABMGIWOHYPQJJRCDFMVYVGSSZESMEWWLVHSIEEPCLWYZTUAJAVENKGUNBXBOMGXBIFZKKZHPMCRICJQLTKTJLGPYFBHCIFIMTREXQMFCODADSTOELXAWJQZRZCJOWXMUFYTJUDZJEMHRNUOWNITANQLFGKYH");
    msg.plan_size = 6450U;
    msg.change_time = 0.439104181757;
    msg.change_sid = 63080U;
    msg.change_sname.assign("ZUZDVJDFLALQMKQTTQYOZPHRKPGSGHA");
    const char tmp_msg_0[] = {-2, -44, -110, -8, -36, 44, 48, -102, -112, 102, -111, 85, -74, 60, 96, -78, -98, 9, 57, 7, -63, -40, 111, -88, 75, -107, -8, 68, 105, 34, 21, 23, 120, 112, -66, 98, 109, 114, -85, 109, -113, -72, 120, -77, -27, 52, -46, -21, -71, -68, -99, -33, 101, -42, 19, -7, -35, 34, 118, -94, -41, -40, 76, -85, 37, 68, 11, -55, -119, 68, 96, -111, 122, 98, 93, -65, 123, 9, 36, -41, 69, -28, -89, 34, -35, -84, 4, 53, -10, -30, -94, -66, -84, 53, -99, -32, -93, -106, 17, -22, -62, -7, -31, 61, 57, 95, -110, 38, -44, -22, -38, 46, 125, 101, 68, 88, 120, -37, 0, 98, -31, 69, 118, 49, 107, 2, -122, -101, -4, 67, 89, 89, -54, 123, 88, 93, -102, -16, 118, -50, -54, -123, 28, 58, 41, -86, 30, -72, 13, 7, -114, -127, -82, 39, -23, 0, 121, -42, -54, 69, -52, -27, -109, 57, 17, 14, -123, -14, -102, -66, 111, -91, -107, -114, 22, -21, -105, 35, -24, 51, 17, 122, -76, -14, -23, -44, -58, -45, -25, 22, 118, 37, -20, -15, -19, -127, -12, 122, 78, 54, -67, -33, -33, 29, -59, -50, 119, 17, 90, 125, 100, -94, 68, 81, 39};
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
    msg.setTimeStamp(0.424565014333);
    msg.setSource(9363U);
    msg.setSourceEntity(191U);
    msg.setDestination(25564U);
    msg.setDestinationEntity(153U);
    msg.plan_id.assign("LOBCXQWTBZRNBEJDGTDCCUZVOZCWIHJWITHUIVCTNFRRYGWHEWLPXPQMZOCXRYYXWUAMPIBKAGCLYFSJIYTUXONZJVUKIVMEUDREDHFKQHKTQMOVLRWJSKBZBSNDXFXGMEYVROXRYOSSNRZJFBWIHENRBZUCIKWAB");
    msg.plan_size = 17336U;
    msg.change_time = 0.467330619536;
    msg.change_sid = 40154U;
    msg.change_sname.assign("YCHWVQQINOQFYZPLSOLOTVVRCNWXKMVLBAPUHHKLMMZHDBITSXNGIBOBWSQODMXKHDWFDFDSRCRIWMBJXFAEKCAHQGNMEVVUZJESASFLYROS");
    const char tmp_msg_0[] = {-123, 123, -32, -93, 84, 60, 80, -100, 25, 102, -42, 22, 44, 44, 87, -12, 66, 101, 118, -30, 64, 84, 13, -89, 25, -9, -72, 113, -122, -105, -87, -23, -12, -9, 3, -42, 10, -125, -62, 49, -110, 58, -55, -88, 114};
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
    msg.setTimeStamp(0.243921366822);
    msg.setSource(3373U);
    msg.setSourceEntity(2U);
    msg.setDestination(61902U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("RDKUAOOUAJRPPAVNWAFELBOFFVBUZMMVWHRGMIHHLYSFLCSRTNQLLMHREWFLWZPVFJIC");
    msg.plan_size = 4359U;
    msg.change_time = 0.124725514385;
    msg.change_sid = 64635U;
    msg.change_sname.assign("TVMQEIGYDFYQNOHPWPBBYOUBLDKPGLRHS");
    const char tmp_msg_0[] = {66, -30, -52, 69, -49, -36, -116, -101, 12, -34, -124, 94, 0, 6};
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
    msg.setTimeStamp(0.249305421019);
    msg.setSource(53180U);
    msg.setSourceEntity(218U);
    msg.setDestination(9025U);
    msg.setDestinationEntity(105U);
    msg.type = 49U;
    msg.op = 108U;
    msg.request_id = 48875U;
    msg.plan_id.assign("XKGKDAAPOTHDEPZSSFBJBNVXDSDFNMFJQGDQIZKANRUBXVZYFIOXSBWIVFBUWLHEWCRVACEEVLHXWFRIMSWALRWZADGECDHWWXKYPBPKJNGGBWOLJAUBUMZZYLGFFAETXLNIGBPVMGOIYTOUOQPMUPRXCJQRRLTZ");
    msg.flags = 42140U;
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.2056475322;
    tmp_msg_0.roll = 33618U;
    tmp_msg_0.pitch = 19950U;
    tmp_msg_0.yaw = 29221U;
    tmp_msg_0.speed = 14570;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GBIMLXEKLFOTFGBSUDPJNZAOYTAPVEGNPGKASFPCVHDYMDXPMGJZSVAOYYUTKVHXIKQMYRQOOXLRQ");

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
    msg.setTimeStamp(0.731366656148);
    msg.setSource(55389U);
    msg.setSourceEntity(70U);
    msg.setDestination(27680U);
    msg.setDestinationEntity(35U);
    msg.type = 114U;
    msg.op = 212U;
    msg.request_id = 35396U;
    msg.plan_id.assign("DERGLFFISSOYDIVPXKVXKYHSFBVBGZVCASYUQRUEOTZAHPCBOKYZ");
    msg.flags = 52822U;
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("ESLUCTNQWJJIXYYWRXRMWLTIJGNPZDKVRRQFVHWVBQDSNIYFATZTVVZNQJELDPLJSFMFCLBDDEIXZQOUSQKWEMJXOHBUFCNYPZAYEPUNXNNKYSOOXIPFJWIJUIBVFELBKRNBGCTAOPISTZMYTKRFCJXOFWVG");
    const char tmp_tmp_msg_0_0[] = {-98, -93, -90, 5, 83, -73, -53, -97, 37, 41, -17, -1, -128, 101, 93, -91, -63, 99, -124, -94, -67, -128, -49, -50, -26, -75, 126, -37, -68, 24, -24, 30, -14, -27, 69, 59, 54, 99, -86, -112, -90, 26, 74, 0, 101, 32, -98, 42, 101, -33, 48, -57, 54, 33, 0, 36, 43, 36, -84, -36, 68, -124, -84, -58, 121, 53, -66, 82, -112, 121, 80, -13, -59, -116, -102, -42, 3, 75, -120, -100, -28, 81, -52, -21, -97, -42, -53, 111};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EQQECOJGVZTVBYLJXZDMKGDRVNWZRTXTKIUVCJB");

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
    msg.setTimeStamp(0.286778426723);
    msg.setSource(55035U);
    msg.setSourceEntity(65U);
    msg.setDestination(27763U);
    msg.setDestinationEntity(132U);
    msg.type = 242U;
    msg.op = 91U;
    msg.request_id = 10029U;
    msg.plan_id.assign("PEHYTLLUXWMCUXAKVDZPRYRNTRVPQRMABECMQOAIXQJUVFQQFZICDMCSTHMFZKMSCYFASBOCYDLJGJKYVDKIGWT");
    msg.flags = 51103U;
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 162U;
    tmp_msg_0.x = 19190U;
    tmp_msg_0.y = 16745U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LMSXQTZTASILTVGQOZZDPFZIERUHQBEXPRLYCXBIGIDVVXGDONVTDOYJHCYQUFVLRAETYPFIPMUCBZRQCGTWVEAPSQRYNMABIAURKQZXGJJHHOCHBKVLZNWQHGJPONWDWTCYWAMBVRFZWCVMJUXXKDKOGUKIYELFAJCZHGBKPR");

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
    msg.setTimeStamp(0.123629241235);
    msg.setSource(40649U);
    msg.setSourceEntity(224U);
    msg.setDestination(7647U);
    msg.setDestinationEntity(161U);
    msg.state = 82U;
    msg.plan_id.assign("WJSYKISDUJEKMUILEDZBDHVOUZAEFZTECJMYBRAZVPWWQFQEOFBQDQLXLEWKYJYWEYGBRHDOSGPFRBFSTOFELVOBSKYKXUUGFPIGLRZCATXNZVHATJDZUTGPOMCCLHBAZGSHXDRCRXFNNDPDOMNYSZJATWCNHBNGOICMPYCHLTXXJKQYWUVHKAFBCAFGXVPLSEPIQKROCUP");
    msg.plan_eta = 1516561506;
    msg.plan_progress = 0.710855536909;
    msg.man_id.assign("FXFPTKCXXJHVCSVXARKSNTCICSMKWAQOHKMSGNWDUQEGFGDWPBGMUWUQREBLLWPIDXJPNIBAONDUVPTNYQDEPWYZBCWQHIMXTNCHFELNJYTZQVBOSSVRTUXAODUJTKZYNZGTJKREFKAUFVFDDYRONAYMMILIEWWASYCQHKJGBIAELQEIMBCLRQKRRMNSSZEFJJBLXHTWHVIPV");
    msg.man_type = 12735U;
    msg.man_eta = -1277294531;
    msg.last_outcome = 97U;

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
    msg.setTimeStamp(0.85725325164);
    msg.setSource(33069U);
    msg.setSourceEntity(83U);
    msg.setDestination(50791U);
    msg.setDestinationEntity(110U);
    msg.state = 41U;
    msg.plan_id.assign("DBQZKYPOKGKJYIHOESBWLGGBELDAUVLOHNIDUXMYAUGKTRUQSPWWHOHKVROACA");
    msg.plan_eta = 628746627;
    msg.plan_progress = 0.730902773338;
    msg.man_id.assign("DMGYMRXLTKPSCSKLYPRYHNXWHUCEHJGAEPZPAKIJXYYWHTWLZADGLFBTQRIVKAFCVWBWDDUQCDJXVSNKGVLGNUIBNXAZJOLGEHEBTOOTCWJNVVZHXUIQOMHENUEBWYSTWOAGKDRKRXGQKXH");
    msg.man_type = 39131U;
    msg.man_eta = 1926345980;
    msg.last_outcome = 26U;

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
    msg.setTimeStamp(0.640639538702);
    msg.setSource(29740U);
    msg.setSourceEntity(56U);
    msg.setDestination(61602U);
    msg.setDestinationEntity(20U);
    msg.state = 71U;
    msg.plan_id.assign("ZWCFTTYCIYBMBJQJESFRRWBIOLBQVRWVAGXBRMUEUNQOKDUSTRVPYOFGQBAFVZLOYXSJSAHOFBONAALFBUQLMNJOEPPIKWZGWVSDNUNWPUPONEHMVYVRMTJEKKHLZJLRIBDTSCYHJRQPFJFKPEVHUWZSRUWQNXMKOZVRILMWLCBCMSEIDGAVPQKENHQTDCDCHCZUYXJLLIEFXGPZEKIGAHAGCJKWAYMNHSTDPKZDFIQYMX");
    msg.plan_eta = 5513019;
    msg.plan_progress = 0.394762758666;
    msg.man_id.assign("SMAYZERRGXZUYEDWIKROLEGSQIDQLWARMMWVKFABQPNVJTOJPVNAPHVWLPZXSODVPZPYNFFHXANYVBJFAFUMBMJTPCKNREDJXCSFWSRJQCKGTJYHGMLTIJEQERTKMHBOZUNUXBLENFLCOYIXLIDFCDMYZAOXCPJTEOAUCWHSLZKGGWQYKDRGSIFESVWKDXCBHBTHOVIBGZWHZGTXNHHRPSKOYBUSNTQICTDBVJM");
    msg.man_type = 19659U;
    msg.man_eta = -794398387;
    msg.last_outcome = 53U;

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
    msg.setTimeStamp(0.191437486414);
    msg.setSource(20881U);
    msg.setSourceEntity(162U);
    msg.setDestination(24321U);
    msg.setDestinationEntity(130U);
    msg.name.assign("SEPCONARQNHIAZBDLFSFZZUDTTZLGAOMXOVOFCWMIZXSVJGEIDWYXAGBBKPRQWBTDWWKPXFGUAHQONIBSCROPUOVEJPUYAXJFGSPJDQLSNLGKXPXNNYWTAMNCLZKX");
    msg.value.assign("QZGRDRDHZYAKISUQD");
    msg.type = 18U;
    msg.access = 100U;

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
    msg.setTimeStamp(0.534702861969);
    msg.setSource(6620U);
    msg.setSourceEntity(142U);
    msg.setDestination(55280U);
    msg.setDestinationEntity(99U);
    msg.name.assign("DLFRVSDYBNTWVFPNASNHBZMLBTSUCDQYWZXUCRHEFDDNYIPZJPKRIUNOQFVKOOOJFRFKAWMVPCCENNBOFZWRYPXDMQXWMVYEFCSGEDUPKTASXEJSVJCLBICPHFILNWQB");
    msg.value.assign("ZBWGFNQPTVCLQTWNXKDWWUJMYXKYSVHVMMCQHXJZVFZJ");
    msg.type = 101U;
    msg.access = 180U;

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
    msg.setTimeStamp(0.484612608272);
    msg.setSource(20566U);
    msg.setSourceEntity(221U);
    msg.setDestination(25449U);
    msg.setDestinationEntity(251U);
    msg.name.assign("XCGLMTFIFBTOOYRGPXYBVYXOFWUSFLTMZSSYSPJRBCZLMBOOUWDQQJGIXXEOQWBKDMKPTYYLGJPCKYEDYIXEWVMSCOEZUFARNUWRUKTHISRQKSUZVQKTNZZWEPNVXBIKFGLNSJWIOWFDYCUZFUTQIALELV");
    msg.value.assign("ZXRRFCVFXMMCWNUECNXPWCAFMMBHBDKOJCFBHEPGDWXMZKIDWZEJTZDQZPVSBGNGGQFWYNXFUUDVQACKQXO");
    msg.type = 150U;
    msg.access = 171U;

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
    msg.setTimeStamp(0.367351315624);
    msg.setSource(45905U);
    msg.setSourceEntity(225U);
    msg.setDestination(34200U);
    msg.setDestinationEntity(134U);
    msg.cmd = 178U;
    msg.op = 78U;
    msg.plan_id.assign("VSDGJTOLHFVAUZWYMPFZXXMROMLNUXYAVOWLTVSRJCOHPGMUQGKJCNWBDRXEYIVDJIFIVMNRDKNEJUXCYRSOGOGMIFJBQBCUYDUPTTWRRHTEVHNDSLCSPPCBZAPVAEQQBWIGZEIQZQCVODPMKXLBJCATTHJRYKPOJWFELGLMBSHHRYLZTCRSSXWIPWKVPCEEQYGKQXKFKUBMYBGNNWGZNKZXNMYSXZIDFLOBNUTWIQHTUHAH");
    msg.params.assign("LRTSTBUFWRJWAELXJIGWJTXSPLRNEHLBXYZYTMSNOQWQENHQZMNGNAMDSTDKQEJGQPZDKYRTSTYVJXCMKDDSBGFAUNFQ");

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
    msg.setTimeStamp(0.766864954027);
    msg.setSource(46487U);
    msg.setSourceEntity(115U);
    msg.setDestination(39853U);
    msg.setDestinationEntity(166U);
    msg.cmd = 34U;
    msg.op = 62U;
    msg.plan_id.assign("ZDETJRYIHFRLBCIVKXLPQUANJIHTKGIQYZYLDBLNGZOKCVXJVGAFVDOMPAUQRRTXFCWEILEPHDQKWTHDIGBDOWXKSRCNYXSESVWDNYQGZDELKBPZVNOIUUKCQUSXORGLLFWHVDLTPQUOVEMPJFXSZCRNJNAABYJFNMQWFEBGYHGIKRGWWAEXJGUTCOFADEBPFWLZMQTJBHCKZHHBRPTOJAAVIWECSFNUOXMZCMJBUUMPAVXSTMSYHYQN");
    msg.params.assign("XUVYHIYTKHEOFPWUOXPPFEMXHPBNSRYVFIJCBSSSFMFHQLKJTNZFZOEGOOYTGHHZRTTCEEQTOQQZXQUFUIPCJJBNTMCWORMUAAVVVLZDCUKKVAPKJCRBRGTRBLBNANLPFQJMWNWYMGQMIYEZDSGALVLSHQEYMHDOTGEICUIIGCMXZIFULRDDKLBXDCSAVPRGWADXYSZZUU");

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
    msg.setTimeStamp(0.408406251047);
    msg.setSource(47900U);
    msg.setSourceEntity(41U);
    msg.setDestination(23499U);
    msg.setDestinationEntity(91U);
    msg.cmd = 113U;
    msg.op = 51U;
    msg.plan_id.assign("OGCQAEDZYIUMJEAFOZGATJBMDLUGLWHQXJMGRDSCGUIRNMQFTSSAFYSP");
    msg.params.assign("JIJHOMXYJVVOQOBUSGYSDFZROAYCCLOALWLKAMPQEPKMOWNCLIRERLFBFOVTXSPMXNHHMODTNQZUAYFFSHQIBHQQKWGHLJNLZUTAXJETICYLDBQRYTWBBMPGKQQDWPKYTDYDIYTPCGGZEBIKSBJVTNCZWZZKSWXGCTRENFDYVPLAAXMBRSSDNZIVJIEAWLPZDMZBNMPWDFXUOUNFGGJGHCSRUINXFKRXJFEPHSMCUVRWUUEOEQRAX");

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
    msg.setTimeStamp(0.93546347792);
    msg.setSource(65515U);
    msg.setSourceEntity(39U);
    msg.setDestination(55307U);
    msg.setDestinationEntity(176U);
    msg.group_name.assign("RVKXRUNJLULAHSXHWQRCYMAFSMMAFCZBZGWPHURKSTUTLDBCUICPRSYHVOIUTOLJARYYCBJCUNWWIVCDMGPSWQQFOAGMMVBWOUMNKCMYHOFEZOLDYINVNVGDJXSOPWDKKHXEZSBWDCAIQNAKFNQTJEYKTTWTEKJFSNXFBGAEEGXPGUBFATSMDGLPJJRIZBPEOJQHRCFSXQDGIZYOWPPZPLHBBTXZKRXTEXDOVLENUIHHIYLEI");
    msg.op = 75U;
    msg.lat = 0.757250676315;
    msg.lon = 0.901784853075;
    msg.height = 0.142850500655;
    msg.x = 0.21863080603;
    msg.y = 0.95401301736;
    msg.z = 0.999200789598;
    msg.phi = 0.0340504496223;
    msg.theta = 0.187670076427;
    msg.psi = 0.0211622589063;
    msg.vx = 0.0147802413087;
    msg.vy = 0.598690020439;
    msg.vz = 0.192249037935;
    msg.p = 0.663781700674;
    msg.q = 0.354860819269;
    msg.r = 0.0680026771195;
    msg.svx = 0.990376781136;
    msg.svy = 0.606618323963;
    msg.svz = 0.998776437873;

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
    msg.setTimeStamp(0.54732057772);
    msg.setSource(46703U);
    msg.setSourceEntity(40U);
    msg.setDestination(51855U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("ZOVFMPAYVGLWIIMCQKWWJEULFTQFQLHCRHJMGMLPIAQUWYPSXGEBBDOAJB");
    msg.op = 169U;
    msg.lat = 0.706249819191;
    msg.lon = 0.232888139119;
    msg.height = 0.048213369091;
    msg.x = 0.70181598216;
    msg.y = 0.214356466698;
    msg.z = 0.333951621859;
    msg.phi = 0.849781744982;
    msg.theta = 0.647897948647;
    msg.psi = 0.794720425236;
    msg.vx = 0.220501844496;
    msg.vy = 0.0718286959318;
    msg.vz = 0.699668132942;
    msg.p = 0.891143735673;
    msg.q = 0.174330145658;
    msg.r = 0.175013933286;
    msg.svx = 0.242888021568;
    msg.svy = 0.295726166398;
    msg.svz = 0.366310782332;

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
    msg.setTimeStamp(0.997324599057);
    msg.setSource(22574U);
    msg.setSourceEntity(205U);
    msg.setDestination(31802U);
    msg.setDestinationEntity(113U);
    msg.group_name.assign("VEXTEIDANWGKWAKJQIGLDIRIOPRARUQWXQUOQBXFITKSGHSIQVWDNCGGQMCCFMWDAHBXCBVSFRCNTXFAZYRPCONQRFSRJHFMQJOMSPHPJUJYKGLZOCKEMMSELLBZKJSCUOPPUJGDUKCWTQOMENRNJVYBLTTTDEWAOSIXGFZPYZTDDINPVSAGMDWUQVHZXPNNHZLBZBBUWCVYXLTEMIYFZ");
    msg.op = 124U;
    msg.lat = 0.582561635296;
    msg.lon = 0.368740319558;
    msg.height = 0.544773535141;
    msg.x = 0.026405794943;
    msg.y = 0.29060214954;
    msg.z = 0.725738495534;
    msg.phi = 0.012438699588;
    msg.theta = 0.525099004025;
    msg.psi = 0.116103205304;
    msg.vx = 0.582855373226;
    msg.vy = 0.119047071975;
    msg.vz = 0.898122875833;
    msg.p = 0.392522466812;
    msg.q = 0.456240040607;
    msg.r = 0.77785491558;
    msg.svx = 0.539350694796;
    msg.svy = 0.929975953063;
    msg.svz = 0.665589014785;

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
    msg.setTimeStamp(0.411959934602);
    msg.setSource(17133U);
    msg.setSourceEntity(201U);
    msg.setDestination(24796U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("HRNAJUUMNIHXOAFEOYEUFYWFXETLETBGVMVSKCRYDMUKPOXYSTHRDQBGRISASAHTPOAPXUFFJUBGCCYSWXIKAVBDBWCELDJJPVBYZMCFIDDROCFUYXBLPWKUHKIWLLWHTHMANEPQYJPQON");
    msg.type = 214U;
    msg.properties = 94U;
    msg.durations.assign("NQCTZYIEJPRTGYXEHMKGYESCBVWUMZKHPFPYGVWFWADZDRKOBNKTLRWQEXITHUGGQHSURAVJGDBCTMQHLNLKUEOFNNSVLPRQAGHAIIUJBPPSXWEADSJALDBLYQCXSJTPXNBVWYVQAZAENNMTML");
    msg.distances.assign("AQBCNVXEEARIBZQXOTWBGZYIDLZPSYMAQXLNR");
    msg.actions.assign("WCJIEZCRXSUWLRQGONXZRNQSPUCTCZAEWNCFONZTCHQRXMEIEBSWIXJWLGDGYBSYHJDTXJYRTFQXGROSEPDPDEAUKKLMONIVVDPRDHBFVJGGBEAKHWZIJNOYMBMMSFKWVLFPZDVDCZRUGXZLLPKAVJZPVFKVEKUOASBUHWIQMYZNSNXOQBCSHUAIRIAWQKEHRPNIOKBLFJFQSLIGFCHMAWLUTLMVJCG");
    msg.fuel.assign("LAWIYFVPKKGEUXMLVTHZZDIWMTHOONJFDDCLIIBRWCCWFZPKKNEWOPFVCOHQTOYVSHRHTMGQTGHPJZNMPDAMBEMZVDATAYVJVXKSVFKTXBBIRRKQZDMCCQDRGYMIGNIUOCSQAXETQSZQROUSUOQUWIFUKKAXPWCUIRUFBXTVNYENQAMRYFIHJZSASJBHFDPECBEYOHNXWSGAJGACPDGWLFXDWNLJPKSHSEOBN");

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
    msg.setTimeStamp(0.863973240008);
    msg.setSource(40269U);
    msg.setSourceEntity(199U);
    msg.setDestination(63954U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("NPRIEFFHJBCBRTZXACQXBBFTADTJVYVOQVYYVSZYYURXGNCIAWLMDLBCMQINDTXJEGJIKLODFXBRKGYHEUYPDTTWUJGWRGFXSKPCYGZHKHHUEMSHOULUYWFZPRRKZEWOIWLJPWBSOCIJN");
    msg.type = 249U;
    msg.properties = 124U;
    msg.durations.assign("XEKFEMIUBZEOPHSXSLIRANWVXIMBFNQNKRZRYSMYCODALYPTZYYNSTVXTJZJUBYVDUAWCFUQNAELQRVWVPDSKCODKVLMHBBHKPIAZJAXGRGQNXCDRONFCQCBKGKPMIGZJIWCLFSXKIPNQYOFQTXGMQWPEODBQLDXP");
    msg.distances.assign("NNFUDGESEZMWANZXICQQZVRFMRYVHBMANFVTFKKFZPUKQYUBMJUUVGADRDOLLSHIKIRCJOCSILBAWZXPYRTVSEIPTHDJGHLPXEKOTJBHINHVTYXTTAXGBYHDCAMPJAJKKONDSGCOFESQMKZSVCJFWCPLHXWMXHRWNZNIFWPRDJ");
    msg.actions.assign("ZGSDBCHDHAXFOSMWKEUNRGIQZINFOAKSHBRPFLMUUVJMBRULDUTPTEQQLWBNOSP");
    msg.fuel.assign("MCFUQDHULMBCWYGYSXIEOXPGHIACBBEKLOWTKFXBZNXTSZWUZWDZRRODAVDJDRIZYFQYIZDTKSRZXOFNWPYXONYKFSKJCJEJTRHBMLMTOINDZVACGPKBPEJQVLUSJNFUIWQ");

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
    msg.setTimeStamp(0.590113309554);
    msg.setSource(5453U);
    msg.setSourceEntity(221U);
    msg.setDestination(58655U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("ERCMWCPHPBRCLAAVUAGHVVOELZNDVQHGIEMTBCNPPTNRJVWYHWFPQEXNSDIWRKBLQLXFPVDBMJQMQTMSAUMZOUACDUFZRAXLYDKDIHWFGYUPGEEOUMGCZXSBINKHKBWJDWBXHNXVONTDIAYZCHYBS");
    msg.type = 89U;
    msg.properties = 97U;
    msg.durations.assign("KEWUQMBAVDUPTWMJNXHKZNSTMVVQFVCGOSILJRBJDCZAVBZWQTNOPOTIRHKHAHZTXGIUNSBKYGFKARXCSMHARQOMZELTQEYFIYGXFVXTDNBUQOEQLDUUOWRIAFLPXMWJHIGLYKALDNCBIBGGDPBIFHFLGSG");
    msg.distances.assign("YIHLSYNELPPIQRHBUEFZOJADUJBRYCPZAIFHFMVEKXZCQGMWGKUSXUXYJEUTXYNQMZKLWJIXGBGQRWCCDSDOSGUXSTEHSEOMRINTHALONBEOTOCQQFKWBJMKPLPAORJAEPTPALLFYV");
    msg.actions.assign("NMQXRITZMLQZZSFRILCEGPCWCBBGRFGIWFP");
    msg.fuel.assign("MLYTNGOTXDERKBKXGHYTNTKDAZBBADSFPZQJSLLJUCYSELVDPLJUUQMEZLWRWISYHBOGZMUCKVVOAQHMRIBRSOUVSFXQEKLHRWLJDYMADRMAHOPCFOUEIRUXKUCSZWGASQEDNPZMFRZUSTPFMPAOCTEAGIWIKVRQCEYHVETLSFQYHJJT");

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
    msg.setTimeStamp(0.351474168757);
    msg.setSource(62918U);
    msg.setSourceEntity(247U);
    msg.setDestination(5308U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.846479104702;
    msg.lon = 0.317525190289;
    msg.depth = 0.56057410452;
    msg.roll = 0.865416216138;
    msg.pitch = 0.0884773787779;
    msg.yaw = 0.0579924922554;
    msg.rcp_time = 0.981965806434;
    msg.sid.assign("TDBDNEEBOCEJTXWLITKMWDWCVPSNYUWGJWEFMQLBBZTRJAGNAMDBCEBTYIMVONVMIKUUXPOBNQIGGPOPOTXQUYYIHHWKHEXAVGHFVHAUFIAZLVEFLXXXKFLLDBXSORQACKCEGGEYDFNZVYMLYQLIWFCZCIRKNOIOUSWPQRSHSYXILSQHTVFZZVUZPOSQYVOQKGHLHJCJNGWBARWEUADRJKJKG");
    msg.s_type = 44U;

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
    msg.setTimeStamp(0.0243517000824);
    msg.setSource(21979U);
    msg.setSourceEntity(22U);
    msg.setDestination(32296U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.417194195954;
    msg.lon = 0.916740130402;
    msg.depth = 0.622496713469;
    msg.roll = 0.353257631078;
    msg.pitch = 0.95046248513;
    msg.yaw = 0.987770274402;
    msg.rcp_time = 0.513963443333;
    msg.sid.assign("CNFGTEVYUSQZUOYTUUZFLFOKCAAOALBINZQLGRXWWOWHMWPOTXWHNONHBZHBCMLBHTREUPKRCMBOJNYTMIZTPYCKMMGUZZGPHVKBVISXQCZQWRXVGJVSFQYYJECDPLINSYDQEHIOVPUKLEVIPOSYRWRNXDHLEIVFNKJKXBWJJYUTQBFASB");
    msg.s_type = 230U;

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
    msg.setTimeStamp(0.404807262553);
    msg.setSource(37285U);
    msg.setSourceEntity(203U);
    msg.setDestination(18992U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.762502810758;
    msg.lon = 0.307421299616;
    msg.depth = 0.691494843419;
    msg.roll = 0.175690352443;
    msg.pitch = 0.359901607673;
    msg.yaw = 0.559485173312;
    msg.rcp_time = 0.372344098712;
    msg.sid.assign("UXXPNBDCMGTJJYRQXXZFKAF");
    msg.s_type = 222U;

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
    msg.setTimeStamp(0.199773834068);
    msg.setSource(31572U);
    msg.setSourceEntity(182U);
    msg.setDestination(13197U);
    msg.setDestinationEntity(98U);
    msg.id.assign("UQOHWDFXYKUQCCFFOGVVWACLVPBCJNPPXORAUQZQSEZYEOWQYISKDJXRZFQCYHCUPXTUAVDRTVHUXVLYYKWXISZQGLDNXHFMAZIJQHCGTKRRKZEZUVEGMXBLYHMXRGJYNBKSMJSWDQNJALPTBFKHMOWKISMGPPFEDOUOTJRBEAAVWNYGIPGRDGKTEUDVSVJLPFZEMKEQXBSYAFRLOBTWCBBTRZZBNIOIAMM");
    msg.sensor_class.assign("DZSFXGPXJODGPCLHVKFOLAOJBYAUVPZSBSKPWWUJDXTBZTRGHNRQGXVIRIJFDEWVCEINZHAEBEWTYFWBKRRDSIPXXYMBYPCNNAMWSLYUCNKHGQVHCCQJJTUGKOMAMSDJAEISEYBMTGOEXPAQLKNHMXHHTZBOYMQKCUBQXAPZLKQLMTELIDDVYJWDWUOFKROJZPZFFKTWCTOHOURYBZCCVUVAPXIVIAHNGGRNDLQNLNRSWUFQV");
    msg.lat = 0.523301006993;
    msg.lon = 0.175452740279;
    msg.alt = 0.390970899629;
    msg.heading = 0.300587281858;
    msg.data.assign("WKFYHYUHGTXOXZLHLJAKGNQKXDRQUBZDIBZNQRLZMAFORHGIBJZLZILSYIVBCDXHVEKFINPNF");

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
    msg.setTimeStamp(0.102379711885);
    msg.setSource(62871U);
    msg.setSourceEntity(236U);
    msg.setDestination(13352U);
    msg.setDestinationEntity(172U);
    msg.id.assign("OSGNVAZVUYANO");
    msg.sensor_class.assign("RJRRGSKVGOKXRDWJODAQNJWSHKZUOXCJPEKTGYNPWKNWEQUNOBZYPPWJZABPQDEGOHZPSAQVNMBKMCHLRXLSYUJXCDENHZCIDDWTTQQPFPMRWIBQZEJAFSEOIAEJPY");
    msg.lat = 0.81569325967;
    msg.lon = 0.730508451452;
    msg.alt = 0.430794761383;
    msg.heading = 0.897276615868;
    msg.data.assign("PDQFCBKXLEBTPMUYIXUF");

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
    msg.setTimeStamp(0.0885607445102);
    msg.setSource(16520U);
    msg.setSourceEntity(119U);
    msg.setDestination(20548U);
    msg.setDestinationEntity(98U);
    msg.id.assign("LWWMVUPBDUNEATMRHIUFFVWLVNRKSCCOCSHCADNJMBALCHKQDLTSPWBDXHQZPZPIZEJMTGAWEJOQIWKGNMBRZXGAJSLINXCXFOXHPWGURBRTFIXRFOOKUEEQVZQNRKVDOPTXEKVCUHIQMAOJHRPYZKOKXYVTJIGYFFWFUMQDZEGJDYJJYMTPT");
    msg.sensor_class.assign("LRGXSUZVNVEVUFALKMBDYKVQAOBOYCYRHHPXWQGRAXDIVOTPGHTVZBRNNYGSNLTIYCHNJPZQZMXJFQQOHDCGENDA");
    msg.lat = 0.850430074769;
    msg.lon = 0.525226792904;
    msg.alt = 0.752823060265;
    msg.heading = 0.913372012832;
    msg.data.assign("WOMOSZBNXERMRQSYLCSTJDXIJCUABZJKABTWEBBSRPTNZWNLISAYIAZHJBCHPMHOITZEDFXGDFTGCMFVMQULAVNIOVQFNJTGVLWDEJEKZITWSIUKRHJF");

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
    msg.setTimeStamp(0.433646121459);
    msg.setSource(30667U);
    msg.setSourceEntity(38U);
    msg.setDestination(28756U);
    msg.setDestinationEntity(253U);
    msg.id.assign("QOMWVJDLFFJQTGQGKTFFJJJQKJGXUQVECEIQOYUEYGCJFZBLULY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NPIJXBGBHHXFFGPAMDHGTRLXGZBFCTZVLJPZJMRTEGLVGHNXEWEZNRKPRILGDIOIAOSMPKYYAJSQUGUQSMPYIRXYWMLJKASWUHEFSQYRBCYBHUNKDZNFOQMQJKDRCJYQYCTUAUMQTGHDUVOLB");
    tmp_msg_0.feature_type = 102U;
    tmp_msg_0.rgb_red = 218U;
    tmp_msg_0.rgb_green = 39U;
    tmp_msg_0.rgb_blue = 194U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.200212192505;
    tmp_tmp_msg_0_0.lon = 0.611995226782;
    tmp_tmp_msg_0_0.alt = 0.836468389785;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.638349672251);
    msg.setSource(65401U);
    msg.setSourceEntity(27U);
    msg.setDestination(52252U);
    msg.setDestinationEntity(210U);
    msg.id.assign("QKLYIYWRZDPZYGTMDBSADWRLIKNOBCHNEQLTMYZQTSJXMRDBIIVPCPCTLACQOHWRLTXWLGKDJQ");

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
    msg.setTimeStamp(0.244518290493);
    msg.setSource(38010U);
    msg.setSourceEntity(237U);
    msg.setDestination(35944U);
    msg.setDestinationEntity(156U);
    msg.id.assign("OGJNSAJHTQQDXMKJHZOBWAIRLQFBLZENTPFCGNUSFMNVVRJVYAULSNYJIAGXGRCRWLFPTDBQBKPYWEWGGXISYLMPSAHZHYSYEPCUHFWFIWWVMQJLVKHMXBEKIIGCYDTADQQABTHTJAWEVIASPTJRGEXZYFOKZWUBMTHEXDKDNNIHXVOEVRLVFRTJKTPWMROSBPXUMFCQQOZLXEEOCZXOIPCKCZGMB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SPUIHSMIMRDOEZVEOHUCLQJFWCPLQZPHMKQSNIVGAWZGPVWDGBQDLDSYPBATZMXBTFKYHPIJKLMFOQJRZDEGBBQNEATRBXQUALGTXW");
    tmp_msg_0.feature_type = 56U;
    tmp_msg_0.rgb_red = 189U;
    tmp_msg_0.rgb_green = 250U;
    tmp_msg_0.rgb_blue = 147U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.582376519108;
    tmp_tmp_msg_0_0.lon = 0.0640559391908;
    tmp_tmp_msg_0_0.alt = 0.555842867831;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.86055450824);
    msg.setSource(55253U);
    msg.setSourceEntity(28U);
    msg.setDestination(57649U);
    msg.setDestinationEntity(143U);
    msg.id.assign("GROHFKTDOYBZUXVRIMPLIMUNMZNIBMUUKFHSGRLBLDFDSGKMGTTYLAZECTQCAWSMVDDHDOBOLNOBOIN");
    msg.feature_type = 240U;
    msg.rgb_red = 97U;
    msg.rgb_green = 162U;
    msg.rgb_blue = 109U;

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
    msg.setTimeStamp(0.305357087314);
    msg.setSource(20268U);
    msg.setSourceEntity(29U);
    msg.setDestination(4611U);
    msg.setDestinationEntity(149U);
    msg.id.assign("QXBNWRGFDSTRMUNUBJPOEBOXFGUNZEHIUEHMKEELXVXZMGAIKEXQBATRWUQGGRWFLJBZSHOULUFRPKPEHJBVOMQLUSTXAHGYRYWTBYJSIZSPIYMTYXRDJFJPHDKJYYYQBIGZPJPFLMCVJ");
    msg.feature_type = 37U;
    msg.rgb_red = 116U;
    msg.rgb_green = 85U;
    msg.rgb_blue = 220U;

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
    msg.setTimeStamp(0.825252915053);
    msg.setSource(30990U);
    msg.setSourceEntity(74U);
    msg.setDestination(50179U);
    msg.setDestinationEntity(129U);
    msg.id.assign("OYOZAAAVICMVEZUUMHETTIYMEGUQMXXXIDKZASXTJPIOCYPZCBJNNFVZJANQXNBHRHIPDLVHAASQVNLUMSYLRLHAAMTKVUHSQEUDCWHDZRWJYRLWZTEREFJOKNLQJIPDGKFGKXCBCPRQBYNGKIRMDXEFKWDQZMDMZYYISQIFBSGQXOYPLUQ");
    msg.feature_type = 217U;
    msg.rgb_red = 144U;
    msg.rgb_green = 66U;
    msg.rgb_blue = 142U;

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
    msg.setTimeStamp(0.67125790818);
    msg.setSource(64073U);
    msg.setSourceEntity(187U);
    msg.setDestination(12178U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.856339317089;
    msg.lon = 0.749078713403;
    msg.alt = 0.77616180377;

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
    msg.setTimeStamp(0.657390224772);
    msg.setSource(38753U);
    msg.setSourceEntity(119U);
    msg.setDestination(36057U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.553052035017;
    msg.lon = 0.515632691233;
    msg.alt = 0.45489466448;

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
    msg.setTimeStamp(0.534238360618);
    msg.setSource(30716U);
    msg.setSourceEntity(70U);
    msg.setDestination(10453U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.70874212887;
    msg.lon = 0.917659402712;
    msg.alt = 0.978317638704;

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
    msg.setTimeStamp(0.898614548886);
    msg.setSource(41355U);
    msg.setSourceEntity(208U);
    msg.setDestination(17933U);
    msg.setDestinationEntity(192U);
    msg.type = 80U;
    msg.id.assign("WGPPMYVRVWFFAFIYMCKFGQOEAIUGDJRCCSPUCPOHJTKBUEDLYCGHEWXTCTDAHSSTIMRGIBMBRLZJAFDQ");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 34U;
    tmp_msg_0.text.assign("RETABUZCGLEYUGYMJYESCOWMBSWRXOHAACEDBFZJPCKBHJNKDOUWWTMWAXIRSFEGMUPQPZYKPOGPGKZLWZITHMKIKUSNFUPYUSXRVHSDQNOIHJDXF");
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
    msg.setTimeStamp(0.67150583347);
    msg.setSource(32638U);
    msg.setSourceEntity(153U);
    msg.setDestination(59680U);
    msg.setDestinationEntity(52U);
    msg.type = 225U;
    msg.id.assign("RFQIHDVBHAUNVXJQSOFWBPJYFWKPVDWFQXOASUXMWNRSPMCYUKALCJCSHULMVOZYTECFTWVMMDQYGVGKXWIRURBJZKNDGWQJYFIKYAEAKZOOCZGDLFFRLGKMOOHSRHZSJGAYYVRSINTJMLZGSKEAOHIWTEXELLTPPKERJTUIPTTDILICY");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 3154U;
    tmp_msg_0.lat = 0.987897530299;
    tmp_msg_0.lon = 0.0995454443242;
    tmp_msg_0.z = 0.923781129524;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.speed = 0.622596215485;
    tmp_msg_0.speed_units = 251U;
    tmp_msg_0.syringe0 = 33U;
    tmp_msg_0.syringe1 = 252U;
    tmp_msg_0.syringe2 = 143U;
    tmp_msg_0.custom.assign("FGLFNWYOHBKEPAHIVXJZRBBPYCEQFVQTBQDGFCTPJURJPAHHMTGFPXZBREHYZYRCDDSTISGXTWHRXHQYAUKXKEJLFKYCZGMSUPNHJLLJ");
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
    msg.setTimeStamp(0.946339801659);
    msg.setSource(58715U);
    msg.setSourceEntity(241U);
    msg.setDestination(24042U);
    msg.setDestinationEntity(216U);
    msg.type = 217U;
    msg.id.assign("UYFAVRYKSDVAVEVGYJGPCBMKCSISUBLRCFSQWOUFGZUDWELVHGTBHXIYNBTXOVHNJXJPLMGWIUWAACUTESGMBSEPBCQYNPLTCVOMBIQUXIFWXTCWSXVOJYKPIJFFPFDDEFSHAZRHKZMPTHUOYBDVDRTQYKIGWZUMJLHQKHOZQRCZLVMBAELWKJRSTJEARLKOEIHPOYXQNNWKRPENDRMFGJOFTIAADXLIDCJXNGZQC");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.161868121562;
    tmp_msg_0.lon = 0.428333566084;
    tmp_msg_0.z = 0.806319777725;
    tmp_msg_0.z_units = 85U;
    tmp_msg_0.radius = 0.86082984189;
    tmp_msg_0.duration = 23327U;
    tmp_msg_0.speed = 0.531374568965;
    tmp_msg_0.speed_units = 181U;
    tmp_msg_0.custom.assign("BYWFKJSUEXMIOYSEFYDQGMDLDGWPSNKVQTAZLGBHNEPCCSTWCOQHJYAITLFWINEHXVNGCKMFPVTODTEIVDPBKGJUCEXACFNMOIKRUPLWYRCRDIXOLUSARXYASZUXICWVMQTZCDUNZJRMOSAGQYJRAJZHJBRLHZCONOXIEUILBHJKZ");
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
    msg.setTimeStamp(0.332283600507);
    msg.setSource(51249U);
    msg.setSourceEntity(37U);
    msg.setDestination(6123U);
    msg.setDestinationEntity(107U);
    msg.localname.assign("XBTSIDRSMXEECGVQAOFCTFNURTLZDZMMARWYCJLPUALCVFEGJRDVKCDRKUMLFEPQOJOXWBCEFLREHIKYCDBVTPNIHHYJYQXVPHWTJRKJBDXLTKFEUXORMBTJRQVUSGB");

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
    msg.setTimeStamp(0.256208077561);
    msg.setSource(46648U);
    msg.setSourceEntity(116U);
    msg.setDestination(51907U);
    msg.setDestinationEntity(25U);
    msg.localname.assign("JQEJVIOYRNHUMFUTAUOENTJEPNYLOPKTYYSRLBCCJHXJMUWQNCHMOXHRZKAEDZXQSBMFRGDDMXUTFAKZGYPVYWSUPWJRDXWSMBRKFADSWPBBYLIVTSURWHAPZDINZLKDPHVHMULSILBZMNTGKRZVEICSRQJNDSQKFIETLGVCHPPWIOFOGEVKTEVIPGAGWQZXYHOXQOLCNQWBBIDCARBVVLIYZFM");

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
    msg.setTimeStamp(0.413076229567);
    msg.setSource(60057U);
    msg.setSourceEntity(51U);
    msg.setDestination(2881U);
    msg.setDestinationEntity(241U);
    msg.localname.assign("HCDFOAVNZHSICWTINYHNQDRRYTWDOALNVZYWXAPJGDGAXXSBMTFFCWLXESBMBJVJDRKGTGFALHLPEDOCSFRZUOUHZQYVQQEVFZPMUFBEFCOQECZTKYTTNPKOVBGUOMWGRSVVCDITHTMMILBUJYTXJWOXWHUKBBWFKEQQRPSMJDZYNKEPFAMZS");

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
    msg.setTimeStamp(0.926882954601);
    msg.setSource(33252U);
    msg.setSourceEntity(167U);
    msg.setDestination(6720U);
    msg.setDestinationEntity(11U);
    msg.timeline.assign("TVPACIUIOZHKNUMMOFKRJDTILHCQATVWXLGLEGSTGTWBONCWSMYJTYRAQUQYAVWGBIULFZGSQJDEHXJQERYGBQAZYMDBJWEFAIUKLQACHMIVLKNWEODVDCLNCSPPKVFSNBJEEDUA");
    msg.predicate.assign("NWGMQEDKTWBYJPXVCHYWZKSBBFAIOFTZRWGHZQMAKCDRPCYOAMSUIOPHTDSGIDWWOITLJTCWKGWNTQEPRZBHBLQJGNANTLMJDALLXRYMDNXAZKKRSXZCNPRGIXUUOUHRKBXJYFSFIVSXBZMEJCMIAGRPJLAUGFQVHJVFJHQOEZFKQFLQCPTVWCMNDOHEGSHYPYQEUHRJI");
    msg.attributes.assign("VFYLYCYVFEZTXCNDNQHYZEEEHDGYOBOMXBENVUSXPPYDHTWZLFWRHAWDNMDBHLOTJJJZKBPBSKGOOGMXRDEQNHRLZSKDUUTMQAYEBNUNSKOGMUFLIPQC");

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
    msg.setTimeStamp(0.677418638541);
    msg.setSource(56462U);
    msg.setSourceEntity(71U);
    msg.setDestination(43754U);
    msg.setDestinationEntity(78U);
    msg.timeline.assign("WGUDSSIHBCOCBXKGHUZOPIXRLBXJKSNBBYDDEFPWKWOJYPEKGBHOPTIDQGFFSHNCJKQHUOQWIPSTNMUZIYYVZNACECEEBJMHARHEVLBXKVFWMSXLAQJNWDVFXXUV");
    msg.predicate.assign("DMOPDYQGYTUJZNLQNFURTEDJPULOWBEZOFBOMPWNSODCGKAVYMGXUUTMGHYKLSGAAXLOWAZBVARZQMLLHKIEQDPEJLBXRPTNCJSSDFFQREKORSVJQHVOKUYUYPYZZICHLTKBZPFWNYVBEFOVPPKRBIHWNVDRXDUKSLMSHZVFCTARWLWJDAWBJSGG");
    msg.attributes.assign("NCSVKHDJCLFHPSYFWEQZRWXQUKYTMPVWCUMRBTOPZCGEPNTMMOALOEYLZWJSPZIXDLFVYFEVUCJRHJEMOHGKLFAVDOBLJRVRFGGKUTTMVTNLKZEYXHAHHSGOWUHYPSFJE");

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
    msg.setTimeStamp(0.0134701785007);
    msg.setSource(12663U);
    msg.setSourceEntity(54U);
    msg.setDestination(31773U);
    msg.setDestinationEntity(203U);
    msg.timeline.assign("VGUZWDATECXYMGXKENSNPDIFMZUNZXMCBAZOTHFLJAFOGHTIHMKQQLGMNPTQBRBTLHAPMSVKQGOVYWQBSYDQQXCJVIEMRDSLRFEFNPBHJHNAXDQGPGSLEWLPNFTY");
    msg.predicate.assign("TUEJMXPRLKEHLWYQDJHSOSKKFTKB");
    msg.attributes.assign("MVBJFAQERAWNMKNZZBUZXFXJROSRMFYWKZUKELZSOVXCXCGA");

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
    msg.setTimeStamp(0.772846636901);
    msg.setSource(1685U);
    msg.setSourceEntity(186U);
    msg.setDestination(5691U);
    msg.setDestinationEntity(215U);
    msg.command = 173U;
    msg.goal_id.assign("ALUZGNKCVCWSYTWCVZOXMIGXGZADAZXNSMOKLVBMIQFEKTHFBVYHVSEMRFJPYFHQRNRISCBUTQOQWNBXULJDFHBYHDPPQJMDEPRMNQKPTUFPTEEWZIHATPA");
    msg.goal_xml.assign("CDOMIQBWHWEWPSZUWGIZLLIKCILRNBOQVMDDRPNXDCUTNNBUJACRDHSODUSABZSJMAFYEQLMNIWWGFKMORTOPVPYFYRXJTQLEUXDTYHQXQJMFJHE");

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
    msg.setTimeStamp(0.460727110149);
    msg.setSource(56546U);
    msg.setSourceEntity(95U);
    msg.setDestination(53016U);
    msg.setDestinationEntity(201U);
    msg.command = 31U;
    msg.goal_id.assign("JDAWHFNRTDPCYKYLLNWFQTRVOKDCVBMICKRZSWKQYXXYRSPTGEJIUUOMLVNEMIAABILHPVDWBUQTHZCXPRYZBRSJAOCNEYMWIFDTKUENKHEOTV");
    msg.goal_xml.assign("HXMGKFICZYXUZBEWQLGPJDSONZFNIVEGX");

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
    msg.setTimeStamp(0.586088050527);
    msg.setSource(10724U);
    msg.setSourceEntity(199U);
    msg.setDestination(16200U);
    msg.setDestinationEntity(55U);
    msg.command = 185U;
    msg.goal_id.assign("FXGFBJMJFKXQVALWADPEYSOVPSTDPFKNBDZIZIUECZBLJYNKVHNHARRVNKLQHXQZTZOPLPKFYXXNRCRWRNUNJJRACEJHSVREWCXKJMTTIWSCYEHJITAMCDECSHTFACFPOWMGEXJGIRRFSOOIVRUWHDXTWOMEMXQPGHBSYYPXZGPIQLDIZVEUDBDLBKQWZHADUQ");
    msg.goal_xml.assign("BZSPQZKENCUCBYUROEYIKQNDMMRGMJERPGRDTBQACZRDNOLEUJSASKYTNOTKKKXHQWNYNABSYFIYNWPHOFTHSGGZDVYNKUVZARROJWSVXUFWDKOLSMHKTJMCTSLHAJXDBGFPHAYREXKVZFWTSODVLOTFQUNZQIVXXFUEBUACPQAIELVPLEERUVVYHCUFXJHMSHVGCQZTMLQDGIWMPAIGXQCFPBJJBM");

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
    msg.setTimeStamp(0.652109371804);
    msg.setSource(12545U);
    msg.setSourceEntity(186U);
    msg.setDestination(41132U);
    msg.setDestinationEntity(253U);
    msg.op = 105U;
    msg.goal_id.assign("JZIXDJCCGFRXBPJTXIEMVKQEJYUWCQRIIOBZWUXYTPLCUTFYTNLYHMSWDFYBEHDMFTTVCGPZQDCHUSUAZIXBHKPSMIKUULLNAFQFSZPECENFMNDLJKLOAFONFKZLXOAYGAGSNWBRWVDVCPNSQSWQQHOWDJCKGBAWBHKXXHFVENQMENRURPMJGJYYRVLPAHBBLPMGZOVYE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KFUYWMEFPKWOVNZLYMDTHXRNBYRLGEQPQRCCWMTBNRFIDFSAGMVPGTAPEXOOIOTTGBZRULJIYAAHGQBXAKDWZHGAYZHPXBADEFXYTEBGFJWOVVXMSRTAMYXCUIUZEKJGDOLJQSO");
    tmp_msg_0.predicate.assign("MAENNTMUCQJFLWBYIVCKSBKOVWFOUEQUNMNOGCYTPGEJSDFQIJRVNTLBSIXDZAKAMOGUADOFELDJTXWHKVZG");
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
    msg.setTimeStamp(0.534007558359);
    msg.setSource(16974U);
    msg.setSourceEntity(164U);
    msg.setDestination(52374U);
    msg.setDestinationEntity(134U);
    msg.op = 158U;
    msg.goal_id.assign("OFWMJDOJWRAZOECPGAUUDGDUWDVVQUHHUXSJAEYZHMNQLOWLMEPTBWFFITVZORTPYGFWHFKCKQYEZMAXRQSLFSLEUXURDSNLYNCITQTEMYVWECGPCBSKHXEPCRNHGIABTNVHONNYBMFGIIXRJKBLOU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XUEBKTWUZHKZEQVSOGIJOWTGCVYIDRMWPDHVOXKZHBNEQMJFEBDWNYQVUMLXJDUMJHDEJCTPPVCEBLLSRCUYDZYJIGVPFOZOYQRNUSRQSRFLTYDLQKOMOWJQOUAKPXCVTHIAUFCEGWLITADYBOGCHSXQIWGUSNQGPATCWIVSNPZYBMXMVNGRGUFSXTTNLJVBRFKHSPWPMENFYGASYXCIIARZXLTALOMNZKQ");
    tmp_msg_0.predicate.assign("AIKENUUPEBMKQQHELSQUFTOPPTVCWGJGMIQZPVTNQWRNIMPDTCCBJNSFLUUZSDEIBJJEDML");
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
    msg.setTimeStamp(0.651949756576);
    msg.setSource(29823U);
    msg.setSourceEntity(25U);
    msg.setDestination(56449U);
    msg.setDestinationEntity(20U);
    msg.op = 223U;
    msg.goal_id.assign("TVKPRTAOLVZWIPGJMSESCJFAALWDWEGCHWLRMIHGJYCWKOEGDFRUZBWMENXGTQONWJGHEAMTOYMQMULHKFERVNSVEHTRMSXDYNZIGBCPGXYUBPTMNUDNECDOOOLARIXBMDZS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OKLCDEBUOTQUOLNRZCJPDJBQZULBTQZW");
    tmp_msg_0.predicate.assign("MPQUSMXQLDVBYTORHRVVECOZJBSQFRRXXPZJZCAFQDEBQLESZVUONVLDNBZSWWZOPGNEMAMFZCJYGXEAVKJSTVTNUBKODWGXLUNSHBKWZAVDAJTCQWFIGRLDCITOEKVUIFOWNYRTNJTYUHUYNLODYIIQORAPTTPWEGPZDHKKDAPLHBCCWWYRKAAAUKFMFGOFGIJBHSCYKJVEURXSMELLXYCMIGJDYHZHIBMPPIMPUKSXGNMLHNXB");
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
    msg.setTimeStamp(0.735375702563);
    msg.setSource(46724U);
    msg.setSourceEntity(121U);
    msg.setDestination(63659U);
    msg.setDestinationEntity(46U);
    msg.name.assign("IMKZYQPENXDCWARYNLDTVCRIUXRFPVDCEICKSJNINTRNJFXTYDFLKXIXLEQZGMKVYRJLQRJWCSSNPDFBKREOBZCAGKCPGCGODFPEXJEQGOWWTOWCRYZFVDZEWPHTNGWYHMIGLK");
    msg.attr_type = 92U;
    msg.min.assign("YLFFCNBNPJLETSWYXRICGENVYCGWGJZEAFNMZOVDVDOJEBTOPUQGXQYQYOBQCFSEHLTKYYHIOITRCXPYHUMNJDBARZPNBTTTRVBWSJOZQMEPMXLZFEBGSMCIODXUHKEKSUJNPWGQWZEQHDXTRVQHIWGUXVSVZAUGOQCHRUMAANXGGJRIKVHEDHLMBWLPASDASLIMDTWSFWJTFLOUJKPKIWZQKKPYCJCPALOXRKXFABKHSIZDIFVBLRM");
    msg.max.assign("RKPUEUSOBFVDGVHBKXBFWIUDOJYHASVSQYPMGNAGGZUYYCYLWEFXNAQSTVBKLQADOPONPSXDJDAXOLUONWPKWRPOLMHWHGVAZIBWISFMYRKMFIUUMHBMBHECPLNXQTMZZLIDGTAGRETJIJCITPCAYCQOHJRLEZEUXJMENXSKJNVTPTGVPASWVJFKHZFBZQWFREZZVTMUZCWIXHBLQQDDOISY");

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
    msg.setTimeStamp(0.0794947236385);
    msg.setSource(2651U);
    msg.setSourceEntity(71U);
    msg.setDestination(27951U);
    msg.setDestinationEntity(182U);
    msg.name.assign("QRTCAHFQIVYTLOJXWZAYICVAYHUGYNKZOVWZLABGPVRZGFZNUKQLELRUSBQGRZXVKMAJIRBQFAYWBVMGFSKTDTDIXGVYHRHCVPODCRWNCZDFJTGUJFMSWEMTLPSBMQFEDPISUVCWPODQZZFJQMPZDMQMNMUOHIYAJOTJLQOVWEPPBKWKUJROCEEHGNWWFRXLHKSYUPSJHDAATILHBBXYDYXKIFTBKENLMXHSSGX");
    msg.attr_type = 222U;
    msg.min.assign("AMQMPCBACVWDX");
    msg.max.assign("SAEBMAYNDHFPRQHYAQPJFVUXLTZGBVBXCKNQQXSCOBJFUGJDYUWNVUISYDRMLEDAFFGYKEXWPLOZBKMGQHVXOWJSHDLRYNNFJROATDUIHXST");

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
    msg.setTimeStamp(0.608609124042);
    msg.setSource(39112U);
    msg.setSourceEntity(66U);
    msg.setDestination(55098U);
    msg.setDestinationEntity(25U);
    msg.name.assign("KKNEIPXDBXGLTAOWQLGODGTPSCUHDQMTEUIHJLBXMRCHJLZONEXVZLYQDCPUFDPFTYHYYEMJJZIEZCAQNFJIHQWSBAEROMZUHFCYDVMKDASABIPIKGEFGXN");
    msg.attr_type = 249U;
    msg.min.assign("USMSTXOBTNNQZZIUDCHASBQCQREIWMNDLCNXJVANLUFHMFJMRIEXMYBSOSMTGRWNCYLUNLKZQDYOTCKVGNQJJEONBFKWPRKQLZVCUICIUUSZQCKPGDWJLPGGKLRPAHPQRXYKUWVFXHEXAYFRZGOCXIEPXVKGDHVOJMLSTWJVYGYIWBZFBMHOUIAHHZPDHNFVITTOMURJEWADOZIKYERBFEBXPTJTYZPHDTSVBMSRXJ");
    msg.max.assign("CHBQQHVZVYVBLILZCPUCYSVZMJKJDFTYETBORVGLUFXQNNJGBLQMRCQXWYUAUJCDGHSAPIZMOWKJATFTKYGOSABIUUFXHMSSDIENMDSBNWNEZTMXQASSTRYUTIKUENARRZODBPKOPEUWKPPLPAWWKNBMZJTIDKDRGWELXRNPJJZTFVRKUYBKOXZFVGMGILHQCMGXTEAPCEW");

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
    msg.setTimeStamp(0.830166220261);
    msg.setSource(45916U);
    msg.setSourceEntity(102U);
    msg.setDestination(23829U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("GPXWFMOAXNYMUAXWTCCWNRJNEOQSOKMFZTCDIVFGVOLLYNAXUQYDQHDPRIYUQGZKBEELLFPXCEBIXDCVCAJIJTNHOLDKKDFKSJPPJQHAXHTIVQZUAIFLWEXWPMRMVNPUBQHEMWTQZWXLRECGGWL");
    msg.predicate.assign("ASZMZYNDLJFKIIVMZERSRRKABEXTNKESUACWTGAFLDLQNDJZJHTJFMW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ORUSJHMNGZAREPDAISIPPPKTEKYVXFKGIVTWSDNHTZBYOEUQHLDBBGSFWFHAROKKKTKZYWQVPDJCJUADEANBBCVJFUCXGJBLXCOWMNMWLSSMFONERSMYVZBKZY");
    tmp_msg_0.attr_type = 75U;
    tmp_msg_0.min.assign("NDXUENENALZMWTKAESWACQJMZODWIYRDCDMXZNOGXSQTVLUYGSGXWZPXQCBBVHONUKWIPEEDFRHPIUVTUEUKJCYPTVCSAKXYAWBIGRPUAIFBCFGJKTIFAVZQDQSVQZPNUQDJSZYABMFSIHLWFXYGXCJO");
    tmp_msg_0.max.assign("CGOWSRVYNDZBFFYSBWEJPTRGVUAXKUJERIZAWTQVNCRMZABQMFOKQLZRHRZNQKGMMHBKXNTHVPNKHQDPSSKQVFLNTBOUCJDHDLSLHWGAMKAMQSELXCZXOIVYOLPINOHXFIZVNQTTDGULMSEYBUTIOIBIIAIXSJBPCXEPYDXDCUHUYRVYAJAXJTOBEVMOZFDPYEJEUOGEFZGWCNZIJUGKFHEGAWQRWWTKWCGJWCFDUVCXYRPMFYBRMT");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0263143366333);
    msg.setSource(13645U);
    msg.setSourceEntity(52U);
    msg.setDestination(61008U);
    msg.setDestinationEntity(138U);
    msg.timeline.assign("YOTNLUKPQZDXESVXWOBBGCGROHDBVAGBIIAYBJUHTWVNKGNAXEHTFJOQBEFQFHBWHUQSAJIIMTPAKDFFZRDPTZNGYJLMUZOHFWSFQYRGICOHRMHFRZEDDMCEWTMOIKJKKLRWKLQHKP");
    msg.predicate.assign("MERSXEGTRIAOHZFVFATKWBVOHDNQNGQTZQIGPJCFQJQCLAWJSWDIXHZJSHHUYZZLUYYEMAZTMSCMFLOSZLODBXUJLETGYGMMODTRRPKRWOSIAYXVKLIFEUEDSPDWIUZHFWTLAYBPQUBGYFRVPIQMPCXVQCAUXXNJWWIPK");

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
    msg.setTimeStamp(0.186702857151);
    msg.setSource(6849U);
    msg.setSourceEntity(24U);
    msg.setDestination(64161U);
    msg.setDestinationEntity(178U);
    msg.timeline.assign("XCOPKPDEZCQVLKRNBEXICJHGNREQHFPQNTQCSSZIYWLLTYNTVSJASZWHNWPIBUSRUXUARAJFSPOXRYEXVXPUOCZYVQTDDDTNACZUXRAMATWJTMROUKWFOVLJQGVKNYMFKIBNBBLHGQBVWAMCCJE");
    msg.predicate.assign("CSMZTKZKHNXSTDCDMJWGERRXWJIBTBYZSCOQBAPFKNIHNFRHGHYYWTIEIQSJOVWKYBHNSQNTAKPZTOZPWKZQOTZOPTGVZLOPSITEFBBHLZ");

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
    msg.setTimeStamp(0.225810439346);
    msg.setSource(29809U);
    msg.setSourceEntity(149U);
    msg.setDestination(23610U);
    msg.setDestinationEntity(48U);
    msg.reactor.assign("GMACLZYEJMSODVEBCTOHUBMHDLJXODIBENWMNBPRXQVYFRHFFRYVVJQLXDAECEVBWUPNXHTHVJXDLIMOPGCGRBFVLMUCGNZAUXOYKRCEIOFCCQQKFNSATUKQYQNXHZYQLTGIWSDVHTWXAGJPPNOWPNSYGASVGKTRFHPYBIEREJPOANRADXLMWUKCCZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NTNVGJVSSJRXZZNKEFAHCQSLSTDCHLWUUTXCGWYLMAFNWLPRPGLVWYMNFHEJHMLHVFAKHRACQVPTMSOFGBZZBRGPDUALJOVSWRGPLPXPKHBFATHINECMMXOKEFGGKIWFOWBDNDPYKYQRCJ");
    tmp_msg_0.predicate.assign("LOAJOZXVWAOSETLYAXYMNZMKACTMEBKP");
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
    msg.setTimeStamp(0.299706576388);
    msg.setSource(3690U);
    msg.setSourceEntity(88U);
    msg.setDestination(11323U);
    msg.setDestinationEntity(179U);
    msg.reactor.assign("QQUAEZJGFCFIUPCKBGYIBOOQVPQNOUIQFTUJGVVGHSTFBHWHRTRLNSQTJXAKMDZVHHQZRVDQLISSXBSZMXXSHAQXPCLEFRMZUDXKPOTAEZKTWVELEMRLMWOYJNKXBEOMANNGPESUIKCUBROQMDGZVJCDFZUSCPGUFYYBGPBFWMAAXCNYITFZVPWECFKWSUTHPYRLVTYKJLLOYLJWDBHSTAWNWVYIMRIXNGGPBDRIN");

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
    msg.setTimeStamp(0.488427753645);
    msg.setSource(9601U);
    msg.setSourceEntity(200U);
    msg.setDestination(37116U);
    msg.setDestinationEntity(46U);
    msg.reactor.assign("UYOCUKDRGYLDOCPMXYRDWMNPLZEXMOPSTDUNOOEOPVCADGXFQMAHTJITJQWCUPSYVHIVIMKYLXISVBXDEOHZBTZZZPZKCYRSWGBGITEFWAVEKRJEQEHBEYBNSZGWBSVAEGNUOJHQWPCMGRRWBLPTBDFKGHNSFDHFJANGYZXRRNJNSNZCBCQIHFUYTUIAAJOLKADEKRUMGCKKHQVFHIXTJMFQA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZTOKDYHSNUGGTOUGSPAZXCJDEORYYIXUIQNGLALFCFVWJOFSDQSSXBRKBKTWMOWEVRCFUVAEHOMNQMLTLELAXWDZQFCHBPUJXPGLTICDYHGKVHILPXYLHBJVDHWAJRNIAQWIKNVWSZIZSBEXKZJXGYDVBYHMFDBFETERFBKETGQCOURIZCKVAWJKTA");
    tmp_msg_0.predicate.assign("UANILOABVTLZPCCKVIXENKWVBEOVFZMKZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PYYOPMNMUXMZCZHXLTRSTGAKHTLYBHPNDWRIDXHCQDRFWJFVFPCFLYZWTMZZJXLCNCIDBZIADTDLGNLEKPZDHQPUAXWSVZWEFHAHLCUYFRTYAGGJQWBGUNJVKBYDEWHXVFIAXWGJBTOOYELFSQQKLFMYGCHQISVGVOUMSPVWK");
    tmp_tmp_msg_0_0.attr_type = 159U;
    tmp_tmp_msg_0_0.min.assign("DWPCNMJOZLQUUYCVTICOJYXMCNIPTUTNBUMYFPPCUWGLBJXSAIROVXZESX");
    tmp_tmp_msg_0_0.max.assign("KGKBODEFUCIZHUVLEEKDDKFEKOBWKIVZNDDPZAWMDBUMJUYJRNTORYCHQSTQQEVTFLCHGMFVCZXMZJPLPFGXPUGIXYWDBOCSLQRLWZAIXSAFTRBJGMJQBOQRFTHKBWIFYJYGYRJSWSPINAAUCAQMGTSHXEMYFHWQNTEOVPOSLOGMLPNTHSLAQVYZMSSUWVJZNPCRZGCRYQXV");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.624798100233);
    msg.setSource(43921U);
    msg.setSourceEntity(32U);
    msg.setDestination(23282U);
    msg.setDestinationEntity(104U);
    msg.topic.assign("LMGRQNTZLCPFUMPIEVPKUWIFHMQVMFVKITFAKBNSGIQOEFTOTXVSHYBDVOHWZTJJKYUCWGVRGVKRKENGEXMPXPZFZPPCXLONFOAJLZALRBDFABDPEWSMYUZCSUOQNRRNPCUMDXDRJSGSAKAXHNDOACZM");
    msg.data.assign("QKMEPXRRPRQKJUPEKWWIVFOBYEHVXNQPXIMXKOWFLF");

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
    msg.setTimeStamp(0.149141909218);
    msg.setSource(42941U);
    msg.setSourceEntity(125U);
    msg.setDestination(3460U);
    msg.setDestinationEntity(42U);
    msg.topic.assign("QRSXETYPVLWWRIGDAKBKWOODCVKEOAPTNYOVXPTEWGAUMHEBZCFUFNIMNBRGCWQJVYIBORAUCNCVHAAKVNYSPGMNBXLRUXXCBULTIJZYFLFGNZEOREKLYECQLATTVCKYIYDVRVFTMZCL");
    msg.data.assign("EKFUUMXGLIPGPAKECV");

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
    msg.setTimeStamp(0.793948698537);
    msg.setSource(61142U);
    msg.setSourceEntity(69U);
    msg.setDestination(6379U);
    msg.setDestinationEntity(117U);
    msg.topic.assign("ACALAYRSTIPXFKVAEEXAYSTSDDWVRYRUKIQIYQEMLBZXUCOSVPVZFIUPJRTMJDTZYQAOCUJYWDNHQNUXLZPRWZMVVMQWHXKTOBJRBOGRJSUGDPKWNOICMLEYCZCSNQSEEONNLBV");
    msg.data.assign("XIEBMTEURMKUVRKAJICABQGDXRCBZFZSMSVFPWUNJWHHZJPPEQYMGPSXLONENKYVCIPOOILPLJXNHXJFXUZKEOOTDWAHOUAMBFWJCJBYWBWVWCMVGFUUBYZLHFPGFVETSSRMNMDIOZSQQCBHYDEYUYXAIGYGZDDGRNZOCLLKGLUDLPAVXUGINYTTRPAQAGCKTBXHEZRJVKVIKFIWRMEKXLJWH");

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
    msg.setTimeStamp(0.401041274289);
    msg.setSource(32102U);
    msg.setSourceEntity(84U);
    msg.setDestination(1089U);
    msg.setDestinationEntity(193U);
    msg.frameid = 123U;
    const char tmp_msg_0[] = {27, -4, 82, -74, -24, 61, -125, -101, 60, -13, -82, 48, 44, 124, -28, -89, 4, -22, -39, -48, 91, -104, -114, -107, -36, 28, 96, -92, -91, 17, 67, -108, 63, -100, 106, -111, 2, 67, 101, 34, 84, -10, -29, -122, -74, 17, 121, -116, -93, 43, 108, 80, 64, -50, 84, 14, -125, -12, -58, -112, 26, -95, -104, -21, -117, -125, -124, -124, -24, -41, 44, 59, -68, 109, 23, 125, 69, -106, 80, -85, 99, 66, 119, 85, 105, -62, -96, -122, 16, -19, 28, 124, 60, 71, -128, 76, 39, -122, 77, 94, -54, 85, 56, 51, 118, -8, 35, -16, 10, -36, 44, -10, 113, -121, 34, -26, 77, 2, -71, -91, 81, -66, 60, -84, -67, -91, 94, -69, -127, 20, -17, 92, -107, -62, -126, 42, 106, 1, -16, -34, -123, -35, -57, 55, -28, 11, -37, -19, -102, 110, -31, 23, 119, 3, 83, -28, 95, -34, 88, -17, -117, -16, 11, -36, 86, 83, 3, 76, -77, -30, -79, -127, -124, -6, -6, 102, 116, 125, 63, -31, -56, -55, 31, -115, -25, 81, -4, 85, 90, 108, -124, -34, 19, 14, 83, 86, -67, 104, -117, -36, 87, -76, 104, 68, -47, 124, 39, 77, 87, 92, 0, -30, -66, 124, -45, 101, 40, -4, -121, 102, -85, -108, -124, 41, -102, 23, -16, 76, 58, -1, -16, 70, -84, -67, -34, 8, -42, -55, -22, -109, 76, -126, -81, -118, 79, -40, 29, -28, 57, -123};
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
    msg.setTimeStamp(0.737174356366);
    msg.setSource(32479U);
    msg.setSourceEntity(54U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(197U);
    msg.frameid = 11U;
    const char tmp_msg_0[] = {119, -94, 50, 73, -42, 23, 58, 26, -5, -69, 101, 70, 46, 10, -107, 82, 8, -46, -64, -30, 63, -114, 48, -124, 54, -45, -12, 102, -72, -74, 115, -41, 81, 62, 101, -28, -94, -16, 8, 59, -23, 43, 65, -98, 16, -78, -54, 117, -81, -68, -74, -53, 8, 57, -22, -83, 116, 125, -104, -29, 70, 51, 97, 6, -97, -102, -17, 88, -120, 6, 123, 40, 1, -31, -15, 118, 89, -116, -118, 122, 79, -85, -68, 102, 7, 93, 76, -22, -117, -78, 35, -32, 116, -15, -50, -112, 120, -118, -97, -1, 94, -55, -4, -3, -52, 39, 19, -24, -58, 18, -80, -61, 48, 118, -50, 77, 26, -32, 71, -85, 86, -99, 6, -76, 26, 8, -53, 113, -69};
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
    msg.setTimeStamp(0.585495149175);
    msg.setSource(9546U);
    msg.setSourceEntity(165U);
    msg.setDestination(59997U);
    msg.setDestinationEntity(117U);
    msg.frameid = 85U;
    const char tmp_msg_0[] = {114, -21, 87, 26, 40, -85, -33, -4, -89, 12, -105, -123, 30, -97, 74, 82, -83, 116, 60, -58, -35, 78, 2, -25, 70, -15, -27, 57, 88, -96, 107, -5, 63, -40, 20, -84, 44, 87, 70, 100, -60, -87, 30, 37, -107, 70, -101, -114, 15, -23, 85, -61, 64, 105, 79, 36, 107, -64, -116, 114, -20, -74, -34, -1, 119, -63};
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
    msg.setTimeStamp(0.404140715452);
    msg.setSource(32473U);
    msg.setSourceEntity(205U);
    msg.setDestination(50912U);
    msg.setDestinationEntity(250U);
    msg.fps = 195U;
    msg.quality = 241U;
    msg.reps = 49U;
    msg.tsize = 173U;

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
    msg.setTimeStamp(0.172069907383);
    msg.setSource(7371U);
    msg.setSourceEntity(205U);
    msg.setDestination(25932U);
    msg.setDestinationEntity(245U);
    msg.fps = 30U;
    msg.quality = 175U;
    msg.reps = 149U;
    msg.tsize = 68U;

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
    msg.setTimeStamp(0.748264203822);
    msg.setSource(41996U);
    msg.setSourceEntity(254U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(117U);
    msg.fps = 228U;
    msg.quality = 12U;
    msg.reps = 63U;
    msg.tsize = 112U;

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
    msg.setTimeStamp(0.708116223529);
    msg.setSource(59097U);
    msg.setSourceEntity(146U);
    msg.setDestination(1215U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.332562537906;
    msg.lon = 0.857507605422;
    msg.depth = 228U;
    msg.speed = 0.00699074354447;
    msg.psi = 0.757857285605;

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
    msg.setTimeStamp(0.716118378145);
    msg.setSource(47093U);
    msg.setSourceEntity(181U);
    msg.setDestination(14780U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.186044180072;
    msg.lon = 0.826899397023;
    msg.depth = 103U;
    msg.speed = 0.857169725834;
    msg.psi = 0.252365385688;

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
    msg.setTimeStamp(0.735072993451);
    msg.setSource(61761U);
    msg.setSourceEntity(194U);
    msg.setDestination(19716U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.571607857393;
    msg.lon = 0.100562901288;
    msg.depth = 70U;
    msg.speed = 0.885741255557;
    msg.psi = 0.716212326556;

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
    msg.setTimeStamp(0.288311342418);
    msg.setSource(62458U);
    msg.setSourceEntity(125U);
    msg.setDestination(5454U);
    msg.setDestinationEntity(168U);
    msg.label.assign("UCGRXQJMDDDRNOGJHIMXCHIUCYYKLWBQTSRCMAOEJAJNMBYAOWVWUPXRWJWXUDBIFLKEPPWEFQTGEGNBQVZLBMGLYCZFJZCEUEDFCUFXRHFZFLSLBMWHIHHUQERJVPSOWDAJFXBIDTBIOVE");
    msg.lat = 0.66702044394;
    msg.lon = 0.281494384949;
    msg.z = 0.806951516055;
    msg.z_units = 64U;
    msg.cog = 0.172719463585;
    msg.sog = 0.144088995364;

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
    msg.setTimeStamp(0.734760533271);
    msg.setSource(65438U);
    msg.setSourceEntity(65U);
    msg.setDestination(29278U);
    msg.setDestinationEntity(98U);
    msg.label.assign("PWODGEHHUDOXCVSAWYSTAGNYELPPJXCVFFAZNKZDOAFEKRNATQHGTGBCLETFTFZDTSXZMXWBNRBYEYXMJAPXBYOULBIQDJNUPCQGSUOLFSRCJIONBMHPUWFCMKVQGTZYSKRXMSAFRLERVXFQKOIZGNQBIIRVQEKFNJIOLUJDWLTMDNHQHOGLUQRAUVJVYZCEHZHIHSPTDWWIMGARIKALWPYVMUYLQCJNOZMJZGMD");
    msg.lat = 0.504117970035;
    msg.lon = 0.0655376960013;
    msg.z = 0.161130453746;
    msg.z_units = 59U;
    msg.cog = 0.704839002017;
    msg.sog = 0.841776781425;

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
    msg.setTimeStamp(0.0304500503703);
    msg.setSource(6891U);
    msg.setSourceEntity(23U);
    msg.setDestination(28438U);
    msg.setDestinationEntity(130U);
    msg.label.assign("TRDFZAVDJBKVXHYMXQLLOQYHMGYLOHJNPNRDFXBHVOFIDYOBHSQCZRXDOMHESSGUTXCVKSWJSQSKXGIRGFXFF");
    msg.lat = 0.814031080415;
    msg.lon = 0.00405363167566;
    msg.z = 0.992353765861;
    msg.z_units = 105U;
    msg.cog = 0.235112624004;
    msg.sog = 0.365607647517;

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
    msg.setTimeStamp(0.428912959237);
    msg.setSource(22947U);
    msg.setSourceEntity(116U);
    msg.setDestination(11555U);
    msg.setDestinationEntity(5U);
    msg.name.assign("OPVLYMJYEYEELKHBUSGQJCAAFFRJUDMLGMESDHIDJTWAMUWMHCAKGDKGKKGBWGZUDVBYWYMFIRHSOFUNVSNLANWUHZOFSNIOZLQNIJJYTSARQKGRBTFJFXQBRSEKQNDPKRXCASQUXHKVLNXWITB");
    msg.value.assign("YFPBVEXHMCMCKNDJWJILSLQWWWBEIOARMHYFMKTFELGLLQWSQGHFPKYBXPRCXQVXWRTPQRTBOVFEAIUUHDLVAVTOLXZHUXTSCVMFSFLQXDLAMJKIYEVZDMZFKNAZJIGNCFUEIACENZNPGAXVYGSATWRKBTTRNWJBGSZKBOPOYDUBDNCWUJIGKOIUULDYHGRXE");

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
    msg.setTimeStamp(0.638678396259);
    msg.setSource(59308U);
    msg.setSourceEntity(110U);
    msg.setDestination(63537U);
    msg.setDestinationEntity(252U);
    msg.name.assign("UMMBJFVBCFEHGXFBRJEVURDVEZHLDQQHICDYIYUBBSDALPADMWYOBMTWAQTANKLSGNRDJVOOUXHKQCJGZJHERKPKNZ");
    msg.value.assign("HEYCZTJQCYMIQWJTZPPYKVZSGZZLYJZFIMBJIKDYCGWVHEJUAWDJAQLGLMONSKUBIIBEIHZLDJNMFMSKKMTRN");

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
    msg.setTimeStamp(0.932307756214);
    msg.setSource(4020U);
    msg.setSourceEntity(186U);
    msg.setDestination(53092U);
    msg.setDestinationEntity(113U);
    msg.name.assign("UGLSJSSSTOGXWSWERYKGQVOSAEDKAYHADXCLZNGSUACAUYQYXMYUQOAZBGPHTIZTRERITJBPEZIKKMFBDOPDZMCOIVFPXIFWHOTYUPEFMKJW");
    msg.value.assign("BRYKLKVUDXVDBMMSMOGWANJGLCFELNNFNIBEIKKDO");

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
    msg.setTimeStamp(0.509732661476);
    msg.setSource(53140U);
    msg.setSourceEntity(67U);
    msg.setDestination(20994U);
    msg.setDestinationEntity(215U);
    msg.name.assign("ZNMTJXRCALNEKZAOZUNAKTYWPSKOEOYRVWFWFWVEIOCJBYZVGJFENZZGDUESXNIBFPZDRILWSPDTANXIPCEBIYDVBXDKIAIRMSBHICBBYDJXMTHJNRHYQJFLGRTMKPKVPKLQWTWESGVHUIFXLCHBNGQYSNMUCHTQDEGDOAFVXHCFUOQZQHWVZJRHUXPAHLUPRJMEM");

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
    msg.setTimeStamp(0.516669350405);
    msg.setSource(22604U);
    msg.setSourceEntity(184U);
    msg.setDestination(51458U);
    msg.setDestinationEntity(22U);
    msg.name.assign("AEQCXNPZTWSFBIGJYWLEVMZGAMKDUNIKVOMNKUDBJVGFNYGWEKMNFDKWUITOOXXFSHHRXNUGLAURCRCYYHWFLMZRSVMAYQLUO");

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
    msg.setTimeStamp(0.323324350534);
    msg.setSource(60013U);
    msg.setSourceEntity(122U);
    msg.setDestination(47895U);
    msg.setDestinationEntity(140U);
    msg.name.assign("DDZCNKDGBQMSADFSFKPIWQTLLVZROBDAXSEGRECFNIMJOMATWKNHRYLTIYBJOLQHFWUOUEFPCUAVQXHVJFXDZITUNKYUKCBBIWRAEXHIYSIEZYVWCZMMCLHTVOTZQYBXGSVYBJKECFPSRPTAABGRGXUZYTQXSPJJDGUAJOJKLPHLIYERDVJWGGEHRRUFSQCXFICDCXEGGNDKJONMOWFQEIVWANHUPMBNNLPO");

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
    msg.setTimeStamp(0.165087641678);
    msg.setSource(33620U);
    msg.setSourceEntity(151U);
    msg.setDestination(64122U);
    msg.setDestinationEntity(183U);
    msg.name.assign("VZGHXUKUNDXPORVPVFBOAMMBSYCGAUQXFXWTZRBSCZFOLMPIPDPBJNDIRBOCWFJVHOEIUKPSDDZLGEUEZYTQCJXJBEHFAKUVTYYIHLPGRBXRTNWYFNHOGCAMSRMKIKHAVQVQRNSMNFOWDJUYWIVJWHCNDYYXLQUC");
    msg.visibility.assign("EVBYBQHKBDNVSPWAJLWMBQYHWJXNSCRWOFDOZDWQUHHDPPLUGHXCBZMVLNRKGRYMSKNIJJPVFULHCSIPGWERAUTHOKUVZTPITYZUFSLCMXKEQKPRXWCBYYNNGGUAIBZRGVYAKKEXTYYJNGIITJVIQVXCOARDJBUONSDZCZSRMUPGTNTHXBETD");
    msg.scope.assign("HQONWIDJDFOZFSPYDMSETNQHGHCKC");

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
    msg.setTimeStamp(0.254002675089);
    msg.setSource(24633U);
    msg.setSourceEntity(61U);
    msg.setDestination(50895U);
    msg.setDestinationEntity(53U);
    msg.name.assign("HPRQGFYGMXCYMHWTXNPAWLPKBILVXNECJNMWCOBVOHOJGFPQQEHYPWNUPGVRBKWEHRBYIPIZVEXYFLOB");
    msg.visibility.assign("WJOXNTPZOFIRAMLMFSCAPNFBGTWVZCDPOERVQ");
    msg.scope.assign("DAIGRCHFKRXVMWOSKVZATJQBNMJBZYFDQWAASIMFSAEJXVDFDYRIJUPIKBCTHKGFYRFECCEDWZJSZWMITRQN");

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
    msg.setTimeStamp(0.484460337013);
    msg.setSource(48931U);
    msg.setSourceEntity(175U);
    msg.setDestination(13268U);
    msg.setDestinationEntity(233U);
    msg.name.assign("EHZQEPOLQNSJSTIQDWPHPPLVXPNQFEQBQWDYOGHGUQDAMZRUBGYMIANGEVEBBCCRLLCVUVZGLNFACBMRPYJXSIKATZUZDMRBGNMJHTIOXNOWFXMEEEDXJVGCJUWEFLBKPRHHYPYTAYALVKXKJUKOQSBXITQCDINWUMBGDIKLZJHMZOXCJLSAYERTKRTWZSHGYKUIZOXIRYYBCNFRHDSOGF");
    msg.visibility.assign("WOVAFRKUFVICXYDBPKRPARZFNPSRQSNYPLBJRXKRYEOYFMAGJEMPETLEUUIQIBXCOLTXBXIDNWAMWZTVNYMKLQAH");
    msg.scope.assign("LOQLXOUHPQJZPCEXKAVBWDIJNSTLRUGYISXVWBXEIOCUVKSWSFGBOOEWDQQEJPDHDPNDYGGBREBAZVHUCJNVYPTAETXYDUJETFZUWOFJTXMBCKTHNELIYHSAJTSACDRRIIFWRKRZQKYPGKSLSHUGAKHMZMPFNRFKSIGQPQGFTUVL");

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
    msg.setTimeStamp(0.778899376973);
    msg.setSource(41207U);
    msg.setSourceEntity(4U);
    msg.setDestination(58872U);
    msg.setDestinationEntity(99U);
    msg.name.assign("OMXRHDMWXEVTPPJZLHEQNIEDNLBXSSAMQFJSFHIDEHBBABXMGXEORIOZUZNPAQJVJWVOECZYYUIPAFRCPLJQOFIYWAPWIIGGZGQWKRCMUCDVZVGNLPNJBOXOFM");

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
    msg.setTimeStamp(0.772198978102);
    msg.setSource(58860U);
    msg.setSourceEntity(253U);
    msg.setDestination(60156U);
    msg.setDestinationEntity(240U);
    msg.name.assign("YNMHAFXULOQNIGJYCBYINMJHLWQOWYMKTLEERZOIRSIYD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ILASLBYUIYLJCCWOXWVOMPDPKPAEGKYFQRRVHRGHTLOIOVKNHTDUDUTVRQBJXWKNHLBLGRFQVUWOUYNSZFJQXYQAMEPQGZMOAMPMQFJYAHKUBAVXRGCIEFQIXQTYKEBERFDIURENS");
    tmp_msg_0.value.assign("QBBTFQXOGVEQGYZDRSFWQFHPTPPEIZYTOWRQXFUXDFFRJZS");
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
    msg.setTimeStamp(0.982954729073);
    msg.setSource(41490U);
    msg.setSourceEntity(149U);
    msg.setDestination(8005U);
    msg.setDestinationEntity(164U);
    msg.name.assign("WMRSRVQVMYEMDWCLKWHCAWGLYENQSBXQEZZCQAHGURVTCPTDYDWFLCNNSFBHKRRDSXXFAJPFMS");

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
    msg.setTimeStamp(0.815264427022);
    msg.setSource(7388U);
    msg.setSourceEntity(223U);
    msg.setDestination(4473U);
    msg.setDestinationEntity(87U);
    msg.name.assign("ZCGDBFPKZBYJOJBDIFTWXRIMBQOYWQW");

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
    msg.setTimeStamp(0.926374260637);
    msg.setSource(16037U);
    msg.setSourceEntity(122U);
    msg.setDestination(45492U);
    msg.setDestinationEntity(15U);
    msg.name.assign("GPFEJVFDIDPTZRGNFGWBMAZTMTRQFDTLBJEGDXUQULLKKPGTVGLAOSWTBMSWJMNLXJUHARKHAXVKFZICOPVZWWDBOGIVQXOFYSCHHJUYUEHJESWHXRBGPWECIUZFYTRJCVUQSBAPPQYKTCMNAWHNDDWKLCMEYMZHIVIYTOMKAOCVTZYPIQRGFRJNRQSUYXPZFZEBODXKQISJCVWSANMJFYKYAILONBALISEENVLENUNDPZSBCRRO");

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
    msg.setTimeStamp(0.363602326562);
    msg.setSource(22167U);
    msg.setSourceEntity(218U);
    msg.setDestination(58045U);
    msg.setDestinationEntity(102U);
    msg.name.assign("LISUENZHZRYUYZTDWNCJZXEMBKAOJOJVCADJQEVFSJAFCSIGTVLGAQTYFNZQFHRITGTYCBPOXVMYFJYGTXLXAIFHBNYYUBDEHUILLWZEITBJWYAGDZNVLVRSRUSPSKQUGVPPAXEKWOILUXANFSDZKXGKWZEPXJEMVMRBWCPHDMSRQMPKGOCQUHONHOGPUWKPSZFIWCCHOIIQDCETABTFRJMHPRQEGYNW");

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
    msg.setTimeStamp(0.330072331047);
    msg.setSource(38925U);
    msg.setSourceEntity(235U);
    msg.setDestination(41593U);
    msg.setDestinationEntity(247U);
    msg.timeout = 54266892U;

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
    msg.setTimeStamp(0.916401475332);
    msg.setSource(4858U);
    msg.setSourceEntity(48U);
    msg.setDestination(61131U);
    msg.setDestinationEntity(209U);
    msg.timeout = 945519085U;

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
    msg.setTimeStamp(0.285496067873);
    msg.setSource(9830U);
    msg.setSourceEntity(11U);
    msg.setDestination(63183U);
    msg.setDestinationEntity(122U);
    msg.timeout = 1917616278U;

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
    msg.setTimeStamp(0.879844798795);
    msg.setSource(26906U);
    msg.setSourceEntity(246U);
    msg.setDestination(55827U);
    msg.setDestinationEntity(0U);
    msg.sessid = 738387593U;

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
    msg.setTimeStamp(0.354956657527);
    msg.setSource(16117U);
    msg.setSourceEntity(97U);
    msg.setDestination(39851U);
    msg.setDestinationEntity(189U);
    msg.sessid = 3794457608U;

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
    msg.setTimeStamp(0.638914453033);
    msg.setSource(15295U);
    msg.setSourceEntity(199U);
    msg.setDestination(39878U);
    msg.setDestinationEntity(157U);
    msg.sessid = 3923486876U;

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
    msg.setTimeStamp(0.359214064594);
    msg.setSource(48896U);
    msg.setSourceEntity(143U);
    msg.setDestination(110U);
    msg.setDestinationEntity(183U);
    msg.sessid = 3029406600U;
    msg.messages.assign("UNEIGIJTLEFYARRNQSOZTZAYNPUPKWRABOLNWZIMEKUKPSBZFVZAALEAMYKHOZREQAXGSDCQJPWFNIECEDGSCITMHZCNZOXSBHULOOXNFNXJVHJZTCVGALDJKYTBUIDHRLWRHTWLQDMJDPGIVCROWBPOMUMJSHVQDCKFODXIOKGGWDGBYMQQVRCFHBTFVBLRYLDSXPXYR");

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
    msg.setTimeStamp(0.0797443085366);
    msg.setSource(5433U);
    msg.setSourceEntity(37U);
    msg.setDestination(41677U);
    msg.setDestinationEntity(98U);
    msg.sessid = 2404505148U;
    msg.messages.assign("OXZUROREDIXAVRQGKKCDJAYVRWZLUFRWHDZEYFTZFLJOXIQBHMXKCQXQVVRLYDEBKUSHERPINGHBTMQKTLRAMIPWZQFPNEXSGACBWKPNZ");

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
    msg.setTimeStamp(0.509535102978);
    msg.setSource(6708U);
    msg.setSourceEntity(36U);
    msg.setDestination(2947U);
    msg.setDestinationEntity(43U);
    msg.sessid = 3385564324U;
    msg.messages.assign("PLIHQVKCFCBDNRKCHVRYTJMXLTNQNXCRYZRGIERBSLQMXUZTRIFFDCWBQOOHUUXVCGDBJHDMZOHTQJLWMEWYXDEFXHMBVENVQIUAAMXBPTSPCZBZSPRRLYYEXZOTJGAODEVSMKLOXEKFSRIPPJKOMYWPFKRTSGJCWQGMJBOUGKWYHA");

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
    msg.setTimeStamp(0.850518637662);
    msg.setSource(49036U);
    msg.setSourceEntity(167U);
    msg.setDestination(52780U);
    msg.setDestinationEntity(11U);
    msg.sessid = 270511499U;

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
    msg.setTimeStamp(0.441944550469);
    msg.setSource(25952U);
    msg.setSourceEntity(58U);
    msg.setDestination(37413U);
    msg.setDestinationEntity(51U);
    msg.sessid = 2004872883U;

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
    msg.setTimeStamp(0.00251605549352);
    msg.setSource(14419U);
    msg.setSourceEntity(115U);
    msg.setDestination(42633U);
    msg.setDestinationEntity(95U);
    msg.sessid = 1801664533U;

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
    msg.setTimeStamp(0.446817119542);
    msg.setSource(26271U);
    msg.setSourceEntity(195U);
    msg.setDestination(48331U);
    msg.setDestinationEntity(131U);
    msg.sessid = 3847960222U;
    msg.status = 233U;

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
    msg.setTimeStamp(0.353619865145);
    msg.setSource(62574U);
    msg.setSourceEntity(103U);
    msg.setDestination(20142U);
    msg.setDestinationEntity(189U);
    msg.sessid = 429415058U;
    msg.status = 7U;

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
    msg.setTimeStamp(0.0675446027664);
    msg.setSource(26629U);
    msg.setSourceEntity(34U);
    msg.setDestination(18368U);
    msg.setDestinationEntity(135U);
    msg.sessid = 3543003073U;
    msg.status = 0U;

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
    msg.setTimeStamp(0.306953864863);
    msg.setSource(31981U);
    msg.setSourceEntity(246U);
    msg.setDestination(9588U);
    msg.setDestinationEntity(67U);
    msg.name.assign("FDBBOMAROGKEDYAKTRSTWHKCQBJIYVAUTDVDQYZMGQUHQVQVPNYQTEFVFSJJSEGHUCRLEORARDJBCBLMARS");

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
    msg.setTimeStamp(0.901940771554);
    msg.setSource(28362U);
    msg.setSourceEntity(183U);
    msg.setDestination(3119U);
    msg.setDestinationEntity(143U);
    msg.name.assign("GCOHJJRYWPCVZMCMFEEFFWMXVAZLJRDDGKEFUYBHIKTKZLCJZBXVFRNTUVSNAGBTMVODYUOFIWGLHTIQKCSDHJSFRICPJLTUKVGFWLQPZBGWPXAZNCPXNIJSRXPYHPYQCIOSUNLPBABXWTHQKQBADWUYSECWDLDVMXAGQMKRBUZWHXMROEGSEQXKRECDQTLXYANMEI");

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
    msg.setTimeStamp(0.74257433177);
    msg.setSource(53804U);
    msg.setSourceEntity(2U);
    msg.setDestination(32632U);
    msg.setDestinationEntity(204U);
    msg.name.assign("LEELBHIHWXVCSXCKHMSKNVOZJBQDIATTORXDCBFWFCRSPFIWBAFMFEQQNWYHEXCBSYMSMCMGYAYPGJBAOAPIZRWQRPPMDYN");

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
    msg.setTimeStamp(0.483033424477);
    msg.setSource(29714U);
    msg.setSourceEntity(104U);
    msg.setDestination(56119U);
    msg.setDestinationEntity(71U);
    msg.name.assign("BRTRMEHDTKXSCKWZZNJ");

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
    msg.setTimeStamp(0.680975386479);
    msg.setSource(52378U);
    msg.setSourceEntity(71U);
    msg.setDestination(60399U);
    msg.setDestinationEntity(215U);
    msg.name.assign("URGITMQJZAQMFFCDJDFYNYITXCNXRYTPAAQOTHCS");

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
    msg.setTimeStamp(0.515080035324);
    msg.setSource(247U);
    msg.setSourceEntity(122U);
    msg.setDestination(65066U);
    msg.setDestinationEntity(100U);
    msg.name.assign("OKAONTXJRJZUTRQXFWGUUSNTIZQMQRIARLDZKJJZOFOVEDCEDLMMHZF");

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
    msg.setTimeStamp(0.454855654428);
    msg.setSource(3342U);
    msg.setSourceEntity(173U);
    msg.setDestination(9689U);
    msg.setDestinationEntity(93U);
    msg.type = 226U;
    msg.error.assign("TSVDCXURMXNGHKBRPPRLVOQSIGGOSQIEWEJTMZUUKGWMAXLUBQAYEZDMEJXFZMRWFIFEIITHUZVYNKUMLJCHIOCKFLRFVRVZQPKNQEAASSWECOILTGNKDWTZRVHSNZBCGBMOZQYPJORNOPJYYAHCYFTLVWMAJJCYYSBXOKLGYHPLQCDJGIFKCDPADRKUUWDALZPWNXKBJTUHBHPDAHWBSSLNQAMOMOIFEQXDVUHVTPEINBSTCVDXEF");

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
    msg.setTimeStamp(0.580376253339);
    msg.setSource(3124U);
    msg.setSourceEntity(32U);
    msg.setDestination(485U);
    msg.setDestinationEntity(123U);
    msg.type = 212U;
    msg.error.assign("YWIYZQCHYPVQAGXGRSAPFRNSHQNROVDXROVKXVGKMRAYPNCF");

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
    msg.setTimeStamp(0.63710727678);
    msg.setSource(62891U);
    msg.setSourceEntity(220U);
    msg.setDestination(40993U);
    msg.setDestinationEntity(196U);
    msg.type = 156U;
    msg.error.assign("RBUDIRGZWDYQVSFJLGNGPCVZSJKHHNMUQYPNIOMYQVSWQOWLXEEKRAPCDMQHBAIIOUBAJACFFRWXQHOIOHKKGAOOPLZWHJLDSTEITPEJGYVQBUTVITHURYAFYEBBPWVDGWMFAWBVYKZMKRLLIHPEBNSXMTDXTZNQIWCLDAMMNEXXZFBJSRCQDYCLVWTUFDNZXURSKXJTANNXZCMALGILJJHPZXONKETCYPSUSESKZUV");

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
    msg.setTimeStamp(0.833438888409);
    msg.setSource(28977U);
    msg.setSourceEntity(211U);
    msg.setDestination(62723U);
    msg.setDestinationEntity(175U);
    msg.seq = 42016U;
    msg.sys_dst.assign("WMSIAPFDMMQVKPENWTCK");
    msg.flags = 116U;
    const char tmp_msg_0[] = {-38, -19, 39, -61, 110, -94, 74, -104, 49, 63, -94, -54, -101, 82, -87, 59, -84, -127, -67, -36, 45, -45, 15, 4, -70, -42, -56, 55, -29, 39, -80, -9, -123, 5, -10, 39, -67, 64, -89, -89, -29, 22, -2, 9, 18, -85, 23, -75, -57, 25, 10, -28, -71, -88, 114, 7, 28, -36, -52, -104, 73, -20, 25, -71, -68, 53, -53, 3, -83, 9, -87, 89, -58, -96, -63, -123, 93, 90, -12, 122, -68, -87};
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
    msg.setTimeStamp(0.583593924207);
    msg.setSource(14765U);
    msg.setSourceEntity(4U);
    msg.setDestination(57133U);
    msg.setDestinationEntity(25U);
    msg.seq = 47131U;
    msg.sys_dst.assign("EGVYWKEZIHSIBEYMYWKFUGDIMRXFXSUTZSBYSNGQQPJKFUDQUBQJMTSUQYVLTDIBEXTQQPYLCHZWSGNDOHCLNNVBPJODPGLCLXERWOSLOSXCACXGAUYNXLTSKJVFKJGECPZPRHTAJAJGNZOYHJOBNTEABMMIMBGXWHDXHDEAQVFWIHPJXNWBTKRIHZIBPAMIMIGDDVAZCVKZSFJUFRQZ");
    msg.flags = 30U;
    const char tmp_msg_0[] = {35, -104, -3, -36, 60, -43, 27, 19, 28, 100, 54, -41, -70, 105, -52, 35, -87, 56, -93, 123, 105, 32, 93, -28, -111, 105, 79, -14, -70, -117, 61, -47, -69, -47, -92, -105, -97, -29, -2, 44, 23, -43, -2, -77, -118, 80, 7, -72, -13, -56, -47, 36, -119, 115, -119, 57, -111, 0, 111, 23, -29, 25, 32, 120, -112, 124, -32, 63, 20, 55, 39, -40, -78, 30, -91, 31, 14, -40, 39, 14, 79, -53, -123, 93, -16, 108, -42, 105, 18, -3, 70, -73, -40, 8, -69, 108, -51, 91, -70, -63, -7, 60, 98, 100, 24, 29, 112, -12, 61, 52, -113, 41, -65, 2, -123, 118, -104, -65, -118, 74, -88, 45, -51, 110, 59, -82, 102, -60, -95, 54, 16, -39, -5, 89, 21, -79, -108, 28, -100, 106, -44, -107, 27, 87, -50, -47, 31, 103, -127, -84, -52, -49, -108, -13, 54, 21, -76, 20, 81, -78, -64, -113, 51, -39, -77, 6, -10, -24, 68, -45, -5, -60, 11, 35, 0, -116, 120, 74, -121, -47, 118, 76, -53, 31, -31, 8, 3, -55, -12, 91, 9, 94, -128, -60, 12, 49, -76, 10, -128, 56, 77, 126, -96, -50, 47, 46, 105, 115, 76, 85, -22, -103, 111, -73, 110, 5, -61, -64, 116, 38, -93, 0, -93, -39, -120, 84, -104, -25, -7, 87, 125, -19, 25, 88, -4, 43, 46};
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
    msg.setTimeStamp(0.862656577527);
    msg.setSource(46444U);
    msg.setSourceEntity(243U);
    msg.setDestination(29005U);
    msg.setDestinationEntity(93U);
    msg.seq = 60866U;
    msg.sys_dst.assign("KGHQNCOTEVIIJGOAEBOIIIHJRDZVBGPBXREGYBFDMRISGRVWPGYZKTJPSIWWDFURKXBBZATSQDNNQSGISOA");
    msg.flags = 81U;
    const char tmp_msg_0[] = {112, 97, 120, 73, -93, 47, 46, -89, -110, 46, -64, -122, 62, 116, -115, 126, -46, 62, -27, 103, -35, 111, 22, -26, -91, -125, 88, 36, 58, -84, -22, -93, 100, 123, 37, -97, -111, 40, -14, -21, -92, 90, -27, -63, 47, 16, 96, 17, -76, -38, -1, -60, -111, 50, -97, 62, 3, -18, 89, 43, 114, -49, -63, 9, -107, 76, 17, 67, 18, 96, -7, -44, -122, -96, 47, 63, -112, 73, -86, -70, -106, 56, -30, -94, 14, 54, -122, -30, -124, 21, 16, -89, 95, 81, -28, -19, 18, 66, -106, -121, -14, 69, 100, 45, 84, 122, 126, 124, 11, -11, -125, -75, 47, -114, -40, -39, -51, -41, 87, 98, 11, 41, 20};
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
    msg.setTimeStamp(0.848253510349);
    msg.setSource(10811U);
    msg.setSourceEntity(44U);
    msg.setDestination(11107U);
    msg.setDestinationEntity(75U);
    msg.sys_src.assign("FCQAGFMREZLZVEVFBBCK");
    msg.sys_dst.assign("FDMPRXUXQKYHYRFMPWZKVPONBUCAFDQPRVSPRSGZTVQUKPJTOKBPEJEIJAMFI");
    msg.flags = 220U;
    const char tmp_msg_0[] = {54, -41, 10, -1, -51, 44, -1, -119, 49, -2, -1, 93, 32, 94, -67, -10, -4, 104, -100, 20, 46, 20, -5, 103, -12, -115, -38, 68, 68, 34};
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
    msg.setTimeStamp(0.493207069204);
    msg.setSource(4712U);
    msg.setSourceEntity(85U);
    msg.setDestination(38362U);
    msg.setDestinationEntity(243U);
    msg.sys_src.assign("BEJEUPWPXUPTRIFFSKJUFLZCAOYNKGGZON");
    msg.sys_dst.assign("GHDYOBGAZHSOILLFPFJJNLJRYKLEPFGTDXDBHPXA");
    msg.flags = 8U;
    const char tmp_msg_0[] = {-88, -59, -106, -89, -14, -77, -62, -127, -121, 23, 33, -26, -119, 126, -59, -102, -127, 21, 62, 107, 94, 78, -17, -86, 75, 68, 77, 5, -41, -93, -96, -53, 67, 11, 48, -108, -90, 86, -7, -69, -38, 8, 38, 52, -106, -46, -124, 91, -26, 69, -15, 7, -3, -13, 96, 9, -105, 126, -89, 103, -120, -88, 68, 122, 97, -56, -40, 66, 87, 85, -46, 24, 94, 75, 23, 89, -5, 4, 84, 121, 74, -13, -55, -36, -124, 79, 35, -113, 34, 44, -65, 12, -97, 30, -13, 105, -13, -28, -81, -41, 11, -29, -122, 81, -6, -53, -123, -76, -117, 20, -85, -74, -64, -23, -18, 116, -62, 123, 87, -60, 54, 16, 26, 58, 95, 56, -117, -46, 1, -121, 8, 122, 10, -70, 22, 1, -104};
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
    msg.setTimeStamp(0.605951949449);
    msg.setSource(10707U);
    msg.setSourceEntity(16U);
    msg.setDestination(35554U);
    msg.setDestinationEntity(122U);
    msg.sys_src.assign("PPBMONHTOKMNEWWMFZQCPANIRHJBYIDJYOSDDWAOKHXMMCFIPZJESJWFOQTBEMJXVIWFSTOUVGRRYPBUGATOYZKEQZOZZMLCUTLVDAXQHHUJVENKYKHELRZATLWGFFCBSSTVRSUFZDPMYQNINILGCZXSWPRGIATQJHGFRZACPQFLGLSTOQBWGWCXQSJCDVBXJYEAMGHLDXDKEEQCVXFBBICDYNILENPNUVJAKUOYHPDXTHLVUR");
    msg.sys_dst.assign("CQLBHTSUYPKTBNKQVHJKDPIPLDPWFECRGODMDVCXXCZZLQOFYEOIRRALFCZEIH");
    msg.flags = 183U;
    const char tmp_msg_0[] = {-39, -72, -108, 71, -19, -112, 90, -15, 0, -16, -61, 13, -48, -84, -32, 80, -57, 76, -95, 87, -41, 70, -32, 11, -58, -15, 72, 72, -37, 125, 118, 108, 74, 120, 116, 55};
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
    msg.setTimeStamp(0.84617748433);
    msg.setSource(31020U);
    msg.setSourceEntity(73U);
    msg.setDestination(6487U);
    msg.setDestinationEntity(87U);
    msg.seq = 33995U;
    msg.value = 114U;
    msg.error.assign("RPTDOISEGLYMTRKISBERNMWHAJWOZVHHFZIPCXLQQUBLKZEWGETAXQMKCEZRLDCLXAKZKGTUKYQLCTGPBYYATSMLDBRCPE");

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
    msg.setTimeStamp(0.663148651169);
    msg.setSource(27825U);
    msg.setSourceEntity(212U);
    msg.setDestination(139U);
    msg.setDestinationEntity(66U);
    msg.seq = 43827U;
    msg.value = 52U;
    msg.error.assign("AIDJQUQBFPUWHSDSZZICNRKMZWKGCXMNUUGHAXHNLTDONIPQTMCETRFXCQGOWBRJPSTKLEKSSZHFCRYVEMXSCTRPUTDYSLOOLBWOUXEDAGPBIALVONGSP");

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
    msg.setTimeStamp(0.258506573373);
    msg.setSource(30482U);
    msg.setSourceEntity(183U);
    msg.setDestination(33100U);
    msg.setDestinationEntity(75U);
    msg.seq = 34458U;
    msg.value = 207U;
    msg.error.assign("BWIGGLOUXCSALVQRCAAKMFNZSSQXTQROGFSIPSEFYIHVRHTZHWDPJGKHCWIJLBFDIAWXYPWUGNMMVJNTIDDRNVJBLCWHNBGYOUACWFQXRVNLDEYEVMTSXKMEIQBZVXSLTYRUNGTCTNGPYKUEGWOTADHSRUBZRCWJETPKIXZOMBUONGPXRJLLBXVFMDFPTOJACZPIWUMAEEJFMZEAUPRHQQYFIEVMJZDKXVJYSLNYKKZOPKQKSZQDBUCOH");

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
    msg.setTimeStamp(0.46443186835);
    msg.setSource(40142U);
    msg.setSourceEntity(175U);
    msg.setDestination(53907U);
    msg.setDestinationEntity(125U);
    msg.seq = 25194U;
    msg.sys.assign("QPWIHXZMOKXRGLZUKSXSTOBYBNPEFQJSEWLJCFGIOKORRWFZAYYIZRJEHLAJAIUCIJGXFHDGDABMWZCPCDAKZBOSWVGTABU");
    msg.value = 0.495094811082;

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
    msg.setTimeStamp(0.544870091923);
    msg.setSource(9107U);
    msg.setSourceEntity(9U);
    msg.setDestination(12233U);
    msg.setDestinationEntity(195U);
    msg.seq = 14974U;
    msg.sys.assign("ORBJJRVKVGWXOQGHKTBFLIWEXBJTTEDPAIABSRGHHIAJIBOCUFQOERXMJCAFKVTILYEYMSFVLLZKGPZOIGTNWRLJJKFDAQTWNADHIOCQUYWSOXWJLEMYWVSUSZOQAJBNBBXKBAKVKDEQDINTBHOUTCGKSPEEMIZUIFGDSUXNMNRTXXPFZCQZZCNUCY");
    msg.value = 0.103396871711;

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
    msg.setTimeStamp(0.72469500943);
    msg.setSource(16264U);
    msg.setSourceEntity(85U);
    msg.setDestination(11552U);
    msg.setDestinationEntity(51U);
    msg.seq = 53982U;
    msg.sys.assign("JWYWLEUYZAAUQEMAGXXGHOIZZHOTXFKVKIFEFDNBDQKQLKHROLZTKIZPPMVULDEGSBOGCOAKZWZXTZEYVLIFICJPYMERUXQFMSHWOIFJVAVNPQRPSDLIONRHGIWGCUHBJTHGUGCFAGNJVVVXIWBLDRBDJCXMMXNYLHHUSAWQRFAGBMNFHNCKTZNMLUJWTSPQEDOVKBTIREJSTYKCSDWNXJPYVS");
    msg.value = 0.431851694404;

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
    msg.setTimeStamp(0.863367882045);
    msg.setSource(41288U);
    msg.setSourceEntity(195U);
    msg.setDestination(135U);
    msg.setDestinationEntity(35U);
    msg.action = 8U;
    msg.longain = 0.606820051457;
    msg.latgain = 0.139647769267;
    msg.bondthick = 2402219307U;
    msg.leadgain = 0.646309435555;
    msg.deconflgain = 0.683386803094;

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
    msg.setTimeStamp(0.390797841973);
    msg.setSource(11348U);
    msg.setSourceEntity(212U);
    msg.setDestination(60709U);
    msg.setDestinationEntity(67U);
    msg.action = 42U;
    msg.longain = 0.819890073682;
    msg.latgain = 0.324102739303;
    msg.bondthick = 967478788U;
    msg.leadgain = 0.877359946717;
    msg.deconflgain = 0.88543442226;

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
    msg.setTimeStamp(0.501803545464);
    msg.setSource(24903U);
    msg.setSourceEntity(239U);
    msg.setDestination(56649U);
    msg.setDestinationEntity(231U);
    msg.action = 112U;
    msg.longain = 0.923736788985;
    msg.latgain = 0.0704249682459;
    msg.bondthick = 3224687561U;
    msg.leadgain = 0.795868827636;
    msg.deconflgain = 0.608445513621;

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
    msg.setTimeStamp(0.0463786048017);
    msg.setSource(3723U);
    msg.setSourceEntity(95U);
    msg.setDestination(25927U);
    msg.setDestinationEntity(72U);
    msg.err_mean = 0.907109136005;
    msg.dist_min_abs = 0.154324994799;
    msg.dist_min_mean = 0.0424830358659;

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
    msg.setTimeStamp(0.515035426676);
    msg.setSource(45604U);
    msg.setSourceEntity(0U);
    msg.setDestination(59088U);
    msg.setDestinationEntity(16U);
    msg.err_mean = 0.214238785409;
    msg.dist_min_abs = 0.455852399679;
    msg.dist_min_mean = 0.223718909978;

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
    msg.setTimeStamp(0.810582124611);
    msg.setSource(9785U);
    msg.setSourceEntity(226U);
    msg.setDestination(24272U);
    msg.setDestinationEntity(53U);
    msg.err_mean = 0.734619143633;
    msg.dist_min_abs = 0.979542037142;
    msg.dist_min_mean = 0.598826485099;

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
    msg.setTimeStamp(0.953044284132);
    msg.setSource(29562U);
    msg.setSourceEntity(203U);
    msg.setDestination(24251U);
    msg.setDestinationEntity(128U);
    msg.action = 90U;
    msg.lon_gain = 0.2653538047;
    msg.lat_gain = 0.859243442626;
    msg.bond_thick = 0.651117822434;
    msg.lead_gain = 0.96820445424;
    msg.deconfl_gain = 0.0835589852765;
    msg.accel_switch_gain = 0.524372581211;
    msg.safe_dist = 0.211621340705;
    msg.deconflict_offset = 0.647429674866;
    msg.accel_safe_margin = 0.798565746012;
    msg.accel_lim_x = 0.324839500724;

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
    msg.setTimeStamp(0.942846353062);
    msg.setSource(34408U);
    msg.setSourceEntity(11U);
    msg.setDestination(54220U);
    msg.setDestinationEntity(172U);
    msg.action = 5U;
    msg.lon_gain = 0.419543076294;
    msg.lat_gain = 0.735525978089;
    msg.bond_thick = 0.467541311781;
    msg.lead_gain = 0.011953125109;
    msg.deconfl_gain = 0.792903297793;
    msg.accel_switch_gain = 0.419319668088;
    msg.safe_dist = 0.733201149567;
    msg.deconflict_offset = 0.0851076492761;
    msg.accel_safe_margin = 0.117020079822;
    msg.accel_lim_x = 0.243622765834;

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
    msg.setTimeStamp(0.641717439091);
    msg.setSource(42606U);
    msg.setSourceEntity(200U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(179U);
    msg.action = 28U;
    msg.lon_gain = 0.795503312501;
    msg.lat_gain = 0.437203774626;
    msg.bond_thick = 0.6359448519;
    msg.lead_gain = 0.688995265062;
    msg.deconfl_gain = 0.941807708327;
    msg.accel_switch_gain = 0.433229616734;
    msg.safe_dist = 0.527446863738;
    msg.deconflict_offset = 0.306398593033;
    msg.accel_safe_margin = 0.141157908044;
    msg.accel_lim_x = 0.225886990484;

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
    msg.setTimeStamp(0.813354173757);
    msg.setSource(3125U);
    msg.setSourceEntity(103U);
    msg.setDestination(30624U);
    msg.setDestinationEntity(221U);
    msg.type = 174U;
    msg.op = 92U;
    msg.err_mean = 0.53650743296;
    msg.dist_min_abs = 0.506979232865;
    msg.dist_min_mean = 0.486462985065;
    msg.roll_rate_mean = 0.217165561975;
    msg.time = 0.773656306186;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 199U;
    tmp_msg_0.lon_gain = 0.216990902797;
    tmp_msg_0.lat_gain = 0.325909158543;
    tmp_msg_0.bond_thick = 0.15725204739;
    tmp_msg_0.lead_gain = 0.100156113134;
    tmp_msg_0.deconfl_gain = 0.582330485425;
    tmp_msg_0.accel_switch_gain = 0.615834978154;
    tmp_msg_0.safe_dist = 0.0836545872937;
    tmp_msg_0.deconflict_offset = 0.96252958582;
    tmp_msg_0.accel_safe_margin = 0.318282626703;
    tmp_msg_0.accel_lim_x = 0.475135882094;
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
    msg.setTimeStamp(0.242534674253);
    msg.setSource(39382U);
    msg.setSourceEntity(174U);
    msg.setDestination(35375U);
    msg.setDestinationEntity(160U);
    msg.type = 112U;
    msg.op = 121U;
    msg.err_mean = 0.478905088251;
    msg.dist_min_abs = 0.355319855153;
    msg.dist_min_mean = 0.408923654339;
    msg.roll_rate_mean = 0.375093693984;
    msg.time = 0.0502818310479;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 31U;
    tmp_msg_0.lon_gain = 0.278162261244;
    tmp_msg_0.lat_gain = 0.0242264627664;
    tmp_msg_0.bond_thick = 0.207919615727;
    tmp_msg_0.lead_gain = 0.590110101215;
    tmp_msg_0.deconfl_gain = 0.0253971054586;
    tmp_msg_0.accel_switch_gain = 0.38744522713;
    tmp_msg_0.safe_dist = 0.804093019591;
    tmp_msg_0.deconflict_offset = 0.108383949868;
    tmp_msg_0.accel_safe_margin = 0.563040091746;
    tmp_msg_0.accel_lim_x = 0.317328434358;
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
    msg.setTimeStamp(0.22262027838);
    msg.setSource(29843U);
    msg.setSourceEntity(127U);
    msg.setDestination(18962U);
    msg.setDestinationEntity(149U);
    msg.type = 172U;
    msg.op = 11U;
    msg.err_mean = 0.567005774718;
    msg.dist_min_abs = 0.348158450131;
    msg.dist_min_mean = 0.134442863401;
    msg.roll_rate_mean = 0.313129777535;
    msg.time = 0.602912109421;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 97U;
    tmp_msg_0.lon_gain = 0.169802650833;
    tmp_msg_0.lat_gain = 0.690191346685;
    tmp_msg_0.bond_thick = 0.738435239282;
    tmp_msg_0.lead_gain = 0.456181316651;
    tmp_msg_0.deconfl_gain = 0.140262621557;
    tmp_msg_0.accel_switch_gain = 0.985296243283;
    tmp_msg_0.safe_dist = 0.199761200731;
    tmp_msg_0.deconflict_offset = 0.74345457171;
    tmp_msg_0.accel_safe_margin = 0.0655650060473;
    tmp_msg_0.accel_lim_x = 0.758395434738;
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
    msg.setTimeStamp(0.567712611292);
    msg.setSource(5568U);
    msg.setSourceEntity(122U);
    msg.setDestination(33894U);
    msg.setDestinationEntity(222U);
    msg.uid = 59U;
    msg.frag_number = 164U;
    msg.num_frags = 167U;
    const char tmp_msg_0[] = {29, -127, 113, 49, 124, -118, 55, -104, 91, -95, 47, -115, 46, -32, -118, 109, -2, -34, 61, 71, -33, 48, -21, 33, -73, -23, -57, 71, 35};
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
    msg.setTimeStamp(0.79270473749);
    msg.setSource(24871U);
    msg.setSourceEntity(177U);
    msg.setDestination(52705U);
    msg.setDestinationEntity(86U);
    msg.uid = 108U;
    msg.frag_number = 18U;
    msg.num_frags = 177U;
    const char tmp_msg_0[] = {66, 72, -121, -48, -40, -1, -40, 63, 17, 120, -37, -46, 87, -34, -70, -14, 83, 84, -37, -125, 33, -86, 29, 52, 7, -87, -18, 60, -54, 59, 121, 58, 100, 44, 112, -31, -102, 83, 101, -124, 99, -47, -10, -38, 96, 54, -101, -86, 41, -118, -105, -9, 14, 14, 107, -94, 114, 19, -51, -83, 10, -36, -16, -16, -40, 4, -113, -119, -26, 116, -125, -15, 105, -28, 78, -93};
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
    msg.setTimeStamp(0.311459653962);
    msg.setSource(8830U);
    msg.setSourceEntity(47U);
    msg.setDestination(51848U);
    msg.setDestinationEntity(36U);
    msg.uid = 248U;
    msg.frag_number = 134U;
    msg.num_frags = 135U;
    const char tmp_msg_0[] = {79, 24, 9, -30, 97, 85, 43, 96, 91, 92, 16, -126, 53, 58, -75, -84, 62, -52, -1, 72, 116, -89, -73, -10, -39, -53, -64, -108, -51, 98, 69, -111, -32, -58, -127, -79, -38, -42, -55, -124, 15, 4, 64, 11, -42, -6, 4, 82, 53, 109, 39, 14, 18, 104, 15, -61, 43, 115, -116, 29, -126, -120, 76, 95, 76, -83, -101, 100, 97, -7, 36};
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
    msg.setTimeStamp(0.439567467124);
    msg.setSource(30048U);
    msg.setSourceEntity(17U);
    msg.setDestination(62207U);
    msg.setDestinationEntity(1U);
    msg.content_type.assign("JWRXILNAZFRSCZXHCGVKBERWNT");
    const char tmp_msg_0[] = {125, 43, -106, 86, 85, -58, 117, 121, -60, -88, 46, -6, -12, -102, 36, -27, 76, -124, 11, -90, 72, 18, -76, 115, 10, 25, 59, -84, 0, -21, -85, 3, 87, -57, -127, -59, 58, -111, 107, 104, 75, -26};
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
    msg.setTimeStamp(0.52723649823);
    msg.setSource(36893U);
    msg.setSourceEntity(38U);
    msg.setDestination(46524U);
    msg.setDestinationEntity(45U);
    msg.content_type.assign("UHSYKKXSDWRIPHKWRMLMNGVCHVIUDOKHPYGXVDAECZZCHAPJQQRXMKRUTYFAQRSRJPQMSXECXWHVPAGMNQNYHKGYSWDGIAIBBJKMUOFEURM");
    const char tmp_msg_0[] = {78, 62, 119, -112, -49, 41, 57, -7, 99, 96, -7, 88, 55, 28, 2, 32, 83, -78, 41, -66, 46, -113, 8, 48, 56, 33, 18, -113, -98, -40, -11, 82, -84, -97, 43, -107, -52, 28, 17, -19, 96, -8, 20, 74, 100, -14, -95, -67, -36, 89, 19, -60, 126, 40, -35, -60, -62, -44, 43, 87, 86, 76, 36, -90, 20, -110, -76, -7, 30, 20, -80, 26, -18, -122, 70, 17, -46, 88, 53, 40, 83, -125, -40, -44, -66, -31, 113, 89, 104, 107, -66, -4, -23, 57, -106};
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
    msg.setTimeStamp(0.436078930665);
    msg.setSource(3962U);
    msg.setSourceEntity(207U);
    msg.setDestination(16283U);
    msg.setDestinationEntity(38U);
    msg.content_type.assign("LIFPOANJNYYSEQCMAAEHHGTVDPRGAQVKUYDUYOYJXNRTBXUZQGAAOXBUDHQKUIYZSEB");
    const char tmp_msg_0[] = {-99, -61, -6, -83, 103, 4, 74, 86, -123, -72, 49, 56, -78, -12, 14, -104, 1, -104, -19, -116, -114, -61, 67, -91, 38, -106, -62, -67, 26, 97, -13, 74, 40, -12, 77, 120, -24, -48, -69, -72, -119, -66, 40, -106, 12, 106, -128, -15, 123, -57, 125, 39, -87, 81, 54, -84, -106, -78, 103, 57, 106, -106, -91, -63, 38, 6, -70, -93, 113, -55, 104, 59, 106, 100, 78, -81, -20, -80, 86, -40, -66, -18, -48, 19, 30, -49, 9, 87, 17, 121, -14, -58, 53, 113, -46, -5, 84, -66, 84, -53, -81, -28, 117, -87, -13, -7, -117, -100, -1, 25, 34};
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
    msg.setTimeStamp(0.269559768211);
    msg.setSource(50971U);
    msg.setSourceEntity(101U);
    msg.setDestination(29220U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.957115869787);
    msg.setSource(25105U);
    msg.setSourceEntity(163U);
    msg.setDestination(36736U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.183999022442);
    msg.setSource(29500U);
    msg.setSourceEntity(228U);
    msg.setDestination(12810U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.673578702961);
    msg.setSource(4332U);
    msg.setSourceEntity(9U);
    msg.setDestination(466U);
    msg.setDestinationEntity(7U);
    msg.target = 35451U;
    msg.bearing = 0.425408852933;
    msg.elevation = 0.618410728922;

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
    msg.setTimeStamp(0.617351034831);
    msg.setSource(8961U);
    msg.setSourceEntity(134U);
    msg.setDestination(14884U);
    msg.setDestinationEntity(133U);
    msg.target = 27214U;
    msg.bearing = 0.45143592061;
    msg.elevation = 0.688694999538;

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
    msg.setTimeStamp(0.924029432647);
    msg.setSource(9361U);
    msg.setSourceEntity(61U);
    msg.setDestination(42689U);
    msg.setDestinationEntity(2U);
    msg.target = 15769U;
    msg.bearing = 0.317457975084;
    msg.elevation = 0.326534568661;

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
    msg.setTimeStamp(0.324731592494);
    msg.setSource(58405U);
    msg.setSourceEntity(141U);
    msg.setDestination(40049U);
    msg.setDestinationEntity(101U);
    msg.target = 13861U;
    msg.x = 0.0426696187526;
    msg.y = 0.601524764003;
    msg.z = 0.237286503422;

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
    msg.setTimeStamp(0.766115607271);
    msg.setSource(28360U);
    msg.setSourceEntity(150U);
    msg.setDestination(20686U);
    msg.setDestinationEntity(137U);
    msg.target = 29845U;
    msg.x = 0.658203774362;
    msg.y = 0.311031947906;
    msg.z = 0.320956620471;

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
    msg.setTimeStamp(0.753781054299);
    msg.setSource(60878U);
    msg.setSourceEntity(240U);
    msg.setDestination(17035U);
    msg.setDestinationEntity(17U);
    msg.target = 56173U;
    msg.x = 0.785256500993;
    msg.y = 0.856178932274;
    msg.z = 0.489224106064;

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
    msg.setTimeStamp(0.567047184859);
    msg.setSource(14125U);
    msg.setSourceEntity(181U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(139U);
    msg.target = 6105U;
    msg.lat = 0.0281783069236;
    msg.lon = 0.80744306213;
    msg.z_units = 87U;
    msg.z = 0.946487022268;

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
    msg.setTimeStamp(0.403998025914);
    msg.setSource(17382U);
    msg.setSourceEntity(190U);
    msg.setDestination(43027U);
    msg.setDestinationEntity(71U);
    msg.target = 23321U;
    msg.lat = 0.920248939619;
    msg.lon = 0.912267555179;
    msg.z_units = 90U;
    msg.z = 0.68726697283;

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
    msg.setTimeStamp(0.189640442314);
    msg.setSource(62412U);
    msg.setSourceEntity(113U);
    msg.setDestination(60350U);
    msg.setDestinationEntity(223U);
    msg.target = 33779U;
    msg.lat = 0.356356403099;
    msg.lon = 0.744134319876;
    msg.z_units = 216U;
    msg.z = 0.042502833196;

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
    msg.setTimeStamp(0.185506375114);
    msg.setSource(17730U);
    msg.setSourceEntity(40U);
    msg.setDestination(31270U);
    msg.setDestinationEntity(198U);
    msg.locale.assign("CTARISYOWWHCDFRDCTDZJWXGSEPNGRDYZRYFUOGKMFHRIWQLLJQSHMMREXUWXNAIZVICBUQOWYYBFDWFEKUIIHHADPAZLVSVYBRJHMPANCASAQQLXBXPBRWUBJPNKTHNKSUXPMZUHPESVKHJEQNYFMFTKZDBLEKGJETOBPXCN");
    const char tmp_msg_0[] = {111, -9, 108, -30, 122, -8, 65, 26, -93, 49, 116, -10, -26, 48, 105, -1, 14, 74, 110, 80, 41, -116, -50, -63, -29, -35, 52, 89, -55, -92, -85, -4, -21, 48, -127, 71, 106, 79, -42, 70, -83, -88, -47, -128, -65, -41, -32, 64, 58, -102, -74, -38, -92, 61, -110, -13, 11, -88, 81, 109, 6, -115, -70, 58, -100, 104, 18, -7, -110, 76, -40, -54, -102, 61, -5, 54, -15, -117, 82, 35, -78, -109, 58, 26, 51, 34, -57, 117, 23, 69, 3, 88, -15, 77, 106, -9, -52, 26, -2, 26, 62, -93, 37, -78, 10, -66, 104, -20, 3, -46, 38, -114, -81, 121, -81, -94, -65, 2, 47, 10, 66, 82, -25, -1, 53, -110, 22, 14, -100, -86, 107, -6, -31, 23, -57, -61, -77, -48, 51, 57, 52, 103, 102, 98, -92, -6, -17, -14, -120, -63, 61, -109, -70, -76, -29, 44, -121, -18, 87, 44, 108, 83, -23, 61, -119, 33, 55, -27, 39, -74, -3, -99, -19, 6, -104, -127, -12, -21, 76, -64, -47, 7, -53, -102, 65, -63, -92, 46, 98, -99, -94, 70, -71, 49, 12, 16, 72, 50, 67, 99, -87, -8, -80, 72, 121, 122, -56, 108, 51, -121, -60, 5, 98, -27, -28, -45, 11, 21, -53, -111, -53, 74, 85, 104, -128, -15, 87, 0, 27, -35, -99, 38, 54, 125, -88, 113, 75, 6, 115, -107, -76, 101, 47, -83, -8};
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
    msg.setTimeStamp(0.476089379793);
    msg.setSource(32149U);
    msg.setSourceEntity(207U);
    msg.setDestination(26023U);
    msg.setDestinationEntity(225U);
    msg.locale.assign("BRJFHCILEUQLFZKMTXCNGJFLJIJIABIPZPINYXHVVAYSLFARTEFNBMYFYZPRX");
    const char tmp_msg_0[] = {-60, 86, -66, 55, -3, 17, -92, 33, 38, 113, -40, 67, 39, -55, 94, 71, 51, 123, 99, -120, -18, 71, -43, -48, -96, 13, -121, -87, -25, -34, -5, -54, -79, 122, 56, -91, -80, 105, -103, 38, -71, -3, 4, 51, -72, -46, -10, 125, 86, 93, 2, -72, -19, 18, -40, 94, 72, 47, 106, -71, -64, 61, 18, -63, -68, -58, 93, 20, 83, 34, -68, -47, 47, -72, 124, 108, 92, -52, -20, -24, 97, -82, 73, 16, 6, -54, 37, -115, 76, -49, 106, 27, -123, 43, 101, -107, -5, -67, 70, -3, -76, -76, 100, -65, -51, 6, -78, 45, 61, 64, 30, 17, 116, 120, -127, 76, -48, 53, -39, -113, 35, 58, -63, -98, -12, -16, 20, 43, -71, -82, 76, -2, 123, -113, -104, -111, -82, -103, -37, -7, 64, -59, 45, -36, -87, -19, 54, 64, -83, -104, -80};
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
    msg.setTimeStamp(0.107265121115);
    msg.setSource(31042U);
    msg.setSourceEntity(160U);
    msg.setDestination(4571U);
    msg.setDestinationEntity(184U);
    msg.locale.assign("QTUDURQZTDLJZHJZTOJFPYQHLUBPBPBQOFMJUSHOMNBNPCGELUZHJOFAOJIWAIXECYKIMECMWPUVNPYOSMCHJECQBIGYTQJZHCXKBORTEDNMJWYARSBWCPTGXLAFEEDWLKCLAIWUIABTQHLCRXHDYMYSR");
    const char tmp_msg_0[] = {118, -25, -95, 96, 32, -75, 9, -84, -57, 91, -99, 8, 83, 1, 117, 3, -49, -105, -59, -101, 23, 82, 20, -63, 119, 37, -102, -67, -84, 125, -103, -2, -9, -65, -103, -107, -25, -1, -80, 86, -127, -77, -43, 4, -91, 26, 13, -75, 36, 101, 14, -8, 93, -76, -110, 122, -88, -50, 30, 49, 7, -8, 72, -124, -21, 117, 41, 63, -83, 112, 87, -48, -94, 98, 31, 2, 81, 112, -86, -39, -94, 113, 96, 37, -123, -58, 84, 126, -1, 54, 53, -115, 80, 14, -27, -73, 20, -99, 123, -92, -20, 118, 60, 53, -111, -57, 85, 126, -102, -124, -65, -48, -8, -86, 88, 34, 20, -38, 85, 65, 22, 24, 96, -29, -75, 47, 93, -49, 25, 23, 122, -57, 5, 77, -58, 77, 106, -23, -33, 118, -3, 45, -4, 54, -64, 97, 105, 101, -34, -30, -78, -123, -23, 0, 16, 87, 89, -6, -65};
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
    msg.setTimeStamp(0.175001324553);
    msg.setSource(24491U);
    msg.setSourceEntity(26U);
    msg.setDestination(4016U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.56250606362);
    msg.setSource(18923U);
    msg.setSourceEntity(177U);
    msg.setDestination(14768U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.563840495282);
    msg.setSource(14776U);
    msg.setSourceEntity(211U);
    msg.setDestination(42774U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.786467647925);
    msg.setSource(8165U);
    msg.setSourceEntity(180U);
    msg.setDestination(53220U);
    msg.setDestinationEntity(28U);
    msg.camid = 218U;
    msg.x = 33435U;
    msg.y = 46953U;

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
    msg.setTimeStamp(0.402258075852);
    msg.setSource(39987U);
    msg.setSourceEntity(125U);
    msg.setDestination(59391U);
    msg.setDestinationEntity(19U);
    msg.camid = 55U;
    msg.x = 42706U;
    msg.y = 62592U;

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
    msg.setTimeStamp(0.585890088987);
    msg.setSource(7767U);
    msg.setSourceEntity(57U);
    msg.setDestination(64868U);
    msg.setDestinationEntity(100U);
    msg.camid = 138U;
    msg.x = 54255U;
    msg.y = 59645U;

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
    msg.setTimeStamp(0.621414651808);
    msg.setSource(34008U);
    msg.setSourceEntity(132U);
    msg.setDestination(20835U);
    msg.setDestinationEntity(106U);
    msg.camid = 71U;
    msg.x = 61468U;
    msg.y = 15013U;

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
    msg.setTimeStamp(0.189143933494);
    msg.setSource(24891U);
    msg.setSourceEntity(7U);
    msg.setDestination(42373U);
    msg.setDestinationEntity(82U);
    msg.camid = 48U;
    msg.x = 20835U;
    msg.y = 42523U;

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
    msg.setTimeStamp(0.387037765439);
    msg.setSource(40048U);
    msg.setSourceEntity(86U);
    msg.setDestination(35872U);
    msg.setDestinationEntity(119U);
    msg.camid = 14U;
    msg.x = 3458U;
    msg.y = 45709U;

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
    msg.setTimeStamp(0.0936448390282);
    msg.setSource(27761U);
    msg.setSourceEntity(232U);
    msg.setDestination(62283U);
    msg.setDestinationEntity(80U);
    msg.tracking = 114U;
    msg.lat = 0.524745949195;
    msg.lon = 0.0838540175045;
    msg.x = 0.210305967993;
    msg.y = 0.328639721894;
    msg.z = 0.0231620398176;

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
    msg.setTimeStamp(0.38127693825);
    msg.setSource(27093U);
    msg.setSourceEntity(24U);
    msg.setDestination(36358U);
    msg.setDestinationEntity(167U);
    msg.tracking = 58U;
    msg.lat = 0.356349396437;
    msg.lon = 0.366309691309;
    msg.x = 0.761183739294;
    msg.y = 0.405992408728;
    msg.z = 0.88287452287;

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
    msg.setTimeStamp(0.647089332079);
    msg.setSource(41356U);
    msg.setSourceEntity(136U);
    msg.setDestination(62306U);
    msg.setDestinationEntity(156U);
    msg.tracking = 26U;
    msg.lat = 0.488116663746;
    msg.lon = 0.39473302676;
    msg.x = 0.573905559971;
    msg.y = 0.757514233738;
    msg.z = 0.151632576528;

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
    msg.setTimeStamp(0.236608976735);
    msg.setSource(14206U);
    msg.setSourceEntity(162U);
    msg.setDestination(15277U);
    msg.setDestinationEntity(211U);
    msg.target.assign("WEGOHZVKRYUJRDPZEYOOMQZVTGISGTHZXNMCJTAMYLAEVVYRWTCZXNXNFPMLVHEOPZBTAFNZQHSJKQZFIBWHZRVHVEJGUUTURQIIEFLSKLCSBTAIBYAPMWNXURLMNIVGDODTMJGLLDFKCCSCVXSPFBIXMDZOJLRYLQKFFQAOQDQOYGJDJRGJCUINPTUNCABPKOXABWDHPLVKMIHPHXBWTKBJPCNER");
    msg.lbearing = 0.475336684724;
    msg.lelevation = 0.392458736766;
    msg.bearing = 0.235858119795;
    msg.elevation = 0.490433742814;
    msg.phi = 0.609340810306;
    msg.theta = 0.508557951849;
    msg.psi = 0.426016429855;
    msg.accuracy = 0.90703204575;

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
    msg.setTimeStamp(0.981781539368);
    msg.setSource(13355U);
    msg.setSourceEntity(80U);
    msg.setDestination(50437U);
    msg.setDestinationEntity(120U);
    msg.target.assign("AUQKPPIRQMVKRGWPADSQWGCVLTOJLKVVXWWAZCFWQMXKFFTKRYHY");
    msg.lbearing = 0.369466172988;
    msg.lelevation = 0.266478867351;
    msg.bearing = 0.974297793257;
    msg.elevation = 0.26534427702;
    msg.phi = 0.352454852355;
    msg.theta = 0.254134296696;
    msg.psi = 0.156131768828;
    msg.accuracy = 0.736015347446;

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
    msg.setTimeStamp(0.69142066973);
    msg.setSource(15636U);
    msg.setSourceEntity(12U);
    msg.setDestination(14172U);
    msg.setDestinationEntity(115U);
    msg.target.assign("HFXSZXABDVJFIOCSJHHZVCAGAGJFPKQQFCFBTOFWDEYGLLLKLBWHTSSKYHYILVPTDBVFDYLPZMGIAMTSZXRGYOVMEEGDJBUZGCUWWRWHKLNTPXRWQMKJGJTUEZPWNFEQRDLUWHPOCIZAMPESSOIMWMUQIRVKNVAHRBAUVDVPZNQJAHO");
    msg.lbearing = 0.236053425669;
    msg.lelevation = 0.712841887145;
    msg.bearing = 0.654045655528;
    msg.elevation = 0.508654623289;
    msg.phi = 0.673882792836;
    msg.theta = 0.123248333564;
    msg.psi = 0.932266965145;
    msg.accuracy = 0.483838713349;

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
    msg.setTimeStamp(0.162480968489);
    msg.setSource(45855U);
    msg.setSourceEntity(69U);
    msg.setDestination(17804U);
    msg.setDestinationEntity(185U);
    msg.target.assign("GIMBWLXJLSABCQPFONMMHHPRZOBTONEXSVNGVOUXLHCRUYJRYSDQYWFHZXJPCDEINEFDANWQEAHB");
    msg.x = 0.612998174646;
    msg.y = 0.635855177953;
    msg.z = 0.903783481006;
    msg.n = 0.917620886019;
    msg.e = 0.725247617347;
    msg.d = 0.314021173632;
    msg.phi = 0.179941917682;
    msg.theta = 0.682809092237;
    msg.psi = 0.814042804756;
    msg.accuracy = 0.151024891978;

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
    msg.setTimeStamp(0.909411670415);
    msg.setSource(31237U);
    msg.setSourceEntity(119U);
    msg.setDestination(62665U);
    msg.setDestinationEntity(238U);
    msg.target.assign("QREMDTOUUSC");
    msg.x = 0.544527253792;
    msg.y = 0.736932213614;
    msg.z = 0.657105895584;
    msg.n = 0.339207510795;
    msg.e = 0.254043336994;
    msg.d = 0.674343225264;
    msg.phi = 0.958041939986;
    msg.theta = 0.529296186468;
    msg.psi = 0.327182503315;
    msg.accuracy = 0.368377980253;

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
    msg.setTimeStamp(0.529954046673);
    msg.setSource(16658U);
    msg.setSourceEntity(199U);
    msg.setDestination(42988U);
    msg.setDestinationEntity(117U);
    msg.target.assign("FTNNIDRSQPEFRLSEGYVRQWPXCIRSJRSQMGJIGPRYZENFQIDUQYJAATBGNZHCSYTMWCPMWOHALQMUXJJYFSNWPAHKZFBUQZGPPXJRJBTMEDGKTAXIBZOKOGTSFXCHBAQXWDMOKFEIWVDKCZKCBYWSAVLNNXVKGHIFHTKVFRHULVMHULBTKYLAXUOVPMKJDUCSOOJDIFITQEEOCHLRNQMPOGLVXZE");
    msg.x = 0.0140234851393;
    msg.y = 0.334466251058;
    msg.z = 0.947856441209;
    msg.n = 0.504770265108;
    msg.e = 0.707278924801;
    msg.d = 0.119217247412;
    msg.phi = 0.588649616532;
    msg.theta = 0.190720845967;
    msg.psi = 0.292941892859;
    msg.accuracy = 0.13127806757;

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
    msg.setTimeStamp(0.25867050563);
    msg.setSource(32201U);
    msg.setSourceEntity(134U);
    msg.setDestination(4827U);
    msg.setDestinationEntity(214U);
    msg.target.assign("DKYFVQGNXINGVVFJHGAECIIMAQSDXCNUSVRZDKXDHAJBSFYMTOGOPKOYSAWHUBELMCCZJUCRWPFEZSRIVPBRVYBYHIBEXOCILQTXKQJPCIUSMNCNLGWRMKWARTQZALBKPDMEJOAORSUPJGZBZQWLHSPFLQJSORWZNBHXTWKMJZIEMRYFPCKTZTDSWBOPRYUJFVTULOBXGEPAIDHOELVTXEWNQDGUKTLLNQVHYJU");
    msg.lat = 0.842766729624;
    msg.lon = 0.583743866429;
    msg.z_units = 127U;
    msg.z = 0.926985971847;
    msg.accuracy = 0.0724896825125;

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
    msg.setTimeStamp(0.844378925866);
    msg.setSource(11076U);
    msg.setSourceEntity(138U);
    msg.setDestination(64933U);
    msg.setDestinationEntity(171U);
    msg.target.assign("RJXUTMPMMHFNLPLRGNSDYLRWMEGLFCUYUXHACVPUSFMASJIEWDDZKVCDQGJUBEILDHZLREGHTNAXNJSOAOKIFFVHYGRVBQDLHXBCTGKZKTDBUTVIOOSUXWANKLDXZQGWTXANVJBHJGWEYEYEMCSQNNOOUJWTWZBFXSNJISDUFMMREQYBHVMRIVZQEFAPAIKJPRBPPZABFFPHXKCWQCPSZWRYKVQMVNGOZY");
    msg.lat = 0.757958686472;
    msg.lon = 0.533081812258;
    msg.z_units = 23U;
    msg.z = 0.148682256195;
    msg.accuracy = 0.705719204268;

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
    msg.setTimeStamp(0.24865691011);
    msg.setSource(15192U);
    msg.setSourceEntity(52U);
    msg.setDestination(40929U);
    msg.setDestinationEntity(187U);
    msg.target.assign("NIJDJBAHWVJEGFWSNJVFDMPAFJJNCWVCKGYJOJSKQSUTVCNDIEYCCIPXFLSPLJVPLOZLZGUZEXESVTRYUWRYH");
    msg.lat = 0.209939408452;
    msg.lon = 0.097140238429;
    msg.z_units = 162U;
    msg.z = 0.818643881416;
    msg.accuracy = 0.882131337832;

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
    msg.setTimeStamp(0.484529166314);
    msg.setSource(57199U);
    msg.setSourceEntity(91U);
    msg.setDestination(2322U);
    msg.setDestinationEntity(233U);
    msg.name.assign("JQGHJDOZCGNJDDVWUEQHUIYBBOTGEMOOEPVZRQSUVTCOQZUSXYSYANOLSGFAZNVTPHAYWHKDSIUFJLEAGHUPHVFKEWHIXFQMLZSNRCPSLEKNGRWVJFYGYXMSRLCVHCNFDXFFNTPBMCKASZIXVBACWWNJHODMCPKETZBXOMAJJBHLLBKDUGNTODAIZAGURIILWTLKQDPTRM");
    msg.lat = 0.54098430978;
    msg.lon = 0.77714443268;
    msg.z = 0.0591934200365;
    msg.z_units = 57U;

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
    msg.setTimeStamp(0.443938609908);
    msg.setSource(13680U);
    msg.setSourceEntity(68U);
    msg.setDestination(63450U);
    msg.setDestinationEntity(238U);
    msg.name.assign("ALIHAYMCQPTFRXIGTTPUUDZAGCEXTQMRSAXQPWBGWKSKRFONZZMGNQXDBU");
    msg.lat = 0.48891927564;
    msg.lon = 0.977827638883;
    msg.z = 0.188700097693;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.606102773904);
    msg.setSource(7183U);
    msg.setSourceEntity(143U);
    msg.setDestination(62117U);
    msg.setDestinationEntity(52U);
    msg.name.assign("LHDXPANTPUBKAPXXKPRIYDPBYFOPGVEXQGDZ");
    msg.lat = 0.516545161344;
    msg.lon = 0.929313889788;
    msg.z = 0.960044940185;
    msg.z_units = 182U;

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
    msg.setTimeStamp(0.235159194359);
    msg.setSource(60633U);
    msg.setSourceEntity(10U);
    msg.setDestination(7268U);
    msg.setDestinationEntity(106U);
    msg.op = 202U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("KYNJEAGWQJKVBBAATULJUIRQPARABMZXWFHPIQTZSICHKZOEWYXQXCUZNUDFDBLQUKRPRNJYWQM");
    tmp_msg_0.lat = 0.679907303266;
    tmp_msg_0.lon = 0.844171971853;
    tmp_msg_0.z = 0.256066933555;
    tmp_msg_0.z_units = 102U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.872681687345);
    msg.setSource(39654U);
    msg.setSourceEntity(110U);
    msg.setDestination(13613U);
    msg.setDestinationEntity(35U);
    msg.op = 68U;

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
    msg.setTimeStamp(0.0213222548333);
    msg.setSource(4996U);
    msg.setSourceEntity(191U);
    msg.setDestination(5194U);
    msg.setDestinationEntity(217U);
    msg.op = 94U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TDCHIFNJQUSBNSKWIHSMDZOWFFELVBMJKUTCOHOIBBRAYPZEQVNFJGSFHETUGZSACDXRWUXDYLORZRRSTQARDCRTURWPAKNQJRQZMCWKBLXGBUYTLZOYCVFWCABZPTKTNPHHEEEJNCOPJBBKMMGPSVYDVMLVVMMBUNGILQHYCIXZEEDIVWXIEOWDMDEXQNFCSUTLLGYVYXTVAHQJXGUQZYUZ");
    tmp_msg_0.lat = 0.0336463209828;
    tmp_msg_0.lon = 0.324883065621;
    tmp_msg_0.z = 0.0684227032512;
    tmp_msg_0.z_units = 59U;
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
    msg.setTimeStamp(0.937155853656);
    msg.setSource(24073U);
    msg.setSourceEntity(239U);
    msg.setDestination(16780U);
    msg.setDestinationEntity(11U);
    msg.value = 0.0483357970867;
    msg.type = 230U;

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
    msg.setTimeStamp(0.193846947499);
    msg.setSource(64859U);
    msg.setSourceEntity(202U);
    msg.setDestination(38812U);
    msg.setDestinationEntity(240U);
    msg.value = 0.635804117234;
    msg.type = 44U;

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
    msg.setTimeStamp(0.756136640099);
    msg.setSource(24494U);
    msg.setSourceEntity(165U);
    msg.setDestination(46026U);
    msg.setDestinationEntity(68U);
    msg.value = 0.584595869699;
    msg.type = 74U;

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
    msg.setTimeStamp(0.121649326214);
    msg.setSource(32528U);
    msg.setSourceEntity(223U);
    msg.setDestination(17515U);
    msg.setDestinationEntity(103U);
    msg.value = 0.0638745124391;

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
    msg.setTimeStamp(0.675198916681);
    msg.setSource(41068U);
    msg.setSourceEntity(187U);
    msg.setDestination(2150U);
    msg.setDestinationEntity(113U);
    msg.value = 0.811416269848;

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
    msg.setTimeStamp(0.360690279502);
    msg.setSource(4304U);
    msg.setSourceEntity(128U);
    msg.setDestination(28128U);
    msg.setDestinationEntity(9U);
    msg.value = 0.705518740707;

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
    msg.setTimeStamp(0.0640670175245);
    msg.setSource(38829U);
    msg.setSourceEntity(115U);
    msg.setDestination(53785U);
    msg.setDestinationEntity(218U);
    msg.timestamp_last_service = 0.209418759667;
    msg.time_next_service = 0.97578503684;
    msg.time_motor_next_service = 0.908526447852;
    msg.time_idle_ground = 0.780759399882;
    msg.time_idle_air = 0.400028830202;
    msg.time_idle_water = 0.218312809095;
    msg.time_idle_underwater = 0.454508333296;
    msg.time_idle_unknown = 0.0241708169696;
    msg.time_motor_ground = 0.552628526261;
    msg.time_motor_air = 0.0594132386745;
    msg.time_motor_water = 0.574197104562;
    msg.time_motor_underwater = 0.718154401836;
    msg.time_motor_unknown = 0.0888891188909;
    msg.rpm_min = -25097;
    msg.rpm_max = -28905;
    msg.depth_max = 0.151782147626;

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
    msg.setTimeStamp(0.425198031739);
    msg.setSource(51648U);
    msg.setSourceEntity(159U);
    msg.setDestination(3565U);
    msg.setDestinationEntity(74U);
    msg.timestamp_last_service = 0.833061502921;
    msg.time_next_service = 0.539413230401;
    msg.time_motor_next_service = 0.0784165130867;
    msg.time_idle_ground = 0.151452473866;
    msg.time_idle_air = 0.365592956663;
    msg.time_idle_water = 0.242676006726;
    msg.time_idle_underwater = 0.119478886272;
    msg.time_idle_unknown = 0.473771754867;
    msg.time_motor_ground = 0.0295582326233;
    msg.time_motor_air = 0.480597950943;
    msg.time_motor_water = 0.0961958707755;
    msg.time_motor_underwater = 0.0688485677851;
    msg.time_motor_unknown = 0.877693057347;
    msg.rpm_min = 30097;
    msg.rpm_max = -32762;
    msg.depth_max = 0.0202278819461;

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
    msg.setTimeStamp(0.707599515356);
    msg.setSource(17071U);
    msg.setSourceEntity(14U);
    msg.setDestination(36652U);
    msg.setDestinationEntity(3U);
    msg.timestamp_last_service = 0.378852497559;
    msg.time_next_service = 0.350866449067;
    msg.time_motor_next_service = 0.87391029534;
    msg.time_idle_ground = 0.119758023403;
    msg.time_idle_air = 0.984420132961;
    msg.time_idle_water = 0.462402994934;
    msg.time_idle_underwater = 0.194335826664;
    msg.time_idle_unknown = 0.181821680378;
    msg.time_motor_ground = 0.262278975483;
    msg.time_motor_air = 0.966184459715;
    msg.time_motor_water = 0.737013973985;
    msg.time_motor_underwater = 0.0398649722619;
    msg.time_motor_unknown = 0.575489556454;
    msg.rpm_min = -22043;
    msg.rpm_max = 5014;
    msg.depth_max = 0.677052383969;

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

  return test.getReturnValue();
}
