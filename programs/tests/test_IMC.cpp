//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: a788d487547949cd3e9f75b604c60fbc                            *
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
    msg.setTimeStamp(0.06940378673076908);
    msg.setSource(36628U);
    msg.setSourceEntity(110U);
    msg.setDestination(61793U);
    msg.setDestinationEntity(21U);
    msg.state = 178U;
    msg.flags = 170U;
    msg.description.assign("MENESZLOOFRLASTC");

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
    msg.setTimeStamp(0.2244421919152867);
    msg.setSource(48170U);
    msg.setSourceEntity(3U);
    msg.setDestination(59528U);
    msg.setDestinationEntity(76U);
    msg.state = 95U;
    msg.flags = 107U;
    msg.description.assign("HDJCIQKCHTYHBXLVLBWIXJTBVFRJBQYFHXWEAFSFOJKEPRRWPHGYWLPJKSTPNWYE");

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
    msg.setTimeStamp(0.15903556814273323);
    msg.setSource(21317U);
    msg.setSourceEntity(94U);
    msg.setDestination(40050U);
    msg.setDestinationEntity(42U);
    msg.state = 55U;
    msg.flags = 91U;
    msg.description.assign("LFWHBZWWULNVWDCVKYZRCEUUWQMWMQNXIFGSYAXJWCYCJRIMNYPYMSPBSXULKPQPUB");

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
    msg.setTimeStamp(0.031985873075841);
    msg.setSource(7827U);
    msg.setSourceEntity(132U);
    msg.setDestination(62867U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.0659680677299943);
    msg.setSource(6067U);
    msg.setSourceEntity(246U);
    msg.setDestination(11120U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.13531205839894955);
    msg.setSource(16023U);
    msg.setSourceEntity(212U);
    msg.setDestination(38942U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.6712329764964647);
    msg.setSource(24804U);
    msg.setSourceEntity(73U);
    msg.setDestination(44542U);
    msg.setDestinationEntity(147U);
    msg.id = 221U;
    msg.label.assign("QVTJCRAYZHQURMBIFPNUVGWUPUADKMDGYKMDEWGSBAWZGHJBRZISYSEXKGHEQBQY");
    msg.component.assign("IGXYSPEYWOKPQNUBYEPHZAJICJBQCRSBSJNXUPRWDJKFUSAKUDTUBLYDSMVCOGLLGJRVXHQMCKEDFOIIWHLZRNPDIISBXIYZWYZUCBJMCLPJTVHHEZSNOWZEIEORTTQGGSXOMAHDVXDEXKUFVRKMONSQEZZKWLMCJNEQGKBAKLCTPXTDGFGFHYV");
    msg.act_time = 63758U;
    msg.deact_time = 61533U;

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
    msg.setTimeStamp(0.4907845336643135);
    msg.setSource(55609U);
    msg.setSourceEntity(119U);
    msg.setDestination(358U);
    msg.setDestinationEntity(44U);
    msg.id = 160U;
    msg.label.assign("DRNACKJVBPYMCLZVSCOGDBBAJQPQWQTKGMFIBSKISKYKNGZMKGSYNEEEJOTDNPACJTHMHHUGGIUBUTECDYWQNJKBIBQPWWDFFXSY");
    msg.component.assign("KBQAVHWBUVCNCKFATKSDMOFMNHQQEZHJDTKCDJSGIEDEPLKIJFGJYUASJVMSQJOZBICVJHUAFPLLEDMCVNDKTOKFOQFWGTVCZQEZOTVKZIUIUXNXABWUTHMWWTKLXQRCSZYXIMROMDUFZRQJFXOGAYUIYPDYPDGUEPTHBAESLROIWWQNMCNXPGAMPRYEYNHSWL");
    msg.act_time = 1430U;
    msg.deact_time = 14023U;

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
    msg.setTimeStamp(0.34741286372998115);
    msg.setSource(6569U);
    msg.setSourceEntity(172U);
    msg.setDestination(8731U);
    msg.setDestinationEntity(22U);
    msg.id = 27U;
    msg.label.assign("QKCRWCBRJHVKLRABSBJRKDIXPJDALNHSPWW");
    msg.component.assign("APZKBPSSFAWOCQJPPBNZVIFWJPMCMUEMQEISLWHRNVITUOOYGBSVZDXMBHXGNTXWFVMGCFKIYIDHGIKMLTUDUOXIFWJCKOEEDLOYYFRHICLEBLDCSDXFANSQPCWRXYUNRQBKBHDYCJFXQGWQEMGLMKUKI");
    msg.act_time = 48465U;
    msg.deact_time = 1955U;

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
    msg.setTimeStamp(0.5812091505800174);
    msg.setSource(25959U);
    msg.setSourceEntity(124U);
    msg.setDestination(40147U);
    msg.setDestinationEntity(28U);
    msg.id = 48U;

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
    msg.setTimeStamp(0.5067650716866663);
    msg.setSource(37712U);
    msg.setSourceEntity(106U);
    msg.setDestination(7411U);
    msg.setDestinationEntity(63U);
    msg.id = 248U;

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
    msg.setTimeStamp(0.49447647993325816);
    msg.setSource(38816U);
    msg.setSourceEntity(106U);
    msg.setDestination(39989U);
    msg.setDestinationEntity(234U);
    msg.id = 52U;

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
    msg.setTimeStamp(0.972258108716521);
    msg.setSource(21354U);
    msg.setSourceEntity(164U);
    msg.setDestination(55489U);
    msg.setDestinationEntity(8U);
    msg.op = 41U;
    msg.list.assign("CVWIIOQKRTBVAPOAEGBVOTNKNNBSUOZJXFEHZKXLCHBUKWSEXLSXAVIFMGRKLKUPBVBLYFYFEZ");

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
    msg.setTimeStamp(0.6734327172357891);
    msg.setSource(29986U);
    msg.setSourceEntity(148U);
    msg.setDestination(47037U);
    msg.setDestinationEntity(41U);
    msg.op = 0U;
    msg.list.assign("NFISBOGIQPBXLLYQOWNNARMRLCWGRATGKBKZPXOHDZZMPMPHRBSUYSLVTQMYJNYTVXNVFTKVKZPIOORJCVICDUPDXEBUSKRNWAKWLYUTIGHXXQFOUKCIAEGFKHZTUSJLEEXPRNGCDMWNSFHQUIBYOFXAGJLPW");

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
    msg.setTimeStamp(0.05182713974773767);
    msg.setSource(33227U);
    msg.setSourceEntity(44U);
    msg.setDestination(31242U);
    msg.setDestinationEntity(31U);
    msg.op = 62U;
    msg.list.assign("LIWLJHENRQSYSSQFTRAVLHDYZJPAVDDFMTVGTLHVKFUYXRVPXSZNAMBHZFGWOXYYSIORLMHPDBFCUZXPGQDNGBZJOZDSMVBXGVUBFZBCUWJYUMPFDXGHUKTIFMZXGAPJQAEVUBARMSTTXFEHZKKWWRBPQIR");

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
    msg.setTimeStamp(0.32317788600174113);
    msg.setSource(49095U);
    msg.setSourceEntity(126U);
    msg.setDestination(26359U);
    msg.setDestinationEntity(25U);
    msg.value = 52U;

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
    msg.setTimeStamp(0.8283906134011245);
    msg.setSource(22302U);
    msg.setSourceEntity(197U);
    msg.setDestination(4727U);
    msg.setDestinationEntity(247U);
    msg.value = 165U;

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
    msg.setTimeStamp(0.5366521389286609);
    msg.setSource(51869U);
    msg.setSourceEntity(43U);
    msg.setDestination(43103U);
    msg.setDestinationEntity(48U);
    msg.value = 216U;

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
    msg.setTimeStamp(0.2023344788133321);
    msg.setSource(38333U);
    msg.setSourceEntity(69U);
    msg.setDestination(8632U);
    msg.setDestinationEntity(239U);
    msg.consumer.assign("ZIOADIASJPZUXLYRKEMVFVAQYRBQPUGDHKOFKDHXLWZJGOEGKANKZWPHJZVJMAGJEVRCIPPNWNCSOTMKWUMWRIFHSTBOIEHFBXPCYETSFUHQRRTDLCTWQLMMTIDWUI");
    msg.message_id = 7848U;

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
    msg.setTimeStamp(0.7421900859051799);
    msg.setSource(5946U);
    msg.setSourceEntity(177U);
    msg.setDestination(10374U);
    msg.setDestinationEntity(62U);
    msg.consumer.assign("UCKUJNHQVYYDIOILEGQSUPSBHZWWUVTLPTLLFAOJIRNLDFKYBMCSNY");
    msg.message_id = 42494U;

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
    msg.setTimeStamp(0.718134658417001);
    msg.setSource(23967U);
    msg.setSourceEntity(190U);
    msg.setDestination(3857U);
    msg.setDestinationEntity(53U);
    msg.consumer.assign("DXXKLOQINHCVLJJWDUUIZTJFMYFWDOOYLIICPGHREAOKZKQOCENLXDZPWTSPZ");
    msg.message_id = 39805U;

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
    msg.setTimeStamp(0.2752967737302847);
    msg.setSource(5721U);
    msg.setSourceEntity(197U);
    msg.setDestination(59418U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.01533423739902906);
    msg.setSource(23283U);
    msg.setSourceEntity(102U);
    msg.setDestination(33788U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.40401288041992345);
    msg.setSource(10491U);
    msg.setSourceEntity(38U);
    msg.setDestination(15031U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.835454670537762);
    msg.setSource(5387U);
    msg.setSourceEntity(131U);
    msg.setDestination(47528U);
    msg.setDestinationEntity(107U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.5076485501464976);
    msg.setSource(49512U);
    msg.setSourceEntity(239U);
    msg.setDestination(37646U);
    msg.setDestinationEntity(7U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.20344505156629877);
    msg.setSource(435U);
    msg.setSourceEntity(80U);
    msg.setDestination(3203U);
    msg.setDestinationEntity(28U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.05939125120445887);
    msg.setSource(18037U);
    msg.setSourceEntity(5U);
    msg.setDestination(29251U);
    msg.setDestinationEntity(84U);
    msg.total_steps = 1U;
    msg.step_number = 21U;
    msg.step.assign("ECPHKTDQYQUUOHVBZNVUDTUSBPGXNRAMBJSFPROWFSHDKQANNOMOXEVPYLRBARZVRXTKYNEARIWUJLMYMSBSHQSGDVKUDLKXHOLEEGKWOLAYQQAYRHTCFANM");
    msg.flags = 152U;

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
    msg.setTimeStamp(0.6657216522698836);
    msg.setSource(38067U);
    msg.setSourceEntity(183U);
    msg.setDestination(8745U);
    msg.setDestinationEntity(6U);
    msg.total_steps = 27U;
    msg.step_number = 212U;
    msg.step.assign("HXVTQQQHJIMNJFEVCRQTPVLKJVSBIGFIALRJBZVNRFSEWNLKBVTDPQOGJOFSWALOUMZCHPYWLFPOBLUHQSPBTOYPMGQCJCQE");
    msg.flags = 198U;

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
    msg.setTimeStamp(0.232221789146544);
    msg.setSource(45231U);
    msg.setSourceEntity(146U);
    msg.setDestination(14976U);
    msg.setDestinationEntity(59U);
    msg.total_steps = 23U;
    msg.step_number = 159U;
    msg.step.assign("SCPIBXAHXHSVXFBYUAPLLXJDBRVSNGMGINHLFGXYDCEACKIJHPPNQUWLQWVOMKJBFNRTPSGLTMUNSBLLOWUQFTQOZPYDYKHAEHULEAIUFFMZJOKQNTTHYIVCZFGDDUMFZPAPMWMISOYWHFMEBDURYBJFQMIANSAZTMJKODJWRAKGNPSYZXVWBCVLAZYREW");
    msg.flags = 246U;

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
    msg.setTimeStamp(0.046987061319024304);
    msg.setSource(23730U);
    msg.setSourceEntity(9U);
    msg.setDestination(39807U);
    msg.setDestinationEntity(158U);
    msg.state = 63U;
    msg.error.assign("WZGWEBDJWCKVKZIXHQZVNFTBMMPENODGUKXMDKUJBMHPUPACSUIFIBVKJEJBPWEYNHYOVTTDVCAMGYAFJPGKICEJSIOWXHZQRHOFXBZYORKWSQHLTRAARCLRJDMIHOGO");

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
    msg.setTimeStamp(0.8284963667704418);
    msg.setSource(33134U);
    msg.setSourceEntity(72U);
    msg.setDestination(27003U);
    msg.setDestinationEntity(58U);
    msg.state = 176U;
    msg.error.assign("UBGKOUYXJHBHDXSSJKRALQUPYWNABKIHMJEELCEF");

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
    msg.setTimeStamp(0.09585156894417868);
    msg.setSource(30710U);
    msg.setSourceEntity(163U);
    msg.setDestination(63357U);
    msg.setDestinationEntity(186U);
    msg.state = 254U;
    msg.error.assign("YNYEVFUWXJOSASTKAWFWRRCTCZJINXXWLCQQTJYBHDMAYBPBNFWKXYVLECJRMXXZHGTPKLPWBGDKWFZRONEYMUMMAEIMETTKQKAIOUSHKVOOFUPQSRAAUHYSZITFFRXPBOUPCXNFDCHQHGDGCOMUNWCGHRN");

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
    msg.setTimeStamp(0.5139564864892319);
    msg.setSource(63145U);
    msg.setSourceEntity(253U);
    msg.setDestination(26926U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.3690299875469236);
    msg.setSource(56032U);
    msg.setSourceEntity(18U);
    msg.setDestination(9906U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.857347179664795);
    msg.setSource(30360U);
    msg.setSourceEntity(151U);
    msg.setDestination(40040U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.6628013365802676);
    msg.setSource(3208U);
    msg.setSourceEntity(156U);
    msg.setDestination(8702U);
    msg.setDestinationEntity(207U);
    msg.op = 179U;
    msg.speed_min = 0.49420263999286074;
    msg.speed_max = 0.8242691196078259;
    msg.long_accel = 0.6405240831984327;
    msg.alt_max_msl = 0.7738486480195199;
    msg.dive_fraction_max = 0.12664485384891755;
    msg.climb_fraction_max = 0.04403504328337626;
    msg.bank_max = 0.9238587886390911;
    msg.p_max = 0.5361605953729836;
    msg.pitch_min = 0.7118568162697201;
    msg.pitch_max = 0.6941579824728309;
    msg.q_max = 0.018037298061445828;
    msg.g_min = 0.8343785619742355;
    msg.g_max = 0.06469864515054924;
    msg.g_lat_max = 0.253762342381357;
    msg.rpm_min = 0.4896971839492874;
    msg.rpm_max = 0.07421370672444372;
    msg.rpm_rate_max = 0.8195777606035584;

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
    msg.setTimeStamp(0.3739366432517164);
    msg.setSource(2954U);
    msg.setSourceEntity(103U);
    msg.setDestination(51546U);
    msg.setDestinationEntity(94U);
    msg.op = 211U;
    msg.speed_min = 0.6013962088694317;
    msg.speed_max = 0.8449904955458927;
    msg.long_accel = 0.4757759081764692;
    msg.alt_max_msl = 0.27597647010320925;
    msg.dive_fraction_max = 0.790596199707254;
    msg.climb_fraction_max = 0.1720815937553999;
    msg.bank_max = 0.48792872578668145;
    msg.p_max = 0.4084050492979924;
    msg.pitch_min = 0.6856092739775609;
    msg.pitch_max = 0.47258879462159453;
    msg.q_max = 0.8423968581446912;
    msg.g_min = 0.317406321075694;
    msg.g_max = 0.10654979139278342;
    msg.g_lat_max = 0.9176843277052855;
    msg.rpm_min = 0.7074110830432108;
    msg.rpm_max = 0.784518960257957;
    msg.rpm_rate_max = 0.649349377189982;

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
    msg.setTimeStamp(0.9389683900851823);
    msg.setSource(62784U);
    msg.setSourceEntity(221U);
    msg.setDestination(14352U);
    msg.setDestinationEntity(202U);
    msg.op = 154U;
    msg.speed_min = 0.3526141373565048;
    msg.speed_max = 0.3965269779317745;
    msg.long_accel = 0.5915257636444122;
    msg.alt_max_msl = 0.10378993040942985;
    msg.dive_fraction_max = 0.6271951124269028;
    msg.climb_fraction_max = 0.4980844527630479;
    msg.bank_max = 0.8592424104337332;
    msg.p_max = 0.7571753746122991;
    msg.pitch_min = 0.9146036310379578;
    msg.pitch_max = 0.6515485991452303;
    msg.q_max = 0.7282427309200394;
    msg.g_min = 0.6696372193492813;
    msg.g_max = 0.4797154495168562;
    msg.g_lat_max = 0.3033749562362468;
    msg.rpm_min = 0.07544393118775561;
    msg.rpm_max = 0.40683893352869815;
    msg.rpm_rate_max = 0.09645421612194349;

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
    msg.setTimeStamp(0.6454912356946578);
    msg.setSource(53639U);
    msg.setSourceEntity(19U);
    msg.setDestination(20723U);
    msg.setDestinationEntity(133U);
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("ORDSUXHIMIRGSGCXXISANMTETZQZRDARVUIOQYMQWTDIKEDFZBDYVBJHHANGJOSYRXHXBTNEYYCZMLTJLOINJTSMAGRZTOPRDUUAGPRQGOANIYZBMXUWKFDMQPPDWMYNQQVLJCGBAEMZOEZVVGNYGOGVVORSHFIKCAOBMLXUUCHHUXDVRPQWLFBFPWFCEDSLYECVKQKYQKJFLZWCBCKEPJJUAHPSZHBFACWEKTNXLWKFT");
    tmp_msg_0.type = 106U;
    tmp_msg_0.op = 153U;
    tmp_msg_0.group_name.assign("KUIOMZXBLXMVETJTCJXDFNAQXFJQPPBAFYGVCIWYQHDEMJGEPICGKFQRIAIRAQVGUMQBSYPLEOUBYRBNUPBALAH");
    tmp_msg_0.plan_id.assign("PRJTMKEXWDKMOMMLATFBHKOFLNKKNYSVQCGFRCTDJHRFQWUOABNUWGGLMUHFYXASDLFKSNNDBOGBGEHCGPOLQIFEAACHLDBWAIZR");
    tmp_msg_0.description.assign("IASJSLAGDOZWLGVDZRYC");
    tmp_msg_0.reference_frame = 176U;
    tmp_msg_0.leader_bank_lim = 0.5944870149159481;
    tmp_msg_0.leader_speed_min = 0.20534657376354015;
    tmp_msg_0.leader_speed_max = 0.06386716857664543;
    tmp_msg_0.leader_alt_min = 0.20648331663299802;
    tmp_msg_0.leader_alt_max = 0.18403452943015186;
    tmp_msg_0.pos_sim_err_lim = 0.2470960698972151;
    tmp_msg_0.pos_sim_err_wrn = 0.34234957795483767;
    tmp_msg_0.pos_sim_err_timeout = 5224U;
    tmp_msg_0.converg_max = 0.30370556993784903;
    tmp_msg_0.converg_timeout = 32162U;
    tmp_msg_0.comms_timeout = 39954U;
    tmp_msg_0.turb_lim = 0.14230032722487906;
    tmp_msg_0.custom.assign("WFCQPMEXMHIEILZOERVUGJABJZFJQYQUZVYTXARKLBNGCMHBQISXTFGKVLTZOPCJSQJHXSIWABNXDUBTRHSFNLUWONXUKPPVXDJVMWKWYYGPKOVNRMPDILJBNTLNKWMYESFEYOLHEXSSD");
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
    msg.setTimeStamp(0.3132096712420852);
    msg.setSource(10239U);
    msg.setSourceEntity(168U);
    msg.setDestination(57051U);
    msg.setDestinationEntity(118U);
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("YCWUCZXFPDGRTHFGBCLXUBYRDBQFLLOSMZFNPODHRBKTEHHOEWLVIEDBGZYWNHZWPGXMBSDBZKRXFKZZOSNZCNVWIILAQIMMSPQINULYNJYAAMGQUBTQVJSCRDEIWPFDNEXXTVEZYYOLTOHMLFIEWGGJARTSYRNJUCAVXYWKKTQVPJULWKVFEGOSJQBAMUJULANSYTUVIHPDKVTXGHQVRDJ");
    tmp_msg_0.value = 134U;
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
    msg.setTimeStamp(0.712807208620438);
    msg.setSource(1266U);
    msg.setSourceEntity(217U);
    msg.setDestination(63864U);
    msg.setDestinationEntity(148U);
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.1367374201862206;
    tmp_msg_0.x = 0.06863629963896312;
    tmp_msg_0.y = 0.054616817025671116;
    tmp_msg_0.z = 0.41168253769348706;
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
    msg.setTimeStamp(0.8517675455971162);
    msg.setSource(36429U);
    msg.setSourceEntity(144U);
    msg.setDestination(61290U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.8246780135879918;
    msg.lon = 0.8468810638623954;
    msg.height = 0.4817560287529662;
    msg.x = 0.6665394610383357;
    msg.y = 0.4686402532461249;
    msg.z = 0.830813981991592;
    msg.phi = 0.6597702127041989;
    msg.theta = 0.15377402503426751;
    msg.psi = 0.995249722892042;
    msg.u = 0.4487130919448158;
    msg.v = 0.9402291324892325;
    msg.w = 0.7218726683204435;
    msg.p = 0.6428104934411462;
    msg.q = 0.06811625589907477;
    msg.r = 0.5158488384149196;
    msg.svx = 0.8792544821681912;
    msg.svy = 0.11916007869308165;
    msg.svz = 0.9302471710879878;

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
    msg.setTimeStamp(0.4776776545101472);
    msg.setSource(14399U);
    msg.setSourceEntity(128U);
    msg.setDestination(29556U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.1621454960563793;
    msg.lon = 0.020922395732524968;
    msg.height = 0.3355667723503991;
    msg.x = 0.8746386509600852;
    msg.y = 0.6639559670831507;
    msg.z = 0.26970228245002326;
    msg.phi = 0.588441181048475;
    msg.theta = 0.5902488184520458;
    msg.psi = 0.37658020242252654;
    msg.u = 0.7002458996370632;
    msg.v = 0.13140242257040724;
    msg.w = 0.3116144053656845;
    msg.p = 0.947086643441753;
    msg.q = 0.12778789687707603;
    msg.r = 0.28096997290414394;
    msg.svx = 0.7031201760764351;
    msg.svy = 0.7866170844812789;
    msg.svz = 0.8209869222596781;

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
    msg.setTimeStamp(0.5146197479804969);
    msg.setSource(54975U);
    msg.setSourceEntity(66U);
    msg.setDestination(3696U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.9403651238879557;
    msg.lon = 0.885304790835;
    msg.height = 0.8724111394162961;
    msg.x = 0.687568798825246;
    msg.y = 0.5770368890886031;
    msg.z = 0.5731435815522605;
    msg.phi = 0.014365696862766009;
    msg.theta = 0.6341758945181709;
    msg.psi = 0.025680758775279977;
    msg.u = 0.8150488835699019;
    msg.v = 0.41637840853408603;
    msg.w = 0.6080870317446081;
    msg.p = 0.267343485345345;
    msg.q = 0.05820760581837525;
    msg.r = 0.8878816725020809;
    msg.svx = 0.5722897975454428;
    msg.svy = 0.10426142008471095;
    msg.svz = 0.6403015251044637;

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
    msg.setTimeStamp(0.1722453985794693);
    msg.setSource(52418U);
    msg.setSourceEntity(236U);
    msg.setDestination(47401U);
    msg.setDestinationEntity(138U);
    msg.op = 116U;
    msg.entities.assign("MCZAPIHHLTABQQCWNJUMXXQENSHEACRPIQIANIDZLLGTGMQGCYAXIIHOUGLQQMTHBEGFVOINNRZGKCIWCAXRVPYWRYABCBJOONFVLJVWKAOKUJBNJYQKTENYDDHZJUSZLSSUXZCKQKWPAIJ");

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
    msg.setTimeStamp(0.5932337372314636);
    msg.setSource(52761U);
    msg.setSourceEntity(222U);
    msg.setDestination(38120U);
    msg.setDestinationEntity(76U);
    msg.op = 106U;
    msg.entities.assign("HZEONQAWRNUFFNSDGYLKQTUFIDZDOOMEOPGVSWBXEELUOUPAZACLHKEKFTJHICCVPYWZJVKQNUEYAICUJHBGWFSAPLVOYXIZMBYQVNCMBDVZKELXNNAWLKHNMDXJWHHFQPCQDVGVJRGFDDWJWTBQPULTKGKQICRSJRNOYVUJKCRX");

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
    msg.setTimeStamp(0.8833528345150377);
    msg.setSource(64062U);
    msg.setSourceEntity(69U);
    msg.setDestination(49397U);
    msg.setDestinationEntity(16U);
    msg.op = 28U;
    msg.entities.assign("ITIHDRGDOQNUAJIQGMNNRXQEKGFUYJWCSNMAMFYNHNKUBVODERGDJYKJERQJSCIMLKJETKMLXHAZVHMXYUFGNNSLQCONFHQPQLKOZUATSACMCWBVMHMPZCIVGLZKKOHOVZTAWOZYSCSDBOJEDFBJODAPSRDABLIUIXZCEZPLTGXHQYOYRFBYEIKFUBXZWBPTWCGTVTVCWIFEUWTIGFDABLQQFZAVVJYRHRPXNUHTDXS");

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
    msg.setTimeStamp(0.40785530549452653);
    msg.setSource(12092U);
    msg.setSourceEntity(84U);
    msg.setDestination(56929U);
    msg.setDestinationEntity(169U);
    msg.type = 24U;
    msg.speed = 22828U;
    const char tmp_msg_0[] = {-13, 71, -89, -1, 126, 42, -115, -101, -68, 23, -83, -21, 39, -8, -63, 31, -7, -43, -32, -51, -96, -115, -83, -49, 124, 19, -74, 100, -80, -110, 102, 122, 106, -93, -105, -108, -34, 36, -65, -77, -55, -117, -68, -9, 62, -8, -36, -118, -8, 116, 54, -67, 93, -122, -51, -121};
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
    msg.setTimeStamp(0.031082413888536164);
    msg.setSource(2243U);
    msg.setSourceEntity(238U);
    msg.setDestination(59535U);
    msg.setDestinationEntity(191U);
    msg.type = 182U;
    msg.speed = 59358U;
    const char tmp_msg_0[] = {116, -42, -95, -28, 80, -71, -33, -108, -75, -53, 88, 104, -101, -91, 51, -79, -93, 113, 83, 95, 3, -25, 54, -40, 84, -124, 37, -109, 71, 36, 30, -2, -39, -100, 18, 60, 3, -81, 96, -64, 73, -78, 73, 91, 4, -51, 37, 71, -56, -40, -33, 77, -98, -12, -44, 23, 101, -74, 105, 68, -22, -99, -23, -25, -120, 31, -22, 90, 3, -4, 37, 23, -78, 24, 104, 97, 104, -81, 60, 91, 14, -32, 106, 87, -109, -22, 69, -21, -63, 19, 13, 27, 70, 68, 11, 57, -54, -79, -15, -73, 34, -47, -109, 4, 69, -13, 95, 59, -25, 97, 58, 32, -103, 51, 84, 58, -5, -39, 68, 78, 34, 40, 61, -65, -96, 19, 104, 11, -65, 107, 96, 120, 84, 69, -13, 5, 9, -74, 44, 15, 41, 76, 53, 50, 17, 105, -39, 105, -59, 74, 0, 43, -125, 14, -24, 3, -49, -7, -14, 91, 7, -27, 121, 103, -94, -55, -5, 23, -76, -122, -19, 20, 66, -43, -81, -41, 106, 74, 25, 82, -31, -102, -34, -33, 115, -45, -1, 2, -122, 63, -75, -82, 102, -42, 75, -18, -70, -80, -77, -22, 98, -47, -98, -18, 41, 36, -69, 80, 73, 52, -109, 51, 80, -65, -92, -96, -35, 45, 102};
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
    msg.setTimeStamp(0.6888527979421225);
    msg.setSource(24423U);
    msg.setSourceEntity(210U);
    msg.setDestination(49880U);
    msg.setDestinationEntity(249U);
    msg.type = 67U;
    msg.speed = 26052U;
    const char tmp_msg_0[] = {13, 117, 63, 119, 88, -59, -98, -24, -87, -69, 19, -50, 76, 105, 98, 125, -3, 40, -102, 110, 92, -113, 75, 10, 58, -103, 20, -23, -77, 120, -87, 2, -20, -54, -32};
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
    msg.setTimeStamp(0.4150510009688504);
    msg.setSource(10204U);
    msg.setSourceEntity(7U);
    msg.setDestination(56304U);
    msg.setDestinationEntity(191U);
    msg.op = 201U;
    msg.tas2acc_pgain = 0.12511074418279833;
    msg.bank2p_pgain = 0.2835491483045258;

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
    msg.setTimeStamp(0.23271111682134116);
    msg.setSource(8003U);
    msg.setSourceEntity(139U);
    msg.setDestination(26357U);
    msg.setDestinationEntity(197U);
    msg.op = 229U;
    msg.tas2acc_pgain = 0.8592561700766644;
    msg.bank2p_pgain = 0.7762238391795736;

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
    msg.setTimeStamp(0.3183314579770762);
    msg.setSource(41146U);
    msg.setSourceEntity(61U);
    msg.setDestination(33660U);
    msg.setDestinationEntity(67U);
    msg.op = 26U;
    msg.tas2acc_pgain = 0.6206314300756108;
    msg.bank2p_pgain = 0.08931367857055028;

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
    msg.setTimeStamp(0.3776167115406722);
    msg.setSource(24258U);
    msg.setSourceEntity(206U);
    msg.setDestination(19737U);
    msg.setDestinationEntity(249U);
    msg.available = 3490595218U;
    msg.value = 151U;

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
    msg.setTimeStamp(0.5723861597029554);
    msg.setSource(17187U);
    msg.setSourceEntity(163U);
    msg.setDestination(51690U);
    msg.setDestinationEntity(80U);
    msg.available = 994195828U;
    msg.value = 245U;

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
    msg.setTimeStamp(0.21298540416046086);
    msg.setSource(22914U);
    msg.setSourceEntity(16U);
    msg.setDestination(12527U);
    msg.setDestinationEntity(182U);
    msg.available = 2501350638U;
    msg.value = 110U;

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
    msg.setTimeStamp(0.1486871143655002);
    msg.setSource(31173U);
    msg.setSourceEntity(239U);
    msg.setDestination(54962U);
    msg.setDestinationEntity(160U);
    msg.op = 207U;
    msg.snapshot.assign("YBGVGTJFLFNRPTFASJPIOGWGUALWPTQXZHUDKVHMCXQSIOKPTCKRBCHMVILJUTWHSBBWOQSOAPXHSQRGQNUEVFEXUXYJ");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 9U;
    tmp_msg_0.text.assign("NJPUQKCRFBCMKZXOWBAHNZFKUYJKHBDWOVFTDYNHMAUOQOSUBQIVTRJBYIQRPWVLQBGIDRITUULYTA");
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
    msg.setTimeStamp(0.7162351437878051);
    msg.setSource(34010U);
    msg.setSourceEntity(145U);
    msg.setDestination(35588U);
    msg.setDestinationEntity(101U);
    msg.op = 130U;
    msg.snapshot.assign("RWWKUEXDKHMFECKGFSSZFEVKHJLXAU");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 183U;
    tmp_msg_0.step_number = 149U;
    tmp_msg_0.step.assign("UGOPLLQAIKUJCXIGJKKNZOAUHJYSRPTYTMMIOSRDSMUI");
    tmp_msg_0.flags = 180U;
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
    msg.setTimeStamp(0.9117224868721666);
    msg.setSource(56151U);
    msg.setSourceEntity(248U);
    msg.setDestination(64797U);
    msg.setDestinationEntity(98U);
    msg.op = 230U;
    msg.snapshot.assign("IHTUYFQEFRMKDEDGXRXDSHDXVFWBNMIXFWZRKGSDTTJOHCEYPSNNXNKXCWAQJSFIBUTWZJNLCANRHBKILUYCUOCAHOMFGBMQCDCHYCOSEWPYIUVTQWKEQIVSPZBOYLFJLBDMPRKLSIEBIPIEVWKPWCVGZUPGLTJNXRAUBXLOQTYOPXKAKFJSGFKLPAFJDH");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 0U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("UPXIJTVEIMYFLUYAGWATDYIKEEZOGXR");
    tmp_tmp_msg_0_0.description.assign("AFORROTZDIGTBIDGQQIRMWVMVPEQVYKD");
    tmp_tmp_msg_0_0.vnamespace.assign("FCGMPDLKNAVBTRSBLPMPJFUYWWXCXCPOAIFEPEMDBZWJCKHGAHZEYSBDVUQLNUUOTCECYRWGMAKVBHYQKJYFITIXEZUSZFVNLLEWRDFA");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("VRCPNZXKNILZJESABDAHQGRHJUIPKURSACKNVBIDGVAYTKFXFKBYPPFDMHDTUOVOBJCPZDVBLUIOHLTMBMXNQKPNOAOUEIRWTLWRRHZULHYTNQJNPJREMYDFTMLGSFVDALPFEFGRDPTSSEHTYDJCXXWNTWGECRZVQGGCOXSCYUZMNMHWJYKWYDZQMVXBUI");
    tmp_tmp_tmp_msg_0_0_0.value.assign("CQSHGPGMHAAVTXXHBBZQOWESDIIDZYSFYLMZNOOZLJOIKCGELRRNGMEFCMVYAONNTAQVPAFZUVMVJYXAGJCQYYHPRNJVOJLBZBTULUZDLFTPKWIYDPDDWXVGZUUNWPOWJDKUHMJXBWBEECGSQYRYNAWWDNOLTIRUYXIERHQPEJFRCFHMREPBTLNKCJDCHCSLHRSKIPKTNXIQVFCVZGAKJEVEKWSMMTKRHFUQAOBQZGAPOQGSTWBIUID");
    tmp_tmp_tmp_msg_0_0_0.type = 220U;
    tmp_tmp_tmp_msg_0_0_0.access = 1U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("RQCYSAVIGIUZNFSWBIEVITSTZNSBYJAXXCALBKPPNZDEZMNDZDAHWWXEOFQAXTMNTJOXUWHRUCECBSC");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.maneuver_id.assign("FLQHHGAZACSFWJOZKFXBOTUMQEJZUKKTAMEHHKALVTPRTIPZMFUTCRFCNLGYMPRJIZABSNRQMDUPRMRKOOJAQGWNNNDXUDVWSWCXTKUBFEBGFHDRVNOQPILQWDONJDD");
    IMC::CompassCalibration tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.timeout = 14250U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat = 0.29492243670011986;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon = 0.603360583316366;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.6645946604504871;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z_units = 59U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.pitch = 0.305539534290437;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.amplitude = 0.8838036778094592;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.duration = 35894U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed = 0.9417637559206189;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed_units = 186U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.radius = 0.27646732361092985;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.direction = 63U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.custom.assign("YKDHYRCSLDHWLNMBBIXFGJABDVFFWBUKKLOCPXEPZTGKQAUDGEQTSLYIURDLZEQSLTMLZNMOHIVVQTHWNUJKDGAEUFACKVIIQWPDRFSNUUHEDESPCCHKFJXWVVCMBBZVSRCBYFAJXQRKMGHGYCQNGK");
    tmp_tmp_tmp_msg_0_0_1.data.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    IMC::CompressedImage tmp_tmp_tmp_tmp_msg_0_0_1_1;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.frameid = 239U;
    const char tmp_tmp_tmp_tmp_tmp_msg_0_0_1_1_0[] = {-109, 73, -74, 111, 80, 113, 40, -98, 106, -53, 28, 64, -105, -27, 37, 109, 113, -40, 74, 119, -22, -9, -1, 56, 10, 58, 86, 89, 9, 9, -13, -86, -106, -90, -36, -18, 54, 98, -93, 11, -11, -67, 39, -51, 79, 117, 88, 92, 85, 18, -48, 82, -106, 58, 66, 71, 2, -112, 39, 60, 126, 36, 104, -116, 38, 44, -65, -118, 64, -5, 24, -79, -117, -36, 42, -24, 30, 0, -96, 15, -36, 55, 40, 99, 87, -31, 25, 69, 58, 109, 40, -30, -23, 80, -93, -110, 84, 99, -96, -68, -69, 52, 0, -14, -10, 25, -113, 76, 116, 73, -76, -15, 90, -27, -2, -1, -61, 126, -52, 69, 95, 12, -13, -124, 115, 107, -114, -20, 45, 62, 31, -93, 112, 47, -23, -2, 38, 56, -42, -10, -77, 62, 93, 10, 0, -103, -63, 36, 109, -12, 55, 48, 49, -93, -99, -27, 52, -65, -32, 65, -14, -56, -48, -36, -98, -94, 125, 12, -98, 91, -2, -17, -106, 57, -14, 9, -121, 119, 74, -69, -16, 78, -52, 101, 3, -86, -114, -99, -79, -70, -17, 69, 41, 2, -15, -79, 20, -91, -70, -93, -109, -110, 16, -88, -88, -81, 123, 90, 86, -11};
    tmp_tmp_tmp_tmp_msg_0_0_1_1.data.assign(tmp_tmp_tmp_tmp_tmp_msg_0_0_1_1_0, tmp_tmp_tmp_tmp_tmp_msg_0_0_1_1_0 + sizeof(tmp_tmp_tmp_tmp_tmp_msg_0_0_1_1_0));
    tmp_tmp_tmp_msg_0_0_1.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.source_man.assign("KJHGMBCSAEGPUPCSVGUBVVTDCONXWSHXZPLCXPEWADMBW");
    tmp_tmp_tmp_msg_0_0_2.dest_man.assign("HMMTZKKBSMYVGKKV");
    tmp_tmp_tmp_msg_0_0_2.conditions.assign("MSTDQSCGJRCWUEGRPRMGEMGORCISJNUGSMXYDGORJHUKYBXNVUCJKKZDHOVQXWNTNHTEOSFVUMPHPOXDZDHTMQZNXPONQSVGOZBQIHUIIHYNQGMPLFCSAYHPUXIDBNAJSQTPLUENCBWAYJAWVZUJCLLYDZEHFEAJ");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_2);
    IMC::CrudeOil tmp_tmp_tmp_msg_0_0_3;
    tmp_tmp_tmp_msg_0_0_3.value = 0.8290271952341054;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_3);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4218594679763219);
    msg.setSource(9440U);
    msg.setSourceEntity(68U);
    msg.setDestination(65304U);
    msg.setDestinationEntity(168U);
    msg.op = 240U;
    msg.name.assign("ZXBYOSLYHBXDSHUMDGRIAGYEOQVQAJCBPQZJIKBHTKHFOTDEKLQVHFXELZWNPKZMZVJGENCSMZXCNQKTVBAEPGLJUKWTCDAGJIWSWFIPNSQTAMBUMXFHCRYYSKKLVOIYJEWHLVHIZWZFNLIUSRWIFBTMTMEUBBNCHYGRGNGOV");

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
    msg.setTimeStamp(0.4242849363193444);
    msg.setSource(20682U);
    msg.setSourceEntity(215U);
    msg.setDestination(25647U);
    msg.setDestinationEntity(11U);
    msg.op = 220U;
    msg.name.assign("YOGLUXSQVRKDGHCTKICFWGTECGWDTGNMUARFLGJZANVNCUFJVPEZZVUFTAAJWGNWSEWBRPBTUZLBHCJXJXEUBTIZZOHPKIIKHHEDCMHOQPPOXEPLPEBMCMSKWRTRBJTHNVOYYFA");

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
    msg.setTimeStamp(0.625926106014131);
    msg.setSource(12272U);
    msg.setSourceEntity(108U);
    msg.setDestination(3396U);
    msg.setDestinationEntity(182U);
    msg.op = 176U;
    msg.name.assign("YQQSISNAJAJMFTGPOINUFBITRNXVXRJBVZKECGOADQRYEFZDBCRGUTJUHODEDHGGBXFOAHLLXMHCHVDFWVAEQZSZFYBETQTHQBEOBGXCMSYPAKWGOPSIJVKQUNEBPCUGUM");

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
    msg.setTimeStamp(0.9685623948738453);
    msg.setSource(28820U);
    msg.setSourceEntity(197U);
    msg.setDestination(25567U);
    msg.setDestinationEntity(237U);
    msg.type = 152U;
    msg.htime = 0.12919482040513375;
    msg.context.assign("WAHJPWFQFJINBKTDNXJOAAXLRESEGXGKJOJGRHJOIOUXTJQAQZHVVYJAUZRUHYDMNMCCENWLCRKFLZFDMBHUY");
    msg.text.assign("EHQFSIMERHGXZEBCUEMNWLBPZFTJGTAUCWPYIXESYQZKMDEYQAZGIWAQAGJONYCXOVFGUZPDAPVVUDABZWARHEZFEFVKCWZYECOTMHXNNQJRSDHTPBVHIWTQJGNLGTSDLMSVTNXJRXKOSPTJILFVOSUYUVRNRCBXFTM");

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
    msg.setTimeStamp(0.634283128721185);
    msg.setSource(24866U);
    msg.setSourceEntity(52U);
    msg.setDestination(26535U);
    msg.setDestinationEntity(158U);
    msg.type = 128U;
    msg.htime = 0.5672739274105588;
    msg.context.assign("WVJZDWARPKGSKOUWGQDJPPRADZGYBCNQYQXXDHJVHKJVEHMXZJMIZNBFBTSXCOMLDUZY");
    msg.text.assign("SSSBUZVHOUM");

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
    msg.setTimeStamp(0.1750539372834794);
    msg.setSource(44080U);
    msg.setSourceEntity(150U);
    msg.setDestination(61515U);
    msg.setDestinationEntity(202U);
    msg.type = 95U;
    msg.htime = 0.047443985274251865;
    msg.context.assign("RNDXLLAYXMIFOKJXXKMMAELZYBLJGIDGOYWPADSHVLVVZLMVEFMQUADVJGSFIBRGBEHZECOIDBRQIVJFPRSQMYWCEPUKQBAYDCZYN");
    msg.text.assign("WVLDSFMXWKPEJWVQSJXPBXUIAYMGNWLJYCDBWJNXYJUTVBALUPN");

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
    msg.setTimeStamp(0.9074867758672668);
    msg.setSource(28174U);
    msg.setSourceEntity(171U);
    msg.setDestination(49523U);
    msg.setDestinationEntity(246U);
    msg.command = 197U;
    msg.htime = 0.20749563450613562;

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
    msg.setTimeStamp(0.10200607911464066);
    msg.setSource(50364U);
    msg.setSourceEntity(228U);
    msg.setDestination(5415U);
    msg.setDestinationEntity(213U);
    msg.command = 8U;
    msg.htime = 0.09034992075807047;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 51U;
    tmp_msg_0.htime = 0.60635203064603;
    tmp_msg_0.context.assign("HOFBRGUBNTJYBZEUXRQPYCUZWXAOWMBMPOHJUGMHVVJRKNWONISKBBISZFDKMPLKOUMLZEVMPLEKYVYNNNRFPVTWDDABAUIDGJTUKRHLNKVXOQPTPSLHQODSLZWBEXEQYYFQPUSTLOCSMIYKJAQZJMCEWGAGEMCEXDW");
    tmp_msg_0.text.assign("MZGCXCMKQCUMCXKHVEZSBTHTGFWPJSLFNZEWGR");
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
    msg.setTimeStamp(0.0005491958123908791);
    msg.setSource(10097U);
    msg.setSourceEntity(218U);
    msg.setDestination(60214U);
    msg.setDestinationEntity(87U);
    msg.command = 80U;
    msg.htime = 0.9659900852698482;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 241U;
    tmp_msg_0.htime = 0.5186985635024768;
    tmp_msg_0.context.assign("WLLACZVIYKDYRNLEDTVPXCOKXEJBTOHPEJONZOSKBMMJQIBTHEQRTWYMAQZLNEPDRSYITJAIMFZGFJCUZIWKYFAXBWLCHBNVGTSOASOURGY");
    tmp_msg_0.text.assign("SNBSJCOZYCILGDEWDTXVKBIFYFLLWCZLTSQBKVGDKOYYLCIZDAXNORCTSISQEWURUTROPWNKHOYMISLUFUWBREEJNQFXIARDAEWPJZE");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7342162297633712);
    msg.setSource(58883U);
    msg.setSourceEntity(81U);
    msg.setDestination(49052U);
    msg.setDestinationEntity(46U);
    msg.op = 146U;
    msg.file.assign("JXYWKYEGTRKRWCHBQOSYJGQHOVBCPWLQOS");

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
    msg.setTimeStamp(0.6529946506506905);
    msg.setSource(23033U);
    msg.setSourceEntity(137U);
    msg.setDestination(51346U);
    msg.setDestinationEntity(242U);
    msg.op = 4U;
    msg.file.assign("QPNLVSHYWKMPRRNYQPVHBANVMXXIAPQIPWUUFJALUYOLPHDQXIJNGBPCEWOWGLXXIDEHZSYATDAOBYHNMKTBAHEZDUCNFUBXYZGKEXCMDEJLSYFAFTZFNBKIVBLQGUSYFKVMMOCSNJSKEAPQKINBQLXMWEPCZMYTOGRRVLZKGPWAIWIMDQGQJZKVYGCTIQOOJEXXVSHFOR");

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
    msg.setTimeStamp(0.8407541206074217);
    msg.setSource(35974U);
    msg.setSourceEntity(211U);
    msg.setDestination(3443U);
    msg.setDestinationEntity(171U);
    msg.op = 81U;
    msg.file.assign("VLEUBWPFWIUTXWKPAZEYFKKDLXJFNYLISZKOQVIHFGDROHORSQYRRNHAZFKIGCJKVROEBJQFJXSQMLNLTDELEJTSZNDYYYFXGBGMRBIRZUIL");

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
    msg.setTimeStamp(0.49347049612469507);
    msg.setSource(10111U);
    msg.setSourceEntity(191U);
    msg.setDestination(5123U);
    msg.setDestinationEntity(227U);
    msg.op = 18U;
    msg.clock = 0.24799243587686126;
    msg.tz = 72;

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
    msg.setTimeStamp(0.34998045143024226);
    msg.setSource(17047U);
    msg.setSourceEntity(147U);
    msg.setDestination(41338U);
    msg.setDestinationEntity(11U);
    msg.op = 145U;
    msg.clock = 0.8147074450437383;
    msg.tz = 96;

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
    msg.setTimeStamp(0.48097361704076513);
    msg.setSource(64912U);
    msg.setSourceEntity(120U);
    msg.setDestination(43445U);
    msg.setDestinationEntity(127U);
    msg.op = 143U;
    msg.clock = 0.12119452833857713;
    msg.tz = 0;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.08991127707923618);
    msg.setSource(25196U);
    msg.setSourceEntity(58U);
    msg.setDestination(30485U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.262629664226968);
    msg.setSource(58586U);
    msg.setSourceEntity(46U);
    msg.setDestination(873U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.4568661396510909);
    msg.setSource(59066U);
    msg.setSourceEntity(12U);
    msg.setDestination(64375U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.4979329813712059);
    msg.setSource(35053U);
    msg.setSourceEntity(67U);
    msg.setDestination(8659U);
    msg.setDestinationEntity(228U);
    msg.sys_name.assign("TLFZCECOPTEDOCBXNGEYBBNWNIBGKZVAMUYVAGYHPAOBLBOJJUNKLCIRWSTRSFZZSFQZQHDXCFFWFPZREOARQVEQNIQ");
    msg.sys_type = 144U;
    msg.owner = 32746U;
    msg.lat = 0.6280705014233693;
    msg.lon = 0.16642221796659296;
    msg.height = 0.03145205276763818;
    msg.services.assign("VLXPTAXRWMJONFSVAUHFGHRBSQMQNHNIQJ");

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
    msg.setTimeStamp(0.7086677439730963);
    msg.setSource(19638U);
    msg.setSourceEntity(193U);
    msg.setDestination(11006U);
    msg.setDestinationEntity(222U);
    msg.sys_name.assign("FTYFQLZDIEJPSHONXBGPCFMKUELMCPPHTQSZABNJAFVTRJWHNWOMVVASOWSRSXZOULNDDJSTHDQYOECGATRGNMEFRQYUEMBFXOBQQECLVJTSWKLAJIVDKWHVPCEXSLZEGINTKHUATXAUYOPOQUEVQXISQLMZMWBIYGCTOMKGYLXNLDBSINFTRYYCIWHXJNWCYBAUOZKJZX");
    msg.sys_type = 49U;
    msg.owner = 19384U;
    msg.lat = 0.6965579344928164;
    msg.lon = 0.5859787454954852;
    msg.height = 0.46515595093046547;
    msg.services.assign("IKDHIVYFGKBLIRTLGJNUYAWZYWOXWYQWVZYUCKLAFTTDDOMAEOKGRBBKWOJRZBYQCANGUXHJVMKDJIQWROZRHID");

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
    msg.setTimeStamp(0.9187402103817027);
    msg.setSource(42732U);
    msg.setSourceEntity(5U);
    msg.setDestination(57416U);
    msg.setDestinationEntity(78U);
    msg.sys_name.assign("WDVHSXAFKALVDFEIYYEUDNYLHWIQPMNTCJZEACRIIKTSRBBAFXFOCNPQURZPGNYGHJSWRZTUZBFPMZWDWNVCSODRANQEGKFZMAILOOBJQCMDNQMBRMPJXCFIXZSYJGKUHSYHOLIUIBA");
    msg.sys_type = 215U;
    msg.owner = 685U;
    msg.lat = 0.13735207310787423;
    msg.lon = 0.04837850428066204;
    msg.height = 0.48284834057895376;
    msg.services.assign("EJHAQWLRSUBMZKGLAZQVBNAORPEPCYHLTHYANHBKETBQWNDCJCHEUNMZDSHFDCXMGFFQMLWTLPAUKBUWMSVJISCXNZORVJGIMXOFWFJYBRZEUFKNEUZKRKSVTBXQGJWYBKGZIRPDTIOENHUGICWLLGOHJPOIJQTXHYDAPAFZPPENVKOXVSNPVCIYYLHFDTSOUDER");

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
    msg.setTimeStamp(0.04764957722213514);
    msg.setSource(11974U);
    msg.setSourceEntity(15U);
    msg.setDestination(18707U);
    msg.setDestinationEntity(134U);
    msg.service.assign("ITUASYDFEFBWPQIFILSCBKAJMUZKEQTNRNQPHDAUXVAPMENBCFMODJWNYNMJVMZRPKBXBTPTLDMWLESUHVQKJTWVDIFPUIDROHSXAKLSYGUJZLXYLIXHGIAYEBVJYXQMUOOUGOHFJZAVFH");
    msg.service_type = 102U;

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
    msg.setTimeStamp(0.8919299310332948);
    msg.setSource(16635U);
    msg.setSourceEntity(153U);
    msg.setDestination(16258U);
    msg.setDestinationEntity(246U);
    msg.service.assign("DNGZBIIQDHBZXHRNAFBWZMKFRVGVVVVMRGPYYTSDBEQYLPKZDEYCHJIUBWZCKPLORRQQGTLEPSAOUCQHEHJNJFPAMPRRFSMSJQUAJTOYBLAOBAZISTTSWOGBVPNHGQDYVHZNGLFNCVFBOXKLGAXXJDHWINYEZNLUMRTKRJUS");
    msg.service_type = 137U;

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
    msg.setTimeStamp(0.24150675827983603);
    msg.setSource(13744U);
    msg.setSourceEntity(228U);
    msg.setDestination(29185U);
    msg.setDestinationEntity(4U);
    msg.service.assign("KNIBZHULALYXDQRYJUPBFMUNIGZKTVRYWJVSTXAIWJEWZEFOUIMPMHYSDFGVNCMUQXTZUDRDGILSPXTKPNYCLSQSKAEGMWHZGPUVAXVUORGPGWNFWXHYLIUWOKLTLSOHBEAY");
    msg.service_type = 30U;

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
    msg.setTimeStamp(0.5382495515167985);
    msg.setSource(39148U);
    msg.setSourceEntity(37U);
    msg.setDestination(34845U);
    msg.setDestinationEntity(249U);
    msg.value = 0.22952711380278368;

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
    msg.setTimeStamp(0.41153380303445397);
    msg.setSource(22107U);
    msg.setSourceEntity(9U);
    msg.setDestination(21167U);
    msg.setDestinationEntity(144U);
    msg.value = 0.6741576036618411;

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
    msg.setTimeStamp(0.8370655554315555);
    msg.setSource(6105U);
    msg.setSourceEntity(130U);
    msg.setDestination(53891U);
    msg.setDestinationEntity(164U);
    msg.value = 0.9413961767781559;

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
    msg.setTimeStamp(0.4081267767654335);
    msg.setSource(14162U);
    msg.setSourceEntity(162U);
    msg.setDestination(36585U);
    msg.setDestinationEntity(38U);
    msg.value = 0.41894415421239595;

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
    msg.setTimeStamp(0.3881418985777063);
    msg.setSource(10899U);
    msg.setSourceEntity(43U);
    msg.setDestination(62184U);
    msg.setDestinationEntity(237U);
    msg.value = 0.8688850538938194;

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
    msg.setTimeStamp(0.9197453582902506);
    msg.setSource(41476U);
    msg.setSourceEntity(231U);
    msg.setDestination(58498U);
    msg.setDestinationEntity(234U);
    msg.value = 0.3719730941147096;

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
    msg.setTimeStamp(0.0256003222166562);
    msg.setSource(57127U);
    msg.setSourceEntity(184U);
    msg.setDestination(53157U);
    msg.setDestinationEntity(121U);
    msg.value = 0.7813863590697018;

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
    msg.setTimeStamp(0.044157172851746584);
    msg.setSource(16714U);
    msg.setSourceEntity(216U);
    msg.setDestination(20897U);
    msg.setDestinationEntity(49U);
    msg.value = 0.25323323556544863;

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
    msg.setTimeStamp(0.2395539215698581);
    msg.setSource(56288U);
    msg.setSourceEntity(156U);
    msg.setDestination(65376U);
    msg.setDestinationEntity(12U);
    msg.value = 0.38305867567678886;

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
    msg.setTimeStamp(0.2589509121701091);
    msg.setSource(25244U);
    msg.setSourceEntity(94U);
    msg.setDestination(50574U);
    msg.setDestinationEntity(2U);
    msg.number.assign("FESDYEIIOOPQAQTKIGKIMDCDAXPNAKIAW");
    msg.timeout = 49335U;
    msg.contents.assign("RMHTCEGWTSMEWBLTGXOMHXSGVALWFCPNIDCFWMZVEPTGOVDYJKDLEOEOACKWJPYISTZJQZDPZBIKMYCXAN");

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
    msg.setTimeStamp(0.6454589061574069);
    msg.setSource(27562U);
    msg.setSourceEntity(114U);
    msg.setDestination(35360U);
    msg.setDestinationEntity(68U);
    msg.number.assign("FCXUGMBGFTWIOVOGWJDMXSEZDKTOBZJJEZAWTLBEEFRTPAIHXRIMIQNVBUSRQMELGAQKUHZVEBYHDZACNVEZEHOPYLYKBYSYAQLKWCFODJSXZHNTHXGNDNOKMWHMPDXUYSATKCPLKLOAGQJQNFJZRLRMYXPAFTPWPQCVGIMVFACHJRYWFXU");
    msg.timeout = 52541U;
    msg.contents.assign("JCSKSAOHCIQRWOQSUSH");

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
    msg.setTimeStamp(0.286133525676354);
    msg.setSource(31926U);
    msg.setSourceEntity(150U);
    msg.setDestination(1637U);
    msg.setDestinationEntity(8U);
    msg.number.assign("KUAFOTOQYIMFQGJLZJSYTRUJIWIVQXYKETQFKZUVZVVLCPRXEWRDMTDSOMORNXGEBOKKNBQWEPLVBKVMEBKZGYYLPIBAWCCDSCDNHOHWZFVQIFQGJLOXKGYVDDHHEPCTXAUJRDOIVUTCIEFJYINFWQABPTEPDCIWSDNFZLUYVMPASHARKXSFJWRYQBNMALSPLAUGAKNGXHXHUBSQHEZWRHZXLMHNYPMGOWFPSCTREXDMCUCNBUTJIZTJRAJS");
    msg.timeout = 23490U;
    msg.contents.assign("UMAIDYBEOYGZNUWDNSMGPTSQKCSGEDYHPUXWUVVRGJBQMBWAPCLEDDJXUWOBDZJZXVNCTWIFUMIATCKBKIHNNRKKIINYA");

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
    msg.setTimeStamp(0.49230813588147504);
    msg.setSource(49304U);
    msg.setSourceEntity(157U);
    msg.setDestination(1551U);
    msg.setDestinationEntity(168U);
    msg.seq = 1241516786U;
    msg.destination.assign("LGZDQMZBREMCJLVONSVPTWMXEUMPTYNNNATEOQUXGLRAJLOCEDKADUVFZTPADVNIDFPBFOBNMBZJFGSBPSKZVCBKIJAEBRPFNW");
    msg.timeout = 24992U;
    const char tmp_msg_0[] = {109, 46, -76, -82, -87, 109, 7, 7, 45, -60, 15, 15, -87, 22, -66, -62, 61, 89, 115, 122, 73, 53, -32, -57, -20, 15, -71, 81, 60, -38, -4, 34, 53, -81, 20, -39, 111, 4, -8, -59, 124, 51, 47, 103, 96, -62, 80, 83, 61, 101, 42, 71, 75, 77, -68, 49, 62, -20, 108, 52, -48, 34, -15, 20, -113, -30, 117, 76, 20, -81, 107, 7, 6, -92, 98, -21, -55, -5, -66, 20, -114, 35, 68, -33, 73, -32, -126, 79, -7, -116, 18, 106, -1, 108, 31, 53, -39, -7, 82, -82, -29, -103, 12, -86, 84, -106, 104, 1, -86, 71, 63, 4, 67, 104, 42, 106, -28, -84, -115, -110, 79, -108, -17, 31, -126, -93, 65, -71, -120, -80, 77, -110, -119, -38, -22, -123, 41, 92, 16, 6, -54, 82, -25, 59, -75, 69, -23, -41, 108, -46, 120, -119, -105, -74, -17, 116, -64, -25, -9, 1, -76, 18, 96, 99, 18, -121, 52, -125, -84, -16, 32, -101, 38, -37, -67, 9, 41, 81, 18, 117, -44};
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
    msg.setTimeStamp(0.5610246630825328);
    msg.setSource(56269U);
    msg.setSourceEntity(222U);
    msg.setDestination(55202U);
    msg.setDestinationEntity(139U);
    msg.seq = 2249596354U;
    msg.destination.assign("XHOONCVUKQBRCAIOSCSWKSYTK");
    msg.timeout = 16884U;
    const char tmp_msg_0[] = {39, 120, 25, -48, -13, -18, 66, 51, 117, 38, -85, -74, -92, 27, 104, -37, -80, -57, -115, 108, -89, 76, -82, 51, -32, -40, 33, 55, -46, -100, 14, 15, 68, -3, 87, 7, 98, 84, 84, -93, -35, -117, -60, -104, -98, -2, -68, 76, -112, 63, -78, -71, -47, 112, 14, -105, 78, 62, -7, 90, -66, 5, 110, -97, 57, 60, -36, -78};
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
    msg.setTimeStamp(0.9652518953642494);
    msg.setSource(51816U);
    msg.setSourceEntity(46U);
    msg.setDestination(38882U);
    msg.setDestinationEntity(29U);
    msg.seq = 1056665091U;
    msg.destination.assign("YVRTHCEIKDMAYBMFFKUWOVLVQWZYKBOKFNIWPTTPRMXJPFPFDKZKHXQIMNDTAWOGCBAWGZDJDIRMFJZTZHQXGDQLPCKUZHSPNRLICOSMENNHOGAYSLWZFNHHJSXBSCJCATUVLKGJNYEPTJTXLQSVQPEWRIXBNUBVMUIN");
    msg.timeout = 57175U;
    const char tmp_msg_0[] = {14, 73, -86, -98, 113, -51, 104, 20, 56, 57, 86, 32, 66, -43, -89, -81, -12, 60, 42, 104, -28, -61, -112, 58, 74, 118, -36, 50, -118, -65, 24, 83, 117, -26, 67, -16, -33, -52, -8, -118, 24, -90, -22, 56, 78, -15, -66, -80, -101, 49, 38, -109, 126, -58, 52, -96, -61, 90, 117, -51, -80, -34, 117, -103, 22, 42, 73, 4, 77, 103, 76, -40, 58, 126, 19, 58, 81, -5, -101, 3, -103, -109, -30, -11, -58, -50, 90, 17, 111, -91, 119, -18, -103, 99, 21, -60, -62, 124, 123, -7, -52, 56, 27, 81, 36, 111, -105, -31, -47, 16, -32, -20, 35, -101, -16, -122, 62, 61, -48, 31, -100, -116, 54, 33, 26, 41, 38, 126, -69, -75, -32, -116, -44, 100, 35, 111, -90, -94, 116, -52, 9, 9, -51, -79, 61, 57, -1, 47, 22, -60, -93, 24, -88, -3, 108, 109, -85, 122, -31, 49, 78, -43, 76};
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
    msg.setTimeStamp(0.43335587405085574);
    msg.setSource(18284U);
    msg.setSourceEntity(145U);
    msg.setDestination(36826U);
    msg.setDestinationEntity(16U);
    msg.source.assign("BOOYRVWMTVSKKEBMZSLUQARPZGFESHYMXUQPMETBSACPGZEQLUQQKAWPJUAGJOERXXNTFLVJWHMUPIBKFHYTQCEAEFPZVWEDRUDFDZOMVDYLGUFTIJ");
    const char tmp_msg_0[] = {-73, 26, -2, 119, 88, -71, 47, 79, -5, 59, 80, -120, -106, 28, 108, 77, -48, 109, 72, 5, 75, -3, -100, -46, 103, 85, 14, -38, 100, 14, -3, 71, -99, 47, -43, -26, 79, -27, -110, 87, 73, -28, 50, -61, -103, -68, 56, -8, 4, -35, 11};
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
    msg.setTimeStamp(0.2217407180042088);
    msg.setSource(41276U);
    msg.setSourceEntity(212U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(218U);
    msg.source.assign("OOHDVZTZVFSNZJRDHHHVOCMZCNQKJNTULUSNBW");
    const char tmp_msg_0[] = {124, 16, 87, -4, -94, -42, 98, 91, -82, 113, 62, 33, 75, -19, -73, -66, 112, 114, -119, 109, -100, -58, -69, -86, 106, -119, 101, -59, -62, -128, 103, 34, -8, 105, 7, 102, -31, 40, 124, -90, -88, 79, -117, 76, -83, -51, 85, 90, -95, 68, 24, -64, 31, -58, 123, 57, 63, -119, -97, -63, 30, -23, 11, 20, 83, 69, 7, 107, -23, 72, 123, 11, 99, -81, -107, -21, -66, -93, 117, -60, -74, 21, 61, -127, -8, -31, -32, 85, 98, -114, 9, 19, -125, -33, -85, 110, -105, -56, 66, -91, 29, 91, 4, 103, 52, -85, -68, 75, 116, -72, -127, 119, -83, 28, -40, -66, 106, 93, 64, 13, -94, -61, -71, 105, -4, 75, 49, -45, -90, 50, 57, -14, 9, -61, 67, 119, 20, 71, 86, 0, -51, 115, 55, -34, 1, 3, -10, -97, -45, -46, -85, -125, 87, 54, -69, -43, -84, 121, -83, 82, -41, -80, 112, 25, 3, -108, -43, -74, 54, 119, 13, 56, -56, 74, -81, -61, -35, 25, -10, 62, -49, 94, 34, -108, 94, -123, -63, 77, -103, 29, -107, -76, -48, 83, -128, -109, -38};
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
    msg.setTimeStamp(0.17849005254208372);
    msg.setSource(49435U);
    msg.setSourceEntity(239U);
    msg.setDestination(9244U);
    msg.setDestinationEntity(223U);
    msg.source.assign("JZKMPFTMXYBULMYXVHQFHHVAPRIVZBSNRFPCOKSXPDJJJFJIHWUMCGTQMBVCLUWAATDLMWGLZEAGTRSOXJOOWLRYENCDVSUAGRIQBHHBXFO");
    const char tmp_msg_0[] = {-128, 78, 36, 90, 111, -16, 29, 110, -92, 63, 61, -39, 66, -67, 59, 23, 57, -53, 36, 59, -122, -36, -97, 67, -1, 87, -36, -9, -60, 84, 61, 108, 40, 55, -101, -76, -5, -16, 90, -83, 5, 35, 4, -108, -12, 22, 90, -108, 18, 33, -123, 69, 42, 7, 22, -83, 13, -101, 44, -67, -23, -124, -61, 44, -38, 104, -1, 95, 18, -88, -116, 104, 81, 83, 12, 45, 124, 1, -54, -80, -69, -73, -100, -33, 27, -122, 87, 108, 21, 18, -32, 97, -71, -79, 59, -92, -25, -124, -101, -107, -84, -31, 45, 116, -107, 50, -128, -1, -43, 84, -89, -21, 105, 124, 104, 60, -111, 71, 12, 74, 17, 5, -72, -84, -8, 32, -106, -14, 59, -66, 26, 112, -28, 57, 77, 4, -29, -114, 42, 90, 66, 75, 27, 15, 53, -112, 57, 117, -42, 81, 25, 72, -124, 74, 115, 73};
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
    msg.setTimeStamp(0.2577490003167201);
    msg.setSource(24236U);
    msg.setSourceEntity(162U);
    msg.setDestination(33920U);
    msg.setDestinationEntity(222U);
    msg.seq = 3092975378U;
    msg.state = 51U;
    msg.error.assign("VUGKMEBHUXFUPBWSWDCZASBYLLPQMEQHMMJPNYTKOPSHZOQKOHEFPOERSDORWQHXGQBYRBDGQPRPZBCCTWAISOVVGPZZBFXNMTCMUXJOSEYJZKIWEQLUZYLCEEXVSNLR");

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
    msg.setTimeStamp(0.8069936228958183);
    msg.setSource(8000U);
    msg.setSourceEntity(112U);
    msg.setDestination(32587U);
    msg.setDestinationEntity(206U);
    msg.seq = 1803467308U;
    msg.state = 185U;
    msg.error.assign("LTAGSUBQLHCAMLSXFCNPUDEDCORZAWVAHDX");

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
    msg.setTimeStamp(0.45571010387898625);
    msg.setSource(25194U);
    msg.setSourceEntity(169U);
    msg.setDestination(17593U);
    msg.setDestinationEntity(107U);
    msg.seq = 939324674U;
    msg.state = 102U;
    msg.error.assign("LFNIUPVNXBJWCDVLNYYQMGKUQJHELGFJZTABEKPGCOEXXFDAXGKZYMOBKYFJLMYVMWASRXYPCHVJIGWCCQPSFXJKHVZHLAZDWUIQYWVRBTTRUIXINKQITBPTNHFASSDZTJHLQDJEDLGASIGLDDZVYHWEEXVLJEBJOWQNGNDZBINQWNGWRTCCRBTMSOBUUPZFYRVNMKPKCMQHOXSPHF");

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
    msg.setTimeStamp(0.05002365234768569);
    msg.setSource(9219U);
    msg.setSourceEntity(107U);
    msg.setDestination(12627U);
    msg.setDestinationEntity(212U);
    msg.origin.assign("DUFGYWQHVDLVDXKWXBUCJEVGLLNMGMZGXNJABTXKKNABGRPMPOCESBTCIKDPTRFGXIASTOOIGCVMTNUAYKNYPOXIDEMIJVGZHXXPKGZXUHVSFHHEPCSOPKDFWVAECFPWKWBUVICSQHYSMNMLKHJZOEUINLYVTZJURQEHMHMLKREMSAYBQCUROBGAWZYLRUWIJQYWLQTJSQZLWDRRYFHQRTPZABOVOO");
    msg.text.assign("NNUIBGAZUKOYWGFBPBRXXTYESYKFJKFHQYCSUPDXBTGQGNLZDIMCAMEENGLEMCPGHRPINCTVLWNMFDWBQOOF");

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
    msg.setTimeStamp(0.4936211496732138);
    msg.setSource(57090U);
    msg.setSourceEntity(96U);
    msg.setDestination(59486U);
    msg.setDestinationEntity(171U);
    msg.origin.assign("LGHJEEASPHVIDSOFGOSMMAZPRJNRARMPQJWKSWGNQCGGNKBEOFFJCDBIIBAKJNJCVFBYNWYUIUXLEZFHBRTUYPVMZUWYXFVVMRTZCUNMLUAI");
    msg.text.assign("GQJNKYOVFHFSDYWCIBRQITOHAMMDWCLTPBTVOOGNUZGEGFXHCSHZYNXVZSBCMSQGMLZPYLPNTUCFYXPUDCHAJEUHQKXQSMZMQYAEFPVMKBWA");

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
    msg.setTimeStamp(0.2226176997605227);
    msg.setSource(12754U);
    msg.setSourceEntity(212U);
    msg.setDestination(50807U);
    msg.setDestinationEntity(37U);
    msg.origin.assign("EXLOQZJXJXRKVVPUMMGTWPWQLHCKGHKCIEOOJOQDYVSTEQKQYTLGVVWHPUBRZEOIMSQQTWTXQOMGCNPOKJBZGDYREHBYR");
    msg.text.assign("QCCSJXKLUDDMKOFNBHZJRTRTCLCDZGQYNAYXJPHCMYKZLJSVBAVXJQSWYBKIQZUYPACDZEUSIXLTFUVKEGYHHHHETRBTRWOENRWTPAIXBLFWPPEOGOYSHOOAYZJYNDEYPDMLRZIPDILLAGMJBSVAFANXOJQPHMAXXUUNIPJEEWOQVVQHSEDFFRQIUTAESMUFXVSOICKITRQVNZTCPRBVMBFKTBWUFMNRKDIDQCNMWXBGGGSGKGWN");

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
    msg.setTimeStamp(0.6843686015568917);
    msg.setSource(56395U);
    msg.setSourceEntity(18U);
    msg.setDestination(50536U);
    msg.setDestinationEntity(76U);
    msg.origin.assign("XTPLLTGYCBHKUFFNYDXEQYJDKIGOMEMMDIGGLIT");
    msg.htime = 0.6402060627044618;
    msg.lat = 0.03163621523258964;
    msg.lon = 0.9528730039751739;
    const char tmp_msg_0[] = {45, 119, 77, -122, 45, -107, 23, -79, -76, -73, -98, -34, -107, 75, 29, -115, -108, 28, -60, -49, 77, -88, 115, -91, -13, 108, 11, -15, 62, -77, -91, -56, -24, 40, -58, 111, -70, 30, -43, -18, -93, -15, 114, -98, -120, -84, -112, -67, -51, 111, 44, -101, -107, -20, 76, -127, 91, -125, -17, -65, -79, 8, 118, 21, -110, -122, -117, -3, 6, 69, 50, -11, 119, 37, -39, 106, 71, 124, -106, -119, 24, 72, 78, -75, 109, -104, -87, -66, 115, 113, 56, 90, 26, -121, -76, 51, 3, -10, -80, 86, -108, -101, 79, 47, -124, -105, -51, 29, -105, -95, -27, -88, -110, -14, 86, -81, 48, -17, -52, 117, 28, -31, -45, -32, 62, 21, -29, -111, -69, -107, 78, 124, -108, -127, 31, -30, -49, -13, 100, -56, 78, 40, 57, -13, 109, 109, 29, 20, -61, -62, -68, 6, 11, 55, -54, 11, 82, 19, 104, 22, 24, 64, -47, -88, -54, -69, 46, -34, -68, -60, -13, -38, 99, 106, -75, -62, -11, -27, -106, -25, 50, 37, 72, 4, -19, 25, 122, 31, 112, 121, 22, 30, 23, -82, -105, 10, -116, 111, -86, 94, -126, -4, -96, 6, 126, -119, 123, 125, -96, 107, 25, 6, 87, -65};
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
    msg.setTimeStamp(0.6203070563210545);
    msg.setSource(62083U);
    msg.setSourceEntity(102U);
    msg.setDestination(42213U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("IDYPQULIDHCYERFIHKTRUOHZN");
    msg.htime = 0.6986402759571511;
    msg.lat = 0.867438841210736;
    msg.lon = 0.719146667418609;
    const char tmp_msg_0[] = {6, -41, -17, -94, -123, 74, 68, 21, 113, -47, -126, -41, 98, 44, -65, 95, 126, -39, -120, 68, 37, 88, -81, 66, -14, 15, 61, 110, -94, 48, 88, 116, 110, -91, 34, 78, 23, -66, -13, -111, 4, 72, -9, -31, 90, 73, -69, -70, 105, 40, -34, 36, -6, 30, 26, -103, -29, 49, 77, -26, -84, -80, -58, -79, -55, 14, 2, 107, -99, 63, -73, -24, -99, -62, -110, -67, -89, -49, 81, 87, 89, -122, -27, -66, -58, -43, 59};
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
    msg.setTimeStamp(0.2617624341818853);
    msg.setSource(64731U);
    msg.setSourceEntity(123U);
    msg.setDestination(59972U);
    msg.setDestinationEntity(124U);
    msg.origin.assign("LWJQDFQVGOPNFFAUPUSIRTYFZYTECPGBCXCAEHMXYSIHGVKRVPOEFDIEJXFSEVLCHDBAUNWXPJBNWANJRWJKILORWGKQDRDOJDHRXZMACTUSFSMHQOLLASIFARVPYKCLORFZLJHMZOYBMPFVPCCDUTXAAZVB");
    msg.htime = 0.005445200825954677;
    msg.lat = 0.4697525403636976;
    msg.lon = 0.4542976169201701;
    const char tmp_msg_0[] = {50, 84, -42, -119, -67, 46, 32, 109, 39, 124, 32, 1, -83, 70, 94, 104, 39, -20, -3, -10, 57, 14, -15, -114, 78, -61, -81, 20, 18, -125, -31, -14, 66, -108, -92, -74, 94, 121, 100, -89, 37, -46, -58, -52, 114, 78, 61, -40, -1, -105, 28, -75, 36, -119, -77, -73, 58, -121, -69, -96, -45, -115, -58, -12, 57, -120, -58, -14, 67, 26, 93, 85, 76, 103, 115, -73, -50, -36, -128, -17, 124, 28, 83, -107, -19, 119, -116, -38, -86, -60, -41, -100, -123, 75, -40, -3, -27, 65, 81, 98, -22, -79, -116, 54, 9, -36, 106, -122, 11, -20, 105, -103, -74, -91, -3, 3, 106, 54, 8, -18, 2, 55, -77, -42, 64, 108, 114, -101, -22, 13, -71, 49, 66, 58, -28, -96, -13, -45, -3, 21, -39, 98, -113, 83, -27, -49, 4, 87, 77, -121, -78, -19, -46, -66, 51, -42, -81, -9, 121, -106, 1};
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
    msg.setTimeStamp(0.3925807008520783);
    msg.setSource(65358U);
    msg.setSourceEntity(1U);
    msg.setDestination(32077U);
    msg.setDestinationEntity(214U);
    msg.req_id = 30577U;
    msg.ttl = 7549U;
    msg.destination.assign("CNJQPVNLWOYEOIOSQALJBBGWRUQUYTIIPWZEZSAHRWTQFOGIGGLPIFCLFDKIQVCMKXVJVQVDNWSDJLYNMAHFJVAOQFPPXCZTKELAQFCZDOVLNYEDKYWNMRSJIXPFHDSIBWXRGUHCSSHMLFARUMGAGMBBRGPT");
    const char tmp_msg_0[] = {24, -63, 42, -52, 65, 39, 52, 45, 4, 90, 95, -87, 95, 4, -81, 116, -84, 4, -94, -82, -47, 27, 54, -112, -33, 105, -75, 89, -1, -82, -95, -13, 82, 121, 51, -40, 113, -89, -95, 121, -123, -91, -85, 2, 0, -5, -26, -17, 83, -42, 78, -46, 13, -57, -9, 5, 75, -110, -103, -20, 23, -88, 79, 56, 115, 42, 90, -123, 21, -103, -71, 55, 60, 94, 10, -33, 106, -10, -17, 19, 119, -126, -17, -75, 42, 20, -91, 30, 94, -33, 109, 108, 21, 113, -115, -51, 22, 110, 51, 76, 22, -52, 46, 50, -39, 65, 9, -30, -76, 60, 43, -21, 80, -85, 62, 69, -39, -82, 89, 58, -69, 61, -4, -17, 122, 43, -113, -32, -89, -19, 114, -79, -122, 126, -47, 3, 75, 41, 119, 39, 19, 119, -107, -67, -113, -63, -2, 80, -28, 118, 73, -113, 95, 88, 117, -110, -5, 104, -19, -112, -103, 56, -51, -86};
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
    msg.setTimeStamp(0.16449028112895314);
    msg.setSource(37061U);
    msg.setSourceEntity(37U);
    msg.setDestination(54064U);
    msg.setDestinationEntity(82U);
    msg.req_id = 18993U;
    msg.ttl = 57751U;
    msg.destination.assign("KDLVYWVYHFAOSRYBXYRWDGQPTKMHTWNCFMZDTSKQMINETGCZTQOHPASTMLCICAKGKHWIYZLJYUDOOSKVVRQQOASGAXVMWHFRZTEOZUIBXUOIDEOCA");
    const char tmp_msg_0[] = {-31, -114, -31, 34, -44, 64, 19, 121, 34, 29, -96, 15, -126, -41, 85, -83, 115, 76, -30, 95, -41, 66, -13, 28, -119, -123, 85, 86, -122, -6, 66, 34, 60, -64, 45, 75, 0, 103, 59, 38, 109, 79, -102, -64, 64, 37, 66, 109, 64, -98, 19, 11, 15, -61, 83, -63, -118, -90, -56, -21, 45, -42, 122, 72, -115, -123, 37, -85, 123, 78, -26, -94, -62, -87, -4, -17, 32, 65, -96, -66, 60, 75, -36, 96, -27, 44, -88, 11, -28};
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
    msg.setTimeStamp(0.5110321429599627);
    msg.setSource(8370U);
    msg.setSourceEntity(98U);
    msg.setDestination(45734U);
    msg.setDestinationEntity(149U);
    msg.req_id = 26688U;
    msg.ttl = 62882U;
    msg.destination.assign("UQRHZZJFWKWBPRWFZONPGOPTPILUFTXWSDUKVSMUFEZUEINFXWLYWMDENIYTIFKXNXMPDJDVXQGIDKFUHWGKHVEBKOFGCQHYSQCUKBDNYAGWDVZBEFHFZNOBLPRLJOLGRAQKECQYPVLWBJHJGDERNJZEEROSUXVKAJZCYSLASH");
    const char tmp_msg_0[] = {13, 75, 29, -109, 7, -119, -18, -71, -15, -24, -1, -4, 124, -19, 36, 53, 74, -86, -83, -127, -122, 51, 4, -102, 42, -101, -10, 113, 49, 50, -76, 27, 10, 100, 94, -80, 52, 75, 38, 98, -21, -46, 49, 82, -127, 59, 109, 123, 29, -62, -42, 74, 76, 68, -87, -14, 78, 5, 58, 96, -112, 77, 53, 23, 72, -124, 85, 125, -70, 72, -72, -52, -36, -112, 79, 114, 47, 37, 51, 51, 107, 83, -15, -12, 67, 74, -127, 95, -114, -123, -21, 21, 126, -95, -11, 76, -50, -103, 126, 19, 68, 21, 98, 99, 25, 55, -60, 24, -44, -24, 83, -80, -71, -111, -102, 28, 17, 25, 24, -108, -99, -111, 60, -127, -91, 72, 50, -43, -31, 109, 62, -79, 48, 38, 10, -100, 53, 83, 89, -31, 94, 39, -108, 62, -78, -90, 125, -51, -47, -128, -105, -2, 37, -56, -59, -63, -75, -28, 112, -25, -69, 102, 109, -36, -40, 2, 43, -30, -119, 0, 103, -116, -38};
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
    msg.setTimeStamp(0.7522198463244268);
    msg.setSource(22708U);
    msg.setSourceEntity(174U);
    msg.setDestination(47053U);
    msg.setDestinationEntity(80U);
    msg.req_id = 61941U;
    msg.status = 112U;
    msg.text.assign("WPNOGDAAHHSGDXYVBSBWWPUEJABKQGFJALGLKLVIIITBNVUVUAODIEXGAXGRNEYSLVOCWHOMJGHZFLQNOXKZUDXDYUBBCBRWTMNZOCUFVDLYBEMCHQIUAMFFTKQTCPCMXRBWWSTIJUSQXCTQEZVYXNMZKS");

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
    msg.setTimeStamp(0.6064767741897039);
    msg.setSource(16171U);
    msg.setSourceEntity(175U);
    msg.setDestination(54506U);
    msg.setDestinationEntity(173U);
    msg.req_id = 52637U;
    msg.status = 149U;
    msg.text.assign("JBXZCEIAOKROQJMYPGIWORAJAEGKESFSJAZVFSDYMBYQAWQCQEBMCXWKNEJZTNTTS");

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
    msg.setTimeStamp(0.0746941439226908);
    msg.setSource(29551U);
    msg.setSourceEntity(173U);
    msg.setDestination(34196U);
    msg.setDestinationEntity(24U);
    msg.req_id = 32434U;
    msg.status = 137U;
    msg.text.assign("ZVEMKQGBIBSHJFQLGUNOYWZEUHYHOWXRIFFSPYAGSIORIOGJYQPBRYFYCKWHUXEAIRTOMLTCNDNGVMWFXUANS");

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
    msg.setTimeStamp(0.09893766970227214);
    msg.setSource(6003U);
    msg.setSourceEntity(191U);
    msg.setDestination(25019U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("GOOBPXFGSTXBUYJOZQXNUPUNHJWSGCAKCHZDTDOAPACNBKRJQRYDHFXAVGOYRDALXTEAMDLSIFFVWVPBUBBSGWJFNHVOSKKZIMXKEJUUTZQQLRMCUQCSRTLEKHGDNFMTDQIITYMIILWRWGYLSFCSOKHXWZYOCPALKRYFDVZHHXPGRJZPLAYJJICDELRQMBZEGNPEZWTDQJAEYNVMXHHQJVWKSVEYTUWOVPFLNPABCEMVNIBXSEFOK");
    msg.links = 3963298905U;

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
    msg.setTimeStamp(0.04240785426769922);
    msg.setSource(35972U);
    msg.setSourceEntity(219U);
    msg.setDestination(4753U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("WSUPFLSCLJAJSKHWDGYGUVDQTVJWJXQTUIZFMPBQOBDORFBVCORLDIGDSYLJCHAKZGIN");
    msg.links = 2558968447U;

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
    msg.setTimeStamp(0.5364325847836668);
    msg.setSource(43109U);
    msg.setSourceEntity(199U);
    msg.setDestination(4563U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("FEAXLUTDIPARPJDKTUVQBISWUAFRKUFDBEESNMGDPYMQDVVHCUZGDKHJSRYLESIGXBFUUOOZLCNPLZVURMNIBZBHWHBPDWZQANQBMLOIISKLXGFGTEVWNFHXPMCRAEKDLYGAOEACNQRECQLXMXNPKPDMAHJETJTZNJQJAJYPC");
    msg.links = 4074653179U;

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
    msg.setTimeStamp(0.2939875940124641);
    msg.setSource(44726U);
    msg.setSourceEntity(193U);
    msg.setDestination(13011U);
    msg.setDestinationEntity(222U);
    msg.groupname.assign("GYCARHCFEWITYWPDGKNBDOAJIFEUCGDIZUSYIJBADQHPXSUSPZJQGOHZBQFAHQVOLLGDURSBFEKTZNTNUFBGHVQMNDRKLWQFMMSJZDTIGDNSNESAZUKLUYRCJRGBEMCZMEPMJOYCYAXUUOGCVJDVNZNQWTFHXGKLJLBWXXMRSVHHLKTLZXETVCTVVFLAEARNKRYCQVXAJFOOPNKQWHYYMIYWBCXKIEJRUPOBWVBSPTFQWXRPIAOMWSEXKIODZ");
    msg.action = 63U;
    msg.grouplist.assign("ASNHHLZXKPYZLEFDAOKAMSSOOWDLUQZVWKUSKZLGRQIJDRJYOROMTQCIOQFCYKLDVSTULYFPSXJZAHHRGRPMXDCUPHAQUBRVCTACZAWMFHHWDYUHBMZXXZGKTQQZRNYGVYGIM");

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
    msg.setTimeStamp(0.9109183749241456);
    msg.setSource(35128U);
    msg.setSourceEntity(152U);
    msg.setDestination(41737U);
    msg.setDestinationEntity(128U);
    msg.groupname.assign("EDIZOQPHVJWVGVOWMSNSEKHOPQZYUETAICTPZMJUPERMHXLJGXZDRFNSFBBAFJCOWBZLOUIDLPIYQBKJMFZHNXVSKFIAGNAEFQHNFSQJZYAXBNFTCABRYTEEMAETAUYVRRRRHKOWMCDVAELXWNBOAGDMZNULNUUXJVYOYTVPMZMUPWPOGFTQKGJBFGZSUNMKIG");
    msg.action = 43U;
    msg.grouplist.assign("VFLAXCBNAGRSRBTDFPGOLJWBTPAQAQHNFSVKCFYNWZOWZSXCPETHINABBYZRDKEMTKYGVKXWECBMPSWIDIUULLSQDMRTTZNDGEVPBIXAQIHOBJWGXNQPMTTEJSMFUEVCIDGRUPRQOHPSC");

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
    msg.setTimeStamp(0.30368315813212676);
    msg.setSource(60529U);
    msg.setSourceEntity(186U);
    msg.setDestination(36544U);
    msg.setDestinationEntity(153U);
    msg.groupname.assign("IUYDKSSOCWXOYBSKCSZFYAATHJXMQRBHUWHSKGNWRADKWJGPVYCSAJEBQYUMPBMTHZZNFUHTNWDVNGIPGFEKAEBSYOIAYMLHGIMZDXIEALGPOKXOOI");
    msg.action = 49U;
    msg.grouplist.assign("VLJLTADLOAWKTNNPYHARGAQOAPHUVTBUTTNOX");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.07251865162621707);
    msg.setSource(55246U);
    msg.setSourceEntity(169U);
    msg.setDestination(46829U);
    msg.setDestinationEntity(182U);
    msg.id = 19U;
    msg.range = 0.5882460521607987;

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
    msg.setTimeStamp(0.728431258175978);
    msg.setSource(44572U);
    msg.setSourceEntity(116U);
    msg.setDestination(19331U);
    msg.setDestinationEntity(212U);
    msg.id = 41U;
    msg.range = 0.7400214401090441;

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
    msg.setTimeStamp(0.93922699938028);
    msg.setSource(45329U);
    msg.setSourceEntity(163U);
    msg.setDestination(58693U);
    msg.setDestinationEntity(1U);
    msg.id = 49U;
    msg.range = 0.4739175819575697;

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
    msg.setTimeStamp(0.2807092567448267);
    msg.setSource(51373U);
    msg.setSourceEntity(127U);
    msg.setDestination(35602U);
    msg.setDestinationEntity(9U);
    msg.beacon.assign("OUZFTOSMNTXFTUB");
    msg.lat = 0.990742729732207;
    msg.lon = 0.6283504540849432;
    msg.depth = 0.6562271807972501;
    msg.query_channel = 233U;
    msg.reply_channel = 170U;
    msg.transponder_delay = 79U;

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
    msg.setTimeStamp(0.7342576161361082);
    msg.setSource(58305U);
    msg.setSourceEntity(228U);
    msg.setDestination(53924U);
    msg.setDestinationEntity(90U);
    msg.beacon.assign("TJOQQDTJMTCRYQJABHSLFVAHLTDYPMPGCRFCKLKULSVETCUZVNXEMILIVYNEHGMDUVUDCGBJCTRHQQEWNFDYVNANNKICTLBZZCABGGOAFJUOUORJXYHIBNKHDTFYUDSIGBGPFKSXEOKRJOSXDJNIOVZFGRWFGTHSKZJDYRBKCSHOCYVPQTQAKUPOIWWVZNHOPXGIVRZAMXAWESQLLNBPSREPQXUFMEYEBBSZZPWJWME");
    msg.lat = 0.5925184431431169;
    msg.lon = 0.05748359061726871;
    msg.depth = 0.15090811672162285;
    msg.query_channel = 194U;
    msg.reply_channel = 2U;
    msg.transponder_delay = 47U;

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
    msg.setTimeStamp(0.7482274200449075);
    msg.setSource(37299U);
    msg.setSourceEntity(165U);
    msg.setDestination(37893U);
    msg.setDestinationEntity(1U);
    msg.beacon.assign("JXNHIWFJLTCHSNOJONOVHGWSWPXPCEIERLAJSFZUBLETOMCIDSHYQBRHPKFTGIENHHJEQPBCQOGULCZQXYKXBTPMZUBGVPADMZRODZKLRRZWUVAETGSBQFFRADVMTFWUYKGA");
    msg.lat = 0.6287154892509488;
    msg.lon = 0.6866063511673707;
    msg.depth = 0.7486131973350851;
    msg.query_channel = 101U;
    msg.reply_channel = 149U;
    msg.transponder_delay = 177U;

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
    msg.setTimeStamp(0.7956047277795807);
    msg.setSource(33474U);
    msg.setSourceEntity(92U);
    msg.setDestination(10039U);
    msg.setDestinationEntity(85U);
    msg.op = 52U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AUMWWXELLHLCFWHPSHIJHQAWSJRVRNXTRBKITTXDMZQXHCJCUVQYUYACMDLEGAZLULRYRKTRYGNUTAAEQGEQFBNBEZFYTPIPCXMUSKSONXXBIOPRWDJZSOVKKJWYWYIDPSKYQBFDWKKEVNLLTGGOAQUGTLVWEHZ");
    tmp_msg_0.lat = 0.9906069891267881;
    tmp_msg_0.lon = 0.6958258660235466;
    tmp_msg_0.depth = 0.5240028608051093;
    tmp_msg_0.query_channel = 59U;
    tmp_msg_0.reply_channel = 79U;
    tmp_msg_0.transponder_delay = 92U;
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
    msg.setTimeStamp(0.10490365635069732);
    msg.setSource(44078U);
    msg.setSourceEntity(155U);
    msg.setDestination(33370U);
    msg.setDestinationEntity(35U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.039547670454876394);
    msg.setSource(45206U);
    msg.setSourceEntity(189U);
    msg.setDestination(29489U);
    msg.setDestinationEntity(251U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.03899629618271949);
    msg.setSource(46034U);
    msg.setSourceEntity(233U);
    msg.setDestination(7099U);
    msg.setDestinationEntity(254U);
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("LZMSIHANWOTMQJEKZZAWPFFRPGHHTHKOJMQRGTSYUVQXZHDFGLTZXPBOBGWBMJJKXCRNSUYPFPOKPQGQTEFJDDUOHAUQVABEGTFCIOWDSPTLKREAFRIFZIKSVVIALCSKUDPYJJYJUMVHDCEGONKNRJBYVTWNYZQAPAVWISCXQEOIEAZSXRDBYQLVDMBOPCRJEMRCCMULXIMLFXGYNSX");
    tmp_msg_0.message_id = 42047U;
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
    msg.setTimeStamp(0.6968191740489201);
    msg.setSource(50857U);
    msg.setSourceEntity(8U);
    msg.setDestination(6100U);
    msg.setDestinationEntity(197U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8231256010889351;
    tmp_msg_0.speed_units = 231U;
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
    msg.setTimeStamp(0.23714547111975137);
    msg.setSource(5470U);
    msg.setSourceEntity(101U);
    msg.setDestination(63326U);
    msg.setDestinationEntity(65U);
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 39U;
    tmp_msg_0.time_remain = 0.7594921367398578;
    tmp_msg_0.sched_time = 0.19697288498510335;
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
    msg.setTimeStamp(0.8521146901108804);
    msg.setSource(24228U);
    msg.setSourceEntity(124U);
    msg.setDestination(39386U);
    msg.setDestinationEntity(166U);
    msg.op = 48U;
    msg.system.assign("BDYMUHUEWFPOENSFLGCJJSCOOITLYVD");
    msg.range = 0.6176113246230732;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 169U;
    tmp_msg_0.frequency = 3682640914U;
    tmp_msg_0.min_range = 38554U;
    tmp_msg_0.max_range = 25847U;
    tmp_msg_0.bits_per_point = 179U;
    tmp_msg_0.scale_factor = 0.11703280381327918;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.6870462425743953;
    tmp_tmp_msg_0_0.beam_height = 0.7673650125461524;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const char tmp_tmp_msg_0_1[] = {9, -99, 96, -123, 69, 86, -22, 16, 33, -38, -54, -59, 110, -86, 24, 31, 98, 26, -72, -82, 65, -63, 85, 50, 67, 20, -80, -118, -51, 80, -51, -32, 67, -124, 109, -56, -7, 9, 2, 107, -36, -125, -35, 108, 88, -14, 78, 32, 24, 111, 69, -106, 126, 39, 90, 17, -15, -38, 115, -112, 39, 10, 10, 67, -40, -15, 93, -124, 89, 95, -32, 27, 119, 119, -105, -81, -100, -110, 51, 83, 38, -80, -22, -90, -48, 47, -68, 61, -80, -31, -113, -110, -114, 53, -109, -23, -109, -67, -41, -28, 33, 11, -69, -14, -118, 20, -71, -5, 2, 4, -99, 23, -44, -61, -99, -3, 41, 126, -101, -47, 111, -7, 46, -79, -68, -70, 45, -56, -30, 88, -24, -51, -49, 39, 35, -25, 5, 18, -26, -87, 63, -116, 97, 110, 71, -120, 116, -57, 49, 125, 70, 42, 40, 17, 16, 14, 11, 2, -36, -116, -99, -120, 24, 54, -58, -27, -97, -104, 25, 70, -18, 37, 89, 99, 38, 111, -123, 19, -114, -8, -46, -66, -94, -36, 31, 37, -118, -5, -45, 46, -70, 113, 27, 117, 44, 38, -124, -83, -74, 93, 105, -13, -104, -93, 5, 71, 47, -76, 44, 102, 27, -104, 69, 94};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.9735840372031356);
    msg.setSource(41697U);
    msg.setSourceEntity(42U);
    msg.setDestination(60049U);
    msg.setDestinationEntity(23U);
    msg.op = 134U;
    msg.system.assign("ZWPGHLGRKFBZMPKAKEXHUAOXCZZTQONQZPDTRDNSUWVSLXCJWPADDAJYTSZNOSFMMGRXUSQMFLYBTPBXGIORJPAUUSETLQIKYEVLHTJWYHWIDIDGLRACHJJVVFGLHCVKKRINBCKNUHQEFVXYOGVALJPBKUHLWTMYXAFBTIC");
    msg.range = 0.17662129043641117;
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.7665355242580039);
    msg.setSource(53825U);
    msg.setSourceEntity(184U);
    msg.setDestination(26923U);
    msg.setDestinationEntity(72U);
    msg.op = 114U;
    msg.system.assign("AQFUXDZCTKXDYHYOHNIFMLEPJKRJPBUBRQHJGFJMMTXYBHCFEGKTBZMRGDPRYYAJSVJSKQTZXPFSXWRIVOWKOQ");
    msg.range = 0.963170574547518;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.23909884079631794;
    tmp_msg_0.lon = 0.6974537385941356;
    tmp_msg_0.depth = 21U;
    tmp_msg_0.speed = 0.9984073447104578;
    tmp_msg_0.psi = 0.1362274537749556;
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
    msg.setTimeStamp(0.15571405496378554);
    msg.setSource(53224U);
    msg.setSourceEntity(177U);
    msg.setDestination(65158U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.5253300264934806);
    msg.setSource(44407U);
    msg.setSourceEntity(161U);
    msg.setDestination(22133U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.8329836396297504);
    msg.setSource(33474U);
    msg.setSourceEntity(208U);
    msg.setDestination(45542U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.987602155136055);
    msg.setSource(47648U);
    msg.setSourceEntity(186U);
    msg.setDestination(40815U);
    msg.setDestinationEntity(218U);
    msg.list.assign("DIWHBMNHGITUKPZVDMPZYLXNXCVBNRCQDJAQRCBLKQMPEBLASIJYJRZWOHUSHTROZTQXYMMQZSIAIIPHADRYVMRCYQGFPVUJNRJDOLWKCWLVJTTFYWINXNPAOSBXQBKLJOHNLQAZGMTBKMBTKSWQUNZFEWTUFAODKFFTVEPTECGXJMOKFVHDXSDKPM");

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
    msg.setTimeStamp(0.6141315335082506);
    msg.setSource(13695U);
    msg.setSourceEntity(209U);
    msg.setDestination(243U);
    msg.setDestinationEntity(84U);
    msg.list.assign("FGVFFCPPXDEBDEVCNZDLCGVRQPCOYKKMGDLXAHLDCEODQARYMWFTHDJMDPMSTBVEMAXRFIQTQOMKATUHKPNAPEPWGHLMCQKWJRVVRHUSWSOLXOYIWZXQXUOFGIUGOGHWLIAWQLOIEGZNHNZVBBUJESSITFBSJLPEKNU");

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
    msg.setTimeStamp(0.7086181418903665);
    msg.setSource(35684U);
    msg.setSourceEntity(191U);
    msg.setDestination(14395U);
    msg.setDestinationEntity(142U);
    msg.list.assign("PPGJMSRJTWSEWCGHULJXDRYBLQYBSQZQMVOLDLVRKPWIUSXH");

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.38161437478064764);
    msg.setSource(23010U);
    msg.setSourceEntity(153U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(41U);
    msg.value = -23458;

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
    msg.setTimeStamp(0.08167775495505125);
    msg.setSource(39998U);
    msg.setSourceEntity(58U);
    msg.setDestination(29707U);
    msg.setDestinationEntity(5U);
    msg.value = 6865;

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
    msg.setTimeStamp(0.4063905575294213);
    msg.setSource(58093U);
    msg.setSourceEntity(183U);
    msg.setDestination(7450U);
    msg.setDestinationEntity(152U);
    msg.value = 13488;

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
    msg.setTimeStamp(0.09517589186047404);
    msg.setSource(16636U);
    msg.setSourceEntity(176U);
    msg.setDestination(32516U);
    msg.setDestinationEntity(175U);
    msg.value = 0.802117536496666;

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
    msg.setTimeStamp(0.3035174832948425);
    msg.setSource(21213U);
    msg.setSourceEntity(252U);
    msg.setDestination(63048U);
    msg.setDestinationEntity(52U);
    msg.value = 0.300413826428535;

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
    msg.setTimeStamp(0.5143178741064741);
    msg.setSource(60303U);
    msg.setSourceEntity(140U);
    msg.setDestination(15694U);
    msg.setDestinationEntity(117U);
    msg.value = 0.14596524239862774;

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
    msg.setTimeStamp(0.4770612710428347);
    msg.setSource(42216U);
    msg.setSourceEntity(207U);
    msg.setDestination(48276U);
    msg.setDestinationEntity(79U);
    msg.value = 0.0576396607466122;

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
    msg.setTimeStamp(0.1951614913717875);
    msg.setSource(40569U);
    msg.setSourceEntity(159U);
    msg.setDestination(63794U);
    msg.setDestinationEntity(118U);
    msg.value = 0.3247259791191007;

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
    msg.setTimeStamp(0.3087225225258997);
    msg.setSource(22090U);
    msg.setSourceEntity(97U);
    msg.setDestination(15900U);
    msg.setDestinationEntity(82U);
    msg.value = 0.12807918155000175;

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
    msg.setTimeStamp(0.6822852362763153);
    msg.setSource(2065U);
    msg.setSourceEntity(65U);
    msg.setDestination(37632U);
    msg.setDestinationEntity(26U);
    msg.validity = 21709U;
    msg.type = 88U;
    msg.utc_year = 19903U;
    msg.utc_month = 152U;
    msg.utc_day = 59U;
    msg.utc_time = 0.8749573556063552;
    msg.lat = 0.11765007253159177;
    msg.lon = 0.9177697101542713;
    msg.height = 0.15815237214336964;
    msg.satellites = 217U;
    msg.cog = 0.49016868850446216;
    msg.sog = 0.995574862884434;
    msg.hdop = 0.686839260490136;
    msg.vdop = 0.308722156723215;
    msg.hacc = 0.2124532729620896;
    msg.vacc = 0.6981413063596427;

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
    msg.setTimeStamp(0.8037196566634704);
    msg.setSource(50248U);
    msg.setSourceEntity(31U);
    msg.setDestination(14395U);
    msg.setDestinationEntity(58U);
    msg.validity = 39532U;
    msg.type = 135U;
    msg.utc_year = 42169U;
    msg.utc_month = 154U;
    msg.utc_day = 242U;
    msg.utc_time = 0.7273947962073367;
    msg.lat = 0.4829475054962318;
    msg.lon = 0.3738547411400065;
    msg.height = 0.2748957573520573;
    msg.satellites = 195U;
    msg.cog = 0.5830608293956752;
    msg.sog = 0.0632531729615734;
    msg.hdop = 0.5882355722076026;
    msg.vdop = 0.6655816099169725;
    msg.hacc = 0.1754973271246021;
    msg.vacc = 0.9524722608721659;

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
    msg.setTimeStamp(0.9187413738266941);
    msg.setSource(21555U);
    msg.setSourceEntity(87U);
    msg.setDestination(63162U);
    msg.setDestinationEntity(113U);
    msg.validity = 18334U;
    msg.type = 144U;
    msg.utc_year = 15103U;
    msg.utc_month = 252U;
    msg.utc_day = 87U;
    msg.utc_time = 0.735651012685507;
    msg.lat = 0.2317195526501965;
    msg.lon = 0.8363580815574814;
    msg.height = 0.5749405274318375;
    msg.satellites = 158U;
    msg.cog = 0.7147876237151468;
    msg.sog = 0.6035901100939521;
    msg.hdop = 0.3876121415077809;
    msg.vdop = 0.23031818698158135;
    msg.hacc = 0.735938140906885;
    msg.vacc = 0.6474771811681815;

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
    msg.setTimeStamp(0.18516323006343738);
    msg.setSource(48463U);
    msg.setSourceEntity(62U);
    msg.setDestination(56957U);
    msg.setDestinationEntity(229U);
    msg.time = 0.5492001191334425;
    msg.phi = 0.5058960074322176;
    msg.theta = 0.18769543765563268;
    msg.psi = 0.920993067896726;
    msg.psi_magnetic = 0.34453292226126797;

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
    msg.setTimeStamp(0.6462694019700376);
    msg.setSource(33145U);
    msg.setSourceEntity(127U);
    msg.setDestination(4574U);
    msg.setDestinationEntity(158U);
    msg.time = 0.10848223532243884;
    msg.phi = 0.8049883544167991;
    msg.theta = 0.3559553863172161;
    msg.psi = 0.06477415471056835;
    msg.psi_magnetic = 0.30588402669345793;

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
    msg.setTimeStamp(0.5792182991946916);
    msg.setSource(21190U);
    msg.setSourceEntity(243U);
    msg.setDestination(41325U);
    msg.setDestinationEntity(62U);
    msg.time = 0.18407989323323637;
    msg.phi = 0.395570919378612;
    msg.theta = 0.39278683334140885;
    msg.psi = 0.3593520026198692;
    msg.psi_magnetic = 0.5395320897432865;

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
    msg.setTimeStamp(0.761347192032413);
    msg.setSource(16495U);
    msg.setSourceEntity(30U);
    msg.setDestination(35598U);
    msg.setDestinationEntity(28U);
    msg.time = 0.6355806864780834;
    msg.x = 0.26488297455558885;
    msg.y = 0.6055829387502426;
    msg.z = 0.248020964719171;
    msg.timestep = 0.4594971604585619;

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
    msg.setTimeStamp(0.22833047983976096);
    msg.setSource(56981U);
    msg.setSourceEntity(170U);
    msg.setDestination(64615U);
    msg.setDestinationEntity(131U);
    msg.time = 0.3041499381492604;
    msg.x = 0.8647401248804745;
    msg.y = 0.61542020365118;
    msg.z = 0.5182662225698079;
    msg.timestep = 0.7132883430888424;

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
    msg.setTimeStamp(0.4998136287514312);
    msg.setSource(49441U);
    msg.setSourceEntity(72U);
    msg.setDestination(56469U);
    msg.setDestinationEntity(228U);
    msg.time = 0.2985926215541026;
    msg.x = 0.18249754051592082;
    msg.y = 0.866851765199286;
    msg.z = 0.8518894893527522;
    msg.timestep = 0.9039790485275215;

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
    msg.setTimeStamp(0.8067897877771343);
    msg.setSource(48567U);
    msg.setSourceEntity(220U);
    msg.setDestination(62223U);
    msg.setDestinationEntity(237U);
    msg.time = 0.9346342459095923;
    msg.x = 0.4275926526699154;
    msg.y = 0.7425829938402273;
    msg.z = 0.6660308081160484;

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
    msg.setTimeStamp(0.3558066641660934);
    msg.setSource(41144U);
    msg.setSourceEntity(86U);
    msg.setDestination(34703U);
    msg.setDestinationEntity(217U);
    msg.time = 0.4773550053986231;
    msg.x = 0.8924372677464688;
    msg.y = 0.45191366870555294;
    msg.z = 0.12658459047116555;

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
    msg.setTimeStamp(0.6477686158472279);
    msg.setSource(10319U);
    msg.setSourceEntity(13U);
    msg.setDestination(30659U);
    msg.setDestinationEntity(227U);
    msg.time = 0.9704225739773706;
    msg.x = 0.5977369515622206;
    msg.y = 0.3490804627556965;
    msg.z = 0.49009432522911967;

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
    msg.setTimeStamp(0.4311559082835764);
    msg.setSource(61498U);
    msg.setSourceEntity(36U);
    msg.setDestination(13645U);
    msg.setDestinationEntity(250U);
    msg.time = 0.6751980017744105;
    msg.x = 0.7098637996904359;
    msg.y = 0.3669385333596651;
    msg.z = 0.8858781976165776;

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
    msg.setTimeStamp(0.5481544095861984);
    msg.setSource(33265U);
    msg.setSourceEntity(175U);
    msg.setDestination(52026U);
    msg.setDestinationEntity(226U);
    msg.time = 0.2374440309114635;
    msg.x = 0.7236158125270609;
    msg.y = 0.22568178810076867;
    msg.z = 0.737800931316591;

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
    msg.setTimeStamp(0.3486186975330434);
    msg.setSource(38575U);
    msg.setSourceEntity(166U);
    msg.setDestination(13561U);
    msg.setDestinationEntity(146U);
    msg.time = 0.6097339521509691;
    msg.x = 0.5150064358198256;
    msg.y = 0.12772576815944503;
    msg.z = 0.2357210315453503;

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
    msg.setTimeStamp(0.6961628368930122);
    msg.setSource(55178U);
    msg.setSourceEntity(100U);
    msg.setDestination(55810U);
    msg.setDestinationEntity(158U);
    msg.time = 0.6791109688831588;
    msg.x = 0.07611296409085577;
    msg.y = 0.7187114127308822;
    msg.z = 0.40856328531437824;

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
    msg.setTimeStamp(0.8770716876239707);
    msg.setSource(58141U);
    msg.setSourceEntity(230U);
    msg.setDestination(60324U);
    msg.setDestinationEntity(81U);
    msg.time = 0.681867633787945;
    msg.x = 0.18213651243684248;
    msg.y = 0.2533957650447568;
    msg.z = 0.4180308052395709;

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
    msg.setTimeStamp(0.4003061786149106);
    msg.setSource(32287U);
    msg.setSourceEntity(230U);
    msg.setDestination(55400U);
    msg.setDestinationEntity(71U);
    msg.time = 0.06914563685115815;
    msg.x = 0.45988737946937475;
    msg.y = 0.39909971662273513;
    msg.z = 0.510234135153731;

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
    msg.setTimeStamp(0.8284505387708053);
    msg.setSource(59308U);
    msg.setSourceEntity(211U);
    msg.setDestination(49470U);
    msg.setDestinationEntity(1U);
    msg.validity = 6U;
    msg.x = 0.43995108101599856;
    msg.y = 0.5727719501292983;
    msg.z = 0.1293454096905886;

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
    msg.setTimeStamp(0.5483583329786159);
    msg.setSource(31257U);
    msg.setSourceEntity(7U);
    msg.setDestination(42921U);
    msg.setDestinationEntity(128U);
    msg.validity = 23U;
    msg.x = 0.5201238674724417;
    msg.y = 0.49867948621651625;
    msg.z = 0.3817490543086087;

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
    msg.setTimeStamp(0.9621143492569358);
    msg.setSource(12101U);
    msg.setSourceEntity(70U);
    msg.setDestination(53207U);
    msg.setDestinationEntity(154U);
    msg.validity = 214U;
    msg.x = 0.9179495479410656;
    msg.y = 0.4218131499787853;
    msg.z = 0.25980977131768723;

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
    msg.setTimeStamp(0.5990231835460366);
    msg.setSource(19690U);
    msg.setSourceEntity(159U);
    msg.setDestination(9802U);
    msg.setDestinationEntity(97U);
    msg.validity = 89U;
    msg.x = 0.8304733231162547;
    msg.y = 0.4975163602176149;
    msg.z = 0.36204019187959546;

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
    msg.setTimeStamp(0.24423723673265252);
    msg.setSource(10851U);
    msg.setSourceEntity(21U);
    msg.setDestination(56248U);
    msg.setDestinationEntity(204U);
    msg.validity = 48U;
    msg.x = 0.6027245806274194;
    msg.y = 0.6493575175794816;
    msg.z = 0.05382874589684372;

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
    msg.setTimeStamp(0.040022269195292615);
    msg.setSource(8657U);
    msg.setSourceEntity(17U);
    msg.setDestination(4130U);
    msg.setDestinationEntity(57U);
    msg.validity = 249U;
    msg.x = 0.17496660452191015;
    msg.y = 0.5292468254045669;
    msg.z = 0.2988155169565707;

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
    msg.setTimeStamp(0.3951997644278108);
    msg.setSource(30497U);
    msg.setSourceEntity(222U);
    msg.setDestination(23686U);
    msg.setDestinationEntity(80U);
    msg.time = 0.7261499534321044;
    msg.x = 0.02840658107190952;
    msg.y = 0.17401580923717308;
    msg.z = 0.791661896277327;

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
    msg.setTimeStamp(0.6644167418755228);
    msg.setSource(31946U);
    msg.setSourceEntity(102U);
    msg.setDestination(59581U);
    msg.setDestinationEntity(49U);
    msg.time = 0.7329487535603584;
    msg.x = 0.944196873410295;
    msg.y = 0.3358860083816957;
    msg.z = 0.5512752462183675;

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
    msg.setTimeStamp(0.5248972497424075);
    msg.setSource(19856U);
    msg.setSourceEntity(239U);
    msg.setDestination(7394U);
    msg.setDestinationEntity(83U);
    msg.time = 0.04575860841437862;
    msg.x = 0.20245394964710317;
    msg.y = 0.8442815064542503;
    msg.z = 0.7286470123236648;

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
    msg.setTimeStamp(0.6114343830317029);
    msg.setSource(33258U);
    msg.setSourceEntity(160U);
    msg.setDestination(53349U);
    msg.setDestinationEntity(136U);
    msg.validity = 240U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.23602577178229078;
    tmp_msg_0.y = 0.6372049575167729;
    tmp_msg_0.z = 0.5304404989706882;
    tmp_msg_0.phi = 0.169545224576377;
    tmp_msg_0.theta = 0.6695839463345911;
    tmp_msg_0.psi = 0.4797026863403102;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.3750265994461812;
    tmp_msg_1.beam_height = 0.836497370962881;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.4789344796113635;

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
    msg.setTimeStamp(0.696630401026335);
    msg.setSource(22794U);
    msg.setSourceEntity(155U);
    msg.setDestination(45035U);
    msg.setDestinationEntity(20U);
    msg.validity = 19U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.864678471083436;
    tmp_msg_0.beam_height = 0.9352311898771017;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.575039947891307;

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
    msg.setTimeStamp(0.017976193911410143);
    msg.setSource(30472U);
    msg.setSourceEntity(27U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(16U);
    msg.validity = 218U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.1897856793059729;
    tmp_msg_0.y = 0.7844610641558002;
    tmp_msg_0.z = 0.183490896105296;
    tmp_msg_0.phi = 0.6470622817758467;
    tmp_msg_0.theta = 0.26661231959668175;
    tmp_msg_0.psi = 0.439545926667516;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.6566789389192477;
    tmp_msg_1.beam_height = 0.5687811657245668;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5394470810891713;

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
    msg.setTimeStamp(0.8094903595938814);
    msg.setSource(8010U);
    msg.setSourceEntity(226U);
    msg.setDestination(4654U);
    msg.setDestinationEntity(101U);
    msg.value = 0.3503950712196895;

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
    msg.setTimeStamp(0.5240608270111868);
    msg.setSource(42902U);
    msg.setSourceEntity(74U);
    msg.setDestination(17287U);
    msg.setDestinationEntity(94U);
    msg.value = 0.8247458055284841;

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
    msg.setTimeStamp(0.6994829177483058);
    msg.setSource(5448U);
    msg.setSourceEntity(124U);
    msg.setDestination(36243U);
    msg.setDestinationEntity(235U);
    msg.value = 0.06452238091488605;

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
    msg.setTimeStamp(0.44675634985064205);
    msg.setSource(20448U);
    msg.setSourceEntity(171U);
    msg.setDestination(57184U);
    msg.setDestinationEntity(125U);
    msg.value = 0.11601807739901915;

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
    msg.setTimeStamp(0.8335942861276607);
    msg.setSource(56002U);
    msg.setSourceEntity(138U);
    msg.setDestination(37831U);
    msg.setDestinationEntity(105U);
    msg.value = 0.06861977694396726;

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
    msg.setTimeStamp(0.186026826406275);
    msg.setSource(1024U);
    msg.setSourceEntity(122U);
    msg.setDestination(38806U);
    msg.setDestinationEntity(224U);
    msg.value = 0.7272043612907284;

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
    msg.setTimeStamp(0.7354248294514579);
    msg.setSource(6845U);
    msg.setSourceEntity(91U);
    msg.setDestination(1056U);
    msg.setDestinationEntity(128U);
    msg.value = 0.9816982046923307;

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
    msg.setTimeStamp(0.5214236396563159);
    msg.setSource(62114U);
    msg.setSourceEntity(208U);
    msg.setDestination(37675U);
    msg.setDestinationEntity(108U);
    msg.value = 0.4205433907598993;

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
    msg.setTimeStamp(0.9766549475656249);
    msg.setSource(6607U);
    msg.setSourceEntity(109U);
    msg.setDestination(58798U);
    msg.setDestinationEntity(13U);
    msg.value = 0.9147067453279174;

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
    msg.setTimeStamp(0.67182422490361);
    msg.setSource(14002U);
    msg.setSourceEntity(210U);
    msg.setDestination(26630U);
    msg.setDestinationEntity(56U);
    msg.value = 0.16119503233549104;

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
    msg.setTimeStamp(0.8885508046463073);
    msg.setSource(23237U);
    msg.setSourceEntity(158U);
    msg.setDestination(44173U);
    msg.setDestinationEntity(146U);
    msg.value = 0.9930113184760294;

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
    msg.setTimeStamp(0.38110141940569664);
    msg.setSource(3256U);
    msg.setSourceEntity(52U);
    msg.setDestination(39064U);
    msg.setDestinationEntity(94U);
    msg.value = 0.05264450729895598;

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
    msg.setTimeStamp(0.35978109798322366);
    msg.setSource(62874U);
    msg.setSourceEntity(235U);
    msg.setDestination(15161U);
    msg.setDestinationEntity(84U);
    msg.value = 0.48065498761435455;

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
    msg.setTimeStamp(0.40441132603741503);
    msg.setSource(9056U);
    msg.setSourceEntity(218U);
    msg.setDestination(52431U);
    msg.setDestinationEntity(148U);
    msg.value = 0.09589606848787258;

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
    msg.setTimeStamp(0.8363214101627493);
    msg.setSource(35214U);
    msg.setSourceEntity(191U);
    msg.setDestination(24034U);
    msg.setDestinationEntity(86U);
    msg.value = 0.18290106065740375;

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
    msg.setTimeStamp(0.4995450772880965);
    msg.setSource(49313U);
    msg.setSourceEntity(246U);
    msg.setDestination(27752U);
    msg.setDestinationEntity(176U);
    msg.value = 0.38485159039540273;

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
    msg.setTimeStamp(0.08944741447982185);
    msg.setSource(36198U);
    msg.setSourceEntity(129U);
    msg.setDestination(48771U);
    msg.setDestinationEntity(156U);
    msg.value = 0.11952170350311642;

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
    msg.setTimeStamp(0.3361394928723074);
    msg.setSource(14414U);
    msg.setSourceEntity(36U);
    msg.setDestination(52970U);
    msg.setDestinationEntity(157U);
    msg.value = 0.001269235982320982;

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
    msg.setTimeStamp(0.4062973741742847);
    msg.setSource(36177U);
    msg.setSourceEntity(156U);
    msg.setDestination(412U);
    msg.setDestinationEntity(131U);
    msg.value = 0.4530040697281438;

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
    msg.setTimeStamp(0.9512124424533595);
    msg.setSource(49236U);
    msg.setSourceEntity(104U);
    msg.setDestination(27665U);
    msg.setDestinationEntity(223U);
    msg.value = 0.43882993648059865;

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
    msg.setTimeStamp(0.6513283459922733);
    msg.setSource(52137U);
    msg.setSourceEntity(192U);
    msg.setDestination(5833U);
    msg.setDestinationEntity(211U);
    msg.value = 0.06962488956662793;

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
    msg.setTimeStamp(0.8966467229522553);
    msg.setSource(12665U);
    msg.setSourceEntity(67U);
    msg.setDestination(51265U);
    msg.setDestinationEntity(250U);
    msg.value = 0.4233338956833529;

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
    msg.setTimeStamp(0.9999658778342201);
    msg.setSource(42547U);
    msg.setSourceEntity(5U);
    msg.setDestination(36111U);
    msg.setDestinationEntity(246U);
    msg.value = 0.46357582760389615;

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
    msg.setTimeStamp(0.48525872115934554);
    msg.setSource(7192U);
    msg.setSourceEntity(75U);
    msg.setDestination(42941U);
    msg.setDestinationEntity(136U);
    msg.value = 0.15536578511503896;

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
    msg.setTimeStamp(0.9109854851186614);
    msg.setSource(62723U);
    msg.setSourceEntity(120U);
    msg.setDestination(28339U);
    msg.setDestinationEntity(124U);
    msg.direction = 0.4571290830940228;
    msg.speed = 0.08597451848452176;
    msg.turbulence = 0.5740444020067035;

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
    msg.setTimeStamp(0.5638517812399466);
    msg.setSource(11811U);
    msg.setSourceEntity(38U);
    msg.setDestination(28150U);
    msg.setDestinationEntity(221U);
    msg.direction = 0.8841367870465203;
    msg.speed = 0.3454883288992324;
    msg.turbulence = 0.14172315696724413;

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
    msg.setTimeStamp(0.23777100716447497);
    msg.setSource(11130U);
    msg.setSourceEntity(237U);
    msg.setDestination(26806U);
    msg.setDestinationEntity(251U);
    msg.direction = 0.011776959092268169;
    msg.speed = 0.4010507542796212;
    msg.turbulence = 0.5783317095382419;

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
    msg.setTimeStamp(0.2116362271681691);
    msg.setSource(56321U);
    msg.setSourceEntity(4U);
    msg.setDestination(8074U);
    msg.setDestinationEntity(179U);
    msg.value = 0.9143787002047297;

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
    msg.setTimeStamp(0.539611190318431);
    msg.setSource(35620U);
    msg.setSourceEntity(252U);
    msg.setDestination(37880U);
    msg.setDestinationEntity(143U);
    msg.value = 0.9906567643003316;

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
    msg.setTimeStamp(0.9064110659611141);
    msg.setSource(56347U);
    msg.setSourceEntity(74U);
    msg.setDestination(15480U);
    msg.setDestinationEntity(1U);
    msg.value = 0.11232189815338389;

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
    msg.setTimeStamp(0.4115594183716632);
    msg.setSource(12187U);
    msg.setSourceEntity(1U);
    msg.setDestination(49302U);
    msg.setDestinationEntity(62U);
    msg.value.assign("VOQZDLSZETOSLQKHQOIXWLBCPRNFBKLONQVWPFANMWUDKNUHLONXIFVBQGVEUUGLNYXSITMWIDBEDDNIHBETBXADGAICPSRXWECAZMIAQBKPHSMZBDKVUYOCCUZXSMCJGJQGVHUOFFUYTINAR");

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
    msg.setTimeStamp(0.8141989016700519);
    msg.setSource(65159U);
    msg.setSourceEntity(31U);
    msg.setDestination(23249U);
    msg.setDestinationEntity(46U);
    msg.value.assign("FGUPGDIQPGEHOBPSVDFTCRHYFTNUUAIRLAFRUPKXMZLUREDOQZCNGEKYPVTFQZYJVXVFMSDHARCBOMIXXHJXBGWNLNJVEPPVWHJVDGKALEBBLGJKAKOLVVETQNNOEYPWXQCNYRUTMISBZIBMMZCSS");

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
    msg.setTimeStamp(0.21734489468584417);
    msg.setSource(6415U);
    msg.setSourceEntity(168U);
    msg.setDestination(33947U);
    msg.setDestinationEntity(207U);
    msg.value.assign("OTBOYOBNGRZMXAUDOQHZRJYOASNLVGOUFTEYXQIWIUGQQWWHUNDIOPQZFWCXUK");

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
    msg.setTimeStamp(0.0975314975830921);
    msg.setSource(60464U);
    msg.setSourceEntity(105U);
    msg.setDestination(63292U);
    msg.setDestinationEntity(225U);
    const char tmp_msg_0[] = {108, -43, -2, -23, 33, -53, -102, 76, -54, -102, 3, -58, 7, 120, 54, -94, 80, -69, 119, 79, 35, 101, 76, 110, -51, -46, 90, -90, -12, -71, 62, 81, 5, -82, 63, 96, 57, 68, 116, -118, 15, 47, -31, 64, -118, -61, -61, -111, 25, 11, 63, 68, 61, 46, -68, -122, -71, 30, -14, -72, -92, 40, -119, -105, -6, 105, -97, -7, -127, -65, 14, -48, -124, 118, -22, 96, -18, -37, -10, -34, -84, 38, 47, 52, 5, 15, 14, 119, 50, -84, -15, 99, 5, -119, 78, -105, 122, -115, -59, 113, 4, 37, -34, -75, -62, -112, -49, 50};
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
    msg.setTimeStamp(0.2558442681024158);
    msg.setSource(5239U);
    msg.setSourceEntity(238U);
    msg.setDestination(9602U);
    msg.setDestinationEntity(83U);
    const char tmp_msg_0[] = {-56, 105, 73, 63, 96, 121, -70, -6, 110, 28};
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
    msg.setTimeStamp(0.4313556004595094);
    msg.setSource(43139U);
    msg.setSourceEntity(18U);
    msg.setDestination(48919U);
    msg.setDestinationEntity(128U);
    const char tmp_msg_0[] = {20, -91, 59, 33, -45, -29, -15, -11, -42, -104, 41, 122, 101, 117, -61, -103, 1, 32, -28, -100, -116, 121, 8, -20, -25, -82, -104, -89, -54, 10, 28, 21, -79, 8, -90, -48, 90, 119, 31, 119, -79, -5, -77, -95, -4, 78, 0, -65, -11, -38, 79, 17, 60, 94, 10, -106, 116, 89, -23, 17, 107, -28, -9, 31, 66, -35, 124, 8, -50, 2, -7, 113, -111, 49, -123, -120, 38, -126, 74, 76, 67, 4, 102, 75, -50, 42, -78, -127, -106, -34, 24, 118, -34, 101, -113, -22, 1, -126, -69, -123, 98, 24, -21, 114, 121, 114, -112, 104, 6, -125, -118, -108, -106, 64, 19, 82, 86, -40, -60, 116, 114, 72, -67, -78, -69, -49, -40, -106, -106, -1, 42, -36, 43, 82, 26, -83, -99, 88, 49, -128, -35, 8, -60, -107, -68, 36, -62, -13, -83, -118, -108, -63, -68, 48, 93, -100, 108, 45, 52, 14, 112, -78, 75, -26, 5, -1, -50, 14, 103, 19, 89, -18, -53, 51, -43, -2, -100, -64, -65, 71, 73, -64, -108, -82, -85, -91, 1, -110, -48, 10, 112, 60, -44, 26, 120, 38, -125, -84, 4, -93, 92, -27, -110, 19, -2, -19, 99, -81};
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
    msg.setTimeStamp(0.3775308110538068);
    msg.setSource(62369U);
    msg.setSourceEntity(153U);
    msg.setDestination(5966U);
    msg.setDestinationEntity(14U);
    msg.type = 95U;
    msg.frequency = 3719731641U;
    msg.min_range = 38496U;
    msg.max_range = 35920U;
    msg.bits_per_point = 226U;
    msg.scale_factor = 0.2856957636180749;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.008634335650304581;
    tmp_msg_0.beam_height = 0.4604163213710841;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {14, 22, -24, 105, 64, -43, 44, 40, -26, 83, 31, -12, 21, 101, 14, 24, 32, 114, -78, -105, 97, 21, 68, 31, -98, -50, -27, 59, 42, -12, 72, 7, 6, 51, 53, -47, -86, 74, 114, -81, 105, 30, 88, 63, -128, -126, -76, -53, 56, 29, -93, 82, -77, -43, -118, -86, 76, 115, 108, -25, -42, 41, 82, -110, -97, 21, -91, 69, 100, 1, 112, 10, -128, 12, -15, -89, -38, -2, -128, -83, 22, 107, -41, 33, -123, 13, 80, 43, 13, -59, -39, 14, 77, 51, -39, -81, -24, -5, 109, 33, 67, -67, 83, -51, -70, 92, 65, -97, -115, -110, -125, -64, 87, 123, 33, -118, -44, -1, -26, 88, 60, -123, -35, -53, 104, 57, -19, 106, -114, -23, 103, 40, -52, 124, 72, -22, 123, -119, 112, -28, 86, -109, 56, 10, -56, -32, -84, -90};
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
    msg.setTimeStamp(0.08007287607022029);
    msg.setSource(11807U);
    msg.setSourceEntity(253U);
    msg.setDestination(21350U);
    msg.setDestinationEntity(171U);
    msg.type = 170U;
    msg.frequency = 167040550U;
    msg.min_range = 42630U;
    msg.max_range = 61315U;
    msg.bits_per_point = 169U;
    msg.scale_factor = 0.16984151393313496;
    const char tmp_msg_0[] = {-89, -125, -128, 97, -119, 108, 27, 66, -55, 42, 9, -119, -79, 54, -79, 89, 38, 74, 35, 31, -118, -102, -70, 86, 12, -6, 53, 6, -114, 70, -13, 86, -100, 47, 35, 93, 21, -83, 41, -95, 105, -14, -121, -75, -108, 30, -112, -29, 92, 12, -5, -124, -28, 81, -47, -105, -15, -107, -10, 126, -37, -12, 35, 52, 2, -21, -84, 65, 56, 110, 7, 5, -32, 57, 21, -55, 42, -60, -15, 126, -73, -108, 47, -2, 1, 76, 1, -28, -24, -66, 93, 107, -111, 40, -43, -76, 9, 54, -88, -71, -34, -1, -75, 43, -69, -92, 9, 39, 33, -95, -120, -83, -116, 29, -22, -75, 118, -5, -78, -48, 7, 15, -123, 85, 97, -58, -21, 113, 101, 30, 53, 94, 37, 1, 63, -86, 13, -96, 36, -91, -36, 24, 26, 4, 31, -103, 6, 3, 86, -3, -95, -61, -65, -116, -1, 1, 78, 35, -108, -127, 60, -116, 125, -64, -1, -104, 31, 37, 45, -7, 82, 3, 80, -94, -81, -124, 55, -44, -75, -34, -60, -114, 108, -124, -31, 85, 6, -114, 65, -35, 115, 32};
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
    msg.setTimeStamp(0.14093960354676516);
    msg.setSource(57830U);
    msg.setSourceEntity(99U);
    msg.setDestination(62200U);
    msg.setDestinationEntity(195U);
    msg.type = 126U;
    msg.frequency = 3875545872U;
    msg.min_range = 1914U;
    msg.max_range = 33746U;
    msg.bits_per_point = 237U;
    msg.scale_factor = 0.8294587409909137;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7440161678962341;
    tmp_msg_0.beam_height = 0.04990502876266367;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {80, 21, -6, 95, 76, 12, -97, 0, 35, 16, -23, 98, -35, -39, -57, 30, -33, -120, -81, -42, 121, -6, 109, -70, 125, -58, -60, -3, -103, 2, -97, 67, 11, 125, 0, -11, -91, 69, 92, 90, 121, -97, 107, 102, 44, 33, -70, 59, -77, -72, -99, -76, -89, -11, 42, 93, 44, 47, 67, 30, -31, -126, -35, -32, 48, 17, 60, 42, -2, 120, 13, -56, 15, -122, 65, 102};
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
    msg.setTimeStamp(0.039735315891776035);
    msg.setSource(21043U);
    msg.setSourceEntity(202U);
    msg.setDestination(36968U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.05963060731517966);
    msg.setSource(60214U);
    msg.setSourceEntity(140U);
    msg.setDestination(20343U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.9261149512955467);
    msg.setSource(39217U);
    msg.setSourceEntity(144U);
    msg.setDestination(60009U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.38981261748258267);
    msg.setSource(26203U);
    msg.setSourceEntity(80U);
    msg.setDestination(25988U);
    msg.setDestinationEntity(105U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.7177971364013273);
    msg.setSource(55131U);
    msg.setSourceEntity(92U);
    msg.setDestination(19328U);
    msg.setDestinationEntity(171U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.07264894472181205);
    msg.setSource(53521U);
    msg.setSourceEntity(79U);
    msg.setDestination(18532U);
    msg.setDestinationEntity(176U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.27019276616689347);
    msg.setSource(54093U);
    msg.setSourceEntity(149U);
    msg.setDestination(26200U);
    msg.setDestinationEntity(83U);
    msg.value = 0.8893147093270787;
    msg.confidence = 0.6642434852389082;
    msg.opmodes.assign("HISMQEUBVL");

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
    msg.setTimeStamp(0.5347314543723549);
    msg.setSource(1780U);
    msg.setSourceEntity(171U);
    msg.setDestination(15951U);
    msg.setDestinationEntity(114U);
    msg.value = 0.7465499218416247;
    msg.confidence = 0.23781540232403198;
    msg.opmodes.assign("PEAUXCWZSVGLMSKJXWQFJARBHLTKUUAWBNQLGFBDGRBHVIJBBXZYCCHEZOUEFNQTLAKDAORMWFXOGSWWOWPKUYKPQTBLENBKENZIGHIGDFPCVIPDJXPTTQXMOURQSMQZYSXHSMJRWVLKGKYITGLORLWTJKVIIKNTSJMHIMVVTRXUMTDQUOS");

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
    msg.setTimeStamp(0.03554889756749857);
    msg.setSource(37176U);
    msg.setSourceEntity(13U);
    msg.setDestination(29341U);
    msg.setDestinationEntity(39U);
    msg.value = 0.1866233411074142;
    msg.confidence = 0.20514530313345436;
    msg.opmodes.assign("LATKBJBSOWXTARADQGYDFMETOHDYZXESKEPJJCZTFNDLYPGZCYLNAPIAOHSQUCZGHDGSJZTSWPBFEHRRKKWYUYVPWMAKYUFNRIPCXKSVDLLTZRJNQUIBHHFVYHSECRUHMXOUUEGP");

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
    msg.setTimeStamp(0.5524323536458212);
    msg.setSource(16698U);
    msg.setSourceEntity(88U);
    msg.setDestination(35485U);
    msg.setDestinationEntity(4U);
    msg.itow = 2616641582U;
    msg.lat = 0.742018613862941;
    msg.lon = 0.13837792457223197;
    msg.height_ell = 0.14813016015442404;
    msg.height_sea = 0.6505183748962843;
    msg.hacc = 0.9037027310464216;
    msg.vacc = 0.967837127755295;
    msg.vel_n = 0.9868756501757855;
    msg.vel_e = 0.30256205315401496;
    msg.vel_d = 0.6937208474074309;
    msg.speed = 0.959739705789966;
    msg.gspeed = 0.39677834575475723;
    msg.heading = 0.6003483555245512;
    msg.sacc = 0.7660252841942732;
    msg.cacc = 0.9021699948676594;

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
    msg.setTimeStamp(0.8084254887198102);
    msg.setSource(39892U);
    msg.setSourceEntity(73U);
    msg.setDestination(37930U);
    msg.setDestinationEntity(241U);
    msg.itow = 3580363602U;
    msg.lat = 0.4403934553818152;
    msg.lon = 0.29670569929069524;
    msg.height_ell = 0.4315838720997275;
    msg.height_sea = 0.5869363346769247;
    msg.hacc = 0.1092243409112803;
    msg.vacc = 0.9829338414167726;
    msg.vel_n = 0.6606384372602214;
    msg.vel_e = 0.15668093975396502;
    msg.vel_d = 0.03586038039106454;
    msg.speed = 0.01862513580311409;
    msg.gspeed = 0.7104829894597814;
    msg.heading = 0.5001095140388528;
    msg.sacc = 0.641080458043674;
    msg.cacc = 0.5737041660893434;

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
    msg.setTimeStamp(0.495613013874146);
    msg.setSource(38952U);
    msg.setSourceEntity(197U);
    msg.setDestination(11578U);
    msg.setDestinationEntity(119U);
    msg.itow = 475133831U;
    msg.lat = 0.8561575297577095;
    msg.lon = 0.7769934236756724;
    msg.height_ell = 0.9844590428196305;
    msg.height_sea = 0.3857986255514585;
    msg.hacc = 0.15887874106089805;
    msg.vacc = 0.719059574495066;
    msg.vel_n = 0.41843921252679817;
    msg.vel_e = 0.38781939827167144;
    msg.vel_d = 0.9952001547814593;
    msg.speed = 0.012168217100642198;
    msg.gspeed = 0.4682197572949437;
    msg.heading = 0.17326528754872195;
    msg.sacc = 0.8905583884525096;
    msg.cacc = 0.6968899354253332;

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
    msg.setTimeStamp(0.11205866337387194);
    msg.setSource(11440U);
    msg.setSourceEntity(197U);
    msg.setDestination(4892U);
    msg.setDestinationEntity(234U);
    msg.id = 244U;
    msg.value = 0.34670792691728713;

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
    msg.setTimeStamp(0.03291587328497603);
    msg.setSource(56340U);
    msg.setSourceEntity(194U);
    msg.setDestination(58752U);
    msg.setDestinationEntity(92U);
    msg.id = 13U;
    msg.value = 0.09186801463176619;

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
    msg.setTimeStamp(0.8917347841451392);
    msg.setSource(28490U);
    msg.setSourceEntity(170U);
    msg.setDestination(24690U);
    msg.setDestinationEntity(55U);
    msg.id = 166U;
    msg.value = 0.5222748927838181;

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
    msg.setTimeStamp(0.2330395037451306);
    msg.setSource(10709U);
    msg.setSourceEntity(98U);
    msg.setDestination(11484U);
    msg.setDestinationEntity(161U);
    msg.x = 0.8023317407467504;
    msg.y = 0.6970248486304306;
    msg.z = 0.8866006491921469;
    msg.phi = 0.8080209446998912;
    msg.theta = 0.6321050431903195;
    msg.psi = 0.0958086397232254;

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
    msg.setTimeStamp(0.8139656786744284);
    msg.setSource(18849U);
    msg.setSourceEntity(10U);
    msg.setDestination(3546U);
    msg.setDestinationEntity(244U);
    msg.x = 0.5319054016213228;
    msg.y = 0.09758600046065957;
    msg.z = 0.05349160820511567;
    msg.phi = 0.5921916300735611;
    msg.theta = 0.7637208667628168;
    msg.psi = 0.6571555714802549;

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
    msg.setTimeStamp(0.10287286087351966);
    msg.setSource(55988U);
    msg.setSourceEntity(192U);
    msg.setDestination(43352U);
    msg.setDestinationEntity(16U);
    msg.x = 0.8072546773495668;
    msg.y = 0.03875675668143108;
    msg.z = 0.7978611150701947;
    msg.phi = 0.5305112459722676;
    msg.theta = 0.27200023294551723;
    msg.psi = 0.04111177522279652;

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
    msg.setTimeStamp(0.7917225332981634);
    msg.setSource(4402U);
    msg.setSourceEntity(46U);
    msg.setDestination(18099U);
    msg.setDestinationEntity(179U);
    msg.beam_width = 0.5690325274148098;
    msg.beam_height = 0.31420484243145963;

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
    msg.setTimeStamp(0.9132709997282972);
    msg.setSource(8472U);
    msg.setSourceEntity(137U);
    msg.setDestination(8767U);
    msg.setDestinationEntity(242U);
    msg.beam_width = 0.1875396197790945;
    msg.beam_height = 0.5932738176449935;

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
    msg.setTimeStamp(0.44799995994007435);
    msg.setSource(62059U);
    msg.setSourceEntity(238U);
    msg.setDestination(31154U);
    msg.setDestinationEntity(243U);
    msg.beam_width = 0.013520294145707545;
    msg.beam_height = 0.3736090654175651;

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
    msg.setTimeStamp(0.26761788294324995);
    msg.setSource(36533U);
    msg.setSourceEntity(125U);
    msg.setDestination(34943U);
    msg.setDestinationEntity(238U);
    msg.sane = 51U;

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
    msg.setTimeStamp(0.8293671165811763);
    msg.setSource(48981U);
    msg.setSourceEntity(223U);
    msg.setDestination(8800U);
    msg.setDestinationEntity(78U);
    msg.sane = 29U;

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
    msg.setTimeStamp(0.7007147560007122);
    msg.setSource(24564U);
    msg.setSourceEntity(202U);
    msg.setDestination(43056U);
    msg.setDestinationEntity(182U);
    msg.sane = 28U;

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
    msg.setTimeStamp(0.3431730769402832);
    msg.setSource(49355U);
    msg.setSourceEntity(0U);
    msg.setDestination(41356U);
    msg.setDestinationEntity(238U);
    msg.value = 0.7066822573086659;

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
    msg.setTimeStamp(0.39956663521919933);
    msg.setSource(49373U);
    msg.setSourceEntity(85U);
    msg.setDestination(18877U);
    msg.setDestinationEntity(201U);
    msg.value = 0.03670117243603854;

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
    msg.setTimeStamp(0.8044164312823268);
    msg.setSource(62316U);
    msg.setSourceEntity(85U);
    msg.setDestination(39497U);
    msg.setDestinationEntity(110U);
    msg.value = 0.07373067645164788;

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
    msg.setTimeStamp(0.25733077112083325);
    msg.setSource(11440U);
    msg.setSourceEntity(195U);
    msg.setDestination(29590U);
    msg.setDestinationEntity(212U);
    msg.value = 0.5004129247193568;

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
    msg.setTimeStamp(0.0590251142719882);
    msg.setSource(528U);
    msg.setSourceEntity(173U);
    msg.setDestination(36287U);
    msg.setDestinationEntity(155U);
    msg.value = 0.4497142705830094;

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
    msg.setTimeStamp(0.8962516112348995);
    msg.setSource(1667U);
    msg.setSourceEntity(92U);
    msg.setDestination(53808U);
    msg.setDestinationEntity(29U);
    msg.value = 0.4722834781684364;

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
    msg.setTimeStamp(0.033374352550437525);
    msg.setSource(257U);
    msg.setSourceEntity(218U);
    msg.setDestination(52440U);
    msg.setDestinationEntity(66U);
    msg.value = 0.6295014268844845;

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
    msg.setTimeStamp(0.47619767290002357);
    msg.setSource(56076U);
    msg.setSourceEntity(77U);
    msg.setDestination(43801U);
    msg.setDestinationEntity(57U);
    msg.value = 0.9349221582676406;

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
    msg.setTimeStamp(0.8788979514284677);
    msg.setSource(40480U);
    msg.setSourceEntity(97U);
    msg.setDestination(32407U);
    msg.setDestinationEntity(103U);
    msg.value = 0.41119831291256914;

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
    msg.setTimeStamp(0.36657859140524773);
    msg.setSource(9526U);
    msg.setSourceEntity(161U);
    msg.setDestination(1504U);
    msg.setDestinationEntity(196U);
    msg.value = 0.5162390260955707;

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
    msg.setTimeStamp(0.22276682862776198);
    msg.setSource(8529U);
    msg.setSourceEntity(163U);
    msg.setDestination(44752U);
    msg.setDestinationEntity(115U);
    msg.value = 0.46148858641758017;

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
    msg.setTimeStamp(0.6107045192965086);
    msg.setSource(41168U);
    msg.setSourceEntity(202U);
    msg.setDestination(1191U);
    msg.setDestinationEntity(128U);
    msg.value = 0.6047442567904406;

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
    msg.setTimeStamp(0.1936183967257462);
    msg.setSource(48659U);
    msg.setSourceEntity(5U);
    msg.setDestination(56282U);
    msg.setDestinationEntity(102U);
    msg.value = 0.5467538044240634;

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
    msg.setTimeStamp(0.5085366415621253);
    msg.setSource(61940U);
    msg.setSourceEntity(234U);
    msg.setDestination(2079U);
    msg.setDestinationEntity(108U);
    msg.value = 0.41702836702963353;

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
    msg.setTimeStamp(0.8181454049146203);
    msg.setSource(34669U);
    msg.setSourceEntity(101U);
    msg.setDestination(64761U);
    msg.setDestinationEntity(153U);
    msg.value = 0.21866718661073936;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.19009032932839887);
    msg.setSource(13478U);
    msg.setSourceEntity(254U);
    msg.setDestination(49443U);
    msg.setDestinationEntity(232U);
    msg.id = 60U;
    msg.zoom = 69U;
    msg.action = 77U;

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
    msg.setTimeStamp(0.32839623920273286);
    msg.setSource(1885U);
    msg.setSourceEntity(1U);
    msg.setDestination(20311U);
    msg.setDestinationEntity(22U);
    msg.id = 166U;
    msg.zoom = 91U;
    msg.action = 207U;

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
    msg.setTimeStamp(0.16898794496741787);
    msg.setSource(39878U);
    msg.setSourceEntity(219U);
    msg.setDestination(50516U);
    msg.setDestinationEntity(99U);
    msg.id = 54U;
    msg.zoom = 129U;
    msg.action = 119U;

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
    msg.setTimeStamp(0.16394870413970597);
    msg.setSource(46948U);
    msg.setSourceEntity(72U);
    msg.setDestination(30370U);
    msg.setDestinationEntity(4U);
    msg.id = 218U;
    msg.value = 0.9037437117314077;

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
    msg.setTimeStamp(0.42270324174356966);
    msg.setSource(19574U);
    msg.setSourceEntity(187U);
    msg.setDestination(17837U);
    msg.setDestinationEntity(185U);
    msg.id = 246U;
    msg.value = 0.8934464539598165;

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
    msg.setTimeStamp(0.46146452315731634);
    msg.setSource(11398U);
    msg.setSourceEntity(200U);
    msg.setDestination(15630U);
    msg.setDestinationEntity(238U);
    msg.id = 54U;
    msg.value = 0.9330674843751021;

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
    msg.setTimeStamp(0.9140175217693479);
    msg.setSource(54436U);
    msg.setSourceEntity(74U);
    msg.setDestination(58727U);
    msg.setDestinationEntity(74U);
    msg.id = 159U;
    msg.value = 0.8688538635078477;

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
    msg.setTimeStamp(0.3717244434564926);
    msg.setSource(8812U);
    msg.setSourceEntity(60U);
    msg.setDestination(2130U);
    msg.setDestinationEntity(101U);
    msg.id = 54U;
    msg.value = 0.19119494515190416;

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
    msg.setTimeStamp(0.5643328027404998);
    msg.setSource(30116U);
    msg.setSourceEntity(214U);
    msg.setDestination(25697U);
    msg.setDestinationEntity(161U);
    msg.id = 125U;
    msg.value = 0.8386123505892271;

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
    msg.setTimeStamp(0.19663905032575735);
    msg.setSource(13656U);
    msg.setSourceEntity(97U);
    msg.setDestination(28579U);
    msg.setDestinationEntity(50U);
    msg.id = 195U;
    msg.angle = 0.5632375499150171;

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
    msg.setTimeStamp(0.3075529015885816);
    msg.setSource(26930U);
    msg.setSourceEntity(64U);
    msg.setDestination(53170U);
    msg.setDestinationEntity(220U);
    msg.id = 142U;
    msg.angle = 0.8048263561422248;

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
    msg.setTimeStamp(0.3499378844715012);
    msg.setSource(65196U);
    msg.setSourceEntity(170U);
    msg.setDestination(231U);
    msg.setDestinationEntity(120U);
    msg.id = 250U;
    msg.angle = 0.20739717685749104;

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
    msg.setTimeStamp(0.8742382110443769);
    msg.setSource(47148U);
    msg.setSourceEntity(151U);
    msg.setDestination(41121U);
    msg.setDestinationEntity(93U);
    msg.op = 218U;
    msg.actions.assign("DMDGRVDQVUUTHLYUIYFXANIIYSVCAWMEGHSW");

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
    msg.setTimeStamp(0.7101268195864118);
    msg.setSource(19939U);
    msg.setSourceEntity(50U);
    msg.setDestination(18788U);
    msg.setDestinationEntity(28U);
    msg.op = 245U;
    msg.actions.assign("LDWHKWENPCQWZQTITYDJNPKYEMNQYLFVOUHGCHZQQLURNZLBVMMFSDSGDFOSBKOQXGOSFPSLXIQMIMNXJLFTRUVDDNITZGXZNYHAJPKEKLSQFMXCZTLA");

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
    msg.setTimeStamp(0.8574906294461763);
    msg.setSource(6121U);
    msg.setSourceEntity(105U);
    msg.setDestination(60577U);
    msg.setDestinationEntity(161U);
    msg.op = 224U;
    msg.actions.assign("EWRRMFHVDQ");

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
    msg.setTimeStamp(0.016158654380492354);
    msg.setSource(33303U);
    msg.setSourceEntity(43U);
    msg.setDestination(52859U);
    msg.setDestinationEntity(85U);
    msg.actions.assign("IOWOQWXQGAPPUFWFGROTGFYZXRMKHGURIRFAYLRCOIHVEDOIZEWXRYWPLDYKKFFTSVLWQGEZDCRJVBSEQHLFWSEKJ");

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
    msg.setTimeStamp(0.9939920526785826);
    msg.setSource(56421U);
    msg.setSourceEntity(204U);
    msg.setDestination(7448U);
    msg.setDestinationEntity(59U);
    msg.actions.assign("CYZVJGRNSBVMRWNZFMEQZLIIAOSMODNWHPBHNCLVELKAQBHIDRKJAMIGYZIJGAJRXNTMTLBYLWLNFUB");

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
    msg.setTimeStamp(0.16340479417168452);
    msg.setSource(51184U);
    msg.setSourceEntity(241U);
    msg.setDestination(39670U);
    msg.setDestinationEntity(250U);
    msg.actions.assign("TJPJTZAIXQGHRQNGSYFDSUKYYVPWHXKVTUVWEXVLVGHUEKAUBHZZIROSQDCMLPUSBWCKKADMSTCWBYPWUDZCGNKOBVISLARQHMLPOZIQEADOYWKEJXLCVTSFXNSITYAICQEEVPZXODKPPXOTQOPSGFNLWLJYSGITFFRZHXYOOVJMGCF");

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
    msg.setTimeStamp(0.4010158512041486);
    msg.setSource(21978U);
    msg.setSourceEntity(251U);
    msg.setDestination(18374U);
    msg.setDestinationEntity(79U);
    msg.button = 24U;
    msg.value = 78U;

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
    msg.setTimeStamp(0.8483186963967755);
    msg.setSource(9572U);
    msg.setSourceEntity(37U);
    msg.setDestination(53929U);
    msg.setDestinationEntity(108U);
    msg.button = 137U;
    msg.value = 108U;

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
    msg.setTimeStamp(0.5634014907737859);
    msg.setSource(26233U);
    msg.setSourceEntity(123U);
    msg.setDestination(4405U);
    msg.setDestinationEntity(40U);
    msg.button = 123U;
    msg.value = 254U;

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
    msg.setTimeStamp(0.8382733354808357);
    msg.setSource(6735U);
    msg.setSourceEntity(245U);
    msg.setDestination(38341U);
    msg.setDestinationEntity(117U);
    msg.op = 20U;
    msg.text.assign("WGNLFBPYHIGTRPQMEKGUNGXSNVMHJKYJCVTPNJYEDCEVYXRVKBMUOSIUXWNPUEXNSZRKEQCQHAQWFOMKELKGLLLDJDHXAGIKAAKOQTMFKYVCTLYXYGPUWUHUVUIFLFXSFLFSBCRTTYHMCBNJAJBZNTLSIWMJDGNMNOVPOVEWOXJAXTSGSWEBWRTPLHZQPIMKVDESZZEPQZCDRJUSXADPQIZ");

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
    msg.setTimeStamp(0.4711496286352428);
    msg.setSource(62554U);
    msg.setSourceEntity(19U);
    msg.setDestination(33701U);
    msg.setDestinationEntity(124U);
    msg.op = 167U;
    msg.text.assign("SNABALTQWTYWSQUYOXIMSJEMVFYHKTSUXRHLGKBPXVOQDHCPQCRVOEAJMKKJFAGTNFRLTECINLBUSGXPHZPTZWAMWXLVRMETVFOHZLRZAOMUZFDTMOPJRLDZFXRIMBCIKTSUKNUABEPIDUQEVSKTEK");

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
    msg.setTimeStamp(0.6206130847430592);
    msg.setSource(14476U);
    msg.setSourceEntity(221U);
    msg.setDestination(23818U);
    msg.setDestinationEntity(66U);
    msg.op = 44U;
    msg.text.assign("CIKVKBQXBTGXDGHQUDLJXATEMOBBQUMDSSCCFYCEBEDNBCZFAMWHJRRJQOZUPSSDWJROCGDNPKAFMEYVKKMOHXUQLRHOAONVZWINKXIFHSZDRHFQYWAIVJNPMYPFMPJ");

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
    msg.setTimeStamp(0.4499436518594233);
    msg.setSource(10051U);
    msg.setSourceEntity(203U);
    msg.setDestination(45183U);
    msg.setDestinationEntity(158U);
    msg.op = 116U;
    msg.time_remain = 0.3414264140890141;
    msg.sched_time = 0.552840728410562;

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
    msg.setTimeStamp(0.2955757551423338);
    msg.setSource(9715U);
    msg.setSourceEntity(85U);
    msg.setDestination(53312U);
    msg.setDestinationEntity(182U);
    msg.op = 185U;
    msg.time_remain = 0.41276573138611183;
    msg.sched_time = 0.9061027187450577;

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
    msg.setTimeStamp(0.7063169712812218);
    msg.setSource(22943U);
    msg.setSourceEntity(242U);
    msg.setDestination(50491U);
    msg.setDestinationEntity(34U);
    msg.op = 169U;
    msg.time_remain = 0.4236779931586703;
    msg.sched_time = 0.6202388326403593;

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
    msg.setTimeStamp(0.9587792779999287);
    msg.setSource(50823U);
    msg.setSourceEntity(224U);
    msg.setDestination(32485U);
    msg.setDestinationEntity(42U);
    msg.name.assign("AISKWLTDJTEAFGOBRUWBSBJQKJGBTJYNWFFZSQRJLZWAZSQBDVIHXNFVHIYRRORJQKMBOWTEPKGFOTPCTHSLHDDHQROWZGWYAPRXIQMXWKPFXVZEVNSIULAZFUJCNNVZMVUEXMBYMPPAJLCQBKEQMGCLAAMPHGXEKDEEBCDXNIOGSGWMUKMYFLWAGTPQVFVIJQCTRD");
    msg.op = 240U;
    msg.sched_time = 0.851863353975254;

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
    msg.setTimeStamp(0.6542724292455662);
    msg.setSource(26005U);
    msg.setSourceEntity(35U);
    msg.setDestination(47105U);
    msg.setDestinationEntity(120U);
    msg.name.assign("UFERQYXVVBMXARNWSVFJPAOMKBLCOKBEMLTHSYBRBEJDSGTPNQQAOLWEGEYPVCVWPQNLNTOWWIFUABXOCHZRQIYBLREKJJCLZVPLCRDWPJUHSENZNEDKTAZDIUJGSHGRDHZKHGMJJMGQFFKBICSZQTCLBXDYAQDDSPIWLNQCXPVSKIEFGGAFMXYIIYO");
    msg.op = 19U;
    msg.sched_time = 0.906459455620176;

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
    msg.setTimeStamp(0.4358759466518902);
    msg.setSource(50411U);
    msg.setSourceEntity(118U);
    msg.setDestination(19546U);
    msg.setDestinationEntity(15U);
    msg.name.assign("EIHBSJOKLYCBKVXFPRYJGLLLKMFRCRQNLZVKIGZEAJDTNCAWYAYXPTUZVEKEBOIDLUGWAEHPMVUUMIVQHOGGWVOFDMXPZNAVRJSKHFUNNJDTQXFQTBPIXAAZWWZMMHYECTNMQTDWWLPYUGBCRJSXMXLALPVQKCXFCNEZZFITHTKPQNPWGRXHBSFVYBRBSJSQZFRSGIWOUHOGSNKHEDIAWTOROYRSPEHUJB");
    msg.op = 216U;
    msg.sched_time = 0.900503317160125;

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
    msg.setTimeStamp(0.11933826041042173);
    msg.setSource(54698U);
    msg.setSourceEntity(164U);
    msg.setDestination(25337U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.10468692971305771);
    msg.setSource(25477U);
    msg.setSourceEntity(205U);
    msg.setDestination(65448U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.6950284814277595);
    msg.setSource(8534U);
    msg.setSourceEntity(122U);
    msg.setDestination(10180U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.18200536077822127);
    msg.setSource(31677U);
    msg.setSourceEntity(106U);
    msg.setDestination(9701U);
    msg.setDestinationEntity(40U);
    msg.name.assign("YJRWWFOLTRBBRVULMNMHYTEOQAHISHUIFBTFFGIECUQAJSZRPFGQHFQWRIWLZCNIAGDJLKTVXEQQMAAAHMFUZKQSCZXBXJMDKYRKPRUZVHKDNXNRMUYTHTEBLXMWSKBXTWEJSVNBVPZPKKLYBBKKVEOFYOCNIBQZZEEQJLGDJTCWQOGOMASETNNVZLDWPSDVGFPXUMUGIJYMLGOCOEZRRJWTYWPHAIIAGYSSAJLCDODVPOD");
    msg.state = 119U;

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
    msg.setTimeStamp(0.4808770437625639);
    msg.setSource(61298U);
    msg.setSourceEntity(208U);
    msg.setDestination(44908U);
    msg.setDestinationEntity(106U);
    msg.name.assign("XNGEFTQPEPSCITYSHKGKWCWMKOVRKOSTISMDLRBJYLTNVGIXAJTUJVQVKKTHBLUHPLFRFLBTMHLOVEUUCMERFUDDIERHBOXDWPBYAXWSBLFNXYDFZAKEZAIFTYLEPHANQLJXCPWSTCZRVQWDHOLJXPUWPIOZCYOIQU");
    msg.state = 83U;

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
    msg.setTimeStamp(0.4243362915062904);
    msg.setSource(32506U);
    msg.setSourceEntity(20U);
    msg.setDestination(52741U);
    msg.setDestinationEntity(157U);
    msg.name.assign("QFRAEWDMCGCWKNBPXBCUNFZCXXXIKPIDHSVXUYADMLSYEMTLNFSNQKKJLQKLFHRFMCAHEJXMZOMEGGGSXOIDROOSYZJDSIZYZUUAJKLAXOAKZLEBTQSULVWZEUPFLDUWWLONJOMNIEPPYYMYNGTWTDQATJHPTBGBRCORGYQIQTTCKBBRVMDRHZIAQWZETKHHBVBCUJJVUFPTGJYQOVDNNWFJRVXPGBVWSHOZEKACUGSMQAD");
    msg.state = 10U;

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
    msg.setTimeStamp(0.8949600659113662);
    msg.setSource(31641U);
    msg.setSourceEntity(210U);
    msg.setDestination(31816U);
    msg.setDestinationEntity(26U);
    msg.name.assign("TZEFXGVGZPBZWHRYHJFQHTYTPTBVZIDRUKKUKUFAZVTSPSTIHQEIQNPUKLMVCAPSCQAJYOBNJDBRPVQXXNNMDBTGTELYCWYILWGINFCLVETRKALGZXSOSYTSQAJDUNCMKWRGAMSWWNPOLZXSAEKEEBVPGHGMMJYOQHYNOLHSCQXFJRHXRMIXQJJPOUHDGJYEDWOMUIAVCFDIFIOIDX");
    msg.value = 233U;

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
    msg.setTimeStamp(0.5745773476302909);
    msg.setSource(51038U);
    msg.setSourceEntity(20U);
    msg.setDestination(63647U);
    msg.setDestinationEntity(129U);
    msg.name.assign("HCAPTDBOAAHCXKJMSCRZHLTKAIHWJNRATDUGQSWCWFDNPIZEAZBDUVJIWYDTGQVYTSQIZTPMMWOMYVREXPQDGUZKVNYVKSUQPVGQNVUTDADAILIEMLICBKXOXXZEQZXTLMLNZXIPMFHDHGCOWU");
    msg.value = 70U;

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
    msg.setTimeStamp(0.1452469567532615);
    msg.setSource(44415U);
    msg.setSourceEntity(20U);
    msg.setDestination(21540U);
    msg.setDestinationEntity(107U);
    msg.name.assign("VAKWGYIJCBMLXFQUPKEKQSYJSITXQCZHCNMFWTOGKFIAVSOXMFVLSGFSZYVPGNJENDTIZKEWJIRCBQTWATRBUMEXBDRUPARPOJODZTHAVYDALOAQEMTECWGCYMDJQXRALEYNLIFXKLJZLOMOGNBJARBANRRQSKYHPSDSTWGRZHJWSCBVZTYQTIVDHMCNBOKZFNUKUPYYDLVWZEZUOPXGOVG");
    msg.value = 69U;

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
    msg.setTimeStamp(0.3160711193465049);
    msg.setSource(6102U);
    msg.setSourceEntity(211U);
    msg.setDestination(58753U);
    msg.setDestinationEntity(95U);
    msg.name.assign("RPEIQGDPAKSADIPBBTWGWWLVAQBRKTWEQKSZXAEBFFZMFSZXYPIGGUYIXLUFTHBRUSQCQMOOTQUMLROJPUKOHGFFRKSSMAYYEVFBJYOVCGPXHNANJBQTRISGFDVZEEMRRWYHNNXNUNLBLHZKP");

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
    msg.setTimeStamp(0.7054952898402924);
    msg.setSource(26807U);
    msg.setSourceEntity(169U);
    msg.setDestination(19301U);
    msg.setDestinationEntity(3U);
    msg.name.assign("CSGQEYUTVWNIXKWAIRMEGAJUOLJPJBZDRNDHWCYGZJMQQJDSPHKABMWSSTZBCEIKTCQBLFCHRONKSUCKMGMTXTHKRSHLFZEHBZVHXSGWRXOTAAYPRQZOCFVNAEZBMPGOUFRJRFINSF");

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
    msg.setTimeStamp(0.13784127176374183);
    msg.setSource(54124U);
    msg.setSourceEntity(150U);
    msg.setDestination(37075U);
    msg.setDestinationEntity(180U);
    msg.name.assign("VFNBSJSZHHRAXBTSTLTQPMUZBICOFZDIDXLCGRLFQBWWVTGNPKNZSGPSUHDKOPAPCJGSKOIBVFDKVYZNGONSXURRCPFHAEKUHWTSWJORAEJUJUGLQNIKALWHLQWAYTIXILKY");

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
    msg.setTimeStamp(0.47281486719628707);
    msg.setSource(44422U);
    msg.setSourceEntity(151U);
    msg.setDestination(43340U);
    msg.setDestinationEntity(39U);
    msg.name.assign("QVIBLZDCPHLAPBDKDUONNQZOYIQZTAEMMGLGVWQXBSGDHLXDIUFKLUAJRLXMFGOFUARUREPDWIIODVQHBEPXNSYPHGZAQJWQXKKRCDEXAYCTOOMFMGMQPVJBGTWMVGCVIYXSJQWFSMRKIKTXWOTLMHZYCELRBKJNACCNRRTPEZCFPDWAOWRDJMYKTWPJPZJ");
    msg.value = 60U;

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
    msg.setTimeStamp(0.7592857761269344);
    msg.setSource(38196U);
    msg.setSourceEntity(72U);
    msg.setDestination(63836U);
    msg.setDestinationEntity(128U);
    msg.name.assign("XZNUANFPFCMFOBCJZBYNWAXCFLJJKHHNBEKOZIYMJTUMIMVZOZXYMNTUOBLGDDNTPKTDSUXQAJRWMWYTIRIJHGPSMLXOUWDLKCCXHFUSNGPPYQZHUESHNEKKLDFEJHFWRRJBDPSXEILEMQAZTKWRXIWFSOOGCZPTXOIXVZKGLVKVICSZNVAJDSTLMRHNGCHQGFVOARVPPGBVQKTADQAQWIBWGBYRSYBDLYA");
    msg.value = 227U;

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
    msg.setTimeStamp(0.27946577403280837);
    msg.setSource(42109U);
    msg.setSourceEntity(146U);
    msg.setDestination(17808U);
    msg.setDestinationEntity(118U);
    msg.name.assign("OUCSXGNQRGIFRRIKNMYEMAXABOGPJQSMLGNVDZHZSDCRVPKDQW");
    msg.value = 92U;

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
    msg.setTimeStamp(0.17731305281953513);
    msg.setSource(55288U);
    msg.setSourceEntity(121U);
    msg.setDestination(47425U);
    msg.setDestinationEntity(149U);
    msg.id = 52U;
    msg.period = 4145906620U;
    msg.duty_cycle = 2189446926U;

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
    msg.setTimeStamp(0.5195837720081098);
    msg.setSource(35597U);
    msg.setSourceEntity(147U);
    msg.setDestination(40986U);
    msg.setDestinationEntity(198U);
    msg.id = 42U;
    msg.period = 821370178U;
    msg.duty_cycle = 2797285541U;

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
    msg.setTimeStamp(0.17346061168095028);
    msg.setSource(44317U);
    msg.setSourceEntity(200U);
    msg.setDestination(45396U);
    msg.setDestinationEntity(217U);
    msg.id = 71U;
    msg.period = 234715376U;
    msg.duty_cycle = 2443888081U;

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
    msg.setTimeStamp(0.449807700392028);
    msg.setSource(35076U);
    msg.setSourceEntity(45U);
    msg.setDestination(46566U);
    msg.setDestinationEntity(224U);
    msg.id = 117U;
    msg.period = 3396097513U;
    msg.duty_cycle = 1283850580U;

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
    msg.setTimeStamp(0.5927791112538081);
    msg.setSource(63038U);
    msg.setSourceEntity(207U);
    msg.setDestination(36098U);
    msg.setDestinationEntity(37U);
    msg.id = 48U;
    msg.period = 2347160458U;
    msg.duty_cycle = 2422323379U;

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
    msg.setTimeStamp(0.27476612225686226);
    msg.setSource(34643U);
    msg.setSourceEntity(14U);
    msg.setDestination(17935U);
    msg.setDestinationEntity(61U);
    msg.id = 250U;
    msg.period = 3159052987U;
    msg.duty_cycle = 1058078637U;

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
    msg.setTimeStamp(0.644853200344907);
    msg.setSource(42521U);
    msg.setSourceEntity(117U);
    msg.setDestination(46211U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.19716864908005538;
    msg.lon = 0.569091545840307;
    msg.height = 0.9437724580407857;
    msg.x = 0.64587808430593;
    msg.y = 0.24862773560569662;
    msg.z = 0.3563219470998462;
    msg.phi = 0.937094962900142;
    msg.theta = 0.1743919306180267;
    msg.psi = 0.5449129534155831;
    msg.u = 0.43609875364434425;
    msg.v = 0.8831452460837731;
    msg.w = 0.19736021990175878;
    msg.vx = 0.8247344055181576;
    msg.vy = 0.6806933127195578;
    msg.vz = 0.881880832458203;
    msg.p = 0.7099378309342581;
    msg.q = 0.33944866839963994;
    msg.r = 0.70354558968273;
    msg.depth = 0.6651089309961161;
    msg.alt = 0.022751861992718614;

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
    msg.setTimeStamp(0.24221914061621108);
    msg.setSource(58878U);
    msg.setSourceEntity(71U);
    msg.setDestination(55629U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.3831039735831967;
    msg.lon = 0.540136935407798;
    msg.height = 0.22329859616579284;
    msg.x = 0.8729389492300497;
    msg.y = 0.480915485565765;
    msg.z = 0.09811227967286629;
    msg.phi = 0.3043687532176209;
    msg.theta = 0.9598358863755225;
    msg.psi = 0.7041753422860084;
    msg.u = 0.5890440778150298;
    msg.v = 0.5157561224509569;
    msg.w = 0.7089018502218037;
    msg.vx = 0.04936671262572978;
    msg.vy = 0.7993611200735155;
    msg.vz = 0.10446854957293117;
    msg.p = 0.2298321462296441;
    msg.q = 0.8066239609595477;
    msg.r = 0.30646778933903196;
    msg.depth = 0.15760972281493102;
    msg.alt = 0.5209038692921915;

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
    msg.setTimeStamp(0.39394662374605793);
    msg.setSource(9450U);
    msg.setSourceEntity(71U);
    msg.setDestination(42139U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.0410899846275391;
    msg.lon = 0.5222455510388154;
    msg.height = 0.33274496409164267;
    msg.x = 0.2330645366961105;
    msg.y = 0.8482881980864545;
    msg.z = 0.5789218834336496;
    msg.phi = 0.059482335218492555;
    msg.theta = 0.28522071315596087;
    msg.psi = 0.20277069278838689;
    msg.u = 0.23814719564820708;
    msg.v = 0.2763120954731678;
    msg.w = 0.33704909667525895;
    msg.vx = 0.8489778209093363;
    msg.vy = 0.21916654912502742;
    msg.vz = 0.08893374337093118;
    msg.p = 0.335401611131076;
    msg.q = 0.21260298076728446;
    msg.r = 0.3425648504976281;
    msg.depth = 0.5766855474810805;
    msg.alt = 0.8603013965355476;

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
    msg.setTimeStamp(0.27163546164047825);
    msg.setSource(5909U);
    msg.setSourceEntity(22U);
    msg.setDestination(32525U);
    msg.setDestinationEntity(221U);
    msg.x = 0.9788564873663437;
    msg.y = 0.6107459452835092;
    msg.z = 0.15420582144434491;

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
    msg.setTimeStamp(0.42369739415835195);
    msg.setSource(10718U);
    msg.setSourceEntity(8U);
    msg.setDestination(33035U);
    msg.setDestinationEntity(65U);
    msg.x = 0.3989017094823838;
    msg.y = 0.49082978228928886;
    msg.z = 0.3813694908442954;

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
    msg.setTimeStamp(0.1421178791820048);
    msg.setSource(37488U);
    msg.setSourceEntity(66U);
    msg.setDestination(62206U);
    msg.setDestinationEntity(127U);
    msg.x = 0.24638177127773142;
    msg.y = 0.1150779085930611;
    msg.z = 0.8681898699962498;

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
    msg.setTimeStamp(0.19457585786734288);
    msg.setSource(631U);
    msg.setSourceEntity(105U);
    msg.setDestination(56993U);
    msg.setDestinationEntity(211U);
    msg.value = 0.768574213542175;

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
    msg.setTimeStamp(0.7716825308582598);
    msg.setSource(35912U);
    msg.setSourceEntity(80U);
    msg.setDestination(35212U);
    msg.setDestinationEntity(70U);
    msg.value = 0.7547749327927717;

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
    msg.setTimeStamp(0.8984868195670036);
    msg.setSource(56049U);
    msg.setSourceEntity(220U);
    msg.setDestination(64363U);
    msg.setDestinationEntity(21U);
    msg.value = 0.8178594411765326;

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
    msg.setTimeStamp(0.7981627975536035);
    msg.setSource(31831U);
    msg.setSourceEntity(248U);
    msg.setDestination(33386U);
    msg.setDestinationEntity(128U);
    msg.value = 0.5365741037378228;

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
    msg.setTimeStamp(0.6435220814487036);
    msg.setSource(43183U);
    msg.setSourceEntity(220U);
    msg.setDestination(7519U);
    msg.setDestinationEntity(184U);
    msg.value = 0.8353887772697203;

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
    msg.setTimeStamp(0.4839774655194279);
    msg.setSource(54148U);
    msg.setSourceEntity(235U);
    msg.setDestination(13335U);
    msg.setDestinationEntity(20U);
    msg.value = 0.3087016642523722;

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
    msg.setTimeStamp(0.701715579767213);
    msg.setSource(4863U);
    msg.setSourceEntity(127U);
    msg.setDestination(57058U);
    msg.setDestinationEntity(229U);
    msg.x = 0.43081616462970596;
    msg.y = 0.21746146047026138;
    msg.z = 0.7569569771576232;
    msg.phi = 0.39674622225765077;
    msg.theta = 0.7359423863428832;
    msg.psi = 0.5449599928821794;
    msg.p = 0.7662182033599836;
    msg.q = 0.7064607439675212;
    msg.r = 0.8327160290779366;
    msg.u = 0.7816944355151236;
    msg.v = 0.7823521793698444;
    msg.w = 0.791287709049906;
    msg.bias_psi = 0.815812473733123;
    msg.bias_r = 0.8366974779653112;

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
    msg.setTimeStamp(0.36554701377658005);
    msg.setSource(10222U);
    msg.setSourceEntity(208U);
    msg.setDestination(62138U);
    msg.setDestinationEntity(113U);
    msg.x = 0.8556043318954994;
    msg.y = 0.4053910040451607;
    msg.z = 0.9540670002551759;
    msg.phi = 0.29210711513235177;
    msg.theta = 0.7021442589139988;
    msg.psi = 0.3689480844657569;
    msg.p = 0.7929067481729908;
    msg.q = 0.9416695518007978;
    msg.r = 0.1292300612950581;
    msg.u = 0.6592335684808266;
    msg.v = 0.6760128978078555;
    msg.w = 0.8234545396981294;
    msg.bias_psi = 0.910536952372721;
    msg.bias_r = 0.8751873300292333;

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
    msg.setTimeStamp(0.6679677070663554);
    msg.setSource(33001U);
    msg.setSourceEntity(192U);
    msg.setDestination(19156U);
    msg.setDestinationEntity(135U);
    msg.x = 0.5530721810989019;
    msg.y = 0.45958800996709537;
    msg.z = 0.6575075242511621;
    msg.phi = 0.917883765907732;
    msg.theta = 0.9852850861698328;
    msg.psi = 0.22786994390587478;
    msg.p = 0.5110841741181225;
    msg.q = 0.7128699566629816;
    msg.r = 0.6058319372543209;
    msg.u = 0.47222620826939676;
    msg.v = 0.3315247715404518;
    msg.w = 0.5227559766720984;
    msg.bias_psi = 0.7180263744664369;
    msg.bias_r = 0.14769955696670278;

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
    msg.setTimeStamp(0.11354785509817966);
    msg.setSource(14898U);
    msg.setSourceEntity(54U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(109U);
    msg.bias_psi = 0.6133115545414505;
    msg.bias_r = 0.780169037830629;
    msg.cog = 0.8563568764833355;
    msg.cyaw = 0.5717102938855927;
    msg.lbl_rej_level = 0.02005810025378929;
    msg.gps_rej_level = 0.6208548536049462;
    msg.custom_x = 0.9886647261109272;
    msg.custom_y = 0.9707920205479279;
    msg.custom_z = 0.4305557240664196;

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
    msg.setTimeStamp(0.8254582056850915);
    msg.setSource(64524U);
    msg.setSourceEntity(157U);
    msg.setDestination(37646U);
    msg.setDestinationEntity(132U);
    msg.bias_psi = 0.16615314449257934;
    msg.bias_r = 0.2769381985167402;
    msg.cog = 0.09603749624994251;
    msg.cyaw = 0.920461649222235;
    msg.lbl_rej_level = 0.0974548031969058;
    msg.gps_rej_level = 0.3699131875986372;
    msg.custom_x = 0.11161337217199163;
    msg.custom_y = 0.8820254228360972;
    msg.custom_z = 0.4478134313794897;

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
    msg.setTimeStamp(0.9876565283081232);
    msg.setSource(61842U);
    msg.setSourceEntity(97U);
    msg.setDestination(18585U);
    msg.setDestinationEntity(41U);
    msg.bias_psi = 0.04743303529963505;
    msg.bias_r = 0.22784761590354152;
    msg.cog = 0.06226579160923862;
    msg.cyaw = 0.19619540068463592;
    msg.lbl_rej_level = 0.4419027377803576;
    msg.gps_rej_level = 0.2943426700266969;
    msg.custom_x = 0.3793542799855659;
    msg.custom_y = 0.856281362661192;
    msg.custom_z = 0.20057135417853933;

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
    msg.setTimeStamp(0.19236409687223455);
    msg.setSource(59026U);
    msg.setSourceEntity(254U);
    msg.setDestination(21507U);
    msg.setDestinationEntity(44U);
    msg.utc_time = 0.6351638588200836;
    msg.reason = 165U;

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
    msg.setTimeStamp(0.4032973271683634);
    msg.setSource(13265U);
    msg.setSourceEntity(253U);
    msg.setDestination(35296U);
    msg.setDestinationEntity(145U);
    msg.utc_time = 0.08771118485030793;
    msg.reason = 183U;

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
    msg.setTimeStamp(0.7233438222202074);
    msg.setSource(62288U);
    msg.setSourceEntity(128U);
    msg.setDestination(61401U);
    msg.setDestinationEntity(38U);
    msg.utc_time = 0.6833488236143994;
    msg.reason = 69U;

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
    msg.setTimeStamp(0.7340030467756639);
    msg.setSource(43076U);
    msg.setSourceEntity(69U);
    msg.setDestination(21186U);
    msg.setDestinationEntity(46U);
    msg.id = 199U;
    msg.range = 0.3347463518535738;
    msg.acceptance = 154U;

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
    msg.setTimeStamp(0.8487532302491263);
    msg.setSource(9401U);
    msg.setSourceEntity(196U);
    msg.setDestination(37029U);
    msg.setDestinationEntity(150U);
    msg.id = 4U;
    msg.range = 0.7140991517966873;
    msg.acceptance = 107U;

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
    msg.setTimeStamp(0.5781642885347311);
    msg.setSource(7498U);
    msg.setSourceEntity(175U);
    msg.setDestination(55552U);
    msg.setDestinationEntity(82U);
    msg.id = 172U;
    msg.range = 0.5065569644785681;
    msg.acceptance = 171U;

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
    msg.setTimeStamp(0.5512761311937595);
    msg.setSource(27946U);
    msg.setSourceEntity(253U);
    msg.setDestination(55683U);
    msg.setDestinationEntity(48U);
    msg.type = 45U;
    msg.reason = 112U;
    msg.value = 0.16749283205986842;
    msg.timestep = 0.33859108904562973;

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
    msg.setTimeStamp(0.020453072327657473);
    msg.setSource(62907U);
    msg.setSourceEntity(141U);
    msg.setDestination(30218U);
    msg.setDestinationEntity(186U);
    msg.type = 98U;
    msg.reason = 129U;
    msg.value = 0.43301991655941785;
    msg.timestep = 0.28665629145440197;

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
    msg.setTimeStamp(0.4591810075730586);
    msg.setSource(817U);
    msg.setSourceEntity(32U);
    msg.setDestination(22074U);
    msg.setDestinationEntity(156U);
    msg.type = 40U;
    msg.reason = 120U;
    msg.value = 0.17555285385015829;
    msg.timestep = 0.3542538077269569;

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
    msg.setTimeStamp(0.28043801661035883);
    msg.setSource(55272U);
    msg.setSourceEntity(239U);
    msg.setDestination(40745U);
    msg.setDestinationEntity(188U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GKEPPEDUXVAAINODWCTQSXWCSRKAYYQIXVETIDKNKVLNYKXMJPRWUAEMOHIQYRBIMTHMPZFJXL");
    tmp_msg_0.lat = 0.3082311423940358;
    tmp_msg_0.lon = 0.3246932649069879;
    tmp_msg_0.depth = 0.0012947971320276253;
    tmp_msg_0.query_channel = 251U;
    tmp_msg_0.reply_channel = 171U;
    tmp_msg_0.transponder_delay = 159U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6685028549876652;
    msg.y = 0.05501813722716531;
    msg.var_x = 0.9794187081778224;
    msg.var_y = 0.2609481678779235;
    msg.distance = 0.6869918007544106;

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
    msg.setTimeStamp(0.020457037844541226);
    msg.setSource(30423U);
    msg.setSourceEntity(174U);
    msg.setDestination(46180U);
    msg.setDestinationEntity(250U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QLGHTBMLVXVU");
    tmp_msg_0.lat = 0.8201317185552386;
    tmp_msg_0.lon = 0.4343317006858479;
    tmp_msg_0.depth = 0.6278554749153771;
    tmp_msg_0.query_channel = 0U;
    tmp_msg_0.reply_channel = 4U;
    tmp_msg_0.transponder_delay = 147U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.27373047987821797;
    msg.y = 0.21187665601370176;
    msg.var_x = 0.08728385393930393;
    msg.var_y = 0.9315728049199757;
    msg.distance = 0.023279960618921236;

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
    msg.setTimeStamp(0.870901105226143);
    msg.setSource(62824U);
    msg.setSourceEntity(152U);
    msg.setDestination(18482U);
    msg.setDestinationEntity(128U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TVREUGBXXVECZUZNTQJAHCSBRFHRKGEBFEFXFIPUSUCFUQQJOXPMJIAPOLQZECNRSOAAYOCKSYMQYUBCHZKHPGUXHYVDBKPDDIEYYLJQNXSOSJQGGEZOYAVDRKXWETIXEJMWDFRDTXNBDMZKZJFVOZVQMILCIOHWSWEPONTFLDITKLSYKWNRGKWMAIWNGGMHLNLHBXVWCYBIOTTHJPRDG");
    tmp_msg_0.lat = 0.06424286402178292;
    tmp_msg_0.lon = 0.4720292960175123;
    tmp_msg_0.depth = 0.4340239334458176;
    tmp_msg_0.query_channel = 202U;
    tmp_msg_0.reply_channel = 231U;
    tmp_msg_0.transponder_delay = 90U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.48059038423196787;
    msg.y = 0.4633346042769273;
    msg.var_x = 0.908951296826535;
    msg.var_y = 0.6979977998255416;
    msg.distance = 0.48383400725723114;

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
    msg.setTimeStamp(0.7187042006308788);
    msg.setSource(16682U);
    msg.setSourceEntity(74U);
    msg.setDestination(54464U);
    msg.setDestinationEntity(156U);
    msg.state = 161U;

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
    msg.setTimeStamp(0.3640119368330965);
    msg.setSource(25464U);
    msg.setSourceEntity(129U);
    msg.setDestination(28819U);
    msg.setDestinationEntity(36U);
    msg.state = 88U;

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
    msg.setTimeStamp(0.5836804625584006);
    msg.setSource(53803U);
    msg.setSourceEntity(113U);
    msg.setDestination(36014U);
    msg.setDestinationEntity(98U);
    msg.state = 216U;

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
    msg.setTimeStamp(0.8935170183073821);
    msg.setSource(48234U);
    msg.setSourceEntity(234U);
    msg.setDestination(23762U);
    msg.setDestinationEntity(30U);
    msg.x = 0.7710451121265528;
    msg.y = 0.41929194316553187;
    msg.z = 0.4396390656393552;

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
    msg.setTimeStamp(0.3432454321282906);
    msg.setSource(14882U);
    msg.setSourceEntity(95U);
    msg.setDestination(54589U);
    msg.setDestinationEntity(187U);
    msg.x = 0.4048432887648822;
    msg.y = 0.6246706306046647;
    msg.z = 0.604038039089624;

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
    msg.setTimeStamp(0.0949425756359995);
    msg.setSource(1473U);
    msg.setSourceEntity(236U);
    msg.setDestination(21210U);
    msg.setDestinationEntity(234U);
    msg.x = 0.31976595045916156;
    msg.y = 0.15675793075672528;
    msg.z = 0.10942779249660206;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.8729100555885905);
    msg.setSource(9532U);
    msg.setSourceEntity(134U);
    msg.setDestination(32054U);
    msg.setDestinationEntity(127U);
    msg.value = 0.9771109594981848;

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
    msg.setTimeStamp(0.8257237963764158);
    msg.setSource(16710U);
    msg.setSourceEntity(51U);
    msg.setDestination(33163U);
    msg.setDestinationEntity(196U);
    msg.value = 0.6590339805744824;

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
    msg.setTimeStamp(0.500004811675721);
    msg.setSource(62078U);
    msg.setSourceEntity(87U);
    msg.setDestination(32644U);
    msg.setDestinationEntity(88U);
    msg.value = 0.66570567137794;

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
    msg.setTimeStamp(0.38922372115297754);
    msg.setSource(49359U);
    msg.setSourceEntity(177U);
    msg.setDestination(11415U);
    msg.setDestinationEntity(188U);
    msg.value = 0.8358279856892551;
    msg.z_units = 56U;

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
    msg.setTimeStamp(0.43016511957476367);
    msg.setSource(7867U);
    msg.setSourceEntity(14U);
    msg.setDestination(5940U);
    msg.setDestinationEntity(103U);
    msg.value = 0.36001038105738037;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.6136039534824973);
    msg.setSource(49431U);
    msg.setSourceEntity(188U);
    msg.setDestination(27479U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8873784411882895;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.19957234985943284);
    msg.setSource(5559U);
    msg.setSourceEntity(239U);
    msg.setDestination(18637U);
    msg.setDestinationEntity(188U);
    msg.value = 0.5428077134497968;
    msg.speed_units = 105U;

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
    msg.setTimeStamp(0.3500323680959021);
    msg.setSource(4977U);
    msg.setSourceEntity(135U);
    msg.setDestination(25753U);
    msg.setDestinationEntity(106U);
    msg.value = 0.9151442385667949;
    msg.speed_units = 117U;

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
    msg.setTimeStamp(0.8176853679594922);
    msg.setSource(60413U);
    msg.setSourceEntity(191U);
    msg.setDestination(32392U);
    msg.setDestinationEntity(85U);
    msg.value = 0.18422991515235598;
    msg.speed_units = 104U;

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
    msg.setTimeStamp(0.6968057850194306);
    msg.setSource(857U);
    msg.setSourceEntity(253U);
    msg.setDestination(14749U);
    msg.setDestinationEntity(216U);
    msg.value = 0.5619305402165203;

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
    msg.setTimeStamp(0.16634055405540338);
    msg.setSource(63011U);
    msg.setSourceEntity(0U);
    msg.setDestination(19916U);
    msg.setDestinationEntity(158U);
    msg.value = 0.5988928407749029;

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
    msg.setTimeStamp(0.01685150380849587);
    msg.setSource(27590U);
    msg.setSourceEntity(27U);
    msg.setDestination(38836U);
    msg.setDestinationEntity(53U);
    msg.value = 0.21341252525788712;

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
    msg.setTimeStamp(0.49554413138320363);
    msg.setSource(62753U);
    msg.setSourceEntity(125U);
    msg.setDestination(54873U);
    msg.setDestinationEntity(243U);
    msg.value = 0.40019667269799275;

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
    msg.setTimeStamp(0.09055752902243641);
    msg.setSource(37671U);
    msg.setSourceEntity(27U);
    msg.setDestination(55297U);
    msg.setDestinationEntity(89U);
    msg.value = 0.38384316272930086;

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
    msg.setTimeStamp(0.32492202326231134);
    msg.setSource(65142U);
    msg.setSourceEntity(15U);
    msg.setDestination(39993U);
    msg.setDestinationEntity(230U);
    msg.value = 0.9071544241767733;

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
    msg.setTimeStamp(0.9450759864848431);
    msg.setSource(59248U);
    msg.setSourceEntity(96U);
    msg.setDestination(59514U);
    msg.setDestinationEntity(202U);
    msg.value = 0.5940172015128077;

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
    msg.setTimeStamp(0.1162050795731685);
    msg.setSource(38546U);
    msg.setSourceEntity(78U);
    msg.setDestination(35781U);
    msg.setDestinationEntity(249U);
    msg.value = 0.2804949805155399;

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
    msg.setTimeStamp(0.8738785320050757);
    msg.setSource(4384U);
    msg.setSourceEntity(236U);
    msg.setDestination(7290U);
    msg.setDestinationEntity(238U);
    msg.value = 0.9583854287751894;

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
    msg.setTimeStamp(0.4780757661177444);
    msg.setSource(1630U);
    msg.setSourceEntity(61U);
    msg.setDestination(57907U);
    msg.setDestinationEntity(8U);
    msg.path_ref = 2122186811U;
    msg.start_lat = 0.14234257700294972;
    msg.start_lon = 0.16105817848974346;
    msg.start_z = 0.42986721118015525;
    msg.start_z_units = 59U;
    msg.end_lat = 0.3467945466066318;
    msg.end_lon = 0.03996993303020879;
    msg.end_z = 0.46862310837221455;
    msg.end_z_units = 230U;
    msg.speed = 0.5126294721398976;
    msg.speed_units = 93U;
    msg.lradius = 0.900316744211989;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.20388865984110527);
    msg.setSource(5468U);
    msg.setSourceEntity(79U);
    msg.setDestination(61578U);
    msg.setDestinationEntity(1U);
    msg.path_ref = 1147742857U;
    msg.start_lat = 0.5712937236625587;
    msg.start_lon = 0.5365286370420821;
    msg.start_z = 0.9239711051376448;
    msg.start_z_units = 12U;
    msg.end_lat = 0.4527116569996942;
    msg.end_lon = 0.7612966234918995;
    msg.end_z = 0.20530591255006425;
    msg.end_z_units = 134U;
    msg.speed = 0.4121841117555729;
    msg.speed_units = 226U;
    msg.lradius = 0.960643249119202;
    msg.flags = 243U;

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
    msg.setTimeStamp(0.0696401989298574);
    msg.setSource(23029U);
    msg.setSourceEntity(85U);
    msg.setDestination(3074U);
    msg.setDestinationEntity(190U);
    msg.path_ref = 3558949047U;
    msg.start_lat = 0.6533017211490563;
    msg.start_lon = 0.5653602682958987;
    msg.start_z = 0.5432463943375518;
    msg.start_z_units = 37U;
    msg.end_lat = 0.6891242057290811;
    msg.end_lon = 0.429156955301773;
    msg.end_z = 0.8692317114858584;
    msg.end_z_units = 185U;
    msg.speed = 0.028230070841386845;
    msg.speed_units = 28U;
    msg.lradius = 0.23273948935296873;
    msg.flags = 106U;

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
    msg.setTimeStamp(0.8742653720913302);
    msg.setSource(2030U);
    msg.setSourceEntity(180U);
    msg.setDestination(22719U);
    msg.setDestinationEntity(198U);
    msg.x = 0.3990016841235505;
    msg.y = 0.05499405022889414;
    msg.z = 0.7056709362601067;
    msg.k = 0.33950216861476035;
    msg.m = 0.8487436709701438;
    msg.n = 0.8863959143069022;
    msg.flags = 43U;

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
    msg.setTimeStamp(0.8422981037794316);
    msg.setSource(36195U);
    msg.setSourceEntity(117U);
    msg.setDestination(14105U);
    msg.setDestinationEntity(213U);
    msg.x = 0.5130673001082553;
    msg.y = 0.7453552127354204;
    msg.z = 0.0582492910090312;
    msg.k = 0.8141066936495565;
    msg.m = 0.6826770158677105;
    msg.n = 0.23811391568211693;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.8280370804685465);
    msg.setSource(31648U);
    msg.setSourceEntity(46U);
    msg.setDestination(34987U);
    msg.setDestinationEntity(149U);
    msg.x = 0.5985006616859709;
    msg.y = 0.9977420300260387;
    msg.z = 0.37893722721843404;
    msg.k = 0.4585251927107822;
    msg.m = 0.3455272561386613;
    msg.n = 0.20526256341681137;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.7788417710011293);
    msg.setSource(7138U);
    msg.setSourceEntity(93U);
    msg.setDestination(53031U);
    msg.setDestinationEntity(87U);
    msg.value = 0.5605131929114209;

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
    msg.setTimeStamp(0.28677530976749);
    msg.setSource(53846U);
    msg.setSourceEntity(169U);
    msg.setDestination(40518U);
    msg.setDestinationEntity(66U);
    msg.value = 0.16912322066145757;

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
    msg.setTimeStamp(0.5002712431714242);
    msg.setSource(3717U);
    msg.setSourceEntity(137U);
    msg.setDestination(26672U);
    msg.setDestinationEntity(212U);
    msg.value = 0.883456403696808;

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
    msg.setTimeStamp(0.1869616000366452);
    msg.setSource(6909U);
    msg.setSourceEntity(169U);
    msg.setDestination(30613U);
    msg.setDestinationEntity(172U);
    msg.u = 0.6294289637040489;
    msg.v = 0.6119482982386103;
    msg.w = 0.47568225315959844;
    msg.p = 0.49558229347519633;
    msg.q = 0.8414165241377738;
    msg.r = 0.40417119321499195;
    msg.flags = 67U;

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
    msg.setTimeStamp(0.5879526975605269);
    msg.setSource(58852U);
    msg.setSourceEntity(75U);
    msg.setDestination(30543U);
    msg.setDestinationEntity(31U);
    msg.u = 0.8426988303882271;
    msg.v = 0.48120260024511374;
    msg.w = 0.4755673801534904;
    msg.p = 0.4896436622670215;
    msg.q = 0.17840453721773852;
    msg.r = 0.46064186871680746;
    msg.flags = 174U;

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
    msg.setTimeStamp(0.3360635482950075);
    msg.setSource(42571U);
    msg.setSourceEntity(212U);
    msg.setDestination(20877U);
    msg.setDestinationEntity(59U);
    msg.u = 0.37302642602221003;
    msg.v = 0.5860581819897318;
    msg.w = 0.8109150942343003;
    msg.p = 0.7496311014977758;
    msg.q = 0.0012493025754012343;
    msg.r = 0.8118651754013321;
    msg.flags = 54U;

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
    msg.setTimeStamp(0.09654979999609903);
    msg.setSource(40771U);
    msg.setSourceEntity(4U);
    msg.setDestination(31734U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 3571106191U;
    msg.start_lat = 0.05564760568847649;
    msg.start_lon = 0.2472417825085872;
    msg.start_z = 0.5771518161939083;
    msg.start_z_units = 182U;
    msg.end_lat = 0.6165663502667739;
    msg.end_lon = 0.6421427703894431;
    msg.end_z = 0.2446392324476485;
    msg.end_z_units = 16U;
    msg.lradius = 0.6492894039277551;
    msg.flags = 197U;
    msg.x = 0.9699363696445561;
    msg.y = 0.9583169884743836;
    msg.z = 0.4162534555950409;
    msg.vx = 0.12963930172573068;
    msg.vy = 0.6040670856475913;
    msg.vz = 0.7862710888953149;
    msg.course_error = 0.4092486507291594;
    msg.eta = 47250U;

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
    msg.setTimeStamp(0.8775787838215824);
    msg.setSource(42919U);
    msg.setSourceEntity(46U);
    msg.setDestination(44639U);
    msg.setDestinationEntity(103U);
    msg.path_ref = 2380212302U;
    msg.start_lat = 0.9134909945446545;
    msg.start_lon = 0.43056303028148946;
    msg.start_z = 0.5833046392287399;
    msg.start_z_units = 80U;
    msg.end_lat = 0.27647251630661274;
    msg.end_lon = 0.7194786812035907;
    msg.end_z = 0.688108482668281;
    msg.end_z_units = 165U;
    msg.lradius = 0.023762437579346152;
    msg.flags = 207U;
    msg.x = 0.20972283497753952;
    msg.y = 0.5642552147431041;
    msg.z = 0.5545707882435494;
    msg.vx = 0.08516089009249073;
    msg.vy = 0.06134905115110334;
    msg.vz = 0.7227166226726842;
    msg.course_error = 0.9425413277261203;
    msg.eta = 48862U;

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
    msg.setTimeStamp(0.4548225226451881);
    msg.setSource(46965U);
    msg.setSourceEntity(58U);
    msg.setDestination(65282U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 1499605479U;
    msg.start_lat = 0.42622115798369287;
    msg.start_lon = 0.28108211357919033;
    msg.start_z = 0.3062867174904248;
    msg.start_z_units = 11U;
    msg.end_lat = 0.0977386022349781;
    msg.end_lon = 0.18716649903158933;
    msg.end_z = 0.8897995863706541;
    msg.end_z_units = 108U;
    msg.lradius = 0.14530476883166032;
    msg.flags = 14U;
    msg.x = 0.391312188028058;
    msg.y = 0.6107344612856046;
    msg.z = 0.3452922352593323;
    msg.vx = 0.667303977031405;
    msg.vy = 0.11204498786672135;
    msg.vz = 0.8975820912797822;
    msg.course_error = 0.6559606120279492;
    msg.eta = 2926U;

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
    msg.setTimeStamp(0.9088942834620055);
    msg.setSource(36420U);
    msg.setSourceEntity(254U);
    msg.setDestination(10586U);
    msg.setDestinationEntity(188U);
    msg.k = 0.12987944575698318;
    msg.m = 0.41482068962745156;
    msg.n = 0.08927573513893516;

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
    msg.setTimeStamp(0.8968726406472899);
    msg.setSource(13604U);
    msg.setSourceEntity(16U);
    msg.setDestination(3078U);
    msg.setDestinationEntity(153U);
    msg.k = 0.6550172197110133;
    msg.m = 0.7746361156802363;
    msg.n = 0.2738031877304261;

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
    msg.setTimeStamp(0.5596864614526118);
    msg.setSource(41006U);
    msg.setSourceEntity(150U);
    msg.setDestination(51780U);
    msg.setDestinationEntity(185U);
    msg.k = 0.4059102534238226;
    msg.m = 0.41366405684204366;
    msg.n = 0.40847685849333415;

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
    msg.setTimeStamp(0.9193467352192988);
    msg.setSource(38783U);
    msg.setSourceEntity(18U);
    msg.setDestination(53492U);
    msg.setDestinationEntity(251U);
    msg.p = 0.9499050720624792;
    msg.i = 0.009559705816888031;
    msg.d = 0.5875528372274713;
    msg.a = 0.6430609065513448;

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
    msg.setTimeStamp(0.9799795215589402);
    msg.setSource(64031U);
    msg.setSourceEntity(85U);
    msg.setDestination(22053U);
    msg.setDestinationEntity(1U);
    msg.p = 0.6498227643220976;
    msg.i = 0.6505522023614524;
    msg.d = 0.924482852751672;
    msg.a = 0.3933667323751182;

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
    msg.setTimeStamp(0.32676075969655305);
    msg.setSource(10921U);
    msg.setSourceEntity(130U);
    msg.setDestination(27552U);
    msg.setDestinationEntity(78U);
    msg.p = 0.21409544083376253;
    msg.i = 0.09339480457617677;
    msg.d = 0.5918145752497984;
    msg.a = 0.9336944082063796;

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
    msg.setTimeStamp(0.2918798982641635);
    msg.setSource(24216U);
    msg.setSourceEntity(139U);
    msg.setDestination(35092U);
    msg.setDestinationEntity(124U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.8879676641272791);
    msg.setSource(14855U);
    msg.setSourceEntity(223U);
    msg.setDestination(45350U);
    msg.setDestinationEntity(231U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.6825434306928332);
    msg.setSource(5227U);
    msg.setSourceEntity(120U);
    msg.setDestination(40481U);
    msg.setDestinationEntity(111U);
    msg.op = 13U;

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
    IMC::Goto msg;
    msg.setTimeStamp(0.6795865877470185);
    msg.setSource(37724U);
    msg.setSourceEntity(192U);
    msg.setDestination(34132U);
    msg.setDestinationEntity(132U);
    msg.timeout = 53478U;
    msg.lat = 0.8654157421833913;
    msg.lon = 0.18071954611750607;
    msg.z = 0.3764614689389363;
    msg.z_units = 162U;
    msg.speed = 0.7218030529017608;
    msg.speed_units = 14U;
    msg.roll = 0.5521426402039892;
    msg.pitch = 0.273590272298457;
    msg.yaw = 0.3862990298121095;
    msg.custom.assign("WVLRGWHSBDJNSSHDCUYLXFGUMJKPLQEYQOMGYGYNFAVXKLCZDKDBEFXGHOOVTXTGZAEFUJTHLGLITZQMCHVKKJDBOPPYJERFLEYIWFMHXRFOXUUQXKAIJTNINK");

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
    msg.setTimeStamp(0.323208675439164);
    msg.setSource(17971U);
    msg.setSourceEntity(152U);
    msg.setDestination(13788U);
    msg.setDestinationEntity(196U);
    msg.timeout = 10164U;
    msg.lat = 0.13544714418394743;
    msg.lon = 0.9850264458310956;
    msg.z = 0.015249897583117678;
    msg.z_units = 239U;
    msg.speed = 0.2630948374535159;
    msg.speed_units = 80U;
    msg.roll = 0.7200349594810623;
    msg.pitch = 0.36283202467044073;
    msg.yaw = 0.5430347417787871;
    msg.custom.assign("OBWEUSXUQPTPKWPHCKYYMJJHFYVVWIBGTXGWIIPORIZTAQSQMVDOHYJJECCMMXBMAFPDRAHTTFLMTKTMKDDHDGOSEEYRINNABFLVOGIREONKPEUZCVHLRPGXEIJGKCWDXXWGJLOFNSTZASYNBVWC");

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
    msg.setTimeStamp(0.41831591483809694);
    msg.setSource(35142U);
    msg.setSourceEntity(86U);
    msg.setDestination(51310U);
    msg.setDestinationEntity(64U);
    msg.timeout = 22487U;
    msg.lat = 0.00439623890889318;
    msg.lon = 0.46279853692177453;
    msg.z = 0.4068357886332056;
    msg.z_units = 154U;
    msg.speed = 0.8119454697183105;
    msg.speed_units = 83U;
    msg.roll = 0.8048291882391327;
    msg.pitch = 0.20282751454476577;
    msg.yaw = 0.4512462977188102;
    msg.custom.assign("KZCHGRDIMCZDYGGUXTJHEFRCUNQDFUUGDXJCBBFQLRFZRIRKXTQEQZIKYFJANMVTGWFDIJANBWALSDZSJARVPCHTFWMVPBEQMQUVVCIAZQTWPEDJGXXBKUJY");

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
    msg.setTimeStamp(0.8265111825288313);
    msg.setSource(5419U);
    msg.setSourceEntity(24U);
    msg.setDestination(52954U);
    msg.setDestinationEntity(80U);
    msg.timeout = 41338U;
    msg.lat = 0.11029404042154678;
    msg.lon = 0.5730025796062126;
    msg.z = 0.6434183996732148;
    msg.z_units = 109U;
    msg.speed = 0.8404604750614234;
    msg.speed_units = 87U;
    msg.duration = 40174U;
    msg.radius = 0.31533144178818096;
    msg.flags = 102U;
    msg.custom.assign("GQVSOIGSULBKROIJSKZAAUQKPZOQKNMMCFRJWMZSWMLGXTZDKVNABOLSAJOIDNNXSVHODEXNGUQYDCHUBZQVKGEW");

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
    msg.setTimeStamp(0.7733753478527008);
    msg.setSource(63588U);
    msg.setSourceEntity(31U);
    msg.setDestination(27991U);
    msg.setDestinationEntity(19U);
    msg.timeout = 7880U;
    msg.lat = 0.04784660349519532;
    msg.lon = 0.713245876506544;
    msg.z = 0.863734449638849;
    msg.z_units = 245U;
    msg.speed = 0.5614927113055584;
    msg.speed_units = 13U;
    msg.duration = 16512U;
    msg.radius = 0.49445597161072175;
    msg.flags = 187U;
    msg.custom.assign("RDRGWDZEDTJYRLVUHVWNHOUGJQEPHTOOOICQGUHQCJLSDMVXEKMCMMVXSIXTZDEUCMBFOTHAIPQZZMISJKRBYENNJGDOPCOMTHHGNNNKFCNJSSZVRERAYVYYZBQZGBFXBVAXJAHKIIFUWFKJLLRCWCFRCRPIZGGPPMUUAPTTPNUHNXGSDBLXFDAKZBTLXKIPSUKA");

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
    msg.setTimeStamp(0.41678043867383496);
    msg.setSource(64949U);
    msg.setSourceEntity(41U);
    msg.setDestination(39406U);
    msg.setDestinationEntity(217U);
    msg.timeout = 12618U;
    msg.lat = 0.05133538474715993;
    msg.lon = 0.7129401557662705;
    msg.z = 0.320562128232293;
    msg.z_units = 75U;
    msg.speed = 0.8352947355246361;
    msg.speed_units = 134U;
    msg.duration = 11525U;
    msg.radius = 0.6555686009491044;
    msg.flags = 131U;
    msg.custom.assign("OEJKQGGRRCUERJVVMFSNTDZYICIFG");

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
    msg.setTimeStamp(0.3787424463168706);
    msg.setSource(21987U);
    msg.setSourceEntity(224U);
    msg.setDestination(63005U);
    msg.setDestinationEntity(232U);
    msg.custom.assign("GAPBVGFYAXWEFOUPKGXSIIWGXPQBKLFQNNVRZGMDDYDJKNGOZXHKWPTDHYEVFDGEL");

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
    msg.setTimeStamp(0.8512700014189113);
    msg.setSource(57374U);
    msg.setSourceEntity(235U);
    msg.setDestination(30015U);
    msg.setDestinationEntity(63U);
    msg.custom.assign("YXCXCJATHGDUMPVYPTEVNWLOQTURFVHCUSEVXLWPOIDAFEYVKQWKCIHJGXQFCUKGSQNPATDNRIBXWONNMMFGYONEGZSILYAPOJSLVXSLDTEJJRWKVOMZABDPQBFZMEENNODQGHUWBXBQHBSCSJIUDBUDHESMFAJJYICGVHIZRGGRRJURQWZZYBFAJZ");

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
    msg.setTimeStamp(0.516747529793894);
    msg.setSource(25888U);
    msg.setSourceEntity(247U);
    msg.setDestination(21784U);
    msg.setDestinationEntity(65U);
    msg.custom.assign("BAGKVKMSHATNQTHCCFCESYJUEOADNLHYOWOCPIVXKYWHTDBYNRDVBWEOSYWQZKWFYNNLCURVEZDSWXANIXTVJPZTRBFLAKMGLXEQMFLVZQQSJOLKGLHJPFVFGUDUONBEQNKALBOUGOYSJMFUUHIBKURFWERMZINLHESTGQYXTQANIFGRGRPXSABYBQVCVMIACWEVHJPDRZPCITSPAZL");

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
    msg.setTimeStamp(0.9549854993274568);
    msg.setSource(3420U);
    msg.setSourceEntity(51U);
    msg.setDestination(39888U);
    msg.setDestinationEntity(169U);
    msg.timeout = 23461U;
    msg.lat = 0.05950192892183925;
    msg.lon = 0.8505509650192764;
    msg.z = 0.6679351461886929;
    msg.z_units = 34U;
    msg.duration = 54861U;
    msg.speed = 0.92268026151426;
    msg.speed_units = 206U;
    msg.type = 86U;
    msg.radius = 0.5518677983916828;
    msg.length = 0.7170411385367604;
    msg.bearing = 0.039306926889034144;
    msg.direction = 116U;
    msg.custom.assign("KTCOHFGTNZOQV");

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
    msg.setTimeStamp(0.4074084590208118);
    msg.setSource(9640U);
    msg.setSourceEntity(66U);
    msg.setDestination(11049U);
    msg.setDestinationEntity(79U);
    msg.timeout = 19264U;
    msg.lat = 0.8468419414582037;
    msg.lon = 0.32010401861060256;
    msg.z = 0.4621355336264037;
    msg.z_units = 191U;
    msg.duration = 23244U;
    msg.speed = 0.21928158827679345;
    msg.speed_units = 140U;
    msg.type = 33U;
    msg.radius = 0.9327552459464818;
    msg.length = 0.9250715750167796;
    msg.bearing = 0.9819985034355567;
    msg.direction = 57U;
    msg.custom.assign("QHJMJUAYMVQTIFNFBZSHC");

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
    msg.setTimeStamp(0.7047475605323529);
    msg.setSource(48431U);
    msg.setSourceEntity(105U);
    msg.setDestination(24065U);
    msg.setDestinationEntity(155U);
    msg.timeout = 9615U;
    msg.lat = 0.8116976089981757;
    msg.lon = 0.9562042689738024;
    msg.z = 0.36818098388846654;
    msg.z_units = 132U;
    msg.duration = 61463U;
    msg.speed = 0.6009864469067256;
    msg.speed_units = 196U;
    msg.type = 193U;
    msg.radius = 0.40307814814041343;
    msg.length = 0.3145618355176433;
    msg.bearing = 0.6424616925541324;
    msg.direction = 51U;
    msg.custom.assign("PDGRHNHGCEHMNBXVKQLGXESJWRNJLYXORWTMDMIWTTOVKVBCEHDRYVERMDLZDPXKCHRPSFKUERPKZ");

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
    msg.setTimeStamp(0.3054173572652995);
    msg.setSource(38255U);
    msg.setSourceEntity(239U);
    msg.setDestination(38455U);
    msg.setDestinationEntity(175U);
    msg.duration = 16142U;
    msg.custom.assign("AOSMHLBAUKPYXPCXTQTICNATDQYOVJMIRJZTSWHEEGRTZJQGKIXXYSWAKPNMJLBAVDRUBXXERLBCFVVCYDODFEWRSAJHNLYEBUTDQUKBGXLKXVROZGOYICWCRPLTEPKSCJTDPHFCHOQYINAOOWPGSNWKSNIIQEQBBSODZDHPUNBI");

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
    msg.setTimeStamp(0.549951804206365);
    msg.setSource(18287U);
    msg.setSourceEntity(161U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(102U);
    msg.duration = 1507U;
    msg.custom.assign("DTDZQRGNHALFYMKXWXSROBDKQAWPNMNH");

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
    msg.setTimeStamp(0.46856720723246736);
    msg.setSource(9841U);
    msg.setSourceEntity(40U);
    msg.setDestination(58844U);
    msg.setDestinationEntity(101U);
    msg.duration = 37625U;
    msg.custom.assign("XTJLHIGRBIGMFSZLLJVJEJVZXTFFEGSUWFXWDLGDRYNARHNTSXCNARGILBGBKDQWVREWHPKDIORUBVOKOEPFHLBJWDUHAJCVTBQGECYCMBOKDKMKUWHXXYWEGCSPUFMEQIAQESLRCFDPPFVCDOTWESNOSLXZUJKZMMIYBSNCJYFRMKQZCSIZ");

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
    msg.setTimeStamp(0.6062469047322786);
    msg.setSource(4112U);
    msg.setSourceEntity(142U);
    msg.setDestination(60550U);
    msg.setDestinationEntity(80U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.5148883253805075;
    tmp_msg_0.z_units = 238U;
    msg.control.set(tmp_msg_0);
    msg.duration = 9125U;
    msg.custom.assign("AVQFNKYAFIKMIUSZTUOXCPLWKQGEDRRFHUASDVTGLMKSLSYSMDPYSYAVTZIHXEJWMFDZUAKBQZHBBJNPKFOIGVBOSJNUCDREJOOKDUWXVENBAZQVPMCBEL");

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
    msg.setTimeStamp(0.47339008272332195);
    msg.setSource(21257U);
    msg.setSourceEntity(141U);
    msg.setDestination(60942U);
    msg.setDestinationEntity(233U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.18837267645294398;
    msg.control.set(tmp_msg_0);
    msg.duration = 4236U;
    msg.custom.assign("SJPIHKUBYCLFARZBVQGYERCLLEEFLCQKPCYIHJXIQDOEKCRUKMFWLNMZPUTXLKAOBABJFZIAIQSGWDRUHGKPNJGEBEWJLCSGXSGJUENQWHLLDJGXVKWVCNRDUTUEOAZIZDTPEYVIBTBTTUVVTYFTCBOOSHWHHJYMQXGBUWYVSKNHZDYYDNAZZNOMVNHMNRWDCAZAOFSHXZOQIMJMRNDTAQLOSXTOKXXAYFBQDMFKXUCIRGRMMPSWIVPFSP");

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
    msg.setTimeStamp(0.6566782888130046);
    msg.setSource(40219U);
    msg.setSourceEntity(72U);
    msg.setDestination(12536U);
    msg.setDestinationEntity(175U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.06819987126648763;
    tmp_msg_0.speed_units = 60U;
    msg.control.set(tmp_msg_0);
    msg.duration = 56314U;
    msg.custom.assign("LECGPNQZGVQANLMGTFEVW");

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
    msg.setTimeStamp(0.5101110558660085);
    msg.setSource(19595U);
    msg.setSourceEntity(41U);
    msg.setDestination(36112U);
    msg.setDestinationEntity(235U);
    msg.timeout = 42830U;
    msg.lat = 0.20596995338436996;
    msg.lon = 0.864337816635611;
    msg.z = 0.1687867141384285;
    msg.z_units = 201U;
    msg.speed = 0.7366050972313255;
    msg.speed_units = 80U;
    msg.bearing = 0.47453466248188003;
    msg.cross_angle = 0.18357809863895558;
    msg.width = 0.6272340555788647;
    msg.length = 0.3607398705245545;
    msg.hstep = 0.5381334246162072;
    msg.coff = 34U;
    msg.alternation = 75U;
    msg.flags = 58U;
    msg.custom.assign("QRTBWBZICKXMYFRUCAGZMLPWJELLUBAMMRFOZEQJGXDODUFGDOQGKZQHJXRRQTTAWZOGUIKMRSKILSEWDPYRPPULAVQAKVUDKUYPHJKVBRJQAMMBWGTCWVLWSTDYYEJTCOIHNMANOUTSOVJFVCVSYPKTZIIDEEHPYBNHFOOJBWTRYZXNCGLFQRBNDNGIZTEFNAXYWKLZEXXUFSCNBMFCDQFCNKQPPIHWHSHV");

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
    msg.setTimeStamp(0.7339197828546351);
    msg.setSource(55900U);
    msg.setSourceEntity(27U);
    msg.setDestination(30989U);
    msg.setDestinationEntity(177U);
    msg.timeout = 1712U;
    msg.lat = 0.14732826509710428;
    msg.lon = 0.06698427169177024;
    msg.z = 0.589768911126228;
    msg.z_units = 16U;
    msg.speed = 0.43880693024694517;
    msg.speed_units = 245U;
    msg.bearing = 0.5688900064091063;
    msg.cross_angle = 0.7031383113314145;
    msg.width = 0.02779645017742005;
    msg.length = 0.07896998658360099;
    msg.hstep = 0.7892575964095159;
    msg.coff = 155U;
    msg.alternation = 79U;
    msg.flags = 46U;
    msg.custom.assign("UIHXOXRNNGZYQBCTTKGJLDLXVRHKWEKNFMVDXYJXJHIFIWSVRABJWEEYZIQWFLQHGLPUECGURRNLDBJUIPNCYQTKDXQVNNDRMTOSMYJYIERPLEAOFZCTGXPFZGJBCMQVIOKHHZVBQIPUGHHCSZJQMOMSOAAZORVWPCFPTKNKFVSIMWATFEBGR");

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
    msg.setTimeStamp(0.35043153309176456);
    msg.setSource(381U);
    msg.setSourceEntity(50U);
    msg.setDestination(10937U);
    msg.setDestinationEntity(153U);
    msg.timeout = 29615U;
    msg.lat = 0.2596006077435077;
    msg.lon = 0.5767149182717068;
    msg.z = 0.9486258856869842;
    msg.z_units = 171U;
    msg.speed = 0.1162842676602267;
    msg.speed_units = 170U;
    msg.bearing = 0.4091856758850777;
    msg.cross_angle = 0.7026498490105747;
    msg.width = 0.7788532600073683;
    msg.length = 0.07772559646333621;
    msg.hstep = 0.2607571242397565;
    msg.coff = 180U;
    msg.alternation = 137U;
    msg.flags = 101U;
    msg.custom.assign("APBCHOVDGMQIRAFYIDOWPBPGUEQUIXDUHQYHEHDEJZIXTRXBTVLQABCANYYIPCLGTQWILUJFRUZTXKDRMYZFFFLEXKBAAA");

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
    msg.setTimeStamp(0.30165033663629737);
    msg.setSource(5192U);
    msg.setSourceEntity(100U);
    msg.setDestination(48217U);
    msg.setDestinationEntity(116U);
    msg.timeout = 9079U;
    msg.lat = 0.07626270134131097;
    msg.lon = 0.6562915529331886;
    msg.z = 0.8418574997489996;
    msg.z_units = 99U;
    msg.speed = 0.24531685534700998;
    msg.speed_units = 167U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6866792726340514;
    tmp_msg_0.y = 0.18077993166543838;
    tmp_msg_0.z = 0.9389384019392036;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LMNCJMJYESZYXORFXOQWVEPSVKNHRKORIEXEITSDVZWNOGQJGSNPJJDEBHMTBFXPYWNYRLBWHKTFHGDSPVRXKBGONHVZJYPBTMJZMOCFIWEYAHXORKWLNZCQVSGAAMQHTLTOKVCHEMBXLDWRDQDCCQLAGGAVQKHHTDBWVCKURDUSUDAOYIFABWFPIUYPMUYNGYRJGTC");

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
    msg.setTimeStamp(0.23175913765213907);
    msg.setSource(33640U);
    msg.setSourceEntity(250U);
    msg.setDestination(52269U);
    msg.setDestinationEntity(89U);
    msg.timeout = 3884U;
    msg.lat = 0.665762004486062;
    msg.lon = 0.9212855963919124;
    msg.z = 0.8713352410165709;
    msg.z_units = 224U;
    msg.speed = 0.9748316026209666;
    msg.speed_units = 146U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4871383119010574;
    tmp_msg_0.y = 0.06331293425772977;
    tmp_msg_0.z = 0.6975422251788239;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KSVTJOSMMHYIKPPQBHAOUAAXRMZFTUXLVRFGAQSVVYXIFUMUNVBRYEJPFSXAQXIVGPRAJPQURZWEDBCHWCVQWIMYQYBJFLPMTRRMJCCNJBQXTWZSHJHHREESBDNKJAUHONKSUMNFIBLCRWHYZOCCJNGLGDDPULTIUFZRLDFOKTEEHKDGWCWEGTIDYGNBNTNS");

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
    msg.setTimeStamp(0.9310159866750345);
    msg.setSource(12404U);
    msg.setSourceEntity(51U);
    msg.setDestination(511U);
    msg.setDestinationEntity(225U);
    msg.timeout = 65520U;
    msg.lat = 0.4753095863148141;
    msg.lon = 0.6476768696336792;
    msg.z = 0.5825527647102582;
    msg.z_units = 49U;
    msg.speed = 0.23681776707471724;
    msg.speed_units = 131U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.3203976704013969;
    tmp_msg_0.y = 0.3792457264936058;
    tmp_msg_0.z = 0.1022032435082525;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QXVDCWNJRLNBTPUYJHIXBEGZCNYQTUVWULSVSZCOLQTBGRHKQEGJBARTSIHYJJHCNDSEJFXZYXWPQUAGOOIOZNMDMOQARWPWTA");

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
    msg.setTimeStamp(0.5892481199587184);
    msg.setSource(15285U);
    msg.setSourceEntity(88U);
    msg.setDestination(27636U);
    msg.setDestinationEntity(25U);
    msg.x = 0.10439378186565529;
    msg.y = 0.7891697106566498;
    msg.z = 0.1339504543348674;

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
    msg.setTimeStamp(0.8211306311671625);
    msg.setSource(57686U);
    msg.setSourceEntity(115U);
    msg.setDestination(41392U);
    msg.setDestinationEntity(44U);
    msg.x = 0.10362894503901798;
    msg.y = 0.9510288248651372;
    msg.z = 0.5726407881189267;

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
    msg.setTimeStamp(0.2848554907987726);
    msg.setSource(16224U);
    msg.setSourceEntity(81U);
    msg.setDestination(63126U);
    msg.setDestinationEntity(67U);
    msg.x = 0.4871586448711279;
    msg.y = 0.5301630486803169;
    msg.z = 0.09404400713458294;

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
    msg.setTimeStamp(0.1750821406277009);
    msg.setSource(10907U);
    msg.setSourceEntity(217U);
    msg.setDestination(41867U);
    msg.setDestinationEntity(110U);
    msg.timeout = 33133U;
    msg.lat = 0.31327936651832256;
    msg.lon = 0.5311613918006103;
    msg.z = 0.23515047980769976;
    msg.z_units = 150U;
    msg.amplitude = 0.736378194828446;
    msg.pitch = 0.6079713505165084;
    msg.speed = 0.6000162195075877;
    msg.speed_units = 249U;
    msg.custom.assign("HPYLRESUDORCGYPPWTKTFMWJLRFGXDIBEPZQIXWOAJUVJVQNKGNGSEGHCUMCNBHFFLHQBTAXJFHASXLJZKTVSJTXKNVNOCAUYJKDSYBMEZDYCRYLMICHBQXESZHUQJIGTRQJQWDZSRPPJWABRLHFCATGTXFUDMDLCMR");

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
    msg.setTimeStamp(0.062378042543508094);
    msg.setSource(32696U);
    msg.setSourceEntity(81U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(142U);
    msg.timeout = 52636U;
    msg.lat = 0.12905359399010163;
    msg.lon = 0.7271462700921816;
    msg.z = 0.9716264148728416;
    msg.z_units = 205U;
    msg.amplitude = 0.13152129375018184;
    msg.pitch = 0.25444013766274476;
    msg.speed = 0.8840155524853218;
    msg.speed_units = 66U;
    msg.custom.assign("QCLLAMKWJGGNCJAWZTNORGGVBEHN");

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
    msg.setTimeStamp(0.5955861672518024);
    msg.setSource(43083U);
    msg.setSourceEntity(169U);
    msg.setDestination(4965U);
    msg.setDestinationEntity(172U);
    msg.timeout = 11275U;
    msg.lat = 0.6299852352227727;
    msg.lon = 0.8137014211969001;
    msg.z = 0.2793355096511473;
    msg.z_units = 4U;
    msg.amplitude = 0.6927568722801158;
    msg.pitch = 0.622318080826776;
    msg.speed = 0.03167552848521249;
    msg.speed_units = 232U;
    msg.custom.assign("CGRVTDEJGWMCWQFCPUKTLZHPKBTSUJQXXMZTQBYFAYJZZAMKJOEBRXESUAVOSNHUNEXYGKQTIRLRJCLASULYXBYBHGNAMVZCIIIUHYNCHOBIFAXOYVSKDMOFIZMFNOZEQDLMYPDIWNBGBQJKGPWYDRCVLKDSKOCZJEQPFZMFQNLEPRPSSLTWEYUTGVHUUAVWMHQGNHFLRVDFXDJBKSJWLIMNTGXCVPECVXWKXRAOTDTZ");

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
    msg.setTimeStamp(0.018189770125386584);
    msg.setSource(51456U);
    msg.setSourceEntity(17U);
    msg.setDestination(45491U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.45598879625778344);
    msg.setSource(48239U);
    msg.setSourceEntity(3U);
    msg.setDestination(27376U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.41691569992870947);
    msg.setSource(27608U);
    msg.setSourceEntity(41U);
    msg.setDestination(14416U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.43129672615390413);
    msg.setSource(60112U);
    msg.setSourceEntity(33U);
    msg.setDestination(55883U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.9794578135566773;
    msg.lon = 0.00925762883572867;
    msg.z = 0.02525433821325529;
    msg.z_units = 34U;
    msg.radius = 0.596453310903491;
    msg.duration = 26251U;
    msg.speed = 0.17245060743784324;
    msg.speed_units = 88U;
    msg.custom.assign("LKIJRFPWPOQCENXDYRAUODIMKWNBANMIPBXVVVBPBZXFIROIFQJTWZCNJGITPKVLXLUYWHRBVRUUGXONRQHJJZZVRUEJDGVCSGK");

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
    msg.setTimeStamp(0.948299679954953);
    msg.setSource(11129U);
    msg.setSourceEntity(70U);
    msg.setDestination(39265U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.977788578392779;
    msg.lon = 0.7682693598741404;
    msg.z = 0.005994550405135857;
    msg.z_units = 214U;
    msg.radius = 0.14677807552180844;
    msg.duration = 61403U;
    msg.speed = 0.14349722355043615;
    msg.speed_units = 120U;
    msg.custom.assign("FDLDLEGYDQWXMVHQJAFMDJBFUYKMZJXQXKPEDCCZMJUKXEBKWPLOBDOEBJNUUDASTRWMBPRNIRKADJQFTSPTEBIIMIDFWRYSUOZYEQUEWIISGZYZWBQILFJYGMLSTONCFQFVRPHNVKTGEGGOWVTVKFVDSOYHKLAXCSCAAVHMVRYNLHO");

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
    msg.setTimeStamp(0.5501470333328352);
    msg.setSource(38390U);
    msg.setSourceEntity(182U);
    msg.setDestination(31792U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.44005672135701857;
    msg.lon = 0.06772424659708631;
    msg.z = 0.552839008258842;
    msg.z_units = 241U;
    msg.radius = 0.15679805164811522;
    msg.duration = 55342U;
    msg.speed = 0.20295673677083037;
    msg.speed_units = 143U;
    msg.custom.assign("OQKCINXHPEIZFULVMLDSAXVECFXWPBAQJQACAQULNMUESZPQTMANXGNTHYCKPWFPTXRWWUUHDSSBDYGQIXGPSOCGOQBXMVOVQBZYHYDVTWCHRJZJFLARKKMXBFPEAVHKZNNKHDZKLZICJGARJFDEFYSTKVXZOGBMWEJKRINOLWUKHYQIUVGMTISJUATE");

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
    msg.setTimeStamp(0.8874365394880072);
    msg.setSource(21301U);
    msg.setSourceEntity(42U);
    msg.setDestination(5230U);
    msg.setDestinationEntity(66U);
    msg.timeout = 38931U;
    msg.flags = 59U;
    msg.lat = 0.8836122483028822;
    msg.lon = 0.1356750106672867;
    msg.start_z = 0.4839138380361845;
    msg.start_z_units = 116U;
    msg.end_z = 0.029251731093654754;
    msg.end_z_units = 172U;
    msg.radius = 0.37193493780899356;
    msg.speed = 0.7696332376811638;
    msg.speed_units = 203U;
    msg.custom.assign("FSUBNQUSDSUVMMZLPBKEYSBRWAACOHGACHDFOYBXPEFLGDUKEEPFJZTNPNCKGBTOPDWEWGVRRIHVQMKAMGYIXAKWWTJDIYKHQZTCUVNILHGIZFBMLPBNVDEWJIWLOEFDHTVCCUVIBZLQOKLYYLYSJFJJJJXPNQSHQTFQELNQETTQLGOUISHMHONPBOQYGOIGUVVXRCZDUWXZRNWXXZAAZXUDTJPKMRZWXRKSKCO");

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
    msg.setTimeStamp(0.715398850883249);
    msg.setSource(38016U);
    msg.setSourceEntity(201U);
    msg.setDestination(3612U);
    msg.setDestinationEntity(57U);
    msg.timeout = 10121U;
    msg.flags = 125U;
    msg.lat = 0.1556207449274959;
    msg.lon = 0.5157968272210826;
    msg.start_z = 0.08642016989945966;
    msg.start_z_units = 252U;
    msg.end_z = 0.6219039883161283;
    msg.end_z_units = 148U;
    msg.radius = 0.2537066757416111;
    msg.speed = 0.866349838796824;
    msg.speed_units = 47U;
    msg.custom.assign("UITGSWHANPTKTKJGBXOMJNIQIXJLNPOVIZIVEFFELUEMZUVDQJDAALMFLRKCLKFERDYUSPHVLGWXHPRZOHBXCNYFTFRKYBTVFHRHQOMOIGZYFWBIBGCSGIULZFWPMXQVSGSJGAQSDYXNEWCZWRLKAMOPSAXTXMCTGBVAIPJNAAIMYKVJEKXSGOCVCZZJLYKBKSNRYLTCRDBEWPMROH");

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
    msg.setTimeStamp(0.04592297339015117);
    msg.setSource(21712U);
    msg.setSourceEntity(70U);
    msg.setDestination(14774U);
    msg.setDestinationEntity(61U);
    msg.timeout = 3719U;
    msg.flags = 75U;
    msg.lat = 0.7251972890908404;
    msg.lon = 0.18966923499505894;
    msg.start_z = 0.1444669741555118;
    msg.start_z_units = 45U;
    msg.end_z = 0.030743332292385683;
    msg.end_z_units = 190U;
    msg.radius = 0.611140928656459;
    msg.speed = 0.31605325283834895;
    msg.speed_units = 222U;
    msg.custom.assign("XMXRBEDMBNAWXNBIUIERTSNNRVIMGYDIAGMJEWLUGELRAZCVPFGUSAJPXVO");

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
    msg.setTimeStamp(0.7295206945518782);
    msg.setSource(26318U);
    msg.setSourceEntity(102U);
    msg.setDestination(34513U);
    msg.setDestinationEntity(193U);
    msg.timeout = 57766U;
    msg.lat = 0.47148284002614815;
    msg.lon = 0.11868239387969826;
    msg.z = 0.31527640540468815;
    msg.z_units = 176U;
    msg.speed = 0.9415048469833083;
    msg.speed_units = 236U;
    msg.custom.assign("HPZQERIVBSPUBNLJAOLDDXZPUXHQAEYYCRGEWUNXTKSIGLWBKQPGZTPBIZCLUASOZTFJOUXVFZKCJGNNVURBCHNWQZSOXEDTRBRQNAMUVVCDFMOYTXJTOMJAPGTTQIMLHGTRMEAVAJWUIHCFHIWNNPDKOQHZVRBCYGGJXNFJUZSRCPEMVSASYFKUWDWELCEXQEYIOHFRYMKWKQQLSZDAWLSOFW");

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
    msg.setTimeStamp(0.49151524463707874);
    msg.setSource(56629U);
    msg.setSourceEntity(69U);
    msg.setDestination(45550U);
    msg.setDestinationEntity(9U);
    msg.timeout = 36353U;
    msg.lat = 0.3583163971471788;
    msg.lon = 0.8214385816428655;
    msg.z = 0.5899513058754235;
    msg.z_units = 104U;
    msg.speed = 0.19296911259257;
    msg.speed_units = 250U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9334783122047174;
    tmp_msg_0.y = 0.015100319455987665;
    tmp_msg_0.z = 0.5913344149534631;
    tmp_msg_0.t = 0.2615320585812855;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IJMAUJKJQJGXORFYYIBGHQDCHAOVCZXNXUBCMNGCUNVGRLNGQFDSSWYZXCFHLMUKSRASEMQWUWSYHYFRVZWQKZZQDOILWZIRHQJEBIHW");

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
    msg.setTimeStamp(0.9272038328713129);
    msg.setSource(21812U);
    msg.setSourceEntity(128U);
    msg.setDestination(29838U);
    msg.setDestinationEntity(5U);
    msg.timeout = 51499U;
    msg.lat = 0.7815077200080089;
    msg.lon = 0.9187011151500333;
    msg.z = 0.8235194169559836;
    msg.z_units = 108U;
    msg.speed = 0.5990494623244056;
    msg.speed_units = 90U;
    msg.custom.assign("USMFTKHBKCFHZRRHDXGVASOPQJYGWJFMCEGHDMCRBAUUQELYTQEUIDUDCITAPSLQUXZAGBEZTNMLKCSHYZUKKQYDIUXWXPVOFDWQOFXVJRLLIRTDAGEDSBYWWOOPWYVBYGITMPXVPVSZNAHGVJDUXNHJQPIMCHREOHXPYJKONRLMGXTWMSIWALMBQONZMJAHNLK");

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
    msg.setTimeStamp(0.9260165107270228);
    msg.setSource(23108U);
    msg.setSourceEntity(73U);
    msg.setDestination(33780U);
    msg.setDestinationEntity(188U);
    msg.x = 0.7209518771591394;
    msg.y = 0.369438612688303;
    msg.z = 0.1321567890024533;
    msg.t = 0.46129050307149877;

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
    msg.setTimeStamp(0.9567164827088736);
    msg.setSource(12280U);
    msg.setSourceEntity(154U);
    msg.setDestination(48672U);
    msg.setDestinationEntity(116U);
    msg.x = 0.38085109999372113;
    msg.y = 0.8187722787273329;
    msg.z = 0.8066735877496931;
    msg.t = 0.3360281768362734;

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
    msg.setTimeStamp(0.9068616110316653);
    msg.setSource(59456U);
    msg.setSourceEntity(93U);
    msg.setDestination(45506U);
    msg.setDestinationEntity(191U);
    msg.x = 0.9866387707570962;
    msg.y = 0.6937928883210812;
    msg.z = 0.4161743663138132;
    msg.t = 0.11548395581729431;

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
    msg.setTimeStamp(0.5733607934558898);
    msg.setSource(2480U);
    msg.setSourceEntity(119U);
    msg.setDestination(28324U);
    msg.setDestinationEntity(165U);
    msg.timeout = 53067U;
    msg.name.assign("QSBSPWQXHNDZZCIDTBHZPXKKAVAYZPEKYHJYGHLSCRBLZEGAHWWXELQDWDLMVVEJONPRLGXFFUCBZAFURGEPSESHCTPKYMGOSSJWSNIVQCMWZM");
    msg.custom.assign("JLYQZBVYFXMDTHRVABCHXLECXTUSMNOAKYKNUZTVUAQLOQQVSODDOIYRSKRPNZEDFCVHIUHGVGRTIFYSLBUZJNPCXMIDWJRILINQMWPIZGQLEKXECHQZPBKGKKIGJPACRZFWFDBYCXJHTLNBQASHUFMBVYTFADZIMRMJENJQABCPCXWOWLUKXGIGOFJJJWVWYPEL");

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
    msg.setTimeStamp(0.6289804065246679);
    msg.setSource(34306U);
    msg.setSourceEntity(38U);
    msg.setDestination(54592U);
    msg.setDestinationEntity(38U);
    msg.timeout = 22199U;
    msg.name.assign("XCIFDMTEBYYKJVWXAASIONPQDZTHXKHTWVVQHJOOVQPPMYBFKBHNMDZLYSWVIERDNUGBNXFXKLVJEHQIYZSGVZMPBUUGVWSKOPTIZLRSRFJWSYHLJDCGEORDPFMCPFBHIJGFCIONMNCWHKWBBKKDJTSQTUFAEMEITLAUPG");
    msg.custom.assign("KJTSBIGIQATMTCRDKCLZGIDXQCJONHYGUSWHKYFIQCXNMKSXESLUKHPZUPSVIRANZTPXULPVZJSWDEQDOMBAFVMWKLUODLCEDW");

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
    msg.setTimeStamp(0.10794047196145051);
    msg.setSource(60806U);
    msg.setSourceEntity(103U);
    msg.setDestination(40681U);
    msg.setDestinationEntity(187U);
    msg.timeout = 62084U;
    msg.name.assign("SIXLTOJTHNWCJYEXNCTXKDDDTBDZIVH");
    msg.custom.assign("CYINWCYJNRNKYAKQDLXCUSPUABJNHNZWKHRIRCMJRZPTPBMETMBXGCKJUWQQUQTTLEQSUGRXZMIADLRLZVMUTJLQWHOUEGROWOYGAECSDAEEHPOILBTDFQUYNOXSEKGEORRJMTMIOAAJSVHVZSRXVUWBXJVMBDMDQXUCIEGXFHXSADEYIFLTGVPKVIBIHHNBTOFFWVQZKFMWJCTKGWVYVKCZYPY");

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
    msg.setTimeStamp(0.19166284691324542);
    msg.setSource(15181U);
    msg.setSourceEntity(223U);
    msg.setDestination(807U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.745186000463039;
    msg.lon = 0.5790967452630364;
    msg.z = 0.002883123241224972;
    msg.z_units = 150U;
    msg.speed = 0.6112601585214682;
    msg.speed_units = 161U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19517U;
    tmp_msg_0.off_x = 0.898369405129432;
    tmp_msg_0.off_y = 0.11767388274348545;
    tmp_msg_0.off_z = 0.6498436895546049;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.4262787598631619;
    msg.custom.assign("WXHFEOQGTJFWHQKFVDOMUTNN");

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
    msg.setTimeStamp(0.2611235373118056);
    msg.setSource(47821U);
    msg.setSourceEntity(199U);
    msg.setDestination(59672U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.5787239146508932;
    msg.lon = 0.7610994648360774;
    msg.z = 0.27246718431422623;
    msg.z_units = 168U;
    msg.speed = 0.8833713216928403;
    msg.speed_units = 13U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8361296280298914;
    tmp_msg_0.y = 0.6605249017066779;
    tmp_msg_0.z = 0.6650428836979005;
    tmp_msg_0.t = 0.20569415427297866;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5967019159625068;
    msg.custom.assign("WIWXMALHXYWOYBCZKRURCGDWTTQDUFSVJDDEHXBRBCISVRXUJRGXAAYJGQY");

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
    msg.setTimeStamp(0.4231418124085614);
    msg.setSource(9006U);
    msg.setSourceEntity(70U);
    msg.setDestination(27105U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.48580797743149307;
    msg.lon = 0.0009144175290269896;
    msg.z = 0.9448160027513934;
    msg.z_units = 159U;
    msg.speed = 0.1279492030626712;
    msg.speed_units = 177U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6188231158740266;
    tmp_msg_0.y = 0.40896117715838387;
    tmp_msg_0.z = 0.638309241713189;
    tmp_msg_0.t = 0.5384837072141938;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7154421111401543;
    msg.custom.assign("NFSDXTYPIEUUMINRTGRQSSNBMVPPHDFZXPBWKMMODSIRDIUZJHGBECJVSLMTOKIECPLMHHWCJLYJHLXQJHJGHHSWLTFKFY");

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
    msg.setTimeStamp(0.4264145046460893);
    msg.setSource(18518U);
    msg.setSourceEntity(50U);
    msg.setDestination(57494U);
    msg.setDestinationEntity(254U);
    msg.vid = 29863U;
    msg.off_x = 0.5499109124506504;
    msg.off_y = 0.6424645333646423;
    msg.off_z = 0.27722956250941877;

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
    msg.setTimeStamp(0.46878026301688624);
    msg.setSource(22670U);
    msg.setSourceEntity(31U);
    msg.setDestination(40207U);
    msg.setDestinationEntity(38U);
    msg.vid = 11806U;
    msg.off_x = 0.6247835840440118;
    msg.off_y = 0.8738344539891965;
    msg.off_z = 0.5458537250708959;

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
    msg.setTimeStamp(0.9661089658348501);
    msg.setSource(62217U);
    msg.setSourceEntity(41U);
    msg.setDestination(769U);
    msg.setDestinationEntity(219U);
    msg.vid = 18216U;
    msg.off_x = 0.22565473233067335;
    msg.off_y = 0.9955002145769362;
    msg.off_z = 0.1735429529806829;

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
    msg.setTimeStamp(0.06300513125236851);
    msg.setSource(60778U);
    msg.setSourceEntity(112U);
    msg.setDestination(28639U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.6793194445837456);
    msg.setSource(19131U);
    msg.setSourceEntity(18U);
    msg.setDestination(62984U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.8778876611183345);
    msg.setSource(63530U);
    msg.setSourceEntity(182U);
    msg.setDestination(9174U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.8448235736398566);
    msg.setSource(27704U);
    msg.setSourceEntity(150U);
    msg.setDestination(648U);
    msg.setDestinationEntity(163U);
    msg.mid = 804U;

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
    msg.setTimeStamp(0.385155422851011);
    msg.setSource(7690U);
    msg.setSourceEntity(102U);
    msg.setDestination(21332U);
    msg.setDestinationEntity(97U);
    msg.mid = 7901U;

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
    msg.setTimeStamp(0.6029898196484413);
    msg.setSource(35914U);
    msg.setSourceEntity(60U);
    msg.setDestination(44358U);
    msg.setDestinationEntity(208U);
    msg.mid = 27952U;

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
    msg.setTimeStamp(0.8730285422114823);
    msg.setSource(49012U);
    msg.setSourceEntity(85U);
    msg.setDestination(21531U);
    msg.setDestinationEntity(115U);
    msg.state = 226U;
    msg.eta = 53714U;
    msg.info.assign("VILTAAHLDUXXMRJNFUIXIQRFPNDOKAGGUDCECFKLWDWAXGLKSIDJYIOXKQTGPTUWAFMDNJXWDDMRYCPXJVFEVYHVQVBKRUDJOLEL");

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
    msg.setTimeStamp(0.4965017651582261);
    msg.setSource(58115U);
    msg.setSourceEntity(106U);
    msg.setDestination(6196U);
    msg.setDestinationEntity(185U);
    msg.state = 172U;
    msg.eta = 34731U;
    msg.info.assign("OTYNVIHMVABWDGJVJRYAJTVSDGDLPWEJCUIGPCGIERJHMIRZNBMZJMYKDWTPUCQUNLRURNRXKGSFPKSPHYGYPEZQULHFTVQKNSQVICYUBGEEHPPXCHSZRBHKVITZSYXFWLDOZZRQELZEEHALJDEQMMWFWAULMOFTCHKTMUKLASWWONAXTFNBDSOBCQBXDQAXQMWZHAKPDFZV");

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
    msg.setTimeStamp(0.7251170886375481);
    msg.setSource(30158U);
    msg.setSourceEntity(251U);
    msg.setDestination(13715U);
    msg.setDestinationEntity(227U);
    msg.state = 85U;
    msg.eta = 40460U;
    msg.info.assign("NDZFVBPKUMOVCICBYMKTHUETQZCAHBGRPZZGSRVBUZMYGPDGFLENMABYTNVDWORPFRFLSZXWGOSRJHEVFOXVSAFKJOAHIHCKZOEYGYZJVFFLQFYJTWJIRUAMDHPHABNTOWUOVQELDRBUANJGIKULRPQUWLIMMCVJXHJIQQ");

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
    msg.setTimeStamp(0.8414599145533077);
    msg.setSource(25568U);
    msg.setSourceEntity(133U);
    msg.setDestination(60869U);
    msg.setDestinationEntity(60U);
    msg.system = 42949U;
    msg.duration = 64360U;
    msg.speed = 0.13119641701822127;
    msg.speed_units = 96U;
    msg.x = 0.4089378817216145;
    msg.y = 0.6771757905525041;
    msg.z = 0.44512885092077925;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.21637302877381193);
    msg.setSource(48535U);
    msg.setSourceEntity(215U);
    msg.setDestination(24607U);
    msg.setDestinationEntity(150U);
    msg.system = 47180U;
    msg.duration = 38675U;
    msg.speed = 0.38710725088058906;
    msg.speed_units = 63U;
    msg.x = 0.48726018941412097;
    msg.y = 0.04625963067813976;
    msg.z = 0.841818186203922;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.48060947689841105);
    msg.setSource(31965U);
    msg.setSourceEntity(104U);
    msg.setDestination(19192U);
    msg.setDestinationEntity(52U);
    msg.system = 9089U;
    msg.duration = 37850U;
    msg.speed = 0.6887555248363848;
    msg.speed_units = 180U;
    msg.x = 0.4836673086704084;
    msg.y = 0.07138673741904689;
    msg.z = 0.8303716041557664;
    msg.z_units = 222U;

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
    msg.setTimeStamp(0.34732087916079024);
    msg.setSource(19627U);
    msg.setSourceEntity(220U);
    msg.setDestination(9000U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.5823385374501108;
    msg.lon = 0.9810087913893942;
    msg.speed = 0.0305578097278405;
    msg.speed_units = 151U;
    msg.duration = 50581U;
    msg.sys_a = 24722U;
    msg.sys_b = 758U;
    msg.move_threshold = 0.696120149720391;

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
    msg.setTimeStamp(0.7805850629383799);
    msg.setSource(59752U);
    msg.setSourceEntity(248U);
    msg.setDestination(38132U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.6099981551640346;
    msg.lon = 0.3515902485501957;
    msg.speed = 0.1884687769821144;
    msg.speed_units = 129U;
    msg.duration = 54816U;
    msg.sys_a = 43128U;
    msg.sys_b = 5471U;
    msg.move_threshold = 0.9892826715980259;

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
    msg.setTimeStamp(0.4122325116016552);
    msg.setSource(11744U);
    msg.setSourceEntity(203U);
    msg.setDestination(46566U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.621030477620049;
    msg.lon = 0.09567797963557911;
    msg.speed = 0.27185184785287153;
    msg.speed_units = 171U;
    msg.duration = 34253U;
    msg.sys_a = 20834U;
    msg.sys_b = 41956U;
    msg.move_threshold = 0.2343406549446435;

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
    msg.setTimeStamp(0.7292212516288114);
    msg.setSource(55213U);
    msg.setSourceEntity(14U);
    msg.setDestination(60042U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.7694302571886072;
    msg.lon = 0.39985967236289877;
    msg.z = 0.119502254863191;
    msg.z_units = 76U;
    msg.speed = 0.6129174711997003;
    msg.speed_units = 139U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8215696774004857;
    tmp_msg_0.lon = 0.15413664470565736;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ULQKTQLWOCEVZHGBAJVQBKZGGVLYMJTFEMOIPFMOFBAJBTJWJWMALFDNBLKLHPJQFRQWNCYSZLRTTCRYHXDSVUOKJYYLKKIDGXGRIQAXUVYYYXTUPSICGWBBKCASCNZXNIVBAVJGLMQGQUPCZHBKFCOHHDRNGQEFXPLIZSZMOIWDUDORZTENDTT");

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
    msg.setTimeStamp(0.5371785884255297);
    msg.setSource(34259U);
    msg.setSourceEntity(216U);
    msg.setDestination(15591U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.40746390907843644;
    msg.lon = 0.022190176472188905;
    msg.z = 9.974800528600447e-05;
    msg.z_units = 0U;
    msg.speed = 0.2623235357376452;
    msg.speed_units = 192U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6479183738193061;
    tmp_msg_0.lon = 0.8401916964657115;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LBCNRQHQXDRPCKHLBGEVUGFQFXVZFMCLFMUNKRKWMPLZHHGZCZSAFVGJXMSVODMZTBQCRRPQPDHWZPOAKBDPTXDLKBVXZMWKVEJEYGJMISLJPRVJRKYUEKMWHAYQTQADEITBYOHIECFIAGIJJCWOXLUHXSXTYFNCVSRVVOEUFTTHKOBNZEMWGPUESUSZFYIWRWJNAPNRJQGIBSIWHOYN");

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
    msg.setTimeStamp(0.6265615725996616);
    msg.setSource(12734U);
    msg.setSourceEntity(252U);
    msg.setDestination(6368U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.40641878730491987;
    msg.lon = 0.6347714424136159;
    msg.z = 0.2744559221954176;
    msg.z_units = 93U;
    msg.speed = 0.6693834159322328;
    msg.speed_units = 133U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.1123754518523663;
    tmp_msg_0.lon = 0.24739298103791751;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XOHXZNPFHWICHJVDBBJKN");

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
    msg.setTimeStamp(0.28011828403172756);
    msg.setSource(36434U);
    msg.setSourceEntity(192U);
    msg.setDestination(46548U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.5293056295235236;
    msg.lon = 0.3518381528392224;

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
    msg.setTimeStamp(0.7773968367933729);
    msg.setSource(9803U);
    msg.setSourceEntity(25U);
    msg.setDestination(26450U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.4435789897081668;
    msg.lon = 0.6939507565197623;

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
    msg.setTimeStamp(0.8215153203696774);
    msg.setSource(46104U);
    msg.setSourceEntity(101U);
    msg.setDestination(23382U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.6622691518955325;
    msg.lon = 0.054367560761568345;

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
    msg.setTimeStamp(0.5405991120406931);
    msg.setSource(19751U);
    msg.setSourceEntity(237U);
    msg.setDestination(2443U);
    msg.setDestinationEntity(38U);
    msg.timeout = 58828U;
    msg.lat = 0.8429267736409856;
    msg.lon = 0.47124326638600333;
    msg.z = 0.5278719534142388;
    msg.z_units = 145U;
    msg.pitch = 0.6355290308879756;
    msg.amplitude = 0.4334831509684417;
    msg.duration = 35996U;
    msg.speed = 0.10725783218373963;
    msg.speed_units = 83U;
    msg.radius = 0.7327263455804502;
    msg.direction = 164U;
    msg.custom.assign("VAMHHLNEGTCSWXZLOFXENZOJPLNIYQBILMHFSAEGCQYMRHPYOEDCBCAUONRPZEWVWFTRJTNXEGRQRRYZXTXMVZCTKPRBJKGHLFWVQDULPQSAJMYUVMBWTOFCIJQUZOYDKTNPYVAVHEJKSSOWUIKFMBEGJINEKANDKIFEQOFGLZQBCDRACHGBSWTGUWISSGVFZFODPHUPIPAVTKYYDDNPXLQNOHLRI");

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
    msg.setTimeStamp(0.5814820758081719);
    msg.setSource(35559U);
    msg.setSourceEntity(145U);
    msg.setDestination(22755U);
    msg.setDestinationEntity(215U);
    msg.timeout = 42747U;
    msg.lat = 0.26257024330645395;
    msg.lon = 0.5250145806461067;
    msg.z = 0.4610227819637043;
    msg.z_units = 53U;
    msg.pitch = 0.8435049486335944;
    msg.amplitude = 0.47425060638211436;
    msg.duration = 46612U;
    msg.speed = 0.6268661511289125;
    msg.speed_units = 34U;
    msg.radius = 0.5664294754194332;
    msg.direction = 221U;
    msg.custom.assign("JAYBEUMQOSPXZCHXDTIMWDWRGCFPCJJAPVRDINITOAYYVPLCTJLYNACKSVHDGGCQXBDDVUTXBZTQOTCPMOONZQHNRHJLBNHPFVZNFUHDTFMEIAUEUOEPZYTPGNPXVQXKRRSOVSIFLIDZTSYSFEWJLLVOGUSRNXMQUKHZRHIJKGJEWSAKRZBLACVYUQBGHABPSWXIKEQFJXRFG");

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
    msg.setTimeStamp(0.19610494116413535);
    msg.setSource(28734U);
    msg.setSourceEntity(202U);
    msg.setDestination(13354U);
    msg.setDestinationEntity(219U);
    msg.timeout = 36667U;
    msg.lat = 0.4452976673835949;
    msg.lon = 0.9733862828360968;
    msg.z = 0.8943353034669345;
    msg.z_units = 212U;
    msg.pitch = 0.13315593217776167;
    msg.amplitude = 0.3652725609538373;
    msg.duration = 49001U;
    msg.speed = 0.9893596551414655;
    msg.speed_units = 97U;
    msg.radius = 0.4921203961190368;
    msg.direction = 162U;
    msg.custom.assign("DVOJDIPVLGMDMDVTZJYIGVUHMIWHSBRBVOBOFFEXGWZTILSESSTBVDZPCIPPHEWCJCKQCWXRTUZHHSEDKWZLPGTFINUPXUXZYSVWLISOUYEZGBDPRECJCOLYHGJJNNASFWRFQUNUFXHWQJNTPXJNQYYEMCQUHGCRXRLBMFJOZAMUZBZWLAFHXSX");

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
    msg.setTimeStamp(0.3626156733326852);
    msg.setSource(16180U);
    msg.setSourceEntity(70U);
    msg.setDestination(41597U);
    msg.setDestinationEntity(71U);
    msg.formation_name.assign("FVXEOSHYPPCEVOKGAFPAQMIEAKWWDBZSZPDUJUYQHEUFADLNQGCDRBVMXHHUGLGQCSADAWCTLAZPIQJXWOBNGVOACKHRYNRGYFFGLKFZMNSWBJWUSUTIDVBCGCRCOBVHTJYLBRIXJHNFFJMVKBTIEWVXXJQSPLRGTWSSXJLPPTDRIDNNVRZBIYQMHDPTULZTICKXROOMZTQVFOY");
    msg.reference_frame = 181U;
    msg.custom.assign("YFDUIKLAKCEJOURRMUPDZILAUYJNCHCBTOVOIQKNMNYHXTRUMGJVFJANXVCKAMXASGPLAZEHKWUFXTTOEWNDHRANGXAGDVBDJSJYNONLGECGGXXOBSLIQSCOJYTJPUPIQWFKVTHBPSJ");

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
    msg.setTimeStamp(0.05883080742384139);
    msg.setSource(35729U);
    msg.setSourceEntity(163U);
    msg.setDestination(18364U);
    msg.setDestinationEntity(100U);
    msg.formation_name.assign("QVKITTILSHHHAMPJCAGEXIBG");
    msg.reference_frame = 182U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23212U;
    tmp_msg_0.off_x = 0.8096716804036511;
    tmp_msg_0.off_y = 0.9157391036621871;
    tmp_msg_0.off_z = 0.6301363704942513;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PODKNWUAPGNJXTKPOOZNCOAHFXRKNJILPLSOCRGBMHLNOHHMZJYGBGDKVXRVZTOGBSSEPNRTRYIBIONMDJS");

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
    msg.setTimeStamp(0.13334107186065713);
    msg.setSource(31090U);
    msg.setSourceEntity(62U);
    msg.setDestination(30079U);
    msg.setDestinationEntity(76U);
    msg.formation_name.assign("KLBNUBNCUYLOXIECTSSRXYKIENOKABODYDREKVQGLIRVGTJZOQATWCGXNTFLDBYTGWISMCELBJXDQQQJMNFBPFRNIZGHDKEHAYNZUEZDYODURGTMJWWEX");
    msg.reference_frame = 16U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65348U;
    tmp_msg_0.off_x = 0.5658016083434968;
    tmp_msg_0.off_y = 0.019231715192942755;
    tmp_msg_0.off_z = 0.20339275156348757;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LWLDXLRJGXHVKFABWIMHQZNGFCBBVNOKQDCMTCVWLKJYJAOAYBZMEVJDSBCJGIMAADHNTPCRRLEKXFBVYKUBSOQOLYTCMZGHZIQYNJLJOQXDFNDSEGXWJVVTLECPTFWEPGQHZGXHKWUVYZTYKRPFQAWXWGDPJZKXXIUIURFNSSBANHZEGETIHKFJSLHOYPPEDDTTIUUWZMBUWVNIRFONXVRGBQUAMRMLMSSTOQIICOFURYPASRUKZPHE");

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
    msg.setTimeStamp(0.7091413763128972);
    msg.setSource(30135U);
    msg.setSourceEntity(197U);
    msg.setDestination(39951U);
    msg.setDestinationEntity(19U);
    msg.group_name.assign("IDFVYQSZLXEQRBSPOMCOCMLFNLUHRPFBMSKDCVZQXVGXBQGYGCTPKJQRCHDHUPPTIOTILBGUUUDIOCSPSDVUDHHMZCNVAMIHTRZGUZCRZTAXULTIYFUYGIKATWJKYZEDBLWKLMOXPCZMKJWYCANGRDNXAVROSQHEXERJQGJNA");
    msg.formation_name.assign("ARLVNNIZMMYCBFGWDABUMXXRRVQCBUZVXHQUWKWRXJXXLNAJQIMYDPBOAQFBFCKSYISEBLTQLEDHNYPBUVWESDIOUVPQQMGIOGYFFLZDQXIMWVHNGNOACGBFSJTTBIMFCZANEPHKUBLOVXTTWIJJAZKWRJQSNLCFLZPOKTDZRCSWSEGNTJVGUGVDZOREOAJYHHEQVILJDMRETOZDNUSRUKKCP");
    msg.plan_id.assign("GJUJPGTSXZQPHPJYHGOXKBNBQUFZDLOKCOYUNJAKGXUCVFIPPRONBODLFLFAQSCDVZBWTQQERDTIGJOZDFCTXZSDLNPPYKYMDYHXCKEEAFLIPVHUTSMXEKISZSLHPNEJAVSYWEAHTCWAKVQGFUMFOEZXKWWDNCWELGBJFMWWNRHHVLXCBABQKCWMIGPXYWTOYZVJUI");
    msg.description.assign("TXVBCEDABBGLESPVQFKUYWHCTZNUGMMRMBWXIQBEOHVAZLCMHRNVYCJVHINWFBJOWVSUJBFDZJIGEPYATBHJQINCDMJRXNQQCCWROPOGXDVFAINSSSFZRHWMUYTKCIGYLWOLYXROKLSFKIGHUNRNVYAEVNOURFGAXLJCKLUOUZZZFTTLMRUQVEPAMPQOSXDAYPERYKDGTIPUQI");
    msg.leader_speed = 0.032826070724606304;
    msg.leader_bank_lim = 0.4552994936744771;
    msg.pos_sim_err_lim = 0.9110090592731678;
    msg.pos_sim_err_wrn = 0.7656250313261659;
    msg.pos_sim_err_timeout = 43244U;
    msg.converg_max = 0.5798998073493932;
    msg.converg_timeout = 4720U;
    msg.comms_timeout = 8324U;
    msg.turb_lim = 0.93303936932013;
    msg.custom.assign("LEVMUSXQSGEHXMIPUOIKIZXKFVECJSASPPHGPOTBITDDPVSOKIGXZWLOHVWQDLSLLXIEDEPU");

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
    msg.setTimeStamp(0.976029585782581);
    msg.setSource(46749U);
    msg.setSourceEntity(34U);
    msg.setDestination(38979U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("EAGJYQGZUYUILCOWPCYXTUFXCQHCSFKMEJCTYAHFGXCQATEGNMJHNSBAGDEHDLRWTKBWTDHXVSWKQULNSSYHYVADUNVNLVGQSWMLROEORHOENVVLIGUEKVBFVMKKBGMLPWZNEXZDZDKYIZEBULEDOW");
    msg.formation_name.assign("KVOASOQJRLCTHBSRIJHSEFAFPCCFXXIHLRJWLXVCPBZGNAYQRMZXXCNRFUTYVXDBYLYQSVOAKJTTMBYZPLUKDJQLQIEIBUHMORGUVSTHYFVPNWFTWDGOQBEPPZMXETGAWFAPEPCEMRKGLESJPOSAGMWAUJYVWNKCUHNCNF");
    msg.plan_id.assign("YRZUOPTKAEXERNAORERJMQIUIGFKIZTWYVH");
    msg.description.assign("MYFVUMLUZQZNRQPEWJHTJDCFFAJGAMWDCNUMHORPQGEXVMBKIPVHTXQKGIYPWYOCXKOIGNXYSACRHDGDTOOLXF");
    msg.leader_speed = 0.4673185942174276;
    msg.leader_bank_lim = 0.6693910595209669;
    msg.pos_sim_err_lim = 0.8551525690793473;
    msg.pos_sim_err_wrn = 0.3015626251319803;
    msg.pos_sim_err_timeout = 10868U;
    msg.converg_max = 0.3107979577842114;
    msg.converg_timeout = 1635U;
    msg.comms_timeout = 58324U;
    msg.turb_lim = 0.4056112218292134;
    msg.custom.assign("VQPINRFADZB");

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
    msg.setTimeStamp(0.5518961848504716);
    msg.setSource(47754U);
    msg.setSourceEntity(24U);
    msg.setDestination(7696U);
    msg.setDestinationEntity(253U);
    msg.group_name.assign("FFXQZWQDFBZSLMQFAJU");
    msg.formation_name.assign("UTWFDFXZIDVVGSNNDCCAEQJHZGEUASHLEQIRMHBSAZNUWXQERJVKMRBYTNCBDVBKPGZSBGYOOIVDSHPOOHQHTCDI");
    msg.plan_id.assign("QJRIRKHGAXGRGULIO");
    msg.description.assign("SSFYMPFRCWTUICEOQRTJZMVGMHIBXKWUOXCEDZKOXMBEWFKFJZKHHUTZQKWTGDDUSRWCRVLFJPOIMMATMYULJQQEYMTAQFCTZUOXXKNNANBADRVETCHDOANPVBAZHVBRZEIIKSRMLAYTSIOAXLIYGCBQSOLNVJH");
    msg.leader_speed = 0.35440435765942035;
    msg.leader_bank_lim = 0.12378676085144935;
    msg.pos_sim_err_lim = 0.5391762418672684;
    msg.pos_sim_err_wrn = 0.629674935127994;
    msg.pos_sim_err_timeout = 28993U;
    msg.converg_max = 0.8473005210019077;
    msg.converg_timeout = 34899U;
    msg.comms_timeout = 21640U;
    msg.turb_lim = 0.3919927460980216;
    msg.custom.assign("UMTSIJNUNHAOSFPCFPBQLQMWJKZYDOGDLGYDQFGOWGDWXDKKYOEUOVPOVAIJBSKSRIHSYZHSMKTQBYRPGXWUUBRIMZAGWNXKVGNDOLXTQCMAKSIQPJEXDPZBCRVMOELDYAHHGFIRZLTZBLICQSTJHXKEPOXOLKXSQHCCUPAVBUEJHWMYZMIEZMBNUUAJHZCAJZGWMRLJJVVCBTDQSCNBHTRNRFKEWFU");

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
    msg.setTimeStamp(0.8957923241093793);
    msg.setSource(24968U);
    msg.setSourceEntity(166U);
    msg.setDestination(56587U);
    msg.setDestinationEntity(35U);
    msg.control_src = 2121U;
    msg.control_ent = 119U;
    msg.timeout = 0.8972286690049234;
    msg.loiter_radius = 0.9029292100575292;
    msg.altitude_interval = 0.505965781678944;

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
    msg.setTimeStamp(0.34450751929953083);
    msg.setSource(49189U);
    msg.setSourceEntity(136U);
    msg.setDestination(43429U);
    msg.setDestinationEntity(24U);
    msg.control_src = 36563U;
    msg.control_ent = 202U;
    msg.timeout = 0.9562914628265148;
    msg.loiter_radius = 0.384400194956114;
    msg.altitude_interval = 0.6967441218891727;

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
    msg.setTimeStamp(0.973525740618835);
    msg.setSource(64655U);
    msg.setSourceEntity(24U);
    msg.setDestination(63304U);
    msg.setDestinationEntity(201U);
    msg.control_src = 47440U;
    msg.control_ent = 176U;
    msg.timeout = 0.2253881096437057;
    msg.loiter_radius = 0.05649000479895172;
    msg.altitude_interval = 0.25399880405615893;

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
    msg.setTimeStamp(0.7091748643692913);
    msg.setSource(34480U);
    msg.setSourceEntity(240U);
    msg.setDestination(36826U);
    msg.setDestinationEntity(68U);
    msg.flags = 1U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.27940488263173324;
    tmp_msg_0.speed_units = 117U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.08759291297719718;
    tmp_msg_1.z_units = 26U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.800336567678322;
    msg.lon = 0.7088030081431019;
    msg.radius = 0.9330845065070684;

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
    msg.setTimeStamp(0.9596587356582004);
    msg.setSource(8911U);
    msg.setSourceEntity(80U);
    msg.setDestination(49235U);
    msg.setDestinationEntity(162U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.747583684183971;
    tmp_msg_0.speed_units = 83U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5793907209937025;
    tmp_msg_1.z_units = 55U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.43143901386158423;
    msg.lon = 0.7531511778502515;
    msg.radius = 0.5943564305483366;

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
    msg.setTimeStamp(0.028452677481028532);
    msg.setSource(41192U);
    msg.setSourceEntity(78U);
    msg.setDestination(1511U);
    msg.setDestinationEntity(191U);
    msg.flags = 208U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.34055825959679986;
    tmp_msg_0.speed_units = 186U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.07805814634569708;
    tmp_msg_1.z_units = 95U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5385564686788415;
    msg.lon = 0.37956508762792474;
    msg.radius = 0.05475924966046086;

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
    msg.setTimeStamp(0.3996302293537606);
    msg.setSource(20188U);
    msg.setSourceEntity(246U);
    msg.setDestination(3394U);
    msg.setDestinationEntity(126U);
    msg.control_src = 35755U;
    msg.control_ent = 18U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 201U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8870507805689193;
    tmp_tmp_msg_0_0.speed_units = 120U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.12736788486800632;
    tmp_tmp_msg_0_1.z_units = 112U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6874652791809476;
    tmp_msg_0.lon = 0.8439367869659673;
    tmp_msg_0.radius = 0.07397784479814462;
    msg.reference.set(tmp_msg_0);
    msg.state = 249U;
    msg.proximity = 104U;

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
    msg.setTimeStamp(0.7750056850955);
    msg.setSource(55885U);
    msg.setSourceEntity(219U);
    msg.setDestination(56363U);
    msg.setDestinationEntity(125U);
    msg.control_src = 36363U;
    msg.control_ent = 35U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 128U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.42976841489836337;
    tmp_tmp_msg_0_0.speed_units = 213U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.065020515919324;
    tmp_tmp_msg_0_1.z_units = 16U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5308309104865744;
    tmp_msg_0.lon = 0.7028844032266025;
    tmp_msg_0.radius = 0.3845418192203144;
    msg.reference.set(tmp_msg_0);
    msg.state = 192U;
    msg.proximity = 45U;

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
    msg.setTimeStamp(0.4262364804843347);
    msg.setSource(39644U);
    msg.setSourceEntity(250U);
    msg.setDestination(50190U);
    msg.setDestinationEntity(34U);
    msg.control_src = 50411U;
    msg.control_ent = 112U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 34U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.20037585034069483;
    tmp_tmp_msg_0_0.speed_units = 244U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.41098695838959565;
    tmp_tmp_msg_0_1.z_units = 193U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6662225046994678;
    tmp_msg_0.lon = 0.30015889507558946;
    tmp_msg_0.radius = 0.9622175245587052;
    msg.reference.set(tmp_msg_0);
    msg.state = 34U;
    msg.proximity = 95U;

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
    msg.setTimeStamp(0.2284901704377701);
    msg.setSource(8083U);
    msg.setSourceEntity(177U);
    msg.setDestination(55648U);
    msg.setDestinationEntity(50U);
    msg.ax_cmd = 0.36688484129562304;
    msg.ay_cmd = 0.6561745347801361;
    msg.az_cmd = 0.9306317043372784;
    msg.ax_des = 0.7928190727031303;
    msg.ay_des = 0.5353061888862599;
    msg.az_des = 0.6193873122158308;
    msg.virt_err_x = 0.617062785699491;
    msg.virt_err_y = 0.07034993582119164;
    msg.virt_err_z = 0.0666622578707814;
    msg.surf_fdbk_x = 0.07309051791249277;
    msg.surf_fdbk_y = 0.7619675106876662;
    msg.surf_fdbk_z = 0.003969731947885302;
    msg.surf_unkn_x = 0.3621577599875565;
    msg.surf_unkn_y = 0.14964290011004566;
    msg.surf_unkn_z = 0.7060280669720728;
    msg.ss_x = 0.7038268783795264;
    msg.ss_y = 0.05161802421713724;
    msg.ss_z = 0.03751985823251636;

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
    msg.setTimeStamp(0.08244681404688547);
    msg.setSource(53572U);
    msg.setSourceEntity(241U);
    msg.setDestination(57227U);
    msg.setDestinationEntity(198U);
    msg.ax_cmd = 0.5597079557518373;
    msg.ay_cmd = 0.055102950059453315;
    msg.az_cmd = 0.2464418212689944;
    msg.ax_des = 0.2851062050085078;
    msg.ay_des = 0.664525532665645;
    msg.az_des = 0.12189547988981597;
    msg.virt_err_x = 0.3555755028504213;
    msg.virt_err_y = 0.42448720845024246;
    msg.virt_err_z = 0.5191578038015079;
    msg.surf_fdbk_x = 0.2444010200532315;
    msg.surf_fdbk_y = 0.49920593938277136;
    msg.surf_fdbk_z = 0.37199510587503937;
    msg.surf_unkn_x = 0.35251547198474753;
    msg.surf_unkn_y = 0.4566826415008608;
    msg.surf_unkn_z = 0.8770960362854546;
    msg.ss_x = 0.237586499850733;
    msg.ss_y = 0.37555592820360517;
    msg.ss_z = 0.5171431761788631;

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
    msg.setTimeStamp(0.17174193784878777);
    msg.setSource(8128U);
    msg.setSourceEntity(10U);
    msg.setDestination(39287U);
    msg.setDestinationEntity(214U);
    msg.ax_cmd = 0.8232312175243812;
    msg.ay_cmd = 0.4797477813713972;
    msg.az_cmd = 0.39357376743011085;
    msg.ax_des = 0.7722488962887358;
    msg.ay_des = 0.011885449606732656;
    msg.az_des = 0.09121308058556765;
    msg.virt_err_x = 0.6994780438311863;
    msg.virt_err_y = 0.9222019930840969;
    msg.virt_err_z = 0.24447802472382407;
    msg.surf_fdbk_x = 0.9459981552683501;
    msg.surf_fdbk_y = 0.3082924735948086;
    msg.surf_fdbk_z = 0.7625052934098632;
    msg.surf_unkn_x = 0.12504165333572204;
    msg.surf_unkn_y = 0.326248757520028;
    msg.surf_unkn_z = 0.27427807720962216;
    msg.ss_x = 0.869506742075141;
    msg.ss_y = 0.10486839285603133;
    msg.ss_z = 0.11168144017289061;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WLJWWOGSRYHBORBTBXUYTARNZHAQHPVHDLBALBSDHFFBXCYXTKYIWTLFTSRVMVTSAXXFDZCPJIVLELWMGNIOYECQSMISJGQOFDQTOCUBZDYXMPLNIMQOJSTZDIALNAETFI");
    tmp_msg_0.dist = 0.6299891884859982;
    tmp_msg_0.err = 0.2924653503110103;
    tmp_msg_0.ctrl_imp = 0.16282255367259868;
    tmp_msg_0.rel_dir_x = 0.5496375758565842;
    tmp_msg_0.rel_dir_y = 0.18434436908200402;
    tmp_msg_0.rel_dir_z = 0.22902924048567863;
    tmp_msg_0.err_x = 0.6301683461077758;
    tmp_msg_0.err_y = 0.66703856519052;
    tmp_msg_0.err_z = 0.291840712651084;
    tmp_msg_0.rf_err_x = 0.2002204085049879;
    tmp_msg_0.rf_err_y = 0.8646569869378329;
    tmp_msg_0.rf_err_z = 0.32159075563385053;
    tmp_msg_0.rf_err_vx = 0.017767637065637776;
    tmp_msg_0.rf_err_vy = 0.2153176091604233;
    tmp_msg_0.rf_err_vz = 0.018902972669106788;
    tmp_msg_0.ss_x = 0.009432483692960014;
    tmp_msg_0.ss_y = 0.7573624801145313;
    tmp_msg_0.ss_z = 0.40773903796540967;
    tmp_msg_0.virt_err_x = 0.18184696564709324;
    tmp_msg_0.virt_err_y = 0.3516765344303102;
    tmp_msg_0.virt_err_z = 0.9153306452073372;
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
    msg.setTimeStamp(0.24928158735585704);
    msg.setSource(23503U);
    msg.setSourceEntity(236U);
    msg.setDestination(20649U);
    msg.setDestinationEntity(228U);
    msg.s_id.assign("HLRTLGDMLDZVSPXJFKSOROERMAIXGZPVKQKQHLXUHAJEBYUYHOJSTPAPCOZFWRYRFSHRSGMWDWXIDBFWGBXD");
    msg.dist = 0.9339456948684716;
    msg.err = 0.4948069224643721;
    msg.ctrl_imp = 0.8744767043714342;
    msg.rel_dir_x = 0.5908958206498033;
    msg.rel_dir_y = 0.6959206406619616;
    msg.rel_dir_z = 0.9276975955410869;
    msg.err_x = 0.9598104644272548;
    msg.err_y = 0.28171640863631553;
    msg.err_z = 0.8368794882193654;
    msg.rf_err_x = 0.3415854386890743;
    msg.rf_err_y = 0.06307731737325539;
    msg.rf_err_z = 0.05378974534276737;
    msg.rf_err_vx = 0.37661719865662935;
    msg.rf_err_vy = 0.17538978654399562;
    msg.rf_err_vz = 0.40855905465987474;
    msg.ss_x = 0.5502992550676953;
    msg.ss_y = 0.5449456844237178;
    msg.ss_z = 0.1311367029014533;
    msg.virt_err_x = 0.2634317542801804;
    msg.virt_err_y = 0.8989367310815524;
    msg.virt_err_z = 0.6667861225173669;

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
    msg.setTimeStamp(0.6502988906846904);
    msg.setSource(15821U);
    msg.setSourceEntity(109U);
    msg.setDestination(1420U);
    msg.setDestinationEntity(132U);
    msg.s_id.assign("LRVEBNPAIMLHWDBLPTOHZ");
    msg.dist = 0.8013838742256525;
    msg.err = 0.33077889237430524;
    msg.ctrl_imp = 0.11172938213956507;
    msg.rel_dir_x = 0.9170058787378504;
    msg.rel_dir_y = 0.5618769091739486;
    msg.rel_dir_z = 0.22564377468646224;
    msg.err_x = 0.8458845597678641;
    msg.err_y = 0.8368712571279167;
    msg.err_z = 0.13151158334112767;
    msg.rf_err_x = 0.8624769856100037;
    msg.rf_err_y = 0.8415573010758537;
    msg.rf_err_z = 0.2661735883793408;
    msg.rf_err_vx = 0.8884117135028685;
    msg.rf_err_vy = 0.34845863884566664;
    msg.rf_err_vz = 0.6738170672089986;
    msg.ss_x = 0.41976526180806684;
    msg.ss_y = 0.4035014042173857;
    msg.ss_z = 0.045299852850274824;
    msg.virt_err_x = 0.7918988796345008;
    msg.virt_err_y = 0.1454639166074878;
    msg.virt_err_z = 0.8403891124238659;

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
    msg.setTimeStamp(0.5400837554909478);
    msg.setSource(47180U);
    msg.setSourceEntity(144U);
    msg.setDestination(212U);
    msg.setDestinationEntity(32U);
    msg.s_id.assign("IGHIQPCLKOCESFJDLUMHZVZSEPITQYJBSXCFVHKUCPSEPOBTAZFGKEOEXELKLPRFMMOGKDYBPRCQYSJWACDYHXVVAOVZRFTONSHEAWJBQPZWYBQDTLNXCMDXDAJPJMAWQTNWFACEQJRBYMMGJGNDLIQXBLBGWUHGVWINDGFFSXWCOZKDATFVUVDPZFRGAXYXBETMVZKIT");
    msg.dist = 0.3854682866901874;
    msg.err = 0.584606909601413;
    msg.ctrl_imp = 0.03268821709158809;
    msg.rel_dir_x = 0.8275662316227054;
    msg.rel_dir_y = 0.9775130512248604;
    msg.rel_dir_z = 0.0401590705280197;
    msg.err_x = 0.6501425197332583;
    msg.err_y = 0.31339605718175867;
    msg.err_z = 0.8282404486169566;
    msg.rf_err_x = 0.3805165198848821;
    msg.rf_err_y = 0.6384387710996966;
    msg.rf_err_z = 0.24505118762875633;
    msg.rf_err_vx = 0.5866677451604948;
    msg.rf_err_vy = 0.9013645861883136;
    msg.rf_err_vz = 0.30979670445888696;
    msg.ss_x = 0.7794443297691047;
    msg.ss_y = 0.5777043127644147;
    msg.ss_z = 0.09537692375585394;
    msg.virt_err_x = 0.7550399192820539;
    msg.virt_err_y = 0.6996428070048735;
    msg.virt_err_z = 0.14770340771024548;

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
    msg.setTimeStamp(0.3290903655315235);
    msg.setSource(30672U);
    msg.setSourceEntity(155U);
    msg.setDestination(47130U);
    msg.setDestinationEntity(69U);
    msg.timeout = 26024U;
    msg.rpm = 0.4960291505360922;
    msg.direction = 209U;
    msg.custom.assign("MBDRWUDIRCHPFZKMJGHQEMVIYZLQHJCTUTEPCQNVHTZOXNFGBKEVEOLTDXNWIZNVXZNCJRKLRIPWEYWUUGSOAWHBGAVUPVPYGDNVDTUQFAELWDTMJQBBJPFTNFOFCJAJVSSOUFSRHSFFMQKZWAPILZAFGAKEQTKSYMXXCQLOCIYPUYSSKNVEWILYJBDJXOMMYXLHNMD");

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
    msg.setTimeStamp(0.6462130473585574);
    msg.setSource(55349U);
    msg.setSourceEntity(75U);
    msg.setDestination(11255U);
    msg.setDestinationEntity(159U);
    msg.timeout = 50568U;
    msg.rpm = 0.4206032243056911;
    msg.direction = 159U;
    msg.custom.assign("ASTFWOPRLSWNHJRWKYWGQOVUCOOCEJZIODIGVMYLUIVTELASDDDEGKPYSJHIFLOYMSRAQYZCTGQRUHFALUHARUPYXFWFIWARQKKHJNGMCPDIRUQNCJEHITNADDFGCKQSJIBXOSTPPIJHSBKLOKKNVACQBZUTDZFXNUXATZLXXBKZBGUWEWPFSRDZRCNHVMDQMWCBMFOBZOMNLYXETJEANXERVHNHIBM");

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
    msg.setTimeStamp(0.6555839770790062);
    msg.setSource(27093U);
    msg.setSourceEntity(70U);
    msg.setDestination(3055U);
    msg.setDestinationEntity(114U);
    msg.timeout = 47506U;
    msg.rpm = 0.8750192871022695;
    msg.direction = 138U;
    msg.custom.assign("TMTFGQWYEVSWLJZAVYHNWVUHMMKDYWUMKZUH");

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
    msg.setTimeStamp(0.07034873265809483);
    msg.setSource(15176U);
    msg.setSourceEntity(197U);
    msg.setDestination(47503U);
    msg.setDestinationEntity(141U);
    msg.formation_name.assign("SOBJLKLAXWTZEWZTCDBGSUVLKBDTAYOXHHNECJKZBPTBVDRDGNGKLABNLCJAQYMFCRIOUZIUOXAVRVMUCPQTFZIBNDGJYRQFYERFPMOKAAEUHHWEXCJCKJHLPQMIYDFAMPFWOJTFDAJSVGHOWQIYQSWVHYEPCEQYGRQEHNXSPYTMGYRMMXUXIUCZWHNZTK");
    msg.type = 79U;
    msg.op = 174U;
    msg.group_name.assign("XSLHIFACBJQVIRBUXYIAIEAVANWNDUPXGTCGXOWIYLWJCNWDJTBOHYYLQOSZLMBTFAEBKBVLGFPEERWFULWJTYYYGDNFCSOXHZXSPZMPSHBMEJFMXWRIPRKWPCKSQ");
    msg.plan_id.assign("QFZTCBRVVTWAAMDPNYXNOKQKQWJDWWKKPDZGCHHGRQREPYRAYSDQMVRXBTEOAGJXITVKUUVXFUAUPLQNMUFJZOSWSOIVUELDRHOJSWLLXAIJEASGZFIMNCZZKOUXBCBQMLYMPDGH");
    msg.description.assign("WGCLGDCTSNXLMLGZEPKKJACHDPZLLNVMVUYOJDFVQWKGOWKXBWUPKEPEPRAFFBESOXURLEGAADSCKDYQGECNJCQIEPMEASXWTKKZQRNJSHAOWXOSDZSUJNQYUJRPEYBYSRFDITDFIMIVRVTBUQTELRZAABQYVVRQZCRKGUWHMOV");
    msg.reference_frame = 43U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8989U;
    tmp_msg_0.off_x = 0.8070660958504848;
    tmp_msg_0.off_y = 0.9377954449803747;
    tmp_msg_0.off_z = 0.44301883633917616;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9764438926276026;
    msg.leader_speed_min = 0.49011602807796795;
    msg.leader_speed_max = 0.4261053482390419;
    msg.leader_alt_min = 0.11514386054364456;
    msg.leader_alt_max = 0.4042771616584707;
    msg.pos_sim_err_lim = 0.11099743564364184;
    msg.pos_sim_err_wrn = 0.32814411304131985;
    msg.pos_sim_err_timeout = 3045U;
    msg.converg_max = 0.24393525794309467;
    msg.converg_timeout = 44489U;
    msg.comms_timeout = 21976U;
    msg.turb_lim = 0.06169666434000742;
    msg.custom.assign("EMRFNFLQSGTJOPNHOZCVJMNMJZEQCQBDUZDYBFCIOHWVQUDKAJFBXWTKSGGLKVTSETSAFIQHSLDRBPAKJWPKYQXNFGUALJRQHBYVAXUZVHAMPNGAMEPHXDMDUTTPETVVHUMIHCLIUIOBRXYTDWKRJOOPGCJWUNFXMIFAOTDIPYFGURZGRXPYDZKSM");

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
    msg.setTimeStamp(0.5293053080440938);
    msg.setSource(45171U);
    msg.setSourceEntity(161U);
    msg.setDestination(32524U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("VACTZNXVTDGDHMZZMNUTENCYNYXEEVWVKPRBKOIROTYEIKXLJFULTDTRNAGMTUSWVRCQIOE");
    msg.type = 177U;
    msg.op = 186U;
    msg.group_name.assign("EIKTDQNPVRDLHMDLRJPIAEGSKSCGAGFXURWWNIEYPQMCREIYCOMNLGQ");
    msg.plan_id.assign("LISBKACEDAXPUDMRQZTJSTQYRZYVG");
    msg.description.assign("LCDCUQSGOTFXYUFKIVPNFHPEYUGMPLEXFOJBZYDNOSTZTYJHCMODCZZAPBXYOQKLRZKNWXWEPTUISRZZDZNQRBRUCGRFAXMMNAHKFVEDRSJRVFQUKCBMLPOMCH");
    msg.reference_frame = 186U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54646U;
    tmp_msg_0.off_x = 0.8032101246694578;
    tmp_msg_0.off_y = 0.3558244783160629;
    tmp_msg_0.off_z = 0.6968572636377409;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.4171855482935226;
    msg.leader_speed_min = 0.9839848655216151;
    msg.leader_speed_max = 0.9758068645061936;
    msg.leader_alt_min = 0.27287616339954446;
    msg.leader_alt_max = 0.11051832468118983;
    msg.pos_sim_err_lim = 0.15992701855858438;
    msg.pos_sim_err_wrn = 0.49584654580148335;
    msg.pos_sim_err_timeout = 4772U;
    msg.converg_max = 0.4403890979769254;
    msg.converg_timeout = 47630U;
    msg.comms_timeout = 42019U;
    msg.turb_lim = 0.1048788501413177;
    msg.custom.assign("UHHQPZMHWJYXSTAWVTUUUSYTSXXDRLOZIQMCCBIAFYYLOKWXPPNFTTAVHAGRRTOKJIECEDFDGXANXADZESBLHGLWKSMNRVOJTTHIVHWQNJOGYSQFPMLHUPOIMEXJCLRFLWAQGCABYDKPFKBBPIESNLWNQEUDVGRIZWOMSM");

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
    msg.setTimeStamp(0.5619161215652779);
    msg.setSource(26381U);
    msg.setSourceEntity(103U);
    msg.setDestination(17219U);
    msg.setDestinationEntity(76U);
    msg.formation_name.assign("UJFQIZVWJRCKPEIUKGOTKAZOXTZHBAVKPACRHSNJJEHYVRMQBVXFIMDAXZPLBOLIZQOCZNQEESGSWOTELRAOBSYMVXZKFWKBFMZHSLEQEWEHCUTHDNNRBKFIWUYSSOKBISUNDCOUYXTXVVDLTWGHJAGLADXLFQDPANPBY");
    msg.type = 49U;
    msg.op = 211U;
    msg.group_name.assign("IVZDIGNNLOBQHRUGCSIIAUKOQYICSRTQWCSDNJVYGKELNLRFGMJOEQOKTVGSUGPCTEEXQKCUTJOPKYFNOPHBBXZHLNZAOMUSXDWSS");
    msg.plan_id.assign("FEAXQJSTDBBRDGWDYHSVLZUIBBJRGQWFMCFKLPOCZHYKDGHBNVXFBKVEYRTWUSDTAPVBLOUITEGGQOBIXKGVZCNGUDQYOVASPPQFXIJNHELMFFCK");
    msg.description.assign("AIDFCHQIRUDGKGRUWBLWBOMYIXFAFEXNQFCCOSDSTIMPKPBTJKOPSSAOVVCPZDJLTYNJWLGQPBWTSQGFDGZAUEWIONUDGJXKJLCFCYJLCHZWXEHMYXKEEHQIMHQXPMWTXTDYZPMRORFEIZMSCQRYJMAXOUQFVAZHTRGSVXITLJQHTBGBKNSYGCOJRNB");
    msg.reference_frame = 191U;
    msg.leader_bank_lim = 0.2697695231933247;
    msg.leader_speed_min = 0.33142663477211853;
    msg.leader_speed_max = 0.6473874949860733;
    msg.leader_alt_min = 0.5680732694396249;
    msg.leader_alt_max = 0.604080856462469;
    msg.pos_sim_err_lim = 0.6352290627481084;
    msg.pos_sim_err_wrn = 0.229210291695353;
    msg.pos_sim_err_timeout = 18533U;
    msg.converg_max = 0.8325265873093358;
    msg.converg_timeout = 63238U;
    msg.comms_timeout = 53436U;
    msg.turb_lim = 0.41611696633813544;
    msg.custom.assign("ELKHXQOZVMSIJKXLHKUJAMQCZGATSANRFFPNJPWYGVPZXXRTRKDFAMEKTLDTQEMVFQDBOBKYSCAWCTBRRVGKPZDFAXROM");

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
    msg.setTimeStamp(0.2783492974198928);
    msg.setSource(51069U);
    msg.setSourceEntity(252U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(147U);
    msg.timeout = 605U;
    msg.lat = 0.19002824801150275;
    msg.lon = 0.0006210584007156905;
    msg.z = 0.34156878788566036;
    msg.z_units = 27U;
    msg.speed = 0.05550955999882068;
    msg.speed_units = 108U;
    msg.custom.assign("YQDIDUTCGFNCHWRRTNPHPOMQTPCVCALWIFSLNSDWDKJBUNLDRBHQIPYZALTKJHEURQOHKNYEFYIPUOVGGFSJOWEWPBTRBZFIXMKZYXRIERXYAQMJMVMPSQDAXJVADNNXYBCYVXZIASUFRYVHFFFJOMZGIURDUBATQSTPSIOBBXTELOMZMRNWQ");

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
    msg.setTimeStamp(0.8829317645084787);
    msg.setSource(59315U);
    msg.setSourceEntity(85U);
    msg.setDestination(49621U);
    msg.setDestinationEntity(12U);
    msg.timeout = 48018U;
    msg.lat = 0.19035763070809342;
    msg.lon = 0.5193657532316509;
    msg.z = 0.7332185398584606;
    msg.z_units = 58U;
    msg.speed = 0.5187445975050359;
    msg.speed_units = 181U;
    msg.custom.assign("YWCINLJUONHIOMBBNHJXLAOWYWBRNUSKGKZSRXVTJNQNDPQCYKZWXOIWTQAZCVHCDGDXUPZOZIOSWQDQNCXHYOPXESBESJWSXBBUJVATARQEKEVIREKQTVGGCSMXQZPRCASPFFPKBSAIDINGDRRLMZKDCGJVUKMWKAOJEBESULHUFHLIMTMUEGDVDZMLQPBDFQTPIIPHMHVAEMFVTGOG");

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
    msg.setTimeStamp(0.4757012219318486);
    msg.setSource(33451U);
    msg.setSourceEntity(51U);
    msg.setDestination(24850U);
    msg.setDestinationEntity(53U);
    msg.timeout = 39803U;
    msg.lat = 0.03319998101862209;
    msg.lon = 0.021224233903992085;
    msg.z = 0.90733063405756;
    msg.z_units = 72U;
    msg.speed = 0.46483026150312157;
    msg.speed_units = 89U;
    msg.custom.assign("XSHJRFJPNGZAMZLMNSYSEAQAYWJSDQR");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.12349306114692771);
    msg.setSource(7869U);
    msg.setSourceEntity(118U);
    msg.setDestination(49034U);
    msg.setDestinationEntity(106U);
    msg.op_mode = 210U;
    msg.error_count = 250U;
    msg.error_ents.assign("KJCEBIKBOIDIPSLOJEHBCRATYPWLFUWEIDBMBWDSFPZQLKCXJMUCKZAWDAGPMIUIANULWXHICZTJFNKMRZXLDBVJKWGOVVZRGNPTITHFU");
    msg.maneuver_type = 18383U;
    msg.maneuver_stime = 0.48500431644438025;
    msg.maneuver_eta = 52606U;
    msg.control_loops = 517979714U;
    msg.flags = 109U;
    msg.last_error.assign("TXZAUEJSSYERBVSLAQFICNDUXYBMLSJVWVSNNUXEWVIDUSNPWDLWKMJRKLTNFJGTVIZXNPNPGHBIHQPZQPSYOJLPGKWWZFBWMJEYICPAYZOBMYMPOXTOPKIHAMYWRCSDCYCFTAZFQYIKIKHROXDTEELSJWHQATNNUECFRKOUXIDVVBEMDGZXTRNRAULOH");
    msg.last_error_time = 0.8849537505332109;

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
    msg.setTimeStamp(0.4698696082301955);
    msg.setSource(16043U);
    msg.setSourceEntity(41U);
    msg.setDestination(32102U);
    msg.setDestinationEntity(2U);
    msg.op_mode = 163U;
    msg.error_count = 132U;
    msg.error_ents.assign("GASZGOZCIHURTGXZOPMRLFWQUENEDGERG");
    msg.maneuver_type = 13305U;
    msg.maneuver_stime = 0.3790755444166902;
    msg.maneuver_eta = 49125U;
    msg.control_loops = 1962362589U;
    msg.flags = 26U;
    msg.last_error.assign("QUUUXWIKGKGUCBWVOMHSISNMCLFHHGJLRWZQBSASEXKUJGCADKPMYZUNONBXMSGRALTHDWSBORIKTHKMIAETLOGJPTYHRBNVWHFFNROFSRUECAQZAXLFAAXDRMZBMLSIWOFVGDSKZCIRVIBZUAHBTJCJYAFHWXVXUDCYXBPGEQCIQORMFMEOPWQKTLJDUNXNIEYQZLPEEFDWYKTCNCTQIFSGY");
    msg.last_error_time = 0.3332041619866565;

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
    msg.setTimeStamp(0.8656167698240043);
    msg.setSource(32545U);
    msg.setSourceEntity(57U);
    msg.setDestination(1247U);
    msg.setDestinationEntity(154U);
    msg.op_mode = 11U;
    msg.error_count = 6U;
    msg.error_ents.assign("HSEFLRGSZZGHDDMBEMXQNPURRIEKSBRQXYCCFATWLZSVJLIJXOXYBOWGSOANMKOFJMGTIUUGXRKHSMUBDBKCVOCPJBSSNHUTDPVCPJ");
    msg.maneuver_type = 36951U;
    msg.maneuver_stime = 0.6801178568024764;
    msg.maneuver_eta = 6444U;
    msg.control_loops = 517022624U;
    msg.flags = 19U;
    msg.last_error.assign("GNKTKKHSMFFPGVXUGRPDNELCSXYZOJBGNKSIHYFFBZMOQMBPSYFOHUXZZPQFQUNKUEYDOL");
    msg.last_error_time = 0.7990893423541731;

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
    msg.setTimeStamp(0.5835385392897985);
    msg.setSource(52881U);
    msg.setSourceEntity(211U);
    msg.setDestination(64856U);
    msg.setDestinationEntity(47U);
    msg.type = 19U;
    msg.request_id = 62666U;
    msg.command = 18U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 7041U;
    tmp_msg_0.lat = 0.4865101712999378;
    tmp_msg_0.lon = 0.6744997475627672;
    tmp_msg_0.z = 0.39520255229615253;
    tmp_msg_0.z_units = 170U;
    tmp_msg_0.speed = 0.15637820938543723;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.custom.assign("KKVYINRCORZEHODKCXRDATFFEA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60719U;
    msg.info.assign("YZCVSAUASULERNYKNLDWFGEWWAMRQJWQHRBULFFWASIKTYIGZQSCDOIZRHQXUBVGKXWMDJNRSOWYUHBOWWVYAZMIUCMFKITHVXMPITACLBREZPTBYARDHDLIXVAKPIOBTSBMLMPGFZNGPROXHVJHKRPCJDFXDEQDVWYFKHNFONMKJTYXCGZEASVZMDMRQXUCFHBCLGBIPCIOXOKPUSUXVPVTKNTLONYEAYGP");

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
    msg.setTimeStamp(0.22314564700933137);
    msg.setSource(61616U);
    msg.setSourceEntity(164U);
    msg.setDestination(9615U);
    msg.setDestinationEntity(216U);
    msg.type = 25U;
    msg.request_id = 36907U;
    msg.command = 205U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.16070026762544043;
    tmp_msg_0.lon = 0.5492337670462538;
    tmp_msg_0.z = 0.0956869097954205;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.speed = 0.46363828179764;
    tmp_msg_0.speed_units = 208U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.1535819842115611;
    tmp_tmp_msg_0_0.lon = 0.5742846087917403;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("BHHATJJDZEMRYPCFYXSFJUFCOUVDVWXGGAZSEYXNUZJMOGTQQBLBZKZCXOMCWWPNJINUGVIRJCKAZONSRLKYWDEFSOZLHTCPHJUVEEKSYMYARMLKAETMKQQWHEWTNCHUUHDBINGUCJLFMYXSWGXBBYFDIPAJSXRFEDPOWGEPSMVZKBTPIXQZDNCREPV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40654U;
    msg.info.assign("PBPUUSJOIEHIGUEFZXKOXXPSWLIZWIOAQNZCIQMLAQVZXXDKBKBRGDPMFSDZWVOBLARYGVMNSKLJZRFNYRLYVPLDOKOVEXGTEXDQIYCQWAVYANJLAUIQHTKPZCRMFBWCNSNVKETUKYWESRUIA");

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
    msg.setTimeStamp(0.6528701908337463);
    msg.setSource(31716U);
    msg.setSourceEntity(150U);
    msg.setDestination(31213U);
    msg.setDestinationEntity(71U);
    msg.type = 175U;
    msg.request_id = 43475U;
    msg.command = 64U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 53838U;
    tmp_msg_0.lat = 0.07082481561046938;
    tmp_msg_0.lon = 0.13544914383899198;
    tmp_msg_0.z = 0.5970148376297525;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.pitch = 0.05866256898087985;
    tmp_msg_0.amplitude = 0.756543671777245;
    tmp_msg_0.duration = 54936U;
    tmp_msg_0.speed = 0.5305212932623412;
    tmp_msg_0.speed_units = 214U;
    tmp_msg_0.radius = 0.3250070535419609;
    tmp_msg_0.direction = 77U;
    tmp_msg_0.custom.assign("ZNUNZDNLPDETDOAAQYSHHVMIIBVALCLOMUWVHBYNXBMEBBILFQHARFYBFBQKTWRZARUGCTTTALZHXOVWMNOSVVLLGQKJDTRLJINKHZPOONXIFGYJKWBMGLMRJWVPWEITPDYTKODXGEQPRIMQAYEEPEYXKFXFCLIUAJUSEXUUABZOWSGUZJNSMWUDODGHFPNJCGKPJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7525U;
    msg.info.assign("LZUSURDHSEFJLKRSABSYZMIVCHOOKMFZZPIVPHQZGXSWWRKXTOUQMQJHVZWPCMEDCEJPPPDEQVCHTGNIVDHDHAIILETDNQXFNOXQMKGPLGGOQNJBEMRPYRKEEEODXCCTKLHNBFKWDGCWZYAJTBFYUBYQFTABAK");

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
    msg.setTimeStamp(0.730250856166513);
    msg.setSource(59606U);
    msg.setSourceEntity(38U);
    msg.setDestination(49287U);
    msg.setDestinationEntity(36U);
    msg.command = 50U;
    msg.entities.assign("UMQIFVBXTEYQWBVETNNECZOLYWCJABTKWCESKZUOVRDDLBNQSKPFPFXFIYSUPKHKUMTVTOEHMYRPRZVZXLTWDJEYLHDNJNUXSBUVQJULGAMMLPGBYOFPIHAYCWOATBMBBDHLJEGFEJSCDZGQRTJVJDAVDNSSXJWDUHXRFYIRAGZHIZVTKEIOFFXKVQGDYNAWWHPZXMPQEPFOASBCLALNKKNMGIOQPIHZITIXCQGWROYLO");

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
    msg.setTimeStamp(0.042429269768290645);
    msg.setSource(54504U);
    msg.setSourceEntity(209U);
    msg.setDestination(36870U);
    msg.setDestinationEntity(110U);
    msg.command = 82U;
    msg.entities.assign("VEZRSUNHLCRQYJTNXATVWMCKUWRHSNJHMFHWPGOZQIMACXCUSJEWIYUDLRBVQKOSXKFFDUMDGEEHKFGHEYRASZBPTLPKCPLZTJFWMTYVITRAJMGPNOQTPJGBDQOTJMPSZYZUWKFFXOSLFIVXKMJCAZHBIAONBUAKMXQSIWEQWTVPBCPDUSVBRXBZGGGELYVENYZARSIVAYJGZFDOHFQND");

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
    msg.setTimeStamp(0.4224455478294681);
    msg.setSource(52328U);
    msg.setSourceEntity(146U);
    msg.setDestination(50922U);
    msg.setDestinationEntity(200U);
    msg.command = 247U;
    msg.entities.assign("WXTTBMEDFJMNCGVXMZVILABRCSSQJTEOURVKADPXMDYBP");

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
    msg.setTimeStamp(0.3893763467086344);
    msg.setSource(34110U);
    msg.setSourceEntity(14U);
    msg.setDestination(30474U);
    msg.setDestinationEntity(20U);
    msg.mcount = 24U;
    msg.mnames.assign("QNNTSZBOXRORHVKQRVLQMSTSDUMDMZLZNCCVYZUVUBEOXKUIFOEYTBRZBIOALGNDVHJODTGAMATAESEOEZNMYNRJHXPSWQJYLCCPWRHWWESFHQBYZIKFAAVUYVSZLSSMDWIKTUULHEKMGUQAFNQKJEYPXBYXIJPCNXOCRWGGKGMFAOTXWADESBZJWLXFLW");
    msg.ecount = 104U;
    msg.enames.assign("YMNBKDYWBUHEPLXBCWXHCPSATDOORKZYWIXQVYNETLWPTXPNPRMHXELASLTTANTVWIUFWDREBDUEAQMJDMMDAB");
    msg.ccount = 69U;
    msg.cnames.assign("TBDUIWJVWHFYKJPABGXZQPLUFGZSAMJLGLOYHMPDYFFDMVQMQMIECDDYQQJZXKSTKBWOJGCYCUGZIPQUHKKRBFIHFCRLOSTCAHJYLNEWPCMRICNS");
    msg.last_error.assign("MNHSTXLEPPIWKCMWGMDNAVREHZWKIJBMKLGZQRXTKLBYNIUZAPBFXBRCVAGBIROWUFDRFSMYIBPCCGVZJTRWLFSRYIHRMHYVBUDJYCEMMOIBHEGDHKOGSADZSGOHFQKEARHYATCXGQMXNLFAWXXGWEAILPEVKO");
    msg.last_error_time = 0.9532214837219972;

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
    msg.setTimeStamp(0.8954442044983831);
    msg.setSource(64963U);
    msg.setSourceEntity(94U);
    msg.setDestination(57750U);
    msg.setDestinationEntity(20U);
    msg.mcount = 55U;
    msg.mnames.assign("CIRHBNVZDOHAVCKWMARPOYFLEDHAYSGECUTSQDXVNTWLPWTOHOLMBXPWREYGMGEWBMXCPQUSTDCWZTVKVTPYZNGKNSGUFNMMVWPZHRAJPLXBSIXFZGBZGTJHFDVUZSQIYIBFLUUOPIUJIHXPYQFESRSFJQHRDROMCFNZKESJUNXOHDBXCAQTWJL");
    msg.ecount = 162U;
    msg.enames.assign("YVERXMRCYTBPPLJFYBMCIRPHOZBIOUXCOIMNRXKGOYLSUIVQGOUTQXNQPZPSNPFQADTGUJGSADQKTKDBVNDNCEBUHHAHGTISHXM");
    msg.ccount = 62U;
    msg.cnames.assign("EGTOJICDKGQZISCIYPZVJPHLXUNYMFOHWXPOHZZEJPRWGQRJJKONQITWJAFMSNZIMEREBZDRSRKESTWDXDHFYQYKFZCAHPBNGKNCPPOVRNDXQBZVBSPLVQHGHTHULGGMEOJLTKFMMQKYJRHAASFRMXQFNAMWGVYADXTAYWGLUOUKESWCBAFIKSNTXVSFCBSNCLKHXWQRRBTTIIGCYYVUALMZWBLEDCBUJFLD");
    msg.last_error.assign("BPBLHJJNDIMLMNJOUYDNEKLGDWDCGTZERZJOWIDXGSQHLDGBXNNMQNCIWXESTYYGAMCWVEKBVZGZUIOXAKRJIRLDKYQXUJCTPQRAKPCKCOROZWAQWQRIYGJZVAWCMISPYCJLAFFBXXUPYRFGXMVELKDUNOHERQSTIIVELDXTSBTQUMHVZVZFZYKITHHZWFTWOBAXCFAESFHABFGARUMUYFMQNDUTKWSHBSSQUF");
    msg.last_error_time = 0.7022230371197737;

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
    msg.setTimeStamp(0.40273287098897914);
    msg.setSource(40285U);
    msg.setSourceEntity(43U);
    msg.setDestination(6762U);
    msg.setDestinationEntity(3U);
    msg.mcount = 244U;
    msg.mnames.assign("SNAXXVTMTEURZSCXTVEKPUUFBWDUVGLWMXYCQEXQHCJPFWJPIAOLCRBBGGHDFESWYATOBXMOEHJLAYQMOUHNGQEDGAILMJKKNFFPPVTMDAVGJMKVSJDHNLEQGZQXKCQMBIBGOVKXDVNTPLNUYOIANBCNWIFERWXJMJWHKFPSIRHGNKZUDRLRHTCBHZIIGEVUCYJZSRZEAKOZSWQLINPO");
    msg.ecount = 37U;
    msg.enames.assign("DIRSZEHKLUHKNIGHIPEUYVIORTBYVIMNOAGAHHOXDLKJANSDGJNXYQZWWXSFCLHEVHEFFCVAQSWBIXWSVOQYXGZMDGBFCLZLUSCAJNTJQTXXTQGJBTBCMUWVAMKRGIKSKEPTLLHEBRAUNWNLSCTWYPEAPSNXMFL");
    msg.ccount = 94U;
    msg.cnames.assign("VIZAAESWHODPGPTVKZJYMSZTKZZEKOWZQXVAQGYSDXLHNWWIIKMVRBZHCXBKDVBAGKBUCFIRYJIEIPMAEHKQYYMJONFDLSOSJPLHHBNNDUJJSFBGQBXLEYJIWOFUUGLAMMMCQIGGCKBMQDBNYFRQGJAUPZDRYOXHONCPKHURHSUTXRBPWEXNTITTFSRCPDNLCSVJXXZWTOJDCRWAPYAFVTCNQPUFEGIECZLFVYNMSUXROLQD");
    msg.last_error.assign("RYBAQALDRNSEUMGLLOYOCMUASBNPJAESFODHTZQXBPKUMRNFLYBPLNUQUWGDKQDYTJGUKUXCKMGURSJEAAWIZBZKTMDNJGAXVHYCHODTEXJJMZCEVNZYFWPVNSX");
    msg.last_error_time = 0.012254117602218728;

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
    msg.setTimeStamp(0.5114188577210164);
    msg.setSource(64599U);
    msg.setSourceEntity(169U);
    msg.setDestination(22249U);
    msg.setDestinationEntity(202U);
    msg.mask = 212U;
    msg.max_depth = 0.7498466031863973;
    msg.min_altitude = 0.7809936599551283;
    msg.max_altitude = 0.45807914494237745;
    msg.min_speed = 0.23748805838038123;
    msg.max_speed = 0.6297573034251103;
    msg.max_vrate = 0.542767893703338;
    msg.lat = 0.389026079161663;
    msg.lon = 0.463924383360116;
    msg.orientation = 0.957171517014084;
    msg.width = 0.2035904451043531;
    msg.length = 0.17991373822398748;

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
    msg.setTimeStamp(0.7949296256233179);
    msg.setSource(54203U);
    msg.setSourceEntity(241U);
    msg.setDestination(15598U);
    msg.setDestinationEntity(232U);
    msg.mask = 199U;
    msg.max_depth = 0.13499087144744748;
    msg.min_altitude = 0.9097573869600927;
    msg.max_altitude = 0.966878373142346;
    msg.min_speed = 0.08941789983206228;
    msg.max_speed = 0.009504610421501858;
    msg.max_vrate = 0.6748721145320361;
    msg.lat = 0.031835561496598386;
    msg.lon = 0.44530861219520623;
    msg.orientation = 0.360443000998505;
    msg.width = 0.16391754908211875;
    msg.length = 0.05143807587869165;

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
    msg.setTimeStamp(0.1302343071925397);
    msg.setSource(3004U);
    msg.setSourceEntity(95U);
    msg.setDestination(48309U);
    msg.setDestinationEntity(165U);
    msg.mask = 98U;
    msg.max_depth = 0.9557548672410967;
    msg.min_altitude = 0.9478750273544226;
    msg.max_altitude = 0.24583386273741226;
    msg.min_speed = 0.30996955293117545;
    msg.max_speed = 0.5693715540696599;
    msg.max_vrate = 0.3237304972180056;
    msg.lat = 0.00646281462879128;
    msg.lon = 0.07985186967645364;
    msg.orientation = 0.28342878747740663;
    msg.width = 0.038249527442246856;
    msg.length = 0.5801763888118461;

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
    msg.setTimeStamp(0.06650802773669862);
    msg.setSource(60260U);
    msg.setSourceEntity(92U);
    msg.setDestination(14852U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.52067996566876);
    msg.setSource(19991U);
    msg.setSourceEntity(243U);
    msg.setDestination(39658U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.7445108058401042);
    msg.setSource(10205U);
    msg.setSourceEntity(141U);
    msg.setDestination(9505U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.22088419177074747);
    msg.setSource(43761U);
    msg.setSourceEntity(46U);
    msg.setDestination(56839U);
    msg.setDestinationEntity(106U);
    msg.duration = 38278U;

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
    msg.setTimeStamp(0.2599990131238774);
    msg.setSource(30398U);
    msg.setSourceEntity(173U);
    msg.setDestination(59164U);
    msg.setDestinationEntity(107U);
    msg.duration = 10456U;

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
    msg.setTimeStamp(0.2884931680638756);
    msg.setSource(39258U);
    msg.setSourceEntity(17U);
    msg.setDestination(26638U);
    msg.setDestinationEntity(164U);
    msg.duration = 5511U;

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
    msg.setTimeStamp(0.607426533116819);
    msg.setSource(16246U);
    msg.setSourceEntity(184U);
    msg.setDestination(22882U);
    msg.setDestinationEntity(249U);
    msg.enable = 175U;
    msg.mask = 3119722668U;
    msg.scope_ref = 1665549443U;

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
    msg.setTimeStamp(0.9554393290393618);
    msg.setSource(5731U);
    msg.setSourceEntity(152U);
    msg.setDestination(51767U);
    msg.setDestinationEntity(229U);
    msg.enable = 31U;
    msg.mask = 2088080009U;
    msg.scope_ref = 1050979717U;

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
    msg.setTimeStamp(0.22391951695098056);
    msg.setSource(30741U);
    msg.setSourceEntity(12U);
    msg.setDestination(40657U);
    msg.setDestinationEntity(88U);
    msg.enable = 108U;
    msg.mask = 2605416001U;
    msg.scope_ref = 20031742U;

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
    msg.setTimeStamp(0.450111217945682);
    msg.setSource(54279U);
    msg.setSourceEntity(25U);
    msg.setDestination(57991U);
    msg.setDestinationEntity(179U);
    msg.medium = 98U;

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
    msg.setTimeStamp(0.6107985469318862);
    msg.setSource(40249U);
    msg.setSourceEntity(217U);
    msg.setDestination(44338U);
    msg.setDestinationEntity(79U);
    msg.medium = 60U;

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
    msg.setTimeStamp(0.4997843313378627);
    msg.setSource(26779U);
    msg.setSourceEntity(241U);
    msg.setDestination(15407U);
    msg.setDestinationEntity(94U);
    msg.medium = 77U;

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
    msg.setTimeStamp(0.8520877676601127);
    msg.setSource(35630U);
    msg.setSourceEntity(130U);
    msg.setDestination(48435U);
    msg.setDestinationEntity(99U);
    msg.value = 0.49485042348833186;
    msg.type = 144U;

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
    msg.setTimeStamp(0.09507151300933725);
    msg.setSource(31864U);
    msg.setSourceEntity(158U);
    msg.setDestination(51422U);
    msg.setDestinationEntity(68U);
    msg.value = 0.3915949876065191;
    msg.type = 139U;

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
    msg.setTimeStamp(0.9948302223323842);
    msg.setSource(9829U);
    msg.setSourceEntity(97U);
    msg.setDestination(55592U);
    msg.setDestinationEntity(70U);
    msg.value = 0.3974530683825138;
    msg.type = 26U;

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
    msg.setTimeStamp(0.3057497542714741);
    msg.setSource(117U);
    msg.setSourceEntity(166U);
    msg.setDestination(14918U);
    msg.setDestinationEntity(60U);
    msg.possimerr = 0.27079634270568853;
    msg.converg = 0.22966116618679144;
    msg.turbulence = 0.4933409260724101;
    msg.possimmon = 3U;
    msg.commmon = 15U;
    msg.convergmon = 248U;

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
    msg.setTimeStamp(0.7397681892769726);
    msg.setSource(14257U);
    msg.setSourceEntity(58U);
    msg.setDestination(33343U);
    msg.setDestinationEntity(170U);
    msg.possimerr = 0.4019510949298044;
    msg.converg = 0.18916766792231254;
    msg.turbulence = 0.8091486865598865;
    msg.possimmon = 21U;
    msg.commmon = 114U;
    msg.convergmon = 28U;

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
    msg.setTimeStamp(0.09753437387000197);
    msg.setSource(38596U);
    msg.setSourceEntity(189U);
    msg.setDestination(15563U);
    msg.setDestinationEntity(246U);
    msg.possimerr = 0.002438914055227892;
    msg.converg = 0.9614541023877405;
    msg.turbulence = 0.10292072742829805;
    msg.possimmon = 56U;
    msg.commmon = 176U;
    msg.convergmon = 226U;

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
    msg.setTimeStamp(0.5452967630928826);
    msg.setSource(13183U);
    msg.setSourceEntity(167U);
    msg.setDestination(32205U);
    msg.setDestinationEntity(135U);
    msg.autonomy = 118U;
    msg.mode.assign("EDFNJEMRHCYMFIGZHGKXARXRPXKKZZKUYSCNVPAOHWCLQLLJYPGJLICBVENDOOSMGHLELKSHSVTRVUFXQJSSUPIUUMPWGXTHZBWKOZYIRNNQRDAHAEVTVVUOALIFTAGQUUGNTJOKZMFLJVRQHEMWFWIEYXJFQAWDYPWTVPDCZLFMWICRZHYJTIBOCTBPCBLEUDSZEWMCOADKBOQYCTGBPRJVQXFNNMRGIXDFAYSSKZWDN");

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
    msg.setTimeStamp(0.5531297347746011);
    msg.setSource(40844U);
    msg.setSourceEntity(115U);
    msg.setDestination(44996U);
    msg.setDestinationEntity(146U);
    msg.autonomy = 183U;
    msg.mode.assign("ROSUDYCNLPJWHJRRWNVVSTAZRUCMZUOMBWIWBSXFPSHHJNKACJIGQGNZFPXDCGMEILLYLMOJAZGBPMWAHTQAIVEDETAGFABKBJWQXPKXMOSQCKVUOTDOHIBPQXDUOUCFMBYODECHKMGZNTJZEWXCLUJUVKLIAKVKWVUWQBQOJMYPPHKCJ");

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
    msg.setTimeStamp(0.9708710794220978);
    msg.setSource(5968U);
    msg.setSourceEntity(164U);
    msg.setDestination(13096U);
    msg.setDestinationEntity(93U);
    msg.autonomy = 1U;
    msg.mode.assign("GNUBQBINMZQBPLSYOFBSQDNXYJWBKJMVDFXONHUMZGXBPKWHQXVGGKSRYJPXMCZBUPSVLIQCZJNCZAAULOZZATAYNIAXRRLGJGETVCTTYAVCSKWKBVEXEMGWCTFTZYMEXURFAHQWLDNOIPAYFDKHDINCECFTRRQPYPGVDZTSORIFGWYWGOIPBMDROESFHOJLQRQOHLTKUAYJCHFSDDERLNCJKXEUNISMOUVLSQVWJPHIMEXHWTWZKUPBLAE");

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
    msg.setTimeStamp(0.4934125367886497);
    msg.setSource(28345U);
    msg.setSourceEntity(126U);
    msg.setDestination(2512U);
    msg.setDestinationEntity(60U);
    msg.type = 170U;
    msg.op = 178U;
    msg.possimerr = 0.555801366136914;
    msg.converg = 0.447839896814758;
    msg.turbulence = 0.3999413217402755;
    msg.possimmon = 30U;
    msg.commmon = 15U;
    msg.convergmon = 123U;

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
    msg.setTimeStamp(0.6001922918755707);
    msg.setSource(54461U);
    msg.setSourceEntity(73U);
    msg.setDestination(51463U);
    msg.setDestinationEntity(14U);
    msg.type = 197U;
    msg.op = 162U;
    msg.possimerr = 0.22591454894773177;
    msg.converg = 0.7837820589049498;
    msg.turbulence = 0.8764447896709874;
    msg.possimmon = 213U;
    msg.commmon = 1U;
    msg.convergmon = 179U;

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
    msg.setTimeStamp(0.8608543081184805);
    msg.setSource(35456U);
    msg.setSourceEntity(129U);
    msg.setDestination(4607U);
    msg.setDestinationEntity(104U);
    msg.type = 228U;
    msg.op = 171U;
    msg.possimerr = 0.8923742874560139;
    msg.converg = 0.049110461596220234;
    msg.turbulence = 0.5305363779140526;
    msg.possimmon = 8U;
    msg.commmon = 155U;
    msg.convergmon = 144U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.2887882056861599);
    msg.setSource(41738U);
    msg.setSourceEntity(193U);
    msg.setDestination(19862U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.7232033872547635);
    msg.setSource(63985U);
    msg.setSourceEntity(157U);
    msg.setDestination(51290U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.5324758076094268);
    msg.setSource(34221U);
    msg.setSourceEntity(133U);
    msg.setDestination(1090U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.25545690640858654);
    msg.setSource(30301U);
    msg.setSourceEntity(238U);
    msg.setDestination(48009U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("JVHLVDSXJTPPLWJXDAUXISBFPBBCKIPAPSMVKIFNHWRBOQTRPWGWXGYDZPYARLOYJEFIUOCMATDWYDEZKKEKGFVSAWIOFXKZTYVTBHBNERCPXKJUGMMZQAVCRJIRMJMZQHYRVHXZMTGMUSVJCUYFAOSHUTCHKWLRRNIWQTLRSDGUCBFEGYQEMQYWCLNOYPZSFGJJELDLNZHFITEOEATGOQUOCLAQCS");
    msg.description.assign("UPXJZJSSPTOVZRVKDMVYNIEHDGHCBMFGUQZBQWPUJXPHJYATFMLCSKXSUFAIJWNRXTLVTHP");
    msg.vnamespace.assign("ZSMXLRHNYRZJEOEZFQXKPSGEDPKXTLIFXEMKBKXXCAXQAPQKVDJYWLCIPYALMMFIVFGXHCJPYRDOZYCACBTQBHH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JCXIFBNVQFTIVQIMNZIHNAEHFEPVXYHZUPECTVSVOKYIXDWADBSKADSYTMSNEQQTOLWZWPKAQLKWCZJXJGCZLBTMRUIZUVHALJHOHGFWONZJNTZSJZIGJPQWRPLVEULYKQYCHPEUAGODMAWVCGSXDUORLBU");
    tmp_msg_0.value.assign("DLPPXRJTWPIABNFMWIUORNQDNMUFFYTKPYHFFVHDGPEABXOZLHDTWEGRPMNIHQYYOVPIMTSAZJMMYZVDHJOBZVOFGBOWLBTFUCTCKIOKXWAXNWCQXSACMVVABPRHNQXUTHFDHSCWZZOHIIRCXKEDKRLJMAVILNJNOUYVJESKKDIYEZTUETJQSGZQBWUXGCYKLMLGCA");
    tmp_msg_0.type = 119U;
    tmp_msg_0.access = 138U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EIALDUNEJZULSSIXIXBUKXBMVZGFUMLDFAAFUHWKQBOZZPCUXKKGINTWONGFVTMIMVYYBOSHALYZQJNJTZRGARDGCROKVDNJGPPIAQQEEWFHEVPNKPVMCXLUOJRKRORMYSSEGWHILXPESTDOVFYBPWLHJIUVMRXGDUPZWTLBYAKHJCKDHSDXPYQEZOWTSJYLIZOTLCQQOTHRRDNCWUYTYHXRCXNAKSDTBC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("FFFOUXEVCGNQITILWHOYEDRDBAJRDMBPZONLZTHRRTARLVTZCETNPBSRKFVDBOQXVLVLRIZJUAOEAGBSGTKIZRGFLYXCABLHQSNXHYMIISGSDSGGSAYHUJCWNPFECLOXQKEKRBJHATIMHQMIUYXJBGELJLUUKNKDYPWFXMBWYYJUOWPPCKXMKYPOQFSVDWMZTVOCFJQPKNSPJXMTDZGWRTNUCYOAVZWBDHXEVC");
    IMC::YoYo tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 57634U;
    tmp_tmp_msg_1_0.lat = 0.8789776321681789;
    tmp_tmp_msg_1_0.lon = 0.5591878588022501;
    tmp_tmp_msg_1_0.z = 0.8670134688627745;
    tmp_tmp_msg_1_0.z_units = 32U;
    tmp_tmp_msg_1_0.amplitude = 0.18934925547153914;
    tmp_tmp_msg_1_0.pitch = 0.39677607053184416;
    tmp_tmp_msg_1_0.speed = 0.4391381406790602;
    tmp_tmp_msg_1_0.speed_units = 13U;
    tmp_tmp_msg_1_0.custom.assign("SHTCTJZDLXOBESZTIBAYKOCRCCKEQXPGASUGYOLWLIDBMZL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ControlParcel tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.p = 0.5221123307684633;
    tmp_tmp_msg_1_1.i = 0.2573769746743424;
    tmp_tmp_msg_1_1.d = 0.7182363300618538;
    tmp_tmp_msg_1_1.a = 0.0753003592698146;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::SaveEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("BXOCYXQWVGUOOSIBBSPYQWOCBQPCZUPLWRZHQXTTZMGPCNTUWAZYYKHGEXWHQSGMCNICDAZJHCJWMBPDNIMFFRJKEIYUJCBWDJVJFMDCMLESREVJGKDEEHYMBOVDPQVNQTKILFDOVFZZZVSHGRLUTFDQTKFIOYSSPHYANWATVUBHOXAAXHFKNBWJXROXAMRUTSHWVARRYRYPVGIEXGAMNIJZLUQTNGNQCKIPAU");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::DevCalibrationState tmp_msg_3;
    tmp_msg_3.total_steps = 117U;
    tmp_msg_3.step_number = 126U;
    tmp_msg_3.step.assign("DSKEOTVMGZCUVHAEREQUYLJXWQEEXJAMNAYIARWQEIQCIRHUYDNOUGIBTBDDPOHLPYMXQPKTTYTIKMBLAZOXWGCUNKOBLRLBVPOKGVFKAHGZLFCEOJIBYNPDCMMTXAWSZWVPGVJGNSXIHYMSWEZNLWUVRNGDSIHFRGTKRQLWBBODTBSRJPYDUHUVCFPDCMSCFKGE");
    tmp_msg_3.flags = 220U;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.8886780345579952);
    msg.setSource(53065U);
    msg.setSourceEntity(12U);
    msg.setDestination(17088U);
    msg.setDestinationEntity(241U);
    msg.plan_id.assign("KWTLDWWXIHXFEOFDDQVQSQZXLJJSMAYLEVBNBMEKPUMQPYAFCZTOEYHJLZRCSIZKVBWH");
    msg.description.assign("OZYCSRFRRKSFKBVHDGNWJGOMYBBVFSZCOEFAVZLUMHVOOPGUFLOEPGF");
    msg.vnamespace.assign("GLUDKHEMSQTWVZZPFOZIPLLEINGRBKCWEBROMUOYSTGTM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PWMAKFXOKTUYPPOZKOTZDMFIMBRCSADSTDJJWVLYNGTLWRBGIYZUPKESPRNIZDKACMHNDPAZQUZIEFDMUJLWHV");
    tmp_msg_0.value.assign("JGIWQJCLNJDCVYWYWRQFCAMQFYOMWIDLPCEGSLIVAQKHJQDPLNKFBAJTZTMVPGTAEDXHJCODOTAIRWVPBPHBHSLOOPIBPSFWEKUPMVGZGJKGEOFDIHHQSNGBAAEMTUJEYIUCLKB");
    tmp_msg_0.type = 227U;
    tmp_msg_0.access = 112U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KBRRROFHFDZIAZ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("TTKMMSSTUCWOOJLXYJGPMOHWXSZQBAKTZBJSXIMIJZWRGDSEGPLFGNHHYTNFTQJKLFEYYHVKSDOUKRWVQUSGDNJDPQACFOXIZHOWAVTIVMLZCDACEGBYYRPXBXUKF");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.custom.assign("GXYGJWKPIFCDWZUPJOHMOHPTTOGKLPYYWDYOZLEQUNWGSOXSCNTMSVIWQNMPABOFXITRHYRLMLDNXVBFATMALAVWYEQAZLMKBKHQEYNDQLBOEDFZVZUKBCNTWESOQENNAUMHICJRCDAYCPBBUFTRDKAFIXLJBXUJHGWXDDJMOJHWCQIFDXQZNGSGUEMHIURGOQQYJS");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredZ tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.1947289976453629;
    tmp_tmp_msg_1_1.z_units = 224U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("RTVDHZZXKKJVRIBQADPOSNIPEIYZMDEKDLFPNICTWBDCLWZEILIZLKLNOBWDVFMETHULGZQCQETW");
    tmp_msg_2.dest_man.assign("ZXZZCIXRLJRHMWCGAQATVNJSAQSPXDWMFHYUUIBOWSQQFKNIHEBHGLZEQALFMNZZOXCDYGILIRUPJWKPWSTPIFPCYTUKQMPRUBZJEDOYWCBIHNKAFEWFYLMYRHBAULXBMNNSTTHNEBXXULDNDDSOCHJTJEMCJTKLJGOQVASZFHVTIKHZRYVVGGWBVDRKBX");
    tmp_msg_2.conditions.assign("AWWPRVYTNJZQURITLDUBHNUXHMDTZAAAQWXBAJANJMCGQZISUFOBZUYWUNGVPMFOVVHRYFEDWKTOCCHBTPBVFNVRWUGMVTHAUQIYXNCASIYMSYYMZQEPWWOSVELIGCLGFEDLKTOFBKGECCRGHCVGWGSNGXIQRFBPJISQCXJUIDSDTRLL");
    IMC::SetPWM tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.id = 114U;
    tmp_tmp_msg_2_0.period = 2631685519U;
    tmp_tmp_msg_2_0.duty_cycle = 1904810287U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.24329414298013108);
    msg.setSource(56274U);
    msg.setSourceEntity(28U);
    msg.setDestination(45123U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("LYJAPKYRSYWIUNSLGCQEHXWUKRPVBCDTWHSRZMLMCCFVPIWVELWHHKEE");
    msg.description.assign("JPTHNCWSKDIDRJAEKXDWTXFXVAZBFVSJOOSPSZYRUTTBAKHYCWQRIDCAOPZDWVAVVBKZUFKYCCLBEIHMMAAEZFQDNQHGLLKGWSFKYXFLWQOAGRMEURXDPJXXIRSJSTYPKMLLZVGFHGROHZAEVPMITJJNWPUBBQOSQLMMHNUAGONFTKONIGEOLCTVBYVNYWDGRLEBPUYCCHZJZTMSUEUEBXC");
    msg.vnamespace.assign("HFXVKKOTHHMYPPJVZPTSSNNOMREJWQHAOZHCDJTZAZDBVMWZSLSDIOIVGLFXQGWVBEPLVJKUGAXCIQFJDPUMGJDOHMXFFUBKCPOCDBOBTMWXVXELISADDMBNTOXEKOWYXIUYSUAIVKZNARUPLFUJRLDFWIBYYWRIKJTCVYUMKDZPNZCXLGYJWQSTEPNYABRTRRTZGLSHAQHQXQYNKWYCGQMJWRNKASESUHEL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MZPWVCOVEMQMKMDAQLBKJFMNSUIQDWZEQTKHEAIKOYDPJJZRCVLNOLRORUSDKPRQWMXOXQMBLNFXZLSNRVIYERIYACBYXNYZFCHHTGBDDSEVTXAOQHHWPBRLJGLKJCYHIGMVSMPXAFJSUSQIARGCPZYNWUJGHEDQFBMOOUVULXEPOCGZACSFQXPLXBPNZEVCUUAN");
    tmp_msg_0.value.assign("BAGHYICVAJFVQWIXDBH");
    tmp_msg_0.type = 115U;
    tmp_msg_0.access = 192U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XRUTEUODARTYWJJBVFMUKQFCHLQZKDCCWETDWNQEZGAAFLIKHQKFGRVBZEHTENIVNAUTZHDDJHTWWBVDCFABBZCWPSTOUKYGGXMNXBEQLNJMMCRWVEMIEMRILLOIBUMNYRAYXXWSOUSLXBJPNDKNHZONAB");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MAREVVESBBXPNRGVGJSHMTUUQDMFUWJXNXEFNDFIZWIYYCDZIAFQAQHRQNHWGRQAOQQLPXSUHYIIVBGNMWRCMKSAICMUQEDXEDRJSOMSYWXHPFMWNJPFYKXFLARSWTXCSDMAOJHKTLHRZGDFDUCBJRVACAGQYJKBVBTHOVVPBVFCZYNKPGWEKEILGOBWHOZBTYLZZULLTTLNKIOOJPNE");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 62657U;
    tmp_tmp_msg_1_0.control_ent = 209U;
    tmp_tmp_msg_1_0.timeout = 0.7372642913201826;
    tmp_tmp_msg_1_0.loiter_radius = 0.6049952577950025;
    tmp_tmp_msg_1_0.altitude_interval = 0.6603887627486497;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::LblBeacon tmp_msg_2;
    tmp_msg_2.beacon.assign("PXMLIEONYUMSPBZICFHHWFHMSXNAMRTZDMPAIVKWGJRPKQZJNBZONTQEKXQINJJWURLYRDTUWZUJGVSJYNRCOVRDZWXQWGVOZGBDMQKAWUNEDPUIOAQKNXPXTNSYGOSXESDACCFBRPZZOYSLHXTFGGBRYEHCTVCYXIQYWYDDBBAUKGDPSKTO");
    tmp_msg_2.lat = 0.5372111559054037;
    tmp_msg_2.lon = 0.35845600065199;
    tmp_msg_2.depth = 0.9588262834708542;
    tmp_msg_2.query_channel = 58U;
    tmp_msg_2.reply_channel = 142U;
    tmp_msg_2.transponder_delay = 89U;
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
    msg.setTimeStamp(0.9042380149529433);
    msg.setSource(21069U);
    msg.setSourceEntity(111U);
    msg.setDestination(234U);
    msg.setDestinationEntity(211U);
    msg.maneuver_id.assign("AEYWKVDMWHLGLHIZEIEOCFVCGCYOOUETOPLCJAJEDPUVZVHZKJARHVKQPWPATRPXSJCMRCTBVRLWYKFSUTHEXKUATJUWYLNYGQADCDTXUQQLILAVNLXMJXZNXJYSDXYEIUNTOPFBXJSSIIFCWKWHGIFOOKSSPMMOABRHGYZGVPAIFGRGOAKWNHKBDDRTUVFMXBUNBQVNDMNNRQCRPYJFBWPSXZBMWILUMSHQB");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.3945287759763887;
    tmp_msg_0.lon = 0.4667270899858933;
    tmp_msg_0.speed = 0.52645190739789;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.duration = 39720U;
    tmp_msg_0.sys_a = 59250U;
    tmp_msg_0.sys_b = 16443U;
    tmp_msg_0.move_threshold = 0.8164007401752142;
    msg.data.set(tmp_msg_0);
    IMC::UsblFix tmp_msg_1;
    tmp_msg_1.target = 3567U;
    tmp_msg_1.lat = 0.1750527836925425;
    tmp_msg_1.lon = 0.3750161577035541;
    tmp_msg_1.z_units = 45U;
    tmp_msg_1.z = 0.906658721056454;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::YoYo tmp_msg_2;
    tmp_msg_2.timeout = 47959U;
    tmp_msg_2.lat = 0.8787086873947221;
    tmp_msg_2.lon = 0.4267287214139758;
    tmp_msg_2.z = 0.27926546219270443;
    tmp_msg_2.z_units = 198U;
    tmp_msg_2.amplitude = 0.9254770383608697;
    tmp_msg_2.pitch = 0.020308361452928136;
    tmp_msg_2.speed = 0.6156379879581313;
    tmp_msg_2.speed_units = 129U;
    tmp_msg_2.custom.assign("VFWRSRCENNFSPJLXWCZEZCBPISUQWDMNKDYZRLZUBXPAFTUHJXFPZOJGBCCBKAAWPBVMSOQNOKSTYDOTKGQYQIHJYZWLGUVEHEHLIQTTSVJCRVSDJBXIPYMGEMDAOVRJLMPRSZ");
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
    msg.setTimeStamp(0.07867026396231525);
    msg.setSource(15803U);
    msg.setSourceEntity(218U);
    msg.setDestination(23093U);
    msg.setDestinationEntity(169U);
    msg.maneuver_id.assign("APVBYPLDFRGZTXKZUYIOMEDGUTMDAFBHZJKNFQJANWDHVDXVMW");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 45486U;
    tmp_msg_0.custom.assign("FUDXHJBDEDNJMMWTOACVKBQTCUHSHFSREZQIXPELTBWAQSYZZULUERDWRXOAZEJLGYTSCEPXLSBGHAQIJIPTICTBAQTKLIFKDGJODQCRSJMNRZGPZXDNFZCVDCWFTZYCWXMIPVMPLHKNKQJCOEWKHRMVOFLAVFUUOLBHXQFZLCRYWQMXRKJOKPIUBNRGUWDFNSYXBEMASOBDUVVSWNIPG");
    msg.data.set(tmp_msg_0);
    IMC::SetLedBrightness tmp_msg_1;
    tmp_msg_1.name.assign("OBTPWRSOTYMGLFGCXJKYISUUSXWGPJSSCEQAVFOJZPKZWSGLWTJRHNXZDHJVMBWQIPDOEXTAOXZCRQUEGDFRECYBWV");
    tmp_msg_1.value = 31U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.5958351720095314);
    msg.setSource(54514U);
    msg.setSourceEntity(34U);
    msg.setDestination(37053U);
    msg.setDestinationEntity(57U);
    msg.maneuver_id.assign("FRJGOHZACVFRYHZHQZVWPKTKEUDURFDPSXBCHDOIRENVPFPICIFKKTDMHCNZATGOMYUKCOEVQJQXQPYERYCHCNOMXAAGQQWFPYRJFGWDGJBUXFGVDMUIZJBSLJ");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 50401U;
    tmp_msg_0.lat = 0.703607730068426;
    tmp_msg_0.lon = 0.6079398383210772;
    tmp_msg_0.z = 0.1340341102546504;
    tmp_msg_0.z_units = 98U;
    tmp_msg_0.speed = 0.40330191055607434;
    tmp_msg_0.speed_units = 103U;
    tmp_msg_0.custom.assign("QNANHHSDHBICWGIWOQUPTUPGQKFKZNSNJCLFESCCMPMYUOBJHMYAAVRNGYLYATBMLEVZSXQAOBCUFSKTJDWZEOYJUEEOYWRIJDKSPXPCGZAKLSSHCFMXRSTRKPUURIF");
    msg.data.set(tmp_msg_0);
    IMC::VehicleCommand tmp_msg_1;
    tmp_msg_1.type = 111U;
    tmp_msg_1.request_id = 55435U;
    tmp_msg_1.command = 2U;
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 58007U;
    tmp_tmp_msg_1_0.custom.assign("ZHSOPSIPBKMULCBDKVFDMGSBFWKOHSBGHNQ");
    tmp_msg_1.maneuver.set(tmp_tmp_msg_1_0);
    tmp_msg_1.calib_time = 7889U;
    tmp_msg_1.info.assign("RWXTQSCSVAJIAZMFLTJKYNVBQPKAGEWSVYIOZKFVOBJAHIIOVDZWVCXCCELGHYZOTBE");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.7091939160853747);
    msg.setSource(45347U);
    msg.setSourceEntity(107U);
    msg.setDestination(38487U);
    msg.setDestinationEntity(56U);
    msg.source_man.assign("TIWXOIRDKMMTAZVIZ");
    msg.dest_man.assign("DZPPIFSNZOVSVBVGOJPFPZNERZDEMXWMNITDYVAWPRNOKRVBBIEHCPZBHPWHXGNROUGENNCHMJQYIKLDRTJRKSQJDWWOVUXBTXVLKIYSSVQTUZFCQAAETQNQSAXKBUYDTFXHWWKGOLEYISMLECXUCYYJPLAT");
    msg.conditions.assign("ULTTAPQCBYQUYMKIJQJHPBSIAHTGQMJRWHHXORLOSIKBSZPORPYNIMZVGFYDKEAWFTMYXEUKPCADFBXJTEPVMQRUPCORKZNVCDDFZWISSVNTSSJSXKZZBLCEFNTKAYCWEZHHDIWNJOOPLDBFEKPXUWLZOGYVAXNTIWFAGCWNIQ");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("GEWHOMEASVFODUETRXIYILRDEWGVZHGDCARNJSSBODNHEWFDLVGAUKMGMXOTSPRBKCJCBXMQZVEFUBGZAVLIBFWTDOLFPHQRONVTUHLLQVKMXWCTCQZQAXBVKZYHJPTKYELHLOAXVNMFRKXQSCNFRYIZCIKZS");
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.4744919745249364);
    msg.setSource(752U);
    msg.setSourceEntity(215U);
    msg.setDestination(32662U);
    msg.setDestinationEntity(121U);
    msg.source_man.assign("RMAWCAOHDUYHEXQUOLLZZLZJYEJEIRDXRYUCANCDVGYSTWRXTNZKMQAPPFZIZPSIQVHLRRGKFGNRCOYWFFRNTCMNJHJALTKQOYEEAHKVGBGDXSSWSLPVDUYUBTFIUPNEPAQZQMFWHIXLSENVSEMMJJPLBVSUKMPKTDBMZDMUJQBJXFJIQBGCKHABXKECIRVTYYGBPFOUXNKRLDG");
    msg.dest_man.assign("LZRCHTYZDPRJHOYBNLLYOJISWUKDCIQJDMXSACRICPCJQJXKPUSAKLTZUAWJZLJEOSXPZHYZJUBOHGNTLUMFWVIYMDTTIRLIAMKVMRECPRXGEBZBUPFWKLEYLFQHM");
    msg.conditions.assign("GAWGHYMWCORQKMTCAPPIHHIVZXRFRLFTBIEOSEQVYPTQBQZQJVNQTUNGWDIDBMFKPWODJIRNPDERFBLUEXGQEGDRXJOS");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 1252012042U;
    tmp_msg_0.start_lat = 0.4053593201346066;
    tmp_msg_0.start_lon = 0.2240333472860836;
    tmp_msg_0.start_z = 0.3170085305099134;
    tmp_msg_0.start_z_units = 71U;
    tmp_msg_0.end_lat = 0.9477739676561441;
    tmp_msg_0.end_lon = 0.11267015643253797;
    tmp_msg_0.end_z = 0.9161382642963766;
    tmp_msg_0.end_z_units = 193U;
    tmp_msg_0.lradius = 0.6816639488740811;
    tmp_msg_0.flags = 48U;
    tmp_msg_0.x = 0.5566492505231879;
    tmp_msg_0.y = 0.6258414436968616;
    tmp_msg_0.z = 0.27993692573163953;
    tmp_msg_0.vx = 0.4410470480012575;
    tmp_msg_0.vy = 0.5657153151837104;
    tmp_msg_0.vz = 0.6278693474828876;
    tmp_msg_0.course_error = 0.06411314609397778;
    tmp_msg_0.eta = 13986U;
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
    msg.setTimeStamp(0.0033434382683085184);
    msg.setSource(37806U);
    msg.setSourceEntity(112U);
    msg.setDestination(6087U);
    msg.setDestinationEntity(40U);
    msg.source_man.assign("IDZYZJIQSJTFUKPCONQFPMVENFAROOTTWMHIDBMRNOTNOLBMLPUQWICPQVBBTXAECHAVHCEZAFINWXRLGQETBJGNBWHWDXOBVKPDCHWNKUZLCKHYSAPMYUAWMYVMJNXDYESJDZVXPCVQZKUTRSXGASTLRJRHTJNESGRFH");
    msg.dest_man.assign("JHHGOANANFTHJSPJCRRYMPGJNWPYAJDOIROPVMZWUYMVRWKMAOHZFXQLPUXTVGRZBDLLQDYDRUJATJZOYPCKIBWYWXXEQGFOKJLGFCVMNHTBEIIEERUUUPSTQXDNZKSUWSXAKCZKVNCNKVQRETDUKMYLJG");
    msg.conditions.assign("VTHKKSUUKMRWFTBSAJUGQLDSCLHLFXCPMFOOKYRTUMELNXBYLAPOJ");

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
    msg.setTimeStamp(0.3998309881344757);
    msg.setSource(7260U);
    msg.setSourceEntity(247U);
    msg.setDestination(10865U);
    msg.setDestinationEntity(74U);
    msg.command = 20U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FKYLCXHTAXNGLOTLZKAJJSLIJOSTWEXGZWWHOWCJERJGHQPUCTSGILQUPVIWBBQWCNKNPWFWIVXQPZDUXNLNJRPMVNMQTCCYKBWNVMXHSEUGBDTGSAUGUAPHONJYJABADMITEKOEPAFAMXENEGZIYHJGHSORXBLON");
    tmp_msg_0.description.assign("EBEURSMTECHXQCHIXFSEUUDWWUUZVGZTLVNYHIPYITQWSNFAKKQIMPJDBAVXORWHNQIOOIZMUXTLEOVPRFOKAMOFTCBAAVYZZCJMWLEFBPLABGYDVQYWXHNVPFZYSMLKHYDYLKLCVCICUPEJTIGLLOTRNGXASPJZFDWQPQDWDKJRQIXOMUETDZVJCSSAHNJBKURVTRRLTHGOBSMYDSSEGCPXNNDFAKMAIZEKWPBNHBZGHCGQNXUYFORKGJQG");
    tmp_msg_0.vnamespace.assign("VQTLNVFATKMNJLNCUQRIPAGLXQPSKYNQPHILWEGHEGLLUZKZCYNMPDMLPVXYVBWMDCFUOXBRAWIBKTTOKYJPPUAYQXVRSMAJOCDRUJWSETHOFXTHKIYIFYRBNFGTSNHWIUAZBNBDYESZOBWDEMOOMIQZHQMOGHDMZZRWVSEUFKPJKWNICCIWMD");
    tmp_msg_0.start_man_id.assign("OWULOAKRKVJOMJWUABXFXQHZMCPHXFNQIOHDUPEKFODEINRWCEPSLGDDIILXQWMGWEKVBHSYTEBYZKUEBZHMOVIKSQZPOLDKIWRPFJZTHYOYLWUHBPNCYRVHPUDLMOIHITYZKWIRKANADJSNMCTBXCPURQMFEVMJTI");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WBDKRWSPWRBPRDJXGLLVLECCYRTWAPBGEGRWOGKPOLYHPFRZNRCFBRFQIFUQAIVKSEHFHZZDMJVAYSYVNVBIUNDHZSZYQXTHDNDMCXOCPUSIEU");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 13999U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.4810196502082682;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0015677079231651847;
    tmp_tmp_tmp_msg_0_0_0.z = 0.05624662045125506;
    tmp_tmp_tmp_msg_0_0_0.z_units = 126U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.9014533940807695;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 4U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("CWOYJBBDRNXQOGHPGWRPCEZLVYEMLMUUQCRBTZWFHSGKSKGFDRXSWKPLCIDWKYSMGPUZBJCDNPSOZAWXDOZTQBVGOVUHFETLGZMJWIQYXZJVTINAUTNFIYZPNMVJQWIPNAPBFGVKQNKNZLLHTOOXQBAXBHEKIAMBEAWCXVOLMDDRMUVTGC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::CrudeOil tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.9861375886823222;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::Loiter tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.timeout = 54579U;
    tmp_tmp_tmp_msg_0_0_2.lat = 0.22695581632718964;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.9507964203068098;
    tmp_tmp_tmp_msg_0_0_2.z = 0.715862946598433;
    tmp_tmp_tmp_msg_0_0_2.z_units = 64U;
    tmp_tmp_tmp_msg_0_0_2.duration = 26416U;
    tmp_tmp_tmp_msg_0_0_2.speed = 0.2095951195423239;
    tmp_tmp_tmp_msg_0_0_2.speed_units = 135U;
    tmp_tmp_tmp_msg_0_0_2.type = 123U;
    tmp_tmp_tmp_msg_0_0_2.radius = 0.7607400903424394;
    tmp_tmp_tmp_msg_0_0_2.length = 0.8268253228005633;
    tmp_tmp_tmp_msg_0_0_2.bearing = 0.8808371051985803;
    tmp_tmp_tmp_msg_0_0_2.direction = 13U;
    tmp_tmp_tmp_msg_0_0_2.custom.assign("PCDJFFZNSMDTDBAXYOGMFPHCUYKZUFPDKORYYGNRJAKZMKINGWCUYOYNRAVQCHUGBXTLXRTSSPWQNLYLKTDHVELCDPSWIQIETGJNWJRJQMWAZETSINHOWMOJQVTZLKVEXBQEFBNBVJEXLOXSUMJIVTUDBEPHAAAGEFOIQFSWYEORUBMLWGJGPZLFPUKHDZFYCQQMVRSXHSDAOCFXBRDVLOKPBAGWHHKQIJRUNGKZCXTERIVCMLSHMYTCUANIW");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("QXOUTNZKSVGDPNOJDCZEVUKJTMENJIIQXIOIUELZTMFTMXAOIBSSSFAHWANIVQVCHEOGBLTKRTOCIXTWLFBHBNFNVGYVQMYNIUDPRWADUBRQEKSMCJGSKCTJWAMGJUZZPRMFXOOISVZUFPEPAFYPARUWVVUMLHZNVDRDWWHRGTQBLRPFWBSQCGHALPUYDHAGOGEJSWLEFHQZKQZZYYBC");
    tmp_tmp_msg_0_1.dest_man.assign("RXDUDFJGPJQFEMYVCYKXLBLZCHIOWSVFMKZWORTTJNTZ");
    tmp_tmp_msg_0_1.conditions.assign("KHWGPUZYZGMJBIHKBREJGNXRWJAZUUAFFMZCBLHDFLCAPQQULIFFTEGXSBHRDMDOMSIWRVVMBLPRJAMTZXDKPHUARWACQNTRKCVYISSXWTQZICVSTTFVAPEQEWPMVTSWGAYXLNMNJBOXKKYTVLQCIIVDZAEZLHJCYDIXNCXKJYANLHIQRUKHGOYSMOUWYUJTYBOGPDFNFVCEGDQIZ");
    IMC::DvlRanges tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.direction = 110U;
    tmp_tmp_tmp_msg_0_1_0.range1 = 0.8371962596436706;
    tmp_tmp_tmp_msg_0_1_0.range2 = 0.20144140480290873;
    tmp_tmp_tmp_msg_0_1_0.range3 = 0.09565310750769018;
    tmp_tmp_tmp_msg_0_1_0.range4 = 0.5355993536230131;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.038448593167968226);
    msg.setSource(54319U);
    msg.setSourceEntity(59U);
    msg.setDestination(41593U);
    msg.setDestinationEntity(178U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IBFYMMPEJFYKUGFVGDOTWNSJSJTMPREJNCASQRQWAKWVPRODSSBCURCZYIZBVXYLLKACQTNEUYXHLKDPHHFTYEYGOLBOKZARWROIRKDDBFLVZHTSUJMRPTAQSXXJXWMXGRMMHJQSYFOEWGWFFADXUXXLDCZCNTMSVYMPINLVCAOHIKAZBNQUDLHBNVTLJRACHIKLBZIFZEGWIBEGPOEKHVIVPBESDHUJAZXZJG");
    tmp_msg_0.description.assign("SUTCQCGTAOQTTQVETSVHNCXRQYDHAEFJXNPAQMMGZENWPBCNGXLLERAGRRMDGCIERUHDABCBZDUPUEOWDISYXKKUARBAWSDZIV");
    tmp_msg_0.vnamespace.assign("EPIXZKVVRJERDNGDLUXFBPYGYBLMKSLUFJQLKUCJSUFUTTSZMNSTXLIPFWNBOLGRBPOQLPOMQBGEHDNGCQIGIUTMDTHENBYLELZTHJSG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YEKPLJZRGDLDOMBOKZTMABKRXCOQSGXTFHAYGYGNEGRUBUNDPOFLCHKHECZZDEHFPGNQYINFALATNWAJPJCXVLRCUWEEBMIZBZXXDHJBUGAVDQVVVCFD");
    tmp_tmp_msg_0_0.value.assign("LFQWUVCKZAVZCPVHEXEDNYXVRJLFSQRYHAQASOAKCHBKWJWFXFMMUQJJZMNGAHPBIFEKVFMZDKXCAVLIRSYEULPQAOPUNDXSKQPYKCMYGPTMSBQAEDBNEJYWBFPDGWRLUZSUFEORTYJRGJMOVGCLKPZBTDXCLIVVLINQFEHWCTRYLGARWZTO");
    tmp_tmp_msg_0_0.type = 35U;
    tmp_tmp_msg_0_0.access = 107U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UDDVTGWLEMEKTXZEVQMCNIIYBEUUCBQASNUPGFJXRVJDCOTWXVPRXJJIQCKSFKDFKBYU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DPHKAVGUEWSYUSLSCCYJEXMHIIRMXUBXGRKFIAZLXZIOJHFJVOWVHZABCFTODNRSOFWZEQJBTMFYSTIVGQYDANVITSPJWTBDLGDBMNHKWJYCGPUUTALIKQQPRIAPJSJVCLRFCPZNSQVDZUZHCOOLMWCKKEPUYEO");
    IMC::Dislodge tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 38744U;
    tmp_tmp_tmp_msg_0_1_0.rpm = 0.03485254461372267;
    tmp_tmp_tmp_msg_0_1_0.direction = 122U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("YAEIUXLEPQJTHJXTRFMGXSBQDLLZJVJKJDHDCQYHNTACMWQLMKCWYUFFLTRJFRHLZHGESGBUPOATIGVKVWQATOGYBWVBVXBQPIRCXKCMKPZADCETXYSNSOUBKBVRCUKNHGWBIXFWGCZANBMHPIWZEONQDYVUGNUPVFFGKUQRWSIORPYUYXNNZMYZARSMRSCTASHFWDFGZLYOTDELPHTNMOXLQI");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.source_man.assign("VMPMSNJWUTRFPRGAQRNRTFAOFDAZLTMKDKJYHRSILUAFJZCCGVXEQDPJKUEMKEYJEPGIBBHYABPGSZOWEXMNLULKQDBIIRMNATXXQHLZWWCCLZRSEOZGVFHQXTEBWOGYPZUAKVIQJCNCHUWFHQQSNIOVEZTZZNIKLSYSGDLCV");
    tmp_tmp_tmp_msg_0_1_1.dest_man.assign("MLZAPDMCZUVXFKPUSIYXNKIISZKDWJLGQOQBPHTQJVSCJAGPCSXVWMBRPHQIGDFPVVOWYQSULENONTUXAGLMTLLJFRABMGOEV");
    tmp_tmp_tmp_msg_0_1_1.conditions.assign("BNNPZPEXTFDRIHIEB");
    IMC::DeviceState tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.x = 0.5271792602608909;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.y = 0.07649490112911084;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.z = 0.3048528800904491;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.phi = 0.678137156012955;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.theta = 0.205583384179005;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.psi = 0.13024624618031777;
    tmp_tmp_tmp_msg_0_1_1.actions.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("ERSTLPMVSNMSSVUZPKZXLAUZVICHKWJRLHLSILCJLWAVKFHRGQEGOWKTFDOOGWJIMPEHFHIBYDNARTDZLOOUCRDKCQBOINHUHWHWSSIDUBZOPCJURDCZUEJACMESQFOYFFBYYJZMBTPRYJIMREGU");
    tmp_tmp_msg_0_2.dest_man.assign("HGQNDVKXKDIFDQVACQLMZRMI");
    tmp_tmp_msg_0_2.conditions.assign("WRCYQNGRKUXNNYITNRTIHBJEBDOLYRJZZHCFNJEGLPHFGMSPKEQIBDTUWHAXXIXEOJFGLYDYOAMONJJPOMFUYKXUHVAWPPTMASSYHAQJHRUHYEECLWPLDIYZOZTF");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.2774459299615277);
    msg.setSource(27195U);
    msg.setSourceEntity(213U);
    msg.setDestination(9661U);
    msg.setDestinationEntity(139U);
    msg.command = 56U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RPLWTKIBNMAGODTUZNWUHSHORKEPYKSABIJDQVEGYJUQJECCMULKIUTXBQGTCKPTBCVVBCNIQXVQWBQJIQAABDEAYAHNTPW");
    tmp_msg_0.description.assign("KLWSXTWNHRBAWJZGSBRLMQETPCNHFYGOTRKJNLSOHGXBFOIQNBDGFCJHDYWJSZSFNGXIZEHAZQQSXDXVKTIMWKUGXJSSUMBPFSPDYRKMFLBOHLCIVRZKYEVVGYJFATCRECIMVYICMQAWVVEZPQUHCDPXDOGCYTXOIIAZUNTBPEPTVWLMRHREOLVAUPJWNZUJNSCXXQHOJPMUYGMADUDTFIKNQWLOGZJBKBEALRODQRDCVZUIEYPH");
    tmp_msg_0.vnamespace.assign("CLWVJXUHIFZDNMNONTSFTGDUBLWZCNRMWDLECXTYEHSRBLFMVFISSIRYXTZAKYOWQRAPVSEVFKSKNQQIABZGGTWPKUDMJWKCLAAMVUAVRDJOKZUXJCBBIROAVBBXICTOPHOBZYTTBDKUMSIDDYEZUIGJFOEJXWEPPHEMLRHJXNUFLMMGKWFVHWAQFZUOCLVLNTHIQPDRONXNP");
    tmp_msg_0.start_man_id.assign("UXJSGLDKBRMIVUUOYEFKWHQAWWPBKASYGALVAAHHRJJEETNSVVONJCJKEHVGOIIZMOKUXFXKCHMQTRUAYMAONQDDMUVJEXUSIKTCOULCKBHUCDLQHCCEVGPIFXFOJWXTBQCOBCPQHTLTZAFGFZGDYSGVGZLQXTRLFJSWPINYRQETQGWCZRNXDBIWADKMEMESLULOYKPYGWRZY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("LYWDLAXYVHMIUEZXORWTVTGGIRFWKQLFFBURMKVBYKCDEBRRYUNQTZZMJHLRVIIYGUCNWTCOKJEQDXUWLUMATCJZBBVOSNDAGFQDKHVJTQTSOPCRZPFSNONZEHHQYEOXMOEFG");
    IMC::Launch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 38931U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7183119207514191;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.28830002302367863;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7844546245526888;
    tmp_tmp_tmp_msg_0_0_0.z_units = 244U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.4732508331583529;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 70U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NCUEHRMPUJEGDMNUXLKQXRQDSEJICGFMFJQTWTHCOGKMVEIJGEWQDYQSZOLVBAAJDHZMJHSYBNFCTAFPZQVIEEAUEQWIWGIARNLBLFOXBPRTAUDYQPDUSPZRKTYCCPKDBTZSSVXHXQVGPXWRJTEAAVUWZSUHOMTNYOLYLDYLFCBWIKSXKMORGDBJVZFISFMI");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.36412849434606864;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 170U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WQIGRAVGHHCMPMCMGLUHYTHGEEXUCJGAMAAXQQTDEMZGEQRTMKIADTGNNWD");
    tmp_tmp_msg_0_1.dest_man.assign("YETUQQRQXTDYSCDGHTWZPRJNQNIFIITEHEAPUMPHGPJYQBQETB");
    tmp_tmp_msg_0_1.conditions.assign("CWVPHUFKECQLRCLWTBFBYVTZHQYEPPEFGKJWBEYLATNHLBWZJDOOMAZXSVXTJLYARFCTKXIAQHMXCSWHNLDWPTUWGASNZKCZZHFWCGHDSAGOKIZDKCGLEYJYPMBDINRLHFDAGZRQWJMINJVSOIMPOMLRAHAIYEUWKIISNMOKRPDGPIQXFSQQJXFVIERYTNFJUNGEUUUUHUZOQUEBZRVDRM");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::ServoPosition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 246U;
    tmp_tmp_msg_0_2.value = 0.420026387707675;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.2798511846203193);
    msg.setSource(25196U);
    msg.setSourceEntity(163U);
    msg.setDestination(13293U);
    msg.setDestinationEntity(176U);
    msg.state = 31U;
    msg.plan_id.assign("TKDWHVJUMNBMHBGCDZITDLVIGLKLSRFBYATUUCQFNJRZXQOCLFLGXYOLHHTOISMDEIDPSMSUVJWAFAFEPJBCATAYCAEVZTRDXWBSQMPOKHJSQXTNRNRITVWQXRKVZCGUUHSLHZXJWRMXTWLPMVMOIJRKCBGKQXLBUYUPRPNDYBQSOAEFGZANCHSYKDULHOGAVSKIIEZIETEEJYAG");
    msg.comm_level = 191U;

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
    msg.setTimeStamp(0.5781669589856714);
    msg.setSource(26762U);
    msg.setSourceEntity(5U);
    msg.setDestination(48060U);
    msg.setDestinationEntity(116U);
    msg.state = 48U;
    msg.plan_id.assign("NSTOYXUVOIMWIFSEEOAJBYZDBJJLZQCXAMQJNFNKXLHEZBVQZCSPUJLPYSTAEODBURVGTFNEXLMMPJAVFUOFWOPRGMKFKGIOSMKHF");
    msg.comm_level = 16U;

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
    msg.setTimeStamp(0.6528032912222804);
    msg.setSource(16075U);
    msg.setSourceEntity(216U);
    msg.setDestination(9795U);
    msg.setDestinationEntity(147U);
    msg.state = 106U;
    msg.plan_id.assign("QZMKHMSZDNFIKGTPPHLVEXWNTGQNWQZANKFDBOLSBQHTCJYMJAUIYUBKQDLDJZJTGGJRQGQQMON");
    msg.comm_level = 163U;

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
    msg.setTimeStamp(0.006774545263287024);
    msg.setSource(25501U);
    msg.setSourceEntity(209U);
    msg.setDestination(35365U);
    msg.setDestinationEntity(94U);
    msg.type = 45U;
    msg.op = 190U;
    msg.request_id = 51252U;
    msg.plan_id.assign("KTLWJTZESOYUHTOIYDOIFNDTXCIHAGZBBXOULZFNRILLAMHBNFCYMKIUGCVTFPSUYJIGWVRGQNZJIQEKWBAKFVHZXQYUVOVSX");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 149U;
    tmp_msg_0.op = 191U;
    tmp_msg_0.plan_id.assign("CIDNDYJNISIMAVVGDFCPYPBFBIASBWPVUTJDJEQFQXLDSAQPRCSHIVMYIWKZNGCTIEPLYCUEOJQABOKYBZSJMAKNJCSXFENXQLKHURRNXTLDBFUUGGKLHHSEFMBOXWRPBWYXRXFMCGOQNLCWOKFVAQZUTDUCTNID");
    tmp_msg_0.params.assign("RXQKOUNUGAJPRVJYZRTKYSFQBWXCSGPVQKORMPGJCNPGYTDOTJTAEOBQFXTHRKQHRYBHMEUPITTVFDWXMPMUHLGBBBDLZQPSJEOFUQIWXASNNWCQONWUDNADJECALIDPZNGSSSVIQYXCUGQHKRSZIKVJBMJPMFUAFZRKTCBHYHAVOLOZULILGOPIMDMMLTKRLWYFDENXKYWCEAMHDLHBAVGVJEKRSIZEAFFNCUCJGVNSZIEYHTX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CMQOMXIGLPXRHHLBZXCYQLIWVXDHKYJKFKSENRJWCPVHZHMCWPSUDDZZMFODBAJMVGGXRPYSRZBWEGQFNKTPNZOXFATZUOAINNEPCSIVTEFWWYJIFVEGOAKNYONMVIULRFKLFJFQXTTUINRSGHTBINSCSL");

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
    msg.setTimeStamp(0.032044234002160055);
    msg.setSource(5085U);
    msg.setSourceEntity(13U);
    msg.setDestination(55365U);
    msg.setDestinationEntity(199U);
    msg.type = 67U;
    msg.op = 21U;
    msg.request_id = 44526U;
    msg.plan_id.assign("JXIZRIEWPMNUHFQSCNXGSHFWAIEBJFPEZNRVSCUPKFDQFKKKYBFITTBTVQPUCVTWDISZJFPLCUBMYAUAQYIGX");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 50526U;
    tmp_msg_0.plan_size = 438058930U;
    tmp_msg_0.change_time = 0.490484419419556;
    tmp_msg_0.change_sid = 25967U;
    tmp_msg_0.change_sname.assign("ETBIGDHGMXOFHFSLUVSBXASQQLXRPRVCGJAHYLNXDVTPMZCMSNRVQJYVSPODOGSZEPEYBCCUDLXAPXOLPUVFAITHBRPJWNKRMPWKQYZIZGHENXHWFRSOKYMAI");
    const char tmp_tmp_msg_0_0[] = {-122, -27, 35, -20, -59, -14, -23, -98, 20, 27, 48, -70, 79, -8, 8, -54, 87, -54, -20, 119, 112, 37, 125, 33, 22, -115, -122, -22, -15, -83, 44, -115, -41, 118, -126, -104, -121, 48, 54, -126, -53, 87, 122, -103, 33, 48, 77, 51, 17, -39, -64, 126, -59, 39, -24, 23, 51, 28, 125, -109, 78, -11, 19, -64, -4, -99, 19, 90, -113, 1, 122, -124, 49, -93, 28, -45, -118, 90, 101, 9, 5, -44, 115, 13, 22, 7, -60, -24, -17, -41, -73, 34, 106, -25, -21, 84, 1, 63, -44, 121, -115, -102, -109, 68, -9, 32, 114, -115, -10, -28, 24, 4, -17, -77, 125, 80, -126, 48, -110, 97, 54, 89};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WKWIFXRDHMRAPMAVVNFRMUCRJVTZSCZAEBLDNJRTHCVPNNMDMNUSIIFUGBZEJEPUEPTFOPOKWCZRFHTLHKIJLCXJVEQOZQPMWXODYWDWXIHSVSXKNOZRELBFUWNVYLGBGCQENCZGHIGGYEJCKQAIDVASKAUVNYOGZXMZOTPSXUTHMETLPKBVQAUICTQHUHUBXSYYRYFWFLJXOYRBJYZQGOWIBLDSHO");

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
    msg.setTimeStamp(0.9680545782730543);
    msg.setSource(45714U);
    msg.setSourceEntity(99U);
    msg.setDestination(36019U);
    msg.setDestinationEntity(218U);
    msg.type = 31U;
    msg.op = 194U;
    msg.request_id = 29482U;
    msg.plan_id.assign("PIBSHJZCGXHINUYODNOUEIAZXNCLKJBAXFDCVLECJLAMJVBVKAJTYWZEZKNMBRVTJWTPMIZURLFQOEDYNSYVOGKGZQWWXUN");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("FFVDXUVMRMOOBLVJRSHYSDFMUQFAPZKJGUBXEFGOJNZCSRSVTVJTXCUALCXEPCECCJXVAGIXNFCTONTJOSLZUKYCAFBQLOQFNPBMAYGYLTNEVDPGUZBFYDHQITB");
    tmp_msg_0.formation_name.assign("KNQAODIPWRBLGAVITIWDSMLLZJVTYKXTKHUYXDSMJJCDJVSVBYKKDXXUSLCWFHNAPOTMOOEPECRFQRGEFLXFUIKGTSDQACKLJLAGRFXVJHJOZKNLUGFYVBRSVQTFFHUKYEBYQXGXCACZYHWCSISOMCHEYZIENZQNPRZWNMMZJJR");
    tmp_msg_0.plan_id.assign("NUGQLOHAXXQLWPVMCZAFLEGOIVIPKKPUJEPTFGCOJXSJBULNPZSAATNBBCQHTBOVLCNYKQSTBBQVNJFHBZAIVHSRJZYRNYMZOVRDRXWECZTIBWHYWECDIQAGZHNWNQLPJRCXIMKADMFAVIFRJSKWTGTM");
    tmp_msg_0.description.assign("IIZCCPQODDWRUZIJRNJEHLDZMFUANAKYVGLNBMVDSGNMPWIQJIPLQGEGOSQDJFCRHFCTOSHIUMSFKNORIRQXMJALYBUXHZNBKNLGSWJNTUBISBXGWRUYOMYZPLLVBVMSTAJFBZNFPQZXOQPZYHHAGEFLYTZOTSWDKHXLXKWVEVHGBTOOELVTPFYCXTEEMKVWXHKUOXRFRFUHWT");
    tmp_msg_0.leader_speed = 0.43397936409278126;
    tmp_msg_0.leader_bank_lim = 0.11331562598928813;
    tmp_msg_0.pos_sim_err_lim = 0.235911152465887;
    tmp_msg_0.pos_sim_err_wrn = 0.4469946093424253;
    tmp_msg_0.pos_sim_err_timeout = 4315U;
    tmp_msg_0.converg_max = 0.17189997548537073;
    tmp_msg_0.converg_timeout = 3454U;
    tmp_msg_0.comms_timeout = 51150U;
    tmp_msg_0.turb_lim = 0.025892914748716356;
    tmp_msg_0.custom.assign("IPGCGERMNZXXUBFHDMGFJBPGETXGJOEIHSHBMCYQYQRZRWKENILVLKOVTVFMR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JWVTISKMVLGUKUCRXWALNNLSYIKWNEUDIZRASBBIJHOWTMAMBLPOQTGIYOABCXRKIQXSLROHHPMNXQFVQJECYCCVQVFOXPDVEQNUGIKSYKSZOVOMSCBDAKWHJSDXBEXNFNNDVMSHDRJYHURRAGTWJBLJKEQCUMYNQCTGEHUOBLBJGZIIZSLZPFGNMWPQPKROCXLHKPAADGJLEMPTZFPFMW");

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
    msg.setTimeStamp(0.028458246573599078);
    msg.setSource(62168U);
    msg.setSourceEntity(47U);
    msg.setDestination(2062U);
    msg.setDestinationEntity(224U);
    msg.plan_count = 3040U;
    msg.plan_size = 2652219559U;
    msg.change_time = 0.3155019779238736;
    msg.change_sid = 55428U;
    msg.change_sname.assign("SQECFOXFZKDBDHRNPTJDPDWXSFVCGAMNOCVZMOMOXIYATBUAKTQQFGSJTWHEPOBWPRYTKWIVFLQHLRIXUUMVMZIZNGLBSRFAOEBYCIPLN");
    const char tmp_msg_0[] = {115, -56, -96, -53, 33, 74, -86, 69, 44, -54, 81, 99, -128, -45, -100, -104, 106, 5, 116, 88, -94, 13, -39, -94, 29, -59, 55, 103, -31, 121, -126, -21, 26, -73, -116, 102, 30, -115, 6, 62, -4, 46, -8, -87, -123, 40, -115, -80, 98, 113, 89, -56, 1, -128, 101, 39, -83, 48, -95, 109, 125, 98, 113, 94, 84, 60, -111, -14, 2, 64, 8, 70, -116, -59, 101, 80, -69, 42, 6, -93, -113, -72, 124, 95, -57, 51, -48, 43, 108, -36, -108, 40, -56, -67, -123, -54, -64, 62, -79, 76, 21, 40, 11, 67, 108, 47, -112, 114, -32, 90, -2, 22, 84, -110, -115, 11, 119, 124, 9, -10, -99, 71, -78, 59, 21, -75, -27, 96, -125, 64, 13, 122, -84, -99, 101, 91, -58, -5, 2, 43, -122, 66, -69, -93, -97, -19, 126, -63, 113, 29, 30, 93, 98, 87, -11, -66, -26, -4, -29, 55, -74, -2, -49, 104, 35, 105, -18, -117, 84, -80, -112, -78, 66, -37, 102, 103, 38, -75, 46, 96, 3, 31, -62, 84, -104, -72, 116, 84, 32, -70, -12, -39, 105, 106, 17, 117, -2, -37, -64, -11, -71, 41, -86, -17, -90, -77, 101, 62, 120, 29, -111, -83, -54, 72, -72, 42, 95, 98, 103, 85, -79, -72, -127, -104, -91, 99, -86, 86, 73, 47, -25, -4, 112, 84, -64, 6, -31, -33, -53, -79, 51, 85, -97, 125, 0, -96};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZUKATCLUBFFYLZWOPKJOAPBVGFXTRFDQLUKNWRVCINYGMPVKPSQYENUPBMCXGJLVQEGUJELWXECHOIXXNGYTVVYBMRWAEJUIQRKTZKBDAPWVYMSZHEHMJPRHAZXRLTCCRMHYIKCVTQASQRENOZZONFMBHCBOUYAYSDDLGDJHIFGNGSQPES");
    tmp_msg_1.plan_size = 46612U;
    tmp_msg_1.change_time = 0.6270731001415085;
    tmp_msg_1.change_sid = 58446U;
    tmp_msg_1.change_sname.assign("BIRLNKDYCFDUMGTQGUKAVOPHZEEFZUZJRKLAPJWVYQGTHMYNEOFYWQWVPDWTDZEBQHPAOYZUENNSNOSAJFRQVOFGSCNJJNRVBFBVKEVILXCGBECKIJDUFRUZAIIDTRCKMJRPJZHIWUJMSDT");
    const char tmp_tmp_msg_1_0[] = {119, -63, 5, -50, -84, -41, 59, 52, -73, 121, -80, 90, 82, 68, -36, 44, 108, -27, -67, -44, 17, 121, -39, -110, -83, 50, -46, 23, -90, -16, -61, 16, 11, 83, -23, 24, 62, -20, -122, 77, -88, 23, -10, 96, -59, -110, 105, -72, -87, -37, 35, 25, -102, 126, -127, 97, -22, -84, -13, 104, 65, -127, 18, 113, 96, -81, 56, 118, -92, -57, -73, 93, 88, 45, -101, 14, 112, -28, -83, 76, 28, -11, -88, -52, 79, 115, -25, 79, 42, 97, 110, 114, 9, 34, -73, -79, 52, 43, -37, -109, -39, 82, -106, -1, 79, 69, 96, -19, 78, -115, -18, 72, 95, -74, 104, 74, 92, 100, -41, 71, 26, -103, 119, 70, 46, -99, -46, -26, -45, 77, 64, 125, 82, 122, -24, -14, -43, -44, 66, 120, -17, -96, -6, -61, 68, -81, -1, 100, 32, -120, -71, 38, 60, 74, -70, 24, -67, -112, -16, 80, -64, -106, 74, -93, 64, 83, 70, -85, -94, -102, -43, 51, 31, -61, 6, -33, -99, -84, -64, 74, 73, 46, 13, -7, 1, -33, -31, -97, 31, -65, -73, 65, -101, 32, 106, -20, -122, 101, -60, 3, 106, -57, -88, -44, -63, -124, -90, -31, 101, -94, 2, -66, -83, 41, 73, -105, -105};
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
    msg.setTimeStamp(0.3402803676127907);
    msg.setSource(23711U);
    msg.setSourceEntity(125U);
    msg.setDestination(65209U);
    msg.setDestinationEntity(57U);
    msg.plan_count = 23783U;
    msg.plan_size = 58696093U;
    msg.change_time = 0.6949043784511335;
    msg.change_sid = 25615U;
    msg.change_sname.assign("AWLCBPLLFNAGUGWWMFYQCEHTNBUZCXOLIUBHKAUTINSHREVFKDBDMGDPVYXOBXAYCHQIIAOTRCMZMORLYVJEJKPHQ");
    const char tmp_msg_0[] = {-29, 48, 33, 79, -35, -72, -58, 1, -30, -55, 115, -64, 40, -92, 48, -120, 121, 20, -105, -110, 3, -101, -22, -109, -56, 91, 64, -118, -100, -90, -32, 42, 115};
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
    msg.setTimeStamp(0.7535356732876966);
    msg.setSource(576U);
    msg.setSourceEntity(144U);
    msg.setDestination(52582U);
    msg.setDestinationEntity(8U);
    msg.plan_count = 47587U;
    msg.plan_size = 4284154304U;
    msg.change_time = 0.571784506589238;
    msg.change_sid = 34439U;
    msg.change_sname.assign("UFEELTOLVRMFFPLSJAIJUMMXYIRPJMZHDYCIVBOPXRPCRZJBLCRXEZHUKTZGZKJHWFWCVKWDHQYBCWJLGYWMBNTBCQLIAHKMUYIAKAQZQOLZDYCIUUCTVTDPGWYVUJTNERFFFPQSGWBNDNFEFLGHAITRIMSEDCTQKVSAOGTZEDOSAGCGOZSEPYAKKZNSXDHSX");
    const char tmp_msg_0[] = {122, -106, 58, -87, -54, 28, -5, -2, 32, 104, -31, -42, 89, -33, -63, 20, 2, 124, -5, 78, -71, -2, 92, 41, -79, -40, 58, -108, 78, -32, -119, -27, 111, 81, 121, 54, 70, -41, 100, -119, -80, 62, -47, -100, -120, 120, -59, 88, 14, 103, 84, 99, -102, -4};
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
    msg.setTimeStamp(0.06053153777470388);
    msg.setSource(60736U);
    msg.setSourceEntity(115U);
    msg.setDestination(50331U);
    msg.setDestinationEntity(250U);
    msg.plan_id.assign("WRGKNRUYVATSJLJOKIOYHEKFVCDAFCZYHJQWNXUGDREGBHQTOKQNUSANXIOVXRVEBRQJLCJKSUIHWBOSZEHPFYZZBZWBBZCOQNMKDXSTNBRYUNALLLPXLCRAFRPGFCBMOEMEODWJPPJR");
    msg.plan_size = 52367U;
    msg.change_time = 0.06584476294079888;
    msg.change_sid = 21313U;
    msg.change_sname.assign("PPFEQQSZMPFNLED");
    const char tmp_msg_0[] = {-48, -123, 73, -30, 58, 28, -71, -101, 34, -86, 0, -113, -78, -84, -39, -71, 74, -123, -124, 50, 4, -31, 121, -14, 35, 52, 86, 49, 55, 32, -122, -14, 69, -113, 70, -17, 31, -126, 26, -17, 67, 29, 91, 107, 122, -20, 112, 12, -64, -48, -94, 8, 35, -116, 73, -106, -3, -98, 29, -36, -5, -51, 64, -59, 20, -31, -104, 87, 2, 102, -5, -119, 6, -71, 126, 34, 79, 83, 87, 6, 100, -118, 126, -16, -30, -22, 28, 37, -86, 78, 119, 14, 104, -67, 81, 63, 2, 110, 90, 1, -25, -7, 45, 96, 16, 45, -9, -110, 48, 91, -60, 48, 83, 5, 116, -39, -64, 47, -106, 81, -51, 60, 81, 61, 67, -18, 63, -58, -113, -51, -23, -23, 3, -95, -17, 1, 15, 94, -29, 56, 73, 7, 17, -28, 105, -56, -4, 77, 99, 51, 25, 31, -113, -106, 43, 109, -77, 30, -81, -40};
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
    msg.setTimeStamp(0.32407906206907444);
    msg.setSource(15193U);
    msg.setSourceEntity(165U);
    msg.setDestination(58987U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("FFHWPIZRCYULSLOSLJMYVPYUNHTVQAKLOGHHCJNRDEABTLAVILOGYUDDFGQPCBOJSBSKKFDQBAMXFVCSGGSPIWZEZNQYTDVRSOWHCJFLCKPIKMHFKUVGXXRCOIFRPBQEZZZJOPQHBJAINDTBNPSADZYITXEZUGULTKXCPNRUJOIFNBMBOXUFEKSQIIMEMXENVATYUGJAWXVJCTDWMO");
    msg.plan_size = 63610U;
    msg.change_time = 0.4944545342552241;
    msg.change_sid = 29100U;
    msg.change_sname.assign("STHAEPOFOEXOLTZFQBKDHBRGRJPPQUX");
    const char tmp_msg_0[] = {42, 9, 36, -60, -101, 120, -103, -69, 72, 77, 117, -35, 46, -2, 0, 117, 90, 81, 120, 20, 50, 98, -14, -97, 26, -117, -26, -118, 70, 123, 108, 41, 76, 32, -103, -86, -115, 29, 100, 40, -25, -13, 66, -30, 121, -34, -60, 99, -100, 15, -50, 32, 1, 89, -29, 21, 53, -23, 5, 7, -99, 63, 72, 98, 1, 21, 88, 35, -33, -14, -122, 122, -85, 24, 106, 73, 14, 47, 104, 79, 119, -81, -108, -54, 41, -29, -39, -123, -122, 5, 107, -5, -33, -115, 38, -108, 94, -15, -71, -5, -53, 12, 96, -25, -128, -31, -81, -74, 110, -82, 82, 116, -81, 0, -110, 42, -85, 60, -35, -9, 103, 0, 52, 119, 94, 81, 50, 120, -73, -58, -29, 83, 91, 95, -27, -30, 119, -122, 34, 40, 73, -30, 111, -88, -105, -30, -44, -23, -44, 28, -126, 28, 80, 50, 49, 80, 117, 105, -10, 64, -90, -54, -15, 42, -96, 74, -72, -117};
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
    msg.setTimeStamp(0.2508827541625652);
    msg.setSource(42226U);
    msg.setSourceEntity(22U);
    msg.setDestination(55742U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("ABBYEJUNCYEUIZWBQBDVXDHIWHDGYFSSYJJVXHINEUDQTDALFPPESJIZNQGPZARRQKBOGHAVLIZMTSVDLLHUTDCBZLOAGNLOQNLADYKAQPBZSRJWMQZGMN");
    msg.plan_size = 31689U;
    msg.change_time = 0.6095615252475444;
    msg.change_sid = 20581U;
    msg.change_sname.assign("IBSXHMFFORLTSAYLHFLJCVZWUCINKFZOHUKAORVUXIUTJZXQNOBTMIZJZIIECEHCNOAAAEYKWXMDWWPIKXDWESVGHKADTCQYBDPGATNHDRGQAESLCTPSAMOYZMHESLPVJMDYLHQYHQWZFCGUTVZODFLNFPDJGWVBUPVLKKPBRXQYFGBAMVEQURGRTPRXNQMWGFZUKNRBXYPYMKUIJCNBCVEBBNWLWJIS");
    const char tmp_msg_0[] = {-37, -77, 115, 112, 118, -42, 24, -39, -59, -114, -74, 47, -50, -41, 124, -38, -126, 2, 6, -35, -120, -46, 43, -112, -125, 4, -95, 19, -6, 125, 55, 109, -74, -109, 81, -15, 96, -75, -100, 70, 14, -42, 99, 24, 29, -87, -23, -1, -16, -82, 100, 89, 109, -73, -80, -50, 122, -34, -122, -55, 30, 7, -44, -52, 38, -28, 5, -18, -117, -29, 124, -99, 75, 51, 32, -75, 68, 120, 11, 12, -84, -4, 11, -83, -19, 18, 69, 3, 74, 9, -20, -94, 93, -74, -24, 42, 105, 112, 14, -63, -115, -21, -95, -76, 31, -46, -120, -69, -110, 26, -2, -68, 58, 111, -74, 114, -64, 66, 92, -78, -86, -83, 120, -69, 58, -2, 12, 95, 107, -51, -59, 43, 87, 39, 125, 110, 29, 98, -1, 12, -10, 99, 16, 30, -18, -75, -59, -48, -69, 119, -121, -118, -128, 5, -127, 24, -17, -75, -116, 77, 34, 19, 93, 20, 98, -72, 104, 82, 48, -93, -100, -85, -80, -49, 95, 16, 116, -65, -6, 34, 56, 69, -82, -117, 11, 28, -27, -96, -116, 103, 119, 33, 37, 72, -73, -15, 119, 57, -118, -14, -106, -39, 14, 41, 70, 92, 1, -17};
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
    msg.setTimeStamp(0.9414361588857036);
    msg.setSource(48476U);
    msg.setSourceEntity(101U);
    msg.setDestination(46089U);
    msg.setDestinationEntity(230U);
    msg.type = 137U;
    msg.op = 217U;
    msg.request_id = 54932U;
    msg.plan_id.assign("NMFGCUFRZDNBJJUTDMSMDZLPIVSVVDGRFKXSDTSPXWCRYNIBLKODGGGFFAGILFNFUKJVJLHJTUQPWBAICKJCSHWQCMDOAXXABTIPOWMFAFENUTBMQLHWWAUCOXSRNRAYZTSBLCSZZWKEEOODHHEBLIIAKOELIVPENOSPNYKJVEKJRRPQYXECVTXVHURKMZGNMZRQEWBZUADHQGZYYPT");
    msg.flags = 1317U;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.9525863517619835;
    tmp_msg_0.lon = 0.07998786383083378;
    tmp_msg_0.depth = 230U;
    tmp_msg_0.speed = 0.9170150242102963;
    tmp_msg_0.psi = 0.4123985737768924;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NPVYNEOXBVPNHEGUJOUCSKDWPLX");

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
    msg.setTimeStamp(0.9274510521027904);
    msg.setSource(59427U);
    msg.setSourceEntity(223U);
    msg.setDestination(31198U);
    msg.setDestinationEntity(242U);
    msg.type = 162U;
    msg.op = 103U;
    msg.request_id = 39129U;
    msg.plan_id.assign("OWQULIHQHJTJIAXDYPNMUWUOEKSMCULWRLTUPIWYUWISYHHKLYEIALTNHRQZFMEQXPPDQMNNSGVMPXGAASECKICKWIKIQZNQATFHMRKCBPGGRCRXBPMDABWHSZGMMJXJVWRXECEDJPXBCQFNFVFSDVQCDDRAIGKFNVVSOVLVJZTKRUHBCTLLSGFYBSBJFNYKZZLROOYXGJUEYIPJMVALCSDEORTUTAUEVWTOZZQFYOHPEKDGT");
    msg.flags = 10567U;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.442734808487277;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DPYSWWZLUHFIOWRXKPCZQIPEQWXKLBEMBUGJOIEFCJRFIFKOAYHESXKX");

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
    msg.setTimeStamp(0.5687746426204939);
    msg.setSource(61538U);
    msg.setSourceEntity(7U);
    msg.setDestination(6167U);
    msg.setDestinationEntity(160U);
    msg.type = 193U;
    msg.op = 133U;
    msg.request_id = 60940U;
    msg.plan_id.assign("PKPADAEMBOBRVEPPPEPTMQMNWOEXACWMWRDKQUCSUYWTKZKZI");
    msg.flags = 22784U;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 160U;
    tmp_msg_0.lon_gain = 0.7631153148398514;
    tmp_msg_0.lat_gain = 0.42492903776648916;
    tmp_msg_0.bond_thick = 0.8479590975056208;
    tmp_msg_0.lead_gain = 0.8150387497322632;
    tmp_msg_0.deconfl_gain = 0.2571762540932693;
    tmp_msg_0.accel_switch_gain = 0.16836399189748064;
    tmp_msg_0.safe_dist = 0.9503767956765645;
    tmp_msg_0.deconflict_offset = 0.034456596744859236;
    tmp_msg_0.accel_safe_margin = 0.6488654664589636;
    tmp_msg_0.accel_lim_x = 0.16130513827369464;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WJDLAWNKMDYZTJZPNYTDRDKOZDEOMOLOEHZQXAVKKTDHVFVVNOPITINEPOHWLBUMLZXQUHJOIZQDSQGIHIUTMMRPLFATAJFTJVHVIAEYDLMWIYUGGRCBCWFLRAX");

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
    msg.setTimeStamp(0.023929901905218376);
    msg.setSource(56473U);
    msg.setSourceEntity(107U);
    msg.setDestination(23057U);
    msg.setDestinationEntity(44U);
    msg.state = 192U;
    msg.plan_id.assign("VTOAGJLSMRVFDTOSLISOKCUDVIBXRLNHNWHQPGEMGLOQCZBDKH");
    msg.plan_eta = 887915982;
    msg.plan_progress = 0.5756740292083403;
    msg.man_id.assign("TBRCLXTBYWFNSVXSGXZMVNYLJUAMRHEYETZLPGDHKXANBEJIPJNERMXHRAQRLWCYRDXCZJKUKTNWNHVMIWZVFDIORKYSDSFXUNQLBLDOUFPJFCLCMWSLOGGUBPDAQNHWOGCGVZZQSFUDIRHPTDUKHYBTQRBOGEME");
    msg.man_type = 27131U;
    msg.man_eta = -1919423198;
    msg.last_outcome = 78U;

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
    msg.setTimeStamp(0.901598056276339);
    msg.setSource(47220U);
    msg.setSourceEntity(91U);
    msg.setDestination(58259U);
    msg.setDestinationEntity(138U);
    msg.state = 152U;
    msg.plan_id.assign("XBPYUGSMFECNVHIYWOFZGFDJIUKDBDPFNEOUDEIDZQYNBXDDVOJLGUUPFONNHZXLWKMNPLPKAQOLXLSONEBMCFYIRXHTUCMXVCCKKYCZTQEGFRBAQSVOHTIRNBSBSVTTIFMCGCADMORJJWMPAJQGZNEASAULJKCPXRHAKCAZBPZLYHWRPEUINVUQHJMLSRWKAGBYFTHMXGWJWGROZUXH");
    msg.plan_eta = 1323875689;
    msg.plan_progress = 0.5042976268392294;
    msg.man_id.assign("NUVFYBXYRUJTNDRODZGIXLVHHHWEKQRLSMDHYZXBSLOJVVMXTKROAXDAOZPHMBJKBQLLMBEGJZSNQRQHDLIWVFITIGFELNRBZWHORIUCHUUGQSSJKOLEVBJPYVVBTGYQXIZYNXVPJIDKXXOFLAFRNYCMMDGCCD");
    msg.man_type = 46548U;
    msg.man_eta = 2059364364;
    msg.last_outcome = 106U;

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
    msg.setTimeStamp(0.11661308394259684);
    msg.setSource(540U);
    msg.setSourceEntity(214U);
    msg.setDestination(55431U);
    msg.setDestinationEntity(250U);
    msg.state = 195U;
    msg.plan_id.assign("EBXSMRKFFCLUFIBBMYDISBERWFZWGKIVYPCIQMGCJGKJZMIAFPGLPHZVDDTWUVHSTPWBOSCBRRORDNCOZPTRFKISXXYQTJIKWAVHELSIUJFOWNXJAANHLUDXNJKCGOVTQCULUMQBQEZOYQCCDVVODPMTXYUXZZSRVSEMELUNHRLHGNMGZKWSNXEHAHLZKYFPKADXQYTEUNCADDBJAA");
    msg.plan_eta = 2129467813;
    msg.plan_progress = 0.9166395248110498;
    msg.man_id.assign("DGRICMPZYUHLLPYDIOZCGLNPSY");
    msg.man_type = 9714U;
    msg.man_eta = 745944341;
    msg.last_outcome = 133U;

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
    msg.setTimeStamp(0.24888097106594498);
    msg.setSource(45751U);
    msg.setSourceEntity(90U);
    msg.setDestination(7174U);
    msg.setDestinationEntity(106U);
    msg.name.assign("KXIXEWUITJKNJVRZDEULEAOZAUQPYOERSDSNJWYYNMCGMHTHKXVPHRFAYLRFORZMZQRSUNUQYDCADMSFHYLFTJMCVCSCBABAGKLPKTOOYYOZLSIMHPJRIUKHCLOQZBNTXPIQHAQOBWSCFPGYVXIIJLFSQWGBDQCAVAGRNWSTIVBWPVECXMOMJUTXNXVKWGTGVPHKBWZJDXFCRUKIUHDUJGE");
    msg.value.assign("JZCGUDHITJGCWIGTCIJMKMCDPMJWSOFYOBMZRHNSWSCYUHDSQOIPGAVHZPRFTQAOIUGDOJGCBKNRZSNJEYTHUXWCMSWIHJPRKUZWVQDXCZXGSEABQEBIEAADUEZYXPPNGT");
    msg.type = 159U;
    msg.access = 140U;

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
    msg.setTimeStamp(0.7642799914199329);
    msg.setSource(65493U);
    msg.setSourceEntity(105U);
    msg.setDestination(57145U);
    msg.setDestinationEntity(43U);
    msg.name.assign("DIATCZQEJSIPQATWAVKCPGWEEOWGXANLUPKYJRNDUHDUDJRORNKJCSLBQ");
    msg.value.assign("KDGPRQITSJMZCNDPUALGOJMRPCUPHRNZHLOFJSXQWERCFTJXNRZJFVTWPBFUQDHXNHZYSZDDMTOAGZNXFQCMLSOTXWFEBYKOZTRKYYRDLTYGBVEHNHKIOOZIYUUSLQKNUMEICSWKPQOBAPSHNGKJBEWFEEYVZBYAQYLLSJSGMMJVHLGVVMFBAUBQBWCVMATAIUSAVFAEFIGWIXTJPDLC");
    msg.type = 10U;
    msg.access = 48U;

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
    msg.setTimeStamp(0.3013278267416013);
    msg.setSource(2865U);
    msg.setSourceEntity(199U);
    msg.setDestination(49802U);
    msg.setDestinationEntity(201U);
    msg.name.assign("PCGTSYSJQYENVXQBZUAOUHBTUKLMBFZHCIMGPLOPTZAACVLXVFLFNLKHQJZSLFDQQQUEFYMEDGUP");
    msg.value.assign("INHZMAGGNRJHLXHMYJF");
    msg.type = 27U;
    msg.access = 225U;

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
    msg.setTimeStamp(0.1213088110130619);
    msg.setSource(29442U);
    msg.setSourceEntity(102U);
    msg.setDestination(29814U);
    msg.setDestinationEntity(123U);
    msg.cmd = 104U;
    msg.op = 65U;
    msg.plan_id.assign("BXNRAHTPHPMGOUXFVDWSMUFFESEZKBFIDRRCWCJIYZSPFGHQGJSCEKKFORAHWACISBLIETBCUUMHQHSAXAVPYFEFYKQMMNZOWUBQOBUODJLARYHLPGHXQIJDONZIKYCLYXZXLTJWT");
    msg.params.assign("MMBTSVWKQXZRJDIFACFBEBJPYLVSBNQLKZIUCXEYCNQDMVLSFAROSVJOEFZXTYVBKFHTRXAUOJYINAUFQVHKRZEGWPCHMBLDWSLXINYMHKAIMZOOSHACYXIIURTWLHDEBEPONAPYOKD");

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
    msg.setTimeStamp(0.03402182369076168);
    msg.setSource(22970U);
    msg.setSourceEntity(84U);
    msg.setDestination(58869U);
    msg.setDestinationEntity(2U);
    msg.cmd = 168U;
    msg.op = 19U;
    msg.plan_id.assign("GUTKZSYQXXOSSODBEXYNNXBVXGPZWTOAFDGSTOHWKMJRBUWUZFCFZGYHVCIDUMNZSNW");
    msg.params.assign("XDSAAOLCNYGODLWBPBIAFOHRMVZNUZJBVKZMAYX");

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
    msg.setTimeStamp(0.8792994070253846);
    msg.setSource(7181U);
    msg.setSourceEntity(97U);
    msg.setDestination(23357U);
    msg.setDestinationEntity(61U);
    msg.cmd = 174U;
    msg.op = 150U;
    msg.plan_id.assign("SULVWMWDEXLRMDMVLOYBRPCKYFEFFYZHLUWCDBGANUGOPJGZXBIGNNXQKDPAEOMQOEERBWQVSHXOVNDZXPQXJEYNCGZKGHOSTUXGKKPBIXPIBPEHRJTMWTCQCCIEONAGZWTRKYJMYTHUZDIPYLMRRAETJYAOWSMTC");
    msg.params.assign("RWYKKGTONKPMIOMJFHJPZRGJQVMLMYXBATUTALLFFDJYFPIDSKJWUHCXGAMMCSQCWZLGYNDMEILJBNISHESSOJCFRFKDTIHUPLOPHBRFEEUCVBXLQJASPO");

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
    msg.setTimeStamp(0.8713568381477212);
    msg.setSource(18595U);
    msg.setSourceEntity(82U);
    msg.setDestination(10609U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("PSDYYWWXKDSGNLNILOVGIWBKNFAOUVRZTEZJJDNHHJYHSOBXCRQCIFEXNBHOEQKNPIPBTGOBBPBHVIJAAQAFIIWJBXITZTPDJVNUDMVIQS");
    msg.op = 61U;
    msg.lat = 0.5434821149378473;
    msg.lon = 0.12977780345412582;
    msg.height = 0.4665236793554072;
    msg.x = 0.4495499349120279;
    msg.y = 0.9648920244612201;
    msg.z = 0.6950206601918735;
    msg.phi = 0.3329876248265333;
    msg.theta = 0.23061879987702738;
    msg.psi = 0.873569087024145;
    msg.vx = 0.643662499017883;
    msg.vy = 0.2308911913374383;
    msg.vz = 0.14753522224107407;
    msg.p = 0.8300058027207654;
    msg.q = 0.6266177566327054;
    msg.r = 0.8314470259867112;
    msg.svx = 0.9759452508919035;
    msg.svy = 0.7444501636011296;
    msg.svz = 0.17303474128806218;

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
    msg.setTimeStamp(0.2926856745943245);
    msg.setSource(18112U);
    msg.setSourceEntity(49U);
    msg.setDestination(17085U);
    msg.setDestinationEntity(186U);
    msg.group_name.assign("ENBBVXTGJIWYNOJFQAVHEVIUFMHDDL");
    msg.op = 113U;
    msg.lat = 0.9854901383380498;
    msg.lon = 0.5571161699271309;
    msg.height = 0.21112891515530485;
    msg.x = 0.44872509066628885;
    msg.y = 0.7301997664812374;
    msg.z = 0.10750234070556408;
    msg.phi = 0.3076600681945675;
    msg.theta = 0.6023663254826312;
    msg.psi = 0.32924255187495843;
    msg.vx = 0.7789273238826366;
    msg.vy = 0.9465870352346794;
    msg.vz = 0.5797149008409888;
    msg.p = 0.7738274456454586;
    msg.q = 0.7563040705930132;
    msg.r = 0.9077858874147884;
    msg.svx = 0.2602737537253448;
    msg.svy = 0.7409441320230642;
    msg.svz = 0.6387700607608586;

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
    msg.setTimeStamp(0.6539162219686583);
    msg.setSource(41264U);
    msg.setSourceEntity(194U);
    msg.setDestination(32597U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("YSVGSETEHJMDTOLWOXGRKNTMUNLQJGFHYMSYRIPCAXQMTUPWWFOYZUVSUBHQPHWSLRJVSZNEY");
    msg.op = 171U;
    msg.lat = 0.1762497733075863;
    msg.lon = 0.6764787389151756;
    msg.height = 0.9670881476535221;
    msg.x = 0.5665733307626789;
    msg.y = 0.9835811845220325;
    msg.z = 0.21148213115273906;
    msg.phi = 0.890160406259041;
    msg.theta = 0.01198559935845922;
    msg.psi = 0.1327591847115911;
    msg.vx = 0.3398410297076253;
    msg.vy = 0.9806314429533719;
    msg.vz = 0.8255004823924985;
    msg.p = 0.3614707726664578;
    msg.q = 0.6468973578545241;
    msg.r = 0.1980194331230365;
    msg.svx = 0.8058924633768437;
    msg.svy = 0.07310249000386781;
    msg.svz = 0.952592907497869;

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
    msg.setTimeStamp(0.3517652931260268);
    msg.setSource(18029U);
    msg.setSourceEntity(142U);
    msg.setDestination(17485U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("WKQJMKEPPUSEPHAGNACWBLZXUEOEMBTXXYTHBAFFD");
    msg.type = 76U;
    msg.properties = 138U;
    msg.durations.assign("MADTSULNIIUHWGRUGWGNMLDTKKOGKSFPETKQOKDJNMMVYTAFBCKFKYBXLZOPQRXWTIEHAXRQWQNCUJNMMANCXXRBCMFCAGCYJXAVPWTSIZVVITDUOYZJEIRSLGZOOCXEVAEVEUXUYQWBNJFQYEJBLUZXSHHBRWGPSETVWJKTERLLYBCFQODGUZESMBFIVNSMWJOPJFIZFZDDYDPUJCLAFDWXOPARSLYHHKHRAHHR");
    msg.distances.assign("MVHTWUYUARIFQZTCFIPDJMGUPXYNFBILHYZZSGKKITMLNACQFMYWN");
    msg.actions.assign("QWLXSEIVTEYZOYUOFRKMENPQPCODKGPQXVGUBUUHUGDUAJFVNNRLBEATWMJFJWMPBWNKOVBKUISHOVRGCQKXSSNJDQILOSACPCLZISYQCKIFZHXEBBOGPXKHTXBHYQVMPRGWIZYAYDSTTWBFLJERFLCTZSHSPXIJASD");
    msg.fuel.assign("UYSPKIUREYRZDXGCYENQRJOHCBGTAUKWENZWAMHJEOYKCTFVWDIJOPPFHLFYXLKZSWZFPHGKESTNMIBHLVSMOJAXWSXOJVYAMDUVQSLTQERDRYBVFXQTDHKIVZQYNLHEWHMFIJWETUBFIXAUHAOFZQYPCMQNRKNYPMIGSUZGPCJKOLUVOXCGWBGRLRJIVEGQDAQWLSMKBDPPJZTFTCMWUSXZAVORCB");

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
    msg.setTimeStamp(0.37452290877724326);
    msg.setSource(41985U);
    msg.setSourceEntity(208U);
    msg.setDestination(6656U);
    msg.setDestinationEntity(145U);
    msg.plan_id.assign("LALMFYNZPWMRZRZWVNXFSJILPAMNCPKIMKAVOSJOXLOYICUFOIXUXGSSVHOXDBVLXDKVWTTFMZCMYAYZYQGJFMRCFKICU");
    msg.type = 241U;
    msg.properties = 169U;
    msg.durations.assign("ONSIQWWYIZIHXFANHMGZTYKUYHLTCLGWHDVDCPKIYVHKNWLCQBTSFLXNPIORLQYNCBEABIGORXTGZRVWNMDXYMWPDKFYCMDOJMZHZIMEXKUFMUYDZSBCRJEAKWJPJDAZBVULACXSSTQFOGNLTLAVJVQOIPGXDGOQBTWRXJJPLAYRIQFMSZKKVUFF");
    msg.distances.assign("CYJHMBOMFEIJZXCRDWGTSOWZCLBIHILGRZKTUKFMYDUFOBCOWRAPHIMOSQEFJCPSCYASYEQKYRJLDLHRGXXHLVFNVPWNVAUYOWF");
    msg.actions.assign("TQMKAPPJQSRGALKCWNXIPFAIASFWDGUXXYTRCJTPUPNDGIEANIOYKLQHKCBYVENCWDPEMMDZBDKYCOHFRJEOBBUQNLIYRGVCSORHKWMXMZQQMDFSEVRUDOHE");
    msg.fuel.assign("DLHKESWQPWINQPZBZINNHHZQFXREWPQCJBOTMTCHPNIKXRVUDFWRBWTQIAOMAEAPZZRSGOPRCOLKKDONBEJMPOJZXERIQJBJCSWBEFVMSOIOGGRZDGCFKAILMTLDIYUGDKUVYHMHAS");

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
    msg.setTimeStamp(0.22851399451601118);
    msg.setSource(37760U);
    msg.setSourceEntity(61U);
    msg.setDestination(26478U);
    msg.setDestinationEntity(163U);
    msg.plan_id.assign("JYADAREQQUBWXESGKJBHJRYIDAELEQAWXCMKMPJHPAANDURDCGXDHLCWYHONHQFXRIPRFUWURIEIVYZGFBOFULUGYKWYBTTNVLEZDOIWUGCRVZCXLJESQOOUSZJSRMGLLMWQJBWTDLSGJFYVIEDDZMTZCTWVEKLPHIKGIUBOKVATUFSGSMJGATNNIYPFSXCVFBPHNXSFZPQZXMAERHZPKXDXTSIHVNBONQOAWONMKZMCYBCMP");
    msg.type = 38U;
    msg.properties = 133U;
    msg.durations.assign("OREQNFLXNLJESMCYTL");
    msg.distances.assign("KJWLQCNNFTHFCQQPQIGQDZAJMQTXIVPABIEIXSWCSOTALPCUPHEHWLFDAXPJMFQGUBOFVHSHUYREYTWJSZAASPXYJVYJNMMFPOI");
    msg.actions.assign("UVZQBSQZWYOZIVDRUNCVYUYDGPEYZMXOWLICDAXDCASQQJEGFCSNRAHBPFYMMBTMPJEMLUPTFJPDSLEBAKORIZKEQVTFCXFYVOHYJYFMDHMJXPB");
    msg.fuel.assign("ULZROCJXPKPULMXSJADMGOPVUCDIEYXHVSZVCWJNYWQCMFINHKGRIQQDXZMCDHJUJZOTVMNXSEKYKWDZTVSVZTITKWKTXTPKPNIWLOAPEHLECFOLHGRASXBUHBGGLASFASDWRBIUOEVEYDZJUQXIRBFYYKPMHGTYVFRGNJ");

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
    msg.setTimeStamp(0.6660451386468684);
    msg.setSource(6268U);
    msg.setSourceEntity(90U);
    msg.setDestination(31220U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.17063694332103163;
    msg.lon = 0.8811008248464922;
    msg.depth = 0.9349680533396706;
    msg.roll = 0.9596307122376588;
    msg.pitch = 0.4583354809634782;
    msg.yaw = 0.7897149952067373;
    msg.rcp_time = 0.4098410015434061;
    msg.sid.assign("WACMOCSPWDDWFVIBGNCIYRMFSIHBUDDORFBFDYXDPTLGNM");
    msg.s_type = 130U;

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
    msg.setTimeStamp(0.1515967946301342);
    msg.setSource(22191U);
    msg.setSourceEntity(250U);
    msg.setDestination(10401U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.20157091282985584;
    msg.lon = 0.07189750219785884;
    msg.depth = 0.04916075272423326;
    msg.roll = 0.7829297576983144;
    msg.pitch = 0.4510123147772691;
    msg.yaw = 0.3066178811228758;
    msg.rcp_time = 0.4675590098648361;
    msg.sid.assign("WJHEGMYNXNMKZHYRNATXOKDTLWMSLNCEQRYEGULZPGLOMSQUYWUPDXXWVAOICEHCVRURBKMNUXAWGFBWCIKPMVJJLBBJDPDTNXIVYBFANZUWQFFWOQTURINYFTREHIEVTXPKICZQDQRNBRJQVYMXEPRLKSECZXHAZCQPSRBSIANDCWLULMVPFAXGDYZLJGVAGSFECOTMMOTBJBDOICGGJHYFQTDOHOSKZSEUBOKVZFZSIV");
    msg.s_type = 148U;

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
    msg.setTimeStamp(0.7163911232512146);
    msg.setSource(59087U);
    msg.setSourceEntity(110U);
    msg.setDestination(26353U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.38000007227184296;
    msg.lon = 0.8116649852646483;
    msg.depth = 0.7165167344037842;
    msg.roll = 0.9142500316221747;
    msg.pitch = 0.0823853336791398;
    msg.yaw = 0.35812050947041896;
    msg.rcp_time = 0.3273249343860464;
    msg.sid.assign("FUZAPGCAICSSMTPFXLLDBHIFOQHXSNEEDOXJJXIYUDZBT");
    msg.s_type = 209U;

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
    msg.setTimeStamp(0.37473408526348906);
    msg.setSource(34739U);
    msg.setSourceEntity(87U);
    msg.setDestination(51645U);
    msg.setDestinationEntity(75U);
    msg.id.assign("XHSVJYPQKEMCVUGXEUOLQJWSDULHPARJGGFKYFDYGMZQZWTZIPQBYAWSPKBSNTLSIPFLXCKEFSZGIDHYMFFUDKNDNRJSOLGDVGZPQGCWNFHAFUMXJVCZFQRIRLAOZMLKZGOAAOVIWHEBTKSHUCTREEBRDPFXEAL");
    msg.sensor_class.assign("KXLLCLDNFOCWFCMIHQNTHQKSURXPVIGWQQKDYGAKRTYVVSCWBKCOTABEHAGWJMANAENZPFURRHFOYHIETDSZOQZYKFBGCTAPRTPHXPAPXAREJUCNGFBUS");
    msg.lat = 0.18746137599574264;
    msg.lon = 0.9002609137845116;
    msg.alt = 0.7942820091745901;
    msg.heading = 0.5956533446720457;
    msg.data.assign("HDWACEWIPWQHIGJPBJJMZJTAEAZUBZRSOXWNUPLPGUQKNJMUAUUZDCNLLYBEKRABVVFNAWSNRVSHZUOSYELUDJNFLKYEQPGFITFDGYMBKPHUWWXMBADDZHOIQNLVUVFMRMSZOHCSVXHITLLJFPJVHQAONGBGOKOHDCJKZEPT");

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
    msg.setTimeStamp(0.6316754226551967);
    msg.setSource(50067U);
    msg.setSourceEntity(160U);
    msg.setDestination(13471U);
    msg.setDestinationEntity(78U);
    msg.id.assign("EKBNJCCDWTJCWSVEKGSNQYBUVXNKHRLUNUUJHWOCRAUOYLFTMXXUGJDMAAZFZHVAIRKTFJGGIHEHIEXYLEZQDEBKKBIZMINBHRFWZPQMQMVGQMSXAV");
    msg.sensor_class.assign("KHULQGYWRPAWSVIUNAQBCOLKDDGDOQGFWRLNPIRYJLUYCIZKKJXPZZRXOENIWMERSTWTFGYWGZHSZIBXLAVQLDQSMRYZFTHTDTBSMDFBEMEVJKPYRIBTNKYCZSONHGOKAXOJMAWKSELATMVOPKVVEDCYPVCCMJVURBTDHVMOUUUKXOBULNPFWDYRNCJZXGQGHE");
    msg.lat = 0.810551203229285;
    msg.lon = 0.9784656581741743;
    msg.alt = 0.11267563909468481;
    msg.heading = 0.12581441900039836;
    msg.data.assign("UUCHMWMMWWURRVPWIOVMJSSDRHREZXCYNJTWTPFNYYLJMISKIYYKGSACVLLBPETSGPXOQYDQLTARHJMLGFQOUVLPCUKJBEFAOEXCGDLBFWRASNNSQMUSCPGHVKAGZKICDTGAXEO");

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
    msg.setTimeStamp(0.04946289526535019);
    msg.setSource(34378U);
    msg.setSourceEntity(150U);
    msg.setDestination(32327U);
    msg.setDestinationEntity(40U);
    msg.id.assign("WJIVSLUYABTPPZXGUCAKTLIJRCNFJQOBIJHARVFSFQIHGZIIFRMHLGHNGKBBVZTGZFAYYQPUZXBDSPJSRPYFMUCYUEWQLCXEAGIVDLNKZOOUYLUKBMMIPEXLYUOTDKAEU");
    msg.sensor_class.assign("OQACIEOOOJLZFWXFXNNNJIBGARDQDMSQSKZZLAUWWUPMWVSMGIENMYPCAKPIBHQDOYGTLTSJVODKZUVRXXGPYLIVZPBKREZBFVJZHEKAQERMPSBIGULDBETLTNDYFGXQEXQTQMGRWTRAMBCFMZGOPFNSDZWIPHUUPAV");
    msg.lat = 0.789906255964235;
    msg.lon = 0.9414331392828966;
    msg.alt = 0.9404889806509497;
    msg.heading = 0.23265837656745658;
    msg.data.assign("VWSQCZLYMKONUKMEULBMLCFXTQYXORCJPPBNRJRTCVDBHNPEQSEIHMBRRUGUHKDGORWXSTWCZNHXTOMIHLJNIODZPVVFBTMFWGAFAPZDPCCHGDKLTCGJREQYGJRGMKDIZISAAXSELFKVSXQNNQBAHAKCLISMMVWOAHDSQADOJEZPIYDQZJVETLPUZHSVWUEKYGWYBNIBHXUTJNFGXYLFFUKJLY");

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
    msg.setTimeStamp(0.5611523742092276);
    msg.setSource(2883U);
    msg.setSourceEntity(22U);
    msg.setDestination(55905U);
    msg.setDestinationEntity(248U);
    msg.id.assign("CXZAUQJVURIUIMAODDXVUJYNHRJLDXEHPFETBRDAKLSXHFZHNZMWRVYYZLTNHKGWXHJJDYETFKIVZJFYLWGIKQDVJTWFUQKMKXPAOBOAQECRGRWKDV");

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
    msg.setTimeStamp(0.8704159084156587);
    msg.setSource(18568U);
    msg.setSourceEntity(149U);
    msg.setDestination(17359U);
    msg.setDestinationEntity(45U);
    msg.id.assign("RDIBFDSHNFJPVERNANHGGPYRXXXORNAGWBNNYKTIIJEGCRZCOCHSTVHTUESBWGKWYDZFEVLBZUTWJLEGCHELVDAUQHQQXGSWPJXOLZJAFTJKAPSJSTQXDKRUYAKZDXQBFPYGKKUUEZX");

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
    msg.setTimeStamp(0.36356001351403366);
    msg.setSource(10065U);
    msg.setSourceEntity(81U);
    msg.setDestination(50232U);
    msg.setDestinationEntity(181U);
    msg.id.assign("TOGXCGXVBWIEKSBYRZFKSFWIUMBAIHMQLDFBWTSZEKFLRGFDPLTLKMVEMJUOABHUOJQWQRPAJOPWMKKKJIYGAYBDDKDCDYPGFNOQWHOLECTRNDCBZLVOEYFIXRDCGY");

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
    msg.setTimeStamp(0.9746645483863643);
    msg.setSource(49550U);
    msg.setSourceEntity(22U);
    msg.setDestination(13913U);
    msg.setDestinationEntity(84U);
    msg.id.assign("ZSFWWGQRUEZIKADBICKAOEIIOXRGKVQYOATNEVMUGSMJWDTWLXPOLTNMQNXYCOBKWFXWATIAJDDXGYZOEZKEVPVCCDNVYZXHLKHNUEHVDTJAJNRQMSLHLYVIFPUTHYKCTQCJQZHGDZPPSBMNDGPOGSMIIEROGRYSZDBSMLAUAVMLYPSEWQUOBRFITLUUFBNZNFJHJEEUBPRDXCHTLNKGFVCJHC");
    msg.feature_type = 199U;
    msg.rgb_red = 221U;
    msg.rgb_green = 72U;
    msg.rgb_blue = 106U;

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
    msg.setTimeStamp(0.34519240356445735);
    msg.setSource(6825U);
    msg.setSourceEntity(219U);
    msg.setDestination(22377U);
    msg.setDestinationEntity(191U);
    msg.id.assign("ZRMWTSNKXOLDRPTKGWLWNR");
    msg.feature_type = 123U;
    msg.rgb_red = 19U;
    msg.rgb_green = 203U;
    msg.rgb_blue = 218U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4111807009095839;
    tmp_msg_0.lon = 0.0497262095502683;
    tmp_msg_0.alt = 0.3726225692049846;
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
    msg.setTimeStamp(0.11216674406342342);
    msg.setSource(28392U);
    msg.setSourceEntity(254U);
    msg.setDestination(59246U);
    msg.setDestinationEntity(181U);
    msg.id.assign("ZXATPGSUMSGZIIJUCLOUHBYIMBNCDKAQBLLDQATDRXKKEYNNSHRBIDCJEYQUPYLTXVHFJPENZZSMHVDTLOKGFABCHAWSHRQMRHIHFQJGMYMHWBVDWBGVHQTFYOSERZBIJNYCXNXWKEJLUBXZRYZOVOVLOUZMGDPT");
    msg.feature_type = 16U;
    msg.rgb_red = 61U;
    msg.rgb_green = 113U;
    msg.rgb_blue = 47U;

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
    msg.setTimeStamp(0.748868378197685);
    msg.setSource(11364U);
    msg.setSourceEntity(143U);
    msg.setDestination(55388U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.4715987428267795;
    msg.lon = 0.49912680735414716;
    msg.alt = 0.056200141237058854;

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
    msg.setTimeStamp(0.5103633733833074);
    msg.setSource(39999U);
    msg.setSourceEntity(246U);
    msg.setDestination(40944U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.443887076903999;
    msg.lon = 0.11079459284389492;
    msg.alt = 0.9216261117724833;

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
    msg.setTimeStamp(0.6278311432840056);
    msg.setSource(12885U);
    msg.setSourceEntity(3U);
    msg.setDestination(60796U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.8383844978785563;
    msg.lon = 0.8936212244101408;
    msg.alt = 0.8273762916717429;

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
    msg.setTimeStamp(0.0705303769612442);
    msg.setSource(38179U);
    msg.setSourceEntity(147U);
    msg.setDestination(28957U);
    msg.setDestinationEntity(11U);
    msg.type = 143U;
    msg.id.assign("SFMNDYBDKWLVKZBXIGSHPRPZGXLKQONCFRLWQODVXCCYWOCJHJDMZHNWDPXWVKFIMQNGODWHLVIDSITELDYXFSJNNEMKNNJHU");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.07158445399183533;
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
    msg.setTimeStamp(0.0016565288025442992);
    msg.setSource(50962U);
    msg.setSourceEntity(75U);
    msg.setDestination(8762U);
    msg.setDestinationEntity(82U);
    msg.type = 135U;
    msg.id.assign("NRAADDQQYMRBDGMYNHRVKFWPZNQUTWZIRWPI");
    IMC::NecMsg tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {-84, 52, -8, 25, -98, 126, -112, 10, 56, 12, -5, 108, 27, 56, -32, -32, 84, 69, -102, 104, -123, 117, 94, 27, 86, -127, -55, -105, 85, 122, -23, 80, -60, 114, -67, -40, 12, 97, 92, -52, 79, 116, 18, -9, 13, 68, 73, 114, -104, 101, -77, -33, 9, 3, -78, 81, -89, 25, 96, -81, -32, -57, -112, 123, 2, 2, -35, -10, 67, 4, 123, -124, -106, -123, 72, -24, -42, 51, -106, 16, -47, 9, 54, 91, 93, 2, -35, 123};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.8487444922142326);
    msg.setSource(46269U);
    msg.setSourceEntity(42U);
    msg.setDestination(58522U);
    msg.setDestinationEntity(212U);
    msg.type = 242U;
    msg.id.assign("OJOGPOVKEGKQUVPKHOQKPULNSOZCGCKVXNUPYVMNCIFFSIUYHZAVSJUILBHEELLTRBYCAPLJXGHMFQGDCEAMCRPGSZTWIUQIHVRRMQSSNECCX");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 194U;
    tmp_msg_0.id.assign("BKBKGVLABFDPJLXIJTOAWELVPLYQZJNVQJNTFTHYRNFOLHPUTAYZJHWRUONGQTWCFSSOIRNGJMQAUEXKWIBSNDGHYZLZUMPZEJXVCKHFIWSNPAPGTUDOBWOD");
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("WWEAOTVRHOMYRYEUCMTQSAGTBJBBQXEEXGLEUDQK");
    tmp_tmp_msg_0_0.lat = 0.006706382743420836;
    tmp_tmp_msg_0_0.lon = 0.10082770377045913;
    tmp_tmp_msg_0_0.depth = 0.0303082027403484;
    tmp_tmp_msg_0_0.query_channel = 163U;
    tmp_tmp_msg_0_0.reply_channel = 148U;
    tmp_tmp_msg_0_0.transponder_delay = 171U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4710803856335516);
    msg.setSource(42304U);
    msg.setSourceEntity(232U);
    msg.setDestination(19176U);
    msg.setDestinationEntity(128U);
    msg.localname.assign("KWELHLYOBXEZJOWLPNVHELSLLMQMZCJOMARVMKHSXZYHYIDBYFGPAYGSCPNOALDKSZTXXJJCIGNVSLETOCAKIQHLCHUFBGZNUVTQMINAPUEWBXJWUEKDFGTCDOWEIBITI");

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
    msg.setTimeStamp(0.015938065580562766);
    msg.setSource(615U);
    msg.setSourceEntity(216U);
    msg.setDestination(49826U);
    msg.setDestinationEntity(55U);
    msg.localname.assign("QAUMWTMZBJJXIATBDYDXEMBIGVCHUYDDKCUCEYHVURMWKPUWZSLJOFAXBPNPZXUFBZANGCNTSMYZDRPNTRKTRQWMYXZQIQDLMKMQZGLFCYJSSNSNCRAMPGCAZKQKTWNEXYDLJJSQSGLGWXDHLGTOOOPVRBQTRBYDFZJUHEPSHSRMVQHIYGIUGFPIBXECUBROIKHHLGAKOHCEAIVELFKBKWUPVFQFT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HTEXLTVEDCLPTAMZMWUERGQFYOUFXIHWZKXBCRAVHJFRSTPHVDKDXVYTXAB");
    tmp_msg_0.sys_type = 101U;
    tmp_msg_0.owner = 46237U;
    tmp_msg_0.lat = 0.9278256484370416;
    tmp_msg_0.lon = 0.6360544719000444;
    tmp_msg_0.height = 0.9178582100060608;
    tmp_msg_0.services.assign("YVCPSFXDKAIQJZGDQUMCPCGFBJPOGJMIBBFKBNUCWVWRBHKLSWLJDKESOIRKDSLANXIRNELUWDHZXSHTYWKOHBUTANQAUOGCZLLOPTCR");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.3547276744043696);
    msg.setSource(37511U);
    msg.setSourceEntity(84U);
    msg.setDestination(30666U);
    msg.setDestinationEntity(139U);
    msg.localname.assign("VVSTFWPPPDPZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AEWXXVKBBOXPHLPKWYEBEJRIWJRWOFEWSMBTGPLSISLOGMFKYAQAVKQKNPCLMFNHDJNSJZKRVOOZOCQXNVUUUZSMGBDIQGHAYOYCTHCGLFHTNQOXUFOTNLGVGTALPXDBRQWRVFLICCNRWDKINZEPGUYWKHCKTTSRAZFYPSBCEMUHHIQKHMMPWZUGUVIRHTIMX");
    tmp_msg_0.sys_type = 213U;
    tmp_msg_0.owner = 24996U;
    tmp_msg_0.lat = 0.3390697916541464;
    tmp_msg_0.lon = 0.9418565464317326;
    tmp_msg_0.height = 0.3938960586584124;
    tmp_msg_0.services.assign("BKLJZIEVQFLFYUHATFUFHVLJNSAZUNBKMAHNFEMFMTHPSDWUVFAIJRXQZTRHBIZIGBIRYVKLMC");
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
    msg.setTimeStamp(0.9812537999915061);
    msg.setSource(18107U);
    msg.setSourceEntity(32U);
    msg.setDestination(63385U);
    msg.setDestinationEntity(99U);
    msg.timeline.assign("NZBVJAJEMOGDZAKBTSAKFGJCNQRIXPTIPPIOEFJNWCQOKQFXYZEZTMUXRBTQYHIMUDOCRVWLPEEWZKCWGNUWVJSYYSDYVDFXVFPKZOQFHVJEPSMQEIBGTWPGTNVMJQGETRAMIMWMFADXLNZIZHTBOLULIRIUVGKNCJBNYWYQKUVORRRAOWFNBUANXDHMOLSZUCLXQTYDSRPJKCLWABHHXCXRHGKLCBUJOSFSZDEIPQKPCLYHGA");
    msg.predicate.assign("HLHUTIEDNPLVOUKPUAIEULNSJVHEWHMRBXJNRXQBXHZILLQMFNKHIAVFDHGVXMGFBCRTBSZVYZGEQUBZLDYAUKRBORUBIMDKJQFAGCSSFMOUGIMSBVVMNTRELVSRPPGKSVTQRJDTPOPTIGPQAJYHYZZNDBULUPFKGTMNWGKWHQKCJWQ");
    msg.attributes.assign("LCLBDHBUZQVDSXWKVHBQRKWHKHMWFRSDPCAKTHBYBZS");

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
    msg.setTimeStamp(0.1226764313555786);
    msg.setSource(54865U);
    msg.setSourceEntity(94U);
    msg.setDestination(62803U);
    msg.setDestinationEntity(174U);
    msg.timeline.assign("QSLCOMWJHTJMEIXFUQXHKLZUSJEHNCXECRKMEICEINTQYWXZRPDAORZKQPUJARFYUUYWIVFMTQGINYXPTOONQNLQYDXNYVVSZZDPMGCLLYDGHLYVARKZSBMWBXYZTKJFZUBMWRFMCWPNCLGIEJGUTHAKUOXVOOAVZBSFQSJSDCANRRFGNPIVMBBXEZDCAQTWNTCHJAJGLEOGUEFAHORLKGTDDDFPHVPPQEAWBWHWKPHRIXTI");
    msg.predicate.assign("RTLPAEOAGFANTHUZXDAVFFQKSVXIFYZPYTYMFZEGXONYYLHBSHWQERUWJQBNRKEHMAKWNWESURDUWLCCVDAZKGTVTMMHTNFCRRPOMKCQIHTBBCLJEKPBRTSCFVOBQQWBYULLLTNVXDQRJVIGJKVSMF");
    msg.attributes.assign("GBCFXKLVWPJSEWOWLMFTJPMCIEOEZFVIKQFKZGRNYMYQXSMIABONGJAJ");

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
    msg.setTimeStamp(0.1460074554916413);
    msg.setSource(40393U);
    msg.setSourceEntity(29U);
    msg.setDestination(25857U);
    msg.setDestinationEntity(95U);
    msg.timeline.assign("DYNRXFGNXLZWJABYYESZAIJWRWNBQKJISYFACGEPUKCICYVDKDDBXCGLKKLRYHGJBRHMCOKCUYNTOSEDQTWZKAEQDVPUOUARUHBXGNPNFBUQPTVDQSMGYVNLIDVPI");
    msg.predicate.assign("LMQMRLWFHAUDGYVHSMCYXDOTSCYNULTGKQOYHIBPKNSIGX");
    msg.attributes.assign("TCQTGOKHMSDZDZ");

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
    msg.setTimeStamp(0.12203378642280838);
    msg.setSource(23003U);
    msg.setSourceEntity(227U);
    msg.setDestination(40381U);
    msg.setDestinationEntity(21U);
    msg.command = 50U;
    msg.goal_id.assign("VNTFPFJAZEPVUTGFCMORUNUIAXWDYDMMJONLSRFXIFIOHJSKHBSPIHHGPWZQJLIZMLIGACVNARXFCWGVXJS");
    msg.goal_xml.assign("NWXWRPYDPWKLJJOKWFRGXDHSXUENOOVHBZGSHRQMQQKEBXPYMZIMZDAPYVTDOZRYQGIBMVSGJWQEGJZUNECIEWOJMCEWTBNUSNAWVUX");

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
    msg.setTimeStamp(0.4252399647096953);
    msg.setSource(1660U);
    msg.setSourceEntity(217U);
    msg.setDestination(22763U);
    msg.setDestinationEntity(102U);
    msg.command = 97U;
    msg.goal_id.assign("DMFSCKUUBADMLYXKWQXUWKRBZVEYALOJLUNSQRLMPHECASPERMN");
    msg.goal_xml.assign("EIXAOTWQCSOUHTNHWLCZGRGPMDHARNUEMTAYJVNSQKTPIJZSKEMZQKVINEUZWRXKOABHFCXFLXHSQBYPLWRAYNKJLQFHWHKSFZPWYOKRQNTDYUDNJSNVQEUEPGQULKARFVWJGHBYLMBMPGZJOFCFLAGWTJFLZD");

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
    msg.setTimeStamp(0.3302250402673572);
    msg.setSource(62981U);
    msg.setSourceEntity(75U);
    msg.setDestination(8653U);
    msg.setDestinationEntity(63U);
    msg.command = 151U;
    msg.goal_id.assign("BUSASJDIFKLWYUOTQCENCKFVALFROCKCBHHKSJDZXZVZDZYASWNVVLKWLEDSFIHRGZZXANRWQNLEJVKYJOCCIN");
    msg.goal_xml.assign("NOZLSOBNPFKVBXMYZGJOVGJTYIHXFHQKBLDQYEXUFEN");

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
    msg.setTimeStamp(0.43292547720661256);
    msg.setSource(45936U);
    msg.setSourceEntity(211U);
    msg.setDestination(10235U);
    msg.setDestinationEntity(59U);
    msg.op = 160U;
    msg.goal_id.assign("PHJHVGERNKJWCSOYLZVEDPHAXJXLEABYAFLWCQFGZSBSOIMUANOZXUVM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AGGLCIHFUOASSGJWNQOWMBBECGJXLUGXZTYHPCTEFOTQPNCJMRPSRMWZPGDTPAIINERYJBUKPKORLQPJBKDKVEDWZAUDACFUHXBAKWDMTFFQEOQFKGCZBQNNSXUALIVXWOSXPVQLKZVXWFMYVRINYBHBYZNMJXSHCDCRVUHZNTQSERZEVTXDSFMFLGZKTRARAOVCYVWMMQIITSJIJNWFOLUSDLEO");
    tmp_msg_0.predicate.assign("VUODVYNZYGOPTA");
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
    msg.setTimeStamp(0.09421112418134481);
    msg.setSource(39795U);
    msg.setSourceEntity(28U);
    msg.setDestination(57645U);
    msg.setDestinationEntity(223U);
    msg.op = 210U;
    msg.goal_id.assign("GZBDUREWBANZAYMJCYJIKVWDWYOKSXSVBGPZBLKGQZINCAGNUHKDMFVMFQYUELDCMFJTOVWALDXLUHXRIYMHUDQZIOEKZEVASNCUJAHXKJUYTX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YXHHMYJVNJYRGYUZSYDWZLRVCVEQQVLVTKGUPKKDAJFTBACBSIGRRKZGXTNCMJPWUBCISDSKKYPIHTQHTXASMIXVJGTHRHFANXROOGMIDWLMUZMEOPDZEKBVHEXPLOF");
    tmp_msg_0.predicate.assign("BESTHSJWCYGQCFUH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MMQOQFHCWPHLAVFMLMIUVLHYSJPJRKKGJPDXCPOTSGTHGGEJLPVFQPBNNZBWXGYCFBWDIHNRHVXVEIZZUFSMSZQRPASREVRNVDBKURWUZLDKQOXGZKBFMVXDDEZUBUNBTHYWAMAKYCUOIQFFHSFEOYQZFVMGCQLXATXDITBAHMPZSDWWJEESMDTIJOCAGOJGIJYKTNLCWQRYVYYWLTJUWHDQZXENKRCCU");
    tmp_tmp_msg_0_0.attr_type = 143U;
    tmp_tmp_msg_0_0.min.assign("ZISNXVJCPXJYCEAPWSYZVFPPEIDGFRPPUAKKISWEMDMLYNZFGEMRRNLLJZNJOOXSDWHWGKTYULVWQWEVVBQGGQQRHHURTHBXRUNKAZBAZLHOXJPVDOTWPCDUQZGKWDFHDFGRLBEIMYVRCOAXYTZXSEPBSKVCIHIAIJHSBVGEDNKUXWASYLEAFJPTCEBJIO");
    tmp_tmp_msg_0_0.max.assign("ANWEWVAZXGTJFYMKYHJAMTLLZCQSHEULEXHHJSKRDDKMRVOKNKYXWOBPRLJKSHXHIDPXQPEUEBOOZIXZLNNCSIDXBPPWMVQWAOBCKFAVELUTFYHRYIIMSTUMFWJVLZGDRPNLXJZIWNOTVXXSBCJGQOTQPAIPUOIWDQPJGUWCYRFICOCMEWNFKJFHUTUMBVLHNECRSFIYSHMGGMBFONAGTCVJUVYCQAZNEFQREUZQBZZKBVDKSPYGRDQTDGLYAA");
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
    msg.setTimeStamp(0.09609121231554119);
    msg.setSource(11354U);
    msg.setSourceEntity(118U);
    msg.setDestination(4095U);
    msg.setDestinationEntity(38U);
    msg.op = 191U;
    msg.goal_id.assign("ZKIJANMLZTECDNUCOXBLQRBKBBAFBQLKYJTXXTVTYGZUZJRXMGTSFRWARUMCU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KIAXQDBUDOYDHIFDLZJQFMVACYKNLPJHAZIXGAZBAHFQMSTWUKBMLWCKIB");
    tmp_msg_0.predicate.assign("XJJBXPBMRPTNWWKOEZPBKQOMQBXNAUMYQXYOARHMWUCJCRKAQBASLUEIQIYJPEUWDHTZIHXTVGRPMYLFNONLOHTHESQWSBLCRZI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NHGCPHKUHAQXYTYHSXEFYYIEIGMCDXNVKMDXYRLZDTKASENZSVRPCXJZQAYBTKLDDLBNWBTYZJOMVKQZLUUJQEJXNGYWDRHPICUNKXIDAVLREMHPBFGWJZFIBFNPNENYLSNYQKCQLSUGETFIMWIZROATVETBIOOAVRBCIVZIPTUUORZWXWTMGOHUFPDKEEJCMVMVCQPBGBBXJFMAFJCUGAHOQULGFHVRPQ");
    tmp_tmp_msg_0_0.attr_type = 160U;
    tmp_tmp_msg_0_0.min.assign("ECLIQJXDNHZCIZTMRKBWAWSWQDTMXNNOBHSVXMRALPDSTCKEOFYLODEUFUWBXDZSVKJQZIGSYRTVGNVIJHAGZKYBRNFAUBEXPYPWWUJBFGTEQOLKDACFPMKSQNDAXVPCXWXLIZKAMHMZQYEANPLGJWLOJVUYFBLJVMZROQUVZLFVVSNHGSIFXYNTQQUCDYAFOJKJJFEGTNTHIBCEGGIMRMOROILMHWHPDPPBRUSPHEBEDQYGUHSRXKOTWY");
    tmp_tmp_msg_0_0.max.assign("CJQKFNYQHDCIGOGYFJWGVXDFVGTSOKOEETQDZMCNIDNMAAFVOEDFPKPCBFAMXPGZUVQTSIHRURBSYKFEZPJURHEWKDBIDJMHJGIGHWCOZGPIQHJOPZLBTPAICVUXTLETQDSLXJOJAXLWBKABSYRYLZFNYBYLVWLNRJYUDBZMKYXWIMUCTOETPVUTSSWXEXQCEOCSUBVRYFMWLGUAQLWJIZBQAUHZHSCHDKZRSKXAOKVIQG");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3176363875978264);
    msg.setSource(20479U);
    msg.setSourceEntity(120U);
    msg.setDestination(46493U);
    msg.setDestinationEntity(93U);
    msg.name.assign("QSZZBGYJLOZJHSAUQZGPNWIXMEBUHGVZXRDEVOKPFTRCICFATYLAOBODZKXHPCVRYVUTALXNPDHCGMCFIKQDNABHNTISBBVOMZXJXSQDDJSVEZUXWLGMKIUTOIWYVKCUMBFZBTRJNDUUSGSCPOSQ");
    msg.attr_type = 51U;
    msg.min.assign("AMWMPESGUCINFYCVPETDTBPFODNUTPEMNQGNKZVTOQHCBPSROIUJYJISBIWEFCVNEABPZAXXGKAGEKUSJAIEAFZIADZUEDHUDGFNFUSMBEWDYKLQCWXIMXJRFJLJYCKRNRVRLXLOWVCSZZGUFVHMOOLNTLNDBZJYZKDTHOVUUQPKLHBHXLBSYRORBLNWGZWJFWPSZDBJWHATPSCYQXHI");
    msg.max.assign("MMRNAADLWJBTNRJAKNUBVXDRGMLDZTYEMMREGSZPUEEYNRIGDYPXOHJLHKCPXMTSDIRFKTKHQQSBOLOBEVCQNUDQFFMGQVWEWASWGORSXTLWUHUWGIWCVWCQSPTTOVGDMZBOAJMCKFNIYHSGPYZXNIAVUJETICBHJVSKMWKRVFSJBOQSQPRZLCZGHXIHFWCPFTVGB");

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
    msg.setTimeStamp(0.8078788153026905);
    msg.setSource(24617U);
    msg.setSourceEntity(28U);
    msg.setDestination(60338U);
    msg.setDestinationEntity(221U);
    msg.name.assign("FKANCLFDPGGIYHZNMVCRGLLBGTLZIOOYBAQCIYNWQPTNKMKFYSLGXHDZXDPZZVOAQKTNIBWXVBCEXJXGBEVSMOEEQE");
    msg.attr_type = 24U;
    msg.min.assign("UXDLMYXTNWRLUONYYFJBGHSNQXSCYGGNCTVAAHZNUQNYHECIJFYYIYKAZGWMFKKCLRHZKPLVRKNOCVDCWITULSCTPTIAURUTGWSVEECGDUIXJKAXLXFYGZJWFMEVBCODPXYAFMHKMKFQHOOQGVRTKJZMES");
    msg.max.assign("SWMYSBEYSWSYFYCWRQXMCQZVPCEBMGYFORZTKDHKBBXOGTTUDLKPHQGKLNTUDWADUAVUGYAVJJHCJOVDFBCTFIGVACSGWCVZSBBNXYXWOILNULESAJGZMXSHINFLKTXCUTNOPXGTPQCQUJJNZIBDRKZZMAPSHFILEEWKMJFTUQOTZPLROMPVOWO");

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
    msg.setTimeStamp(0.5645906007343179);
    msg.setSource(15638U);
    msg.setSourceEntity(124U);
    msg.setDestination(10945U);
    msg.setDestinationEntity(218U);
    msg.name.assign("CUNPDZZOIBRVRVSBSFBIDTGVFXAPTINWJHESNSP");
    msg.attr_type = 36U;
    msg.min.assign("QGQNQRXPIEUAQJBR");
    msg.max.assign("RXCCGUWDDZHEMZDEGIRBPCMBCXIPANVEEAOKWQCBDEQDNFUIJRJOZPNYBTELQSBHEYTVORXKWGAUJIHKMGMUGURDWEVKIMAKOVRRNTYRXXHJBHEU");

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
    msg.setTimeStamp(0.11353027140577976);
    msg.setSource(36443U);
    msg.setSourceEntity(229U);
    msg.setDestination(8901U);
    msg.setDestinationEntity(232U);
    msg.timeline.assign("LFNTYQVMHRJODJCHEXBYCEGZKOBPNFFMYXPQPWPFGUZLCVWFSGALIEBIDYDHSBYJNEZHXJWUMXVLVK");
    msg.predicate.assign("IOHGHEZIFXXRTPDLWMJWVZVJZERGSXBOQINUNSXCNLLHBASXEWHVBIBAIJDFCTVPVGLXRFTURXSJTLOCDQYYGQCWSDAHZJRDKFQJNKTKZUQUBPYDVYMGLAR");

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
    msg.setTimeStamp(0.7067733450537153);
    msg.setSource(56753U);
    msg.setSourceEntity(254U);
    msg.setDestination(4626U);
    msg.setDestinationEntity(206U);
    msg.timeline.assign("YIHDHDVGEIOAWXYUXIGFECFGUMYQGPAOYILIHJONPPOPYVWNZRITVGPBPXNNBTZRGSKXSSLGETSMZXDWYXUKZLERQYBTDLQBKTXHNHSVNFIBDXMJYCCPYD");
    msg.predicate.assign("MWFZWHCEQWZUEHKMKEQDLOIMAZXRSNXIEJVXKDBJDHTLFIVUKNRGMDSYRILERAFRPHDSTQAOLQDFLAZYPIFQIMBO");

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
    msg.setTimeStamp(0.4656078796967401);
    msg.setSource(3056U);
    msg.setSourceEntity(175U);
    msg.setDestination(6047U);
    msg.setDestinationEntity(105U);
    msg.timeline.assign("BWYVWBNKSOESSGIITYFTLVMYXKSLJXGUMZFDJPCKBKSEOQLNGDPENFHYBSECUFJEXQHNBTLBUAVFQSMCZRGELOWAHDMLOUBAFRQMUZD");
    msg.predicate.assign("HKDKZBHMJHPDBJYVQLXOUORKPSJCTSBDQCGIPEKVRJZNTOWCOFAHGYYGGIPLNNAKZVSKAEEWCAKLYUBWFRMMEKGQXSNNVHBWURYCYRHIDCHTABEXVCRRLLBAMQLSEOFJZTPUIDFUNJQTJWKQQXWTPOXEFV");

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
    msg.setTimeStamp(0.8006710564759164);
    msg.setSource(58551U);
    msg.setSourceEntity(111U);
    msg.setDestination(2280U);
    msg.setDestinationEntity(30U);
    msg.reactor.assign("NTXZWMKFANCXTPSRCGCZOEKMLDFHAFFPLNSDWQGKGXIQDADHIEBWKBTWUSDPRGTNAVHEBVVWRUEITDGURPCYWZVFFMSCXTGVGQZMYGDPOROSIXKJNKHZLZMSICHIJOVFAYL");

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
    msg.setTimeStamp(0.6638703436987143);
    msg.setSource(10317U);
    msg.setSourceEntity(116U);
    msg.setDestination(33458U);
    msg.setDestinationEntity(122U);
    msg.reactor.assign("TJUWHDUOJRRIFACUAUPDNZOESIMAHLYGBPXVXFKQDBZPUSCQMHEMBMRYRNBIZYTQNJCRGTDKPLWRYCWKTNXEODJGFAPKECBFVHQBZOQNCHHEQYRLZVAECCZLGQDSWSOTHMWUCRNWVMDORKLXUBPVDKYBTIMVRYPFILFIGVAPCWVBPZZMKSDILTXVXISVDIQLSBXUQWZNWAAGMAUFFXXKYMUNWEYXTGJE");

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
    msg.setTimeStamp(0.054082988975162505);
    msg.setSource(26732U);
    msg.setSourceEntity(37U);
    msg.setDestination(58191U);
    msg.setDestinationEntity(232U);
    msg.reactor.assign("WAYUKUFWZVVRKJJEZATXHJZCWLWQAYMHGUQIOXCYDNHCOUPXOJEXQPXEMCEKEOTADPKSGUIMPFBBVYFENGBXYYXFQNOVYIMBFPSTTWVWWXPGOMGMFPYATSPSTNDZLXPEDYHJWDASQLHBTTTWGRUBLRROVZBGZZLPCJKRDHKRNMMFKJBQIHVLQTRSAIYSBAGQGARKIFRDVBCOLJKNIIQEJNOCDHEILSSVFZJMNKEIF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FYTPPXLKOLIVLRRJAZQUMBQZTEJPVATHDDMQWNXTIDCYYKRFBWUAHNNFVGDKDJABJTJKCCWKUWQMSMWHPYVBZVPMLHVERKEFPAHZSQVVIGOHXAJUCPMRXEZISZIMORJEFBHGGSGENMUXOWOPTIFANYQNMDWLTLSAHSYBAZYFBVUSEDGIKDTBQGKOPJJXIZCDKRZGSDLNUWOHASQCLGBSRROETQF");
    tmp_msg_0.predicate.assign("PNGQSAMUHZSHAXYOCSFKYOPORVVIHQCZACAKSTOCUXIHICWQBWRTXLDLFKUTWFUQANJNVKAMFCBYDPNIBSTTUQSAJNELXFMVYXAGUZCAFIQDZRPFPJBWRQMBXDJXEWCOKWMGPEDDJJIFBWLGZDVNXITEJYLGWGDYBMS");
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
    msg.setTimeStamp(0.9967349517479025);
    msg.setSource(40352U);
    msg.setSourceEntity(150U);
    msg.setDestination(45235U);
    msg.setDestinationEntity(2U);
    msg.topic.assign("UZKMOKLCYJTNGDZFZHZKIEPIETLAXBXPWYSGDTVDJLUQYJCXONAQDWRZMDVJEHKGFEUWZQNKQXNTPOOPLHSICUIQRRQUXQ");
    msg.data.assign("AGHAMYSDNDZSRBTCPQXWNPTLUMBXHOCDXTA");

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
    msg.setTimeStamp(0.695386930651235);
    msg.setSource(3945U);
    msg.setSourceEntity(168U);
    msg.setDestination(64268U);
    msg.setDestinationEntity(181U);
    msg.topic.assign("IKEVPADGPLYORUSKODYUICNIDDRSBPGZHRXMMNOEKFFNBZMXFQTFAXUUATYEHDHWNDC");
    msg.data.assign("RKAUIJIUVUYGDIQDTPHODIIZBQPB");

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
    msg.setTimeStamp(0.8364475442493335);
    msg.setSource(54703U);
    msg.setSourceEntity(122U);
    msg.setDestination(49748U);
    msg.setDestinationEntity(157U);
    msg.topic.assign("SOYKQAVCCBYWIYEIOVMEDZYJXFNOFGQVDKBRKABEWPSNRLORJRFTOCQWSHHQDTQNJTCVGZXWZUPNXFIBRHCKYMSROQASQIMPHPZBTWSCDXEAMLESDYBLKEBHZXCNWTAMJBLVOIGNDWGTMPPJQDAIMVJLPENZLXDHFGUIYDGZYPCZWFSXCJMYHNRUVGXAFZZF");
    msg.data.assign("LFPCJQCKZNUXRNANCBHUAKMRWHGIXKSYUEMQBUKILQDUQSOVRHUJPKPNLTFCFQXIQWMHSTTOYJCISTDEJJSCODYXHJOJGWIFOEIGYFMODAAGYGFVKMSDGBMLRLEIBMAONAWVVXVRKBHAZRNZPYZBPUFJAIBGPQCBKWLLLWOREQNNGYMHES");

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
    msg.setTimeStamp(0.41512708648096175);
    msg.setSource(7719U);
    msg.setSourceEntity(169U);
    msg.setDestination(20125U);
    msg.setDestinationEntity(184U);
    msg.frameid = 113U;
    const char tmp_msg_0[] = {119, -127, -42, 118, -111, -125, 124, 52, 75, 19, -18, 1, 119, -22, 24, -121, -38, -79, -127, 105, -101, -96, -81, -16, -4, 117, -38, 53, -10, -125, 37, 15, 0, -42, -108, 116, 100, -72, 18, 110, 43, -46, -124, 120, -57, -39, 98, -105, 46, -33, -90, -81, -3, -89, 82, 12, -80, 70, -33, 97, -99, -42, -90, 14, 10, -50, -12, 1, -27, -15, 72, 113, -108, 102, -120, -106, -98, 99, -56, 35, -121, 62, 101, 16, -59, 36, -50, 86, -24, 70, 8, -50, 56, -112, -19, 86, 56, 22, -60, -45, 100, -120, 64, -72, 79, 72, 32, 92, -44, -125, -7, -66, -31, 49, -31, 35, -3, 83, 45, 85, 94, -65, -76, -1, 63, 108, 33, 26, 61, -10, 102, -68, -75, -91, -69, 84, -14, 120, -119, 47, -122, -87, 24, -29, -75, -48, -80, 72, -89, -47, 21, -3, -14, 88, -10, -49, -110, 98, 100, 106};
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
    msg.setTimeStamp(0.15705734735950871);
    msg.setSource(47465U);
    msg.setSourceEntity(143U);
    msg.setDestination(2820U);
    msg.setDestinationEntity(4U);
    msg.frameid = 162U;
    const char tmp_msg_0[] = {-105, 94, 0, 0, -88, -110, 126, 108, -50, 58, 59, -54, -107, -107, 50, 66, 74, 118, -13, 66, -37, 0, 13, -62, -4, 46, -54, -50, 73, -11, -67, 116, 70, 28, 122, 5, -111, -33, -31, 100, -7, 15, 69, -22, -30, -19, -42, -31, 98, 10, 38, 81, -105, -73, -10, -34, -68, -6, -101, 14, -88, -37, -20, -57, 66, 25, 32, 56, 41, -98, 93, -73, -85, 113, -69, 9, 81, 72, 35, 117, 94, 24, -4, -18, -56, -74, -93, 83, -127, 53, 125, 12, 77, 99, 85, -5, 24, -89, -54, -97, -29, -5, -67, -39, 99, 25, -41, 24, 115, -99, -32, -97, 64, 125, -76, -62, -43, -80, 48, -29, 45, 126, -43, -86, 33, -93, 0, 7, -63, -44, -37, -111, -127, 109, 48, -15, -74, 62, -26, 93, -40, -44, -46, 106, 1, -89, -32, 51, 20, 44, 101, 93, -70, -114, 13, 50, 1, -20, -100, -81, 107, -88, -121, -113, 10, 31, -27, 24, 75, 31, 90, 102, 77, -61, 17, -102, -41, -26, -45, -49, -79, 54, -95, 81, -30, 108, 88, -34, 89, 119, -43, 60, 103, -19, 61, -3, -11, 123};
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
    msg.setTimeStamp(0.6954008901709163);
    msg.setSource(42145U);
    msg.setSourceEntity(193U);
    msg.setDestination(39046U);
    msg.setDestinationEntity(35U);
    msg.frameid = 234U;
    const char tmp_msg_0[] = {25, 76, 95, -99, 24, 100, -7, -73, 37, 34, -8, 63, -97, -99, 105, 43, -11, 97, 40, 65, 96, 68, 100, -122, -53, -108, -73, 80, 82, 75, -31, -54, -106, 123, 108, -126, 108, -48, -41, -75, 33, -33, -110, -10, -48, 54, 9, 89, -93, 48, -17, -64, -96, -80, 25, 16, 111, 82, 35, 51, -93, 12, -112, -102, -35, -79, -44, 114, -14, -69, -56, -110, 23, -65, -7, -83, -52, 14, 2, 119, 97, -88, 67, 89, -112, 66, -70, 2, -101, -46, -98, -28, 34, 46, 119, 54, -79, -71, 44, 113, 31, -53, -7, 111, -97, 26, 71, 91, 126, -3, -59, -36, -3, 64, -90, -33, -54, -68, 33, 54, 56, 10, -21, 124, -54, -46, 64, -116, 26, -126, -6, -22, -88, -39, 17, 16, -3, -41, -62, -41, 97};
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
    msg.setTimeStamp(0.8405138941984227);
    msg.setSource(15735U);
    msg.setSourceEntity(217U);
    msg.setDestination(14451U);
    msg.setDestinationEntity(28U);
    msg.fps = 80U;
    msg.quality = 140U;
    msg.reps = 235U;
    msg.tsize = 138U;

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
    msg.setTimeStamp(0.19249426894216892);
    msg.setSource(9962U);
    msg.setSourceEntity(110U);
    msg.setDestination(30415U);
    msg.setDestinationEntity(187U);
    msg.fps = 248U;
    msg.quality = 207U;
    msg.reps = 52U;
    msg.tsize = 125U;

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
    msg.setTimeStamp(0.6498118066242515);
    msg.setSource(14226U);
    msg.setSourceEntity(28U);
    msg.setDestination(30454U);
    msg.setDestinationEntity(91U);
    msg.fps = 221U;
    msg.quality = 251U;
    msg.reps = 196U;
    msg.tsize = 97U;

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
    msg.setTimeStamp(0.8939974144974189);
    msg.setSource(8604U);
    msg.setSourceEntity(7U);
    msg.setDestination(39416U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.718130016734846;
    msg.lon = 0.8616312676293456;
    msg.depth = 5U;
    msg.speed = 0.4542219596870025;
    msg.psi = 0.22790327525476028;

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
    msg.setTimeStamp(0.17614999548048793);
    msg.setSource(8719U);
    msg.setSourceEntity(38U);
    msg.setDestination(56085U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.8449044793605113;
    msg.lon = 0.008045461287182754;
    msg.depth = 72U;
    msg.speed = 0.48944145644163184;
    msg.psi = 0.4461015484568208;

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
    msg.setTimeStamp(0.5703220707450685);
    msg.setSource(4886U);
    msg.setSourceEntity(197U);
    msg.setDestination(26971U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.09749792295225412;
    msg.lon = 0.7827140220842063;
    msg.depth = 101U;
    msg.speed = 0.8843442831094073;
    msg.psi = 0.12603899485154757;

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
    msg.setTimeStamp(0.8115528678834001);
    msg.setSource(16056U);
    msg.setSourceEntity(111U);
    msg.setDestination(35213U);
    msg.setDestinationEntity(77U);
    msg.label.assign("BFLAAZTBIHWXNQUSTOPQCHXJFKNRSTLWQUSCNPFAVRGJIZUDBQWZCFEVBQBXMYIMOIWEIVARZKGSNKMZCUSKHQTKYQCSNRJYOFRBJEYSRGNZEGSEUFFYNPKMGVNUJZSOACRHCNIUBPLYMR");
    msg.lat = 0.8961140393013732;
    msg.lon = 0.37503666835192484;
    msg.z = 0.135485787206173;
    msg.z_units = 1U;
    msg.cog = 0.877679426048925;
    msg.sog = 0.7266850801081423;

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
    msg.setTimeStamp(0.04264965406236698);
    msg.setSource(47394U);
    msg.setSourceEntity(193U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(105U);
    msg.label.assign("UYQGFEFXJHVDUJWLTLPFGYJNWTYLBSUFODVNQLBTKCOYJONVVGXFIWGOXDAELBHZTVIEOKBBCTZQQCTKERYBJRDHREJVRRJZXEHIJWEAUZODHCSAWHUUKAACOPPSBAIYBMDLSISSOBWDAYLMOISQWHKREYFCEUXVLLMELGMNNHIIZPRGDQRKPFZMNDPZCXVGG");
    msg.lat = 0.7145481220176731;
    msg.lon = 0.6966538450411722;
    msg.z = 0.9125546389820378;
    msg.z_units = 0U;
    msg.cog = 0.15599530115184213;
    msg.sog = 0.5595147735485089;

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
    msg.setTimeStamp(0.46901018436505526);
    msg.setSource(51778U);
    msg.setSourceEntity(80U);
    msg.setDestination(36629U);
    msg.setDestinationEntity(27U);
    msg.label.assign("VYNEJSWADPIOHIWJGXWAXZDJPEQHHNRXREMKGOUFFPHEGIWUBJMFSJFLLVPNOAETUQFSZEHFWKCCTGKRIYNVYEJCMWNGVBKLZRLFDOOFWSYTDSGLAKNKLDRTYPEZTTPROYICKIBUWUBHDXOCTIUPXVHBQXHMIABXVQZVGRYNOCQCBRMSRBUQFKALHZNAJGWEAIXCLKNUXBTYPXMJFEOSQOGAGDCVYARDZQJNSMKULYSBPTMCJZZ");
    msg.lat = 0.521726927477789;
    msg.lon = 0.7108252379265028;
    msg.z = 0.04814350308273985;
    msg.z_units = 149U;
    msg.cog = 0.7653895785195206;
    msg.sog = 0.9840878912169321;

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
    msg.setTimeStamp(0.8987806246602517);
    msg.setSource(32905U);
    msg.setSourceEntity(214U);
    msg.setDestination(19056U);
    msg.setDestinationEntity(211U);
    msg.name.assign("QLDZSOBNTFJFKUFLOTHFQXMUCHWWLKBQECGUESHNAYYWBWXNLCJBHZBGVYFDGVBPDPWOJGWDANRJUGZMQNEQBLGORFYK");
    msg.value.assign("HNQWWWVZKJURMNQRXRKMQKBNXBQMFKPYERQBICTGHMCRIMRWDRJHYWIRXUYCJAEWOGIKFXNWTPSZHKVHLEDDIJVGFTBSSOVXTLHZAADTTPOEYHZVKTNMDCLTHZSFYNZWMEDFGNEMXFCIOABAQZGAGQLRUKIPGVHCVPUULXSVIJFAIVUHOYZTBMUZJXGQFYPZCRNCCYOWBLPJFSDKLGEWKPSOJMXLAP");

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
    msg.setTimeStamp(0.7225612920747487);
    msg.setSource(37204U);
    msg.setSourceEntity(203U);
    msg.setDestination(20259U);
    msg.setDestinationEntity(24U);
    msg.name.assign("MHDUQYVUCGMSYGQGHIMEFDGDYWYPMKBBYFQXTXBMWJSYUPPZBXCTQWJPPIVLAZMIVRWKPARWRZNZPOFISJNQAVXOEEOGOTMUFSUCAWVVJJJQRRJFGJBDNMJSNLCTSZODGOUECHNDULFDKSHXODKCNETTALIRZLRFUCSHWPHOYDPTKACLYGVYZEDBLXXEEAFHFQWKMUBZTXBTAIKAUHLEVXNXTFRVZWOKLEIWIBNY");
    msg.value.assign("VCWNFVFOUPPKRBLVWYYNDJYYYNOUXUHMLFOEETKRUSKDWHJABPKSMJYYRXQUCTOKANUYURFHUBFSHVSVNVKAXQVCSAFZHIOBFV");

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
    msg.setTimeStamp(0.5370583412181249);
    msg.setSource(1207U);
    msg.setSourceEntity(98U);
    msg.setDestination(33201U);
    msg.setDestinationEntity(77U);
    msg.name.assign("LNEQBROHZIGULBYTGMUCJRJQTXWPSDMKTJNMYHWFLKTGPANZFVPAPEWKSSFQMEMAXZDTJPJGWWYUKIMQ");
    msg.value.assign("OTXBJBGNCLVSHTAXHDDPAEKMMLFNAYANVVIUBLUIWZDWTGSUWQYMMWJNFZKPIVHCMDEWSXWYQUDQREXOJRYJGIPDOKQNJQTBJNXRTP");

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
    msg.setTimeStamp(0.815304112614501);
    msg.setSource(31675U);
    msg.setSourceEntity(248U);
    msg.setDestination(49765U);
    msg.setDestinationEntity(254U);
    msg.name.assign("FFARJUSYMDMHEEQBZGXMIUYXCKKZDWSTCPONCEWOMDDDOJVSOTOWPVSKCBDQQMAHPQKLUFJROVYLJTARPENQIXJITOZAGBHWRDLDHNWXGPNIUKSJELEZLTNUMCSHXZIYZNILSFMVGTZOPXSPAPWLHLYJRAONTRFAFZCKTVDQEYIJSGRCRVIUMECIGMDQNMPABF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PHFCYYNKKVBVTNBIKWLTCFNRFZBZDDVPDWYSDPGSPDRIJWD");
    tmp_msg_0.value.assign("FMDJHOSOMRRKFAZDSCHSTYMAEXWTWRUGJXDFIQCJNFGBOHWYYOPSGUVBTVOZIHFYAADUBWWRUXZVMHQLRLBPHJVQKAGQIKVVYI");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.05861187938353429);
    msg.setSource(49548U);
    msg.setSourceEntity(129U);
    msg.setDestination(23555U);
    msg.setDestinationEntity(118U);
    msg.name.assign("UBJCCDGJQKDSACWHSEWSUNYKLUTHVFFEYOAPGDYQFTGERDVTDYNBNIOUNPAMGJFLPEZCOXFWAIRJGSXPDWPELWAAVPGULHLHRQWKQKXQNUQMTOMZPROPRTSMCTAYFIULHREESRGIEWCEORGFFQAJKNKIWVLMYLCXIMXVGZRHVDDZJBZBIMCWRUXZBNZHIOBDNYQYBSQOJHJHIZATQKTJTFSIVKEZXGFB");

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
    msg.setTimeStamp(0.30825058473240896);
    msg.setSource(48116U);
    msg.setSourceEntity(77U);
    msg.setDestination(43306U);
    msg.setDestinationEntity(193U);
    msg.name.assign("UUPGLNSYEDIXGICUWSDOPJABVQQFPKHFBNAJWR");

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
    msg.setTimeStamp(0.5506309220229741);
    msg.setSource(2000U);
    msg.setSourceEntity(213U);
    msg.setDestination(29965U);
    msg.setDestinationEntity(87U);
    msg.name.assign("RQGGUTEMVUDGARSRYNSXSCPTYLSFBKBNHAELUVYUMLWWTBFDKTQQCIADSIHLQOPONMCREGXQSTKOXGLVPZA");
    msg.visibility.assign("HWDZHKYNGXIOUMWSSIVPDDVWNRTMMGKDCINQUTYZGIYTMPCMUFYYPCBFRORRLBKQNWLEIFOMTIARWVOYXEAMUVFJDPHEVVLPPJRSXEIUJUIJXSJFLNLQFKETGEHZKNUBJARGODXYCSBCZGBBNNTZPHQMOHZGABLHPHKJJRDBMLVEQAFJLWXCSPQSACWEWCWBDBYLSKMFRHECZJQXUGOTQOKCVSPFFOYQZWIDTNAOD");
    msg.scope.assign("ERSXBYZFRUEKEGCZYIWRSGIWRFTGJAXYDANEMKCHLNIONMCDTUJISAOJAMFNGMAYDZPVLVCMJAKQURSKJLUZQEQBCEJGVOFUWLTDULSQAPZXWPOHIURDDZKGOHHVRBNYNPPOQCHFJRLYQFVMXRJENTXQBDXAMTCWFDHZTBBVVVMQGISPY");

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
    msg.setTimeStamp(0.8149791769865353);
    msg.setSource(55828U);
    msg.setSourceEntity(8U);
    msg.setDestination(22748U);
    msg.setDestinationEntity(235U);
    msg.name.assign("VQLUCDSZZNSOXAPQNGZGVHIZMBFAEWLHPDRCCDZRIQBTVAOTGNRONVXFOYKBWXQPKMHWBFUXIDNCRKYJSRWKWTCEBFPMPIYJVJEJXMIXIBEUUTPNQCMTDJKIFPFERAXBZLJRGPUMSKVRWNLLYLMYSCAGPATZFJCSQEWAZ");
    msg.visibility.assign("XZKNOCRFZJUZVROXVAAFRACFXXPSDVXGSCEYKRJJJWKECIIPEUFHPGXXPYBNRFGVKUWYWPGLAIWDIVWNDPNYSBYRETDYRKLURGGNHJHBXBLVTODBWVJSVQGSUCZCVBZOSSPTGEZKKNFZUUTBZWINMEYYTQQIOSHMCAQHGQQXMAHIUQPLWMCHNHQALIOLBYJQMJXHATEAROKCLFMSWZTJDUMALFFMNLHDM");
    msg.scope.assign("WGNOQEHDXLSIZTIYDNMSYZGRMX");

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
    msg.setTimeStamp(0.7229015866280649);
    msg.setSource(7275U);
    msg.setSourceEntity(194U);
    msg.setDestination(48187U);
    msg.setDestinationEntity(35U);
    msg.name.assign("GLLXZILXPKBSAWGELWYCRMMAJMGHLYCVTHWUGEWZOKILSVUASOBJZSAQGRENGRBPWMHSINQFXXPEZFVXUDJKPBOJMMQNBINVOVFFETLDCPGRLDGWRCTFHYMFEAMOURJZSPVTDUSPQWQWQKHN");
    msg.visibility.assign("BJQGRAOFBHGDMFILNZMSHIEJKNWASZBVZHVOUJCCGUJDBQNEYZBTLSKSEGGAFTNWPDFRPWQLPDYKCWFOBXAXQDEOYGKIJWEDQEQOIZGFEORIINLAMPTJSYGXWMZHWLFOCTSYBFHIAWLYRPJHYAEVVSZKHRYJPXKRDUYGOWVMUCMBPXXS");
    msg.scope.assign("ZFMSFPFCUDAPIWXTDXDWWDXQGJCFXWOOLAAEGJUNMPZSJEZBSOFZTAGQYULSRWFAKIGZQUNWHMOBUHHVJQRECTGHSYVVCTBKJBCPQXDVTXSOALK");

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
    msg.setTimeStamp(0.9727676408622404);
    msg.setSource(3238U);
    msg.setSourceEntity(195U);
    msg.setDestination(21571U);
    msg.setDestinationEntity(237U);
    msg.name.assign("HSHMSNKWCOHRZBFYFFIZHGAZTKEWQDGDJIZSG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TGAFOFBGPXVVUMYMKYEDYUOXKZWNGGYCSZDPVNTDMQLGCFBVVSMIPNSDEUJQUTQZWHOMVXZSTEOCFCLPNZADLZOYDATXPRGQIKHZXAFGNRRMUTUWNHOMSRX");
    tmp_msg_0.value.assign("SITZEAAFZLLPJRKXWKLUBUCNDPVVKZPIVHYORRHCQJFRSEDMOMOUWOAQHVEGXBVFYGQGPIXMAOSMXFFKRHKGXTUYWWAWCVYOYLOMBANNLEWERBEHAYLDPGJANVJSTBZRDZUUIUYEBLJCQXOZNMBQCVHGSFTBTMJUOLSKQNHWKAFTK");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5690821647710046);
    msg.setSource(45927U);
    msg.setSourceEntity(203U);
    msg.setDestination(48549U);
    msg.setDestinationEntity(9U);
    msg.name.assign("CQXVTZNXDZWIBQPSWSVLGYNQPUFRHUBBFWOLAAMGIRQVJBMRVCETRGUUOYFVPMOWIEKRKHCUREFLECGKCWPRYCIXZRGXFNAALOEJJSYASOUKAGOBDUKNVHSTHSADJDBACAXRGHDZDRIZQLZFAUZIHXEDKHNVZCNQSNSMYNMDFHNOZBPXQKTFIYCTGEKQKYPQXLILEGWNSLTWCTPKVJXUPTJHJFVBUJQPVOMTDHMEJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TWXHMDUCYMAPQBORXMGUJCSDRKPAVKUAHRPLKYKVBFNHUGPRNRETCMQIPMWWSSSTYOVOFSNNEMUQTNAYZLKLKE");
    tmp_msg_0.value.assign("OWTKAZXEFHNZTOPQXLZMUAGVRYYEHDICHYJYDNPJKCWWFMAZDXXCXQQBOMPGPAUKHYSZOSXQOXPTRUWIPACOTKYMIBFCILVODTQNDMACRJJDBYLDTQQIERJFNZWANKVQGYMEHDKERSUSBJSUVLBNBCXPFYVHLGOIFRFPRUSVEUMTNKCOAQBTQLWJKDRGXMFZSDISJVXJHFTEWSWZGBCLWGGVHBWRU");
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
    msg.setTimeStamp(0.504854176861489);
    msg.setSource(39931U);
    msg.setSourceEntity(15U);
    msg.setDestination(33029U);
    msg.setDestinationEntity(148U);
    msg.name.assign("HPXCGIAWLEKAXCRSTBIRVHYXFLMVIWNCCPZYSTLELNXTKJQEGFQJIUDWDKFGXNEBDLEDAHOHMFVXGOKIHZCFVFJUQMGFUWEWCGAQJYPTWLISZEIYAQWGQJXOTFCHSOLMAZHZJDOCPXDRUAVBDZUIOKHKKYQURAVNDNWYAPTPSXRZPMOSBOGRMSNVBNJEU");

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
    msg.setTimeStamp(0.9878292320039149);
    msg.setSource(58967U);
    msg.setSourceEntity(10U);
    msg.setDestination(38772U);
    msg.setDestinationEntity(36U);
    msg.name.assign("XBFLJUYJARPWPILKLDGHMCUPHRWWZLDPUXXSBOWCKUOIXGSJMVWHMRYEXYQZVXSSRYHCHZPFPFUEGBKGIACNNTKRSZDVWTIUSHGGFKFRWZQLMDRWZLKEKFSMVEYVQUOLIYBPTOBXSFJBCGNPATNDDEWJNTFAAEHDCCJOVAVXHCMCFONEXVYVQB");

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
    msg.setTimeStamp(0.21622070200014798);
    msg.setSource(52583U);
    msg.setSourceEntity(203U);
    msg.setDestination(43409U);
    msg.setDestinationEntity(174U);
    msg.name.assign("JPVNFOZQYNSWMPNERPSUPOUVNXESUFJBHQVQKFXTCKSYVSLKTIKLIDWJOWAXEPBRWONFQGCYYBWBNLANGRJMMIMDMDAZIQKFDKYLWHHZUZVGLABHLHFVZUEXWZKSJPVYWYOKCTHPNLODS");

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
    msg.setTimeStamp(0.48407687923927);
    msg.setSource(49077U);
    msg.setSourceEntity(227U);
    msg.setDestination(2620U);
    msg.setDestinationEntity(169U);
    msg.name.assign("NOSMKUARJPVQZPMGVSKXJQPXPLDTJNBZIQZUSEAVBIZPXOSGBHMRFUUWJTUPDKKYVLUWIDOJLKFATUMERFESTZWONXCISCFGRHOHCCAHEZFBNQHFOWTVIYLYBHOTYXONXXQGNUXEDAJ");

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
    msg.setTimeStamp(0.13869936530442883);
    msg.setSource(52332U);
    msg.setSourceEntity(2U);
    msg.setDestination(19678U);
    msg.setDestinationEntity(97U);
    msg.timeout = 3351080400U;

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
    msg.setTimeStamp(0.7322681191640338);
    msg.setSource(39694U);
    msg.setSourceEntity(17U);
    msg.setDestination(19631U);
    msg.setDestinationEntity(226U);
    msg.timeout = 1007719813U;

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
    msg.setTimeStamp(0.4640169463759861);
    msg.setSource(38979U);
    msg.setSourceEntity(165U);
    msg.setDestination(1062U);
    msg.setDestinationEntity(222U);
    msg.timeout = 413782685U;

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
    msg.setTimeStamp(0.9786407939274266);
    msg.setSource(9151U);
    msg.setSourceEntity(234U);
    msg.setDestination(19127U);
    msg.setDestinationEntity(47U);
    msg.sessid = 753432431U;

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
    msg.setTimeStamp(0.0905820511536205);
    msg.setSource(51091U);
    msg.setSourceEntity(153U);
    msg.setDestination(38598U);
    msg.setDestinationEntity(60U);
    msg.sessid = 1349527266U;

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
    msg.setTimeStamp(0.878757424253794);
    msg.setSource(11070U);
    msg.setSourceEntity(139U);
    msg.setDestination(30487U);
    msg.setDestinationEntity(155U);
    msg.sessid = 4243833105U;

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
    msg.setTimeStamp(0.16272468219780833);
    msg.setSource(32660U);
    msg.setSourceEntity(159U);
    msg.setDestination(49059U);
    msg.setDestinationEntity(48U);
    msg.sessid = 3923850713U;
    msg.messages.assign("HLSSZMWOIUTFHQYMNZQDDIVVALQXWRCBGQJHZWKYUSKLIVNCPSVWGNETMXMDXQRLYTDDVPDGJHJKSGAEPRJXEKLSISPOOWYWBEWYUOMMOBJAOUZBWFLDKNHPZBXCZNVKPXRHMULEDVQRFPIBFIZKHSBAATQQGOREGVYUNYU");

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
    msg.setTimeStamp(0.37114141182563165);
    msg.setSource(50020U);
    msg.setSourceEntity(65U);
    msg.setDestination(10553U);
    msg.setDestinationEntity(169U);
    msg.sessid = 4046008502U;
    msg.messages.assign("WGFJNMHHLNMTMVFQBJZLJYZIUPRICTANUWTRKGSMSAYNTYOPMWBCXJEBKMEDVDNETFRAMABPDNWQTJZKTCBBIIQLCHFMVZQDZPLPJSWBPCNYFKERXEUXNQEUEXYAKUSCMMVVTKDPYHIINUVFZCHHRVXQOADLRFJZFUNVCRBOXHVVHHUYSYPIDQOQGCLAJBAUOXWKIIKXDRPROCEDEOOIKSLGTJBGRAYOSGUWLSOWSZGH");

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
    msg.setTimeStamp(0.5921710285649171);
    msg.setSource(50517U);
    msg.setSourceEntity(136U);
    msg.setDestination(15734U);
    msg.setDestinationEntity(7U);
    msg.sessid = 1958097271U;
    msg.messages.assign("JZKHRQCFQRVGCCNBMJXBKJRLTFZOCMBTXPUTKORFETPMQWVXQDSZPNSZSVGLXCHHXLTGQVSUTBVZUDJQCAHJHLDYBIWDWROOIAEJEFWLWMKPTDUYOPPGHASABMAMQESCNIFSZERYMENTMRAI");

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
    msg.setTimeStamp(0.3477829133296002);
    msg.setSource(46565U);
    msg.setSourceEntity(231U);
    msg.setDestination(51688U);
    msg.setDestinationEntity(29U);
    msg.sessid = 563658689U;

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
    msg.setTimeStamp(0.4390125427768349);
    msg.setSource(18557U);
    msg.setSourceEntity(114U);
    msg.setDestination(11232U);
    msg.setDestinationEntity(180U);
    msg.sessid = 3036682815U;

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
    msg.setTimeStamp(0.5650663919501656);
    msg.setSource(30419U);
    msg.setSourceEntity(38U);
    msg.setDestination(27752U);
    msg.setDestinationEntity(181U);
    msg.sessid = 4290620419U;

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
    msg.setTimeStamp(0.12663520742532686);
    msg.setSource(60431U);
    msg.setSourceEntity(194U);
    msg.setDestination(55282U);
    msg.setDestinationEntity(164U);
    msg.sessid = 2115853872U;
    msg.status = 6U;

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
    msg.setTimeStamp(0.7292477834176849);
    msg.setSource(34526U);
    msg.setSourceEntity(144U);
    msg.setDestination(50588U);
    msg.setDestinationEntity(11U);
    msg.sessid = 288674997U;
    msg.status = 87U;

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
    msg.setTimeStamp(0.22784512239953214);
    msg.setSource(39469U);
    msg.setSourceEntity(88U);
    msg.setDestination(48210U);
    msg.setDestinationEntity(45U);
    msg.sessid = 155407755U;
    msg.status = 185U;

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
    msg.setTimeStamp(0.6847356060849213);
    msg.setSource(52755U);
    msg.setSourceEntity(209U);
    msg.setDestination(47721U);
    msg.setDestinationEntity(38U);
    msg.name.assign("JCPHDEJWPPRNYKZDFHLEQAFVBYPNQVECGIBVTPTSJDDGKZCMWRPEOULIJAFBLSMPIDVYGXXSTKSOMJMRAJXRJOBNNXVNTBZHXZACILLHGOQBGQOSBLTNRKKWFQIC");

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
    msg.setTimeStamp(0.515296741711312);
    msg.setSource(45347U);
    msg.setSourceEntity(26U);
    msg.setDestination(13710U);
    msg.setDestinationEntity(208U);
    msg.name.assign("ZEHSSXBFCYGMFDRMXBXHGAOKTGTEFWOAHRWLLRVUJORIGVKPTZYIYCGMAFPEFNOVJDRLCIXEJOVRTUPYYISTCBMKDENDAYWZUDQKMJPUBSMBHSVVUNA");

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
    msg.setTimeStamp(0.2682254926115426);
    msg.setSource(736U);
    msg.setSourceEntity(54U);
    msg.setDestination(64359U);
    msg.setDestinationEntity(32U);
    msg.name.assign("BMDLFVIIWNDJNKDQDMMTUTVVZXOOQTTFRNIPOGBZBWBWKCQJVXANRYBLTGYLGEHESNRMOZGGVAQLXAGRQDMOAHWHGPUJFELBC");

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
    msg.setTimeStamp(0.16225000034599935);
    msg.setSource(56882U);
    msg.setSourceEntity(211U);
    msg.setDestination(2629U);
    msg.setDestinationEntity(83U);
    msg.name.assign("OBMSQGTMZBVAYHFVMHPUWMCTZWWAYEAJBES");

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
    msg.setTimeStamp(0.38450155420867105);
    msg.setSource(6077U);
    msg.setSourceEntity(230U);
    msg.setDestination(5932U);
    msg.setDestinationEntity(188U);
    msg.name.assign("XPNIJAGNHLETAQJMFSMTRISQIOIVMVEEWQANZZVNDFGWJFYYWYSLACPMZXCJLKBBOCKOMXXULVPKDMXLSOQLLVHRCJYUCYOBGSTMKKRHTZFXAUVYXNTYHFEUYAINPROESBZXVQVFIUGDUXDCDSLFAKVRBANHMUBZ");

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
    msg.setTimeStamp(0.010036745486950327);
    msg.setSource(37513U);
    msg.setSourceEntity(182U);
    msg.setDestination(60462U);
    msg.setDestinationEntity(76U);
    msg.name.assign("RPWCGXLIKIUHIDHBPUQUCCZGEEKNJHPGSJVLANSRRNLXVRLNPKYCEYRBBOWNKYBPQIPNEVJCNHAQNEAEOAMBATHMLZDYXTODESQPLZSZMJDFGHUMDSDGMIEBOSGCRFOGOTYMNKTVYVGCMZZMCQYFWUABP");

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
    msg.setTimeStamp(0.7994715932494881);
    msg.setSource(13343U);
    msg.setSourceEntity(14U);
    msg.setDestination(12496U);
    msg.setDestinationEntity(213U);
    msg.type = 91U;
    msg.error.assign("YXPDFQFYZOXBEAQMMMOPFGFELHMTTFFNLQXGURIAWSCUQGIEODPUWXOKVRDGJLMBVGQMXLIJKJUVFTIOWVZMRDBSYIQVKGOYSREHLNDKDNNGJOAYLWCEAGYZUSKZROEFCKTBPMAEYJVSKIFSHZBWXNELQHHSHAKCPBLKRXDDHITCA");

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
    msg.setTimeStamp(0.7344676058436889);
    msg.setSource(48874U);
    msg.setSourceEntity(148U);
    msg.setDestination(64700U);
    msg.setDestinationEntity(240U);
    msg.type = 183U;
    msg.error.assign("XIGURMSRUJSCAMHRHHQJGRRDPLSDLEEPTUKNMWNOZMZFFVRSOQYONABJGZIBVLALJDIWCUIFXPATSGYGHDBJCPQVDWIOQQEWENROITPNFAEBZTETEQNHYASZZZGQFXDNTYRTWYXBFJNAB");

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
    msg.setTimeStamp(0.964459308117831);
    msg.setSource(3835U);
    msg.setSourceEntity(227U);
    msg.setDestination(20417U);
    msg.setDestinationEntity(181U);
    msg.type = 92U;
    msg.error.assign("VAJXRSWGIXVYLIBGJUNTSHBJJIHWCOPFZZFVGSSZYGNOYYPHDDGYVSQWMVLRFUKGEUMUPXFETMWRRMHLDKDYYXTQWSICSQKKEIPXFALINOOJEACIGZGIFRNNHNFSDATZQKTCMEBVWPLLYPUKQJUVTRXCMCJOLBUHYLPJBNZFMTO");

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
    msg.setTimeStamp(0.40067595749643514);
    msg.setSource(29802U);
    msg.setSourceEntity(92U);
    msg.setDestination(28765U);
    msg.setDestinationEntity(225U);
    msg.seq = 30854U;
    msg.sys_dst.assign("SXQAWGZWBBSMZQXXBAROWBLCXDLDSBVNWNMUKUOTGNTLRCJTKPDEOLVFTGAADYEBIIRQMPYOWSGMFGQWFUSRDSWVBEXKCOJNNQZKTOEPPTUHYCPWOYRIQ");
    msg.flags = 120U;
    const char tmp_msg_0[] = {98, 1, -73, -117, -22, -72, -65, 0, -78, -12, -69, -58, -59, -109, -117, -7, 46, -71, -113, 28, -90, 31, 2, 98, 113, -90, -126, 74, 96, 22, 36, 76, -54, 64, -52, -73, -96, 18, 25, 24, 7, -7, 32, 117, -70, 37, 101, 116, -50, -100, 50, -20, 25, 87, 16, -19, 52, 27, 79, -7, 25, -20, -91, 104, 17, -22, 119, -93, 113, 114, -97, 123, -26, 43, -15, 22, -65, -116, 99, -52, -2, -54, 6, 122, 13, -108, -115, 77, 0, -128, 40, -112, -121, 14, -44, 111, -75, -123, -96, 73, -57, 85, -128, -105, -98, 24, -124, -31, -98, 100, -10, -81, -32, -85, 61, -16, -70, -35, 104, -16, 108, 20, 27, 112, -70, -52, -93, 122, 40, 24, 3, -19, -61, 43, -2, 13, -123, -85, -93, 103, -106, -58, 43, 120, 99, -121, 29, -63, 110, -105, 76, -35, -29, 75, 52, 93, -92, -127, 109, 65, -11, -89, 121, -7, -88, -6, -37, -123, -33, -76, -100, 29, -60, 90, -91, 43, -79, -24, -52, 4, -14, 110, -121, -90, 7, -36, -8, 82, 113, -105, -40, 66, 42, -91, 22, 96, -26, 100, 3, -107, -8, 116};
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
    msg.setTimeStamp(0.10713213330299864);
    msg.setSource(49137U);
    msg.setSourceEntity(156U);
    msg.setDestination(35373U);
    msg.setDestinationEntity(102U);
    msg.seq = 20531U;
    msg.sys_dst.assign("YQTNZUEVOXJILSSPMBCXGUGPUXOZSSLFRBJDJNJSDKGCOYAFSWCGLKTGOYEEGASBQDWNOPQYFFVMIJ");
    msg.flags = 22U;
    const char tmp_msg_0[] = {124, 50, 94, 101, -44, 113, 49, -25, 93, 25, -41, -11, 97, -128, 37, 59, -79, 74, -121, -89, -117, -47, -90, -97, -25, -53, -128, 90, 107, 120, -103, -97, -86, -83, 113, -109, 23, 44, 18, -125, 89, -58};
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
    msg.setTimeStamp(0.1259936927882026);
    msg.setSource(55910U);
    msg.setSourceEntity(95U);
    msg.setDestination(63013U);
    msg.setDestinationEntity(240U);
    msg.seq = 42259U;
    msg.sys_dst.assign("MQCCLHVRIPSHXAVTBIMJYUDSXVHZEWVDLLCEFPMUDHYUEKPQJBWJTKNISHOEEODZUTCKEQFJKOIGCEPRLTWXOCSYMAAFPWKXHZSHFDKTRAUNGTLAIMSKNOZDYBYPURWTBGRVWVXGFCNLTUGXOOVCSCYPBZFR");
    msg.flags = 138U;
    const char tmp_msg_0[] = {-51, -79, 30, -103, -19, -66, -13, -103, -122, 88, -105, -9, 57, -89, -100, -18, -128, -111, -45, -27, -53, 22, -85, -1, -7, -111, 49, 104, -31, 76, -30, -31, 101, -19, -27};
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
    msg.setTimeStamp(0.2076230991881226);
    msg.setSource(3285U);
    msg.setSourceEntity(62U);
    msg.setDestination(51501U);
    msg.setDestinationEntity(41U);
    msg.sys_src.assign("RNGOSJAXZPABMQZDTKZYABWFZLWTENHEMFSSYWGAHCZQDFYMMSLHCWPXIPWECDNUIIOOCIHRHNJVEFNXASTBINKKHTMRQCLHQJJJEQDSCAWQRDZVYPVLKUACNWKYGWOLRYOKPEGOCVYRRLULIISXDWMZUTUEIAPRFZFQQZVXETIXOGDLYJYGPVFFVAJXTFTKBZYXISFXVUBVVBGDJBMPHPMLPGTXORNHUNQCD");
    msg.sys_dst.assign("BTPTKKOXVYZYQLBHOZSBUUBW");
    msg.flags = 227U;
    const char tmp_msg_0[] = {-15, 121, 48, 0, -124, 45, 43, -80, -101, 41, 116, 23, 27, -1, -14, 23, 63, 31, -52, 37, 98, 92, -3, 83, -76, 40, 39, -38, -20, -78, 81, 46, 112, -85, 115, 50, 90, -102, -43, 82, 100, 75, -97, -73, -79, -114, -114, 121, -27, -113, 2, 37, 9, 54, 49, 119, 10, -59, -5, 86, -74, 75, -21, 94, 33, -127, 15, -124, 77, -17, -65, 7, 43, 65, 67, -12, -35, -50, 7, -108, 21, 120, 81, 109, 90, 87, -81, 54, -125, 126, -115, 53, -36, 80, 74, -47, 65, -69, -101, 19, -123, -18, -88, -10, 21, -127, -42, 69, -88, 45, -127, -124, -72, -116, 86, -119, 94, -15, 114, 109, 95, 74, -106, 8, 87, -89, -106, 61, -47, 5, -84, 38, 87, -7, 115, -73, 56, 94, -106, 26, -100, 0, 49, -86, -67, -7, -73, 61, 57, -119, 39, -27, 106, -26, 9, 10, -18, -94, -36, -5, -48, -14, 63, 19, 12, 0, 93, -91, -122, 72, -47, 37, -6, -76, 28, -22, -113, -54, -68, 43, -81, -57, 27, 75, -54, -61, -38, 5, 18, -40, -111, 92, -52, -26, -122, 91};
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
    msg.setTimeStamp(0.5650773753109758);
    msg.setSource(60242U);
    msg.setSourceEntity(152U);
    msg.setDestination(38489U);
    msg.setDestinationEntity(190U);
    msg.sys_src.assign("CEVOOYOOKXLXHSRBTBUKDLVBSUPCCLWZQIOJAXLMPTCJGQHDRKMNYVZEZGEAMXUBSMEMDKPYAMXAWWFACCVYTTUUWONTYHITDRCMGXNQJKKQVWXRZDQTBIWGSHHFZLJMOFQQHSUGIXEOEDAUTFFOKSNGWRAIJVLVGTJCFNYSTKYEQDIQZZBECSPZUBKIEOPRJPHWZXJQGRVLDYAIFBIHWLNPVMWHSBNESNMDPXYYP");
    msg.sys_dst.assign("EAVAOMRAKQGFGRLRQCRBCEMFQNNIIXOXQNJAHWDDJXPNMWOGZPLPJLAAXOZKZBQUFVTTUPREPZLFMLDETSJSIDMPQTNLJMMEUXHNWBJBKZGXCUDWLWDFBMEAGKYOVAIUIOTENVBKTEXSUDAZYXJCJSYBBTSNKNOHFPMSACWUJV");
    msg.flags = 62U;
    const char tmp_msg_0[] = {-20, -87, -22, -43, -111, 20, -22, -8, -113, -45, -100, -56, 100, 5, 45, -3, 10, -109, -78, 24, 47, 70, 29, 118, -103, 123, -66, -68, -1, 43, 87, -40, -44, 95, 33, -128, -48, 9, -48, -21, 57, 108, -105, 11, 126, 82, 11, 62, 71, -57, 36, -1, 46, -6, 43, 38, 122, 67, -4, -105, -98, -42, -64, -38, -126, -90, -112, 98, 47, -49, 49, 25, -62, -92, 113, -22, -52, 28, -22, -122, 4, -88, 108, -49, -32, -128, 72, -88, -69, -119, -105, 76, 47, -97, -20, 70, -127, 5, 110, 119, -70, -19, 109, -115, -115, 32, -30, -18, 100, 27, 76, -108, 111, 124, -120, 48, 109, 105, 104, 23, 77, -94, 117, -97, 95, -5, -80, 8, 84};
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
    msg.setTimeStamp(0.14637821642707582);
    msg.setSource(8650U);
    msg.setSourceEntity(236U);
    msg.setDestination(30960U);
    msg.setDestinationEntity(237U);
    msg.sys_src.assign("PHNYKLMMNNITEBKRQNTQNJJISFRIBZGMRHAVYAPMLEOPZYAVERJVNJHUDHSPGUDSSTWXBXRZJAMDAQHSGLTJKZCZTZEWPXXDLIREKQHTDODPVOQUUDCTQFPCCYWKILDFWXUBUGOWVIDBGHMSPGUGXFRVHREBARCNFSJMEAWICVUZFRXWLZOXWOJZYOTAZONCBMKXJYHNTIUKWFHBWEGEYNSFVYVBMQI");
    msg.sys_dst.assign("DTKRPYMNMFZLLSOYVWVVFFUZWNMWKPEPOCJPOXJZKMEPYYVSEBTKVBQGIGKZGBQDHMATSWRNCGIDLEVUERRTEROQQVLWUJJDICWBLAFCQAIFY");
    msg.flags = 227U;
    const char tmp_msg_0[] = {16, 18, 23, 98, -103, 17, 58, 72, 33, 126, 119, 49, -94, 21, 93, 71, 32, -39, -78, -125, 125, -121, -102, 29, -13, 73, -18, -113, 37, 116, -99, -44, -85, -41, -127, 86, 85, 30, 30, -64, -19, 48, -88, -128, -118, 18, 19, -56, -100, 33, 123, -49, -117, 58, 19, 53, -83, 98, 47, -27, 63, 42, -103, -114, 40, -22, 89, -121, -86, -66, 85, -18, -85, -66, 9, -33, 111, -99, 14, 26, 52, -79, 107, 40, 107, 83, -95, 103, 29, -64, 115, -11, 8, 39, -38, 67, -36, 46, 87, -51, 102, -28, -13, 84, 65, -16, 56, 120, 37, -4, -4, 92, 74, -53, -13, 46, 89, 57, -86, -81, 120, 90, 59, 19, 13, -128, 1, 15, 93, -97, -104, 63, -102, -53, -47, 41, -50, 7, 65, -117, 124, 45, -45, 32, 29, -97, -81, 90, -97, -106, 106, -80, -77, 95, 110, 7, -49, -120, -110, -60, -119, 73, 89, 88, -115, -119, 123, -124, -40, -115, 104, -120, -34, -96, 3, 60, 123, -54, -113, -82, -101, -45, -118, -109, -41, 53, -46, -112, -53, 77, -10, -22, -7, 98, -19, -46, 56, 48, 61, 65, -104, -122, 5, 10, 105, 86, 17, 45, 27, 36, -88, -3, 80, -33, -88, 65, 6, -88, 61, 54, -112, -53};
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
    msg.setTimeStamp(0.3384610363788858);
    msg.setSource(22879U);
    msg.setSourceEntity(212U);
    msg.setDestination(25636U);
    msg.setDestinationEntity(41U);
    msg.seq = 1909U;
    msg.value = 107U;
    msg.error.assign("RKINEMUUQMETGLWMFHOLEOJVIMARIPKZJNTCFZBIHVJUKGX");

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
    msg.setTimeStamp(0.5754393977788997);
    msg.setSource(24712U);
    msg.setSourceEntity(36U);
    msg.setDestination(25553U);
    msg.setDestinationEntity(220U);
    msg.seq = 53135U;
    msg.value = 128U;
    msg.error.assign("ROLNYVSMJBUVYCMCSCQKKIULUYEIWZUSAHEOQLLDDXVHXTBRHMEOYATKPTWJJVYJHNAYMGZFRSLEOWDDHZJCDIWUIAQMSVDKRFGXTVGQNZEXBYHARCGRARZLPOWEJZPQXEDLSIWLNVSCBUCKKPTSOKCGLYQFDIJNIFFTZXKPQGPQZTGNHOMFQZXBXC");

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
    msg.setTimeStamp(0.010442455764186342);
    msg.setSource(37841U);
    msg.setSourceEntity(214U);
    msg.setDestination(60967U);
    msg.setDestinationEntity(34U);
    msg.seq = 32378U;
    msg.value = 22U;
    msg.error.assign("CNLUTJWQWSXDEVORVDRIZTPYJRULXWILEQOOVVYOX");

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
    msg.setTimeStamp(0.01629656992968065);
    msg.setSource(49131U);
    msg.setSourceEntity(211U);
    msg.setDestination(59507U);
    msg.setDestinationEntity(214U);
    msg.seq = 20300U;
    msg.sys.assign("YNBFEKAOBMDYBHGUBJUEEDYUIJOSAVWTMFDCDBKVZYEBMLPULYCFAINZNEZPTDPCRKSWGUVUSWJGIUJYLQEOXXGPHBYVNLYQCRERRSEAQTUZADOHPJOSWZAVHJKGLFJAGTYABSXIMZJFIQKGHKGSUGWTUI");
    msg.value = 0.006721166793734246;

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
    msg.setTimeStamp(0.767385927838785);
    msg.setSource(14304U);
    msg.setSourceEntity(8U);
    msg.setDestination(18664U);
    msg.setDestinationEntity(229U);
    msg.seq = 38887U;
    msg.sys.assign("MKBHZIORHZMWWPFYBXLZDUDNERWJSEMQUJHRDAWRVLDQXSOKKDQPRGDSNMVIKPLKYWGGDVTWTORUIQTAVAYBDMPRMVGFRFTHXKODJGXXEEIIODYESXBYNPEASVHYYZUZVNAQXIBVVNZBLUYTWNIFCELNPLZOCFPMFLHTSAWG");
    msg.value = 0.5659952068536256;

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
    msg.setTimeStamp(0.3758431347725998);
    msg.setSource(18119U);
    msg.setSourceEntity(116U);
    msg.setDestination(30606U);
    msg.setDestinationEntity(180U);
    msg.seq = 26386U;
    msg.sys.assign("HZCMJMQNTQYUYCGEMSLSHMOYQBGEEMNKICBLNIEWQJBZCIXUWPKCGGUSNCHUZOCIQVNBOXVLEMAHHDGONVKFJPFXYVSPTSIHAGHMMYDQPPQAKSVXRFBKKWHSVJDXWTECIKUMAZUWDRLVLBTOEZQUNEQCRJMJFPUPTNTVXVRFFHGSSUIFKJIFKXDLPYKRZBVEWYIYRWGBLZRCBZ");
    msg.value = 0.8648259369923073;

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
    msg.setTimeStamp(0.08411210120148471);
    msg.setSource(28783U);
    msg.setSourceEntity(16U);
    msg.setDestination(40213U);
    msg.setDestinationEntity(28U);
    msg.action = 47U;
    msg.longain = 0.5219711142666041;
    msg.latgain = 0.30101581087686213;
    msg.bondthick = 2432689479U;
    msg.leadgain = 0.7321218043792301;
    msg.deconflgain = 0.09570632221964936;

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
    msg.setTimeStamp(0.29599313343015543);
    msg.setSource(48111U);
    msg.setSourceEntity(204U);
    msg.setDestination(62436U);
    msg.setDestinationEntity(101U);
    msg.action = 196U;
    msg.longain = 0.6476332645782457;
    msg.latgain = 0.3009363298963259;
    msg.bondthick = 2165217226U;
    msg.leadgain = 0.6010296652930124;
    msg.deconflgain = 0.02330892929139261;

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
    msg.setTimeStamp(0.7355899859524831);
    msg.setSource(38962U);
    msg.setSourceEntity(116U);
    msg.setDestination(63970U);
    msg.setDestinationEntity(52U);
    msg.action = 229U;
    msg.longain = 0.4323296619629815;
    msg.latgain = 0.4357987569537284;
    msg.bondthick = 4038455766U;
    msg.leadgain = 0.32936105578639907;
    msg.deconflgain = 0.41898531822728746;

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
    msg.setTimeStamp(0.3751238791771426);
    msg.setSource(48211U);
    msg.setSourceEntity(133U);
    msg.setDestination(12185U);
    msg.setDestinationEntity(109U);
    msg.err_mean = 0.7440843884895317;
    msg.dist_min_abs = 0.6026012209147936;
    msg.dist_min_mean = 0.12593000287636968;

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
    msg.setTimeStamp(0.780334040937347);
    msg.setSource(8657U);
    msg.setSourceEntity(82U);
    msg.setDestination(49392U);
    msg.setDestinationEntity(168U);
    msg.err_mean = 0.27646039383198195;
    msg.dist_min_abs = 0.3879911750955737;
    msg.dist_min_mean = 0.32541488592011203;

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
    msg.setTimeStamp(0.8425273771384141);
    msg.setSource(49396U);
    msg.setSourceEntity(176U);
    msg.setDestination(21114U);
    msg.setDestinationEntity(228U);
    msg.err_mean = 0.9859310292803326;
    msg.dist_min_abs = 0.7304285070245484;
    msg.dist_min_mean = 0.3292295519781381;

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
    msg.setTimeStamp(0.6306179597048754);
    msg.setSource(38736U);
    msg.setSourceEntity(60U);
    msg.setDestination(301U);
    msg.setDestinationEntity(192U);
    msg.action = 2U;
    msg.lon_gain = 0.7606370408665246;
    msg.lat_gain = 0.8339377985859651;
    msg.bond_thick = 0.38556605795958165;
    msg.lead_gain = 0.031340081065339476;
    msg.deconfl_gain = 0.36418382955798245;
    msg.accel_switch_gain = 0.18952995539466144;
    msg.safe_dist = 0.9086331329549646;
    msg.deconflict_offset = 0.039162276559629894;
    msg.accel_safe_margin = 0.8075667413799096;
    msg.accel_lim_x = 0.5824286005974451;

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
    msg.setTimeStamp(0.3362804960306053);
    msg.setSource(50947U);
    msg.setSourceEntity(69U);
    msg.setDestination(39994U);
    msg.setDestinationEntity(45U);
    msg.action = 62U;
    msg.lon_gain = 0.1745906412217778;
    msg.lat_gain = 0.8553213375506575;
    msg.bond_thick = 0.4576136431262666;
    msg.lead_gain = 0.7296704186315681;
    msg.deconfl_gain = 0.3946136425548482;
    msg.accel_switch_gain = 0.9771628367471086;
    msg.safe_dist = 0.9300016265613142;
    msg.deconflict_offset = 0.17322244701326828;
    msg.accel_safe_margin = 0.9796853660255515;
    msg.accel_lim_x = 0.03041710138501197;

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
    msg.setTimeStamp(0.3259568920292393);
    msg.setSource(40562U);
    msg.setSourceEntity(169U);
    msg.setDestination(37175U);
    msg.setDestinationEntity(186U);
    msg.action = 30U;
    msg.lon_gain = 0.9562188319111604;
    msg.lat_gain = 0.6685453683343666;
    msg.bond_thick = 0.41592082583188383;
    msg.lead_gain = 0.28087095538434226;
    msg.deconfl_gain = 0.5990017605488837;
    msg.accel_switch_gain = 0.9826083886842913;
    msg.safe_dist = 0.14064077575359235;
    msg.deconflict_offset = 0.9827944680404535;
    msg.accel_safe_margin = 0.23624854606170143;
    msg.accel_lim_x = 0.03850971155292948;

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
    msg.setTimeStamp(0.9436781497318432);
    msg.setSource(37236U);
    msg.setSourceEntity(111U);
    msg.setDestination(19773U);
    msg.setDestinationEntity(59U);
    msg.type = 224U;
    msg.op = 224U;
    msg.err_mean = 0.7913922397269956;
    msg.dist_min_abs = 0.3744790762897865;
    msg.dist_min_mean = 0.23102550377081144;
    msg.roll_rate_mean = 0.7073514026228559;
    msg.time = 0.7189788672102465;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 121U;
    tmp_msg_0.lon_gain = 0.13381703678650647;
    tmp_msg_0.lat_gain = 0.9405509001057193;
    tmp_msg_0.bond_thick = 0.847562658355732;
    tmp_msg_0.lead_gain = 0.12777169564318502;
    tmp_msg_0.deconfl_gain = 0.8345978386962777;
    tmp_msg_0.accel_switch_gain = 0.019403246205097036;
    tmp_msg_0.safe_dist = 0.9555621287714782;
    tmp_msg_0.deconflict_offset = 0.22733743633947956;
    tmp_msg_0.accel_safe_margin = 0.7319260944859047;
    tmp_msg_0.accel_lim_x = 0.462968670790069;
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
    msg.setTimeStamp(0.844604256075384);
    msg.setSource(34904U);
    msg.setSourceEntity(129U);
    msg.setDestination(63706U);
    msg.setDestinationEntity(214U);
    msg.type = 50U;
    msg.op = 111U;
    msg.err_mean = 0.10869797828303229;
    msg.dist_min_abs = 0.8511265867986533;
    msg.dist_min_mean = 0.86127040261588;
    msg.roll_rate_mean = 0.4351181740362079;
    msg.time = 0.3243149192693797;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 216U;
    tmp_msg_0.lon_gain = 0.7478564038706811;
    tmp_msg_0.lat_gain = 0.38209240393076704;
    tmp_msg_0.bond_thick = 0.9085530047466924;
    tmp_msg_0.lead_gain = 0.28426192479256807;
    tmp_msg_0.deconfl_gain = 0.5466861641178382;
    tmp_msg_0.accel_switch_gain = 0.4289568833919112;
    tmp_msg_0.safe_dist = 0.7860624100626787;
    tmp_msg_0.deconflict_offset = 0.6739463637038617;
    tmp_msg_0.accel_safe_margin = 0.13090443104260863;
    tmp_msg_0.accel_lim_x = 0.6899252034044249;
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
    msg.setTimeStamp(0.5588220424597711);
    msg.setSource(6466U);
    msg.setSourceEntity(147U);
    msg.setDestination(23946U);
    msg.setDestinationEntity(121U);
    msg.type = 47U;
    msg.op = 203U;
    msg.err_mean = 0.7213354223259604;
    msg.dist_min_abs = 0.9001202058157275;
    msg.dist_min_mean = 0.038042060711013015;
    msg.roll_rate_mean = 0.8671826205353321;
    msg.time = 0.6271422530236869;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 128U;
    tmp_msg_0.lon_gain = 0.34993923161081875;
    tmp_msg_0.lat_gain = 0.18508174802647415;
    tmp_msg_0.bond_thick = 0.35815312494990414;
    tmp_msg_0.lead_gain = 0.9660246014339919;
    tmp_msg_0.deconfl_gain = 0.4577328868324324;
    tmp_msg_0.accel_switch_gain = 0.2509082613960375;
    tmp_msg_0.safe_dist = 0.066681162315815;
    tmp_msg_0.deconflict_offset = 0.8794858243530594;
    tmp_msg_0.accel_safe_margin = 0.6592523918212886;
    tmp_msg_0.accel_lim_x = 0.81500132057244;
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
    msg.setTimeStamp(0.7680808054770432);
    msg.setSource(7108U);
    msg.setSourceEntity(9U);
    msg.setDestination(20991U);
    msg.setDestinationEntity(49U);
    msg.uid = 24U;
    msg.frag_number = 60U;
    msg.num_frags = 49U;
    const char tmp_msg_0[] = {124, 56, -17, -13, -29, 74, 82, -49, -126, -18, -82, 25, 71, 79, -127, 73, -25};
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
    msg.setTimeStamp(0.12307557336545483);
    msg.setSource(30565U);
    msg.setSourceEntity(253U);
    msg.setDestination(20821U);
    msg.setDestinationEntity(139U);
    msg.uid = 253U;
    msg.frag_number = 133U;
    msg.num_frags = 89U;
    const char tmp_msg_0[] = {-93, 94, -66, -92, -123, 76, -31, -76, 86, -97, 100, 6, 95, -98, -53, -21, -14, -106, -26, -54, 97, 38, -121, 58, 41, -81, 121, -9, -127, -126, 112, 119, -36, 102, 66, -68, 99, 106, -12, -56, 19, 115, -36, 61, 117, -48, 35, 122, 62, -103, 67, 15, 126, -70, 25, 67, 114, 53, 7, -50, -51, 48, -117, 70, -45, -121, 99, -38, 114, 88, 99, -5, -78, 52, -21, -106, 14, -101, -78, 27, -45, -37, 80, 84, -5, -46, 55, -15, -20, -82, -27, 99, 106, 52, -112, -12, -108, 95, -66, 0, -65, -54, -58, 35, 28, -122, 76, 52, -101, -90, -12, 117, -78, 58, -12, -40, 37, 69, -27, -67, 12, 10, -122, -62, -51, 70, -4, -45, 55, -4, 61, 32, -96, -102, -22, -80, -86, 96, -54, 23, -103, 113, 62, 46, 14, -31, -59, -17, -114, -39, -82, 44, -86, -55, 114, -69, 98, -21, 120, -96, -60, 37, -118, -66, 63, 74, 21, -61, -99, -7, 18, 44, -29, -3, -35, 55, -32, -120, -107, 97, -48, 106};
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
    msg.setTimeStamp(0.23880696892770337);
    msg.setSource(20008U);
    msg.setSourceEntity(27U);
    msg.setDestination(2156U);
    msg.setDestinationEntity(133U);
    msg.uid = 65U;
    msg.frag_number = 79U;
    msg.num_frags = 199U;
    const char tmp_msg_0[] = {-53, -63, -76, 114, 116, 98, 12, -56, 106, 121, -80, 27, -90, -100, -105, 67, 60, -98, 118, 41, 5, -54, -108, -21, 113, 109, 84, 107, 59, -122, -51, -5, 26, -43, 22, -28, 112, -101, 64, -33, -31, -57, -20, -41, -57, -123};
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
    msg.setTimeStamp(0.2623616055304404);
    msg.setSource(37384U);
    msg.setSourceEntity(63U);
    msg.setDestination(60218U);
    msg.setDestinationEntity(104U);
    msg.content_type.assign("RMMQQTBGPPOYCFILRQOHNJCVGGDFJNWLNRGNRAAJFDKGYPQMVFEKEXTHFXSBBRJISNDDNLYPPDPSIKIQJHACIEMHGSBKYTOEVKXCTSFZBTOWYMVLTAPXLWQAUUHXUCTHSEFYIVIRMZVJSQLZAJLOTAJALONDGKQSHIMNBIMVONREXPUQSEWURGKZEDUZGGKAUOZVZEWYYWVZHCWDITUTHSXFYBWWFXKZQPFLBUORDDMCCKPEA");
    const char tmp_msg_0[] = {90, 37, -103, -52, -59, -121, 105, -120, -59, -101, 91, 95, 27, -34, 49, -25, 88, -114, 16, 120, -97, -94, 48, 117, -65, 38, 10, 65, -30, 95, -77, -18, -114, -105, -70, 83, 99, 121, 121, -60, 27, 37, -56, -127, -9, 98, 17, -105, -45, 95, -58, 80, 96, 7, 16, 121, 110, 50, -9, -121, 70, -73, -44, 7, -93, -89, -114, 109, -89, -19, -14, 67, -61, 111, 10, 100, 85, -59, 29, 65, -108, 81, 93, 44, 21, 56, -107, -113, 88, -25, 82, -12, -125, -15, 38, -44, 106, 13, -50, 27, -122, 96, 119, 88, 39, -21, -119, -10, -55, -59, 81, -45, 86, -57, 16, -10, -119, -41, -43, 40, -86, 9, 60, -49, 41, 94, -122, -29, -98, 106, 75, 48, 11, 50, -42, 88, -38, 95, -100, -69, -116, -16, 87, -58, 121, -65, 17, 15, -128, 20, 64, 113, -82, -21, 111, 119, 36, -50, 65, -124, -126, -121, 35, 32, -37, -48, 18, -117, -24, 77, -53, -98, 95, 116, -18, 97, 84, -96, 64, 60, -125, 102, 46, -32, 119, 35, -85, 105, -87, -2, 52, -41, 97, -71, -110, -12, 9, -119, -85, -99, 46, -5, -34, 122, 54, 125, 25, 23, 21, -64, 82, -35, -98, 110, -101, -44, -7};
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
    msg.setTimeStamp(0.2346560819405279);
    msg.setSource(25363U);
    msg.setSourceEntity(200U);
    msg.setDestination(3802U);
    msg.setDestinationEntity(177U);
    msg.content_type.assign("RKCHMGLEIJOQRSNCFTXDEANOBTIWRJBDNCSWGBBLPLGFJBIYDAISWSBNYLESFSYQUQJRNCCRWGLGEUMJSRIPQDVMRBXWKNYGRQENXOOKYLTOIDPMGUYHWYVGCOKIHHVUQHGMVCTCWYZQVCRXDFUHJPLXKAZLKUMLWPDWXYZIZZEFCFHSMTSQVZPOTVAGSJUFNAOVQMHZVKZHFMPHABOKITDO");
    const char tmp_msg_0[] = {-15, -46, 40, -27, 32, 49, 34, 11, -56, 123, -23, 52, 84, -124, -22, 69, -118, -119, 1, 95, 47, -111, -14, 88, 90, -66, 66, -122, -68, 124, -6, -103, 110, 25, -114, 14, -37, -37, -112, 120, -120, -22, -4, -38, 113, -9, 64, 101, 47, 19, 16, 125, 66, 36, 86, 58, -9, -19, 11, -73, -124, 22, 79, 87, 63};
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
    msg.setTimeStamp(0.6997775166672751);
    msg.setSource(15566U);
    msg.setSourceEntity(20U);
    msg.setDestination(46269U);
    msg.setDestinationEntity(94U);
    msg.content_type.assign("QNFWTEILVHBJUNGEQUZFCHDKXGOINTNPPLNPCIDSUHXXQVLWZIHMANLPWGWZJDFACRJAAGNRTGVVZRKDTSLFXOEUWQTSGSBOLGDGZCUJUYPJOMRQSIJDDQHMCTVEMAWEKVCYYCZXOQYMIFMAKBXPZXPGHINFSYAKHRYFJOJBYMXEVFEYYZARKWCOTCFDOJRBIQLRMBRNWGCPZHDSZXBYSMRQBSHHPNTKAWVEUSLDBOJVBMU");
    const char tmp_msg_0[] = {31, 92, 47, 19, 95, -5, -11, 74, 52, -6, -94, -33, -100, -113, 111, -118, -74, -75, -39, 35, -74, -109, -125, 125, -16, -58, 98, -6, 63, -40, 68, 124, 113, -101, 73, 49, 11, -29, -96, 92, -72, 53, -82, -38, 58, -106, -51, -113, -95, 33, 32, 70, 109, -127, 20, -2, 55, -78, -112, -111, -66, 101, 109, -115, -72, -44, 76, -121, 90, 84, 66, 48, 45, -73, -43, 83, 101, 24, -69, -56, 7, 91, 57, -6, 60, 10, -1, -128, 124, -55, 13, -90, -30, -46, -46, -111, -113, -1, -87, -96, -44, 23, 21, -43, -32, -77, 101, 54, -108, 71, 23, -66, 36, 31, 84, 46, 114, 115, 104, -80, -80, 44, -4, -37, 4, -81, 108, -61, -34, 5, 63, 74, -115, -26, -57, -123, 54, 13, 67, 14, -88, 26, 6, 74, -38, 96, -61, 11};
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
    msg.setTimeStamp(0.4098820246524377);
    msg.setSource(19135U);
    msg.setSourceEntity(26U);
    msg.setDestination(48298U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.03389813924277796);
    msg.setSource(11263U);
    msg.setSourceEntity(91U);
    msg.setDestination(23768U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.19956982113236288);
    msg.setSource(37375U);
    msg.setSourceEntity(233U);
    msg.setDestination(61237U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.9826349831927426);
    msg.setSource(21692U);
    msg.setSourceEntity(121U);
    msg.setDestination(26429U);
    msg.setDestinationEntity(184U);
    msg.target = 37210U;
    msg.bearing = 0.0027594390817045067;
    msg.elevation = 0.18430606662723992;

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
    msg.setTimeStamp(0.5233992607225415);
    msg.setSource(39558U);
    msg.setSourceEntity(59U);
    msg.setDestination(1200U);
    msg.setDestinationEntity(78U);
    msg.target = 16483U;
    msg.bearing = 0.28761367476925603;
    msg.elevation = 0.31195453898458303;

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
    msg.setTimeStamp(0.19514817114032346);
    msg.setSource(63533U);
    msg.setSourceEntity(75U);
    msg.setDestination(5843U);
    msg.setDestinationEntity(46U);
    msg.target = 56564U;
    msg.bearing = 0.6227422195004327;
    msg.elevation = 0.057245887090545455;

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
    msg.setTimeStamp(0.7215431832307452);
    msg.setSource(47392U);
    msg.setSourceEntity(228U);
    msg.setDestination(3526U);
    msg.setDestinationEntity(134U);
    msg.target = 46868U;
    msg.x = 0.8250455885075492;
    msg.y = 0.8417145263639391;
    msg.z = 0.6186613114242475;

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
    msg.setTimeStamp(0.756364544854013);
    msg.setSource(12117U);
    msg.setSourceEntity(130U);
    msg.setDestination(52915U);
    msg.setDestinationEntity(130U);
    msg.target = 16099U;
    msg.x = 0.965163835201416;
    msg.y = 0.30233684196094845;
    msg.z = 0.6188301511127885;

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
    msg.setTimeStamp(0.4449307233719423);
    msg.setSource(49387U);
    msg.setSourceEntity(159U);
    msg.setDestination(44525U);
    msg.setDestinationEntity(182U);
    msg.target = 39176U;
    msg.x = 0.7306986751742257;
    msg.y = 0.5000511772762961;
    msg.z = 0.7316680338652477;

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
    msg.setTimeStamp(0.7387781425077343);
    msg.setSource(35902U);
    msg.setSourceEntity(165U);
    msg.setDestination(43300U);
    msg.setDestinationEntity(223U);
    msg.target = 38003U;
    msg.lat = 0.03867579002694388;
    msg.lon = 0.6573324601846698;
    msg.z_units = 247U;
    msg.z = 0.9695613714972136;

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
    msg.setTimeStamp(0.23331598498582296);
    msg.setSource(22437U);
    msg.setSourceEntity(185U);
    msg.setDestination(48944U);
    msg.setDestinationEntity(210U);
    msg.target = 52880U;
    msg.lat = 0.6197920469768098;
    msg.lon = 0.6208379118201224;
    msg.z_units = 69U;
    msg.z = 0.2937698130424379;

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
    msg.setTimeStamp(0.01918377084765477);
    msg.setSource(34940U);
    msg.setSourceEntity(77U);
    msg.setDestination(58102U);
    msg.setDestinationEntity(233U);
    msg.target = 35846U;
    msg.lat = 0.08692348615548862;
    msg.lon = 0.20734111756091644;
    msg.z_units = 121U;
    msg.z = 0.3273210651031986;

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
    msg.setTimeStamp(0.35355480432997255);
    msg.setSource(35619U);
    msg.setSourceEntity(189U);
    msg.setDestination(16421U);
    msg.setDestinationEntity(156U);
    msg.locale.assign("OWCOIVTNQRJEPTIFXTCQVWWWDZDYSLZRCDKGYPYATKKGSMXKKIQMTQUVKXYZZNDECPXEBVCDSMURH");
    const char tmp_msg_0[] = {-16, -17, -63, 73, -48, -46, 61, 62, -27, -30, -11, -42, 9, 66, -77, -69, -34, 72, 14, -36, 90, -90, -29, 81, 45, 76, 77, -19, 56, -32, -3, -59, -24, -96, -56, 106, 116, -25, 36, -40, -1, 22, 18, -119, -125, 70, 19, 89, 108, -39, -63, -48, -62, -84, 33, -14};
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
    msg.setTimeStamp(0.3643763487534648);
    msg.setSource(35832U);
    msg.setSourceEntity(157U);
    msg.setDestination(22040U);
    msg.setDestinationEntity(118U);
    msg.locale.assign("QRBZRVKOTRQXXZMGBZKQWTPCKEWTZTMARPPRHMQFLWHFMQOJJCWNGLSJLMYIZ");
    const char tmp_msg_0[] = {-79, 50, -91, -123, 6, -57, 67, -112, -64, -60, -67, 96, 69, 31, 9, -108, -85, 93, 0, -17, -28, 65, 100, 126, -80, 39, 9, -15, -18, -12, 62, 126, -126, -119, 105, -15, 120, 93, -9, -23, 120, -115, 29, -91, 94, 108, 25, 49, -87, 32, 123, 44, 123, 25, 105, -77, -89, 94, 67, -127, 15, 59, -50, -69, -120, 96, -39, 65, -79, -57, 72, 125, -60, 7, -126, -96, 120, -10, -104, -84, 83, -4, 70, -94, 99, -52, 82, 74, -31, -74, -26, 83, -97, -99, -46, -35, -121, -127, 81, 101, -116, 63, 108, 113, -77, -54, 57, -106, 71, 111, 46, 41, -48, 57, 111, 33, -89, 69, 83, 24, -2, -92, -52, 10, -54, -106, 3, -10, 111, 114, 99, 39, 123, 93, -73, 125, 123, -38, -73, 84, -13, 31, -30, -128, -41, -5, -66, -85, -2, 101, 81, -118, 92, 85, 93, 41, -107, 31, 22, 114, -32, 4, 108, -1, 65, -106, 73, 76, 90};
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
    msg.setTimeStamp(0.4937973689745263);
    msg.setSource(59627U);
    msg.setSourceEntity(184U);
    msg.setDestination(27351U);
    msg.setDestinationEntity(28U);
    msg.locale.assign("MFOJTZYNJYHHCQUWSHIRGLEUGGGZAIOCJQELCNKPJWCNXPUJWOVWXFSPRPSXAERIQKFQQSRLMZZZIOQTSTKRMYUQUDKGMBIMZYKOHYYTWZKWNXXVMTEEDCEDITUJLXARL");
    const char tmp_msg_0[] = {-50, 118, -54, -25, -60, 79, -123, 83, -113, 38, -70, -66, -86, 17, 93, 11, 23, 102, 97, 124, 42, -38, -97, -114, 17, -102, 63, 64, 111, -60, 124, -4, -19, -109, 54, 103, -56, 7, -1, -5, 90, 126, 126, 46, -35, 108, 94, -73, -113, 46, -9, -106, -25, 18, -23, -117, 120, -3, 118, -12, -3, 88, 63, 117, -122, -73, -6, 125, -48, 70, 95, 31, 25, -18, 90, 97, 110, -23, -68, 125, 120, -48, 96, -52, -128, -18, 8, -103, -52, -84, 51, 116, -51, -32, -81, -82, 41, -80, -84, -106, -3, -60, 34, 90, 49, -44, 102, 81, 82, 66, -47, 55, 95, -15, -111, -6, 80, -30, -37, 107, 107, 98, 17, -21, 37, 47, -123, 69, 68, -74, 62, 115, 12, -68, 2, -87, 70, -2, -34, 60, -121, -72, 85, 37, -56, 123, -6, -118, -30, 126, -116, -29, -78, -16, -28, 108, 107, 99, 95, -64, -16, 39, 47, -68, 4, 76, -65, 92, 83, -85, 46, 123, 5, -6};
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
    msg.setTimeStamp(0.9144408854242407);
    msg.setSource(51939U);
    msg.setSourceEntity(16U);
    msg.setDestination(1128U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.6470436361759572);
    msg.setSource(45544U);
    msg.setSourceEntity(148U);
    msg.setDestination(35607U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.5429010603022195);
    msg.setSource(41378U);
    msg.setSourceEntity(40U);
    msg.setDestination(13093U);
    msg.setDestinationEntity(90U);

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
    IMC::NecMsg msg;
    msg.setTimeStamp(0.052254527700357434);
    msg.setSource(49865U);
    msg.setSourceEntity(128U);
    msg.setDestination(33715U);
    msg.setDestinationEntity(72U);
    const char tmp_msg_0[] = {46, 117, 64, 99, 21, 59, 76, 101, -29, 47, 126, -53, -30, -114, -49, 72, -1, -111, -7, 25, -95, 94, 13, -97, 113};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NecMsg msg;
    msg.setTimeStamp(0.7216233251007204);
    msg.setSource(14070U);
    msg.setSourceEntity(143U);
    msg.setDestination(46873U);
    msg.setDestinationEntity(107U);
    const char tmp_msg_0[] = {111, -121, -57, 78, 25, -111, 91, 80, 0, -71, -11, 78, 110, -127, 49, 126, 76, -59, 91, -80, 56, -63, 24, -92, -60, 34, 88, 21, -12, -50, 115, 26, -96, -98, -60, 15, 63, -99, -73, -79, -35, 46, 52, -73, 95, 56, 99, -99, 2, 119, 119, 52, -35, -4, -101, -22, 37, 24, -53, 13, 73, -51, -90, 35, -118, -90, 69, -8, 89, 120, -125, 37, 63, -19, -99, 66, 54, 91, -120, 125, 26, 100, 124, -100, 93};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NecMsg msg;
    msg.setTimeStamp(0.8102852190454823);
    msg.setSource(24044U);
    msg.setSourceEntity(219U);
    msg.setDestination(23012U);
    msg.setDestinationEntity(253U);
    const char tmp_msg_0[] = {-127, 32, -123, 33, -71, -123, -68, 38, -17, 47, 112, 21, -125, -78, -112, -49, -110, 122, 23, -48, 93, -106, 125, 118, -100, 9, -81, 87, 86, -40, -104, 30, 3, -63, 97, 84, 6, 114, -115, -81, 83, 122, -127, -117, -57, 62, 14, -62, 72, -27, -22, -75, 91, 6, 62, 94, -5, 126, 20, -63, -20, 106, 4, -101, 14, -95, 81, 30, 25, 94, -31, -12, -99, -81, 74, -116, -50, 43, -53, 83, 122, 24, -123, 40, -72, -107, -71, 22, 116, -91, 113, -26, -14, 118, 79, 96, -58, 106, -22, 103, -27, -41, -30, -10, 98, 49, -19, 8, -21, 55, 5, 75, 122, -19, -30, 46, -70, -21, -36, -23, -84, 14, -110, -63, 69, 22, 82, 62, 62, 83, 20, 72, 74, -2, -45, -42, -100, -54, -41, 90, -84, 76, -67, -87, 9, 95, 94, 19, -52, -66, -107, -122, 101, 115, -59, -125, -30, -113, -39, -34, -71, -1, -101, 15, -36, -25, 0, -70, -43, -30, 67, -73, -94, -38, 60, 0, -87, -37, 31, 71, 20, -81, -58, 37, -19, -81, -4, -96, -103, 7, 125, 101, -62, 59, 104, 29, -59, -70, 95, -59, 15, 39, 78, 5, -121, 98, 58, 111, -112, 37, 126, 103, 26, -56, 5, 3, 54, -55, 97, 65, 70, 43, 41, 121, -45, 73, 42, -114, 83, -70, -78, 20, 29, 59, 126, -50, -60, 10, -120, -111, -22, 113, -119, 59, 77, 75, 67, 24, 120, 36};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NecMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.22455150016690073);
    msg.setSource(4984U);
    msg.setSourceEntity(166U);
    msg.setDestination(62016U);
    msg.setDestinationEntity(5U);
    msg.json.assign("JSNHCSOVOPISJAUCMEFLDUHRKYNTVKVTAKXLZWPOMASXTPLTKZUTLTOWIPVCCPYITXMKMZZEFMYQFZKAHPPHBZHDBQUHEAUWCXPJKQNJSLFIBJCOBUCYWDFBJRCYPQXOJCSVEGFG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.7482551237311804);
    msg.setSource(13175U);
    msg.setSourceEntity(120U);
    msg.setDestination(10932U);
    msg.setDestinationEntity(76U);
    msg.json.assign("GDJXHFNPNHTEAIIPLHADELFPIBLLQSAKCCVBWRYJRISZIQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::JsonObject msg;
    msg.setTimeStamp(0.16769317141570095);
    msg.setSource(38750U);
    msg.setSourceEntity(104U);
    msg.setDestination(58775U);
    msg.setDestinationEntity(41U);
    msg.json.assign("WIYOWPOWQCMQABEQICSTUHQMYRDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("JsonObject #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HighpassControlParcel msg;
    msg.setTimeStamp(0.25362331028862817);
    msg.setSource(10752U);
    msg.setSourceEntity(26U);
    msg.setDestination(9152U);
    msg.setDestinationEntity(233U);
    msg.highpass = 0.36791261013264076;
    msg.adot = 0.8520808989408009;
    msg.slope_compensation = 0.9041786938119153;
    msg.slope_compensation_difference = 0.122372768114832;
    msg.altitude = 0.44135130598099637;
    msg.auto_altitude = 0.059533847224082725;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HighpassControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HighpassControlParcel msg;
    msg.setTimeStamp(0.6127431133564906);
    msg.setSource(40403U);
    msg.setSourceEntity(153U);
    msg.setDestination(30225U);
    msg.setDestinationEntity(17U);
    msg.highpass = 0.5197856723707445;
    msg.adot = 0.5171872143476043;
    msg.slope_compensation = 0.41531382461266964;
    msg.slope_compensation_difference = 0.15791027078428488;
    msg.altitude = 0.5013055139074533;
    msg.auto_altitude = 0.32487505156717433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HighpassControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HighpassControlParcel msg;
    msg.setTimeStamp(0.320885042898824);
    msg.setSource(11523U);
    msg.setSourceEntity(217U);
    msg.setDestination(23208U);
    msg.setDestinationEntity(114U);
    msg.highpass = 0.5568024155247995;
    msg.adot = 0.13830210843717383;
    msg.slope_compensation = 0.14953016343853365;
    msg.slope_compensation_difference = 0.6244341469260956;
    msg.altitude = 0.6097784655093292;
    msg.auto_altitude = 0.46677579690155113;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HighpassControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconStatus msg;
    msg.setTimeStamp(0.3908993221206343);
    msg.setSource(58308U);
    msg.setSourceEntity(133U);
    msg.setDestination(31711U);
    msg.setDestinationEntity(116U);
    msg.remote_control_allowed = 186U;
    msg.remote_control_enabled = 178U;
    msg.remote_control_active = 174U;
    msg.depth_only_control_enabled = 215U;
    msg.direct_control_enabled = 58U;
    msg.return_to_closest_point_on_line = 158U;
    msg.on_shore_power = 222U;
    msg.latitude = 0.027699225914069814;
    msg.longitude = 0.01802095014116112;
    msg.depth = 0.7732409485291398;
    msg.depth_ref = 0.6261784458860187;
    msg.altitude = 0.5298798545036874;
    msg.altitude_ref = 0.24258008721045954;
    msg.pitch = 0.39222990370509514;
    msg.roll = 0.4496017598414339;
    msg.rpm = 0.045227453573454146;
    msg.rpm_ref = 0.9852896812334865;
    msg.speed = 0.5084845740628484;
    msg.speed_ref = 0.5055937985440766;
    msg.heading = 0.023903647084105417;
    msg.heading_rate = 0.05888546598772515;
    msg.heading_ref = 0.9001729044710235;
    msg.mission_state = 176U;
    msg.leg = 7889978545008490678;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconStatus msg;
    msg.setTimeStamp(0.6935413026518207);
    msg.setSource(40981U);
    msg.setSourceEntity(22U);
    msg.setDestination(15845U);
    msg.setDestinationEntity(45U);
    msg.remote_control_allowed = 57U;
    msg.remote_control_enabled = 101U;
    msg.remote_control_active = 204U;
    msg.depth_only_control_enabled = 108U;
    msg.direct_control_enabled = 216U;
    msg.return_to_closest_point_on_line = 0U;
    msg.on_shore_power = 129U;
    msg.latitude = 0.4800618512768907;
    msg.longitude = 0.5797172092311162;
    msg.depth = 0.8500764825994118;
    msg.depth_ref = 0.24169383215204732;
    msg.altitude = 0.626696819423499;
    msg.altitude_ref = 0.2115582917285509;
    msg.pitch = 0.5218016176644611;
    msg.roll = 0.22664355460851482;
    msg.rpm = 0.7841636935112845;
    msg.rpm_ref = 0.15756630379074998;
    msg.speed = 0.28614513624493;
    msg.speed_ref = 0.1707993352727144;
    msg.heading = 0.184669190392724;
    msg.heading_rate = 0.7999572082073442;
    msg.heading_ref = 0.02788969026606103;
    msg.mission_state = 233U;
    msg.leg = 5477847251686671532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconStatus msg;
    msg.setTimeStamp(0.6884106276703406);
    msg.setSource(29440U);
    msg.setSourceEntity(51U);
    msg.setDestination(5978U);
    msg.setDestinationEntity(98U);
    msg.remote_control_allowed = 35U;
    msg.remote_control_enabled = 97U;
    msg.remote_control_active = 96U;
    msg.depth_only_control_enabled = 173U;
    msg.direct_control_enabled = 246U;
    msg.return_to_closest_point_on_line = 174U;
    msg.on_shore_power = 240U;
    msg.latitude = 0.21504170498569186;
    msg.longitude = 0.11557425797783527;
    msg.depth = 0.171571767907006;
    msg.depth_ref = 0.6723861007159138;
    msg.altitude = 0.7419402905409689;
    msg.altitude_ref = 0.7723584870880752;
    msg.pitch = 0.4693110120506472;
    msg.roll = 0.029475170931526518;
    msg.rpm = 0.5268358242648532;
    msg.rpm_ref = 0.7943776337254413;
    msg.speed = 0.0874293528064527;
    msg.speed_ref = 0.4020253843023176;
    msg.heading = 0.21446799119782367;
    msg.heading_rate = 0.2488361940582572;
    msg.heading_ref = 0.49716904626809744;
    msg.mission_state = 163U;
    msg.leg = -5392717497751768145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconCommand msg;
    msg.setTimeStamp(0.7274705667625235);
    msg.setSource(15453U);
    msg.setSourceEntity(219U);
    msg.setDestination(51287U);
    msg.setDestinationEntity(163U);
    msg.name.assign("HTANCJBEGJCUAAJNPETRTUMQLRNGMIVTMXSYUKUPGQVNEPVCQHFHGFUBQVEKOWYHFQIXBLEMYGWHRDGZYWBQKVUECADOOTZXYWGSLOJNZJFJEYQLWANZVMXXSIF");
    msg.arg1 = 0.8473111415204191;
    msg.arg2 = 0.9532684619541003;
    msg.arg3 = 0.30900251500423537;
    msg.arg4 = 0.6922050742392675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconCommand msg;
    msg.setTimeStamp(0.5435817439756018);
    msg.setSource(56170U);
    msg.setSourceEntity(139U);
    msg.setDestination(35928U);
    msg.setDestinationEntity(243U);
    msg.name.assign("EGYSCOKVUXNVWRVIQNXYLQUWWGSJWXXSCFTQAQRWEIKNHOCRKAFDJEDNPJZTJMRUAWMOUQBRXGELXVATYGKIHJJHNVDMFYHUDLBCDMCFMDZJXVBPCIMFDXPKCDRZYHHQSETREZOIUEYWBSFEAUJKVAIJPYEQLZXNRLLOOKSFVSOIBRHN");
    msg.arg1 = 0.6441375501515432;
    msg.arg2 = 0.9604439459188818;
    msg.arg3 = 0.9911879380787499;
    msg.arg4 = 0.04567283541634404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconCommand msg;
    msg.setTimeStamp(0.46821024491533747);
    msg.setSource(14286U);
    msg.setSourceEntity(33U);
    msg.setDestination(27753U);
    msg.setDestinationEntity(96U);
    msg.name.assign("RNVNGMHDNQTSZTTVJPBRTIGYXIBFONKDFMCLNIMIEWBBFJDMHZJONUHJXZORBWHUJQISPVHGZCEIIGSUHFOTWQFOMKXWRLCLYJEMEFDVUBKOSRYXDAFCYXLARNLODZQTCUZTKZUYDPOVMQVSRBMPHCQDXAEKIHLNSGPWHSZXYEXCGPEZIZOAAXESPQMWWPQSWIGEUFDGKSRYJFVQYKKKPTVXL");
    msg.arg1 = 0.04178561536452208;
    msg.arg2 = 0.773531943124747;
    msg.arg3 = 0.5781018898995877;
    msg.arg4 = 0.42868703041290557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRanges msg;
    msg.setTimeStamp(0.26877354793338126);
    msg.setSource(22647U);
    msg.setSourceEntity(222U);
    msg.setDestination(13031U);
    msg.setDestinationEntity(180U);
    msg.direction = 40U;
    msg.range1 = 0.08294470204294746;
    msg.range2 = 0.8113575037573085;
    msg.range3 = 0.2088452773743369;
    msg.range4 = 0.7829079682001813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRanges #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRanges msg;
    msg.setTimeStamp(0.4183778669824507);
    msg.setSource(14540U);
    msg.setSourceEntity(15U);
    msg.setDestination(14596U);
    msg.setDestinationEntity(244U);
    msg.direction = 81U;
    msg.range1 = 0.6953322366205099;
    msg.range2 = 0.8424520516915568;
    msg.range3 = 0.09263222547441319;
    msg.range4 = 0.2188281830690818;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRanges #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRanges msg;
    msg.setTimeStamp(0.7723042717449302);
    msg.setSource(45755U);
    msg.setSourceEntity(228U);
    msg.setDestination(53680U);
    msg.setDestinationEntity(199U);
    msg.direction = 123U;
    msg.range1 = 0.5078442313182644;
    msg.range2 = 0.5034720285453892;
    msg.range3 = 0.8707428955624682;
    msg.range4 = 0.20517738433857258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRanges #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconMessage msg;
    msg.setTimeStamp(0.0807299914672085);
    msg.setSource(24080U);
    msg.setSourceEntity(121U);
    msg.setDestination(38682U);
    msg.setDestinationEntity(134U);
    msg.msg.assign("RBKSLMDYVAZGDXHYUVCLRUAGNTAJJHGNOXOXOXFDXIZRZDCVFECCSDAQNTEOWUMYPNZCOMWFOOXFQEFGVTZSDXHHIGCUEULSPCJEEZBHEZKNODBXHRQUB");
    msg.direction = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconMessage msg;
    msg.setTimeStamp(0.7620808660088779);
    msg.setSource(27046U);
    msg.setSourceEntity(171U);
    msg.setDestination(47630U);
    msg.setDestinationEntity(210U);
    msg.msg.assign("MTYCNFONSPGAYWDGSYBXYTJAVFKBJCFWUDRHRLGHSWARQHQTCVXRYKPWCGERFZLKZSZXRCQKPINTROXQAMFBLPPDBZRPLCNUNDEABOJWUXSOIVUGUCOEJM");
    msg.direction = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconMessage msg;
    msg.setTimeStamp(0.5086262130506062);
    msg.setSource(15833U);
    msg.setSourceEntity(60U);
    msg.setDestination(49289U);
    msg.setDestinationEntity(216U);
    msg.msg.assign("IPMGGEDOXTGUIYDPPKOIPLCNQUGIUMLGTXUHKNMDJUCZNNDSMRIWXUUVASWQGJASSDXMDWRVXABRRTWHWNZDCEWTGMBMNTPYVQLOLRHBEZVSBFEGQCULCWXBPJJQMWORJACITWYCAIONPKKZRKQMKQJEONELLLWVSCHHVXAJTYJNPKTZBCYBYOFBIXOFYQVNHXAVAQHDLFTQVRZKKPAGJMXYRHFRDIYHOIBHSZFZUGO");
    msg.direction = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconControlState msg;
    msg.setTimeStamp(0.6182856501386944);
    msg.setSource(35251U);
    msg.setSourceEntity(214U);
    msg.setDestination(35207U);
    msg.setDestinationEntity(75U);
    msg.state = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconControlState msg;
    msg.setTimeStamp(0.6841938778692617);
    msg.setSource(17364U);
    msg.setSourceEntity(14U);
    msg.setDestination(60842U);
    msg.setDestinationEntity(168U);
    msg.state = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconControlState msg;
    msg.setTimeStamp(0.739663348037071);
    msg.setSource(37078U);
    msg.setSourceEntity(187U);
    msg.setDestination(2639U);
    msg.setDestinationEntity(103U);
    msg.state = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdotDebug msg;
    msg.setTimeStamp(0.3573643195875268);
    msg.setSource(53083U);
    msg.setSourceEntity(107U);
    msg.setDestination(25462U);
    msg.setDestinationEntity(40U);
    msg.dt = 0.8770008619082065;
    msg.k_d = 0.7116601933787481;
    msg.range1 = 0.06506766735169645;
    msg.range2 = 0.07372876490206348;
    msg.range3 = 0.7486201666483848;
    msg.range4 = 0.4115301870017074;
    msg.u = 0.12466759467310573;
    msg.v = 0.9869979428753952;
    msg.w = 0.039897292778190985;
    msg.phi = 0.5549499246363234;
    msg.theta = 0.2935476386441551;
    msg.psi = 0.4262902300766508;
    msg.adot = 0.2601473307041694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdotDebug #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdotDebug msg;
    msg.setTimeStamp(0.2717549261133043);
    msg.setSource(53081U);
    msg.setSourceEntity(99U);
    msg.setDestination(59361U);
    msg.setDestinationEntity(94U);
    msg.dt = 0.9420887411234304;
    msg.k_d = 0.4063672955349119;
    msg.range1 = 0.15049656904331954;
    msg.range2 = 0.10069446627758682;
    msg.range3 = 0.5953858029294472;
    msg.range4 = 0.30980092740614984;
    msg.u = 0.525762947278111;
    msg.v = 0.572272837805009;
    msg.w = 0.11942450575562491;
    msg.phi = 0.7735040947629652;
    msg.theta = 0.5735131711250048;
    msg.psi = 0.8708609684705134;
    msg.adot = 0.10368256519272734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdotDebug #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdotDebug msg;
    msg.setTimeStamp(0.20993502121173024);
    msg.setSource(52271U);
    msg.setSourceEntity(13U);
    msg.setDestination(50623U);
    msg.setDestinationEntity(186U);
    msg.dt = 0.09233113828719242;
    msg.k_d = 0.7775332848131676;
    msg.range1 = 0.73272327918967;
    msg.range2 = 0.49429319507510017;
    msg.range3 = 0.5473454687518657;
    msg.range4 = 0.5985672992594603;
    msg.u = 0.1995038034130706;
    msg.v = 0.3961477376425586;
    msg.w = 0.363263132618156;
    msg.phi = 0.942754355461496;
    msg.theta = 0.6121619033902342;
    msg.psi = 0.43545269410318443;
    msg.adot = 0.7367789529623161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdotDebug #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedTime msg;
    msg.setTimeStamp(0.4981847741561173);
    msg.setSource(48747U);
    msg.setSourceEntity(7U);
    msg.setDestination(53576U);
    msg.setDestinationEntity(191U);
    msg.htime = 0.9319191090230361;
    msg.dt = 0.0185188108587937;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedTime #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedTime msg;
    msg.setTimeStamp(0.4201667034035069);
    msg.setSource(33660U);
    msg.setSourceEntity(181U);
    msg.setDestination(48033U);
    msg.setDestinationEntity(170U);
    msg.htime = 0.5143198040541359;
    msg.dt = 0.8524214449280776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedTime #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedTime msg;
    msg.setTimeStamp(0.15335806689329834);
    msg.setSource(47455U);
    msg.setSourceEntity(87U);
    msg.setDestination(43387U);
    msg.setDestinationEntity(139U);
    msg.htime = 0.5955192397517973;
    msg.dt = 0.3545723814044537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedTime #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredHeadingAngle msg;
    msg.setTimeStamp(0.5121608953535667);
    msg.setSource(25195U);
    msg.setSourceEntity(131U);
    msg.setDestination(37503U);
    msg.setDestinationEntity(210U);
    msg.value = 0.1953826541798943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingAngle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredHeadingAngle msg;
    msg.setTimeStamp(0.8530225010522551);
    msg.setSource(57796U);
    msg.setSourceEntity(198U);
    msg.setDestination(46361U);
    msg.setDestinationEntity(121U);
    msg.value = 0.0652146526596582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingAngle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredHeadingAngle msg;
    msg.setTimeStamp(0.8935580893666349);
    msg.setSource(48944U);
    msg.setSourceEntity(113U);
    msg.setDestination(15146U);
    msg.setDestinationEntity(55U);
    msg.value = 0.3161602374630532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingAngle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredHeadingWaypoint msg;
    msg.setTimeStamp(0.5014713371464476);
    msg.setSource(51424U);
    msg.setSourceEntity(27U);
    msg.setDestination(30352U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.6300855499998383;
    msg.lon = 0.24955655642914765;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredHeadingWaypoint msg;
    msg.setTimeStamp(0.6091331754647964);
    msg.setSource(17112U);
    msg.setSourceEntity(144U);
    msg.setDestination(41325U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.17592086641624327;
    msg.lon = 0.4499231618381374;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredHeadingWaypoint msg;
    msg.setTimeStamp(0.8807756289774566);
    msg.setSource(63523U);
    msg.setSourceEntity(50U);
    msg.setDestination(29914U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.8195428004457884;
    msg.lon = 0.11949810895025892;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredSpeed msg;
    msg.setTimeStamp(0.9046458565112051);
    msg.setSource(25058U);
    msg.setSourceEntity(49U);
    msg.setDestination(21099U);
    msg.setDestinationEntity(202U);
    msg.value = 0.7877398638072023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredSpeed msg;
    msg.setTimeStamp(0.7172055339412308);
    msg.setSource(40340U);
    msg.setSourceEntity(83U);
    msg.setDestination(41663U);
    msg.setDestinationEntity(153U);
    msg.value = 0.3959880788631016;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredSpeed msg;
    msg.setTimeStamp(0.007849996837244855);
    msg.setSource(42010U);
    msg.setSourceEntity(87U);
    msg.setDestination(23017U);
    msg.setDestinationEntity(225U);
    msg.value = 0.42596040519751965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredZ msg;
    msg.setTimeStamp(0.25163381124035566);
    msg.setSource(34632U);
    msg.setSourceEntity(169U);
    msg.setDestination(39865U);
    msg.setDestinationEntity(208U);
    msg.value = 0.9807046148548662;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredZ msg;
    msg.setTimeStamp(0.9046098201019497);
    msg.setSource(36194U);
    msg.setSourceEntity(163U);
    msg.setDestination(53769U);
    msg.setDestinationEntity(231U);
    msg.value = 0.7736857094681152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredZ msg;
    msg.setTimeStamp(0.4873322348762267);
    msg.setSource(1734U);
    msg.setSourceEntity(133U);
    msg.setDestination(44678U);
    msg.setDestinationEntity(114U);
    msg.value = 0.1956248281940235;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredZ #2", msg == *msg_d);
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
