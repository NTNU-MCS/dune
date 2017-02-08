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
// IMC XML MD5: 8805f1c931380756faddc280e1b0377f                            *
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
    msg.setTimeStamp(0.7968172684129073);
    msg.setSource(11702U);
    msg.setSourceEntity(54U);
    msg.setDestination(12453U);
    msg.setDestinationEntity(95U);
    msg.state = 88U;
    msg.flags = 39U;
    msg.description.assign("GZMXFCWAVHGZXHTINOTZCKRJAKANGUBNTVNXYPLVQHOLWMPYFWQGAYZGLYDEWDKLKDRRAAOTYSJXOQWGFTYEPDBXQWRKKDQECAWTXOQREFPSCMDZNVATMNFVFBICRDJUCMSSSJUBIMKBLBBHBIDHJWLPUEUSUWIVXEISCIPDLKCJELQNCOYJPMMATGREARBOSFTMUSTRVFZHNJPGZJLCXPFWKQYHOHOVEIEVY");

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
    msg.setTimeStamp(0.6156015591922277);
    msg.setSource(203U);
    msg.setSourceEntity(147U);
    msg.setDestination(60356U);
    msg.setDestinationEntity(147U);
    msg.state = 5U;
    msg.flags = 158U;
    msg.description.assign("XTJRKEDOAHBMETAKVXFTJQARRNAOAFTGSABNZMSGJAUNHYMFCWIUKRBZDTVUIOGJDSFBBHGPDOQCUPJKOTQPOUCHNPEVEPCZWJJLYNTAPDGSKSVWRHZOOZBYICBSDMNKGXXEFNXLHGVIRWIRADMQHMMURHZUGFSRFLYXIZNIHUYETKXCDOTELRLSEVWJQPJWZMKLNLCTQPUSCVWCIDFZVA");

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
    msg.setTimeStamp(0.32450169819141506);
    msg.setSource(54787U);
    msg.setSourceEntity(147U);
    msg.setDestination(27135U);
    msg.setDestinationEntity(228U);
    msg.state = 152U;
    msg.flags = 237U;
    msg.description.assign("ZRFCGYTHKOBGSZDNIBXLEIMBGFDNJLJKKZTBWPYMXMRAGHYYRYOVWVLZBWZBBQWONIDOXXDSXXHWUXOHWECBQZAHASMDHXDIHCRVOJSSQSJJAYYLJXEMGLDAATKEIJFTVCSRUVANREJQVNOWINFFDQECLUKFEUL");

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
    msg.setTimeStamp(0.7708770886800992);
    msg.setSource(14486U);
    msg.setSourceEntity(113U);
    msg.setDestination(62806U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.04173662781181997);
    msg.setSource(63485U);
    msg.setSourceEntity(250U);
    msg.setDestination(13762U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.9640575522136424);
    msg.setSource(30784U);
    msg.setSourceEntity(49U);
    msg.setDestination(61833U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.9327523191401097);
    msg.setSource(2458U);
    msg.setSourceEntity(153U);
    msg.setDestination(50856U);
    msg.setDestinationEntity(51U);
    msg.id = 149U;
    msg.label.assign("WYXUHNDSZGWUTMJGDMGDPSPNBSQVBGEJGUTNLFUZAKDBUQXETHTCKIHQZBDSCAUFJILBIAPEQXUNBDLKHXHEOTPJNFTIJNQAAVYRDPWVMQEAWCMSYAYPAZYSHRRFPJYCKWWVDIZURTZQBREGHXVFLEZIMBMNVGERQZII");
    msg.component.assign("PAJGRVRFDLJODXBUVJQLZIPEOMPCVMRYRZWBTIGXQTTHTKBLRZDLPVITYZGTXWKOZOIBTUJMWCHAHENXMDHKNIUZJEAWDYPCQWUWSPHLKQWBVSBUEFNTMQVLMFNEHDAEBOPROGYYTUKGGNTFGAZCIVCIXRKZFSUAYSQPBDEEXFGRQRDMVIKBOCAGSOCSWNVGFNAYQQEUSOHXHUOYHSLDWNXVUSFYKAJQMLIXMAFCJPMKLIFJZKCWZD");
    msg.act_time = 40758U;
    msg.deact_time = 64916U;

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
    msg.setTimeStamp(0.33551086589279044);
    msg.setSource(56248U);
    msg.setSourceEntity(246U);
    msg.setDestination(2607U);
    msg.setDestinationEntity(224U);
    msg.id = 123U;
    msg.label.assign("ALDNRKZOBZOSPBJAXRLCATLQOIHRLKTTBQFYEGQKKHMJBFLRHAHSGHDUJXXJNVKRHGPSLSAQEVPYTFOHCKUWLWPFZSCYWMYXWFBMENYIDNSBOHIUCSVNWO");
    msg.component.assign("PSJOKYMUMVQLJEITDFYZZ");
    msg.act_time = 39371U;
    msg.deact_time = 23208U;

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
    msg.setTimeStamp(0.4960715748456268);
    msg.setSource(59580U);
    msg.setSourceEntity(195U);
    msg.setDestination(53652U);
    msg.setDestinationEntity(243U);
    msg.id = 188U;
    msg.label.assign("KYMFNANAEEIGVJSUSIEUWLUAYKQNHYQQTDHUVSWUC");
    msg.component.assign("JYKOHHBSNWIORQUCDMGUODITUEEZKIORAVXONDLEVJRDCARWMBWRNAIPSZCPMTVUYHFCTLDPNHNUZAODSVPXXFF");
    msg.act_time = 39563U;
    msg.deact_time = 39863U;

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
    msg.setTimeStamp(0.7044071002775179);
    msg.setSource(42427U);
    msg.setSourceEntity(99U);
    msg.setDestination(7572U);
    msg.setDestinationEntity(183U);
    msg.id = 84U;

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
    msg.setTimeStamp(0.9083004367127449);
    msg.setSource(34973U);
    msg.setSourceEntity(34U);
    msg.setDestination(32971U);
    msg.setDestinationEntity(197U);
    msg.id = 157U;

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
    msg.setTimeStamp(0.672444303210011);
    msg.setSource(56671U);
    msg.setSourceEntity(251U);
    msg.setDestination(15368U);
    msg.setDestinationEntity(184U);
    msg.id = 193U;

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
    msg.setTimeStamp(0.2597499052487947);
    msg.setSource(9758U);
    msg.setSourceEntity(73U);
    msg.setDestination(6795U);
    msg.setDestinationEntity(22U);
    msg.op = 192U;
    msg.list.assign("KKEYTLAMSSENRJSOYKUUGHDJVCEXXVUQDNUEMPTUIPUMYBOCKAKFYVMXNIVIRNCPSWIWJMGEZHGHXVBLTVNXOVASEJFBXGSWWCWQNRDEDRFQJPTYSBYBQQVTKIJMIDLPQRFBRLIARHPGWZUNYZMDEFHHLCDGDLTZZAAQOKOOTDGLLAUGSYQZITKIZJXOURHHTXFR");

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
    msg.setTimeStamp(0.7404366929917007);
    msg.setSource(6359U);
    msg.setSourceEntity(0U);
    msg.setDestination(51237U);
    msg.setDestinationEntity(100U);
    msg.op = 112U;
    msg.list.assign("MACHDXYMEYGNQI");

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
    msg.setTimeStamp(0.5862473448696444);
    msg.setSource(4797U);
    msg.setSourceEntity(173U);
    msg.setDestination(20998U);
    msg.setDestinationEntity(12U);
    msg.op = 251U;
    msg.list.assign("IUIVMZOEABNYFROXGHHHAFWOVQKZVYEPQEBDUBNPZWWCOO");

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
    msg.setTimeStamp(0.8491245737462337);
    msg.setSource(50240U);
    msg.setSourceEntity(67U);
    msg.setDestination(61569U);
    msg.setDestinationEntity(110U);
    msg.value = 146U;

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
    msg.setTimeStamp(0.8639730213495058);
    msg.setSource(18775U);
    msg.setSourceEntity(200U);
    msg.setDestination(30492U);
    msg.setDestinationEntity(49U);
    msg.value = 238U;

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
    msg.setTimeStamp(0.9239867628521473);
    msg.setSource(30814U);
    msg.setSourceEntity(228U);
    msg.setDestination(9492U);
    msg.setDestinationEntity(230U);
    msg.value = 44U;

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
    msg.setTimeStamp(0.21827405453156712);
    msg.setSource(41587U);
    msg.setSourceEntity(230U);
    msg.setDestination(38922U);
    msg.setDestinationEntity(207U);
    msg.consumer.assign("LYLXAUKRCDHXLUPTPDDAUUBPNBQJFYYEGJMLWNKEUCUUBIEHBSXNANEOYXDTFSIWXRNMTAVBSHIDJTQPGHUCMTORSIHAFHKINVSIABAGQGRYVPKOOLYAWILXXWQITJMHRWGEQOJNPZFRFCESLDBISZWFGCQYZCDZCQGRTZOKHMEOBKNRMKCWJZSZOGKQLBAGLWLVJVDFFNY");
    msg.message_id = 16301U;

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
    msg.setTimeStamp(0.19795624943205858);
    msg.setSource(39633U);
    msg.setSourceEntity(59U);
    msg.setDestination(61129U);
    msg.setDestinationEntity(137U);
    msg.consumer.assign("YNLRBHQSIFGCINJGFZMWLATWDBWNGXBJPAOIDVXJQISAZSFFEUYSUVNXWOQNMSZXBZQPOPGHXNJKEKCKASRTQHAEDBWVCELYV");
    msg.message_id = 10098U;

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
    msg.setTimeStamp(0.63637792426034);
    msg.setSource(46907U);
    msg.setSourceEntity(12U);
    msg.setDestination(39128U);
    msg.setDestinationEntity(60U);
    msg.consumer.assign("XDSPTQZOQTCYODSZULHIECOUVHRJKIHOVPYPWJDCU");
    msg.message_id = 43425U;

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
    msg.setTimeStamp(0.031672573528185866);
    msg.setSource(56561U);
    msg.setSourceEntity(46U);
    msg.setDestination(4817U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.28472690595555594);
    msg.setSource(63397U);
    msg.setSourceEntity(95U);
    msg.setDestination(14738U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.6891602900445529);
    msg.setSource(9852U);
    msg.setSourceEntity(229U);
    msg.setDestination(57168U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.9405746761053255);
    msg.setSource(39249U);
    msg.setSourceEntity(158U);
    msg.setDestination(50475U);
    msg.setDestinationEntity(146U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.5722352308974618);
    msg.setSource(12544U);
    msg.setSourceEntity(94U);
    msg.setDestination(48833U);
    msg.setDestinationEntity(145U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.7145214894782208);
    msg.setSource(29155U);
    msg.setSourceEntity(85U);
    msg.setDestination(28683U);
    msg.setDestinationEntity(53U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.7844325747106857);
    msg.setSource(60593U);
    msg.setSourceEntity(81U);
    msg.setDestination(8429U);
    msg.setDestinationEntity(9U);
    msg.total_steps = 180U;
    msg.step_number = 71U;
    msg.step.assign("ALKYMWIENHNGEUSFNUDZPVAIAJBGYVAZVQXINQJFERBPTOADGKSUSPGMMFZZSPSWLFBATZFMBCHGBLBTXOPIJIMNEYDQHEXDTHDBYERYCWFFWZLDTKSMGYUOCLKZQRBVQPPSTAHLKUCNSWOMIOWXWDMZJNVUTBXJXCJAHF");
    msg.flags = 79U;

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
    msg.setTimeStamp(0.18525960493841154);
    msg.setSource(43532U);
    msg.setSourceEntity(85U);
    msg.setDestination(29990U);
    msg.setDestinationEntity(168U);
    msg.total_steps = 106U;
    msg.step_number = 141U;
    msg.step.assign("XJVWYXOEPDXYHTHQYOGFZUICIMOEYEUJVFKDAWEOYKTJUDXNPPMTHDMGVYVUIMRLLGJXLCMFJHNTTKKMDVERFLFZAQZMWQLAVCNSLCBQOCZZGTSBOGPWBXKCTSINBVER");
    msg.flags = 3U;

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
    msg.setTimeStamp(0.23673647955217036);
    msg.setSource(20104U);
    msg.setSourceEntity(57U);
    msg.setDestination(8820U);
    msg.setDestinationEntity(57U);
    msg.total_steps = 16U;
    msg.step_number = 229U;
    msg.step.assign("RMWMIOWLAFWLKYXSNQZIBHIUTXAAWKAMWISCHABCJFQFKBQRHXYTKABNWUEVCZSOZIDOLOOPVBHXCQJTLVVWPRRLMPTNLKQWMDESIZXSDZAMREZWFDYRIZCXBP");
    msg.flags = 164U;

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
    msg.setTimeStamp(0.9840126823512548);
    msg.setSource(64335U);
    msg.setSourceEntity(208U);
    msg.setDestination(61501U);
    msg.setDestinationEntity(219U);
    msg.state = 186U;
    msg.error.assign("XQWKSHJTBTKPIECQIOBTXICZRWHQWVRSXQPOGNQZJULQYGFMNSAQHAQHBAGAPPRGAIPBMDSCDB");

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
    msg.setTimeStamp(0.13903428822416342);
    msg.setSource(2U);
    msg.setSourceEntity(166U);
    msg.setDestination(2288U);
    msg.setDestinationEntity(101U);
    msg.state = 218U;
    msg.error.assign("YFROMLOWUGMDNOVTIVKCLXIJTWPFLUVXQHZYFHKJZNSUNGAYDWQJJNOZVMFJORSEMSATXXQVPNTZLPIBVHEGMWDNQSQWRKCZLGDTKRLHRAAHKDUKUQAOPTBTWBNPKRWEKFEGCAYHLXGSHIXCBEYQXMEQADJIBZUYR");

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
    msg.setTimeStamp(0.07181834120738273);
    msg.setSource(52977U);
    msg.setSourceEntity(138U);
    msg.setDestination(14868U);
    msg.setDestinationEntity(209U);
    msg.state = 88U;
    msg.error.assign("RVDQHOHLREKSDPMUEYJGPPOQOJLUOITLUKLPIKODXNTXZBADGEAXSXIBLEFBWAIUNKQIVBIGFVGTYIWPJCWBSYIMQNESMFXNCJSQDHERKNTMWMZGWHHZMQRVCACADANURSFTJWZ");

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
    msg.setTimeStamp(0.9979307366961496);
    msg.setSource(22358U);
    msg.setSourceEntity(251U);
    msg.setDestination(53515U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.15591272073688778);
    msg.setSource(435U);
    msg.setSourceEntity(206U);
    msg.setDestination(9192U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.25372404821765115);
    msg.setSource(44456U);
    msg.setSourceEntity(98U);
    msg.setDestination(47153U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.09275758007735202);
    msg.setSource(34611U);
    msg.setSourceEntity(65U);
    msg.setDestination(55505U);
    msg.setDestinationEntity(57U);
    msg.op = 178U;
    msg.speed_min = 0.5951228386357542;
    msg.speed_max = 0.9904675148891511;
    msg.long_accel = 0.3386151729458772;
    msg.alt_max_msl = 0.7948040635764124;
    msg.dive_fraction_max = 0.2581206684498949;
    msg.climb_fraction_max = 0.2782141977411614;
    msg.bank_max = 0.32062579708294037;
    msg.p_max = 0.29608529567034714;
    msg.pitch_min = 0.9776710361585206;
    msg.pitch_max = 0.7605938439377883;
    msg.q_max = 0.3763641066388206;
    msg.g_min = 0.10711687963773897;
    msg.g_max = 0.08073773589896371;
    msg.g_lat_max = 0.45810029136127406;
    msg.rpm_min = 0.42501508279092237;
    msg.rpm_max = 0.6803685421829491;
    msg.rpm_rate_max = 0.8330049358143962;

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
    msg.setTimeStamp(0.7470179396265703);
    msg.setSource(19676U);
    msg.setSourceEntity(28U);
    msg.setDestination(23277U);
    msg.setDestinationEntity(73U);
    msg.op = 66U;
    msg.speed_min = 0.8929924800415422;
    msg.speed_max = 0.8737090358589129;
    msg.long_accel = 0.2716409308517852;
    msg.alt_max_msl = 0.5215645677496724;
    msg.dive_fraction_max = 0.5102902387995166;
    msg.climb_fraction_max = 0.5039192063231503;
    msg.bank_max = 0.39008433860737923;
    msg.p_max = 0.32801085754601145;
    msg.pitch_min = 0.014988978231220695;
    msg.pitch_max = 0.2340583300547585;
    msg.q_max = 0.8500158297122196;
    msg.g_min = 0.7396088086242529;
    msg.g_max = 0.11786528567057897;
    msg.g_lat_max = 0.6849693236589564;
    msg.rpm_min = 0.7647465495684331;
    msg.rpm_max = 0.6359864102259912;
    msg.rpm_rate_max = 0.2217651520840278;

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
    msg.setTimeStamp(0.5973888925462906);
    msg.setSource(45629U);
    msg.setSourceEntity(169U);
    msg.setDestination(24238U);
    msg.setDestinationEntity(113U);
    msg.op = 196U;
    msg.speed_min = 0.07467000059099782;
    msg.speed_max = 0.04741390847034399;
    msg.long_accel = 0.413766121215808;
    msg.alt_max_msl = 0.5303736982693735;
    msg.dive_fraction_max = 0.07033985893326578;
    msg.climb_fraction_max = 0.4606447602318394;
    msg.bank_max = 0.03312798440322484;
    msg.p_max = 0.8862686521055353;
    msg.pitch_min = 0.14700893640096013;
    msg.pitch_max = 0.5437184506558166;
    msg.q_max = 0.91690265822817;
    msg.g_min = 0.493711254735565;
    msg.g_max = 0.29752717269884665;
    msg.g_lat_max = 0.8916974580721255;
    msg.rpm_min = 0.02589362526870742;
    msg.rpm_max = 0.9060332400598785;
    msg.rpm_rate_max = 0.11214224150773677;

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
    msg.setTimeStamp(0.5610299132504969);
    msg.setSource(33109U);
    msg.setSourceEntity(94U);
    msg.setDestination(25218U);
    msg.setDestinationEntity(248U);
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 73U;
    tmp_msg_0.plan_id.assign("LAIZIYOPXDKQANPDDEGZHEITMFBJDSKLUBECGDWUQQZDLROWVAUECBHEKOCHOXL");
    tmp_msg_0.comm_level = 99U;
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
    msg.setTimeStamp(0.700077759484184);
    msg.setSource(3155U);
    msg.setSourceEntity(90U);
    msg.setDestination(44318U);
    msg.setDestinationEntity(167U);
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 107U;
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
    msg.setTimeStamp(0.9159897176933827);
    msg.setSource(20870U);
    msg.setSourceEntity(230U);
    msg.setDestination(47579U);
    msg.setDestinationEntity(98U);
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.049890857381870934;
    tmp_msg_0.beam_height = 0.2871339269236155;
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
    msg.setTimeStamp(0.794135210812288);
    msg.setSource(57910U);
    msg.setSourceEntity(126U);
    msg.setDestination(20832U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.20507182598417562;
    msg.lon = 0.2811343339011455;
    msg.height = 0.5513009495418041;
    msg.x = 0.2690438598055701;
    msg.y = 0.8001346705386387;
    msg.z = 0.09773424034240086;
    msg.phi = 0.2780216337194362;
    msg.theta = 0.2802074350371807;
    msg.psi = 0.607417807457496;
    msg.u = 0.9083680550384956;
    msg.v = 0.8282397377683316;
    msg.w = 0.43595522229401706;
    msg.p = 0.8052883085012985;
    msg.q = 0.3385648849310561;
    msg.r = 0.07175887428511885;
    msg.svx = 0.5006337554305197;
    msg.svy = 0.23376347022175803;
    msg.svz = 0.9244268816795959;

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
    msg.setTimeStamp(0.5360782140837174);
    msg.setSource(42468U);
    msg.setSourceEntity(73U);
    msg.setDestination(29010U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.8186606322978065;
    msg.lon = 0.20175420676411615;
    msg.height = 0.2095845570881446;
    msg.x = 0.9476337677517224;
    msg.y = 0.2057853236867231;
    msg.z = 0.19989912124205123;
    msg.phi = 0.7741076556071476;
    msg.theta = 0.16221077118717064;
    msg.psi = 0.2888193390842614;
    msg.u = 0.5731557071633743;
    msg.v = 0.931460793947838;
    msg.w = 0.4070999730330357;
    msg.p = 0.2265777723173641;
    msg.q = 0.2499554244500466;
    msg.r = 0.11180193848437958;
    msg.svx = 0.3409757175442767;
    msg.svy = 0.36187095313084305;
    msg.svz = 0.5016519536342678;

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
    msg.setTimeStamp(0.15706939932108255);
    msg.setSource(39569U);
    msg.setSourceEntity(233U);
    msg.setDestination(32032U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.41807553251869933;
    msg.lon = 0.8627348632112853;
    msg.height = 0.2204839207462289;
    msg.x = 0.47432889913953435;
    msg.y = 0.48495823421937945;
    msg.z = 0.6929901859187595;
    msg.phi = 0.6948189915514282;
    msg.theta = 0.052929573916570494;
    msg.psi = 0.4747366655959979;
    msg.u = 0.7166755897213095;
    msg.v = 0.9014089327779068;
    msg.w = 0.1763883468153601;
    msg.p = 0.9108927874455515;
    msg.q = 0.24743233563384592;
    msg.r = 0.020542598018407077;
    msg.svx = 0.43397958721075447;
    msg.svy = 0.9643118509076457;
    msg.svz = 0.6687638562454634;

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
    msg.setTimeStamp(0.9653655240227309);
    msg.setSource(50473U);
    msg.setSourceEntity(157U);
    msg.setDestination(10454U);
    msg.setDestinationEntity(56U);
    msg.op = 72U;
    msg.entities.assign("FGZDDBTFRHSJIVQATGKYPYMRHGAHFQZLHVRQFDOADDRLKMLBVCSXTENEKAIUGPTQOSYHMLPZSCWTBXNJJFOGNWSCRRBQSUDEJKICYCFKJSPYGLBAOKIWMXTQOYUNSLXNDXUJHMNPXF");

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
    msg.setTimeStamp(0.43452988435014106);
    msg.setSource(58192U);
    msg.setSourceEntity(115U);
    msg.setDestination(30353U);
    msg.setDestinationEntity(92U);
    msg.op = 143U;
    msg.entities.assign("CTWSZKMLMSPIGGYJNSSODVDUJHRATOEEEEZPAYOVNENRH");

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
    msg.setTimeStamp(0.8509890470372681);
    msg.setSource(53774U);
    msg.setSourceEntity(119U);
    msg.setDestination(52791U);
    msg.setDestinationEntity(167U);
    msg.op = 46U;
    msg.entities.assign("EAWXAKTRHZUZJZCQYSCFUNHXUJVLEXUFRMBRBKARZEQKPKDWTTCGJOGDKKYBSCXULWNIBFINAESONJCROFOFEJMZAQBVIQJRGPHGYPSM");

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
    msg.setTimeStamp(0.7357783362309589);
    msg.setSource(49308U);
    msg.setSourceEntity(146U);
    msg.setDestination(9080U);
    msg.setDestinationEntity(101U);
    msg.type = 130U;
    msg.speed = 11776U;
    const char tmp_msg_0[] = {-86, -123, -94, -104, 87, 32, -92, 97, -114, -32, -72, -39, -108, -104, -116, 46, 33, 60, -25, 114, 33, -104, 79, 71, 99, -107, 87, 126, 58, 106, -103, -11, -49, -36, -104, -66, 61, 96, -90, -83, 77, 7, -9, 35, -53, 84, 90, -23, -27, 45, -46, 123, 90, -77, 64, 53, -110, 64, -34, 19, 107, 74, -13, 94, 74, 51, 103, 84, 50, 106, -47, -122, 107, -39, -125, -72, 11, 119, 102, 88, -31, -31, 66, -45, -52, -49, -7, 60, 119, 28, 54, -43, -92, 73, -114, 118, -77, 33, -28, -50, 54, -96, 56, -97, -60, 87, 77, -94, 23, 66, -1, -10, 6, -12, 26, 113, 80, 102, -9, 57, -61, -118, -50, -111, -68, 97};
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
    msg.setTimeStamp(0.7653916148251085);
    msg.setSource(45707U);
    msg.setSourceEntity(113U);
    msg.setDestination(34040U);
    msg.setDestinationEntity(194U);
    msg.type = 94U;
    msg.speed = 12878U;
    const char tmp_msg_0[] = {-65, -72, 94, -113, 1, -87, -51, 62, -60, 21, 117, -99, -68, 118, -49, 67, -4, -74, -31, 119, -33, -71, 98, 10, -116, 33, -109, -71, -76, -105, 35, 34, 40, 54, 34, -33, -11, 112, -101, -95, 33, -15, 35, -29, -108, 71, -27, -17, -92, 6, -5, -30, -128, -16, -123, -55, -106, 88, 58, 18, -81, 34, -22, -53, -25, -37, 103, 30, 79, 72, 101, 38, 48, 12, 80, 64, -123, -51, 64, 76, -52, 110, 111, 23, -20, -93, -47, -34, 23, 44, -3, 13, 90, -122, -95, 74, -70, -107, -78, 50, 9, -107, 64, -59, -45, 98, 36, 6, 66, -89, 22, -63, -78, -61, -29, 72, 125, -23, -2, -98, -24, 89, -86, 106, -119, -36, 5, 112, 54, 11, 124, 75, -68, 24, -119, 111, 92, 71, -20, -25, 70, -1, -88, -57, -69, -97, 16, -116, -90, -101, 41, -42, -93, -23, 112, -69, 116, 24};
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
    msg.setTimeStamp(0.04552127562280006);
    msg.setSource(44626U);
    msg.setSourceEntity(102U);
    msg.setDestination(37315U);
    msg.setDestinationEntity(137U);
    msg.type = 232U;
    msg.speed = 57304U;
    const char tmp_msg_0[] = {75, -95, -66, 74, -110, 19, -99, -44, 74, -12, -76, -104, 83, 84, -71, -36, -13, 68, 26, -114, 40, -128, -51, 98, 20, -80, -105, -115, -90, 102, -102, -78, 28, -57, -22, -79, 80, -25, 32, -99, -117, -87, 77, -92, -107, 4, -106, -19, -47, 65, 15, 1, 7, 53, 2, 67, 66, -4, -71, -60, 6, -125, -46, -25, -87, -73, -121, -71, -69, 53, -11, 46, -32, 7, 27, 94, 38, 3, 92, 68, -18, 69, 43, -13, -38, 85, -22, -88, -41, -98, 64, -110, -77, 6, -82, 79, 41, -14, 69, -29, -122, -80, 74, -86, -101, 23, -90, 92, 23, 94, 97, 58, -68, 110, -71, 58, -17, -50, 86, 96, 69, 37, -98, -124, 98, 60, -124, -45, -64, -11, 91, 17, 80, -115, -102, -51, -92, -120, -74, -26, 65, -123, 69, -105, -73, -92, 60, -45, 88, -55, -118, -7, -35, -70, 121, -69, -75, -31, -60, 84, -73, 91, 55, 100, 115, 45, 98, -112, 20, 61, 125, 36, -126, 63, 103, -122, 82, 0, 35, -65, 44, -87, 106, 49, -99, 94, -119, 30, 57, -73, -85, -120, -41, 40, -78, 49, 32, -9, 23, 75, -11, 125, -108, 11, 19, 31, -30, -4, -41, 105, -101, 106, -23, -50, 122, -18, 112, 60, -25, -39, 34, -27, 100, -66, 97, -34, 120, -85, 112, -87, -51, -68, 35, 57, 2, -89, -82, 63, -36, -4, -42, 112};
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
    msg.setTimeStamp(0.8043466320658893);
    msg.setSource(52984U);
    msg.setSourceEntity(50U);
    msg.setDestination(41805U);
    msg.setDestinationEntity(233U);
    msg.op = 128U;
    msg.tas2acc_pgain = 0.9433343175215129;
    msg.bank2p_pgain = 0.1149144410431423;

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
    msg.setTimeStamp(0.6305426097546954);
    msg.setSource(37969U);
    msg.setSourceEntity(115U);
    msg.setDestination(56193U);
    msg.setDestinationEntity(215U);
    msg.op = 37U;
    msg.tas2acc_pgain = 0.15246195260344075;
    msg.bank2p_pgain = 0.05418039297911259;

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
    msg.setTimeStamp(0.17104259043243764);
    msg.setSource(32654U);
    msg.setSourceEntity(56U);
    msg.setDestination(63685U);
    msg.setDestinationEntity(122U);
    msg.op = 14U;
    msg.tas2acc_pgain = 0.7495378045291605;
    msg.bank2p_pgain = 0.35660954969116865;

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
    msg.setTimeStamp(0.9119679062743605);
    msg.setSource(12790U);
    msg.setSourceEntity(68U);
    msg.setDestination(49264U);
    msg.setDestinationEntity(153U);
    msg.available = 1178288839U;
    msg.value = 101U;

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
    msg.setTimeStamp(0.17987351022920284);
    msg.setSource(38002U);
    msg.setSourceEntity(111U);
    msg.setDestination(46999U);
    msg.setDestinationEntity(107U);
    msg.available = 696142102U;
    msg.value = 119U;

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
    msg.setTimeStamp(0.047529120737625496);
    msg.setSource(5190U);
    msg.setSourceEntity(25U);
    msg.setDestination(51799U);
    msg.setDestinationEntity(215U);
    msg.available = 2247714022U;
    msg.value = 242U;

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
    msg.setTimeStamp(0.9580459477970985);
    msg.setSource(56544U);
    msg.setSourceEntity(15U);
    msg.setDestination(29041U);
    msg.setDestinationEntity(38U);
    msg.op = 118U;
    msg.snapshot.assign("WLPXOLMFWBEGMNLWFIBEBBVCNFQXOBBOMVLEVRVOPJERZKSTOPHKYWUFBJHTNNJWZVPRCYDSZKJMUEEARZXATYAEDCYWEXUHWFXCFANGXUJYAYICRGSNIGDATRLVTPKJVFQJLMQQQCMOUSISGYKZKSAMTZNSMTEKULQGAPKUTPJILNZLYQAOGFJHWUHKFVRDOPHACDHKVWUOXSDMGXOIQBQMEICIRGBDJSNXPRSIDTHU");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 28497U;
    tmp_msg_0.lat = 0.31573700455754816;
    tmp_msg_0.lon = 0.08149882210288795;
    tmp_msg_0.z = 0.33549393961943985;
    tmp_msg_0.z_units = 242U;
    tmp_msg_0.speed = 0.04706643817503198;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.custom.assign("YAIIUPYESTZSMEAAJMWOXLBNQFEKXWLDCCCWKVXHXITYVPOUYNKBOMNSWSQNEDYJQOIXFDVTA");
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
    msg.setTimeStamp(0.9673418688846148);
    msg.setSource(17812U);
    msg.setSourceEntity(127U);
    msg.setDestination(56095U);
    msg.setDestinationEntity(95U);
    msg.op = 31U;
    msg.snapshot.assign("PXAALZJGPPUEPXAWUCUMKGBEMCQDWUFRGKRZVKPDXESIJMIMOWHDPAXNKOARSSCCEYDFOGYIZFAJUVKFJBCIJBWDGMMSQYIDHRAXJTVNSIORPCUZZSVLZUWLVPCQLJNTHFQEGTMQFOTQWUYQRNIVETOXWYTWCALNJVOWGHZEELQHBMDXYIBNZGKJDTZBDQMHIFTV");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 112U;
    tmp_msg_0.goal_id.assign("WQMYUYIXTLJVNPWKYKEXNIZCXWOJGNLHMMPFKVIEYBOPMHQRNVXLJJTFKWZGIRQQJ");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("VESPZQXFRCRTQIVJIMUAQHTVCNFRE");
    tmp_tmp_msg_0_0.predicate.assign("FIVVCSVOSXLUWUVXFYYPOXUHHLQCQDIDJMZRPLLOTEJJLMKFXIOUFDZQRCKOBQIVBHCVWDEOEIXCSXXBFGTJYYHBAQRANSTMGHOABVSMXWTPDEWQKPNIZHYZPDRWXNRLAHFSRZSDUBRAJHYFJNTTIGJWOZGKUELEWJRPOTLBVKN");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("GBGLIVIBCJGTHFAQEUHNWTBHTZGDOBMULTHHAESSKZW");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 198U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("YUSIWPZMELFKCKLOTYEQPDEGUWXWHMUJS");
    tmp_tmp_tmp_msg_0_0_0.max.assign("UAWSVAOJAWRKQJLDZMNTMEKBRAIAFPBCWVTTJZEJQNNPBRPZCDAAPBOGVCLNWUEBJGIDSUJFQHHHPGCLNLJWFVGNDGNZXTTKRZMWFSPDVQIORBMGCHFZERLCBK");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.017016261850500758);
    msg.setSource(5991U);
    msg.setSourceEntity(235U);
    msg.setDestination(31291U);
    msg.setDestinationEntity(174U);
    msg.op = 47U;
    msg.snapshot.assign("QCWGYUMSSDOHXVYZNYHXWQZLNXEKAMNLEMZGUTNQMSBDOAYBAJLBUZZNTAFNHTRDGHUGRELYZTAQVPSXUPJXRJXPFOBSQOCVRMFNEPGPODCUDLMNFJWKSKKVFZLIWICOUGXTWAJBINODYRYHTJYZNESBCSKWPJSWDUFDIHCEBKHLTHQXWOAIAJBCM");
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("ABUKFJLPIRPYWFRJISZTKTNHILUGMMPBDCWGCDNOSVNYAGUKBWQVXWENYTGJNYGWUZMODSQLFQWHPODZWXXMOJBACSPIOXKFEALGQRDQCVAVPRLHDHHFMVERJOWYXYFOMMLTQGIUBAXGZMYDSTXNCWEBGRERPLTHPUTQMFTEWBRZEIVNNTSMOEKQJDLECSFSUICISAPYFXHRBDVYXPIZUJVGZZATKIVVJAJZNCCJBZRFNLK");
    tmp_msg_0.text.assign("KGLQDQVTNOTABIRFWAPHIWZTBAKUNJAMRDDMCQHWTCOSFYFTQNFMPRZSDZPKGVXEKIYBRSOIECRPWVGEYOJENOAOIUZCAEOJYYWZGLIQQJVKVNQXHGRMNPILKHYJUCBKTUTJWPBZGNCFMNBSDGSGRSDRAOKMXCBVXC");
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
    msg.setTimeStamp(0.2740062270814524);
    msg.setSource(37202U);
    msg.setSourceEntity(29U);
    msg.setDestination(9231U);
    msg.setDestinationEntity(135U);
    msg.op = 190U;
    msg.name.assign("YQXKYTCOYGRMWUPZUGWSHZKKVFGSUILZPHRGFEQKFVJSVKACHXCXHJHZBCRHONWIWEQALCBNXRBTGZAFBJAQDOOXKAMVTSANJFRTGTTQXSFLDCJPRUMWVRYMZELAYTMZDXNENGLPEHGHMECEPZDQQCLOMEDFNWVBJROBJLYIDWMUFMFBJNIADITSPUXQESQSRJPANO");

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
    msg.setTimeStamp(0.5517385717715524);
    msg.setSource(16504U);
    msg.setSourceEntity(161U);
    msg.setDestination(51374U);
    msg.setDestinationEntity(74U);
    msg.op = 208U;
    msg.name.assign("KCFVQXJMWFGIKVHDVEJRPLARTVDA");

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
    msg.setTimeStamp(0.3064193565575658);
    msg.setSource(39232U);
    msg.setSourceEntity(54U);
    msg.setDestination(65133U);
    msg.setDestinationEntity(79U);
    msg.op = 237U;
    msg.name.assign("RXJTMVWLKOMVKXTQRIDSSAPHYNGZYBIMOWNSMCKUKPCYCQITLIHZHGAQGEFDFHQFGBWZZULNAHZFONEYCSREHJPXKBJMSBWFDLKBNRJBTVXPQVZZVYXNCTUDAGVZWSINHTGADYCYUMOIFWLLFMOUFQSWLIAMJRKQUVUHZWCASUBNOYMHDUUEEPYNXQGRXEBPDPOGJLFQKSDBJBCJCDFYS");

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
    msg.setTimeStamp(0.014804439020967841);
    msg.setSource(1627U);
    msg.setSourceEntity(153U);
    msg.setDestination(31068U);
    msg.setDestinationEntity(87U);
    msg.type = 125U;
    msg.htime = 0.5753693690497315;
    msg.context.assign("XBGJLBAFOMZXPJAVWDYJZDKDYVNEYUFFBKLZCELLFTAYNCUUBSPKFLBEOZTWOHBLHZYRMGWEMJYDUQAPWAHTNUPGKUVIMFVVDEPXNRISIQZSTRKNIIHKGXLVGLDJRDRSGJMAAEOSCBHSISIETDCVEQQKPRLINYXEXFXDUEONCSCNWRNSCTJOKVG");
    msg.text.assign("XUSPZZDSXDQNJEVLGJCKNNJYMYJMZNTHVFFSNSESLLYODTEJTMCUMXSMIYBOBLLTJFODBBTLNK");

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
    msg.setTimeStamp(0.831651765589643);
    msg.setSource(28840U);
    msg.setSourceEntity(235U);
    msg.setDestination(39571U);
    msg.setDestinationEntity(7U);
    msg.type = 114U;
    msg.htime = 0.8358730769611015;
    msg.context.assign("VQCIALOVMQPCHADOOLGIDCGUTBWUHYYFJRAFALETLZJFEGKPVXXDHKMTSWMYG");
    msg.text.assign("KUXYZPBKWNAKDQHDQGEELMCNVSMFZORTGUVGENRPHHSCNXLWBSIKBFOSLSUGQLCGFDTXLTVSYIMVEMTARUQSJEYCIDELATGJNGQTUDALQOKDBPDJXAWGWQFPBE");

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
    msg.setTimeStamp(0.6609688120439461);
    msg.setSource(29877U);
    msg.setSourceEntity(130U);
    msg.setDestination(64955U);
    msg.setDestinationEntity(162U);
    msg.type = 110U;
    msg.htime = 0.8795996830878313;
    msg.context.assign("HBERVMJMXXAACBWGMCHHLYMSCNJTAODGFAKNVCIGEVFZCDOBRXSJIJPETYYCUQYQSYKMUMSHTYRYPEKIXNZBFQSESLWDOVSQLRAUHODUEKLXO");
    msg.text.assign("RIJAVGLXGHJCMJRYHHPKJIKIZAXYQCWNTCTWQWWNVMBQOEQWACPQJTRSSNANKUCIUQXYPZTQPXIUGSZYQJDTPGNNEMGBXMRJRAGLMZOUKMBVVRFSKOW");

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
    msg.setTimeStamp(0.2627456246214398);
    msg.setSource(47201U);
    msg.setSourceEntity(101U);
    msg.setDestination(42200U);
    msg.setDestinationEntity(162U);
    msg.command = 147U;
    msg.htime = 0.22162812015355282;

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
    msg.setTimeStamp(0.3375030896274348);
    msg.setSource(47845U);
    msg.setSourceEntity(211U);
    msg.setDestination(23190U);
    msg.setDestinationEntity(187U);
    msg.command = 203U;
    msg.htime = 0.7019111741768885;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 174U;
    tmp_msg_0.htime = 0.7357973654442947;
    tmp_msg_0.context.assign("TNOFKKHKHRPNBXVWQVGDQFMRYFVCDZHGXEARWTDKZDAESSLIROLOCBLCJDZHBPOAPGZPCJYUSTIHYOUYZXGEYAVLLLCTPPBQCPVVJUIANZRGBWIDRYCBWVFXBEZEJSRUQFSQPSMHTKGWYMHEXTWFQPYVZWKOPSZUUNOOLQMUAOEMQMSYICEYUNIBMTHMSBIRLCGJKLJBFVDAAKJDLVHHRITIQEFKOQFCXTIRDNUUSNGXMWWFJN");
    tmp_msg_0.text.assign("RITTKGTIRTXCSLOSXAZUBPXYXQYWHVWMFRKOQPMIIUBRZCXAGLFSCNADYFEZBWUMUMAQPRBHZZSPNOFDTQSWJECLEGQVYKPFSXAFVFVNERCBKQMKYERWCIMYPDTEEQNVRDWLWLLFKVTKANPIDMAMOMKEJXXWNAAHCJZSTLEKUGDJGHOUSDVCIVYPJJFLHTNKPQZNCIYSGZFDBXWCRDGHOBEIVUJGLHNOYOOWOHGJJHBPZSXUAVTHJDQQINB");
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
    msg.setTimeStamp(0.30040658854202074);
    msg.setSource(41397U);
    msg.setSourceEntity(156U);
    msg.setDestination(43740U);
    msg.setDestinationEntity(174U);
    msg.command = 9U;
    msg.htime = 0.17136981202607515;

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
    msg.setTimeStamp(0.2985833053493262);
    msg.setSource(1489U);
    msg.setSourceEntity(125U);
    msg.setDestination(29345U);
    msg.setDestinationEntity(7U);
    msg.op = 187U;
    msg.file.assign("OFKWMJEEXVALPPIUIGYXFTDLYKNBSTDRZEEBETRMLOAHWAARSZVUIFF");

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
    msg.setTimeStamp(0.3702158421476892);
    msg.setSource(8886U);
    msg.setSourceEntity(239U);
    msg.setDestination(9791U);
    msg.setDestinationEntity(242U);
    msg.op = 141U;
    msg.file.assign("BAMMNXWCKWMXALVMSESGKYEYHXFRXGKIAVJTKXMHTAUDIHQGLJRJGGTMHXFQNCJUYIJPQWOLNBVVIVIKMZPUALNIUKADLMWVZMADCUJCDERVSUFOTXRPRLDBTKQEPDNAWXDRPQYBOJQDGSOFEZIIOOUNDITFERBCPUFBKNUQLXYRTFEWTJFNHCOAZELIQTCFPLBPDYSKSJPBVWRVUHCGWSOYSNFZSTYKGJGWBHZHQCAXP");

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
    msg.setTimeStamp(0.4606461636403998);
    msg.setSource(26178U);
    msg.setSourceEntity(122U);
    msg.setDestination(49121U);
    msg.setDestinationEntity(107U);
    msg.op = 6U;
    msg.file.assign("BMNSRIUCLHCVMAXOSZUAEWSGYWIGBPJUOHAHVQYPFBTCFMRVEVRXFLPIMBEGTKANIZOGKPUXJYQLMDILVZKWJGEFYCDIBERQOVVEYIBVMRGKHTQPNXVFIDCNKLLYSMFSNKHHPRAUZZCO");

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
    msg.setTimeStamp(0.4608894452837131);
    msg.setSource(15492U);
    msg.setSourceEntity(80U);
    msg.setDestination(15266U);
    msg.setDestinationEntity(168U);
    msg.op = 212U;
    msg.clock = 0.9804330491027745;
    msg.tz = 118;

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
    msg.setTimeStamp(0.4507967135546366);
    msg.setSource(34919U);
    msg.setSourceEntity(14U);
    msg.setDestination(37619U);
    msg.setDestinationEntity(235U);
    msg.op = 120U;
    msg.clock = 0.4645007541559085;
    msg.tz = -36;

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
    msg.setTimeStamp(0.06969909874762603);
    msg.setSource(39538U);
    msg.setSourceEntity(251U);
    msg.setDestination(54428U);
    msg.setDestinationEntity(178U);
    msg.op = 12U;
    msg.clock = 0.7611656561756487;
    msg.tz = 59;

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
    msg.setTimeStamp(0.4474325560033049);
    msg.setSource(13688U);
    msg.setSourceEntity(48U);
    msg.setDestination(22070U);
    msg.setDestinationEntity(106U);
    msg.conductivity = 0.23826781203219505;
    msg.temperature = 0.34889424199244423;
    msg.depth = 0.15365345827047638;

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
    msg.setTimeStamp(0.7016847193257987);
    msg.setSource(25133U);
    msg.setSourceEntity(100U);
    msg.setDestination(50730U);
    msg.setDestinationEntity(46U);
    msg.conductivity = 0.7301471506263507;
    msg.temperature = 0.0006448508889688176;
    msg.depth = 0.8390366574455144;

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
    msg.setTimeStamp(0.3830621289545144);
    msg.setSource(3837U);
    msg.setSourceEntity(141U);
    msg.setDestination(44873U);
    msg.setDestinationEntity(155U);
    msg.conductivity = 0.5793040396237729;
    msg.temperature = 0.9416996706025875;
    msg.depth = 0.9611405939828656;

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
    msg.setTimeStamp(0.4849760110076916);
    msg.setSource(6003U);
    msg.setSourceEntity(172U);
    msg.setDestination(20414U);
    msg.setDestinationEntity(190U);
    msg.altitude = 0.6151511277700923;
    msg.roll = 7998U;
    msg.pitch = 31691U;
    msg.yaw = 39783U;
    msg.speed = 6734;

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
    msg.setTimeStamp(0.9664492654387371);
    msg.setSource(14809U);
    msg.setSourceEntity(63U);
    msg.setDestination(53085U);
    msg.setDestinationEntity(65U);
    msg.altitude = 0.06608214480717967;
    msg.roll = 2081U;
    msg.pitch = 32883U;
    msg.yaw = 49467U;
    msg.speed = 26888;

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
    msg.setTimeStamp(0.7686334464086927);
    msg.setSource(48799U);
    msg.setSourceEntity(190U);
    msg.setDestination(36452U);
    msg.setDestinationEntity(15U);
    msg.altitude = 0.7475047694011622;
    msg.roll = 38783U;
    msg.pitch = 42503U;
    msg.yaw = 1936U;
    msg.speed = -26972;

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
    msg.setTimeStamp(0.2505670544773725);
    msg.setSource(40782U);
    msg.setSourceEntity(233U);
    msg.setDestination(57045U);
    msg.setDestinationEntity(31U);
    msg.altitude = 0.611963566386589;
    msg.width = 0.9460337004877615;
    msg.length = 0.0007189392310053;
    msg.bearing = 0.9873088592992634;
    msg.pxl = 4882;
    msg.encoding = 185U;
    const char tmp_msg_0[] = {70, 120, 85, -27, 88, 63, -68, -16, -81, -100, 15, -63, 87, 97, 31, -112, -102, 90, 75, -53, -44, 56, 16, 31, 21, -21, -116, 117, -36, -114, 17, 119, 94, -96, -57, -33, 119, -19, -39, 82, 10, 36, 22, -122, 84, 25, 109, 48, -118, -39, 93, -17, 118, 13, -88, -77, -24, 44, 36, -21, 40, 60, -87, 126, -70, 21, 1, 54, -92, -93, 89, 113, -13, 65, -122, -16, -18, 12, -31, 51, -34, -119, 58, 54, 73, 76, 24, 121, -67, -87, -8, -82, -117, 59, -28, 25, -84, -80, 4, 38, 21, -23, -103, -96, 110, -77, 98, -60, -99, 57, 110, 92, 5, 87, 100, -82, -112, -35, -42, 57, 49, 86, -31, 88, -39, 125, 111, -128, -74, 102, 83, -36, -95, -5, -101, 33, -61, 107, 45, -83, 60, 28, -8, 79, -75, 50, -21, 79, -94, 23, -16, 62};
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
    msg.setTimeStamp(0.13537502496134735);
    msg.setSource(49689U);
    msg.setSourceEntity(121U);
    msg.setDestination(17993U);
    msg.setDestinationEntity(4U);
    msg.altitude = 0.2560480830677696;
    msg.width = 0.9857167643846367;
    msg.length = 0.7403906718549871;
    msg.bearing = 0.6292860639118463;
    msg.pxl = -4508;
    msg.encoding = 92U;
    const char tmp_msg_0[] = {-123, 18, 124, 50, 98, -127, 68, 18, -104, -22, 99, 92, 50, -2, 53, -67, 64, -89, 106, -40, -8, 7, 70, 38, 81, -69, -84, -76, -43, -110, 55, 61, 80, -62, 64, 101, 31, -18, -62, 61, 102, -28, -77, 11, 96, 10, 36, 74, 6, -56, -55, -97, -66, -80, -83, 4, 55, 43, -110, 44, -82, 108, -94, 86, -47, -30, -79, -52, -38, -118, 95, -55, 63, -83, 88, -30, 29, 79, 65, 45, -6, -107, 76, -73, -14, -9, -42, -66, 45, 40, -85, 81, -2, -112, 4, 72, 40, -74, -93, 29, -27, -17, 126, 111, -14, -111, 21, 31, -61, -111, 43, -119, 104, -93, -19, 98, -46, -91, 30, 95, 63, -119, 27, 15, -22, 10, 55, 42, -12, -67, -36, 98, 113, -12, -41, 5, 1, 43, -81, 33, 119, -35, 57, 107, -72, -57, 117, -88, 2, 63, -23, -45, -93, 46, 85, -92, 95, 89, -63, -120, 120, -90, -80, -32, 56, 32, -8, -45, 90, -51, 63, -35, -54, 17};
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
    msg.setTimeStamp(0.3833651753182552);
    msg.setSource(18011U);
    msg.setSourceEntity(148U);
    msg.setDestination(43434U);
    msg.setDestinationEntity(110U);
    msg.altitude = 0.21307193143308922;
    msg.width = 0.547714902630493;
    msg.length = 0.6895308114614163;
    msg.bearing = 0.5351697793732759;
    msg.pxl = 23895;
    msg.encoding = 133U;
    const char tmp_msg_0[] = {-65, -91, -16, 12, -80, -24, 99, 104, -115, -23, -41, -5, 10, 7, 96, -112, -99, -48, -18, 33, -5, -127, 121, -3, 84, 111, -128, 101, 72, 83, 78, 45, 93, -55, -39, -62, 114, -32, 48, -33, -62, 106, 28, -97, -54, -88, -64, 121, -56, -90, -5, 92, -79, 55, 2, -113, -91, 43, -81, 50, -49, -15, 33, -62, -32, 124, -45, -76, -67, 77, -59, 98, 89, -46, 5, 67, -127, -110, 72, -7, 116, -43, -93, -29, 36, 119, 101, 36, -17, -93, 82, 91, 53, -108, 72, -88, 106, -101, 81, -68, 93, -40, -109, 19, -120, 39, -60, 76, -20, 59, 30, -101, 37, -15, -73, 6, 52, 78, -95, -33, -11, 14, -82};
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
    msg.setTimeStamp(0.7575662326170312);
    msg.setSource(63483U);
    msg.setSourceEntity(80U);
    msg.setDestination(10782U);
    msg.setDestinationEntity(64U);
    msg.text.assign("LICSWDYKJBMFUNYXIIZVBFINRVMBKPBLSEDGOFOPBJXWBVPULMGZHZUQPHVCFQTMXZRJLHMRODSAEEIPURQVYWZPUZCCNOGPMEDDBXQGIWEMYSCKQUXTJHONEKXBCZKRXFYTYLSVJOJEEMWTWIVFHAEUMJLGFAOKSNNPUHYKPYQGBLBAPFTVAIITKSRFQNOGYHTWORWCDOFSGAUVESCWLRKAQUWGLNXRXGYDQAHCCHRZTZADQTXZLMNVDSHTAJ");
    msg.type = 211U;

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
    msg.setTimeStamp(0.8371343614169771);
    msg.setSource(50349U);
    msg.setSourceEntity(206U);
    msg.setDestination(10661U);
    msg.setDestinationEntity(96U);
    msg.text.assign("CUUZOJRJQVPTPDGVQSNMVITRRFNXGAFWEBHEOFIMWQOLOGUJLSWDDRONKHVWHETUIMQLFQCPRKCDYUGCNCSATCHWFPIFWQ");
    msg.type = 34U;

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
    msg.setTimeStamp(0.660014513736479);
    msg.setSource(43383U);
    msg.setSourceEntity(2U);
    msg.setDestination(39938U);
    msg.setDestinationEntity(233U);
    msg.text.assign("PYWDFMLRPNXZDQNBKMDTGOHZFHEVPMFNFQXOUIETXCEIOIRBWCXRJIHWRZKBQBGCNHWOOMVJKUALADWXHZGDSUJVMNPYIOKLEGFEFCNTPGRSWYISFRYFEYNGUZXJYBNQKGVDVJVRAVRDLAJLIELHANCKLUEQXXPEIOWMTDEBJBYSASOYCHFCMBOUQVMPFQPUKMLQJGZGRSOXMBW");
    msg.type = 196U;

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
    msg.setTimeStamp(0.6231319562220118);
    msg.setSource(35783U);
    msg.setSourceEntity(243U);
    msg.setDestination(9712U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.5306958517748257);
    msg.setSource(51289U);
    msg.setSourceEntity(220U);
    msg.setDestination(24650U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.6674329760305833);
    msg.setSource(58663U);
    msg.setSourceEntity(150U);
    msg.setDestination(61352U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.8699785539123649);
    msg.setSource(40388U);
    msg.setSourceEntity(6U);
    msg.setDestination(50389U);
    msg.setDestinationEntity(191U);
    msg.sys_name.assign("XWFQIBTOAYRGWAUGRGDHFHFTSZSVFLPKQMORDBWEIAJDIJJDFPCZJHSGQJIXSXLWHQJXFUYOJKEKKIOMQTYGCHTMMKICZJVEKQXWLBYPLNYQDDUE");
    msg.sys_type = 33U;
    msg.owner = 56914U;
    msg.lat = 0.12093939505052209;
    msg.lon = 0.1234439278031434;
    msg.height = 0.1759626471306791;
    msg.services.assign("MNGATRJCVMKYRLQWZYXLDXABOSKRUILWSBLDMBJKGGHIPQKHJWCNUSZJHGZSPAQYWORADLVFESHLZMHZBQEFQSICNQTHTRDNEHAEYVVSERXIJOXKBSPPBRYKFZMNIVOUBFXPEMQ");

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
    msg.setTimeStamp(0.05592160085243325);
    msg.setSource(26961U);
    msg.setSourceEntity(154U);
    msg.setDestination(33523U);
    msg.setDestinationEntity(47U);
    msg.sys_name.assign("ESZCSPDMZYTVIUEENJZGFWXKLJPBDCXKNJWKVFHHTNKJCYIEESVBHIRTXUMLLDKTDAOBTRNIXYNOPAWDZYLUMWARGKOQOSNQVEBEGQFIYAAFYEGGULWMMZPZKKFRIYXBYNPQSIDPCRUIMUZTHF");
    msg.sys_type = 90U;
    msg.owner = 60999U;
    msg.lat = 0.00860390744663464;
    msg.lon = 0.6677808530545786;
    msg.height = 0.46109267088644346;
    msg.services.assign("BCCPNWNGUMLGKTXGDLHRXWPOEMZJOKLWWCFCEILQLDLCPBDGARIVOVBLUPKNUROTAEAPHOIQZHKSOIDGSRWNYMDQASFVUJTSPEQXTCFFDPFINZOHQDSDEQTVPSCTABXXDZYHE");

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
    msg.setTimeStamp(0.4270166900198804);
    msg.setSource(63743U);
    msg.setSourceEntity(252U);
    msg.setDestination(36533U);
    msg.setDestinationEntity(48U);
    msg.sys_name.assign("RJEUSZIMBQQFLMAORHMKCT");
    msg.sys_type = 43U;
    msg.owner = 48127U;
    msg.lat = 0.39169260237934345;
    msg.lon = 0.6078393494006145;
    msg.height = 0.7669109585017245;
    msg.services.assign("WFZFVDYKJMRWWAWCHOAJDEOAJJSFIKFWBZCDHOGXNIQUTQABTIYUEGQKIOOPBRNTLPMDDXKJYBJYJZHFWGLHBCUVHLSAEGMZZWYRNMUBRFPLUSPXTXCLSLTUEGRVPROODVZNPGSOICELBTODKGKTCEREHTASFQBTIMXFYKTQMSPXYI");

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
    msg.setTimeStamp(0.3750224851888315);
    msg.setSource(61318U);
    msg.setSourceEntity(145U);
    msg.setDestination(29346U);
    msg.setDestinationEntity(16U);
    msg.service.assign("NLNPCSXEIKFBQAOEYMFJTSVQYUVSZEDRLUWPPZORDBEYXBHZARQDPUDTRYJBOHHOJFCKNXNTTEWOHKOWLVZFXCNGYLFUEDSYUNNOJGRFGM");
    msg.service_type = 122U;

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
    msg.setTimeStamp(0.8230677088075569);
    msg.setSource(48119U);
    msg.setSourceEntity(118U);
    msg.setDestination(27168U);
    msg.setDestinationEntity(158U);
    msg.service.assign("WNUSZBQNVIRBSVUYRTYAYWAPOGYPEXEIEVANQFZHEUJOMVZINESPGWBKYVLIUBRNZIWDUQLTSHHMEFZYELDLQPJIFJXCWIPCOGFDRJYVVMMVLAECGFARFDACTMZENCPOHKOYAEKGZMBDPOXTNTVKDLHUFJJPJBBZJXXGZTWSQDSCOURHI");
    msg.service_type = 125U;

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
    msg.setTimeStamp(0.7020640595289117);
    msg.setSource(12627U);
    msg.setSourceEntity(191U);
    msg.setDestination(23394U);
    msg.setDestinationEntity(69U);
    msg.service.assign("SJNSJHSBNUGHKDVTTJJKQYTISOAXYRDGEHGJMQEE");
    msg.service_type = 28U;

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
    msg.setTimeStamp(0.020474638077701335);
    msg.setSource(60410U);
    msg.setSourceEntity(139U);
    msg.setDestination(8085U);
    msg.setDestinationEntity(194U);
    msg.value = 0.4684909736956502;

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
    msg.setTimeStamp(0.1105499748103661);
    msg.setSource(7977U);
    msg.setSourceEntity(51U);
    msg.setDestination(46964U);
    msg.setDestinationEntity(133U);
    msg.value = 0.11619107512761928;

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
    msg.setTimeStamp(0.23495956107367177);
    msg.setSource(17673U);
    msg.setSourceEntity(62U);
    msg.setDestination(14671U);
    msg.setDestinationEntity(245U);
    msg.value = 0.8703737300313238;

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
    msg.setTimeStamp(0.4733224406044827);
    msg.setSource(51590U);
    msg.setSourceEntity(121U);
    msg.setDestination(63436U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7166210660730703;

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
    msg.setTimeStamp(0.08957464057154152);
    msg.setSource(29883U);
    msg.setSourceEntity(10U);
    msg.setDestination(37285U);
    msg.setDestinationEntity(23U);
    msg.value = 0.04472812231658607;

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
    msg.setTimeStamp(0.7274583111125698);
    msg.setSource(34680U);
    msg.setSourceEntity(3U);
    msg.setDestination(21994U);
    msg.setDestinationEntity(156U);
    msg.value = 0.37948143978563353;

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
    msg.setTimeStamp(0.22858229384642847);
    msg.setSource(19569U);
    msg.setSourceEntity(227U);
    msg.setDestination(48970U);
    msg.setDestinationEntity(121U);
    msg.value = 0.17074560552668638;

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
    msg.setTimeStamp(0.4930883760250123);
    msg.setSource(15759U);
    msg.setSourceEntity(204U);
    msg.setDestination(26772U);
    msg.setDestinationEntity(65U);
    msg.value = 0.8761251017648308;

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
    msg.setTimeStamp(0.3416765011417896);
    msg.setSource(51756U);
    msg.setSourceEntity(126U);
    msg.setDestination(13621U);
    msg.setDestinationEntity(57U);
    msg.value = 0.35184463113792763;

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
    msg.setTimeStamp(0.9790527625461516);
    msg.setSource(43678U);
    msg.setSourceEntity(100U);
    msg.setDestination(65031U);
    msg.setDestinationEntity(216U);
    msg.number.assign("TZLLYZJWRZWRPTWBBLKHVYCEQSPALJJUPBVRODSWZYMRAQPECV");
    msg.timeout = 40705U;
    msg.contents.assign("JCQKPWKLPLDFTYRIUHUZMUAGFPACAWUXVXWRDBYPGHGEPZS");

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
    msg.setTimeStamp(0.8594560844441663);
    msg.setSource(31366U);
    msg.setSourceEntity(186U);
    msg.setDestination(14836U);
    msg.setDestinationEntity(185U);
    msg.number.assign("SZOCVCXXIPTFWWVHIRAHBXCYUMIMOGKDWRFQEGPNNKAGHMPRLZQKBKZLRJZYCMCQOPEYZEUDOZZTWKJFGETASNUDHOCIYYMNUUJDQYJMPPGLZNXSBRHGXBCTBFQKESBJGTUNYLVLJVLHSPPTQIJICVQARMGEQBMOWLECPSJDJRAKSIFKPCXBUUTHIVOWZIDXDFBRDASYHARHKHFVUFYLDKEFSDGOYLWIXZQAVEOFRASOTNQT");
    msg.timeout = 48112U;
    msg.contents.assign("FNGFJGKHSKBGWDRVURIFFCIPTUQKJRMRNTTXEHXKMTWRQWAKFUYMPINJBQSVVCQSWJOKEZREMTBPQVEWSVHQBWRSCDGLAJDLSOHNHPLOIUDYEPHLHUMDDZHWRCDZBXIICEBMQNJGLXOGPZBCVVKIJPAQYDWUEZJFAJACLEAMPTZQMPZWLUXXOGYBPSIBZSABDOKAMUFIFLYZ");

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
    msg.setTimeStamp(0.15401647146302577);
    msg.setSource(37412U);
    msg.setSourceEntity(4U);
    msg.setDestination(62654U);
    msg.setDestinationEntity(49U);
    msg.number.assign("GXHPPEMHNOGOBCGRITPPBTKUKWNEURTLMHKLOCXYBFQDQGXJTVSCGHOBYNXVZDUOXSUMYRUZAFIJSFEFTEUSWJCNWMFICAYEDYVUWZICWXKVVLCPLIVCMHZTPMLDIOYDOPQWAXHAQJTQIEZSIMSVLJGQELFXFFKANAWSPZDBBPMRRKKRQTFEAAKNUDDLWCVFQUQHMGGYXHLZLTENWIYHBRBHBZW");
    msg.timeout = 54712U;
    msg.contents.assign("RFWLKZAJMHBJDQNNYDGPDLSYQGZSXRZVUVYZPXCVSOPASTPWCKFXUDVTKTNEXQCVETNWXMILHKYNCONQZWTWAWOKIPAGQUXJYQGPJHCJKEYRWUBDADQRFISEYMOSLIUXBUNPROARKSXCOLGAMUKECNXTJGSJGYZDURKFLVYGQTBLEWUOIOPJMHIOIRAVCRNMEHRBZENAWJLEZFITGYHHVBBDMHPTTMEAWFJFBLZCLIMHQMFUKBDOFSCZHQF");

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
    msg.setTimeStamp(0.6561729166623765);
    msg.setSource(6432U);
    msg.setSourceEntity(157U);
    msg.setDestination(57183U);
    msg.setDestinationEntity(97U);
    msg.seq = 4102461399U;
    msg.destination.assign("AIVTSKBMIV");
    msg.timeout = 16055U;
    const char tmp_msg_0[] = {113, -12, -71, 57, 68, -73, 96, 71, -84, -76, 26, -17, 104, 123, -23, 83, 33, 16, -89, -65, 111, -7, 63, -59, 9, -109, -124, -28, 81, -91, -34, -60, 53, -48, 22, -59, -35, 46, -111, -32, -113, -122, 94, -128, -50, 106};
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
    msg.setTimeStamp(0.7858468704557438);
    msg.setSource(15279U);
    msg.setSourceEntity(68U);
    msg.setDestination(2441U);
    msg.setDestinationEntity(170U);
    msg.seq = 1760455673U;
    msg.destination.assign("ATJRSFDFLSVPUYUVXJKZKEJPJGTKVWVMCHMRLQSJWXTRFLHWFYUWRWCITFXTCIDPQBQOBPGSGEGMVHXQZCCWOQKSANUBTWTBADZMJKOJNWNOOGCVYTVESIYILSTKZPHPVIBGEAAPFPLEYOMWIJRZYKXJVKLPYCAZFGBVNHYCFLHERQXNXXZNQDUNDH");
    msg.timeout = 12030U;
    const char tmp_msg_0[] = {13, -87, 59, -9, 126, -33, 87, -8, -12, -106, -19, 69, -107, 80, -123, 50, -109, 85, -85, -1, 113, -22, 4, 20, 117, 123, 108, 36, 88, -87, -8, -90, 84, 77, 117, -28, -50, 56, 103, 19, 10, -55, 68, 107, 21, -119, -97, -29, 44, 70, 10, -60, -15, -80, -81, -58, -51, -3, 108, 103, -12, -28, 7, -113, 89, -61, 64, 106, 11, -73, -82, 61, 7, 126, 94, 49, 118, -82, -123, -53, -12, -38, -59, 97, -89, -123, 117, -112, 124, -40, -103, -97, 9, 110, -88, -121, 114, 90, 36, 33, 54, 12, -112, -100, 28, 79, 54, 25, 43, -25, 26, -10, 65, 116, -47, -65, 50, -82, -80, 66, -122, 11, 80, -84, 35, 70, 22, -69, 22, -77, -70, 119, -55, -122, -3, -82, 47, 125, -56, 102, -126, 97, -113, -84, 1, 106, 78, -89, -64, 84, -85, 75, 4, -37, 42, -6, -116, -80, 75, 42, 111, -109, 28, 12, -29, -19, 50, -79, -93, 16, -106};
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
    msg.setTimeStamp(0.24919493953966565);
    msg.setSource(22618U);
    msg.setSourceEntity(167U);
    msg.setDestination(11481U);
    msg.setDestinationEntity(86U);
    msg.seq = 1098023777U;
    msg.destination.assign("GYFKWZMGHIVRTDAEPNLHALCUGRIVLEDTKXQCSJBJGQHRJGCOIEDCLRZAZOLUSIUDWYVQMWDYVZLDSMTFQONNFWOPEIQSLUSCIEETYJMBEPESFXMVWAHJLXPMTIXUVZKRNKUMQOMRXIXNPZGUWKXMGPYTJYQKJRKBJVBTEQZ");
    msg.timeout = 35167U;
    const char tmp_msg_0[] = {66, 80, -44, -100, 36, 118, -17, 96, -127, 91, 46, 13, 108, 106, -55, 13, -80, 64, 19, -24, -7, 116, -50, 61, 100, 11, -87, 60, -70, 8, -89, 51, -86, -33, -14, -19, -12, -7, 61, -51, -52, -84, 58, -19, 46, -49, 37, -14, -55, 74, 22, -90, -122, 112, 110, -54, -30, -123, -102, 52, 62, -123, -79, 4, 79, 73, 16, 115, 123, -26, 59, -42, 16, 83, 39, 27, -65, 9, 105, 101, -113, -45, -97};
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
    msg.setTimeStamp(0.9546131388912716);
    msg.setSource(44481U);
    msg.setSourceEntity(170U);
    msg.setDestination(57251U);
    msg.setDestinationEntity(106U);
    msg.source.assign("ZFKNZRRVJQYEVVQIKKNHCBDRCXEUDXFLHRYGTSRMZLZFLROGJEUTTSXATPGIMRJPXHTFFLSEBVSHBWTUHWCCQMJPUKIWIIXYPBHVCEOOQCVDLCEZBATYPYIMPGYUMBOWLLOFZHHJJTAZLJRCS");
    const char tmp_msg_0[] = {46, -125, 83, -37, 2, 74, -69, 28, -30, 93, -57, -36, -112, -95, -93, 46, -80, -22, -117, 73, -80, -63, 89, 124, 49, 65, 12, 117, 0, 111, -60, -2, 44, 43, -7, 94, 87, -13, 70, 8, 63, 72, -32, -78, 46, -64, 109, 35, 14, 33, -94, -90, -62, 1, -49, -54, 123, 48, -52, -91, 26, 66, 93, 62, -64, 11, -120, -85, -114, 27, -83, 94, -51, 94, -108, -123, -53, 102, 107, 23, -51, 124, 53, -30, 0, 59, 62, -27, -2, -106, -4, -74, -17, -73, -52, 8, -71, 44, -26, -29, -15, -114, -115, 54, -66, 62, 16, 20, 43, 20, -85, 116, -71, -84, 64, -57, -16, 25, 83, -127, 59, 99, 100, 7, 9, 69, 60, 81, 80, -109, -79, 124, 117, 14, -76, -97, -86, 23, -17, 79, -9, 65, 75, 63, -97, -79, 41};
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
    msg.setTimeStamp(0.16988524816633044);
    msg.setSource(34828U);
    msg.setSourceEntity(13U);
    msg.setDestination(53896U);
    msg.setDestinationEntity(222U);
    msg.source.assign("LAHAAEHQOYCGEWWXAUJCHZTQGWKUQKJYSKVMXKFKMSDCHETHZEJGGTMNFACYNQIICVBZFPBODLT");
    const char tmp_msg_0[] = {51, -111, 96, -36, -51, -8, -128, -6, 87, 7, -7, 86, -3, -53, 36, 30, 53, -57, -100, 103, 6, -19, 31, -39, -116, 38, 5, 5, 85, 42, 107, -65, 115, -6, 46, -95, -4, -4, -63, 125, 125, 34, -82, -61, -97, -106, -92, -26, -71, 82, -116, 93, -74, -102, 92, -113, 37, 34, -124, -123, -50, 95, 99, -1, 107, -10, 48, -51, 91, 117, 29, -61, -63, 76, -38, -57, 91, 105, 82, 117, -23, 65, -38, -109, 38, 91, 92, -114, -78, -28, -44, 12, 96, -19, 11, -39, 6, 123, -51, -125, -21, -20, -85, 97, -52, -108, -102, 86, -28, -36, -107, 95, 102, 30, 11, -64, 48, -38, -62, 16, -62, -91, 38, -64, 121, 70, 110, 122, -76, 88, 116, 1, -60, 48, -25, -40, -125, 95, -57, -14, 52, -92, 112, -17, -48, 86, -126, 80, -85, 106, -31, -117, 121, -57, 44, -50, 12, -101, -30, 115, 61, 63, -98, 19, -18, 44, 94, 20, 33, -107, 73, -99, -25, -78, -54, -54, -120, -92, -101, 94, 121, 80, -73, -112, -118, 124, -121, -113, 39, 33, -12, 37, -103, 100, -74, 46, -39, -90, 13, 117, -76, -58, -24, 58, -108, -61, 78, -28, 109, -79, -30, 49, 121, -52, -122, 19, 19, 2, 80, 37, -74, 91, -114, -70, 118, -117, 90, -59, -47, 23, 33, 93, -3, 85, 94, -96, 65, -5};
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
    msg.setTimeStamp(0.4108492619713735);
    msg.setSource(55942U);
    msg.setSourceEntity(221U);
    msg.setDestination(58892U);
    msg.setDestinationEntity(113U);
    msg.source.assign("ECLUAPUPXEDTKNQWRTIUSYVVNSXAMLVBOPGKGVJFNZSPCKLLQJZFHUTDFSOXEOMZLRLTGNYBDGLURAQTTIDDGFNHFQWNJWHQHSJGIZAHWRTSGRASVHB");
    const char tmp_msg_0[] = {-52, 43, -61, 69, -82, -32, -88, -93, 115, 30, 38, -5, -39, -121, -76, 112, -10, 82, 72, 5, -91, 67, 79, -111, 17, -75, -40, 109, -40, -119, -58, 16, 84, -105, -56, 62, -29, -68, 36, 106, 19, -118, 52, -27, 60, -8, -8, 51, 15, -9, 17, 2, 33, -24, -99, -120, -27, -118, -91, -127, 101, 55, -72, -52, 79, -27, 20, 28, -37, 106, 7, 9, 0, -9, -109, -101, -21, -110, 33, 97, 78, 121, 90, 29, -50, 20, -86, 83, 10, 4, -14, -28, -21, -36, 80, 102, -14, 17, -47, 67, -41, 80, 12, 92, -47, -12, 67, -19, 54, 34, -19, -18, 7, 86, -74, -108, -83, -24, 12, 101, 30, 12, 8, -36, -78, 31, -50, 21, 121, -76, 9, 7, 23, 105, -64, 117, -80, 65, -115, 61, -43, 116, 6, 31, -51, -60, -16, 125, -58, 89, -53, 5, 63, 121, 85, 103, 91, 92, -54, -84, -90, 59, 124, 28, -76, 47, 86, 91, -45, -68, 49, -113, 59, 116, -126, -74, -125, -13, 35, -25, -16, 32, 27, -96, -14, 76, 47, 125, -26, 42, -95, -70, -99, 100, 26, 7, 69, -47, 78, 110, -117, 27, 96, -117, -89, -14, 15, -48, -23, 96, 71, 120, 59, 121, -48, 30, 48, 43, 97, -118, -98};
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
    msg.setTimeStamp(0.5193935288931701);
    msg.setSource(10294U);
    msg.setSourceEntity(134U);
    msg.setDestination(48730U);
    msg.setDestinationEntity(177U);
    msg.seq = 4139655781U;
    msg.state = 52U;
    msg.error.assign("FWVALFTALBRNJGWYJRTKABCWVSPVHVOQDBDSSOWGROHPFUEXPSMGZZKZCPLGUJDJQTUXSPUIKHDROPJZVEGQMQHDAMXJUSJTQVLBIA");

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
    msg.setTimeStamp(0.017289844797812925);
    msg.setSource(48010U);
    msg.setSourceEntity(102U);
    msg.setDestination(32582U);
    msg.setDestinationEntity(32U);
    msg.seq = 603910188U;
    msg.state = 122U;
    msg.error.assign("WQCSNICABNOATRKEINVQORUHWHXXWZNLOXOPVNUSJSTDXSHO");

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
    msg.setTimeStamp(0.28691913861829776);
    msg.setSource(37751U);
    msg.setSourceEntity(102U);
    msg.setDestination(20163U);
    msg.setDestinationEntity(22U);
    msg.seq = 3391023295U;
    msg.state = 100U;
    msg.error.assign("CLTZHRTQPOIDFYDTXEYQQICADNZGXSVUUCPKWIFULMMTDHSHXRZEOILOUIGFSZOEPBFWDJKRPFESBUKBOCAHZYKJIEGBZRGGVIBWMDKWTCAKEKWATMQL");

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
    msg.setTimeStamp(0.9516303937129997);
    msg.setSource(31419U);
    msg.setSourceEntity(125U);
    msg.setDestination(58150U);
    msg.setDestinationEntity(20U);
    msg.origin.assign("ASVIOBZNIARFJYRPVCRQLQTKPKRHOQHDRIIFUCHZXAYBYPZBQYKSFLDSLLTYSPLERXHOTJTXYNFULKVWGWAXPKMIWCCJCYCGOHUGDDESHVBGEGBYGNZWTROUMVTUCNWEJUHDLEAXMLPJCRQMLIDVTEUTOV");
    msg.text.assign("XXWLZXENADEZAKSQNORSVCTVIXCNPLIMDPHRWAOWTYVIFNURBXVVBXEOPOZZLDVGKTMTZSZAHFWBFLZPRYDAQUQSGJAEQRPGYFIJAMYAINSGCEXLJNOXWJHIDWUMNKDQBMIPJRWZCVOVRBGHEFWIVBMLOYUKBUIZKINMDHBFHLJDCOTEJTQYYSTMMRAZFSTTUHGOPF");

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
    msg.setTimeStamp(0.6950556103365118);
    msg.setSource(26823U);
    msg.setSourceEntity(186U);
    msg.setDestination(50766U);
    msg.setDestinationEntity(74U);
    msg.origin.assign("DVHOKKVXBYFUFHNUMVCAOBLDYWHGPYRHMRPTRLMTTAQHIJZILSFEECJTWUAKIFGGIQXRZJMNQQNXBYVNKSHQBQQSVRCWBDVSJYECECBQQRFMLTGJYXOIJAKGVGWDZJSFOSLXUZSACPPUXYLGDWNORIXUWGFPYIIEBDDHSSRTUUKANVSPKHIWPRDNPXZCJKBOAUGMWAPTNLGXDHTNPOOKV");
    msg.text.assign("IXPQYTZXEYQEXWPKWKFQLWSLRHOSUWIJUEMKAOZUFYDOCNRIXTDCFDQFXVRNCVYYAHHJNFMPZJTKTLOYKBENMBEZSMQGKDCGIGYIVFSSAYQWPPMQH");

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
    msg.setTimeStamp(0.12158011959886472);
    msg.setSource(40789U);
    msg.setSourceEntity(221U);
    msg.setDestination(41515U);
    msg.setDestinationEntity(252U);
    msg.origin.assign("JVQFZJDZZRTVUSPISZQYBWJTHRYJQTLEUICUWRAGNKDLIKMVQXYPZQPQBJNOHLEOSXARMKMWEUHAZFBDMQVMSWTNNWVNBNLHGJKJMGGXXBCTTEGCCALYFNIHOBFEOFCEYKKGUBRSRVXRCUDKELLSDKKRUDIOXEBXNNUYYJWSQBOXPFZXTDZDAARILSCJCXATIUVRLHVMQGSPMWGZENQW");
    msg.text.assign("CAPDOJNRDQYDFCXXYQUVJPNQRVZKHSCPFOCBDKMRREKSNPHGWDRFQQKXRXYDGVUSPPORHFTAQULDXENQNLLXQHKGIFHEZYEUFTYIFMTJGEYSMJJBNBROALAOAGFAWILHLWGMLAIRKVPCDOSGLXMPGWLA");

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
    msg.setTimeStamp(0.5208733367320502);
    msg.setSource(44606U);
    msg.setSourceEntity(24U);
    msg.setDestination(28004U);
    msg.setDestinationEntity(189U);
    msg.origin.assign("VNIRBEBRXHGBYJOFTWFHVXLNIBLUENRKNDEWZWQMOTNTGQKFDJLAGTXPUUJYEWBTVRQGFYSQXWSTHMDLKJREUJPPQIFDOLSWAOWPQVUOIGKLOJHYHCBZPZAARJNXYKGEZAPZUVFPZRKEIONDZFCESKAPNODYSQVVVHJXSNJXKYVGWLXZPIBFLNCDIMOFCCGTHUYMHDISAEMRDADPCWQYBOEMYGRUSICQHBWKTUSARBXV");
    msg.htime = 0.4911146693709585;
    msg.lat = 0.2628127177420061;
    msg.lon = 0.4672523753847031;
    const char tmp_msg_0[] = {4, 53, -121, -101, -71, -14, 96, -120, 5, -94, 92, -18, 87, -35, 34, -60, 114, -48, 106, -83, 123, 43, -49, 25, -54, -110, -118, 80, 97, 48, 57, -22, 96, -30, 72, -93, 114, -104, 30, -25, 6, -86, 61, -55, -23, 25, 33, 55, -37, -124, -104, -11, -1, 119, -90, -118, 111, 120, -9, -103, -65, -84, -58, 47, 84, -87, -113, 126, 122, -16, -107, 1, 58, 17, 107, 23, 40, 112, -7, 105, 82, 5, -19, 64, -2, 116, -4, -49, 76, 114, -73, -118, 71, 22, 113, 121, -95, -30, -107, -18, -99, -96, 119, -82, -69};
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
    msg.setTimeStamp(0.8823184143700287);
    msg.setSource(31957U);
    msg.setSourceEntity(23U);
    msg.setDestination(4371U);
    msg.setDestinationEntity(104U);
    msg.origin.assign("AOHNJICLGCIYAOZBHUQKMIYJFTGPRXTYLTEGQACPLBFHPMJJ");
    msg.htime = 0.1180085638492685;
    msg.lat = 0.8789091955537472;
    msg.lon = 0.17954631597994575;
    const char tmp_msg_0[] = {-85, -12, 77, -78, 80, -98, -9, 82, -121, 60};
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
    msg.setTimeStamp(0.2223782633227599);
    msg.setSource(15677U);
    msg.setSourceEntity(99U);
    msg.setDestination(44134U);
    msg.setDestinationEntity(121U);
    msg.origin.assign("ZVHGSQQDRQXEYAAJEXWCWDOHJMGRPJKHWZMEBMSRQCWUBLXCNFKIDMSAQRWKUFZHAZOJTNVMYQWTEVFLOUIVBGIFYZSUYGZBRPMXZCLOVFCPYVGKEPYIRJSMEVPOUWIGTBDMQGXLUBLKOFGATBAVFQSAATGKVWOEESDXUSKNRDCYCICZKYZQDLMHCRESUZPIKAFVPBNTMPYLOGLWCYXLKHNTWPL");
    msg.htime = 0.4252619295723661;
    msg.lat = 0.21204765487835264;
    msg.lon = 0.9011992538811857;
    const char tmp_msg_0[] = {-52, 107, -104, 6, -62, 24, -39, -97, 95, 92, 31, 108, 19, 31, 100, -74, 100, -80, -97, -63, 81, -31, -49, 120, 72, -88, -106, 24, -6, -102, -11, -106, 71, 15, 71, -125, -42, -43, 47, 50, -27, -47, -122, -32, -97, -70, 4, -91, 89, -48, 74, -8, -126, -52, 58, 14, 107, -94, 101};
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
    msg.setTimeStamp(0.053699220228639155);
    msg.setSource(15220U);
    msg.setSourceEntity(161U);
    msg.setDestination(18464U);
    msg.setDestinationEntity(29U);
    msg.req_id = 55221U;
    msg.ttl = 24562U;
    msg.destination.assign("RCWMUGRHRBIHRVVQMYRZTAVAJZODFSXQHFYUPIWELWCTZMMPCHAWZCIYKJJGDVHEOWRZXSOCTEFLLAEAREQJOATZDYQSKVKNWUXRTNPSWNGNBZBZGXNKKBHUDRRTVXNAFUSYKCKJQNQFUCEFCWJNGUXGDDPLIQIJHMDG");
    const char tmp_msg_0[] = {73, 18, 32, -45, -68, 10, -39, 36, -90, 1, -36, 69, -72, -59, -69, -124, 13, 124, 7, 90, -17, -78, -90, 14, -49, 108, 27, -114, -94, 46, -128, -32, -33, -96, 107, -18, -15, -113, 31, -53, 75, 65, 2, -84, -76, -81, -83, 94, 20, -26, 24, 75, 53, 58, -28, 68, 48, 86, 98, 120};
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
    msg.setTimeStamp(0.30777879618915516);
    msg.setSource(20786U);
    msg.setSourceEntity(1U);
    msg.setDestination(58367U);
    msg.setDestinationEntity(80U);
    msg.req_id = 48298U;
    msg.ttl = 13351U;
    msg.destination.assign("JIUFNNQRQXLVBNEYWMUWADZJOHDPSCYTOXPNOWJPPRSGUFIPVEAQVLIDJYUSDOSHWLCHOACUVEFHJVOAKQWWMDBSMQTEFRFUVZS");
    const char tmp_msg_0[] = {51, -101, 9, -3, 70, 106, 97, 124, -113, -100, 70, 9, -69, -122, -111, -101, -82, 119, 75, -60, 112, -100, 119, 5, 49, 105, 55, 25, -18, -75, 84, 34, -49, 113, -110, -10, -59, -13, -50, -28, -70, 96, -62, -112, -19, -36, -57, -2, -104, -26, -65, 63, -17, -43, 100, -17};
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
    msg.setTimeStamp(0.4224317431798642);
    msg.setSource(3534U);
    msg.setSourceEntity(248U);
    msg.setDestination(9480U);
    msg.setDestinationEntity(160U);
    msg.req_id = 47141U;
    msg.ttl = 16642U;
    msg.destination.assign("YMVCKAJHMFSMAQHVRIBYGIJNRJNMIAUNRAAPKDAULSTXBWDRNJPESHJBFYGXTTEDNFMHBCCTBTXEIIDGWGEKLEWYXZWXXVUEOPQRCZCKTMNYHIHSQZQPAOBKLCQCVORTQWCGZMPMNOFKLNSOLZFKHDVIPPDSBUUQHXSUOZSOLRWKBDTSYOFEXVTKLZHQLIPWGYZMYSVJANCLVXFBRRQXUYCW");
    const char tmp_msg_0[] = {-24, 99, 115, 117, 74, -68, -13, -23, -102, 47};
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
    msg.setTimeStamp(0.8052940432493642);
    msg.setSource(50241U);
    msg.setSourceEntity(238U);
    msg.setDestination(61612U);
    msg.setDestinationEntity(93U);
    msg.req_id = 54472U;
    msg.status = 57U;
    msg.text.assign("QLNUGBEANHIDXVZQTNVELEGHJUCDUYAHJZPLHBVKSOFRVKWCZXCRFCDHONYYJZOLPJQMIHNTTQCFDCDIKHZPKSJKMTQZB");

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
    msg.setTimeStamp(0.2767475102243596);
    msg.setSource(62745U);
    msg.setSourceEntity(67U);
    msg.setDestination(60846U);
    msg.setDestinationEntity(174U);
    msg.req_id = 64163U;
    msg.status = 51U;
    msg.text.assign("WFTOYHMYXHCGOAVOYBRHWTPNHZACNNJHEWYCMRLPLOVPIYWLTSXGBFDTVQUGLJMUFICYNSZJHIGYEUUQIOAFVXEFNDVOSKCEJDPAVYMINENIDXZSHOGKERNKPGBOLJNGPEQAJWTMUGLHRRCKKRCWMFWUDJLRVTJZFAZMOQDBTPSBIWZEKXVXCDOSERQRGRQIPVQLSYHYUPLMWMAFKDQNAUCQBZFQCZKB");

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
    msg.setTimeStamp(0.7577153066785733);
    msg.setSource(35745U);
    msg.setSourceEntity(108U);
    msg.setDestination(53248U);
    msg.setDestinationEntity(7U);
    msg.req_id = 5021U;
    msg.status = 60U;
    msg.text.assign("AASQEBASKYVBUSDXJWMUKCEOFMHWXEQVIPVPLWTIDAUGBPFLTMNLXKQUDXFYIDGWGQNAHCGVUYOFSCKDOBWJMPDSMOPZKSGHYCGNBQQVHAXGWZQVYFXFGIYDXXJRUDJZTTHUNERZPNJCCBQEKJJTIFEARYEHWMUKOUJBLCVT");

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
    msg.setTimeStamp(0.835719974006533);
    msg.setSource(30915U);
    msg.setSourceEntity(61U);
    msg.setDestination(19118U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("TGPLUMFZIZSSHGCBJBFNGKUNWPKQBMJLGEGZROXOWDEMAYGIGMXOHYEWMWPCYLAFLVKKYVANXFHETWVIARUXHPUSIRWZNIIUQBEOFPDPRXIJDSTFUZPAGGDCSVXLRLQJLSQCHEMVDUNKOPVTRYSNQKZBHZZBWQZFFLRSOAEINJINVDROSUPLKIKHQNFYGKTTMBDACHWOAOHPVYLYUDCFTECJSMXWREBBNQMROWYXHJ");
    msg.links = 1201880627U;

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
    msg.setTimeStamp(0.8416900641149331);
    msg.setSource(22401U);
    msg.setSourceEntity(216U);
    msg.setDestination(31004U);
    msg.setDestinationEntity(208U);
    msg.group_name.assign("AINNPQCQRVENTIOATSXJHFGPMUSYZADOYRVOCKPJBKYINWHGZRXJXWZALHSKGNSIEDSKVWJBWQFRDWUXSOWUVBYCVCJKZERFBIDZLAMVLATPYZTGJQGDLCQWOELNAOMJNMUSZBSUKXTPINCTVFZRKHTBNFRRUZOHEYKUPFUIDDGGELLEGCHDHEYXUAAYYXXMKMGZIQHVFISMOLVBCHGLPNWBJBD");
    msg.links = 1283680099U;

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
    msg.setTimeStamp(0.06509309789846551);
    msg.setSource(4930U);
    msg.setSourceEntity(38U);
    msg.setDestination(29928U);
    msg.setDestinationEntity(58U);
    msg.group_name.assign("EQCKKBYKGMTHJXXBMMVZBBVWKXZAJIHTCUOTLFCQADASLPSKIGDWMRNXVYWHEMJQTLSTHVHCADFCZUNPMCBQESHXVWDGQVODZRIAR");
    msg.links = 103521662U;

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
    msg.setTimeStamp(0.6595510746196065);
    msg.setSource(6372U);
    msg.setSourceEntity(2U);
    msg.setDestination(3781U);
    msg.setDestinationEntity(113U);
    msg.groupname.assign("FKNSIFULSBLNABEEQGTCKYVOIHTPTSAOSDICCGEIJTAHPAWWWPXCMLGWEYQRHTHRORPSZKDYKUCDWANGEKUDQIVEWYRCUXMLPBCPDUHBYLAVRSSGYMJYPZDPPJOHFDUNALEXNSQOONECWMMAN");
    msg.action = 240U;
    msg.grouplist.assign("BJKWCKDFWHYIFIEOUQSMCKASWJUIYFWJHYUBQTHYZNUGNPLXNKTNANOLSTXZRWBXTPTIGGGJKVVLFCKVVICPLSZCIJASBDRHJNKAGFORTEAGMFAQGMRDEAPKEUZIYZFCXXDXMPUCIJGTEITCBQPPDQPLEVCDMALMIRMNXL");

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
    msg.setTimeStamp(0.5472552264361329);
    msg.setSource(1269U);
    msg.setSourceEntity(68U);
    msg.setDestination(34182U);
    msg.setDestinationEntity(134U);
    msg.groupname.assign("DMTHEPLNXZHLHCQFFISANPNMXSKWYEFUJQVRHITZOG");
    msg.action = 119U;
    msg.grouplist.assign("HLJWUBVRTNZBPLXHWKOXWYJAAGODZAYDSQCVICBRSWFGZPGKPEDJWPIXXYQCVFNGIYFBJRMFLHYCBTCSIG");

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
    msg.setTimeStamp(0.8717789887422299);
    msg.setSource(11515U);
    msg.setSourceEntity(2U);
    msg.setDestination(12932U);
    msg.setDestinationEntity(145U);
    msg.groupname.assign("HVXFIOUMIFWLRIHFVRSMYNYUQNOHWNOPISFPTAZBPDYJTLWMGPNWVLEDOQSBZQKWZUJTGYJUUVVAGTOWJELRAGPWLLDMBKGXJOCVRPUHXPHSKHEXFUMQZXDWPCEXHSRNRUQKTZIONFQOFGISKROCXQKLRCQSYEVHLYMAYKMNCJAYBHC");
    msg.action = 204U;
    msg.grouplist.assign("ORKJKOHSKXWBXYAPIKHRRMYTOPEWEQCSBQIJODMXMDQUSAQGEWTUGVNDIKZMLOWJHUTANMCLGFRFOCWJEJLBJUKLHJFYUBBFBPBLSMEIWDVVNDACZNLRKWZXHVOJZCZEFOHGEZBIBAVVXVWLRDUJDFIQXFCHXTGYOKHVSNYDIANGIAATDQIPZGTZVCQUKXRCZMYXSSYPVPZLPIQKETCUDYQNSF");

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
    msg.setTimeStamp(0.14566022546845603);
    msg.setSource(13405U);
    msg.setSourceEntity(150U);
    msg.setDestination(21983U);
    msg.setDestinationEntity(67U);
    msg.value = 0.3055056185188213;
    msg.sys_src = 11777U;

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
    msg.setTimeStamp(0.5993633432415371);
    msg.setSource(44972U);
    msg.setSourceEntity(20U);
    msg.setDestination(14746U);
    msg.setDestinationEntity(149U);
    msg.value = 0.5796071337813429;
    msg.sys_src = 13113U;

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
    msg.setTimeStamp(0.3744640229717986);
    msg.setSource(26866U);
    msg.setSourceEntity(161U);
    msg.setDestination(37685U);
    msg.setDestinationEntity(158U);
    msg.value = 0.46324164458862127;
    msg.sys_src = 54906U;

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
    msg.setTimeStamp(0.7273342170486443);
    msg.setSource(54688U);
    msg.setSourceEntity(168U);
    msg.setDestination(61209U);
    msg.setDestinationEntity(192U);
    msg.value = 0.2965724751300388;
    msg.units = 210U;

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
    msg.setTimeStamp(0.2896585267770677);
    msg.setSource(58170U);
    msg.setSourceEntity(226U);
    msg.setDestination(60113U);
    msg.setDestinationEntity(151U);
    msg.value = 0.858722216930839;
    msg.units = 14U;

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
    msg.setTimeStamp(0.46944900951081614);
    msg.setSource(54164U);
    msg.setSourceEntity(41U);
    msg.setDestination(56103U);
    msg.setDestinationEntity(187U);
    msg.value = 0.7689909156173532;
    msg.units = 137U;

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
    msg.setTimeStamp(0.6148193951483291);
    msg.setSource(33541U);
    msg.setSourceEntity(170U);
    msg.setDestination(6506U);
    msg.setDestinationEntity(105U);
    msg.base_lat = 0.6641689904290274;
    msg.base_lon = 0.1623380024213299;
    msg.base_time = 0.5709202927700427;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 44451U;
    tmp_msg_0.priority = -40;
    tmp_msg_0.x = -23225;
    tmp_msg_0.y = -14024;
    tmp_msg_0.z = 23810;
    tmp_msg_0.t = 9626;
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 39669U;
    tmp_tmp_msg_0_0.lat = 0.9893919844853412;
    tmp_tmp_msg_0_0.lon = 0.9618006261525496;
    tmp_tmp_msg_0_0.z = 0.6403489720230542;
    tmp_tmp_msg_0_0.z_units = 79U;
    tmp_tmp_msg_0_0.speed = 0.19533783752194844;
    tmp_tmp_msg_0_0.speed_units = 21U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.09707545455006072;
    tmp_tmp_tmp_msg_0_0_0.y = 0.7325129892884652;
    tmp_tmp_tmp_msg_0_0_0.z = 0.49148824755801934;
    tmp_tmp_tmp_msg_0_0_0.t = 0.4493517989622865;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("AIGHNRUCRGAVSBPCQXOFDMWHTTNFZJZ");
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
    msg.setTimeStamp(0.2857985134177893);
    msg.setSource(63926U);
    msg.setSourceEntity(18U);
    msg.setDestination(47160U);
    msg.setDestinationEntity(242U);
    msg.base_lat = 0.0475222574461851;
    msg.base_lon = 0.4145600962445598;
    msg.base_time = 0.6316640615962128;

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
    msg.setTimeStamp(0.1311417309703503);
    msg.setSource(5491U);
    msg.setSourceEntity(127U);
    msg.setDestination(46144U);
    msg.setDestinationEntity(132U);
    msg.base_lat = 0.16132659552387707;
    msg.base_lon = 0.5140081039665757;
    msg.base_time = 0.17798989316979774;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 9345U;
    tmp_msg_0.priority = -45;
    tmp_msg_0.x = 23076;
    tmp_msg_0.y = -25937;
    tmp_msg_0.z = -11561;
    tmp_msg_0.t = -2800;
    IMC::Abort tmp_tmp_msg_0_0;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7022865122915021);
    msg.setSource(1564U);
    msg.setSourceEntity(157U);
    msg.setDestination(35288U);
    msg.setDestinationEntity(198U);
    msg.base_lat = 0.29390442652211546;
    msg.base_lon = 0.2580661958542202;
    msg.base_time = 0.24366412747611654;
    const char tmp_msg_0[] = {75, 43, 113, -67, 0, 39, 126, 46, -68, -54, 38, -127, -73, -116, -22, 1, 35, -97, -95, 113, -16, 118, 115, -85, -71, 118, 95, 71, 68, 101, 51, -101, 12, -101, -75, 111, -115, -30, -42, 73, -4, -74, 2, -71, 88, -118, -117, -110, -46, 102, -114, -74, -88, 7, 120, -39, -84, 65, 52, 98, 40, -16, 17, 94, -86, -22, 33, 85, -32, 31, -54, 38, -84, 92, 98, 9, 66, -56, -111, 9, -37, -32, 81, -37, 103, -127, 72, 125, 30, -98, 58, 67, -106, 26, 24, -99, -26, 87, 58, 26};
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
    msg.setTimeStamp(0.0576239798916619);
    msg.setSource(16447U);
    msg.setSourceEntity(61U);
    msg.setDestination(4980U);
    msg.setDestinationEntity(242U);
    msg.base_lat = 0.6606649521342994;
    msg.base_lon = 0.24522162272396475;
    msg.base_time = 0.3230474373833373;
    const char tmp_msg_0[] = {94, -68, -79, -68, 25, 59, 105, 118, -108, 64, 6, -27, 104, 119, -33, 0, -109, -51, -7, -48, -54, -1, -95, -67, -117, 49, -43, 43, -17, 99, 19, -17, -12, 120, 110, 91, -75, 56, 124, 117, 48, 5, 20, -90, -15, 1, 126, -36, -46, -115, 63, -114, 64, 112, -124, 44, -90, -126, -48, 99, 48, 43, 21, -127, 123, 8, -89, 11, -45, 41, -9, -49, -107, -102, 55, -85, -50, -22, 29, -85, 15, -8, -86, 27, -20, 63, -120, -65, 16, 17, -42, 85, -62, 40, -8, -73, -55, -68, -62, -63, 62, -50, -53, 61, -119, 62, -14, 40, 25, 50, -26, 112, -103, 24, -32, 112, -91, 61, -48, -24, 126, 109, -55, -67, 54, -119, 25, 32, -23, 103, 36, -115, -10, 42, -9, -61, -77, 3, 124, 73, -88, -54, -84, 88, -123, -88, -44, 22, 36, 42, -45, 34, -96, -115, 116, -93, -85, -26, 87, -45, 68, 119, -86, -56, -27, 47, -33, -84, -1, -109, 72, 98, -30, -124, 12, -92, -97, -89, 109, 100, -4, -114, 60, -82, 23, -122, 73, 38, -40, 109, 88, -87, -79, -47, 78, -86, 122, 78};
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
    msg.setTimeStamp(0.6323830247388367);
    msg.setSource(18871U);
    msg.setSourceEntity(69U);
    msg.setDestination(39989U);
    msg.setDestinationEntity(30U);
    msg.base_lat = 0.9816353308173864;
    msg.base_lon = 0.21230848712699868;
    msg.base_time = 0.21553918807651307;
    const char tmp_msg_0[] = {117, -100, -34, -83, -21, -52, -118, -115, -54, -120, 62, -32, -71, 0, -10, 117, 86, 38, 123, 77, 37, 8, 16, -78, 20, -93, 12, 62, 78, 89, -64, 55, 18, 46, 89, -74, 98, 52, 84, 90, -49, -123, -34, 61, 122, -17, 50, 97, -51, 33, 95, -7, 106, 25, 64, 124, -113, -88, 6, -88, 7, 58, -33, 45, 54, 52, 62, 28, 106, -56, -95, -35, -13, 60, -1, 69, 43, 44, -57, 27, 18, -108, 96, 79, 67, -114, -72, -6, 12, 26, -88, 110, 72, 14, -21, 10, -124, 53, -102, -9, -84, -19, -104, -121, 47, -107, 47, 54, -37, -96, -102, 110};
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
    msg.setTimeStamp(0.5577921287333945);
    msg.setSource(40784U);
    msg.setSourceEntity(31U);
    msg.setDestination(8836U);
    msg.setDestinationEntity(181U);
    msg.sys_id = 24491U;
    msg.priority = -123;
    msg.x = 10156;
    msg.y = -11302;
    msg.z = -11909;
    msg.t = -26622;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.6717074450672152;
    tmp_msg_0.x = 0.790743060326227;
    tmp_msg_0.y = 0.3637642297269732;
    tmp_msg_0.z = 0.5903666534077848;
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
    msg.setTimeStamp(0.4948666464088777);
    msg.setSource(60421U);
    msg.setSourceEntity(24U);
    msg.setDestination(61233U);
    msg.setDestinationEntity(222U);
    msg.sys_id = 31323U;
    msg.priority = -25;
    msg.x = 15806;
    msg.y = 31869;
    msg.z = 28894;
    msg.t = -20016;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("IJVQNYWPOFXFTYFPXNRJMSTCROLRCNEFEEYVOWVMCTPFINJONZSKUKUIYD");
    const char tmp_tmp_msg_0_0[] = {36, -96, -64, 103, 7, -52, 123, -97, 67, 95, 109, -51, 78, -51, 45, 69, -55, 103, -27, -28, 124, 29, -68, -2, 121, -77, -107, 98, 50, -27, 71, -91, 17, -42, 49, 31, 113, -83, 8, -34, 53, 55, -104, 29, 107, 68, 2, 80, 80, 77, 104, -66, 87, -33, -103, 44, 64, -89, -6, 28, -46, -70, -38, 0, 41, 94, 121, 44, -122, -73, -12, 68, 49, -63, 25, 4, -66, 12, 112, 63, -30, -12, -95, -111, 106, 17, -82, -97, -36, 6, -126, -26, 35, 105, -60, -33, -56, -105, 67, 87, 30, 59, -7, -126, 92, 13, -127, 54, 47, -71, -112, 92, -6, 15, 62, -70, 115, -20, 4, -57, -2, 46, 26, 36, 78, -69, 81, 84, -128, 31, -64, -25, -53, -125, -46, 28, -67, -68, -80, 83, 124, -30, -23, 15, 40, 80, -73, -10, 85, 59, 124, 81, -36, -114, -3, -22, 109, 68, -127, 13, -57, -99, 59, 77, -25, -17, 90, 124, 31, 115, -74, -85, -5, -26, 106, -16, -70, 89, 101, 29, 4, 78};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.6927550500825674);
    msg.setSource(63811U);
    msg.setSourceEntity(98U);
    msg.setDestination(64266U);
    msg.setDestinationEntity(226U);
    msg.sys_id = 58841U;
    msg.priority = 27;
    msg.x = -19806;
    msg.y = 9963;
    msg.z = -30583;
    msg.t = -4245;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 1566582142U;
    tmp_msg_0.destination.assign("QZZOGVCASPIIMRVHBXVCQXQNYBHKLXFAZHRJSFGMEOJGVGMOZOTIMIZSRCGRQJUSVTYCSLQBFYTDPFBXFOKPXCRAXFUVXDGJDOVURNECATVHDAIKFLBELPMKIIPNFBDSDCFPUNTAAUZOZPNNEKBWHYIBEIJHBJDATUKXNYMYSHEHLCSMUNOTWJZYDJHWWQCYLWDQFDGGRUJMLAKRGUPRBKEOVCWORVLKWZESHLNGYKXTWQNYP");
    tmp_msg_0.timeout = 49841U;
    const char tmp_tmp_msg_0_0[] = {-39, 105, -34, 56, -32, 78, 111, 118, -47, 82, -32, 21, -110, 38, 21, -14, -47, 74, 11, 116, -11, -33, 117, -5, -33, -72, 70, -96, -55, -20, 108, 54, -87, -7, -31, 11, -5, 114, -9, 111, -107, -61, 5, 64, -100, -109};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.34032420355085347);
    msg.setSource(22954U);
    msg.setSourceEntity(86U);
    msg.setDestination(11406U);
    msg.setDestinationEntity(119U);
    msg.req_id = 52245U;
    msg.type = 188U;
    msg.max_size = 9393U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.07167369591816986;
    tmp_msg_0.base_lon = 0.7154665105996367;
    tmp_msg_0.base_time = 0.598606132876349;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 50902U;
    tmp_tmp_msg_0_0.destination = 10824U;
    tmp_tmp_msg_0_0.timeout = 0.8814873191285444;
    IMC::DesiredHeadingRate tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.061512327895273056;
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
    msg.setTimeStamp(0.8910845189164499);
    msg.setSource(33996U);
    msg.setSourceEntity(193U);
    msg.setDestination(19191U);
    msg.setDestinationEntity(206U);
    msg.req_id = 32836U;
    msg.type = 205U;
    msg.max_size = 1953U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7676129994349041;
    tmp_msg_0.base_lon = 0.47451203203857095;
    tmp_msg_0.base_time = 0.317681014031733;
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
    msg.setTimeStamp(0.915490977756574);
    msg.setSource(41308U);
    msg.setSourceEntity(52U);
    msg.setDestination(4614U);
    msg.setDestinationEntity(169U);
    msg.req_id = 48796U;
    msg.type = 54U;
    msg.max_size = 17304U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8747279053704449;
    tmp_msg_0.base_lon = 0.052071523441208245;
    tmp_msg_0.base_time = 0.05062150409738331;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 82U;
    tmp_tmp_msg_0_0.priority = -103;
    tmp_tmp_msg_0_0.x = -12384;
    tmp_tmp_msg_0_0.y = 28807;
    tmp_tmp_msg_0_0.z = 27757;
    tmp_tmp_msg_0_0.t = 17879;
    IMC::DesiredPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.path_ref = 2624515890U;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.863423313286609;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.06037963947986469;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.8814293270609648;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 15U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.6360554515886996;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.6391745120998116;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.1471966647080386;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 77U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8907316166733936;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 228U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.03841033917134129;
    tmp_tmp_tmp_msg_0_0_0.flags = 134U;
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
    msg.setTimeStamp(0.5426271245039037);
    msg.setSource(4546U);
    msg.setSourceEntity(60U);
    msg.setDestination(64291U);
    msg.setDestinationEntity(183U);
    msg.original_source = 44174U;
    msg.destination = 2971U;
    msg.timeout = 0.935878888915089;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.5829979389701163;
    tmp_msg_0.bias_r = 0.5594486764796005;
    tmp_msg_0.cog = 0.3846516200781649;
    tmp_msg_0.cyaw = 0.032023387665237935;
    tmp_msg_0.lbl_rej_level = 0.8705913186647295;
    tmp_msg_0.gps_rej_level = 0.7995390488960362;
    tmp_msg_0.custom_x = 0.9236177849060029;
    tmp_msg_0.custom_y = 0.7188832281087422;
    tmp_msg_0.custom_z = 0.08044266037786785;
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
    msg.setTimeStamp(0.041745071785830756);
    msg.setSource(59698U);
    msg.setSourceEntity(197U);
    msg.setDestination(36024U);
    msg.setDestinationEntity(173U);
    msg.original_source = 15271U;
    msg.destination = 46915U;
    msg.timeout = 0.6048371073599645;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.4682060409463812;
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
    msg.setTimeStamp(0.2292001131836202);
    msg.setSource(45200U);
    msg.setSourceEntity(185U);
    msg.setDestination(53547U);
    msg.setDestinationEntity(63U);
    msg.original_source = 18168U;
    msg.destination = 34729U;
    msg.timeout = 0.8681121096360355;
    IMC::DvlRanges tmp_msg_0;
    tmp_msg_0.direction = 246U;
    tmp_msg_0.range1 = 0.2539691154461544;
    tmp_msg_0.range2 = 0.2737968628890456;
    tmp_msg_0.range3 = 0.12195486587886573;
    tmp_msg_0.range4 = 0.10835970764266412;
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
    msg.setTimeStamp(0.002849118381427762);
    msg.setSource(22417U);
    msg.setSourceEntity(6U);
    msg.setDestination(45929U);
    msg.setDestinationEntity(92U);
    msg.id = 53U;
    msg.range = 0.2319126403304076;

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
    msg.setTimeStamp(0.006065077403519248);
    msg.setSource(40571U);
    msg.setSourceEntity(123U);
    msg.setDestination(33187U);
    msg.setDestinationEntity(19U);
    msg.id = 53U;
    msg.range = 0.5026148620936627;

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
    msg.setTimeStamp(0.6463977371070873);
    msg.setSource(23507U);
    msg.setSourceEntity(114U);
    msg.setDestination(46468U);
    msg.setDestinationEntity(29U);
    msg.id = 97U;
    msg.range = 0.09740593670334807;

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
    msg.setTimeStamp(0.15509587319866147);
    msg.setSource(22408U);
    msg.setSourceEntity(147U);
    msg.setDestination(32706U);
    msg.setDestinationEntity(244U);
    msg.beacon.assign("WTXDGUZVLNAMQXHLCVTISDJBSEFDHNYMABPFRQRNNSIJSGOXLOPJHUYDEIGVWPEMRAOYRFXHJETEFCMYGVQCVCAKIGIJKBNELNRWFQCMOAHXENZJDCTVLKFBUKJMBSIMUZFKXUIZKMCZGLOVUHQZGKCWOE");
    msg.lat = 0.24521349087572097;
    msg.lon = 0.583856038639451;
    msg.depth = 0.7957994106203826;
    msg.query_channel = 53U;
    msg.reply_channel = 85U;
    msg.transponder_delay = 139U;

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
    msg.setTimeStamp(0.08597195097852439);
    msg.setSource(32437U);
    msg.setSourceEntity(4U);
    msg.setDestination(63395U);
    msg.setDestinationEntity(23U);
    msg.beacon.assign("FCFQMCQVVBJCJUQLUTAUYXNVFBJZRMUUWWQLSNZZEHEMFPXVNXDNJDDIQBGPOKOXNKEQHFUXSROPKVTWKPTVDJOLDRFRTBINOOSKGUGQLRRVVLWYKPHBAIGWTETXFODNVELBSWIGAMPYVAIWBJDDUCZICKXGSPZXYZLYRYHPYBXBDWFSHDIMAGQCIJRZPHCLAZAONLMUWSOMNIKSJ");
    msg.lat = 0.9578876736827266;
    msg.lon = 0.29860566547375045;
    msg.depth = 0.7449002974706587;
    msg.query_channel = 125U;
    msg.reply_channel = 249U;
    msg.transponder_delay = 58U;

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
    msg.setTimeStamp(0.9564480078805269);
    msg.setSource(32998U);
    msg.setSourceEntity(160U);
    msg.setDestination(31486U);
    msg.setDestinationEntity(19U);
    msg.beacon.assign("RIJRPHZDBPPHNXRFOSHVTUWWKSMBSKLKQSLSHLUVJTDNOOWFYRATQLDDAEAMVOKGCXQKUBZHNGXIGEUOQBLKKKCQCUTIMZQVGSZICFAQBFYKUEOAFMWQYCIJJYAYDUWXCGXHSNDMAHCPBFINXNJYAJLHONNWOIJZPTDTFQRNUYMSGEIKNWJCTWIEODRYSZAGLYZLEWOPEBXECCTHQPAXXGPTGRYBEFJPFFDZLSPBVTLRMJBGMV");
    msg.lat = 0.5462014630526646;
    msg.lon = 0.43745236538451227;
    msg.depth = 0.23518517886103407;
    msg.query_channel = 151U;
    msg.reply_channel = 162U;
    msg.transponder_delay = 210U;

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
    msg.setTimeStamp(0.6449496868454618);
    msg.setSource(49752U);
    msg.setSourceEntity(94U);
    msg.setDestination(21871U);
    msg.setDestinationEntity(32U);
    msg.op = 157U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SPLZWMALKVDSMNCNBLEVMABQJKFBUJFGOUCJAYWDUZBEEDZBFMIQXXQOYOLVCTMCNRGEHEIHAKJCGYDWUMLMQKRXCZHFSPRFQXQJBSUENXTHXSKABWPJIIZZEDVNDLSTLXGPRFIYXTSWPSIAROGGJOKEYKVIOMDYTOVHJNHIQZYFXTHUSBUUKFQRRGVTPWCPXUCLQVCAPUVVRZN");
    tmp_msg_0.lat = 0.5912601173916152;
    tmp_msg_0.lon = 0.1836908420203308;
    tmp_msg_0.depth = 0.36803326259957714;
    tmp_msg_0.query_channel = 99U;
    tmp_msg_0.reply_channel = 61U;
    tmp_msg_0.transponder_delay = 235U;
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
    msg.setTimeStamp(0.8480348235517016);
    msg.setSource(14183U);
    msg.setSourceEntity(97U);
    msg.setDestination(47122U);
    msg.setDestinationEntity(245U);
    msg.op = 212U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HPFQJPQEUTJXJUXXWSCSFPTOWOZTMPAYGPIVXLJPFCRWDZFKTCLZBTBWKNLYZDHGXRUBAYEQXVWKRHOHPZYKDCIRORMAYVYDIEAZFYYMQMQFLNTNEVDASBBARZWEMUZ");
    tmp_msg_0.lat = 0.39535118656294654;
    tmp_msg_0.lon = 0.7478729443103981;
    tmp_msg_0.depth = 0.5813504801955295;
    tmp_msg_0.query_channel = 197U;
    tmp_msg_0.reply_channel = 103U;
    tmp_msg_0.transponder_delay = 187U;
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
    msg.setTimeStamp(0.27005538839695775);
    msg.setSource(33672U);
    msg.setSourceEntity(147U);
    msg.setDestination(27903U);
    msg.setDestinationEntity(223U);
    msg.op = 190U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SSYTIOCBNUJFASLNTUJEQWPHEWKDCWDKWCK");
    tmp_msg_0.lat = 0.2564048168206138;
    tmp_msg_0.lon = 0.60123638364367;
    tmp_msg_0.depth = 0.08920441066394247;
    tmp_msg_0.query_channel = 195U;
    tmp_msg_0.reply_channel = 157U;
    tmp_msg_0.transponder_delay = 203U;
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
    msg.setTimeStamp(0.12218855336957102);
    msg.setSource(14U);
    msg.setSourceEntity(74U);
    msg.setDestination(1063U);
    msg.setDestinationEntity(34U);
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 47U;
    tmp_msg_0.quality = 134U;
    tmp_msg_0.reps = 149U;
    tmp_msg_0.tsize = 158U;
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
    msg.setTimeStamp(0.304020964342519);
    msg.setSource(26966U);
    msg.setSourceEntity(193U);
    msg.setDestination(61672U);
    msg.setDestinationEntity(191U);
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 53672U;
    tmp_msg_0.lat = 0.454601224096882;
    tmp_msg_0.lon = 0.6353846270341424;
    tmp_msg_0.z = 0.7291789839770306;
    tmp_msg_0.z_units = 142U;
    tmp_msg_0.speed = 0.09257234814086956;
    tmp_msg_0.speed_units = 132U;
    tmp_msg_0.duration = 1835U;
    tmp_msg_0.radius = 0.8816088421564979;
    tmp_msg_0.flags = 181U;
    tmp_msg_0.custom.assign("CQIXBRJJGBRASZSAAPDNZZLXGNPGHVEPWHSTTKTORVEDXKMKBZTHYSTWWCWVUCKQUYQKXFSUTKLXKPIXSBCZPBFMHYRPFFSZNQOLJPBZAIZLGXKRHOELGLDURPOFRAMLEYMOFHLVEWUTKVFAZEWLIDWYYCXWVUCCGGHNVMVSQFNBAQIEAYUBYCGJDQRQ");
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
    msg.setTimeStamp(0.23693256129995055);
    msg.setSource(51672U);
    msg.setSourceEntity(206U);
    msg.setDestination(40479U);
    msg.setDestinationEntity(52U);
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.8305845988778314;
    tmp_msg_0.units = 143U;
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
    msg.setTimeStamp(0.00616773993826647);
    msg.setSource(61639U);
    msg.setSourceEntity(190U);
    msg.setDestination(65230U);
    msg.setDestinationEntity(97U);
    msg.op = 88U;
    msg.system.assign("BQJJXPEUORWXUIYTQCVFAVPZIDXDGYBHDKQUJBCKRCOSQFETCOYSMVNGIAAIMVNZVDOSTZXJIQTZELRZLTAWYREGFASOWSXWIWYCRFUHXUSIPCSCRKHEGIMNAJVLLLGUOIOSWMOXHKYGUYPAXHMCWQMTGNSBQDXFBJBNMKVJMFRRN");
    msg.range = 0.1186227194398537;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5418997353663205;
    tmp_msg_0.lon = 0.7771575852325562;
    tmp_msg_0.alt = 0.2546083048527522;
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
    msg.setTimeStamp(0.5864387850736008);
    msg.setSource(7475U);
    msg.setSourceEntity(109U);
    msg.setDestination(15061U);
    msg.setDestinationEntity(178U);
    msg.op = 109U;
    msg.system.assign("PXBBRKKLWDXWPBOUBPKWCSXOAASGURMBSWUORHCGDRTBJCSZBJEKYYFCVZRFCELFLHFVNWINFRMMPQQKYFDYTUNPHNVHPTZALIPUTGSSMDVEZEJPJWNFILXCLKYOSDKAXHAXBUNBNMDHIDBJORTMVISWALKOGQLUIDXQPCQWOIAHWEFEONOFAGMJLTJRZEACDTLZYHVGVGZCTXIG");
    msg.range = 0.05858335349743138;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.82257484683556;
    tmp_msg_0.lon = 0.34750190041643325;
    tmp_msg_0.alt = 0.521276936509474;
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
    msg.setTimeStamp(0.6540890341869435);
    msg.setSource(22680U);
    msg.setSourceEntity(24U);
    msg.setDestination(62032U);
    msg.setDestinationEntity(32U);
    msg.op = 251U;
    msg.system.assign("JIHKYNPAZZSJWJMWUKTUYTQYHGHGNRPKAGTM");
    msg.range = 0.04905084165170115;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("MBWOREUOFYMSESZRNENLWILYDYGKINGTCQVABV");
    tmp_tmp_msg_0_0.lat = 0.9948444460622111;
    tmp_tmp_msg_0_0.lon = 0.04917388073772744;
    tmp_tmp_msg_0_0.depth = 0.1857183683111885;
    tmp_tmp_msg_0_0.query_channel = 18U;
    tmp_tmp_msg_0_0.reply_channel = 131U;
    tmp_tmp_msg_0_0.transponder_delay = 148U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.6336202073139583;
    tmp_msg_0.y = 0.9526798054855349;
    tmp_msg_0.var_x = 0.8168958951498886;
    tmp_msg_0.var_y = 0.9304007068641881;
    tmp_msg_0.distance = 0.2897467699291556;
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
    msg.setTimeStamp(0.4739925708863636);
    msg.setSource(62650U);
    msg.setSourceEntity(195U);
    msg.setDestination(16246U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.02211817241269176);
    msg.setSource(14571U);
    msg.setSourceEntity(230U);
    msg.setDestination(23114U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.8543309120729806);
    msg.setSource(8302U);
    msg.setSourceEntity(149U);
    msg.setDestination(56591U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.6192550811180121);
    msg.setSource(60996U);
    msg.setSourceEntity(76U);
    msg.setDestination(16169U);
    msg.setDestinationEntity(44U);
    msg.list.assign("CARPKXAWVLFKLIZZMCEDGBDHJSKLIJBXEIEROKSCIQJSLZSBOPYYPQSXJNYLTRHQMWDTUDYKNCGLTBSJTVKCFJF");

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
    msg.setTimeStamp(0.40059093225315756);
    msg.setSource(50271U);
    msg.setSourceEntity(77U);
    msg.setDestination(63174U);
    msg.setDestinationEntity(240U);
    msg.list.assign("DTBJYWWMILQOJISZBQGJPIBZPKFLNRMVOHYAMRZDYTIVQXHULSECZOGIUCTIXZHSFLIPTUMKHLFEZGJBRNJPNQVFOTDVYFFROCXGQSTZDPHKJGDLKNFJJRTLOYAUXAAYVEEBQIUVLRIWKZHZQLYCNEVMPNVHCDQOCSW");

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
    msg.setTimeStamp(0.21703051120875638);
    msg.setSource(3710U);
    msg.setSourceEntity(84U);
    msg.setDestination(58310U);
    msg.setDestinationEntity(33U);
    msg.list.assign("HDEHNKUKSUMTWOXCABSYHLVUCKSEOBRXOGYRBURQXZTBQNVWUMTZDHDIJCGEACQZFZQKJPIAXFMEDSXSQVZGHYBVWOHGWTNVYFHZFYMQALRALNNGEWOKOFZMMNFIJAYOSRMJAABQTREEURKL");

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
    msg.setTimeStamp(0.5910718508930083);
    msg.setSource(57908U);
    msg.setSourceEntity(215U);
    msg.setDestination(63684U);
    msg.setDestinationEntity(148U);
    msg.peer.assign("ZCSETPOWLOEDIVUWNRWTV");
    msg.rssi = 0.238082118025723;
    msg.integrity = 21658U;

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
    msg.setTimeStamp(0.3737226872594349);
    msg.setSource(12687U);
    msg.setSourceEntity(141U);
    msg.setDestination(49747U);
    msg.setDestinationEntity(64U);
    msg.peer.assign("FPHGFVLQCWDJCSKYGZXIBOGQCPOEQRACHIRBFPCHNNGXOJJGVOMUTIBJZNITJEDAIDIEAZIEERWTYKMQDXPTMUZLBGSTKJDCKVKOSRORNPAQOINXMZSWDJKTUHGIJYBBJFUUVGFYVKPAUTVHBVLRAWOMWYGEEYBCGLXMNZSTVHKTKHIMLZFJQWULZYWCNUUCFYLQWNDADEPDTDYOYZEMFAPRLRSSXQMXUQHSSBQMRNBFLRHWOLVFC");
    msg.rssi = 0.518619041765427;
    msg.integrity = 2024U;

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
    msg.setTimeStamp(0.5035432145342965);
    msg.setSource(11681U);
    msg.setSourceEntity(116U);
    msg.setDestination(47647U);
    msg.setDestinationEntity(201U);
    msg.peer.assign("RPJATKFWLADWGQODKUQQFADBNFACXUDVNRAMXXLEBUARJCIHHGECMSIXLGOVFPMOURTQDESHLKIPNFQGYHYGZCNJMPQCWKIGJWMPCLXOSJKOOKHCCSBMVOUNPJUNNOIXMPQFJGMTZPTUQJILTESKLYVZPHZABNWOHWBRFVNXMRFTEHEXYVGEIVDXWBBBJBJTYZRNYWAPCLYUSDVVIDGKQQTTCORYREVEZDHFKTAZKDIEUFZHMLIGWWLSSBURX");
    msg.rssi = 0.5264361825405147;
    msg.integrity = 38340U;

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
    msg.setTimeStamp(0.3058116980984489);
    msg.setSource(21800U);
    msg.setSourceEntity(174U);
    msg.setDestination(20663U);
    msg.setDestinationEntity(247U);
    msg.value = 12423;

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
    msg.setTimeStamp(0.7121682441436323);
    msg.setSource(56986U);
    msg.setSourceEntity(164U);
    msg.setDestination(62243U);
    msg.setDestinationEntity(56U);
    msg.value = -20858;

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
    msg.setTimeStamp(0.43924988229149453);
    msg.setSource(19050U);
    msg.setSourceEntity(252U);
    msg.setDestination(18994U);
    msg.setDestinationEntity(34U);
    msg.value = -11178;

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
    msg.setTimeStamp(0.07573120810418121);
    msg.setSource(26335U);
    msg.setSourceEntity(39U);
    msg.setDestination(11188U);
    msg.setDestinationEntity(112U);
    msg.value = 0.8344244321544705;

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
    msg.setTimeStamp(0.9788572845524596);
    msg.setSource(47675U);
    msg.setSourceEntity(197U);
    msg.setDestination(46613U);
    msg.setDestinationEntity(165U);
    msg.value = 0.30371187976942915;

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
    msg.setTimeStamp(0.0962261645916791);
    msg.setSource(23299U);
    msg.setSourceEntity(36U);
    msg.setDestination(53904U);
    msg.setDestinationEntity(101U);
    msg.value = 0.5092675528406615;

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
    msg.setTimeStamp(0.8074389196596032);
    msg.setSource(46028U);
    msg.setSourceEntity(30U);
    msg.setDestination(65109U);
    msg.setDestinationEntity(54U);
    msg.value = 0.46557924639643733;

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
    msg.setTimeStamp(0.8564815276707864);
    msg.setSource(12939U);
    msg.setSourceEntity(249U);
    msg.setDestination(65180U);
    msg.setDestinationEntity(194U);
    msg.value = 0.04347349999190164;

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
    msg.setTimeStamp(0.7422746107821969);
    msg.setSource(57836U);
    msg.setSourceEntity(60U);
    msg.setDestination(8186U);
    msg.setDestinationEntity(126U);
    msg.value = 0.5781708779201103;

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
    msg.setTimeStamp(0.2229139596041967);
    msg.setSource(63670U);
    msg.setSourceEntity(248U);
    msg.setDestination(5442U);
    msg.setDestinationEntity(134U);
    msg.validity = 7941U;
    msg.type = 28U;
    msg.utc_year = 1692U;
    msg.utc_month = 150U;
    msg.utc_day = 2U;
    msg.utc_time = 0.4426778236518558;
    msg.lat = 0.48636377002323206;
    msg.lon = 0.7903164416224084;
    msg.height = 0.6600915908612144;
    msg.satellites = 105U;
    msg.cog = 0.32190670429786306;
    msg.sog = 0.7493137207994136;
    msg.hdop = 0.48960171928699436;
    msg.vdop = 0.01727161793899501;
    msg.hacc = 0.32927450898004196;
    msg.vacc = 0.8583535316901124;

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
    msg.setTimeStamp(0.8065540504840081);
    msg.setSource(4164U);
    msg.setSourceEntity(202U);
    msg.setDestination(27700U);
    msg.setDestinationEntity(179U);
    msg.validity = 42212U;
    msg.type = 250U;
    msg.utc_year = 13108U;
    msg.utc_month = 210U;
    msg.utc_day = 216U;
    msg.utc_time = 0.3760803698016014;
    msg.lat = 0.7402260516394594;
    msg.lon = 0.34388051831154864;
    msg.height = 0.22109207204498071;
    msg.satellites = 53U;
    msg.cog = 0.8298552074242099;
    msg.sog = 0.4554984749221265;
    msg.hdop = 0.6730753486354895;
    msg.vdop = 0.20903266930453435;
    msg.hacc = 0.5246612276307138;
    msg.vacc = 0.06460854343709499;

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
    msg.setTimeStamp(0.5385977265687226);
    msg.setSource(6630U);
    msg.setSourceEntity(43U);
    msg.setDestination(5285U);
    msg.setDestinationEntity(117U);
    msg.validity = 2072U;
    msg.type = 77U;
    msg.utc_year = 27667U;
    msg.utc_month = 234U;
    msg.utc_day = 107U;
    msg.utc_time = 0.18597908464246704;
    msg.lat = 0.08739561409388263;
    msg.lon = 0.061897444681460634;
    msg.height = 0.2634279426899313;
    msg.satellites = 15U;
    msg.cog = 0.5774296068366553;
    msg.sog = 0.5375390091033521;
    msg.hdop = 0.8789842887845858;
    msg.vdop = 0.4161625875157532;
    msg.hacc = 0.8831684447872387;
    msg.vacc = 0.4102069827540856;

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
    msg.setTimeStamp(0.6106091385492922);
    msg.setSource(22401U);
    msg.setSourceEntity(126U);
    msg.setDestination(6772U);
    msg.setDestinationEntity(36U);
    msg.time = 0.048097896083639124;
    msg.phi = 0.431314944294238;
    msg.theta = 0.8337992302090487;
    msg.psi = 0.6876420104012354;
    msg.psi_magnetic = 0.03493672076929499;

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
    msg.setTimeStamp(0.32954227235598244);
    msg.setSource(59732U);
    msg.setSourceEntity(105U);
    msg.setDestination(30257U);
    msg.setDestinationEntity(33U);
    msg.time = 0.8609623846081417;
    msg.phi = 0.2256222469713186;
    msg.theta = 0.37072154113739153;
    msg.psi = 0.3862700508445551;
    msg.psi_magnetic = 0.19365723380124977;

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
    msg.setTimeStamp(0.539541520989434);
    msg.setSource(21551U);
    msg.setSourceEntity(208U);
    msg.setDestination(26173U);
    msg.setDestinationEntity(176U);
    msg.time = 0.7281628484547685;
    msg.phi = 0.44108605590934846;
    msg.theta = 0.9979115650222138;
    msg.psi = 0.1368843291009988;
    msg.psi_magnetic = 0.8752452513255325;

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
    msg.setTimeStamp(0.997649247099855);
    msg.setSource(31483U);
    msg.setSourceEntity(238U);
    msg.setDestination(14542U);
    msg.setDestinationEntity(53U);
    msg.time = 0.4176605678756292;
    msg.x = 0.9050962984906102;
    msg.y = 0.7853890106906126;
    msg.z = 0.4979198676915595;
    msg.timestep = 0.3646730279422946;

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
    msg.setTimeStamp(0.6256660102085152);
    msg.setSource(51752U);
    msg.setSourceEntity(232U);
    msg.setDestination(21622U);
    msg.setDestinationEntity(61U);
    msg.time = 0.19501878250534677;
    msg.x = 0.2694775218728326;
    msg.y = 0.7849542016450576;
    msg.z = 0.2779220416205058;
    msg.timestep = 0.6974864176291445;

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
    msg.setTimeStamp(0.6932494891909498);
    msg.setSource(27858U);
    msg.setSourceEntity(85U);
    msg.setDestination(10207U);
    msg.setDestinationEntity(83U);
    msg.time = 0.3224739668290809;
    msg.x = 0.619874665778613;
    msg.y = 0.20934109213281715;
    msg.z = 0.7096896365634098;
    msg.timestep = 0.4184291083661893;

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
    msg.setTimeStamp(0.4255689320100696);
    msg.setSource(710U);
    msg.setSourceEntity(250U);
    msg.setDestination(35306U);
    msg.setDestinationEntity(183U);
    msg.time = 0.03822457102128751;
    msg.x = 0.35098191800315504;
    msg.y = 0.386606459625782;
    msg.z = 0.6244904078612167;

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
    msg.setTimeStamp(0.10045357668869948);
    msg.setSource(23449U);
    msg.setSourceEntity(37U);
    msg.setDestination(24508U);
    msg.setDestinationEntity(192U);
    msg.time = 0.35338150833702897;
    msg.x = 0.174756098482847;
    msg.y = 0.058117843845629014;
    msg.z = 0.9166459793658129;

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
    msg.setTimeStamp(0.9290999745412605);
    msg.setSource(51415U);
    msg.setSourceEntity(191U);
    msg.setDestination(13198U);
    msg.setDestinationEntity(149U);
    msg.time = 0.7962400197639492;
    msg.x = 0.8777200561639645;
    msg.y = 0.9877569798270753;
    msg.z = 0.6515914872409222;

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
    msg.setTimeStamp(0.5099999635029439);
    msg.setSource(37991U);
    msg.setSourceEntity(61U);
    msg.setDestination(33696U);
    msg.setDestinationEntity(0U);
    msg.time = 0.47993128743363844;
    msg.x = 0.21615176967614946;
    msg.y = 0.4249263328158053;
    msg.z = 0.31079690786604053;

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
    msg.setTimeStamp(0.5726239349867553);
    msg.setSource(34582U);
    msg.setSourceEntity(131U);
    msg.setDestination(25800U);
    msg.setDestinationEntity(18U);
    msg.time = 0.9494672215922212;
    msg.x = 0.5204262138794534;
    msg.y = 0.9474194884210655;
    msg.z = 0.3805592563689294;

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
    msg.setTimeStamp(0.8892856511653958);
    msg.setSource(41984U);
    msg.setSourceEntity(118U);
    msg.setDestination(6719U);
    msg.setDestinationEntity(171U);
    msg.time = 0.4372823510274343;
    msg.x = 0.838530490110277;
    msg.y = 0.956966451144451;
    msg.z = 0.8280328439555468;

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
    msg.setTimeStamp(0.833704346732692);
    msg.setSource(57062U);
    msg.setSourceEntity(87U);
    msg.setDestination(51628U);
    msg.setDestinationEntity(101U);
    msg.time = 0.8812270135701894;
    msg.x = 0.4745591221055515;
    msg.y = 0.7488458063340041;
    msg.z = 0.38032208229355446;

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
    msg.setTimeStamp(0.11714349566887716);
    msg.setSource(13461U);
    msg.setSourceEntity(177U);
    msg.setDestination(24439U);
    msg.setDestinationEntity(167U);
    msg.time = 0.7908930306681665;
    msg.x = 0.8498133502561238;
    msg.y = 0.19335670686221085;
    msg.z = 0.2678594755587371;

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
    msg.setTimeStamp(0.4250354032552336);
    msg.setSource(46421U);
    msg.setSourceEntity(16U);
    msg.setDestination(8014U);
    msg.setDestinationEntity(44U);
    msg.time = 0.43693901578467875;
    msg.x = 0.29624978636183763;
    msg.y = 0.8769242296614159;
    msg.z = 0.17530172190439863;

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
    msg.setTimeStamp(0.18956578858761208);
    msg.setSource(7872U);
    msg.setSourceEntity(154U);
    msg.setDestination(49390U);
    msg.setDestinationEntity(88U);
    msg.validity = 22U;
    msg.x = 0.22830167362973797;
    msg.y = 0.5675841531610731;
    msg.z = 0.615584396760264;

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
    msg.setTimeStamp(0.7905459822868803);
    msg.setSource(30478U);
    msg.setSourceEntity(113U);
    msg.setDestination(2490U);
    msg.setDestinationEntity(137U);
    msg.validity = 135U;
    msg.x = 0.38959559603788707;
    msg.y = 0.135084145948699;
    msg.z = 0.8232049147699468;

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
    msg.setTimeStamp(0.7636318499263333);
    msg.setSource(14927U);
    msg.setSourceEntity(117U);
    msg.setDestination(26234U);
    msg.setDestinationEntity(242U);
    msg.validity = 158U;
    msg.x = 0.06907934727406395;
    msg.y = 0.7870319140152258;
    msg.z = 0.4190878011277467;

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
    msg.setTimeStamp(0.18647828665495225);
    msg.setSource(46209U);
    msg.setSourceEntity(250U);
    msg.setDestination(49291U);
    msg.setDestinationEntity(176U);
    msg.validity = 185U;
    msg.x = 0.13804856658514286;
    msg.y = 0.19163272860755765;
    msg.z = 0.38479084794331697;

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
    msg.setTimeStamp(0.23486692489330308);
    msg.setSource(56462U);
    msg.setSourceEntity(93U);
    msg.setDestination(60878U);
    msg.setDestinationEntity(249U);
    msg.validity = 2U;
    msg.x = 0.5509126189526518;
    msg.y = 0.9852273281566242;
    msg.z = 0.9009781115422272;

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
    msg.setTimeStamp(0.4067698603364721);
    msg.setSource(6848U);
    msg.setSourceEntity(244U);
    msg.setDestination(27743U);
    msg.setDestinationEntity(141U);
    msg.validity = 227U;
    msg.x = 0.9301191582582243;
    msg.y = 0.46759240449937844;
    msg.z = 0.0037051672071881647;

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
    msg.setTimeStamp(0.7270996120507836);
    msg.setSource(20728U);
    msg.setSourceEntity(56U);
    msg.setDestination(943U);
    msg.setDestinationEntity(58U);
    msg.time = 0.7807647580349635;
    msg.x = 0.41769811130420265;
    msg.y = 0.5872168212751478;
    msg.z = 0.47531244565253794;

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
    msg.setTimeStamp(0.9537122504242818);
    msg.setSource(11569U);
    msg.setSourceEntity(222U);
    msg.setDestination(14973U);
    msg.setDestinationEntity(30U);
    msg.time = 0.12181273515579394;
    msg.x = 0.9651176832595998;
    msg.y = 0.21027252401257446;
    msg.z = 0.6442236533658323;

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
    msg.setTimeStamp(0.8942454608104006);
    msg.setSource(14603U);
    msg.setSourceEntity(179U);
    msg.setDestination(10633U);
    msg.setDestinationEntity(138U);
    msg.time = 0.8508252828771949;
    msg.x = 0.3394665867392588;
    msg.y = 0.90101853155539;
    msg.z = 0.9529703698986167;

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
    msg.setTimeStamp(0.6638818433821504);
    msg.setSource(18445U);
    msg.setSourceEntity(136U);
    msg.setDestination(55017U);
    msg.setDestinationEntity(160U);
    msg.validity = 64U;
    msg.value = 0.5755414554081505;

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
    msg.setTimeStamp(0.635548466444898);
    msg.setSource(49230U);
    msg.setSourceEntity(61U);
    msg.setDestination(14285U);
    msg.setDestinationEntity(70U);
    msg.validity = 125U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.1546349949014233;
    tmp_msg_0.beam_height = 0.9500970438400067;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.21509066959868084;

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
    msg.setTimeStamp(0.6433831972001237);
    msg.setSource(36235U);
    msg.setSourceEntity(37U);
    msg.setDestination(33904U);
    msg.setDestinationEntity(5U);
    msg.validity = 144U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.520274469952588;
    tmp_msg_0.y = 0.49800536417659536;
    tmp_msg_0.z = 0.19796880224667712;
    tmp_msg_0.phi = 0.9517718843076255;
    tmp_msg_0.theta = 0.6735726429764394;
    tmp_msg_0.psi = 0.772236564135391;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.7598212250933334;
    tmp_msg_1.beam_height = 0.36018959043012044;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.810678712285245;

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
    msg.setTimeStamp(0.5650510760262923);
    msg.setSource(52958U);
    msg.setSourceEntity(90U);
    msg.setDestination(23056U);
    msg.setDestinationEntity(227U);
    msg.value = 0.13681283198691507;

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
    msg.setTimeStamp(0.3430845437139105);
    msg.setSource(43380U);
    msg.setSourceEntity(16U);
    msg.setDestination(351U);
    msg.setDestinationEntity(77U);
    msg.value = 0.39438057952647465;

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
    msg.setTimeStamp(0.4983268505557623);
    msg.setSource(53193U);
    msg.setSourceEntity(127U);
    msg.setDestination(61370U);
    msg.setDestinationEntity(209U);
    msg.value = 0.7501281041846503;

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
    msg.setTimeStamp(0.14253429395981598);
    msg.setSource(14256U);
    msg.setSourceEntity(34U);
    msg.setDestination(17433U);
    msg.setDestinationEntity(68U);
    msg.value = 0.9678233902431337;

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
    msg.setTimeStamp(0.8548709186029005);
    msg.setSource(40362U);
    msg.setSourceEntity(64U);
    msg.setDestination(11456U);
    msg.setDestinationEntity(151U);
    msg.value = 0.6048860948447472;

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
    msg.setTimeStamp(0.5581505426485511);
    msg.setSource(55629U);
    msg.setSourceEntity(194U);
    msg.setDestination(14426U);
    msg.setDestinationEntity(242U);
    msg.value = 0.6348585696023141;

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
    msg.setTimeStamp(0.003945576696929298);
    msg.setSource(26064U);
    msg.setSourceEntity(192U);
    msg.setDestination(41396U);
    msg.setDestinationEntity(14U);
    msg.value = 0.19053447617158292;

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
    msg.setTimeStamp(0.1415116820484179);
    msg.setSource(40575U);
    msg.setSourceEntity(61U);
    msg.setDestination(63797U);
    msg.setDestinationEntity(223U);
    msg.value = 0.7880715693874338;

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
    msg.setTimeStamp(0.5970293736358264);
    msg.setSource(13141U);
    msg.setSourceEntity(17U);
    msg.setDestination(23754U);
    msg.setDestinationEntity(253U);
    msg.value = 0.7035554641150453;

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
    msg.setTimeStamp(0.190777751473591);
    msg.setSource(35404U);
    msg.setSourceEntity(90U);
    msg.setDestination(62284U);
    msg.setDestinationEntity(57U);
    msg.value = 0.9172032840117131;

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
    msg.setTimeStamp(0.576496084965916);
    msg.setSource(11391U);
    msg.setSourceEntity(235U);
    msg.setDestination(9588U);
    msg.setDestinationEntity(165U);
    msg.value = 0.05241046840960806;

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
    msg.setTimeStamp(0.6968499499502476);
    msg.setSource(40875U);
    msg.setSourceEntity(22U);
    msg.setDestination(1889U);
    msg.setDestinationEntity(244U);
    msg.value = 0.5578819609170504;

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
    msg.setTimeStamp(0.07012665065474855);
    msg.setSource(37U);
    msg.setSourceEntity(206U);
    msg.setDestination(29610U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6664924381804372;

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
    msg.setTimeStamp(0.3973897044297765);
    msg.setSource(62351U);
    msg.setSourceEntity(154U);
    msg.setDestination(34506U);
    msg.setDestinationEntity(138U);
    msg.value = 0.44321401520847126;

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
    msg.setTimeStamp(0.7324015772439565);
    msg.setSource(31872U);
    msg.setSourceEntity(22U);
    msg.setDestination(10222U);
    msg.setDestinationEntity(249U);
    msg.value = 0.32592706118490566;

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
    msg.setTimeStamp(0.16324635707129453);
    msg.setSource(55590U);
    msg.setSourceEntity(86U);
    msg.setDestination(60875U);
    msg.setDestinationEntity(181U);
    msg.value = 0.975624561192486;

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
    msg.setTimeStamp(0.23419630072876263);
    msg.setSource(1379U);
    msg.setSourceEntity(183U);
    msg.setDestination(655U);
    msg.setDestinationEntity(23U);
    msg.value = 0.9021973395166114;

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
    msg.setTimeStamp(0.46148605002749665);
    msg.setSource(62693U);
    msg.setSourceEntity(48U);
    msg.setDestination(58543U);
    msg.setDestinationEntity(205U);
    msg.value = 0.30235419808785047;

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
    msg.setTimeStamp(0.8408721694264611);
    msg.setSource(8743U);
    msg.setSourceEntity(80U);
    msg.setDestination(53196U);
    msg.setDestinationEntity(56U);
    msg.value = 0.3026345161198807;

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
    msg.setTimeStamp(0.046475416980480744);
    msg.setSource(31801U);
    msg.setSourceEntity(64U);
    msg.setDestination(3305U);
    msg.setDestinationEntity(57U);
    msg.value = 0.605751455145107;

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
    msg.setTimeStamp(0.6642357640198361);
    msg.setSource(36304U);
    msg.setSourceEntity(251U);
    msg.setDestination(33134U);
    msg.setDestinationEntity(219U);
    msg.value = 0.2482128874261692;

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
    msg.setTimeStamp(0.31363767058457703);
    msg.setSource(55682U);
    msg.setSourceEntity(218U);
    msg.setDestination(55842U);
    msg.setDestinationEntity(123U);
    msg.value = 0.36699966341251933;

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
    msg.setTimeStamp(0.284916210079747);
    msg.setSource(39954U);
    msg.setSourceEntity(215U);
    msg.setDestination(9400U);
    msg.setDestinationEntity(205U);
    msg.value = 0.22968794212472632;

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
    msg.setTimeStamp(0.6436492803875403);
    msg.setSource(40093U);
    msg.setSourceEntity(226U);
    msg.setDestination(55238U);
    msg.setDestinationEntity(89U);
    msg.value = 0.49665153814090623;

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
    msg.setTimeStamp(0.025713309708818688);
    msg.setSource(949U);
    msg.setSourceEntity(182U);
    msg.setDestination(16519U);
    msg.setDestinationEntity(146U);
    msg.direction = 0.2995007302794327;
    msg.speed = 0.3040125419864498;
    msg.turbulence = 0.50403663485085;

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
    msg.setTimeStamp(0.5077580778825422);
    msg.setSource(10180U);
    msg.setSourceEntity(160U);
    msg.setDestination(638U);
    msg.setDestinationEntity(247U);
    msg.direction = 0.990813874322589;
    msg.speed = 0.9634710142242304;
    msg.turbulence = 0.026344781037217935;

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
    msg.setTimeStamp(0.07427230858204126);
    msg.setSource(58706U);
    msg.setSourceEntity(78U);
    msg.setDestination(22930U);
    msg.setDestinationEntity(75U);
    msg.direction = 0.3235686266757637;
    msg.speed = 0.642562428471601;
    msg.turbulence = 0.626373885110727;

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
    msg.setTimeStamp(0.45301461173747004);
    msg.setSource(65446U);
    msg.setSourceEntity(67U);
    msg.setDestination(37099U);
    msg.setDestinationEntity(144U);
    msg.value = 0.2493949549537321;

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
    msg.setTimeStamp(0.5752476680103835);
    msg.setSource(23137U);
    msg.setSourceEntity(116U);
    msg.setDestination(60816U);
    msg.setDestinationEntity(30U);
    msg.value = 0.05342035345389884;

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
    msg.setTimeStamp(0.35300894887614787);
    msg.setSource(61518U);
    msg.setSourceEntity(34U);
    msg.setDestination(5484U);
    msg.setDestinationEntity(142U);
    msg.value = 0.7454345658783267;

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
    msg.setTimeStamp(0.3858732860833346);
    msg.setSource(38826U);
    msg.setSourceEntity(237U);
    msg.setDestination(27193U);
    msg.setDestinationEntity(239U);
    msg.value.assign("ULNALDCNXLYYQPJOLACVDNJZYRUGCHDFGGBHCZAYUDOUFZRMGZQTKONGUSYJMQZIXMSMLPRBWIPHCETBUBFXCSKBCQWBHTWHOTFZQEMRYTZHYETXAPIQKIFCRU");

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
    msg.setTimeStamp(0.29812359437895997);
    msg.setSource(61174U);
    msg.setSourceEntity(233U);
    msg.setDestination(51547U);
    msg.setDestinationEntity(95U);
    msg.value.assign("FUJJHOOMSOYMSMXPJXPUSSKDIABORYZNERGFGIETLYJZHNCMNTQFTJCDAWRYIVWRKHEVPXBOHLLCKUEWBYEUNQBLGTWZCQVCKGHBMFZRQIKPAPX");

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
    msg.setTimeStamp(0.8395272889716249);
    msg.setSource(39017U);
    msg.setSourceEntity(205U);
    msg.setDestination(27459U);
    msg.setDestinationEntity(31U);
    msg.value.assign("RYXNQQKAZARUBNSPGYGUNNRCDACPTWZLFEARTGYDWWVDVFBYOAUNDTUIKVFTOKCHRAYKOWVJPMTIVFNSINRPTSQSOOKLHGXFZFXLELWXJGCEVGTEPDQEVMKCSWZMOGRIXABCJTHMYWUBDMRBJWDAHXRURYSBDKMCQLUIEUFUJIQWLJOVVXWPINLQBMCBTZZGPZLDAKXEQXJZLZMIVYJFCMHOPZOBHUFSQEXBKSEGFKITQHPHPSILNNDO");

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
    msg.setTimeStamp(0.8650912269590212);
    msg.setSource(23947U);
    msg.setSourceEntity(126U);
    msg.setDestination(26903U);
    msg.setDestinationEntity(217U);
    const char tmp_msg_0[] = {-20, -125, 105, 54, -68, -124, -86, 108, -107, -102, 120, -78, -71, 66, 114, -127, 45, 92, -98, -111, 35, -95, 124, 24, -32, 45, 102, -125, 108, 44, -67, -48, 36, 25, -28, 36, 39, 77, -15, 26, 72, 55, 70, 93, 73, -91, -64, -86, -44, -97, 64, 57, -88, 92, 17, -95, 59, -5, -107, 57, -111, -58, -73, -65, -6, 69, -46, -41, 29, -102, 119, 31, -45, -29, 114, -94, 13, 121, -5, -45, 42, 51, 5, 97, -85, -57, -74, 124, 87, -17, 53, 124, 23, -46, -29, -119, 52, 16, 27, -103, -89, -128, 69, 77, -85, 103, 92, 36, -114, 86, -53, -78, 6, 32, -82, 97, 50, 98, -107, 102, 8, 97, -3};
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
    msg.setTimeStamp(0.9137268634737721);
    msg.setSource(24264U);
    msg.setSourceEntity(69U);
    msg.setDestination(59783U);
    msg.setDestinationEntity(133U);
    const char tmp_msg_0[] = {52, -25, -111, -61, 106, -79, 112, -95, -76, 40, -49, 4, -62, 35, 47, -65, 1, -27, -60, -109, -12, -107, -85, 64, -94, -80, -105, 125, 45, -102, 91, -20, -18, -108, -73, -82, -25, -31, 29, 27, 102, 18, 34, -112, -10, -52, -121, -22, -109, 83, 78, -33, -48, 104, -110, 58, 118, 13, -11, -6, -90, -93, -21, -36, 25, 92, 9, -67, -91, -57, -90, -45, 87};
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
    msg.setTimeStamp(0.2610026050740415);
    msg.setSource(11892U);
    msg.setSourceEntity(110U);
    msg.setDestination(44272U);
    msg.setDestinationEntity(147U);
    const char tmp_msg_0[] = {-126, -84, 9, 111, 42, 68, 18, 44, -89, -16, -92, -71, 32, 115, 110, -41, 69, 121, 63, -10, -64, -17, -74, -125, -78, -59, -15, 118, 75, -108, -62, -40, 107, 68, 79, -71, -28, 89, 103, 77, 29, 78, 62, -65, -80, -95, -101, 15, -22, 123, -105, -23, 106, 117, -16, -74, -50, -29, 30, -95, -75, 31, 30};
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
    msg.setTimeStamp(0.8198829593969922);
    msg.setSource(5179U);
    msg.setSourceEntity(247U);
    msg.setDestination(8936U);
    msg.setDestinationEntity(93U);
    msg.type = 97U;
    msg.frequency = 3937504770U;
    msg.min_range = 44121U;
    msg.max_range = 55243U;
    msg.bits_per_point = 61U;
    msg.scale_factor = 0.8939042239894783;
    const char tmp_msg_0[] = {-23, 99, -19, 119, -52, 36, 47, 16, -47, 57, 113, 103, -46, 32, 102, 57, 20, 0, -108, -107, -72, 69, 7, 51, 77, -51, -46, 125, 46, 62, -82, 22, -23, 9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.9259925560017952);
    msg.setSource(27815U);
    msg.setSourceEntity(207U);
    msg.setDestination(16554U);
    msg.setDestinationEntity(179U);
    msg.type = 159U;
    msg.frequency = 77802706U;
    msg.min_range = 63156U;
    msg.max_range = 30173U;
    msg.bits_per_point = 5U;
    msg.scale_factor = 0.360205660030294;
    const char tmp_msg_0[] = {-1, -49, -128, -122, -109, -46, -34, -105, -1, -34, 60};
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
    msg.setTimeStamp(0.015467005480664375);
    msg.setSource(62315U);
    msg.setSourceEntity(72U);
    msg.setDestination(23751U);
    msg.setDestinationEntity(221U);
    msg.type = 243U;
    msg.frequency = 1710748621U;
    msg.min_range = 7518U;
    msg.max_range = 57117U;
    msg.bits_per_point = 114U;
    msg.scale_factor = 0.23944450028156894;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.46338733924019604;
    tmp_msg_0.beam_height = 0.44190449903046913;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-49, -68, -120, -116, -125, -113, 30, -103, -47, 114, 29, 101, 56, 20, -6, 122, -27, -27, 20, 39, -121, 52, 80, 105, -3, -99, -8, -109, -83, -87, 56, -54, -48, 82, -61, -17, 119, -73, -25, -91, -47, 27, 10, -91, 111, -89, -82, 44, 1, 125, 4, -51, 115, 85, 24, -71, -123, 97, -67, -26, -90, 64, -69, -120, 31, -13, 34, 11, -60, -12, -77, -24, 16, 44, 5, -37, 45, 41, 92, 109, -5, -112, -17, 80, -28, -44, 38, -118, -116, 42, -60, -49, 112, -55, -104, -13, 20, 12, 86, 84, 83, -36, -76, -77, 36, 78, 34, -100, 117, 58, 35, -8, 123, -86, -24, -61, 76, 77, -23, 47, 82, 125};
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
    msg.setTimeStamp(0.1420847238849533);
    msg.setSource(57133U);
    msg.setSourceEntity(78U);
    msg.setDestination(23521U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.8047971554588782);
    msg.setSource(22538U);
    msg.setSourceEntity(13U);
    msg.setDestination(21889U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.520230135030837);
    msg.setSource(31862U);
    msg.setSourceEntity(9U);
    msg.setDestination(36636U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.09519752659917624);
    msg.setSource(64671U);
    msg.setSourceEntity(209U);
    msg.setDestination(56669U);
    msg.setDestinationEntity(129U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.6158872358112009);
    msg.setSource(47057U);
    msg.setSourceEntity(9U);
    msg.setDestination(39327U);
    msg.setDestinationEntity(65U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.17932442476213295);
    msg.setSource(14995U);
    msg.setSourceEntity(209U);
    msg.setDestination(54021U);
    msg.setDestinationEntity(188U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.2481199835149367);
    msg.setSource(32488U);
    msg.setSourceEntity(86U);
    msg.setDestination(37685U);
    msg.setDestinationEntity(123U);
    msg.value = 0.8160946293655669;
    msg.confidence = 0.8227059393139082;
    msg.opmodes.assign("TLDIIQUVWSSVJIKMHDLGSPAUSQUQYTXEANDXYEDTHYMLFONCKCYIMRSLJSFCMNITEGPCJIWPBNZWKQIXAGARJYAVLWYFXKIUBORYMHRDYSQHZUWJFKUSEMXGPZSPBRDVNOXFNXZKCBJZIOZYSVKDUXR");

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
    msg.setTimeStamp(0.7411840143310154);
    msg.setSource(39392U);
    msg.setSourceEntity(16U);
    msg.setDestination(13832U);
    msg.setDestinationEntity(123U);
    msg.value = 0.5586069781251195;
    msg.confidence = 0.6355158900140051;
    msg.opmodes.assign("ZBMTMSORHVJVTSEHRLRKCPDNCAUPFJWVXNBLVIJCCKADSIMJJGGQFCLYZSDKPCAKXHPWZEELNSXZFDETOAQZKFAEXZBPCAAY");

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
    msg.setTimeStamp(0.9573490384810396);
    msg.setSource(43527U);
    msg.setSourceEntity(115U);
    msg.setDestination(41873U);
    msg.setDestinationEntity(250U);
    msg.value = 0.48536051807954483;
    msg.confidence = 0.11689695215225326;
    msg.opmodes.assign("RBKVMNIEUHCQBUQTOMWAYFVDLXSIPVPWZUXNUTXZOYCAYSVDOEWLDFHJZIYVLENRDDTUIBMMTKIPCJBBAGUNQKNVZCGMZUFBGHVPGJLFCOZNWRDAQLYMRJJACREXJGJXZZYLSPGMHQZEYCBWSLHAPOFBPTCOGMAWQKSVAXQUDSUVWZQKTYHWNKJGRGTDRPLFBIIEONLSTCAGRNUJH");

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
    msg.setTimeStamp(0.9738722386411369);
    msg.setSource(53536U);
    msg.setSourceEntity(155U);
    msg.setDestination(13107U);
    msg.setDestinationEntity(111U);
    msg.itow = 3018927517U;
    msg.lat = 0.5902950605414072;
    msg.lon = 0.3762410685074752;
    msg.height_ell = 0.8774042950268014;
    msg.height_sea = 0.8071640407222689;
    msg.hacc = 0.6508094897766912;
    msg.vacc = 0.9170526347068907;
    msg.vel_n = 0.19807225488541902;
    msg.vel_e = 0.1768637047647651;
    msg.vel_d = 0.9480317782416298;
    msg.speed = 0.5083939596279231;
    msg.gspeed = 0.500764339236079;
    msg.heading = 0.42165262191889574;
    msg.sacc = 0.9037213737507784;
    msg.cacc = 0.5528300517033957;

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
    msg.setTimeStamp(0.6144966743197836);
    msg.setSource(44129U);
    msg.setSourceEntity(90U);
    msg.setDestination(62566U);
    msg.setDestinationEntity(186U);
    msg.itow = 3222794624U;
    msg.lat = 0.6659919401541122;
    msg.lon = 0.15014988963386244;
    msg.height_ell = 0.20091424941647462;
    msg.height_sea = 0.5584661906263828;
    msg.hacc = 0.8215863652773864;
    msg.vacc = 0.293939879246394;
    msg.vel_n = 0.7700880146426485;
    msg.vel_e = 0.65086486118819;
    msg.vel_d = 0.552601599693346;
    msg.speed = 0.1488044438997871;
    msg.gspeed = 0.8417387772298829;
    msg.heading = 0.22002375581052347;
    msg.sacc = 0.4952694203901785;
    msg.cacc = 0.9997994996145597;

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
    msg.setTimeStamp(0.34070267148109223);
    msg.setSource(43869U);
    msg.setSourceEntity(191U);
    msg.setDestination(37493U);
    msg.setDestinationEntity(141U);
    msg.itow = 1108105842U;
    msg.lat = 0.2802390744351725;
    msg.lon = 0.4966963667733081;
    msg.height_ell = 0.8700867157096124;
    msg.height_sea = 0.4579915760191402;
    msg.hacc = 0.0944113334734058;
    msg.vacc = 0.7368163908226847;
    msg.vel_n = 0.5661488822393742;
    msg.vel_e = 0.8499240216836237;
    msg.vel_d = 0.8284953277697211;
    msg.speed = 0.26223721518126053;
    msg.gspeed = 0.8762749369697164;
    msg.heading = 0.026458156573402225;
    msg.sacc = 0.07686844991953123;
    msg.cacc = 0.16179659764836363;

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
    msg.setTimeStamp(0.020811216485766892);
    msg.setSource(20084U);
    msg.setSourceEntity(132U);
    msg.setDestination(51410U);
    msg.setDestinationEntity(167U);
    msg.id = 1U;
    msg.value = 0.7829917346547323;

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
    msg.setTimeStamp(0.012595883590386991);
    msg.setSource(26476U);
    msg.setSourceEntity(142U);
    msg.setDestination(10351U);
    msg.setDestinationEntity(2U);
    msg.id = 53U;
    msg.value = 0.2844108892198466;

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
    msg.setTimeStamp(0.6447475672634729);
    msg.setSource(64463U);
    msg.setSourceEntity(251U);
    msg.setDestination(26443U);
    msg.setDestinationEntity(150U);
    msg.id = 28U;
    msg.value = 0.9552459978903873;

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
    msg.setTimeStamp(0.6600898863672662);
    msg.setSource(16740U);
    msg.setSourceEntity(140U);
    msg.setDestination(7463U);
    msg.setDestinationEntity(57U);
    msg.x = 0.9745711241463133;
    msg.y = 0.3975013702768656;
    msg.z = 0.8812363988597008;
    msg.phi = 0.8152482924839898;
    msg.theta = 0.6653025038887981;
    msg.psi = 0.8359981132087426;

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
    msg.setTimeStamp(0.8425261507470054);
    msg.setSource(27256U);
    msg.setSourceEntity(56U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(66U);
    msg.x = 0.6645949145675307;
    msg.y = 0.6620492027373692;
    msg.z = 0.29178376702073583;
    msg.phi = 0.6611949052794649;
    msg.theta = 0.14104238080682263;
    msg.psi = 0.0006774554781122655;

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
    msg.setTimeStamp(0.8752118965895307);
    msg.setSource(23923U);
    msg.setSourceEntity(69U);
    msg.setDestination(20338U);
    msg.setDestinationEntity(239U);
    msg.x = 0.026475154847366067;
    msg.y = 0.8044916569674683;
    msg.z = 0.05841467211602813;
    msg.phi = 0.7082977528900617;
    msg.theta = 0.6776642028993103;
    msg.psi = 0.5155694897243588;

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
    msg.setTimeStamp(0.5865045904700631);
    msg.setSource(56809U);
    msg.setSourceEntity(1U);
    msg.setDestination(56648U);
    msg.setDestinationEntity(199U);
    msg.beam_width = 0.0677977785979148;
    msg.beam_height = 0.5595353132892104;

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
    msg.setTimeStamp(0.2896331275858879);
    msg.setSource(49349U);
    msg.setSourceEntity(115U);
    msg.setDestination(15547U);
    msg.setDestinationEntity(182U);
    msg.beam_width = 0.10240847445740087;
    msg.beam_height = 0.27829163344462826;

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
    msg.setTimeStamp(0.3627350283970515);
    msg.setSource(24583U);
    msg.setSourceEntity(212U);
    msg.setDestination(14278U);
    msg.setDestinationEntity(131U);
    msg.beam_width = 0.6783632847356781;
    msg.beam_height = 0.10381006695252992;

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
    msg.setTimeStamp(0.38243801548418666);
    msg.setSource(49447U);
    msg.setSourceEntity(102U);
    msg.setDestination(61593U);
    msg.setDestinationEntity(175U);
    msg.sane = 240U;

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
    msg.setTimeStamp(0.7331857504263882);
    msg.setSource(28130U);
    msg.setSourceEntity(59U);
    msg.setDestination(30264U);
    msg.setDestinationEntity(98U);
    msg.sane = 216U;

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
    msg.setTimeStamp(0.4554195855925821);
    msg.setSource(15329U);
    msg.setSourceEntity(125U);
    msg.setDestination(31182U);
    msg.setDestinationEntity(219U);
    msg.sane = 109U;

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
    msg.setTimeStamp(0.22961579427255974);
    msg.setSource(17264U);
    msg.setSourceEntity(240U);
    msg.setDestination(7214U);
    msg.setDestinationEntity(160U);
    msg.value = 0.0077839218997962645;

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
    msg.setTimeStamp(0.284990322768074);
    msg.setSource(55129U);
    msg.setSourceEntity(150U);
    msg.setDestination(49424U);
    msg.setDestinationEntity(243U);
    msg.value = 0.9141195305751354;

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
    msg.setTimeStamp(0.9324382964773389);
    msg.setSource(18639U);
    msg.setSourceEntity(64U);
    msg.setDestination(15764U);
    msg.setDestinationEntity(136U);
    msg.value = 0.4701733481743393;

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
    msg.setTimeStamp(0.7943386110283065);
    msg.setSource(44082U);
    msg.setSourceEntity(122U);
    msg.setDestination(43191U);
    msg.setDestinationEntity(181U);
    msg.value = 0.47085840868199136;

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
    msg.setTimeStamp(0.9483036629724805);
    msg.setSource(26410U);
    msg.setSourceEntity(189U);
    msg.setDestination(62529U);
    msg.setDestinationEntity(225U);
    msg.value = 0.5836388573167673;

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
    msg.setTimeStamp(0.8060727329475966);
    msg.setSource(63372U);
    msg.setSourceEntity(7U);
    msg.setDestination(64936U);
    msg.setDestinationEntity(179U);
    msg.value = 0.1500052013421741;

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
    msg.setTimeStamp(0.6582172121395689);
    msg.setSource(40274U);
    msg.setSourceEntity(35U);
    msg.setDestination(34313U);
    msg.setDestinationEntity(23U);
    msg.value = 0.5258501121538474;

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
    msg.setTimeStamp(0.47669108743867683);
    msg.setSource(38393U);
    msg.setSourceEntity(95U);
    msg.setDestination(5056U);
    msg.setDestinationEntity(189U);
    msg.value = 0.8683271524809119;

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
    msg.setTimeStamp(0.9913308655919163);
    msg.setSource(48117U);
    msg.setSourceEntity(30U);
    msg.setDestination(20234U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6271314984650954;

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
    msg.setTimeStamp(0.8554638610542539);
    msg.setSource(12882U);
    msg.setSourceEntity(67U);
    msg.setDestination(56480U);
    msg.setDestinationEntity(118U);
    msg.value = 0.14812428529809374;

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
    msg.setTimeStamp(0.9806876989824067);
    msg.setSource(52502U);
    msg.setSourceEntity(241U);
    msg.setDestination(44012U);
    msg.setDestinationEntity(142U);
    msg.value = 0.7400398999164176;

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
    msg.setTimeStamp(0.27093473896900067);
    msg.setSource(4307U);
    msg.setSourceEntity(175U);
    msg.setDestination(11912U);
    msg.setDestinationEntity(168U);
    msg.value = 0.05048742716926613;

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
    msg.setTimeStamp(0.5636718849333469);
    msg.setSource(64127U);
    msg.setSourceEntity(207U);
    msg.setDestination(772U);
    msg.setDestinationEntity(223U);
    msg.value = 0.357194451914162;

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
    msg.setTimeStamp(0.3542345678854941);
    msg.setSource(9134U);
    msg.setSourceEntity(119U);
    msg.setDestination(61402U);
    msg.setDestinationEntity(23U);
    msg.value = 0.2795190490485868;

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
    msg.setTimeStamp(0.70411423447569);
    msg.setSource(46349U);
    msg.setSourceEntity(9U);
    msg.setDestination(21109U);
    msg.setDestinationEntity(59U);
    msg.value = 0.27033748610680397;

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
    msg.setTimeStamp(0.9695983191049902);
    msg.setSource(9707U);
    msg.setSourceEntity(92U);
    msg.setDestination(34481U);
    msg.setDestinationEntity(13U);
    msg.value = 0.6950681605822093;

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
    msg.setTimeStamp(0.8263289597722658);
    msg.setSource(10332U);
    msg.setSourceEntity(230U);
    msg.setDestination(51280U);
    msg.setDestinationEntity(252U);
    msg.value = 0.09301433557672911;

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
    msg.setTimeStamp(0.4647501485124319);
    msg.setSource(42319U);
    msg.setSourceEntity(101U);
    msg.setDestination(41734U);
    msg.setDestinationEntity(253U);
    msg.value = 0.5984799157744317;

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
    msg.setTimeStamp(0.4411872150083497);
    msg.setSource(4036U);
    msg.setSourceEntity(202U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(198U);
    msg.value = 0.29079267917130824;

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
    msg.setTimeStamp(0.6526227034918874);
    msg.setSource(1100U);
    msg.setSourceEntity(26U);
    msg.setDestination(57935U);
    msg.setDestinationEntity(144U);
    msg.value = 0.8607726739924072;

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
    msg.setTimeStamp(0.4525307561240446);
    msg.setSource(56062U);
    msg.setSourceEntity(205U);
    msg.setDestination(19387U);
    msg.setDestinationEntity(95U);
    msg.value = 0.5001367533883743;

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
    msg.setTimeStamp(0.7754206513228892);
    msg.setSource(64457U);
    msg.setSourceEntity(135U);
    msg.setDestination(1202U);
    msg.setDestinationEntity(65U);
    msg.value = 0.2704151858503504;

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
    msg.setTimeStamp(0.5710814107810788);
    msg.setSource(44849U);
    msg.setSourceEntity(74U);
    msg.setDestination(50650U);
    msg.setDestinationEntity(172U);
    msg.value = 0.2974144691403584;

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
    msg.setTimeStamp(0.24178138169812258);
    msg.setSource(10840U);
    msg.setSourceEntity(157U);
    msg.setDestination(14322U);
    msg.setDestinationEntity(203U);
    msg.value = 0.9769482002410352;

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
    msg.setTimeStamp(0.667570659225924);
    msg.setSource(18351U);
    msg.setSourceEntity(125U);
    msg.setDestination(43441U);
    msg.setDestinationEntity(234U);
    msg.validity = 21400U;
    msg.type = 89U;
    msg.tow = 2678886017U;
    msg.base_lat = 0.7710318132636788;
    msg.base_lon = 0.9163716199391956;
    msg.base_height = 0.5911589518295437;
    msg.n = 0.43065377217630085;
    msg.e = 0.37342119188340195;
    msg.d = 0.20283417882152588;
    msg.v_n = 0.9989369395496907;
    msg.v_e = 0.7821043360624116;
    msg.v_d = 0.40437191822231733;
    msg.satellites = 152U;
    msg.iar_hyp = 35031U;
    msg.iar_ratio = 0.4745562461476145;

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
    msg.setTimeStamp(0.22298112885206445);
    msg.setSource(28197U);
    msg.setSourceEntity(174U);
    msg.setDestination(63610U);
    msg.setDestinationEntity(115U);
    msg.validity = 53050U;
    msg.type = 7U;
    msg.tow = 324598208U;
    msg.base_lat = 0.8126883041710492;
    msg.base_lon = 0.706196330937676;
    msg.base_height = 0.5462581367894324;
    msg.n = 0.14732481785004514;
    msg.e = 0.2402632266502358;
    msg.d = 0.9717964741951254;
    msg.v_n = 0.5049943258293502;
    msg.v_e = 0.09463620792389871;
    msg.v_d = 0.7728718794774875;
    msg.satellites = 54U;
    msg.iar_hyp = 40469U;
    msg.iar_ratio = 0.5181239103564438;

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
    msg.setTimeStamp(0.44217445253706433);
    msg.setSource(33774U);
    msg.setSourceEntity(18U);
    msg.setDestination(27804U);
    msg.setDestinationEntity(68U);
    msg.validity = 56635U;
    msg.type = 169U;
    msg.tow = 341297586U;
    msg.base_lat = 0.07602263581575508;
    msg.base_lon = 0.8570475162894924;
    msg.base_height = 0.5829676924911272;
    msg.n = 0.35482904051828323;
    msg.e = 0.5286001009506677;
    msg.d = 0.955507211062278;
    msg.v_n = 0.5478521890834605;
    msg.v_e = 0.21968347826266044;
    msg.v_d = 0.28222239913543656;
    msg.satellites = 203U;
    msg.iar_hyp = 38996U;
    msg.iar_ratio = 0.8262607423929677;

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
    msg.setTimeStamp(0.366855663880187);
    msg.setSource(25244U);
    msg.setSourceEntity(170U);
    msg.setDestination(45807U);
    msg.setDestinationEntity(65U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7303387191419565;
    tmp_msg_0.lon = 0.7979759961220395;
    tmp_msg_0.height = 0.6318276977463938;
    tmp_msg_0.x = 0.5867389974836609;
    tmp_msg_0.y = 0.11387620210398619;
    tmp_msg_0.z = 0.44821368560556685;
    tmp_msg_0.phi = 0.4672935393188352;
    tmp_msg_0.theta = 0.11222520763176069;
    tmp_msg_0.psi = 0.48349526186289793;
    tmp_msg_0.u = 0.2229306284809699;
    tmp_msg_0.v = 0.1788787473019724;
    tmp_msg_0.w = 0.4482706392691954;
    tmp_msg_0.vx = 0.4362700159668982;
    tmp_msg_0.vy = 0.7747389932085159;
    tmp_msg_0.vz = 0.07146178734672481;
    tmp_msg_0.p = 0.20352961066324482;
    tmp_msg_0.q = 0.5317936870234431;
    tmp_msg_0.r = 0.3012446762202321;
    tmp_msg_0.depth = 0.2233494492430168;
    tmp_msg_0.alt = 0.88999339108538;
    msg.state.set(tmp_msg_0);
    msg.type = 183U;

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
    msg.setTimeStamp(0.2597047322637037);
    msg.setSource(24655U);
    msg.setSourceEntity(122U);
    msg.setDestination(19936U);
    msg.setDestinationEntity(41U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8184787017322145;
    tmp_msg_0.lon = 0.4973907265716535;
    tmp_msg_0.height = 0.006575563669582785;
    tmp_msg_0.x = 0.9538309068438983;
    tmp_msg_0.y = 0.853868900783002;
    tmp_msg_0.z = 0.08002371436739764;
    tmp_msg_0.phi = 0.474625678743789;
    tmp_msg_0.theta = 0.9267754335683822;
    tmp_msg_0.psi = 0.2548073260200425;
    tmp_msg_0.u = 0.9976451039835362;
    tmp_msg_0.v = 0.7412090836009638;
    tmp_msg_0.w = 0.49899292526650996;
    tmp_msg_0.vx = 0.36976083182774355;
    tmp_msg_0.vy = 0.1153040084833018;
    tmp_msg_0.vz = 0.5368399192519884;
    tmp_msg_0.p = 0.961413881312728;
    tmp_msg_0.q = 0.832148150072185;
    tmp_msg_0.r = 0.010517715385379156;
    tmp_msg_0.depth = 0.6720063794246709;
    tmp_msg_0.alt = 0.8707470805018023;
    msg.state.set(tmp_msg_0);
    msg.type = 150U;

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
    msg.setTimeStamp(0.9308941112027865);
    msg.setSource(31479U);
    msg.setSourceEntity(28U);
    msg.setDestination(43952U);
    msg.setDestinationEntity(167U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.009098187277643444;
    tmp_msg_0.lon = 0.4189438168463411;
    tmp_msg_0.height = 0.7376954894246182;
    tmp_msg_0.x = 0.15126458916640562;
    tmp_msg_0.y = 0.17435333440479384;
    tmp_msg_0.z = 0.8440917775377726;
    tmp_msg_0.phi = 0.8951389015018408;
    tmp_msg_0.theta = 0.123399469581016;
    tmp_msg_0.psi = 0.45709160470691224;
    tmp_msg_0.u = 0.36500457937446706;
    tmp_msg_0.v = 0.19322330970816126;
    tmp_msg_0.w = 0.0812028500372447;
    tmp_msg_0.vx = 0.8335376851765848;
    tmp_msg_0.vy = 0.47207436117319457;
    tmp_msg_0.vz = 0.5213123527567982;
    tmp_msg_0.p = 0.950187837827358;
    tmp_msg_0.q = 0.22479734675147456;
    tmp_msg_0.r = 0.8133186427033043;
    tmp_msg_0.depth = 0.7569212753897033;
    tmp_msg_0.alt = 0.4553998996914569;
    msg.state.set(tmp_msg_0);
    msg.type = 43U;

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
    msg.setTimeStamp(0.7922204786321416);
    msg.setSource(55129U);
    msg.setSourceEntity(250U);
    msg.setDestination(24574U);
    msg.setDestinationEntity(177U);
    msg.value = 0.7157659298365676;

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
    msg.setTimeStamp(0.4217623481632531);
    msg.setSource(55263U);
    msg.setSourceEntity(61U);
    msg.setDestination(56315U);
    msg.setDestinationEntity(110U);
    msg.value = 0.8267985093448141;

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
    msg.setTimeStamp(0.05003516713604783);
    msg.setSource(16851U);
    msg.setSourceEntity(80U);
    msg.setDestination(18780U);
    msg.setDestinationEntity(22U);
    msg.value = 0.7334304762558909;

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
    msg.setTimeStamp(0.40137664385960325);
    msg.setSource(17489U);
    msg.setSourceEntity(126U);
    msg.setDestination(42577U);
    msg.setDestinationEntity(156U);
    msg.value = 0.157915493320416;

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
    msg.setTimeStamp(0.11597631391057273);
    msg.setSource(19668U);
    msg.setSourceEntity(95U);
    msg.setDestination(34071U);
    msg.setDestinationEntity(44U);
    msg.value = 0.95737583058925;

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
    msg.setTimeStamp(0.2794323660090171);
    msg.setSource(30342U);
    msg.setSourceEntity(239U);
    msg.setDestination(64811U);
    msg.setDestinationEntity(249U);
    msg.value = 0.34955427166613395;

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
    msg.setTimeStamp(0.9924609290452009);
    msg.setSource(29694U);
    msg.setSourceEntity(123U);
    msg.setDestination(42530U);
    msg.setDestinationEntity(132U);
    msg.value = 0.6664717468025639;

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
    msg.setTimeStamp(0.9187223094808943);
    msg.setSource(21441U);
    msg.setSourceEntity(206U);
    msg.setDestination(5185U);
    msg.setDestinationEntity(195U);
    msg.value = 0.15391005653157008;

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
    msg.setTimeStamp(0.0724461723645563);
    msg.setSource(10882U);
    msg.setSourceEntity(189U);
    msg.setDestination(12783U);
    msg.setDestinationEntity(153U);
    msg.value = 0.265802846886801;

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
    msg.setTimeStamp(0.5148094061251313);
    msg.setSource(48520U);
    msg.setSourceEntity(130U);
    msg.setDestination(41972U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6600720161117211;

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
    msg.setTimeStamp(0.7737403266354271);
    msg.setSource(37684U);
    msg.setSourceEntity(140U);
    msg.setDestination(20591U);
    msg.setDestinationEntity(73U);
    msg.value = 0.946835160837465;

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
    msg.setTimeStamp(0.8632001793785397);
    msg.setSource(48130U);
    msg.setSourceEntity(232U);
    msg.setDestination(44071U);
    msg.setDestinationEntity(232U);
    msg.value = 0.7739917231167049;

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
    msg.setTimeStamp(0.32197568666928045);
    msg.setSource(27170U);
    msg.setSourceEntity(203U);
    msg.setDestination(51662U);
    msg.setDestinationEntity(198U);
    msg.value = 0.1395875971057141;

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
    msg.setTimeStamp(0.1365031411163553);
    msg.setSource(17547U);
    msg.setSourceEntity(88U);
    msg.setDestination(24757U);
    msg.setDestinationEntity(251U);
    msg.value = 0.506511103072336;

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
    msg.setTimeStamp(0.4928042115800674);
    msg.setSource(25010U);
    msg.setSourceEntity(225U);
    msg.setDestination(60886U);
    msg.setDestinationEntity(129U);
    msg.value = 0.9912353775669606;

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
    msg.setTimeStamp(0.8991127721561213);
    msg.setSource(57065U);
    msg.setSourceEntity(75U);
    msg.setDestination(39169U);
    msg.setDestinationEntity(133U);
    msg.id = 118U;
    msg.zoom = 68U;
    msg.action = 161U;

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
    msg.setTimeStamp(0.6551424576936529);
    msg.setSource(12321U);
    msg.setSourceEntity(33U);
    msg.setDestination(45168U);
    msg.setDestinationEntity(162U);
    msg.id = 205U;
    msg.zoom = 229U;
    msg.action = 46U;

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
    msg.setTimeStamp(0.9551828639684558);
    msg.setSource(34266U);
    msg.setSourceEntity(61U);
    msg.setDestination(30163U);
    msg.setDestinationEntity(11U);
    msg.id = 218U;
    msg.zoom = 87U;
    msg.action = 218U;

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
    msg.setTimeStamp(0.11950503926810718);
    msg.setSource(48952U);
    msg.setSourceEntity(196U);
    msg.setDestination(24106U);
    msg.setDestinationEntity(52U);
    msg.id = 21U;
    msg.value = 0.35817033962303413;

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
    msg.setTimeStamp(0.7918426107846073);
    msg.setSource(48820U);
    msg.setSourceEntity(50U);
    msg.setDestination(46770U);
    msg.setDestinationEntity(74U);
    msg.id = 245U;
    msg.value = 0.4298073435528448;

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
    msg.setTimeStamp(0.48413716461588774);
    msg.setSource(48024U);
    msg.setSourceEntity(37U);
    msg.setDestination(48193U);
    msg.setDestinationEntity(85U);
    msg.id = 64U;
    msg.value = 0.39176794104264356;

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
    msg.setTimeStamp(0.7612924883701633);
    msg.setSource(17296U);
    msg.setSourceEntity(107U);
    msg.setDestination(11243U);
    msg.setDestinationEntity(182U);
    msg.id = 153U;
    msg.value = 0.29469826184114956;

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
    msg.setTimeStamp(0.030817885247371057);
    msg.setSource(36928U);
    msg.setSourceEntity(145U);
    msg.setDestination(23518U);
    msg.setDestinationEntity(94U);
    msg.id = 97U;
    msg.value = 0.8053122974789805;

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
    msg.setTimeStamp(0.22323244180687174);
    msg.setSource(14172U);
    msg.setSourceEntity(44U);
    msg.setDestination(62156U);
    msg.setDestinationEntity(52U);
    msg.id = 236U;
    msg.value = 0.39098886258246734;

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
    msg.setTimeStamp(0.7944395107104792);
    msg.setSource(65217U);
    msg.setSourceEntity(135U);
    msg.setDestination(50404U);
    msg.setDestinationEntity(150U);
    msg.id = 233U;
    msg.angle = 0.9314093545459905;

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
    msg.setTimeStamp(0.6604629436245146);
    msg.setSource(27259U);
    msg.setSourceEntity(211U);
    msg.setDestination(6809U);
    msg.setDestinationEntity(142U);
    msg.id = 231U;
    msg.angle = 0.27393508431136504;

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
    msg.setTimeStamp(0.19755505643170856);
    msg.setSource(25037U);
    msg.setSourceEntity(215U);
    msg.setDestination(39574U);
    msg.setDestinationEntity(240U);
    msg.id = 203U;
    msg.angle = 0.7093030102716233;

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
    msg.setTimeStamp(0.18557168883805408);
    msg.setSource(59255U);
    msg.setSourceEntity(198U);
    msg.setDestination(50688U);
    msg.setDestinationEntity(118U);
    msg.op = 194U;
    msg.actions.assign("MDUQZWXKACTQAVWHEHDJSUTUVGWJBAXVDUFGLOWFRLDFKJIIHJHTCLSYNNNWXSDINGCTUNVRFYDPEZFWEYXPQZACWPFPCCQOUVVLKYWEXYXCMPQVOVGXAUPQGSORSICHYLOMBFISDRRJJETXSDRUDZOKRJMOEDPZEVEHBMLEKCSLAWNKB");

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
    msg.setTimeStamp(0.1333970144844786);
    msg.setSource(35426U);
    msg.setSourceEntity(144U);
    msg.setDestination(35539U);
    msg.setDestinationEntity(153U);
    msg.op = 86U;
    msg.actions.assign("VZUNUZNOPWEAGZIMAJTVUVXQLSSKNQFGXCPODIIULRFNFGBYCHNPCISIJWQYJHYJPRXPDWMYAZTOYTWOHCIEXPQRSALMQTRGDSNFCYPMFEUJSGEFWLDKGFNKXPWUXUXHNYTBLJCIUOCEKBWAZKLTJOYZLMZIFVEIKBQRWMJ");

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
    msg.setTimeStamp(0.4858577627839443);
    msg.setSource(53799U);
    msg.setSourceEntity(154U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(219U);
    msg.op = 140U;
    msg.actions.assign("PAPHQXXMOAVZZUWKZDEJFZSNMBBPDNQTJGWPVUCSKVCWNDGYPWZMSXGNXETIGQTYIAMNCFEDWFASVRUBULLCSRHCYRWOLNYIKBKYPQMTJBCGXZRXFDBLJQAWOLFDIXTEYVKKFBYUXJRPMLTAHXTMCDBKRFHGYIBWZIOJHFTTVVAUUJGGCLSJRWSBDPTNCELFMNKVOYMDQHQYVEEEOCQKSHOAXZUGEI");

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
    msg.setTimeStamp(0.8886788267893122);
    msg.setSource(5536U);
    msg.setSourceEntity(21U);
    msg.setDestination(22623U);
    msg.setDestinationEntity(151U);
    msg.actions.assign("RQGVPRJYKRKLXRZAWHEOFUJKANOAPCTASFYFMLAOKQQDFNPOIBCQUDEDRYPIYSHLGNZBXLVNIRJXJSLXGLLCFLCKTTPBYJDKQXNQYMUTCXHGWOVBKUNTGRHFACMPGRAMPTJTZAPIHZLSZPZEJKUUZQHSMIVGBDUKYGEHBVMQZDHV");

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
    msg.setTimeStamp(0.33480984310942774);
    msg.setSource(42875U);
    msg.setSourceEntity(51U);
    msg.setDestination(27386U);
    msg.setDestinationEntity(111U);
    msg.actions.assign("QTJNAABSNETCIOFYMAKGAVWQKOPXLMZLGWROVUNJXHDEJJVFLBXCKZYEXQTKISYRNZEWW");

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
    msg.setTimeStamp(0.753882399704815);
    msg.setSource(21793U);
    msg.setSourceEntity(177U);
    msg.setDestination(33149U);
    msg.setDestinationEntity(176U);
    msg.actions.assign("DNVBBLVUNZDIOAFDFCBSUZBNTNGJTYSYUDKLEKMHPTQWYQLYHWJ");

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
    msg.setTimeStamp(0.09081898461804527);
    msg.setSource(62277U);
    msg.setSourceEntity(167U);
    msg.setDestination(26043U);
    msg.setDestinationEntity(179U);
    msg.button = 75U;
    msg.value = 117U;

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
    msg.setTimeStamp(0.6455673365489072);
    msg.setSource(48992U);
    msg.setSourceEntity(19U);
    msg.setDestination(17365U);
    msg.setDestinationEntity(163U);
    msg.button = 122U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.20400883605970666);
    msg.setSource(57255U);
    msg.setSourceEntity(169U);
    msg.setDestination(28722U);
    msg.setDestinationEntity(119U);
    msg.button = 242U;
    msg.value = 22U;

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
    msg.setTimeStamp(0.8737252191382321);
    msg.setSource(60674U);
    msg.setSourceEntity(240U);
    msg.setDestination(19938U);
    msg.setDestinationEntity(174U);
    msg.op = 93U;
    msg.text.assign("JRHTSSSYVRXWWVNGZMVUFDVIFYZIGYNZQEYBYVBPLXRRDGMLIZGPXUVIPLSGIQPCBKEZBUAIXXHRANOBBBMZKGMZSOILHKFTPRAWINYTTMRBKWRTBYAHJLUONHKNSFLOIAJYCEKPTDYAOFNDUWLXVEIPCHKJCJVEECFGUWEOJXAWHDOGTQLPDJSQVFHMADXQCFQJSWCAQLZHOSCPDKCONHCQFMEQ");

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
    msg.setTimeStamp(0.5721962836071773);
    msg.setSource(40635U);
    msg.setSourceEntity(43U);
    msg.setDestination(5204U);
    msg.setDestinationEntity(166U);
    msg.op = 62U;
    msg.text.assign("LGLROJQWEQKELDQLZZPXCGDBDBXWZSYJFJWJTRXPNDHJQEHTPNSERTIAOICNHBIRAVWOYYPSDYVSJMYKFBGVCXNNCBHYQRGFUPAOQZMIIRTFFJVLBPAWPRGRPYEXUDV");

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
    msg.setTimeStamp(0.8651214415247591);
    msg.setSource(2652U);
    msg.setSourceEntity(132U);
    msg.setDestination(17352U);
    msg.setDestinationEntity(195U);
    msg.op = 140U;
    msg.text.assign("LNGZFOZQSSGSLQLEOGZRTDVTXQVTEBREKTTLZXVLGHGKLQCZCMPMCGRLYYHRUVMBW");

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
    msg.setTimeStamp(0.8335040684574262);
    msg.setSource(11090U);
    msg.setSourceEntity(151U);
    msg.setDestination(26304U);
    msg.setDestinationEntity(66U);
    msg.op = 1U;
    msg.time_remain = 0.33225633115419806;
    msg.sched_time = 0.3987345321083201;

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
    msg.setTimeStamp(0.4159375518034254);
    msg.setSource(53944U);
    msg.setSourceEntity(232U);
    msg.setDestination(61505U);
    msg.setDestinationEntity(106U);
    msg.op = 172U;
    msg.time_remain = 0.671767554125427;
    msg.sched_time = 0.7499454776387356;

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
    msg.setTimeStamp(0.8672330363442176);
    msg.setSource(25383U);
    msg.setSourceEntity(135U);
    msg.setDestination(29294U);
    msg.setDestinationEntity(22U);
    msg.op = 1U;
    msg.time_remain = 0.7997226511832409;
    msg.sched_time = 0.24676166562510216;

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
    msg.setTimeStamp(0.6856056709968485);
    msg.setSource(14247U);
    msg.setSourceEntity(6U);
    msg.setDestination(40628U);
    msg.setDestinationEntity(97U);
    msg.name.assign("EEADDGNGNFCBLBTJILHSSOROPFVXHCMAPQLKHGVVERQRLIFDOBMTNZWGUGHBERTKVGUILPWFDRGAYBVFDYQOGWYRXQKAGDSYMWMFQDTZNMSWXIHZFORMMSYCGSKBKJNUERCTIVJHCZRKMLDWOYZWIUDLOHJNNLKWPMVCJVYNTDJPKTJQTOVUCHLKAOPZJEQXPBXICXEOXHERXFSEIXQBWNYVFFSIJQKPTCMZUUQTXPLAUSZCAUZYEYZP");
    msg.op = 15U;
    msg.sched_time = 0.4609674031577575;

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
    msg.setTimeStamp(0.2610966330042104);
    msg.setSource(42393U);
    msg.setSourceEntity(146U);
    msg.setDestination(61185U);
    msg.setDestinationEntity(99U);
    msg.name.assign("OJVOAGSBGQTLFYANTGRIRHTWHIBMAXNYKZBZLLFPHMQOULXEYGEKPDFXACJXZTOGVAWKIVOBPURHSMGSNSQVJAEUCQLKYHFPHONZDCJTDESPEHIQUURDATTYGYVPKSNWHMANJABPSIXKHLBXDCRIJLJRNMOQSRNYHZWTDZZUJCFUWBJCCGABOKOEBQMLQVGMDMXMCVRXMWNXKQIUTSEUFVWNFWVFJIKZEIPIYF");
    msg.op = 212U;
    msg.sched_time = 0.7812848786017482;

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
    msg.setTimeStamp(0.0601753455651457);
    msg.setSource(25645U);
    msg.setSourceEntity(146U);
    msg.setDestination(55683U);
    msg.setDestinationEntity(98U);
    msg.name.assign("QHXBDGKTORNROYHZPGNTZQLCJQTQQTDKPONAVBFJVTLBRRYOWHBCYRMMHKUNFWFAFLQCIJXADWEPWKDHEAJUYLDYEWI");
    msg.op = 29U;
    msg.sched_time = 0.8691248930229479;

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
    msg.setTimeStamp(0.22299888974214577);
    msg.setSource(57308U);
    msg.setSourceEntity(75U);
    msg.setDestination(4371U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.49499987808634616);
    msg.setSource(3499U);
    msg.setSourceEntity(195U);
    msg.setDestination(18229U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.28672211001339953);
    msg.setSource(58553U);
    msg.setSourceEntity(248U);
    msg.setDestination(65026U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.9656884191248393);
    msg.setSource(59268U);
    msg.setSourceEntity(52U);
    msg.setDestination(1862U);
    msg.setDestinationEntity(26U);
    msg.name.assign("NTELYHYAKJURCGIHVPCJMISQIWSBOUMCBZNMFWLHFCICDEGBIUURHDZLJZSVRCJMBZSOQWWQYUXRDOAKYDZGFYTPDNNFMXTUBIHJVFNTDXXWPPJZGJISSWFBNKQXXRYVADYHBTKMWCQRNFJORTQVXQSGEPBMYPFUHSKIZKHVLAQGULNOKEAZHEKHMJOZVFLCRGLOPGDIVDJALQES");
    msg.state = 9U;

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
    msg.setTimeStamp(0.8220494804575986);
    msg.setSource(44798U);
    msg.setSourceEntity(233U);
    msg.setDestination(38521U);
    msg.setDestinationEntity(29U);
    msg.name.assign("GIFDADMYPBAKSIYPCWNUGUQRFVKYRTVTHEGLWPFUBTSLQVMVRCO");
    msg.state = 219U;

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
    msg.setTimeStamp(0.049644565424846854);
    msg.setSource(64243U);
    msg.setSourceEntity(137U);
    msg.setDestination(45852U);
    msg.setDestinationEntity(70U);
    msg.name.assign("ACKLZZHYKHSPZJZUGWMNLWRJWVIMRCEEEDDPIVOLOCOCTQJRQVNTUXMGJWWBQJAQRJBRXEBIRTQOEEFYUBDUZGOZSDLNSQMJLZMWEPQWTNSKKOCQPPDANXXFZHPLQYAAXNIFGVQIVIBLLRTWHITPFFFXSMYOODLJDAOPNVYHHMJUZVUTTEKEBHGMWXGYKHCCAXOKUFNKDRRNHNGDSCDSVGYBBMPTGBWPUSHYKAA");
    msg.state = 137U;

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
    msg.setTimeStamp(0.759695965124067);
    msg.setSource(51979U);
    msg.setSourceEntity(78U);
    msg.setDestination(24799U);
    msg.setDestinationEntity(165U);
    msg.name.assign("GQNACXBEILBXVINPEYSRIKTPQENMFZUGVPLADUJLOMSAMCKRJVOTZXXYTWUDJVHBZSKTPUECPLWCRXMXEGMNUSMGYXWEFIKZKBJVWVHNZGQUJTJELFRCQGDPBVNGMJMOYHIIPSWIPEHKZLBHUFCCDDYWVFEPHVTANNLRKGYRDI");
    msg.value = 221U;

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
    msg.setTimeStamp(0.3996582346471981);
    msg.setSource(51355U);
    msg.setSourceEntity(199U);
    msg.setDestination(55407U);
    msg.setDestinationEntity(203U);
    msg.name.assign("YZQWDWUDVNDTQHLRAFDTSSKWVFOFHYYIYXXVWLURQNTTJBXMZPBPEYOLDBZLCTDTFRKEXXSCPNEEHHVQTHKXECVAPAGQJGBIHEQZVPASGCRZYSQCMCLQQPCXAAGILUUVLOWAOMVBSUYNLGEIRTZFNFGZAWPSFTEMBMJRXENIUJDRYNBZFKJXUXAWUQISZNEGJRZKHVOJIKJLNMIPOUKNGM");
    msg.value = 157U;

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
    msg.setTimeStamp(0.17348640593740905);
    msg.setSource(44113U);
    msg.setSourceEntity(234U);
    msg.setDestination(21121U);
    msg.setDestinationEntity(80U);
    msg.name.assign("BGJEUEVDBDUIAPVATKKUZLKZXAGBGRSIDIJQSWBLYHGINMZHNQMYQLNVWWFHVJWLEC");
    msg.value = 169U;

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
    msg.setTimeStamp(0.7612415881531309);
    msg.setSource(37980U);
    msg.setSourceEntity(143U);
    msg.setDestination(23946U);
    msg.setDestinationEntity(39U);
    msg.name.assign("ZFAUJVTWCMWQTYGZQZARAQPKHXJCEPPSCHEQEJNUQRYIGWXDHVCURXIGJMZSREIJLEBSWTFBAMWPRWTEDNFAHVASXXMBHZZCLBOBDZKCPKSNMCITGYKQJLJHTYFTLUI");

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
    msg.setTimeStamp(0.24765522159677278);
    msg.setSource(2284U);
    msg.setSourceEntity(200U);
    msg.setDestination(44629U);
    msg.setDestinationEntity(233U);
    msg.name.assign("NYWDONWDEIZSVJGDNLVRHNHBLMABBXUCRDTUHKWCWCLOPWZZSOYSGHGROLOCWUWVFTFPBYCPXTVNAXMFCJNYZSYOQVEB");

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
    msg.setTimeStamp(0.9652095229849033);
    msg.setSource(16759U);
    msg.setSourceEntity(147U);
    msg.setDestination(40169U);
    msg.setDestinationEntity(161U);
    msg.name.assign("WTLUSZUJDLXIMYJHPVNGRGWFYDXNNGBAZELAXLFXKSYULMUAIPKTRVIQLGXCOESSMPOFWQBJUSLYWKKOWCQGNDZXPYJDDYGRGXJNJQWCKKIRHBAAIMUBVQGVMWCHTWXFRMEAFENOZXIYQFYBDFMRZPKIKBFVPVYSKDQTHZCRHUVKTCZVLVDPSRUTVHSCZQRBGOLIO");

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
    msg.setTimeStamp(0.4287860998445836);
    msg.setSource(41779U);
    msg.setSourceEntity(198U);
    msg.setDestination(60059U);
    msg.setDestinationEntity(114U);
    msg.name.assign("ULFOBWMKEVAQEGVRNOLZFVFEZPVYGUMFWIHIOPCRWEAKKEHZUIMMQXVXMDSXKKJGCCGICBKTAWMLCINPURDJZAOSSHCPVRSKNLAUNYTFQDBD");
    msg.value = 204U;

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
    msg.setTimeStamp(0.8080974435697111);
    msg.setSource(8659U);
    msg.setSourceEntity(7U);
    msg.setDestination(55788U);
    msg.setDestinationEntity(249U);
    msg.name.assign("HKCPAPMQPGJPHEVNSTVTZZASHOVYXYIUYOYFZAKIJODWZETMWCXHVLSEAZTTHQINYDZODRFLDAPFVBTJJRJJGQTRKZMMVEGFMUSNBBITJNYURNGNLAYXASUKKLDHJUCEKHTDWCLLPFJBMPICXFCIVLFPBSOXGVGKUGRYDOVQWCRWQBVWWCHFSWNCIWQYIQEUNXIXDGBMEQNGEDXEPYOKUMFXSLPGSHRF");
    msg.value = 223U;

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
    msg.setTimeStamp(0.9188044355616304);
    msg.setSource(15683U);
    msg.setSourceEntity(52U);
    msg.setDestination(21452U);
    msg.setDestinationEntity(87U);
    msg.name.assign("XHJMIUQMGUMOCVFBAG");
    msg.value = 128U;

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
    msg.setTimeStamp(0.6989726153811289);
    msg.setSource(54059U);
    msg.setSourceEntity(216U);
    msg.setDestination(41251U);
    msg.setDestinationEntity(122U);
    msg.id = 167U;
    msg.period = 4243510707U;
    msg.duty_cycle = 2005363443U;

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
    msg.setTimeStamp(0.40776356528931057);
    msg.setSource(46337U);
    msg.setSourceEntity(96U);
    msg.setDestination(17106U);
    msg.setDestinationEntity(211U);
    msg.id = 129U;
    msg.period = 369553304U;
    msg.duty_cycle = 3754996083U;

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
    msg.setTimeStamp(0.9595008632986841);
    msg.setSource(12205U);
    msg.setSourceEntity(17U);
    msg.setDestination(54444U);
    msg.setDestinationEntity(134U);
    msg.id = 218U;
    msg.period = 3271849425U;
    msg.duty_cycle = 1061890169U;

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
    msg.setTimeStamp(0.505261073853226);
    msg.setSource(42352U);
    msg.setSourceEntity(132U);
    msg.setDestination(10099U);
    msg.setDestinationEntity(1U);
    msg.id = 144U;
    msg.period = 1707327041U;
    msg.duty_cycle = 3049633088U;

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
    msg.setTimeStamp(0.583359190049625);
    msg.setSource(24929U);
    msg.setSourceEntity(182U);
    msg.setDestination(43333U);
    msg.setDestinationEntity(136U);
    msg.id = 78U;
    msg.period = 1878422424U;
    msg.duty_cycle = 2871773200U;

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
    msg.setTimeStamp(0.5054183153310667);
    msg.setSource(56735U);
    msg.setSourceEntity(164U);
    msg.setDestination(24960U);
    msg.setDestinationEntity(226U);
    msg.id = 62U;
    msg.period = 268372694U;
    msg.duty_cycle = 3596312089U;

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
    msg.setTimeStamp(0.8680146987139927);
    msg.setSource(1641U);
    msg.setSourceEntity(229U);
    msg.setDestination(44984U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.732238507504092;
    msg.lon = 0.7980174612078854;
    msg.height = 0.34608286183335824;
    msg.x = 0.8677067705173076;
    msg.y = 0.9900544922684948;
    msg.z = 0.8454503772126766;
    msg.phi = 0.6233880883385421;
    msg.theta = 0.02029088061769957;
    msg.psi = 0.7236899566038001;
    msg.u = 0.49342885281752114;
    msg.v = 0.7476769222834702;
    msg.w = 0.7961405416776339;
    msg.vx = 0.13682848910850742;
    msg.vy = 0.4919294605123803;
    msg.vz = 0.2907451601350022;
    msg.p = 0.545050451820672;
    msg.q = 0.9468096638316826;
    msg.r = 0.21128470306955838;
    msg.depth = 0.9295901234030953;
    msg.alt = 0.41495402234024614;

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
    msg.setTimeStamp(0.8066669646892314);
    msg.setSource(8940U);
    msg.setSourceEntity(181U);
    msg.setDestination(13348U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.2205945551536701;
    msg.lon = 0.07149801040056403;
    msg.height = 0.17877983920957352;
    msg.x = 0.2822235401344768;
    msg.y = 0.7330486917323762;
    msg.z = 0.7135392694362562;
    msg.phi = 0.3980041566713245;
    msg.theta = 0.2088109380082378;
    msg.psi = 0.47242032257872957;
    msg.u = 0.3326481229621995;
    msg.v = 0.21078407766187757;
    msg.w = 0.7759793976368666;
    msg.vx = 0.8722459098222051;
    msg.vy = 0.6057196636122905;
    msg.vz = 0.38122571466879773;
    msg.p = 0.624025290130407;
    msg.q = 0.978031740154601;
    msg.r = 0.6386700459224831;
    msg.depth = 0.628615927870147;
    msg.alt = 0.8763640734083267;

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
    msg.setTimeStamp(0.769442671004164);
    msg.setSource(1782U);
    msg.setSourceEntity(160U);
    msg.setDestination(9557U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.6887392130923489;
    msg.lon = 0.4322887436385281;
    msg.height = 0.3748789686605849;
    msg.x = 0.14452454401562853;
    msg.y = 0.6087549303377836;
    msg.z = 0.21812294015819678;
    msg.phi = 0.8950157211554964;
    msg.theta = 0.8976956592716808;
    msg.psi = 0.8761307507345611;
    msg.u = 0.43264287300059934;
    msg.v = 0.6732172256768508;
    msg.w = 0.5076575727008628;
    msg.vx = 0.7994931833830905;
    msg.vy = 0.07604979128341016;
    msg.vz = 0.1602796083736996;
    msg.p = 0.11885659466272391;
    msg.q = 0.8915049966891002;
    msg.r = 0.7334625572715464;
    msg.depth = 0.6802139264492406;
    msg.alt = 0.29383155118704285;

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
    msg.setTimeStamp(0.9646193358001666);
    msg.setSource(40571U);
    msg.setSourceEntity(63U);
    msg.setDestination(17113U);
    msg.setDestinationEntity(112U);
    msg.x = 0.31504137885861927;
    msg.y = 0.15020626292619288;
    msg.z = 0.37201517791686456;

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
    msg.setTimeStamp(0.7092157604117921);
    msg.setSource(31930U);
    msg.setSourceEntity(140U);
    msg.setDestination(9555U);
    msg.setDestinationEntity(114U);
    msg.x = 0.006615785658230178;
    msg.y = 0.6757563097302985;
    msg.z = 0.8059974386378189;

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
    msg.setTimeStamp(0.6874199972363695);
    msg.setSource(8643U);
    msg.setSourceEntity(217U);
    msg.setDestination(45013U);
    msg.setDestinationEntity(171U);
    msg.x = 0.7186532740549837;
    msg.y = 0.051415194671524;
    msg.z = 0.5024965803016049;

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
    msg.setTimeStamp(0.06253704685008898);
    msg.setSource(43723U);
    msg.setSourceEntity(122U);
    msg.setDestination(7077U);
    msg.setDestinationEntity(72U);
    msg.value = 0.027995060111845382;

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
    msg.setTimeStamp(0.8501927799022491);
    msg.setSource(45675U);
    msg.setSourceEntity(185U);
    msg.setDestination(19001U);
    msg.setDestinationEntity(217U);
    msg.value = 0.37777060350499936;

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
    msg.setTimeStamp(0.594560195762357);
    msg.setSource(31298U);
    msg.setSourceEntity(214U);
    msg.setDestination(22464U);
    msg.setDestinationEntity(186U);
    msg.value = 0.7189898686492782;

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
    msg.setTimeStamp(0.017435801601718426);
    msg.setSource(55509U);
    msg.setSourceEntity(50U);
    msg.setDestination(55631U);
    msg.setDestinationEntity(245U);
    msg.value = 0.8338042524113821;

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
    msg.setTimeStamp(0.45753117441798463);
    msg.setSource(5668U);
    msg.setSourceEntity(45U);
    msg.setDestination(8262U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0759153908136374;

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
    msg.setTimeStamp(0.2100570360385262);
    msg.setSource(61232U);
    msg.setSourceEntity(119U);
    msg.setDestination(473U);
    msg.setDestinationEntity(250U);
    msg.value = 0.3478117458744767;

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
    msg.setTimeStamp(0.3507294677936831);
    msg.setSource(5827U);
    msg.setSourceEntity(155U);
    msg.setDestination(45004U);
    msg.setDestinationEntity(163U);
    msg.x = 0.45804420590492456;
    msg.y = 0.1508602534332396;
    msg.z = 0.9068953875618816;
    msg.phi = 0.309955602068094;
    msg.theta = 0.34313929853918035;
    msg.psi = 0.8506874885665632;
    msg.p = 0.491767671540947;
    msg.q = 0.030621431791243547;
    msg.r = 0.38872422550279606;
    msg.u = 0.28664450950332443;
    msg.v = 0.9289270999477428;
    msg.w = 0.9504734831660135;
    msg.bias_psi = 0.16424924348352155;
    msg.bias_r = 0.9081804999220514;

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
    msg.setTimeStamp(0.1271063830739243);
    msg.setSource(22456U);
    msg.setSourceEntity(51U);
    msg.setDestination(20369U);
    msg.setDestinationEntity(95U);
    msg.x = 0.3790443969148094;
    msg.y = 0.8230684535598751;
    msg.z = 0.4132367493504605;
    msg.phi = 0.7403446642375009;
    msg.theta = 0.17015726284726684;
    msg.psi = 0.916493515242937;
    msg.p = 0.43295707142807505;
    msg.q = 0.4890548050883906;
    msg.r = 0.6057750515323099;
    msg.u = 0.03187617244656238;
    msg.v = 0.6130509494567112;
    msg.w = 0.10414116262950701;
    msg.bias_psi = 0.19061616541493187;
    msg.bias_r = 0.2573382833909852;

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
    msg.setTimeStamp(0.9065743758565873);
    msg.setSource(42493U);
    msg.setSourceEntity(185U);
    msg.setDestination(60609U);
    msg.setDestinationEntity(184U);
    msg.x = 0.8061742917834096;
    msg.y = 0.44294038524389956;
    msg.z = 0.8784924697548139;
    msg.phi = 0.5080884568618032;
    msg.theta = 0.444390968393498;
    msg.psi = 0.7506939984370359;
    msg.p = 0.212796525069068;
    msg.q = 0.5430606602482028;
    msg.r = 0.723529271583791;
    msg.u = 0.9190116004903502;
    msg.v = 0.16646957526033057;
    msg.w = 0.8079460642090989;
    msg.bias_psi = 0.43533103010384555;
    msg.bias_r = 0.09131241798472756;

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
    msg.setTimeStamp(0.7765543660268582);
    msg.setSource(32552U);
    msg.setSourceEntity(252U);
    msg.setDestination(4477U);
    msg.setDestinationEntity(195U);
    msg.bias_psi = 0.0361979848165751;
    msg.bias_r = 0.38876846348340977;
    msg.cog = 0.8791654674878665;
    msg.cyaw = 0.8702370827725703;
    msg.lbl_rej_level = 0.36578608687743064;
    msg.gps_rej_level = 0.1071356699998468;
    msg.custom_x = 0.9490724659180403;
    msg.custom_y = 0.961359226003122;
    msg.custom_z = 0.7812262587683089;

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
    msg.setTimeStamp(0.7692968520852851);
    msg.setSource(59820U);
    msg.setSourceEntity(101U);
    msg.setDestination(64519U);
    msg.setDestinationEntity(121U);
    msg.bias_psi = 0.7174890114398114;
    msg.bias_r = 0.4573335986651742;
    msg.cog = 0.9659040225705596;
    msg.cyaw = 0.6647453005069466;
    msg.lbl_rej_level = 0.3618747198377815;
    msg.gps_rej_level = 0.701312198728336;
    msg.custom_x = 0.6612415562362408;
    msg.custom_y = 0.1435729388016168;
    msg.custom_z = 0.6157305413914557;

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
    msg.setTimeStamp(0.7916846703891626);
    msg.setSource(27110U);
    msg.setSourceEntity(107U);
    msg.setDestination(53064U);
    msg.setDestinationEntity(130U);
    msg.bias_psi = 0.15790362264352753;
    msg.bias_r = 0.8148782060942495;
    msg.cog = 0.038329430619144955;
    msg.cyaw = 0.099536063527225;
    msg.lbl_rej_level = 0.3553564240211756;
    msg.gps_rej_level = 0.5115826025168678;
    msg.custom_x = 0.5617446300222267;
    msg.custom_y = 0.06324451204026338;
    msg.custom_z = 0.5038587077749415;

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
    msg.setTimeStamp(0.7424907938139403);
    msg.setSource(60027U);
    msg.setSourceEntity(141U);
    msg.setDestination(33709U);
    msg.setDestinationEntity(4U);
    msg.utc_time = 0.46995428131979267;
    msg.reason = 31U;

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
    msg.setTimeStamp(0.7611924482624493);
    msg.setSource(57550U);
    msg.setSourceEntity(160U);
    msg.setDestination(47484U);
    msg.setDestinationEntity(200U);
    msg.utc_time = 0.5281755810727893;
    msg.reason = 15U;

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
    msg.setTimeStamp(0.7773156141241329);
    msg.setSource(23243U);
    msg.setSourceEntity(100U);
    msg.setDestination(55332U);
    msg.setDestinationEntity(73U);
    msg.utc_time = 0.4966393626451563;
    msg.reason = 221U;

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
    msg.setTimeStamp(0.15742214023677137);
    msg.setSource(63122U);
    msg.setSourceEntity(204U);
    msg.setDestination(36821U);
    msg.setDestinationEntity(88U);
    msg.id = 160U;
    msg.range = 0.7606449037141804;
    msg.acceptance = 130U;

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
    msg.setTimeStamp(0.24107063818188534);
    msg.setSource(25291U);
    msg.setSourceEntity(138U);
    msg.setDestination(30748U);
    msg.setDestinationEntity(211U);
    msg.id = 53U;
    msg.range = 0.15601830026455277;
    msg.acceptance = 70U;

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
    msg.setTimeStamp(0.5526613720748205);
    msg.setSource(18145U);
    msg.setSourceEntity(110U);
    msg.setDestination(47366U);
    msg.setDestinationEntity(11U);
    msg.id = 31U;
    msg.range = 0.3463079565074012;
    msg.acceptance = 27U;

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
    msg.setTimeStamp(0.22344786268223038);
    msg.setSource(55821U);
    msg.setSourceEntity(244U);
    msg.setDestination(16127U);
    msg.setDestinationEntity(128U);
    msg.type = 216U;
    msg.reason = 20U;
    msg.value = 0.4954199499191685;
    msg.timestep = 0.0956058280775578;

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
    msg.setTimeStamp(0.5932139200237797);
    msg.setSource(34409U);
    msg.setSourceEntity(105U);
    msg.setDestination(7130U);
    msg.setDestinationEntity(71U);
    msg.type = 234U;
    msg.reason = 119U;
    msg.value = 0.06495647036498498;
    msg.timestep = 0.7725563982566765;

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
    msg.setTimeStamp(0.24066965705532706);
    msg.setSource(1089U);
    msg.setSourceEntity(119U);
    msg.setDestination(50847U);
    msg.setDestinationEntity(216U);
    msg.type = 141U;
    msg.reason = 105U;
    msg.value = 0.4277398698245547;
    msg.timestep = 0.39588468116943865;

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
    msg.setTimeStamp(0.020376201524321513);
    msg.setSource(22186U);
    msg.setSourceEntity(237U);
    msg.setDestination(6081U);
    msg.setDestinationEntity(215U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ETYZQMHFBHFZETCXITOYOJSUPRYSOJEIHAFIGMNWKUMVQQMEHJCJNKPAWYNALLVUUCWJQSKOFMXUALCQXXJGUBVAYOIDWXSDQYFACEKLBHWSNDBLZBWSQBBLXIGCIIYYYINTVSVNGTWERKVHNFXTPCEGPGYIPDVZNLBRPQTRSWDAW");
    tmp_msg_0.lat = 0.6219136674847072;
    tmp_msg_0.lon = 0.4558780012280963;
    tmp_msg_0.depth = 0.4217295068829424;
    tmp_msg_0.query_channel = 216U;
    tmp_msg_0.reply_channel = 129U;
    tmp_msg_0.transponder_delay = 197U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.10250708550125176;
    msg.y = 0.6969213306781321;
    msg.var_x = 0.40408256472074633;
    msg.var_y = 0.7120699857187428;
    msg.distance = 0.015746771099578005;

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
    msg.setTimeStamp(0.12667746503300858);
    msg.setSource(26595U);
    msg.setSourceEntity(147U);
    msg.setDestination(14950U);
    msg.setDestinationEntity(192U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OMLQQWPXYFTHMQRVRUDWWVWPCYVMWNCKEWDUFQBJUYZATUEVMAGXFASIJRSMXUORMMTBOSFOCIBSGOZCTYYCXJBSLMUNLLG");
    tmp_msg_0.lat = 0.4742428716591084;
    tmp_msg_0.lon = 0.6674178343725787;
    tmp_msg_0.depth = 0.9936296170193317;
    tmp_msg_0.query_channel = 49U;
    tmp_msg_0.reply_channel = 219U;
    tmp_msg_0.transponder_delay = 30U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3792101825529871;
    msg.y = 0.680192674276342;
    msg.var_x = 0.46698253961775515;
    msg.var_y = 0.16868246169257695;
    msg.distance = 0.27731664470904105;

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
    msg.setTimeStamp(0.2538835995763119);
    msg.setSource(4756U);
    msg.setSourceEntity(11U);
    msg.setDestination(18427U);
    msg.setDestinationEntity(140U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IETPDGTOGEWLAOKYVKSROIGAMEANMDCUUUSWVMGDIFUACPOZOPTLFKCLONQGCFZDTMJDHNLHNXZFKIFRYKBLANSWNUPVBTFITDULBXBFMJCRWMCROCSSFKDPGWRAMHXXYYTZZPRVPFEASQRCMVYEVARXGZYNSQIRQVESEUHUYGAMXGLBHQVKIOGIZXSJVLBPAXYSBWZEOFEPVRZWENIJ");
    tmp_msg_0.lat = 0.873336810805401;
    tmp_msg_0.lon = 0.3623654827857796;
    tmp_msg_0.depth = 0.1973372325622612;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 183U;
    tmp_msg_0.transponder_delay = 239U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9838310010650855;
    msg.y = 0.8336014640733955;
    msg.var_x = 0.7622072248638116;
    msg.var_y = 0.9578838067002825;
    msg.distance = 0.7348212442890346;

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
    msg.setTimeStamp(0.5767655185845);
    msg.setSource(3546U);
    msg.setSourceEntity(216U);
    msg.setDestination(15969U);
    msg.setDestinationEntity(183U);
    msg.state = 45U;

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
    msg.setTimeStamp(0.8575496622508157);
    msg.setSource(19755U);
    msg.setSourceEntity(91U);
    msg.setDestination(22931U);
    msg.setDestinationEntity(64U);
    msg.state = 29U;

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
    msg.setTimeStamp(0.12940671752354438);
    msg.setSource(31057U);
    msg.setSourceEntity(15U);
    msg.setDestination(52778U);
    msg.setDestinationEntity(5U);
    msg.state = 251U;

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
    msg.setTimeStamp(0.30198835359064435);
    msg.setSource(32144U);
    msg.setSourceEntity(209U);
    msg.setDestination(9258U);
    msg.setDestinationEntity(56U);
    msg.x = 0.9706168536693514;
    msg.y = 0.09536409928321232;
    msg.z = 0.6133409170680092;

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
    msg.setTimeStamp(0.6183904741546128);
    msg.setSource(59951U);
    msg.setSourceEntity(39U);
    msg.setDestination(22922U);
    msg.setDestinationEntity(3U);
    msg.x = 0.8487350491718957;
    msg.y = 0.9927653978346659;
    msg.z = 0.8321506341563696;

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
    msg.setTimeStamp(0.6615309021130525);
    msg.setSource(41035U);
    msg.setSourceEntity(185U);
    msg.setDestination(60981U);
    msg.setDestinationEntity(191U);
    msg.x = 0.6856874866327441;
    msg.y = 0.6957595008798358;
    msg.z = 0.7327843147659808;

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
    msg.setTimeStamp(0.28429698691982197);
    msg.setSource(21382U);
    msg.setSourceEntity(194U);
    msg.setDestination(27958U);
    msg.setDestinationEntity(78U);
    msg.va = 0.9009525400732228;
    msg.aoa = 0.5389298140598604;
    msg.ssa = 0.17638482484333173;

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
    msg.setTimeStamp(0.8258592894915594);
    msg.setSource(58689U);
    msg.setSourceEntity(235U);
    msg.setDestination(16919U);
    msg.setDestinationEntity(47U);
    msg.va = 0.4217300568047301;
    msg.aoa = 0.6328459367215116;
    msg.ssa = 0.15861356473984278;

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
    msg.setTimeStamp(0.12843435214323573);
    msg.setSource(63574U);
    msg.setSourceEntity(179U);
    msg.setDestination(24919U);
    msg.setDestinationEntity(191U);
    msg.va = 0.5138568748418343;
    msg.aoa = 0.9011223098414508;
    msg.ssa = 0.659782114659635;

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
    msg.setTimeStamp(0.10103440323853685);
    msg.setSource(26001U);
    msg.setSourceEntity(213U);
    msg.setDestination(56666U);
    msg.setDestinationEntity(60U);
    msg.value = 0.9424235390027638;

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
    msg.setTimeStamp(0.8950277344332996);
    msg.setSource(10134U);
    msg.setSourceEntity(176U);
    msg.setDestination(56263U);
    msg.setDestinationEntity(80U);
    msg.value = 0.35739167366753377;

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
    msg.setTimeStamp(0.15074760862133796);
    msg.setSource(5894U);
    msg.setSourceEntity(1U);
    msg.setDestination(28172U);
    msg.setDestinationEntity(40U);
    msg.value = 0.897867857568957;

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
    msg.setTimeStamp(0.1414666557549218);
    msg.setSource(49966U);
    msg.setSourceEntity(107U);
    msg.setDestination(54914U);
    msg.setDestinationEntity(80U);
    msg.value = 0.64846305852411;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.04137181036415383);
    msg.setSource(18863U);
    msg.setSourceEntity(17U);
    msg.setDestination(41606U);
    msg.setDestinationEntity(141U);
    msg.value = 0.23390789363305764;
    msg.z_units = 210U;

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
    msg.setTimeStamp(0.3600034476816274);
    msg.setSource(13873U);
    msg.setSourceEntity(2U);
    msg.setDestination(36320U);
    msg.setDestinationEntity(72U);
    msg.value = 0.19623869873891342;
    msg.z_units = 150U;

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
    msg.setTimeStamp(0.7421540772570626);
    msg.setSource(32768U);
    msg.setSourceEntity(191U);
    msg.setDestination(6809U);
    msg.setDestinationEntity(170U);
    msg.value = 0.43649592183983255;
    msg.speed_units = 171U;

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
    msg.setTimeStamp(0.882489539339319);
    msg.setSource(36141U);
    msg.setSourceEntity(42U);
    msg.setDestination(35274U);
    msg.setDestinationEntity(155U);
    msg.value = 0.3567302707820488;
    msg.speed_units = 97U;

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
    msg.setTimeStamp(0.5250353811288844);
    msg.setSource(12768U);
    msg.setSourceEntity(162U);
    msg.setDestination(16438U);
    msg.setDestinationEntity(163U);
    msg.value = 0.7541482866664122;
    msg.speed_units = 17U;

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
    msg.setTimeStamp(0.811775860314227);
    msg.setSource(59198U);
    msg.setSourceEntity(150U);
    msg.setDestination(40208U);
    msg.setDestinationEntity(8U);
    msg.value = 0.7167533263008738;

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
    msg.setTimeStamp(0.5166132540100051);
    msg.setSource(57403U);
    msg.setSourceEntity(76U);
    msg.setDestination(57331U);
    msg.setDestinationEntity(131U);
    msg.value = 0.570272087939418;

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
    msg.setTimeStamp(0.7853381609690538);
    msg.setSource(21377U);
    msg.setSourceEntity(125U);
    msg.setDestination(64615U);
    msg.setDestinationEntity(70U);
    msg.value = 0.5101803879845439;

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
    msg.setTimeStamp(0.42544212866817754);
    msg.setSource(28190U);
    msg.setSourceEntity(88U);
    msg.setDestination(31747U);
    msg.setDestinationEntity(222U);
    msg.value = 0.8030212438539526;

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
    msg.setTimeStamp(0.7728719258433993);
    msg.setSource(19881U);
    msg.setSourceEntity(30U);
    msg.setDestination(59279U);
    msg.setDestinationEntity(225U);
    msg.value = 0.4899405181814852;

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
    msg.setTimeStamp(0.6644268698827702);
    msg.setSource(43995U);
    msg.setSourceEntity(111U);
    msg.setDestination(23789U);
    msg.setDestinationEntity(64U);
    msg.value = 0.1591995568045942;

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
    msg.setTimeStamp(0.1389040476556116);
    msg.setSource(22562U);
    msg.setSourceEntity(245U);
    msg.setDestination(25988U);
    msg.setDestinationEntity(21U);
    msg.value = 0.7090357569838958;

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
    msg.setTimeStamp(0.20232681209526426);
    msg.setSource(47445U);
    msg.setSourceEntity(88U);
    msg.setDestination(39589U);
    msg.setDestinationEntity(161U);
    msg.value = 0.6418171204872835;

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
    msg.setTimeStamp(0.6082493945366357);
    msg.setSource(50488U);
    msg.setSourceEntity(187U);
    msg.setDestination(31379U);
    msg.setDestinationEntity(146U);
    msg.value = 0.8526343871756445;

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
    msg.setTimeStamp(0.2038949005637669);
    msg.setSource(58775U);
    msg.setSourceEntity(41U);
    msg.setDestination(21701U);
    msg.setDestinationEntity(15U);
    msg.path_ref = 1715027092U;
    msg.start_lat = 0.9374520168520089;
    msg.start_lon = 0.040121262913074274;
    msg.start_z = 0.39603974285780397;
    msg.start_z_units = 165U;
    msg.end_lat = 0.5629281776831544;
    msg.end_lon = 0.024264823714052586;
    msg.end_z = 0.20361984156882862;
    msg.end_z_units = 140U;
    msg.speed = 0.6296525048620429;
    msg.speed_units = 40U;
    msg.lradius = 0.7702904261821211;
    msg.flags = 221U;

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
    msg.setTimeStamp(0.6517953651921247);
    msg.setSource(6684U);
    msg.setSourceEntity(30U);
    msg.setDestination(54601U);
    msg.setDestinationEntity(19U);
    msg.path_ref = 3661888788U;
    msg.start_lat = 0.8988736492486354;
    msg.start_lon = 0.03568729249543934;
    msg.start_z = 0.20866066840957598;
    msg.start_z_units = 228U;
    msg.end_lat = 0.26828672520010655;
    msg.end_lon = 0.607052765080616;
    msg.end_z = 0.3733630929319298;
    msg.end_z_units = 227U;
    msg.speed = 0.5586428234830766;
    msg.speed_units = 154U;
    msg.lradius = 0.1692378514549191;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.2190875917237881);
    msg.setSource(42509U);
    msg.setSourceEntity(101U);
    msg.setDestination(47258U);
    msg.setDestinationEntity(63U);
    msg.path_ref = 1285656756U;
    msg.start_lat = 0.3218959045176826;
    msg.start_lon = 0.25960336653569727;
    msg.start_z = 0.11819893592693431;
    msg.start_z_units = 231U;
    msg.end_lat = 0.7652155947837562;
    msg.end_lon = 0.7306138108889021;
    msg.end_z = 0.28525050159563214;
    msg.end_z_units = 158U;
    msg.speed = 0.23706552601577824;
    msg.speed_units = 75U;
    msg.lradius = 0.03490174204165852;
    msg.flags = 105U;

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
    msg.setTimeStamp(0.9714522749077791);
    msg.setSource(64483U);
    msg.setSourceEntity(103U);
    msg.setDestination(31989U);
    msg.setDestinationEntity(102U);
    msg.x = 0.7538487785397133;
    msg.y = 0.9366108971183188;
    msg.z = 0.08064997031296883;
    msg.k = 0.3370142731372361;
    msg.m = 0.16926384033682185;
    msg.n = 0.19691886966153715;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.9496330185207225);
    msg.setSource(59016U);
    msg.setSourceEntity(32U);
    msg.setDestination(15344U);
    msg.setDestinationEntity(14U);
    msg.x = 0.13006534006100134;
    msg.y = 0.22367396544913698;
    msg.z = 0.15382105511249344;
    msg.k = 0.6419318124663626;
    msg.m = 0.9114450586373166;
    msg.n = 0.7870965655988762;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.6250306587973282);
    msg.setSource(56507U);
    msg.setSourceEntity(58U);
    msg.setDestination(47801U);
    msg.setDestinationEntity(47U);
    msg.x = 0.14909420707465593;
    msg.y = 0.6858675914685592;
    msg.z = 0.3706732419105032;
    msg.k = 0.9253781352874177;
    msg.m = 0.3252782439415344;
    msg.n = 0.5124573536403196;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.46796514732833194);
    msg.setSource(41964U);
    msg.setSourceEntity(97U);
    msg.setDestination(58730U);
    msg.setDestinationEntity(133U);
    msg.value = 0.07432354645515282;

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
    msg.setTimeStamp(0.5734189366355372);
    msg.setSource(50511U);
    msg.setSourceEntity(85U);
    msg.setDestination(6214U);
    msg.setDestinationEntity(106U);
    msg.value = 0.19645342646819475;

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
    msg.setTimeStamp(0.3063873185496834);
    msg.setSource(30223U);
    msg.setSourceEntity(14U);
    msg.setDestination(19794U);
    msg.setDestinationEntity(113U);
    msg.value = 0.6625849158682969;

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
    msg.setTimeStamp(0.6543334008118235);
    msg.setSource(57172U);
    msg.setSourceEntity(5U);
    msg.setDestination(44012U);
    msg.setDestinationEntity(71U);
    msg.u = 0.5934897279062762;
    msg.v = 0.32834491640953334;
    msg.w = 0.20095108573307685;
    msg.p = 0.1755332274725705;
    msg.q = 0.42449014530036944;
    msg.r = 0.7085544651371107;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.9662742920453169);
    msg.setSource(56441U);
    msg.setSourceEntity(222U);
    msg.setDestination(34067U);
    msg.setDestinationEntity(118U);
    msg.u = 0.3921830551523551;
    msg.v = 0.7007328665755373;
    msg.w = 0.08180643232871576;
    msg.p = 0.5301515522316981;
    msg.q = 0.8261553825790361;
    msg.r = 0.8799230951369932;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.8426060151583816);
    msg.setSource(61311U);
    msg.setSourceEntity(5U);
    msg.setDestination(47939U);
    msg.setDestinationEntity(149U);
    msg.u = 0.8356085512108963;
    msg.v = 0.05860854233978707;
    msg.w = 0.3254974621663135;
    msg.p = 0.9114655828810738;
    msg.q = 0.3017829177356812;
    msg.r = 0.293716650880536;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.8569795863449964);
    msg.setSource(23448U);
    msg.setSourceEntity(153U);
    msg.setDestination(28423U);
    msg.setDestinationEntity(82U);
    msg.path_ref = 781980541U;
    msg.start_lat = 0.8640366178792361;
    msg.start_lon = 0.6549437252651543;
    msg.start_z = 0.4904112307236024;
    msg.start_z_units = 216U;
    msg.end_lat = 0.23368031096575792;
    msg.end_lon = 0.9492905768745475;
    msg.end_z = 0.7017551215052568;
    msg.end_z_units = 201U;
    msg.lradius = 0.43065149569295236;
    msg.flags = 253U;
    msg.x = 0.8108033535648714;
    msg.y = 0.8997384942082376;
    msg.z = 0.1797410525041997;
    msg.vx = 0.7805564033179656;
    msg.vy = 0.7080101422228248;
    msg.vz = 0.02895980562878142;
    msg.course_error = 0.6818149819193923;
    msg.eta = 38182U;

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
    msg.setTimeStamp(0.5113551581857237);
    msg.setSource(46297U);
    msg.setSourceEntity(134U);
    msg.setDestination(8399U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 1380858008U;
    msg.start_lat = 0.7245094469925746;
    msg.start_lon = 0.6356688735158861;
    msg.start_z = 0.583292196735727;
    msg.start_z_units = 233U;
    msg.end_lat = 0.2923357886617677;
    msg.end_lon = 0.9671927899253113;
    msg.end_z = 0.8188556994678079;
    msg.end_z_units = 165U;
    msg.lradius = 0.4606895189756661;
    msg.flags = 2U;
    msg.x = 0.5808536142857176;
    msg.y = 0.4249754393670867;
    msg.z = 0.3383296419922486;
    msg.vx = 0.08100882503267903;
    msg.vy = 0.9574956150561174;
    msg.vz = 0.5687717448478153;
    msg.course_error = 0.7606082937220892;
    msg.eta = 28282U;

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
    msg.setTimeStamp(0.6465608910710151);
    msg.setSource(58218U);
    msg.setSourceEntity(230U);
    msg.setDestination(26364U);
    msg.setDestinationEntity(176U);
    msg.path_ref = 3022769192U;
    msg.start_lat = 0.06898090957606107;
    msg.start_lon = 0.9244118418327392;
    msg.start_z = 0.013988510073214666;
    msg.start_z_units = 131U;
    msg.end_lat = 0.1184565143717553;
    msg.end_lon = 0.23957226593205772;
    msg.end_z = 0.9284493947055409;
    msg.end_z_units = 163U;
    msg.lradius = 0.7788088036594745;
    msg.flags = 225U;
    msg.x = 0.5317660382941342;
    msg.y = 0.4754790637210564;
    msg.z = 0.2895377805367848;
    msg.vx = 0.11721102449644838;
    msg.vy = 0.9733124636144561;
    msg.vz = 0.4233491128434408;
    msg.course_error = 0.8814014363683993;
    msg.eta = 47142U;

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
    msg.setTimeStamp(0.7789583146880674);
    msg.setSource(8724U);
    msg.setSourceEntity(87U);
    msg.setDestination(12782U);
    msg.setDestinationEntity(14U);
    msg.k = 0.4429092636526263;
    msg.m = 0.282698081181904;
    msg.n = 0.31852111463456223;

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
    msg.setTimeStamp(0.7578372517268314);
    msg.setSource(19289U);
    msg.setSourceEntity(123U);
    msg.setDestination(29685U);
    msg.setDestinationEntity(50U);
    msg.k = 0.5883893838001597;
    msg.m = 0.5343760543580678;
    msg.n = 0.8572663075656963;

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
    msg.setTimeStamp(0.6953744188989036);
    msg.setSource(35361U);
    msg.setSourceEntity(146U);
    msg.setDestination(25362U);
    msg.setDestinationEntity(150U);
    msg.k = 0.7983983547820345;
    msg.m = 0.29431458892834095;
    msg.n = 0.8286088403535503;

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
    msg.setTimeStamp(0.7445899251240121);
    msg.setSource(29701U);
    msg.setSourceEntity(16U);
    msg.setDestination(23888U);
    msg.setDestinationEntity(135U);
    msg.p = 0.948026517466281;
    msg.i = 0.4888069581032586;
    msg.d = 0.42676937889402045;
    msg.a = 0.5096956039545372;

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
    msg.setTimeStamp(0.4701737693117356);
    msg.setSource(39479U);
    msg.setSourceEntity(148U);
    msg.setDestination(61125U);
    msg.setDestinationEntity(201U);
    msg.p = 0.8240506865919772;
    msg.i = 0.7705565684452174;
    msg.d = 0.19339793362481317;
    msg.a = 0.9532386992667355;

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
    msg.setTimeStamp(0.21587587393931307);
    msg.setSource(46245U);
    msg.setSourceEntity(162U);
    msg.setDestination(15133U);
    msg.setDestinationEntity(149U);
    msg.p = 0.10949436370094379;
    msg.i = 0.2280130837017348;
    msg.d = 0.043390814617412676;
    msg.a = 0.8489103215071583;

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
    msg.setTimeStamp(0.3930449913054871);
    msg.setSource(46316U);
    msg.setSourceEntity(50U);
    msg.setDestination(15660U);
    msg.setDestinationEntity(175U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.49209847721536626);
    msg.setSource(27693U);
    msg.setSourceEntity(67U);
    msg.setDestination(22923U);
    msg.setDestinationEntity(236U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.670107301653329);
    msg.setSource(19436U);
    msg.setSourceEntity(238U);
    msg.setDestination(53423U);
    msg.setDestinationEntity(68U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.920434928433976);
    msg.setSource(19072U);
    msg.setSourceEntity(137U);
    msg.setDestination(63757U);
    msg.setDestinationEntity(65U);
    msg.x = 0.06394423820199058;
    msg.y = 0.425949051710347;
    msg.z = 0.6651298601964997;
    msg.vx = 0.5723642854521822;
    msg.vy = 0.7082395838717611;
    msg.vz = 0.6349960269999083;
    msg.ax = 0.11776895303878054;
    msg.ay = 0.39934524438323593;
    msg.az = 0.08081571861282932;
    msg.flags = 47902U;

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
    msg.setTimeStamp(0.6513945444639537);
    msg.setSource(62422U);
    msg.setSourceEntity(156U);
    msg.setDestination(8345U);
    msg.setDestinationEntity(191U);
    msg.x = 0.12911186382301332;
    msg.y = 0.33866909944737356;
    msg.z = 0.7475902512612324;
    msg.vx = 0.8259463147485707;
    msg.vy = 0.2631614134792769;
    msg.vz = 0.0882404001876852;
    msg.ax = 0.22693148920754525;
    msg.ay = 0.8816004365019;
    msg.az = 0.09495446863842638;
    msg.flags = 11469U;

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
    msg.setTimeStamp(0.7497471906650514);
    msg.setSource(25942U);
    msg.setSourceEntity(37U);
    msg.setDestination(32016U);
    msg.setDestinationEntity(166U);
    msg.x = 0.7851968268634143;
    msg.y = 0.9559922793354297;
    msg.z = 0.33911705561018357;
    msg.vx = 0.9449822278164917;
    msg.vy = 0.2645813646279327;
    msg.vz = 0.7838092412163853;
    msg.ax = 0.273468843995592;
    msg.ay = 0.8909200213942369;
    msg.az = 0.611905588946845;
    msg.flags = 33035U;

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
    msg.setTimeStamp(0.20190689312712728);
    msg.setSource(26345U);
    msg.setSourceEntity(112U);
    msg.setDestination(27869U);
    msg.setDestinationEntity(87U);
    msg.value = 0.5344378670715373;

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
    msg.setTimeStamp(0.9360522464159546);
    msg.setSource(48409U);
    msg.setSourceEntity(253U);
    msg.setDestination(15327U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7693756328498442;

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
    msg.setTimeStamp(0.9847221537286421);
    msg.setSource(27388U);
    msg.setSourceEntity(195U);
    msg.setDestination(52783U);
    msg.setDestinationEntity(121U);
    msg.value = 0.5576520902340937;

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
    msg.setTimeStamp(0.2546652879908061);
    msg.setSource(16718U);
    msg.setSourceEntity(152U);
    msg.setDestination(43025U);
    msg.setDestinationEntity(133U);
    msg.timeout = 42793U;
    msg.lat = 0.6324899628422622;
    msg.lon = 0.5191907157906647;
    msg.z = 0.03050792555640902;
    msg.z_units = 1U;
    msg.speed = 0.4105654789117342;
    msg.speed_units = 160U;
    msg.roll = 0.9695144709334441;
    msg.pitch = 0.31536291320317544;
    msg.yaw = 0.9569208500453605;
    msg.custom.assign("YZETUVLBUUIMWHSOWDFZIEERDHQ");

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
    msg.setTimeStamp(0.7583726835430978);
    msg.setSource(10893U);
    msg.setSourceEntity(182U);
    msg.setDestination(41224U);
    msg.setDestinationEntity(33U);
    msg.timeout = 62797U;
    msg.lat = 0.5874054368931985;
    msg.lon = 0.5196318456024198;
    msg.z = 0.7649751256035952;
    msg.z_units = 102U;
    msg.speed = 0.8311219840649515;
    msg.speed_units = 13U;
    msg.roll = 0.23292099451040627;
    msg.pitch = 0.8081029489147381;
    msg.yaw = 0.8349137281410043;
    msg.custom.assign("GDOVNTTPKGZFEIIYGVNARLKAXJIFWAROWCVLQMNHTTUAWVJRYQOEIUPVHFTFBELPJWJUJDBRMXHWHPSWNGXDSZZDZAQXADRCBOIZEGAFMMUPBKCRLSCYGLESYYNOCDRVYCMPBDQEWPQPPXYQITD");

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
    msg.setTimeStamp(0.6426136083216163);
    msg.setSource(55881U);
    msg.setSourceEntity(204U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(145U);
    msg.timeout = 1799U;
    msg.lat = 0.9840685658862988;
    msg.lon = 0.7182916868581596;
    msg.z = 0.9668722664223057;
    msg.z_units = 169U;
    msg.speed = 0.24118606127345055;
    msg.speed_units = 124U;
    msg.roll = 0.2892534524778647;
    msg.pitch = 0.11773885683122798;
    msg.yaw = 0.013248048452600525;
    msg.custom.assign("VXHNUEKETCZFDLAYRNFVYKTFLCPXCXYQSKUHPFTQXDVOZPDQORHVBBSAWAPLKILWWDQONCMSTLFNUWSOIXGMVOYOJHFLHGTHMLARLJBSOSWFEEKZYIDPXRVUXSZLXKRIPHZZWKANNOINSKTPQWTRMZTHQCQTBAYPGEDIZMVHBRWEUVOVRDMPZMDMGCUGLJYFJBJFEEJBVQEBCGNKAEPG");

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
    msg.setTimeStamp(0.1369904065899813);
    msg.setSource(14378U);
    msg.setSourceEntity(131U);
    msg.setDestination(45803U);
    msg.setDestinationEntity(213U);
    msg.timeout = 12927U;
    msg.lat = 0.5999171242288508;
    msg.lon = 0.12821102949438035;
    msg.z = 0.07430181111442025;
    msg.z_units = 122U;
    msg.speed = 0.7465330252514637;
    msg.speed_units = 79U;
    msg.duration = 6111U;
    msg.radius = 0.2118222788460996;
    msg.flags = 38U;
    msg.custom.assign("KESGBMOOGRGVDDKLFXSFULINEGQJBVBAZUNPEJBBZXDHRLNZORRSPQYSZELDSYUHJTICNYTKOLREXICMTOHUPODVAWXPIABMCAUQWY");

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
    msg.setTimeStamp(0.26617615966108854);
    msg.setSource(65242U);
    msg.setSourceEntity(10U);
    msg.setDestination(20537U);
    msg.setDestinationEntity(206U);
    msg.timeout = 12608U;
    msg.lat = 0.9994266904440571;
    msg.lon = 0.8687973221725855;
    msg.z = 0.8283407252736906;
    msg.z_units = 75U;
    msg.speed = 0.5652445667127275;
    msg.speed_units = 125U;
    msg.duration = 42802U;
    msg.radius = 0.4598659127124919;
    msg.flags = 82U;
    msg.custom.assign("IIVEASEYFSYLYCYUNABEIWMCZFXCIZOFZSXOANBZQPADYRQVPO");

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
    msg.setTimeStamp(0.9930518380765105);
    msg.setSource(31796U);
    msg.setSourceEntity(61U);
    msg.setDestination(26753U);
    msg.setDestinationEntity(101U);
    msg.timeout = 23624U;
    msg.lat = 0.2503430674931927;
    msg.lon = 0.41138474537411696;
    msg.z = 0.315700530712141;
    msg.z_units = 0U;
    msg.speed = 0.8915844055319263;
    msg.speed_units = 76U;
    msg.duration = 2699U;
    msg.radius = 0.7510528272073358;
    msg.flags = 175U;
    msg.custom.assign("SPURTVOBQEEXLELLIPAWGRPDAOCRGQUZBMZVFNNMVJUXWAXPNCZBPHPHJWFSEBYADKSMMFKJVANXESXGHJWZRLDKHHTFWVJFBKOOCVESNWBGUICEYIOJSRQWNVQMRIIMPHTTVRLMDDIYBFAIKPUCHORTGPLDZCTGUKTCAMCTEMJZGIYFKDOEQHELZFNHXSDRXLATXYGGAYMKUNZFWYPIWBQYSTYVFLXJWKDQCZNBSQZUOSXCVJ");

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
    msg.setTimeStamp(0.7772134956493645);
    msg.setSource(44668U);
    msg.setSourceEntity(11U);
    msg.setDestination(49027U);
    msg.setDestinationEntity(232U);
    msg.custom.assign("ASXPWAJVOBXZNZJUVULCDUVRLMKPGPTQTEPJNJSENBKMJOKBVKTRYHLHWRSEIILPQAFAPITRXHMQGJEYFGDWYONVQRDMMXOLFPKOVMBGHTANMSNEZHXDUWIOUCWGRWJWDYFEVVCBUDPYNRMFNIRCBHSLFTADZLKOGIBCZQJFEZ");

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
    msg.setTimeStamp(0.7172321964126076);
    msg.setSource(3043U);
    msg.setSourceEntity(111U);
    msg.setDestination(17919U);
    msg.setDestinationEntity(26U);
    msg.custom.assign("KGXCTTSGQKJOTLJVWQHAAZFSWHXDWGJBEXSKQUIKFSSQGUCNUWDMQJOKFTZKAKNDITMLY");

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
    msg.setTimeStamp(0.10091389551384011);
    msg.setSource(39290U);
    msg.setSourceEntity(43U);
    msg.setDestination(24028U);
    msg.setDestinationEntity(144U);
    msg.custom.assign("QOOSBGEIPMJYSPPBYBVELLNJFEGHJISIAKQVULWUGVUPXVDDQEAPFXITROXBVNDRBJCSREHMGWADGXKHLYNVWCFNDKHCAUORKZLLOLGDIIAXSDJWWUMCJFYQMMIQABQTQDPZMOHVZUCYTSWWRCOXOTRVZYESLAKHZWZCWEGKKTMZEBNBPJGRASATGMUXFDOHIFFKQRYWUDMIQCLJNASVZZEXEPJYBUXSTNQCFKT");

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
    msg.setTimeStamp(0.3927153198594475);
    msg.setSource(33860U);
    msg.setSourceEntity(104U);
    msg.setDestination(36220U);
    msg.setDestinationEntity(93U);
    msg.timeout = 28693U;
    msg.lat = 0.24150403727623715;
    msg.lon = 0.18907794463310879;
    msg.z = 0.8787076500738258;
    msg.z_units = 12U;
    msg.duration = 15807U;
    msg.speed = 0.4354253089446457;
    msg.speed_units = 149U;
    msg.type = 103U;
    msg.radius = 0.3879279508830753;
    msg.length = 0.9295011162589158;
    msg.bearing = 0.7846489075217016;
    msg.direction = 43U;
    msg.custom.assign("FBAIGRQZLZDSFNPLCKKGZHUMSGVAQLZOQYBJPUMUGEXDIYSTCLKTJZLWMYAQVRVNVT");

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
    msg.setTimeStamp(0.26127284039182697);
    msg.setSource(1911U);
    msg.setSourceEntity(44U);
    msg.setDestination(39681U);
    msg.setDestinationEntity(147U);
    msg.timeout = 53896U;
    msg.lat = 0.7357205210916749;
    msg.lon = 0.9908553411504513;
    msg.z = 0.11981724254808823;
    msg.z_units = 62U;
    msg.duration = 48172U;
    msg.speed = 0.6818135305186493;
    msg.speed_units = 126U;
    msg.type = 133U;
    msg.radius = 0.38962825868823237;
    msg.length = 0.4924203018594958;
    msg.bearing = 0.2629689724731069;
    msg.direction = 156U;
    msg.custom.assign("WXISBCHLWBZUNAXNQRYXJUNKGIFDOMIROKAWTWMWYDYZGCVRSDTMQBOSFRFTLVPPJNADLKAAOBCLXFIYPHSEBJSQWJYLPELEXFJSKKCMZBEFYZNHATRMCALTDZXRNSLONKIECSDYJQHVEPHYVFWXURFIDOVBHDGTSUHULMWUAKTZVSORDTACI");

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
    msg.setTimeStamp(0.1837663976107553);
    msg.setSource(34006U);
    msg.setSourceEntity(17U);
    msg.setDestination(22000U);
    msg.setDestinationEntity(19U);
    msg.timeout = 62938U;
    msg.lat = 0.2200255758436499;
    msg.lon = 0.913119831151084;
    msg.z = 0.4846883506996701;
    msg.z_units = 20U;
    msg.duration = 30685U;
    msg.speed = 0.37182478078226056;
    msg.speed_units = 21U;
    msg.type = 81U;
    msg.radius = 0.04027965957600188;
    msg.length = 0.07953448070793212;
    msg.bearing = 0.19489383025304874;
    msg.direction = 248U;
    msg.custom.assign("LDMSPSZKEGUCHRMSGUJZBPVRTYCFDLDYENDTFYBLPOGJILTBTHJDQNSKHIQBIMTKTBWABXUYAMYNJU");

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
    msg.setTimeStamp(0.3605718458098006);
    msg.setSource(17401U);
    msg.setSourceEntity(207U);
    msg.setDestination(50718U);
    msg.setDestinationEntity(8U);
    msg.duration = 10674U;
    msg.custom.assign("YDJATAWSCLROQVDZYMNWJWEXJCFPEIFY");

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
    msg.setTimeStamp(0.12306573481646954);
    msg.setSource(30007U);
    msg.setSourceEntity(89U);
    msg.setDestination(11756U);
    msg.setDestinationEntity(151U);
    msg.duration = 59258U;
    msg.custom.assign("SVYHGQFRNAOHLXYHVCXIDOFKGWLFKJGXLUJCECPMVXHFSTTMBBNKUJPGPWNEGFRUHCOPQIVFIOPWYQBCKWAXIYQCSQUAJHBADWCNKDEVPSNDSSBBNMBBCSLQDFMY");

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
    msg.setTimeStamp(0.06971923331520236);
    msg.setSource(1355U);
    msg.setSourceEntity(153U);
    msg.setDestination(26506U);
    msg.setDestinationEntity(219U);
    msg.duration = 5803U;
    msg.custom.assign("QJJDEBWRTGRFFZPPQCXNVUBHZADFXOPHPICWZNSYEKOXWDZGYKOLRFPHZTMMGJAYAXFYZSIIDNAYMPYKGGTJYNVILTIQBWCEVTLGRLSBAHSIUVOCRKBKCOXSWHFIRUMUNVHCBMPWTIQ");

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
    msg.setTimeStamp(0.49009701948439166);
    msg.setSource(5765U);
    msg.setSourceEntity(55U);
    msg.setDestination(57302U);
    msg.setDestinationEntity(68U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5691629212768375;
    msg.control.set(tmp_msg_0);
    msg.duration = 12288U;
    msg.custom.assign("HBPJHVGDTZOPECDIJHJSRTHOTZCEYEILGMWJURGKAQJZUSWECAJSYWTHFLXVNAPSMKWCFAFIODNUDTLELBPSBLLMNNQEJSGKIEQMUKIRNUKIMPJJDZVFVBOUQTVSZXAGU");

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
    msg.setTimeStamp(0.15046589118372677);
    msg.setSource(46769U);
    msg.setSourceEntity(234U);
    msg.setDestination(37953U);
    msg.setDestinationEntity(65U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.24488960741929577;
    msg.control.set(tmp_msg_0);
    msg.duration = 520U;
    msg.custom.assign("HJSFCMHXETEHZSLADXZDRVUJLZKYFFXIEKCQXPOANKVNWXEVEBEQRVPODYDUKJOJPXTWOQRTAQGGACUCTF");

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
    msg.setTimeStamp(0.08961407067935334);
    msg.setSource(52043U);
    msg.setSourceEntity(253U);
    msg.setDestination(35342U);
    msg.setDestinationEntity(50U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.07825188868365607;
    msg.control.set(tmp_msg_0);
    msg.duration = 31397U;
    msg.custom.assign("CKWSKNIWHHVRJOBOVZEDTZDUHVBIAYTPFRJZTNLCGCGLMGJVZCEKUOJNHWRWPXO");

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
    msg.setTimeStamp(0.11745483512142207);
    msg.setSource(6679U);
    msg.setSourceEntity(241U);
    msg.setDestination(26306U);
    msg.setDestinationEntity(79U);
    msg.timeout = 46236U;
    msg.lat = 0.2724307838607758;
    msg.lon = 0.5801918354520968;
    msg.z = 0.5231767503363444;
    msg.z_units = 119U;
    msg.speed = 0.14485461440465242;
    msg.speed_units = 117U;
    msg.bearing = 0.639714852415355;
    msg.cross_angle = 0.6707987183144358;
    msg.width = 0.05333531053673535;
    msg.length = 0.21106744948536815;
    msg.hstep = 0.9037075326381041;
    msg.coff = 120U;
    msg.alternation = 250U;
    msg.flags = 235U;
    msg.custom.assign("KAHUBSKMWZTLIKAIOUFBZVJTROMO");

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
    msg.setTimeStamp(0.43597649824443996);
    msg.setSource(18392U);
    msg.setSourceEntity(52U);
    msg.setDestination(53617U);
    msg.setDestinationEntity(120U);
    msg.timeout = 58536U;
    msg.lat = 0.16668233726677117;
    msg.lon = 0.37709915932033644;
    msg.z = 0.8246961012283486;
    msg.z_units = 59U;
    msg.speed = 0.7290767688627907;
    msg.speed_units = 127U;
    msg.bearing = 0.264700354936486;
    msg.cross_angle = 0.6894746664905463;
    msg.width = 0.20364533995807;
    msg.length = 0.21315946769347072;
    msg.hstep = 0.3732670559613701;
    msg.coff = 222U;
    msg.alternation = 222U;
    msg.flags = 110U;
    msg.custom.assign("NRNPTTYEAKCLQEGVDKSJJSBUOLFLBUWVNYMSTFIWITGNUBLEEGRTXKRRJVTBHXETNXHEJOMCVRCBYJIMSYPFNCWMUAUZDFADJOECDPMVSFIHKSOCZPBYGJCZHFLHIUMXZRODLZOFIEWQMIQPBUALNGBXGCADNNRWHZWGVZISAS");

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
    msg.setTimeStamp(0.3084882699015997);
    msg.setSource(6696U);
    msg.setSourceEntity(144U);
    msg.setDestination(61840U);
    msg.setDestinationEntity(42U);
    msg.timeout = 33807U;
    msg.lat = 0.00296766987447572;
    msg.lon = 0.5003616942174413;
    msg.z = 0.26991507352468225;
    msg.z_units = 70U;
    msg.speed = 0.7196636540483218;
    msg.speed_units = 183U;
    msg.bearing = 0.7402375450504943;
    msg.cross_angle = 0.5571706414268136;
    msg.width = 0.23123408363693798;
    msg.length = 0.9284686533763234;
    msg.hstep = 0.660641004126612;
    msg.coff = 209U;
    msg.alternation = 152U;
    msg.flags = 119U;
    msg.custom.assign("ADUHFZAXYOHKYMFWQCWQYVFYLJYBFVGZTTVCWMDYHZSDLAKRTCFEEQTGOBNMPGRJPLEWRIQDCTLPYXPJLRIKZJZORBNZQIAFJTENXWOSXUDKENNGUTCBVYXDEGUBSIRVDZPLJEKIENQMTHRLHMLCNPZTGJBDMOPAGMKZEXVAAFKMWWKXMGWOIUO");

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
    msg.setTimeStamp(0.4601087251369467);
    msg.setSource(4489U);
    msg.setSourceEntity(185U);
    msg.setDestination(26846U);
    msg.setDestinationEntity(117U);
    msg.timeout = 23687U;
    msg.lat = 0.7878230145363571;
    msg.lon = 0.2529420593800452;
    msg.z = 0.7402877589094861;
    msg.z_units = 162U;
    msg.speed = 0.6266381223237966;
    msg.speed_units = 26U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.09072915567829942;
    tmp_msg_0.y = 0.9599554709080291;
    tmp_msg_0.z = 0.5345457091540191;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QKEFDRIWLREMAKGPAGCTDELKJSGNMJDYXBEGVXNDAMUPOWLPKJEZCIOUHFWSXIWMINJQCGXSRAJPMBZTSQPNVJIIURQIHELQZRVVCJABEHWDDBHLRKOZGGLAZUAMYHQKWSHRRDSVYQWNAMAYQYBQUGCNWIMHTTBYXTEKVWSTFMI");

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
    msg.setTimeStamp(0.11878364223506654);
    msg.setSource(54309U);
    msg.setSourceEntity(66U);
    msg.setDestination(6965U);
    msg.setDestinationEntity(18U);
    msg.timeout = 19782U;
    msg.lat = 0.6664244107591615;
    msg.lon = 0.3589613566738268;
    msg.z = 0.8512148491375972;
    msg.z_units = 8U;
    msg.speed = 0.6506101215790214;
    msg.speed_units = 110U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9406493014928624;
    tmp_msg_0.y = 0.48089453852428976;
    tmp_msg_0.z = 0.9392653463924274;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HBZPJIIXPLSXJDVDBGWAPQOHZWMQEAILMRVVGKJWWRGUZEFXTLXYJRVSZFVILDPVCBRRMMXPMSYXUEEGDPEQSQOYGBTTKULNVKDYGMNPQSLLDHLKAUEIZCHTOASRBJQBRJWCTLIMHNKMWNECYNC");

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
    msg.setTimeStamp(0.45011946112816614);
    msg.setSource(10977U);
    msg.setSourceEntity(166U);
    msg.setDestination(11475U);
    msg.setDestinationEntity(181U);
    msg.timeout = 9390U;
    msg.lat = 0.8966484803167112;
    msg.lon = 0.6740598306735032;
    msg.z = 0.5936598950651193;
    msg.z_units = 206U;
    msg.speed = 0.10265094447087664;
    msg.speed_units = 126U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.41041144602306645;
    tmp_msg_0.y = 0.439861210331316;
    tmp_msg_0.z = 0.765141787235005;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SHZOVUJRDWJOVPGVLJSLBTJFKYDEIRVPLHGNPAMMBOWMAETCOWUBAZGPUNIHDBXEWYSANQXSCUDEFHUDUUUIZANQVTVLGQBHKZWIKHOPGZVXESSLAKFTQJTEFBXHJJBOWAYWNDUIFQTQFRNIECCRVLZCMFKRYAEDKYMPVMOAFYELLJSFTCTGTN");

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
    msg.setTimeStamp(0.6966512584812694);
    msg.setSource(46226U);
    msg.setSourceEntity(150U);
    msg.setDestination(259U);
    msg.setDestinationEntity(219U);
    msg.x = 0.22719311852728508;
    msg.y = 0.6248236129063213;
    msg.z = 0.6391545040307101;

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
    msg.setTimeStamp(0.662918906683643);
    msg.setSource(26282U);
    msg.setSourceEntity(0U);
    msg.setDestination(33258U);
    msg.setDestinationEntity(18U);
    msg.x = 0.12805737710249399;
    msg.y = 0.43535679412752193;
    msg.z = 0.6490686063853964;

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
    msg.setTimeStamp(0.13093926780483578);
    msg.setSource(26312U);
    msg.setSourceEntity(15U);
    msg.setDestination(54762U);
    msg.setDestinationEntity(50U);
    msg.x = 0.18983597166453514;
    msg.y = 0.8240497496428955;
    msg.z = 0.9302995547807859;

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
    msg.setTimeStamp(0.3290902254003645);
    msg.setSource(24515U);
    msg.setSourceEntity(177U);
    msg.setDestination(60586U);
    msg.setDestinationEntity(211U);
    msg.timeout = 35043U;
    msg.lat = 0.2634572609700654;
    msg.lon = 0.0568128106024508;
    msg.z = 0.8087331376882742;
    msg.z_units = 32U;
    msg.amplitude = 0.6502468271621747;
    msg.pitch = 0.6071399743956023;
    msg.speed = 0.47298512958403804;
    msg.speed_units = 193U;
    msg.custom.assign("EAVKDYQVKTNFRPRWBNZUOWHIQQACRTHHADGLEWQIDGWYNLDHKBJGDVFRAKPECWPCXJBQRLFKTISNYFQEVUFVGNPCMSESICWCTUFGHQOBHCOOUJALWCBZNMDYZREZLAQDVXZGINSLXAFOKUVLHCXQRESJPEUKRMYPSXFMTH");

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
    msg.setTimeStamp(0.05088906936422066);
    msg.setSource(13193U);
    msg.setSourceEntity(17U);
    msg.setDestination(8824U);
    msg.setDestinationEntity(73U);
    msg.timeout = 46123U;
    msg.lat = 0.9200859949235203;
    msg.lon = 0.5352525331126335;
    msg.z = 0.6822163490405111;
    msg.z_units = 198U;
    msg.amplitude = 0.7097391861224259;
    msg.pitch = 0.4893849647170604;
    msg.speed = 0.46607725826708235;
    msg.speed_units = 60U;
    msg.custom.assign("NQMSKTYNCDKSHSSZHGDFKFPSUTHDQUCVMBPRWNPYFVBFAGAISPVAHELRGTBUSATQZKCGPKEZQGNJMZWKRFRRMDIJBGYBYQUPDVUCFIWPEKMLNJGOLJZCXQIIPMTGHYRBLZEBIVEXXYTO");

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
    msg.setTimeStamp(0.8159597775620968);
    msg.setSource(26602U);
    msg.setSourceEntity(194U);
    msg.setDestination(15645U);
    msg.setDestinationEntity(143U);
    msg.timeout = 48353U;
    msg.lat = 0.09723957869596545;
    msg.lon = 0.378000840856048;
    msg.z = 0.8545533531040124;
    msg.z_units = 146U;
    msg.amplitude = 0.1237125447184525;
    msg.pitch = 0.24753501564595837;
    msg.speed = 0.9917218167033709;
    msg.speed_units = 161U;
    msg.custom.assign("GVTJUTCNAKLVDUCJITFYTGUPKYMXRLSWKWYJNLIXNRVPHJKBESYTTNREAPUYZTUFDOXCMMPDVTMSGIZTEQGVBJYBNRHLOGAPNKKOLGMNUEOQXOQHCCFZWVBJQZMNUQCQFJPLBKZACOZSSSCDOOCLHDXZIWKFHKQFAERPXVBDRSLGYWORSZAEWKSFJAMFGGRUBUJWQBAM");

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
    msg.setTimeStamp(0.42415378786883473);
    msg.setSource(20751U);
    msg.setSourceEntity(100U);
    msg.setDestination(61339U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.38228479792487235);
    msg.setSource(28604U);
    msg.setSourceEntity(5U);
    msg.setDestination(61517U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.6628736109303787);
    msg.setSource(48772U);
    msg.setSourceEntity(71U);
    msg.setDestination(14592U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.024270902430937547);
    msg.setSource(7910U);
    msg.setSourceEntity(47U);
    msg.setDestination(61964U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.6607033390548599;
    msg.lon = 0.9205958149441402;
    msg.z = 0.8883035972873652;
    msg.z_units = 171U;
    msg.radius = 0.2762102543184346;
    msg.duration = 3994U;
    msg.speed = 0.17718599013764091;
    msg.speed_units = 88U;
    msg.custom.assign("PYTWKZTQVHDSYPQEMXQLWLLHGHXWFBDUJAVNSNWORAAEFDPYMVIKLPFXNOZQVGVMZRTYOUXOK");

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
    msg.setTimeStamp(0.728487361013011);
    msg.setSource(52423U);
    msg.setSourceEntity(5U);
    msg.setDestination(26945U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.8174050572756487;
    msg.lon = 0.9140166234930693;
    msg.z = 0.7744315403612962;
    msg.z_units = 73U;
    msg.radius = 0.6655856687298195;
    msg.duration = 33814U;
    msg.speed = 0.3638123897992074;
    msg.speed_units = 21U;
    msg.custom.assign("KDCNCSTIYVCNZSMKSWPLUUGXVSQPTLLZCUSGVDLEFFTQKRHVLMJZOLGJAMGEIDKAFAAAKPKZOBOWXZKQJNBYEXQOJIRHWRKTDIRIGFSTSLMOFBWUXMWIZEXRRQFVMXIZWIXCJAHSPGHCYNNYLMMTEQXVBHFFHQFQRCJYNGHOUPIZRPDYBOKJPOYHQPAWTLUOMYFEMWBTGVBZBYAHVXYRBPUVDNNACBZVNTSRJEWUNEE");

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
    msg.setTimeStamp(0.8789571910968244);
    msg.setSource(13941U);
    msg.setSourceEntity(146U);
    msg.setDestination(21321U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.1536456199281543;
    msg.lon = 0.35734822484175877;
    msg.z = 0.7966517209422461;
    msg.z_units = 34U;
    msg.radius = 0.3103881563283327;
    msg.duration = 28496U;
    msg.speed = 0.8011077156307866;
    msg.speed_units = 103U;
    msg.custom.assign("LYFAZMZZKGLNZYZEQPSSAIWKNTHFIABHUIJRBEYLROJMBDJFXXTPDO");

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
    msg.setTimeStamp(0.6135996527030184);
    msg.setSource(1215U);
    msg.setSourceEntity(109U);
    msg.setDestination(392U);
    msg.setDestinationEntity(110U);
    msg.timeout = 61461U;
    msg.flags = 180U;
    msg.lat = 0.15871218466070347;
    msg.lon = 0.42727959199258536;
    msg.start_z = 0.6722839703473324;
    msg.start_z_units = 233U;
    msg.end_z = 0.6322062972666811;
    msg.end_z_units = 228U;
    msg.radius = 0.04826536511913171;
    msg.speed = 0.9359546165896523;
    msg.speed_units = 54U;
    msg.custom.assign("ZUJIDIZXYUVVQHGCSGMGOXOWTNNYHMEPTFEPNQZMSYFAEVRXZWBGRSYLAIBFROLECOCXDBDKFLLDKVQICKXDWPGEYJFEUVPMLNXPZBQDURACHJD");

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
    msg.setTimeStamp(0.13193571162889994);
    msg.setSource(46955U);
    msg.setSourceEntity(229U);
    msg.setDestination(24941U);
    msg.setDestinationEntity(115U);
    msg.timeout = 57191U;
    msg.flags = 167U;
    msg.lat = 0.04469600221025549;
    msg.lon = 0.6019187207330589;
    msg.start_z = 0.5320878566139955;
    msg.start_z_units = 153U;
    msg.end_z = 0.9912904740460217;
    msg.end_z_units = 221U;
    msg.radius = 0.9098674237488023;
    msg.speed = 0.8576360988959532;
    msg.speed_units = 42U;
    msg.custom.assign("IKJRUJUJGERMCMQVHXTJVCLLPUKRIQNGDVPFYSBQWACJKNKTZPNHVXCUVMQRXTEWUBTADYBTSRSYLSPUFHMYIVZWJIAYRAOUCPGXMBGXXQBTENLXMJSZKAWBVNNZMGWTFDIYDRIJUXOWAKCFKRFGYOCCYCWVHAHTTLZANZELJTDWFPKAKCGQLDQDJEZUQPOHLBQWIAVOREZG");

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
    msg.setTimeStamp(0.6107777991173632);
    msg.setSource(46727U);
    msg.setSourceEntity(253U);
    msg.setDestination(23382U);
    msg.setDestinationEntity(157U);
    msg.timeout = 15532U;
    msg.flags = 23U;
    msg.lat = 0.04369875982543503;
    msg.lon = 0.19192539494723782;
    msg.start_z = 0.6246231885784251;
    msg.start_z_units = 75U;
    msg.end_z = 0.2515954401574413;
    msg.end_z_units = 111U;
    msg.radius = 0.05584290407902648;
    msg.speed = 0.7162918062247852;
    msg.speed_units = 37U;
    msg.custom.assign("WPXKJHIIORYVTWEAQAQDXLRENEQUCMZBTRTMVYLGKWVFVXYBVIJOXGHPWPJNTDYUOUJBUSRYMPMISIQAFLKNYZDKXDRSVHBOJ");

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
    msg.setTimeStamp(0.9936356194233124);
    msg.setSource(58173U);
    msg.setSourceEntity(15U);
    msg.setDestination(28742U);
    msg.setDestinationEntity(221U);
    msg.timeout = 14073U;
    msg.lat = 0.8972263290784951;
    msg.lon = 0.23638717676758747;
    msg.z = 0.8268592928215995;
    msg.z_units = 231U;
    msg.speed = 0.15484253401419912;
    msg.speed_units = 174U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.06208145868819159;
    tmp_msg_0.y = 0.9650231569802357;
    tmp_msg_0.z = 0.9374658031120685;
    tmp_msg_0.t = 0.36611966467036827;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WKQRSIBQVVSVYMQLNYKIHCENRESWTEPLCOZJDTVXSBKKRHTCRWMROGKJJCVDXYFMATLFFPXXAEASNMWXQQEJOVUJXCZHPMRWJEEKYMLOKUXUXACOOUGSOUFUJASGY");

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
    msg.setTimeStamp(0.04729238975225225);
    msg.setSource(10839U);
    msg.setSourceEntity(38U);
    msg.setDestination(31026U);
    msg.setDestinationEntity(226U);
    msg.timeout = 46834U;
    msg.lat = 0.12670156636027252;
    msg.lon = 0.190754106190539;
    msg.z = 0.15469930784617125;
    msg.z_units = 137U;
    msg.speed = 0.35518801394545374;
    msg.speed_units = 23U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3545050900783998;
    tmp_msg_0.y = 0.7121560656882167;
    tmp_msg_0.z = 0.3218345734225181;
    tmp_msg_0.t = 0.5486306031629058;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PWVJBVIQLBCELAGPXZXNOHXHRSZXHDFBYIENXPYMDKJRXLCXSUYXJVPGSWXGZKECWRKYDUFGEOITHCDKLGOMQZEADEU");

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
    msg.setTimeStamp(0.7611204314445543);
    msg.setSource(48066U);
    msg.setSourceEntity(236U);
    msg.setDestination(54281U);
    msg.setDestinationEntity(77U);
    msg.timeout = 31749U;
    msg.lat = 0.0014497066467495934;
    msg.lon = 0.7592626713813201;
    msg.z = 0.3584353837827413;
    msg.z_units = 173U;
    msg.speed = 0.26150437953892314;
    msg.speed_units = 222U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5961769609759913;
    tmp_msg_0.y = 0.7232744444745752;
    tmp_msg_0.z = 0.0035813911000635024;
    tmp_msg_0.t = 0.3858083808414807;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LNNXLIKRZGPJXLBOENLDLEUSCUZFAZFMSTXAGVEPWD");

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
    msg.setTimeStamp(0.12464918460175722);
    msg.setSource(2790U);
    msg.setSourceEntity(133U);
    msg.setDestination(41301U);
    msg.setDestinationEntity(221U);
    msg.x = 0.6307937972571176;
    msg.y = 0.46582292846566364;
    msg.z = 0.14298734985781214;
    msg.t = 0.8270435859955564;

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
    msg.setTimeStamp(0.19838548731992833);
    msg.setSource(6331U);
    msg.setSourceEntity(193U);
    msg.setDestination(56046U);
    msg.setDestinationEntity(50U);
    msg.x = 0.8407607567965566;
    msg.y = 0.07922930198291178;
    msg.z = 0.099024116861817;
    msg.t = 0.28367491824272184;

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
    msg.setTimeStamp(0.9298445851651125);
    msg.setSource(44747U);
    msg.setSourceEntity(135U);
    msg.setDestination(19044U);
    msg.setDestinationEntity(179U);
    msg.x = 0.6371541931424647;
    msg.y = 0.4264248857051596;
    msg.z = 0.25277635341789595;
    msg.t = 0.37012872539715336;

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
    msg.setTimeStamp(0.993022644634348);
    msg.setSource(3773U);
    msg.setSourceEntity(44U);
    msg.setDestination(54145U);
    msg.setDestinationEntity(79U);
    msg.timeout = 56429U;
    msg.name.assign("HWTWRLLBUJJTZSGYSKZVIYQBPPHVNCIWFOCHQQPXNUDXAXEGZEMSXORNNMRASLHAJBZXRXHSAESWFMUUDHCHPBC");
    msg.custom.assign("ZRLDBJWILDWN");

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
    msg.setTimeStamp(0.09448242033854537);
    msg.setSource(21902U);
    msg.setSourceEntity(10U);
    msg.setDestination(13116U);
    msg.setDestinationEntity(218U);
    msg.timeout = 18469U;
    msg.name.assign("CPNLGJWPMAWJSZHWSWZNYIIKOOQBUOREKWNCMRPCVDOVJUBVXOMBXEGLBNEQRFSIGUJMMZCUBKLHQEXVCELUZLQFAQRCJHIZNUZEHTTAGYIUTMFYYJHFTB");
    msg.custom.assign("YJKCBSWLAIPQZTSBYRBZNRWYILMGJIVOJTKBDMRWPLDGSBZOVWGQHEGNNWJBPEPHNPFCEVFSFYYIKJGSNUUHWDHCQLMDFMLUBCAVADDDFLEQMQUXMOXTIAIUPZQEGPBREIAHMWMVRTWKYOXGDQKFSJQJFZLERKTXIFCYGAXWBQRTFKIXTRLUQBRAWKIYZDUHLYGGEZUZSSYHTCOMCCDOCOPOHTPNFHVXVAXXHKZEZMREAKOLNJV");

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
    msg.setTimeStamp(0.3554624617677068);
    msg.setSource(60087U);
    msg.setSourceEntity(62U);
    msg.setDestination(47546U);
    msg.setDestinationEntity(245U);
    msg.timeout = 30500U;
    msg.name.assign("GECATJLTFSWWKRNHPCRAPSJHLYJVBLBCVAVFEMKUIFZJDXHGOYTJHKOINYMMDCVVJGUMKJFSPLIUEBHJMOYPEOHHNQSPGXGXXNECVBBWEBMUZKZEGBADOURKRATDDYRAYXEBLCTQMO");
    msg.custom.assign("AORKRRBRHCFQCUZZNLHLCWXGMFPBRZECKTZXYKBNEPWHUPYEYSYXSPOHYNUDJZNALVVWTUIJIAEEYZXWHPNMYUMMSGMLHWVKEWTLFEPQOWSQMOCRXJLHVICRYTWXTRDAIXUTFITQBGPSNFKDQOMGIBQQPTBNGFSFGUSKVHB");

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
    msg.setTimeStamp(0.10998509725466754);
    msg.setSource(55840U);
    msg.setSourceEntity(244U);
    msg.setDestination(13006U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.27894346591613883;
    msg.lon = 0.19106128803053624;
    msg.z = 0.48076715476429166;
    msg.z_units = 125U;
    msg.speed = 0.19404744924374495;
    msg.speed_units = 207U;
    msg.start_time = 0.5787498729530699;
    msg.custom.assign("BZEXTARRXTMCZMXEPNNZBPXATQEMRQGMNIJDCWANHJYQSSKZLMHHTVUFYUYPWBVLELGUGJXOIHSKGPSDHFTBODGYNEDEPSRFITVJJPSM");

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
    msg.setTimeStamp(0.7072955652916598);
    msg.setSource(26155U);
    msg.setSourceEntity(200U);
    msg.setDestination(9949U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.4972383982576246;
    msg.lon = 0.9864934911223768;
    msg.z = 0.861857356552471;
    msg.z_units = 44U;
    msg.speed = 0.404116745150467;
    msg.speed_units = 52U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4028305650130728;
    tmp_msg_0.y = 0.4752451248737919;
    tmp_msg_0.z = 0.8804698758529947;
    tmp_msg_0.t = 0.34580437288885446;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 31995U;
    tmp_msg_1.off_x = 0.2986941359377683;
    tmp_msg_1.off_y = 0.5372334798866856;
    tmp_msg_1.off_z = 0.9652594697526943;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.4464827586177038;
    msg.custom.assign("NQQDLRRCEHNTXIVPAKEQLXCUYPFDOZAWYZZDXHFJTZLBMVQVOXJEXPXWYSNNIRNKPGYGKBYHYTDFTUQTPSSFHKBQMSXIX");

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
    msg.setTimeStamp(0.8944928716191942);
    msg.setSource(37024U);
    msg.setSourceEntity(107U);
    msg.setDestination(40109U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.8988257970282113;
    msg.lon = 0.18019371244862514;
    msg.z = 0.7925384585499557;
    msg.z_units = 203U;
    msg.speed = 0.9955360093855925;
    msg.speed_units = 107U;
    msg.start_time = 0.9218801113917603;
    msg.custom.assign("NAHYHVUWSPRIUEZQWFQMCSZBEIJXOHBUCYULXVCIFTXLZTLYQSENXJZGXDAFSHQCMKPDRVEZWTOSXB");

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
    msg.setTimeStamp(0.8863380239346579);
    msg.setSource(19952U);
    msg.setSourceEntity(83U);
    msg.setDestination(35407U);
    msg.setDestinationEntity(194U);
    msg.vid = 26376U;
    msg.off_x = 0.06993393280398419;
    msg.off_y = 0.0680011271104608;
    msg.off_z = 0.35466911006001345;

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
    msg.setTimeStamp(0.27958915272670626);
    msg.setSource(23187U);
    msg.setSourceEntity(73U);
    msg.setDestination(51029U);
    msg.setDestinationEntity(207U);
    msg.vid = 34092U;
    msg.off_x = 0.4295501125398252;
    msg.off_y = 0.5817547648638481;
    msg.off_z = 0.627339832752705;

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
    msg.setTimeStamp(0.0779983124679634);
    msg.setSource(19562U);
    msg.setSourceEntity(112U);
    msg.setDestination(53485U);
    msg.setDestinationEntity(233U);
    msg.vid = 55462U;
    msg.off_x = 0.6967559794599048;
    msg.off_y = 0.827325707001158;
    msg.off_z = 0.8759369312920399;

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
    msg.setTimeStamp(0.788604911732662);
    msg.setSource(43415U);
    msg.setSourceEntity(110U);
    msg.setDestination(52585U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.7199690701782574);
    msg.setSource(53624U);
    msg.setSourceEntity(57U);
    msg.setDestination(56038U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.06549766332618878);
    msg.setSource(28221U);
    msg.setSourceEntity(47U);
    msg.setDestination(51013U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.6612258444191568);
    msg.setSource(17545U);
    msg.setSourceEntity(116U);
    msg.setDestination(22625U);
    msg.setDestinationEntity(68U);
    msg.mid = 15652U;

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
    msg.setTimeStamp(0.2930234167291649);
    msg.setSource(44185U);
    msg.setSourceEntity(77U);
    msg.setDestination(39662U);
    msg.setDestinationEntity(108U);
    msg.mid = 36646U;

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
    msg.setTimeStamp(0.6937555971874761);
    msg.setSource(46879U);
    msg.setSourceEntity(115U);
    msg.setDestination(46524U);
    msg.setDestinationEntity(165U);
    msg.mid = 57687U;

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
    msg.setTimeStamp(0.49726155081790036);
    msg.setSource(9695U);
    msg.setSourceEntity(65U);
    msg.setDestination(59889U);
    msg.setDestinationEntity(157U);
    msg.state = 57U;
    msg.eta = 23242U;
    msg.info.assign("GJUYOVHFHRYZACRUGMBXWTKTAUEFEZVGPDQSKWVMWXQZXFGEQAAUZEOWRIPSEUSNMJHTZVXFDUKLDRDBINXUNJCLSYEWXNJNKVNQQAXCWATBTMCLQDOHHOZURODYMJNCOZYOEYBLVLAPTRBYUTTKMFCFYXAGEEASNIGQWISOIQKDLIBINMUKZSHCKDMLJBHIRMYCDIZTVFLSGYCFHGPFPBQOPLLJFWJDJ");

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
    msg.setTimeStamp(0.900767124748594);
    msg.setSource(6261U);
    msg.setSourceEntity(89U);
    msg.setDestination(31494U);
    msg.setDestinationEntity(149U);
    msg.state = 12U;
    msg.eta = 4431U;
    msg.info.assign("WURAAZJQNOIQNREILZBRTBSMEEHDPHFHGSSYWRXJPDP");

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
    msg.setTimeStamp(0.8396626170878928);
    msg.setSource(60037U);
    msg.setSourceEntity(104U);
    msg.setDestination(48424U);
    msg.setDestinationEntity(16U);
    msg.state = 68U;
    msg.eta = 43638U;
    msg.info.assign("DKHLYBZEWBAMNXRDZCJCPCZLMQBFTKJOSFJYXRWCXFYSELUEWGQADLDLWRPFIZOJLISQQYRUVBXVYTYWHPFYRLEMPRSIOXQCVMHLAGOXCPODPNB");

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
    msg.setTimeStamp(0.3620104696761579);
    msg.setSource(21314U);
    msg.setSourceEntity(182U);
    msg.setDestination(43139U);
    msg.setDestinationEntity(223U);
    msg.system = 50040U;
    msg.duration = 41668U;
    msg.speed = 0.7038733427583926;
    msg.speed_units = 221U;
    msg.x = 0.259562104308774;
    msg.y = 0.9155433484152431;
    msg.z = 0.0112177850643429;
    msg.z_units = 47U;

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
    msg.setTimeStamp(0.05954415380221556);
    msg.setSource(33203U);
    msg.setSourceEntity(169U);
    msg.setDestination(49018U);
    msg.setDestinationEntity(34U);
    msg.system = 1877U;
    msg.duration = 56640U;
    msg.speed = 0.41011439160756713;
    msg.speed_units = 15U;
    msg.x = 0.3239377849243007;
    msg.y = 0.8769427249682878;
    msg.z = 0.25530992746525194;
    msg.z_units = 235U;

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
    msg.setTimeStamp(0.5904143326239958);
    msg.setSource(51669U);
    msg.setSourceEntity(152U);
    msg.setDestination(30757U);
    msg.setDestinationEntity(253U);
    msg.system = 57944U;
    msg.duration = 11796U;
    msg.speed = 0.6290343542319745;
    msg.speed_units = 162U;
    msg.x = 0.23871827273321888;
    msg.y = 0.3403395734719009;
    msg.z = 0.4312807617571476;
    msg.z_units = 23U;

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
    msg.setTimeStamp(0.7250759401374354);
    msg.setSource(35826U);
    msg.setSourceEntity(183U);
    msg.setDestination(64551U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.34783649817234774;
    msg.lon = 0.5890767373883722;
    msg.speed = 0.31519892842106134;
    msg.speed_units = 66U;
    msg.duration = 293U;
    msg.sys_a = 471U;
    msg.sys_b = 22595U;
    msg.move_threshold = 0.06260347231314123;

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
    msg.setTimeStamp(0.795335946120599);
    msg.setSource(8298U);
    msg.setSourceEntity(43U);
    msg.setDestination(18786U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.3810032732638634;
    msg.lon = 0.3894887032968174;
    msg.speed = 0.0273515770677365;
    msg.speed_units = 32U;
    msg.duration = 40395U;
    msg.sys_a = 19427U;
    msg.sys_b = 44828U;
    msg.move_threshold = 0.3102185119515475;

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
    msg.setTimeStamp(0.2476974868562679);
    msg.setSource(46447U);
    msg.setSourceEntity(58U);
    msg.setDestination(9622U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.6047137225698406;
    msg.lon = 0.9460679864144701;
    msg.speed = 0.9314076857463587;
    msg.speed_units = 24U;
    msg.duration = 24271U;
    msg.sys_a = 16792U;
    msg.sys_b = 27495U;
    msg.move_threshold = 0.9563971200482501;

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
    msg.setTimeStamp(0.26648886621827317);
    msg.setSource(32685U);
    msg.setSourceEntity(100U);
    msg.setDestination(57141U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.9413664757117449;
    msg.lon = 0.45514923901851134;
    msg.z = 0.04814313646033752;
    msg.z_units = 24U;
    msg.speed = 0.910289419807224;
    msg.speed_units = 169U;
    msg.custom.assign("CSEBZJAOLBLVMQQWGLPPYKTWCWKVYVLHETQUQYXXJTGHYOAT");

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
    msg.setTimeStamp(0.8189047490138214);
    msg.setSource(2774U);
    msg.setSourceEntity(208U);
    msg.setDestination(2855U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.3671324266432274;
    msg.lon = 0.15218435237184513;
    msg.z = 0.8009248232065674;
    msg.z_units = 152U;
    msg.speed = 0.8095400211776447;
    msg.speed_units = 100U;
    msg.custom.assign("UGCQOLGAXFQVYMVCFSTMHKKCJCSTZNRGAXQXUFWKOWOHLMUILGFXASBNVPIMTZOZHTUUKKLGENRDPBHYSFAEIMYQAPXJHTQOECDOOVYVGTDYZFZWRDIYOYJWXKNDIGHNOJSTAWRPJPEHBXLYSIDJHFXRPJATSASRBIQJZV");

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
    msg.setTimeStamp(0.863625994522714);
    msg.setSource(16536U);
    msg.setSourceEntity(149U);
    msg.setDestination(54634U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.6602041681879539;
    msg.lon = 0.34829451424229785;
    msg.z = 0.7917877092748223;
    msg.z_units = 78U;
    msg.speed = 0.716575862717607;
    msg.speed_units = 96U;
    msg.custom.assign("URBIKMBOGURBIOXEGHVFXPPXYKCLSJCIGRIGZMVLTNQNZSIOMNPSARTVZWOSDHKAJPEKMWDYYHAHIYQBDVBAEQVJUCWYXTOTQIUULWFOWZVIWGIZNHMZFXFFWCOLLDSHITKZLUSHBNWCMJROJNKUNTGTCMHQTALZDGRUOJPESGVEXOQYEL");

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
    msg.setTimeStamp(0.5253883075980782);
    msg.setSource(63926U);
    msg.setSourceEntity(102U);
    msg.setDestination(35961U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.7919278579630672;
    msg.lon = 0.2872182608293403;

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
    msg.setTimeStamp(0.33766962611160245);
    msg.setSource(47377U);
    msg.setSourceEntity(48U);
    msg.setDestination(28569U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.5744369941613787;
    msg.lon = 0.30199061864083243;

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
    msg.setTimeStamp(0.8952121438728783);
    msg.setSource(30996U);
    msg.setSourceEntity(241U);
    msg.setDestination(1824U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.37346230969820415;
    msg.lon = 0.5659935968226902;

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
    msg.setTimeStamp(0.2777071913429392);
    msg.setSource(5541U);
    msg.setSourceEntity(104U);
    msg.setDestination(9594U);
    msg.setDestinationEntity(245U);
    msg.timeout = 50769U;
    msg.lat = 0.6879802619181559;
    msg.lon = 0.9648438857194763;
    msg.z = 0.42821577761053164;
    msg.z_units = 190U;
    msg.pitch = 0.0938694916106303;
    msg.amplitude = 0.8173091490844284;
    msg.duration = 24702U;
    msg.speed = 0.7279532564082191;
    msg.speed_units = 195U;
    msg.radius = 0.7897909250784889;
    msg.direction = 127U;
    msg.custom.assign("VPHNFRQEWDDNACLQIDVSMOQXKIDPVBQEIMFVVSMTVPGUFUGZFOTGSWKEZTCQXQZRJGFEYVOSCTYKTZRJOIHTNZTLDMSYYNWAEKXRULLXWGWIYLCSUJUBGJTZLUZFEJVQCYISBJFAFGKCRNMWHRAQBNRHKLIPON");

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
    msg.setTimeStamp(0.2780452355779255);
    msg.setSource(3863U);
    msg.setSourceEntity(37U);
    msg.setDestination(35890U);
    msg.setDestinationEntity(118U);
    msg.timeout = 45U;
    msg.lat = 0.2415711467758841;
    msg.lon = 0.10063922124625757;
    msg.z = 0.6773446128463794;
    msg.z_units = 242U;
    msg.pitch = 0.2379835611771316;
    msg.amplitude = 0.1311853728754534;
    msg.duration = 23578U;
    msg.speed = 0.24217898904294688;
    msg.speed_units = 63U;
    msg.radius = 0.059172009384515833;
    msg.direction = 114U;
    msg.custom.assign("MVQKMZEPAQICOFSYFTOFZAGMRUYRLPLGAZLHJLODFEHDIWMAWEZFROXMSKYNA");

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
    msg.setTimeStamp(0.5486818149154363);
    msg.setSource(59853U);
    msg.setSourceEntity(183U);
    msg.setDestination(10856U);
    msg.setDestinationEntity(227U);
    msg.timeout = 18487U;
    msg.lat = 0.3864784543375591;
    msg.lon = 0.3181514940479735;
    msg.z = 0.18355072475009926;
    msg.z_units = 229U;
    msg.pitch = 0.03843898302289539;
    msg.amplitude = 0.03648522546038846;
    msg.duration = 51914U;
    msg.speed = 0.6478395979262626;
    msg.speed_units = 141U;
    msg.radius = 0.3727012625764572;
    msg.direction = 106U;
    msg.custom.assign("GGDBTUBXYBOLJRTGQVWXBARSYADNNERDQLZJKDJXSTCQLMPVZHXNDOWUBPJNCNQWOHUBPUOYSAHOMHSJXVYJMBFG");

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
    msg.setTimeStamp(0.43494051564885006);
    msg.setSource(27218U);
    msg.setSourceEntity(243U);
    msg.setDestination(17805U);
    msg.setDestinationEntity(20U);
    msg.formation_name.assign("MFQYPPEEQNXRTMAIX");
    msg.reference_frame = 151U;
    msg.custom.assign("ZMLGKSKFRNUZNYSOZTCAOJHTOSCWADGFRWPVDJNBMBHDFXBXVADD");

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
    msg.setTimeStamp(0.2707140355318024);
    msg.setSource(16955U);
    msg.setSourceEntity(115U);
    msg.setDestination(36460U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("GJEECLSOXHCSJFZGWPQVYMDIMBN");
    msg.reference_frame = 116U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48869U;
    tmp_msg_0.off_x = 0.9463417228429636;
    tmp_msg_0.off_y = 0.6273785901338217;
    tmp_msg_0.off_z = 0.06078222556187518;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DYXTHADKABPNHSNTUXLLMUAFSPUEKEIVJAXWFCAQRICVTFVIQQJLTDKCMCJGMDSUDDELJTKHUWZLRHEPGWADCYUCZXCYKLOIOIXPJVUBSFCYRLQWXUEPMHHSJRMQBWFIAMGSDRZLEQDFBRKWQAFKMXONVQESIVZHUCEYONNVDNLPKZZIQFGGRNXSXJBKRENVBBOIZMIGABFTNEYTWHMHJGUON");

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
    msg.setTimeStamp(0.842060718309123);
    msg.setSource(27465U);
    msg.setSourceEntity(48U);
    msg.setDestination(60925U);
    msg.setDestinationEntity(12U);
    msg.formation_name.assign("LYGYFIJTFFWO");
    msg.reference_frame = 169U;
    msg.custom.assign("IKYTOBOAUUKQSMHMXCKUHERZYMAKKGKCRVSQLFSGDMSRWPBDMNASNDZVOPLVNFWHIYCBIHXOOQWIAILBNTMQRAXXWDJWUTICHCNYJZQOGRNZYPB");

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
    msg.setTimeStamp(0.20441309509874694);
    msg.setSource(61557U);
    msg.setSourceEntity(20U);
    msg.setDestination(23986U);
    msg.setDestinationEntity(74U);
    msg.group_name.assign("IGYIOAQVJEIPMZDSSTNQPKYDJBK");
    msg.formation_name.assign("AJMZNTFNCSOKRGGAIPPJHJXYPJZCDCUQVNR");
    msg.plan_id.assign("DMVMWFRHPNLKSQTONNHNAUPHSQZKCSKGYZFWKXNNZA");
    msg.description.assign("LWBSNOVNGU");
    msg.leader_speed = 0.8630821694905858;
    msg.leader_bank_lim = 0.8858646355697081;
    msg.pos_sim_err_lim = 0.6499404509455103;
    msg.pos_sim_err_wrn = 0.47164405028167866;
    msg.pos_sim_err_timeout = 56708U;
    msg.converg_max = 0.6497344805945339;
    msg.converg_timeout = 18626U;
    msg.comms_timeout = 43819U;
    msg.turb_lim = 0.5010069971377117;
    msg.custom.assign("VTFPEIQLDRCZEIDTWNWOYSUFWYEIOUPYACIBQIAXSLICDVIPBWRKZTGUVKTDNQOKMQKSBNZPAOFOCGXUSSJGMLPYHZIGDJHGJCHYFSTONTVJGAXTJOLKWZJLVLBDRSXNEPVDPRFUQPMKAKNURIMJBCVYUVFKJDMDYFOKFYXJMWMBHHFDFSQLCJGZWNAEUZACKHGEVXANQIEMGTESQMOBOYHWNXXLSPBLYRUWVRHAL");

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
    msg.setTimeStamp(0.5825337624664253);
    msg.setSource(41018U);
    msg.setSourceEntity(179U);
    msg.setDestination(27684U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("GGXKPNVKPTRZQBFRHHOLKGLEHVBVWTBOEZYXDPLOKZCXXURNONKIJGKWZNPCPYRQERPUNSFQNEJKTVUHIAZNOIRIARSTWBQZLWFVMSSDWTMSALYTSMLCWSBWYIYOEDCZUFPUJZQPLEMXCBQNYSVDHGMLAOAGMAJLKMIXBQIBWLVXPJTHCFRUFFDXJYTIZDEJOBFNRPDOFUAWDQRYNAEUSMEOTJHDGSTKDIVQQBM");
    msg.formation_name.assign("IOTLKLFWJQDSYSOERBSFZHCJVQKZUAJWVNZCXAHYGGXPHQKBJZA");
    msg.plan_id.assign("LJMRSDILRXPVWVQYDQUVHKRQLUZQEBKTDABVXXMGSBYQLCKZIIHGHBOFWJSCJWEHGUZKQDPSTUWLVM");
    msg.description.assign("GPPHHSEVNFDZDKCAQZZHIYGHRCWTSGBBFVEAMEVSRUYSHCYFXMTEGXPGYRMTBENSDMBHOQZZEKDFBNADAFRQXDGYWQTVJSOIUZMILGB");
    msg.leader_speed = 0.7812746626867498;
    msg.leader_bank_lim = 0.8262807604511981;
    msg.pos_sim_err_lim = 0.302880920454087;
    msg.pos_sim_err_wrn = 0.5941717626456161;
    msg.pos_sim_err_timeout = 23721U;
    msg.converg_max = 0.1485020047749025;
    msg.converg_timeout = 45127U;
    msg.comms_timeout = 19317U;
    msg.turb_lim = 0.9830859076514307;
    msg.custom.assign("GDZQIPDGJRUTGZLXSJFJSPMVMXUBNHOQSKMAGWIOEGLZNRJQJFKXOIRLRPAWMGEXSTYNXXOTBTDBDLDOFDCVLLQNQWWCQNEDNGQBFTNJBREZYTWUKCEWISSHATJHRDNMUUSAUNOKPHARVCPIAMSVKHVJYCREXETKKDUZFCL");

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
    msg.setTimeStamp(0.7426700195959359);
    msg.setSource(43633U);
    msg.setSourceEntity(46U);
    msg.setDestination(30160U);
    msg.setDestinationEntity(93U);
    msg.group_name.assign("DUKEMBJTYQIZDAMLQIAQXTOBQKHEUDKVUUQMPRHYZCYDEMLUVXVFRLJWWRPMWEHHYVINCTWPVNZYCZLVWWYBBZVSXFPYMCUXTOGTWX");
    msg.formation_name.assign("ZMHJFEDXKZOIYUPSQOGVCLNUORXNGPIAZUFUPMCWGKHXXFLHVJYTGAPHTFPFQUAHYLJUIOIHHPYCJWLUEFTDAKBLMJHZFEORKPCTQVGDRXOBKKSSSBXGEINNWYQRIFDTMASVMDULSTNVXDZLNVRWQUAEIMVCJRTMBPEEJMCSOBTIJYBXEZVZBPHLQWMAHBATGGCZDAJQYLSFURIGEOOBCQOWKTNWRQAYIWWXCBRP");
    msg.plan_id.assign("FMRRAYNACOOVWCBONQPMKPVEBRSPZTJGQIRKLHSXPLRZIKJOVBRDLUQLHSKITTTBDELDDMTKXHFFLZILVKXTCNUXEFXJEZKUYJLVCZWETWDGGINZPSDPGOMADNEKQUCMWCAWNGYAEXQXAHFGTAYYSNPFYJANCWABHGWNDHARQWFGIUSBHIGUXKBGZMT");
    msg.description.assign("HBHNOIOJGEFAZXMRPIJZWBFUXPDCLWVZDYRMIJUVUNDGYNLNEBISRGSPCMKUFGTOMEZTFXUGXGEZVCSCXQDQGNTUFLIFYHYWZCQCQNYYMNHASANSHQGVWDOJKDTFRGPVEZLHWPOTVPTSUUVTHWOKHFLSURDLJBBIZQYNLHMQWNFYETFJEZWQKULMLSRORIORDAZTALIOKAXXDAJYRPTMXJBKCKAMAPESEJXEGRQIHBJSCCKBPPCYIWDOB");
    msg.leader_speed = 0.319830869879568;
    msg.leader_bank_lim = 0.7279752068871946;
    msg.pos_sim_err_lim = 0.4702288794422572;
    msg.pos_sim_err_wrn = 0.1757348598757439;
    msg.pos_sim_err_timeout = 33230U;
    msg.converg_max = 0.12120782385203255;
    msg.converg_timeout = 55107U;
    msg.comms_timeout = 46184U;
    msg.turb_lim = 0.213128523617792;
    msg.custom.assign("KHGOUPFZYCHRDQNIIDOSHIQGECJJZQASDSCBFHWWLUKTUSTXVOEYZSQVXZYNPLQOEYXZTVUTJCAYWVVSKFBHSWEIDXATVSCJGXRRLQNPPQAKTZHMVWHIRUJUJGPPZLRBHQATWMKZWGEASATDWRWNXDLPFNKEDONIEILLUOUGYCPFCNGZBMCMGRVRCEXMPMXYOIKGVXBW");

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
    msg.setTimeStamp(0.711986621177991);
    msg.setSource(45144U);
    msg.setSourceEntity(26U);
    msg.setDestination(43961U);
    msg.setDestinationEntity(131U);
    msg.control_src = 47595U;
    msg.control_ent = 42U;
    msg.timeout = 0.4761274531629176;
    msg.loiter_radius = 0.3980820432534763;
    msg.altitude_interval = 0.29436291277854787;

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
    msg.setTimeStamp(0.43523413259364396);
    msg.setSource(37674U);
    msg.setSourceEntity(32U);
    msg.setDestination(2846U);
    msg.setDestinationEntity(12U);
    msg.control_src = 7479U;
    msg.control_ent = 124U;
    msg.timeout = 0.4017669477720882;
    msg.loiter_radius = 0.4246271149499249;
    msg.altitude_interval = 0.33346491271413214;

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
    msg.setTimeStamp(0.6678031791643868);
    msg.setSource(62235U);
    msg.setSourceEntity(181U);
    msg.setDestination(27823U);
    msg.setDestinationEntity(9U);
    msg.control_src = 29615U;
    msg.control_ent = 36U;
    msg.timeout = 0.723213193064252;
    msg.loiter_radius = 0.05542687572401994;
    msg.altitude_interval = 0.34745323541405804;

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
    msg.setTimeStamp(0.3118567253905741);
    msg.setSource(37777U);
    msg.setSourceEntity(135U);
    msg.setDestination(20553U);
    msg.setDestinationEntity(46U);
    msg.flags = 144U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5383244117663081;
    tmp_msg_0.speed_units = 136U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6892096815061461;
    tmp_msg_1.z_units = 43U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7568786246858626;
    msg.lon = 0.6814163918251408;
    msg.radius = 0.4094546969010876;

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
    msg.setTimeStamp(0.4601037719415356);
    msg.setSource(24081U);
    msg.setSourceEntity(85U);
    msg.setDestination(48586U);
    msg.setDestinationEntity(89U);
    msg.flags = 82U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9679743300892429;
    tmp_msg_0.speed_units = 144U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3426299754914789;
    tmp_msg_1.z_units = 157U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5442748888586533;
    msg.lon = 0.19025373240769305;
    msg.radius = 0.2779143225349857;

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
    msg.setTimeStamp(0.8919897920168184);
    msg.setSource(7204U);
    msg.setSourceEntity(141U);
    msg.setDestination(10849U);
    msg.setDestinationEntity(83U);
    msg.flags = 63U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5651477829862942;
    tmp_msg_0.speed_units = 37U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5617092395106197;
    tmp_msg_1.z_units = 190U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.470788134120564;
    msg.lon = 0.20673887257817658;
    msg.radius = 0.022946371414890643;

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
    msg.setTimeStamp(0.06365502303894999);
    msg.setSource(4758U);
    msg.setSourceEntity(3U);
    msg.setDestination(24373U);
    msg.setDestinationEntity(181U);
    msg.control_src = 24289U;
    msg.control_ent = 43U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 19U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8904963200721936;
    tmp_tmp_msg_0_0.speed_units = 220U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.31348263962353495;
    tmp_tmp_msg_0_1.z_units = 86U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.48945455352523226;
    tmp_msg_0.lon = 0.4483475833436622;
    tmp_msg_0.radius = 0.6431253047719417;
    msg.reference.set(tmp_msg_0);
    msg.state = 48U;
    msg.proximity = 227U;

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
    msg.setTimeStamp(0.020238527678131724);
    msg.setSource(32146U);
    msg.setSourceEntity(163U);
    msg.setDestination(63138U);
    msg.setDestinationEntity(148U);
    msg.control_src = 60283U;
    msg.control_ent = 36U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 45U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9895389441722537;
    tmp_tmp_msg_0_0.speed_units = 48U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.20296795683576851;
    tmp_tmp_msg_0_1.z_units = 88U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5429968326894168;
    tmp_msg_0.lon = 0.8043359827795644;
    tmp_msg_0.radius = 0.9393932283740501;
    msg.reference.set(tmp_msg_0);
    msg.state = 197U;
    msg.proximity = 39U;

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
    msg.setTimeStamp(0.7205086686368778);
    msg.setSource(44591U);
    msg.setSourceEntity(106U);
    msg.setDestination(37374U);
    msg.setDestinationEntity(111U);
    msg.control_src = 46854U;
    msg.control_ent = 243U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 171U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.09698309955359385;
    tmp_tmp_msg_0_0.speed_units = 201U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3478221035944734;
    tmp_tmp_msg_0_1.z_units = 167U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3159259415367929;
    tmp_msg_0.lon = 0.6611784607547191;
    tmp_msg_0.radius = 0.18381544546483708;
    msg.reference.set(tmp_msg_0);
    msg.state = 252U;
    msg.proximity = 60U;

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
    msg.setTimeStamp(0.9687730568078929);
    msg.setSource(6639U);
    msg.setSourceEntity(105U);
    msg.setDestination(43965U);
    msg.setDestinationEntity(139U);
    msg.ax_cmd = 0.7246539721636429;
    msg.ay_cmd = 0.422624743146382;
    msg.az_cmd = 0.8063954567406294;
    msg.ax_des = 0.1457588640893196;
    msg.ay_des = 0.8648195532169183;
    msg.az_des = 0.030148008532785098;
    msg.virt_err_x = 0.625185227811591;
    msg.virt_err_y = 0.8471826384928277;
    msg.virt_err_z = 0.09386725921655481;
    msg.surf_fdbk_x = 0.8518749995499609;
    msg.surf_fdbk_y = 0.6225562015091857;
    msg.surf_fdbk_z = 0.31822503533523494;
    msg.surf_unkn_x = 0.0975370973439098;
    msg.surf_unkn_y = 0.8290144431657858;
    msg.surf_unkn_z = 0.5526104454090421;
    msg.ss_x = 0.30392865498850397;
    msg.ss_y = 0.33338484433170357;
    msg.ss_z = 0.7009070368995883;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KAZNZTMHDGYAPUNOZGTLIMKLXRKPFAASFFEOTSKQNNYTGVPWFXRPQHPIFFWAOXGEIJENSLLUHVYTLHDSGSHZQCJJAEZXXZQLDURRZSEZUUTVYCSTLSDRFKJWCCWEMKGEPGBKPVYDNMFDHZQTJAQFRDNHRISGQJKPYOHXSLIBVMNHJOMW");
    tmp_msg_0.dist = 0.9272446238654166;
    tmp_msg_0.err = 0.7625387863132543;
    tmp_msg_0.ctrl_imp = 0.8678950433391083;
    tmp_msg_0.rel_dir_x = 0.2234185284686373;
    tmp_msg_0.rel_dir_y = 0.7424159194730855;
    tmp_msg_0.rel_dir_z = 0.6680490863717568;
    tmp_msg_0.err_x = 0.5201189062037609;
    tmp_msg_0.err_y = 0.7345611490228924;
    tmp_msg_0.err_z = 0.4819301885718368;
    tmp_msg_0.rf_err_x = 0.571379420518219;
    tmp_msg_0.rf_err_y = 0.47307572941594744;
    tmp_msg_0.rf_err_z = 0.31359336873437804;
    tmp_msg_0.rf_err_vx = 0.5162273426383706;
    tmp_msg_0.rf_err_vy = 0.8409374533107267;
    tmp_msg_0.rf_err_vz = 0.44178010543661794;
    tmp_msg_0.ss_x = 0.13473669538679134;
    tmp_msg_0.ss_y = 0.5786944608617262;
    tmp_msg_0.ss_z = 0.8681118938072578;
    tmp_msg_0.virt_err_x = 0.3007075168654345;
    tmp_msg_0.virt_err_y = 0.44966885688047775;
    tmp_msg_0.virt_err_z = 0.8968223731655202;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5751453557817634);
    msg.setSource(59457U);
    msg.setSourceEntity(24U);
    msg.setDestination(37645U);
    msg.setDestinationEntity(76U);
    msg.ax_cmd = 0.005022370225091111;
    msg.ay_cmd = 0.9410466699867185;
    msg.az_cmd = 0.3792290134251507;
    msg.ax_des = 0.8528253123646731;
    msg.ay_des = 0.3348195007056781;
    msg.az_des = 0.380837485417158;
    msg.virt_err_x = 0.40783140043639166;
    msg.virt_err_y = 0.5120608311416209;
    msg.virt_err_z = 0.19281705237141233;
    msg.surf_fdbk_x = 0.5364286107091916;
    msg.surf_fdbk_y = 0.4805263887689375;
    msg.surf_fdbk_z = 0.5020945266503244;
    msg.surf_unkn_x = 0.12015465752061705;
    msg.surf_unkn_y = 0.654959396552093;
    msg.surf_unkn_z = 0.12691663774959827;
    msg.ss_x = 0.35700041799823523;
    msg.ss_y = 0.5373252134552009;
    msg.ss_z = 0.16334875154576045;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EHZLNSFXNJOFIJLULIODGJRVKXCLHANPZPATMETOXEWSHQSBEPVMYJHOSYRIRZTOAVDPYEHUNHWIZLRJKZBHBZFQKKQJOSVYCATLXUXMRZGCORKPDVMIYUMQVAHPYWCNBNJZGKSXYNTCRUMURBGCEGMDUTWQFLBLSITRWTBZEKMDFCEUBOSAALXFPZJPWUDAQEVGBOIOFYGKNQCDXTYXIQVFBYNDAWXWMFDKLWVGHCMGPVJURTKI");
    tmp_msg_0.dist = 0.1810906639591009;
    tmp_msg_0.err = 0.8191070629866232;
    tmp_msg_0.ctrl_imp = 0.7259210620524139;
    tmp_msg_0.rel_dir_x = 0.8969303420075065;
    tmp_msg_0.rel_dir_y = 0.856935326934595;
    tmp_msg_0.rel_dir_z = 0.2145063107485704;
    tmp_msg_0.err_x = 0.2524342956293021;
    tmp_msg_0.err_y = 0.7101210934326883;
    tmp_msg_0.err_z = 0.02747497340632432;
    tmp_msg_0.rf_err_x = 0.9483826733865285;
    tmp_msg_0.rf_err_y = 0.9655529129943617;
    tmp_msg_0.rf_err_z = 0.44098671696650626;
    tmp_msg_0.rf_err_vx = 0.6960931116629099;
    tmp_msg_0.rf_err_vy = 0.5324854721287069;
    tmp_msg_0.rf_err_vz = 0.005519988840620993;
    tmp_msg_0.ss_x = 0.2977843030475822;
    tmp_msg_0.ss_y = 0.7944300248172261;
    tmp_msg_0.ss_z = 0.7942170084178333;
    tmp_msg_0.virt_err_x = 0.729425588026853;
    tmp_msg_0.virt_err_y = 0.7467957276120692;
    tmp_msg_0.virt_err_z = 0.7169723133864067;
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
    msg.setTimeStamp(0.22980692194861618);
    msg.setSource(30692U);
    msg.setSourceEntity(26U);
    msg.setDestination(24551U);
    msg.setDestinationEntity(108U);
    msg.ax_cmd = 0.14672452713247996;
    msg.ay_cmd = 0.6258892358352761;
    msg.az_cmd = 0.13658414284114817;
    msg.ax_des = 0.36454060392005594;
    msg.ay_des = 0.16963340452417575;
    msg.az_des = 0.83283615635339;
    msg.virt_err_x = 0.7937025808634321;
    msg.virt_err_y = 0.924704506587736;
    msg.virt_err_z = 0.5843784870331434;
    msg.surf_fdbk_x = 0.4539368038787822;
    msg.surf_fdbk_y = 0.5036541710029618;
    msg.surf_fdbk_z = 0.8574943508405988;
    msg.surf_unkn_x = 0.050076852989596854;
    msg.surf_unkn_y = 0.4307298088986845;
    msg.surf_unkn_z = 0.4923681034298236;
    msg.ss_x = 0.43189908796057497;
    msg.ss_y = 0.973005905429124;
    msg.ss_z = 0.8817586260491828;

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
    msg.setTimeStamp(0.3594439012978413);
    msg.setSource(52508U);
    msg.setSourceEntity(35U);
    msg.setDestination(630U);
    msg.setDestinationEntity(137U);
    msg.s_id.assign("FLKDBSCVHDMVMGHVVAZYGUYCCBVFKPNSHBSSUPBKXXHS");
    msg.dist = 0.01024617121148974;
    msg.err = 0.38631982539906373;
    msg.ctrl_imp = 0.5439187291346032;
    msg.rel_dir_x = 0.7666794550698938;
    msg.rel_dir_y = 0.7173723362581569;
    msg.rel_dir_z = 0.43756279317941804;
    msg.err_x = 0.9105452473111851;
    msg.err_y = 0.6273894087573614;
    msg.err_z = 0.4420977231144151;
    msg.rf_err_x = 0.8874418056001879;
    msg.rf_err_y = 0.5272375239225426;
    msg.rf_err_z = 0.8222543803691134;
    msg.rf_err_vx = 0.0031896377536205778;
    msg.rf_err_vy = 0.06535610929498015;
    msg.rf_err_vz = 0.009538827528096538;
    msg.ss_x = 0.6248135961992123;
    msg.ss_y = 0.19917112110458657;
    msg.ss_z = 0.11294816663241236;
    msg.virt_err_x = 0.7998216636140807;
    msg.virt_err_y = 0.24113604966402113;
    msg.virt_err_z = 0.41402366887058395;

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
    msg.setTimeStamp(0.29771573056525735);
    msg.setSource(62455U);
    msg.setSourceEntity(244U);
    msg.setDestination(15804U);
    msg.setDestinationEntity(53U);
    msg.s_id.assign("AEBLJUODVOOFYXGQGFQHRXLYLMPNIKQCKBYMXEPZTJQRXGWSNBTKLBPFRTKTJDFFWWFZVAIMPIZRNGXOHVNUGIDKGQNVKRSLIFEKVMPCUGHLECZYAJLBYYFBKEPPFPSKJIAMQRMRWCDQCVOUDTESCDJHWNXAYUSVXNAWYTZMIRIGZRAJLANCOUEUOMKVBBLGGDSUMXHXCOHSWENOCJJTCWDTEV");
    msg.dist = 0.2146502568912675;
    msg.err = 0.24257562233267715;
    msg.ctrl_imp = 0.742247707271564;
    msg.rel_dir_x = 0.26827860475536913;
    msg.rel_dir_y = 0.4192662311330262;
    msg.rel_dir_z = 0.2821861073632219;
    msg.err_x = 0.8295456984915061;
    msg.err_y = 0.30935793321472904;
    msg.err_z = 0.013276272761154062;
    msg.rf_err_x = 0.1575890947883286;
    msg.rf_err_y = 0.16026601269874308;
    msg.rf_err_z = 0.5955373518223096;
    msg.rf_err_vx = 0.2726815164841546;
    msg.rf_err_vy = 0.06946902559219414;
    msg.rf_err_vz = 0.4920766515648838;
    msg.ss_x = 0.12131529113887274;
    msg.ss_y = 0.9873263874769068;
    msg.ss_z = 0.5462950061700494;
    msg.virt_err_x = 0.012410143626974901;
    msg.virt_err_y = 0.05763543402257221;
    msg.virt_err_z = 0.5539363574453814;

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
    msg.setTimeStamp(0.02928341615640684);
    msg.setSource(34460U);
    msg.setSourceEntity(34U);
    msg.setDestination(13823U);
    msg.setDestinationEntity(160U);
    msg.s_id.assign("JAPVMDYQFUNGJJHSYCMAMDZIKMSICZGSXRTTMPPELPYEQZUODBFBRBQPWXVABUKOZLRXTXISBLFUSJWEKLHFNLPICDVARJEFECLXNHSCDTLVZDMAXYAJAZWNKIHBWIFBUDWJYGJIUZSDWCYTENHMVENXTUYNSKFJMQPIBWRBWLTLKQRBGHUOQOZEQHZQTNDOHCI");
    msg.dist = 0.8310251403835305;
    msg.err = 0.841805367447228;
    msg.ctrl_imp = 0.5277116901284069;
    msg.rel_dir_x = 0.9216669444385703;
    msg.rel_dir_y = 0.5592696626616797;
    msg.rel_dir_z = 0.5231998113563024;
    msg.err_x = 0.6794244484803086;
    msg.err_y = 0.21793861878908238;
    msg.err_z = 0.9749160511432878;
    msg.rf_err_x = 0.8656026931695863;
    msg.rf_err_y = 0.5205037919404454;
    msg.rf_err_z = 0.011852405399137123;
    msg.rf_err_vx = 0.9530561783360977;
    msg.rf_err_vy = 0.8580538262163824;
    msg.rf_err_vz = 0.13270114269204158;
    msg.ss_x = 0.5674212437763574;
    msg.ss_y = 0.6198581457685475;
    msg.ss_z = 0.65642912099539;
    msg.virt_err_x = 0.22067190814364224;
    msg.virt_err_y = 0.04002087756734074;
    msg.virt_err_z = 0.3687887723249753;

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
    msg.setTimeStamp(0.7439392663675739);
    msg.setSource(11257U);
    msg.setSourceEntity(229U);
    msg.setDestination(33514U);
    msg.setDestinationEntity(214U);
    msg.timeout = 61439U;
    msg.rpm = 0.6849237233661962;
    msg.direction = 56U;
    msg.custom.assign("TESXVCTUWBMCXHYUVTKQSYPCJHLMNUOZQVVOOFSXJPKEQSLMEZKGOWASAYCCZSJWVWHEXFGKZKTPLNRQDPTTZCPLWTBFPXIDDQDJFQBOAMXHOILGEQBIWSLAXGVHIYHLEMPXSRYWFWNLHKVUSNIHQYPVYDJJCBIUVABFIOAMKIRRKUEBAZGAGZRUGNEBCOAEWXZNDFILRYINDMUJRLRBRJOQDDGPUAMFGUNJTKDNPXYMKEJGWCSHTVZ");

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
    msg.setTimeStamp(0.3837288384689167);
    msg.setSource(14737U);
    msg.setSourceEntity(35U);
    msg.setDestination(6034U);
    msg.setDestinationEntity(33U);
    msg.timeout = 58079U;
    msg.rpm = 0.6892434146741686;
    msg.direction = 77U;
    msg.custom.assign("AVIMNMRQAZRUDVHEGBLBXKILDQADSJNSQFVMEHNSKASBZSUIFBIXYCULVFAVZMNDZGYECHECJAWELOLYRHJRXDPBJGZHJEPJQHPVJKBO");

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
    msg.setTimeStamp(0.45785649462924094);
    msg.setSource(45957U);
    msg.setSourceEntity(138U);
    msg.setDestination(24010U);
    msg.setDestinationEntity(27U);
    msg.timeout = 28071U;
    msg.rpm = 0.21011950194902074;
    msg.direction = 25U;
    msg.custom.assign("CNDWFLNKBQTKEDURHZRXTR");

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
    msg.setTimeStamp(0.6656813424901484);
    msg.setSource(44229U);
    msg.setSourceEntity(204U);
    msg.setDestination(56431U);
    msg.setDestinationEntity(61U);
    msg.formation_name.assign("RJXLBJFKESAGACFOLUHSSUUGPXDOKZNVZ");
    msg.type = 124U;
    msg.op = 201U;
    msg.group_name.assign("RHUZLUXCZLQSGGWZNEGVJTVASIFRBMZMFCAFNKABDEXRKCEEWYTRONZOBDYV");
    msg.plan_id.assign("WLDFCCVNJZYOOESMQXSJNFQLBECWYGSFHFJUUOYAIZUTSXLERCDBQNIHMUSGJYOMOAADMJCYXXRGXQDAWUEFERZAWXIBEHHDIYMCOVYUJOMCTVAIUQKZLYAPPOYKTQZJRBKPWURGJYQTPVITNUHGLTXDMFBBTZOZHVDSJMNSZREXWNLTIVMDWEGXSRFUQZBLAQMNIGAEHIOHKTRGPGKKDBFWKNPFKVVP");
    msg.description.assign("AJNVKEMXQBGYPASDQKZBDXGWSHFGMZEJARFEPHGWJICOLWIVPHQNHOMODNMHYMVXENTBRWJKUIRSQCVYGVGBFOQVDRTQYALEUFUTCALCHTBLIWASUPKFBCZXVIQVLOSJEPX");
    msg.reference_frame = 176U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59118U;
    tmp_msg_0.off_x = 0.36424602990375265;
    tmp_msg_0.off_y = 0.39154062041154947;
    tmp_msg_0.off_z = 0.8576842398361092;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8649519817813358;
    msg.leader_speed_min = 0.49912155297706684;
    msg.leader_speed_max = 0.5268143436675475;
    msg.leader_alt_min = 0.11152379426761627;
    msg.leader_alt_max = 0.896775878974565;
    msg.pos_sim_err_lim = 0.9195554532464524;
    msg.pos_sim_err_wrn = 0.2264598273727535;
    msg.pos_sim_err_timeout = 22444U;
    msg.converg_max = 0.529949212016656;
    msg.converg_timeout = 59642U;
    msg.comms_timeout = 47246U;
    msg.turb_lim = 0.9233341808885903;
    msg.custom.assign("IEXGOWAMASUTVLNHNVBJIUPFLYKSCDAQZYKGDHOGWFLDORKCACAFSBNEAYTHWBFGWHMRHK");

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
    msg.setTimeStamp(0.19721256967960366);
    msg.setSource(6245U);
    msg.setSourceEntity(153U);
    msg.setDestination(39628U);
    msg.setDestinationEntity(40U);
    msg.formation_name.assign("AMRBQITIBULSTWYIRBHICEXEPUSUHHJVNORAUQSMYQAOTVCXZFVRSPTZRODXPSEOFQUAFUDENMCFKBEPOXVGDLBXFLTMPNYCMHJHJNWBVZYMFCWPTSMXSPBALKLPKVMPOWLRZWPLYCZQECFKILOYXYEQNGKGO");
    msg.type = 242U;
    msg.op = 33U;
    msg.group_name.assign("QHBDIATPTQDRGXLL");
    msg.plan_id.assign("TPNXWWBADHWIYMSBMWGNZHUPQISAKLNVQDCOUHWXMQAGPSNNICUQZZJXTVRAAYTODOBMQFLIKGSSEJZMJBCFPJYXGYCRRTKHQDRIJLKXXG");
    msg.description.assign("QKNGUEFKQEDTDYDYZJUXVMCZYEMVCYABLGTCTPMNLRTFOGPSZJOHPVPBVWWHCZLCAXMLQVMVEOOSGRWXJTRJIPZMAVTAKZUDWOZSAICLOSYJWVYEQOVYY");
    msg.reference_frame = 253U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1416U;
    tmp_msg_0.off_x = 0.3448820509195615;
    tmp_msg_0.off_y = 0.31628058236112944;
    tmp_msg_0.off_z = 0.12310385715956429;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6939793353512832;
    msg.leader_speed_min = 0.5223581523568706;
    msg.leader_speed_max = 0.6953698749571189;
    msg.leader_alt_min = 0.3625204078694422;
    msg.leader_alt_max = 0.9818109882378351;
    msg.pos_sim_err_lim = 0.041846545658685286;
    msg.pos_sim_err_wrn = 0.18101190982452553;
    msg.pos_sim_err_timeout = 49164U;
    msg.converg_max = 0.5270703246442239;
    msg.converg_timeout = 21707U;
    msg.comms_timeout = 51758U;
    msg.turb_lim = 0.7066246062073774;
    msg.custom.assign("YOCQVSVUNKCZXMGSECFQKFZITKWRMKYAFVQBWJJDAHMFTAGZPCFGUOIUTDVKWUENIXZMXUWJBIAZTIRHGTBDKEMOFOVEGQGKSSYTHFLIOHVRPDJRWZSVNNWBZW");

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
    msg.setTimeStamp(0.42481576735055815);
    msg.setSource(35801U);
    msg.setSourceEntity(226U);
    msg.setDestination(30206U);
    msg.setDestinationEntity(200U);
    msg.formation_name.assign("WDFPDVGWKXZQVQHYTHBPNQSHEHCJVZOMTOSIPFYCEGQJLTXRFKLWTKUUGIJORWLGBRWVIWHJJSPKECAYPFGTQZNDAFNCMIEEQVBVBUCYDKKEFMBZMDNAIXLFILUJLUPAKXHFJURTMNQXORNBKVBTXMWZLLFOZOGMSWAIURRRYSODDJIATKEQCAYSOKJPCVJA");
    msg.type = 87U;
    msg.op = 97U;
    msg.group_name.assign("MUSLAQUTLTFEAHBQXNMGRCEMNAHLOYDSRVPKOUCETJBWTDIGGSFJHMXZKBCDIDIFYNJXCQ");
    msg.plan_id.assign("BYVXNSDSLASWDYPZRCKQCEGSBEOTGBEMFLCUJKNSIUKRAOETDILLQJNADOKWTGRFLQILKPMFYKWPWKLFOBLPYVRTOHIJIMXRUKMDGODJXSKLADBAUYGCYNYPPLJWEWXIEVCMQSVEXQHYZEJWTIOUXHBSRHUMIJPFDRDZXTMVXZWCMHCNRSEIHAUAQREQFHHGTQGZBQFUXZKGODUGPBZNZVMAVJ");
    msg.description.assign("LYOEVZTGZAKHPVALDJVTCCDITURBIQMHIMGHFPUZYLHWUNNDWJRRYUHOMATPQWNNIOHTNXPGNYDOUYAPYGTGUJHYKIXNQRXKKYZBBBZRQAEZUFUEWLMHCVGXSCSONWDVWCHIOIBJIEFZVARXVVGJEBSGWVRHIXFCRLKFLZFNOJ");
    msg.reference_frame = 225U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21866U;
    tmp_msg_0.off_x = 0.12065551887328718;
    tmp_msg_0.off_y = 0.9720433511689685;
    tmp_msg_0.off_z = 0.8185670960713717;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6108108165757576;
    msg.leader_speed_min = 0.8960715674923658;
    msg.leader_speed_max = 0.12467470866520491;
    msg.leader_alt_min = 0.9972360362858294;
    msg.leader_alt_max = 0.9701567233707924;
    msg.pos_sim_err_lim = 0.5426224247079994;
    msg.pos_sim_err_wrn = 0.49036431042967177;
    msg.pos_sim_err_timeout = 46983U;
    msg.converg_max = 0.7354671902486777;
    msg.converg_timeout = 47626U;
    msg.comms_timeout = 55397U;
    msg.turb_lim = 0.20633806743021443;
    msg.custom.assign("HBDQITCVWEDUOSZQUSFFAGMQLSYNXYNPZMYDOYFITIBXQXNNZCKMFIAAHKLBZQHUSPEJPHY");

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
    msg.setTimeStamp(0.5086083393871585);
    msg.setSource(13385U);
    msg.setSourceEntity(20U);
    msg.setDestination(4308U);
    msg.setDestinationEntity(190U);
    msg.timeout = 21070U;
    msg.lat = 0.29880139454573074;
    msg.lon = 0.3862748735252082;
    msg.z = 0.26832095512351384;
    msg.z_units = 96U;
    msg.speed = 0.9308361572714295;
    msg.speed_units = 238U;
    msg.custom.assign("TSOAQCOXIMOAKDWQKWFSYGXBLOQABDTUBBUXCQXMSTVNUOKYCWXDJLSWIHEIELFVTKUMLBOJX");

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
    msg.setTimeStamp(0.8601751229824222);
    msg.setSource(34392U);
    msg.setSourceEntity(197U);
    msg.setDestination(37666U);
    msg.setDestinationEntity(95U);
    msg.timeout = 21772U;
    msg.lat = 0.797258745405876;
    msg.lon = 0.37590191027234976;
    msg.z = 0.3682434243570337;
    msg.z_units = 227U;
    msg.speed = 0.36773386876244407;
    msg.speed_units = 117U;
    msg.custom.assign("YUQPJXCUYZF");

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
    msg.setTimeStamp(0.6947057350492218);
    msg.setSource(47904U);
    msg.setSourceEntity(93U);
    msg.setDestination(14751U);
    msg.setDestinationEntity(82U);
    msg.timeout = 6246U;
    msg.lat = 0.07842700816655357;
    msg.lon = 0.05081637666313943;
    msg.z = 0.7985805175823963;
    msg.z_units = 184U;
    msg.speed = 0.33119375874184565;
    msg.speed_units = 175U;
    msg.custom.assign("RUMKCHCATTLRLCWFMWWQBLPKJQCYDRXRZNYDQPBVMIBHZZYLYUPMSLCEVGQAUIJSPHMINTZQUSAEBDJVYBFHQHKJOHYOJMQTEAFAAEVNHGTWEWKBVZZXDGZCXRLSMOWUNEGYZXWOOREWCOLNSSMIFPXGWGIVKOUSPDRQPWHZMENPNHGANCLRNTAXJQZGTDKOUXRBXBBUKDREXIPYVF");

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
    msg.setTimeStamp(0.26062792779060695);
    msg.setSource(21664U);
    msg.setSourceEntity(86U);
    msg.setDestination(22443U);
    msg.setDestinationEntity(188U);
    msg.timeout = 312U;
    msg.lat = 0.8147559502018932;
    msg.lon = 0.6409276241821517;
    msg.z = 0.2537343125944106;
    msg.z_units = 156U;
    msg.speed = 0.27165388919919453;
    msg.speed_units = 78U;
    msg.custom.assign("PPIFYOYWXFXOMSJETRXWGUUKHTOUUVBURZOHIDXLXNGBMNKANJSJWCDXOZYLYQTPITQOKTNEH");

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
    msg.setTimeStamp(0.3252590279986517);
    msg.setSource(31285U);
    msg.setSourceEntity(212U);
    msg.setDestination(14817U);
    msg.setDestinationEntity(125U);
    msg.timeout = 60673U;
    msg.lat = 0.37834559974803916;
    msg.lon = 0.617272366578637;
    msg.z = 0.9478663684072491;
    msg.z_units = 204U;
    msg.speed = 0.5807427472742248;
    msg.speed_units = 19U;
    msg.custom.assign("GDFBMDSRVKTVGRVLMUBDTXZAEYTEHOICBTDUGLYWYKNPDNNVAISQBMQNXMLCLHWYIZKYBKGPLKNYPSEQFRIZSOBFJZIUDQTRQGLAJWXQAIEHVXOCEUXNXMVSGMRKHCLUGBAOCAPYMRWBCE");

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
    msg.setTimeStamp(0.882866868618734);
    msg.setSource(51115U);
    msg.setSourceEntity(73U);
    msg.setDestination(33065U);
    msg.setDestinationEntity(29U);
    msg.timeout = 51836U;
    msg.lat = 0.13210076112916458;
    msg.lon = 0.06185346503843525;
    msg.z = 0.24142576599665333;
    msg.z_units = 140U;
    msg.speed = 0.20198432570422487;
    msg.speed_units = 94U;
    msg.custom.assign("CGUOXMLBFONPKSKMBGDNXWXPNRRMHYWBRBHZGJJGSABEELOECPITAKSSDHDEWTGASGJFVXRLZHMQBGYGRNRXVQVYAYVPBJTAXMTZSJLIWKFUOLQCJLWACTFOYTUQVCQRYXPSFOSIKVCHLTLMHYFICBEBXFCWMANVADAOPDCGPPLZTOHEKPMXJUNIDWQZZURTAZNIEFVNJTHUWL");

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
    msg.setTimeStamp(0.9494112803936781);
    msg.setSource(15081U);
    msg.setSourceEntity(60U);
    msg.setDestination(19901U);
    msg.setDestinationEntity(75U);
    msg.arrival_time = 0.5383537162052603;
    msg.lat = 0.7241875516010666;
    msg.lon = 0.8597052281495029;
    msg.z = 0.36003255007294177;
    msg.z_units = 67U;
    msg.travel_z = 0.26663783631032734;
    msg.travel_z_units = 66U;
    msg.delayed = 0U;

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
    msg.setTimeStamp(0.9156985628066847);
    msg.setSource(34697U);
    msg.setSourceEntity(107U);
    msg.setDestination(18056U);
    msg.setDestinationEntity(83U);
    msg.arrival_time = 0.8982747928049544;
    msg.lat = 0.5835852202832187;
    msg.lon = 0.11786706955180659;
    msg.z = 0.9579211793924544;
    msg.z_units = 52U;
    msg.travel_z = 0.9432767139081867;
    msg.travel_z_units = 46U;
    msg.delayed = 162U;

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
    msg.setTimeStamp(0.817444732321919);
    msg.setSource(43910U);
    msg.setSourceEntity(147U);
    msg.setDestination(34282U);
    msg.setDestinationEntity(217U);
    msg.arrival_time = 0.8256408468275285;
    msg.lat = 0.062190231329648404;
    msg.lon = 0.0280319776376442;
    msg.z = 0.8406881943435623;
    msg.z_units = 126U;
    msg.travel_z = 0.8162485898353067;
    msg.travel_z_units = 9U;
    msg.delayed = 157U;

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
    msg.setTimeStamp(0.728485194123208);
    msg.setSource(49547U);
    msg.setSourceEntity(51U);
    msg.setDestination(6960U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.09511499433002868;
    msg.lon = 0.1763735872040827;
    msg.z = 0.3890615244456219;
    msg.z_units = 36U;
    msg.speed = 0.2154773530549161;
    msg.speed_units = 58U;
    msg.bearing = 0.5985009965532195;
    msg.cross_angle = 0.960223055677881;
    msg.width = 0.729011508953808;
    msg.length = 0.5068153711424689;
    msg.coff = 244U;
    msg.angaperture = 0.6807336427031082;
    msg.range = 36219U;
    msg.overlap = 154U;
    msg.flags = 249U;
    msg.custom.assign("OZVBSQCFHZTSTKASKQHBJSEYLIOSNIIVGNGICIWLDUHPAVRXZZAKKNNTGPZQOWYUSMLXQTJKAHDXCOBAMBYRBHPODDGCVEJYZAFGRBGSZYEPXJMPWPQKDXCRLXYMPVFLDBNORQNSUJXSORMWMXUWYCNCCWTIILGXEVELHIQXDWLWFVTUFHYBUOFMVKCQTIQHKPUETEKBJYFHJINDZUFJA");

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
    msg.setTimeStamp(0.6487482245451548);
    msg.setSource(47966U);
    msg.setSourceEntity(192U);
    msg.setDestination(42856U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.8630279167054341;
    msg.lon = 0.49254766361079605;
    msg.z = 0.348946186999989;
    msg.z_units = 250U;
    msg.speed = 0.03106942941359936;
    msg.speed_units = 59U;
    msg.bearing = 0.3863624313478561;
    msg.cross_angle = 0.27936282263504675;
    msg.width = 0.5827801076846892;
    msg.length = 0.7064105703899771;
    msg.coff = 142U;
    msg.angaperture = 0.2112891523281415;
    msg.range = 15409U;
    msg.overlap = 98U;
    msg.flags = 12U;
    msg.custom.assign("JIOQPXNLJOHHUQVMQRNBZUSZXXEECFTWQPRFYTZZQKICLYYJNPLKKXJPNXXZMEOAPIRAUBWVHAFOSMZYAUQMPCTMPRHZAHLGHILCUREKDKEYVQOTDNLEGASJNRBSOTUHGDFKDEGOVCXRDCEKSMGBZDFADHLKOLFDMMTXWPWUCJYBGUESOICSFJKYYMARTQSXNPHVOWISCAFWBNWVWNEKBZYTZPIRVAQL");

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
    msg.setTimeStamp(0.33266476909810705);
    msg.setSource(63437U);
    msg.setSourceEntity(74U);
    msg.setDestination(21293U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.3597923865425252;
    msg.lon = 0.8847423753465896;
    msg.z = 0.29261459045815486;
    msg.z_units = 10U;
    msg.speed = 0.11923674665673478;
    msg.speed_units = 152U;
    msg.bearing = 0.07233181600464567;
    msg.cross_angle = 0.3963707801762044;
    msg.width = 0.09033118297172427;
    msg.length = 0.09441522793008617;
    msg.coff = 214U;
    msg.angaperture = 0.6863302336664386;
    msg.range = 48861U;
    msg.overlap = 221U;
    msg.flags = 18U;
    msg.custom.assign("FCHFCHEEUUNQZBMWZAGHOVASODDQVIIIARPAXIMBDEJTBGQCBUPGPGQDKDKACKZVFJLFXQLLZAIHUFEYPSSGWZOWLQOBGFJKF");

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
    msg.setTimeStamp(0.7853517104770511);
    msg.setSource(48143U);
    msg.setSourceEntity(166U);
    msg.setDestination(33272U);
    msg.setDestinationEntity(20U);
    msg.timeout = 11715U;
    msg.lat = 0.9885810743740147;
    msg.lon = 0.778663053454273;
    msg.z = 0.5674586270053381;
    msg.z_units = 247U;
    msg.speed = 0.9732259087362212;
    msg.speed_units = 12U;
    msg.syringe0 = 11U;
    msg.syringe1 = 178U;
    msg.syringe2 = 127U;
    msg.custom.assign("PPUFDTRDVRUUDYMF");

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
    msg.setTimeStamp(0.2505425366608106);
    msg.setSource(33912U);
    msg.setSourceEntity(167U);
    msg.setDestination(912U);
    msg.setDestinationEntity(192U);
    msg.timeout = 65429U;
    msg.lat = 0.44324056118706945;
    msg.lon = 0.8447767927323553;
    msg.z = 0.4912775197613872;
    msg.z_units = 53U;
    msg.speed = 0.165127660411014;
    msg.speed_units = 253U;
    msg.syringe0 = 145U;
    msg.syringe1 = 90U;
    msg.syringe2 = 23U;
    msg.custom.assign("BGJWYDEGOJWDYTHCXJBZGPORWMWQFYRRQRHLPFSNLVNEIDTQQJGZCSUMGJGBBVXSVZUSXOQOMBJJAZVKYHNCFNGLMHFTJBYTXCWKXCLDZQPPB");

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
    msg.setTimeStamp(0.79041673222827);
    msg.setSource(3619U);
    msg.setSourceEntity(207U);
    msg.setDestination(54994U);
    msg.setDestinationEntity(46U);
    msg.timeout = 45803U;
    msg.lat = 0.9248751725880049;
    msg.lon = 0.5532644549542265;
    msg.z = 0.5119197946541281;
    msg.z_units = 64U;
    msg.speed = 0.8425955704646261;
    msg.speed_units = 124U;
    msg.syringe0 = 68U;
    msg.syringe1 = 191U;
    msg.syringe2 = 196U;
    msg.custom.assign("KVUMAKJUZHPQVOLNZDYMHYILCKHRFLOFAKTHCXHVEHSZIMRHJYEPFUNNTMVGEO");

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
    msg.setTimeStamp(0.9232082864850512);
    msg.setSource(64589U);
    msg.setSourceEntity(82U);
    msg.setDestination(2564U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.24856918202646694);
    msg.setSource(23154U);
    msg.setSourceEntity(160U);
    msg.setDestination(7564U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.9572403077104429);
    msg.setSource(18924U);
    msg.setSourceEntity(74U);
    msg.setDestination(46512U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.40257184608908325);
    msg.setSource(27282U);
    msg.setSourceEntity(15U);
    msg.setDestination(45015U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.42788303883419154;
    msg.lon = 0.03987858956822543;
    msg.z = 0.4803202777005561;
    msg.z_units = 65U;
    msg.speed = 0.03641561055788012;
    msg.speed_units = 137U;
    msg.takeoff_pitch = 0.08743147337334412;
    msg.custom.assign("FNSUSXNIGMBLSEFWAIVIJXJLWYROQXPWDIPOLXWUKZDVUCYBOKAVFOJMVOOAGZLDCFBHHXKJYXEPPMRFRBESIHHJJQFBCNQDUQWMBNHYKHTVZYLTBSADTAHNRTOTGKGRNNEOPUKTYYWJVEYCRFVBJQMYAWCQEGKPSXAGKQFAKRHYECCDADZHMQDPFIRTWIZCMPJILZPUZSMLELEWUGSAJIVSPUTNZBLKSUECHIGGFOCLRN");

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
    msg.setTimeStamp(0.48057702398956326);
    msg.setSource(45102U);
    msg.setSourceEntity(146U);
    msg.setDestination(21284U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.9802194551583752;
    msg.lon = 0.7275831580336972;
    msg.z = 0.11715202710680195;
    msg.z_units = 102U;
    msg.speed = 0.37838253354044327;
    msg.speed_units = 239U;
    msg.takeoff_pitch = 0.6353742357152008;
    msg.custom.assign("DDSHMDBYXZLYTJORLPGJEEFUKZTDPRLGYGTUCZKPMLNFZNBDSWOVBPPOUTMRVSIJOBCFRELFGXLIUEDENRMJIMTATZIWOZJFKLKVFUZBSYVARCONIWMFGFQWHAEAYAWHMNVPJXNDDHLWCOBWSDZYBCNKXUUTCCJKRFTBHPWROVQVHXDQPUJSVSBNRGOFEJLKIJSQHTWQIIQVXQKCUENNWCKPYXEQXAZOMGQBAQCKSIIUGHST");

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
    msg.setTimeStamp(0.08440176854329984);
    msg.setSource(32263U);
    msg.setSourceEntity(95U);
    msg.setDestination(60284U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.4396309185949837;
    msg.lon = 0.5862423264235481;
    msg.z = 0.8834983815804489;
    msg.z_units = 31U;
    msg.speed = 0.8903963027454107;
    msg.speed_units = 136U;
    msg.takeoff_pitch = 0.825901908039742;
    msg.custom.assign("QUSDJUCNHEQPMKYOGKLFCPCZKFDXLMMAPCMQEYWRTNJCXFVGDZKBMWCTLIMWREJZGTSSKJAOUNGDSHYJRLVGTWXKMXBQPTHGUBYNRPUUXDBATVJOZIHZAIELCARJGZQBREGXGOXPHDRTAIFOIJYFCYOESWWIMVDBFHNBYYQCLLTWKVROHNJYZKUXALVQOZ");

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
    msg.setTimeStamp(0.0005761593758240036);
    msg.setSource(24225U);
    msg.setSourceEntity(84U);
    msg.setDestination(25629U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.5725620294896877;
    msg.lon = 0.8482615294061691;
    msg.z = 0.8625917810517845;
    msg.z_units = 240U;
    msg.speed = 0.14870368036874193;
    msg.speed_units = 246U;
    msg.abort_z = 0.6618664208219448;
    msg.bearing = 0.5289397926077734;
    msg.glide_slope = 143U;
    msg.glide_slope_alt = 0.23296917624822666;
    msg.custom.assign("EACEYKEPZHKWKMXGPXLKNRVGHDEAMYGUKJTATQRDATVQQQUVYLIXQBVELWZZOZSXAKSGOUCACPLBFBNLLKTTDRPMPERSHOJVYZDFDQIWMLXSBZ");

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
    msg.setTimeStamp(0.22853336845397698);
    msg.setSource(20618U);
    msg.setSourceEntity(50U);
    msg.setDestination(47241U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.8276398090932766;
    msg.lon = 0.24159584567722792;
    msg.z = 0.5350896777619027;
    msg.z_units = 202U;
    msg.speed = 0.3491159234659693;
    msg.speed_units = 14U;
    msg.abort_z = 0.37846333665836784;
    msg.bearing = 0.8938523954150939;
    msg.glide_slope = 179U;
    msg.glide_slope_alt = 0.9134748290351252;
    msg.custom.assign("VULRFEZFXJWZNALZQCRFWVKGTMKPGCIHEGDCWEWWHIKYBKBMANJWDSUSDTHUMOPYFQVNKVSBUAAMYJJSFSHMPISPMDXVGRCFQVMQNIEWROTRGRCPZPYBBLHPBDTGJIJWQLGVQSRXLTNZDPQWCOAMOHCRTTUAMDIZHKLYYVJZHAATRXAJDEFBXSPSKLQQLGNUIDYEFAPJNY");

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
    msg.setTimeStamp(0.26743449947900855);
    msg.setSource(33273U);
    msg.setSourceEntity(77U);
    msg.setDestination(28167U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.802286332639723;
    msg.lon = 0.8251064649216702;
    msg.z = 0.46367783013453134;
    msg.z_units = 117U;
    msg.speed = 0.39390392298368015;
    msg.speed_units = 247U;
    msg.abort_z = 0.4922597152090905;
    msg.bearing = 0.6469068574673236;
    msg.glide_slope = 144U;
    msg.glide_slope_alt = 0.290499993387459;
    msg.custom.assign("XBVCVKFBDIXOPBMNQTQHNNEPVTGHOMMQFTHWAZAYUQTXXNOAVPEYJPKSJCQNDKJCNWVRIGJICPSLQMQN");

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
    msg.setTimeStamp(0.4643319196761704);
    msg.setSource(21280U);
    msg.setSourceEntity(30U);
    msg.setDestination(18358U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.09341577098688114;
    msg.lon = 0.9326171202014667;
    msg.speed = 0.8437597796779938;
    msg.speed_units = 169U;
    msg.limits = 76U;
    msg.max_depth = 0.2805751958667868;
    msg.min_alt = 0.3084629657674556;
    msg.time_limit = 0.4588612337856881;
    msg.controller.assign("CECJWDEGCPHYIVBUHQRGXPPPDZBUFUFIMJAXKVDKQFDDYVRFQEXURTFNPYFPWGEVCYPOOJTDAGUXSIGQQSNPMTZTZXZAHH");
    msg.custom.assign("PUGWCSFJWPEZURQXZSMMMFQTSPCHJVERYZPBCBEIGLGXODCMLLJAFNAUMTTHSXFRWZKNGXRORKBEKKIEHYKVXMWKXOEI");

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
    msg.setTimeStamp(0.5834110176199542);
    msg.setSource(2507U);
    msg.setSourceEntity(44U);
    msg.setDestination(63321U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.8347988163430102;
    msg.lon = 0.011701315807878143;
    msg.speed = 0.7589910125962247;
    msg.speed_units = 199U;
    msg.limits = 181U;
    msg.max_depth = 0.8087454825275969;
    msg.min_alt = 0.08437663395084039;
    msg.time_limit = 0.9743290357162444;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9763058493831188;
    tmp_msg_0.lon = 0.36737577378759567;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("IONSAICAPUVILCSPMERWDBJAMJRTQBQZFZMYVLDQJMMTJEHKNXBXXLRZOHZKQSNLGBZBDYQYOJZRJOCGCFVPPWRVTJUEQFYOMTAADSUETLSWBHXVPDFIIHWARNMCGMUUKWXIYFLNPICZYZKEOSEFSKJGIAQGRHAKSCJQVDXBHOBZTSSGRXRDW");
    msg.custom.assign("KWETADXFROOF");

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
    msg.setTimeStamp(0.5036173897481455);
    msg.setSource(8843U);
    msg.setSourceEntity(198U);
    msg.setDestination(5650U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.31997839732076827;
    msg.lon = 0.13066021135756822;
    msg.speed = 0.8851632658820537;
    msg.speed_units = 243U;
    msg.limits = 53U;
    msg.max_depth = 0.658168227487192;
    msg.min_alt = 0.09604172075071138;
    msg.time_limit = 0.8654510448509736;
    msg.controller.assign("HCKHMEQLUPJAAYNEYDYPTWJSGEJCYTIBVRNSFLCYIHXTLTZARQTRBDKRTTGQIG");
    msg.custom.assign("EYIXKBHZCTWZMUEMWDVTLHEMIGJAVFJRPRFKUTZDYELYIIPFONTITSJYLGKBPHGOFLDCYFXVQMAQMTPHUDAKOCZCRQBCWQASMEOODUAGHODOGXKBHUXRFLKQFGBDWWUCIHTCVEAEJAQNMAYJIWWRZASRKJZMNGVQVNBBWFYIHCYDPXYWFHPFDOCVYRIQMSTGGZLNTLJROTJUHEXNBKVKQIXRUNRUXSLESKCPMSEGVJNAZQUPSWBVZSBPLJZNL");

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
    msg.setTimeStamp(0.5593464230246854);
    msg.setSource(56953U);
    msg.setSourceEntity(205U);
    msg.setDestination(51155U);
    msg.setDestinationEntity(171U);
    msg.target.assign("EEWEQPORUMPIIVKSETYOXSNLJJTRVTWXMVPCROYFROHZDFIRNYUUJNXFOQGIWGYZBNRDHSAQEVLVILKVEEJGUSKXRGXFWBNATFKWKBQUDADQQSJMANBITYDOPTMCQZJPHHQSPVJZILAYNCZWGYQKGXKVD");
    msg.max_speed = 0.5388831144409677;
    msg.speed_units = 187U;
    msg.lat = 0.11223678151167993;
    msg.lon = 0.8608374631803817;
    msg.z = 0.6558277434912918;
    msg.z_units = 88U;
    msg.custom.assign("CVXUUXTNRJQIAKMWFMTPQGSLFZVEYMOFBYZHJVNFQBXUANAVKURUIIYDPSNAYTMGUJETN");

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
    msg.setTimeStamp(0.18238336488612128);
    msg.setSource(22521U);
    msg.setSourceEntity(13U);
    msg.setDestination(28737U);
    msg.setDestinationEntity(233U);
    msg.target.assign("TLDAFGJNRQYDMFCPLZFGLHEXKEHRJCTQRLZHAAAZ");
    msg.max_speed = 0.7136611976266257;
    msg.speed_units = 196U;
    msg.lat = 0.3857021138469585;
    msg.lon = 0.16377154296572127;
    msg.z = 0.22129053892357498;
    msg.z_units = 118U;
    msg.custom.assign("WBDUVCPZAGPQASXDHMXSER");

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
    msg.setTimeStamp(0.22936617894993439);
    msg.setSource(54735U);
    msg.setSourceEntity(92U);
    msg.setDestination(4478U);
    msg.setDestinationEntity(217U);
    msg.target.assign("JHAMAXICFBUVPWNWOHZBQDRRTUIFHRYNKOINEKOYPMFZVMRFVLWXEGKTJQXSDZMYKAXEJEQEMDPGUTZJEDPWGMSNJHXKSYQSSWDREDZSGLBNLJMBGTKGOCUNITFBSFZIANOMNWLFVGCHABWQJKNQICFYKXHYPLBAKYPJABCGACSQMJLLZDNVKTDYOUCWIOHCURQGAAPVILFLWLTUHZFUIQOYODQSREYVIGVUTJCH");
    msg.max_speed = 0.18585604612238482;
    msg.speed_units = 178U;
    msg.lat = 0.31374709959301383;
    msg.lon = 0.3554601827648507;
    msg.z = 0.1365498695916295;
    msg.z_units = 34U;
    msg.custom.assign("BRWLACZPYLWFVGVEVVZKJSJNAMJJYMBJUHKJZBHVHWBXZYXWRDRGOPGWXQPSWCOFREXCHTBYGQNGQMAOCSWIYFDLDOKNNXNMPYBZDNDFRLWYKANTIJP");

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
    msg.setTimeStamp(0.9342473291984205);
    msg.setSource(30606U);
    msg.setSourceEntity(82U);
    msg.setDestination(29560U);
    msg.setDestinationEntity(243U);
    msg.op_mode = 24U;
    msg.error_count = 199U;
    msg.error_ents.assign("OXGWZFJXVBAYBMTPSPIOEEXRGGFDJFMQEFCTABUCLXN");
    msg.maneuver_type = 64649U;
    msg.maneuver_stime = 0.600247921487755;
    msg.maneuver_eta = 32661U;
    msg.control_loops = 3889311187U;
    msg.flags = 86U;
    msg.last_error.assign("CALWFONHNYMHAVDYVCLNHHOMABOHTSOMFLDJUGDXFESALSWTIMXFDYZQXAYPLNQIYSWPSUCKAFGWNJTYCZLGWDBGNDVFZEBVKERIBJHWOMGGIGHCQERID");
    msg.last_error_time = 0.9657316870427566;

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
    msg.setTimeStamp(0.5477188233177519);
    msg.setSource(65161U);
    msg.setSourceEntity(13U);
    msg.setDestination(61523U);
    msg.setDestinationEntity(197U);
    msg.op_mode = 65U;
    msg.error_count = 25U;
    msg.error_ents.assign("APDHAUQMXWLWHAUTRRSTGLLLGTKTBQFWYRSPZLWOBKYNBQTQQDC");
    msg.maneuver_type = 50768U;
    msg.maneuver_stime = 0.9409845343468045;
    msg.maneuver_eta = 53539U;
    msg.control_loops = 2392942850U;
    msg.flags = 233U;
    msg.last_error.assign("HMTBKXHLNGKVELJVVZODNEMQXKJLGSXLGIHOAPGBCEQTVLMRYUYOBLZVPYZBOBJFDFWIISHTUITFBQAINWMKVGCBRUFUWMVMYMWYZPXXSBMJYRQIQSRGPEESZRJCIAMPNXZDZHIWNOEVRYCQTA");
    msg.last_error_time = 0.4158846956640746;

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
    msg.setTimeStamp(0.7024371230184151);
    msg.setSource(43224U);
    msg.setSourceEntity(148U);
    msg.setDestination(33438U);
    msg.setDestinationEntity(80U);
    msg.op_mode = 63U;
    msg.error_count = 19U;
    msg.error_ents.assign("LJNIUGDPWBXUHGERINQZVYIKJJTEDLTUAKKLLCROLSHIQDSOJQBQAJHXFMQCHYBBZOYCTBEVOFTIGLQDIRLJOFYOEBFAACMEKWXSDWVVKEWNEYKUWHBXPDMTSENJZYKFRAVNCHDXZTAVYJNGTMQHPQVZMCUJUJLWANKSXHMLSIPAXVKGRUTBSRTEVYIPWRAHMUFGZMCNVFCTKFAGXDIGZXHCYBSIXQOUDFRDNPSZSMMO");
    msg.maneuver_type = 54457U;
    msg.maneuver_stime = 0.4236055282720328;
    msg.maneuver_eta = 1844U;
    msg.control_loops = 1681254355U;
    msg.flags = 29U;
    msg.last_error.assign("OSLAGKBXWJFLZKOZHDGEESTIJGSWZHIJTCRGTQYEDAHKCAXLMUKOQKVNZYGYAMAKDRBNWFRFJRVKOZBMYJIUNCNEZUMBCBEPUYMSLTLSEJIXTRDXQHRHLYOVWQQOEKSBSHBQIMEJPXVJQUUBAXFVTCOPXCNFNGWE");
    msg.last_error_time = 0.7502366000580459;

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
    msg.setTimeStamp(0.9614959445237726);
    msg.setSource(14318U);
    msg.setSourceEntity(81U);
    msg.setDestination(43478U);
    msg.setDestinationEntity(79U);
    msg.type = 45U;
    msg.request_id = 49386U;
    msg.command = 230U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 64434U;
    tmp_msg_0.name.assign("LZMYZKGYKTXMFWKXSXWDMJFRNZWJNTWHAIZAVHUVRPTOSYPTOFSDPMVZWUSQXOJHQZIUWCBOINLFCBVDCXQPSTYMJHOXJQEWLMFWUSPVCEGECKKMUIJGY");
    tmp_msg_0.custom.assign("MLNGKLJMVCJYPETSKUSRIIAYDAOHDTBHSFYSDZNORIXPUCXJHDULFPMLFXLZHFCLRHFWEWREYFZOJPEQAZBDDWP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20793U;
    msg.info.assign("XXOPQZVVBPUJZBBTYEVOUPGUJAVOQOZIFDTGLHPUUMMKEGRATFHLTBOCSYHEIQANPHPVSMQTZSVRSBZJKKFTSHTWCRHNMCUHWGJOODNKOWXARGWAGFIVPISUONACMYENDGDGAGBJFKIYLOIEZMWCWFJDAZSLFUZDCRKEXBKQSJHXLYZMPXBMSQUVYREILWIPSIYNTJEJNDJXYVMXBLBCRRQWQDLLHEZX");

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
    msg.setTimeStamp(0.6156045853563931);
    msg.setSource(580U);
    msg.setSourceEntity(254U);
    msg.setDestination(20214U);
    msg.setDestinationEntity(189U);
    msg.type = 107U;
    msg.request_id = 30226U;
    msg.command = 253U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.11450512733016993;
    tmp_msg_0.lon = 0.8834077877745203;
    tmp_msg_0.z = 0.32131081855426646;
    tmp_msg_0.z_units = 54U;
    tmp_msg_0.radius = 0.39818987473054845;
    tmp_msg_0.duration = 14188U;
    tmp_msg_0.speed = 0.48278131472723373;
    tmp_msg_0.speed_units = 244U;
    tmp_msg_0.custom.assign("TBHWRQSQVJOEFOZLZEEUFIHKLLVDZUDHNLZLPFGOUYDABXSXDJCYPMEUDYEPGKWGNTWHMRRXDIVZCARPCVXBNKGAXSJNSUFTBZMMFGSWTVMBJNVRADDXTUOXLQEKLCQKMBMPWJZNQMEOIGHLQHILIRZVUGBWUJQNJUIWPCKHEKTAAOTMVGNBBYLWYFPAIYKHMRAKDQSHOCXCJXSSUJYWXYSDOFZKQEIIQCYRSFZPPYNFGONRCTTFOVBRHEVAAT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51278U;
    msg.info.assign("RCJHBHBSBRMFDIZWFFEAPJOS");

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
    msg.setTimeStamp(0.6610321154927734);
    msg.setSource(3726U);
    msg.setSourceEntity(155U);
    msg.setDestination(16688U);
    msg.setDestinationEntity(174U);
    msg.type = 241U;
    msg.request_id = 46804U;
    msg.command = 234U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.7771054161422825;
    tmp_msg_0.lon = 0.994344774373598;
    tmp_msg_0.z = 0.15605964379885262;
    tmp_msg_0.z_units = 189U;
    tmp_msg_0.speed = 0.906447446695752;
    tmp_msg_0.speed_units = 23U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.06573869181551295;
    tmp_tmp_msg_0_0.lon = 0.7641392678383802;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FNZUJSPNEQAGJEJFSFXLKCVLISFUEBWCDULKZUIQYVIKDKVQOZQWTAOU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24557U;
    msg.info.assign("VKEVSQMDVMPWBZAYLKTKLJIBIBGOOFTIUWWGPJNDMEXUTWAFZMAVGUGNWQDZEAXSCNWR");

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
    msg.setTimeStamp(0.41755726146493244);
    msg.setSource(8485U);
    msg.setSourceEntity(153U);
    msg.setDestination(42345U);
    msg.setDestinationEntity(168U);
    msg.command = 21U;
    msg.entities.assign("SXWWDOGNCOBEPZGESJWUMCREZFQVZWAMOBPJHGLBES");

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
    msg.setTimeStamp(0.016301942305663064);
    msg.setSource(17032U);
    msg.setSourceEntity(12U);
    msg.setDestination(47271U);
    msg.setDestinationEntity(108U);
    msg.command = 230U;
    msg.entities.assign("DYEBOGTWYVGIELIGBIHUNFIDMSINEAHLSFQVKZXEJCSHPTAULWYVLUZDOPLQSQJKYUZSRJCPLTRDADGLYIXJEYKJXMMOTNGTBWCCXFLQUGUSOBEHRMGUFZBJTWWAXJORPHQBJNYSDVODNHFMWTCFFCPHKGRTCERUUEPQPAYKMABOOCAWRXFNTZGXQMVDP");

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
    msg.setTimeStamp(0.14923938733391817);
    msg.setSource(18928U);
    msg.setSourceEntity(163U);
    msg.setDestination(34196U);
    msg.setDestinationEntity(62U);
    msg.command = 148U;
    msg.entities.assign("KGWQWJRSCDGZXOALSQSMEZUNLSHORTXNCADNNAWPGDXPQZWJAMTBUGGCYYJOUXYFIIVPTAUURESZYHPBRPKIJLBMPNKXSBNTZKEVPFEQUFCRXFRJQJHZSDMBUCOKITVQKONFREGPOIWCMHJIIIAHMJOJTHJBORFLPETBBDLLXQZHDDLYWYFVVI");

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
    msg.setTimeStamp(0.6771940940255154);
    msg.setSource(51664U);
    msg.setSourceEntity(62U);
    msg.setDestination(20419U);
    msg.setDestinationEntity(237U);
    msg.mcount = 36U;
    msg.mnames.assign("LWNNHHIFZS");
    msg.ecount = 220U;
    msg.enames.assign("SHBSRXBJHMPKXOXDMEYLFOYMQWSLFHYMDVBSGCIINDMTKLYKNVZPKBCDVJPUSFWPSUGUFCOLADUBQUPWLCEXXGBHI");
    msg.ccount = 171U;
    msg.cnames.assign("UARVEUDHSAXCTZIKCRNMWNQMBLBMFIONTNFEGZHXCFYMUXZBOZJGFXTWQHQHFPOMKDNRWULSKLLMRLOOVGLENEHVJLZYIVKDRX");
    msg.last_error.assign("NAMUUBICGCPYSXMUMBWZMGQGEOIAXJTXFYDRMPIJFMRBRWNADYPKENZRVLXTNNHVPWEXYYQJLYDRCEWOKVCTUDJLOQFXFXUOZCJMKFOIFVLWQSOKTNABSZDVVEUHFIKTHUBYMPSKJTPZWFDZSKOWRJNDMEDTLCANZGEDIYJWNOBYGIFVNHZAWADAUKAJUQTQMHGQTSZLLSIKGCHXEGRACSF");
    msg.last_error_time = 0.2897333905158388;

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
    msg.setTimeStamp(0.8713366056535501);
    msg.setSource(57278U);
    msg.setSourceEntity(120U);
    msg.setDestination(22998U);
    msg.setDestinationEntity(243U);
    msg.mcount = 72U;
    msg.mnames.assign("PGTIXRIJMJXJCZNSPCACHJKBRNETITMJIGCSRLNBLTACWBXFWMEOWOAODDNEJPSLOMPFTFFUIDOTUYBQADZYVVIGHZBZTDDXBDSEZPCMSSYNKLMYUHFVRQHJRQKKCIHFLSWHCKNUERCXVQQGAQKWMFWBONCYIJKITOYNSERKAZVFNGUWHOZJLBAVHYTEFRXGVUWXKAZPDXMDZTGBSYGMBFUVZALEQVHUPUU");
    msg.ecount = 52U;
    msg.enames.assign("FEUSEZHTBOKIGECOYBFWWSEJVJTGJIVESAFKUHUVUFLYMANOYBKKRTCMPVAZEQDNTGVBXXTPWGDZRYOLJJNJNNLXCGCGACCJJDUPWWCXRYPZKLOQEWZFKNSAFPPQRLMFTHHEANBSSPXALMTYYUKHNQMBFFZJIIVSDAQYJDXORIMGOPILUHDRGVOLHVPYFWMZRXETKWAEAQDDUZCWBLOVRTQQMHOBKQS");
    msg.ccount = 189U;
    msg.cnames.assign("HPVZNJQZLOQOAMKGVYZJKMRVMQFIOKMNHPKKOPYSSIDMTUSURSYRDLFBBBMUYZRVNQYKPFWO");
    msg.last_error.assign("YIDPXZVEPSQQRYDAJJKKFAQWTSKJLBHJOTIEJKHCOIUMNREXMGSVHORUSLNIWBRGYUCNAKQXWYUNYQQCJKEPCUWUWGGVEIGFVZKINVRSXTFPLFIGJMPWMHDFAZVEQBTRYSOSHMUBTGTBVIZBTZHPAOZ");
    msg.last_error_time = 0.7071751467171166;

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
    msg.setTimeStamp(0.4318576000802258);
    msg.setSource(5784U);
    msg.setSourceEntity(212U);
    msg.setDestination(36170U);
    msg.setDestinationEntity(249U);
    msg.mcount = 161U;
    msg.mnames.assign("REVXBZGZOAOGTEFUGBRCIDKAFEYJPWYMMKLUCODKQPCKNFCSNBXVFYXVEJPYCVUQOZKRSTEVEMMHVBAMQPUIGRZSNWPCHJGLIKHQHHABYCJFYOUGPXAVLFIOQLMUSNXIOUDMZSBWOMJGPURXSSCWLVTTDRQGJLEWDGNTLNCZPAWKZEKJWLHENBIYBPLINIQSWNDQTVK");
    msg.ecount = 48U;
    msg.enames.assign("OTANLWCFYDIKUBHRVHQLVFHPRJXXECBEZZQOLEGMFUWTBVOWPDJPVXIQDPRNKVAKMRRLLYJXTZBCHZANTHBVSYLOCNTYJEUXMEQPQJYMGRZGO");
    msg.ccount = 140U;
    msg.cnames.assign("SKEYAXTQDOGNLACOVZBTNGBRVLIONZAWVUIQKBLCKZCPKYHVMIZAOINLOXSGSHUQMZSRKDORXJFJARENPWCRUNNCIZFYZJFIHPFGZYRWDXWVJQQXBVQSMKBDOTJXPSAMEKQEIIFDZDTLADCLJG");
    msg.last_error.assign("BFBWSRYMMNDZWTVVWXHIDNMKQMHSNCBJVIXNPSXYGOZOAMQOYIXKJLSFUCMPRJFSHIVCWNKPXBUHBWEKPUPPYFHZEWFOROHYARLZLPZXBYSGUXGFHNCRGID");
    msg.last_error_time = 0.40845635575714456;

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
    msg.setTimeStamp(0.2016856614807242);
    msg.setSource(58722U);
    msg.setSourceEntity(26U);
    msg.setDestination(40687U);
    msg.setDestinationEntity(128U);
    msg.mask = 175U;
    msg.max_depth = 0.1131886405851994;
    msg.min_altitude = 0.8364244811174346;
    msg.max_altitude = 0.5991308635530533;
    msg.min_speed = 0.8899849413628595;
    msg.max_speed = 0.600896808924836;
    msg.max_vrate = 0.11511326381714981;
    msg.lat = 0.8267201553506012;
    msg.lon = 0.4073536685222551;
    msg.orientation = 0.8357775189797214;
    msg.width = 0.7476163692061182;
    msg.length = 0.5352585146868291;

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
    msg.setTimeStamp(0.9659507834645472);
    msg.setSource(46871U);
    msg.setSourceEntity(192U);
    msg.setDestination(9740U);
    msg.setDestinationEntity(195U);
    msg.mask = 117U;
    msg.max_depth = 0.26807986903102343;
    msg.min_altitude = 0.4688351856856726;
    msg.max_altitude = 0.033278651621331146;
    msg.min_speed = 0.36197351780364495;
    msg.max_speed = 0.5673832461211552;
    msg.max_vrate = 0.990508984523853;
    msg.lat = 0.8558697392494532;
    msg.lon = 0.1952252292338924;
    msg.orientation = 0.5515470364426555;
    msg.width = 0.8183816805832496;
    msg.length = 0.4514187364120321;

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
    msg.setTimeStamp(0.09067354366800262);
    msg.setSource(42630U);
    msg.setSourceEntity(223U);
    msg.setDestination(56547U);
    msg.setDestinationEntity(224U);
    msg.mask = 213U;
    msg.max_depth = 0.19061033750285972;
    msg.min_altitude = 0.36373447643109047;
    msg.max_altitude = 0.9596056681903498;
    msg.min_speed = 0.48504465998089996;
    msg.max_speed = 0.6159510451857662;
    msg.max_vrate = 0.059542324864883756;
    msg.lat = 0.45138533184106555;
    msg.lon = 0.11644495157657153;
    msg.orientation = 0.1464341464877965;
    msg.width = 0.05565855189335289;
    msg.length = 0.2047881527425921;

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
    msg.setTimeStamp(0.3162076951922602);
    msg.setSource(2601U);
    msg.setSourceEntity(104U);
    msg.setDestination(14983U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.6013942546745491);
    msg.setSource(12202U);
    msg.setSourceEntity(194U);
    msg.setDestination(15031U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.5042036498816508);
    msg.setSource(59515U);
    msg.setSourceEntity(42U);
    msg.setDestination(32751U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.010000991773887358);
    msg.setSource(50292U);
    msg.setSourceEntity(250U);
    msg.setDestination(50129U);
    msg.setDestinationEntity(247U);
    msg.duration = 23125U;

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
    msg.setTimeStamp(0.5237464220265641);
    msg.setSource(49456U);
    msg.setSourceEntity(12U);
    msg.setDestination(11989U);
    msg.setDestinationEntity(89U);
    msg.duration = 58191U;

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
    msg.setTimeStamp(0.8143769401074886);
    msg.setSource(34763U);
    msg.setSourceEntity(84U);
    msg.setDestination(47977U);
    msg.setDestinationEntity(61U);
    msg.duration = 24193U;

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
    msg.setTimeStamp(0.38178899190183413);
    msg.setSource(56730U);
    msg.setSourceEntity(114U);
    msg.setDestination(54638U);
    msg.setDestinationEntity(246U);
    msg.enable = 44U;
    msg.mask = 348183075U;
    msg.scope_ref = 2722924100U;

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
    msg.setTimeStamp(0.41008534396936547);
    msg.setSource(43719U);
    msg.setSourceEntity(52U);
    msg.setDestination(9208U);
    msg.setDestinationEntity(55U);
    msg.enable = 92U;
    msg.mask = 667949065U;
    msg.scope_ref = 1288085348U;

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
    msg.setTimeStamp(0.5971000433539619);
    msg.setSource(41292U);
    msg.setSourceEntity(80U);
    msg.setDestination(64567U);
    msg.setDestinationEntity(201U);
    msg.enable = 106U;
    msg.mask = 3964362192U;
    msg.scope_ref = 1620094039U;

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
    msg.setTimeStamp(0.2350593672140896);
    msg.setSource(2036U);
    msg.setSourceEntity(37U);
    msg.setDestination(5557U);
    msg.setDestinationEntity(115U);
    msg.medium = 89U;

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
    msg.setTimeStamp(0.9936273706536075);
    msg.setSource(53879U);
    msg.setSourceEntity(79U);
    msg.setDestination(19105U);
    msg.setDestinationEntity(48U);
    msg.medium = 67U;

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
    msg.setTimeStamp(0.45826068634082595);
    msg.setSource(9360U);
    msg.setSourceEntity(94U);
    msg.setDestination(18525U);
    msg.setDestinationEntity(189U);
    msg.medium = 126U;

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
    msg.setTimeStamp(0.18940189343398017);
    msg.setSource(60618U);
    msg.setSourceEntity(179U);
    msg.setDestination(40642U);
    msg.setDestinationEntity(69U);
    msg.value = 0.5453173856022527;
    msg.type = 55U;

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
    msg.setTimeStamp(0.45113916856336933);
    msg.setSource(38519U);
    msg.setSourceEntity(221U);
    msg.setDestination(51709U);
    msg.setDestinationEntity(246U);
    msg.value = 0.03932680690194601;
    msg.type = 30U;

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
    msg.setTimeStamp(0.7462934961683302);
    msg.setSource(17566U);
    msg.setSourceEntity(40U);
    msg.setDestination(13375U);
    msg.setDestinationEntity(31U);
    msg.value = 0.40800133078960077;
    msg.type = 32U;

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
    msg.setTimeStamp(0.6214445882046044);
    msg.setSource(28250U);
    msg.setSourceEntity(158U);
    msg.setDestination(357U);
    msg.setDestinationEntity(53U);
    msg.possimerr = 0.3042405823391954;
    msg.converg = 0.6604261352303169;
    msg.turbulence = 0.5069052875360507;
    msg.possimmon = 127U;
    msg.commmon = 133U;
    msg.convergmon = 13U;

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
    msg.setTimeStamp(0.7497599165099641);
    msg.setSource(36813U);
    msg.setSourceEntity(204U);
    msg.setDestination(26389U);
    msg.setDestinationEntity(244U);
    msg.possimerr = 0.5567166642460795;
    msg.converg = 0.9976540860790635;
    msg.turbulence = 0.04570611881934883;
    msg.possimmon = 173U;
    msg.commmon = 23U;
    msg.convergmon = 168U;

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
    msg.setTimeStamp(0.8769172845403167);
    msg.setSource(61638U);
    msg.setSourceEntity(103U);
    msg.setDestination(37961U);
    msg.setDestinationEntity(71U);
    msg.possimerr = 0.011976539505976103;
    msg.converg = 0.018981714466647648;
    msg.turbulence = 0.54002148763724;
    msg.possimmon = 190U;
    msg.commmon = 75U;
    msg.convergmon = 220U;

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
    msg.setTimeStamp(0.057028426732049);
    msg.setSource(40723U);
    msg.setSourceEntity(98U);
    msg.setDestination(43894U);
    msg.setDestinationEntity(161U);
    msg.autonomy = 102U;
    msg.mode.assign("QJDOWUNBZBXBLTZPBHATYMUUYSIIOKEFCRAUOAJOCOYGFBMENNCMWBRMRSGRGYHEWYPNRXCAQVUHAECOGJDXRLAWHYDICDENVQHVHL");

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
    msg.setTimeStamp(0.21219327347026584);
    msg.setSource(59200U);
    msg.setSourceEntity(163U);
    msg.setDestination(41448U);
    msg.setDestinationEntity(159U);
    msg.autonomy = 158U;
    msg.mode.assign("WCYBRAYWFGYPRHMOWIGCYFKTHTLEPPLGABPFFHWEXNODIUTRKDAIUDMCLUISNZOCINKX");

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
    msg.setTimeStamp(0.13336128722891272);
    msg.setSource(55005U);
    msg.setSourceEntity(67U);
    msg.setDestination(55631U);
    msg.setDestinationEntity(66U);
    msg.autonomy = 182U;
    msg.mode.assign("SEZMYSGPHBKRUOJAFXRIHQAAMDENKGPKKBZPNIHSHYETOQDZUNZRXACOIXFJNINWDOXKJRGF");

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
    msg.setTimeStamp(0.2714338289729865);
    msg.setSource(62202U);
    msg.setSourceEntity(140U);
    msg.setDestination(8504U);
    msg.setDestinationEntity(32U);
    msg.type = 176U;
    msg.op = 27U;
    msg.possimerr = 0.41069463748612955;
    msg.converg = 0.9295052636713124;
    msg.turbulence = 0.988508285255711;
    msg.possimmon = 114U;
    msg.commmon = 173U;
    msg.convergmon = 186U;

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
    msg.setTimeStamp(0.0312961078330275);
    msg.setSource(54405U);
    msg.setSourceEntity(165U);
    msg.setDestination(32841U);
    msg.setDestinationEntity(105U);
    msg.type = 128U;
    msg.op = 110U;
    msg.possimerr = 0.6513896141272725;
    msg.converg = 0.979668393225666;
    msg.turbulence = 0.18827040700052589;
    msg.possimmon = 227U;
    msg.commmon = 0U;
    msg.convergmon = 114U;

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
    msg.setTimeStamp(0.8045101453934774);
    msg.setSource(29932U);
    msg.setSourceEntity(17U);
    msg.setDestination(64635U);
    msg.setDestinationEntity(142U);
    msg.type = 194U;
    msg.op = 63U;
    msg.possimerr = 0.6742175302220655;
    msg.converg = 0.1953041660154322;
    msg.turbulence = 0.8721949562197173;
    msg.possimmon = 15U;
    msg.commmon = 157U;
    msg.convergmon = 164U;

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
    msg.setTimeStamp(0.8079872259015229);
    msg.setSource(53756U);
    msg.setSourceEntity(167U);
    msg.setDestination(20564U);
    msg.setDestinationEntity(49U);
    msg.op = 246U;
    msg.comm_interface = 248U;
    msg.period = 40581U;
    msg.sys_dst.assign("FCIUARKJWHXWJWEGQQBTOXMZJZKZLSVPTBRFJPMIUIJNSYCKGPLTASYIHKRLCDIBRDOGSHSZDNVOUVWMQHGHUMMQFAEWXYLTGPVVWWOUXMRVJHSKTYNXEEQVPHLYNBTTFFZJFGAELBXLZCVHIZDKGQNZCJTVHFKKWLDPRCSAVJILFQUJOIYXKDCENAXPIOHEDUQYGOOPZBMFAOCMBFCGWERYPAEXRBRNDSKPQSOUGBDERANTUWXTN");

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
    msg.setTimeStamp(0.2975719892462393);
    msg.setSource(47916U);
    msg.setSourceEntity(14U);
    msg.setDestination(7767U);
    msg.setDestinationEntity(118U);
    msg.op = 10U;
    msg.comm_interface = 47U;
    msg.period = 16986U;
    msg.sys_dst.assign("RDUHLAGYDFSTQFZVAHTI");

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
    msg.setTimeStamp(0.26506736966100664);
    msg.setSource(31513U);
    msg.setSourceEntity(53U);
    msg.setDestination(19299U);
    msg.setDestinationEntity(223U);
    msg.op = 220U;
    msg.comm_interface = 193U;
    msg.period = 53266U;
    msg.sys_dst.assign("OHXUYHBOKUJWGJ");

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
    msg.setTimeStamp(0.018142643303091455);
    msg.setSource(2649U);
    msg.setSourceEntity(9U);
    msg.setDestination(6584U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.40240200495054823);
    msg.setSource(55283U);
    msg.setSourceEntity(119U);
    msg.setDestination(4755U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.07379649541589772);
    msg.setSource(16351U);
    msg.setSourceEntity(28U);
    msg.setDestination(12476U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.47426547902483684);
    msg.setSource(29445U);
    msg.setSourceEntity(50U);
    msg.setDestination(12380U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("LQZVROARVTQTYFYYUDRMFLVUHTYFLVUWLYDSMQIKWCVNEMCH");
    msg.description.assign("RCSTXODXBZJQRGGVYKSLDVQNZCPLAALEBGKCUCVWSTWSPXETXKFHUETAASFBROEZDGMMDETMBCBVWZKBALCQVHNNPGRPCDVVMDJHDYESSMGOFPSBTQYKMNFXWNLUIRAKZTGMHJPFJLJQMNZ");
    msg.vnamespace.assign("TAHAQCXLUATCJTWKQDZPRMCJXQAHWIKXDTOKLWYUIVNDCJPINKFNYKBOIEFZZFGDPUVOCLTBPOQKRBWFAXSADS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IRLDYYPRZHAIWHCINCMQFGTPGJRRUELQKDTBZFHXWRCUOGDHJDGZQKELPEZWFOBNCEVSUQVMBLSLHWMPYMWZAYIUAJPHUOYXOCNMKEGFSJJOCZOANCKSDWBDOXPLTESXODSQAQISYYXLMBZREAGRVYFDQXJWFMVUYZMLPWKVXOUUVNTJFWNDNIANAMFXFDQECAPRHTWQVZTGRTIBAPVPSFJKJEBJUKLURTNCZKEBHSVMKITGSXT");
    tmp_msg_0.value.assign("MMROQSSPFUVRCHHQVGIHNYDRYMVJMIFIVPRYBDGGCXTQUDJNJJETFEPMOMLSZIOIKGALEQDNJPSXABZNGFNGUHDDACKOGGAVEAFDWNDETQHUYIPWIQZVBEOSKEKJBOPUCXJWXSFQPMPDRFLYETLPWNLKYSGRUFFXZBPAEHRIDRSWMCTVCCROTBJKYOYZHVMMOTCXCIXWTCZBRFWN");
    tmp_msg_0.type = 190U;
    tmp_msg_0.access = 154U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GPIRIRKHOSEQWVSMTTIGCZTAGVJSZNHQJHQVFXNCJCRURQMEJFNYTYPRFJJYAAZZXDHKOIYBOPUJUAGWUQDZFKTFSEGYZMAVKCMLVACSGNDTLOXUTMXYBFDGKPWWDXODFAKKLUFPCVSXMMHUYXBXPHKALOVGBKRRINUH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KVIGYELNFHHHIPVFETJUNTMDGOSSFXIXDICFYJILHMCNBX");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 17888U;
    tmp_tmp_msg_1_0.control_ent = 122U;
    tmp_tmp_msg_1_0.timeout = 0.8975937340579404;
    tmp_tmp_msg_1_0.loiter_radius = 0.7897956994749596;
    tmp_tmp_msg_1_0.altitude_interval = 0.8155454656903448;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::UsblAnglesExtended tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.target.assign("YWMURJMFMYTIIJHWPHRAAEDZUTTUQOCNQVHXMXXPWYMRGVDXHJCZAHZOIICHEQ");
    tmp_tmp_msg_1_1.lbearing = 0.4742833040738894;
    tmp_tmp_msg_1_1.lelevation = 0.4145245081299971;
    tmp_tmp_msg_1_1.bearing = 0.8375335157484988;
    tmp_tmp_msg_1_1.elevation = 0.25518470576433727;
    tmp_tmp_msg_1_1.phi = 0.9775658175993291;
    tmp_tmp_msg_1_1.theta = 0.7555254173665236;
    tmp_tmp_msg_1_1.psi = 0.11924790267570118;
    tmp_tmp_msg_1_1.accuracy = 0.7739439068940972;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("HKKQJOGXIAMJCFMRSIOBOCTXAEUTCHFWMCBVARJVCVDIJFXMNSWDTQDVZPLBUGBHYUGUZUNWDIXJYDTBTLIAPNUUBMRDERSETNEGFRYHXEXVSBQINLLOQPHWYMKLSPHPAKXEWAKSNTPUFLOTGKMGVFWGCLXYSJJWUOSF");
    tmp_msg_2.dest_man.assign("ZWIBHIUWYTRURWXTRADEZCXNVKHLHNLZRLGEFLWDQVIJMCYZGOESJBWUAAQPGMKLIMWNZOGDRUEMEFJDSTKRWNINRVVKOIJPFQCEVTAPNZVPQQBCTGJULXMPQBBPXLCW");
    tmp_msg_2.conditions.assign("ZKJSBUOWVOBCRPDXRFFPNQIBYIDKYITIRAOFJPEIVALUETAQGJLFDXSOGDWOCNFHYAFTCEYFZJBMUDBHLFVLZPATDGYDOQUZLRHUCRETHBPBMCGGMHQIVQEYDMRNOGJASELWVSHQAAGSKPWULMRXVZZHDSKWWFWBXZNVDUSKCNPXJQZYVPCOIHIKXQKUELVXOCTNXMSMSIEGT");
    IMC::GroupMembershipState tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.group_name.assign("HAVLBWYIMPLMCWRBHORBVSYSPVYQVINUEMRPGMITDLJYKBRRINWAXEQJTXGOZBTJDHCOTYNONBZUITWWFIHFPQSJBDZXIYJRYZSSFZQXLUENTATZTOQAGNWKLTHFNMFAQXEKVXAXFDPRCIVGCMOEDHPSKWSJGYIIHDPJKAKSLLCZQZJNUHVKVR");
    tmp_tmp_msg_2_0.links = 1733267184U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::DesiredSpeed tmp_msg_3;
    tmp_msg_3.value = 0.03221906399681351;
    tmp_msg_3.speed_units = 212U;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.8229896082677984);
    msg.setSource(15016U);
    msg.setSourceEntity(190U);
    msg.setDestination(51037U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("ZJFOGWQCAVBOSMRCQRNPPFUNNYQUKWEGRWZMCHKOSGYABQDPAVGFINVICURCIYVQCJZISNZXBKFLBWHYWMUOQELT");
    msg.description.assign("QWIURRMTHXCFXWGPFCJVN");
    msg.vnamespace.assign("MSKBDOXEWLUPCRWXAOXDXKRAYHAJBODCFWIBPFWPMFPLTOMXPRVKLEDTSVVSTHEQLGKRUSUZQZVGPATXANDCNQMSVSMQKRHBMMNJYANGJGZOYKGUXDYJGWENIIWYQLFMYOLNJJAGEIJWK");
    msg.start_man_id.assign("ANMAYCPRJYIBUFDFEQGXHKWTXELELZBHOHDLSOMWFYFXUELQJXKLIKAMYSELZBUUXYXPGJTISZKRCWDKDUROTFZVNBYYUWJKVLNREFXNAQITSPDPTGJBWBVCXWQPRLVGQKNXRIQVSGAEHYJS");
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.3913483577275336;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.33053789919941157);
    msg.setSource(22452U);
    msg.setSourceEntity(170U);
    msg.setDestination(39374U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("GIICBEHONSDMVWOTFPZAAGPFKZZRUGUHFHIEOOXSMNWWEVBVUMZAGYDQSSCXGMJKMVSLLVYDKRFKQTEWRKSUJBTKLDYQAFWRNIIBUFMUTSLTOOJPMISXZHLJAPLCXCOTIQLADQVCXCLOBFQTVZRWJLAGXURQNPXHTH");
    msg.description.assign("GTXIADCINSQWACVRNXUSO");
    msg.vnamespace.assign("XDPOHBMNFKNSTMCYIMZIHVYESTNZUGEXCLXXCJEUSFFQYZWZRGORIQMWZKLFINORZBKKWMAEFFGAQBHAHXHBCIBCREJTPPMGYVWRBJDQWTFDOBRAEUEVXFCNUQYPYAPPYKJRNOHULNVILRTWBSYXPNMLUPJZDUMIHXTQVEXIOUGWDRFDMJVTGJQYIAK");
    msg.start_man_id.assign("IMSSLSWGAMSWRRZLTBFYPUXSGEIOJMXDDIFNYKUAPBIN");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PNXNPDQWPAUHRTMDBQLKAUNYOFKMUPHEBMAEOCIRRTFZETRTBRJHHMEKZXENOATGIVSZKGGVIIHXGUMXGSYRYVNDHQPMSKXZSPJZSPAHBSYJLVQUCCYCTOJOJJAZIIWOVEQFHGUIPVMXDZHQXRTCIDGWSOQKEENVOZWOSCTKVJKSZAMCLLAFWUYBUCDONYLKRFX");
    tmp_msg_0.dest_man.assign("SFBMJTJQTODIIVPSMVWOBYWLDKGPJVQLHPRRQDCNYYZETAYTRKXKTPXTLKPSOMDUIZHTEALFRAMNCZNSXBPGUYBQUSBKECXOHNPOLZBHJOSFJKAGUNVZCXJGVEXJRCKGFETHTEOSPIFLYKROFNMAAYUEQJVUVIRRKEEAGOWYIJLUVSDCFJZHYLMWQMMFMADQN");
    tmp_msg_0.conditions.assign("EVVYWCIAAIDDZETRMZDKVJJVUWXKIUCLGOYUAHPXXTNKUGSKIHVSADFCHEROORXQQMYRQTXUNKLIHMTBGWQLLXPZWVJTVWMSLLJBUOTYKBANYMNYNRBNSLZRCZAEVDPELMSGPFRGQTCGXUUHXRDAHJZQKMWQMGWPXFZKVHZOQPFIEJDCKYRDZSMFEUJISYCLFNLNNIWYVE");
    msg.transitions.push_back(tmp_msg_0);
    IMC::DevCalibrationState tmp_msg_1;
    tmp_msg_1.total_steps = 205U;
    tmp_msg_1.step_number = 39U;
    tmp_msg_1.step.assign("WTHFDWVBJEKWSNZDRZJBPZAYYMNVIQALPGVDVUDOYLVJDILJFVXFHOGCABDAZPDRONNOJZXKDYXCTIACJJYOHTBHWLWXSBMVBTAPEXUQEHQIKCFMMSPLVENIATORCTYIGYOCWIOMZHZBZQIGWNERFSTRUQNSJHEGNRXFVLEAQMHSQPZWRSGTNKKVGSFQCTRHXXIOPUDMMUXQYLFGBCRKSCOUCRFNYDPTP");
    tmp_msg_1.flags = 44U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.8771612439472677);
    msg.setSource(15183U);
    msg.setSourceEntity(167U);
    msg.setDestination(5783U);
    msg.setDestinationEntity(140U);
    msg.maneuver_id.assign("YTXNIMQGQLBOPGBSBMCAJOZIUKHRFJAUCECFFHJGRLCJJHMWTHZDSAWQADAQZMAJLLIXRZPKIYPMKFXFXMZWBOYRGENCTQXQPEVDHGYIVKUHSTFLNDKVOKNKJSEURNUZTHAEISSYGRYBGFWOBOKXPTSYQJCUNRWDBBSNDFNOZLUDIAYWEHHRYOLVHGBUJLGNMVSEWNMITKPDATTVORPRGIXSLZCOVCIEF");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 60372U;
    tmp_msg_0.lat = 0.5728938774071307;
    tmp_msg_0.lon = 0.09197738307434578;
    tmp_msg_0.z = 0.761017496353129;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.speed = 0.5402146381105105;
    tmp_msg_0.speed_units = 184U;
    tmp_msg_0.roll = 0.9972956108621616;
    tmp_msg_0.pitch = 0.4088592918261921;
    tmp_msg_0.yaw = 0.5010980175516765;
    tmp_msg_0.custom.assign("FSZILSFJDZUKPZIHKHELKTNTXJJBYHSKNCDWBJDXMLQOVHWVMUNPPBSORYAMGTNVOIWLOKRYURBFHMWKBVQGWHZABHZGRTJDZQDSETIPAASGRXZPYDFYDECEJIXNKBQVNKJXEHNZRDEHWDYHIUANYNZFFXKLBRWVJAXUMPRTSXQYNBGOOGKCQWEFAEGQCUCOTISWMX");
    msg.data.set(tmp_msg_0);
    IMC::SimulatedTime tmp_msg_1;
    tmp_msg_1.htime = 0.6979650059101009;
    tmp_msg_1.dt = 0.3262467665733966;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AcousticOperation tmp_msg_2;
    tmp_msg_2.op = 80U;
    tmp_msg_2.system.assign("TLMGJTTQLNMPJAXZEPRQHEIUKWSHSQGOWTTCKSUDKBFJKBVFILYZAJRGCMHEKGNFGCHFHFKOGHGRNTCLNPLPBGXNWDXLDEASYXYKDDBYQOCPNUGAQCDWFJEBPXYOEBKOUMJUIVXUILQCRLZSMROHCAAILRTKIBIMMVPPHVMJUTEWDNOAOILTESZSJWVCFYZFDPTZI");
    tmp_msg_2.range = 0.9009594384840952;
    IMC::EntityActivationState tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.state = 89U;
    tmp_tmp_msg_2_0.error.assign("TWQMYRAJPYICKAOAPQCCVILURPFPBHIVNRMNXZMXVNHKVFZBPXLZWOGLYQRBFYSSAJJLBKDALCIAEJWIWHUGLAAVQOSUZXVBWXQNMPXZNONFOBTDDELROUJSGPJOTDIEGHTFNRYSGEDUCFFVHIJRVLDWQXTQSSXUTMKMGKHNMAFIDTKURGSWWZTSIMPUBPEZIZCCETYZHQLYDPQFRMESDUBOWMYKJHZYKGOEDFXOKJEKYBQGNCVJXNTELUBCA");
    tmp_msg_2.msg.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.8462135872113433);
    msg.setSource(47775U);
    msg.setSourceEntity(208U);
    msg.setDestination(37246U);
    msg.setDestinationEntity(24U);
    msg.maneuver_id.assign("XDBWBOJJFNEUZSENEPWEZYQAILKMQWHGMIHTJACWCDOMJBEOYHYBNAXWFCLGFBHZFXLY");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 1927U;
    tmp_msg_0.lat = 0.3066402757782676;
    tmp_msg_0.lon = 0.01375615297458399;
    tmp_msg_0.z = 0.8918037542971962;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.speed = 0.28098288424159945;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.custom.assign("YWFYFZGOEOVHRRQOZNTJZZUFXKYRVNAXPXWQJODGCPVHDROWSVGKWECKUXWRAPNGMTSIEUBRDYQTIGNHGMPXGKHQBAPKTVQEMTFWBQHDEPTRNUUYLGXCQVPILIXIQALXZYMTDBEQWMGLLFMVINQYCPYORPSFTAHSHHTKFAYVFBZMBDNKDWFJAVBMXKBAGCVDUIKPAENSXRNBLCHZJSLWBTCYORKWLNJZSJJL");
    msg.data.set(tmp_msg_0);
    IMC::CompassCalibration tmp_msg_1;
    tmp_msg_1.timeout = 13263U;
    tmp_msg_1.lat = 0.34774633398339927;
    tmp_msg_1.lon = 0.16747945633805172;
    tmp_msg_1.z = 0.2690687396798811;
    tmp_msg_1.z_units = 43U;
    tmp_msg_1.pitch = 0.24187888026889937;
    tmp_msg_1.amplitude = 0.03684255080422827;
    tmp_msg_1.duration = 50195U;
    tmp_msg_1.speed = 0.7654408935712547;
    tmp_msg_1.speed_units = 114U;
    tmp_msg_1.radius = 0.22771883375882496;
    tmp_msg_1.direction = 237U;
    tmp_msg_1.custom.assign("TSCAVKUMAIMBLNMLRYHKQWSZTIODEKZXJBABNQDIMQOLLYLLCMMPTPYYDGBTAORMCBOWNUDJLQJRNPPGXFDUEUWSXNQEJSPUYHIIHFRPHZU");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.024552269207839705);
    msg.setSource(38218U);
    msg.setSourceEntity(204U);
    msg.setDestination(17475U);
    msg.setDestinationEntity(133U);
    msg.maneuver_id.assign("SKNDCTYYZMSGXQEOVTPOLBREBCKYNLMRWVABZIQHPALCBLUDVKWGUMUFQJBSNPBPSLLHSSJOHYMAUGEJJHRUJRQC");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 61987U;
    tmp_msg_0.rpm = 0.9183958227329035;
    tmp_msg_0.direction = 120U;
    tmp_msg_0.custom.assign("BYVORFOCGUUYNWQQCPTNOTJSXIFZVFRDASQMILUCPKEWDXXCUQWLDFZANUZPFPBUDSVEVWMXLTBVYWEHYGFPXGJHBMKYGOIAOJMYAPTCZWFBVIKOMQCGHSLOOJVNDIEMTICEJTNJASIPEKQLTHYRMKKMZTSYLUJJORKPQNZENNJEYIAMEKXVORDSGQUBFVHHLGDSWWKDJCNHXHNBYKLEBDPIRTTWGAAPRFCZBRGCRIHMXHBQSULXRQXZ");
    msg.data.set(tmp_msg_0);
    IMC::CrudeOil tmp_msg_1;
    tmp_msg_1.value = 0.7452866757822715;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleState tmp_msg_2;
    tmp_msg_2.op_mode = 118U;
    tmp_msg_2.error_count = 49U;
    tmp_msg_2.error_ents.assign("PMLBAPZXRVFMWKXIHBTHHCGZIZDQDMOBEBXFVEYFSWJGYQCEOUCGINWNVALUXYNITGHLHCJWCYSLJIPABEUWFUUOPAIQPGUSWOIJOQRZTCRCMUSCNESENAEGQAWMZOWCFQZYEUEQVXYNTKRNUTHDJDWGRVRNKDKJX");
    tmp_msg_2.maneuver_type = 17076U;
    tmp_msg_2.maneuver_stime = 0.059889263278721794;
    tmp_msg_2.maneuver_eta = 53563U;
    tmp_msg_2.control_loops = 3568925751U;
    tmp_msg_2.flags = 39U;
    tmp_msg_2.last_error.assign("IMTQSUCHUUUKTPDHYYJJCIOKQLXCRTACOHMDJYZEHRQHXQVGTGGALLSORXSPOAINC");
    tmp_msg_2.last_error_time = 0.7914445062457383;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.4035583048641477);
    msg.setSource(51818U);
    msg.setSourceEntity(209U);
    msg.setDestination(23450U);
    msg.setDestinationEntity(122U);
    msg.source_man.assign("FHFSDHSJEQKUFSLWRZBDMAGMAHJUDAGZAYMJUYEPUDVPCQDUQLTBOVXWBZHNGMATIVJZZGINYSVIRUAWNFWBEOJWYYQSQHAHDOGKGJAXSRCHLBKQFXHPVQAXOPEXRPKNLCCAZLMUREWODCBFTXVPOTGDNKFVCCWKPOILIMNHRLIKFTUKKWNBPTRTMSQLEPFMQX");
    msg.dest_man.assign("XGLCKRASQFCXUHGQLPHOZZMJXYJFBOYWGRTVNNEPUAIWVGGFRRJSSQJCVBLOLMRBUVXYQDVKONFSTOHLKSNBCWQRTKEEYPMISFXVUYANMDIRZJJUFTGHKNZMEEBKPFBVOVNRLDDOCTASWJTTFYKAYDSYATFMQRBHXXKIQDWJPXLWIJNKCWIDBAIUMLXUPAEUWMTECZQFOWBGZPDDGLVMZQVHROH");
    msg.conditions.assign("XRHWRLTPCIMNAOCQDPXEAJWEDUCMVSYEWPDTAOFDBRRKLFYZLBRXM");

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
    msg.setTimeStamp(0.06766536349567331);
    msg.setSource(39177U);
    msg.setSourceEntity(180U);
    msg.setDestination(9127U);
    msg.setDestinationEntity(33U);
    msg.source_man.assign("SKLSZATNUODTCVUEYIFOSYMXQFRNTQQNCMMRIQRIGOISJOHIJLWRNROPLFCDGJSJSSLYJDXFRHYIPFEAEGHMKBEGTTZDBYBSGHIBENXJUNAXCAUGDTZBRGMRNMEBWBTULEZNYBCZPOKVUPKFWHQWGXPL");
    msg.dest_man.assign("NZYVGHAOQEUDJPTFRWTZMKHWZXZMTHZUBIDLCFENLSGVBEKRIAVBJCAFPZQAKRVCTGPVAGBENIYDTBSWJZHPEYSYRVOMCHIMWDSTFJXJTXYDRCKBDCSUSOSGSTNHFXWJLNQROXHIPUNRYVWHLVMJUJ");
    msg.conditions.assign("MINSHBZCLKHLETJZINLMOAAADLDRGKUEJTBCSKVGYSMGEDVMBZ");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 55019U;
    tmp_msg_0.ttl = 18222U;
    tmp_msg_0.destination.assign("ALEJPFZUZEUNMCJNBESSUOFZLXSQLKANWSFYWIARQCWWTVOEANTQPGLCPBMIBWAQYWKPPTDQYJTMNVGBVBACWSSGUCYBXHJDOSWURCGHROSUHDMOPAHJYRHTIMKYHEHXAMFNTKWVCQVPMZDTTTOLNUJIXDGMHTQVEBOVWCGVGQJUXORMZDZFLAEKYCKBFZVIKXUBZUSQPRIRBMRKPNGHPKJOJARLLFIJDEN");
    const char tmp_tmp_msg_0_0[] = {17, -25, -116, 75, 124, 64, 49, -6, -87, -18, 70, -17, 110, -82, -52, 25, 44, 50, -93, 28, 45, 104, 98, 53, 20, -109, -13, -104, 97, -109, -108, -100, -103, 18, 73, -69, 117, 32, 3, 48, 86, 71, -59, -33, 47, -1, 62, -105, -32, -54, -32, -121, 43, 113, 115, 12, -60, 15, -101, -62, -91, -113, 73, -60, 74, 71, 66, -127, -38, -116, -28, -28, 126, -60, -68, 25, -127, -126, 118, -66, -93, -99, -53, -32, 5, 97, -44, 105, 70, 14, 43, 25, 32, 18, 33, -31, 35, 89, -47};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.4677175394753528);
    msg.setSource(41882U);
    msg.setSourceEntity(233U);
    msg.setDestination(13023U);
    msg.setDestinationEntity(2U);
    msg.source_man.assign("BULRAXTJQH");
    msg.dest_man.assign("ZVQCKKSKRKVPRAGMZGTPJRUDAOSHCMKNYUQOGUYDIJLZYTKLZKRMYVPOLRHGLVGBZWWEZGBLXZTDXHMNJECNQBWCXQOFMBYRMCFOFJOBNQWRVIWOFBSIIFHUXIAMCKVVCWIGNLNYLYSDKWJBBRCFAJQPSOSHMSIAQOAXHLWXEDPUMWGNBOESYT");
    msg.conditions.assign("YNCJDBMZLXJNZCEHNHBWPWARQIWNRBXQRSFQLTGPPBDWOVSNYYTEGMIEYAEFCPWBQDZRRADCEUDWNKSCPLMUJDCVTULXBXBHLZXMNJKFSUJMOZNXQHSWKAXKJXJXPMZGBEIJFVUXWOUYFSGKEWIVAAVLYKERQGZGSGFPRHKSKBPVEBITTDVRPTYQQMDHZFKMQROOCTUDFMCUJUUNLTPLFG");

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
    msg.setTimeStamp(0.985229037129249);
    msg.setSource(23269U);
    msg.setSourceEntity(222U);
    msg.setDestination(12849U);
    msg.setDestinationEntity(1U);
    msg.command = 153U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FYGVJNRXGABYBMEZGTBVWHNIRLMOTGDJODAYSKIRSAGIVUANHLKHEVDPOWZMHBWATCYCIXZSFGRGXEZMJBCVORZEHKFDSSEYSSXBYIDUQYXXQTTTPWBYUKJQLIFESUWCMTQCNOFKEPWAMCPRHENHDDDNVZCIGFLZQVC");
    tmp_msg_0.description.assign("IMEYCFZSVIHZXBIATFHXGEUUZWWLSVJGBTQFSGTIHHMGGODKLCZG");
    tmp_msg_0.vnamespace.assign("OMCKDRCNBEIKYQIHOMGWNRZTVEOYOMXAPDNUFTJVLECXZVZTBHAKVBNJJLSNZPQJVPVSCBKQKIWMPIHPTHUSOPSTUVLMLVRUWDSYDAFCGYHRJFUDKULGEEXLJG");
    tmp_msg_0.start_man_id.assign("XIQWEWSFWBETJMBVNFOSCQTSGVXVODNPFLUQXRLIPCTXQD");
    IMC::CpuUsage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 94U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2325025547091195);
    msg.setSource(19967U);
    msg.setSourceEntity(236U);
    msg.setDestination(7891U);
    msg.setDestinationEntity(89U);
    msg.command = 70U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NJQBHXRIJMDKMPLJVZNMCPQTSKIQVPDDZKSBLFXHLNEGDKNFQNYAAARRFOYLZGYUIEIESCCKLSSKQOUXDRGDATPSTVJMUEWJVYQWAOYXNVZUOCMWFTNGQFYEWCGEOZPLZEAUEYFVDRNBYMOKCJMPLEZOFHJMIRGGDXWSCSVFXHJRRJUJUGQPUBCRWTBZLFABEICXDWOHACKZHBYHBIXLGFTXVKNYMNODXPSOTUGRLTB");
    tmp_msg_0.description.assign("XINXFYAZLXDHODMRWIZHYQTWGTIAJSYFOQCWGJKMYBUDBPVBNVGCYNFXVEDXMPHAFIQEYDSJJONVHCAAVSMKZJHOOUOPEPYZKYMOPQFKJXGWQIIEWHTAEKXLNZFMGSNKSDCZGSRAJCOUTFGROGPTITQJERHMRUUUHEAOBLLNQLFDEXGRFWFILBRUM");
    tmp_msg_0.vnamespace.assign("KJVXPKRHCNHKFWWMSEUYKOVWELGAULZQANETXSPUEQNRBHJWSGMKOPLFOBRAVHBVXEQIVTEJVDYEY");
    tmp_msg_0.start_man_id.assign("ZBZZRNOAXTMHYICGIPNPSUBMLKZTXFVSDQVLPWRNLGADBSOZJGMDVSWFZGVCUKYRIQKRQCUQWFLWEXYUBMDKIDYQGLTPCLVORYHTDVTUICGQKSNGQEBTSNXDIJWFUVEGALQNKAOWLENHJSTQYBZACAVJUUJDHLXVEADEKYRWXHTFCJOOUOZRXCISCEDPGPIBAVNANMMJZPRMBKTE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NOVQBPGILKOWYFMCCIMXSEAKHRIJDPIOMDIDKQEWXZKCENPHYDVRNUNODREYWTVFGFOKFVMQNSJXJHQHCAHHDR");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("KHCAHUCWCLOLZKQILYHIMILAFMPXJVFLVETKQXSHJONQEYQBXUZZPQSHAGVWEDANLUHDUVNJJSXCQMQBYSWJGNMIVLOENBYEVMWFGCCVHXKUHRJGAJPSKRPZTPKTYELFIYTRXMAWAGWYTSCDONRPHDSVQEDOUBXZJIBFISSQMUNFPKKPGJEWAXR");
    tmp_tmp_tmp_msg_0_0_0.formation_name.assign("EYCJKLDWDIBMCMRQFSHXBRQPZESFXUHVJEZQFHOKOXENMNL");
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("XEZBOBVUBMADYFJWAJNDEXCQBKOBNWBHHBDEUSQKZRIYTAODRUNQPYJSYQGVZKGBMGUIJWVPLWAEDALXNAEMOXUNZWDRQSDZGPWSURXCPIFLYWITTXLPLFETNKVEAMWLSCOHFTKMISZXTFOUAFVNRRJEZCEOYJMQRNIXIBJGTLDHBENWO");
    tmp_tmp_tmp_msg_0_0_0.description.assign("UIWXAAJKRRPVZOHIBJZXCIYWCITWZZXVECUWBRNXOKNYUCYLTMQYXJGMQRWGYDLUHGEJIPPCFCHNPHMHJQDENXOGKLVBDFAWVEYRDXOMTAKELREFODQSGSFNDPBGVLAOFEANZSALVBKPLGNMJFEEFFZWCHVSRFZDQVUEKA");
    tmp_tmp_tmp_msg_0_0_0.leader_speed = 0.08152731585268436;
    tmp_tmp_tmp_msg_0_0_0.leader_bank_lim = 0.9176026256041708;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_lim = 0.20170151132743475;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_wrn = 0.0777089430921939;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_timeout = 6280U;
    tmp_tmp_tmp_msg_0_0_0.converg_max = 0.09596836510102047;
    tmp_tmp_tmp_msg_0_0_0.converg_timeout = 29346U;
    tmp_tmp_tmp_msg_0_0_0.comms_timeout = 53781U;
    tmp_tmp_tmp_msg_0_0_0.turb_lim = 0.6268213190805223;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("YLAHTHKGCXNUSKULXRKQBMRTGFOZPCIDPEFBLRSQRULBUBIKAASDFYMOLTGNGQXMCXFHQRWETJHMBOWCXSWEESONEUVDURLGWEPEJZJJRASTMBJRUEHICZVXYDCGOOOIVBINSPNDKSCWYPWDDIADWTVWHCMJKJQYB");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::WindSpeed tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.direction = 0.9060576410830632;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.7633235285562318;
    tmp_tmp_tmp_msg_0_0_1.turbulence = 0.2445396508213643;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::GroupMembershipState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.group_name.assign("HEMKQZQTNDKSEDQZMINNOJNSSTABGEGTAERQBYMRKBQAIBVXYDVMUGZLPSHOIGJQBLXIGIALCMPTNEQ");
    tmp_tmp_tmp_msg_0_0_2.links = 2415578274U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("TIAWGILZYJTOCCGIQYRRFMSIRBYRMOHWHOFSIXRUMKDNHGAGVHAEPRTSZFDOZNPOWXCCAAYSCLTQLMKPDGXGEVWBTDBXXUQDOBGUCFEHKSALJYDINYFLYMOVNLQSPAJDJFSUHZXJPRCPPZMJCXUMVNHUKSVTBWVEYKPJUXIJEZTOVMZUAWRFQLUKPYFXGUTQQOYKEKK");
    tmp_tmp_msg_0_1.dest_man.assign("AUPCRBMEZCTTABBKAGXFSFEBOSHYWWASIRPHBKODRZAQJMRFRJQYGUPVDROWJHZCCPEFYOMPYWHYWVXUDETILLQXIZ");
    tmp_tmp_msg_0_1.conditions.assign("LPQKDUDFNMZVLBYPIHXUKMDGDHJMHAURNQDVZYLMEFZVEVGGXXMHQWVEWDTUERENUFBTLFNBSYONLWXJGONROFPHLCQMGUIVFSBPAOVKPLOKWYFLJPRGGSABSBNJALUCKNHZYKZNCKQYBSACRWJRTBIWBGONZPAEJMWEUTXILDOSETOYUQFKTXDGPDKCXHQIMRAJBGCSOKEOTJJXWTQRAWHQXIYC");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("TPRBSUHGGERPKBAIMDHGQNLIXQNWAKCAUTNFZPZRYVMVBBDVIIHXVWXUALUYMTX");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("KLLQXZRGRKZXUSNS");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("ERRTGHAAGDYFIVHAQUXWJKGCNEWIQXFGIYXNLEWJANCGVPDJTHEKFETLMRHVUSAVUWFJQFUYDBKPTMYCOJNOXDWMTRGPQHNRMKFLTVOZDUDZLIMKKNBWDBAMIMXHXLMNKRPSOIVELVBSPPKVPUGATHBVOOBUOSECJSIRYYGASSDUIDNVARZWFMAWFBGXSEJBPZNFQJYWISOZRQUHC");
    tmp_tmp_tmp_msg_0_1_0.description.assign("XPWQEVPPILIJREDJMCNFKWGNPRASLKTWPGIABIHRWYJLDPOZKEHSCEMECZVBZOYDSKJFEBFXXZUVVKBBHTSASSYUQXFTQNGNTIWCOCRLLUHOABGTAQEJGNMWIBJEORKDQXCYCFOVNALVQHDGCUMCSJDLPQLMYHASVOAOGDIJARM");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.09953641466802599;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.9893245112204165;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.4038598395703069;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.09808099504806445;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 31298U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.9493076758092354;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 37302U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 19197U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.6254950321306693;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("YRTTCFTIMPDOASYCJFKGCCTBZVMREEGBLAEM");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EstimatedStreamVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.44767627768726315;
    tmp_tmp_msg_0_2.y = 0.07839534118881542;
    tmp_tmp_msg_0_2.z = 0.483820977673049;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::EmergencyControl tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.command = 31U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.plan_id.assign("QGFFNMKWZASAJQYDCTHXCYCVGNEVOPOJDEYOOMSQAUOFXQZITKXJYUDABPMWEIUKIWIYFK");
    tmp_tmp_tmp_msg_0_3_0.description.assign("KNCEUQDDBGFRGAFRUJRBUQPAVMCHNNFXWKNEORSPNQUQGWOSOUJPQCHTBTRKQJXUQJLSDNSOPBTJALAGGMZWFDSQZNTJFPBOEZHZEIPVOVNGMTBCXKZIZDYJEVMMEUTYMHKDJYWYSHKRIEXBBSMYYSFLLUAKKRIPVOWNOGC");
    tmp_tmp_tmp_msg_0_3_0.vnamespace.assign("VMHQNWGQIYIPIPZBKYDMFWEZVKDKCESYJUUROXGYPJGJNAPDQLJUJ");
    IMC::PlanVariable tmp_tmp_tmp_tmp_msg_0_3_0_0;
    tmp_tmp_tmp_tmp_msg_0_3_0_0.name.assign("LVWFNCFTSQSOZMKH");
    tmp_tmp_tmp_tmp_msg_0_3_0_0.value.assign("POUEZMIPYHFHLSAGAFTGXISOTQCLPLEQNQIRWKYVXJVVUUOUAMSOI");
    tmp_tmp_tmp_tmp_msg_0_3_0_0.type = 162U;
    tmp_tmp_tmp_tmp_msg_0_3_0_0.access = 207U;
    tmp_tmp_tmp_msg_0_3_0.variables.push_back(tmp_tmp_tmp_tmp_msg_0_3_0_0);
    tmp_tmp_tmp_msg_0_3_0.start_man_id.assign("GYFHLQTUJBYVKFQVHBYQEWDEXBXADPLIGRMNVVTMLHYSECLVORULIQ");
    tmp_tmp_msg_0_3.plan.set(tmp_tmp_tmp_msg_0_3_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.8452747438120456);
    msg.setSource(48766U);
    msg.setSourceEntity(206U);
    msg.setDestination(38212U);
    msg.setDestinationEntity(34U);
    msg.command = 72U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VADTCSEQCHNDENMMSQXFAAVMAVVLEBSCXPTKPGFNROQIBKUFLOBBPWPRCFJUIQOZMHSLEZAXOZPUTDXLGQAWTONEVMFWDBRNKJXJYTCZODWSQRNBBGFMJWYDVGHEDDCQJLAGRAHUPQWHBRKGEHLGXIIAKYHCSLCZEMJDFDRUKUVFNTTZUJGRLPVIIALOJWYOZSYQFLHKZXPWZSTYUIZWVMXXXGJKCGHQBITIHYJMOUYPYFESP");
    tmp_msg_0.description.assign("UTNIAOBXKWSKLQDPZCHDBHZCMNYVEIDWZYTTTUHIMGIEIKUAHXJBSBBLQVJHIODWYJFMRHNBKCAVEWOMMLITKFCSQGANGLKPKTYJOPLRSTCJVUNOYMULOXWRUWRKUVSHGRZCXGOISJLPFLDZQAETAVDHNQZJ");
    tmp_msg_0.vnamespace.assign("YVQQVTIXTMTGWUKBKEMWUDMAFWYXNVUYCSEVZVHPFOZBFJCRXIHFFBIWZFXAEQVKKTHSEYZBYBALPPRRGDJGTHCIHGVZHXDBHUTSKNLHRORSEQJUUEEIALCUXZOBUWNQGWRCOPHSLQLDJNEDAKCWDAQPGOEOMNGBOLNBF");
    tmp_msg_0.start_man_id.assign("PSMBDAJBACVBGWLXRRHIGIKYAKURJBPEBPEYMNYYIQUFZGMWCDJISXEHNOZDQCHUZDBULXZSVJLVFRYUATGGBMSBDARUWTGJXORRUFYILWXAQVNKPGJFAQINPRLSSLBFCEEEDPZDDCNHOJKEPKQMQYWGJAQWSSHMCOWDMWZKSJKHKIHOEINOIVHTXLOQT");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NJMWBPIHJNYEAXITAAYSBWIWJUTSKTICOTVNWQTVBPLRWDQVKVRHDXOQGJWDZPBYKORAUOVUUGTBMCBMUHDZYFOOOIKLYO");
    IMC::Land tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.25398946203470363;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5595704475784329;
    tmp_tmp_tmp_msg_0_0_0.z = 0.28083294801834446;
    tmp_tmp_tmp_msg_0_0_0.z_units = 135U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.34576407954473065;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 125U;
    tmp_tmp_tmp_msg_0_0_0.abort_z = 0.2680947712468684;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.05200253608815664;
    tmp_tmp_tmp_msg_0_0_0.glide_slope = 199U;
    tmp_tmp_tmp_msg_0_0_0.glide_slope_alt = 0.7961506590600846;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NSRJCMFAEZOTROZXZPQGUHEAKSINFHNPFJLEKXTXUED");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::AdotDebug tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.dt = 0.09166876779473232;
    tmp_tmp_msg_0_1.k_d = 0.04713728037082643;
    tmp_tmp_msg_0_1.range1 = 0.19089213767840008;
    tmp_tmp_msg_0_1.range2 = 0.5347197749147704;
    tmp_tmp_msg_0_1.range3 = 0.22626713436397305;
    tmp_tmp_msg_0_1.range4 = 0.24774499844772713;
    tmp_tmp_msg_0_1.u = 0.056207948221767334;
    tmp_tmp_msg_0_1.v = 0.8223377902686468;
    tmp_tmp_msg_0_1.w = 0.9877597808287162;
    tmp_tmp_msg_0_1.phi = 0.5434960859684262;
    tmp_tmp_msg_0_1.theta = 0.4623112369300345;
    tmp_tmp_msg_0_1.psi = 0.03870566484637117;
    tmp_tmp_msg_0_1.adot = 0.10795143572738208;
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
    msg.setTimeStamp(0.9296780697122955);
    msg.setSource(51409U);
    msg.setSourceEntity(162U);
    msg.setDestination(61329U);
    msg.setDestinationEntity(120U);
    msg.state = 63U;
    msg.plan_id.assign("HSCJOOFVMXEMRMSPHVVFRODQRJBFWOERZPKQUGDIJXIQLVCGOQPZZ");
    msg.comm_level = 81U;

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
    msg.setTimeStamp(0.7780535229711152);
    msg.setSource(30245U);
    msg.setSourceEntity(234U);
    msg.setDestination(27369U);
    msg.setDestinationEntity(187U);
    msg.state = 34U;
    msg.plan_id.assign("LAQQIUVULIOTQEPVMFMRYMWKPLRGZNEOLZOTQYASKHUJBGEEPFNXRIYGZABEHGVCURYBQSXXCJODASPWIRVIKBOMKHJRHBMDEWPBHXDRDHJEZMWVFABFPNIPDPHYHCZTKTAJCACYGMZLEKTXYIIFJAWHOPXQJWAZLZWQTCVYMDUALNCUMMHZEWDFYGGQXSSKVORYNPBFUTVDOKT");
    msg.comm_level = 11U;

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
    msg.setTimeStamp(0.038009983069794195);
    msg.setSource(42297U);
    msg.setSourceEntity(76U);
    msg.setDestination(58513U);
    msg.setDestinationEntity(104U);
    msg.state = 143U;
    msg.plan_id.assign("VYOKHZIXLCDXSYLUKLDLTINKQEHDWHURKJFZKRVFTRGMFMAJUSCJKNYEWRLXVJGCTFAACFPPLUTQMRVDPKWOZLYVNOZVJZFBUBFP");
    msg.comm_level = 94U;

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
    msg.setTimeStamp(0.44232523908457777);
    msg.setSource(49322U);
    msg.setSourceEntity(13U);
    msg.setDestination(34592U);
    msg.setDestinationEntity(224U);
    msg.type = 39U;
    msg.op = 122U;
    msg.request_id = 29319U;
    msg.plan_id.assign("KPKTCCTDTHHNSOIFNEUOCRIKSBWPCRPOWZEADPIXICFOOEFMFLJKZHRJVBVJLWKFQUZLKBDUXHGYYWLUEYHIBHLDFFGJBPIDNLVAWBNXVAAZZLUJEUVJJEIYYTLZZMPRPORDKXRVUQLISVXTZHHCYNRGJNTEFVDSCTRRQRCNUXWVFMXKAPGOWQSGOMAMULYCWQAGCSJDIGMXIOGMKJHKBEPYYGDZUEBN");
    IMC::ReconDesiredHeadingAngle tmp_msg_0;
    tmp_msg_0.value = 0.9950610896678417;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RVQBVWRTRCXNKPMJISRMGTLEUGCCNXZTJHPJLPLWNSZXQULROSHPOWCYXVDJCZQDTGGGIKDYZLWQREEDTEHGTIAQHSELJMIBXIFSIJFTFMY");

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
    msg.setTimeStamp(0.5208240667325849);
    msg.setSource(55637U);
    msg.setSourceEntity(214U);
    msg.setDestination(27782U);
    msg.setDestinationEntity(237U);
    msg.type = 73U;
    msg.op = 243U;
    msg.request_id = 28535U;
    msg.plan_id.assign("KCPBWMCEAGPJBEDOHKGXHFKULAQFBOTVIZKYZF");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 224U;
    tmp_msg_0.time_remain = 0.42483415936541447;
    tmp_msg_0.sched_time = 0.13158316591423314;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DEMSNNDJWOGBDGBKOJISYJPZBQFJJIWKWAASZSDCUEZTYVACBQLDFMGKHKTAOZRHFEPJRNOGQBGGOUEFSVAVQI");

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
    msg.setTimeStamp(0.34447911205391246);
    msg.setSource(50033U);
    msg.setSourceEntity(149U);
    msg.setDestination(34312U);
    msg.setDestinationEntity(52U);
    msg.type = 198U;
    msg.op = 33U;
    msg.request_id = 7543U;
    msg.plan_id.assign("LCKYVBDLAEMAZRGCZPUAPFNQLGQBEZRVGSTXVVPDQYHGCOCNNMGBYQWUKFHNQKQLWZJSWVYUTTCOJBMEMWEDZYKMPHVGUDIJPXLXLPMSDVHBYLZDWHBFNFGRFTOZHZQBUHEYSFKWBNLYJKXIVGMOROBGQXUIPAXSMCJNTUIFPFTZORECAWVRXOYQXTSDKDEJBHIDRJRLWCPXASUKHIZYWMMDECJFNUHESJRO");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 3247603578U;
    tmp_msg_0.value = 96U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JYHMDSXDIQVNXHQATHSCWZDRRTCZPGWSZQYHYOBGYNYMRLGTCMZEMADOSLYHMCEUWXUMBPLRHGIJRBFNVKIUIPBGQCMEWIFLFWVLTHTJWCHAITVYFKVX");

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
    msg.setTimeStamp(0.9781754723213281);
    msg.setSource(4244U);
    msg.setSourceEntity(132U);
    msg.setDestination(14510U);
    msg.setDestinationEntity(64U);
    msg.plan_count = 38574U;
    msg.plan_size = 2923721277U;
    msg.change_time = 0.6430496818738812;
    msg.change_sid = 51996U;
    msg.change_sname.assign("GWAIHWZXGPJSKVPJSBHYRJAIMOOUWEIWKHMNLGAQOKTJJHJDHDYFBFNVYYWEAAMNDJNMBMWAGILQHAUCWESNXVOVLYXBRSTBDYRGKVXPLDCTPIOFKUUKBLIAAIPCMSRLEFBTMKKDKUXSDVVEKEZCPNSZJPROPCZQTGOZTLFOWMXHBFMUYFHYWVLZHRDQQCXUZECENCRXQQESNZDYUDORTRZRL");
    const char tmp_msg_0[] = {66, -95, -70, -63, -122, -45, 60, -81, -72, 35, 86, 49, -58, -61, -40, -75, 55, 107, 64, -44, -39, -71, -88, 116, -87, 47, -124, 46, 28, -89, 37, -34, -35, 102, 29, 72, -29, 27, -12, -10, -44, 83, -90, 110, 125, -94, 69, 66, -64, 77, 103, -26, -18, 72, -32, -80};
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
    msg.setTimeStamp(0.5933936015160693);
    msg.setSource(50403U);
    msg.setSourceEntity(193U);
    msg.setDestination(5648U);
    msg.setDestinationEntity(51U);
    msg.plan_count = 14909U;
    msg.plan_size = 1675094234U;
    msg.change_time = 0.7721071938104177;
    msg.change_sid = 49140U;
    msg.change_sname.assign("FRPTFCGCCAVUJURAHNEMTBKBLHHWEXGCASMDNYTDWITROTYAMFVGXCKAWGOMCXWYSGMBKCWXXXZBSALWMHXJQPUQMHRPZRVUFOVOFVUUBLJNEILDRVZKLIJZYDSKMZQKBGKQERPLTGVUFHFJQYNXZYEXNDSSOWEIOIBMQELCGDJEEDOWSNSQHIOPOPGJJPPHZWONWPTYPTIENBJZLUVHITJYZMDDFQUANQZFKACULCLTGQHRYXDRY");
    const char tmp_msg_0[] = {124, -72, -109, -80, 47, 27, 40, -107, -45, 59, 5, 93, 116, 59, -80, 34, -87, -108, 58, 123, -118, -63, 4, 56, 67, -92, 35, 46, 2, -40, -121, -90, 36, -5, -105, 111, -113, 23, 87, 53, -97, -123, 9, -69, 26, -43, -36, -64, 26, 86, -101, -70, 62, -52, 4, 12, 52, 120, -7, 50, 46, 115, 57, -103, 61, -61, 109, -40, 120, -119, -123, -71, 20};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VFRBAGKPSEHVFSMZDQKPQQBVPNVCNKFPUJKLLJQMAISGGWXVVUTYOEYPIWAQDERIHJVKAOCCUOWCUERFPECIGBWFTJTXTRLPNKYWKJLEGUYCNNFIZARFLIAZXEBBGUXSJZTATGORZJIDVLKDQRYDGZDOT");
    tmp_msg_1.plan_size = 4277U;
    tmp_msg_1.change_time = 0.9287265617796817;
    tmp_msg_1.change_sid = 36091U;
    tmp_msg_1.change_sname.assign("MBCHQOZYPYSQCJNFUUHNJKAGPNMFMZWLTCEFQEJXRXERQNMOUMYPLSDUAQGSOSKSVNXQDBZCLYYTRSWXZDYWXWOGRSEVXWKJJOHDXWKLMBKVGFRZINIEULREVCEQADNMTIUXHKDTZNMOGQXPPHONKBPWMGVHDADGCG");
    const char tmp_tmp_msg_1_0[] = {-57, 2, -77, 50, 12, 27, 102, -92, -70, 4, 57, -18, -124, 87, 50, -120, 73, -25, -121, -56, 78, 21, -1, 39, 16, -74, 41, -109, 53, -81, -36, 58, 116, -60, -37, -128, -94, -7, -54, -11, 35, -84, -80, 108, -71, -118, -40, 58, 48, -104, 69, -55, -43, -5, 39, 120, -117, -16, -90, -10, 75, 9, -23, -117, -51, 111, 101, -58, -50, -38, 69, -13, 44, -40, -60, -117, -95, 27, -114, 78, 14, -126, -95, 72, 62, 31, 17, -45, -86, -55, 88, 19, 41, 93, -21, 122, 60, -124, 17, -118, 70, 104, 92, -29, 39, -23, 64, 93, 88, 47, 47, 115, -31, 105, 68, 111, -25, -107, -63, -106, 11, -52, -96, -32, 66, -23, -26, -58, 80, -8, 110, -71, 87, -110, 35, 34, -50, -101, 74, -16, -84, 81};
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
    msg.setTimeStamp(0.3831673060317349);
    msg.setSource(58407U);
    msg.setSourceEntity(221U);
    msg.setDestination(60648U);
    msg.setDestinationEntity(202U);
    msg.plan_count = 31714U;
    msg.plan_size = 1028074908U;
    msg.change_time = 0.053173502990644494;
    msg.change_sid = 37070U;
    msg.change_sname.assign("DHSDQZYBIECZGOMHNFNDRZMZCBIZDXLGAOYRLDTZTRVVJHERVOWUGIBZHLFCWHEGPDBLAHTMQURIODKSOXLWJGIJBZLSPGXLBOMSKMXJUMIWSXTFCIMSCJYYNNNEQIFXBQXTMGVNYCVPSACNTEAQDUDOTFQUPBQUYWCSPAGUVUWFDTOPLJWYKPXPVGVBHTRFEJQGMKLYRQJAKKRFM");
    const char tmp_msg_0[] = {48, -123, -64, 90, -22, -103, 89, 1, -96, -105, -66, -102, 77, 52, 33, -33, -87, 121, 11, -33, -98, 118, -39, -42, 45, -1, 3, 10, -127, 97, -122, -3, 18, 25, -78, -112, -33, -6, -28, -56, -115, -11, -14, 52, -69, -58, -51, -44, 91, -91, -73, 5, 34, -101, 87, -6, 90, -10, -123, 94, -43, -39, 99, -114, 59, 72, 105, -96, -1, -101, 47, 113, -59, 105, -52, 27, 67, 80};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UJNJVOSNLTIUYEQDXVYOGPGJDJWGRHSHUQNXXIDVIVCMVXRJLVANTXHKRDXFZVVXCQYNIZLILGTOKGMSOXTWWUAEWNHBFEAQDBEBYLAMEQYSJGTCBVZBPHKCDSILMRRLODNHBYPITRCDYZURMMTLFKJIBGJMVPCFWBBCWKXAQARSCZNFZSZBLPDECMS");
    tmp_msg_1.plan_size = 42296U;
    tmp_msg_1.change_time = 0.8396064772062909;
    tmp_msg_1.change_sid = 65040U;
    tmp_msg_1.change_sname.assign("ZQNNQYVGIQTOEWSCNXGWRAKGYOPUTVRROAXDEPKTUQFRTYFPCFCUBLVSUDAQKLKXVEHJXMGNZMQIFMMBYBNKSEDPQITAXCHEAWPSRYQJSTFZKNBXFHTZHJIROAZARLHJZCFIPRTSCKHDGXBDMAWWXNLSGUOOEMTBSKIHWOWEPLKOGVKNCSGWLZMYNUIOHGYZLJDBDVBYGXCLIHYFCVFJEPXPTYDHWRBJLPSIZEAQUJQMW");
    const char tmp_tmp_msg_1_0[] = {-66, 83, -84, -74, 88, 113, -44, -22, 117, 106, -68, -88, -81, -57, -72, -76, 6, -52, -117, 52, 16, 112, 20, -67, 118, 57, 52, 124, 121, 13, -12, -98, -105, -38, 87, -14, -111, 83, -90, 84, -118, -73, 18, -75, -100, -87, -95, -56, 105, -77, -85, -113, 106, -64, -59, 112, 103, -113, 64, -37, 34, -94, 59, -62, 125, -78, -16, -30, -109, -19, 115, 120, 13, 55, 95, -43, -90, 27, 106, 120, 80, 58, 60, 106, 1, -95, -70, -125, -109, -105, -39, 49, 30, -17, -123, 113, 123, 4, -97, -63, 34, 79, 116, 54, 74, -95, 93, -113, -127, 11, 119, -71, 13, -96, -54, -58, 107, -76, -41, 36, -92, 0, 86, -72, -6, -128, -27, 15, 114, -10, -35, 90, 102, -87, -118, 61, 85, 103, -72, -39, -112};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6501097182473047);
    msg.setSource(43820U);
    msg.setSourceEntity(117U);
    msg.setDestination(35012U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("IMLEHKGZCGQSVGFZDWYUPMXFTFTRNCYPRNQIROSZQRLEHHNWJGJLLXDXM");
    msg.plan_size = 51087U;
    msg.change_time = 0.931891482436364;
    msg.change_sid = 19982U;
    msg.change_sname.assign("NAXDMZECRXGKYASBXOQTTQGQMDSTLSKPSUEBNSBEJIKKT");
    const char tmp_msg_0[] = {121, 92, 33, 3, 79, 19, 82, 111, -106, -40, 105, 29, -24, 15, -128, -3, -110, 51, -66, -18, 107, 42, 123, -108, -95, -55, 54, 21, -121, -26, 66, -118, -44, 38, -12, 111, -118, 110, 26, -16, -82, 28, -27, -107, 59, -97, 64, -78, 51, -97, -58, -86, -66, 90, -21, 5, -95, 62, -73, 112, 103, 42, -16, -3, -99, -124, 36, -35, -82, -64, -52, -24, -22, -42, 14, -77, -65, -10, -80, -96, -85, 26, 100, -3, -2, 39, 107, -12, -95, -39, 92, 106, 79, 66, 85, -43, 0, -53, 65, 48, 25, 57, -44, -58, 63, 100, -56, -85, -43, 49, 124, 4, 14, 63, -22, -124, -112, -57, -99, -16, 110, -99, -102, -98, 69, 119, 63, 35, 66, -78, 76, 56, 77, -121, -90, -100, -108, -7, 70, 14, 9, -39, 69, -105, 30, -87, 4, -16, -108, -35, 126, 79, -122, -88, 19, -44, 27, -101, -5, 95, -118, 106, 86, -13, 77, 24, 31, -63, -16, -29, 70, -79, 96, -24, -51, -21, -46, -123, 102, -80, 19, -66, 105, 66, -86, 14, 63, 69, 22, 108, 37, 85, 54, -12, -43, 126, 22, -81, 112, 93, 48, 24, -25, 123, 77, 70, -72, 26, 64, 54, 60, -28, -104, -60, 7, -41, -6, -6, 48, -22, -113, -106, -107, 72, 9, 114, 118, -92, 1, 79, -14, -17, -93, -127};
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
    msg.setTimeStamp(0.27919845519127995);
    msg.setSource(51331U);
    msg.setSourceEntity(148U);
    msg.setDestination(46306U);
    msg.setDestinationEntity(203U);
    msg.plan_id.assign("KTGCIAJCENNZKOLXIBYYCEQBQPGGIMIIAGWIAOBRTJVRYMVSACYAJZRAQHTPEZTWMHUUFUEEMDYDWR");
    msg.plan_size = 2587U;
    msg.change_time = 0.5356200205588716;
    msg.change_sid = 53640U;
    msg.change_sname.assign("BAVYWGGPECKGSAUDKOEPCZCTKNZVROKQYQOXNDIMNZSQMDMNHUSZLVHTDIZOZXUDVSHXWHAEQFZPCPOTGREWPPDLDQVBLLROXFJLNQMTAXJYTVKVCERBJTBMRIBYYWDYHCAGOKPJMJMSWVWGWHUEYAWTJYAVKUQSUXIOSNIOLXDJTGXBSBUVSFZIKCUOARFTAHEFHFQIBXKTMLJAGFNESLRXHIUMNCFQLCWUMGZWRYJPDNLI");
    const char tmp_msg_0[] = {102, -54, -71, 72, -100, -125, 95, -50, -122, -99, -95, -120, -110, 91, 28, -26, 59, -99, 103, -127, -58, 13, 33, 97, -12, 107, -112, 79, 55, -76, 43, 85, -32, -120, -78, 64, -93, -45, -39, 87, -85, -54, 54, 20, 27, -40, -67, -120, 9, 10, -16, -84, 74, 108, -14, -42, 90, -91, -44, -13, 81, 42, 14, -31, 66, -115, 123, 24, 109, 29, -80, -49, -86, 74, -99, 25, 35, 123, 94, -115, 54, -5, 86, -127, 106, 98, -98, 105, -78, 110, 122, -75, -92, 79, -29, 17, -33, 114, 107, 4, 66, -41, -25, 126, 73, 65, -94, 28, -103, -76, 43, -74, -9, -78, 87, 44, -76, 126, -2, 62, 112, -124, 115, 10, -117, 50, 124, -115, -125, 13, 96, -64, -92, 24, 56, -34, -86, -49, -102, 25, 75, -105, 62, 67, 57, -4, 99, 50, -49, -61, -91, -88, -14, 38, -29, 115, -88, -118, -34, 106, -122, 100, 106, 110, 27, -14, 75, 89, -89, -8, -41, 122, 125, 118, 47, -44, -105, -9, 32, 87, -44, -125, 121, -102, -14, -19, -26, -85, 6, 112};
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
    msg.setTimeStamp(0.08524550510640683);
    msg.setSource(54105U);
    msg.setSourceEntity(20U);
    msg.setDestination(29146U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("LKHFCRYJIROUQEEETUOZYUINWAD");
    msg.plan_size = 54310U;
    msg.change_time = 0.07817435194724442;
    msg.change_sid = 65053U;
    msg.change_sname.assign("RVLKEWJZCFRFNPNN");
    const char tmp_msg_0[] = {-103, -98, 104, 63, 36, -8, -78, -87, 89, -113, -61, -31, 76, 39, 70, 120, -104, 50, -88, -46, 91, 80, -83, -85, -113, 63, -63, -76, -22, -75, -16, -90, 101, 126};
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
    msg.setTimeStamp(0.851049037805401);
    msg.setSource(24160U);
    msg.setSourceEntity(176U);
    msg.setDestination(54000U);
    msg.setDestinationEntity(108U);
    msg.type = 13U;
    msg.op = 212U;
    msg.request_id = 17862U;
    msg.plan_id.assign("IAABJQWTWMPPTIP");
    msg.flags = 34714U;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 160U;
    tmp_msg_0.text.assign("TPXJIJILTXKNCQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ALCRPQHBDSTMMLWWUOWQIIUSFNJKWNEZCMWHWHLGXHEMXGKIAZTGYQTPTPOXQSOBCBYAJQDRGVXRJOKODCHTJVNKPKLAJNSZBVYQRWJZEPGOCUHBXNCSYCYAOJUGVSNFPHJUYEGHEIEPBRQXJNFNGERFVNREVTTEZXRVSJPFZUZSZRQT");

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
    msg.setTimeStamp(0.2660137502867882);
    msg.setSource(204U);
    msg.setSourceEntity(228U);
    msg.setDestination(12666U);
    msg.setDestinationEntity(81U);
    msg.type = 178U;
    msg.op = 62U;
    msg.request_id = 60027U;
    msg.plan_id.assign("BOBBLXUEEXNCRCPCEHORKBKKZFXTRBADXFPJWMZJRDVLTKISHWNQJDKRZQEVSWFVWTSXPMECANGTPFIXOPGUQCEFJESZLDQVFVHKYPICYUMWQGYHIPBPWUYRNHVNDOHGIMMOSMQQZRKIHTYYNJSEDRGIGBOCMTHENJLLOBMYNTFOXSALVLGMSWZYGIXAFXYDKACSZKLDNAUPVEUOPZIOHLFATGAAUCAQJZNDGTWSZRUYBWVK");
    msg.flags = 11547U;
    IMC::SimulatedDynamicEnvironment tmp_msg_0;
    tmp_msg_0.environmenttypeid = 141U;
    tmp_msg_0.id = 160U;
    tmp_msg_0.x = 0.3119114554491894;
    tmp_msg_0.y = 0.978968277934626;
    tmp_msg_0.psi = 0.6471181647545361;
    tmp_msg_0.u = 0.7129587947020761;
    tmp_msg_0.v = 0.9051745353095999;
    tmp_msg_0.r = 0.6181975210885503;
    tmp_msg_0.x_auv = 0.059676990746358904;
    tmp_msg_0.y_auv = 0.3938612984822102;
    tmp_msg_0.z_auv = 0.1991986351189572;
    tmp_msg_0.phi_auv = 0.09164654240860048;
    tmp_msg_0.theta_auv = 0.7249838707761821;
    tmp_msg_0.psi_auv = 0.6914455964780442;
    tmp_msg_0.u_auv = 0.17909600874659937;
    tmp_msg_0.v_auv = 0.9618602954625566;
    tmp_msg_0.w_auv = 0.3111515627492727;
    tmp_msg_0.p_auv = 0.8297999964203975;
    tmp_msg_0.q_auv = 0.8355786848599139;
    tmp_msg_0.r_auv = 0.746314211106721;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JWEQWYZSKTVRKYKWQAYOGIAGJVYHMUIFBVAPQFNDFLDFDSPXTKCNWJWWYPUBLHUZGINJOOUYCSZMCYJUOCUXKSNOADEARMLGGZPTRTEBJPNBOBNRFQKBKUTQZAOJARVQHCAHRJSIDEZPEDMQYNIOKLGDGSDSHBTCYPIOXLXDXRNLTLYEIVCHHICFXQTMR");

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
    msg.setTimeStamp(0.6878396932368134);
    msg.setSource(38002U);
    msg.setSourceEntity(6U);
    msg.setDestination(41262U);
    msg.setDestinationEntity(68U);
    msg.type = 57U;
    msg.op = 248U;
    msg.request_id = 41523U;
    msg.plan_id.assign("EUJSOALLKGUNJVEEECIZDSIKCPMSZAJYBJZLTDVJSRNYFZMLKXBQKCAFRHUQETGHIWKXNQNDZKZLVOHPWYAGBSICLITGGJOVLWRTMODRYBGMHEYOPCEQXNRYPBUCVTYAFFEXPJRPUANJFNQPZBSZWFMDNJBVAMVFGCHMTDXXBEVQTIAWRRUUZQCXUKVSOMYLSXWKRFWHDAONTJFMDHXIDY");
    msg.flags = 15104U;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 34U;
    tmp_msg_0.htime = 0.28617322360655895;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 127U;
    tmp_tmp_msg_0_0.htime = 0.325193602474525;
    tmp_tmp_msg_0_0.context.assign("UGPCYSQYHRDEUCIDNSVI");
    tmp_tmp_msg_0_0.text.assign("MJUIEKWVTWDQCCYDEWGANVNNOS");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NRIMEVPSDJYNZEUBKJROUMOUCCWGWAXXIQJAXFHEPUHHSFTTKGSPEYGYXRBWVMWLHHKOYIVTVTYRATJSKVNJCC");

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
    msg.setTimeStamp(0.3314364901481165);
    msg.setSource(45129U);
    msg.setSourceEntity(108U);
    msg.setDestination(23542U);
    msg.setDestinationEntity(213U);
    msg.state = 246U;
    msg.plan_id.assign("DTIOQPIWFBUEBSWXBWHRAWLMUTHARDNV");
    msg.plan_eta = -2060875166;
    msg.plan_progress = 0.8259136087392268;
    msg.man_id.assign("PVQVFAFBUDTJNXFDMVTYIEMIQVHXRZSPLIQXJRRH");
    msg.man_type = 58224U;
    msg.man_eta = 1677937231;
    msg.last_outcome = 138U;

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
    msg.setTimeStamp(0.28184874783961267);
    msg.setSource(62668U);
    msg.setSourceEntity(141U);
    msg.setDestination(21240U);
    msg.setDestinationEntity(190U);
    msg.state = 56U;
    msg.plan_id.assign("YDWBOTUQYMNMOKOFMMDNECPCQQBBSJDWAGFZZCFIXWOVNDAFTZNLUIXYXGHFRJLZWBEJTWSNBUVTTPQBFREPQGJPHDGYXIRAZACXXXECVHAXIWDOYETAJLVGZMRCIXSRGBQZOCIL");
    msg.plan_eta = -1476152066;
    msg.plan_progress = 0.7825357874845069;
    msg.man_id.assign("IQLPJUDWKYBEOQSPMBPNKHHVXGKGVXYQFJIJBCJFACILRUWGTMF");
    msg.man_type = 59533U;
    msg.man_eta = 412229061;
    msg.last_outcome = 214U;

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
    msg.setTimeStamp(0.07655715533680008);
    msg.setSource(43801U);
    msg.setSourceEntity(209U);
    msg.setDestination(48797U);
    msg.setDestinationEntity(133U);
    msg.state = 68U;
    msg.plan_id.assign("HJQPJTAKBMYMLXPCOIJVQQDGPHHZG");
    msg.plan_eta = 1230100675;
    msg.plan_progress = 0.340088992060561;
    msg.man_id.assign("PVBVUWFPGOEOTTORBKLVAYECQYHDMCUZOPWRGIFKLIIRISWTZUXPJXAMIIFRGCSDVGBNEGSYMP");
    msg.man_type = 7073U;
    msg.man_eta = -317939665;
    msg.last_outcome = 206U;

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
    msg.setTimeStamp(0.8752964784185111);
    msg.setSource(38950U);
    msg.setSourceEntity(98U);
    msg.setDestination(43028U);
    msg.setDestinationEntity(79U);
    msg.name.assign("UGSZCJVSVQXBZFCTUGTOESZMSKETNMDNRPBVLQYTZYIYHBTZCFKVUMTLJBWMAPDRHLDVIXASXCVDPADEHJWUCMLWYFHXOGKJJSIYLQUMATNEGYXHNDEJGBCQQLIGITXYKPFG");
    msg.value.assign("JQSMQGILCHNQXKLPYUFPZGOXWAJKPEBYVHAGFGIGQANLKRCXWEGIHCVASXRUDMMTQUULOSKNSOCLFBHUPOTVILTTOUYAEWEUNYREZKBDKVZTGTMMHMDDCQXGLOVZLVSFBYSVPZAIRJPOYPHFBBKXWRRFUJMCWRNMMKHBFNPZIBHKHQSDNOYWXJDOZMJCSUQWPYTQXIUKAZIVFPEETJDRSNTLFZEWGAFIJWBLZOWCVQDEXSJIAHBNECCYDTR");
    msg.type = 176U;
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
    msg.setTimeStamp(0.008368785325079342);
    msg.setSource(16161U);
    msg.setSourceEntity(7U);
    msg.setDestination(28265U);
    msg.setDestinationEntity(78U);
    msg.name.assign("MSMJDQJYYWRWCIGBIOANCBGLGAQIGCICDOMAUUOIOSTIVTPHZYSAFUARQENJWQTEXJGUFQKPXD");
    msg.value.assign("KZNGQIPVJTJXIXDWKNGYBEIQJHWHZTAJFGUDELEGJQNFVWRCEYMDVYSTWRCWKZUXXOBRKYBHAOABRISCRGJYFDKODFSOTXNNULEUUQSZOBNCGD");
    msg.type = 184U;
    msg.access = 201U;

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
    msg.setTimeStamp(0.48956403293311634);
    msg.setSource(37249U);
    msg.setSourceEntity(8U);
    msg.setDestination(47968U);
    msg.setDestinationEntity(11U);
    msg.name.assign("CKYQYQPLDGYWCGIZNUFGGSVJTHPSIRTLLWZBARJHDRCUUGQLINBOYGSGKJTFXICLWOZBIAWVNDLOFDLIMDDNAXAKMREWKROPRYLPAETKCQEKTTXQMSUUEXWEKMTDVCSQNXXUSJJEMNJRDYLVMPFBWFPZMZDFLNPBAJNKBJWDCSTRCXMNFMHCXZTGJHBINQTOXHQEASAI");
    msg.value.assign("EMLXCUCSHBMAXGTXMGASERHQIJKXPTARFIYKZGWQXJTKESALBDFSJBTPVIELPWAUJXKUPONYMPTSHOUMTKZECDUQMZDKAVTKJGTUEWFNHYIXMBWPJLAH");
    msg.type = 209U;
    msg.access = 140U;

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
    msg.setTimeStamp(0.39492988405648566);
    msg.setSource(23494U);
    msg.setSourceEntity(20U);
    msg.setDestination(51407U);
    msg.setDestinationEntity(228U);
    msg.cmd = 115U;
    msg.op = 171U;
    msg.plan_id.assign("UZMTALVXDTYRHMAVMVWEJBBWUKBXAVRRNGMJBFWXFEPZXXLARWESICPRHEDYKJQZSVJWMLGMOFZUGOISPKFWDXZSQJPOGQMTNXPKYBZLPZIUNBYARYSWQLRLVLO");
    msg.params.assign("RFKZDFEMDWNKAEISMYVNTHHKNYDTVIULEVNCVHQIMOPQJKCPUUOSRRZGQHDILTCZBVQQSOBFBKGUYUBPZJCJOLY");

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
    msg.setTimeStamp(0.8049713584174353);
    msg.setSource(22704U);
    msg.setSourceEntity(140U);
    msg.setDestination(26806U);
    msg.setDestinationEntity(117U);
    msg.cmd = 112U;
    msg.op = 246U;
    msg.plan_id.assign("GMFIDMSLPRTZKQRGJYZASBYZLQGQXOTNUWQXBPOKSNYCQMDRESZHXBMLPQPXEQYKJHUZZEKAFJJDNZKWHDTSYORBBHFBABJKMNYCNNOBANHQVWFVXDEPIJIGTIRRACDURWRCPCIUOUMVRXOVTLCSVUEISFNKJLRFPNALUKGHWKLDLWYAFYQTTOETDXO");
    msg.params.assign("IUOCPJIWFRAFRIUCNUUFEXGIKJZUEJLEXJQAYMYJKAYVJJSDRCBGWDDBNHVEJWZDMNPSZWPKSCBCMVBETXFGXYVHQKCSTTORCXXLVQVULLYNRGJGAKRBKEDHLMKPXAZGAPDIHGDZYWZEGHOPBDVTTNFUANTOYLFSSSBEGMMAYMQXJLYNFKOP");

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
    msg.setTimeStamp(0.5496809605285061);
    msg.setSource(14229U);
    msg.setSourceEntity(78U);
    msg.setDestination(52052U);
    msg.setDestinationEntity(156U);
    msg.cmd = 73U;
    msg.op = 54U;
    msg.plan_id.assign("KMPXJYANHAYUCUYMRNLDLISOSAKKOGQGWGXZIILNSPHNKXJPCIZLCOMAFVHDWEQWMBKWGEQARDGCJBUVYLPLDFAECVGUHHSBEUOPPECGTXRTNL");
    msg.params.assign("TEAUJTWBPAOI");

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
    msg.setTimeStamp(0.979063837045328);
    msg.setSource(61323U);
    msg.setSourceEntity(106U);
    msg.setDestination(63576U);
    msg.setDestinationEntity(126U);
    msg.group_name.assign("XDDFDZDIZGCZXTEMXJPUAEBWOSFYSVIHVRLRLASYTXNKKQGCRIKGKHIAZAOWBOURYNTQKMXXZJLXQWLOXGPRBMSDUKRPYTTCPVILBVUTQFHBGGHPPVYMTNHHLYJQNNMHIIDFWUEWDEBPUSECZMFYEIXAZQKUVGEJOLJESQMULRCJUBDJGSHHNUZWFYPCTPQVWMNCRMCQQOVTDKGKLLVAVNHSCOJIJGZTOBNWDAFBOPEAFSKORBYN");
    msg.op = 142U;
    msg.lat = 0.9703304631340411;
    msg.lon = 0.03206265709697964;
    msg.height = 0.22573790459203902;
    msg.x = 0.7026968058187584;
    msg.y = 0.13778105459413525;
    msg.z = 0.954200907324138;
    msg.phi = 0.32776777268674273;
    msg.theta = 0.21411258144334755;
    msg.psi = 0.11792774236762682;
    msg.vx = 0.49324566558929883;
    msg.vy = 0.18705865791394471;
    msg.vz = 0.8026446683980066;
    msg.p = 0.6897352057915941;
    msg.q = 0.30544225312335815;
    msg.r = 0.04372743569449833;
    msg.svx = 0.6978671671379775;
    msg.svy = 0.44448566424611413;
    msg.svz = 0.9971667299123119;

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
    msg.setTimeStamp(0.8699914197114114);
    msg.setSource(16441U);
    msg.setSourceEntity(205U);
    msg.setDestination(14213U);
    msg.setDestinationEntity(190U);
    msg.group_name.assign("CLJIACGPVJNPSFTTNPMEQRTNPTVIBSPJJUKHLMJZRFARSYOMKWDCMVSCBVWTDWYCSBWNYDARGEQOUHEAUNIQEWBRIEJBJBOYQDWGKNEQZXYXKZPECKMHXLIBNGVTCVEXAGNQDIONTLZPZLYMOHPXPUFQIXUDOOFFOVGFZVMIAFHWLSXILJCAUDUHNRE");
    msg.op = 178U;
    msg.lat = 0.03903153132910864;
    msg.lon = 0.9894186463548089;
    msg.height = 0.20021307625200324;
    msg.x = 0.19874376688979256;
    msg.y = 0.6886956899951827;
    msg.z = 0.16042416303602647;
    msg.phi = 0.014439416993891507;
    msg.theta = 0.3983695208494057;
    msg.psi = 0.33149788913209133;
    msg.vx = 0.918047276587814;
    msg.vy = 0.2980531020469823;
    msg.vz = 0.11225183526545224;
    msg.p = 0.14094870685098027;
    msg.q = 0.7399652967424993;
    msg.r = 0.8646862982049313;
    msg.svx = 0.08977123066589332;
    msg.svy = 0.6864329730793357;
    msg.svz = 0.9594369102640317;

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
    msg.setTimeStamp(0.04407659245368312);
    msg.setSource(57555U);
    msg.setSourceEntity(179U);
    msg.setDestination(43916U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("LQKMYAAXWQTCVCAEWIVUJLIFVRSZZYNOGAYFLYVPGXXHZBTCKHKMIOZKWBUQUPTWOJSZKNXDDSUDXUIBIGMPFMDZESQHRDASCTUWUIASQFRBFVVJXENLJODEGPRJICMXYXXGDFIOLVTHBUATPRBREKGRZSWLVITOBHEXWKORHRYYACVEBKTZBBJGUHPMLCDLIUHELYWDJCAPQNSDZHCZFQAFGHEQPLSSTCNNMGQMTK");
    msg.op = 44U;
    msg.lat = 0.436728818395938;
    msg.lon = 0.4883796224593473;
    msg.height = 0.06369705329451769;
    msg.x = 0.9819883372327338;
    msg.y = 0.722921625445258;
    msg.z = 0.4793447250015437;
    msg.phi = 0.13674938857682217;
    msg.theta = 0.07394745246849355;
    msg.psi = 0.9953434316995805;
    msg.vx = 0.045470202750885536;
    msg.vy = 0.9290602924782565;
    msg.vz = 0.2450675527957885;
    msg.p = 0.7108536891296761;
    msg.q = 0.5490450752514986;
    msg.r = 0.07123266574815246;
    msg.svx = 0.2839953141734409;
    msg.svy = 0.7630318599138951;
    msg.svz = 0.21339375234332758;

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
    msg.setTimeStamp(0.5692841046056554);
    msg.setSource(24366U);
    msg.setSourceEntity(183U);
    msg.setDestination(34055U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("VSGVHFNEYXVLMUFEUIFMJXXWKY");
    msg.type = 154U;
    msg.properties = 222U;
    msg.durations.assign("DTBIOJRODKFNPMFUDNIMHYLORNBGTGLMUSIQTSZTWUAOUFBITQGYRXZKTCRTAEZZCYMUJXIRDFFAIZBBCXUOMEGWLKNLXAOMOJCEYYNPPXZNKIJJESHRYUTUWKLLJPQEQHGHVBSWAUFLEQANPCPNXRMXEPK");
    msg.distances.assign("KFHABDYTGKKPBGXHGFHTEJRJSJAPCLPZCJQDRJRNBCKVAROZPXNGNBDNTJDFUZWTJNRTECQSYXIPKYMO");
    msg.actions.assign("FCPNFZIOKLLBKUEGDNIZADYEVORXLGAZSYNPJQDJMJLBQGNVFPVVCQICJWXSWMSTXOPJHGBJSTBVEMIOLFFXWJKNLCSTSORRGQSAWGQPRFUCXTQWERVWMWCAMAMNTPDLKMROGQXDFXB");
    msg.fuel.assign("USBBYYCSFWNRGZEVLVTATVYXOSDNFZIKRZHLWJYGPILMAHZUJTOUANPGNPDRJUISKJWOBGOVRYVIKISLMRXWHXCAOVNSUCCAHEOZDCUEIZXYMEAADRNOELNXJGGUHVQHJRZOUDLDBJFBHMNKEAPSNFPQWKZRTQPFULNSJODMYHLBTHMKGUAMKSEQWGBCEMXRYGCMBCJPXFKFZILWIVIDTJCSPTX");

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
    msg.setTimeStamp(0.6437651367508465);
    msg.setSource(3896U);
    msg.setSourceEntity(95U);
    msg.setDestination(54208U);
    msg.setDestinationEntity(46U);
    msg.plan_id.assign("ORWGXLTGFHJAQVNLSZBBZTNBHHDEQYLYZFTFGIVRDPJDIADKQSVXCABLECGMYDGKMZTIEHFNOSFCLKUETWPAHDWRKIOKIXVNPQPMTCVWKXZQXGD");
    msg.type = 32U;
    msg.properties = 24U;
    msg.durations.assign("BWQWIKTETOIRSZVZBXFQQWPAYPKZGFALVRJJTTNTYXTELOCEQSD");
    msg.distances.assign("BSJOJNTYEAXUQTLYKYRARYMHYPNNUNTTGKEJPKGBSUVSIXCVIDZBUSRLPIRIMFDOBEWQCKZVSQQKXZBJDUOKSHJBWWNZTXUEYXINFNMHZVKPQVRJHFADUIDPYCWIKGLHVWCIFACGGFQUODLGNMWQFDLOOGOAMQCQ");
    msg.actions.assign("ZGHPZCBDMKMIJBOSJISWHWHGGDTPVDNUGZCLXXHYQBPJZTAKMCLVRTMGNSXPHEDRCWGHJOLZPBLSJYYAFCGAOTNYJDLXWSUVMZKDRYJVJTLKPPHMBZOIBTVELLQSDNPTUWSSFNINWZFHWMNEOFWEAMVFYAFCIMRDUQNTARCKYKRAUIZXECRQAYUWLQQICKNRUYOKXMNBQADEVXOWERVIHQKQHPOBXDRFUCLEKSGJXIQFBEGOBVUXFIFZJTGUSP");
    msg.fuel.assign("MWDDNTODISLWHIBVWCPCGTXJIQDSQSYJGOUGWPYWAEKCUA");

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
    msg.setTimeStamp(0.5492270175182218);
    msg.setSource(53095U);
    msg.setSourceEntity(243U);
    msg.setDestination(31509U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("NHYQZMUNBPECWDBGANDGWZWSQQHMKPPMIJYXVEKORLVZGSSUGSZZICJJIRTEBBIMXCUQVGTKCJFYLPZLXATOJDAJUGIJCFOUCHMSIMABAEANBWFVQXBNXJRTKSKOHEJSZVLZKIPLDXTYRLNEZRSQGWEPYCAPHDOFLTYKUJWSHDOCSFTXGXNN");
    msg.type = 214U;
    msg.properties = 109U;
    msg.durations.assign("YWJKKIHUDBMHQSRRUWUHCJMJTFTOFNIAYZZCDJCGOIPFLYWOWIKHWIZWUOWLQNYLABRNLWBANKCLYRUENEEMYTVSRBPZMGCKXLSPUXHLLMUQOQASXKOVKPBVDFAMTOIXGDSTGNGFGIOKSCENBJXGBNVTYXHQWOKVEYMLTEDCDIDMEDBRVXGEKPAPZPVTMQRREHXOSDZUTG");
    msg.distances.assign("YCOUFXVCXGJCTLICXOZAADGNGNZLPUSWWMMHKUJFQUEBIWWDMRUHRQIUECAXYLPLFIWRAHQOSOTZWKRQBZPXDYRSBHOHCMDHDKKJZZEYTRYXXMAOGVFNVJVVUBBGRVGJHIDTJEEYSIBDVQCBAYCMGQFZDKQPEUAS");
    msg.actions.assign("QUOSGGEQCOBLFNZYXRZRDGHWEIUKJAZACWPCXBAIVWJRNSWBFSHIXCYCTKXELNAKSBUUZKVLCVNJVDYPZTIHOBAONKWYICEZVDXITWTKZKWSFOMFQRVVGZQWDKHJYPGGUTHJMNMMGEOVJCYTECZOHMFUBPDYFHOBRWQGOQHMQUVEESJERXABXQYCYLZJGR");
    msg.fuel.assign("TAZZVUUETGCDKDBNKKFPIWOAUYYFFWBCQSJSRFGVNBOLPMOJVCZIHBQYRZSRRAFAJQJKGTPYXWOPFQVXUMRCOKLSZHHWELVJCQZHNLSDWEGSCXVHMMPWDPHWHTVZIPMBDMOIYYAOMIYSGKANIPNURDENBNDZYUESULCSVBMTSGWFTMXUKAJPUWQCUEHFODEXIEVATAFEJXHQZBXYLYLHXGCGXECRGNNTTOGWKRJQBLKDPRQLMIKIVNODZA");

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
    msg.setTimeStamp(0.49438854228219875);
    msg.setSource(2590U);
    msg.setSourceEntity(1U);
    msg.setDestination(4444U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.9174087524320844;
    msg.lon = 0.14165272586020883;
    msg.depth = 0.9707632935489174;
    msg.roll = 0.4643714734862501;
    msg.pitch = 0.1393901426256411;
    msg.yaw = 0.1382820572406367;
    msg.rcp_time = 0.28806507250796964;
    msg.sid.assign("AFYLLVDKBBYXIGTZAEKLPNVMQKOHQKZGHCVK");
    msg.s_type = 196U;

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
    msg.setTimeStamp(0.46312966424450663);
    msg.setSource(40388U);
    msg.setSourceEntity(241U);
    msg.setDestination(31226U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.059792285142126755;
    msg.lon = 0.46442276036275265;
    msg.depth = 0.27598572962832624;
    msg.roll = 0.26133197528055685;
    msg.pitch = 0.6872765604842134;
    msg.yaw = 0.6089325385018151;
    msg.rcp_time = 0.675757996360446;
    msg.sid.assign("TBKIENOBUNWVYEYQFJOGBNVRSFTCPTJRTUTYDWEXLSKGIHGWLHKRPHOCWZUWATMQDFNKIUZGDVCCAFFBJQHWULTDNLRNDREMUL");
    msg.s_type = 40U;

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
    msg.setTimeStamp(0.9054587902793058);
    msg.setSource(10730U);
    msg.setSourceEntity(27U);
    msg.setDestination(15619U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.6149684714865145;
    msg.lon = 0.9419826766181756;
    msg.depth = 0.33238102194400865;
    msg.roll = 0.1599970653037346;
    msg.pitch = 0.6106276158099093;
    msg.yaw = 0.48985778200639096;
    msg.rcp_time = 0.3259053415740012;
    msg.sid.assign("UMERZIMCXOSTJPCNUCZJPTPFXRSVGUAIYYJSZTZHMLYZOAISFOUQAKMNPFWXCNQLZBCLEOSQVGJVSNAVQOCBTNIXQPTULMHUGSPFTLFBYEJFEOOKFHHDUWWMOIDCQNDTBQDPSKADDXXGWDVVRBYQYQFRMPGXIKJEURKQAMWTONDKHASBGBV");
    msg.s_type = 115U;

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
    msg.setTimeStamp(0.3288509647351281);
    msg.setSource(41717U);
    msg.setSourceEntity(75U);
    msg.setDestination(30396U);
    msg.setDestinationEntity(215U);
    msg.id.assign("YMXGYKGLOQRJYDUUZNSZOZPDDJXZGWDRAKJOFGSFFUCNQTYQAKBLEMECDQKGMTWPVUMFZHENQBFKOBBCJPYHFPSTAIHXRENLSBRAAVZMGTYUILBZTQIYDEVVBRVWRHI");
    msg.sensor_class.assign("ISYLJNVKQEJRWSOSRORTKCFCQVNPFDTCLMOCOBTIGZTNLDHAGYBYZMSGJXVTUCZNVCBRZHVUDOREEDENORMJQPNIZDHHWCFXLJHVTPWZMZNCFMYRBAGXULJRPEXFAIFYASTPSNAMIIBPYSDLKGKPQQJJXQDDQEBPNILUKJGEVQZGGFDCAWBWUHPWXIHLRWM");
    msg.lat = 0.44081038306054965;
    msg.lon = 0.7236761160083807;
    msg.alt = 0.0902039547165211;
    msg.heading = 0.03025822845292203;
    msg.data.assign("QGVIKAQOGDXYXRGIQYRBEDJIQOHDKPFDPYWPEZBRCTZSFYZOLHFXIFWEBVLJYWGULGKGRFPEYANTGINTHAQBDVQQKJJNSJMDFNBTSNCLSANZVBARXZKCXOYQJSLZLRTZPVXOWHMOBRHBFFYNWRMGOYZVUMQHJCPKOMEQXCABLIXOSFETFSNITPYTWMVSPERUNMLWUKVCUAZDGKJJKWCOBUIVPKCMJA");

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
    msg.setTimeStamp(0.033685534951652496);
    msg.setSource(28670U);
    msg.setSourceEntity(213U);
    msg.setDestination(52482U);
    msg.setDestinationEntity(113U);
    msg.id.assign("XKSEVQUIJAWLYVSAZNYORLOMYMBVXITINKFGYNKXJYXHYDLNYLQISRZTWKQGVBJPKVGJERBZRILCVDUOGHJBXFPAMWCBITLTMNJADLNAHHWQDZVKZQPFAGXMCAXTRHEWHPODYROAOMTHCFCQ");
    msg.sensor_class.assign("MNCTLOVSBUAFRQXNPZQHOVSBDQDRFYYEOWXWQNMEGFQRZGKHBZWXDEYTMIJNFXMHSKFNUKLJZJZUZTNVBLGOYWAQNRIIOSFHDNHV");
    msg.lat = 0.32559908293483897;
    msg.lon = 0.6803510782205056;
    msg.alt = 0.5383354977764314;
    msg.heading = 0.9157894227023499;
    msg.data.assign("CGQBNYWBLXJYTVFMISPGLWRYRGWFZELSAJBXRMHWTSPBSSFGUKOQOHDMSVJCEUVLIAEPKTHMDUTLQVCOACTKQXHNOGKNILUGJXOCYTNCXULSFWRJMVMPCBFEADIUMHCZKEIRJVQTJVCRPERHPXDUEGYMNBUMZILZFTSANYVHQELBGDBTPDJBSZOKNRAIDJNGZZ");

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
    msg.setTimeStamp(0.18958583381932537);
    msg.setSource(64604U);
    msg.setSourceEntity(193U);
    msg.setDestination(13601U);
    msg.setDestinationEntity(41U);
    msg.id.assign("NXMYBNDJYQMAWGVPTMVSUWLTXIEBFBRKPRHEMVRDOZWYFPDZPZLQJXUDIOQLSNWTVQBITJAEWYTVMQUQTSE");
    msg.sensor_class.assign("OMGJLLNALWRDKTUZZKMZYBPEDVTUMWJUYIFYHWFQFDJCJIILOPBGIKHYYEOVQWXTZZBNAB");
    msg.lat = 0.2866759853725461;
    msg.lon = 0.23708420186128598;
    msg.alt = 0.1609679633776122;
    msg.heading = 0.21091763684259746;
    msg.data.assign("BWMYOEFQWGRCYFNTBJTLAKOCVKEHIRVUSFJPWRVRSSVBVNSAQRLXXUJRWFDNMGTJFHDHDBUYZDCISPMNJKFGIYXFGPAQZVUTNXLDTZCYBBJPUSCLERQ");

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
    msg.setTimeStamp(0.17329077678778348);
    msg.setSource(45451U);
    msg.setSourceEntity(174U);
    msg.setDestination(61109U);
    msg.setDestinationEntity(99U);
    msg.id.assign("CAPSYHSFJFTWEUEQGNIOJALTWTYJNRWNEBZUHYUVMGJDBLQGQHSDCIWGHSVGIPACIOOBOLUTNZPDFZRWNWYBOPHLMRFMQEZPVQBXTQZFODPYHOAK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DANMSXNZKEGFYSBPZKAZGIRVKALEHBQSTMBYZEWVCGLTRFGCCTFSPXURDDSWUMBLVOJDWCMKMDYVBXLFMWDHIJEUHNSOGJQPNZHKYR");
    tmp_msg_0.feature_type = 201U;
    tmp_msg_0.rgb_red = 40U;
    tmp_msg_0.rgb_green = 90U;
    tmp_msg_0.rgb_blue = 140U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7757569296035455;
    tmp_tmp_msg_0_0.lon = 0.8333710248658781;
    tmp_tmp_msg_0_0.alt = 0.8257158136786193;
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
    msg.setTimeStamp(0.6675527290368702);
    msg.setSource(45109U);
    msg.setSourceEntity(73U);
    msg.setDestination(25053U);
    msg.setDestinationEntity(149U);
    msg.id.assign("DSVKWTUAEJLAPMMVKREBNGFPRIHTHWCXDQVZKSHOCULCALJFCIFRWTKBMTNKMSAHTEVOEMITGPSBTSPPOXWZDUQUNBYGBCBFLMEYFSNYIXEADQQPGZXZOHOGEMNWVVRQCSECRKSXIYJKHSKYZVVHFTWXPZYAGPPCHXGHMIJZVDPKOXBEJNXWIJUKRIHCLLNZDLYOVWYALJXSWUFWINBGRYQMQZJOJIUQNDBRBLAYTAU");

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
    msg.setTimeStamp(0.8535400943650081);
    msg.setSource(39856U);
    msg.setSourceEntity(216U);
    msg.setDestination(17396U);
    msg.setDestinationEntity(101U);
    msg.id.assign("XBUQMTOCUJKGYDMEOHHZOQYORYGJUVRTJAYSISMLNADKPHWSMFNHNSAGAWVUJICROXCVDGFMKQBQKZXQKSUGVMXWJIVZQUKBYCGZHSHYJJPLFBYZXDWVCSFCVKFTLODHLILVNNERENBMADQYGWPESBJCRIGWEXFTCPD");

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
    msg.setTimeStamp(0.5587582121384119);
    msg.setSource(63229U);
    msg.setSourceEntity(44U);
    msg.setDestination(41547U);
    msg.setDestinationEntity(166U);
    msg.id.assign("YBOIWEPNEDLKMDOSSYZGIIPUYJCGAGOAUYKXJ");
    msg.feature_type = 125U;
    msg.rgb_red = 184U;
    msg.rgb_green = 60U;
    msg.rgb_blue = 167U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.22634791370418983;
    tmp_msg_0.lon = 0.3770452284562613;
    tmp_msg_0.alt = 0.8221972295662003;
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
    msg.setTimeStamp(0.12486920505110977);
    msg.setSource(4878U);
    msg.setSourceEntity(55U);
    msg.setDestination(15760U);
    msg.setDestinationEntity(155U);
    msg.id.assign("WGJPFKYTBQMCFSWLQSOQPWUKAMEAYGRBDNOBQDKOQNEEZBIVBDRSSNOSTMRCVIZJXMRJTTBODZBPBMTEYDVLFLZPKAYFZZVBXLRNFFHNRPXUWBSHXFOCVQCAIYVLKUKGVWMNDJIPHQIXPGUNSCUCFTCZHYHERRHQJAUJDDJLGPHZOCVWKXTWPGLGSKZSAAHXIILWLYIAKPHEMXGOQXMSVCUYWRUJUYVIJJZIRXOHUGWEFDEONNATTKDMEEG");
    msg.feature_type = 9U;
    msg.rgb_red = 240U;
    msg.rgb_green = 47U;
    msg.rgb_blue = 119U;

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
    msg.setTimeStamp(0.8755879583775223);
    msg.setSource(24913U);
    msg.setSourceEntity(170U);
    msg.setDestination(51489U);
    msg.setDestinationEntity(14U);
    msg.id.assign("MQOXTKCXOZIYREVHOJHPCFDEBAPYUBTPZGBNETJFGIBSDCYQGCRTSBFCUYKWFCTHDDZLIYJMSAAXQDEDYWUWUEVORLYWRQLSUGPLMITGXFXMQVPSPSIQWYAZRKTZCURNYMWANGHOBWFUGPJGLODJXJVLEILVAJIVTQFMVESOKXLSROWFQEHAUHFAOZAWKQPBCXVEKZCNTJEVDQIZTFXDGIXNBMIPJULOYKKPNMR");
    msg.feature_type = 141U;
    msg.rgb_red = 51U;
    msg.rgb_green = 182U;
    msg.rgb_blue = 120U;

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
    msg.setTimeStamp(0.589665182550482);
    msg.setSource(50086U);
    msg.setSourceEntity(220U);
    msg.setDestination(51118U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.18514810010934712;
    msg.lon = 0.24767871138300224;
    msg.alt = 0.35713830639156297;

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
    msg.setTimeStamp(0.7235263502496738);
    msg.setSource(15613U);
    msg.setSourceEntity(198U);
    msg.setDestination(64451U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.5180556889155319;
    msg.lon = 0.7792552761196208;
    msg.alt = 0.5411280651549284;

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
    msg.setTimeStamp(0.049616414280678534);
    msg.setSource(55621U);
    msg.setSourceEntity(49U);
    msg.setDestination(64066U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.18651463247507172;
    msg.lon = 0.5631316535807174;
    msg.alt = 0.16815867613866076;

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
    msg.setTimeStamp(0.6403418266451495);
    msg.setSource(60725U);
    msg.setSourceEntity(37U);
    msg.setDestination(58854U);
    msg.setDestinationEntity(57U);
    msg.type = 204U;
    msg.id.assign("AULQETXTCKXBWEMLYSPCQGWBVDTAGCKFDCFONJBEQZYSXZKDUBLSKLVMCIXGAPVMDDNIYPHUJWIOZUADRABQPTWOYHFVPEFZMJHDJSKFIMVRSQPJORKMIJZWONWOYYVHVBLRQRTYZDPXNIBSWBEPKGRKBHW");
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.507907690411494);
    msg.setSource(42631U);
    msg.setSourceEntity(53U);
    msg.setDestination(27530U);
    msg.setDestinationEntity(253U);
    msg.type = 209U;
    msg.id.assign("KRQDYVRWBFCVJKLQIXKXOBHHETFEEOBYXVUKZJQTMUZDHIAPJEAUASWUCJKIGADOXMGGIIXWFPOFNOLIWUNEYSYFCZSPHTCDHMFMFYBWTHYKJLQARGNFGKOUKIMNRHVIZHWZXTYVKSBATIVNKCAELJHOCRRVAGCZSRWSGIVOBEQNJNOUGRVDZMYBAEESMAELOHBBDDLRWLPVTZXLNJMWUUQZDQZQPQFPMSJMTGPPQNSCCTRYTCDUNGSFXJLYX");
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.8878502231062565);
    msg.setSource(14458U);
    msg.setSourceEntity(113U);
    msg.setDestination(50664U);
    msg.setDestinationEntity(141U);
    msg.type = 12U;
    msg.id.assign("DBHRNBAQJWQIFFKBCUPYWGUXMHDUVNOXFNRTPYAGQWVIZALHRWZCXPMQYYWGQNXQ");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.7479307587748163;
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
    msg.setTimeStamp(0.7877712923666051);
    msg.setSource(44415U);
    msg.setSourceEntity(110U);
    msg.setDestination(3051U);
    msg.setDestinationEntity(163U);
    msg.localname.assign("RJXMRQWUWSEUUHFNNINPZLEQBMBEJGAIHRLDJEBAUIYFCBOBPAZYIPKROXVNCWTQITRSACWGFJXPXCWFGFKGDXCGRDFMUZQCMBPTRAF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MAEXUJHSOFITXMSKJBMZORFIPXVJPRQNKAECMHBYOFKUCRDQRBVYRSUEIBHRTNQZYVDUDAPATWCNQYBGUQWHTUBOGVONVGMFFQHMSYVUNDIXCLYDHBLJLUAZWGXLTELRZTMGDKTCERDUSAHAVLMJYBNTCEWGGAXNPHHPEQCJKPCMINJWIIJCMSWZKVOOESZPFZWRFAIYXVSKNILOXQOFSPETJNLDULZFKKDQPEPWGDQJYGWGKZ");
    tmp_msg_0.sys_type = 155U;
    tmp_msg_0.owner = 36743U;
    tmp_msg_0.lat = 0.1612902479663546;
    tmp_msg_0.lon = 0.3531117650034534;
    tmp_msg_0.height = 0.5598184807603804;
    tmp_msg_0.services.assign("HYSEZHTLBYLISKUMWXZPKHWYAIFKKUGGFUUQDIRCTQTEGNNIRBEGIGYJOGQVTJBQDLTEEMYWAQWXJNDWIUOQRPJKIDOVPZQXWRHZDKYUFUQVGUDXTEMBNUKMIV");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.2521443387789942);
    msg.setSource(38278U);
    msg.setSourceEntity(108U);
    msg.setDestination(59711U);
    msg.setDestinationEntity(211U);
    msg.localname.assign("KGUTBXNJDNUAFVZRDXOEQVLZWFZWHUGPTMXKVGPJGIWIOSWABYEFIKCULINGRMLXXJYLOOTYVGQFDWAWIKLSMFIZHW");

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
    msg.setTimeStamp(0.17255005148633773);
    msg.setSource(22990U);
    msg.setSourceEntity(187U);
    msg.setDestination(34802U);
    msg.setDestinationEntity(69U);
    msg.localname.assign("PECOIHASZGREKAFQCMEZHSIWDHCZZRBJGBZITWFALNFAXTYSKLRJNMCQHSCYSKKRVXMYBEBAXBBHEDQFMWJKLRZFCOPZGHIOYOJRMCQFOPALXK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BLWWZQQDTELSXTOFVMTIGATSEMOETQSFKBMAVJRFYPBSRCWGHIABMHZVFDDIPFQKQNTNWAWDGJVWOOEXPYVY");
    tmp_msg_0.sys_type = 119U;
    tmp_msg_0.owner = 60517U;
    tmp_msg_0.lat = 0.39205833424534076;
    tmp_msg_0.lon = 0.7746964376904655;
    tmp_msg_0.height = 0.10109818924240932;
    tmp_msg_0.services.assign("GIZNFSJVIROFWUNKTOOBJOHDRAIYOOLGBNJPLCQYHBJWDXDBVLVCBYXZAUMIWDEILMCRLSMRFHQLICARSLLMYXEUPRZQTXOVFOYRSENJGFFRPZNIDCKGHMEDGGZPULKASUVSXCTZTPQAJHQOYVBEPLHMWKMZXPDGWPYHGCQICVNXEPHEOSZTGIPAEFXVSWQBBRJKCDTUFCSYZJIHJBTWMAEFDAUQUWKKYSMYJUWQNMGATNZAVQXKXTKUBHTV");
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
    msg.setTimeStamp(0.13361121710316448);
    msg.setSource(42309U);
    msg.setSourceEntity(203U);
    msg.setDestination(15273U);
    msg.setDestinationEntity(174U);
    msg.timeline.assign("OCTWJMUSCFTLHLNEZNDWHQRYHRZCHAIGFEQEJWISHNTUYFLGPAXUCIZZHVWMUJNOPVEDYQOQWFZKIOKYRWZXVQSAHLFSPHDAEKIZQRPKEUJBQBTWYNILCVNOEMMXORDFSGDIJFTSXJXRDTCNDNLBVYXMXUMFPPTGYCOZGXPNGDRLMRGAXKSIVPUZDGBBJJCLKVSTETKJKOEBUJQBAQYINQKCTEM");
    msg.predicate.assign("XJVUHOOHKKCJZCKNYUPQBXGAKWSWOLHIHMDQAETNONFWEOXNEUUSKCBFQTSFVSJVBOFBFKINTIGSRATGLBEHIGTZYSLPGDLADLQVDMPFFMQHAJWHMRYWLODVLSPQGBNDKEDDCEEOUHHJMOXTEKGJXNAILHGSCNYKFPYUZIMSWIRMIRUGWRORULDIPDMVZCKWYPRYXVRWJQNJ");
    msg.attributes.assign("TBTGGPBZPISKWWZNAYSXRYVORHQSOSZRRNAOLOQFFYPJKCNXEMTEUILJGBDVPEHJXJIZAAWNRFKWNSTSLDQWLJBRVLIVKNDCMUVWHIGBJPZECBONMBMAQBQVMSYVEOQFHHYQED");

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
    msg.setTimeStamp(0.8350828618984174);
    msg.setSource(7462U);
    msg.setSourceEntity(144U);
    msg.setDestination(16200U);
    msg.setDestinationEntity(37U);
    msg.timeline.assign("XZCHZJFCANESGUBIVYBMXEAJLCWMTGTPJSGZUFQMYLBIRDGESXAJFXNOHEOVHDQJRUFAEOWTANRVVTKGWGJWVQQOKXSQKCF");
    msg.predicate.assign("RSNFMKPMBODADVMTSXWCZMBBIZMFBYPOGCPHALKRJRCLWPTETBJJSFAJHHYWFKOBVXZCYLKJHAOUQNWEDPDMFGQHRAMXFBJCU");
    msg.attributes.assign("EDOJRNDZZPWSLTYLMVNRELVEQBRGIUMMFGNJISOMOCAUBNPJYUESBHGSEWXDREYTMVVOGJFT");

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
    msg.setTimeStamp(0.8029192783082891);
    msg.setSource(37205U);
    msg.setSourceEntity(46U);
    msg.setDestination(33623U);
    msg.setDestinationEntity(38U);
    msg.timeline.assign("TJOJWEHUDJTJUILGBHOMINVJGDVFTRZEILPAQRKUIJHFDNBIQDZHUSXZCRTZLWNYSBUQOJKPJLBFNERAZGSSOKWFSNMDLPGAMBTEZPGYORKRSGBDNCBWYYHSMPXBVHTLWVZXCRXTWWIGFTXWIKOM");
    msg.predicate.assign("PTLWLQGPPAOFCWRSIBWYSOMLVWHBEQBCTVTQGQDRFOYZPXDYMZDAYELSRFEIJQYOYKOSSWVPKVCPDDRCZIEFWXXSUVNJGVLZUQGKUESABFCQXKBWIWCUHVHURGTNNMLNPBLJVGRCHHCIUONIMPGXKZFKY");
    msg.attributes.assign("ATZLWUITHLWFQPCFIDCBYJPSQDMIZREQAFQQWRCR");

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
    msg.setTimeStamp(0.2757344219946023);
    msg.setSource(21278U);
    msg.setSourceEntity(218U);
    msg.setDestination(49595U);
    msg.setDestinationEntity(57U);
    msg.command = 56U;
    msg.goal_id.assign("EPKSZGTKKYAPCLKKMXAUQXYOMTVACUFFCMOMZWRGBJRWUCJGCNOMJBDXCEFBLYBFOPVENJXKFOUQXDPUEUWDWGADAISONPRWYNQATLRAQHFATWZTGTXTIAYZZGQMTENWNRLVSGXQDSHIWHUDXRKDIUNNBTIFZYBCQGKJROHNPXRKHAECLSDPLWSDBEEYFIGVEVSJZBJHZCITMY");
    msg.goal_xml.assign("IJNWFPQWHOLWGJDNRTTJAVUGHACUATLCNSPITHJBBAKMSUTVIQUDRFCGPBU");

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
    msg.setTimeStamp(0.24398321213738106);
    msg.setSource(52326U);
    msg.setSourceEntity(116U);
    msg.setDestination(34221U);
    msg.setDestinationEntity(175U);
    msg.command = 134U;
    msg.goal_id.assign("OBIRTKAWBYQMCJCVCBHEDQPJYFEJNIPSPGFNHOBMXPDECPNCSRGWIGBDBBESWTXMZNLWQCELMKASAHJMXIZRDAFTUKXTQUJJZAOLEBWGHKZXAGOIIYUOJFOQNVPVVRFSTSNEVLGJVIXUQABXTUJHGNFL");
    msg.goal_xml.assign("XGZZZDWIASHQXEEGTOSKPGBVRPXAAILUOIRUNATNVAVUXOUBXQKQBKYGBJVOPKWTOWRUHFMCFVBQGJQJCJQAGMHPEVRTKAJQLD");

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
    msg.setTimeStamp(0.0073901583814683924);
    msg.setSource(46924U);
    msg.setSourceEntity(124U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(75U);
    msg.command = 103U;
    msg.goal_id.assign("ICRIVFHBJDKYI");
    msg.goal_xml.assign("ATGIBAVYMGYITYUYVDEVEBUIFPCQNTHKFMMZLYCDHXALYDQRBZKACQRVNHDJKGFRPEJHPWIOQTSKGFLPOSAEWFTYSFPJWMOLGZSXZLGBXSKQHUKRDBPRDRVIQHNAHXRLZWZMLVNNVKJDUESEOBXHIAHITEXMYCSEDAXHFOEZKXTBZCNBJOMDTQGOJCKPUPWQALJCRCWSPNGWXS");

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
    msg.setTimeStamp(0.7747623609759675);
    msg.setSource(32567U);
    msg.setSourceEntity(8U);
    msg.setDestination(22530U);
    msg.setDestinationEntity(104U);
    msg.op = 92U;
    msg.goal_id.assign("CJENWUOYGVVAKERJQKFCQMDHEBPTROFOLXTYPERYUNKIWQJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YCLWQCVHIAVXWMBQADAGIPPLSEMAKKHTEOZFNTMJWUAHRRBZIGGQPFSJNSLMBHSE");
    tmp_msg_0.predicate.assign("EOUIKTAMDLQLJSNTKLREYJWOASASNCZBRTXUMDZOXCBSIBNPCVEZIGZTQRKDBTDYQAPJCTUMEWOXMINHPZRC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TGXMUVWFHYSPGRSACRVSUNPDXMFN");
    tmp_tmp_msg_0_0.attr_type = 145U;
    tmp_tmp_msg_0_0.min.assign("EZKVJAWXSGSOXUIZUBWVOAIDTDRHMIMPBDFSUXIBJPO");
    tmp_tmp_msg_0_0.max.assign("VYNHEXLTZXBOZGKDDVQIUTERMRMAUEQYCHOALWSOSJRBBODUPJIWKHQPJTXWFBGQAZATXOMEXBZIMKREZVIWVHMCWVYUCPGUGMDGOSYKWSCNARUYXNLRXTAELDSTIRGPYHPEIJGBOXFVKLNTXYWSITVWALDBNNYJHAENLWLTPJ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7258950090536119);
    msg.setSource(23192U);
    msg.setSourceEntity(190U);
    msg.setDestination(32452U);
    msg.setDestinationEntity(231U);
    msg.op = 232U;
    msg.goal_id.assign("YHFTEPKILNVHPATWFAKXSZRMVSDREZFNSUPOUFGTGGUOGNILFQHTCMBNOILEOZVEZWDBOXYTIQEZOCWSOASKJVMWBDXCXOALTHAESFYITXENFJMUCPGKJANRNZMQUJIYUYHMTUBYUCGPHKRDSPGSMVSGDXBRGXKQJRRMQAEIXXVYKRAHQBBGQNZQLFNPJTYBHPZBYYWHZJQIFLWDKTWNOBU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PFUWAXCYWJNMYRXKEHJEDJOLKSLUOGPNVWZHALQBALVGXSTKTDWUONZUPZKJDEHWVFVKWCSULJVJTHIBTBYFPPFHQREVPGEBWQRRVRDOHSEIAZAFHDQTCMSALCADUYGTNYYWNUA");
    tmp_msg_0.predicate.assign("MGONTXRHFICNYUPJLJWKRBXUAFXHVGDVETJWXAFMOTOLSKTGMSDIXSJQJVKZFACPQSZSFAHUKUEREQCHXEXZELTOTDIOBVOKMBZYJBFMEZZFBVMRWDPINLPBANQWGAFAQGJSVREUWKIVDKWZCTIYAAVIOGZVWNLNHXJLZDPFPDCLFCUHUGOMYRSHEHWYABCYJPNKINMIJITRDYMQ");
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
    msg.setTimeStamp(0.42677550947070364);
    msg.setSource(461U);
    msg.setSourceEntity(120U);
    msg.setDestination(47372U);
    msg.setDestinationEntity(4U);
    msg.op = 148U;
    msg.goal_id.assign("OBKACCRHPDYEZSMMKCCAKWUUKYYCMCYHWIASEZKZUBWHEHXXOFDFEFLFXMZXUHRBOFVLEJCKBOALKQTYEPYTERJJLNCGXTIXOMDD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IVINAAYVUOSMLFEVZZCRBASICDDYZZMDAPYJMDXHYJFXUNUEPGUTNWPXMEKWVNQXJSDOWTWMEFWJJZLIUIXYLAMTMHBGHHANZGFDOAMTZFLQJIP");
    tmp_msg_0.predicate.assign("VDPRVYQVSQTMTSAKSWITKUSBBKMHLJOFNTIBPLXDAIDURROZEJMTKGKYCYEWYJDYDDBZOKJZWOXTXVBODSLOVESGFLAHVMGAZNCZZXQQYRLUWSOQMCGGQYLASCAEPHUNNUEIKUIPXPQACAWJNBVNKHBBZGWXHURQTHVSPIFEWAXKODAPWJNMJDDJJOPITFTWGCPOMRQHMIFFERULILKPGTZZC");
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
    msg.setTimeStamp(0.8150159314100237);
    msg.setSource(39192U);
    msg.setSourceEntity(55U);
    msg.setDestination(49923U);
    msg.setDestinationEntity(3U);
    msg.name.assign("VLCDQTDDMXXKLVWHTRAZVYPZJWBWSSRPCUVSSEXMGNUBIDGRADBLGEWCIPJHLHOFWMTWSNXFSUOKSUONMOCYMYEQDGOOM");
    msg.attr_type = 165U;
    msg.min.assign("ZHBDVVVLUAMOODJUANEXOADJURNVYSJMMLSHPDSCTCISVKFJAOFOJKPBEURQRLMTGESGTZZRUNZWL");
    msg.max.assign("IDGMBLYRUWIEYZGMKAQQFXTFVHNFV");

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
    msg.setTimeStamp(0.9418779218549433);
    msg.setSource(53815U);
    msg.setSourceEntity(170U);
    msg.setDestination(58204U);
    msg.setDestinationEntity(88U);
    msg.name.assign("IRSFSGFNLWKZEQEOYLVFLELFMRIKUPLYTKXBXNUTKFBIYHSNQBJIMHDSQNCZJLSCHJQCGXSOXZWASACMUJDVTWOGCLQXUQTYDKOYTCBNKJGWQNGAMHDDIASYMPTRFIWTOPDYLGEJNBLDUEE");
    msg.attr_type = 191U;
    msg.min.assign("QLPZCKWFXIGMVCRXWNPWSLNNHGUTIDEIBVTUOTZWPNCXXYYKEBFUKYMPITOWTLHVCJFZUUDAPDGSGLPLXAZJAVMPXSFKKROXKPQQOJHUTDLWGUEVJDDAQJAUGUQSSBGFTZVYIXWHBITHMHYYCMHBYRIRSMMVACNWTWKXDJPEDMVOUQQZMBYRAZMGLBKDEJOIRANCASJCLIKIKBVNFESFNZQRTEJLQSEFORZDRBYYJHQGOFPLVGHOAO");
    msg.max.assign("XUEFSYIAFOFSCDAQUBHGLXQOLDKNFMFOQPZXGPOKVFBVHNPCREGDJXBBIWNZRAMLGWJMBPDDRRTWAJTYUVXWLPZMMEMCHHFATKSTGGHMDVFUIANJOVTJNXPWXJRZCSAXXUEWYVLWYTGLMGYHVGLONRKEJJLSHUTCQNQDMIPYERTJZFRYEKBBEQEHOYKETGCRDDKOSBQNKYCAZWZPOKIVHZNWUUBCYOSNVBIXPUCSHCMSWUIISIA");

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
    msg.setTimeStamp(0.0449916823566624);
    msg.setSource(22192U);
    msg.setSourceEntity(7U);
    msg.setDestination(24035U);
    msg.setDestinationEntity(140U);
    msg.name.assign("SXJCREIWBAJJHBIBOGMFKUKVAXLYTQPNVRRQXFIKIXJXDPSOYQNMVQMTBUJRPZQVGINMSOEOEWSKZIKRYYDLCDPBSZLITBYFYMUEWLQCGNBFGLYZZSDULPSNNCUZFTHMDKWMVTEOJIPCPGVIYBMQFHVECDOWFZHHAPWEUGIWHCVRQWGGXOGNETCJUFUXKWODARSEAUGCPJNKHBDDATZARLYXKSJHVEQUHPROQWMLLZ");
    msg.attr_type = 94U;
    msg.min.assign("PTXAOWWNYDIXQZFHHGVDCYCOWTEGITKYTSHUMDXVZWTAHZPCYUGPSZBIVOLYNQWZQACJSKMBDWBAJEKUUWSZQNQZBREFOWFYGJSNTASPKRQIIXHBAOENUZOCERDTOKDHFXYHYVFIPYSJNRLMAGPFMMACORMHPGUSEVVULJJDBIWPTAWLMDTDFKFLZMBLIRPKMLNMTKLRLQBSQGXXEEBXZRHRLDVJVOOIVVKEGGNEJCJXCFQF");
    msg.max.assign("KTJDCMORBMCDLOXWNUFLEGFWOYGZLVBYPJLNNZDUQBEOPRETJKHAPXPNCQFUVBZFLOVHWUPBCZRMJAK");

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
    msg.setTimeStamp(0.7165692348393053);
    msg.setSource(15536U);
    msg.setSourceEntity(69U);
    msg.setDestination(52505U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("QFNPKBZKGIBXPOFQLHRSNLTDCFQWWLIQIRPDNKZBXHGHFHUXVOOXBJKELSZARPIWVEHBUNTRZNKUKEEPZHDMZDXESVWWGVQJMQYSVFWELWIUUNJCATJMOGRSOWEJKGOPUMZNXVGCYYFHVIYCRMGLPQAFDNVDHCDTUSMIYVWHASYODLCARBZHQUSPLCPRKQMRKMTOBYNPLCEYYXGFQIGALBSDJ");
    msg.predicate.assign("LDMUAWZNGULWUETYIYUSCPUBACZHBWOUMKXMEPJEDIBSBCXFJCYNLOXARVVRHJFRMEVRCFOEIEFZTLWQAUQCNTJLOINTPKGJOGGLRALHXVZNROPBPTTKYVXARKYDKWBDIUWLXNWHSZDKTQNOKXEZQKGHCFDIMPDENZXUOVSNFAM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XMPWGTBPUFIVAPORAIJQMECXPDTFGEHVKHUWNYACLMCEQZWQYJZXOWGDWVULGUBRSIYKKKRHGDWVTTSKFNABJRTCSIBUEKHIWKGKTGDYPOIPCMNZNAAOMHRDEFQESOJMYKWLZHFCZICXXJEQKTWBXXGFVAQQIBWLRXNSPXDLMUOTMJSYSJLVROLUDVEZAMRHVJVPLBYND");
    tmp_msg_0.attr_type = 149U;
    tmp_msg_0.min.assign("BQJRMFPCUTTMWBPTOLCNWRHRNYVLLKLDOXXRENFRFIEDQQWXPZGEYIZSUXADIMBTOZCHOODNCQGXNSYMRCYWKIEAVNFHQOPPWQHKWCDHPGWRNBVQGISMTQNSAHWSTYHBXZUVFYUIUCKVFDMOBEZQLEJIXBEXUKVUNZQGLRVYZSMT");
    tmp_msg_0.max.assign("YKNBSTSLPEBQZABVPZMEQXEKJQNDOOWNLOCVCFCZIGYFKZFRSRMASWFLXJTYLUASQWVMIJYHLHWJETPNXXRMFZAUJRXHLYUIPKBUPGZHTDEQOVIDNLHBFKYKWJBGIINPJFOYNXGADPRDBFYBQUUGCZGQBZGXAMESVEXEHDVCTZJXWMLKESWOVTHGTRCITYISLAUVNQPDUCFFCWRWUKVZODT");
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
    msg.setTimeStamp(0.4470979025762096);
    msg.setSource(64932U);
    msg.setSourceEntity(155U);
    msg.setDestination(48893U);
    msg.setDestinationEntity(186U);
    msg.timeline.assign("PDFRIRXYZKFXCUHOGIHADZAEGFGDNWASOAIWNZQPKNXBLTMEXJUKFISQJHUERSOCTIALRMOK");
    msg.predicate.assign("TRYMBDOHPXBLIUKNSNKD");

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
    msg.setTimeStamp(0.1282231952282471);
    msg.setSource(17157U);
    msg.setSourceEntity(133U);
    msg.setDestination(44061U);
    msg.setDestinationEntity(254U);
    msg.timeline.assign("MHEMDCEJKXTPEXPLHENJPXLXFNYDUDZPNIUIUSZBWTBDPQJZMBIARPSVJHNBXGAKZYCDOUVZERGHSQYCDEFORSNBANFHGHYFFWWIXCVQQWHMHUYDQDCUNFNUWMCRUTINSJTAMCKLKMJEEOLKVRFKSKVJCAYTFVWGZTSEAKGVSAXUZKWMZLYQI");
    msg.predicate.assign("ZPXQXQUMQRDONLWDJWAEMRJSDFPJCZSCLBKEHHMFBXBPNNHQXBCUPZYRTFVJVWKLDFEUGWUSGAKXMHPHEAMADTUKLXJYHLUCPKRLOXNPREAIGJMOTBTRXDHDFKELGNKGTICSZSIJQILGVUWLHOBCIRKTMIHSSVPOIXYOVJLEAYMAWFEZZGTOYTRRKFQJQUYICQVSJDEFFWGUZEWCYMRIVOTYNG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AXTVSZQITCMMJKZGLHMLWERFDEQBXEZUXSTOJWWORERWRFAZNOKYTKUAXKKBWHIOYLVZQKDSVVPDLMYZUHHCTPFVLFDHNIUPIAKUSGLUWCOXDJ");
    tmp_msg_0.attr_type = 101U;
    tmp_msg_0.min.assign("PWPTGDWTFVJUPRJUDTEJQMHHWVARCQRYGPDZUIBWUQOIMYHOYROZVDJMPLTVWVMUXOHBOEGSKWRWGYZAMGFRMSAVTYZLEPHGRLKFSQXATUHXHHXJCEYEOMPNKSIXTEFMNXFWQNCTOMLJIIDFEWAWQSVRJCNOEJCSPOBLMEDLHGXYBGZSZLDDANGLAGORQFKUASDCIZZFSFYTCKBZRAQUIXKPXQLEIKVUYCVUIHFDTKLC");
    tmp_msg_0.max.assign("YBNNXSJPKMOVETBXYHENIIIDGIBYVLRZASUMWLYMFMPOLRKIWZLEZJEZGRIHAEBKWPSIJZCPXWJHFABVLJQNUUJTQYRHISGUDVTFBGYQORYLZKNWXIMAEXEHAFSJRUPVGHVQDEFCTCFSSNKEEDMTVFRWCUZSCMQUGDPMBFOXNTVWUZGRKOPDWHLAWDIORXGTMWCVKTLJJFQZODKFQGVBDJZQOPOMLQYUAPBTDCCC");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.875899605052523);
    msg.setSource(62702U);
    msg.setSourceEntity(212U);
    msg.setDestination(44094U);
    msg.setDestinationEntity(65U);
    msg.reactor.assign("AOVSNFUJXKEKS");

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
    msg.setTimeStamp(0.14921862941144082);
    msg.setSource(50473U);
    msg.setSourceEntity(12U);
    msg.setDestination(31758U);
    msg.setDestinationEntity(98U);
    msg.reactor.assign("GIMQMLYBZAURWKCHHYKWSOFUIMHPACOPVEMUUZNYHPJOPZFWBMJMQDEUFDZWTDVZEWTRNSHHLLHCSORWCLAQFGEETOKDDTVGFJGLQBNIPGJLGSSXFEBKMXJOEUYHNKNQVQQJOJCXHRINQSDZOLPBIVBGNSUXCXYWURTMLYULDWMGTVRSAFRARCCOZX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VVTAMPDNPDUSCBIFOSGJISIGPSUYPUENWJJFXBAHQDOCMRSNRYPYHJYRWSAMGANEZTGQVNUWRGVXNYHCDFRPLRAABGDTBNFXLEJQQIYNXHJIXKPDYDSBUTKPLKODKFEFKUESMTMMTRXBCJ");
    tmp_msg_0.predicate.assign("EPWXZSNTJYPVWUJQBXMVIKLJZDKEGAPJXBNXRIKKDXHBOLRYMIPCYYXJQNEQFXSRSASRGEZNKNTCOHTDCTQYRFJOGMZVEUQWMDHVIKMTNEXMYBFLSDDFZVFCPGZROHCWVWSZFNZSYIMUIEFTSDADARAXBRILWLTUFQPUKFOBWYUMTOEINWVZQKP");
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
    msg.setTimeStamp(0.6528422600814128);
    msg.setSource(20939U);
    msg.setSourceEntity(32U);
    msg.setDestination(3103U);
    msg.setDestinationEntity(123U);
    msg.reactor.assign("GBJUSCPKQMKAJRIDJESIUTLSGHBCPHYLRTQJNXV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SYVCXFNKKZSCNHMKUQITMBOHBYEJJVQSVGIBRALBPUFDPGGQYKDYLZXHQFOOZVBKZSXGHQHOIQROANLXGJRDYVOWWHHAKUJNNSGIWUOECCCNATPKZZAMSTPNXWGTPWCZXXRWRJ");
    tmp_msg_0.predicate.assign("PWSNPISHTSHXAVOUZHXROSGROYBLEQDUDNNMLSYZHUMTCNKRIDGFMNVNSUKNYAXOTXFFB");
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
    msg.setTimeStamp(0.587981568456584);
    msg.setSource(31435U);
    msg.setSourceEntity(37U);
    msg.setDestination(43304U);
    msg.setDestinationEntity(167U);
    msg.topic.assign("PVODLNZKNTJEHDDJIBRAEPHBAHAAIOVXWHMSEEMFQCTYMVZAVZYJJDGCHEXXDQATQUOVFWYWLMSROCLSDKRJNJBKTXKPQAGIDLVTXAYQQGOFYRUUNJONDREFWYUAESJNTFNSKBIYPKKWMVDRZIKWSINMJZMLGXBBPECRUTHRMH");
    msg.data.assign("EDUVBBXJEBVLZGHATDNSQLEUVSCUAEMXRGNNVYTIKKHNQFYQBVFLHFYTMDPAOSWCJIKCNSRTOZXVWQWDWPQWRXUQCMANPXCBRIYNJYEUGSBERV");

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
    msg.setTimeStamp(0.7077588846350119);
    msg.setSource(22350U);
    msg.setSourceEntity(223U);
    msg.setDestination(14400U);
    msg.setDestinationEntity(13U);
    msg.topic.assign("QFROVAUNXCBHPFKOEKCSVAVOIMFRWTZPSRIIXFQBSYMUNFYWPLRDRKUMPEELRDRGQNUPGAUMYHBUXZACPQTTDHAVIDLYDOH");
    msg.data.assign("CZKXJEUSIKMIQVCJYGYKZNSMAHGXSTVMQBCDNLHFWKYQJBTMAPEHNLHVOEHIETSXLZZEVOFCZHJULYHNDAGXVXEIQXYBUAXWITMGNDRAZKBZVESQPQCOBUFJVKPKPDXDWIAMHAVLGDCLUAVRSROEIWZQMWIYJBSFLCUYRZCGOLUIRSLDJNDYGMTTWLDWTYRPUFWNPBHMTQFGATWJGQBMWDFXOJNOCPZNRTQOFBPKEFBARSKRE");

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
    msg.setTimeStamp(0.9395138750581936);
    msg.setSource(53312U);
    msg.setSourceEntity(0U);
    msg.setDestination(5394U);
    msg.setDestinationEntity(245U);
    msg.topic.assign("CUGIZBFHWEEXHGXOARDZOCXWIKCVAQDPOYLZXSPIUMDUBJXSBBTUZBMYGQHIQIXJJUFPKTNLBKKPXRAMRZTFAECTWKRWVKNENSC");
    msg.data.assign("FNUIWXUKORQLVYXJGJWNGADGHCONKXPTQUPMEZLGXLTAILMLWSFVBODHVBYZMZOARDQAMVCPTIXBCNWORUJFHNEEGYQEUFQZPHIHYBDVEBCKSBSKEOUFDPSFPPIXGJQQTQBWYNUISOUOGNTXPYTAPUEZOBECW");

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
    msg.setTimeStamp(0.7187282324680971);
    msg.setSource(3826U);
    msg.setSourceEntity(238U);
    msg.setDestination(11876U);
    msg.setDestinationEntity(54U);
    msg.frameid = 116U;
    const char tmp_msg_0[] = {-94, 110, 37, 68, 10, -102, -96, 87, -114, 98, 121, 85, -7, 29, 58, -4, -105, -14, -90, -28, 23, -7, 94, 46, -42, -126, -52, -50, -52, 5, -121, 6, 103, -51, 19, -66, -96, 95, 85, -29, -3, -73, -118, 82, -26, -77, 32, -107, 73, 51, 52, 54, -39, -118, 7, -101, 86, 121, -93, 125, -50, 49, -51, 78, -67, -22, -111, -103, 9, -29, -19, -46, 6, -22, 58, -95, 16, -57, -85, -29, 31, 2, -60, -58, -69, 38, -37, 101, -8, 35, -9, -25, -97, -78, -125, -21, -20, -123, 87, 117, -48, 92, -125, -83, -106, 109, -100, -100, 84, 13, -62, 106, -67, -16, 99, -106, 87, -54, 105, 74, -1, -30, -15, 120, -91, 30, 22, 13, -39, 118, 108, 110, -127, -1, -91, 39, -53, 112, -41, 85, 10, -105, 58, -29, -25, 64, 65, 48, 74, -103, -120, -10, 125, 24, -41, -13, -51, 32, 38, -117, -81, -61, -54, -27, -38, -70, -34, -86, 85, -25, 36, -8, 92, -126, -101, 40, -113, -84, 111, 1, 49, -60, 121, 111, 2, 41, -7, 118, -95, -27, 44, -109, 9, -110, -44, 39, 4, -34, 112, 121, 14, -25, 13, -24, -68, 60, 77, 81, 9, 96, 8, -114, -119, -39, -38, -118, -126, 126, -69, -69, -76, 116, -7, -124, 91, -123, 124, -10, 126, 38, -9, 126};
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
    msg.setTimeStamp(0.08234300452390275);
    msg.setSource(34829U);
    msg.setSourceEntity(211U);
    msg.setDestination(34873U);
    msg.setDestinationEntity(27U);
    msg.frameid = 120U;
    const char tmp_msg_0[] = {-87, -81, 42, 113, 8, -79, -88, 48, -67, -50, 32, -51, 83, -108, 68, 36, -109, -42, 22, 123, -92, -100, 110, 20, 87, -106, 40, -93, 81, -44, 107, -13, 72, -22, -104, 11, 116, -88, 105, 38, 14, 24, 81, -6, -70, 77, -52, 111, 34, -64, 43, -23, -75, -121, -69, 109, 70, 18, 21, -80, 122, -35, 73, -55, 22, 49, -107, 17, -9, 94, -21, 104, -68, -61, -39, -98, -9, 119, -64, -75, -55, -37, 46, -22, 26, 94, -28, 37, 112, -105, 38, 98};
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
    msg.setTimeStamp(0.7087129474107093);
    msg.setSource(52835U);
    msg.setSourceEntity(188U);
    msg.setDestination(33110U);
    msg.setDestinationEntity(73U);
    msg.frameid = 162U;
    const char tmp_msg_0[] = {-33, 42, -54, -60, -109, -6, -77, 80, 8, 122, -81, 25, 17, -38, 72, 91, -49, 98, -10, 118, 54, -67, -6, -36, 101, -23, -21, -57, -93, 57, -91, -87, -22, -77, 6, 13, -118, 46, -19, -71, 64, -123, 37, -42, 25, 55, 44, -107, 26, 5, 16, -51, -47, 1, 55, 31, 20, 118, 22, 33, 27, 54, 8, 93, 15, 27, -50, -26, 83, -28, 76, 15, -41, 29, 113, 76, -11, -55, -110, 92, -68, 66, 103, 110, 20, -89, 11, -52, 55, 47, 17, -14, -31, 30};
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
    msg.setTimeStamp(0.8801012255706719);
    msg.setSource(61356U);
    msg.setSourceEntity(129U);
    msg.setDestination(33554U);
    msg.setDestinationEntity(184U);
    msg.fps = 104U;
    msg.quality = 81U;
    msg.reps = 121U;
    msg.tsize = 199U;

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
    msg.setTimeStamp(0.9886285329694031);
    msg.setSource(53094U);
    msg.setSourceEntity(35U);
    msg.setDestination(24389U);
    msg.setDestinationEntity(18U);
    msg.fps = 254U;
    msg.quality = 125U;
    msg.reps = 43U;
    msg.tsize = 237U;

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
    msg.setTimeStamp(0.3655143645200759);
    msg.setSource(63839U);
    msg.setSourceEntity(90U);
    msg.setDestination(17530U);
    msg.setDestinationEntity(245U);
    msg.fps = 79U;
    msg.quality = 36U;
    msg.reps = 242U;
    msg.tsize = 129U;

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
    msg.setTimeStamp(0.3840720592965844);
    msg.setSource(36427U);
    msg.setSourceEntity(93U);
    msg.setDestination(40198U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.9124752655815247;
    msg.lon = 0.6816417362770341;
    msg.depth = 133U;
    msg.speed = 0.6029418633692563;
    msg.psi = 0.6730067009390065;

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
    msg.setTimeStamp(0.6119603564355814);
    msg.setSource(51782U);
    msg.setSourceEntity(169U);
    msg.setDestination(50364U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.949712562609772;
    msg.lon = 0.5110331636563785;
    msg.depth = 156U;
    msg.speed = 0.09714821670156149;
    msg.psi = 0.016429917519638515;

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
    msg.setTimeStamp(0.3006166186311957);
    msg.setSource(52555U);
    msg.setSourceEntity(179U);
    msg.setDestination(45311U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.5634328037286198;
    msg.lon = 0.22391649766477173;
    msg.depth = 159U;
    msg.speed = 0.10925270501512307;
    msg.psi = 0.5138281460287945;

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
    msg.setTimeStamp(0.3958868838044389);
    msg.setSource(57308U);
    msg.setSourceEntity(84U);
    msg.setDestination(16219U);
    msg.setDestinationEntity(52U);
    msg.label.assign("GEAZLYQZGARDRBIQLSXCIHMXQNJTNVSUBHLJAJOYFHXUMEKIIBMAJAJKENBSHVCBDJWIYQNPTBUSMPIFHBAJRZXFKLVWGNNJGWRKSNDAEUVBCLBHFESVCVOYIWDICUWRXVOGBSDXMJKXVNWMOZMPGUCMMHHFKZKWRZYZJEXHIFPTNGTQPXAQUTGYUYVYQCFODLDZRG");
    msg.lat = 0.03037205931528575;
    msg.lon = 0.9814276570778353;
    msg.z = 0.5089795247306723;
    msg.z_units = 254U;
    msg.cog = 0.8019074782234965;
    msg.sog = 0.07208732505394477;

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
    msg.setTimeStamp(0.6793189371136241);
    msg.setSource(12042U);
    msg.setSourceEntity(247U);
    msg.setDestination(13419U);
    msg.setDestinationEntity(32U);
    msg.label.assign("NHFINVLSDKSMUHXYNGXSVZALBCTOHRXZOVTEIAIXKBAWNMDYFTBYRERUDKVPHPDCXDYGECXGYSLCOPEGAWZITMLXURKUOERESKJLTQEMQSJPFHDFQHVSABYBNJIQKKTORWQCAJTSVLDDLOJUQUFRYPIZDBYAMVQFPMEBNFGWTEQSXVCJIPWUONMQVHPOHJZTFGZTG");
    msg.lat = 0.30971998892102914;
    msg.lon = 0.5854749575034913;
    msg.z = 0.038325589846476715;
    msg.z_units = 22U;
    msg.cog = 0.7345264698228127;
    msg.sog = 0.8464155378961509;

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
    msg.setTimeStamp(0.20296718910869427);
    msg.setSource(47574U);
    msg.setSourceEntity(168U);
    msg.setDestination(54611U);
    msg.setDestinationEntity(234U);
    msg.label.assign("MWGVKOTYSLZPRYNAZOTBIBBMEGUETUYCGDIWYSRXNBHIMNGESLVSMDLJPLFXMWVHGXYDXDPQGRHBOFGOIWUARJOAVBAXSTCWAFNECYZSRZMTVCHTXIQTLQWDJSQZOPAWKACLPHFJMNEKYUCHCPHFTQMZFPZFBKQYPIRNEGIDOL");
    msg.lat = 0.0845552433448975;
    msg.lon = 0.9876304405917664;
    msg.z = 0.6060523464450573;
    msg.z_units = 25U;
    msg.cog = 0.7360909744694794;
    msg.sog = 0.2985999031504962;

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
    msg.setTimeStamp(0.022906895318537956);
    msg.setSource(37458U);
    msg.setSourceEntity(115U);
    msg.setDestination(7752U);
    msg.setDestinationEntity(144U);
    msg.name.assign("BCMRQVANNLCNGGJMMATNDTYJIGOYDZPFKQMWLPEROFCZXSJBSUXYUDFLRDJQNPRMUH");
    msg.value.assign("GPDBXFUDCPXYOBXHIYGFMRDYLJNGFZRYNSTPFEUMVVYZRJRLCMWKSSANKOZWJUBPUJJCMHMUPVHMAQOVTRDNXGZEFDLMFCIZQXOKCHCAXTLVIZIOCHZEWDTEHHOZZYLGQWIUEIMNOXEAADCGGBSFWOVAKTXWBTUDFSYNPPSAUBVQRTMYWLQYKJWSFGBVEAJHNWQXBIRJSLXQRUQUBPIELTANIGOSZFVIQKMJDRDOLCEKQASBPJ");

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
    msg.setTimeStamp(0.6373376916234584);
    msg.setSource(50131U);
    msg.setSourceEntity(94U);
    msg.setDestination(1141U);
    msg.setDestinationEntity(46U);
    msg.name.assign("ZPERBXALUADBWKYQJXIFSCPKEXOZMXTPPLWNHZDXQQXHSPTZOVHGBIJNCZTXWJPWULTPXOCOEFPGALLEYICGQCIMIYMDJBGYZJRKTHSNOKVDEFWKYEQHAKFINMBOJQGVFAHMIDIFJQTEZKYTNYAEFDQEIWMJCSYYSAOXU");
    msg.value.assign("QQMMCEIPMJDPKTPUYARLTNFPEALBUSSDDCIUKHTDNUNFZV");

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
    msg.setTimeStamp(0.8401339437325365);
    msg.setSource(55051U);
    msg.setSourceEntity(6U);
    msg.setDestination(8724U);
    msg.setDestinationEntity(24U);
    msg.name.assign("SGWBMQEKETEHADZYFZQBOLNEZMPIVXMGRZWAPSJJKRQAPBOPUICQKUWCDULCBYALXZWNGIXATSVMBIXZIUOPFKKXCOANUNCWUVFYVSONYVXTQRPBTEXEYRLZKMTFZUXDWISRJQMRGHZDYFSSHYEJQTVJWJRRFRVWIZHLTLDCPMMOCUECUJXORPNDKVVIJDYQQKBYSLUBCMCJ");
    msg.value.assign("PGGVBXQGXLKRNCNHGTFNJTRDZCXAHKTNKJIAHFIYEWMGNMLBFXCFKUDCEKGMTRSKZSBNQNLLFBRVWJNVVRYDBAPQI");

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
    msg.setTimeStamp(0.7338554010738485);
    msg.setSource(48383U);
    msg.setSourceEntity(43U);
    msg.setDestination(32338U);
    msg.setDestinationEntity(153U);
    msg.name.assign("QCSIJYEWEGHILDZTYHAZKXTLNEZPJOGQGOGKTDJWUXOFXVGWFMPXWQHBCVKIJZRLOZSCQVULDPQIKNCDLJMUJJBZURMSPCTEPAEARXVFQYMXPLKACZPFUYVUDEBNRAXRVSNJPVWUI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IBEAPYEMWCFIROWVMJZUVZVFOGELXLMMFTLTITNEECJPFKYRAXPGGKWHPHOQPOHKGWNFHIXCMUADASYJGPYWEXGUQPXUDIZDIBDIJGKCKULNPDXDFTPGJQDVXZROBOICSUTKWFKQKKJMVDLUFQZBJZRQYWRYXAHSTXMSSCUEQEVVJVWMZJABOBNUNACHXTCAMO");
    tmp_msg_0.value.assign("CCGABWBWKKWFIGUURGEFPONLMWSBSXJPLIDWTVGG");
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
    msg.setTimeStamp(0.683763312979316);
    msg.setSource(47352U);
    msg.setSourceEntity(165U);
    msg.setDestination(47778U);
    msg.setDestinationEntity(11U);
    msg.name.assign("CHAQNOFOUNCINUXENWSMVNFFPNOVUGUFBXAYKOSMPCWKGXICMAXWFBZVLLQPRBZJFTADGYREUROFBHJTKDAMURMKIPEBOWCAHJDNIDKOFMRCXCSYLNASHKBLCRZZOXMJADWHPIPIDOTEVKYQXGKQUJBMVVRHLUEEBLPJYWQEDSLLOZYTPTQZJNGYSZJSYNIXAGQWWPAETSTUJGWVMKPRLGCQBVVVYGDHFXHIQYZTJESDDLR");

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
    msg.setTimeStamp(0.9544576594630311);
    msg.setSource(2250U);
    msg.setSourceEntity(190U);
    msg.setDestination(40404U);
    msg.setDestinationEntity(20U);
    msg.name.assign("EESWWZYBOAIXVXMIZGSQJVFTYWTBPTDHFUBZZCUWOVXDBVPVOQFMAHKDKQUKXSOQQLFLQPLB");

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
    msg.setTimeStamp(0.5401957287857698);
    msg.setSource(38698U);
    msg.setSourceEntity(241U);
    msg.setDestination(28021U);
    msg.setDestinationEntity(103U);
    msg.name.assign("QLWDHBEDOUNJQTXYZTVXOVZUHGNFNTWPAQZADENHGNVQPYRKFKHQDHCJRGDTFRWAQMEUWICLYSVJFSOUJMXFLORLLNCDM");
    msg.visibility.assign("WNCYPMEVJNRXMGGZRDCBZKDLBUFMGEOAAAEAHSZMLEFRMSGVNNZIKHOOXUSOVGPYJTUWPVCUWFYFGIQCRSSLZPTZQWTCSSKJEHSKJTFHUQOBCFEVEGKRLLXDROPVNLE");
    msg.scope.assign("XRHLOCFCUABSCLOTHKTIRORQBXJLBCKDFNBHALJPBMAXYUVVOEZOANRSPMWTYGGRVFSBZETTGPNCIGULF");

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
    msg.setTimeStamp(0.5439148158119016);
    msg.setSource(14719U);
    msg.setSourceEntity(122U);
    msg.setDestination(46317U);
    msg.setDestinationEntity(161U);
    msg.name.assign("WBGWCDWUVOJNRKTQSLROSHDVYHGUVZNWJACIQOAUXPIOZCZQHAPJWF");
    msg.visibility.assign("SRYPDEGWEYQCOYWOUVKMCBWTMDIJNOMANFBBXSQXZFJWUVUTXKDKXACILIEIODYZMYYDHJFYSTHLWPFRYOMGQAVEFKRKTAISDUZBJMHUYJJCHGISOJSSZGWNUPFWZUAALSGPVLWQDZQHQRVBCTGEBPC");
    msg.scope.assign("OWWCSGSPNXTYHBQNKTBHACNCKKAYBTSIBQASJWOHFDBMYGBGUNMRNQZSBJWBHSLAJKVPDJOZQFXUYRWKMIWTNLWUZANEHIYPLLXHGUPVLSIRXNVUJVGRQUGEXYJOZPFREYMORHMBIDVYAFIVEWCZJUYIOVTDRTATCIMDIVYFCZQXIKMZEPFUCPJEHFKVVKRAD");

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
    msg.setTimeStamp(0.030892015935020334);
    msg.setSource(23377U);
    msg.setSourceEntity(99U);
    msg.setDestination(10269U);
    msg.setDestinationEntity(38U);
    msg.name.assign("TDXEJYGNKGOAHNXGJTQSLNFVMFCRDOUSJEEHURJJHPKLNKYSHYMYBCTGDROUEHFCZFTSCJESPLCFDTQJZZRVAKMILEYVUZXVAWPIPCNUZYDPABWWLGTZSUDGNGFRQKMHZJPHTLKCENWXIGKAEEDFIWYOOMBLXSGVNBAMTJLMXLVZTHYZWKRBDQIQMONUNLPSV");
    msg.visibility.assign("KAEQCGHMJUJHSNUQNRSHTNBLTVYQTITPJUVXCZWMAOGFJGSBMZSBTVZRZCLEHTNTHGCZLMGIEXYSABACYEGWAZYEJPUNOIVHFFZERDTCMROXQVXAVURRIEILDSLMXFWKXMFLPDXYQEIVPAOHNBAYW");
    msg.scope.assign("BZICFARSTCNQUXOJACWHQNVCMEAPPLBCQTEJJPXTIFLWGVKSDQVFZUVMP");

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
    msg.setTimeStamp(0.2951507822745616);
    msg.setSource(3226U);
    msg.setSourceEntity(2U);
    msg.setDestination(16294U);
    msg.setDestinationEntity(143U);
    msg.name.assign("AUUQTRWFSTLPEUGGFONBWXJOMEBJJAKLZOJDJYJPSTOACXELYJMQGCXRPDDXGGYJVIIITXNGKOFPCQOBEHXVLHGCRBDJKSEPQDWURYVQLRGXEFPS");

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
    msg.setTimeStamp(0.5009779001027687);
    msg.setSource(783U);
    msg.setSourceEntity(87U);
    msg.setDestination(24332U);
    msg.setDestinationEntity(198U);
    msg.name.assign("UFABOWXJLSGGWSSKRIOKFLNWMNRLYMIHOWDCJYKVABZQGCPKFVCAJUEYTGEIPRHSOBPQTBMSWZHSZAIOOHSBBWENDCVLUUVFIBHZYKTGP");

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
    msg.setTimeStamp(0.5267590674962447);
    msg.setSource(4768U);
    msg.setSourceEntity(221U);
    msg.setDestination(12404U);
    msg.setDestinationEntity(14U);
    msg.name.assign("HQAYYBPLSKPPWEMGHMNNIMSOYONJNWSOROJEPCGIJPTBPGHKGOXSUBZZSFIHTIMHYKDICPUFKZCVKNZUHLIOYWEUIVBDZKNSCBCALJTWWTRY");

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
    msg.setTimeStamp(0.8843106156502258);
    msg.setSource(38948U);
    msg.setSourceEntity(79U);
    msg.setDestination(34645U);
    msg.setDestinationEntity(157U);
    msg.name.assign("PQCEOCWGZXHDPKBHFERTHEFNQKDKWJSXCZJNYXXFPIDOIKXOQNSRAYZLTUAGTWCJOWMBQJIILULZQFMVRVPJHSYVVZEZRAXKMFGPWTRBGMQLOSKETAWENMFUCHVZOIHFXFI");

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
    msg.setTimeStamp(0.3345594012196137);
    msg.setSource(35038U);
    msg.setSourceEntity(171U);
    msg.setDestination(18696U);
    msg.setDestinationEntity(82U);
    msg.name.assign("RNYSSKINDEHUWCOODXYEANQNYVUCLRRPKNWGXZFKTLUXBNJSNYLZWDJZAIIAPRQDWCGPYVGIJOKHFMAJTGSHDUWQVBQPHOSHJKIMXAKOUMHCWTWLHFCWBZULAXASLLQBMIMHNFJDMKAETMTVUKZXPFTERZUGYVOVIMDZQBQGVEIVQBSIOGXJFRBOQSRVFYYGZGOBAPRIQBGBFKKECSECWPXTJDFCSCACTTLLWNUPEZPHHXTYFRR");

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
    msg.setTimeStamp(0.3398868084161829);
    msg.setSource(5460U);
    msg.setSourceEntity(203U);
    msg.setDestination(39620U);
    msg.setDestinationEntity(73U);
    msg.name.assign("AVHZXPIYRWMBYDYXVRMZJODEGSGNAMUVTWQGDSWBJIOASFKCYRWLCHFBHJUSAARQKMTQNAXQGIBULFSZCPYKIPZICIRMPNLKWFZXNZECLXLCOIHHMJPTJPOPNXNUUQGOIXMPTUKYDNDEJPNUYKB");

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
    msg.setTimeStamp(0.36298569921848345);
    msg.setSource(10347U);
    msg.setSourceEntity(145U);
    msg.setDestination(21699U);
    msg.setDestinationEntity(70U);
    msg.timeout = 3721342535U;

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
    msg.setTimeStamp(0.35580031374811705);
    msg.setSource(33524U);
    msg.setSourceEntity(92U);
    msg.setDestination(64783U);
    msg.setDestinationEntity(158U);
    msg.timeout = 1467102395U;

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
    msg.setTimeStamp(0.8577894086250986);
    msg.setSource(61400U);
    msg.setSourceEntity(34U);
    msg.setDestination(64910U);
    msg.setDestinationEntity(145U);
    msg.timeout = 3674789653U;

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
    msg.setTimeStamp(0.9646793182781987);
    msg.setSource(28357U);
    msg.setSourceEntity(173U);
    msg.setDestination(40880U);
    msg.setDestinationEntity(233U);
    msg.sessid = 1449142684U;

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
    msg.setTimeStamp(0.5578566147771954);
    msg.setSource(22819U);
    msg.setSourceEntity(175U);
    msg.setDestination(37152U);
    msg.setDestinationEntity(57U);
    msg.sessid = 2113509254U;

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
    msg.setTimeStamp(0.272634277771553);
    msg.setSource(64683U);
    msg.setSourceEntity(231U);
    msg.setDestination(53242U);
    msg.setDestinationEntity(92U);
    msg.sessid = 4094707188U;

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
    msg.setTimeStamp(0.9460836594714179);
    msg.setSource(43309U);
    msg.setSourceEntity(56U);
    msg.setDestination(57049U);
    msg.setDestinationEntity(238U);
    msg.sessid = 4019385318U;
    msg.messages.assign("YRLEOASKKSMSOIUBXHNDJPPGZFJXEWFLVDMTHVPRYFZETXTERJDAMTKDRVEOBMCBLAGYJHQNFCLFFCTJWFSIDGNIOWAKBJALQXHYUSWBXQPZUQCNVMMPGXORUPHVGGIXAWITMMYZDOT");

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
    msg.setTimeStamp(0.7955016824951544);
    msg.setSource(37356U);
    msg.setSourceEntity(49U);
    msg.setDestination(38270U);
    msg.setDestinationEntity(169U);
    msg.sessid = 3274573834U;
    msg.messages.assign("LZRPBXKNFFIOJSRONWSFULNCTLHIILYIAEDMAWZJUBYTCVGXFUUVKCDUYYPYTROLEYNIFNIHQQNKLWBSMTVBEUAJESQCWRCDYDMYCIFABXCHJOAZPGIRXXAVHEGBZDPLWJDXJAKKFGKLDDCPSMEEHOHMVTVIHVBOTVQJ");

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
    msg.setTimeStamp(0.9243646065438047);
    msg.setSource(38906U);
    msg.setSourceEntity(125U);
    msg.setDestination(60598U);
    msg.setDestinationEntity(241U);
    msg.sessid = 3909326570U;
    msg.messages.assign("DPMNBPWNADZZBRCRRKCNBKOOCWGVEBZTYXBVPLTUSTJLVHHOPIVDOTGMSTLYBKHNGPJQYZDQSEBMYMFRWWYAJRIQSKUQOZHLEIEDFJBCQUFBEGNSQKUJPKWZ");

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
    msg.setTimeStamp(0.5938113230563035);
    msg.setSource(63374U);
    msg.setSourceEntity(121U);
    msg.setDestination(59937U);
    msg.setDestinationEntity(173U);
    msg.sessid = 2767786059U;

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
    msg.setTimeStamp(0.4368206564254581);
    msg.setSource(14904U);
    msg.setSourceEntity(206U);
    msg.setDestination(62409U);
    msg.setDestinationEntity(121U);
    msg.sessid = 3062777227U;

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
    msg.setTimeStamp(0.5939807748416005);
    msg.setSource(37934U);
    msg.setSourceEntity(57U);
    msg.setDestination(27490U);
    msg.setDestinationEntity(111U);
    msg.sessid = 4153563186U;

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
    msg.setTimeStamp(0.5442626743553913);
    msg.setSource(46015U);
    msg.setSourceEntity(165U);
    msg.setDestination(38456U);
    msg.setDestinationEntity(39U);
    msg.sessid = 1324053903U;
    msg.status = 16U;

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
    msg.setTimeStamp(0.44313307391885526);
    msg.setSource(28471U);
    msg.setSourceEntity(234U);
    msg.setDestination(58729U);
    msg.setDestinationEntity(174U);
    msg.sessid = 4117805344U;
    msg.status = 170U;

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
    msg.setTimeStamp(0.5224255086688203);
    msg.setSource(43982U);
    msg.setSourceEntity(111U);
    msg.setDestination(15466U);
    msg.setDestinationEntity(109U);
    msg.sessid = 1117544170U;
    msg.status = 251U;

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
    msg.setTimeStamp(0.77672350718517);
    msg.setSource(22281U);
    msg.setSourceEntity(175U);
    msg.setDestination(6591U);
    msg.setDestinationEntity(75U);
    msg.name.assign("YUYMJSHSTWBUJZPHVTLLNRWGIKXCKEXZGCMRFFYOAYPVKEBYSYVENYAPAAORVXJCRNINXJFXHUHAIMASOJBFQYNBEIWZWLGOUTDTZNBRNKXTTXBODTJAOQQFELJKYKIMCZHOLDNILVBUEWJIQHKLKCBVNKGUYVQFMEWOSWP");

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
    msg.setTimeStamp(0.7121472350397791);
    msg.setSource(8224U);
    msg.setSourceEntity(203U);
    msg.setDestination(40224U);
    msg.setDestinationEntity(118U);
    msg.name.assign("GCSCRNRXRWSZJDZTCOYUNTNYQGMXIGZUKPDMXEVKWMBLOYCBVFPSUOFTPCAMZQEIKILQOUGPCFNRNDFWFUJWEQEVVHANDYDDVBBMXSRJFXTYHZPKZPYTSLWHDXKIWGLBIRRAW");

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
    msg.setTimeStamp(0.012639670879324605);
    msg.setSource(26533U);
    msg.setSourceEntity(51U);
    msg.setDestination(11972U);
    msg.setDestinationEntity(8U);
    msg.name.assign("BODLENHISLCBQIUAGXZSYKOAWJEBRZCCRVUXCECBYFITC");

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
    msg.setTimeStamp(0.31977279901159705);
    msg.setSource(4939U);
    msg.setSourceEntity(91U);
    msg.setDestination(21689U);
    msg.setDestinationEntity(167U);
    msg.name.assign("AFKDEMBHEIGBBEOZUPAYCFIIVETRCNUKDYIKMMZWQGGKQHBVNTHFADDDEPGODPKZBUNYFTQVHWXADAOSYZWSMHXLGDSHFYSOEOVLMBGKCEZPQIVIPZFDXUNWVRCMGAUSJKTNCATVTELZHRPRQYY");

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
    msg.setTimeStamp(0.5028759183308888);
    msg.setSource(32550U);
    msg.setSourceEntity(19U);
    msg.setDestination(33653U);
    msg.setDestinationEntity(208U);
    msg.name.assign("JARORCFLEAWYMKUHSPAIZOGOZXTZDMNRWMEDABEZMYQEESKSCGCJUGUQMAXIVVTTNNOGXRLTXSWFFPPCVREJTRAKQNLAWHTHFVEDBKWQSNAMKAWTNIGCTYPNLXXNBQXIBUPYYAHPIMYGGCVSUHWSGVPZOWRJITPHHVFBYRDENCZZFUQDURJSUUMXKWYVLFQGZNBWJEHZOODXMFQBLLOPCDLKJVVFYROSDLEIZ");

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
    msg.setTimeStamp(0.6724616547037192);
    msg.setSource(53763U);
    msg.setSourceEntity(174U);
    msg.setDestination(40614U);
    msg.setDestinationEntity(172U);
    msg.name.assign("FNKTRNLXCNXNPNCLVDQVAFUBSEADIURZHMZSGVFUCJHJKQYIBLEOHZHABWBCRMXKLINUXJBQUKCAQSYEMHSOGVJUJIORGSSQEYCPRDDZFOATSVQYMBPJLOYTXURYZRDOITJKPGOHDKCY");

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
    msg.setTimeStamp(0.8275322648748463);
    msg.setSource(38442U);
    msg.setSourceEntity(149U);
    msg.setDestination(50720U);
    msg.setDestinationEntity(14U);
    msg.type = 231U;
    msg.error.assign("ORZITWMHAVHKFVMPJJXKYQTTS");

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
    msg.setTimeStamp(0.6262442958227453);
    msg.setSource(45680U);
    msg.setSourceEntity(204U);
    msg.setDestination(3521U);
    msg.setDestinationEntity(28U);
    msg.type = 8U;
    msg.error.assign("HFNVFXJHLUMERXJLZUEIRPWZMCBGTYSXCWLBMNWMUVOFESHTDXJHAD");

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
    msg.setTimeStamp(0.7023448964310387);
    msg.setSource(29678U);
    msg.setSourceEntity(202U);
    msg.setDestination(49505U);
    msg.setDestinationEntity(102U);
    msg.type = 20U;
    msg.error.assign("QZPPHOTWBSNMRXSUAFKHBGDNNAZJ");

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
    msg.setTimeStamp(0.23388387237686226);
    msg.setSource(56572U);
    msg.setSourceEntity(176U);
    msg.setDestination(48549U);
    msg.setDestinationEntity(182U);
    msg.seq = 20069U;
    msg.sys_dst.assign("GTZJRMMYQOGOFHOHFTQWIYYZLYTFXKVLPJAEYQIVZOSWFAUDIUUUHRRDJPAQBIZRNPLBQMGIMVHOPSDFQTFVSNMASDESBHTNUDZHHBXTLNNTUXYNFGOBPPDAMUTHSOZKCEJCYJPEGCOKMWJWYXBPSEEJRKCFWNGXLQZXSVAAGCOPKZVZXOGUBPCIUMRBMGKHDDLXLDQJTBVCRSWIAEJCIYQWWIUTVNKEERWRCSILNNAKX");
    msg.flags = 77U;
    const char tmp_msg_0[] = {74, 52, -117, -79, -91, 48, 90, -27, 51, 47, 2, -14, -98, -57, -65, 121, -49, -44, -30, 56, 78, 110, 11, -120, -24, -51, -117, -27, -50, -110, 86, -92, -44, -10, 72, -122, 112, 69, -82, -89, -16, 101, 75, 109, 49, 23, 82, 5, 112, 121, 52, -24, -12, 97, 51, -99, -8, 99, -68, 98, -37, 57, -109, 126, 16, 123, -10, 99, -33, -14, -13, -20, -10, 67, 47, -113, -28, -70, 40, -107, -100, 27, -17, -103, -33, -91, -27, -128, -11, 122, -49, 72, -89, 122, 30, 116, 122, 40, -93, 78, -91, -121, 100, 18, 7, 95, -68, -99, -100, -113, -86, -84, -96, -113, -92, 70, -113, 94, -75, -119, 35, -20, 21, -61, -23, -15, 5, -23, -57, 32, -44, 110, -9, -98, -117, 124, 12, 62, -62, -106, 20, -61, 94, -68, 51, -67, 58, 42, 35, 116, -83, -107, -108, 18, 12, -7, -41, 101, 53, -127};
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
    msg.setTimeStamp(0.1300970276719382);
    msg.setSource(64388U);
    msg.setSourceEntity(242U);
    msg.setDestination(41103U);
    msg.setDestinationEntity(69U);
    msg.seq = 52576U;
    msg.sys_dst.assign("KDFMFRQUJMEZBIICISXJGXEKLLLBLEGXCQDBCLASWTVHUQWBTTZBZSTKJQQNEPSO");
    msg.flags = 90U;
    const char tmp_msg_0[] = {86, 120, -62, -50, 46, -92, -125, 94, -25, 119, -81, 113, -106, -120, -35, 118, 7, 77, -43, 11, -37, -40, 104, -73, 59, -121, -57, 125, -114, -41, 56, 102, -14, -93, 82, -34, 7, -78, 108, 82, 27, 66, 25, -124, 52, -89, -67, 74, -100, 7, -85, 97, 38, 87, -12, -16, -50, 43, 109, 115, -43, 15, -78, -40, -25, 11, 124, 114, -30, -90, -91, 94, -2, 87, 67, -86, -26, -20, 124, 90};
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
    msg.setTimeStamp(0.029318698388260955);
    msg.setSource(24209U);
    msg.setSourceEntity(137U);
    msg.setDestination(36135U);
    msg.setDestinationEntity(187U);
    msg.seq = 10571U;
    msg.sys_dst.assign("OWPAKLHRVEDVGFIDBXBRPVEUICNKHYKPBMNQXAZMRCPFNOQOPDTNFCPMRHQUORLPVWJUAYYAMYIKPTYOIC");
    msg.flags = 46U;
    const char tmp_msg_0[] = {75, -90, 63, 103, 39, -29, 65, 88, 44, 92, 31, -47, -112, -106, -6, -116, -106, 79, -47, -92, -84, 103, 97, -116, 94, -78, 89, -120, -125, -55, 5, -83, -59, 22, 14, -88, 70, 27, -120, -76, -52, 29, -46, 98, 87, 70, -15, 43, -103, 105, -85, -121, -110, 0, -12, -118, -99, 114, -107, -42, -28, 121, 82, -75, -77, -57, 98, -35, -128, 31, 21, -1, -100, -121, -119, -35, -35, 98, 24, 109, -18, 59, -79, -43, -108, -64, 91, -75, 68, -112, 54, 92, -79, 55, 37, -109, 109, -32, 81, -50, -67, 33, 115, 65, 108, 35, 85, 106, 117, -27, -82, -97, 29, 81, -125, -26, -86, 119, 36, 43, 18, -9, 25, 106, 34, -29, -23, 25, 37, 101, 53, 126, 18, -13, 124, -75, 16, 101, -115, 114, 14, -121, -114, 45, 103, 16, 120, -57, 24, -6, 124, -20, -23, 122, -82, -102, 123, 122, 59, 38, -51, 119, -82, 94, -4, -121, -40, 88, 74, -11, 98, -114, 9, -127, 42, -35, -78, -73, 70, -67, 82, -46, -49, 68, 35, -43, -68, 70, -89, -9, 121, 50, 9, 10, -79, 103, 34, -54, 104, 59, 122, -8, -76, 34, 83, -101, -39, 106, -69, 122, -99, -84, 74, 15, -52, 21, 3, -68, -98, 7, -37, 29, 60, 69, 28, 117, 16, 123, -63, 110};
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
    msg.setTimeStamp(0.23647525828676308);
    msg.setSource(48506U);
    msg.setSourceEntity(240U);
    msg.setDestination(50513U);
    msg.setDestinationEntity(129U);
    msg.sys_src.assign("UDWFALCGGUOANZYVTOZJCJSBGVDFXGXITCROHJDLIPQIGGYXFMQYNTCFGYIZNPMDNSDLQQMQOHQQURBDBKMZXWTGJDRWWSEGWZBCLXJVYPRUNIWAUCXDHKSHMPMZQVGRLSRPEDKUXYQWNJFKOKMEDLZJHBOZTKAPAKCQABBCKWCRNELUATZEIHFLMESIEBWFEBVONVNVAOXYHCLVNJIMHFPSXBSVPLRJZKUIEROUTF");
    msg.sys_dst.assign("HFHUVMQKGZNJWODMPOTUPTEGGYZQRUDYECKSCPVWIABGDJCLLHPAJJAMFUVGNXKSSBQJBKUZVQBALXEFRWHWFAJVZSHYQTTARFZZOEFCTOSDZEJCTCYBLRXNAXTBHWDFNNDOEXQIBDBXYORJEQGSVXIRXR");
    msg.flags = 87U;
    const char tmp_msg_0[] = {123, 37, -103, 49, 52, -59, -81, -83, -67, 82, 3, 61, 39, -77, 23, -126, -7, 125, 110, 94, -41, -31, 75, -16, -114, -54, 105, -105, -31, 14, 88, -100, 84, -72, -10, -92, -81, 49, 31, 100, 83, 83, -95, -121, -61, 81, -27, 98, -32, 86, 6, -35, 22, 60, 117, -51, 36};
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
    msg.setTimeStamp(0.5071418057261288);
    msg.setSource(46068U);
    msg.setSourceEntity(35U);
    msg.setDestination(65046U);
    msg.setDestinationEntity(77U);
    msg.sys_src.assign("QFRIIDYRLJYDXKXWYUETISPHCIHMYLCWFQBGVWWBKIXVLYDHADOJOWDJOUIMCGYMTMDZYRSKJCMURLIGPTLPUKTCMGHZEMHZNQUTBAXAFGEKDMXBVIUHXAQSOSJQOXHCWSLTPPPBVERQSVZRL");
    msg.sys_dst.assign("NSTRLSCUMWOAXGKRGGDFTVHNFIRCVOSUQXFYRMHXSRPRPJOYBQLXOWHNJQLBZDLBOIJCNBISUWQJMVQQAGWPSWIWUXGPEURBQKYANVCKYJKCUDKIYECOHVYFAPJZJWLZXKNSTZPMGSFTKCANUTJRWCMROEFOFEFLZV");
    msg.flags = 173U;
    const char tmp_msg_0[] = {-116, 42, 118, -30, 34, -77, 3, -37, -96, -105, 126, -73, 69, -105, 113, 74, -40, -44, 89, -29, -83, 92, -113, 76, 27, -40, 27, -126, -117, -36, -54, -83, 38, -85, -7, -15, 12, -5, 20, 79, -52, -5, -52, -55, -121, 15, 50, -101, 45, -108, 117, -51, 70, -110, -69, -65, 1, -31, -71, 71, 123, 82, -115, 90, -13, 57, -60, 75, -100, -43, 26, -118, 50, 7, 52, 34, 0, 45, -36, 9, -37, 118, 14, -37, -102, 1, -118, -80, -93, 125, -46, -89, 89, 61, -78, 102, -55, 3, -36, -24, -117, 59, 95, 45, 3, 100, 72, -79, -64, -66, -25, 25, 81, 70, 120, 97, -116, -82, -92, 37, 20, 29, -40, 71, -28, -118, 121, 45, -31, -123, -18, -75, 83, 57, -126, 106, 104, 50, -72, 20, -119, -58, -120};
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
    msg.setTimeStamp(0.21786020916644966);
    msg.setSource(28801U);
    msg.setSourceEntity(91U);
    msg.setDestination(32923U);
    msg.setDestinationEntity(196U);
    msg.sys_src.assign("HWXJUISSRVWRSGOSJHEXRYVIDMNBNQZVVBDOYBLFELJWJQHXPCVXUCKGGBDEKECKWGXRRFBBGUTWMEWOAQHKWUIDPPRSGNKNISQWLMMQLFPZCZZUWQMHQQFPGWPEYLGPAFLAYIUAPJBLVDXDOGIFQRXRGJEHBZMKZYTTEKPOKATSAXSRMUKZANDAHUTS");
    msg.sys_dst.assign("EIPABVGERFBIYKVZEQBSITFZHIFZJRJCYHAGROPPXJRANJJNCYKXGATPGDBMIPYDAMYKYZCANQMNSTARAXHMOFYWGMBTSTEQPWQGPMCQVTHVUUDTLAJXJCHCSKCCOLOWQSBLSPZHGUVMUZPXODBBKVTYGNJVZVFYKTSNLNLFIPR");
    msg.flags = 105U;
    const char tmp_msg_0[] = {78, 32, -27, 6, -122, -8, 28, -32, 15, 44, 46, -32, 13, -97, 123, 29, -71, 18, -30, -66, -51, -103, 32, -13, 117, -17, -54, 76, 111, 88, -68, -63, -54, -98, -75, -92, -104, 71, 35, -50, 117, -57, 29, 85, -107, -6, -91, 58, -39, 29, -113, 62, -66, -4, -3, -59, 81, 102, -63, -101, -123, -66, -102, -90, 115, -13, -61, 111, 108, -60, 90, 99, 107, 123, 58, 80, -49, -62, -126, 63, -78, -127, 88, -59, 82, 116, -116, 13, 56, -17, -40, 6, -118, 63, 41, 86, -116, 16, 99, 93, -75, 119, 3, -23, -119, -46, 42, 66, -97, 104, -5, -87, -45, 13, 40, -87, -1, -62, -2, -106, 33, 78, -100, 113, 79, -46, 18, -8, 73, 59, -94, 14, 2, -104, -77, 38, -107, -57, -62, 14, 12, 101, -118, -128, 124, -28, 120, 13, 63, -90, -101, 23, 44, -70, -100, -33, -116, -25, 12, -57, -71, -116, 109, 54, -115, -101, 109, 42, 62, 105, -88, -13, 62, 82, -15, -87, 4, 35, -117, 117, 43, -41, -58, 66, 66, -83, -37, -55, -125, 124, 69, 113, -33, 34, -91, -51, 49, 126, -52, -8, 0, 92, 26, 79, 116, -94, 76, -54, 10, -71, -86, -83, -11, 35, -87, 4, -42, -5, -90, 88, 64, 59, -101, -1, 40, -77, 54, 77, -72, -102, -32, -72, -55, -9, 25, -74, -14, -83, -84, 114, 96, 95};
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
    msg.setTimeStamp(0.5085764893931844);
    msg.setSource(42543U);
    msg.setSourceEntity(123U);
    msg.setDestination(30018U);
    msg.setDestinationEntity(5U);
    msg.seq = 55255U;
    msg.value = 112U;
    msg.error.assign("ZIDJWLAVLYROSJAMVBTZKFRLULQZGZEXEMKSPXIXIMBRGAHJBUTNKXHCEVVFQKGUOTUDSKYRYINXCQRIPCEYVWLCDWZJSP");

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
    msg.setTimeStamp(0.8694206763766108);
    msg.setSource(46936U);
    msg.setSourceEntity(173U);
    msg.setDestination(7652U);
    msg.setDestinationEntity(210U);
    msg.seq = 24987U;
    msg.value = 92U;
    msg.error.assign("BCANMSLCQRYSZPHVJBPZWXQFKWLCLDDTICMOXGBOUKRLXLYKFKQSJNWKTHDMLQOJTTKRFNKWYGAPAHPMQXQVZXRPA");

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
    msg.setTimeStamp(0.4941157283273414);
    msg.setSource(38634U);
    msg.setSourceEntity(203U);
    msg.setDestination(42687U);
    msg.setDestinationEntity(246U);
    msg.seq = 32312U;
    msg.value = 136U;
    msg.error.assign("MCDAHOKZHJHASLCZRCETQQAXWSXVMUBPYORZQTSRPGCJUHMUJTEUWJMGBGGSLNKDVDFIUEXCPQHHKUIJLSPYPBJDHFLMUTPBPBVRYKJQFYLLAGIOWVWOBMSMNEHXAOGTWFMCQIYNNWCGUIRFFWVHABRCKZNDTZ");

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
    msg.setTimeStamp(0.6639578571454766);
    msg.setSource(51891U);
    msg.setSourceEntity(174U);
    msg.setDestination(144U);
    msg.setDestinationEntity(11U);
    msg.seq = 6234U;
    msg.sys.assign("KWVYQTUPJIOBAEQREYXBYTCAOVZMDUPRYJTSQOQHJOMOTCHFVRQDNQUWIWILSTYKLEGVHEPJESLJTDRUKRDSVUVWNNYBBVKXHQAGDOFILFJVVHFZJBNWUGIJLADZTUMWGUPJTKLBHRRPAGCIHCXGKBOA");
    msg.value = 0.7691589682428163;

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
    msg.setTimeStamp(0.7941754051740539);
    msg.setSource(7490U);
    msg.setSourceEntity(167U);
    msg.setDestination(5143U);
    msg.setDestinationEntity(127U);
    msg.seq = 6442U;
    msg.sys.assign("SDFTSCWJQGCYMBMJYDVBXGDTJKJAMXAKWIPPAQTEPQAGJPGVXNRFFDZGHVZURDBCAEXNLVLROMDZPNUSKZUFICQKRIUWKSCIBHPSJISZWKRMFGVQIRLJFXAWMZUOQFHLNKVFMZHZSTYYTVCCJMVQ");
    msg.value = 0.46970762655415654;

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
    msg.setTimeStamp(0.795743105174895);
    msg.setSource(17739U);
    msg.setSourceEntity(138U);
    msg.setDestination(62062U);
    msg.setDestinationEntity(8U);
    msg.seq = 32711U;
    msg.sys.assign("IHBBAITKJJZHLITHPFN");
    msg.value = 0.17207038398969476;

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
    msg.setTimeStamp(0.5059760247645533);
    msg.setSource(10673U);
    msg.setSourceEntity(60U);
    msg.setDestination(527U);
    msg.setDestinationEntity(128U);
    msg.action = 234U;
    msg.longain = 0.05584945712307887;
    msg.latgain = 0.6976055891325409;
    msg.bondthick = 741867845U;
    msg.leadgain = 0.9830388996028521;
    msg.deconflgain = 0.1612570728918693;

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
    msg.setTimeStamp(0.8134258902323557);
    msg.setSource(47761U);
    msg.setSourceEntity(161U);
    msg.setDestination(10571U);
    msg.setDestinationEntity(1U);
    msg.action = 164U;
    msg.longain = 0.6020697999304209;
    msg.latgain = 0.7818173274532879;
    msg.bondthick = 4007301770U;
    msg.leadgain = 0.10426300455047666;
    msg.deconflgain = 0.048329033366893315;

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
    msg.setTimeStamp(0.8935540543492948);
    msg.setSource(11486U);
    msg.setSourceEntity(200U);
    msg.setDestination(23585U);
    msg.setDestinationEntity(55U);
    msg.action = 62U;
    msg.longain = 0.6731115061593481;
    msg.latgain = 0.6708614950319975;
    msg.bondthick = 1249082380U;
    msg.leadgain = 0.7443681199339726;
    msg.deconflgain = 0.3936087411711121;

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
    msg.setTimeStamp(0.4926698153080141);
    msg.setSource(23423U);
    msg.setSourceEntity(187U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(122U);
    msg.err_mean = 0.6437669347071127;
    msg.dist_min_abs = 0.2993054956702187;
    msg.dist_min_mean = 0.6233290065527448;

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
    msg.setTimeStamp(0.8024817471914933);
    msg.setSource(34838U);
    msg.setSourceEntity(129U);
    msg.setDestination(60209U);
    msg.setDestinationEntity(100U);
    msg.err_mean = 0.13097043257508045;
    msg.dist_min_abs = 0.7940085334536152;
    msg.dist_min_mean = 0.18105812158157175;

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
    msg.setTimeStamp(0.5713081983227714);
    msg.setSource(11706U);
    msg.setSourceEntity(206U);
    msg.setDestination(60484U);
    msg.setDestinationEntity(145U);
    msg.err_mean = 0.9145839413278374;
    msg.dist_min_abs = 0.641484185953153;
    msg.dist_min_mean = 0.22905046355320258;

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
    msg.setTimeStamp(0.18200870625276877);
    msg.setSource(59582U);
    msg.setSourceEntity(2U);
    msg.setDestination(16637U);
    msg.setDestinationEntity(110U);
    msg.action = 168U;
    msg.lon_gain = 0.7793726910244418;
    msg.lat_gain = 0.07709879940986686;
    msg.bond_thick = 0.7526197538664318;
    msg.lead_gain = 0.0280756111147773;
    msg.deconfl_gain = 0.03514257052219283;
    msg.accel_switch_gain = 0.7358541637296969;
    msg.safe_dist = 0.9859759553294808;
    msg.deconflict_offset = 0.5225645285924659;
    msg.accel_safe_margin = 0.11663563596906368;
    msg.accel_lim_x = 0.061232064338082925;

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
    msg.setTimeStamp(0.5729042921451472);
    msg.setSource(23550U);
    msg.setSourceEntity(128U);
    msg.setDestination(37843U);
    msg.setDestinationEntity(157U);
    msg.action = 23U;
    msg.lon_gain = 0.17699637611765362;
    msg.lat_gain = 0.2666761612230316;
    msg.bond_thick = 0.31365929876657594;
    msg.lead_gain = 0.9998207055884156;
    msg.deconfl_gain = 0.5506563631509944;
    msg.accel_switch_gain = 0.44585766795954873;
    msg.safe_dist = 0.2640138064660533;
    msg.deconflict_offset = 0.716782432244802;
    msg.accel_safe_margin = 0.4306135647768089;
    msg.accel_lim_x = 0.44270745215169305;

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
    msg.setTimeStamp(0.44753626358814835);
    msg.setSource(47595U);
    msg.setSourceEntity(5U);
    msg.setDestination(12993U);
    msg.setDestinationEntity(117U);
    msg.action = 143U;
    msg.lon_gain = 0.06962734646691338;
    msg.lat_gain = 0.4661047544208685;
    msg.bond_thick = 0.2670996385334484;
    msg.lead_gain = 0.21796936380261267;
    msg.deconfl_gain = 0.3737638579753293;
    msg.accel_switch_gain = 0.996432600488817;
    msg.safe_dist = 0.4690959372556821;
    msg.deconflict_offset = 0.4433427284926421;
    msg.accel_safe_margin = 0.5539512982033101;
    msg.accel_lim_x = 0.29500728578374336;

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
    msg.setTimeStamp(0.030390901901811707);
    msg.setSource(36902U);
    msg.setSourceEntity(59U);
    msg.setDestination(43459U);
    msg.setDestinationEntity(68U);
    msg.type = 231U;
    msg.op = 22U;
    msg.err_mean = 0.8101105145724989;
    msg.dist_min_abs = 0.5171543433377499;
    msg.dist_min_mean = 0.8244042033949157;
    msg.roll_rate_mean = 0.7257524502121846;
    msg.time = 0.4231337755293244;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 15U;
    tmp_msg_0.lon_gain = 0.5041079659589413;
    tmp_msg_0.lat_gain = 0.8974901377120706;
    tmp_msg_0.bond_thick = 0.7172008125272968;
    tmp_msg_0.lead_gain = 0.21724354768673082;
    tmp_msg_0.deconfl_gain = 0.3554426261285857;
    tmp_msg_0.accel_switch_gain = 0.6122936019341905;
    tmp_msg_0.safe_dist = 0.6609053240119319;
    tmp_msg_0.deconflict_offset = 0.4297904452248037;
    tmp_msg_0.accel_safe_margin = 0.8076095880762709;
    tmp_msg_0.accel_lim_x = 0.9246329512492935;
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
    msg.setTimeStamp(0.2467607066684383);
    msg.setSource(2429U);
    msg.setSourceEntity(53U);
    msg.setDestination(29965U);
    msg.setDestinationEntity(70U);
    msg.type = 117U;
    msg.op = 22U;
    msg.err_mean = 0.864883813390227;
    msg.dist_min_abs = 0.06863025028150016;
    msg.dist_min_mean = 0.1664547520682681;
    msg.roll_rate_mean = 0.2792444951429942;
    msg.time = 0.016422900962284603;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 233U;
    tmp_msg_0.lon_gain = 0.5189176564833715;
    tmp_msg_0.lat_gain = 0.8468698926877196;
    tmp_msg_0.bond_thick = 0.7694483294653287;
    tmp_msg_0.lead_gain = 0.9749448542194847;
    tmp_msg_0.deconfl_gain = 0.9133153764094496;
    tmp_msg_0.accel_switch_gain = 0.22732741861371442;
    tmp_msg_0.safe_dist = 0.38918805617176255;
    tmp_msg_0.deconflict_offset = 0.7494675223877367;
    tmp_msg_0.accel_safe_margin = 0.4507530166723517;
    tmp_msg_0.accel_lim_x = 0.5412959966697581;
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
    msg.setTimeStamp(0.38165046482363485);
    msg.setSource(21958U);
    msg.setSourceEntity(112U);
    msg.setDestination(42723U);
    msg.setDestinationEntity(70U);
    msg.type = 236U;
    msg.op = 54U;
    msg.err_mean = 0.111683791747898;
    msg.dist_min_abs = 0.5635689599363334;
    msg.dist_min_mean = 0.6207991110976743;
    msg.roll_rate_mean = 0.5517959004023761;
    msg.time = 0.932771879013631;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 75U;
    tmp_msg_0.lon_gain = 0.2885475719876379;
    tmp_msg_0.lat_gain = 0.37782073957134454;
    tmp_msg_0.bond_thick = 0.9790564865073348;
    tmp_msg_0.lead_gain = 0.6023717142138867;
    tmp_msg_0.deconfl_gain = 0.9451305260215803;
    tmp_msg_0.accel_switch_gain = 0.009950808396953725;
    tmp_msg_0.safe_dist = 0.3848153193247372;
    tmp_msg_0.deconflict_offset = 0.26565755640171884;
    tmp_msg_0.accel_safe_margin = 0.6270530217470364;
    tmp_msg_0.accel_lim_x = 0.6779020969148978;
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
    msg.setTimeStamp(0.41452304988030475);
    msg.setSource(4955U);
    msg.setSourceEntity(36U);
    msg.setDestination(56806U);
    msg.setDestinationEntity(76U);
    msg.uid = 161U;
    msg.frag_number = 38U;
    msg.num_frags = 152U;
    const char tmp_msg_0[] = {-8, 20, -74, -70, -40, -121, -101, 118, -73, -71, -14, -70, -52, 97, 32, -74, -3, -78, 24, 118, 114, 97, -31, -102, 117, 66, -25, 13, -4, -61, -122, -65, 90, -32, -106, -125, -44, -4, 116, -72, -118, -47, -118, -29, -3, 121, 122, -39, 26, 126, 32, 46, -106, -27, 42, 32, -44, 75, 31, -17, 24, -45, 47, -19, -54, -63, -14, 48, 4, 106, 52, 15, -78, -90, -27, -80, 58, 82, 92, 116, -81, -92, -75, 51, -113, 17, 97, 20, 76, 78, 23, -112, -70, 117, -102, 49, 89, -31, 86, -124, 29, 90, -61, 19, 123, -12, -91, 67, -80, 108, -69, -29, -80, -75, 63, 69, 19, 104, -29, 44, -50, 61, 38, -126, 44, 8, 96, 94, 68, -22, 39, -55, -13, 84, -52, -6, 19, 86, -59, 16, -96, -60, -111, 15, -95, 92, 26, -60, -48, -100, 124, -62, 24, 84, 68, 100, 22, 59, -90, 17, 113, -33, -84, -27, -77, -120, 96, -95, -10, -6, 122, 67, -56, -104, 28, -29, -91, 21, -92, -75, -9, 67, -67, 121, -4, -60, 61, -70, -110, -52, 84, 108, 33};
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
    msg.setTimeStamp(0.8565721358700349);
    msg.setSource(42974U);
    msg.setSourceEntity(0U);
    msg.setDestination(35566U);
    msg.setDestinationEntity(132U);
    msg.uid = 77U;
    msg.frag_number = 228U;
    msg.num_frags = 236U;
    const char tmp_msg_0[] = {114, 13, 62, -58, 102, 102, 31, 71, -25, -56, -98, -88, -53, -28, 108, 92, 45, 74, 41, -103, -41, -58, -7, -100, -51, 6, -40, -98, 30, 89, 1, -55, 42, -113, -55, -95, -54, -16, 93, -84, 86, -91, -33, -110, 14, -118, -57, -111, 36, -71, 35, -92, 116, -88, 101, 122, 39, 90, 79, -113, -125, 51, 0, -13, -45, 51, -87, 3, 14, 33, 56, 111, 9, 84, -119, -128, -44, 75, 22, -31, 69, -76, 4, -73, 57, -95, 116, 97, -18, 35, 78, -116, -47, 76, -72, -93, -28, 109, -22, 66, 15, -45, -125, -43, 87, 125, 36, 30, 75, 55, 69, -106, -106, 124, -33, 85, -116, -19, -31, -111, -19, 77, 73, 43, 96, -124, 4, 75, -29, -112, -65, -72, -20, -35, 107, -78, 58, -93, -112, 89, 23, -43, -17, 49, -105, 6, -111, -27, 82, 8, 108, 32, -3, 72, -1, -9, -2, 26, -12, -100, 103, -57, -52, -92, -43, 31, -110, -18, 42, 30, 20, 21, 11, 49, 87, -114, -33, 77, 110, -93, 76, -99, 71, 43, -11, -8, -98, -97, -57, 93, 57, 14, -20, 54, 13, -110, 37, 39, 62, 74, -122, -28, 40, -30, -16, 76, -64, 53, -10, -94, -10, -127, -66, 96, -22, 40, 7};
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
    msg.setTimeStamp(0.04455675437084894);
    msg.setSource(57448U);
    msg.setSourceEntity(209U);
    msg.setDestination(27012U);
    msg.setDestinationEntity(141U);
    msg.uid = 38U;
    msg.frag_number = 192U;
    msg.num_frags = 190U;
    const char tmp_msg_0[] = {-88, 52, 14, 112, 58, -128, 86, -116, -73, -11, 71, 42, -10, -88, -26, -105, -47, -45, -80, 121, -58, 102, -76, 93, 8, -47, -17, -77, 53, 10, -83, -87, 126, 13, -43, 64, -19, -76, -6, 96, -15, -64, -32, -99, -97, -66, 85, -78, -122, 66, -8, 4, 76, 50, 58, -86, -44, -109, -85, 72, 104, 14, 59, 62, 43, 87, 58, -15, 125, 77, 89, -44, -97, 87, 126, 97, -118, 45, 85, -92, -119, 76, -128, 38, 79, 37, -54, 98, 48, 61, 93, -26, -118, -124, 125, 48, -57, 25, -63, 114, -106, -94, -70, 42, -112, 27, -15, -29, 117, 118, 70, 20, -12, 94, -100, -25, 126, 58, 13, 25, 10, 122, -119, -8, 14, -17, -15, 112, 121, -85, -49, 76, 65, 89, 51, -28, 48, -79, -66, 35, -75, 28, 12, 20, 91, 39, -76, 125, 15, 12, -14, -34, 80, -114, 75, 70, 114, 112, 74, 79, -23, 124, -105, 116, 90, -107, 75, -78, 66, 27, 118, -73, 115, 43, -79, -41, -109, -79, -66, -89, 95, -5, 65, 72, 93, -45, -44, -9, 36, -95, -113, 118, 56, 111, -110, -26, -52, -66, 61, 29, -81, -23, -121, 4, -69, 123, 0, -109, 124, 83, 114, -33, 55, 83, -6, -24, -47, -43, -77, -49, -97, 0, -11};
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
    msg.setTimeStamp(0.9927922219812946);
    msg.setSource(56771U);
    msg.setSourceEntity(92U);
    msg.setDestination(21627U);
    msg.setDestinationEntity(245U);
    msg.content_type.assign("COUEQUUNRDYFBQIWQAVDQRPHULWCWNXREVADSVMAMLGZPXGFULGXMUENFJRPCKTHJLKTCHBGNCZMAMFDFOJPMVSKWHFCP");
    const char tmp_msg_0[] = {-52, 91, -52, -108, 58, -61, -34, 52, -16, -8, -127, -57, 52, -72, -10, -104, 5, 114, -61, -97, 14, 118, 28, -17, 125, -51, 107, 87, 93, -96, 20, 113, 38, 21, 24, 2, 21, 51, -105, -91, 24, -122, 34, 94, -27, 72, 49, -59, -5, 108, 30, -27, 109, 2, -8, -5, 19, -3, 22, 123, -80, -79, 22, -41, 32, -34, 40, 3, -54, 62, -56, 96, -71, -50, 110, -127, -106, -90, -64, 105, -30, 80, 38, -111, -36, -69, 70, 78, 122, -119, 106, -32, -85, -58, 6, -55, 44, 107, 3, -91, -4, 113, 81, 102, 102, -27, 3, -33, 115, 33, 108, -116, 112, -90, -50, 97, -74, -77, -90, 30, 109, 92, 112, -71, 84, -37, -77, -71, 38, 38, 87, -21, -43, 93, 33, -23, -25, -71, -95, -14, 113, 41, -43, -42, 6, -85, 115, 126, -92, -32, -76, 28, -91, 99, 79, 82, -6, -24, -44, -85, 66, -97, -77, -121, -47, -122, -46, 79, -37, -32, -52, 116, -21, -44, 116, -110, -25, -17, -69, 12, 123, -114, 100, -32, 85, -96, -28, -54, 19};
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
    msg.setTimeStamp(0.8871951234013782);
    msg.setSource(48741U);
    msg.setSourceEntity(154U);
    msg.setDestination(45540U);
    msg.setDestinationEntity(33U);
    msg.content_type.assign("HRMBUJNYCCWHYSNWZOMBWLTUSGWUGZ");
    const char tmp_msg_0[] = {-59, -35, -1, -48, 125, 64, -72, 93, -50, -67, 50, -120, 42, -92, -19, 110, 34, -79, 122, 58, 82, 48, 70, -100, -86, 4, 24, 105, -102, 4, 71, 47, -82, 3, 30, 34, -55, 3, -91, 97, -45, -53, -36, -61, -14, 24, -63, 123, -45, 49, 23, 26, -80, 106, 73, 67, -46, -119, 38, 25, 24, -68, 104, -5, -99, 87, -33, -118, -60, -79, 3, -114, 69, -128, 11, 74, -68, 49, -10, -36, 59, -82, 106, -10, 92, -72, -99, -78, 92, -19, -10, -12, -67, 113, -64, -78, -22, 35, 102, -12, 64, -97, -82, 40, -120, -89, -117, -79, -106, 6, 8, 70, -60, -11, -51, 104, 22, -16, -23, -51, -118, 98, 68, 125, 120, -93, 40, -86, 68, -118, -85, -101, -73, -45, 121, -90, -66, -50, 13, -37, -81, -21, 76, 84, -45, -12, 24, 27, 25, -51, 66, 92, 30, 98, -48, -121, -13, 60, -50, 42, -61, -12, -78, -65, 87, 83, -3, 72, 30, 106, 28, 106, 34, -2, -38, 68, 104, -37, -3, -103, 123, 106, -89, -8, -11, 105, -10, -111, -75, 83, -55, -21, 4, -26, -78, 87, -37};
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
    msg.setTimeStamp(0.9701696447356094);
    msg.setSource(54888U);
    msg.setSourceEntity(155U);
    msg.setDestination(26963U);
    msg.setDestinationEntity(93U);
    msg.content_type.assign("TKRNGUCPICBOSUSRZSMVZOLVDIITZCHYRLVJXAHGBPHPJEMGPWW");
    const char tmp_msg_0[] = {-10, -117, 24, -64, 84, -111, -4, 32, 33, 0, 99, 108, -6, -79, 64, -109, 34, 104, 121, -17, 22, -108, -60, -60, -115, 48, -9, -7, 30, 44, 5, 71, -95, 16, -117, -7, 2, -86, 9, 71, -48, -58, -109, 121, 54, -119, -113, 3, -93, 31, 77, 61, -79, 120, -107, -63, 19, 36, 111, 95, 91, 53, -107, -23, -125, -54, 41, -127, 25, 7, 44, 105, 88, 76, -22, 121, -125, 61, -64, 38, 43, -21, 123, 56, 35, 95, -70, -110, -68, 13, 44, -124, -36, -32, -38, -112, -69, -123, 113, -117, -107, -29, -63, 20, -95, -111, 68, 84, 108, 121, -52, -22, -114, -103, -16, 47, 89, -52, -78, -105, -97, -55, -47, -117, 66, -25, -14, -12, -84, 72, 121, 37, 99, 106, 96, 63, -98, -123, 93, 10, -9};
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
    msg.setTimeStamp(0.3193081606733198);
    msg.setSource(34702U);
    msg.setSourceEntity(192U);
    msg.setDestination(35797U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.6137486484013847);
    msg.setSource(53989U);
    msg.setSourceEntity(96U);
    msg.setDestination(5787U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.6324086460968826);
    msg.setSource(6978U);
    msg.setSourceEntity(34U);
    msg.setDestination(30791U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.09193125510009215);
    msg.setSource(46636U);
    msg.setSourceEntity(152U);
    msg.setDestination(30785U);
    msg.setDestinationEntity(75U);
    msg.target = 39291U;
    msg.bearing = 0.10444177946992206;
    msg.elevation = 0.43201480499015243;

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
    msg.setTimeStamp(0.9988085225807992);
    msg.setSource(34424U);
    msg.setSourceEntity(54U);
    msg.setDestination(40763U);
    msg.setDestinationEntity(148U);
    msg.target = 64429U;
    msg.bearing = 0.13701620250887447;
    msg.elevation = 0.25051161645055897;

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
    msg.setTimeStamp(0.42061940820874355);
    msg.setSource(25478U);
    msg.setSourceEntity(215U);
    msg.setDestination(5501U);
    msg.setDestinationEntity(92U);
    msg.target = 62800U;
    msg.bearing = 0.004520657761528435;
    msg.elevation = 0.7365742961109971;

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
    msg.setTimeStamp(0.19277914967529675);
    msg.setSource(3199U);
    msg.setSourceEntity(64U);
    msg.setDestination(58940U);
    msg.setDestinationEntity(139U);
    msg.target = 44295U;
    msg.x = 0.8719017638425861;
    msg.y = 0.42903593329176404;
    msg.z = 0.7889055025634196;

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
    msg.setTimeStamp(0.4102453798270409);
    msg.setSource(62865U);
    msg.setSourceEntity(25U);
    msg.setDestination(25632U);
    msg.setDestinationEntity(39U);
    msg.target = 35756U;
    msg.x = 0.9253159807489018;
    msg.y = 0.046055143930103015;
    msg.z = 0.7153956821582912;

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
    msg.setTimeStamp(0.30122270254263006);
    msg.setSource(36254U);
    msg.setSourceEntity(172U);
    msg.setDestination(50977U);
    msg.setDestinationEntity(40U);
    msg.target = 39426U;
    msg.x = 0.5832604393379852;
    msg.y = 0.578878786995294;
    msg.z = 0.5997240402406222;

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
    msg.setTimeStamp(0.6930011697320896);
    msg.setSource(65404U);
    msg.setSourceEntity(216U);
    msg.setDestination(33404U);
    msg.setDestinationEntity(205U);
    msg.target = 29915U;
    msg.lat = 0.9583064834900946;
    msg.lon = 0.08898924232815497;
    msg.z_units = 126U;
    msg.z = 0.6210446736952967;

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
    msg.setTimeStamp(0.21175953649377177);
    msg.setSource(24604U);
    msg.setSourceEntity(238U);
    msg.setDestination(37528U);
    msg.setDestinationEntity(235U);
    msg.target = 33315U;
    msg.lat = 0.062433412497148955;
    msg.lon = 0.793791287577181;
    msg.z_units = 18U;
    msg.z = 0.9055584913347453;

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
    msg.setTimeStamp(0.35818715200160334);
    msg.setSource(3429U);
    msg.setSourceEntity(80U);
    msg.setDestination(43040U);
    msg.setDestinationEntity(105U);
    msg.target = 28845U;
    msg.lat = 0.1902238661165745;
    msg.lon = 0.6837430776866545;
    msg.z_units = 153U;
    msg.z = 0.2747996181373439;

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
    msg.setTimeStamp(0.47527145623106215);
    msg.setSource(28740U);
    msg.setSourceEntity(112U);
    msg.setDestination(60004U);
    msg.setDestinationEntity(27U);
    msg.locale.assign("PUVKVDOXXWRKQMGCNVBVNTMXJJTUBNVQDWLAJIKNLCTWIVSZPFCAKSYOYFIGWUOPBJMNARPDXWUZMAXHCBZECPBEXSXFRBHZNRNPZHUDOWSBMQPLYUIMYGQJSRFHYIHQJSFDBNFAMTXUETQHCEDHUXNPSARGLKFAJTOTYKJGELYITRAFQRRIYQUZSECHQGILLYUFVITEWKOGKDPDLKDOQOVZCRWMOKSAWVZX");
    const char tmp_msg_0[] = {-112, -123, 7, -78, 107, -114, 48, 59, -84, 113, -2, 111, 115, -90, -61, 83, 59, 8, 28};
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
    msg.setTimeStamp(0.01567703527411579);
    msg.setSource(2243U);
    msg.setSourceEntity(149U);
    msg.setDestination(62754U);
    msg.setDestinationEntity(164U);
    msg.locale.assign("HGCSOYVKPLFGPRSMCZEKSRPDDBCMDAENLTLCXXETQLLQAYOYAHDFTRFYJWNFUIXCDODBGJFXSWOYOZQNHHSOVZNRLI");
    const char tmp_msg_0[] = {-40, 57, -125, -5, -20, 57, 121, -92, -66, -37, 108, 28, -110, -41, 125, 97, -33, 0, 98, -122, -22, 58, -38, -100, 106, 54, -108, -121, -80, -1, -76, 6, -60, 122, 44, -26, -61, 126, -115, 100, 54, 75, -14, -24, 19, -96, 0, -110, -93, 117, 84, -108, 14, 120, 11, 90, -128, 119, -5, 40, 93, -71, -68, -12, -45, 88, -54, -12, -97, -85, -95, 68, 95, 32, -87, 94, 12, -53, 1, -26, 50, -58, 39, 87, -81, 74, 76, 11, -113, 124, -82, -77, -29, 56, 19, 46, -121, -90, -80, 83, 2, 112, -81, 90, -43, 66};
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
    msg.setTimeStamp(0.5679957412718121);
    msg.setSource(55026U);
    msg.setSourceEntity(154U);
    msg.setDestination(19086U);
    msg.setDestinationEntity(181U);
    msg.locale.assign("DIKNIOKHTDFOOVNRWXPLLOLMLJURLXEBVKYZSYOYQPPJRS");
    const char tmp_msg_0[] = {-14, -59, 67, -93, -61, -54, 7, -19, 59, -11, -77, -118, -60, 52, -36, 95, 63, 22, -95, -46, -93, 112, -1, 104, 41, -22, 44, 5, -68, -117, -57, 124, -52, 124, 40, -78, -114, -123, -57, -17, -59, -109, 28, -22, 69, -108, -57, -34, 20, -121, -111, -29, -92, -29, -85, 111, -67, -79, -22};
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
    msg.setTimeStamp(0.7837993008163682);
    msg.setSource(59046U);
    msg.setSourceEntity(133U);
    msg.setDestination(37104U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.9242121878020905);
    msg.setSource(30988U);
    msg.setSourceEntity(204U);
    msg.setDestination(57254U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.39276205035106304);
    msg.setSource(21933U);
    msg.setSourceEntity(90U);
    msg.setDestination(55473U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.3511863029939364);
    msg.setSource(56933U);
    msg.setSourceEntity(68U);
    msg.setDestination(27732U);
    msg.setDestinationEntity(81U);
    msg.camid = 172U;
    msg.x = 13583U;
    msg.y = 47223U;

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
    msg.setTimeStamp(0.35361604934010893);
    msg.setSource(23682U);
    msg.setSourceEntity(176U);
    msg.setDestination(41867U);
    msg.setDestinationEntity(62U);
    msg.camid = 36U;
    msg.x = 38626U;
    msg.y = 7026U;

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
    msg.setTimeStamp(0.6976204578435894);
    msg.setSource(37053U);
    msg.setSourceEntity(209U);
    msg.setDestination(16683U);
    msg.setDestinationEntity(248U);
    msg.camid = 90U;
    msg.x = 7814U;
    msg.y = 39779U;

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
    msg.setTimeStamp(0.67042566282854);
    msg.setSource(4922U);
    msg.setSourceEntity(13U);
    msg.setDestination(19770U);
    msg.setDestinationEntity(212U);
    msg.camid = 64U;
    msg.x = 11068U;
    msg.y = 52133U;

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
    msg.setTimeStamp(0.3065432460935259);
    msg.setSource(54678U);
    msg.setSourceEntity(222U);
    msg.setDestination(57460U);
    msg.setDestinationEntity(92U);
    msg.camid = 191U;
    msg.x = 15277U;
    msg.y = 15194U;

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
    msg.setTimeStamp(0.08935705533285243);
    msg.setSource(35051U);
    msg.setSourceEntity(109U);
    msg.setDestination(64506U);
    msg.setDestinationEntity(206U);
    msg.camid = 241U;
    msg.x = 49822U;
    msg.y = 50770U;

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
    msg.setTimeStamp(0.5543347120517566);
    msg.setSource(44475U);
    msg.setSourceEntity(108U);
    msg.setDestination(38667U);
    msg.setDestinationEntity(204U);
    msg.tracking = 83U;
    msg.lat = 0.14264345803028233;
    msg.lon = 0.3844215177884778;
    msg.x = 0.009261223884386327;
    msg.y = 0.34723994804194336;
    msg.z = 0.7267081482190243;

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
    msg.setTimeStamp(0.3365380470743907);
    msg.setSource(10226U);
    msg.setSourceEntity(179U);
    msg.setDestination(57997U);
    msg.setDestinationEntity(187U);
    msg.tracking = 76U;
    msg.lat = 0.014824008053065163;
    msg.lon = 0.9591283687586665;
    msg.x = 0.20840579900776657;
    msg.y = 0.5489048218964441;
    msg.z = 0.1684220861774237;

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
    msg.setTimeStamp(0.36635899503850566);
    msg.setSource(20064U);
    msg.setSourceEntity(187U);
    msg.setDestination(52278U);
    msg.setDestinationEntity(51U);
    msg.tracking = 108U;
    msg.lat = 0.5663108970837288;
    msg.lon = 0.9935346957919431;
    msg.x = 0.22670896270581442;
    msg.y = 0.33419811029860724;
    msg.z = 0.8085349895358012;

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
    msg.setTimeStamp(0.7370882902591055);
    msg.setSource(4069U);
    msg.setSourceEntity(103U);
    msg.setDestination(30863U);
    msg.setDestinationEntity(134U);
    msg.target.assign("IASACFEQMOJJHRPABGBLIDQVGUBVCIK");
    msg.lbearing = 0.14109064197101662;
    msg.lelevation = 0.2447422513910329;
    msg.bearing = 0.30363289722894293;
    msg.elevation = 0.08115019035521176;
    msg.phi = 0.6856244084740256;
    msg.theta = 0.037938860334307045;
    msg.psi = 0.19894744380205964;
    msg.accuracy = 0.06253660718315346;

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
    msg.setTimeStamp(0.7146579598182661);
    msg.setSource(41220U);
    msg.setSourceEntity(129U);
    msg.setDestination(53939U);
    msg.setDestinationEntity(222U);
    msg.target.assign("WHZFPKQBCFSTLADBKSTUDIPVNWPMBJJUKCBCDAOISKBJBNPLHOROFESCQIGRXDNUOAVSYCXLKOQIJSGNSBRMGAWTUSBXVWWQMYTZDVGXRWHJOMAGGPJFPYIPJQMEPLCYGRWXRTHMYQUFVZEQTVYDFKESZANATXFEUOMTAVNIYEVFFRUMTKRHHKSNZXYJCZJX");
    msg.lbearing = 0.09287016620855437;
    msg.lelevation = 0.9451034388480314;
    msg.bearing = 0.7232836767501037;
    msg.elevation = 0.5943221215440789;
    msg.phi = 0.04515236742944928;
    msg.theta = 0.8853354409574108;
    msg.psi = 0.7198142685210653;
    msg.accuracy = 0.9139171459539396;

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
    msg.setTimeStamp(0.9289777512948262);
    msg.setSource(11385U);
    msg.setSourceEntity(12U);
    msg.setDestination(14293U);
    msg.setDestinationEntity(22U);
    msg.target.assign("XPHSNNSXOGZUVETBYZDLECCLJK");
    msg.lbearing = 0.13560155517877714;
    msg.lelevation = 0.8204495431536627;
    msg.bearing = 0.3738986599928791;
    msg.elevation = 0.1284678458677858;
    msg.phi = 0.38557152193897826;
    msg.theta = 0.7001184786194194;
    msg.psi = 0.4805988120155229;
    msg.accuracy = 0.8525263560480226;

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
    msg.setTimeStamp(0.31520899532547153);
    msg.setSource(65086U);
    msg.setSourceEntity(230U);
    msg.setDestination(62103U);
    msg.setDestinationEntity(131U);
    msg.target.assign("LDLVBGORJRBWEPEWEUYPTAOYHVFKSMCLSSYMDUMFTOWTAEYRAIHEWKJVRLQYTBUYUMWEYTCSYZIHPQOFNSJMUKGFJIWCFNPUHGBHBLQWEBCZCOHEJVNMKKBVQKGNSOLWQXVXRFJPCDKQMDVXIDYELBHTAUNGPZCIIERHWOGZMCXLGMMZHCASJNUTGXZZDZZDGKPLIXVJLUFIABDXHTAUPWAYOQNJOAIXZTNCVISKVS");
    msg.x = 0.7395660086481475;
    msg.y = 0.5071008618889471;
    msg.z = 0.8164606850338145;
    msg.n = 0.5387007094499614;
    msg.e = 0.7657306495022871;
    msg.d = 0.5850547555680609;
    msg.phi = 0.3743971922316951;
    msg.theta = 0.8624652627517313;
    msg.psi = 0.059305669027076124;
    msg.accuracy = 0.9313846109801934;

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
    msg.setTimeStamp(0.7523464492629836);
    msg.setSource(45533U);
    msg.setSourceEntity(198U);
    msg.setDestination(5089U);
    msg.setDestinationEntity(125U);
    msg.target.assign("YXDOAJRHMGUFAESUEPFXQAEJHHWZIRAWX");
    msg.x = 0.4459911666889368;
    msg.y = 0.8874044224983827;
    msg.z = 0.7086908343782597;
    msg.n = 0.84132079959657;
    msg.e = 0.7374347254831405;
    msg.d = 0.004770174821025486;
    msg.phi = 0.14003549072471388;
    msg.theta = 0.9406191855075032;
    msg.psi = 0.1872011663594293;
    msg.accuracy = 0.8022390454576812;

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
    msg.setTimeStamp(0.058583477506120696);
    msg.setSource(45297U);
    msg.setSourceEntity(199U);
    msg.setDestination(39785U);
    msg.setDestinationEntity(200U);
    msg.target.assign("SCEPVHPDHRQPBBPAKZWWCXLZEDMJVKKJDWKKZGNNHEAGGNUMYZOZTQUUSVIJXPRKWTWHMIVSTVQDHGNDPCXWUIUERQXGFUUJLVFSPBRTXCY");
    msg.x = 0.6345698607874161;
    msg.y = 0.8397836895335188;
    msg.z = 0.8350425618597594;
    msg.n = 0.8016518250654222;
    msg.e = 0.1534960103246571;
    msg.d = 0.011611048177425642;
    msg.phi = 0.16237877807009238;
    msg.theta = 0.2322689132151965;
    msg.psi = 0.4524152203474524;
    msg.accuracy = 0.3727735946348498;

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
    msg.setTimeStamp(0.024513020672014885);
    msg.setSource(39698U);
    msg.setSourceEntity(131U);
    msg.setDestination(44825U);
    msg.setDestinationEntity(141U);
    msg.target.assign("RJZDWMGJNQJKASFXHDNBEFOYTSVMSXHIORMVZUPRYFSMXLZNHQVUKFDAOIYOSQJZLGGXGLTREXHJOWAHSWTWYANOBRCPGCTKMCIFPTWICSUBVYGXTQQGOZCSPNWAQBWEJTXIBPAECGYYVUNQDTH");
    msg.lat = 0.34702474457570753;
    msg.lon = 0.64899684410641;
    msg.z_units = 28U;
    msg.z = 0.4770569833331161;
    msg.accuracy = 0.286408945001154;

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
    msg.setTimeStamp(0.638203668299533);
    msg.setSource(23455U);
    msg.setSourceEntity(232U);
    msg.setDestination(25112U);
    msg.setDestinationEntity(200U);
    msg.target.assign("XVVZGALSMMZTLHYWWRPYEGLPRTMVDJHY");
    msg.lat = 0.32783065866644423;
    msg.lon = 0.369606567965195;
    msg.z_units = 247U;
    msg.z = 0.03688205198332217;
    msg.accuracy = 0.16104546772536754;

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
    msg.setTimeStamp(0.8128295973031177);
    msg.setSource(52333U);
    msg.setSourceEntity(188U);
    msg.setDestination(7150U);
    msg.setDestinationEntity(247U);
    msg.target.assign("HJVLYHQZAGBJCJPOFGPFSUMPOXDCYKNRLGRLIRZHSEWPIATRDFEFNTPVQSEOJIIUVMWTAXQKITEDQAQFGSBAWLKISDPWBSXQIKNJYJDRUYDORVEFNWMSZPRXLXXUZCVPQJYECHNANOARCOJKUBTNTKNYZBMVMLTEXGCFBDDOWVYSPKCFCQBNHZLHLLEZC");
    msg.lat = 0.2857245132200178;
    msg.lon = 0.8803610462618098;
    msg.z_units = 61U;
    msg.z = 0.5126060397544968;
    msg.accuracy = 0.7945593814730052;

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
    msg.setTimeStamp(0.7428816793926071);
    msg.setSource(16059U);
    msg.setSourceEntity(198U);
    msg.setDestination(22212U);
    msg.setDestinationEntity(101U);
    msg.name.assign("MNREDVCQANIDZECNRPKYLEZSTXJOBAFUNZJVLLUXDCYKVRNJE");
    msg.lat = 0.9131480109630172;
    msg.lon = 0.7239547187968427;
    msg.z = 0.31039246224860917;
    msg.z_units = 34U;

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
    msg.setTimeStamp(0.5350071549431181);
    msg.setSource(19821U);
    msg.setSourceEntity(239U);
    msg.setDestination(28363U);
    msg.setDestinationEntity(174U);
    msg.name.assign("SSRVUIMFLSAVJPGNGOMRJBUSXZZOAZQKKFNHXTOWYTXSFEMOPGTHEOIQHTFJXIWRJMXKVWHUNYJIUNNZPNFTBBDKCPCQLOGMWQDRZRJWUIAKEDJSJBVHMABBGAXKLZURNGPPLQRCAWJHQQRWTUAFPAOKRXVOCIYWDPYGCDTLZMMRYSOTPXEOFDEUFCILGVELCYBDBNIEFJGBVYLZSCHQSYMYENVZTDWILADHFYQ");
    msg.lat = 0.9715561847124586;
    msg.lon = 0.01287127900534013;
    msg.z = 0.7227290017532856;
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
    msg.setTimeStamp(0.38274586370439034);
    msg.setSource(29079U);
    msg.setSourceEntity(14U);
    msg.setDestination(39574U);
    msg.setDestinationEntity(71U);
    msg.name.assign("KOOLDFPNRICQKPEWHKDLRSYXQTTGVZEMIOUWPXMNMOTWEOIBZTFJJWJZBLZMLDQJQRRRGA");
    msg.lat = 0.3334419331935071;
    msg.lon = 0.7978652261415771;
    msg.z = 0.5489137443586297;
    msg.z_units = 165U;

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
    msg.setTimeStamp(0.6757731745787262);
    msg.setSource(31360U);
    msg.setSourceEntity(181U);
    msg.setDestination(5586U);
    msg.setDestinationEntity(3U);
    msg.op = 75U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("KUSKTMKBRATBJBTEZOKIZBIJLPODNUNDSEASWOXLBNXPJTLTVAYBYYGVZUFYMRXFYJULDTDJPUYEWWAVHSEPBLMOMHAGOXCWRRZSVILVTKVLLACNJHKGKZDUUFRBWLHCJOTSQTGIWVXHAXGPNQNXZMKCZALEPUOPTDQMZMVIIQVHPDCZOUBZ");
    tmp_msg_0.lat = 0.23826959322480823;
    tmp_msg_0.lon = 0.5413139048223694;
    tmp_msg_0.z = 0.9508538416012777;
    tmp_msg_0.z_units = 190U;
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
    msg.setTimeStamp(0.6214285237288578);
    msg.setSource(40950U);
    msg.setSourceEntity(244U);
    msg.setDestination(64251U);
    msg.setDestinationEntity(90U);
    msg.op = 193U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XFGRLFIHPPCLJXRFBTICWMVRIWENZNJPPLVBJFIEKJIMYZQCMWQKRPRDSPDHEOKJNVXBUAGBBBPDHEIMOVYTYRAGSHRXVEMUYKBFHOOYXCNAQJRQSFVGJVWULBGSXCOAGWMDKUGC");
    tmp_msg_0.lat = 0.3131122244273765;
    tmp_msg_0.lon = 0.3378739717895185;
    tmp_msg_0.z = 0.9855696701254117;
    tmp_msg_0.z_units = 37U;
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
    msg.setTimeStamp(0.3473560644176418);
    msg.setSource(25094U);
    msg.setSourceEntity(128U);
    msg.setDestination(37724U);
    msg.setDestinationEntity(65U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.5980737358289614);
    msg.setSource(13857U);
    msg.setSourceEntity(252U);
    msg.setDestination(55462U);
    msg.setDestinationEntity(60U);
    msg.value = 0.44382340220604366;
    msg.type = 119U;

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
    msg.setTimeStamp(0.9956154969106202);
    msg.setSource(58264U);
    msg.setSourceEntity(87U);
    msg.setDestination(7217U);
    msg.setDestinationEntity(29U);
    msg.value = 0.4301782866129452;
    msg.type = 135U;

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
    msg.setTimeStamp(0.31076532965880577);
    msg.setSource(25132U);
    msg.setSourceEntity(30U);
    msg.setDestination(5189U);
    msg.setDestinationEntity(29U);
    msg.value = 0.04488007542918038;
    msg.type = 219U;

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
    msg.setTimeStamp(0.7939631527234229);
    msg.setSource(61549U);
    msg.setSourceEntity(47U);
    msg.setDestination(58883U);
    msg.setDestinationEntity(80U);
    msg.value = 0.753259309254583;

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
    msg.setTimeStamp(0.24068251049840272);
    msg.setSource(7954U);
    msg.setSourceEntity(150U);
    msg.setDestination(59642U);
    msg.setDestinationEntity(34U);
    msg.value = 0.2977536665311178;

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
    msg.setTimeStamp(0.2523499495544068);
    msg.setSource(1453U);
    msg.setSourceEntity(59U);
    msg.setDestination(32014U);
    msg.setDestinationEntity(179U);
    msg.value = 0.5761947922156899;

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
    msg.setTimeStamp(0.1372970054409336);
    msg.setSource(61559U);
    msg.setSourceEntity(71U);
    msg.setDestination(35264U);
    msg.setDestinationEntity(144U);
    msg.timestamp_last_service = 0.8767409759704773;
    msg.time_next_service = 0.3965864703611732;
    msg.time_motor_next_service = 0.09100756233084828;
    msg.time_idle_ground = 0.12942590461950743;
    msg.time_idle_air = 0.5566960004467263;
    msg.time_idle_water = 0.6016927707615066;
    msg.time_idle_underwater = 0.8130805350067573;
    msg.time_idle_unknown = 0.1949050710402308;
    msg.time_motor_ground = 0.9510305890166962;
    msg.time_motor_air = 0.5273859821221797;
    msg.time_motor_water = 0.13876754187773088;
    msg.time_motor_underwater = 0.5406635438704049;
    msg.time_motor_unknown = 0.311026111162402;
    msg.rpm_min = 3464;
    msg.rpm_max = -20058;
    msg.depth_max = 0.09161128959967413;

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
    msg.setTimeStamp(0.10756716430494451);
    msg.setSource(25823U);
    msg.setSourceEntity(168U);
    msg.setDestination(51937U);
    msg.setDestinationEntity(46U);
    msg.timestamp_last_service = 0.44294783682402283;
    msg.time_next_service = 0.4032348011247099;
    msg.time_motor_next_service = 0.5751238293033265;
    msg.time_idle_ground = 0.7610405476196004;
    msg.time_idle_air = 0.6264179429767918;
    msg.time_idle_water = 0.1819188652752617;
    msg.time_idle_underwater = 0.4721381255249024;
    msg.time_idle_unknown = 0.8522554473179919;
    msg.time_motor_ground = 0.8878995314970745;
    msg.time_motor_air = 0.5150262658188318;
    msg.time_motor_water = 0.5512167491565422;
    msg.time_motor_underwater = 0.4660714679295851;
    msg.time_motor_unknown = 0.9237868798977624;
    msg.rpm_min = -7093;
    msg.rpm_max = 2020;
    msg.depth_max = 0.08062303464262655;

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
    msg.setTimeStamp(0.6679332034297238);
    msg.setSource(38401U);
    msg.setSourceEntity(110U);
    msg.setDestination(25387U);
    msg.setDestinationEntity(164U);
    msg.timestamp_last_service = 0.5011954838924554;
    msg.time_next_service = 0.19887221277641476;
    msg.time_motor_next_service = 0.48360648223336256;
    msg.time_idle_ground = 0.48366455546041665;
    msg.time_idle_air = 0.8350913936171632;
    msg.time_idle_water = 0.7001891059556172;
    msg.time_idle_underwater = 0.35137055461043165;
    msg.time_idle_unknown = 0.39095785797883864;
    msg.time_motor_ground = 0.3000607073079188;
    msg.time_motor_air = 0.9797148024652651;
    msg.time_motor_water = 0.9096293642378164;
    msg.time_motor_underwater = 0.32374660286165236;
    msg.time_motor_unknown = 0.7769295744272745;
    msg.rpm_min = 26253;
    msg.rpm_max = -29018;
    msg.depth_max = 0.09164956892677734;

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
    IMC::HighpassControlParcel msg;
    msg.setTimeStamp(0.2823813061386016);
    msg.setSource(2327U);
    msg.setSourceEntity(111U);
    msg.setDestination(31005U);
    msg.setDestinationEntity(234U);
    msg.highpass = 0.9094161233264081;
    msg.adot = 0.3019630109920082;
    msg.slope_compensation = 0.8646925768270737;
    msg.slope_compensation_difference = 0.877187873677311;
    msg.altitude = 0.3661903243717005;
    msg.auto_altitude = 0.6880255476547088;

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
    msg.setTimeStamp(0.8848554569742993);
    msg.setSource(26426U);
    msg.setSourceEntity(210U);
    msg.setDestination(50369U);
    msg.setDestinationEntity(215U);
    msg.highpass = 0.4583341951067684;
    msg.adot = 0.09037839563634997;
    msg.slope_compensation = 0.6464943087917553;
    msg.slope_compensation_difference = 0.5501525538640152;
    msg.altitude = 0.3131595024420727;
    msg.auto_altitude = 0.3744810719364321;

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
    msg.setTimeStamp(0.34333977883474875);
    msg.setSource(62116U);
    msg.setSourceEntity(11U);
    msg.setDestination(7137U);
    msg.setDestinationEntity(162U);
    msg.highpass = 0.5843810937081324;
    msg.adot = 0.48296443528668953;
    msg.slope_compensation = 0.3030414864202806;
    msg.slope_compensation_difference = 0.3257227114007697;
    msg.altitude = 0.43023355720605094;
    msg.auto_altitude = 0.16312000054951392;

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
    msg.setTimeStamp(0.5996215683947947);
    msg.setSource(9516U);
    msg.setSourceEntity(227U);
    msg.setDestination(6268U);
    msg.setDestinationEntity(95U);
    msg.remote_control_allowed = 156U;
    msg.remote_control_enabled = 218U;
    msg.remote_control_active = 101U;
    msg.depth_only_control_enabled = 144U;
    msg.direct_control_enabled = 112U;
    msg.return_to_closest_point_on_line = 216U;
    msg.on_shore_power = 212U;
    msg.latitude = 0.9290821258438823;
    msg.longitude = 0.7667151462627942;
    msg.depth = 0.7529299499345021;
    msg.depth_ref = 0.7422653871610024;
    msg.altitude = 0.048275776671373505;
    msg.altitude_ref = 0.8114926695419333;
    msg.pitch = 0.895925300295597;
    msg.roll = 0.7081713195652662;
    msg.rpm = 0.5214020941716494;
    msg.rpm_ref = 0.5338797060235424;
    msg.speed = 0.3770327032273131;
    msg.speed_ref = 0.6733700821969902;
    msg.heading = 0.9473267146686386;
    msg.heading_rate = 0.7771483353419493;
    msg.heading_ref = 0.3696691258844964;
    msg.mission_state = 127U;
    msg.leg = -4365150114770883315;

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
    msg.setTimeStamp(0.9589584280756844);
    msg.setSource(57092U);
    msg.setSourceEntity(39U);
    msg.setDestination(59034U);
    msg.setDestinationEntity(143U);
    msg.remote_control_allowed = 28U;
    msg.remote_control_enabled = 88U;
    msg.remote_control_active = 179U;
    msg.depth_only_control_enabled = 18U;
    msg.direct_control_enabled = 231U;
    msg.return_to_closest_point_on_line = 176U;
    msg.on_shore_power = 7U;
    msg.latitude = 0.8543217251360854;
    msg.longitude = 0.9537419904122644;
    msg.depth = 0.05594641218501972;
    msg.depth_ref = 0.6186738577369467;
    msg.altitude = 0.21972967818432176;
    msg.altitude_ref = 0.06026833881417626;
    msg.pitch = 0.3352508544123509;
    msg.roll = 0.5142820052451045;
    msg.rpm = 0.027528155657665865;
    msg.rpm_ref = 0.05164330805172723;
    msg.speed = 0.20061332003574417;
    msg.speed_ref = 0.6670275920004727;
    msg.heading = 0.9596985202575175;
    msg.heading_rate = 0.862481879195304;
    msg.heading_ref = 0.744392807928238;
    msg.mission_state = 24U;
    msg.leg = 7022912199413867570;

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
    msg.setTimeStamp(0.5575565796646458);
    msg.setSource(21376U);
    msg.setSourceEntity(104U);
    msg.setDestination(11731U);
    msg.setDestinationEntity(132U);
    msg.remote_control_allowed = 108U;
    msg.remote_control_enabled = 84U;
    msg.remote_control_active = 237U;
    msg.depth_only_control_enabled = 222U;
    msg.direct_control_enabled = 148U;
    msg.return_to_closest_point_on_line = 100U;
    msg.on_shore_power = 156U;
    msg.latitude = 0.030385316656673544;
    msg.longitude = 0.3075739752947514;
    msg.depth = 0.06974120895288638;
    msg.depth_ref = 0.43347693740072313;
    msg.altitude = 0.44874327160699856;
    msg.altitude_ref = 0.5956074472440742;
    msg.pitch = 0.1694677650495714;
    msg.roll = 0.15402443406728927;
    msg.rpm = 0.26337509198123155;
    msg.rpm_ref = 0.5773010714276241;
    msg.speed = 0.6211317528411038;
    msg.speed_ref = 0.3319368086680169;
    msg.heading = 0.32544862455372725;
    msg.heading_rate = 0.21095657355599318;
    msg.heading_ref = 0.7061121448151321;
    msg.mission_state = 178U;
    msg.leg = -4934867794005179828;

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
    msg.setTimeStamp(0.9530116178594573);
    msg.setSource(6008U);
    msg.setSourceEntity(196U);
    msg.setDestination(37489U);
    msg.setDestinationEntity(249U);
    msg.name.assign("RFLTYMOTUMSMDJJNAXKLDVGKRYBOECLVEJXEBIIPQJATUQFKNIVWGF");
    msg.arg1 = 0.6831395805178225;
    msg.arg2 = 0.6717191769170601;
    msg.arg3 = 0.5765597170091228;
    msg.arg4 = 0.7927085117424661;

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
    msg.setTimeStamp(0.250180887395167);
    msg.setSource(25927U);
    msg.setSourceEntity(78U);
    msg.setDestination(17029U);
    msg.setDestinationEntity(35U);
    msg.name.assign("NDUOMDDCXORABJBQTTZSIOOXZLQPIMAXLDUBQWKATZZSFLZJEXJUNTGLPHQYEKWJSIPYYMRHXVGNCQNQOJCVFKNVPWYYDLQGTZGKVAXKARMSBQTHEICKPMBPCSEMYNKBKFBWHTUWBEDPUVFDHFIFMAFNG");
    msg.arg1 = 0.8469192735164491;
    msg.arg2 = 0.0484302555142041;
    msg.arg3 = 0.03512306186648151;
    msg.arg4 = 0.8168830020475689;

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
    msg.setTimeStamp(0.7677389527744881);
    msg.setSource(38242U);
    msg.setSourceEntity(228U);
    msg.setDestination(47080U);
    msg.setDestinationEntity(144U);
    msg.name.assign("PUBXCTUNTLOVDWCDNBUYAPCNHHIDMQHELGSXJPJLKTVRBCNXNCRMDLWTJBATOZMHAMKIJRUUCJBAMAOWCSSLKEIMQQDLYQEXYZMNGTIERJPQOMHONGKHVREVOSQEQWXLXZUQBTGBDUZGSXPWLIUJHVKSIPEIBFONKNWUKTZSADFXYYCB");
    msg.arg1 = 0.863648679887392;
    msg.arg2 = 0.3608673193014319;
    msg.arg3 = 0.9730867041612847;
    msg.arg4 = 0.9001551667069112;

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
    msg.setTimeStamp(0.46797467699823403);
    msg.setSource(20393U);
    msg.setSourceEntity(186U);
    msg.setDestination(20364U);
    msg.setDestinationEntity(162U);
    msg.direction = 97U;
    msg.range1 = 0.7764439824153933;
    msg.range2 = 0.2350812172792084;
    msg.range3 = 0.08336719299036788;
    msg.range4 = 0.8162806640820491;

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
    msg.setTimeStamp(0.38477945278368786);
    msg.setSource(21852U);
    msg.setSourceEntity(240U);
    msg.setDestination(49026U);
    msg.setDestinationEntity(211U);
    msg.direction = 175U;
    msg.range1 = 0.5631457551179827;
    msg.range2 = 0.5522474642621137;
    msg.range3 = 0.296567995208061;
    msg.range4 = 0.007880347523330555;

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
    msg.setTimeStamp(0.8461049957459904);
    msg.setSource(36820U);
    msg.setSourceEntity(24U);
    msg.setDestination(54498U);
    msg.setDestinationEntity(236U);
    msg.direction = 160U;
    msg.range1 = 0.15719460361076698;
    msg.range2 = 0.570550111495911;
    msg.range3 = 0.8094325510738568;
    msg.range4 = 0.34139727457530367;

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
    msg.setTimeStamp(0.9088698475119055);
    msg.setSource(9515U);
    msg.setSourceEntity(58U);
    msg.setDestination(58379U);
    msg.setDestinationEntity(2U);
    msg.msg.assign("WAOGZCCIILKZURDDZZIRCHEYVIJJHWEGVZFILDLRDOUZJPSGHQJROUMZXUGWBKJPQXQFCFOSSMLCYPBNYLXEPWGCAJCGXJUVW");
    msg.direction = 143U;

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
    msg.setTimeStamp(0.02699467365832009);
    msg.setSource(18522U);
    msg.setSourceEntity(23U);
    msg.setDestination(33765U);
    msg.setDestinationEntity(216U);
    msg.msg.assign("BIWRDDINBCHSYJMAVXMRHFGBLSTVDGDFAEIMHHHAJCPMGDOELKHMDSJWFPMRQSYKUBRICOBXEQJMT");
    msg.direction = 141U;

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
    msg.setTimeStamp(0.23944444079497018);
    msg.setSource(8740U);
    msg.setSourceEntity(236U);
    msg.setDestination(12723U);
    msg.setDestinationEntity(59U);
    msg.msg.assign("EVNETMAHCVYPLNXMEFJFCMJKRQMLQLLGMFLVXANEKUUPFDBONRWMDCVXBIKYTAOPXSKXOQXIWUAZKBCYHCRYIYUWVGNHVPJRLBMDTKDIFGBOBFAKUDJDPSOTKUHJQPUUFXBJNOASZGJNLVOCHFVFHLSSWTONG");
    msg.direction = 69U;

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
    msg.setTimeStamp(0.5752128778218689);
    msg.setSource(63507U);
    msg.setSourceEntity(171U);
    msg.setDestination(39208U);
    msg.setDestinationEntity(162U);
    msg.state = 129U;

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
    msg.setTimeStamp(0.3689305741322183);
    msg.setSource(38589U);
    msg.setSourceEntity(129U);
    msg.setDestination(8519U);
    msg.setDestinationEntity(228U);
    msg.state = 62U;

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
    msg.setTimeStamp(0.19217600197896256);
    msg.setSource(52263U);
    msg.setSourceEntity(60U);
    msg.setDestination(4417U);
    msg.setDestinationEntity(139U);
    msg.state = 148U;

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
    msg.setTimeStamp(0.1438018405881909);
    msg.setSource(48205U);
    msg.setSourceEntity(152U);
    msg.setDestination(64721U);
    msg.setDestinationEntity(252U);
    msg.dt = 0.6989007075227103;
    msg.k_d = 0.6342372307490176;
    msg.range1 = 0.3267569356379101;
    msg.range2 = 0.6280566018458389;
    msg.range3 = 0.321690311662321;
    msg.range4 = 0.6089821375964002;
    msg.u = 0.07728160938197648;
    msg.v = 0.24084620139649926;
    msg.w = 0.9609029423710667;
    msg.phi = 0.06339498367487617;
    msg.theta = 0.6771942679613067;
    msg.psi = 0.5565244430230761;
    msg.adot = 0.912535988159915;

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
    msg.setTimeStamp(0.9968947249020018);
    msg.setSource(11865U);
    msg.setSourceEntity(160U);
    msg.setDestination(54921U);
    msg.setDestinationEntity(182U);
    msg.dt = 0.7380828971748266;
    msg.k_d = 0.19557118422703723;
    msg.range1 = 0.2571186959869446;
    msg.range2 = 0.1553562698782459;
    msg.range3 = 0.2169149061050304;
    msg.range4 = 0.9660654085936595;
    msg.u = 0.9224984040505428;
    msg.v = 0.3963509729077488;
    msg.w = 0.7812327070935725;
    msg.phi = 0.8700979786393356;
    msg.theta = 0.2334027226687524;
    msg.psi = 0.8302670870393822;
    msg.adot = 0.5820455272845138;

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
    msg.setTimeStamp(0.749695023371182);
    msg.setSource(4044U);
    msg.setSourceEntity(47U);
    msg.setDestination(51293U);
    msg.setDestinationEntity(96U);
    msg.dt = 0.6984383133209916;
    msg.k_d = 0.7315076149548212;
    msg.range1 = 0.720037686568766;
    msg.range2 = 0.8943514629534017;
    msg.range3 = 0.3564676647164312;
    msg.range4 = 0.07533725485944875;
    msg.u = 0.4815741753358249;
    msg.v = 0.07902281233921316;
    msg.w = 0.3742913943485775;
    msg.phi = 0.6206725817798696;
    msg.theta = 0.8911256702337911;
    msg.psi = 0.9425556752080201;
    msg.adot = 0.03967852751902867;

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
    msg.setTimeStamp(0.1102627735826498);
    msg.setSource(2907U);
    msg.setSourceEntity(19U);
    msg.setDestination(50009U);
    msg.setDestinationEntity(85U);
    msg.htime = 0.466828820803043;
    msg.dt = 0.8214094791972121;

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
    msg.setTimeStamp(0.31832203012912264);
    msg.setSource(35542U);
    msg.setSourceEntity(205U);
    msg.setDestination(38837U);
    msg.setDestinationEntity(96U);
    msg.htime = 0.6116725031429255;
    msg.dt = 0.5464501666644788;

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
    msg.setTimeStamp(0.11380759074650693);
    msg.setSource(31594U);
    msg.setSourceEntity(71U);
    msg.setDestination(37656U);
    msg.setDestinationEntity(126U);
    msg.htime = 0.5114984370971675;
    msg.dt = 0.5944213150058243;

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
    msg.setTimeStamp(0.31296297568736053);
    msg.setSource(14487U);
    msg.setSourceEntity(105U);
    msg.setDestination(63664U);
    msg.setDestinationEntity(207U);
    msg.value = 0.10665157399532799;

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
    msg.setTimeStamp(0.6576947292845173);
    msg.setSource(11727U);
    msg.setSourceEntity(87U);
    msg.setDestination(58727U);
    msg.setDestinationEntity(228U);
    msg.value = 0.03009947514524336;

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
    msg.setTimeStamp(0.3757124516215764);
    msg.setSource(39396U);
    msg.setSourceEntity(158U);
    msg.setDestination(40841U);
    msg.setDestinationEntity(84U);
    msg.value = 0.6372728083444918;

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
    msg.setTimeStamp(0.49437301480283435);
    msg.setSource(61041U);
    msg.setSourceEntity(190U);
    msg.setDestination(59271U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.5415403898693723;
    msg.lon = 0.2550274307849344;

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
    msg.setTimeStamp(0.23007484516024257);
    msg.setSource(61685U);
    msg.setSourceEntity(102U);
    msg.setDestination(9770U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.8636262961729992;
    msg.lon = 0.9877229700203827;

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
    msg.setTimeStamp(0.9265267785899955);
    msg.setSource(65362U);
    msg.setSourceEntity(197U);
    msg.setDestination(18220U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.9232357154607657;
    msg.lon = 0.29622677664733366;

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
    msg.setTimeStamp(0.7246356334704294);
    msg.setSource(47414U);
    msg.setSourceEntity(237U);
    msg.setDestination(65079U);
    msg.setDestinationEntity(37U);
    msg.value = 0.8444530256539065;

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
    msg.setTimeStamp(0.07825964779888017);
    msg.setSource(27757U);
    msg.setSourceEntity(127U);
    msg.setDestination(60942U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5836974104655375;

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
    msg.setTimeStamp(0.7331333807770385);
    msg.setSource(37825U);
    msg.setSourceEntity(32U);
    msg.setDestination(60424U);
    msg.setDestinationEntity(4U);
    msg.value = 0.37790059700037215;

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
    msg.setTimeStamp(0.6528838628364536);
    msg.setSource(28615U);
    msg.setSourceEntity(5U);
    msg.setDestination(43119U);
    msg.setDestinationEntity(174U);
    msg.value = 0.11403703459974779;

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
    msg.setTimeStamp(0.5280620403198986);
    msg.setSource(3170U);
    msg.setSourceEntity(74U);
    msg.setDestination(30527U);
    msg.setDestinationEntity(87U);
    msg.value = 0.7552726769750774;

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
    msg.setTimeStamp(0.6581065151138468);
    msg.setSource(22638U);
    msg.setSourceEntity(229U);
    msg.setDestination(51546U);
    msg.setDestinationEntity(70U);
    msg.value = 0.04176609692581257;

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

  {
    IMC::SimulatedDynamicEnvironment msg;
    msg.setTimeStamp(0.19261079048735952);
    msg.setSource(48962U);
    msg.setSourceEntity(11U);
    msg.setDestination(53011U);
    msg.setDestinationEntity(6U);
    msg.environmenttypeid = 17U;
    msg.id = 107U;
    msg.x = 0.0646680486937089;
    msg.y = 0.4468315801355255;
    msg.psi = 0.3246660623831903;
    msg.u = 0.2568368430706782;
    msg.v = 0.795324228939957;
    msg.r = 0.40072308281531155;
    msg.x_auv = 0.07006261068182551;
    msg.y_auv = 0.6579416531933856;
    msg.z_auv = 0.14450203622782976;
    msg.phi_auv = 0.3431143756807957;
    msg.theta_auv = 0.8790777174577662;
    msg.psi_auv = 0.4110836512018654;
    msg.u_auv = 0.12376574503683568;
    msg.v_auv = 0.9848850910724166;
    msg.w_auv = 0.7677608149578622;
    msg.p_auv = 0.7041790349697052;
    msg.q_auv = 0.5732195647896388;
    msg.r_auv = 0.34786528521921734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedDynamicEnvironment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedDynamicEnvironment msg;
    msg.setTimeStamp(0.40435501491175363);
    msg.setSource(26738U);
    msg.setSourceEntity(216U);
    msg.setDestination(20896U);
    msg.setDestinationEntity(247U);
    msg.environmenttypeid = 142U;
    msg.id = 216U;
    msg.x = 0.21527780659130058;
    msg.y = 0.9146179066687115;
    msg.psi = 0.24089262966421388;
    msg.u = 0.5126649870760883;
    msg.v = 0.532880304728062;
    msg.r = 0.8664459032650004;
    msg.x_auv = 0.3891055096342786;
    msg.y_auv = 0.29626706074668163;
    msg.z_auv = 0.269105901085961;
    msg.phi_auv = 0.0936698211878133;
    msg.theta_auv = 0.5552252262930211;
    msg.psi_auv = 0.9445101446333152;
    msg.u_auv = 0.8160078310108587;
    msg.v_auv = 0.9347076814836334;
    msg.w_auv = 0.589039024076018;
    msg.p_auv = 0.9232139429556175;
    msg.q_auv = 0.307925341717881;
    msg.r_auv = 0.022430207255360046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedDynamicEnvironment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedDynamicEnvironment msg;
    msg.setTimeStamp(0.9164191455711108);
    msg.setSource(57031U);
    msg.setSourceEntity(157U);
    msg.setDestination(17046U);
    msg.setDestinationEntity(218U);
    msg.environmenttypeid = 245U;
    msg.id = 175U;
    msg.x = 0.4194358398127971;
    msg.y = 0.772764841250041;
    msg.psi = 0.2634055882716225;
    msg.u = 0.8664649544780845;
    msg.v = 0.21959917622522662;
    msg.r = 0.7059823400171328;
    msg.x_auv = 0.08570572407810151;
    msg.y_auv = 0.03982118241384103;
    msg.z_auv = 0.15793760027808446;
    msg.phi_auv = 0.8237472874605107;
    msg.theta_auv = 0.711848357129968;
    msg.psi_auv = 0.6556490964398458;
    msg.u_auv = 0.20209233590417264;
    msg.v_auv = 0.4647707682852784;
    msg.w_auv = 0.4465276785724155;
    msg.p_auv = 0.8677078580816197;
    msg.q_auv = 0.7186415401888531;
    msg.r_auv = 0.8570896899730002;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedDynamicEnvironment #2", msg == *msg_d);
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
