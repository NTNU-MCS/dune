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
    msg.setTimeStamp(0.824991123824158);
    msg.setSource(31719U);
    msg.setSourceEntity(178U);
    msg.setDestination(19773U);
    msg.setDestinationEntity(159U);
    msg.state = 42U;
    msg.flags = 32U;
    msg.description.assign("QYRHFRGHZECYGBLOQAFTVJXKFITGPAPSPIOXOPLBLVSAJWHTACBXDSJTTWIMMJCSRZUPPDUZPQTCQEBLRVVLNBAERXKASRCONNHXMHNMXVOELKMKVYGIYVZGEGVFAJRUIOYLQNGDZRCXDYUQSOZIMNEMTPWWFQHZDEZWB");

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
    msg.setTimeStamp(0.6742957250076624);
    msg.setSource(50338U);
    msg.setSourceEntity(196U);
    msg.setDestination(45988U);
    msg.setDestinationEntity(106U);
    msg.state = 146U;
    msg.flags = 164U;
    msg.description.assign("NMTJIRMQHNZPKAKVVPNIPBEOBBVJTAPRQHQSISARJQGHLAWDZXXGUSESYUDDFZHOHTVSOWJXRXPFLZBRGBRFLFSFQDQKGDYY");

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
    msg.setTimeStamp(0.6596702951175046);
    msg.setSource(11052U);
    msg.setSourceEntity(242U);
    msg.setDestination(24276U);
    msg.setDestinationEntity(156U);
    msg.state = 38U;
    msg.flags = 105U;
    msg.description.assign("LXATUJTUEVJCIDYHGVCADBMVTUQDZVSHUQHIADBDYNBEFHWMWXMBAZFEXRPHOIYPKHZGYUQVDNZQIFKMIPGSFAHPKMCCEZVKYJWEJKYNDNIXGPXWMLHJXRCLODOLRTROOCU");

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
    msg.setTimeStamp(0.9860127928128265);
    msg.setSource(61634U);
    msg.setSourceEntity(20U);
    msg.setDestination(9371U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.4754693727031776);
    msg.setSource(46519U);
    msg.setSourceEntity(32U);
    msg.setDestination(44362U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.5086146693721726);
    msg.setSource(35048U);
    msg.setSourceEntity(71U);
    msg.setDestination(41553U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.41148357996959806);
    msg.setSource(54260U);
    msg.setSourceEntity(82U);
    msg.setDestination(46862U);
    msg.setDestinationEntity(48U);
    msg.id = 150U;
    msg.label.assign("LWKXXLTMJFUGPBWOCEZMPVRIHEVGUSDJXHNJSLUBZUBGQJNACKIIDRSZESTVOYLEPPHKWTPNQRFSUIWARNAUBFDAATUGKXGLVM");
    msg.component.assign("BTPFGFLEGGFOGBBCPCPTMNSDVEGBKBZVBZARHYBTDYVFEUHNQGIWKLBKLKLYTDQNCPODOYKIQRUJLVLWOSEXSSYHVJQSDSDIWZXQJLFUIJXMGXDQWPXMRETJMJCEXGUAYCTNAVWPKYRJNWKFORVDFKQBEGZLHXVADUELOQHJWTACIAYXAILNZJPANOMTUUKWHCZPVRHIXWDMHNMZOYPCPFIAAMUVSOWZFRCMUMSZZIRSSKCHRNFGX");
    msg.act_time = 50947U;
    msg.deact_time = 31559U;

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
    msg.setTimeStamp(0.40290911205815005);
    msg.setSource(57502U);
    msg.setSourceEntity(3U);
    msg.setDestination(56064U);
    msg.setDestinationEntity(166U);
    msg.id = 183U;
    msg.label.assign("DIDDYNBBLOFQELNHPLABKOZALNCITRTOLUFERWGUPUVKCRIEXFCPPODMBMGYGWVSDOZFWXGMHNABNXJSCIGBYPRPVGXVCSJLKFKBQKSWYHHRTZHTFLAQHQSTQUUHQJJVJWCJEOIYTNFAJRH");
    msg.component.assign("RVZGSLVHLTSCLHSTPCXUYFRDDGAMIZOCETWTWZUVGGEBDQPWMWOABOBJHYOISXJQIJCOJBGSQUNUINNCHPLHAJZLEDBRKAJTAXQGPZGKMXANVYUWMOCFVFHJTSYVEFZMKQTQKHISDAUIVSQRJUEPXCEUVIXQZPELCGYRKYNFYMXWENXCEPBULHZJMNXAIGMYAFYFKQBVMSWNSKVTZFT");
    msg.act_time = 50259U;
    msg.deact_time = 57254U;

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
    msg.setTimeStamp(0.6400101900076434);
    msg.setSource(34526U);
    msg.setSourceEntity(36U);
    msg.setDestination(60935U);
    msg.setDestinationEntity(178U);
    msg.id = 185U;
    msg.label.assign("HCERATDQRUNWHVYBAQVNVFLGN");
    msg.component.assign("XKUIDKRUQRLICEUDTZIXFFLQFNANYYOZJZOZAKOSFLAXMR");
    msg.act_time = 42380U;
    msg.deact_time = 8077U;

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
    msg.setTimeStamp(0.8719460883444827);
    msg.setSource(49134U);
    msg.setSourceEntity(37U);
    msg.setDestination(46710U);
    msg.setDestinationEntity(159U);
    msg.id = 23U;

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
    msg.setTimeStamp(0.6137176590908695);
    msg.setSource(26599U);
    msg.setSourceEntity(1U);
    msg.setDestination(26015U);
    msg.setDestinationEntity(50U);
    msg.id = 234U;

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
    msg.setTimeStamp(0.15345562224743192);
    msg.setSource(11462U);
    msg.setSourceEntity(156U);
    msg.setDestination(29292U);
    msg.setDestinationEntity(88U);
    msg.id = 205U;

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
    msg.setTimeStamp(0.21468536376125946);
    msg.setSource(26421U);
    msg.setSourceEntity(14U);
    msg.setDestination(60793U);
    msg.setDestinationEntity(195U);
    msg.op = 223U;
    msg.list.assign("HWVCBGNXQQIKIREGRVIXKZZYXVKXBCMOCOFHBPZRPEKUNHDIQOLUFADZJKPDOUGYDSJPZVOZTMRTWMGAUNZSHMFQAZRHUUWIKNTDGREANESWOLPNFDYYQCFJKSFNNWIWDLJREBSTVFGVHCCQZEW");

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
    msg.setTimeStamp(0.08082040698264081);
    msg.setSource(58242U);
    msg.setSourceEntity(78U);
    msg.setDestination(45426U);
    msg.setDestinationEntity(199U);
    msg.op = 103U;
    msg.list.assign("VHISZWKBZNAUUHGTNQFKZKDAOFXHJRPYKFWOJFCCDVUYILGUWSIDIUWBZIVJYMDVHKUXPLAR");

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
    msg.setTimeStamp(0.1926440951156797);
    msg.setSource(25173U);
    msg.setSourceEntity(184U);
    msg.setDestination(48364U);
    msg.setDestinationEntity(76U);
    msg.op = 165U;
    msg.list.assign("FUZXFZVVLSDSBIBDDWJ");

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
    msg.setTimeStamp(0.34664036532258335);
    msg.setSource(2160U);
    msg.setSourceEntity(167U);
    msg.setDestination(47250U);
    msg.setDestinationEntity(210U);
    msg.value = 26U;

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
    msg.setTimeStamp(0.8965136113079125);
    msg.setSource(64319U);
    msg.setSourceEntity(40U);
    msg.setDestination(28542U);
    msg.setDestinationEntity(33U);
    msg.value = 129U;

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
    msg.setTimeStamp(0.2092297643050791);
    msg.setSource(58220U);
    msg.setSourceEntity(250U);
    msg.setDestination(50034U);
    msg.setDestinationEntity(234U);
    msg.value = 117U;

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
    msg.setTimeStamp(0.6374875118070837);
    msg.setSource(38954U);
    msg.setSourceEntity(114U);
    msg.setDestination(3808U);
    msg.setDestinationEntity(118U);
    msg.consumer.assign("RCJTOINWPVLQNTEUAWBTHXRVRKWSBONROCEAVLFNGFTUOXMWTEBBBUYIAFJKVTDVVSJRRZSBFXRHYDOMDLHENPPUOUXLEYKZRGFACEWHIFLKYOMGSJCZAZMXEUNQJSYNTMIIXPWHJHPHGJWZVZBRJCDIQWOMXTQWLJSGOALBALVYHFEKSCKMCZDYPGDBUGQAMTPLXUYQGVVFDZIAKXQUIEIESYUFZGINCRNSLNHMCFGQPYDHTPDXJZCASWKMBP");
    msg.message_id = 28210U;

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
    msg.setTimeStamp(0.3144208440878008);
    msg.setSource(24623U);
    msg.setSourceEntity(219U);
    msg.setDestination(44463U);
    msg.setDestinationEntity(108U);
    msg.consumer.assign("LIRMIYKFRNZRVFHBETYSBQCZJKTHXNSPFLASKSGQDQEHDTPCURRGPQTQLYNDEAZKDUARYJQWUCIUOOLEELPWXHIGVVFVJHMSYJSJVDOTKXUHSKZTTMMZLWXQEUOPJRBFKXYREOBDXVDCCJPCZUAFNHUJBCASAWNBXPFHGWPKGGHIXATRQKANQFVWCXYFWTDJCLMXGDWZSCVRYZWOOE");
    msg.message_id = 23180U;

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
    msg.setTimeStamp(0.527524557048491);
    msg.setSource(12168U);
    msg.setSourceEntity(128U);
    msg.setDestination(22334U);
    msg.setDestinationEntity(50U);
    msg.consumer.assign("FTIXGMVIAPGRYBZGFLJRKSPNJBDDTMJDPZDWRGSAEDSTBKKWACRFOBSYDZHBFUUEVAYJXWJELOSZTRKMBHKMJCUSVQPWPJEIHUSGUNNQIHLKLSRWRZFNNEXVBX");
    msg.message_id = 26653U;

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
    msg.setTimeStamp(0.2936185668625677);
    msg.setSource(39721U);
    msg.setSourceEntity(134U);
    msg.setDestination(43625U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.6339048666557326);
    msg.setSource(15948U);
    msg.setSourceEntity(37U);
    msg.setDestination(6495U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.12372724686574244);
    msg.setSource(17943U);
    msg.setSourceEntity(105U);
    msg.setDestination(40502U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.5745319821840559);
    msg.setSource(39071U);
    msg.setSourceEntity(101U);
    msg.setDestination(11724U);
    msg.setDestinationEntity(228U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.6456767732734566);
    msg.setSource(15608U);
    msg.setSourceEntity(68U);
    msg.setDestination(17154U);
    msg.setDestinationEntity(113U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.26849792957141394);
    msg.setSource(11935U);
    msg.setSourceEntity(139U);
    msg.setDestination(7332U);
    msg.setDestinationEntity(186U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.5635607623287187);
    msg.setSource(6856U);
    msg.setSourceEntity(205U);
    msg.setDestination(59621U);
    msg.setDestinationEntity(216U);
    msg.total_steps = 143U;
    msg.step_number = 164U;
    msg.step.assign("FZNRUBGATCMCCBNNGRZXDLFIKKJLPYJSUCPRHLYJRPQWDFRAGJVWHKPQEKDJWGWQVPQGZTSLDWFLTVGSVTLMPSEZGNAEIXQXATFZLJQSXNLYFOTJYHFTROOOMDWCSUPAETRRPDOAZBHDYIWRPVSIVYTSQIODWXMCQUYKNOXNNVJCBLX");
    msg.flags = 133U;

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
    msg.setTimeStamp(0.10437390304114191);
    msg.setSource(43842U);
    msg.setSourceEntity(156U);
    msg.setDestination(13224U);
    msg.setDestinationEntity(123U);
    msg.total_steps = 162U;
    msg.step_number = 126U;
    msg.step.assign("XYICOUOYKJPVBGAFHUWFWOUZHRXDURCBUOJYNVIBENXMHXMWUDTAGEMKJGTWWGAIFCEWNEYMDHTPRBRSUVGKEFJQAPRMYPCXHFCAVSLPCODZFSMLPBTJCWRBZLKQDALSVFIIRZLNKYROQOPDYDXKYQHYJVQNMHJQKYGEIGDBLCWZSLQGRGKUTILEQONXLEVCMHPTASDOFSNHOXRSXHXNMZ");
    msg.flags = 131U;

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
    msg.setTimeStamp(0.24476360772683214);
    msg.setSource(28909U);
    msg.setSourceEntity(242U);
    msg.setDestination(53033U);
    msg.setDestinationEntity(112U);
    msg.total_steps = 48U;
    msg.step_number = 10U;
    msg.step.assign("YFKGNJTOEPLOCPFJIQYHOJESCCMAEKHQGIXHEMCIQWVHWBUDANJROOQMAXYGRHIILAZHASGTWUKNTUBZDYFRKZLAYGGDVLCKXVFBOFXDVILHOGRBCMRORLYTNDDXBJQYEBSKTTZNJFGQVQPSCBGFISBRTVCSTUEPEUNWDHHUPHQIYKNMBAMNXWPJDUUVSUFPMVXXMLYEEJKOJUTQCIKNAPQXFVLSFRRWSELZIDROKCJZABNSLZWPAXMGMDZWWW");
    msg.flags = 22U;

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
    msg.setTimeStamp(0.11488974178235067);
    msg.setSource(10480U);
    msg.setSourceEntity(99U);
    msg.setDestination(34865U);
    msg.setDestinationEntity(31U);
    msg.state = 44U;
    msg.error.assign("NYFHKCATQYUUJLUJUGXTWJURNPSSWZWTQKVHMFVROQLE");

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
    msg.setTimeStamp(0.46396133063322254);
    msg.setSource(23698U);
    msg.setSourceEntity(189U);
    msg.setDestination(45442U);
    msg.setDestinationEntity(60U);
    msg.state = 153U;
    msg.error.assign("UMNRKPBJWJPAJVHHODMKAOIDHSYXNOYWUESIUQTYBFLOTNMLMCRSJNOPSIHYLQLAMXVITZIVIGEJUIZFCIFWFXWCGARGAZTOFWSYLNHQESCNYKZCMXDDZXKBXSZBRZUWKZCTEJMVAIGLQUMSXFRARKRXEMVAAPKF");

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
    msg.setTimeStamp(0.3085149357187499);
    msg.setSource(32141U);
    msg.setSourceEntity(228U);
    msg.setDestination(52482U);
    msg.setDestinationEntity(207U);
    msg.state = 241U;
    msg.error.assign("YXMLYQZYPTBLOESALNGGRURMLEIAPADMCVDUNVFAUCFTPKHXACZDROAJZKKINPGVYICFUMIVTNXXXHJTRTZGQJPITQMSBBLWPSIKYWNHORFJQCQALOMDJSSHHBZYDOXMQWSUTOWRVGFZZPNSCKHFQHKORAEDIOGHCENGFNLPREJWYKMIBSZDHYMEBXWITRBHLGKFNDQEEQBUPOJCUVXWLKCEZJJFEPXXWALVFBVU");

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
    msg.setTimeStamp(0.10679395899515698);
    msg.setSource(10916U);
    msg.setSourceEntity(40U);
    msg.setDestination(37422U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.8225866308507717);
    msg.setSource(34860U);
    msg.setSourceEntity(12U);
    msg.setDestination(3343U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.8923931614595119);
    msg.setSource(29775U);
    msg.setSourceEntity(172U);
    msg.setDestination(31840U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.8895092090445118);
    msg.setSource(35965U);
    msg.setSourceEntity(173U);
    msg.setDestination(27547U);
    msg.setDestinationEntity(166U);
    msg.op = 37U;
    msg.speed_min = 0.8881894818206852;
    msg.speed_max = 0.3766555118156698;
    msg.long_accel = 0.8090778890637627;
    msg.alt_max_msl = 0.05888395463270779;
    msg.dive_fraction_max = 0.9930240197449078;
    msg.climb_fraction_max = 0.8231604785501021;
    msg.bank_max = 0.7962894847111452;
    msg.p_max = 0.5488316455040984;
    msg.pitch_min = 0.27503028036649135;
    msg.pitch_max = 0.513491259541808;
    msg.q_max = 0.43525466290949777;
    msg.g_min = 0.8037522860356039;
    msg.g_max = 0.610903627711882;
    msg.g_lat_max = 0.7390271083550487;
    msg.rpm_min = 0.5975138947397209;
    msg.rpm_max = 0.9005276656651755;
    msg.rpm_rate_max = 0.3678145522283467;

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
    msg.setTimeStamp(0.39569619494234154);
    msg.setSource(61135U);
    msg.setSourceEntity(17U);
    msg.setDestination(3252U);
    msg.setDestinationEntity(84U);
    msg.op = 161U;
    msg.speed_min = 0.20660765516411084;
    msg.speed_max = 0.1024271940041821;
    msg.long_accel = 0.3325747068028869;
    msg.alt_max_msl = 0.34682127901527793;
    msg.dive_fraction_max = 0.7698374814657829;
    msg.climb_fraction_max = 0.6030203276806064;
    msg.bank_max = 0.5580292580519556;
    msg.p_max = 0.995466526020162;
    msg.pitch_min = 0.7571881698688744;
    msg.pitch_max = 0.12395531038388063;
    msg.q_max = 0.6421343468016718;
    msg.g_min = 0.5660974495615139;
    msg.g_max = 0.3518431949048738;
    msg.g_lat_max = 0.17478454644032448;
    msg.rpm_min = 0.2562396753008017;
    msg.rpm_max = 0.22094614207920382;
    msg.rpm_rate_max = 0.306367254797135;

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
    msg.setTimeStamp(0.7382487722720957);
    msg.setSource(34622U);
    msg.setSourceEntity(12U);
    msg.setDestination(13925U);
    msg.setDestinationEntity(97U);
    msg.op = 240U;
    msg.speed_min = 0.38966411949137547;
    msg.speed_max = 0.1934908432685868;
    msg.long_accel = 0.33827414644688303;
    msg.alt_max_msl = 0.32878358452848255;
    msg.dive_fraction_max = 0.6982041873962075;
    msg.climb_fraction_max = 0.09172896822046905;
    msg.bank_max = 0.8676807066161375;
    msg.p_max = 0.035421271071012006;
    msg.pitch_min = 0.7629796375495214;
    msg.pitch_max = 0.5549433024737941;
    msg.q_max = 0.8756782595513419;
    msg.g_min = 0.7372199813910693;
    msg.g_max = 0.24303887126797508;
    msg.g_lat_max = 0.547127646015296;
    msg.rpm_min = 0.4754074391300477;
    msg.rpm_max = 0.052137947647117655;
    msg.rpm_rate_max = 0.6506611785143529;

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
    msg.setTimeStamp(0.5413538426436065);
    msg.setSource(30350U);
    msg.setSourceEntity(74U);
    msg.setDestination(30649U);
    msg.setDestinationEntity(246U);
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.4742984106500229;
    tmp_msg_0.y = 0.795987279081934;
    tmp_msg_0.z = 0.8144175106652984;
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
    msg.setTimeStamp(0.6532568622321967);
    msg.setSource(10186U);
    msg.setSourceEntity(14U);
    msg.setDestination(56621U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.9701810402738154);
    msg.setSource(9885U);
    msg.setSourceEntity(244U);
    msg.setDestination(15682U);
    msg.setDestinationEntity(70U);
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 103U;
    tmp_msg_0.x = 0.6713139024311368;
    tmp_msg_0.y = 0.5730182279038879;
    tmp_msg_0.z = 0.8439143965694906;
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
    msg.setTimeStamp(0.34953665192537253);
    msg.setSource(59905U);
    msg.setSourceEntity(4U);
    msg.setDestination(1486U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.8103677981213923;
    msg.lon = 0.2887368479790249;
    msg.height = 0.4972433412602988;
    msg.x = 0.40811328237713984;
    msg.y = 0.6427525077878874;
    msg.z = 0.15739671574954617;
    msg.phi = 0.1847643127590698;
    msg.theta = 0.41199402678786046;
    msg.psi = 0.14412199304252205;
    msg.u = 0.8573607058827579;
    msg.v = 0.009857345218402203;
    msg.w = 0.4907661224452535;
    msg.p = 0.6645606832965623;
    msg.q = 0.5950239227919938;
    msg.r = 0.34575757683593866;
    msg.svx = 0.015801092150605878;
    msg.svy = 0.10598855516650985;
    msg.svz = 0.6421378816967321;

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
    msg.setTimeStamp(0.8213826100689561);
    msg.setSource(17066U);
    msg.setSourceEntity(124U);
    msg.setDestination(12298U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.14112805177579302;
    msg.lon = 0.1016974916915595;
    msg.height = 0.7903926813054599;
    msg.x = 0.22993487612589747;
    msg.y = 0.2077629872320661;
    msg.z = 0.10587587466079429;
    msg.phi = 0.6112255698347645;
    msg.theta = 0.5747409684211756;
    msg.psi = 0.2676817637708254;
    msg.u = 0.026556673571692335;
    msg.v = 0.9115930436420362;
    msg.w = 0.40018835337036185;
    msg.p = 0.2515015397030448;
    msg.q = 0.946590595660847;
    msg.r = 0.9639898864626253;
    msg.svx = 0.18110163866101847;
    msg.svy = 0.30948432192041797;
    msg.svz = 0.6347501987775656;

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
    msg.setTimeStamp(0.6515799426006225);
    msg.setSource(48723U);
    msg.setSourceEntity(102U);
    msg.setDestination(12829U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.5308440774448496;
    msg.lon = 0.5949695474786921;
    msg.height = 0.3527635910108613;
    msg.x = 0.30530859702889834;
    msg.y = 0.4959307599965561;
    msg.z = 0.3443421873225664;
    msg.phi = 0.30557565895715777;
    msg.theta = 0.5583329251133181;
    msg.psi = 0.6752447737986857;
    msg.u = 0.0907851625117283;
    msg.v = 0.04885389820824426;
    msg.w = 0.9986526561826227;
    msg.p = 0.8871831535035247;
    msg.q = 0.5073216469264766;
    msg.r = 0.7027758219014425;
    msg.svx = 0.8895045702018937;
    msg.svy = 0.7689399046850441;
    msg.svz = 0.33737614789947645;

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
    msg.setTimeStamp(0.6767306834679538);
    msg.setSource(29593U);
    msg.setSourceEntity(13U);
    msg.setDestination(4958U);
    msg.setDestinationEntity(222U);
    msg.op = 123U;
    msg.entities.assign("WXPVVUFEUOPQBLUWNNZYMAEXKVSDFAEHIORRQFYPPUXIDOWCLHTRGOMTJIOMSEUKNKNOJJGBTQZDIGSIGQVLVZWWZIDSRTQCBEUGDZCYVKQXHUJKTFXLOHAYBWYKXWUHRJS");

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
    msg.setTimeStamp(0.7083224476127734);
    msg.setSource(42273U);
    msg.setSourceEntity(79U);
    msg.setDestination(11672U);
    msg.setDestinationEntity(252U);
    msg.op = 20U;
    msg.entities.assign("BIZRAEXKTBQESSKGQPGQUIDFPZZHABXAEGOAPMZWILMMJEZTGKKJHAYHLMSMGPJMQIKISDFJFVUIHVKVSNIWNLSBDBNTHIFLFDGENAXEFTYWUPBGLJLGXRRWBNJPXWCSLAHXUEOOZFYVOYD");

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
    msg.setTimeStamp(0.23780949995080525);
    msg.setSource(16063U);
    msg.setSourceEntity(185U);
    msg.setDestination(17662U);
    msg.setDestinationEntity(140U);
    msg.op = 102U;
    msg.entities.assign("SBRLPTMSDVVEXWDEMLDYI");

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
    msg.setTimeStamp(0.2837259305855908);
    msg.setSource(196U);
    msg.setSourceEntity(225U);
    msg.setDestination(11632U);
    msg.setDestinationEntity(36U);
    msg.type = 188U;
    msg.speed = 5703U;
    const char tmp_msg_0[] = {40, 55, 37, 102, -102, 58, 0, 90, 16, -99, 54, -100, -5, 61, 95, -97, -66, 78, -11, -1, 112, 118, -15, 32, 88, -107, -128, 17, -13, -9, -44, -32, 38, -53, 58, 51, 7, 3, 25, 37, -20, -100, 69, 6, -109, 73, 47, -45, -42, -95, 77, -89, -123, -110, -54, -29, 74, -124, -31, -108, -64, -85, -77, -5, 47, -48, -23, -86, -128, 37, 24, -74, -40, 104, -17, 70, 51, 13, 122, -32, 88, 92, -42, -82, -29, -37, -104, -79, 48, 47, -119, -67, 25, 71, -44, 53, 46, 36, 38, -117, 71, -19, -64, 24, -101, 20, 44, -44, -128, 40, 5, 79, -6, -60, 32, 104, 81, -24, -84, -103, -114, 13, 83, 40, 91, -82, -43, 62, -20, -128, -34, 122, -110, -116, -2, 20, 15, 28, 120, 30, 103, 41, 36, 106, 109, -27, -56, -76, 35, 102, 115, -68, 50, 42, -16, 13, -70, -127, 96, -25, -30, -1, -90, -124, 16, 50, -41, 66, -58, 29, 125, 105, -3, -85, -32, -19, 57, -103, 22, 64, -59, -71, -99, 59, 37, 65, -75, 104, -4, -110, 99, 41, 112, 66, 9, -113, 105, 90, -61, 95, -107, 87, -30, 22, 61, 91, 33, -21, -109, -2, -120, -6, -109, -75};
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
    msg.setTimeStamp(0.2444636814086033);
    msg.setSource(32676U);
    msg.setSourceEntity(140U);
    msg.setDestination(51161U);
    msg.setDestinationEntity(83U);
    msg.type = 204U;
    msg.speed = 56390U;
    const char tmp_msg_0[] = {10, 95, -86, 40, -51, -27, 2, -127, -85, 113, 6, -26, -87, -83, -112, -70, 86, 12, 94, 26, -56, 24, 57, -83, -51, 1, -37, -60, -95, 112, -12, 11, -14, 98, 110, -127, -101, -118, -100, -40, 74, 119, -33, -6, 52, -95, -3, 20, 102, 93, 99, -64, 2, 31, 44, -74, -115, -123, 92, 115, -97, -6, 34, 97, 67, 28, -100, -42, -83, 77, 58, -14, 87, 125, -97, 50, 28, 43, -62, 75, 97, 107, 96, -111, 50, -17, -10, -96, 68, 44, -16, 16, 54, -34, 30, -59, -104, 46, -4};
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
    msg.setTimeStamp(0.10269375690636084);
    msg.setSource(396U);
    msg.setSourceEntity(71U);
    msg.setDestination(10479U);
    msg.setDestinationEntity(47U);
    msg.type = 27U;
    msg.speed = 9497U;
    const char tmp_msg_0[] = {21, -78, 79, -110, 50, -105, 50, -58, -120, -12, 2, 103, -3, -39, 7, 47, 20, -83, -32, 75, 100, -83, -90, 68, -72, 42, 62, 124, 119, -37, -5, 70, 101, -48, 124, 101, -42, -48, -40, 57, -17, -17, 6, 36, 59, -115, -100, 2, 15, -89, 123, -42, -31, 107, 111, -108, -35, -122, -42, -79, -122, -47, 33, 52, -81};
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
    msg.setTimeStamp(0.08822469821711698);
    msg.setSource(26431U);
    msg.setSourceEntity(6U);
    msg.setDestination(16835U);
    msg.setDestinationEntity(72U);
    msg.op = 241U;
    msg.tas2acc_pgain = 0.6743665882132812;
    msg.bank2p_pgain = 0.20874450613793538;

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
    msg.setTimeStamp(0.40515995907060454);
    msg.setSource(23964U);
    msg.setSourceEntity(232U);
    msg.setDestination(5595U);
    msg.setDestinationEntity(232U);
    msg.op = 168U;
    msg.tas2acc_pgain = 0.8971213166595555;
    msg.bank2p_pgain = 0.3716914100263575;

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
    msg.setTimeStamp(0.8422352324575807);
    msg.setSource(5684U);
    msg.setSourceEntity(203U);
    msg.setDestination(27075U);
    msg.setDestinationEntity(30U);
    msg.op = 157U;
    msg.tas2acc_pgain = 0.6548069277788527;
    msg.bank2p_pgain = 0.7386138189696939;

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
    msg.setTimeStamp(0.05560294580743286);
    msg.setSource(50092U);
    msg.setSourceEntity(26U);
    msg.setDestination(20050U);
    msg.setDestinationEntity(159U);
    msg.available = 2232705364U;
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
    msg.setTimeStamp(0.6020352696012532);
    msg.setSource(11667U);
    msg.setSourceEntity(223U);
    msg.setDestination(18147U);
    msg.setDestinationEntity(21U);
    msg.available = 853659141U;
    msg.value = 63U;

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
    msg.setTimeStamp(0.7798141044287896);
    msg.setSource(13313U);
    msg.setSourceEntity(10U);
    msg.setDestination(1976U);
    msg.setDestinationEntity(24U);
    msg.available = 2070994907U;
    msg.value = 212U;

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
    msg.setTimeStamp(0.0950542265077714);
    msg.setSource(2333U);
    msg.setSourceEntity(64U);
    msg.setDestination(56471U);
    msg.setDestinationEntity(23U);
    msg.op = 161U;
    msg.snapshot.assign("VULMPKHCASMBXUYIIZDORFWPVQYUFGIEXXNSTZEZFFAJNCUACHGOMBVYJRJRZUWSTLTROPGMBDDRLAVATXKBVH");
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 15U;
    tmp_msg_0.range = 0.1040222899673443;
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
    msg.setTimeStamp(0.3285223756197292);
    msg.setSource(9126U);
    msg.setSourceEntity(27U);
    msg.setDestination(22782U);
    msg.setDestinationEntity(162U);
    msg.op = 47U;
    msg.snapshot.assign("GYJKLVSSLSYKLEOTBBRGARDATEGKTHVFHQYRDOVZDPUASZBBEIOOCZJJMWMBWXFEETZIYTNSWTCIBFRRVUPPJIXFDYUVMYKXABGAPCOXORLMDCQXFQBQQZPOJJUTZEHIMKCLMCIYXUHJUHHDLNJDFNGESXCCQVTWZOINAPUETVPGNQQRANUKZK");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 161U;
    tmp_msg_0.mask = 782390894U;
    tmp_msg_0.scope_ref = 905877863U;
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
    msg.setTimeStamp(0.842777276590349);
    msg.setSource(48022U);
    msg.setSourceEntity(93U);
    msg.setDestination(46361U);
    msg.setDestinationEntity(63U);
    msg.op = 64U;
    msg.snapshot.assign("OYGUMVCDNOOLNTZQ");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.4743473400987861;
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
    msg.setTimeStamp(0.989129653944532);
    msg.setSource(5601U);
    msg.setSourceEntity(29U);
    msg.setDestination(10020U);
    msg.setDestinationEntity(151U);
    msg.op = 31U;
    msg.name.assign("SZNSZLMWCZWVAADVKJYMONBIXWRHPYTXRPEULEGIGDJGFHMJRKBDYBBCESPSQGLATCUJHSYVKSGFNCOMFGHRFFRTMWAVQIIKCLVOYFZXPLTWCAFJMPQAJHIJDDNEBWIHEMGFZLGTBTFTLZMBZXSVWCODUINMYBLZPDIVNTUDANUVAWMRXURWQEXEYPBZKRJNKEHWNPHQQKTSVOUKAOCRCQEQELSXYSYOXQHYP");

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
    msg.setTimeStamp(0.7787113820226094);
    msg.setSource(23810U);
    msg.setSourceEntity(15U);
    msg.setDestination(19857U);
    msg.setDestinationEntity(187U);
    msg.op = 73U;
    msg.name.assign("BYXOZSOQNKWMTBCPJZDEHFKLAFGTZUTFYEGAYUVPBSSPLPKWSJXXHCTTFDMAIKEXKFBUJSEXHCAKGPNLJIFHRUPROQVQSQRMXDZIIOTEG");

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
    msg.setTimeStamp(0.7007183963833212);
    msg.setSource(52361U);
    msg.setSourceEntity(9U);
    msg.setDestination(56807U);
    msg.setDestinationEntity(23U);
    msg.op = 46U;
    msg.name.assign("QAFSJWHJAOMVCTIKPSFFATUECLTVKLXMRDDKIYLBJHPSHBZJIZQBNEKCKDWGUQFFGRTYQFZDNJIHRDUPADXNZIMBWPYTDQPQYUUNJBWTAXZYOJSJKOVIDFGVGXCQVGBHUAXHGSESEKSVAHKOLLOPXYEXQFOGGRTXMSNLVEHVANARCZVTPROQQBHCFLMCNUJYYNSINJOEK");

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
    msg.setTimeStamp(0.4213996096405703);
    msg.setSource(65329U);
    msg.setSourceEntity(240U);
    msg.setDestination(22125U);
    msg.setDestinationEntity(6U);
    msg.type = 140U;
    msg.htime = 0.7443567202283009;
    msg.context.assign("ESFXYOTCSKJSOWHWWCDMPIQDQVUDGKLGGBUMLBQEAYPFIJOVFRCRSELFPCJVJLICEOHBHSNDIVBWJNQSIFXUSHWKSPNTPHQPFFENUPOBNHRLIGRPZLJQAOVAGGMOZPTEKJGKURZHNLHDTJTXZTXOXGRNDXWTYZBNCJXMV");
    msg.text.assign("YKMCPLLMRJFUHXRNKXGEQZOCLYGDMHNFFULIACAQUTONRVYWDORCHSJBIGGYTRWEHJPTQRSCTZSVRVOBOHHETYPGBXQZEAKYULFZILZQFSE");

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
    msg.setTimeStamp(0.9994047017901948);
    msg.setSource(42317U);
    msg.setSourceEntity(251U);
    msg.setDestination(14823U);
    msg.setDestinationEntity(229U);
    msg.type = 60U;
    msg.htime = 0.5200822495636223;
    msg.context.assign("YNCOLSUGMJBCARSSDWQCVJHWRATNTGDWKCAZBEUNCEFUDDRWJJHFSWJQOKSJHIRMFRBSZLDURXIGKBEHFPQZEGEONPVITOZIHEWECTTMDSSXFHCORPTVFBXBLBUTQXUVAFYUPGGDFPEQCFQXAIGKQKKWGKAVLLHWVBYIOSCQPZKRKXULLYNYPBZHHNOMFIMYKABZMMZWATZWNYGVVMLHPRPJZIALXDILJQXDXGJYUMUONRYVTQMDNSJ");
    msg.text.assign("XTXLBVBUTBYAVOFIATIWLUROWOXEMTLNKZOOCGZNRRHAEGXBALIKISEJNFLRFUMTHRYDVQZEKESZJCGBHBCWJP");

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
    msg.setTimeStamp(0.5788385758710071);
    msg.setSource(4912U);
    msg.setSourceEntity(59U);
    msg.setDestination(14501U);
    msg.setDestinationEntity(9U);
    msg.type = 52U;
    msg.htime = 0.22933663720339426;
    msg.context.assign("MGUXPVVLRHQSFXNGIIBGFYAYYSICKJWTTWXNC");
    msg.text.assign("DAURRFDCZLCAXRXVSSUQTQJAKZSMFKMHLADNZSWKIGWKOCYRRIYJTWOZYTOEIYXPBQSVGUTPZGPGMWLOJEAXUWSSCDLKFHEHFQBJTCVTTRWZDEGIUGMIPUBWEKUENKAIMEBJJBBJPILOQXZQCXSEGZSJYVRFAPBQOBBYRCNGQOPHMFYRDWOJDYZTACOVYQLEVXEVLPPNVVDDAKFVDXAMCLFCNBRHHQTYOGPWINULSUNWTJFHKMKIZHFMXXNIHH");

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
    msg.setTimeStamp(0.3619873009184208);
    msg.setSource(22509U);
    msg.setSourceEntity(45U);
    msg.setDestination(13480U);
    msg.setDestinationEntity(175U);
    msg.command = 41U;
    msg.htime = 0.9315024673508291;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 107U;
    tmp_msg_0.htime = 0.7154018103137901;
    tmp_msg_0.context.assign("BYHKLHSGRRRBCRYBLWCXZHGAUSSDHPXXJAONKUHSERISNKWSOATYUPCFKUAMJFNESQMDLLPAUDKMFLJTQ");
    tmp_msg_0.text.assign("PIWWIKQTHRBVXHFANYKOAYHTGBIXJIUYTCRECMLLNJPTLRUUHFBOVMDWSLTPDAOWKQVSPGWSMAJRLCHUFYYBJQOKXDMWEZBJONDFSKAUGSFXPHJGDGOEOBFLISFDNRSDRKCQYTRJUZZREOLZYKVQZZEEAJQOLUQAXYC");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7768766162176923);
    msg.setSource(23641U);
    msg.setSourceEntity(243U);
    msg.setDestination(33594U);
    msg.setDestinationEntity(159U);
    msg.command = 93U;
    msg.htime = 0.015753440770126526;

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
    msg.setTimeStamp(0.24560964075425473);
    msg.setSource(38723U);
    msg.setSourceEntity(188U);
    msg.setDestination(15473U);
    msg.setDestinationEntity(232U);
    msg.command = 196U;
    msg.htime = 0.286605117462182;

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
    msg.setTimeStamp(0.3939784014431341);
    msg.setSource(12916U);
    msg.setSourceEntity(13U);
    msg.setDestination(40214U);
    msg.setDestinationEntity(78U);
    msg.op = 4U;
    msg.file.assign("UWPOJTQKWLVLDAJIGNMOYAURCMVLVSKUVNKYJPBYJNRXNDQQBLEEXPTXKYJZVB");

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
    msg.setTimeStamp(0.0894887457681095);
    msg.setSource(22590U);
    msg.setSourceEntity(234U);
    msg.setDestination(45846U);
    msg.setDestinationEntity(207U);
    msg.op = 32U;
    msg.file.assign("PFLGFXSOSGLMXXLLZSKQXRAYIODMPZNVILUDVNUREUCKZWCXAEWRWQSUEEUBFWHGKJYQVJLYOZBFMANVIQOKQLEMSZRORGESPPBACCKTBNDMDTKAKQYRRBPQCY");

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
    msg.setTimeStamp(0.18622802740240962);
    msg.setSource(277U);
    msg.setSourceEntity(208U);
    msg.setDestination(16686U);
    msg.setDestinationEntity(108U);
    msg.op = 245U;
    msg.file.assign("KIUFAOUPGBTMLUXJGXGDXMRFHNMDVCUCFGEBBSNYOGONXEEPELHSWYDFVCCCDQZPAXSVXRSYWYNPMAPSC");

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
    msg.setTimeStamp(0.7979144165478976);
    msg.setSource(4941U);
    msg.setSourceEntity(151U);
    msg.setDestination(36049U);
    msg.setDestinationEntity(96U);
    msg.op = 238U;
    msg.clock = 0.6517937906608876;
    msg.tz = 92;

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
    msg.setTimeStamp(0.07044442820478602);
    msg.setSource(768U);
    msg.setSourceEntity(219U);
    msg.setDestination(19703U);
    msg.setDestinationEntity(15U);
    msg.op = 83U;
    msg.clock = 0.2678566583147025;
    msg.tz = 41;

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
    msg.setTimeStamp(0.3559295616396192);
    msg.setSource(50181U);
    msg.setSourceEntity(132U);
    msg.setDestination(1086U);
    msg.setDestinationEntity(130U);
    msg.op = 191U;
    msg.clock = 0.7785148050081824;
    msg.tz = -14;

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
    msg.setTimeStamp(0.9261106448601485);
    msg.setSource(60052U);
    msg.setSourceEntity(202U);
    msg.setDestination(25645U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.6440346136482824);
    msg.setSource(25589U);
    msg.setSourceEntity(39U);
    msg.setDestination(19758U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.4515981691928944);
    msg.setSource(5370U);
    msg.setSourceEntity(64U);
    msg.setDestination(4117U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.4009372057834891);
    msg.setSource(15873U);
    msg.setSourceEntity(216U);
    msg.setDestination(42590U);
    msg.setDestinationEntity(87U);
    msg.sys_name.assign("ENHMYZBQPFMWMEGXGQFMZXWZAJCUNWNDZSLTHKLIDIMQDJBRQUSHXTODGCFSTGOXEA");
    msg.sys_type = 117U;
    msg.owner = 19759U;
    msg.lat = 0.25265073223716283;
    msg.lon = 0.9001239700482648;
    msg.height = 0.6682753004033465;
    msg.services.assign("QUWBWYJVORPWHBHTIDPICVWVJOKQTCQSNXRMLNOCPLELYMEFJDAATIXTHCKHMSRBOQFVMFQKXNNTNRZLSXVAWHKNOVNMIAUKKEDQYBGXXSLYRYBUJR");

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
    msg.setTimeStamp(0.7222091749919894);
    msg.setSource(49592U);
    msg.setSourceEntity(137U);
    msg.setDestination(7555U);
    msg.setDestinationEntity(227U);
    msg.sys_name.assign("HNCEDYKKORHNKVYLPVYLBBMVSVPZBHMHUXIFJKVDWMXTLYAJXFIM");
    msg.sys_type = 248U;
    msg.owner = 43527U;
    msg.lat = 0.373063303657717;
    msg.lon = 0.16245949640928536;
    msg.height = 0.8428050105286389;
    msg.services.assign("WQUHABPYSGTIKDASGUNJCFXAEQTSOHWZRXNPYTGXIUBCOJCLMUITBLINCYJTQFXENPQXBVFRDMMROSCZWWDSVLUGAJQWEENSOJTOHLBTRERQVGYLRVAWQEGIMEKSOUYYVKXZMPCLWMYNKITG");

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
    msg.setTimeStamp(0.5605113221107436);
    msg.setSource(10124U);
    msg.setSourceEntity(102U);
    msg.setDestination(13391U);
    msg.setDestinationEntity(2U);
    msg.sys_name.assign("YWYFROBXUXBPPPIZWPXMBPYWNSHIFCMAVDDRAJMFPLQPDQKOQI");
    msg.sys_type = 31U;
    msg.owner = 17839U;
    msg.lat = 0.06454329230556921;
    msg.lon = 0.39881382706252577;
    msg.height = 0.5841191801487949;
    msg.services.assign("ZSCJRIDIHQTMGADKEEFLCPPSGMPIRIWJVMBHHSNBRJISDPZVBVZZHHLWJMOOWKLWCXFJUGNJYVGQMFSJBKQWJZAQXBTLWHRLWLROVSAASCMUTFTFPGEVYXNPVAAXRH");

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
    msg.setTimeStamp(0.9228045926171108);
    msg.setSource(13777U);
    msg.setSourceEntity(155U);
    msg.setDestination(27871U);
    msg.setDestinationEntity(53U);
    msg.service.assign("RTCBKFPNGAFEGDXNPTJQMYRFUQBDLVTZIYZQWRCKVWMKIJEZJGSKRHNOYSSAWKPXWUZEXTVTEYLAWRTINNKYMGBOSSAHUNMMLUFOWIWMRFCFJZJJEAYRUAGVIQVICAQSYPUVONIALGGKDNBPXYTDWGHHBLJOVYTOPHXQOLDFZCDSHIWMCRLXQRTESECKDDLGMPQCQZLPJBFVXBYSJUCQPTUNMLERB");
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
    msg.setTimeStamp(0.029888966979489617);
    msg.setSource(20606U);
    msg.setSourceEntity(22U);
    msg.setDestination(9859U);
    msg.setDestinationEntity(151U);
    msg.service.assign("ETQHJUZYGRXCQ");
    msg.service_type = 233U;

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
    msg.setTimeStamp(0.6364307164780058);
    msg.setSource(1899U);
    msg.setSourceEntity(95U);
    msg.setDestination(11168U);
    msg.setDestinationEntity(119U);
    msg.service.assign("DVQKWIIRVZFGCVPFHMDSQGYYIYLMJVXXLGLWMNXIARQMEDBHPGSCFTVZOVE");
    msg.service_type = 129U;

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
    msg.setTimeStamp(0.19050042944172152);
    msg.setSource(44511U);
    msg.setSourceEntity(171U);
    msg.setDestination(2965U);
    msg.setDestinationEntity(21U);
    msg.value = 0.9218943633069197;

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
    msg.setTimeStamp(0.8911358974158426);
    msg.setSource(31422U);
    msg.setSourceEntity(42U);
    msg.setDestination(53883U);
    msg.setDestinationEntity(158U);
    msg.value = 0.4729715929204744;

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
    msg.setTimeStamp(0.380466424424149);
    msg.setSource(54748U);
    msg.setSourceEntity(113U);
    msg.setDestination(15603U);
    msg.setDestinationEntity(184U);
    msg.value = 0.46714757786483596;

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
    msg.setTimeStamp(0.6229630090242739);
    msg.setSource(23494U);
    msg.setSourceEntity(65U);
    msg.setDestination(4511U);
    msg.setDestinationEntity(214U);
    msg.value = 0.6887107706855272;

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
    msg.setTimeStamp(0.49296721888177897);
    msg.setSource(486U);
    msg.setSourceEntity(165U);
    msg.setDestination(65451U);
    msg.setDestinationEntity(153U);
    msg.value = 0.07058368735909581;

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
    msg.setTimeStamp(0.5738803090461765);
    msg.setSource(28440U);
    msg.setSourceEntity(111U);
    msg.setDestination(36246U);
    msg.setDestinationEntity(183U);
    msg.value = 0.47347727806150275;

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
    msg.setTimeStamp(0.11991499979933218);
    msg.setSource(51168U);
    msg.setSourceEntity(249U);
    msg.setDestination(46742U);
    msg.setDestinationEntity(49U);
    msg.value = 0.10468410266525552;

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
    msg.setTimeStamp(0.6391851364822977);
    msg.setSource(39363U);
    msg.setSourceEntity(13U);
    msg.setDestination(28480U);
    msg.setDestinationEntity(236U);
    msg.value = 0.8725517107963119;

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
    msg.setTimeStamp(0.899381615499575);
    msg.setSource(23532U);
    msg.setSourceEntity(49U);
    msg.setDestination(7365U);
    msg.setDestinationEntity(133U);
    msg.value = 0.6921214807629741;

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
    msg.setTimeStamp(0.1811179578222667);
    msg.setSource(17487U);
    msg.setSourceEntity(144U);
    msg.setDestination(38193U);
    msg.setDestinationEntity(175U);
    msg.number.assign("EXDOLQEJWQUYCBWQKZWJZDQVJZMWCGVKNVQYMTPEFEBHKATLOTBHLDJQJWNYCRZRASFYWBXHAVELQCIJYFXYGQISWTBDUTXFMUNMOHUKQPIVEBHVLFWVLJNPRSBJSIMLLXFCHDCZDOETRAGNGXSZIZSPIXOUGVZMNYAXCMLYGSOPAGJBUKAOARDGTNTIUZFVKOKUSHNTDHPSNDBVAYIUMINCRQHOLAPXTGMEPFZFRRPCMUEWCKPSKFKRRXBEIG");
    msg.timeout = 54398U;
    msg.contents.assign("TTGVPNXLGZUIKXRIWTSJIPEWVHBYIVUNITCUOHWINNEHIFZDFMZSTDPVLCKPWQMKJNBHCBRGUXRGDZKMQBCJYCYLCJGYASFZWPQKAWUEWTVFTJBHAMZMSHAKAXOWOWEELBCBPRJYYSNMDELUDFGNPRDZYULEXKMQHSOGQVKXDQYIOUNSMOOLTHPGYAUQRHDNAEBHXGVZQFOYIFVSPRW");

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
    msg.setTimeStamp(0.7424476679381841);
    msg.setSource(37113U);
    msg.setSourceEntity(105U);
    msg.setDestination(39185U);
    msg.setDestinationEntity(128U);
    msg.number.assign("QDBIEBVPXYSQFISLXFHZWJRGMEHWSZCVBUPQJTLJAJSWGKOCIOILOWGXAAKDMVVWFXZUOHKDNMZDHYATNMUFGFHKOBUPRSFNCTJUHKTZEKENVSHWJXICLWRPANEVGZMJQBXRDALB");
    msg.timeout = 26435U;
    msg.contents.assign("YASFAOKCXRHAPXDUCKDOTIJWUSTJIOGGFCPKJKJDEKTKUFYCIMIYVGZHXFMMEZDHAQUQFLRJMYMIVFBKGEVTXATUQPWHSUCSNLLVNQMBHYIHAWNSUTFOCZEWGW");

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
    msg.setTimeStamp(0.9757607772517587);
    msg.setSource(43097U);
    msg.setSourceEntity(176U);
    msg.setDestination(36876U);
    msg.setDestinationEntity(254U);
    msg.number.assign("YOPOBUZAYTXHHVBLZKUSZXFJDDEWLVVNYLIRCVHJKPWYPUIDNLKALMEWAFPCJRZPSOLKQMQCXEQAMWYITHQELOEXSQNFYBRTUWRSUVVNLGXCRPIAZEKHZENYQXNIBBMJFRCFWQCQCOHJGZTCZPBINF");
    msg.timeout = 60150U;
    msg.contents.assign("WUCPQTCDOWRAEUBOILRRGNNIGQRRVZXAPOSGMPTTKYSWXPECNNTTLOYBGDAKFCDZSKDOYZPWFIMMZJLDPJXOGBQGENPRSBIBXJXNUXQRJDVAHFFSDHIMEETAHLCEEGOJWMAAOVSQLZHIHULRHZSOJNLKNJRJUIEXSVVDTTC");

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
    msg.setTimeStamp(0.3140031068220325);
    msg.setSource(35740U);
    msg.setSourceEntity(5U);
    msg.setDestination(39831U);
    msg.setDestinationEntity(210U);
    msg.seq = 1074251468U;
    msg.destination.assign("ICIMUULRFVMLDJAKHQDTYTYOVDUYAFEPSLCZLAGVOGEEUFSNPQRYXIZMRBOKXBLEYCHWRCFVQHMUWHFCEXKSZKBOC");
    msg.timeout = 57857U;
    const char tmp_msg_0[] = {36, -22, 54, 40, -38, -104, 57, 39, -108, -73, -1, -75, -57, 36, -66, -35, -62, 61, -32, -51, 75, 63, -112, -95, -29, 21, 100, -45, -52, -54, 80, 19, 95, 72, -16, -22, -53, -6, -123, -35, 90, 68, 106, 45, 82, -124, -124, 50, 62, 95, -97, -41, 77, 18, -108, 79, 2, -114, -54, 22, -56, 69, 96, 97, 44, 108, -102, -49, -125, -51, -75, 124, 29, 125, -5, 109, 69, 80, 86, -62, 48, -26, -4, -27, 37, -94, -9, 58, 49, -63, -103, 32, 24, -100, 60, -24, 36, 126, -103, -32, -85, -88, 14, -124, -114, 87, -111, 99, 105, 101, -99, -24, -50, 99, -65, 47, 69, 29, -33, -106, -124, -81, 111, -127, 85, -40, -19, -17, -100, -91, 65, 97, 99, 32, 68, -119, -94, -15, 105, -73, -5, 3, 68, -69, -119, -26, 67, 60, -53, 36, -70, -127, 52, 93, -6, -24, 109, -11, 31, 110, -34, -48, -110, 65, 8, -37, -80, 99, 41, -97, -6, -40, 60, 49, 22, -16, 65, -76, 117, -59, 110, -96, 63, -120, -38, 107, 9, 107, 100, 38, 8, 71, -85, -37, 11, 90, 121, -98, 106, -112, 112, 82, 123, 54, -48, -101, -50};
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
    msg.setTimeStamp(0.39305695322135126);
    msg.setSource(27376U);
    msg.setSourceEntity(42U);
    msg.setDestination(14787U);
    msg.setDestinationEntity(24U);
    msg.seq = 2126021504U;
    msg.destination.assign("NSZKSOLALODIIIKCYMTAYFKWUVNIPPCJRNBQRYOYTGXWCCPNRDKJNHHVPGIYFGVRTHLGFBGBMBRJCOYEYMJWWQSFZQCZCSWBBUVFUONZNGXRVLKMKSULXZILOVQDCKSMMBUCDYVGVDQAYNAHUZARQVEEWEFTNPIUPGQDSVBKLXDZBIGEAOEOROLHPTFWJHUSTSDXWURJXQLJBZJIETAYHHUMDATKAFEZCFJMOPGWWLEPIDMEHTAJ");
    msg.timeout = 7543U;
    const char tmp_msg_0[] = {-112, 17, -31, 86, -48, -3, 39, 90, 95, 31, 41, -38, -115, 73, -13, -91, 70, -23, 44, 64, 5, -97, 31, -70, -22, 126, 1, 2, 46, -73, 16, -82, -103, 98, -23, -56, 125, 23, -10, 104, 117, -77, 20, -16, -88, 54, 16, 122, -120, -120, 81, 124, -90, 45, 42, -100, -123, 67, -59, -22, 35, -28, -77, 3, -62, -40, -3, 87, 16, 108, -96, -79, 35, 71, 15, 11, 92, 40, 52, -112, 117, 104, -90, -28, -118, -33};
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
    msg.setTimeStamp(0.9468714122357231);
    msg.setSource(8195U);
    msg.setSourceEntity(216U);
    msg.setDestination(22127U);
    msg.setDestinationEntity(233U);
    msg.seq = 393393532U;
    msg.destination.assign("GPLHTXOCLSVEHDKUJFLQAQSCJCNXTHIYBPGMYJICDAIKQHMFEADGCBMUTGN");
    msg.timeout = 7956U;
    const char tmp_msg_0[] = {-59, -35, -114, 123, -61, -32, 43, -105, -11, 47, -91, 43, 115, -98, -67, -41, -26, -32, -76, 21, -43, 107, -92, -115, -58, 38, 79, 123, -69, 68, 110, 104, 112, 109, -10, 3, -116, -76, 97, 34, 5, 49, 64, -110, 15, -99, 116, 4, -81, -128, 85, -10, -35, 16, -96, -73, 10, -1, -95, 95, -101, -73, -84, 102, -108, -72, -31, -118, -3, 100, 113, -75, 1, -52, 41, -20, -43, -12, 0, 21, -2, 111, 19, 118, -24, 23, -95, -106, 62, 60, 13, -2, 22, 7, 107, -45, 65, -65, 63, -115, 71, 89, 63, -75, -106, 112, 74, 59, -76, 109, 54, 30, -30, 45, -91, 123, -76, -31, 29, -6, -48, 54, 62, 61, 110, -10, -65, 0, -109, 10, -35, 89, 96, -82, 110, 64, -88, 73, -122, -41, -127};
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
    msg.setTimeStamp(0.36380376493918254);
    msg.setSource(25956U);
    msg.setSourceEntity(216U);
    msg.setDestination(37225U);
    msg.setDestinationEntity(0U);
    msg.source.assign("ZECXPWOQHHWJFHFCPZDTUOMGHLSFFIZRFNEYJSZWJIAJSBCMYMHNUJALSGGMIALFJOGOPFLVLAYNVBZQYIRHBRKXJTAEYNWWVKBQPQCXW");
    const char tmp_msg_0[] = {61, -27, 5, 100, -17, -51, 2, 46, 99, -43, -89, -89, -107, -56, 48, 51, 105, -55, -75, 23, -100, -114, -23, -115, 44, -63, -109, 43, 108, 16, -1, 12, -64, 13, -70, -44, -125, -9, 112, 94, 98, -78, -8, 97, -107, -12, -114, 70, 52, -48, -12, 19, -52, -72, -59, 71, 122, 94, -69, 82, 96, 105, -42, -106, 48, -89, 40, 123, 85, -123, -39, -112, -126, -1, -125, 48, -74, -68, 27, 21, 89, -16, 1, -117, 75, 22, 62, -41, -89, -27, -94, -11, -72, -40, 92, 44, 52, 126, -16, -109, -52, -47, 118, 84, -128, -73, -79, -58, 98, -95, -111, 7, 28, 74, -78, 109, -106, -91, -120, 78, -104, -62, 37, -39, -80, -122, 39, -25, 98, -111, -53, 82, -115, 27, 78, -24, 85, 46, 11, 63, 28, 123, 101, 3, 48, 9, 25, -122, -104, 43, 11, 72, 90, 101, -53, 52, 57, -108, 82, -81, 83, -49, 7, 13, 117, 88, -120, -95, -89, -57, -48, 103, -58, 32, -45, 45, 62, -107, -4, -106, 29, -42, -1, 38, 20, -40, 52, 0, 33, -15, -71, 36, 90, -31, -80, 67, 16, 117, -99, 85, 66, -57, 100, 93, -31, -38, -91, 30, -79, 7, -56, -39, -106, 67, -75, 68, -46, 122, -82, 84, -54, -120, -73, 49, 76, 119, -125, -86, 107, 96, 3, -77, -74, -35, -89, 70, 58, -49, 48};
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
    msg.setTimeStamp(0.5719962647416502);
    msg.setSource(14210U);
    msg.setSourceEntity(95U);
    msg.setDestination(47002U);
    msg.setDestinationEntity(96U);
    msg.source.assign("SOAMETNNKJLLXVCOFODTEAJICETFCKLGAHKXAZUFUFDTVITBJEWLDFKV");
    const char tmp_msg_0[] = {116, 55, -106, 42, -69, -51, -45, -17, 10, -88, 117, 39, -41, -95, -27, -117, -16, -125, 63, 104, 125, -107, -63, -23, 108, 90, 2, -11, 77, -52, -127, -11, 49, -8, 94, -35, 84, 65, -119, 17, -97, 68, -84, -112, -126, 74, 68, -12, -102, 32, -25, -15, 34, -101, 6, -42, -20, -63, 119, -87, -40, -95, -29, -118, -125, 53, -73, 97, -52, 50, -38, -77, 58, 121, 101, -117, -55, 34, 123, -117, -8, -8, 54, 48, 43, 56};
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
    msg.setTimeStamp(0.20423683123615866);
    msg.setSource(57387U);
    msg.setSourceEntity(103U);
    msg.setDestination(43517U);
    msg.setDestinationEntity(73U);
    msg.source.assign("TQZRTPFDHUHINCPHQOKZLIONUBIQAFGENQIGRJLAOJXCKLSZDXDSNSEPWTMIKBECTVOAYJDOWIAMNMHUFFBVIHFLSMUP");
    const char tmp_msg_0[] = {-96, 2, 23, 98, 105, -112, -22, 68, 58, 58, 45, -57, 1, -60, 91, -97, 122, 69, -76, -2, 64, 106, -105, -126, 0, -12, -10, 44, 126, 41, 116, -120, 21, -102, -2, -106, 35, 34, 19, 70, 22, 26, -54, -37, 93, -85, 38, 109, 43, 65, -1, 50, -95, -115, -16, -120, -126, -25, 91, 101, -123, -24, 79, 60, 88, 102, -77, 16, -96, -34, 122, -33, -39, -72, 100, -118, -40, -64, -102, -126, 49, -15, -84, -76, -113, 0, 103, 90, -22, -69, -6, -57, -19, 22, -1, 57, -110, -68, -72, -109, 78, -106, 114, -58, 90, 0, 8, -76, 80, 120, -68, 31, -17, 59, -117, 95, 118, -87, -125, -90, 68, -64, -105, -55, 65, 88, 67, 86, -61, 81, -81, 19, -37, 121, 7, -102, 104, -36, 49, -111, 18, 38, 61, 66, -34, 100, -35, -36, 35, -44, 79, -13, 108, -26, 89, 69, -8, -95, -92, -88, -21, 105, 7, -6, 109, 83, -109, 35, -33, -23, -92, -84, -55, 25, 1, 51, 41, 57, 121, -60, -11, -9, -82};
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
    msg.setTimeStamp(0.8971271541911024);
    msg.setSource(29818U);
    msg.setSourceEntity(57U);
    msg.setDestination(52165U);
    msg.setDestinationEntity(92U);
    msg.seq = 2852303733U;
    msg.state = 136U;
    msg.error.assign("MUPKYSNOKFVIM");

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
    msg.setTimeStamp(0.2791596050719005);
    msg.setSource(20668U);
    msg.setSourceEntity(234U);
    msg.setDestination(26064U);
    msg.setDestinationEntity(234U);
    msg.seq = 4262212785U;
    msg.state = 179U;
    msg.error.assign("ZHAQESZXJDLKGQZCCDZHGUZKDJWROGMPATRENFVKSLWIIRPAYXJTKCMWQLGJOYOWTNHCSMDGCWDIHNJTPKMYHUPGRBXPEHXCDYLTXBSHTROBFZNUITOZTATUGPDVAUILIUQYRLIEADEWGDZFKMMPAQEBGUSY");

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
    msg.setTimeStamp(0.7504532659676528);
    msg.setSource(14746U);
    msg.setSourceEntity(166U);
    msg.setDestination(65000U);
    msg.setDestinationEntity(58U);
    msg.seq = 1671154833U;
    msg.state = 185U;
    msg.error.assign("SYMBRAABXAQPNKLLFFMXGEKPIEZBAEELJCOJWTKFHCLCIMMHWFDITRWJVQQPDVJZVZNUOSADAQTJGMKGLXTOCIARLBYOJROVKPUSHHJBLDGYZODXLWPILQWFTAGRDWMOEGYLQDHQHNMUWIWRDUQAP");

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
    msg.setTimeStamp(0.36553997358108103);
    msg.setSource(30896U);
    msg.setSourceEntity(155U);
    msg.setDestination(53170U);
    msg.setDestinationEntity(145U);
    msg.origin.assign("ENYPVKSWAUCQDNYLFJDTNBJBQKLPTEXAFEDLMIJRZVUTUOBGNMMMXMASKIKFELISQWUUQBCVQTYSLMSJPRWYRVHSFXFQFWYKPQFXGFISHLTXCZOOLRIWZKATDQAXY");
    msg.text.assign("GZTAFGEOXOFHIJAVJOIIRMKMSAMUEIYINWDWXHULAUPGGSTCZOTRMZBXVCXZTKMJHRPSDENVYYSFYXOPNBCRQCSTFUHVNQWLTJFDVCBKTXKNCVAOFVYSQMEZZQBTOGXQCGFNKLEALJHYMQIETWHKP");

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
    msg.setTimeStamp(0.5718393136438027);
    msg.setSource(34471U);
    msg.setSourceEntity(67U);
    msg.setDestination(63556U);
    msg.setDestinationEntity(57U);
    msg.origin.assign("PIWGUIJMDTWGYFQEGUEMHODDTKSVCYOFTIQCLAFZSVBBULNRUSEHCABKRYGPKMXCNXMYNADXQORDSEBQJHLSVFQXQTWNFQ");
    msg.text.assign("UXQUEPJNTXHDPWPCMWXAZZUBZHAAZMYXWJOBKTOKNHFWVCUHEQFGDJADFKJ");

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
    msg.setTimeStamp(0.8790214013170319);
    msg.setSource(14435U);
    msg.setSourceEntity(145U);
    msg.setDestination(473U);
    msg.setDestinationEntity(69U);
    msg.origin.assign("NOUHJBAHKDSBOUSKGTUIFYNTBYNXCZQDEDUMWVTZFLGDPAWSFOUWSNSVLFDFEEHNEUWQSCFJXYWWKMPXGJFRPCWLOPNQDUCLKICUBCZXGVRTVGHYAYQQXBKJABZXVLELNCDDCPYWQJEFLHLWADZPVRNCTBRZPRYOBIFEKKGMGYNGVATTBPXY");
    msg.text.assign("OGDLSOURXZFFCFOZNSZDTXVQHAEQGPPTYAQXFUTHJOZMTVGBPOKJLPAOEVDZJKPLBIQCSCSZPHTHYFCGGDAUPXJXDUDFBTLLWIULYSNRVRTIEPIYQJXLWMWWVXMLHZHDJWVMNBMVHBKICLEWBXDQUYFXWYIHFWFHNSOANECSIUGNAL");

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
    msg.setTimeStamp(0.7834466733756166);
    msg.setSource(41003U);
    msg.setSourceEntity(159U);
    msg.setDestination(4731U);
    msg.setDestinationEntity(65U);
    msg.origin.assign("LAIPQSSPRMDHGFSUTXNFMAMDACCEZKSNPYHIEKABWNTEINEQXTWSXCXARTOXWMYSCIUHETDRLVBFYDBDBUDHURJNUFFJK");
    msg.htime = 0.3806697696292075;
    msg.lat = 0.7449469727838199;
    msg.lon = 0.6566622359033207;
    const char tmp_msg_0[] = {-78, 14, 103, 31, -74, 95, 91, -45, -33, 30, 51, -59, -20, -123, -43, -62, 28, 122, -43, 30, -36, 64, 118, -72, 41, 116, 69, -4, 37, 104, 94, 32, -121, -128, -114, 118, 29, 80, 74, 96, -43, -80, 5, 57, 59, -8, -61, -7, -103, 89, -127, -68, 92, -96, 47, -122, 124, 121, 6, 31, 28, -68, -118, -2, -59, -35, 100, -118, -108, -67, 61, -64, 60, 12, 81, -56, 114, -36, 59, 125, 71, 75, -45, -39, -26, -44, 89, 60, 88, -83, 106, 71, -109, -103, -81, 47, 19, -12, 1, -20, 123, -81, -18, 97, 97, -100, 120, -121, 80, -19, -101, -52, -40, -24, -20, 7, 123, -37, 31, -106, 72, -127, 112, 18, -2, -57, 107, 123, 120, 4, 33, 64, -113, 73, -111, 17, 1, -14, -68, -126, 43, 122, -14, -54, 38, -11, -103, 58, 78, -29, -90, 66, -9, -80, 111, 118, -74, -28, -125, -21, 84, 40, -38, 14, -111, -6, 36, -70, -76, 75, -16, -2, -83, 1, 50, 124, -78, -117, -109, -114, -117, -42, -70, 64, 70, -80, 28, -87, 13, -83, 79, 32, 90, 48, 32, 16, 126, -84, -4, 29, -107, 10, -82, -25, -27, 17, -81, -99, 78, 105, 5, 108, 43, 10, 119, -43, 117, 114, 33, 89, 15, -3, -123, 70, -44, -96, -42, 98, 63, -29, 88, 41, -121};
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
    msg.setTimeStamp(0.14421342607196042);
    msg.setSource(26847U);
    msg.setSourceEntity(124U);
    msg.setDestination(14405U);
    msg.setDestinationEntity(74U);
    msg.origin.assign("BWFAWEANWMDRANTNVVHNKVXSTXAKIEPLCEIDUJJAQIIKCPIBUAKPBBTCGDSJNGZNWCHVPKRDWQMQQTPMCGXZFYPOJCEKTRFIBVNXDUYLTPRKYOYBWZEPYNJBR");
    msg.htime = 0.9606145647034834;
    msg.lat = 0.8763668933419679;
    msg.lon = 0.4786236495906493;
    const char tmp_msg_0[] = {126, 53, 38, 24, -21, 11, 8, 88, 118, 81, -45, 61, 111, 42, 80, -55, 63, 24, -33, 64, 32, -54, -124, 7, -95, 52, 111, 86, 57, 121, 83, -26, 40, 47, -92, 61, -81, -6, 45, 37, 84, -21, -94, -39, -26, -30, -122, 106, 116, 50, -19, -127, -95, -25, 62, -95, -116, 113, -70, -104, -90, -26, 11, -46, 124, 91, 104, 104, -117, 26, 79, 98, -16, -97, -62, 59, 39, -33, 117, 3, -64, -123, -42, -51, -2, -54, -52, -62, 41, -120, -85, 23, 39, 100, 64, 45, -35, 64, -77, -86, -124, 83, -75, 126, 36, 32, -14, 125, -70, 98, -79, -72, 63, 97, 94, -79, -15, -71, 120, 78, -108, -25, -24, -1, -85, 49, 103, -7, 60, -110, -99, -124, 43, 50, -34, -74, -117, 40, -46, -45, -83, 86, 116, 42, -112, 64, -113, 39, -45, 77};
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
    msg.setTimeStamp(0.12533743463898628);
    msg.setSource(39853U);
    msg.setSourceEntity(132U);
    msg.setDestination(48281U);
    msg.setDestinationEntity(174U);
    msg.origin.assign("VTZRMHEUSPCLOZZKAHSDPMIUSSFBVJOWXRBHPXYAAAJHZTINHPJCRKZLNKTVARFVCQRVGAAQMZDNDDWYKMTHBAROODILQLJGQPWXMSUCMXVQLJSJYQMRBXWEXEYIOSZOOXDWITUMVEGSROFLNPNNPTXFZUHPBCVPQCXYLMBSWBBTWTVEKHHNIGHGGBUCORTSWFJW");
    msg.htime = 0.7214536526040769;
    msg.lat = 0.4016636887872428;
    msg.lon = 0.4340311576221817;
    const char tmp_msg_0[] = {-128, 49, -7, -63, -126, 52, -16, -1, 22, 2, 22, 13, -47, -81, -55, -82, 64, 7, 55, -103, -124, -8, -43, 11, -53, -94, 74, -100, 104, 86, -22, -72, 99, -79, -58, 74, -68, -17, -16, 42, 79, 109, 101, 5, 125, 97, -101, 57, 43, -38, -89, -28, 81, -36, -124, 45, 14, 12, -78, 96, 113, -78, -37, 56, 3, 99, 20, -57, 115, 21, 102, 39, 34, -100, -115, 49, -10, 26, 2, -101, -3, -3, 35, 15, -21, 78, -20, -9, 86, 61, -61, -36, 41, 34, -22, 54, -44, 124, 124, -41, 111, -36, 105, -18, 99, -45, 73, 71, 2, -18, -11, 3, -70, 45, -94, -59, -81, 92, 110, 48, 29, -72, -69, -22, -59, 44, -113, 103, 85, -128, 19, -122, 57, -123, -20, -125, 78, -118, 89, -65, -7, 2, -107, -60, 101, -33, 51, 55, -128, -113, -118, -34, 121, -100, 73, 71, -26, 66, -61, 24, 121, -114, 35, -92, -85, 0, -51, 90, -101, -58, -66, 66, 4, -127, -87, 67, -101, -23, 66, -20, 110, 97, 47, 113, 26, -96, -42, 73, 126, -12, 90, -51, 45};
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
    msg.setTimeStamp(0.7526180938329602);
    msg.setSource(43634U);
    msg.setSourceEntity(186U);
    msg.setDestination(12688U);
    msg.setDestinationEntity(78U);
    msg.req_id = 15626U;
    msg.ttl = 26742U;
    msg.destination.assign("YHJKCESWPGDCWCVCNHEJYRALSRMXHKNRUBAGEJIWDZXGHVXLVZDCDTCWMVTNDUQFDMEWNDPCKFTDQSHQTRLKUBTIRSYIXOAKYIJYRHFUVAPALDUMRMOIWOFSLPBLXWAFNMVNIMBNPTPBYJOBKDISQZOSKUTHVOZJP");
    const char tmp_msg_0[] = {-57, -108, -96, -106, -76, -44, 82, -17, -9, -128, 81, -49, 106, -128, 59, -20, 46, -103, -17, -32, -5, -41, -88, 9, -35, 95, 61, -112, 35, 93, -64, -45, -28, 70, -40, 34, 58, 39, -26, 3, 48, -21, 1, -111};
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
    msg.setTimeStamp(0.19357662868969683);
    msg.setSource(26222U);
    msg.setSourceEntity(26U);
    msg.setDestination(16622U);
    msg.setDestinationEntity(47U);
    msg.req_id = 32911U;
    msg.ttl = 60597U;
    msg.destination.assign("EDJWKLPRTILBBSPEHKGPAQNUVXPVRATOFENYFEFKWTTTKXEJHVUGTHWENXCMAZITRDDGHQATQZKDUFICKYYYXLHDKRASVOFPBDYRBCTIYLPBSWIJBJMSBLJMUWJCHIUQFALYCMNZMWYVTSNPJBVXGQOZFIMCUGNLOMDLXAKJIIHCMMOOQISBHRWWSXUCPFYQXNGZQAMVROUGPNQR");
    const char tmp_msg_0[] = {89, -63, 59, 123, -107, 28, 38, 9, 61, -12, 117, -71, -88, -94, 46, -25, -1, 115, 108, -89, -97, 31, 18, -123, 89, 55, 82, 25, 65, 17, 7, 53, 111, 15, -86, 122, 19, 82, 101, 106, 57, -23, 19, -40, -25, -30};
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
    msg.setTimeStamp(0.4313210482811419);
    msg.setSource(32245U);
    msg.setSourceEntity(38U);
    msg.setDestination(18310U);
    msg.setDestinationEntity(123U);
    msg.req_id = 43763U;
    msg.ttl = 24095U;
    msg.destination.assign("RMHGCZGJNPIKDKMUJQXTFLQHKJRFHGOAYLPAVMPHGSQMDMBBFFNUSMTRCVTMBTINKQKVPANHUETHCLOJLWIVXYQSDLISWDBXKAGZOXNPVSPOCZLXMAWTEWGQSEMCGKOFDFJUIKURPFUFSUOCTBFXRVXTUEKCHXQGDYESOMAJBYPFDRVUBZIWRVANQIWYWJXBTHBOLJSCSAZAWXNHLJYYEZPEYTZCNDRWDZPVDEIKENLEWGRVJOZ");
    const char tmp_msg_0[] = {64, 105, -17, 93, -123, -91, 112, -125, 67, -41, -47, -116, 56, 124, 107, 35, 9, -118, 112, 39, 47, -57, -87, -33, -75, -90, -124, -123, 5, -47, -11, -74, 111, 83, -111, -85, -64, 60, 115, -35, 23, 51, -49, 119, 75, -14, 5, -20, -62, 95, 3, -84, 33, -89, -70, 69, 93, 112, -38, -36, 17, -90, -124, -118, -114, -107, 46, -22, -85, 60, 6, 13, 79, -32, 27, -3, -55, 78, -22, 13, 13, -64, -70, 64, 77, -69, 12, 35, -62, 70, 47, 92, 83, -120, -85, 100, 46, 91, -109, 107, -40, -71, -64, -93, 41, -6, 88, -6};
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
    msg.setTimeStamp(0.778474999993062);
    msg.setSource(57580U);
    msg.setSourceEntity(169U);
    msg.setDestination(59998U);
    msg.setDestinationEntity(42U);
    msg.req_id = 25061U;
    msg.status = 164U;
    msg.text.assign("HZRBZKIKZTQDQCVEWWWCGDKFRJJQNXGMEVVQDIKSOFAAYBTEYRGMABAUJCGTISTSOSANRFWHKNQCFMZIWMWFNENYVYKZUIDOXHKVPRYPUJSLQVZDYVUAMFKLOUXEPJOVCHMHKSQTXPISKCUVDJJHBQLLLONBMGBOIFDPRDADJCHSLPWOEZHASEXJOFPNPXAQLQJEYMG");

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
    msg.setTimeStamp(0.03921966165029134);
    msg.setSource(18009U);
    msg.setSourceEntity(239U);
    msg.setDestination(18219U);
    msg.setDestinationEntity(154U);
    msg.req_id = 45318U;
    msg.status = 142U;
    msg.text.assign("TIKVOKWTKHPHGMVQWLFJLKRTZIITEKJYGCTPAQFOCSXWQRZCLVJOHUZQVONZRNYWLGIJBKXSDZESJAHJFLFFDKSEDKHFWFMXABBJTCDOYZBEUWAVVNUDGCAXLXDNBSICQBYXZXGVHDNJCZXCUGEUCRQASDMLFGMKREOIOTPSGRTPIEWBBOSNYREYNUWRQPMH");

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
    msg.setTimeStamp(0.925768580783726);
    msg.setSource(60855U);
    msg.setSourceEntity(197U);
    msg.setDestination(4126U);
    msg.setDestinationEntity(207U);
    msg.req_id = 17067U;
    msg.status = 47U;
    msg.text.assign("GKQVSZJIQUVZDCXKMYBKMRDKGCXSZPDQNHIELJPBRZJXAUFAXSBVOOVCUCETPDGLDGQYRAPNFBHDBRT");

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
    msg.setTimeStamp(0.012099344895159625);
    msg.setSource(1080U);
    msg.setSourceEntity(245U);
    msg.setDestination(14570U);
    msg.setDestinationEntity(75U);
    msg.group_name.assign("YTJSDXIOIRPVHTSOEYXFVQSRRKSZCWSBYXBIMMHDRAAVAYZPIEHSZNWQYVTMIKZBRPOZBUAFPDLICRVBERNXCOLYAOWFOIGUKZDMPSBM");
    msg.links = 2167436616U;

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
    msg.setTimeStamp(0.8766354850523262);
    msg.setSource(4576U);
    msg.setSourceEntity(49U);
    msg.setDestination(51352U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("EHLSWAMKRHYYBTGOXMUBSEHGLYIPUOTAFENGJYXXOUTTEMSSQAWRCNXDFWKZFJHONQEDJUGIGZOFXHLZBBTDAHQCATIPNJVOLLONWSLBSHDHJORHVGKXYGPWSOLRFIEVUFPVXKFJEFRPJHKZMWXJDBMDVKNCRUTPMVURR");
    msg.links = 102322876U;

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
    msg.setTimeStamp(0.8469621988233584);
    msg.setSource(31584U);
    msg.setSourceEntity(167U);
    msg.setDestination(37387U);
    msg.setDestinationEntity(118U);
    msg.group_name.assign("FFWIFUWTRZZODCLPKSIHKXQJBABOJXFTQIEIGJCLQSUPQCUKVTMHWC");
    msg.links = 636603889U;

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
    msg.setTimeStamp(0.3088897654091959);
    msg.setSource(2950U);
    msg.setSourceEntity(120U);
    msg.setDestination(16861U);
    msg.setDestinationEntity(78U);
    msg.groupname.assign("DPTUZNTONOZMOXFCBTVDDFLWHUWJKYSUWBPQYRFJOHBYXVLAMKQYTNOZLQZWAINYYDXWNJKLDFTPLIGPGGIIKGWKCDSJQSQSHXKHEDQVXQJUDEOWVCVYMBAARXRGCSHJYALRATMZELLRSMNIMSZHJERXJUJGPRODTENGWBQSILAOHDCQZFPEPLZUHBATAQITKUVHVVEZPOFCFIMOUBNZIURKXPRNFNSGUVRXGFJACBECKSMC");
    msg.action = 142U;
    msg.grouplist.assign("KMSTJJMQIWIUSIRBWLNEGTQLSHXIWAOUCSJJPVVEEAHGNALVEXSGUBMQPBMZYBOSHXBDTWF");

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
    msg.setTimeStamp(0.1482320930676917);
    msg.setSource(58957U);
    msg.setSourceEntity(22U);
    msg.setDestination(32457U);
    msg.setDestinationEntity(11U);
    msg.groupname.assign("DASHRTTKXOGRJHLPMTAWZBATESZAPABJYNBTMVKTDJZSWJWGPNNIRDDRGFCPSOQCXYHUSECOLHCDJZMWMVXXTBQMYBLTIYYKKEUWAJEQHXLIKFCXKURPRJMFFAIUAUJEBQIDCLPIFOIIRHNHMYMFMHQNXUZZPEKXSQFBZDFENPKLBSWKKGHCJUZOVCMQCEQUYXBSZZWPGNREOIUOOFVWSYPVLGOGBWRJGNTYXHVDUDACLILQVGLYQFT");
    msg.action = 55U;
    msg.grouplist.assign("UWJZJYBQPNUHTNTUTKUGCDGTKRLXOZAYQHWGHVBJLNCGYLRKHMCQMAIMKLVMDNZYFCZTNAAMTILKJVXFFEHKNMOUHZSMKJOWTCYVXGEOPLPSWUEXLEDTGEIHIRXTKPSDZ");

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
    msg.setTimeStamp(0.836343563473955);
    msg.setSource(64985U);
    msg.setSourceEntity(49U);
    msg.setDestination(15109U);
    msg.setDestinationEntity(98U);
    msg.groupname.assign("BKDBQYLJMVFHWSRQYRNLKCUZJW");
    msg.action = 218U;
    msg.grouplist.assign("IMBUFEFUDPZCPHYWNCRMNSBYWKFULEGXTQUEODYMIUWMATFMYQKYCGHVGWYHXYOJHANMLKXRUFCOLHMTEB");

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
    msg.setTimeStamp(0.6615194939248162);
    msg.setSource(8341U);
    msg.setSourceEntity(3U);
    msg.setDestination(54993U);
    msg.setDestinationEntity(13U);
    msg.id = 192U;
    msg.range = 0.02599228870101966;

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
    msg.setTimeStamp(0.6599356916584448);
    msg.setSource(63455U);
    msg.setSourceEntity(225U);
    msg.setDestination(48252U);
    msg.setDestinationEntity(128U);
    msg.id = 140U;
    msg.range = 0.8463623557153456;

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
    msg.setTimeStamp(0.0035556290524894063);
    msg.setSource(20471U);
    msg.setSourceEntity(139U);
    msg.setDestination(55103U);
    msg.setDestinationEntity(231U);
    msg.id = 225U;
    msg.range = 0.0028317146746527078;

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
    msg.setTimeStamp(0.996890542433766);
    msg.setSource(9584U);
    msg.setSourceEntity(154U);
    msg.setDestination(60754U);
    msg.setDestinationEntity(194U);
    msg.beacon.assign("PMYFHDTFAKUZHZTSEZDVBZAJMAGENDYZNORQCWRDXSGWUAKNAWPCXIFLJBRLRSABBRVCFWTFUQTQJEYQNTQIMZZKVJGGWNPVJJSFYKQYKQXOHUUKWADCOPDFGJOOEXUKNKMZLDWGKOULHISPCILOUUHPWGHPCISYTKDBXNVNSIFZJETVIFIQCDPBWVBTRXAVXMMABMZMGXMUSVJCOHCLLFBLYRHHQYOJBLR");
    msg.lat = 0.7835533955245547;
    msg.lon = 0.33977029790171476;
    msg.depth = 0.9314775365998939;
    msg.query_channel = 59U;
    msg.reply_channel = 158U;
    msg.transponder_delay = 71U;

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
    msg.setTimeStamp(0.443734032245098);
    msg.setSource(41433U);
    msg.setSourceEntity(162U);
    msg.setDestination(60888U);
    msg.setDestinationEntity(33U);
    msg.beacon.assign("ENOBZRIDVDWZCLQMKEBAPFAIRFQOWTTWAYIOXBFMYIHVUXJEWDAURQNGWKVQSPCZCOPGXHECPZBJRRAFPSCJLQNWNRIJTKDEPSLKGXQANMIH");
    msg.lat = 0.5265569677915659;
    msg.lon = 0.886826938892083;
    msg.depth = 0.19655484596370343;
    msg.query_channel = 100U;
    msg.reply_channel = 126U;
    msg.transponder_delay = 107U;

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
    msg.setTimeStamp(0.8022329100397259);
    msg.setSource(30253U);
    msg.setSourceEntity(212U);
    msg.setDestination(30368U);
    msg.setDestinationEntity(237U);
    msg.beacon.assign("ERKAYLUWQH");
    msg.lat = 0.1366879536712844;
    msg.lon = 0.05828190407799738;
    msg.depth = 0.8784124503719256;
    msg.query_channel = 140U;
    msg.reply_channel = 108U;
    msg.transponder_delay = 123U;

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
    msg.setTimeStamp(0.8050946987491547);
    msg.setSource(60257U);
    msg.setSourceEntity(21U);
    msg.setDestination(11450U);
    msg.setDestinationEntity(51U);
    msg.op = 66U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CQQYDFUOAFQXOUPJNGEOSDJKBTPUWMNQFTNWIZENMNWNHMGGCAJXWUUHQWNZBLHYETRLPEPECEDVVJHPCJKLSAQGRSLVLTYSLCUYVSWOERBCRDNDDAHAAXKVXEHRBRWFZKIYUZDHAQMTIBDLIRHIEMIOXDOXJZMKLTSYFVRLDBVTKGOPPAB");
    tmp_msg_0.lat = 0.12568071096492173;
    tmp_msg_0.lon = 0.2105996345178872;
    tmp_msg_0.depth = 0.49754316788540087;
    tmp_msg_0.query_channel = 241U;
    tmp_msg_0.reply_channel = 110U;
    tmp_msg_0.transponder_delay = 186U;
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
    msg.setTimeStamp(0.934278635693905);
    msg.setSource(20145U);
    msg.setSourceEntity(108U);
    msg.setDestination(12979U);
    msg.setDestinationEntity(34U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.19864095710766982);
    msg.setSource(53273U);
    msg.setSourceEntity(171U);
    msg.setDestination(42136U);
    msg.setDestinationEntity(213U);
    msg.op = 90U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PFOGQOVSKGCRMPJMXROPARWMEIHMNBLNKAZJLDWRUPXUQSJTEWESZDQNJDGIGAQFYQZTSVIBHBPTHAEITYIWRRVWGFTDCPCUEPRSZYFJTKKGUBMTIBDIVJVGSHULEFXMCINKDAFCKXJBNQZBS");
    tmp_msg_0.lat = 0.5543444030490959;
    tmp_msg_0.lon = 0.4083759024431479;
    tmp_msg_0.depth = 0.4575484472133491;
    tmp_msg_0.query_channel = 247U;
    tmp_msg_0.reply_channel = 252U;
    tmp_msg_0.transponder_delay = 79U;
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
    msg.setTimeStamp(0.22864025846466163);
    msg.setSource(1460U);
    msg.setSourceEntity(246U);
    msg.setDestination(52416U);
    msg.setDestinationEntity(156U);
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 20368U;
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
    msg.setTimeStamp(0.22323157041146247);
    msg.setSource(27063U);
    msg.setSourceEntity(189U);
    msg.setDestination(61210U);
    msg.setDestinationEntity(221U);
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.3510218399003382;
    tmp_msg_0.speed = 0.21524536532927696;
    tmp_msg_0.turbulence = 0.05917808548173675;
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
    msg.setTimeStamp(0.47242187473970354);
    msg.setSource(7136U);
    msg.setSourceEntity(143U);
    msg.setDestination(10551U);
    msg.setDestinationEntity(167U);
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 147U;
    tmp_msg_0.value = 0.5143306659820396;
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
    msg.setTimeStamp(0.2075363652124964);
    msg.setSource(55693U);
    msg.setSourceEntity(0U);
    msg.setDestination(7020U);
    msg.setDestinationEntity(55U);
    msg.op = 218U;
    msg.system.assign("DISHTJCIYRBEPSPKEZVCPLVNRAYTQAHIKFJLRUUAYGTCMNQOSPQFWPOZMXMKCGNYWUKEQYFLWUYZJXCUMFAGFVHCHV");
    msg.range = 0.6333379377723897;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 54U;
    tmp_msg_0.range = 0.8967235642524046;
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
    msg.setTimeStamp(0.8846672486583749);
    msg.setSource(13248U);
    msg.setSourceEntity(99U);
    msg.setDestination(45163U);
    msg.setDestinationEntity(242U);
    msg.op = 151U;
    msg.system.assign("OJFENNHAFQBYMBGHJUBUGPFCIJXNSQXVSLVIUAYVFPRZRIJCVHZLKKIUKILJM");
    msg.range = 0.5083420724325243;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("TPNCOLBBZFXMFKCTCVPWVBSGAZXKDNGISCQNOEEELHUAVTEDGLSPHRRVFBIQZJDYZPLKYHZQYTLWYVUVXNRMEKDIZNUAEBPWVAHVTDQVCTODEFYXSFKWMTOACSWQJKEUTLQCKAPOHGLQXNSZKOBVWWSFYKIJJTYURWEZPISGRJNIGFHAHXJJPLZMGJROIMTBRICHUSCXFKHLMMWGOLZP");
    tmp_msg_0.op = 245U;
    tmp_msg_0.lat = 0.682106170038593;
    tmp_msg_0.lon = 0.6094601953849067;
    tmp_msg_0.height = 0.471279977091958;
    tmp_msg_0.x = 0.04096867204511412;
    tmp_msg_0.y = 0.09082394203299793;
    tmp_msg_0.z = 0.1078108553575291;
    tmp_msg_0.phi = 0.49359362248270566;
    tmp_msg_0.theta = 0.43759575966384334;
    tmp_msg_0.psi = 0.9868666500130542;
    tmp_msg_0.vx = 0.9299647454096421;
    tmp_msg_0.vy = 0.7056521479847808;
    tmp_msg_0.vz = 0.28565156422415694;
    tmp_msg_0.p = 0.6108126312382014;
    tmp_msg_0.q = 0.5600984618855056;
    tmp_msg_0.r = 0.9268902850343823;
    tmp_msg_0.svx = 0.16252599798766387;
    tmp_msg_0.svy = 0.4328322921641239;
    tmp_msg_0.svz = 0.8940249087485443;
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
    msg.setTimeStamp(0.8390342359272861);
    msg.setSource(60453U);
    msg.setSourceEntity(167U);
    msg.setDestination(44491U);
    msg.setDestinationEntity(46U);
    msg.op = 194U;
    msg.system.assign("KLABRPBFIUCIOELYSMUCCKHJGVVEXUMVEAKGSLOMVQAGHXTNBJMKKDKGHUFBTVXMGRFLSYRAQCARSBRZQOVJDEKKIDOIYFPGHSQDTYKNNZGQGRLDETSRTWWXXXHLNNHOMPIUPHWWHXUBWFWXSMOEAREHQTOLCQLEDVQPJWIDWBYQXIZANPYZINGSMZHNPZCMTNWAZBSEOOLVJLNDIMUJQZR");
    msg.range = 0.8332951486866848;
    IMC::ReconStatus tmp_msg_0;
    tmp_msg_0.remote_control_allowed = 228U;
    tmp_msg_0.remote_control_enabled = 186U;
    tmp_msg_0.remote_control_active = 22U;
    tmp_msg_0.depth_only_control_enabled = 117U;
    tmp_msg_0.direct_control_enabled = 75U;
    tmp_msg_0.return_to_closest_point_on_line = 111U;
    tmp_msg_0.on_shore_power = 69U;
    tmp_msg_0.latitude = 0.18984993425047136;
    tmp_msg_0.longitude = 0.18166653856870785;
    tmp_msg_0.depth = 0.3613150275445014;
    tmp_msg_0.depth_ref = 0.3819273660011929;
    tmp_msg_0.altitude = 0.5062727193325425;
    tmp_msg_0.altitude_ref = 0.8106480767157139;
    tmp_msg_0.pitch = 0.049992720534735136;
    tmp_msg_0.roll = 0.4207342281573476;
    tmp_msg_0.rpm = 0.5536120777485124;
    tmp_msg_0.rpm_ref = 0.6316954903166522;
    tmp_msg_0.speed = 0.9693616311848193;
    tmp_msg_0.speed_ref = 0.95163580043453;
    tmp_msg_0.heading = 0.9173903174880838;
    tmp_msg_0.heading_rate = 0.4058921945093399;
    tmp_msg_0.heading_ref = 0.6223259578797109;
    tmp_msg_0.mission_state = 72U;
    tmp_msg_0.leg = -6502464762267035429;
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
    msg.setTimeStamp(0.6214465678886006);
    msg.setSource(27590U);
    msg.setSourceEntity(57U);
    msg.setDestination(57699U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.31522278948199733);
    msg.setSource(31990U);
    msg.setSourceEntity(204U);
    msg.setDestination(57286U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.7303869040577718);
    msg.setSource(13970U);
    msg.setSourceEntity(58U);
    msg.setDestination(28030U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.5140665856848547);
    msg.setSource(40814U);
    msg.setSourceEntity(208U);
    msg.setDestination(441U);
    msg.setDestinationEntity(241U);
    msg.list.assign("ADAEJEXOZZNNWURBORWAZNVEOVWSJHTKPNARSERWWNMVXBZUGJQMFJRAABOSXXKMCGWMVAWCFDIGKLFPLIOMLTWRWLVEPHHSKRJINPSOWPQGHCVQJTXOYGPKCIZJXICHBOZTQDTRAGKVSFYAYFUZUQJKIFKTGMLBVODHEYNFSBJ");

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
    msg.setTimeStamp(0.5144003401634194);
    msg.setSource(28264U);
    msg.setSourceEntity(86U);
    msg.setDestination(16897U);
    msg.setDestinationEntity(203U);
    msg.list.assign("NNZYTTWWGPUGCOEQKAJMMNXNRDEGXDMPQMEOMVLHCFQWGADHPKWVPQHIYSYAFDTAACZYMSLARGFFXFKTVNZODIMTSNZIPLFUQHWIGCPEQLPYKFAZLWCQUXSLNNUOJCHIKDNVGEYRCOBCIKZANVYODUGJBOAKKMQULJYRTBPHHQRZBVSJMUTIVSRJDDRJWBTOSREKWMOZDBXJEPXRIBJSXHEIJTZIU");

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
    msg.setTimeStamp(0.46921903952632116);
    msg.setSource(6656U);
    msg.setSourceEntity(161U);
    msg.setDestination(4372U);
    msg.setDestinationEntity(3U);
    msg.list.assign("LIFMASRQMYWZHBBUAEHWAQJWJCKIWLQKLCVDCKUGPJNGKYILEFZQJSIBRLNQWOWG");

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
    msg.setTimeStamp(0.8569196228243715);
    msg.setSource(32186U);
    msg.setSourceEntity(79U);
    msg.setDestination(35621U);
    msg.setDestinationEntity(203U);
    msg.value = 4769;

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
    msg.setTimeStamp(0.5221584593218412);
    msg.setSource(64480U);
    msg.setSourceEntity(7U);
    msg.setDestination(41305U);
    msg.setDestinationEntity(72U);
    msg.value = -2821;

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
    msg.setTimeStamp(0.22696104514070448);
    msg.setSource(4364U);
    msg.setSourceEntity(65U);
    msg.setDestination(64534U);
    msg.setDestinationEntity(55U);
    msg.value = -1397;

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
    msg.setTimeStamp(0.31306364130185926);
    msg.setSource(17207U);
    msg.setSourceEntity(10U);
    msg.setDestination(45209U);
    msg.setDestinationEntity(6U);
    msg.value = 0.8012010228329417;

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
    msg.setTimeStamp(0.4292882835709939);
    msg.setSource(5896U);
    msg.setSourceEntity(163U);
    msg.setDestination(40362U);
    msg.setDestinationEntity(112U);
    msg.value = 0.9117575421247583;

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
    msg.setTimeStamp(0.9977433474037127);
    msg.setSource(3572U);
    msg.setSourceEntity(32U);
    msg.setDestination(48521U);
    msg.setDestinationEntity(155U);
    msg.value = 0.7117666664035421;

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
    msg.setTimeStamp(0.8140321309735481);
    msg.setSource(19947U);
    msg.setSourceEntity(102U);
    msg.setDestination(64262U);
    msg.setDestinationEntity(27U);
    msg.value = 0.21691703905142357;

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
    msg.setTimeStamp(0.0337752365197973);
    msg.setSource(45017U);
    msg.setSourceEntity(81U);
    msg.setDestination(27784U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8013745022981367;

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
    msg.setTimeStamp(0.5490383963467373);
    msg.setSource(43202U);
    msg.setSourceEntity(127U);
    msg.setDestination(55829U);
    msg.setDestinationEntity(189U);
    msg.value = 0.09602892362178006;

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
    msg.setTimeStamp(0.5267547245026599);
    msg.setSource(41185U);
    msg.setSourceEntity(193U);
    msg.setDestination(33338U);
    msg.setDestinationEntity(154U);
    msg.validity = 7209U;
    msg.type = 138U;
    msg.utc_year = 49825U;
    msg.utc_month = 209U;
    msg.utc_day = 154U;
    msg.utc_time = 0.5224368310286269;
    msg.lat = 0.8830926785480309;
    msg.lon = 0.12954426821663756;
    msg.height = 0.6104454864266278;
    msg.satellites = 46U;
    msg.cog = 0.013633570169382492;
    msg.sog = 0.7431642385732313;
    msg.hdop = 0.9349681036984642;
    msg.vdop = 0.8009688059175921;
    msg.hacc = 0.512229680225881;
    msg.vacc = 0.48039219252788945;

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
    msg.setTimeStamp(0.6491607726502885);
    msg.setSource(29027U);
    msg.setSourceEntity(224U);
    msg.setDestination(1467U);
    msg.setDestinationEntity(150U);
    msg.validity = 54502U;
    msg.type = 5U;
    msg.utc_year = 44282U;
    msg.utc_month = 246U;
    msg.utc_day = 120U;
    msg.utc_time = 0.622712176484953;
    msg.lat = 0.5825766350245596;
    msg.lon = 0.9876275230913775;
    msg.height = 0.8077371685209588;
    msg.satellites = 192U;
    msg.cog = 0.008360600550876063;
    msg.sog = 0.5145330315645159;
    msg.hdop = 0.3769941460517141;
    msg.vdop = 0.1150419508510181;
    msg.hacc = 0.2732497450732949;
    msg.vacc = 0.7366942474955052;

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
    msg.setTimeStamp(0.974009256175001);
    msg.setSource(16602U);
    msg.setSourceEntity(203U);
    msg.setDestination(3142U);
    msg.setDestinationEntity(253U);
    msg.validity = 9213U;
    msg.type = 236U;
    msg.utc_year = 14820U;
    msg.utc_month = 129U;
    msg.utc_day = 31U;
    msg.utc_time = 0.09528548004862081;
    msg.lat = 0.1737790220593527;
    msg.lon = 0.040435807225696285;
    msg.height = 0.14362197931037912;
    msg.satellites = 164U;
    msg.cog = 0.39685991439601565;
    msg.sog = 0.7425391138061979;
    msg.hdop = 0.5758384935421804;
    msg.vdop = 0.4072803718639786;
    msg.hacc = 0.4965644981545121;
    msg.vacc = 0.698117253961397;

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
    msg.setTimeStamp(0.2971268529937271);
    msg.setSource(8962U);
    msg.setSourceEntity(37U);
    msg.setDestination(10273U);
    msg.setDestinationEntity(232U);
    msg.time = 0.9470625065741726;
    msg.phi = 0.9101863284437508;
    msg.theta = 0.17728997192041984;
    msg.psi = 0.5371353117644393;
    msg.psi_magnetic = 0.3862272387568966;

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
    msg.setTimeStamp(0.9284026451346112);
    msg.setSource(55101U);
    msg.setSourceEntity(84U);
    msg.setDestination(56013U);
    msg.setDestinationEntity(173U);
    msg.time = 0.6594984841770982;
    msg.phi = 0.029111385585454785;
    msg.theta = 0.5110460699003041;
    msg.psi = 0.7449062167816227;
    msg.psi_magnetic = 0.20509463967976027;

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
    msg.setTimeStamp(0.37607833521423273);
    msg.setSource(30354U);
    msg.setSourceEntity(116U);
    msg.setDestination(57076U);
    msg.setDestinationEntity(176U);
    msg.time = 0.6631124177772478;
    msg.phi = 0.11736827927642524;
    msg.theta = 0.8866880322191907;
    msg.psi = 0.5180419374545094;
    msg.psi_magnetic = 0.3773423202129049;

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
    msg.setTimeStamp(0.8765528147439511);
    msg.setSource(27364U);
    msg.setSourceEntity(16U);
    msg.setDestination(43172U);
    msg.setDestinationEntity(203U);
    msg.time = 0.6093272638831208;
    msg.x = 0.4606641251961353;
    msg.y = 0.4937197662625421;
    msg.z = 0.2814828536968822;
    msg.timestep = 0.6033942835131052;

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
    msg.setTimeStamp(0.9104173123692222);
    msg.setSource(7776U);
    msg.setSourceEntity(56U);
    msg.setDestination(32186U);
    msg.setDestinationEntity(74U);
    msg.time = 0.9272422998008694;
    msg.x = 0.9281073042733325;
    msg.y = 0.6330974688419384;
    msg.z = 0.28153024355813927;
    msg.timestep = 0.9774512992390411;

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
    msg.setTimeStamp(0.5338133691519208);
    msg.setSource(42154U);
    msg.setSourceEntity(1U);
    msg.setDestination(19570U);
    msg.setDestinationEntity(85U);
    msg.time = 0.3014859579223421;
    msg.x = 0.6999143305191812;
    msg.y = 0.8597032209032336;
    msg.z = 0.4608618504659151;
    msg.timestep = 0.011408880774015695;

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
    msg.setTimeStamp(0.9298202614986225);
    msg.setSource(28637U);
    msg.setSourceEntity(30U);
    msg.setDestination(61380U);
    msg.setDestinationEntity(8U);
    msg.time = 0.507710191850122;
    msg.x = 0.6102563606090343;
    msg.y = 0.33063059916351956;
    msg.z = 0.8753759068463676;

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
    msg.setTimeStamp(0.7334487451794636);
    msg.setSource(55411U);
    msg.setSourceEntity(125U);
    msg.setDestination(17378U);
    msg.setDestinationEntity(186U);
    msg.time = 0.24060994920090528;
    msg.x = 0.8681199387836828;
    msg.y = 0.0418628817968959;
    msg.z = 0.8326898849628835;

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
    msg.setTimeStamp(0.36770026019037627);
    msg.setSource(48354U);
    msg.setSourceEntity(7U);
    msg.setDestination(63492U);
    msg.setDestinationEntity(199U);
    msg.time = 0.7423017584051802;
    msg.x = 0.5366055976460358;
    msg.y = 0.9406792194992281;
    msg.z = 0.09868836390529989;

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
    msg.setTimeStamp(0.06271725320709576);
    msg.setSource(11568U);
    msg.setSourceEntity(21U);
    msg.setDestination(32747U);
    msg.setDestinationEntity(71U);
    msg.time = 0.5112354391737454;
    msg.x = 0.9130124282684552;
    msg.y = 0.6444654250849605;
    msg.z = 0.06037459086773722;

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
    msg.setTimeStamp(0.12920895690626788);
    msg.setSource(15421U);
    msg.setSourceEntity(119U);
    msg.setDestination(19188U);
    msg.setDestinationEntity(110U);
    msg.time = 0.25879171639264953;
    msg.x = 0.040013696000469445;
    msg.y = 0.5677872342282583;
    msg.z = 0.7568556350764916;

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
    msg.setTimeStamp(0.6413139622412045);
    msg.setSource(55255U);
    msg.setSourceEntity(140U);
    msg.setDestination(65533U);
    msg.setDestinationEntity(37U);
    msg.time = 0.6666592778230241;
    msg.x = 0.3993045473769242;
    msg.y = 0.16308433150800106;
    msg.z = 0.7758365325022311;

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
    msg.setTimeStamp(0.6350237406765712);
    msg.setSource(10377U);
    msg.setSourceEntity(201U);
    msg.setDestination(11431U);
    msg.setDestinationEntity(23U);
    msg.time = 0.4922403651853817;
    msg.x = 0.05999940740455767;
    msg.y = 0.17752700359387175;
    msg.z = 0.09505033797118412;

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
    msg.setTimeStamp(0.6015595364472495);
    msg.setSource(18596U);
    msg.setSourceEntity(130U);
    msg.setDestination(8386U);
    msg.setDestinationEntity(118U);
    msg.time = 0.18962311437256818;
    msg.x = 0.3945314780796235;
    msg.y = 0.16533191071635744;
    msg.z = 0.1972373806786617;

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
    msg.setTimeStamp(0.12411564063536307);
    msg.setSource(28691U);
    msg.setSourceEntity(247U);
    msg.setDestination(40445U);
    msg.setDestinationEntity(225U);
    msg.time = 0.7565253875862324;
    msg.x = 0.5636233335240789;
    msg.y = 0.730964593919862;
    msg.z = 0.3207739684440517;

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
    msg.setTimeStamp(0.2591038318231248);
    msg.setSource(19801U);
    msg.setSourceEntity(83U);
    msg.setDestination(11099U);
    msg.setDestinationEntity(12U);
    msg.validity = 169U;
    msg.x = 0.8535410034297254;
    msg.y = 0.6892279676597703;
    msg.z = 0.673149136673747;

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
    msg.setTimeStamp(0.23855920745734271);
    msg.setSource(65113U);
    msg.setSourceEntity(58U);
    msg.setDestination(49884U);
    msg.setDestinationEntity(133U);
    msg.validity = 254U;
    msg.x = 0.13384124131037733;
    msg.y = 0.039709502126064944;
    msg.z = 0.5301115244670522;

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
    msg.setTimeStamp(0.983895477325366);
    msg.setSource(57719U);
    msg.setSourceEntity(5U);
    msg.setDestination(55438U);
    msg.setDestinationEntity(170U);
    msg.validity = 118U;
    msg.x = 0.18877023751191213;
    msg.y = 0.9066098389659846;
    msg.z = 0.5065448612861716;

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
    msg.setTimeStamp(0.04327178802164988);
    msg.setSource(33905U);
    msg.setSourceEntity(191U);
    msg.setDestination(2699U);
    msg.setDestinationEntity(185U);
    msg.validity = 12U;
    msg.x = 0.9238025441337088;
    msg.y = 0.8795571026523026;
    msg.z = 0.6090796273536244;

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
    msg.setTimeStamp(0.7315470219853679);
    msg.setSource(18515U);
    msg.setSourceEntity(61U);
    msg.setDestination(34023U);
    msg.setDestinationEntity(95U);
    msg.validity = 25U;
    msg.x = 0.7269879713062529;
    msg.y = 0.5259082746964518;
    msg.z = 0.21285136957643547;

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
    msg.setTimeStamp(0.49255878616596505);
    msg.setSource(45232U);
    msg.setSourceEntity(86U);
    msg.setDestination(44062U);
    msg.setDestinationEntity(167U);
    msg.validity = 195U;
    msg.x = 0.2717780550167328;
    msg.y = 0.23017934134866935;
    msg.z = 0.818363393231598;

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
    msg.setTimeStamp(0.14216102199302627);
    msg.setSource(54767U);
    msg.setSourceEntity(58U);
    msg.setDestination(51464U);
    msg.setDestinationEntity(140U);
    msg.time = 0.5875750861193514;
    msg.x = 0.585058545340065;
    msg.y = 0.3203514658633545;
    msg.z = 0.8440059751939645;

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
    msg.setTimeStamp(0.3917732992644213);
    msg.setSource(59902U);
    msg.setSourceEntity(152U);
    msg.setDestination(33137U);
    msg.setDestinationEntity(252U);
    msg.time = 0.717816613316316;
    msg.x = 0.9070346478533151;
    msg.y = 0.3836563482659048;
    msg.z = 0.20727053689031127;

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
    msg.setTimeStamp(0.011483990126424537);
    msg.setSource(18438U);
    msg.setSourceEntity(182U);
    msg.setDestination(9839U);
    msg.setDestinationEntity(52U);
    msg.time = 0.9510256162500283;
    msg.x = 0.2713318344591472;
    msg.y = 0.6183358865474111;
    msg.z = 0.8856116605198877;

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
    msg.setTimeStamp(0.9682053037218507);
    msg.setSource(61527U);
    msg.setSourceEntity(140U);
    msg.setDestination(47008U);
    msg.setDestinationEntity(236U);
    msg.validity = 246U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.15804850967623085;
    tmp_msg_0.y = 0.6646659816686862;
    tmp_msg_0.z = 0.13355398810313057;
    tmp_msg_0.phi = 0.7180085113189978;
    tmp_msg_0.theta = 0.37920815557538023;
    tmp_msg_0.psi = 0.3696348810172486;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.1722568638598012;
    tmp_msg_1.beam_height = 0.514194025956071;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.6410643267204914;

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
    msg.setTimeStamp(0.9691088175824549);
    msg.setSource(5170U);
    msg.setSourceEntity(236U);
    msg.setDestination(6033U);
    msg.setDestinationEntity(89U);
    msg.validity = 169U;
    msg.value = 0.07961092434777539;

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
    msg.setTimeStamp(0.5265716498550743);
    msg.setSource(60701U);
    msg.setSourceEntity(136U);
    msg.setDestination(34697U);
    msg.setDestinationEntity(90U);
    msg.validity = 197U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.1946533045417035;
    tmp_msg_0.y = 0.1115148269787628;
    tmp_msg_0.z = 0.9125471249102393;
    tmp_msg_0.phi = 0.8706002834458136;
    tmp_msg_0.theta = 0.1981398177000352;
    tmp_msg_0.psi = 0.5313787600542663;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.13783880649025415;
    tmp_msg_1.beam_height = 0.1222385397036011;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.804493460998792;

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
    msg.setTimeStamp(0.6959265784418132);
    msg.setSource(20803U);
    msg.setSourceEntity(236U);
    msg.setDestination(27168U);
    msg.setDestinationEntity(181U);
    msg.value = 0.9994216740448126;

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
    msg.setTimeStamp(0.5845719999660197);
    msg.setSource(64019U);
    msg.setSourceEntity(150U);
    msg.setDestination(28511U);
    msg.setDestinationEntity(23U);
    msg.value = 0.8329203045740061;

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
    msg.setTimeStamp(0.5362938649272915);
    msg.setSource(34779U);
    msg.setSourceEntity(246U);
    msg.setDestination(26065U);
    msg.setDestinationEntity(75U);
    msg.value = 0.5129870473278396;

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
    msg.setTimeStamp(0.5762066334720212);
    msg.setSource(50758U);
    msg.setSourceEntity(48U);
    msg.setDestination(50323U);
    msg.setDestinationEntity(199U);
    msg.value = 0.7827368999040842;

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
    msg.setTimeStamp(0.5603653890140328);
    msg.setSource(17466U);
    msg.setSourceEntity(175U);
    msg.setDestination(61902U);
    msg.setDestinationEntity(113U);
    msg.value = 0.7640288977205758;

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
    msg.setTimeStamp(0.5469864295879445);
    msg.setSource(63999U);
    msg.setSourceEntity(30U);
    msg.setDestination(39204U);
    msg.setDestinationEntity(162U);
    msg.value = 0.4977610812828237;

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
    msg.setTimeStamp(0.8736069603138977);
    msg.setSource(52292U);
    msg.setSourceEntity(210U);
    msg.setDestination(63577U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6844844640408091;

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
    msg.setTimeStamp(0.8915992574259711);
    msg.setSource(53337U);
    msg.setSourceEntity(240U);
    msg.setDestination(58010U);
    msg.setDestinationEntity(149U);
    msg.value = 0.797209834496474;

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
    msg.setTimeStamp(0.9134861672936194);
    msg.setSource(323U);
    msg.setSourceEntity(132U);
    msg.setDestination(25183U);
    msg.setDestinationEntity(221U);
    msg.value = 0.5547070466159769;

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
    msg.setTimeStamp(0.32060378240071163);
    msg.setSource(9246U);
    msg.setSourceEntity(108U);
    msg.setDestination(28923U);
    msg.setDestinationEntity(212U);
    msg.value = 0.8546787484044028;

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
    msg.setTimeStamp(0.2694052555118599);
    msg.setSource(53312U);
    msg.setSourceEntity(48U);
    msg.setDestination(31075U);
    msg.setDestinationEntity(49U);
    msg.value = 0.19270393870731428;

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
    msg.setTimeStamp(0.9870112208270332);
    msg.setSource(3100U);
    msg.setSourceEntity(74U);
    msg.setDestination(30079U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0654767146602876;

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
    msg.setTimeStamp(0.8836868430895476);
    msg.setSource(64572U);
    msg.setSourceEntity(142U);
    msg.setDestination(38367U);
    msg.setDestinationEntity(114U);
    msg.value = 0.46685380439896695;

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
    msg.setTimeStamp(0.8954989686026839);
    msg.setSource(47019U);
    msg.setSourceEntity(197U);
    msg.setDestination(53116U);
    msg.setDestinationEntity(121U);
    msg.value = 0.00011626586853552556;

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
    msg.setTimeStamp(0.16224129122700637);
    msg.setSource(39712U);
    msg.setSourceEntity(115U);
    msg.setDestination(15843U);
    msg.setDestinationEntity(72U);
    msg.value = 0.5653815580209816;

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
    msg.setTimeStamp(0.5949600526462206);
    msg.setSource(11403U);
    msg.setSourceEntity(207U);
    msg.setDestination(53793U);
    msg.setDestinationEntity(64U);
    msg.value = 0.9358600578443202;

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
    msg.setTimeStamp(0.38137288054442786);
    msg.setSource(55457U);
    msg.setSourceEntity(246U);
    msg.setDestination(12985U);
    msg.setDestinationEntity(34U);
    msg.value = 0.04396879654047137;

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
    msg.setTimeStamp(0.6720028694024557);
    msg.setSource(19200U);
    msg.setSourceEntity(109U);
    msg.setDestination(57243U);
    msg.setDestinationEntity(32U);
    msg.value = 0.3580674733636865;

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
    msg.setTimeStamp(0.43127674029338026);
    msg.setSource(24266U);
    msg.setSourceEntity(138U);
    msg.setDestination(11638U);
    msg.setDestinationEntity(154U);
    msg.value = 0.6778467463194893;

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
    msg.setTimeStamp(0.8726405071073184);
    msg.setSource(39187U);
    msg.setSourceEntity(66U);
    msg.setDestination(63420U);
    msg.setDestinationEntity(17U);
    msg.value = 0.9709672000763697;

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
    msg.setTimeStamp(0.36348441978527124);
    msg.setSource(26289U);
    msg.setSourceEntity(252U);
    msg.setDestination(42913U);
    msg.setDestinationEntity(42U);
    msg.value = 0.5378221755905304;

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
    msg.setTimeStamp(0.4761717119904103);
    msg.setSource(30214U);
    msg.setSourceEntity(173U);
    msg.setDestination(48354U);
    msg.setDestinationEntity(166U);
    msg.value = 0.6468937737950712;

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
    msg.setTimeStamp(0.6481711177053113);
    msg.setSource(61662U);
    msg.setSourceEntity(207U);
    msg.setDestination(26156U);
    msg.setDestinationEntity(108U);
    msg.value = 0.6387286640899953;

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
    msg.setTimeStamp(0.295491240262973);
    msg.setSource(7248U);
    msg.setSourceEntity(55U);
    msg.setDestination(58711U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9256830002745594;

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
    msg.setTimeStamp(0.10584180564139234);
    msg.setSource(46308U);
    msg.setSourceEntity(151U);
    msg.setDestination(47287U);
    msg.setDestinationEntity(40U);
    msg.direction = 0.4607270253763819;
    msg.speed = 0.8119426698842555;
    msg.turbulence = 0.5828911649096785;

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
    msg.setTimeStamp(0.14781278093725525);
    msg.setSource(38251U);
    msg.setSourceEntity(213U);
    msg.setDestination(55143U);
    msg.setDestinationEntity(105U);
    msg.direction = 0.6637531378394043;
    msg.speed = 0.7261981728010997;
    msg.turbulence = 0.881477425873669;

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
    msg.setTimeStamp(0.511728661806492);
    msg.setSource(38023U);
    msg.setSourceEntity(60U);
    msg.setDestination(58566U);
    msg.setDestinationEntity(171U);
    msg.direction = 0.730257570149802;
    msg.speed = 0.3859117226928056;
    msg.turbulence = 0.31482526725224713;

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
    msg.setTimeStamp(0.30636752442098847);
    msg.setSource(42875U);
    msg.setSourceEntity(137U);
    msg.setDestination(4119U);
    msg.setDestinationEntity(104U);
    msg.value = 0.06629478613998485;

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
    msg.setTimeStamp(0.1104100136703896);
    msg.setSource(2352U);
    msg.setSourceEntity(89U);
    msg.setDestination(63457U);
    msg.setDestinationEntity(21U);
    msg.value = 0.21803652638779503;

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
    msg.setTimeStamp(0.16711764247280148);
    msg.setSource(23005U);
    msg.setSourceEntity(246U);
    msg.setDestination(46932U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7416366479935069;

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
    msg.setTimeStamp(0.9404943581314218);
    msg.setSource(64675U);
    msg.setSourceEntity(54U);
    msg.setDestination(63438U);
    msg.setDestinationEntity(52U);
    msg.value.assign("RPHDMQNZKWCOLWEPAUMWYDITYKXBPDVFLPRXNKAKHFTFESUGQSYIUERGTBTKTBJRPNXXCFPUTUSOLXNSIRLZHKZHNMWBIEPAJARFPIVOJJYHSVXLRZYXCEKIJGGLJHJVTQWCDDVBZIBAFLDMWSNKNVEJIOZRKQCNWJHVDEMOFPOGDLRSYEMUDSMNWBOYMXIEUGAUADSLRWHQOATYGGVC");

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
    msg.setTimeStamp(0.007425825244979811);
    msg.setSource(473U);
    msg.setSourceEntity(247U);
    msg.setDestination(65360U);
    msg.setDestinationEntity(109U);
    msg.value.assign("MXPZHOUDZCTDAPJCNSAOLGOABCFWYSEHUNWIYRXYYEHUMHOGNWQCHOZNWKKWBMEVGEKBJJHVUGMANYEJKBWXVZITVYIZPRZLHKMOXNGISXRDDTICRVYAVBWOMDOLSJAPXQPFSJZVVEFQRJCABWICGUJDDNKQAJDLW");

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
    msg.setTimeStamp(0.43431523817172235);
    msg.setSource(30782U);
    msg.setSourceEntity(144U);
    msg.setDestination(1522U);
    msg.setDestinationEntity(248U);
    msg.value.assign("QXNOJSDZLVHEFXWAUWEQXEDOAIFKJPAVSALOLXWJMBVHFFTURTAZZTPDZUDHATWZVZOGY");

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
    msg.setTimeStamp(0.6487746860384523);
    msg.setSource(57100U);
    msg.setSourceEntity(145U);
    msg.setDestination(17932U);
    msg.setDestinationEntity(150U);
    const char tmp_msg_0[] = {-81, -42, 13, 82, -113, -58, -11, 106, -30, -21, -52, 98, 84, -118, 45, -72, 21, -100, 67, -68, -21, -29, 79, 103, -70, -69, 18, 27, -85, 33, 58, -30, -22, 4, -97, -27, -97, -78, -15, 25, -47, 123, -62, 16, -58, -54, 121, 81, -60, -89, -53, 109, 94, -76, -15, -20, -107, -14, 125, -73, -89, 10, -45, -16, 44, 4, -104, -95, 104, -19, -108, -107, 61, -36, -81, -55, 70, -122, -108, 111, 58, -27, 87, 115, -80, 40, 82, 94, -63, -29, -99, -4, 52, 91, -123, 64, 4, 101, -113, 86, -2, 116, 92, 105, 25, -82, -113, -2, 46, -121, 6};
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
    msg.setTimeStamp(0.856604875155644);
    msg.setSource(23245U);
    msg.setSourceEntity(204U);
    msg.setDestination(58309U);
    msg.setDestinationEntity(197U);
    const char tmp_msg_0[] = {98, -114, -86, 71, 81, -84, 93, -90, -50, -92, 86, 84, 51, 63, -117, 120, -57, -96, 19, 97, 73, 82, -78, -16, -90, -88, 101, 57, 50, -40, 89, -8, 113, 80, -96, 22, 10, -26, -62, 61, 14, -125, 18, 16, 102, -116, -43, 38, 31, -79, -95, -101, 69, -30, 90, 53, 3, -57, -65, -13, 25, -114, -44, -28, -72, -25, -41, -10, 103, 39, 116, -74, 10, -116, -49, 60, 106, 30, 30, 30, 7, -91, 67, -122, 87, -111, -62, -75, 92, 58, 45, 85, 29, -94, 68};
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
    msg.setTimeStamp(0.6828639246583886);
    msg.setSource(7333U);
    msg.setSourceEntity(42U);
    msg.setDestination(3872U);
    msg.setDestinationEntity(114U);
    const char tmp_msg_0[] = {-123, 15, 117, 29, 11, -20, -40, -38, 70, 115, -49, -8, 101, 83, -98, 15, 85, 17, 102, 96, 67, -95, 10, -27, 69, 29, -52, -34, 77, 8, -20, -76, 2, -114, 88, 1, -70, -23, 98, 2, 39, 82, -114, 3, -90, 90, 115, -126, 123, 26, 96, -46, 100, 66, 114, 113, 22, -31, -35, -111, -77, -40, -68, -6, -6, -77, 48, -77, 20, 20, -73, -79, -1, 86, -10, -116, -87, 15, 93, -80, 87, -2, -57, 39, -102, -114, 32, -71, 102, 112, 45, -112, 57, -112, 29, -28, 1, 11, -80, -15, 118, 25, 18, -114, 58, -51, 13, 45, 105, -19, 8, 91, -63, -8, 87, -80, 76, -41, -111, 22, 70, -2, -92, 124, 63, -74, 78, -60, 122, 18, -5, 31, -121, 76, -56, 45, 32, -125, -74, -115, -36, 22, -86, 74, -44, -93, -115, 18, 79, -95, -4, -86, -40, -39, 18, 108, -62, 56, -8, -98, 77, 123, -71, 26, -45, -49, -127, 72, -31, -7, -118, -24, 9, -11, -104, -23, -27, 112, -53, 74, -21, 23, 50, 93, -108, 124, -7, -83, 34, 55, -125, -93, -109, 90, -96, -51, -63, 12, -104, 45, 82, -124, -87, -49, -10, -49};
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
    msg.setTimeStamp(0.44647670816796303);
    msg.setSource(53010U);
    msg.setSourceEntity(25U);
    msg.setDestination(48627U);
    msg.setDestinationEntity(153U);
    msg.type = 8U;
    msg.frequency = 1124053735U;
    msg.min_range = 40210U;
    msg.max_range = 56028U;
    msg.bits_per_point = 209U;
    msg.scale_factor = 0.803541762572332;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2335681012222509;
    tmp_msg_0.beam_height = 0.8998228801456912;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-4, -76, -40, 5, -82, -43, 30, 98, -15, 36, -45, 76, -83, -122, 67, 41, -31, -78, 64, -46, -82, -110, 62, -5, 97, -73, 97, 103, -36, 92, -98, -89, 52, 60, -86, 41, 125, -107, 39, 85, -121, 11, -115, 92, 112, -41, 45, 109, -7, -11, -6, 67, 59, -61, 10, -7, -104, 110, 20, 0, 76, 24, -104, 48, -96, -119, -34, -7, 15, -2, -29, -30, -37, -9, 122, 104, 97, 65, -33, 38, -69, -60, 118, -66, 52, 67, 94, 71, 71, -33, 103, 101, 78, -100, 64, 72, -30, 57, 11, 46, 57, 5, -13, 126, 114, -93, 70, 89, 122, 109, 96, 94, 30, -48, -12, 110, -109, -25, 108, 29, 57, -90, -111, 123, 107, 15, 54, -32, -104, 47, -38, -56, 32, -54, -26, 43, 29, 37, 56, -114, -65, -19, -7, -44, -59, -15, -71, 16, 65, -45, 45, -86, 66, -6, 60, 56, 88, -88, -42, -40, -34, -69, -59};
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
    msg.setTimeStamp(0.3627469509127551);
    msg.setSource(9886U);
    msg.setSourceEntity(112U);
    msg.setDestination(20835U);
    msg.setDestinationEntity(54U);
    msg.type = 68U;
    msg.frequency = 273584466U;
    msg.min_range = 30987U;
    msg.max_range = 16454U;
    msg.bits_per_point = 190U;
    msg.scale_factor = 0.18962564907492618;
    const char tmp_msg_0[] = {-121, -44, 76, 51, 34, -108, -121, -36, -71, -36, 126, 122, -68, 69, -24, -92, 99, -60, -71, -123, 8, -124, -28, 100, -25, 11, -70, 93, -68, -40, -88, -73, -99, -41, -87, 112, 18, 104, -126, -108, -40, 45, -59, -123, 78, -73, -77, -82, -77, -125, -6, -23, 91, 54, -27, -97, 67, -20, 84, 125, 77, 73, 59, 34, -98, -80, 4, 58, 28, -113, 28, 113, -90, 85, -20, 112, -19, 69, 108, 38, -118, 99, -14, -115, -47, -85, -68, 118, 118, -53, 121, -66, 103, 110, -48, 15, -38, 33, -113, 80, 30, -51, -42, -11, -118, 45, 83, -19, -52, 44, -117, 124, -87, 5, -4, 39, 116, -97, -11, -56, -15, 17, 22, 81, -13, -52, -107, -107, 25, -116, 63, -89, 107, -106, 119, 1, -67, -106, -36, 94, -116, 24, 90, -38, -109, 123, -125, -123, 102, 126, -61, -109, 92, 102, 117, 56, -89, -25, -86, 116, 95, -75, -9, 119, -20, 75, 34, 114, -14, 48, 108, 0, 22, 26, 27, 12, 62, 85, -117, -61, 101, 90, 7, -62, 84, 74, -16, -8, -120, 121, -123, -23, -34, 75, 44, -63, -102, -31, 61, 112, 123, 86, -72, -14, -73, 93, -91, 89, 35, -31, -75, 80, 17, 69, -30, 14, 82, 36, 3, 17, 6, 92, 109, -35, 115, -96, -25, 24, -105, -86, 111, -29, 23, 116, -96, -104, -39, -40, -22, 88, 119, -1, -74, 122, 101, 76};
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
    msg.setTimeStamp(0.9662737443673253);
    msg.setSource(21137U);
    msg.setSourceEntity(149U);
    msg.setDestination(27099U);
    msg.setDestinationEntity(167U);
    msg.type = 98U;
    msg.frequency = 807968390U;
    msg.min_range = 44506U;
    msg.max_range = 44941U;
    msg.bits_per_point = 140U;
    msg.scale_factor = 0.511842494621363;
    const char tmp_msg_0[] = {70, -61, -36, -93, 67, 54, -112, 125, -121, -90, -95, -29, 27, -127, 30, 110, -27, 86, -24, -126, 33, 7, 42, -51, 32, -22, 29, 28, -34, 48, 126, 111, 124, 39, -118, -63, 1, -26, -89, -15, 28, 32, -115, -22, -34, 112, 21, -104, -100, -50, -10, -93, -42, -34, -91, 81, 98, 70, -52, 105, 111, -42, 74, 118, -13, -111, -74, -68, -73, -15, -114, 92, -12, -108, 119, 17, 78, -60, 39, 33, 38, -46, -83, -26, -66, -95, 66, -57, 60, 72, -91, -16, 80, 54, 20, 50, -34, 49, 97, 37, 77, 53, -42, 126, 19, -66, -71, -95, -79, -70, 49, 82, 124, -105, 88, 121, -1, 54, -112, -117, -64, -1, 124, 72, 105, 96, 52, 56, -57, 89, -117, 121, 42, 34, -61, 78, 83, -32, -63, -81, 98, 39, -18, 89, -75, -56, -86, -85, 27, -30, 109, -63, 1, 32, 29, 46, -29, 67, -81, -108, -43, -33, 79, -88, 108, -35, 16, -75, 82, 73, 86, 71, 58, -70, -92, -121, 126, 60, -76, 45, 30, -101, -22, 26, 105, 16, 58, 113, -82, -24, 16, -53, -38, -86, -99, -13, -113, 8, -116, 82, -60, -14, 74};
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
    msg.setTimeStamp(0.8892061792410877);
    msg.setSource(35518U);
    msg.setSourceEntity(74U);
    msg.setDestination(62997U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.8875900923044157);
    msg.setSource(18700U);
    msg.setSourceEntity(109U);
    msg.setDestination(57066U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.5245072454353873);
    msg.setSource(47831U);
    msg.setSourceEntity(246U);
    msg.setDestination(21054U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.5126732417945443);
    msg.setSource(3507U);
    msg.setSourceEntity(45U);
    msg.setDestination(58963U);
    msg.setDestinationEntity(167U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.0010395041059455545);
    msg.setSource(27871U);
    msg.setSourceEntity(122U);
    msg.setDestination(46944U);
    msg.setDestinationEntity(191U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.9108524348765509);
    msg.setSource(27637U);
    msg.setSourceEntity(182U);
    msg.setDestination(28836U);
    msg.setDestinationEntity(193U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.5823612368535026);
    msg.setSource(55935U);
    msg.setSourceEntity(218U);
    msg.setDestination(51927U);
    msg.setDestinationEntity(12U);
    msg.value = 0.6721150373092781;
    msg.confidence = 0.08194702207875804;
    msg.opmodes.assign("DGLFBHEUTULMQRYJBUFRWQOSVLPFKCAYDTMPCXGDBNXGWPXXTZFKPAERHZBCTKHXGAECURKCDSNJHQSSELVKTVZOXZWGJHGOBQJHSCFFSBIOJZLELYZTHPUY");

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
    msg.setTimeStamp(0.47104944469791177);
    msg.setSource(47221U);
    msg.setSourceEntity(176U);
    msg.setDestination(42677U);
    msg.setDestinationEntity(151U);
    msg.value = 0.3539408534046695;
    msg.confidence = 0.8728863004741786;
    msg.opmodes.assign("GKIUXDJJAVRFJPVGOPOOZVMHAAG");

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
    msg.setTimeStamp(0.5108802326567272);
    msg.setSource(7025U);
    msg.setSourceEntity(157U);
    msg.setDestination(32962U);
    msg.setDestinationEntity(191U);
    msg.value = 0.4956867202176676;
    msg.confidence = 0.4430062590146524;
    msg.opmodes.assign("VEHXVOVACCPVUIFMZBFKBBNGMVSRDSDSWGPMKIRKXYXQFOMUHEEQGJLBPRDLJROVMUMVERIIXSHRQYXJJPMDLMFHTPQHETYWRQHIKHPGUXZSVPAAWUKLIYBOUABGDCHATXCSFHOLNTDSCXKJOZKBTAIJCOZQGDOEDN");

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
    msg.setTimeStamp(0.2295541954773621);
    msg.setSource(5273U);
    msg.setSourceEntity(44U);
    msg.setDestination(34303U);
    msg.setDestinationEntity(223U);
    msg.itow = 2857280739U;
    msg.lat = 0.7076078096765174;
    msg.lon = 0.8824162098995821;
    msg.height_ell = 0.12544771733658655;
    msg.height_sea = 0.3843098882501057;
    msg.hacc = 0.6400948371213137;
    msg.vacc = 0.7792753294188097;
    msg.vel_n = 0.39518439818387885;
    msg.vel_e = 0.9976477184564534;
    msg.vel_d = 0.7859282173073108;
    msg.speed = 0.9598561844400426;
    msg.gspeed = 0.5712394136803122;
    msg.heading = 0.5144707217807325;
    msg.sacc = 0.27632664635206117;
    msg.cacc = 0.22814227063131975;

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
    msg.setTimeStamp(0.1997801831867848);
    msg.setSource(61263U);
    msg.setSourceEntity(137U);
    msg.setDestination(194U);
    msg.setDestinationEntity(159U);
    msg.itow = 417580221U;
    msg.lat = 0.39378479598850735;
    msg.lon = 0.6941112070609168;
    msg.height_ell = 0.6029072472982363;
    msg.height_sea = 0.10359425951672419;
    msg.hacc = 0.3913451835128656;
    msg.vacc = 0.2178541107678884;
    msg.vel_n = 0.2165102861002478;
    msg.vel_e = 0.5974066573154737;
    msg.vel_d = 0.15828714537834043;
    msg.speed = 0.28310245852132565;
    msg.gspeed = 0.6776348140519093;
    msg.heading = 0.37881678969617083;
    msg.sacc = 0.48471650294895074;
    msg.cacc = 0.7963210774848306;

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
    msg.setTimeStamp(0.93883434736942);
    msg.setSource(33979U);
    msg.setSourceEntity(67U);
    msg.setDestination(46151U);
    msg.setDestinationEntity(13U);
    msg.itow = 1167728179U;
    msg.lat = 0.6596484988355684;
    msg.lon = 0.802563998905651;
    msg.height_ell = 0.10720883727315911;
    msg.height_sea = 0.6300732832052377;
    msg.hacc = 0.3109096262414923;
    msg.vacc = 0.5284919336040367;
    msg.vel_n = 0.15186161921757546;
    msg.vel_e = 0.574851853917575;
    msg.vel_d = 0.685482721595546;
    msg.speed = 0.8210277201315707;
    msg.gspeed = 0.30190029312566113;
    msg.heading = 0.5019761623938818;
    msg.sacc = 0.20402433086178073;
    msg.cacc = 0.43048998976844455;

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
    msg.setTimeStamp(0.8158664165700902);
    msg.setSource(23282U);
    msg.setSourceEntity(129U);
    msg.setDestination(24082U);
    msg.setDestinationEntity(122U);
    msg.id = 237U;
    msg.value = 0.334901382265656;

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
    msg.setTimeStamp(0.9860171908726533);
    msg.setSource(65073U);
    msg.setSourceEntity(76U);
    msg.setDestination(29178U);
    msg.setDestinationEntity(36U);
    msg.id = 22U;
    msg.value = 0.9119057819936719;

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
    msg.setTimeStamp(0.8780143520392046);
    msg.setSource(45694U);
    msg.setSourceEntity(100U);
    msg.setDestination(56777U);
    msg.setDestinationEntity(137U);
    msg.id = 245U;
    msg.value = 0.5869760321905587;

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
    msg.setTimeStamp(0.9696354880228369);
    msg.setSource(18370U);
    msg.setSourceEntity(21U);
    msg.setDestination(30631U);
    msg.setDestinationEntity(250U);
    msg.x = 0.06916741606527455;
    msg.y = 0.5379837337185822;
    msg.z = 0.16687060286785715;
    msg.phi = 0.4781420318347268;
    msg.theta = 0.3387403582009969;
    msg.psi = 0.2685913350159125;

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
    msg.setTimeStamp(0.7926379195222405);
    msg.setSource(29983U);
    msg.setSourceEntity(234U);
    msg.setDestination(60252U);
    msg.setDestinationEntity(208U);
    msg.x = 0.20242795715198392;
    msg.y = 0.9236051655265267;
    msg.z = 0.8836332286012393;
    msg.phi = 0.40891658832432554;
    msg.theta = 0.8949560834637417;
    msg.psi = 0.12030046722850651;

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
    msg.setTimeStamp(0.9283405277690627);
    msg.setSource(14641U);
    msg.setSourceEntity(25U);
    msg.setDestination(54206U);
    msg.setDestinationEntity(74U);
    msg.x = 0.09224798732236472;
    msg.y = 0.6771059347253934;
    msg.z = 0.6142950112867368;
    msg.phi = 0.38178671237675377;
    msg.theta = 0.4231397634112056;
    msg.psi = 0.8077509398181743;

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
    msg.setTimeStamp(0.8580161326646937);
    msg.setSource(874U);
    msg.setSourceEntity(60U);
    msg.setDestination(28612U);
    msg.setDestinationEntity(195U);
    msg.beam_width = 0.8247633759887147;
    msg.beam_height = 0.15629326275061795;

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
    msg.setTimeStamp(0.2955370562233488);
    msg.setSource(19486U);
    msg.setSourceEntity(141U);
    msg.setDestination(34768U);
    msg.setDestinationEntity(78U);
    msg.beam_width = 0.8757771270392986;
    msg.beam_height = 0.8652608857733525;

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
    msg.setTimeStamp(0.22779667110735025);
    msg.setSource(61199U);
    msg.setSourceEntity(241U);
    msg.setDestination(56853U);
    msg.setDestinationEntity(211U);
    msg.beam_width = 0.8664498127931638;
    msg.beam_height = 0.8873645352693693;

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
    msg.setTimeStamp(0.8650350537679011);
    msg.setSource(9218U);
    msg.setSourceEntity(138U);
    msg.setDestination(8200U);
    msg.setDestinationEntity(29U);
    msg.sane = 79U;

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
    msg.setTimeStamp(0.18658507285643722);
    msg.setSource(27242U);
    msg.setSourceEntity(19U);
    msg.setDestination(58213U);
    msg.setDestinationEntity(191U);
    msg.sane = 95U;

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
    msg.setTimeStamp(0.9545329711876563);
    msg.setSource(8738U);
    msg.setSourceEntity(10U);
    msg.setDestination(36520U);
    msg.setDestinationEntity(24U);
    msg.sane = 115U;

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
    msg.setTimeStamp(0.12741085563546883);
    msg.setSource(60120U);
    msg.setSourceEntity(76U);
    msg.setDestination(38501U);
    msg.setDestinationEntity(137U);
    msg.value = 0.47704638327576854;

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
    msg.setTimeStamp(0.6941688649993201);
    msg.setSource(9422U);
    msg.setSourceEntity(98U);
    msg.setDestination(43118U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8354403781136729;

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
    msg.setTimeStamp(0.6384473389357752);
    msg.setSource(52590U);
    msg.setSourceEntity(207U);
    msg.setDestination(54227U);
    msg.setDestinationEntity(99U);
    msg.value = 0.5727991906645561;

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
    msg.setTimeStamp(0.4055786553839541);
    msg.setSource(19262U);
    msg.setSourceEntity(149U);
    msg.setDestination(45502U);
    msg.setDestinationEntity(148U);
    msg.value = 0.7054554861759462;

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
    msg.setTimeStamp(0.5528912643069883);
    msg.setSource(55987U);
    msg.setSourceEntity(154U);
    msg.setDestination(54141U);
    msg.setDestinationEntity(226U);
    msg.value = 0.14818593760845444;

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
    msg.setTimeStamp(0.2038645021253478);
    msg.setSource(44670U);
    msg.setSourceEntity(192U);
    msg.setDestination(25967U);
    msg.setDestinationEntity(127U);
    msg.value = 0.42428899272773457;

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
    msg.setTimeStamp(0.6454611516449416);
    msg.setSource(6215U);
    msg.setSourceEntity(67U);
    msg.setDestination(62869U);
    msg.setDestinationEntity(145U);
    msg.value = 0.07816522222516764;

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
    msg.setTimeStamp(0.6120083206801199);
    msg.setSource(53226U);
    msg.setSourceEntity(134U);
    msg.setDestination(26926U);
    msg.setDestinationEntity(132U);
    msg.value = 0.34484891426408937;

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
    msg.setTimeStamp(0.10362934760084297);
    msg.setSource(5473U);
    msg.setSourceEntity(174U);
    msg.setDestination(57629U);
    msg.setDestinationEntity(138U);
    msg.value = 0.44308831732010556;

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
    msg.setTimeStamp(0.2048917600854866);
    msg.setSource(35556U);
    msg.setSourceEntity(227U);
    msg.setDestination(54569U);
    msg.setDestinationEntity(59U);
    msg.value = 0.47272510925113587;

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
    msg.setTimeStamp(0.7134495322426924);
    msg.setSource(41388U);
    msg.setSourceEntity(16U);
    msg.setDestination(551U);
    msg.setDestinationEntity(202U);
    msg.value = 0.9380500285297678;

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
    msg.setTimeStamp(0.07398028986200833);
    msg.setSource(62901U);
    msg.setSourceEntity(138U);
    msg.setDestination(6589U);
    msg.setDestinationEntity(234U);
    msg.value = 0.6175256976963984;

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
    msg.setTimeStamp(0.989277510286327);
    msg.setSource(32856U);
    msg.setSourceEntity(205U);
    msg.setDestination(46039U);
    msg.setDestinationEntity(182U);
    msg.value = 0.10560363346954493;

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
    msg.setTimeStamp(0.8439868679873889);
    msg.setSource(50839U);
    msg.setSourceEntity(79U);
    msg.setDestination(17396U);
    msg.setDestinationEntity(126U);
    msg.value = 0.9048736326848806;

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
    msg.setTimeStamp(0.10079255380408625);
    msg.setSource(13598U);
    msg.setSourceEntity(54U);
    msg.setDestination(12562U);
    msg.setDestinationEntity(220U);
    msg.value = 0.20327173795164422;

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
    msg.setTimeStamp(0.1905895471742738);
    msg.setSource(50501U);
    msg.setSourceEntity(161U);
    msg.setDestination(50915U);
    msg.setDestinationEntity(107U);
    msg.id = 132U;
    msg.zoom = 142U;
    msg.action = 130U;

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
    msg.setTimeStamp(0.610795443565258);
    msg.setSource(39546U);
    msg.setSourceEntity(251U);
    msg.setDestination(34719U);
    msg.setDestinationEntity(28U);
    msg.id = 131U;
    msg.zoom = 221U;
    msg.action = 179U;

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
    msg.setTimeStamp(0.0032808985613410613);
    msg.setSource(52393U);
    msg.setSourceEntity(62U);
    msg.setDestination(19899U);
    msg.setDestinationEntity(126U);
    msg.id = 105U;
    msg.zoom = 225U;
    msg.action = 0U;

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
    msg.setTimeStamp(0.46077494914174966);
    msg.setSource(2511U);
    msg.setSourceEntity(167U);
    msg.setDestination(45103U);
    msg.setDestinationEntity(44U);
    msg.id = 74U;
    msg.value = 0.9304124990687371;

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
    msg.setTimeStamp(0.9790952200940787);
    msg.setSource(26869U);
    msg.setSourceEntity(8U);
    msg.setDestination(28594U);
    msg.setDestinationEntity(249U);
    msg.id = 48U;
    msg.value = 0.5945974223923448;

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
    msg.setTimeStamp(0.7280910129186664);
    msg.setSource(26919U);
    msg.setSourceEntity(242U);
    msg.setDestination(9587U);
    msg.setDestinationEntity(30U);
    msg.id = 208U;
    msg.value = 0.5424839647903019;

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
    msg.setTimeStamp(0.5356787132355385);
    msg.setSource(41333U);
    msg.setSourceEntity(16U);
    msg.setDestination(50395U);
    msg.setDestinationEntity(155U);
    msg.id = 174U;
    msg.value = 0.9325475821708462;

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
    msg.setTimeStamp(0.8410043957226432);
    msg.setSource(41437U);
    msg.setSourceEntity(237U);
    msg.setDestination(8586U);
    msg.setDestinationEntity(242U);
    msg.id = 249U;
    msg.value = 0.948948777558111;

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
    msg.setTimeStamp(0.18327426574635786);
    msg.setSource(35966U);
    msg.setSourceEntity(183U);
    msg.setDestination(15802U);
    msg.setDestinationEntity(20U);
    msg.id = 86U;
    msg.value = 0.2604682334524938;

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
    msg.setTimeStamp(0.562633766376762);
    msg.setSource(41084U);
    msg.setSourceEntity(4U);
    msg.setDestination(18125U);
    msg.setDestinationEntity(211U);
    msg.id = 66U;
    msg.angle = 0.15927407139161498;

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
    msg.setTimeStamp(0.6483577549964669);
    msg.setSource(53234U);
    msg.setSourceEntity(179U);
    msg.setDestination(39332U);
    msg.setDestinationEntity(165U);
    msg.id = 188U;
    msg.angle = 0.023257904558235176;

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
    msg.setTimeStamp(0.3728019912536428);
    msg.setSource(26619U);
    msg.setSourceEntity(241U);
    msg.setDestination(39181U);
    msg.setDestinationEntity(235U);
    msg.id = 110U;
    msg.angle = 0.5801522950808825;

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
    msg.setTimeStamp(0.17491236747958017);
    msg.setSource(64684U);
    msg.setSourceEntity(195U);
    msg.setDestination(11433U);
    msg.setDestinationEntity(38U);
    msg.op = 53U;
    msg.actions.assign("NMJKCCMVQHPBFMQHVCYZRRIRYTMAUDJVXBCQOWRROMAJADKTKTCNHWHJGYWJZZBLDNERSFVSJHYSZFILOICZJREUSBEOXEPLNTIIGCQAEOVFFGSSQZFLBUVQ");

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
    msg.setTimeStamp(0.45717359491178866);
    msg.setSource(30106U);
    msg.setSourceEntity(236U);
    msg.setDestination(34585U);
    msg.setDestinationEntity(177U);
    msg.op = 119U;
    msg.actions.assign("ERHYADTBDKSVCPLLRGGJZJATHNDKTXZIDYFMTCAKHQQGMRSVIARSTDSXJOVFSHWBSIUNJVNWYXQZNGBUBVUFEREXTOVCQXPTGMIBOMMKMFXUBENFOENPDAEUQXUMUKRONLBZHUESEHNEAGLBIDWQAYLWIAUYDCNFBTLPPHRIPYCIDRYLQMOWBLSSOKZQJZPVJGVEVTYFWNWXFH");

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
    msg.setTimeStamp(0.9040915380800363);
    msg.setSource(21261U);
    msg.setSourceEntity(19U);
    msg.setDestination(65307U);
    msg.setDestinationEntity(58U);
    msg.op = 35U;
    msg.actions.assign("ZRKEKOSAJDZBBVTUJMHTDZPXMDVANUMHORYPJPGWCFEKDLIUOVEFBTYHHVVVJCEMNIIAKCNLUXELOEMYMSNHTVGQYUDYESBTFZOTZWOLDWR");

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
    msg.setTimeStamp(0.39821581587278987);
    msg.setSource(15982U);
    msg.setSourceEntity(1U);
    msg.setDestination(41636U);
    msg.setDestinationEntity(65U);
    msg.actions.assign("SLHKTKFQASATFPHBJADFCXQQTTUYUUIGENAQMTFEDCCRB");

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
    msg.setTimeStamp(0.5795148835708176);
    msg.setSource(16226U);
    msg.setSourceEntity(42U);
    msg.setDestination(9434U);
    msg.setDestinationEntity(174U);
    msg.actions.assign("PUTBXRPSLTRPKNYKAYQVDVOYHQQTZDXGISWSLEGQNFCVVAGKUFURWCPGEPDELCTHXJBVZPHCUIKDOEFQBHTJKHFOHPJIZUAIQBUJLLDC");

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
    msg.setTimeStamp(0.8355551497748588);
    msg.setSource(3608U);
    msg.setSourceEntity(207U);
    msg.setDestination(8446U);
    msg.setDestinationEntity(17U);
    msg.actions.assign("KOYFBMVLHSZQOFCVYJWWBVTUMPQSVFUPFWKDWVQFITOKJJIFDANOLXCGEEBEMPMANRSWTGJRITUSSERQAJYBZDHCIBCSKO");

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
    msg.setTimeStamp(0.13971643093974118);
    msg.setSource(44154U);
    msg.setSourceEntity(132U);
    msg.setDestination(23460U);
    msg.setDestinationEntity(242U);
    msg.button = 202U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.716716639202101);
    msg.setSource(25474U);
    msg.setSourceEntity(163U);
    msg.setDestination(31196U);
    msg.setDestinationEntity(156U);
    msg.button = 54U;
    msg.value = 90U;

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
    msg.setTimeStamp(0.6846536355849954);
    msg.setSource(47648U);
    msg.setSourceEntity(8U);
    msg.setDestination(22338U);
    msg.setDestinationEntity(135U);
    msg.button = 138U;
    msg.value = 6U;

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
    msg.setTimeStamp(0.4544519977859174);
    msg.setSource(63392U);
    msg.setSourceEntity(190U);
    msg.setDestination(48355U);
    msg.setDestinationEntity(240U);
    msg.op = 15U;
    msg.text.assign("XKNIHDAVKJTRIHFNYHFGGVNGWSMZPSPWICFTSKMCEWYUEXJDLTVEZTYWOMWHACAGUOFALYJLFOHETNHNRODANPKNQZIJEQLAUYBQPQHZTQMSTOFZCUXXFWDLTFKRHBXPWUMICNXQVLWZBLQZXGPQRTALNSPMCDBGNLORJOXJWOSSACESQMVMPRDJVBBXGMWRJTCBIBLY");

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
    msg.setTimeStamp(0.9772547525660936);
    msg.setSource(49905U);
    msg.setSourceEntity(131U);
    msg.setDestination(24232U);
    msg.setDestinationEntity(20U);
    msg.op = 246U;
    msg.text.assign("SNCHZHFPHMYUNVTWCRMQPECFDKETXGIPJMTWWZLLJUAOFXMQCDMGZJGEPYYOZMLLIYWSQMLTKTJCIESRDHWVQKISAGGCDILCOAMETWFWXHNHBVRWTHUIYGKQGZDVNBOXVZYWELKUPNUSVBCINFLTBNPGRIAQQKZLJDJTARONYXDONMSDUXVRBIFBXHWPCIUQJAHRFYEYEOAERUQVSEONPVAFQSKJASRPJMXKBHZDFGR");

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
    msg.setTimeStamp(0.9390260154677543);
    msg.setSource(49715U);
    msg.setSourceEntity(227U);
    msg.setDestination(28992U);
    msg.setDestinationEntity(68U);
    msg.op = 69U;
    msg.text.assign("MFVESQONZDJJKAURPEEFAZMHNLLUJPYGQAVAFURECICODWSOEPWMWVZGKTLAXBKNINYMUQBHTTOVIORZWSINECOMGQUMDLKJJTBBPIGFTIISNHLQPXPRXJPCBZQOYXMKKOYIPNEXDTJVFRXVSJYCFJXEGQABDWYLHUWOIRVFXCALKXPVTNCYOFGLSYGDYHRMHFUMSQXNNSZQRLBZAVWQRRUCGWCABETTWZZBKUCI");

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
    msg.setTimeStamp(0.18738342933227936);
    msg.setSource(24604U);
    msg.setSourceEntity(27U);
    msg.setDestination(9504U);
    msg.setDestinationEntity(230U);
    msg.op = 124U;
    msg.time_remain = 0.5946038670116577;
    msg.sched_time = 0.8263252231601501;

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
    msg.setTimeStamp(0.7812489073738952);
    msg.setSource(62219U);
    msg.setSourceEntity(57U);
    msg.setDestination(61578U);
    msg.setDestinationEntity(131U);
    msg.op = 10U;
    msg.time_remain = 0.8927612055169182;
    msg.sched_time = 0.9575777778380965;

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
    msg.setTimeStamp(0.6433155015143512);
    msg.setSource(26519U);
    msg.setSourceEntity(61U);
    msg.setDestination(41680U);
    msg.setDestinationEntity(57U);
    msg.op = 12U;
    msg.time_remain = 0.40363950079974387;
    msg.sched_time = 0.4648227844028656;

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
    msg.setTimeStamp(0.14930875568411694);
    msg.setSource(39196U);
    msg.setSourceEntity(244U);
    msg.setDestination(64991U);
    msg.setDestinationEntity(186U);
    msg.name.assign("EIVVXNCPPLSRSXNSYHHASLGREDHKEWYYPCCPNFLTXCPRYWHSOFMVXYULXFYQTIIBMCWNTARXZQOMIUATAWZUJYSHPOMUFDNTPNKMIAWAWDDXDKQIMKGBTPGORMFBAOYLZHQTZNGRWQHOEQYEUKBPNTVSOODGDEHOJAXJMJMFVHZBQZFVPBKEQNCULXVREGUVARGWJLIDMBGK");
    msg.op = 5U;
    msg.sched_time = 0.7956914627806907;

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
    msg.setTimeStamp(0.29605263218057853);
    msg.setSource(21265U);
    msg.setSourceEntity(171U);
    msg.setDestination(35739U);
    msg.setDestinationEntity(225U);
    msg.name.assign("ZYRQWWZOQIYQXRGLSESFTPOVYEGKXPVBZJSRFWCIMOPVZFJIEFUSOPTT");
    msg.op = 82U;
    msg.sched_time = 0.3650341071036505;

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
    msg.setTimeStamp(0.8195656809684844);
    msg.setSource(43377U);
    msg.setSourceEntity(210U);
    msg.setDestination(27377U);
    msg.setDestinationEntity(251U);
    msg.name.assign("IFLYIGXFEUKJNVOBYPNQLVFYXSOPBGXNEQIIJSDORRGPUYVXDBLWIAEKASWYQWLRLUUWJPSYVOAQWHFAFTQDTYMXFHVMHHNNAVLTHIDKZGMSNGBLXSKMHBYFGDJJJDZLOMURNKOEUCIJXAHLFLNWDCIMVETZZCGKIRQZGWZGUTMQPNEERQFMYBBHZCRXVCPPPBOCTUYZCETAPTDDFXZKXSOVPBKQQITAEWUJCTJRZKGHW");
    msg.op = 80U;
    msg.sched_time = 0.8551276708752255;

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
    msg.setTimeStamp(0.7801201039737201);
    msg.setSource(46479U);
    msg.setSourceEntity(41U);
    msg.setDestination(6615U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.16292662966426708);
    msg.setSource(27837U);
    msg.setSourceEntity(200U);
    msg.setDestination(45381U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.345240845415998);
    msg.setSource(29880U);
    msg.setSourceEntity(130U);
    msg.setDestination(9214U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.04326785003813016);
    msg.setSource(9097U);
    msg.setSourceEntity(253U);
    msg.setDestination(22905U);
    msg.setDestinationEntity(211U);
    msg.name.assign("YBWQCERDXFSLXGAIJTHVHVAEUNWRJZPANHIJIPXAHGEIJCVTNKEDIMTXZVWGCLGSBUUXCFPMBRHZASFQRKANPQWYDJLSFGOUVBQJLYMYBSDOHNAWOLSVWLIFNTZORMNKBVTQOELDEMAABOR");
    msg.state = 66U;

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
    msg.setTimeStamp(0.19887383571541561);
    msg.setSource(49250U);
    msg.setSourceEntity(192U);
    msg.setDestination(1107U);
    msg.setDestinationEntity(244U);
    msg.name.assign("UCRVFNDFOUERUVAWDUHWIVMKXMYGODVZVGALBDFNGBJMTYLNUPIYUOHWXXKRDYDMNJPNTBQBQSJAUPALGENHKCTLCXZYGMHORYWMAN");
    msg.state = 152U;

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
    msg.setTimeStamp(0.024226929306707223);
    msg.setSource(57325U);
    msg.setSourceEntity(191U);
    msg.setDestination(19304U);
    msg.setDestinationEntity(39U);
    msg.name.assign("VZCTHSASYWUBDPEEFHZPGUXXNJHJIXUHYVVPCDV");
    msg.state = 108U;

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
    msg.setTimeStamp(0.18679535531455105);
    msg.setSource(14696U);
    msg.setSourceEntity(195U);
    msg.setDestination(22099U);
    msg.setDestinationEntity(217U);
    msg.name.assign("KLVBPQMLKTQCBIMYZEFIZWGBRZARGKZBHTOVXKHAHYSVECZADIUJCPMLTKBGNJCYGNLXRULEBDVCPXPMIAXSXXLCYDPETNJUIYDFJLFXFBWXUIITKRFGTEYDALOOQORPDNVTAQIBAJQQLNMZPYYJPQYUXLFWWGNQUJMWOFJSNFVNSTSAJRCDEHHMMRJGWDRDSOBRKGNDIHOVYFMKCZ");
    msg.value = 84U;

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
    msg.setTimeStamp(0.4753411827235555);
    msg.setSource(5864U);
    msg.setSourceEntity(73U);
    msg.setDestination(41750U);
    msg.setDestinationEntity(136U);
    msg.name.assign("MGXSPHIMXTNTUBBVPBQIV");
    msg.value = 122U;

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
    msg.setTimeStamp(0.920191761499914);
    msg.setSource(34154U);
    msg.setSourceEntity(204U);
    msg.setDestination(48086U);
    msg.setDestinationEntity(129U);
    msg.name.assign("THPWMHIPOURNZUGXCKJOEZEOLKGWGRSOBDMPAULBHMKWQXGGHRDCUZTOAGKCWOVYZQDMBZPWROQBYTSISWDIAUPZFJ");
    msg.value = 244U;

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
    msg.setTimeStamp(0.6240068309426191);
    msg.setSource(52510U);
    msg.setSourceEntity(148U);
    msg.setDestination(19228U);
    msg.setDestinationEntity(119U);
    msg.name.assign("WNUGJJEGUAIPVRELKOPBTLBTTMEZXCNEUQXWQLPDASQQDYHBOFOETAVRWROUDOJBGHRUBSLZTXRRFIGYEZLZSZZGUPPPZHKGGXVNCBDIMQTSEMFNSUDJXYWKLGMMEGLKZQXMVTFCQTBCJ");

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
    msg.setTimeStamp(0.9545003020518619);
    msg.setSource(49312U);
    msg.setSourceEntity(188U);
    msg.setDestination(57823U);
    msg.setDestinationEntity(232U);
    msg.name.assign("OOJKGYWEZJKZNKPGGRSXQHCXAKICELCWNATSNMCPIQTNVIEHKYMKLRIANBKZZVYVTGUZSZFMDBLRNMBSTFLLNYOEEJFUVPZEGZ");

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
    msg.setTimeStamp(0.3729448431449006);
    msg.setSource(52424U);
    msg.setSourceEntity(80U);
    msg.setDestination(34126U);
    msg.setDestinationEntity(48U);
    msg.name.assign("SKCOUDDLVHSEYB");

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
    msg.setTimeStamp(0.6255946388195175);
    msg.setSource(36608U);
    msg.setSourceEntity(14U);
    msg.setDestination(32670U);
    msg.setDestinationEntity(206U);
    msg.name.assign("EDPMBDZNZZOSCATFSWRLKPTZKELJIGURFXNBHBPTHYYVHMGCYLPAISZIETIPFMDJAIOXDRISUTORKLNFPNLKVOBBXLEOCSXELPHBHAGVPHUENQJCFFADWIWY");
    msg.value = 136U;

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
    msg.setTimeStamp(0.44368105192646623);
    msg.setSource(30396U);
    msg.setSourceEntity(50U);
    msg.setDestination(46969U);
    msg.setDestinationEntity(247U);
    msg.name.assign("XTJSXJSDFDENSYNNPTUWAIHSFBCETSLDAYXSUYRMVDVJGJAPKSNJBOOWAIACHMQCWGHOEIZGRQHNVZKHMQEBHBDZNEOBKHLLMLGLZ");
    msg.value = 211U;

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
    msg.setTimeStamp(0.12446443678201591);
    msg.setSource(17598U);
    msg.setSourceEntity(14U);
    msg.setDestination(24932U);
    msg.setDestinationEntity(57U);
    msg.name.assign("GSKUEIXDZHDBCLXHJVQXXXZZAIYWUKFDPCJEAFDBJAUSBKR");
    msg.value = 122U;

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
    msg.setTimeStamp(0.9966780911197352);
    msg.setSource(65168U);
    msg.setSourceEntity(136U);
    msg.setDestination(56462U);
    msg.setDestinationEntity(166U);
    msg.id = 15U;
    msg.period = 640636421U;
    msg.duty_cycle = 2502257905U;

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
    msg.setTimeStamp(0.6099694486770522);
    msg.setSource(59227U);
    msg.setSourceEntity(14U);
    msg.setDestination(56596U);
    msg.setDestinationEntity(9U);
    msg.id = 206U;
    msg.period = 746326961U;
    msg.duty_cycle = 3064467635U;

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
    msg.setTimeStamp(0.7765922307322615);
    msg.setSource(58465U);
    msg.setSourceEntity(175U);
    msg.setDestination(8391U);
    msg.setDestinationEntity(20U);
    msg.id = 20U;
    msg.period = 1385308740U;
    msg.duty_cycle = 685965009U;

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
    msg.setTimeStamp(0.8246164334793074);
    msg.setSource(19286U);
    msg.setSourceEntity(20U);
    msg.setDestination(20929U);
    msg.setDestinationEntity(247U);
    msg.id = 103U;
    msg.period = 1589074461U;
    msg.duty_cycle = 3519099474U;

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
    msg.setTimeStamp(0.8371012123601324);
    msg.setSource(44952U);
    msg.setSourceEntity(5U);
    msg.setDestination(45538U);
    msg.setDestinationEntity(16U);
    msg.id = 70U;
    msg.period = 2122360410U;
    msg.duty_cycle = 1808704472U;

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
    msg.setTimeStamp(0.5507272998252339);
    msg.setSource(25300U);
    msg.setSourceEntity(22U);
    msg.setDestination(56027U);
    msg.setDestinationEntity(171U);
    msg.id = 211U;
    msg.period = 4236964876U;
    msg.duty_cycle = 2942142097U;

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
    msg.setTimeStamp(0.35892539530916245);
    msg.setSource(1701U);
    msg.setSourceEntity(45U);
    msg.setDestination(62198U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.5455362697051995;
    msg.lon = 0.15251559194088626;
    msg.height = 0.11190084600710903;
    msg.x = 0.9099391425128491;
    msg.y = 0.9655605106836754;
    msg.z = 0.6817083498046886;
    msg.phi = 0.7645622229677035;
    msg.theta = 0.8230639512445022;
    msg.psi = 0.38386641299860247;
    msg.u = 0.4442640549630438;
    msg.v = 0.44788285842021613;
    msg.w = 0.8079150273804991;
    msg.vx = 0.1639878092019379;
    msg.vy = 0.5248886797057004;
    msg.vz = 0.9163760904701688;
    msg.p = 0.7551831932986499;
    msg.q = 0.09222628340563799;
    msg.r = 0.9326927270032158;
    msg.depth = 0.6277529567403853;
    msg.alt = 0.36051286193998033;

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
    msg.setTimeStamp(0.6105391753176661);
    msg.setSource(55488U);
    msg.setSourceEntity(226U);
    msg.setDestination(15135U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.08404986912503065;
    msg.lon = 0.1971471466148521;
    msg.height = 0.6998972279732119;
    msg.x = 0.8424103778853411;
    msg.y = 0.03803393405475208;
    msg.z = 0.778468626503482;
    msg.phi = 0.23533593731809177;
    msg.theta = 0.8569277914640023;
    msg.psi = 0.6838881507675586;
    msg.u = 0.25060927988451465;
    msg.v = 0.6021510268041065;
    msg.w = 0.44005277694148504;
    msg.vx = 0.5862202104601956;
    msg.vy = 0.3148875093811303;
    msg.vz = 0.4420474286298136;
    msg.p = 0.20335764072199836;
    msg.q = 0.2940280590584837;
    msg.r = 0.05397533003998167;
    msg.depth = 0.6697811197668002;
    msg.alt = 0.6601586241205987;

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
    msg.setTimeStamp(0.6900140624099377);
    msg.setSource(33065U);
    msg.setSourceEntity(53U);
    msg.setDestination(18934U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.060795971782761304;
    msg.lon = 0.7859949134759141;
    msg.height = 0.07235512801579735;
    msg.x = 0.3894227224208028;
    msg.y = 0.9314196995947976;
    msg.z = 0.5962516672571019;
    msg.phi = 0.8503644270690289;
    msg.theta = 0.6761840830632109;
    msg.psi = 0.9396575848254605;
    msg.u = 0.3111012276487295;
    msg.v = 0.2645415184650758;
    msg.w = 0.9708393758394465;
    msg.vx = 0.11752999193002678;
    msg.vy = 0.6495501968246499;
    msg.vz = 0.4933983846512269;
    msg.p = 0.7288510328107753;
    msg.q = 0.8157011962083494;
    msg.r = 0.9225190112367675;
    msg.depth = 0.5398729480182901;
    msg.alt = 0.7044673835047223;

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
    msg.setTimeStamp(0.6823415526763451);
    msg.setSource(16998U);
    msg.setSourceEntity(218U);
    msg.setDestination(58026U);
    msg.setDestinationEntity(83U);
    msg.x = 0.7884250202570391;
    msg.y = 0.5701809585481628;
    msg.z = 0.08453067890959987;

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
    msg.setTimeStamp(0.310069791061794);
    msg.setSource(47842U);
    msg.setSourceEntity(206U);
    msg.setDestination(8492U);
    msg.setDestinationEntity(75U);
    msg.x = 0.39057599688057487;
    msg.y = 0.3298721752420326;
    msg.z = 0.7866094698797447;

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
    msg.setTimeStamp(0.09155499905397735);
    msg.setSource(52025U);
    msg.setSourceEntity(123U);
    msg.setDestination(19280U);
    msg.setDestinationEntity(93U);
    msg.x = 0.17640101111584905;
    msg.y = 0.9341055728617985;
    msg.z = 0.30783756522083205;

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
    msg.setTimeStamp(0.6242838753097638);
    msg.setSource(25445U);
    msg.setSourceEntity(168U);
    msg.setDestination(5667U);
    msg.setDestinationEntity(222U);
    msg.value = 0.6758944939631686;

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
    msg.setTimeStamp(0.8337338692411577);
    msg.setSource(4270U);
    msg.setSourceEntity(237U);
    msg.setDestination(36056U);
    msg.setDestinationEntity(122U);
    msg.value = 0.28234092049880843;

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
    msg.setTimeStamp(0.8759794901523641);
    msg.setSource(32683U);
    msg.setSourceEntity(173U);
    msg.setDestination(48937U);
    msg.setDestinationEntity(7U);
    msg.value = 0.14839229220507266;

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
    msg.setTimeStamp(0.020090884003945098);
    msg.setSource(8132U);
    msg.setSourceEntity(74U);
    msg.setDestination(30406U);
    msg.setDestinationEntity(46U);
    msg.value = 0.11144536126939986;

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
    msg.setTimeStamp(0.2492898303784744);
    msg.setSource(36596U);
    msg.setSourceEntity(170U);
    msg.setDestination(29973U);
    msg.setDestinationEntity(155U);
    msg.value = 0.4762359092952766;

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
    msg.setTimeStamp(0.8960638595611342);
    msg.setSource(7806U);
    msg.setSourceEntity(134U);
    msg.setDestination(18643U);
    msg.setDestinationEntity(252U);
    msg.value = 0.9322092062521339;

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
    msg.setTimeStamp(0.8279464267974723);
    msg.setSource(57122U);
    msg.setSourceEntity(243U);
    msg.setDestination(42134U);
    msg.setDestinationEntity(134U);
    msg.x = 0.5472289425900163;
    msg.y = 0.8465812930856697;
    msg.z = 0.2428942954997111;
    msg.phi = 0.6832740678886442;
    msg.theta = 0.5115076094981761;
    msg.psi = 0.7412041496655527;
    msg.p = 0.04419121913382251;
    msg.q = 0.8422473469087213;
    msg.r = 0.1947768207237216;
    msg.u = 0.8343785381729975;
    msg.v = 0.9836762473032659;
    msg.w = 0.15903338797258182;
    msg.bias_psi = 0.6837578747233007;
    msg.bias_r = 0.525235295943846;

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
    msg.setTimeStamp(0.7179033957364314);
    msg.setSource(34827U);
    msg.setSourceEntity(75U);
    msg.setDestination(43661U);
    msg.setDestinationEntity(158U);
    msg.x = 0.0673476703965421;
    msg.y = 0.007666497915967185;
    msg.z = 0.09236743413156534;
    msg.phi = 0.22201976748944163;
    msg.theta = 0.004049064267223734;
    msg.psi = 0.32346332839946246;
    msg.p = 0.6502261544788166;
    msg.q = 0.9713608256985381;
    msg.r = 0.7480344295481124;
    msg.u = 0.6472306185980174;
    msg.v = 0.11629661378981115;
    msg.w = 0.16455599742770388;
    msg.bias_psi = 0.3530847755137655;
    msg.bias_r = 0.9427136826599456;

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
    msg.setTimeStamp(0.9389022619750421);
    msg.setSource(43570U);
    msg.setSourceEntity(98U);
    msg.setDestination(15025U);
    msg.setDestinationEntity(16U);
    msg.x = 0.21811883169488266;
    msg.y = 0.16098696498181453;
    msg.z = 0.40136896290696933;
    msg.phi = 0.7252032625967357;
    msg.theta = 0.05003135911910306;
    msg.psi = 0.141592873234884;
    msg.p = 0.4949939149560594;
    msg.q = 0.5325488594383725;
    msg.r = 0.6949778649926911;
    msg.u = 0.05827719223831185;
    msg.v = 0.3311173301392447;
    msg.w = 0.7556557466653431;
    msg.bias_psi = 0.45500029895713734;
    msg.bias_r = 0.5402066445692922;

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
    msg.setTimeStamp(0.6940858391074032);
    msg.setSource(16793U);
    msg.setSourceEntity(233U);
    msg.setDestination(58351U);
    msg.setDestinationEntity(213U);
    msg.bias_psi = 0.9324797282218438;
    msg.bias_r = 0.1383827778749116;
    msg.cog = 0.0053408937203546225;
    msg.cyaw = 0.1884206283498916;
    msg.lbl_rej_level = 0.15881835869543626;
    msg.gps_rej_level = 0.7374714050933613;
    msg.custom_x = 0.5374152164142935;
    msg.custom_y = 0.9256903945615004;
    msg.custom_z = 0.21204466540594824;

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
    msg.setTimeStamp(0.5252055283246453);
    msg.setSource(25016U);
    msg.setSourceEntity(200U);
    msg.setDestination(8718U);
    msg.setDestinationEntity(230U);
    msg.bias_psi = 0.8375070958872163;
    msg.bias_r = 0.10204485318766776;
    msg.cog = 0.531693742834344;
    msg.cyaw = 0.5765735266743663;
    msg.lbl_rej_level = 0.827194493612244;
    msg.gps_rej_level = 0.9732503596954999;
    msg.custom_x = 0.3998061162080072;
    msg.custom_y = 0.8181689922293227;
    msg.custom_z = 0.8866187659425131;

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
    msg.setTimeStamp(0.3435030522826864);
    msg.setSource(248U);
    msg.setSourceEntity(126U);
    msg.setDestination(3191U);
    msg.setDestinationEntity(2U);
    msg.bias_psi = 0.16019536459956418;
    msg.bias_r = 0.33653610011865753;
    msg.cog = 0.027032794594188614;
    msg.cyaw = 0.3794454756110104;
    msg.lbl_rej_level = 0.5579727539465233;
    msg.gps_rej_level = 0.3512853323923174;
    msg.custom_x = 0.29066858136198837;
    msg.custom_y = 0.1882688687714118;
    msg.custom_z = 0.8934508155962293;

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
    msg.setTimeStamp(0.04983256176421513);
    msg.setSource(38877U);
    msg.setSourceEntity(107U);
    msg.setDestination(37837U);
    msg.setDestinationEntity(144U);
    msg.utc_time = 0.5656350907985468;
    msg.reason = 88U;

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
    msg.setTimeStamp(0.41731127680355984);
    msg.setSource(42604U);
    msg.setSourceEntity(66U);
    msg.setDestination(51415U);
    msg.setDestinationEntity(208U);
    msg.utc_time = 0.8718732777717977;
    msg.reason = 85U;

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
    msg.setTimeStamp(0.5369517194307445);
    msg.setSource(170U);
    msg.setSourceEntity(221U);
    msg.setDestination(13048U);
    msg.setDestinationEntity(31U);
    msg.utc_time = 0.27074959787585684;
    msg.reason = 17U;

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
    msg.setTimeStamp(0.2204721766751908);
    msg.setSource(49910U);
    msg.setSourceEntity(17U);
    msg.setDestination(17335U);
    msg.setDestinationEntity(182U);
    msg.id = 117U;
    msg.range = 0.9548611998847438;
    msg.acceptance = 197U;

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
    msg.setTimeStamp(0.5449473049006035);
    msg.setSource(35814U);
    msg.setSourceEntity(190U);
    msg.setDestination(64115U);
    msg.setDestinationEntity(225U);
    msg.id = 104U;
    msg.range = 0.730565125225535;
    msg.acceptance = 224U;

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
    msg.setTimeStamp(0.5551178641890033);
    msg.setSource(19846U);
    msg.setSourceEntity(14U);
    msg.setDestination(57221U);
    msg.setDestinationEntity(0U);
    msg.id = 164U;
    msg.range = 0.3759525787601784;
    msg.acceptance = 73U;

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
    msg.setTimeStamp(0.6200268917113838);
    msg.setSource(6601U);
    msg.setSourceEntity(35U);
    msg.setDestination(41458U);
    msg.setDestinationEntity(56U);
    msg.type = 142U;
    msg.reason = 226U;
    msg.value = 0.3616927768219652;
    msg.timestep = 0.24054320472600788;

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
    msg.setTimeStamp(0.7672594155063198);
    msg.setSource(56078U);
    msg.setSourceEntity(123U);
    msg.setDestination(46028U);
    msg.setDestinationEntity(114U);
    msg.type = 165U;
    msg.reason = 40U;
    msg.value = 0.5242973256845632;
    msg.timestep = 0.6823013777214448;

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
    msg.setTimeStamp(0.866007412273622);
    msg.setSource(43490U);
    msg.setSourceEntity(242U);
    msg.setDestination(16657U);
    msg.setDestinationEntity(85U);
    msg.type = 61U;
    msg.reason = 11U;
    msg.value = 0.3460604390908071;
    msg.timestep = 0.683663012860683;

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
    msg.setTimeStamp(0.42261208451886023);
    msg.setSource(41037U);
    msg.setSourceEntity(139U);
    msg.setDestination(31126U);
    msg.setDestinationEntity(66U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EWIUOHHVSASKPKFNOJMOYYAOPZLNAOQTQLBVQHXZGCPJNUNQQAHIKYJFTPULGMRWGEGKCFZSCHMIXEWEZVVGCZHRZSRSSTBFBDBCVWRGYZMJIYYNTXJMDHQFSTHFPKVKBMOBUXSXWIVVMWBUHJTDPCBHMGGQKQEEMNFYKRDAILUSUUJOLL");
    tmp_msg_0.lat = 0.7355730071865596;
    tmp_msg_0.lon = 0.24549694268311972;
    tmp_msg_0.depth = 0.1357040493453041;
    tmp_msg_0.query_channel = 42U;
    tmp_msg_0.reply_channel = 162U;
    tmp_msg_0.transponder_delay = 94U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.33781161556073913;
    msg.y = 0.8283732235099265;
    msg.var_x = 0.7962941604908836;
    msg.var_y = 0.5900129210088743;
    msg.distance = 0.7934204091443559;

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
    msg.setTimeStamp(0.8405239878310119);
    msg.setSource(60045U);
    msg.setSourceEntity(177U);
    msg.setDestination(39792U);
    msg.setDestinationEntity(233U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HSIJZLJVIQQDVCHQGZVJRNAMSESNCFYLASNFKNLPWTSYLKFDMKQBSBZACWMHWJFTNGGXBQOWTYAXIYKVKTVKUTKCRXFBUWZRMGFWEMVCCYPUXDGCOZYGQHHZSYDJUTYJXGEMNATALLDPEBCEDABWUUBJSOMCYOTFIBQFEKIWLZMROVAXZFLNUPBWEMPLAOHDP");
    tmp_msg_0.lat = 0.10210304264881631;
    tmp_msg_0.lon = 0.528636206939663;
    tmp_msg_0.depth = 0.9726657612968238;
    tmp_msg_0.query_channel = 52U;
    tmp_msg_0.reply_channel = 20U;
    tmp_msg_0.transponder_delay = 137U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6116848693652207;
    msg.y = 0.42171764837742753;
    msg.var_x = 0.045064598592939875;
    msg.var_y = 0.8918540835034925;
    msg.distance = 0.4719152805355147;

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
    msg.setTimeStamp(0.5558990447208683);
    msg.setSource(44813U);
    msg.setSourceEntity(175U);
    msg.setDestination(62672U);
    msg.setDestinationEntity(139U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MRQOLLJAPZJGCGXKDUPQEDQBXRNTAVIOVILVBODXRTQQUKUASYEL");
    tmp_msg_0.lat = 0.5692185890383386;
    tmp_msg_0.lon = 0.5921419527482992;
    tmp_msg_0.depth = 0.5429903472259372;
    tmp_msg_0.query_channel = 2U;
    tmp_msg_0.reply_channel = 125U;
    tmp_msg_0.transponder_delay = 90U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9452938374812042;
    msg.y = 0.9159086345397167;
    msg.var_x = 0.9961805559006828;
    msg.var_y = 0.9374024360055554;
    msg.distance = 0.03824887514507125;

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
    msg.setTimeStamp(0.8966383228568587);
    msg.setSource(46734U);
    msg.setSourceEntity(142U);
    msg.setDestination(53300U);
    msg.setDestinationEntity(207U);
    msg.state = 200U;

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
    msg.setTimeStamp(0.03471264157962961);
    msg.setSource(33944U);
    msg.setSourceEntity(193U);
    msg.setDestination(26292U);
    msg.setDestinationEntity(106U);
    msg.state = 92U;

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
    msg.setTimeStamp(0.19115889477225922);
    msg.setSource(31826U);
    msg.setSourceEntity(194U);
    msg.setDestination(10288U);
    msg.setDestinationEntity(53U);
    msg.state = 75U;

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
    msg.setTimeStamp(0.6093853404127985);
    msg.setSource(13406U);
    msg.setSourceEntity(12U);
    msg.setDestination(59845U);
    msg.setDestinationEntity(41U);
    msg.x = 0.5539802984239549;
    msg.y = 0.7581785635928842;
    msg.z = 0.577567199745063;

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
    msg.setTimeStamp(0.2916485852245213);
    msg.setSource(34547U);
    msg.setSourceEntity(94U);
    msg.setDestination(32919U);
    msg.setDestinationEntity(90U);
    msg.x = 0.9595270830854247;
    msg.y = 0.21515555818390086;
    msg.z = 0.9994253121155893;

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
    msg.setTimeStamp(0.5917577408512494);
    msg.setSource(28501U);
    msg.setSourceEntity(79U);
    msg.setDestination(55661U);
    msg.setDestinationEntity(78U);
    msg.x = 0.2715300403200511;
    msg.y = 0.8696017946352819;
    msg.z = 0.8791218905556955;

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
    msg.setTimeStamp(0.7033049989187417);
    msg.setSource(18388U);
    msg.setSourceEntity(39U);
    msg.setDestination(20377U);
    msg.setDestinationEntity(129U);
    msg.value = 0.2238805068853401;

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
    msg.setTimeStamp(0.03218570457101144);
    msg.setSource(3115U);
    msg.setSourceEntity(12U);
    msg.setDestination(42085U);
    msg.setDestinationEntity(39U);
    msg.value = 0.4466503305587215;

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
    msg.setTimeStamp(0.5733619180285927);
    msg.setSource(56326U);
    msg.setSourceEntity(214U);
    msg.setDestination(714U);
    msg.setDestinationEntity(3U);
    msg.value = 0.40005030040622924;

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
    msg.setTimeStamp(0.8151700576711789);
    msg.setSource(5551U);
    msg.setSourceEntity(112U);
    msg.setDestination(21547U);
    msg.setDestinationEntity(240U);
    msg.value = 0.7426012742252626;
    msg.z_units = 82U;

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
    msg.setTimeStamp(0.14473944313440534);
    msg.setSource(50343U);
    msg.setSourceEntity(34U);
    msg.setDestination(36984U);
    msg.setDestinationEntity(143U);
    msg.value = 0.2504755453857891;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.5705167488798378);
    msg.setSource(41574U);
    msg.setSourceEntity(15U);
    msg.setDestination(12066U);
    msg.setDestinationEntity(132U);
    msg.value = 0.9387369617080383;
    msg.z_units = 77U;

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
    msg.setTimeStamp(0.1370325712920395);
    msg.setSource(21059U);
    msg.setSourceEntity(54U);
    msg.setDestination(1175U);
    msg.setDestinationEntity(240U);
    msg.value = 0.6546865359426411;
    msg.speed_units = 44U;

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
    msg.setTimeStamp(0.15203434573558905);
    msg.setSource(62776U);
    msg.setSourceEntity(211U);
    msg.setDestination(56433U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6246343255212757;
    msg.speed_units = 103U;

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
    msg.setTimeStamp(0.5666065422278976);
    msg.setSource(64126U);
    msg.setSourceEntity(31U);
    msg.setDestination(30794U);
    msg.setDestinationEntity(191U);
    msg.value = 0.9629429267699825;
    msg.speed_units = 0U;

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
    msg.setTimeStamp(0.5404559089393302);
    msg.setSource(26633U);
    msg.setSourceEntity(86U);
    msg.setDestination(39451U);
    msg.setDestinationEntity(102U);
    msg.value = 0.4361910977747505;

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
    msg.setTimeStamp(0.45299537594358674);
    msg.setSource(15498U);
    msg.setSourceEntity(28U);
    msg.setDestination(42164U);
    msg.setDestinationEntity(47U);
    msg.value = 0.33544247863042664;

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
    msg.setTimeStamp(0.5883010986985294);
    msg.setSource(30141U);
    msg.setSourceEntity(230U);
    msg.setDestination(52564U);
    msg.setDestinationEntity(188U);
    msg.value = 0.18041821614854903;

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
    msg.setTimeStamp(0.5393452013275987);
    msg.setSource(36413U);
    msg.setSourceEntity(231U);
    msg.setDestination(51132U);
    msg.setDestinationEntity(96U);
    msg.value = 0.4920074287489853;

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
    msg.setTimeStamp(0.04439167912478292);
    msg.setSource(65153U);
    msg.setSourceEntity(83U);
    msg.setDestination(30437U);
    msg.setDestinationEntity(112U);
    msg.value = 0.2050490971078366;

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
    msg.setTimeStamp(0.2080356170593124);
    msg.setSource(21318U);
    msg.setSourceEntity(211U);
    msg.setDestination(63895U);
    msg.setDestinationEntity(251U);
    msg.value = 0.6825132385273668;

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
    msg.setTimeStamp(0.0030899128515822216);
    msg.setSource(63662U);
    msg.setSourceEntity(160U);
    msg.setDestination(457U);
    msg.setDestinationEntity(6U);
    msg.value = 0.20924572210971137;

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
    msg.setTimeStamp(0.6781543210846521);
    msg.setSource(46623U);
    msg.setSourceEntity(142U);
    msg.setDestination(31825U);
    msg.setDestinationEntity(72U);
    msg.value = 0.45847650886158176;

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
    msg.setTimeStamp(0.5338874501752237);
    msg.setSource(24707U);
    msg.setSourceEntity(171U);
    msg.setDestination(50288U);
    msg.setDestinationEntity(138U);
    msg.value = 0.1383302957649699;

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
    msg.setTimeStamp(0.6309005214295919);
    msg.setSource(17114U);
    msg.setSourceEntity(234U);
    msg.setDestination(2273U);
    msg.setDestinationEntity(166U);
    msg.path_ref = 841310325U;
    msg.start_lat = 0.1187271228185629;
    msg.start_lon = 0.42468039632224486;
    msg.start_z = 0.6412377167306881;
    msg.start_z_units = 15U;
    msg.end_lat = 0.00844285838734904;
    msg.end_lon = 0.8303032845212492;
    msg.end_z = 0.15477461979063567;
    msg.end_z_units = 64U;
    msg.speed = 0.6073461929572279;
    msg.speed_units = 152U;
    msg.lradius = 0.8043599289216972;
    msg.flags = 143U;

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
    msg.setTimeStamp(0.9918335811254169);
    msg.setSource(7855U);
    msg.setSourceEntity(130U);
    msg.setDestination(5601U);
    msg.setDestinationEntity(149U);
    msg.path_ref = 4096899176U;
    msg.start_lat = 0.5692659850836803;
    msg.start_lon = 0.3988659085664785;
    msg.start_z = 0.3009578725501685;
    msg.start_z_units = 40U;
    msg.end_lat = 0.6846046506067014;
    msg.end_lon = 0.06857207499130213;
    msg.end_z = 0.33198246077975757;
    msg.end_z_units = 198U;
    msg.speed = 0.16518596478347602;
    msg.speed_units = 55U;
    msg.lradius = 0.6893603848551796;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.7263167726307052);
    msg.setSource(41865U);
    msg.setSourceEntity(222U);
    msg.setDestination(10718U);
    msg.setDestinationEntity(103U);
    msg.path_ref = 3801506439U;
    msg.start_lat = 0.45612397419952744;
    msg.start_lon = 0.015827471950480954;
    msg.start_z = 0.24464336565280653;
    msg.start_z_units = 51U;
    msg.end_lat = 0.37901644484321473;
    msg.end_lon = 0.9718118348281832;
    msg.end_z = 0.6936364565275308;
    msg.end_z_units = 233U;
    msg.speed = 0.5782097201119754;
    msg.speed_units = 33U;
    msg.lradius = 0.4272227254112222;
    msg.flags = 159U;

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
    msg.setTimeStamp(0.6949509829070075);
    msg.setSource(63097U);
    msg.setSourceEntity(5U);
    msg.setDestination(29966U);
    msg.setDestinationEntity(141U);
    msg.x = 0.8126138385628899;
    msg.y = 0.6523023555063249;
    msg.z = 0.06788793110746327;
    msg.k = 0.9232095337483989;
    msg.m = 0.1246561491076752;
    msg.n = 0.06209318842462008;
    msg.flags = 219U;

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
    msg.setTimeStamp(0.3768633167366886);
    msg.setSource(33412U);
    msg.setSourceEntity(29U);
    msg.setDestination(57478U);
    msg.setDestinationEntity(85U);
    msg.x = 0.795459901255653;
    msg.y = 0.9455533971898412;
    msg.z = 0.8342109750537795;
    msg.k = 0.392718501396637;
    msg.m = 0.31232008965800806;
    msg.n = 0.44334286765232667;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.1724371309170576);
    msg.setSource(1984U);
    msg.setSourceEntity(142U);
    msg.setDestination(11921U);
    msg.setDestinationEntity(85U);
    msg.x = 0.7220427544073377;
    msg.y = 0.9544894948608493;
    msg.z = 0.24982855359744827;
    msg.k = 0.12026895992809139;
    msg.m = 0.3199488059743957;
    msg.n = 0.7009168274539148;
    msg.flags = 221U;

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
    msg.setTimeStamp(0.903528925060363);
    msg.setSource(52905U);
    msg.setSourceEntity(233U);
    msg.setDestination(12856U);
    msg.setDestinationEntity(212U);
    msg.value = 0.4329023790524513;

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
    msg.setTimeStamp(0.4161272356500839);
    msg.setSource(60037U);
    msg.setSourceEntity(11U);
    msg.setDestination(14814U);
    msg.setDestinationEntity(133U);
    msg.value = 0.6321411722208845;

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
    msg.setTimeStamp(0.744443840972026);
    msg.setSource(21258U);
    msg.setSourceEntity(225U);
    msg.setDestination(48905U);
    msg.setDestinationEntity(191U);
    msg.value = 0.5827752203424232;

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
    msg.setTimeStamp(0.5597471225630477);
    msg.setSource(39090U);
    msg.setSourceEntity(162U);
    msg.setDestination(8793U);
    msg.setDestinationEntity(220U);
    msg.u = 0.8012445024174337;
    msg.v = 0.2332878962804047;
    msg.w = 0.07445151839792696;
    msg.p = 0.8526630855998606;
    msg.q = 0.116871073289459;
    msg.r = 0.3945961146863234;
    msg.flags = 128U;

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
    msg.setTimeStamp(0.6444828116055517);
    msg.setSource(62471U);
    msg.setSourceEntity(76U);
    msg.setDestination(16047U);
    msg.setDestinationEntity(156U);
    msg.u = 0.5889837865419938;
    msg.v = 0.3276744715039088;
    msg.w = 0.7990354322504484;
    msg.p = 0.6626253359171876;
    msg.q = 0.4825876999882658;
    msg.r = 0.22079930970186978;
    msg.flags = 1U;

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
    msg.setTimeStamp(0.029540472270165763);
    msg.setSource(46517U);
    msg.setSourceEntity(84U);
    msg.setDestination(31320U);
    msg.setDestinationEntity(176U);
    msg.u = 0.09067904698226958;
    msg.v = 0.8939624067283218;
    msg.w = 0.37748574747517605;
    msg.p = 0.0705744574674636;
    msg.q = 0.4762651199419793;
    msg.r = 0.4790025363188414;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.6445771501274149);
    msg.setSource(41552U);
    msg.setSourceEntity(104U);
    msg.setDestination(49109U);
    msg.setDestinationEntity(165U);
    msg.path_ref = 1248352280U;
    msg.start_lat = 0.684996071418657;
    msg.start_lon = 0.0054422417981180304;
    msg.start_z = 0.3250511597971134;
    msg.start_z_units = 160U;
    msg.end_lat = 0.45392551333950115;
    msg.end_lon = 0.1644473240735892;
    msg.end_z = 0.8978772629210612;
    msg.end_z_units = 74U;
    msg.lradius = 0.28305480582400055;
    msg.flags = 248U;
    msg.x = 0.24787430363388774;
    msg.y = 0.5227409423358398;
    msg.z = 0.7949057184069264;
    msg.vx = 0.7970118297792279;
    msg.vy = 0.8893625964553367;
    msg.vz = 0.4735254222693216;
    msg.course_error = 0.5451462957622795;
    msg.eta = 49718U;

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
    msg.setTimeStamp(0.029225081790124063);
    msg.setSource(10356U);
    msg.setSourceEntity(20U);
    msg.setDestination(65489U);
    msg.setDestinationEntity(248U);
    msg.path_ref = 31171641U;
    msg.start_lat = 0.1394327470785578;
    msg.start_lon = 0.2120289123710053;
    msg.start_z = 0.69326083719634;
    msg.start_z_units = 150U;
    msg.end_lat = 0.8342833548320907;
    msg.end_lon = 0.7052776831512325;
    msg.end_z = 0.8067702408702185;
    msg.end_z_units = 46U;
    msg.lradius = 0.5036492887679334;
    msg.flags = 247U;
    msg.x = 0.8955081802028566;
    msg.y = 0.375870608321596;
    msg.z = 0.4415519463296411;
    msg.vx = 0.4690382995204557;
    msg.vy = 0.6829030423459624;
    msg.vz = 0.30032233856176205;
    msg.course_error = 0.5681810906203728;
    msg.eta = 32494U;

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
    msg.setTimeStamp(0.46453626136692805);
    msg.setSource(57947U);
    msg.setSourceEntity(140U);
    msg.setDestination(65299U);
    msg.setDestinationEntity(27U);
    msg.path_ref = 2506924560U;
    msg.start_lat = 0.5892266050147742;
    msg.start_lon = 0.7788686944769055;
    msg.start_z = 0.3704754683075664;
    msg.start_z_units = 98U;
    msg.end_lat = 0.11983455471003968;
    msg.end_lon = 0.5724404675928731;
    msg.end_z = 0.8660789556289076;
    msg.end_z_units = 6U;
    msg.lradius = 0.9984239418557568;
    msg.flags = 204U;
    msg.x = 0.17131249293626316;
    msg.y = 0.6101683266617413;
    msg.z = 0.8635966794845361;
    msg.vx = 0.7686532492721649;
    msg.vy = 0.9428936695326867;
    msg.vz = 0.42476765807213224;
    msg.course_error = 0.031333191988847875;
    msg.eta = 11008U;

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
    msg.setTimeStamp(0.9385455513442462);
    msg.setSource(19940U);
    msg.setSourceEntity(3U);
    msg.setDestination(14858U);
    msg.setDestinationEntity(107U);
    msg.k = 0.5755709527750722;
    msg.m = 0.7381217029369997;
    msg.n = 0.6425091377191827;

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
    msg.setTimeStamp(0.9888578709737342);
    msg.setSource(23371U);
    msg.setSourceEntity(33U);
    msg.setDestination(4131U);
    msg.setDestinationEntity(94U);
    msg.k = 0.6676505731669766;
    msg.m = 0.4639004068463065;
    msg.n = 0.22630231392326383;

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
    msg.setTimeStamp(0.5504437121633345);
    msg.setSource(2939U);
    msg.setSourceEntity(138U);
    msg.setDestination(7583U);
    msg.setDestinationEntity(59U);
    msg.k = 0.7432562152981865;
    msg.m = 0.16921188316590574;
    msg.n = 0.6070148807113184;

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
    msg.setTimeStamp(0.22057479378555744);
    msg.setSource(52272U);
    msg.setSourceEntity(80U);
    msg.setDestination(16851U);
    msg.setDestinationEntity(120U);
    msg.p = 0.3490393325704477;
    msg.i = 0.15736315126369893;
    msg.d = 0.3133615095080978;
    msg.a = 0.8414337020174284;

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
    msg.setTimeStamp(0.14094146799568785);
    msg.setSource(36820U);
    msg.setSourceEntity(127U);
    msg.setDestination(61317U);
    msg.setDestinationEntity(200U);
    msg.p = 0.7625356273300014;
    msg.i = 0.805878846847914;
    msg.d = 0.9881220646102951;
    msg.a = 0.5663918777015583;

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
    msg.setTimeStamp(0.22247688751423567);
    msg.setSource(3612U);
    msg.setSourceEntity(50U);
    msg.setDestination(36508U);
    msg.setDestinationEntity(253U);
    msg.p = 0.3741388579880718;
    msg.i = 0.8922486353141195;
    msg.d = 0.4719642900994492;
    msg.a = 0.29410596838177316;

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
    msg.setTimeStamp(0.04851464233877667);
    msg.setSource(9239U);
    msg.setSourceEntity(60U);
    msg.setDestination(7724U);
    msg.setDestinationEntity(118U);
    msg.op = 223U;

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
    msg.setTimeStamp(0.5300249857931931);
    msg.setSource(50417U);
    msg.setSourceEntity(233U);
    msg.setDestination(35312U);
    msg.setDestinationEntity(184U);
    msg.op = 43U;

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
    msg.setTimeStamp(0.39834999213070477);
    msg.setSource(12534U);
    msg.setSourceEntity(107U);
    msg.setDestination(21830U);
    msg.setDestinationEntity(192U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.8201793470217563);
    msg.setSource(41877U);
    msg.setSourceEntity(141U);
    msg.setDestination(26185U);
    msg.setDestinationEntity(168U);
    msg.timeout = 37374U;
    msg.lat = 0.8374648530663964;
    msg.lon = 0.8138666135104918;
    msg.z = 0.68199181573362;
    msg.z_units = 189U;
    msg.speed = 0.3238994253822839;
    msg.speed_units = 6U;
    msg.roll = 0.4567332967269163;
    msg.pitch = 0.6867518389640987;
    msg.yaw = 0.9165785869498995;
    msg.custom.assign("YEYLMNMZQASMBICBTTWEZJHCWKOVSBSVOGAMNUOHRJVJIFPPUDRKHFTWVDKGSAE");

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
    msg.setTimeStamp(0.9194218084893406);
    msg.setSource(56404U);
    msg.setSourceEntity(147U);
    msg.setDestination(14918U);
    msg.setDestinationEntity(151U);
    msg.timeout = 57233U;
    msg.lat = 0.5237417891536501;
    msg.lon = 0.23583860888962105;
    msg.z = 0.63625009567905;
    msg.z_units = 13U;
    msg.speed = 0.9264592058895318;
    msg.speed_units = 160U;
    msg.roll = 0.5370085104726219;
    msg.pitch = 0.36191978753105836;
    msg.yaw = 0.2848308447643789;
    msg.custom.assign("HKIDOAQAEIGEDKPBYDMRVOCZOSCMJHNO");

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
    msg.setTimeStamp(0.27605247077507145);
    msg.setSource(22702U);
    msg.setSourceEntity(103U);
    msg.setDestination(42824U);
    msg.setDestinationEntity(180U);
    msg.timeout = 35103U;
    msg.lat = 0.9682680093934055;
    msg.lon = 0.4270482734270855;
    msg.z = 0.28580053099026936;
    msg.z_units = 254U;
    msg.speed = 0.39196098236036503;
    msg.speed_units = 148U;
    msg.roll = 0.8022797576638981;
    msg.pitch = 0.04570419662510716;
    msg.yaw = 0.18744176435738613;
    msg.custom.assign("OIGJTGAPFURREDGKCBVIAYAYZYTBPCODRRAPJWIQZSHIFOZFNYQVHXZAOMRZCMCADORTNVKLCJUCZLQSNXDAVVOKVUSHJNUYLMTLFHZXGYJFEPNZECETQDSVIPETGUWWYWXDLEUCXLRROKNJALBGFIDBBNYMSTJNIBTLEZMFEWJXDKGHPXMSQEGNHGBWDKPVBHWLKBQDPOOUBM");

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
    msg.setTimeStamp(0.971159031980215);
    msg.setSource(34044U);
    msg.setSourceEntity(207U);
    msg.setDestination(54647U);
    msg.setDestinationEntity(120U);
    msg.timeout = 62800U;
    msg.lat = 0.06358885003630455;
    msg.lon = 0.13794127110866805;
    msg.z = 0.5539164310881961;
    msg.z_units = 192U;
    msg.speed = 0.6657740772496713;
    msg.speed_units = 113U;
    msg.duration = 42394U;
    msg.radius = 0.6946846633785693;
    msg.flags = 178U;
    msg.custom.assign("XZWXTLDOPWRRQUEEAFNUULZRAGOSJRWJYFBXWPVKVMLMTKLWCYXSVAIZGKOPYONCEAANTSDPIEJNQSHEMKBEEJJYXFUQRPZBGQRUWSMYPHRJPDQMFMHIETYGLDSZVVRXSYKUKCMTWYZUAFFHNJXZKATDONPKQAQFLGMOFTBXPDWVLLCJBGDIYABQGISPODAMLTBIVNM");

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
    msg.setTimeStamp(0.7387508274000293);
    msg.setSource(24339U);
    msg.setSourceEntity(179U);
    msg.setDestination(17609U);
    msg.setDestinationEntity(33U);
    msg.timeout = 58403U;
    msg.lat = 0.33817256037470345;
    msg.lon = 0.15367258108855042;
    msg.z = 0.050612110486187634;
    msg.z_units = 5U;
    msg.speed = 0.8282472710877904;
    msg.speed_units = 68U;
    msg.duration = 65014U;
    msg.radius = 0.19091015199103378;
    msg.flags = 52U;
    msg.custom.assign("WARDFTHHRZHKVIWZAWEZOORMYGBNQGFJMJXOCUPIMDOJQCIDPUZTVBQVURXSYGCTHIBPVRAHCZJWJAXZNSIMMFCPKCCKTAUQZBRELSPXDWFLNTUSBBTBQYJYNWYZGENSNISKXNEPUKYLWEOHDGWKVASGLLHSQICEQKJFGEFOKQVLYGMYYVKPVXIWTMDNZU");

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
    msg.setTimeStamp(0.6475431856591359);
    msg.setSource(2788U);
    msg.setSourceEntity(10U);
    msg.setDestination(13645U);
    msg.setDestinationEntity(123U);
    msg.timeout = 59738U;
    msg.lat = 0.6863282942242379;
    msg.lon = 0.0076348303200182155;
    msg.z = 0.20244758632789306;
    msg.z_units = 251U;
    msg.speed = 0.9399495132886866;
    msg.speed_units = 65U;
    msg.duration = 64758U;
    msg.radius = 0.436191253833239;
    msg.flags = 43U;
    msg.custom.assign("COFUCBCEHBAULZSWJHLYLESYSNGQICNABBDQTFFYCQXAPWVUFGNYZZKGGCRMZKQALOOLKYEPWMGSMIUKNQMQ");

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
    msg.setTimeStamp(0.47594912364343034);
    msg.setSource(54489U);
    msg.setSourceEntity(208U);
    msg.setDestination(57310U);
    msg.setDestinationEntity(2U);
    msg.custom.assign("MTVYRLUPGFAOXQICJHLKOIHDBAUQUGBNRJPCRGWIQDHYBVCEBCGXTEXITAJQYULVUMDENTTFZIXEPQPJBWGVMVHESDKYVVCYTSXBKLKVZPOWEMKIUAQNNPSXSVQDMIFGHSQGZLHKUNGPSMMCFTCYBHMSNGYIMLMDVIHLDGBXHJWXONJFOFKEISDWZDYRSRWWRCFYBJAZJLATRSDATUZEQFRXKWNOUYRKEXAT");

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
    msg.setTimeStamp(0.07304207441673016);
    msg.setSource(12197U);
    msg.setSourceEntity(154U);
    msg.setDestination(34491U);
    msg.setDestinationEntity(187U);
    msg.custom.assign("EYSDVQQNKWCMCPZSLUWJSIKNGALNJZPCVWSRLFMKFZXPOUUMTEBOQQQYFABGLIAJZDXKJAGPVYHPIULBASOYINTSTRDRHRHVMZUZICMQNRFJEMQEHBMAZESSXFKLSJGOBBDYLQQTWFHFNTDHFIHOKTWTRGBVTGINCVPKACPKNKXVWVDOXOXUQMKIYALEVERJJHCOZPCFVSEXUOBXBMRZHJOURLERDGXYGGM");

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
    msg.setTimeStamp(0.8077571463490729);
    msg.setSource(24838U);
    msg.setSourceEntity(73U);
    msg.setDestination(63611U);
    msg.setDestinationEntity(122U);
    msg.custom.assign("WAQRPJHUEENNITXADDVYHAVGOHJSNAQLBIYMCVGLWYNCSIPYOZOWMZB");

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
    msg.setTimeStamp(0.1308095680336948);
    msg.setSource(13695U);
    msg.setSourceEntity(35U);
    msg.setDestination(63184U);
    msg.setDestinationEntity(76U);
    msg.timeout = 4143U;
    msg.lat = 0.039255253618604824;
    msg.lon = 0.40120170936890565;
    msg.z = 0.0013845523301336815;
    msg.z_units = 165U;
    msg.duration = 24983U;
    msg.speed = 0.36732860807516965;
    msg.speed_units = 229U;
    msg.type = 33U;
    msg.radius = 0.5318301418332312;
    msg.length = 0.7191188265451727;
    msg.bearing = 0.7612955955688717;
    msg.direction = 166U;
    msg.custom.assign("SLQWBJWYHGZWJSDEGHKCYNEQXTBLITSBITPBSODYSZDRRVU");

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
    msg.setTimeStamp(0.11795160038776364);
    msg.setSource(41055U);
    msg.setSourceEntity(68U);
    msg.setDestination(5184U);
    msg.setDestinationEntity(128U);
    msg.timeout = 32812U;
    msg.lat = 0.18259677409438824;
    msg.lon = 0.27389948855143975;
    msg.z = 0.05512542717649205;
    msg.z_units = 134U;
    msg.duration = 45627U;
    msg.speed = 0.41565886769825267;
    msg.speed_units = 249U;
    msg.type = 109U;
    msg.radius = 0.03130194972735589;
    msg.length = 0.6184738503906069;
    msg.bearing = 0.31528363134450466;
    msg.direction = 116U;
    msg.custom.assign("XGWCGSWPRWZOXBMZRGCZFAHZLJLIOVSFQKMYLECUPGEAVUTVQDXFTQWNBHLPATJOIWSQKQGOYRVZJZLBQPBSHNJATEEXWVBBMFRUFHCNBISIZTZNPEYKQLAFO");

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
    msg.setTimeStamp(0.09348036839613305);
    msg.setSource(53684U);
    msg.setSourceEntity(197U);
    msg.setDestination(55513U);
    msg.setDestinationEntity(140U);
    msg.timeout = 17792U;
    msg.lat = 0.003968574813827619;
    msg.lon = 0.7590923401161075;
    msg.z = 0.8902599201221194;
    msg.z_units = 149U;
    msg.duration = 54140U;
    msg.speed = 0.44192533130235845;
    msg.speed_units = 249U;
    msg.type = 151U;
    msg.radius = 0.8305492312843805;
    msg.length = 0.36208259640824914;
    msg.bearing = 0.30068242398090617;
    msg.direction = 8U;
    msg.custom.assign("CUXCZSNNYJEVKVFNLLMGHQWKRDWNZBTAXZQUATNJCBFUYOZKASWPJEPR");

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
    msg.setTimeStamp(0.1652144090081772);
    msg.setSource(8704U);
    msg.setSourceEntity(39U);
    msg.setDestination(50385U);
    msg.setDestinationEntity(240U);
    msg.duration = 32299U;
    msg.custom.assign("JVRXXBYZWEQXXTZMAFSJISTYWKGBKLOENUINYSDGTXHDLCAVAYQIVOWFMMKTNNTUKROMYCHIIKIOFPEOFTWEXSBRNCKFYQDJUWUCTGNQDPBCVRFPPFLWNIEAWEHQDGRCALBJUVLEUXHPQHPGGAOBENRWFLMTEFPJCUMPPRDXIDJAGYTVMGJCVHXWJSMSVZEOLZ");

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
    msg.setTimeStamp(0.41644365494481006);
    msg.setSource(46190U);
    msg.setSourceEntity(99U);
    msg.setDestination(36980U);
    msg.setDestinationEntity(126U);
    msg.duration = 58620U;
    msg.custom.assign("COPHDPNDLLVOJTIZBMCSUPONCPFSJERZAXLFMZKDIKRNUEXDXVUCBYXHWLXZDVEGQIDVLZQYFOWGSCMXKKFBFMYGZBJYALAMAOKAELQRCBNJXZAKWTKUAYBVWYYGTICTBNGMOIVYDDTHAYRUTJELWXRBOAIRVCNFHRHJNPINJQFSHHTJWKPWBMGWKSYQZCOU");

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
    msg.setTimeStamp(0.6259476150407306);
    msg.setSource(55311U);
    msg.setSourceEntity(85U);
    msg.setDestination(22357U);
    msg.setDestinationEntity(74U);
    msg.duration = 42280U;
    msg.custom.assign("OTXMUOAAYOVMXGDNLATEJBDITQMMPXSRBRVRXVZVOTPWUXEMJUDRFFIDEKBNNHQOXYGVJZLEFIDPHXTJSBLC");

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
    msg.setTimeStamp(0.10537734225496109);
    msg.setSource(15294U);
    msg.setSourceEntity(187U);
    msg.setDestination(46262U);
    msg.setDestinationEntity(7U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1624496556U;
    tmp_msg_0.start_lat = 0.7781468356916393;
    tmp_msg_0.start_lon = 0.597308045573176;
    tmp_msg_0.start_z = 0.2867417449571418;
    tmp_msg_0.start_z_units = 136U;
    tmp_msg_0.end_lat = 0.2773042688384132;
    tmp_msg_0.end_lon = 0.3372706786518014;
    tmp_msg_0.end_z = 0.23612423719862619;
    tmp_msg_0.end_z_units = 41U;
    tmp_msg_0.speed = 0.04269348848099419;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.lradius = 0.7004264547773109;
    tmp_msg_0.flags = 129U;
    msg.control.set(tmp_msg_0);
    msg.duration = 49025U;
    msg.custom.assign("SVJBIMVMRZJHNQKULBAJOGYFWNORQWQAXROVAVEGGDNWTHNOZUWCZDYBAZNCRGGRVBWDPCHZLHLXUFRABNZBNKHSFLJJMVYODTPECWZAXJKLUXYTJTLCOADYIEQMYPUFTZNSSCYIVPFAAMXEFWOLDDJKCBRNLCOKPSEMXZMYFNOGVKOXPIRGRTZJQDSUTKPTYUPFIUHKXUKTWCMIGJBDGQVVIWCAHUWHLPIESQEMRY");

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
    msg.setTimeStamp(0.39594046037469843);
    msg.setSource(33526U);
    msg.setSourceEntity(130U);
    msg.setDestination(21678U);
    msg.setDestinationEntity(199U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.9394291206896341;
    msg.control.set(tmp_msg_0);
    msg.duration = 13326U;
    msg.custom.assign("ZMAVGVZFTMLXFNAIEGGISOLPYJKXNDPEZSKWMHDQIKYSJOQQSZOROHVWYZCIRFWXMVODVQBGUWBRIXETPMQUNYSOQRTPBUVHMERGOBGJEJOHFTDCHWPXKFQCKUPNUUBQYINFMAYATCJHZBOUWZBDSJARZXAIL");

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
    msg.setTimeStamp(0.3089388046853726);
    msg.setSource(55535U);
    msg.setSourceEntity(149U);
    msg.setDestination(23347U);
    msg.setDestinationEntity(15U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.9579021708505746;
    msg.control.set(tmp_msg_0);
    msg.duration = 43099U;
    msg.custom.assign("GKBVUAOGINDDRCNFQIVDTLDOBFWYLNXMNHQSNTNQACGYXTBLDFMOKSTWUPEKEZAIVFCTXXEVWNEZMCJFGEUNNDGVEUBJLBYRMSFZHTRPUXLJWMLYVCIGOGJKIJEKWTQHZJXYGXIACIWHCPWOCQDZYIXEDSHBVQRTVRRPZS");

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
    msg.setTimeStamp(0.373134333623687);
    msg.setSource(47065U);
    msg.setSourceEntity(85U);
    msg.setDestination(60771U);
    msg.setDestinationEntity(98U);
    msg.timeout = 50671U;
    msg.lat = 0.7155892891463073;
    msg.lon = 0.942540410860677;
    msg.z = 0.7851979330585853;
    msg.z_units = 131U;
    msg.speed = 0.9054216777662256;
    msg.speed_units = 189U;
    msg.bearing = 0.10202611807913464;
    msg.cross_angle = 0.8877516612363302;
    msg.width = 0.031065558347910027;
    msg.length = 0.01671255619540446;
    msg.hstep = 0.09039305942628784;
    msg.coff = 125U;
    msg.alternation = 171U;
    msg.flags = 182U;
    msg.custom.assign("CEHFEZXQDQQYPDCLIFYYZBMUNRXCJIOSGTSUKQSNMUNLHRVMGEAHXDWSKKFTZXJVKADNPEMRIBFNUNVFRCHZLLTABCBXDPTXJOETNO");

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
    msg.setTimeStamp(0.7658126579889453);
    msg.setSource(38509U);
    msg.setSourceEntity(186U);
    msg.setDestination(3216U);
    msg.setDestinationEntity(147U);
    msg.timeout = 9321U;
    msg.lat = 0.994040145411433;
    msg.lon = 0.0390143974368834;
    msg.z = 0.07474210759362387;
    msg.z_units = 175U;
    msg.speed = 0.1456770072447675;
    msg.speed_units = 179U;
    msg.bearing = 0.28866431213801946;
    msg.cross_angle = 0.03819030257880052;
    msg.width = 0.9496189005050776;
    msg.length = 0.23099612564681327;
    msg.hstep = 0.08571413152497287;
    msg.coff = 141U;
    msg.alternation = 157U;
    msg.flags = 100U;
    msg.custom.assign("UMQFFLEBQKXWGIMXKMWAUKBAPNONXTYEDTJURDNYCGJVOCNMOKSJYLXSOQTWPVIRJCWHNVECZCNINLNVWZWSCEUKDUMVZGUAKZR");

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
    msg.setTimeStamp(0.5574950814388313);
    msg.setSource(61138U);
    msg.setSourceEntity(223U);
    msg.setDestination(20374U);
    msg.setDestinationEntity(39U);
    msg.timeout = 49340U;
    msg.lat = 0.7457980233627763;
    msg.lon = 0.7206630049255285;
    msg.z = 0.3805171296873312;
    msg.z_units = 185U;
    msg.speed = 0.1311148032005015;
    msg.speed_units = 144U;
    msg.bearing = 0.720951126182148;
    msg.cross_angle = 0.7708947758210678;
    msg.width = 0.7256733823000661;
    msg.length = 0.7460642909832829;
    msg.hstep = 0.8676295559230953;
    msg.coff = 51U;
    msg.alternation = 163U;
    msg.flags = 253U;
    msg.custom.assign("GZEARSGLWRBDYZXBLEPNUMUKJOEMHZCZAFVELOCJMBPOCDKUGAKGJVYISSXMMMJJPCBAXMMNLAFPDZOTXFVQYGQLQHUJIJOCYXEPNDOQHCDVUEWSVGTGHXJRISIYSWYFRLWDHUWCQIAYDEYTNTRHPHIKHAZTIGHWTDNYUXQEAVFLQMRQVBKLDATKUTTSKKVEWMPFNTQBEXXRFZL");

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
    msg.setTimeStamp(0.9963577980071276);
    msg.setSource(54763U);
    msg.setSourceEntity(223U);
    msg.setDestination(19175U);
    msg.setDestinationEntity(23U);
    msg.timeout = 19666U;
    msg.lat = 0.9423454775062965;
    msg.lon = 0.4334954201060911;
    msg.z = 0.959230568961348;
    msg.z_units = 131U;
    msg.speed = 0.3170817582383103;
    msg.speed_units = 134U;
    msg.custom.assign("YRPJSYTVTA");

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
    msg.setTimeStamp(0.9244420463738542);
    msg.setSource(2749U);
    msg.setSourceEntity(97U);
    msg.setDestination(41337U);
    msg.setDestinationEntity(173U);
    msg.timeout = 5039U;
    msg.lat = 0.8144449620580739;
    msg.lon = 0.8617620585192594;
    msg.z = 0.11043202219022707;
    msg.z_units = 241U;
    msg.speed = 0.5581923238304548;
    msg.speed_units = 210U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.29609065624308184;
    tmp_msg_0.y = 0.918738672776517;
    tmp_msg_0.z = 0.07991780839916651;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HFIKHIYOOWDWXATRZPNVTYBLMYOAYKKJIHNWIGGNVIASCBZUFVXTJNOTFMVARJWWECTFYXLRYRCRXMYRLYDMHXSXZADHWHQBNEEVOQSFGSUKMXLUBCFT");

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
    msg.setTimeStamp(0.1332221207065406);
    msg.setSource(64840U);
    msg.setSourceEntity(68U);
    msg.setDestination(23400U);
    msg.setDestinationEntity(10U);
    msg.timeout = 44655U;
    msg.lat = 0.16260389896834837;
    msg.lon = 0.21248648983705531;
    msg.z = 0.17992692593658044;
    msg.z_units = 130U;
    msg.speed = 0.08401133918614234;
    msg.speed_units = 20U;
    msg.custom.assign("DASGWQUNQANQWLIXSKYGWDECBILVCXHYHQITZC");

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
    msg.setTimeStamp(0.09875187748267922);
    msg.setSource(27940U);
    msg.setSourceEntity(73U);
    msg.setDestination(33005U);
    msg.setDestinationEntity(214U);
    msg.x = 0.19626494173161924;
    msg.y = 0.7570606319520182;
    msg.z = 0.3098223564471788;

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
    msg.setTimeStamp(0.7149753344287191);
    msg.setSource(8184U);
    msg.setSourceEntity(159U);
    msg.setDestination(46471U);
    msg.setDestinationEntity(121U);
    msg.x = 0.623673609831529;
    msg.y = 0.32750573907331615;
    msg.z = 0.7580978062952453;

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
    msg.setTimeStamp(0.8291838344221271);
    msg.setSource(10614U);
    msg.setSourceEntity(210U);
    msg.setDestination(27007U);
    msg.setDestinationEntity(159U);
    msg.x = 0.8277318372946727;
    msg.y = 0.5806719111716616;
    msg.z = 0.4963868688579244;

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
    msg.setTimeStamp(0.18961160101543906);
    msg.setSource(20432U);
    msg.setSourceEntity(126U);
    msg.setDestination(61626U);
    msg.setDestinationEntity(159U);
    msg.timeout = 12133U;
    msg.lat = 0.6083753243621028;
    msg.lon = 0.8059302960801692;
    msg.z = 0.3959468465068273;
    msg.z_units = 90U;
    msg.amplitude = 0.9363363330486779;
    msg.pitch = 0.2959781757818307;
    msg.speed = 0.23116304913407093;
    msg.speed_units = 181U;
    msg.custom.assign("UVSUHTHFDGLYRWNMNFCXNDPXRWZALVCJKJABTERVSQDORMCTVGAAZKVNA");

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
    msg.setTimeStamp(0.8836659558500606);
    msg.setSource(62724U);
    msg.setSourceEntity(137U);
    msg.setDestination(36048U);
    msg.setDestinationEntity(237U);
    msg.timeout = 64075U;
    msg.lat = 0.10521265023689952;
    msg.lon = 0.9749446697532584;
    msg.z = 0.0014043894579582883;
    msg.z_units = 94U;
    msg.amplitude = 0.49638130946393844;
    msg.pitch = 0.8846021285694403;
    msg.speed = 0.6451928375905139;
    msg.speed_units = 111U;
    msg.custom.assign("TDFDGGSZIGIAFSHYRVCQFOLOCXOKKKXHVOGUDLHWKQWMYRFLXJNTCUTOHPEOPXSHAVAJCYRGSSCPLCQAYFWQLEXJIMIVUZAINJBPMMZEGNNPSEFDCUCWGFSIBYZBWJLMPQEONSZABTDMODTYEIJMJFWQTHCDHCEGGUBLAGHDUOKPBPYZAMVFHMZVV");

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
    msg.setTimeStamp(0.18484224685664385);
    msg.setSource(54521U);
    msg.setSourceEntity(145U);
    msg.setDestination(32791U);
    msg.setDestinationEntity(36U);
    msg.timeout = 40120U;
    msg.lat = 0.7380186031411822;
    msg.lon = 0.26242907037005814;
    msg.z = 0.2926663938518137;
    msg.z_units = 215U;
    msg.amplitude = 0.050422666150812034;
    msg.pitch = 0.5232479659658308;
    msg.speed = 0.5572673582268833;
    msg.speed_units = 236U;
    msg.custom.assign("CBOUIPFQFYVAGYPMZABHDHTTSQRABZLHNYBJHGMCYMYFIQ");

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
    msg.setTimeStamp(0.679582530459188);
    msg.setSource(50008U);
    msg.setSourceEntity(6U);
    msg.setDestination(49266U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.6266908490094742);
    msg.setSource(4987U);
    msg.setSourceEntity(122U);
    msg.setDestination(30435U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.20157890134939727);
    msg.setSource(41335U);
    msg.setSourceEntity(246U);
    msg.setDestination(46170U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.6207957940442872);
    msg.setSource(32002U);
    msg.setSourceEntity(103U);
    msg.setDestination(48720U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.369746012639691;
    msg.lon = 0.4734920304742126;
    msg.z = 0.9375759227939378;
    msg.z_units = 124U;
    msg.radius = 0.5994246074466217;
    msg.duration = 26613U;
    msg.speed = 0.35836900017439655;
    msg.speed_units = 194U;
    msg.custom.assign("UENCLULSWZRPFFALGXHGQBKBFWSDSKOBBCAIDRJQKQNOKOLUEBKFCILKIYTNPYRVXBXCLYBYMEZQJRTEVESMPCBCTNKQQQIRTWMHLRTJHICGVGVAEVYJEVGBTZILTDAJJDWGFWMPFMMHVZUSVSESXAHNYNDMYHFWAZDAVCP");

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
    msg.setTimeStamp(0.7929887628029786);
    msg.setSource(54752U);
    msg.setSourceEntity(229U);
    msg.setDestination(2730U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.2213988872243321;
    msg.lon = 0.008594779637735916;
    msg.z = 0.8754386332880165;
    msg.z_units = 247U;
    msg.radius = 0.013789665544100882;
    msg.duration = 23838U;
    msg.speed = 0.1582104226232166;
    msg.speed_units = 85U;
    msg.custom.assign("WNVIXGZUTR");

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
    msg.setTimeStamp(0.6782384037955789);
    msg.setSource(64908U);
    msg.setSourceEntity(31U);
    msg.setDestination(27491U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.7082693124046738;
    msg.lon = 0.11109425197837974;
    msg.z = 0.36721333453972516;
    msg.z_units = 167U;
    msg.radius = 0.5136137076274613;
    msg.duration = 5863U;
    msg.speed = 0.6482863035142228;
    msg.speed_units = 245U;
    msg.custom.assign("YKBZLSGGHVLYCNGWCFMSYUJIUOABLAWIPHPICUZMIBCHXIQSMDORAPKRBFJQTFSHAVDAXNTPFDKHIINKOTDSBNQWFMXZPJTQVKYGECVZHMMSCJNFNJJUAGKEWTOADKQLXTSXZOGZCERVBENLWAIRBUNFGTWUHAUSEXRVGFOOLDPMWXBTQKLQEUPD");

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
    msg.setTimeStamp(0.2556463868400213);
    msg.setSource(8582U);
    msg.setSourceEntity(15U);
    msg.setDestination(42118U);
    msg.setDestinationEntity(149U);
    msg.timeout = 45618U;
    msg.flags = 109U;
    msg.lat = 0.228066017080646;
    msg.lon = 0.9051893914607316;
    msg.start_z = 0.6293514332774489;
    msg.start_z_units = 123U;
    msg.end_z = 0.44315740295357786;
    msg.end_z_units = 10U;
    msg.radius = 0.4977073087305546;
    msg.speed = 0.18302199760122728;
    msg.speed_units = 25U;
    msg.custom.assign("HDRWGCSIERCRDXJEOQFWDMLKUZTSUAZICNKXBTJCCZSRENHVMEKGAGFVVNECHBYWW");

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
    msg.setTimeStamp(0.5584556428900578);
    msg.setSource(22704U);
    msg.setSourceEntity(78U);
    msg.setDestination(27804U);
    msg.setDestinationEntity(155U);
    msg.timeout = 870U;
    msg.flags = 81U;
    msg.lat = 0.4598696138617576;
    msg.lon = 0.37308107086372155;
    msg.start_z = 0.8320225364928787;
    msg.start_z_units = 1U;
    msg.end_z = 0.8436364120741152;
    msg.end_z_units = 138U;
    msg.radius = 0.8479156371528891;
    msg.speed = 0.8144690399107101;
    msg.speed_units = 135U;
    msg.custom.assign("AZSPIOQVCJURYTEIKKZPZUBTIVNUJQHGGKZYWWJARWWOVQETNVQDYSETFAQOPNQMYGEMHRXKMODYZUASJTEROWSXNJJLBCUKQNIVSQECJIQRGOGOENL");

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
    msg.setTimeStamp(0.2726947489371673);
    msg.setSource(42248U);
    msg.setSourceEntity(228U);
    msg.setDestination(40641U);
    msg.setDestinationEntity(220U);
    msg.timeout = 24657U;
    msg.flags = 154U;
    msg.lat = 0.5163570876037098;
    msg.lon = 0.007500278313799291;
    msg.start_z = 0.8401155181925436;
    msg.start_z_units = 139U;
    msg.end_z = 0.5314890841115937;
    msg.end_z_units = 254U;
    msg.radius = 0.676305195652336;
    msg.speed = 0.3054997181001986;
    msg.speed_units = 108U;
    msg.custom.assign("GMVCCJZGVDMJXBVUNTQLMUSSDDQFHDVFYRBXOFOAYVZYWBCBSYWCAQUHORKHGOEBFFFWXGZLDPPZRTHOUSJMQZMHKJTITCBLAPJHQIKRPNRPCWXOEINKQXJDWDIAUBAUTIYMZLGICFGVNNZSBSIXYLEVCODVBNETFYUVEVAOJEXPTQPUADDZPPKMNQIZCRW");

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
    msg.setTimeStamp(0.3981636983212201);
    msg.setSource(48430U);
    msg.setSourceEntity(97U);
    msg.setDestination(56505U);
    msg.setDestinationEntity(210U);
    msg.timeout = 60348U;
    msg.lat = 0.9646848291819721;
    msg.lon = 0.67694178264021;
    msg.z = 0.8426768856766458;
    msg.z_units = 120U;
    msg.speed = 0.9018602038327242;
    msg.speed_units = 62U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8445222516759447;
    tmp_msg_0.y = 0.46639678919746586;
    tmp_msg_0.z = 0.31562737369392535;
    tmp_msg_0.t = 0.5269072572360227;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WHRXHJKQZICRPBZBYJYTHTNRODFVFKEVUUNQFUMAVREFZCDOSTTLGKVDNJRGILALJDMXQBCEMKJEPGHXXZXCAIXBSFIVMQZNNMFXCTSOEHAOLSUPKEQSAUHPIUGVNSADBUWIKLYWCQFGBFABRWIKZRPYHCTWLSTNGYBUSZSAOBTOCYANVFCJOZEGWKUO");

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
    msg.setTimeStamp(0.4942083339903047);
    msg.setSource(21620U);
    msg.setSourceEntity(185U);
    msg.setDestination(35852U);
    msg.setDestinationEntity(35U);
    msg.timeout = 8426U;
    msg.lat = 0.5704397769320391;
    msg.lon = 0.860383466003253;
    msg.z = 0.5692592858170368;
    msg.z_units = 166U;
    msg.speed = 0.9994302294677335;
    msg.speed_units = 87U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0974269811127545;
    tmp_msg_0.y = 0.06488345221110514;
    tmp_msg_0.z = 0.71768721610948;
    tmp_msg_0.t = 0.6071556139917147;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PDXFNUWAKBEHZMQMNJVBMTLPZJKCCDOFJYIMXMBHEEEHZYPTSXTALLCHQKZQSOLIRZYLGLPVFXASBMNHBUATXUP");

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
    msg.setTimeStamp(0.9407147049832442);
    msg.setSource(7145U);
    msg.setSourceEntity(115U);
    msg.setDestination(28870U);
    msg.setDestinationEntity(232U);
    msg.timeout = 26092U;
    msg.lat = 0.2879471647553049;
    msg.lon = 0.10283371079353021;
    msg.z = 0.1382222063761741;
    msg.z_units = 200U;
    msg.speed = 0.2692092080105266;
    msg.speed_units = 109U;
    msg.custom.assign("OWFJRWGUCIDBLKZIUYKKYMSWTITVCRHGFZINIABXBZJFPUCULHPAYGLKAUVMECLNXUWXWWRZXTOKEIODOPFACHPNPYMOGOBVSUFXNKMXQOBLCVQIESTMPLNQPXYHQTQJANUASZODMDRFVEHMQAZHOIVGBMEABXFZJEEJQSXTBYXDYSENCFGZTJTQHULPYRNVHVVCSENQYGODPKGM");

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
    msg.setTimeStamp(0.8763765122250766);
    msg.setSource(36593U);
    msg.setSourceEntity(227U);
    msg.setDestination(52637U);
    msg.setDestinationEntity(173U);
    msg.x = 0.47581620677069025;
    msg.y = 0.2521959349058067;
    msg.z = 0.47302983538319066;
    msg.t = 0.4794473450896314;

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
    msg.setTimeStamp(0.3540345637587492);
    msg.setSource(37361U);
    msg.setSourceEntity(234U);
    msg.setDestination(36744U);
    msg.setDestinationEntity(237U);
    msg.x = 0.8854420507525423;
    msg.y = 0.5543192610357568;
    msg.z = 0.7073731009632463;
    msg.t = 0.14571967792138474;

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
    msg.setTimeStamp(0.3289597541907697);
    msg.setSource(44368U);
    msg.setSourceEntity(194U);
    msg.setDestination(45562U);
    msg.setDestinationEntity(170U);
    msg.x = 0.805114908835675;
    msg.y = 0.5115231848257946;
    msg.z = 0.9577185118095112;
    msg.t = 0.6519544378244198;

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
    msg.setTimeStamp(0.11047906822252096);
    msg.setSource(65484U);
    msg.setSourceEntity(143U);
    msg.setDestination(61201U);
    msg.setDestinationEntity(19U);
    msg.timeout = 25245U;
    msg.name.assign("XTBRDHRFVHJPKKPWCMPIHNMDRGQGLWTZUKEZKNYCJTYOEWMUPYEAIYRPGKEIHFCGMYDJQHLJAFTOBAEFLDFBOZYZDGUTNKMQSUIAJRUSBEBJNMDYCDIIOVYDUXWPIYJWKEKQSQHLPLOFILZSRXSIGOCMPQZRALBGETJMWOVMUNRSPXTZOJUVXXSHPSLDZVVVIAZKBJVGXSFCQOAYBRCAOELHBT");
    msg.custom.assign("ETMOZUUPOOUSGJEUQQYWMSJYBGETGDVGCBHWXNCCELQRAIDAUAWCWANLPKFMGZHPSODQAMDJQXBPFIFOSXFCKDESJSJYVKKITYHUDBNYJJRXHDXTEOZAFZRDHZFEMBNCXLLHARLNULEBFMAPDBRORCHQVNQFVBOWTVHLXMGATIGHFRTIGVJKACGNKKSCJLUPZWBECBZWKIXRSLVVRXYWUIETNQIIZSPLKPVQYNWRWYOYMTT");

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
    msg.setTimeStamp(0.285163035126604);
    msg.setSource(14871U);
    msg.setSourceEntity(48U);
    msg.setDestination(65323U);
    msg.setDestinationEntity(157U);
    msg.timeout = 63380U;
    msg.name.assign("EZYIBHCXTJWIVHVQOWEPYZSKSYWXZTCWDHEAHEBSDGTNFZBYXUOZJJNCOJOKWTDCPJHALDMHLGIBPTDULLFKBSFRMGTWVJVBMUISVAPDPDRRBASXGQONTLIEYLCH");
    msg.custom.assign("YJTJMMPACGSGBMJTZGLGZQAHWQHHTLJKUDKWAKUAIRVRQFMLNEHTFWSRMSITHOURXDNXPGIEVBPOTMIMIUSLQNLYRYKOUXDSVFVLNOZPFBJRYOXATACKGXOECQCNUPZAWBDDWDSDOIENQPSBXFFSOQQSAKXY");

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
    msg.setTimeStamp(0.6047871959070845);
    msg.setSource(42481U);
    msg.setSourceEntity(72U);
    msg.setDestination(35659U);
    msg.setDestinationEntity(135U);
    msg.timeout = 16556U;
    msg.name.assign("BXAWFWHDFDNFEVWRJWBABYXVSVTKMUQOSXGHRVNXBXCJXCTUZSVUUVWLKGKZBQYDKOJSVJLKMZKJOVQKRKYYSNDJALPXIIGORZEEA");
    msg.custom.assign("AVZQZHEXPDVLPXVBQCNVYCIUDYVSLOPZMQJTHYQKWYHCLTABTPVBKRCFFBKEOIRMWNPJBBYOPUWGUSXNYJMWHQNPSMDALCGSNNYDHVQADAEZONJCJRQLUMLBKKYIORSRCGDWREXJIUUSREEMFZFLDZXCVIOBDFVYRKGTTLQPAEZEKKUHHGTIMNUSEFKPBOXGXKWTJRMOTAJAZFZBUXGTSXEZMWWSAAWDLGTOIMYFWNDCLXQUGJIHFSIQHHNV");

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
    msg.setTimeStamp(0.718183303114121);
    msg.setSource(7667U);
    msg.setSourceEntity(140U);
    msg.setDestination(63528U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.7315863910497385;
    msg.lon = 0.2840138706657014;
    msg.z = 0.6223831135912026;
    msg.z_units = 54U;
    msg.speed = 0.9704716073988019;
    msg.speed_units = 16U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8784696483869615;
    tmp_msg_0.y = 0.460492622403445;
    tmp_msg_0.z = 0.8000950246920672;
    tmp_msg_0.t = 0.9751743824116551;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.4587134657258686;
    msg.custom.assign("JXUMBCNYOSLSMGYQXGMNLDJBPWNOHKMSGQQRKURBQWCJDGWHJZZCPIQPWZAPXFFATFNBFYPWQNABHOULKTGFHJUEZCSMZPHRFVNYHIXZKWOYVABJPWGEOATQXQIRV");

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
    msg.setTimeStamp(0.30278111104132044);
    msg.setSource(57496U);
    msg.setSourceEntity(174U);
    msg.setDestination(59923U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.5309786447614904;
    msg.lon = 0.8698951328487792;
    msg.z = 0.21595622118617996;
    msg.z_units = 40U;
    msg.speed = 0.639491313705387;
    msg.speed_units = 144U;
    msg.start_time = 0.4817140250695464;
    msg.custom.assign("JGIOCSUQDSBXUYROFHGQZGDRMLUDNWTKFZYZAUZBXKOWWFAPVEEQLLMDVBVCDOFTTVIXUSSKANNEJDYLKCWDAQFYZUYVTCQTYSMVHERPSAPTBYNAGZMQPECABBRMWMRSKCZCKJHFAXEINQGJFICVEPGQKQPWOLBHVUIIMBZKTPSKGLOWJHRNHFYBVWHXDXRCMAFHZLCNUGPRF");

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
    msg.setTimeStamp(0.6794399468547524);
    msg.setSource(43271U);
    msg.setSourceEntity(96U);
    msg.setDestination(17739U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.30263282957188276;
    msg.lon = 0.4932898972610199;
    msg.z = 0.934496164995654;
    msg.z_units = 144U;
    msg.speed = 0.22063217070540175;
    msg.speed_units = 4U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.40764482237634214;
    tmp_msg_0.y = 0.9594312610000698;
    tmp_msg_0.z = 0.38162139195099076;
    tmp_msg_0.t = 0.03478739337357406;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.46333602799388973;
    msg.custom.assign("ZLHOFTSUGKELJWQJATATMCCJQVIXBEEEFVCJADOWACBNYUKQKLFAQQUKLTHMOZUNGKQOGBWZHNMUBRPNXTIPICWZNOSVTPJYZWDXABRUHRLDDWGBBSXEFGBRLMRQQVXXGMUZKKAZCIAYVICBLSSXVNLWFXYOCZEWLFJWSMTSQPKWXEEIODIFPPBNPHTXUFLYMGHHYMVNTUSHRJJHISROADGRVUIRKD");

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
    msg.setTimeStamp(0.8088922992097837);
    msg.setSource(12631U);
    msg.setSourceEntity(185U);
    msg.setDestination(58133U);
    msg.setDestinationEntity(19U);
    msg.vid = 46298U;
    msg.off_x = 0.8545552747430349;
    msg.off_y = 0.6318058785279076;
    msg.off_z = 0.9357871217692039;

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
    msg.setTimeStamp(0.8881134130765999);
    msg.setSource(38988U);
    msg.setSourceEntity(109U);
    msg.setDestination(34793U);
    msg.setDestinationEntity(30U);
    msg.vid = 33019U;
    msg.off_x = 0.4324106958420558;
    msg.off_y = 0.24631242875149628;
    msg.off_z = 0.5844874028866807;

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
    msg.setTimeStamp(0.26022935914428147);
    msg.setSource(21866U);
    msg.setSourceEntity(40U);
    msg.setDestination(40577U);
    msg.setDestinationEntity(80U);
    msg.vid = 49941U;
    msg.off_x = 0.9711647327290083;
    msg.off_y = 0.5210003458269298;
    msg.off_z = 0.37450827972236855;

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
    msg.setTimeStamp(0.5199875437724502);
    msg.setSource(30555U);
    msg.setSourceEntity(130U);
    msg.setDestination(26961U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.4023815140009144);
    msg.setSource(34788U);
    msg.setSourceEntity(163U);
    msg.setDestination(55566U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.4486344598604355);
    msg.setSource(4697U);
    msg.setSourceEntity(118U);
    msg.setDestination(7427U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.6225798400564169);
    msg.setSource(35860U);
    msg.setSourceEntity(190U);
    msg.setDestination(59141U);
    msg.setDestinationEntity(244U);
    msg.mid = 47690U;

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
    msg.setTimeStamp(0.7190780951838028);
    msg.setSource(9137U);
    msg.setSourceEntity(112U);
    msg.setDestination(36912U);
    msg.setDestinationEntity(211U);
    msg.mid = 52605U;

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
    msg.setTimeStamp(0.5965915355571104);
    msg.setSource(6263U);
    msg.setSourceEntity(49U);
    msg.setDestination(48856U);
    msg.setDestinationEntity(116U);
    msg.mid = 46349U;

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
    msg.setTimeStamp(0.16031592564368524);
    msg.setSource(6245U);
    msg.setSourceEntity(120U);
    msg.setDestination(38607U);
    msg.setDestinationEntity(113U);
    msg.state = 24U;
    msg.eta = 53415U;
    msg.info.assign("SWECWKJBINUFVSVWBOBDUYSYWFPVPYDZSFMUCRKUYQEBNZIMHNGSOJCVJTMNFVWNZQYZBIQZGGADUQNABLJ");

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
    msg.setTimeStamp(0.8492351504367533);
    msg.setSource(64718U);
    msg.setSourceEntity(18U);
    msg.setDestination(6654U);
    msg.setDestinationEntity(46U);
    msg.state = 94U;
    msg.eta = 22591U;
    msg.info.assign("KIXCIURRREQQUBNTWPYFYLONVSAQUBJKA");

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
    msg.setTimeStamp(0.4972313567604332);
    msg.setSource(1669U);
    msg.setSourceEntity(187U);
    msg.setDestination(24979U);
    msg.setDestinationEntity(203U);
    msg.state = 4U;
    msg.eta = 40467U;
    msg.info.assign("FNDMEIOQQESIKJIJHENQRICPGWAQMETLVNAZXHEBKMVPWTDNUXFAXGNEVBWXOMZDQBAXYYGUFRYTNWCUYCSVUVWGLAGBQSEKVLFTWSOBHFPIJKGHPYGOOXXUZWQCNZJZMDYGIQSLGXJJUZNRKHVYAOYYLPRHJPLPOHDSEBTTKHUAFBSOTKNDQRKWCMITO");

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
    msg.setTimeStamp(0.12198649321112442);
    msg.setSource(62097U);
    msg.setSourceEntity(60U);
    msg.setDestination(3361U);
    msg.setDestinationEntity(250U);
    msg.system = 31927U;
    msg.duration = 46341U;
    msg.speed = 0.4823422883614066;
    msg.speed_units = 58U;
    msg.x = 0.373275331061767;
    msg.y = 0.917186183868127;
    msg.z = 0.5694041696711507;
    msg.z_units = 158U;

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
    msg.setTimeStamp(0.29331290293438883);
    msg.setSource(30726U);
    msg.setSourceEntity(179U);
    msg.setDestination(56546U);
    msg.setDestinationEntity(161U);
    msg.system = 22398U;
    msg.duration = 47149U;
    msg.speed = 0.18112882304715172;
    msg.speed_units = 169U;
    msg.x = 0.9816222645035709;
    msg.y = 0.1259361226756287;
    msg.z = 0.8886333308994595;
    msg.z_units = 243U;

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
    msg.setTimeStamp(0.3396156305447916);
    msg.setSource(27993U);
    msg.setSourceEntity(156U);
    msg.setDestination(1558U);
    msg.setDestinationEntity(96U);
    msg.system = 38211U;
    msg.duration = 53579U;
    msg.speed = 0.7622433861322533;
    msg.speed_units = 174U;
    msg.x = 0.1208864842898767;
    msg.y = 0.40968504901215363;
    msg.z = 0.337946436548875;
    msg.z_units = 165U;

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
    msg.setTimeStamp(0.6713108199510711);
    msg.setSource(43450U);
    msg.setSourceEntity(196U);
    msg.setDestination(64485U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.4549294826367788;
    msg.lon = 0.2366639171092405;
    msg.speed = 0.8619180511976199;
    msg.speed_units = 116U;
    msg.duration = 60792U;
    msg.sys_a = 44493U;
    msg.sys_b = 39412U;
    msg.move_threshold = 0.22537738582790723;

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
    msg.setTimeStamp(0.6437180226535748);
    msg.setSource(59009U);
    msg.setSourceEntity(70U);
    msg.setDestination(49347U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.6204072524723724;
    msg.lon = 0.7459160632222637;
    msg.speed = 0.6037687977719943;
    msg.speed_units = 175U;
    msg.duration = 13935U;
    msg.sys_a = 34934U;
    msg.sys_b = 17256U;
    msg.move_threshold = 0.32334109159929914;

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
    msg.setTimeStamp(0.0023245606039805633);
    msg.setSource(18332U);
    msg.setSourceEntity(110U);
    msg.setDestination(55662U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.3003510659804379;
    msg.lon = 0.9061799385772598;
    msg.speed = 0.9742679924149461;
    msg.speed_units = 205U;
    msg.duration = 51648U;
    msg.sys_a = 15978U;
    msg.sys_b = 41999U;
    msg.move_threshold = 0.5252737966668823;

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
    msg.setTimeStamp(0.8091689980294693);
    msg.setSource(33011U);
    msg.setSourceEntity(135U);
    msg.setDestination(56175U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.48554305479675275;
    msg.lon = 0.0908561924661554;
    msg.z = 0.5152156399869047;
    msg.z_units = 121U;
    msg.speed = 0.7924845734653104;
    msg.speed_units = 173U;
    msg.custom.assign("FGVZLHIHBQUMAAJGGRJLOKAYZOMGRSPHEPPPWSIDIXDABQTXTETEYGAMCPWGVQNVMNLEGFNRMSLKYUBYNFYMOBTUZLUNM");

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
    msg.setTimeStamp(0.7069960838944196);
    msg.setSource(2048U);
    msg.setSourceEntity(13U);
    msg.setDestination(17682U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.5099300889318973;
    msg.lon = 0.97188520153399;
    msg.z = 0.2946662477396069;
    msg.z_units = 153U;
    msg.speed = 0.6936453216024111;
    msg.speed_units = 134U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9445933175166888;
    tmp_msg_0.lon = 0.36446141050903236;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WVVMXXVBPIZAWUTMFAQUOKLGLMAPBUEIDDRMLKSBUDKLXBSJQFCNHJJRVBDZPTWXOFETYJARLFHJGSAEZKTNSSZVYNCCNQHOMFLRJAGRXHZMWOWKGORKIUTILNIJUWZYUDKIAWGNKWEOJUZHQSCPFDHHNTUQQWSXLZOCCRQDWKJFOMTNYBVLZRAYPIFSXVMEHSBBIMYASPCKQBCVMTTTJEFGYXADRFCGXZCHPPOPEOYEYEQUIDGQVHLYNDGIBG");

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
    msg.setTimeStamp(0.610507484685912);
    msg.setSource(64302U);
    msg.setSourceEntity(155U);
    msg.setDestination(64921U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.18798385463539424;
    msg.lon = 0.029806152221715565;
    msg.z = 0.3625237609070311;
    msg.z_units = 183U;
    msg.speed = 0.8138518310016234;
    msg.speed_units = 126U;
    msg.custom.assign("DPKOWLSNBUJFYFVZYUMHJWPGXRDEBETFOVVWVCBEHNHHBISYNFZZLDGEZBOQSMDPXNGJTCAOUXWSGLNTYXTMSAIHCMUZXITXEOMKLTSZLZQNJRDBKLXUAUAJQOYHCZNCKDQFGCRPJMEAVYQYEPZRAJOMGWVDHYXJCHRUOSQOKMMLFJLZSSPDOIFXNGKGAFRQJPQNQALYTEVQHYPTIDBHRCIAKVCBKGUURWWVCBWNIXUWTIVIPFWED");

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
    msg.setTimeStamp(0.8500307859345332);
    msg.setSource(27983U);
    msg.setSourceEntity(142U);
    msg.setDestination(61417U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.4486569953324292;
    msg.lon = 0.9429520476496558;

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
    msg.setTimeStamp(0.643676084332659);
    msg.setSource(41944U);
    msg.setSourceEntity(121U);
    msg.setDestination(12438U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.847724901746922;
    msg.lon = 0.42321410156397865;

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
    msg.setTimeStamp(0.2303650046521687);
    msg.setSource(7948U);
    msg.setSourceEntity(136U);
    msg.setDestination(58615U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.9334475407415417;
    msg.lon = 0.15070653879475715;

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
    msg.setTimeStamp(0.4377853679724746);
    msg.setSource(7038U);
    msg.setSourceEntity(139U);
    msg.setDestination(43796U);
    msg.setDestinationEntity(56U);
    msg.timeout = 29584U;
    msg.lat = 0.8728876064821507;
    msg.lon = 0.39505024931683796;
    msg.z = 0.6592034869056311;
    msg.z_units = 8U;
    msg.pitch = 0.42563351467120514;
    msg.amplitude = 0.08012806037535636;
    msg.duration = 43691U;
    msg.speed = 0.23677233621419258;
    msg.speed_units = 35U;
    msg.radius = 0.826465588136741;
    msg.direction = 92U;
    msg.custom.assign("DMWNBNQWFHMBFCWACNIVHKDUVUHUDICVRQBLFWIWJPWISBZCQVTJFWDVNUYDBBUQYHOGPLHPMARXSINGPPTXRKKRKHSJELAYXCYLYAPRQKAMRIGZGIOFWCPRRSZTMEWFTOOUUNZMHL");

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
    msg.setTimeStamp(0.5611744274969167);
    msg.setSource(10158U);
    msg.setSourceEntity(111U);
    msg.setDestination(43783U);
    msg.setDestinationEntity(44U);
    msg.timeout = 55531U;
    msg.lat = 0.5262158842384562;
    msg.lon = 0.9870071079486946;
    msg.z = 0.6585807280461988;
    msg.z_units = 141U;
    msg.pitch = 0.46400433709091027;
    msg.amplitude = 0.1297489165028487;
    msg.duration = 7039U;
    msg.speed = 0.7676434193136512;
    msg.speed_units = 93U;
    msg.radius = 0.8735232392004885;
    msg.direction = 5U;
    msg.custom.assign("HXBINXHQQUUQPFSVOKORPYLWAMFVUXHBNJPKQJUGXZSLIAVDYHADCMLKHFXQWEKRLSTPUMPXWPRUOAEJISFAIQYDPIGZIDVAFGRMJQAXFDGCOBGTXRDMFLKDTOLEWYJVPYRJNMSCXVZBNBGVSIKTLTZJHNVWVJEDWMCYZSELEKOLIQOWNEHOYTPSYQCFBYEGJ");

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
    msg.setTimeStamp(0.3751809702266362);
    msg.setSource(51780U);
    msg.setSourceEntity(168U);
    msg.setDestination(62070U);
    msg.setDestinationEntity(198U);
    msg.timeout = 5019U;
    msg.lat = 0.8077570322627172;
    msg.lon = 0.3344375653911068;
    msg.z = 0.33846741489250787;
    msg.z_units = 192U;
    msg.pitch = 0.3624622899577804;
    msg.amplitude = 0.3324534627538013;
    msg.duration = 10442U;
    msg.speed = 0.5553168072685243;
    msg.speed_units = 120U;
    msg.radius = 0.19827197863031276;
    msg.direction = 144U;
    msg.custom.assign("IVAWJEIAGDLXTGGXCAXFCLNQEKBQTQDJKWZVUTLYRJMKLNOJYOPNNCLBZBOZESLJVPDKMIQMAAJBOUSKJQIZUZEOIEOVKCCNGSPEYNXCGCUCTZNRKONXRFHMQZLURHYHLPUIPDXIUZGYTAUPHIDGBHADGHRSEOHERWAVFXV");

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
    msg.setTimeStamp(0.9202350448149808);
    msg.setSource(4112U);
    msg.setSourceEntity(154U);
    msg.setDestination(8502U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("AQMXKWPWFPLCBXTZYORGULGKDCCWDAAYLSLIULYHGJAWSHUPRFMDUEQBZMQRWIXNRNRHZJDUPHRGCRKMBEOOGTITQRRPQTDAIEXXZXGQUVZNJCISGFOZSHIVDVQLBEQSVTOLLHWLSXESIMFTOWKJHJKTOSFUVVCKGJNPKXMAKJZNPNFAMUIIZVFKBJUYBWCNWEUNVJLYQCOYABDTTGAHTVARDCDPENSKXIVSWFMZPMBNDGCEFHPXYOQFZH");
    msg.reference_frame = 98U;
    msg.custom.assign("OIUMQLUANPSCKRFNSPGXHVFMHKYZZCPTTSUPVFMMKCOBNOVYQUZGYQSGOPAWOJEEAZBBAIJKRVXWYQFRFQVXGZOXVFPQHVERXYKGNXTSIUDBIQYJVHSLXOTDJU");

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
    msg.setTimeStamp(0.9529928109096314);
    msg.setSource(13345U);
    msg.setSourceEntity(92U);
    msg.setDestination(15618U);
    msg.setDestinationEntity(222U);
    msg.formation_name.assign("DHBHECYLUBYXSVZDJMKTWTCREIIHHIAEXPNCEOKKBMAGDKXGQXSUPZXCOGLQPAKWNRTDKOWRYMVKQWYOLUIIGFHZJTZMCOFCSKTFRQBZWUOCURVNPSRPRNASIIIBHFZQQMUNWMZBMTSTFNAQZTULMSZXYEUFYJYWPJONYKXPDOVMESGEJOAQAVHDKDVYVBAGDWJPLPPDCLIF");
    msg.reference_frame = 104U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11554U;
    tmp_msg_0.off_x = 0.6329482435481045;
    tmp_msg_0.off_y = 0.10359058487794226;
    tmp_msg_0.off_z = 0.7573022666065894;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DLCAVYIZUPOLOZJQZVJCYUMJVNOBKOUUFEPKKZDXLQIIBNQHVXPKPIZMQTVRORRHJGUOPODJEPGBTWNFCNBAFRYVRFMJNKQRJOJKHLXSLAMMGTHDXIZXWXFAIUNYGXTHTGZWIZPXTUNNFWELLLCSE");

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
    msg.setTimeStamp(0.2369644889664193);
    msg.setSource(55311U);
    msg.setSourceEntity(34U);
    msg.setDestination(9262U);
    msg.setDestinationEntity(196U);
    msg.formation_name.assign("NDFYBDDUVODTKACUXAVXNHFHKTJ");
    msg.reference_frame = 230U;
    msg.custom.assign("RWQJNWFURYOFXGMITAAGGFFHWANHRBSJUKPVCOCCGKSNEUDMLBZVPBZDRYVCJOELLBBDWTUEIPXKEBQJWUOIQJYXDZAPCDUOSOONZPTSWLWMKSGSIKACTQTOSMHAXOYXRYRLYPLETMJPRQMZJIASYGMDQILIXWGHVAPKRUCNVONCSJVFTGEZXGKWXEYIQQRZQYJFLVUXNFAFUMTHYVXNHDIVMBLFDBETKHKINBBUNQHKL");

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
    msg.setTimeStamp(0.06778078115707042);
    msg.setSource(20127U);
    msg.setSourceEntity(190U);
    msg.setDestination(47746U);
    msg.setDestinationEntity(196U);
    msg.group_name.assign("FXGSIREOTPLQTOGCRLKMSQBQFWUXYJQCKUKPWEDWRVIDVFYGFKQNMQRAEZIDBXHRFTVZNJZFBSEALYMUWXUSPOSCPZPSEGWNWIOATAFDHLJEAUUEXCUBPMCWKHIZMIAZNPIYWVLTSZYSWYGNJLQIZCOLRGVJBQJNVOCXADJOGBRGBFAF");
    msg.formation_name.assign("FJNFPUYYGXZEWIRRKHQUBCAQLXNYMPHTGUNXHEUOEZFGIDRFOBMVXKQFHJNESHWVIXLA");
    msg.plan_id.assign("ALTGGWHYKAKREQLPXSHHWCFRRVLCJEDJUSNXBCYMTOGLEJDDFDNYZDNQQCYOESFEREDOGXGKOWCKZPSLBIBUYLCOLINZSRZOGUR");
    msg.description.assign("JTLZBQFKIZSLJWHJQNYQEQVWFPVYDVXRGGVFTKNNRJRAUEHDGMODBURJKWGHACPUQLKTITOQOFGNZEEYBYYVGOSGRAPASRPUOFAXEFROHYDXLXCWEDTQEMPSHLTCXKSCCYHUSHPSMLPGKTWIUVQAIFXHASPVAOMBLCQMPBICAJOM");
    msg.leader_speed = 0.19870001252413472;
    msg.leader_bank_lim = 0.4305906221566794;
    msg.pos_sim_err_lim = 0.7535341380059017;
    msg.pos_sim_err_wrn = 0.05217462579742005;
    msg.pos_sim_err_timeout = 6406U;
    msg.converg_max = 0.6631221315782083;
    msg.converg_timeout = 57337U;
    msg.comms_timeout = 32784U;
    msg.turb_lim = 0.4797959640981736;
    msg.custom.assign("SLMHFKEPYAUHRYHMGZGYECUSKQACEMPYSYHWTGHRQBXUCJNPFJKOMHWKMJXMZJRNBBHWOZOWTNXSEOVZ");

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
    msg.setTimeStamp(0.44198287467129826);
    msg.setSource(23443U);
    msg.setSourceEntity(230U);
    msg.setDestination(13759U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("OYHJHWJWFCFNQHPJVBIBJSQKGRFPXJNEKQFBZXVQQKIYGZWPF");
    msg.formation_name.assign("WREZKFYJIJVWWLEWHUOKNVBICCCMRZODZMIJKRBPJUBVLJXKEQGJAOWNINCFHVEMAXKITSABRUMNNXOVDFY");
    msg.plan_id.assign("BLAASFDZWZMYQGAZZXDGAGIKVZHNDFXXINIWWCLBGMKNQSXGIOKSVQJJMDXHGUXNJCAECZCZWFJVGCVJRPWSNKTPTVNFYLWQEGICDUKHTPI");
    msg.description.assign("WPJQZVXECUFZAFXEIQEMYDHTBFRPXILRYXOGJQUGBDTRZNCKEZDHABRHJKDWDZNCAVMUFOCLMZRWYHDWIDFMWCYKYSGELHSBTLCBUJUBNLNR");
    msg.leader_speed = 0.4317426533613634;
    msg.leader_bank_lim = 0.2220862599201795;
    msg.pos_sim_err_lim = 0.9671149635589362;
    msg.pos_sim_err_wrn = 0.6800121404245512;
    msg.pos_sim_err_timeout = 50846U;
    msg.converg_max = 0.5656235893858697;
    msg.converg_timeout = 31064U;
    msg.comms_timeout = 25490U;
    msg.turb_lim = 0.22561223820744725;
    msg.custom.assign("ZFCKDMOAKUSDCIVLLSIOZBAJWPSQBKQTGXCUMNJXUQASPIXMTXWIHYRYHFIMIJQRCSPQBWNHLEBAWKXOAZURFQGJARTYB");

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
    msg.setTimeStamp(0.19783663586096478);
    msg.setSource(11443U);
    msg.setSourceEntity(70U);
    msg.setDestination(19294U);
    msg.setDestinationEntity(205U);
    msg.group_name.assign("NSEJDNUZLTNMZWNFDFBVJFRYHKRCBZFHTNEHKFDGVPJVWDZRBNLCLXPVGPHHUXBPYVFTLTPLXADNMSCMYWZSYQSRZWAIOGCUJOIQLSCKCWEUATBTRZQBRCGOFLQWDKVEGKDJIKIXCHIKJXGSZHIELRNFQJMXPQTOXFKGVQCUNJEOABYTQDMBLOAIRDJRJVOQIFLAUYGSXYACTEEBZUYWOIWXHTUAYDMBXUPPSPRKMEO");
    msg.formation_name.assign("ZAKUWQKKIAHWBBMAWQNMQSYZJRDECHCBTRCMTWURSUVBAIEJSYHXDGPAYFQPMIZHPGFLOAMBYILTKVZENGGVEJCGDFZOHLNHONVLQLNSLSIXUJVMUMCDRSYFOXXJGAUGUNTXPORMMZLWMNIOTPPTOSFBJBEPXREKDXBVUJPREITYWOTRDNWLRZVKFHZXWYIREBEXKACGHWBCQAGCVKKVDPFPO");
    msg.plan_id.assign("VOBSFOOKBGGFANXXILNLHQCUVZGDMNUGDYTLFLYLMCAGAUKRQFDXCCMVCZPRKUDKGEUQLQOMEVHOOSNYZSPGMRXNNOFONEPJIDMYMYSAHUYPPNJWPJHDKTQUWTDZCWAETVENHWHTZRZIIBKCWXLNHFOTBVXHGXIYDBOYBFRFLGUQUAFJPFLWQM");
    msg.description.assign("ZXITIFDVBDNUADBIHIEAQEMFGELELNWMLWKTTXVCUQOWBUSAYASSQABE");
    msg.leader_speed = 0.6072871177155289;
    msg.leader_bank_lim = 0.10791477323092458;
    msg.pos_sim_err_lim = 0.0061094740854794605;
    msg.pos_sim_err_wrn = 0.7885522098718271;
    msg.pos_sim_err_timeout = 10723U;
    msg.converg_max = 0.35997574732414483;
    msg.converg_timeout = 8447U;
    msg.comms_timeout = 65277U;
    msg.turb_lim = 0.382877199522081;
    msg.custom.assign("PMSNREKZZUYBEBPJRHRQCVDXNZWOBJJBWOPDAGCAANLHBDUTEKVFTDCQNHSDAPHGQCWVXMIRSAKOMGFLGJZUFTYEEOKLFHXWJGZEXZJTJKKQLNKULQWSNGGFIHUOPIJHYWSYQOMFRZMBUNPQIURFLGQIGRXVTD");

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
    msg.setTimeStamp(0.07349953695268041);
    msg.setSource(29723U);
    msg.setSourceEntity(119U);
    msg.setDestination(64336U);
    msg.setDestinationEntity(47U);
    msg.control_src = 40823U;
    msg.control_ent = 31U;
    msg.timeout = 0.4996468623253898;
    msg.loiter_radius = 0.9923356034095246;
    msg.altitude_interval = 0.19352761458582224;

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
    msg.setTimeStamp(0.48711728355134865);
    msg.setSource(2346U);
    msg.setSourceEntity(81U);
    msg.setDestination(33654U);
    msg.setDestinationEntity(131U);
    msg.control_src = 17015U;
    msg.control_ent = 243U;
    msg.timeout = 0.505194973229568;
    msg.loiter_radius = 0.8671776874450784;
    msg.altitude_interval = 0.7194238338804169;

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
    msg.setTimeStamp(0.7187365440936978);
    msg.setSource(23914U);
    msg.setSourceEntity(17U);
    msg.setDestination(43911U);
    msg.setDestinationEntity(129U);
    msg.control_src = 11550U;
    msg.control_ent = 154U;
    msg.timeout = 0.3391393629334736;
    msg.loiter_radius = 0.8901949086869622;
    msg.altitude_interval = 0.15757026348065883;

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
    msg.setTimeStamp(0.23925221127296203);
    msg.setSource(62U);
    msg.setSourceEntity(67U);
    msg.setDestination(58478U);
    msg.setDestinationEntity(203U);
    msg.flags = 25U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.413913392395743;
    tmp_msg_0.speed_units = 65U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.43576648737131685;
    tmp_msg_1.z_units = 189U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7649579496495368;
    msg.lon = 0.6154094337936892;
    msg.radius = 0.5601530099663519;

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
    msg.setTimeStamp(0.06614883149046336);
    msg.setSource(32675U);
    msg.setSourceEntity(159U);
    msg.setDestination(15569U);
    msg.setDestinationEntity(11U);
    msg.flags = 158U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9356430677498195;
    tmp_msg_0.speed_units = 249U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2892239949999019;
    tmp_msg_1.z_units = 58U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6760307503318159;
    msg.lon = 0.8232593875197578;
    msg.radius = 0.5153690966315384;

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
    msg.setTimeStamp(0.5796071667882612);
    msg.setSource(27298U);
    msg.setSourceEntity(254U);
    msg.setDestination(40518U);
    msg.setDestinationEntity(43U);
    msg.flags = 15U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.476341505272587;
    tmp_msg_0.speed_units = 235U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8656122419576193;
    tmp_msg_1.z_units = 223U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6490698603729251;
    msg.lon = 0.578940072218952;
    msg.radius = 0.571856439950445;

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
    msg.setTimeStamp(0.3118604292565741);
    msg.setSource(27764U);
    msg.setSourceEntity(11U);
    msg.setDestination(31439U);
    msg.setDestinationEntity(137U);
    msg.control_src = 20791U;
    msg.control_ent = 88U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 68U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.48810617984974325;
    tmp_tmp_msg_0_0.speed_units = 166U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6716039123747406;
    tmp_tmp_msg_0_1.z_units = 67U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.964672315728118;
    tmp_msg_0.lon = 0.9768793866689675;
    tmp_msg_0.radius = 0.1856513453039048;
    msg.reference.set(tmp_msg_0);
    msg.state = 224U;
    msg.proximity = 162U;

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
    msg.setTimeStamp(0.9581819396660336);
    msg.setSource(35530U);
    msg.setSourceEntity(127U);
    msg.setDestination(32716U);
    msg.setDestinationEntity(47U);
    msg.control_src = 53635U;
    msg.control_ent = 161U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 102U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5375201866488338;
    tmp_tmp_msg_0_0.speed_units = 43U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3261194358003908;
    tmp_tmp_msg_0_1.z_units = 202U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.23970375215524486;
    tmp_msg_0.lon = 0.9089191627052787;
    tmp_msg_0.radius = 0.7289044635077652;
    msg.reference.set(tmp_msg_0);
    msg.state = 128U;
    msg.proximity = 48U;

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
    msg.setTimeStamp(0.4949577039737607);
    msg.setSource(30396U);
    msg.setSourceEntity(128U);
    msg.setDestination(30725U);
    msg.setDestinationEntity(142U);
    msg.control_src = 58087U;
    msg.control_ent = 167U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 111U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1574136793780011;
    tmp_tmp_msg_0_0.speed_units = 175U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5807292580578052;
    tmp_tmp_msg_0_1.z_units = 2U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9016194064089595;
    tmp_msg_0.lon = 0.47736952553097767;
    tmp_msg_0.radius = 0.4155087262421069;
    msg.reference.set(tmp_msg_0);
    msg.state = 135U;
    msg.proximity = 174U;

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
    msg.setTimeStamp(0.5637613708992285);
    msg.setSource(11166U);
    msg.setSourceEntity(220U);
    msg.setDestination(10394U);
    msg.setDestinationEntity(206U);
    msg.ax_cmd = 0.9179366195879717;
    msg.ay_cmd = 0.6553895257897685;
    msg.az_cmd = 0.8337011547190535;
    msg.ax_des = 0.6382504474387136;
    msg.ay_des = 0.2468064915062207;
    msg.az_des = 0.49993075317177027;
    msg.virt_err_x = 0.4501282694669275;
    msg.virt_err_y = 0.7093890510729746;
    msg.virt_err_z = 0.3152135439632533;
    msg.surf_fdbk_x = 0.4705515690209561;
    msg.surf_fdbk_y = 0.7074678340559831;
    msg.surf_fdbk_z = 0.08544585357637358;
    msg.surf_unkn_x = 0.6140193902018829;
    msg.surf_unkn_y = 0.7306848427014012;
    msg.surf_unkn_z = 0.32647772952741694;
    msg.ss_x = 0.08310812475046203;
    msg.ss_y = 0.6160730948575652;
    msg.ss_z = 0.989992032775616;

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
    msg.setTimeStamp(0.3629988239187417);
    msg.setSource(37201U);
    msg.setSourceEntity(8U);
    msg.setDestination(64041U);
    msg.setDestinationEntity(28U);
    msg.ax_cmd = 0.5146792019798141;
    msg.ay_cmd = 0.23260279343308177;
    msg.az_cmd = 0.8271379102245239;
    msg.ax_des = 0.6131645248233908;
    msg.ay_des = 0.9147220257058456;
    msg.az_des = 0.9669889002680839;
    msg.virt_err_x = 0.7481127212020066;
    msg.virt_err_y = 0.2024583870852661;
    msg.virt_err_z = 0.6127313485568118;
    msg.surf_fdbk_x = 0.4705518436756756;
    msg.surf_fdbk_y = 0.8109219379073377;
    msg.surf_fdbk_z = 0.9638013443175458;
    msg.surf_unkn_x = 0.6231218478581128;
    msg.surf_unkn_y = 0.3908234318321323;
    msg.surf_unkn_z = 0.09014422467618066;
    msg.ss_x = 0.833831719659652;
    msg.ss_y = 0.7641028698743062;
    msg.ss_z = 0.40254712940572945;

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
    msg.setTimeStamp(0.7176805862328802);
    msg.setSource(28840U);
    msg.setSourceEntity(109U);
    msg.setDestination(17642U);
    msg.setDestinationEntity(9U);
    msg.ax_cmd = 0.9212490103686483;
    msg.ay_cmd = 0.5190372195686019;
    msg.az_cmd = 0.32391810853747016;
    msg.ax_des = 0.7747523367352389;
    msg.ay_des = 0.3103036420894385;
    msg.az_des = 0.43715074479351335;
    msg.virt_err_x = 0.27237469250739066;
    msg.virt_err_y = 0.8818790080468304;
    msg.virt_err_z = 0.593254633184639;
    msg.surf_fdbk_x = 0.3544870008125569;
    msg.surf_fdbk_y = 0.3647844023915271;
    msg.surf_fdbk_z = 0.8789772001207022;
    msg.surf_unkn_x = 0.3643732493398276;
    msg.surf_unkn_y = 0.1254358459536734;
    msg.surf_unkn_z = 0.6498795677711949;
    msg.ss_x = 0.11626301688975271;
    msg.ss_y = 0.6290529085497393;
    msg.ss_z = 0.2617207094812959;

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
    msg.setTimeStamp(0.31701467332157607);
    msg.setSource(64470U);
    msg.setSourceEntity(59U);
    msg.setDestination(18133U);
    msg.setDestinationEntity(214U);
    msg.s_id.assign("LRYCRVIVOHAGXLXNZWBTLMUXCDYJRQVTOSNNFSJUOTDUFZKKHNAPTBJHBHZWQEZCEZCPBHOSHQXSNIWJLYDBNETEXXGNVUMAZSVZDTEQCBYUBLGDKHPZQZ");
    msg.dist = 0.6979347933006363;
    msg.err = 0.16436013330055133;
    msg.ctrl_imp = 0.5405140520504668;
    msg.rel_dir_x = 0.04496822189696004;
    msg.rel_dir_y = 0.4091176634794115;
    msg.rel_dir_z = 0.7110723642763161;
    msg.err_x = 0.6509453382772186;
    msg.err_y = 0.33390045390083556;
    msg.err_z = 0.11602016435900797;
    msg.rf_err_x = 0.8613468843940331;
    msg.rf_err_y = 0.3217211409286391;
    msg.rf_err_z = 0.9669578798172125;
    msg.rf_err_vx = 0.9079410368243166;
    msg.rf_err_vy = 0.335141657612402;
    msg.rf_err_vz = 0.3629660385890965;
    msg.ss_x = 0.5179522694909316;
    msg.ss_y = 0.8845802810577842;
    msg.ss_z = 0.2595213874455303;
    msg.virt_err_x = 0.8559976165946771;
    msg.virt_err_y = 0.7696768123302988;
    msg.virt_err_z = 0.017247429044215612;

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
    msg.setTimeStamp(0.7046231489397219);
    msg.setSource(51642U);
    msg.setSourceEntity(26U);
    msg.setDestination(36507U);
    msg.setDestinationEntity(253U);
    msg.s_id.assign("UMZXAKVQMFZOCKAFQDOULXSKCZIVDVZUBEUORCGLPVWYISMDGSJGLNKJFFNQPSERENXLXITFVBMTRTPLVJNWPQPISPWLHFJHCIBGJPTRDTSHXYTEBOSQOZLOKNOASEYWDTRDFAKZWLVLGZZBYSWHXA");
    msg.dist = 0.16716689506650173;
    msg.err = 0.9332070185199222;
    msg.ctrl_imp = 0.34817070478881096;
    msg.rel_dir_x = 0.41597985775770396;
    msg.rel_dir_y = 0.7471704712527663;
    msg.rel_dir_z = 0.6156591588587791;
    msg.err_x = 0.02911732039171855;
    msg.err_y = 0.8985375901193311;
    msg.err_z = 0.8908006490253506;
    msg.rf_err_x = 0.627289838049825;
    msg.rf_err_y = 0.15807537127655225;
    msg.rf_err_z = 0.7426452548669883;
    msg.rf_err_vx = 0.5040178239167001;
    msg.rf_err_vy = 0.47896060082109915;
    msg.rf_err_vz = 0.43931777062042965;
    msg.ss_x = 0.7085973935812149;
    msg.ss_y = 0.034623102906082504;
    msg.ss_z = 0.7380722428968358;
    msg.virt_err_x = 0.6026212362128835;
    msg.virt_err_y = 0.9407670925303326;
    msg.virt_err_z = 0.08914680876466774;

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
    msg.setTimeStamp(0.303672198985085);
    msg.setSource(27967U);
    msg.setSourceEntity(154U);
    msg.setDestination(16760U);
    msg.setDestinationEntity(52U);
    msg.s_id.assign("VMCURCXSFNXTJJJPIRRYHTGALIUAGUSUSGLEJVXOVBFCJGQEDN");
    msg.dist = 0.7215990990675806;
    msg.err = 0.0021269674846939868;
    msg.ctrl_imp = 0.5280390558146669;
    msg.rel_dir_x = 0.29988573067756574;
    msg.rel_dir_y = 0.7757015176506876;
    msg.rel_dir_z = 0.67197713815831;
    msg.err_x = 0.4204247220554974;
    msg.err_y = 0.7800810577881432;
    msg.err_z = 0.0044529181276796725;
    msg.rf_err_x = 0.5369912649227807;
    msg.rf_err_y = 0.29421699756651354;
    msg.rf_err_z = 0.11978777443481026;
    msg.rf_err_vx = 0.7641790196539486;
    msg.rf_err_vy = 0.5178696368110111;
    msg.rf_err_vz = 0.3015213941588496;
    msg.ss_x = 0.7931737347156983;
    msg.ss_y = 0.2400390920307217;
    msg.ss_z = 0.8771996741970578;
    msg.virt_err_x = 0.7689729634974206;
    msg.virt_err_y = 0.32441290443260273;
    msg.virt_err_z = 0.23740041673327317;

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
    msg.setTimeStamp(0.755566791589346);
    msg.setSource(56291U);
    msg.setSourceEntity(94U);
    msg.setDestination(63476U);
    msg.setDestinationEntity(204U);
    msg.timeout = 27177U;
    msg.rpm = 0.22139404881340552;
    msg.direction = 178U;
    msg.custom.assign("JPCUJGZRYKTDIPPWKKNIOYLDOSWSRWESMABEIIIBODUXQINLXAAFBDBEFBVEUPNXRIGKJQHJNZLKMSVDPYVSOTROGRZLPTGGVUBWFWKGCSQHDDDLXLTVRYKMYPBRFQRZOBNWZFHZCJTQMNTQDUJFBUUZCTNVCQQMRCSOEXLYEIICEJVGJTNFOPPWGSHLWGUJNYUIVAZWHMQHNQSOJKARXASCZYVMUCDAXHEHFKEAMWAFXEBPYOT");

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
    msg.setTimeStamp(0.648955322502641);
    msg.setSource(41711U);
    msg.setSourceEntity(236U);
    msg.setDestination(35779U);
    msg.setDestinationEntity(164U);
    msg.timeout = 62658U;
    msg.rpm = 0.5784248157505937;
    msg.direction = 224U;
    msg.custom.assign("ZYXNGYYYTXIUPLXHFNRGIVDHHIETKNBFRUWZVWURXGKRYFNNCDBNTLBLMTABJFNKAKPFZRTKTUJZJYWPWEMQPEYDHVBSGLGZFJOLQWDIOSLOAWKNUOSWHHIQBPGECRCISCGFDQQEHWFDXENNPSIALVQIJVUQTUYAOYQZULABPMSOYRTHVJQJVMAFZKPJDGUDBZHHZVCQWS");

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
    msg.setTimeStamp(0.5391037216590789);
    msg.setSource(18476U);
    msg.setSourceEntity(70U);
    msg.setDestination(9476U);
    msg.setDestinationEntity(175U);
    msg.timeout = 24532U;
    msg.rpm = 0.9979627636316057;
    msg.direction = 153U;
    msg.custom.assign("JJLRKIRMYTCBYYJDLPDQXHYWDAVGTHUHYRXECKHCJEJTKCUNEJHQFNZPEWDRGWPMVMZJWQTIQWRTGCSIKSRWCXCRMDQSZPXOVOEGXZMURGWSLQAXEFPLYFNALBKJVLZDWEVFY");

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
    msg.setTimeStamp(0.28115569466603174);
    msg.setSource(1404U);
    msg.setSourceEntity(214U);
    msg.setDestination(13624U);
    msg.setDestinationEntity(169U);
    msg.formation_name.assign("CMWXSTBVJVIHETRURWJJRJFFDRHQKWSZHRZKPCCXSQNFXKINEPIDKVSNQGDFCOBWYUKZAHEPDHYNIVAYBSVZQALNWNGZLAKWADBFTIBDUGWASKWYRTMPL");
    msg.type = 211U;
    msg.op = 250U;
    msg.group_name.assign("HYRUBKEHYEMZECOCAICQGZSPOUFMYPMGOCZXTZTBPSKRVDSXQQCBOFJNLBKTVWAMMDHWWJXEGLRJECGPNRQOIVNAWHLGFQFRVDVZMWIJYVUUIZZJGWBDDASFMHROGY");
    msg.plan_id.assign("MWHMLBKWTTHTZXSDZPWUJPXSTGNLRKHPIEWCXCPCFEPHJUCQFQYJEPRNMIQGEAVIUZSTQUTAXNCAVDZXVQFLRNGFLBWNJJYHONMQAVNDKRGMZXSTHPGCTSEKOWVGXBIAGBZELCXVISUEPRDCJYZRAYSFMDBCLINJOOHAAZAIDU");
    msg.description.assign("LFMXLGDOCHYETLRYVLHCLYBDIXTFKPXMVFXLJMVUJURYGVDXZAKNORMBONTJUAYXGJBGFDUBHVTTLPZIMFIAYHWVJAJJCWLHFTRQNNXNZSBREFXSAHUVCEKYASHNVYMGQRITNJKMKWFGWAIPHBSECMVDQQJKBXQRGVWPGCSQAOZZL");
    msg.reference_frame = 223U;
    msg.leader_bank_lim = 0.878724528150098;
    msg.leader_speed_min = 0.7215854847661333;
    msg.leader_speed_max = 0.1372882591131499;
    msg.leader_alt_min = 0.054797231985980854;
    msg.leader_alt_max = 0.9186919266617793;
    msg.pos_sim_err_lim = 0.9773579820561;
    msg.pos_sim_err_wrn = 0.5740085070668379;
    msg.pos_sim_err_timeout = 3476U;
    msg.converg_max = 0.1775616058193631;
    msg.converg_timeout = 12905U;
    msg.comms_timeout = 16697U;
    msg.turb_lim = 0.4478490477704772;
    msg.custom.assign("RMMAATNZAZWDSTXPYHROPMTOWOKXSQCNAJFOBCPLEUHFRRFQJIBNIJSEZCRHPNUOAHNKNPZKQYUBCMIVBMXYPFDAMSXLGCLGAJSXSIYUTCCFLQWPKDHJGVKLOGPJDWEBOHZSRAKFQMEUHVCDJIXPVYZELXVHZWXEJCVYEDTLRTZBGKTEHNIQRIFVUIUKYPFWXUSCWMNBUMEARJLOJGDAYWDVGIVTZNRQSBZUNYITLEKHYDTMQLDWQKGVGFWOQ");

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
    msg.setTimeStamp(0.4168513817828382);
    msg.setSource(23133U);
    msg.setSourceEntity(48U);
    msg.setDestination(9812U);
    msg.setDestinationEntity(108U);
    msg.formation_name.assign("JRFOAANSXHMPXSMGDFYVUNMBRXJWRHWJPELCWCBLTLXUTACOYHTMYSPINGRGJAXHBMQYCHJFGVVAUUIWBJLTJKKOPASAQKUTZSKKFGQDMKJTMYCDDWSGELIHKLNXPNZGAKCKYENWZCBWETLPMCZMSDVVDVDOASULVCZPDJWXHYOQRPYNLYNBIZIZUQQ");
    msg.type = 168U;
    msg.op = 55U;
    msg.group_name.assign("VLYCHNSQCYJCXBFYEKNDKQNVTXVALDALBBDZXMRBVLHRWHWCQQFGGIDWZLTTTAZIPPOEEVLTIOOZGTOJRUNNCUFKLBJEEHODZPIGQSFHNMAHPUXSPBMETNPKETPQNARMKJAHTGMRSJKIWLKUDOCVZSCZMCYEXMSRF");
    msg.plan_id.assign("WKCHMHXPXODRPFSCOASFPDXGVGREBNLFEZMMQAJCRRWBGAAAUDVEJHOOIBNXMIQCSWHOPBHZZUJNIPOYBZJOBBXCEYXNJSUNLCCTFJXISVTUSJLCEPKBTURHEZILQAMUXALGKYPWQQYIFWJORWCNZKPEYDHTHDMXMDCBSLSTQVINYAVHUSMQFQDUGJZVYLTSZOZEDJNWVODMTPURFELEKFKRIILW");
    msg.description.assign("XZRAXNJAMCYBPMPDIJFIRIVQHMKVPDVKKCYXHLKQLLQTIBZYZTLMVQUOOTIHMSSQZWQBGPDNZGBLKQXFEAKXEAFEXEGFECGIBSBVEUBXYTJPEDHEJIODURJDWYGHDSKEFRMM");
    msg.reference_frame = 69U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38238U;
    tmp_msg_0.off_x = 0.7393679585317556;
    tmp_msg_0.off_y = 0.1973153946841456;
    tmp_msg_0.off_z = 0.6483153955092118;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7727534129769063;
    msg.leader_speed_min = 0.39265442092375225;
    msg.leader_speed_max = 0.1297484925074932;
    msg.leader_alt_min = 0.8425594173498661;
    msg.leader_alt_max = 0.6011005121061744;
    msg.pos_sim_err_lim = 0.1958831255151573;
    msg.pos_sim_err_wrn = 0.6357211169858829;
    msg.pos_sim_err_timeout = 6715U;
    msg.converg_max = 0.47551853847659487;
    msg.converg_timeout = 52030U;
    msg.comms_timeout = 43311U;
    msg.turb_lim = 0.8857128189156281;
    msg.custom.assign("AXHLMXWFZASQPJWOVSNYPCKKUUBEWDUFUVMUJDWJEBNMUJBLMEEYINKOSLLYZOUQRZSFYOZIHTRCXDFNCPZMEUKRHNCOQXBVOPAAVSGAQIQITSGWEKUKYDFDACPGZIMJGSVQBPHUVDDAHGCBQWGFIHWTHYNFCJHALQDPVIFREQTXNNRTYXOBRDTLLMFAMIXRBPFLSQAPTZZEICHWKEHCJOLXDTBRVOEPKLNWKJJWYRJOGMSVICXKZGYZBRNSG");

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
    msg.setTimeStamp(0.9245001936958893);
    msg.setSource(47792U);
    msg.setSourceEntity(187U);
    msg.setDestination(25738U);
    msg.setDestinationEntity(251U);
    msg.formation_name.assign("ONQSNVLVQZERTQMYGBAIVYIWCOPSKHJEDIUURJZUVSX");
    msg.type = 162U;
    msg.op = 177U;
    msg.group_name.assign("XQEDZVFOXEVFWWMASDDHUWRFYPBJJLWDEKJVJFUTZUOEPMQTPBHFNWRBEJXRFAGKGYBRKREUFNPMSIKCTLDANVVHWTFXUZBTDSKXYKIEUAABXUYRWCGLXC");
    msg.plan_id.assign("PCFMORAQRULDKBRXCAKICYCLFJWDTKBKAQBBTWJBWRAJXNGFGSVMVZLSALUYDXSQMHTUMAOJRJYGNUMOSMSZIVTHRJZPLQWDTHNFRGZONRXBWJDIIEZYAFQNXNUQHHCBNGJUVKPICELXUOWKDPEYIDAGMLUHJDXOGFEZPSETEEVOPCFEJYLEGIVVQGBPZSBYKRXZHCMPSTYXWNGOZETAYNLFXTWICBPZUOSQHTYFLMIWWFPKHHNUCIRASKMVQ");
    msg.description.assign("QLWILTQWHQXFZIBMZJRXCZQFTATFBUZSTIIEWKDBHNGIPEHSDRGNAPSBCJVRLEERGPNKRVJGTMDBDUNOLYYVBAZIACQGVSGVOQCCJNQAYWYKMHB");
    msg.reference_frame = 33U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22702U;
    tmp_msg_0.off_x = 0.5740910250942443;
    tmp_msg_0.off_y = 0.8408697714071349;
    tmp_msg_0.off_z = 0.7516715772174892;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.18974438041307218;
    msg.leader_speed_min = 0.7366561893729691;
    msg.leader_speed_max = 0.46892148731948924;
    msg.leader_alt_min = 0.12899466185743913;
    msg.leader_alt_max = 0.42718033207992834;
    msg.pos_sim_err_lim = 0.9113808019843596;
    msg.pos_sim_err_wrn = 0.3930405353131432;
    msg.pos_sim_err_timeout = 58121U;
    msg.converg_max = 0.11391642689297343;
    msg.converg_timeout = 23192U;
    msg.comms_timeout = 54269U;
    msg.turb_lim = 0.28339117053191343;
    msg.custom.assign("TVRLKYNCWCDSQCTOLEWBZMGIDZTYHPBAEXARTFKOTVUVJBVDORCYMNBVCZIGCZKOSPNUPWANQIKPNQHVMWCBHXDFQGDARADRPPLJHIMJUTAHNQQKYEROKYJGXWYFZNNGFMXUCCWLEJKBWUJPTESOMZSKHUDSBXBLXPDLTLAORSYTFGJUXSQLNEHIZJLLXYMOGRFVNAPRZEVZESDMGBUMWAEHWYB");

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
    msg.setTimeStamp(0.11189311356403475);
    msg.setSource(23641U);
    msg.setSourceEntity(184U);
    msg.setDestination(2436U);
    msg.setDestinationEntity(82U);
    msg.timeout = 35017U;
    msg.lat = 0.26972226253843123;
    msg.lon = 0.808855215430931;
    msg.z = 0.24200339436053597;
    msg.z_units = 71U;
    msg.speed = 0.40847879317548297;
    msg.speed_units = 191U;
    msg.custom.assign("RWMTAZOHQFFONQLDXMATNHBNHGCSYHDKXZBSHLFKSXIRDPVRDAJZNPJIZEMSVUPZGZEEIIBPWAAKUOYRFEWGROYTLZKRWGVLVOYTQNUIPJWMQFYLSOTAEYIQIBEYXDNYKJPFQXHUHTXGKXJCRUMBVBWBTCMHYOKFDPXCNOO");

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
    msg.setTimeStamp(0.2747388512859802);
    msg.setSource(47295U);
    msg.setSourceEntity(113U);
    msg.setDestination(39016U);
    msg.setDestinationEntity(180U);
    msg.timeout = 27408U;
    msg.lat = 0.32261562300199254;
    msg.lon = 0.6238092690883019;
    msg.z = 0.3152450117285077;
    msg.z_units = 44U;
    msg.speed = 0.21881704878153319;
    msg.speed_units = 77U;
    msg.custom.assign("QURNRTOTLIQBDSNADASJUOYYLDPXEZKKYWVCYFYZNTAWNXRWEHMIHILFDLZPWRLONYQDEYQKZQQIMOBXUJQRFUVYZCZMEGRKGEBCKCAWSCJITUBCEBSQXAINFIJZOWONSJCILGITXEPJKHOMBERKVPGFQHQYAKUP");

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
    msg.setTimeStamp(0.015183000957827542);
    msg.setSource(24856U);
    msg.setSourceEntity(161U);
    msg.setDestination(11861U);
    msg.setDestinationEntity(125U);
    msg.timeout = 18997U;
    msg.lat = 0.8556246496239345;
    msg.lon = 0.42070929715705496;
    msg.z = 0.036628088871001885;
    msg.z_units = 229U;
    msg.speed = 0.4341870868502049;
    msg.speed_units = 132U;
    msg.custom.assign("EDVTCTXNKFWNLZVBZTGRYVHUHGMTQGOCEXSYDZLPFRUGIXTBWJDKEEDYJMJLPN");

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
    msg.setTimeStamp(0.31798108180364926);
    msg.setSource(63173U);
    msg.setSourceEntity(211U);
    msg.setDestination(14641U);
    msg.setDestinationEntity(43U);
    msg.op_mode = 144U;
    msg.error_count = 49U;
    msg.error_ents.assign("OGSTNPMQMTANZDFGNMIFABGFWESJRIMKHTUYUZSCCDTCINFIAWSLRAZOHCXYZBUMWGCPWJQROVBJKJYDBYTEPXAVJBSVSHLVWIJQNSHNTXNVQWQ");
    msg.maneuver_type = 25929U;
    msg.maneuver_stime = 0.0011409619531718151;
    msg.maneuver_eta = 57525U;
    msg.control_loops = 287591520U;
    msg.flags = 58U;
    msg.last_error.assign("RBKJXNITVXBQGNAUFUIVYANPTCBVGNWDCZVUCSYBQPJPTQWZRHIYDUMOIUJKDPWSXUKUFSOCDOUZCLTEJFMSSGVMLWWGSBELLQFOOCARVKHTRWTIXKXFOIEMBQHYNYNARZKFFAULVELLRBBJGAZBCRHVDQKOCNAPSMEFRLXHGJRYGJJZODKINWPSQTNNXUXYHDAETSYVPDZGZHYMMZKIQHAWCGZIXMQYEPEPKLTWORTVG");
    msg.last_error_time = 0.3544975356295773;

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
    msg.setTimeStamp(0.7492914676404192);
    msg.setSource(23758U);
    msg.setSourceEntity(204U);
    msg.setDestination(11015U);
    msg.setDestinationEntity(43U);
    msg.op_mode = 65U;
    msg.error_count = 208U;
    msg.error_ents.assign("STGLMVIOTZHTBIKBZHBUFHDYKCRDXCQASWQFSOVDCUVUUOEQBIKXBUOVMECPGYLQAOOMDMEIZWQDNHDAIJCGPO");
    msg.maneuver_type = 20291U;
    msg.maneuver_stime = 0.06985402688424847;
    msg.maneuver_eta = 28344U;
    msg.control_loops = 3849262819U;
    msg.flags = 247U;
    msg.last_error.assign("SHUNGHANNUPGYZJUCKZPXJBEIWEDEZTVCGFZLWPEXYEOJXGZTHDVDFONISQAFRQEMUIPXQOMQWOAJGSNKWJGSYCFOMKABDXQEKVIKXRPTJCBJPXVTZTPNMLSVHIBBIRATLPZXMFDRBHFHETRLBKIVYUTRCYERXOONLVGDCCQUMHJGMSYBYSPKUFR");
    msg.last_error_time = 0.26625433488724437;

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
    msg.setTimeStamp(0.273031162432686);
    msg.setSource(49937U);
    msg.setSourceEntity(109U);
    msg.setDestination(30566U);
    msg.setDestinationEntity(30U);
    msg.op_mode = 17U;
    msg.error_count = 95U;
    msg.error_ents.assign("AZKHYXRICFAMTTAUCECTZP");
    msg.maneuver_type = 14796U;
    msg.maneuver_stime = 0.6866616223255196;
    msg.maneuver_eta = 21168U;
    msg.control_loops = 1208310499U;
    msg.flags = 40U;
    msg.last_error.assign("YVSMYCCQFNEOHCPABXJBNXDLMQUAEBCDSVDFYKKRTGTVKGLRJROXQWDQVBRLXJZHASUIEPPZARHEWOUBAQQKSFEFGYVIJVHLNCWFJIVEIHDIWNZDNPWOWGRSDESGZUNQBIMTLASOWV");
    msg.last_error_time = 0.03746051075211376;

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
    msg.setTimeStamp(0.7274132770994889);
    msg.setSource(64705U);
    msg.setSourceEntity(252U);
    msg.setDestination(25366U);
    msg.setDestinationEntity(8U);
    msg.type = 22U;
    msg.request_id = 39979U;
    msg.command = 239U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 11929U;
    tmp_msg_0.lat = 0.8966951562939606;
    tmp_msg_0.lon = 0.8345237017553168;
    tmp_msg_0.z = 0.5393636575434362;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.duration = 39673U;
    tmp_msg_0.speed = 0.9757772700154093;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.type = 11U;
    tmp_msg_0.radius = 0.7916654739091741;
    tmp_msg_0.length = 0.7165152532721653;
    tmp_msg_0.bearing = 0.30908083565791145;
    tmp_msg_0.direction = 78U;
    tmp_msg_0.custom.assign("FAVGYVAPTHNGRKSCLAMBJUGXRFPLPBUVIUHJOHXWCMKBROCNCLVAGLTKWSPSCCQDNKT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55343U;
    msg.info.assign("NPGAFPSSIGCJDRHLQFSZFBAKYSHAOWZBQWNPVRUICXYKZKQLVTGAMEENGHRTXKATGLLCEBGCYLDUWOSDIRLKEBVPWLVJIRRPXIOJBXOQT");

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
    msg.setTimeStamp(0.4783823567596397);
    msg.setSource(42051U);
    msg.setSourceEntity(34U);
    msg.setDestination(15769U);
    msg.setDestinationEntity(202U);
    msg.type = 63U;
    msg.request_id = 24710U;
    msg.command = 25U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("TXOIPJFSDRWBXOHSZMHAVSNOVIDFNGQFQPGFGYQCIVOKRTSKCEZQJIWYNCJUXDJYATMRAAGPCVVGTLEOAFMJHUBDZKIQLEHXPEJVGUSOTWDYNERQTKBKCFCCONMEJSGXZOHWZALMJTKQQCUTGIKRGRABXKPRNBYZSQSBHDLUVLOMYHELAWWNSDPYUHPMNMUVFWCJULLBWBAUUIJCXTYPDNMWWPEYBFGYXZXEX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35601U;
    msg.info.assign("ZGXYDJBCFBORZFOASYACXSJGZIAUOSZZJJEVRBYRYJAQHHSKMTCTGDERKQTAAYCRUFQETQGMWQBTVXDCCJLKZEERMWXZIUI");

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
    msg.setTimeStamp(0.9084912138224158);
    msg.setSource(24303U);
    msg.setSourceEntity(24U);
    msg.setDestination(65379U);
    msg.setDestinationEntity(39U);
    msg.type = 140U;
    msg.request_id = 14261U;
    msg.command = 214U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 54028U;
    tmp_msg_0.lat = 0.6058602128943169;
    tmp_msg_0.lon = 0.9078758243831032;
    tmp_msg_0.z = 0.8100579036171767;
    tmp_msg_0.z_units = 146U;
    tmp_msg_0.speed = 0.5161882432367122;
    tmp_msg_0.speed_units = 112U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.023185453687721957;
    tmp_tmp_msg_0_0.y = 0.5155854506327066;
    tmp_tmp_msg_0_0.z = 0.10102355955040287;
    tmp_tmp_msg_0_0.t = 0.2822843738211298;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("UKPIXNNCGJDWRKXMZFIDVTEXEKLNGBSAYNKCBOTNEKHSKVFGXGBBKFWRBQKOJSTHACCEWAYDMVUFPZSYLVFRBHKVLLSTHGQZAYJNHHROONAQUVPQJDNEFPQCRMRPAJWDJDTMHZJWFZOLPTCQXGYLWUBYIJXUTNURRKGIMFILETBFULOSIRY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14271U;
    msg.info.assign("XHHDQKKQYEHHNFROCQUGVUIQXAYRBSXIPEHEAQCBGIJLNENBIWKSFBSDGDLZDYRYYHKJFJVPTZZFAEULVWRSIUXVWGVWGJPBZBCJVWJMMYLNGSMESZQXNGPBXPXXCOZAGBNELEKZWKOQLTTJLGZFERKVGJIDLTVBPHPC");

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
    msg.setTimeStamp(0.4829810443623338);
    msg.setSource(594U);
    msg.setSourceEntity(106U);
    msg.setDestination(41032U);
    msg.setDestinationEntity(111U);
    msg.command = 41U;
    msg.entities.assign("PSDNENJJWILJUOTGJTJPXSITFPLDILCLVNDBREMHDNAFBWUPRWWGJHWVZNYWDGHHXMTLWMKQHYSDCIIYCERVOXZPBBAIGPTGSLFEUYPAKQRENBXHQUYRCSYOKLMITOZRMZGZZCVFSPDUAGIEVTKJYTNAVOOCFYOMZD");

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
    msg.setTimeStamp(0.5304220978599594);
    msg.setSource(58108U);
    msg.setSourceEntity(163U);
    msg.setDestination(4035U);
    msg.setDestinationEntity(155U);
    msg.command = 231U;
    msg.entities.assign("SWSIRXEEVHMKGDLQUQNIOVIFMGUUYVSZUQPBBWDAQZZQCHJUWDJBCBUJZYNXGVIYAKFCFGFPDTZZKAFJXRSBDELASJGFRQCYLTBJOTFXSDGARJCTCHUXKJBCOQSSTDEPUSGNZHAYZCKXMHNVP");

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
    msg.setTimeStamp(0.39475334667464923);
    msg.setSource(58548U);
    msg.setSourceEntity(47U);
    msg.setDestination(59520U);
    msg.setDestinationEntity(148U);
    msg.command = 24U;
    msg.entities.assign("BMNBFEPHDOXSCLNRJKIILGGCTIUXZAOVDLNPXENXCLMHPUOHDTKUOGUTOGDLXWVGYMJTQXMVOEENITMUTZGKFYFMFSSBXGBLJIHPIWWWZWMNNRSLTFZPZAVUYQVTJYMNWRJRKYJDFIVYMUYHZOUZREBTPFQPAZBWQANWDFSKIEEOCDLAADACTCQBEVSHKEJRFGILZXCWRHCQDFJ");

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
    msg.setTimeStamp(0.38271513459728557);
    msg.setSource(46338U);
    msg.setSourceEntity(178U);
    msg.setDestination(56024U);
    msg.setDestinationEntity(191U);
    msg.mcount = 225U;
    msg.mnames.assign("AHQYDKXRLBSHTAWGWTOODSEGWHWKEVPLGYFIPDSWJQWRKZHBLVDJNZSZIFJJSFUFGKAMTIPMMYKWBCZONQOZXDQQEELTRSLJDAFELSLHETXNGXKAIZBKBIAVLCOWLRFYBMPJJUPWHNAVNRIXHUQCYJCSZRTPR");
    msg.ecount = 39U;
    msg.enames.assign("OCGBAYEMJBCQBLNOWOWBNUIATJSFNFQGZXYOTUSDFRAWXEAPQVWLYMMXFEVPMADDEYKTZFYVWSPBJQUNISKQPOBTLLKGBKGIAQLMHKKEMOXPOJZXRIEWYVYKJLXESDRZYNUARPOPHVASLMFIHPRLJTSOEDWIHPHMSYZUCQTDTRUZJHBEI");
    msg.ccount = 161U;
    msg.cnames.assign("DCDMSQVSERRXJIFUPEBOTSPFNUOSVDIHXZEPZGWANWJVBNGKDSGJBCPSAWVXWRQQPRIUZMEIZKMVCLCJNERYOAGHOTIKSFXTAOSWUTRHLTJXHBDLMUKNXWCMYCUMRAPOAOQLPHXYMXBQCRWTGVQLLZZUSWVVEUMCNHYLEJED");
    msg.last_error.assign("LPZZRPWVKWWNAOAZBZDDQXEXJFLFASAQNCHJNQAFEFRADCGOMWCXCVMTNSQUYLZXNEOMBJWUETVMYKJGDBUIWFVWUTQQRTEHNMHABIHVGJQSLSYTFIGYMSNLEGWSODTFRARCGUGZUEGHFYSIZHPXLSVCNKZUBABSXMFINLTPZCJTKBUKNYRHGDRDJZTUKBHOOMMIPQIYJRKOXEDPICPWLBKJ");
    msg.last_error_time = 0.4523620480379118;

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
    msg.setTimeStamp(0.42006551060191466);
    msg.setSource(55029U);
    msg.setSourceEntity(162U);
    msg.setDestination(27619U);
    msg.setDestinationEntity(154U);
    msg.mcount = 48U;
    msg.mnames.assign("FPCOYFRMRZXGYXRGAVASYEFVBINFRMWNIVIONKWEWWBJYKURLLBDQHLNZTHLOYCJULVCOTKAQYYYTACQJSTRZBGYPGPDTEIDSKUHLEGDPCJBHFOLEFCUMHWZZHKNOPBMWOJTSHIVZTVVSMXMMZDFAKHGSQWIKXPXTYFAUNZUDFNOCXQLBLJBVASABNUQRRXDSXAWZFSPWXIIEQH");
    msg.ecount = 70U;
    msg.enames.assign("IVMKYSDMNQDIQETYOLENJJPGGDHXQRRSPAHTXISOVMJWHWMWOCYYNDGBQRUAWZLHPUDCYPFHYYURDNAUESNUGLOIRPDNFBOQGCSVQAKYMCVUWOEAROWETJQAAXBQFSOBZFLBBTMQNKNNKJGXZJCMH");
    msg.ccount = 73U;
    msg.cnames.assign("CIWZBAOMLIKAHSVVRGPUPUMRDYQMCRIJIZZYJPRYQGGAUXOZXFYBDJKOCBIJRSTIXPURQBTZHRMSMONGYKZEXEVKCFHDGNSGFFAPFRFCTQMBOKUJWQALKDMXENKJETBVBXJNLNI");
    msg.last_error.assign("DTTQQEAMJO");
    msg.last_error_time = 0.0716033110626455;

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
    msg.setTimeStamp(0.6768964774081313);
    msg.setSource(50704U);
    msg.setSourceEntity(84U);
    msg.setDestination(29287U);
    msg.setDestinationEntity(115U);
    msg.mcount = 72U;
    msg.mnames.assign("CCKHDTJPIHEIHTQCOCJRWIUQMULYDECALBCFLKJTMKHTJZLXLSZNBNUAMSVR");
    msg.ecount = 150U;
    msg.enames.assign("ETFCKQKOYLPRFIWLUZEQRINBYIDEHTGWJCPXSNKSSAHHZPDXRCJIGBOUHZYPZLFMUTPFLTHGOJWSVVGADOWZKOHYTMWLYJGFUOFAFJVAHCGQXENYAZRMROCPAFEJQWNHDDKIPNQT");
    msg.ccount = 86U;
    msg.cnames.assign("XCHCBWMTQMPYKWHNMRPFSVWUQFZVYCBFFDMKOGSEVSAMQKABFQFYJBDPHLCAEXVLONUXDTPGOOFDPUINCTYGFNUDDVSXIICOTKOSQIEELQQDMRMXXZRAWGLKSSPWTTWJFXJGSDQMJAOHIBLODHUOEIN");
    msg.last_error.assign("YBTJSOYVDBBMKNEUGGSXNKFKGAMANFYWQUWECVHIOQLULJIJXKVZGLUJSHROUYAKTXJMWCYWCBQDLMDIHZYVQJAODTEHXECZRKEBXKRFPQMGPDCBDATRRZAPFBINOVYQBSTDRCYBRJTMJQPMVEOFFNEKPJNZFUWHTWQSTQNSSZSRQBILWKIMEMHIXAZSRXHGADZNXHPERWOFILWNXJCULPYLOZUVLSMVPDOGUNVAILZGWFXTAPCEGDFOCCH");
    msg.last_error_time = 0.625809893567796;

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
    msg.setTimeStamp(0.3432606136527192);
    msg.setSource(25774U);
    msg.setSourceEntity(145U);
    msg.setDestination(56287U);
    msg.setDestinationEntity(217U);
    msg.mask = 63U;
    msg.max_depth = 0.12801594613636202;
    msg.min_altitude = 0.19379983075868934;
    msg.max_altitude = 0.9755760509103032;
    msg.min_speed = 0.2761832732011015;
    msg.max_speed = 0.93445139658425;
    msg.max_vrate = 0.17857475439763137;
    msg.lat = 0.819650089222862;
    msg.lon = 0.7382747656102886;
    msg.orientation = 0.2500773685389064;
    msg.width = 0.7019356888622187;
    msg.length = 0.278852284302485;

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
    msg.setTimeStamp(0.2516500199345191);
    msg.setSource(39361U);
    msg.setSourceEntity(236U);
    msg.setDestination(45232U);
    msg.setDestinationEntity(160U);
    msg.mask = 111U;
    msg.max_depth = 0.8795328028775955;
    msg.min_altitude = 0.7601480448220349;
    msg.max_altitude = 0.8096651790499384;
    msg.min_speed = 0.5022139219333588;
    msg.max_speed = 0.2561667326526318;
    msg.max_vrate = 0.26592889469417325;
    msg.lat = 0.9287844648679159;
    msg.lon = 0.6441779215173795;
    msg.orientation = 0.23410053416130194;
    msg.width = 0.37160005002145247;
    msg.length = 0.9648393644396611;

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
    msg.setTimeStamp(0.6047137816154383);
    msg.setSource(2131U);
    msg.setSourceEntity(254U);
    msg.setDestination(28033U);
    msg.setDestinationEntity(52U);
    msg.mask = 46U;
    msg.max_depth = 0.16655789470292914;
    msg.min_altitude = 0.3741426291096901;
    msg.max_altitude = 0.02393064414624524;
    msg.min_speed = 0.5111479492355087;
    msg.max_speed = 0.7413041678358636;
    msg.max_vrate = 0.911468899780277;
    msg.lat = 0.334490879058173;
    msg.lon = 0.4546638883610442;
    msg.orientation = 0.6093013097625715;
    msg.width = 0.8027127919202109;
    msg.length = 0.27736591550524436;

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
    msg.setTimeStamp(0.36887016436547193);
    msg.setSource(38129U);
    msg.setSourceEntity(252U);
    msg.setDestination(2532U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.05711577730518602);
    msg.setSource(60360U);
    msg.setSourceEntity(246U);
    msg.setDestination(20593U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.48104086868155826);
    msg.setSource(20081U);
    msg.setSourceEntity(117U);
    msg.setDestination(45692U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.6966443086790272);
    msg.setSource(21430U);
    msg.setSourceEntity(97U);
    msg.setDestination(37480U);
    msg.setDestinationEntity(0U);
    msg.duration = 61503U;

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
    msg.setTimeStamp(0.2326614184953636);
    msg.setSource(64562U);
    msg.setSourceEntity(186U);
    msg.setDestination(33003U);
    msg.setDestinationEntity(9U);
    msg.duration = 8899U;

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
    msg.setTimeStamp(0.9476374900897931);
    msg.setSource(52064U);
    msg.setSourceEntity(252U);
    msg.setDestination(36224U);
    msg.setDestinationEntity(193U);
    msg.duration = 27723U;

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
    msg.setTimeStamp(0.29609469297113256);
    msg.setSource(47837U);
    msg.setSourceEntity(53U);
    msg.setDestination(19077U);
    msg.setDestinationEntity(154U);
    msg.enable = 232U;
    msg.mask = 245348708U;
    msg.scope_ref = 4159369087U;

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
    msg.setTimeStamp(0.47454471352475047);
    msg.setSource(36586U);
    msg.setSourceEntity(190U);
    msg.setDestination(45441U);
    msg.setDestinationEntity(85U);
    msg.enable = 125U;
    msg.mask = 2851477834U;
    msg.scope_ref = 3744542834U;

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
    msg.setTimeStamp(0.03935846107807328);
    msg.setSource(12277U);
    msg.setSourceEntity(157U);
    msg.setDestination(3456U);
    msg.setDestinationEntity(99U);
    msg.enable = 195U;
    msg.mask = 3739720500U;
    msg.scope_ref = 625539468U;

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
    msg.setTimeStamp(0.9039913525792586);
    msg.setSource(23050U);
    msg.setSourceEntity(43U);
    msg.setDestination(17516U);
    msg.setDestinationEntity(137U);
    msg.medium = 177U;

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
    msg.setTimeStamp(0.19706538818518726);
    msg.setSource(49772U);
    msg.setSourceEntity(153U);
    msg.setDestination(65463U);
    msg.setDestinationEntity(200U);
    msg.medium = 112U;

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
    msg.setTimeStamp(0.8147368148151577);
    msg.setSource(25965U);
    msg.setSourceEntity(183U);
    msg.setDestination(63098U);
    msg.setDestinationEntity(230U);
    msg.medium = 171U;

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
    msg.setTimeStamp(0.5417433670048507);
    msg.setSource(18440U);
    msg.setSourceEntity(252U);
    msg.setDestination(9725U);
    msg.setDestinationEntity(84U);
    msg.value = 0.32283397001831304;
    msg.type = 133U;

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
    msg.setTimeStamp(0.4035459392129409);
    msg.setSource(39902U);
    msg.setSourceEntity(148U);
    msg.setDestination(53796U);
    msg.setDestinationEntity(125U);
    msg.value = 0.5987797265851598;
    msg.type = 95U;

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
    msg.setTimeStamp(0.7171407674808591);
    msg.setSource(52794U);
    msg.setSourceEntity(246U);
    msg.setDestination(29612U);
    msg.setDestinationEntity(76U);
    msg.value = 0.1166077068960586;
    msg.type = 38U;

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
    msg.setTimeStamp(0.1990844220436545);
    msg.setSource(47824U);
    msg.setSourceEntity(180U);
    msg.setDestination(45651U);
    msg.setDestinationEntity(24U);
    msg.possimerr = 0.7395723682948226;
    msg.converg = 0.7494338440489439;
    msg.turbulence = 0.7533945876321759;
    msg.possimmon = 210U;
    msg.commmon = 218U;
    msg.convergmon = 82U;

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
    msg.setTimeStamp(0.9652540716894232);
    msg.setSource(36138U);
    msg.setSourceEntity(212U);
    msg.setDestination(26563U);
    msg.setDestinationEntity(19U);
    msg.possimerr = 0.916353996504407;
    msg.converg = 0.8960025564577508;
    msg.turbulence = 0.9615557870449886;
    msg.possimmon = 34U;
    msg.commmon = 68U;
    msg.convergmon = 219U;

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
    msg.setTimeStamp(0.7906574746012192);
    msg.setSource(43934U);
    msg.setSourceEntity(243U);
    msg.setDestination(60834U);
    msg.setDestinationEntity(59U);
    msg.possimerr = 0.9266723566471464;
    msg.converg = 0.4779386209944039;
    msg.turbulence = 0.5057401305802052;
    msg.possimmon = 50U;
    msg.commmon = 98U;
    msg.convergmon = 175U;

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
    msg.setTimeStamp(0.3518584823273564);
    msg.setSource(40717U);
    msg.setSourceEntity(199U);
    msg.setDestination(40049U);
    msg.setDestinationEntity(12U);
    msg.autonomy = 185U;
    msg.mode.assign("OATQTDZOWSJTNYVYMEBOFCJGQEDZWUJSMSQLBCEGWHGMXAXNAYMWFSVOERIJXAUZNFDGVCFXHCBTXXUIRCDCMTTIQTZHBDQPVURCJTAGSPDTPCUGMIOSRQFUXKDVDIWCXKRIMLRRQNALZKLHVWALHBRNLJBYWIOOPHLAUHNYIHGUCJBEJUMDKPKPSYYQFZOONOERNPBFGYDYVXUGZWQMWGNEFQE");

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
    msg.setTimeStamp(0.8059421388091403);
    msg.setSource(46554U);
    msg.setSourceEntity(67U);
    msg.setDestination(36916U);
    msg.setDestinationEntity(219U);
    msg.autonomy = 117U;
    msg.mode.assign("DHRUKRZCYGOPHIYRDSRAUBHKRJGDBJABWMVPXPKJVBTDAOLTQGECKTFJJTTUWFNRPNGTBVXMQFRZZSWAQCIDOUPULYUXXTZCKVIELIFNCZYNJHJUEZUGIDEWVODXYMDPBRVWBD");

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
    msg.setTimeStamp(0.8520651585972324);
    msg.setSource(38997U);
    msg.setSourceEntity(12U);
    msg.setDestination(51064U);
    msg.setDestinationEntity(112U);
    msg.autonomy = 74U;
    msg.mode.assign("QFDWXREXTNZAGSQFCOQCYUOCOEYMAPVLXBOTQKZPYWOWGQBUVXMDFEZSVFGAOKJDAWIHJKSOIGWJUEAUPJLRDRBIOLNJUTKVZLVCQAZFVYLDVFHEVOTGZHSLCUKMHPFGRRYVZPDILPKWXMUQMZSPDACYHSOQGSTKINPUFNPIRIYNKMQIYWHHTWJUDKCXXBMIJLBJGYLHVEAEWMZQGBUNRPKAJYBHMRTDFBCL");

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
    msg.setTimeStamp(0.19155164403077796);
    msg.setSource(31916U);
    msg.setSourceEntity(83U);
    msg.setDestination(19231U);
    msg.setDestinationEntity(131U);
    msg.type = 219U;
    msg.op = 117U;
    msg.possimerr = 0.45195883113077195;
    msg.converg = 0.2831086712929587;
    msg.turbulence = 0.0665695264747852;
    msg.possimmon = 25U;
    msg.commmon = 21U;
    msg.convergmon = 231U;

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
    msg.setTimeStamp(0.7534819363740075);
    msg.setSource(64216U);
    msg.setSourceEntity(10U);
    msg.setDestination(4084U);
    msg.setDestinationEntity(23U);
    msg.type = 246U;
    msg.op = 39U;
    msg.possimerr = 0.08888135703230471;
    msg.converg = 0.21787931250809456;
    msg.turbulence = 0.5146042753130339;
    msg.possimmon = 166U;
    msg.commmon = 211U;
    msg.convergmon = 246U;

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
    msg.setTimeStamp(0.7154009071249967);
    msg.setSource(21987U);
    msg.setSourceEntity(53U);
    msg.setDestination(36921U);
    msg.setDestinationEntity(33U);
    msg.type = 28U;
    msg.op = 254U;
    msg.possimerr = 0.1181265944163492;
    msg.converg = 0.6691722042780557;
    msg.turbulence = 0.30925670629310076;
    msg.possimmon = 231U;
    msg.commmon = 206U;
    msg.convergmon = 233U;

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
    msg.setTimeStamp(0.6844378202064052);
    msg.setSource(51752U);
    msg.setSourceEntity(101U);
    msg.setDestination(31834U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.654081611499909);
    msg.setSource(36820U);
    msg.setSourceEntity(8U);
    msg.setDestination(30245U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.3550658953319449);
    msg.setSource(1094U);
    msg.setSourceEntity(254U);
    msg.setDestination(7740U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.4406970821672195);
    msg.setSource(33424U);
    msg.setSourceEntity(159U);
    msg.setDestination(16514U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("QPJZKAJRGOANPNQJUDJDZAYEYBSBAVLKNHZUWOGVXDLICADOWUMXIAQFNZKHYYPZHSTLMBMFCCE");
    msg.description.assign("XCCDWVPTIHNAURTANLISJG");
    msg.vnamespace.assign("YJONKQONHXWZNQLZHNRCNTBDKKRVJYSXVDWBMJCEOJQULBDRBEAMVUQZPSXYURFZXJMGHJTEDDYGTMNTWRQJYABTZOOSJPIUAPDWZDTSGLJXILRVHWCJDARLBSTXOKRET");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YEYHGRCVJJECPRAEOVHZHUKAXWNSNCRBLYZJZISKJLDNBNUTQFWXFGMYLEGIVBPVENWPBUHKSWSALJPTETTZPHVUYICQRZDDXUNTQWIKHPGYLGFLOAXFEMHVNDXKFBKQHPMXZDXZVKODEWLQVLGXGENOTRSAIRUJRUHZOIAFNVXUHGEVPPATDMOZYRBWUKQCDKAFFOLQMIGTOOINIZQFMBKQAFMMUSSYJTC");
    tmp_msg_0.value.assign("SLNFWEWDENFBHWDNFTSKIPHBEIWUWVZCPTBBHBNLYACASMWSDMWOFFAUMEEZGLUWKBLHOZLNQEXVJHVCAVKJLUDGGSNQTKZBUHCRRFNYQMXPVKZUIRLQPRGEUAHVVYGADSNUHDIVYJLAYM");
    tmp_msg_0.type = 229U;
    tmp_msg_0.access = 105U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FVWTQACFGJXKYLEFBJZMUZEZYZBULLBHNLWDIWXRINPJLIVWJHZSHNJAJCVFMXCIANATMLITBYASUWMNDMOHGZAUNMRIOPPNXIHTRYSDWXDVKODJEREADITGSOCPIWIBSFUHXACCFFTSRBYQKZYNQRJQVSXMOTTXGPHUNWKPQMVEQYNHPZODGAYARZPLPSGQVEFCCGVWKRMMOHOBSJBTUWCBKUDGRVVLYGLBESUHKQLEJKOPZKO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LTRNRKYZXGXZPXSJGZLDEOJKBOKVLMFFESSSEHMDINMPBWDLBILTEVAVXDKABVREJMPXAWAFZIBDQMEGAEWWOCVNZNMKFCVMIDPZRERWKFAESPFKUYHNOSRSUDGACXHICKTYWCCHIZUJYWTSOEPQVVCOITIPBCTQFLHWJUSOCQ");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.03366754839396158;
    tmp_tmp_msg_1_0.lon = 0.6904242154265096;
    tmp_tmp_msg_1_0.z = 0.25271215300985106;
    tmp_tmp_msg_1_0.z_units = 163U;
    tmp_tmp_msg_1_0.radius = 0.7331173638977286;
    tmp_tmp_msg_1_0.duration = 4245U;
    tmp_tmp_msg_1_0.speed = 0.6522660961310909;
    tmp_tmp_msg_1_0.speed_units = 29U;
    tmp_tmp_msg_1_0.custom.assign("ECADPIGQBSGPVKBTDBMRKHHQWLZF");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::FollowTrajectory tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 24024U;
    tmp_tmp_msg_1_1.lat = 0.834970239309792;
    tmp_tmp_msg_1_1.lon = 0.7651521260841915;
    tmp_tmp_msg_1_1.z = 0.18993175923875816;
    tmp_tmp_msg_1_1.z_units = 123U;
    tmp_tmp_msg_1_1.speed = 0.09991419289207681;
    tmp_tmp_msg_1_1.speed_units = 203U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.x = 0.0019875922122422063;
    tmp_tmp_tmp_msg_1_1_0.y = 0.49911660252392454;
    tmp_tmp_tmp_msg_1_1_0.z = 0.35935662209996866;
    tmp_tmp_tmp_msg_1_1_0.t = 0.786552949980749;
    tmp_tmp_msg_1_1.points.push_back(tmp_tmp_tmp_msg_1_1_0);
    tmp_tmp_msg_1_1.custom.assign("FQIVXXFAUIHHSPYQSNUXJYQBOUMCLKWCSUGEIVKOGBOQXCAAYCRSNPWOEBMUAPCGYEIKLYLSBHIWHGRKLMDFIITHMXPWJGFBMHMAEWJNZZHCLVGEJHEAJMJRYEZQKQTQDWDOZTZNBSSGOPLYWJXQRPSVECZNBDGEVOXTIUUFPKTRRTNODZPHU");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::FormCtrlParam tmp_msg_2;
    tmp_msg_2.action = 15U;
    tmp_msg_2.longain = 0.3675916468653606;
    tmp_msg_2.latgain = 0.4741663367298168;
    tmp_msg_2.bondthick = 4098473428U;
    tmp_msg_2.leadgain = 0.0978503645277724;
    tmp_msg_2.deconflgain = 0.06850617521093483;
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
    msg.setTimeStamp(0.14747789320608617);
    msg.setSource(56483U);
    msg.setSourceEntity(177U);
    msg.setDestination(11529U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("PNBCLABYXOVYZCOYPJWQJDMOXRQILMCVYJVSWIUNKPWMQKVMUYEDZUZXHLBFZMSSOPCHFJLUGILUFIAPKFRQWNLUJUVFMTTANKLGBTBLRWORBTGLFAXGMENQDLUSUDHGNDDCUJYCOZPZRTAXYNCZHQPESTOKYFXSPRMRHEIWKXJNIIIQIREODBTAOXDGATHVWGERVMZVSHAFBARGOEMZSHJPYKFTTKKJPWBCDHQSGQQKWZIEJ");
    msg.description.assign("NTNOMOLRIZAEYSYVGOWBFISYHTMXTSRXGHCTMWONHAJAMICAPBYBGZEXMEFQNJBDQBIVR");
    msg.vnamespace.assign("ZIZRHJXVPYWGYRQDYIFMGTW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LNJEWPMICAAEDOIAWTSIWYMVKXOMFNPPIRDXTZQFAMVUCQKXYBVJTPBNCXSWDBAJVAOSYNREYHLGLRBMHLHGNSQIVDQMYNAETYKSRXGGFHBOTCNGUAVWBOQZMVTDWQZLYFDGUYPIQLPQTWXWCIRDKRDIRXRNEU");
    tmp_msg_0.value.assign("JRPMWTPMRIUXJZEMJYPOVGSKRIYHOAWMOPZKMGITDMRIWTUNMGDHELDCZIUYTUTNQHHASLFZNXILAIYSKIQCZZRCKGECXSAFVDXEFBNUFLHOFNDSNFFZPCHDHWOOXXQDGWAQQTJVAEBTXSKJOLFJQLJPRLTRLZQYGCEUDVVCVGNUAKZETYKGSIQXKBEVLSBZGBCACADBCRWTVQB");
    tmp_msg_0.type = 20U;
    tmp_msg_0.access = 166U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JISJKTLXYZTFHGJFGIOEZKVMWYBJTDZTEBGLMDWLLFJDXXAZJEMARQFCDRRACOGHVCNBSPWHYAMUUXYSYCTFDTYECLJURDNZKKBGNWGIBQJEOUXKPBWUNSJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("YHIOMOJMYUYUIFLKPSTIAEQDWDCRQRXBNXFYLLAVIMIGNQVXQBNCEJJQXOYJMAPWGSKLZPEBJCXXXKKQYKOOWDZFWJHSLMSEDQNIPRDEKIAGTTSDAKBNTCUGVANZVUWKPTAEBBCRFTYLGYPLFRWJNHEMMSZOLXZUWZGVBFKWLVXRIPJHTTBZBUOVSHVZSITYEJECCHKBFHFJ");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 9860U;
    tmp_tmp_msg_1_0.lat = 0.6225743162085273;
    tmp_tmp_msg_1_0.lon = 0.29399882645526876;
    tmp_tmp_msg_1_0.z = 0.4076451783282814;
    tmp_tmp_msg_1_0.z_units = 27U;
    tmp_tmp_msg_1_0.speed = 0.4964471984858986;
    tmp_tmp_msg_1_0.speed_units = 8U;
    tmp_tmp_msg_1_0.bearing = 0.3136857596730538;
    tmp_tmp_msg_1_0.cross_angle = 0.3106297554046207;
    tmp_tmp_msg_1_0.width = 0.16811999592267968;
    tmp_tmp_msg_1_0.length = 0.8052283185476652;
    tmp_tmp_msg_1_0.hstep = 0.6464102552050877;
    tmp_tmp_msg_1_0.coff = 219U;
    tmp_tmp_msg_1_0.alternation = 45U;
    tmp_tmp_msg_1_0.flags = 225U;
    tmp_tmp_msg_1_0.custom.assign("YPNJMZFGQVJSUDKYXJQJCPCTKTDNCLWQNLGMKSGNLAHDVRAZOHDKZIFPZIUSQSBLWVDSHGXFSXANTALOPHAAQIYUSRURBRCPEZXLOZYDGGTOJMTEKOBNECEYONTKRAV");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("BRZWYJVEZLODTNBLESQFIPBDVASBAQWSNUJNXYTGUDEUQKQOXUMOGFBQUGRNTUTIWJJNPQQANCHLHISRNSCOYXMXSWEMLRXPBMNHVDZWKOOIJMUHUVUPRTSKYVMNOGGVHVCJDWKZZOLTYPSGGKSXHX");
    tmp_msg_2.dest_man.assign("ROVUYSEHSNRQKQCTGSDQUVDNBZDPJILCZSRABUDLNKTXTXSBVPOKOCPGOEMEOYIQNCQNBYYNMUGOWIEDTLHOHGMLPLRPEQLUOFHPAJIRRVHRBIGUXJQTKKRFHAUCLFBJSYY");
    tmp_msg_2.conditions.assign("MFPSLJZUBXXDKEMBQHALTWMWTNGFGYHLEFVTANQCSPCYSURONOPZVJQSNCHWOXPMHIKQPLFNMSJDKWTHTWBTWMVQQYPDOGBYGRGCXTUZ");
    msg.transitions.push_back(tmp_msg_2);
    IMC::SmsState tmp_msg_3;
    tmp_msg_3.seq = 1492892356U;
    tmp_msg_3.state = 195U;
    tmp_msg_3.error.assign("NHLFOUVSOZXSTYDGFKPNLNLJSMJLALSBYQVYDBMVEWQVEOEENUPWUTIXPALPEXCQWOQCJEHMQPSSMFUXZBQHRRHUKOCGJVYVMJKLRBXZQLWUBFNWRRXUDLHJTONVFCDXRZIBVOBKDCAHIYGGMAFAZNEHDITHZYHUVTZZGSCZGTFMKTBYIHAETTCSIPROCPADNNYIUQBARBCX");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.39086188148405887);
    msg.setSource(14757U);
    msg.setSourceEntity(176U);
    msg.setDestination(44520U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("EAXQCFVMPEHRCKSJNLJMIBVLMCGWJWUPBEIHHYMUNWGBSKLENSCRAJGWMQPABDTEQOLJCZFEGQDSWMLXHSUUNCWZHIIXANVGZKDXDTHDMYOYBDOPKTZJYUKZPQIIYLTSNXYPR");
    msg.description.assign("DSARCKTJTLWUDZCTJBYGDRUSHTESMMCMQNRPTIJKYWEYIOQYWFUGVE");
    msg.vnamespace.assign("FBFZCYMPEDJIPSJTAQYSJZYWZTTUPLRFHDESLHQYMCWDXSIVJWKQRIRZGVAPRWJWZRRBXSNKGJUONDVLCNGUNIEQQBLSWFHQXOFUVPLVXEWHVHOTGBGKNWXANADSAMLQAAMGTBMLCIATVZCNKECPGIVBAPHICGGSKOXMGJRISEOYYYCFKZUDKPMTTYQZKTHXYJFUULZFAKOOCRQDWFMV");
    msg.start_man_id.assign("HHMCSRUXNAHWVJFMTRNZOQPXYYSXBBIRBNDYCDYWWYZDMIFIVHFTIEBCIRFRGOUGUKXOKTTYMNKJNVTDLTGZIFQSLGJHQWUACTMXBNAAGFZERDFCSMVPUXLPNRDEMCZJ");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.17449524926840798;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::PopEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("TMGVCRYOFUVBSMCEQXQGUFKEPHLJOSKCAFZAYQBZASTFODNDUUWKZIGHXONMVMMSYLMOGYFBEADKTRMMIFDCNTLPLBWKEHZXBSUYZXUYRHIGXCVLJCSZTOOZXWFJEUGFBIJNKPPVPBHKHTLDXRJJHGWJGWQWJJNRBDUA");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.39425600284102047);
    msg.setSource(35332U);
    msg.setSourceEntity(138U);
    msg.setDestination(57909U);
    msg.setDestinationEntity(129U);
    msg.maneuver_id.assign("WSBTBFDLJPSUSOZGMHCEVSXETBCAQMZBCTGKPKILFHQOERQJBCYFASJHZGUITTYVPLVXFZLMBUAVDLJHDFQIVJFCMYXKPNVDZTSMXJWGFFERRRPUNVSGYQYSYRDHUKNPKUECGOIQAWLWDDUXTQHEQOHDZHANAAEOXLPNXDBWIJUGAEXFRPWOOVRGYRYUCLENMOBZK");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 49215U;
    tmp_msg_0.lat = 0.9143210002612924;
    tmp_msg_0.lon = 0.25991085473315134;
    tmp_msg_0.z = 0.7845266207727342;
    tmp_msg_0.z_units = 130U;
    tmp_msg_0.pitch = 0.9360294653130691;
    tmp_msg_0.amplitude = 0.09283496722341722;
    tmp_msg_0.duration = 51636U;
    tmp_msg_0.speed = 0.16745337489734624;
    tmp_msg_0.speed_units = 79U;
    tmp_msg_0.radius = 0.5225660074261115;
    tmp_msg_0.direction = 155U;
    tmp_msg_0.custom.assign("WLUJYEDUOABKIAXRLDGMIEFXOJCWXVZMXTGBBCYTVOGEKYPZAPFWEXNJDIUPQMFHQSHTLKXNNGIHSSLTTBJMJTHJEQUUBGKGNCSNQKFWBEFQRDW");
    msg.data.set(tmp_msg_0);
    IMC::PlanControl tmp_msg_1;
    tmp_msg_1.type = 123U;
    tmp_msg_1.op = 194U;
    tmp_msg_1.request_id = 39259U;
    tmp_msg_1.plan_id.assign("PTOZAPEIHJRXNVVYUEWHZKLQBEKQIRNJHUKNUUZDHSBYQLNZCEVTXFWTJWSASLASNBFOLESDVQGUKRVBYFKJGMTBEPWRZF");
    tmp_msg_1.flags = 50360U;
    IMC::VehicleState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op_mode = 35U;
    tmp_tmp_msg_1_0.error_count = 148U;
    tmp_tmp_msg_1_0.error_ents.assign("SIHACODSJRBTUBBKLOEGCJMTOFFCEGQKLEQAMVOWIJFNUUMJMOORGKNFHTPWNEXSZKWZTGYNLKOJVIAYRZMK");
    tmp_tmp_msg_1_0.maneuver_type = 31528U;
    tmp_tmp_msg_1_0.maneuver_stime = 0.048007821315795285;
    tmp_tmp_msg_1_0.maneuver_eta = 35181U;
    tmp_tmp_msg_1_0.control_loops = 1103198753U;
    tmp_tmp_msg_1_0.flags = 102U;
    tmp_tmp_msg_1_0.last_error.assign("SYMVRJUUDXHUFJADOIWNHZQARTNQYEOBQGBDCHKPFQLKPCHRBNMVOFFRTJKCXIBEYAQQFGEFJCVEPRLUTQCNJ");
    tmp_tmp_msg_1_0.last_error_time = 0.8513129189490586;
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("KKEJYGUSTOFUDXNRWEGNITVWTUXMTYGSWPOTBMYNDGGBRHXFNSVJHVXBFIVEGPABSMBRPMQRXZFLYWSNJXQFPPRLNXTQGCIKCHRHPDKOIQAYHHQLEKDHWFGJSCNBEMACVQAAIIJSQDKARJLOTV");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.22851877717311297);
    msg.setSource(3247U);
    msg.setSourceEntity(111U);
    msg.setDestination(6464U);
    msg.setDestinationEntity(150U);
    msg.maneuver_id.assign("BBZTZEOLCFSRGGYNOFPOQYHGNIBZCCNUSTHREYCDMZXHUXOONKCFCUDCPBJAXRGOHCWBEIQIKMXJPJUWAIKBFYDMMJZNQPFDNEXAYWPRMFSLZVKLRNTMCGEKUOAWUTKPXNFIKHYTOLXKJQGJEVSRPJSHFDMVSTTAHGIIDUVUOJLLBRIRWYHHZZSAQDPYAQGIKUASNPXMDXLGAWYNVVQQKEDSWIRVYTRBLWVB");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 41556U;
    tmp_msg_0.lat = 0.18382671578442045;
    tmp_msg_0.lon = 0.873913690815446;
    tmp_msg_0.z = 0.06564065283959375;
    tmp_msg_0.z_units = 226U;
    tmp_msg_0.speed = 0.25437586734900186;
    tmp_msg_0.speed_units = 251U;
    tmp_msg_0.custom.assign("RGIJGYORAVVVSCUHSGYFJQNXTRSWNQEREJMOIXMEBIUASFRBGWWUKQHVQSRDWDZ");
    msg.data.set(tmp_msg_0);
    IMC::Calibration tmp_msg_1;
    tmp_msg_1.duration = 56743U;
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
    msg.setTimeStamp(0.6612965955055543);
    msg.setSource(35104U);
    msg.setSourceEntity(88U);
    msg.setDestination(49638U);
    msg.setDestinationEntity(19U);
    msg.maneuver_id.assign("IHFMVDWJCTSXCSBETIDQSKBLYQQXWUGJMPZYPEBLWIRNEKYSYRLSJNNRTTYXNW");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.7275984743660974;
    tmp_msg_0.lon = 0.8821616271993823;
    tmp_msg_0.z = 0.24348340281970704;
    tmp_msg_0.z_units = 172U;
    tmp_msg_0.speed = 0.6347136040185088;
    tmp_msg_0.speed_units = 4U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 63488U;
    tmp_tmp_msg_0_0.off_x = 0.16804540912284305;
    tmp_tmp_msg_0_0.off_y = 0.1807764927991704;
    tmp_tmp_msg_0_0.off_z = 0.8832153927733049;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.22906467552041354;
    tmp_msg_0.custom.assign("PLBELCTDEEYMHMCSDYAINPGWVHNIJORFAJAVAPQLRTYVIXDJJACYUDEXSCQXNBCOUPSUKATWKCDSGIQOSVNXJAMTVWRLBVWTPYEPHGQNLAJSGZ");
    msg.data.set(tmp_msg_0);
    IMC::CompressedImage tmp_msg_1;
    tmp_msg_1.frameid = 128U;
    const char tmp_tmp_msg_1_0[] = {116, -66, 24, -111, -8, 106, 58, 2, 79, 85, 110, 15, 2, -109, -79, -14, 108, -58, -125, 28, -114, -59, 108, -5, 118, 55, 15, -87, -24, -84, 33, 114, 3, -10, 55, 73, -44, 19, -83, 83, 26, 24, -77, 64, -105, 28, 115, 84, 113, 82, -8, -68, 90, 125, -29, -114, 67, 100, -28, 5, 102, -79, 24, -3, 4, 87, -63, 25, -103, 11, -97, -95, -7, 3, -93, 90, 119, -50, -61, 111, 13, -77, -65, -48, -82, 100, 67, -46, 5, 77, -79, -15, 116, 11, -50, 47, -100, -82, 46, 25, 25, -93, 99, -42, -96, 121, -85, 48, 38, 23, 23, 58, -10, -74, -80, 56, 108, -74, -75, -38, 7, -107, -20, -56, 111, -88, 64, 98, -110, 53, -96, -44, -105, -62, -27, -104, 43, -28, -80, -20, 102, -13, -8, -1, -26, 14, 92, -70, -44, -108, 117, 83, 11, 31, -57, 97, 81, -126, -46, 111, -96, -44, 91, -45, 124, 83, -104, 45, 35, 30, -30, 81, 86, 98, 89, -11, -47, -49, 85, 123, 39, -90, -22, 26, 44, 18, -15, -127, -108, -11, -117, -106, -6, 53, 12, 125, -18, -80};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.7561012292696203);
    msg.setSource(5900U);
    msg.setSourceEntity(87U);
    msg.setDestination(33491U);
    msg.setDestinationEntity(127U);
    msg.source_man.assign("CWOYMXMZEQGOGFAOZRIAGIKSVRSRLTCLDZVUVEPXHIAXOKJLYNJXPJQNWNVKHRIMNZIZGGXGLJUHHW");
    msg.dest_man.assign("NUPLTSGDPHYVFOOWDRAEIIBVRCIPGCGVQCEMGUSSUJOJOKHISIBLJNBVJSYWVFKYHZYQWIAAINXDDYNMFTHCLAPSTFUTLXYKOMILYXPQVZVDEGLTOXFQVASMMWPEXFRQAFKNKFCPUKOGEYKXRGAJMGCBPWLJZTWSAZBQOTXNBPGWRLICVAZSRNZUXTTDBVRRDDHUQGEFBPBHHWQFDQBIHOXDWZNMMZUM");
    msg.conditions.assign("XOQNHLUIELBVXLQDBTVZZTSJL");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("GBJXAITLVYAZIODQSOZVJVBYHDVUPRWOPRHSLHTRNVZOSYRVBCISSMPQWTLVPFZFFCMAOXLDWJGJYQNRGLEKTOUNUJGJUELZTEXHBOATOIDDFQMJAGBMUHZUVEZQKHKZNFCGQYVGABCSIKMBMNVYBMKDCBSNKIDRYWWHALAUGDCWPXWOUFEKQUEEGTLWQOLACXDRETKYFQKMHPYIPWXFXBEMJ");
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
    msg.setTimeStamp(0.051742154991175626);
    msg.setSource(6480U);
    msg.setSourceEntity(82U);
    msg.setDestination(11145U);
    msg.setDestinationEntity(8U);
    msg.source_man.assign("MQOSACNKCJCQMSNWLYSUBQRMYIMURYKDRFLFINSSTGPYDAXUIYPMHC");
    msg.dest_man.assign("GGMRXHWBZPEHQAUIBRQUOEFZEZUWYNGAFOHPUICTJQVVQHBLWSYPERAVMCXJCZGMWOLEPFPKUOGRKTTEURNXPMLKZDIGGNABFNISRAYFCSIZBFJNBSHAHIWHCDLODRXJOQCKDSFTJKNEYKYFHAIDUVQXJQGDILJZBLRGWKWRWUVXTZVXFUCNCNKLQXWXVDPKTPCAZYN");
    msg.conditions.assign("GSSNVGQLBDCUFYEYQMEXTRIRMOJQYLSGMYKMKNUOFFBVIPJSUEIYDPVWURIXMJATDUITXDQKBHXZBLBGHQALFIKNOEOGURHQTFZHHVOHBAQSXVQLJDWTCKEUJOSTPAJEBPEASOCPPBENAHLFYWTQDXRHFXWGRMYNGDYOGPJHFJPWAVFOUJUWEOC");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 0U;
    tmp_msg_0.mask = 4291308042U;
    tmp_msg_0.scope_ref = 2062849427U;
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
    msg.setTimeStamp(0.16720704149513144);
    msg.setSource(22526U);
    msg.setSourceEntity(122U);
    msg.setDestination(32427U);
    msg.setDestinationEntity(54U);
    msg.source_man.assign("LRKOMKMKLMVDMBLUHCGYSAUBWNQCLZIZQMQOARPNATGXNEWAIQYOSJXXBJCBTGCWKPVKUIUCWEIBDECGUPFSQZCSVEFYZDLMXDFZQMTLBELNLNQAXIIJTWFLNDUFAKWYKYIYEIKQIWYDEPBYGWRSOGDOZUHVGPORTSRJFSSQZUETPZLVV");
    msg.dest_man.assign("UQVQEYVQNJALVVOXONMSKIMMXYEEUOKPAILWBRLOWRYYBXSJUXFBALFHZGHTSHUYMCKGWDZPVBFTGIVHNMDAMGXYFPWYNQRAGAFJLKKEGEVBVGEDQKHCCCZNBZTWHESOMSIZSEPJKMDLOFYFZTPKZPAPKDSUSSICHFNRUJIZHYLOUGQMNOBLICWFJNFKTENZRDCIXLADAUWSWQRCIHTEWJPQ");
    msg.conditions.assign("QVRZZILRNLYM");

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
    msg.setTimeStamp(0.586087651595822);
    msg.setSource(2958U);
    msg.setSourceEntity(91U);
    msg.setDestination(27650U);
    msg.setDestinationEntity(78U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RSQQQQKVSFLSLBJHBRYRYOKMNNOLFCJJZSLXDNITTCFQNOJETIBVHAWHADJGGPNXYGM");
    tmp_msg_0.description.assign("KVLEGWPDUNGOCZRCVOA");
    tmp_msg_0.vnamespace.assign("GRMHBABOKXKLHDKYLLWNISGQGEOPCRZVHJZENZUAWNHRJSJWTLKSX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BMCGROHTDAAESBNXOFYZARUNOJRIOQXHHYSCGNXDKMFWUHWYHFBWMHEXIHCZVEZNWX");
    tmp_tmp_msg_0_0.value.assign("BNZZYQGICZCPFGQXPRTYUHXRJTOBRHKKEDIALNNNFNLGSLHVMBIKTNIHFRYLTFOFIKPYIYOAEAQLZRTVSODYOUVPOALRUKGJJGXRPXFWWUDSDHSYWUIAFCLIEKHTEBCFJM");
    tmp_tmp_msg_0_0.type = 237U;
    tmp_tmp_msg_0_0.access = 135U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KAXOELGBFMZYUETAZXFXQCJIZDQHQEKQOBTZMJSPMJAENKJHLRUELDAOXSHCYXPGFIMVCTJWQHHSPPCJF");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("IXVCAVODLMIJFNZXSRAQPMRELSNJURVOEBUYKDJUPGRAOVGFPLKAZZBPBSDBTMBXKWEDJVLWVVDMCHPSLHHBCNARXGSJRHCZQEYWCOXSFLULZTTOYEOIJTXACQNVEGSQRFNIEB");
    tmp_tmp_msg_0_1.dest_man.assign("WZQOHMQIZTFPVTUGIVBLZCFOWGABGS");
    tmp_tmp_msg_0_1.conditions.assign("PBWSKBRXBTUZHCCFUMYMVUDLEYNVTXWWZIITEVSBPQTDETWOHWMCNAZDYJCQQMDNSJGGOHUKJKJPWDHYWMUYYRJODKZ");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9504623507783448;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.8248754356502583;
    tmp_tmp_tmp_msg_0_1_0.z = 0.4485049545305859;
    tmp_tmp_tmp_msg_0_1_0.z_units = 242U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.209245869365961;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 246U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("NPFSGYAXJBZNSOPLFWZDGKFUGCOBTLQCRMFPUQSOUDTMMEHFEENBAJAPYQPUDJCGOMSYIUXWXIOOCEYBVCXRWHXYVOBLHBDMSNZMXTFUPROXRYQXSPXIWZMBIACGLCPZDGZLNSUGTJHSTIKECVMPGWHGVAAZTIUFFMTJREVSRQLRIJTJBAHVYWKHXYUQCUHWWNMLVWVRIOKQRGYDDVZVCLJIAIKZBOELHJFYJTSNNLADQFAQNPTKKDQRKEW");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::MagneticField tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.7501613907165516;
    tmp_tmp_msg_0_2.x = 0.016980298192014853;
    tmp_tmp_msg_0_2.y = 0.9420045806369456;
    tmp_tmp_msg_0_2.z = 0.5291943604534813;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::ReconControlState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.state = 173U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.6720695262546968);
    msg.setSource(27108U);
    msg.setSourceEntity(142U);
    msg.setDestination(35691U);
    msg.setDestinationEntity(6U);
    msg.command = 239U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QFRKECDMQWESNGWBWSBISZNQQDFHXYBJPSKFJNSZMWFKZ");
    tmp_msg_0.description.assign("VXRCKOJAGRTYRFYIPRXWOOXSJLRHTUPBSKQNZJFFMDVSOADIHBLYZOLCBJDWFGXWJQRAGUDMENGDLEAHINNEUVBOJJEGIPQQZIZRSSCVHWXNDICGUPFCNYGXTLXYERAMUQKXPHAQUSWCSKTAAPBMUJMFQ");
    tmp_msg_0.vnamespace.assign("EGFBKROMUKPDMVUJNXFIPIFTVQZAQSGS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TEAXLRRLXCNJQLORZPSXOBFIBDKCGLHQAIEVCJRESVHNUMHIJTKZJLFETRVUSMFGFYVXQTPYNGMOTPWADIBKFKNRXQUZMYEJZMLMUPFJYWXDVJYMEC");
    tmp_tmp_msg_0_0.value.assign("IHBOBSOFLGQWHEFQPGBYDBUKCURSMVEENKWXXBPSETAXLTOHRNZUWFSBTVJEYUXSFYNDLXQIYYHRPVTVQJFVRKHRSFOOIKPKFWRLBXMDFONKQDNWPUEJCUXBCZELKJLGCZEGTJNODZKKMMOMAINGPSTYASTQAJSZDAJCBERVKUMGSRIDDQJZLPIZWRDCTHQNHMLCCYVCMWFGUWYUZAYXMZGVQTNAZPWYJBFWJILTNGAHIDMVQGXHOEHII");
    tmp_tmp_msg_0_0.type = 233U;
    tmp_tmp_msg_0_0.access = 162U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WSCDTDIANBYEBWGRVFZCZXCKWTOCUDTHTMRIFQVWBHUYJVTEIJJNKNQHPXUIXBS");
    IMC::ButtonEvent tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.button = 87U;
    tmp_tmp_msg_0_1.value = 50U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::CreateSession tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 1197044737U;
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
    msg.setTimeStamp(0.3804923514358991);
    msg.setSource(32715U);
    msg.setSourceEntity(100U);
    msg.setDestination(39429U);
    msg.setDestinationEntity(144U);
    msg.command = 120U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TIARUCMAPEHBGMQUIRAGPJTEBQZKLDVODWHWAKLRRFTZTWKJBMQQCACNSPZSCXYHMSLJUCNGQFGQDIEWPABKDOKREQVQHIWYWOHXJIDGKUIEBVQUXJRPYIRINSSBCSVJDJHVJLPATGXADUPXSLJNKYNXVEOYETVDXMONKZMCPOXABGUMOFQXVOBNZZFYLNDRSSLGEBFFFJHCHFDXCMTCUKFIYFLSMBWRRTWUZNLEG");
    tmp_msg_0.description.assign("NLJOBVMHIGEXORCFVEKGFMVZJEXDWQUFDSYIKQCLJPKFVSENMIFGRSUNQQJYCIXMAPHTSFHLOBLWMDPLARNZLPQUYXZKQMFZJHCZBYRHFSIGTSGBPPBUKYOPVSIACZEKWPXNVCJTSQTZNRHRIWDLAZHNRITDFMNAVVEEJIWHSZDJZHDMRQOOEUAUNJSDJMTHYWBQ");
    tmp_msg_0.vnamespace.assign("ZQFKTUCLTOYGDSYKDORXPSYRDHJARYXWSSLDWHRVMISALELVREXMAHRFBVUHINQQSXTUSMECVOXFTOJJQKVSDCEXARQTWWNEAKMULVGEUPIBRGZJMCHIHOIYIAPVBUYTZABZJYDFJNOSUQ");
    tmp_msg_0.start_man_id.assign("JWEUROFQMXMMFKGLZPEAZXKEEHHBYXAZLBTBKFUTGWNCDWISUIQCBZBQCRJQNZIAABVVSQUWXPZEYTTVSNLQGUJDBPFNEUHYAJ");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("QNTTGQAHYCEUUWAENSTLSFKYDRXKICVDFXVVGERGVMKDXTSEICAKOPJJOZFBXPMRPHDZWBLPJHSMLOWHBEZRFEZHNTCTHYWTJHPJIXEGVNKXXCOEHADUYRWNBATJZGOXBUGGTKREZSMXVOQULWKGCPKUYGHRQIPILAMVFBUNCCUDSMIRJCQSLOFVMVIVFTMJFKAJPFLZDWYNQBZYMIIOPHNWRSJRIYKDWDB");
    tmp_tmp_msg_0_0.dest_man.assign("LJKFYKWVKEXNHJFMOHRXYUHIEULXLGIXMVWESQGTFZSYBBOJUSBKQPLVFWYAZTRWPZZVHEQZLBLDGOYYPACRSQVNSUEWKDDNWCNHNTKIMCRMWLBJGOOYBZITXQECOIPELHEBETOGJQOKBBPYIDMQHMVSGONARGFDXVIZCMVU");
    tmp_tmp_msg_0_0.conditions.assign("XWSXXALWTKDZCQCTWPUMKSJOJRFUEQOSBDJHOINLIBRFDVKXKWTANAALHZRJHNFYSYGZNYDHVEVNCMEPGZYEQFVTKNPOPYWUIBSKTJZJAUFXIOMBLAABJDEXRFPQHVJLPVMFOEHBAWKQBRIOGYVGLRSNVYXFNUZWMIRUHLICOEEG");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::TrajectoryPoint tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.1244189513881866;
    tmp_tmp_msg_0_1.y = 0.21135372811543973;
    tmp_tmp_msg_0_1.z = 0.5907174537678397;
    tmp_tmp_msg_0_1.t = 0.5233424662159712;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.023634749934969168);
    msg.setSource(16477U);
    msg.setSourceEntity(47U);
    msg.setDestination(31868U);
    msg.setDestinationEntity(106U);
    msg.state = 164U;
    msg.plan_id.assign("CIQXBPHOWURCUIYSZIDGXDPAGLJAHUNMBPWCJMEISYWAJWFYROEPLEBJXBKUGZMRS");
    msg.comm_level = 18U;

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
    msg.setTimeStamp(0.13763058080782353);
    msg.setSource(49853U);
    msg.setSourceEntity(214U);
    msg.setDestination(29607U);
    msg.setDestinationEntity(193U);
    msg.state = 30U;
    msg.plan_id.assign("JMCTLXGLVZAZIPTUHKHBSHZSNIWQYTVSUQPKSOEGGYZEXBWZMPEDTBMVASROTQWEGWXWLDGYEBIUKPIZCAYJVSUZCFAAPWCHCVZNKMXFXCONYZDPOUDDUVCBQQQFHRMWMSUGHKCJKLMXELEYOMSGQOAPAQSXIIJHKGVWPVKRKLWTTDDJTA");
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
    msg.setTimeStamp(0.1834402965730284);
    msg.setSource(20304U);
    msg.setSourceEntity(167U);
    msg.setDestination(62076U);
    msg.setDestinationEntity(215U);
    msg.state = 99U;
    msg.plan_id.assign("DUIQOTBDVHTXZVSOOTKLDYVRYSNZCOMVXFCTMZSBHGUIWQIBXJJCWPMSBBWDTIRFVRARKHIITCXUQLNOJGWWAXMFJAVXJGVUDSUFFVYYNGHRPNNZLPVTWZCKZGTKSIQSYKMMNUIKODDLPMMESPHDEYGCXFYLRDWJAELEHPYEBAALXFXXQWMVQRCUTPQEENAGZQAZLKHDBITLUFFNOFRGJJQIRGBBSCCKY");
    msg.comm_level = 50U;

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
    msg.setTimeStamp(0.04999286903454536);
    msg.setSource(6123U);
    msg.setSourceEntity(151U);
    msg.setDestination(24856U);
    msg.setDestinationEntity(173U);
    msg.type = 100U;
    msg.op = 56U;
    msg.request_id = 17827U;
    msg.plan_id.assign("XYHDOJNXKYEZCVAVNQSNNOEXATDXMIPYVPXHZSCRKSZWKWNLXMIRCYOEGQTLJIIFLYDRIRZLLCFVAGGDIXLAZZWOCFUNJMPAGQEMVQKMHJRNBKDDRZBJIHZEPICMBNNYWDOAZVJGYELUKVFA");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 56266U;
    tmp_msg_0.control_ent = 204U;
    tmp_msg_0.timeout = 0.15751394280460695;
    tmp_msg_0.loiter_radius = 0.9090206580486704;
    tmp_msg_0.altitude_interval = 0.38021824113061575;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PQUMBORYOWAUEZNGJSWCRJLBZGMJUFAXVUFXOFDTQSNCLQASFVVMOHRYDADCDQSPBVGSHPSBLKVYUMXTEZOBZKIFEHILOPQIFOCDVCATZKPUICHPKEABRBWZMWMOBRFPPX");

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
    msg.setTimeStamp(0.601129431445774);
    msg.setSource(58169U);
    msg.setSourceEntity(52U);
    msg.setDestination(22567U);
    msg.setDestinationEntity(175U);
    msg.type = 41U;
    msg.op = 46U;
    msg.request_id = 42172U;
    msg.plan_id.assign("WUSSJFWOUFKQRJXHUNZWBZSTYPKEPYIZYUOHOXVQQBWFTRDOCMTJVUNXMFTIRNOWEPLQLAMTCAKDCHGXJEBWKKYLUHAJGMYFJWFGIYXGGNNAEMIHDNELYCSDIHWVUITBGJFZLQCXIRGUUZGSMAQBEBYCNSDYLFQQZLEPTVJSAKJPMARERDGLFHCZSTTRNNMJBZORMEBPOGOXUAVVHZKRBCROLK");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9299029117448331;
    tmp_msg_0.lon = 0.10864453699284804;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IMVYIKAPWOITBECDQOQMXQLFEBQZNCNSGFITCMTTLUKYBODRPGLWLJURM");

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
    msg.setTimeStamp(0.9319573286439082);
    msg.setSource(3166U);
    msg.setSourceEntity(243U);
    msg.setDestination(1485U);
    msg.setDestinationEntity(97U);
    msg.type = 103U;
    msg.op = 60U;
    msg.request_id = 33717U;
    msg.plan_id.assign("LMZYIFKTPHSJULVNWMVAIEO");
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 203U;
    tmp_msg_0.quality = 36U;
    tmp_msg_0.reps = 64U;
    tmp_msg_0.tsize = 99U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FOMKECFCUCDYGRIKROTOMIJWZWGRTJUMJMFRJKVGPBBSMEZNUNZLXSNAWDFVSMXBXIZREJJPSEUSWKWFWQPNJHBYVOWNRDYHVCTYCWUFHHXHGTYOMVIVDZKAMBXTGUUOASEETPUYTLTQXFSJPEDAQAYQLLLAKQHPDRKWABGABSZAGDOTZAZXIEEYPQXCKPUZZNBMXIBL");

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
    msg.setTimeStamp(0.9350764959337782);
    msg.setSource(44334U);
    msg.setSourceEntity(209U);
    msg.setDestination(40886U);
    msg.setDestinationEntity(213U);
    msg.plan_count = 10377U;
    msg.plan_size = 2818576654U;
    msg.change_time = 0.2956961929400018;
    msg.change_sid = 2646U;
    msg.change_sname.assign("VXEYNQKLQZVTZNVMGPKAFJWFL");
    const char tmp_msg_0[] = {-16, 3, 8, -128, 0, 107, 65, 8, 90, 33, -27, -10, -34, -63, 6, 82, 85, 0, 41, 29, 90, 35, 88, -103, -99, -12, -54, -111, 26, 21, -21, 120, 2, 4, 103, -64};
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
    msg.setTimeStamp(0.8475487160836466);
    msg.setSource(8747U);
    msg.setSourceEntity(225U);
    msg.setDestination(46277U);
    msg.setDestinationEntity(178U);
    msg.plan_count = 36402U;
    msg.plan_size = 1009347787U;
    msg.change_time = 0.25415359794471526;
    msg.change_sid = 10867U;
    msg.change_sname.assign("WKSYYNBATYNRCITEFHOPJNULWSPIECHEUYXLSDLUPIXMAYW");
    const char tmp_msg_0[] = {-44, -79, -100, -74, 116, -79, -80, -104, 110, 67, -48, 105, 14, 22, -121, 57, -99, -37, -91, 84, -19, -125, -78, -5, -65, 125, 39, -33, 2, -84, -35, -60, 82, 19, -127, -10, 13, -103, -23, -3, 28, -105, -22, -98, 64, 55, -34, 118, -97, -5, -123, 114, -42, -101, 58, 15, 4, 102, 56, 111, -41, 70, 8, -4, -111, -45, -85, 40, -119, -123, -100, 79, -112, -30, -66, -122, 54, 30, -27, -112, 34, -109};
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
    msg.setTimeStamp(0.23072294473597288);
    msg.setSource(35709U);
    msg.setSourceEntity(110U);
    msg.setDestination(35384U);
    msg.setDestinationEntity(18U);
    msg.plan_count = 27427U;
    msg.plan_size = 2728653292U;
    msg.change_time = 0.01980819341372586;
    msg.change_sid = 63755U;
    msg.change_sname.assign("ECJOPBGNYFOWIKAKTSEWFZMIEORNSIGUCZYAAJGQSQJODSWOVBDWYJYGQIHZXTXVHWKVMHJHMAFRQDHKPKSJNDHNFEDCHBWAQXTKBZBBCCGH");
    const char tmp_msg_0[] = {-115, -85, 1, 97, 34, 113, -121, -119, 104, -104, -16, -80, -98, -65, -118, 12, 86, -44, -74, 53, 29, -47, 0, -96, 86, 86, 126, -83, -55, -35, -50, 46, 37, 36, -81, -34, 65, 33, -10, 89, 21, 125, -46, -43, 47, 67, 55, -79, 11, 88, 64, -116, -57, -100, 21, -101, 22, 60, 67, 78, -100, -18, -56, -22, -31, -75, -67, 12, -73, 101, 17, -16, 24, -118, 10, -27, 15, -12, 8, 104, -102, 69, -50, -68, 66, 49, 2, -90, 89, -22, 41, 30, 15, 90, -1, -69, 54, -22, -23, -43, 35, -1, 64, 59, 92, -100, -69, 103, 70, -98, 13, -53, 18, -18, -94, 68, 39, 30, -27, -80, -8, 6, 64, -11, -69, 14, 45, -86, 121, -102, -45, -13, 97, 97, 119, 19, 18, 4, -17, -53, -128, 123, 10, -77, 28, -27, -34, 19, -29, -84, -68, 77, 78, 58, 30, 106, 93, 12, 18, -19, 71, 8, 82, 125, 114, 59, 31, -127, -100, -16, -64, 113, -88, 57, -9, 14, 38, 56, -68, -65, 1, -59, 37, 87, -33, 32, 44, -107, 7, 18, -108, 89, 111, 108, 0, 48, -128, -100, -49};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PGTXKQWRPEUJFDWMKZUSFXETMLQAVYIYIKLPPZJBSUIBLXJCGMTNNFUXBIVTLKNYOWMHBVFCYMNFOVIOTYAPNTAXKHTSWAWOROQNYKBNNAPRHCFELRCDHQCOVCAMKPHECJRJEOKIGDRWYGIMJUZMXRPAYAPHXVHFGSHEYJDLHQIRJSDAGYUWVBLEJHA");
    tmp_msg_1.plan_size = 60793U;
    tmp_msg_1.change_time = 0.689072347344064;
    tmp_msg_1.change_sid = 10526U;
    tmp_msg_1.change_sname.assign("MOOJGLNPUCOC");
    const char tmp_tmp_msg_1_0[] = {118, 34, -32, -91, 110, 126, 102, -13, 61, -46, 102, -27, 88, 35, 109, 47, 77, 11, 123, 75, 65, 109, -10, 32, 24, 38, 12, 27, 108, 110, 124, 78, -54, -7, -93, 40, -69, -117, -15, -5, 73, 113, -9, -69, -44, -38, 122, 78, 74, -102, 15, 117, -108, 95, -45, 33, -61, -43, 114, 47, 9, 110, -101, -12, -2, 38, -80, -42, 98, -9, 12, 39, -13, 27, -124, 119, -104, 45, -71, -64, -52, -14, 81, 117, -22, 93, 109, -2, 65, 42, 57, 38, -112, -15, 61, 37, -60, 81, -70, -62, 41, 82, -83, 25, 119, 50, 19, 57, 91, -74, -73, 36, -47, -7, -61, 75, 126, 55, -43, -26, 81, -10, 79, -99, 53, 64, -108, 31};
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
    msg.setTimeStamp(0.2737703688574723);
    msg.setSource(25303U);
    msg.setSourceEntity(122U);
    msg.setDestination(59837U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("YDTHBWAWCBOYXOHHDAEXQPKSTZTIJYVMMNTUZBSTUAKLOUFXPTUEEXIVYJLLVMPJRGJNWAGETGXAAXMNNXTFBQSXHCGOGRUFZDHIGCTLRQBYSYZAWEESQSVIDCZYKFUDLJFENIBFGWVIRZJKHNPIHLWVWOEHDPZZSSDBDSVHCTFNCIPRNKZSLHXKIQAYMERFCQNGJLPKGVOCAJRKJFAMQBM");
    msg.plan_size = 37408U;
    msg.change_time = 0.06352569761119808;
    msg.change_sid = 63528U;
    msg.change_sname.assign("FHBBVWKUMKHDWWCDADFKDFMPSWJKTSTGALLXXEYZRLYQQBSSWJUTKKNOVKRJLXBHSHZWHVGIGLACNEXVVSZMWCMJXGLJDIOBMLODTVFRZRQJGOIGUBRJ");
    const char tmp_msg_0[] = {18, 71, -113, -67, 32, 88, -77, 73, 36, 63, -75, 1, -7, 0, -81, -41, 124, 6, -100, -47, 97, -54, 15, -41, -106, -7, 5, 40, 107, 4, 70, 52, 12, 40, 2, 96, -99, 43, 65, -5, 119, 109, -52, -48, 65, 28, -57, 67, -35, -65, -15, -11, -61, -54, 72, 75, -71, 95, -27, 31, 76, 59, 90, 70, 95, -128, 60, 96, 4, 43, 25, 90, -98, 46, -20, -8, -66, -117, 1, -70, 24, 51, 44, -101, 75, 61, 10, 85, -34, -114, -71, -8, -116, -18, -60, 35, 86, 74, 83, 86, 60, -17, 14, 113, -64, -36, 101, -64, -5, -93, 72, -79, -79, -105, 95, 47, 93, -15, -21, -124, 83, -115, -128, 59, 27, -50, -40, -98, -17, -26, -83, 38, 80, -39, 53, 38, -70, -48, -4, 97, 92, -1, -128, 105, 19, 87, 106, -76, -49, 101, 69, -111, -127, -122, 70, 99, -67, -115, 41, 39, -35, -124, 36, 55, 99, 28, 0, -25, -52, 62, -14, 2, -110, 24, -3, 73, 81, 22, -56, 4, 65, -73, 61, -125, -93, 75, 120, 115, 63};
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
    msg.setTimeStamp(0.0940324516620753);
    msg.setSource(36386U);
    msg.setSourceEntity(104U);
    msg.setDestination(64902U);
    msg.setDestinationEntity(76U);
    msg.plan_id.assign("BAPAXDBDKNCYCVUUMRBZHDVQLOYJLXZENKVNGPEXXIBFHHPUBGRJWUTDHRDBJQTOVXOJTAEYVCKKZFCWMIYEJNMMPWCMZUSVDASXYCGJJUNKVPZNMKUTATCJGAAQYGLVEXYXRSMZWSQKONWESKG");
    msg.plan_size = 20041U;
    msg.change_time = 0.5191687444685837;
    msg.change_sid = 32375U;
    msg.change_sname.assign("FWCCLDDGFYPGQQGTHMOXVVDNRSANUORSTBFXLDEZBQXQLAYDYIMXXS");
    const char tmp_msg_0[] = {114, -51, 65, 72, 8, 21, -50, 0, 67, 124, -78, -79, -12, -37, 16, 106, 49, 41, -52, -47, -78, -50, 40, -102, 45, -45, -9, -37, -106, -69, 119, 82, 125, 111, -15, -38, 41, 23, 102, 47, -78, -108, 3, -112, 44, 111, 117, -60, -44, 116, 39, -106, -87, 15, -39, 0, 16, 53, -54, 79, -111, -116, 119, 27, 107, -70, 120, -1, 125, -43, -39, -78, 122, 58, 47, 100, 106};
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
    msg.setTimeStamp(0.18025022256138767);
    msg.setSource(38947U);
    msg.setSourceEntity(119U);
    msg.setDestination(6577U);
    msg.setDestinationEntity(12U);
    msg.plan_id.assign("MRWUWISCQVOJPBSI");
    msg.plan_size = 49331U;
    msg.change_time = 0.16369460824819992;
    msg.change_sid = 9568U;
    msg.change_sname.assign("JBMBQTAYKRPCOAVEEVV");
    const char tmp_msg_0[] = {62, -51, 4, -20, -109, -102, 14, 101, 91, 83, -111, -78, 123, 34, 22, -122, -120, -44, 82, -6, -1, 48, 97, -75, 66, -20, -12, 11, 112, -94, -100, -117, -92, 87, 80, 70, -45, -74, 122, 54, 91, 125, 106, 2, 2, -99, -81, 17, 102, -98, 112, 67, -43, -80, -51, -67, -121, 97, 32, 124, -33, 48, 115, -98, 114, 29, 100, 70, 4, -101, -55, 5, 57, 33, -87, -65, -68, 72, 108, 66, 50, 24, 31, 85, 63, -125, 91, -87, -60, -101, 31, 55, -15, -27, -74, -91, -69, 49, 93, 116, 36, 56, -16, -8, 103, -12, 4, -108, 91, -15, 76, 82, -115, -33, 63, 11, 18, -128, -64, -40, 80, 101, -13, -46, -26, -78, -6, -48, 119, -95, -93, -62, -45, 76, -4, 65, -120, 78, -118, -105, -34, 101, -87, -127, 96, 1, 52, -3, -67};
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
    msg.setTimeStamp(0.2363636758397638);
    msg.setSource(50671U);
    msg.setSourceEntity(39U);
    msg.setDestination(4055U);
    msg.setDestinationEntity(226U);
    msg.type = 231U;
    msg.op = 227U;
    msg.request_id = 34580U;
    msg.plan_id.assign("JXPKPJSJHUNOPNHVCTUBDDLSAXSPXFMGVPMCEVRWWQWYSKFQULBQQFAHGGSRZLLTMOKNJRZQTQEHFUTKACMZPOPIGDFRAFHADIYRNDVOJSXRZRPOLNR");
    msg.flags = 29669U;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 213U;
    tmp_msg_0.tas2acc_pgain = 0.071550571544155;
    tmp_msg_0.bank2p_pgain = 0.6240266256095578;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YYBITETXBLQPZKHKNOXLXTMIERRTXEKVMFQUZEJNJDCRBRYYLACCTYAJFPKDGODVAIBKZLCPCREYVLFKDIZRGVZBFHZNGYDRUDWGOTMQ");

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
    msg.setTimeStamp(0.7864383459752113);
    msg.setSource(37480U);
    msg.setSourceEntity(221U);
    msg.setDestination(37388U);
    msg.setDestinationEntity(199U);
    msg.type = 60U;
    msg.op = 115U;
    msg.request_id = 20534U;
    msg.plan_id.assign("CCKDTLZGLGR");
    msg.flags = 4607U;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("QUSUFNTGSHBIFPYYBQJCZEVNRZJDXXKHATANTEROMJFTDWLUCCPLZSRRIRQMXFGHJDDKKQIAICQGRQKUEHPHFKO");
    tmp_msg_0.lat = 0.7204406432904056;
    tmp_msg_0.lon = 0.8031853205972017;
    tmp_msg_0.z = 0.43738842262624444;
    tmp_msg_0.z_units = 129U;
    tmp_msg_0.cog = 0.8633912781051981;
    tmp_msg_0.sog = 0.48061407487896834;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RBTUMMWPNZYFSBAKZLNCGUNCVEGRBZXUMEQGFSDBRIEQOPYMRJYIRAANCQGWUGPBEIUQLKXO");

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
    msg.setTimeStamp(0.7780668135596408);
    msg.setSource(4077U);
    msg.setSourceEntity(50U);
    msg.setDestination(52476U);
    msg.setDestinationEntity(200U);
    msg.type = 9U;
    msg.op = 210U;
    msg.request_id = 47840U;
    msg.plan_id.assign("IRTEWZXCJZOCJANGLAKGBERPPHCKFBLDOYGLXURURBCSWGHZNWTTWHATSVPKBITYWUEINB");
    msg.flags = 63815U;
    IMC::HighpassControlParcel tmp_msg_0;
    tmp_msg_0.highpass = 0.24044308032983808;
    tmp_msg_0.adot = 0.6689486524389308;
    tmp_msg_0.slope_compensation = 0.16279650371404186;
    tmp_msg_0.slope_compensation_difference = 0.987420217363893;
    tmp_msg_0.altitude = 0.519389172780293;
    tmp_msg_0.auto_altitude = 0.2832663194670778;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PWJMQABQLIPUNQYETJWDSSSPYYOGSLARDJUXSRKWUPOGPOELFZBCISXDPFACBOCLZGXOPTAIRDCMTATEHNKEQVBMRFKNHETLKMVVBYHWGGMREKYURACVYWKOGXQCSSPKGFIVGOFWQMIQBTWNTHYOHDJKDJYPFIDJFHXYGXUXHRBPDMOQVHZELLEBLKZNCTRZIESCZWQWAAUUIJZABXLXVDIXF");

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
    msg.setTimeStamp(0.6309037620471689);
    msg.setSource(38058U);
    msg.setSourceEntity(174U);
    msg.setDestination(56169U);
    msg.setDestinationEntity(133U);
    msg.state = 41U;
    msg.plan_id.assign("OJMAEWUQSTMVTOFKDTWQLAHUAILFZJLQO");
    msg.plan_eta = 1905920890;
    msg.plan_progress = 0.03260423966702075;
    msg.man_id.assign("AQLRVZSFLNRQGBLKVNDDOBPUKVCRLVSQJPMGBWMTUXQWIYWXZWPJEEYINSWFTZFCASGQRXCGZTEPAHVLARJRDWGIFRMRFHZJAMWEQQHSEHUCFBXOEPSSMJ");
    msg.man_type = 34203U;
    msg.man_eta = -824006590;
    msg.last_outcome = 177U;

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
    msg.setTimeStamp(0.11171035762626635);
    msg.setSource(6890U);
    msg.setSourceEntity(23U);
    msg.setDestination(61467U);
    msg.setDestinationEntity(197U);
    msg.state = 219U;
    msg.plan_id.assign("WJTNUQPEOMYJILQIJODLHLXKZUVZODMJDHSYVNYFNFGCHKRXXJUDLQNMCXSKICBMOVFMZQVPSVSYKUHRBCTPRCWHLWLKHRCTQLXAQZGKGOPTMNIMEROQUWNWGTNAUFHAVWTYBPGBEIDCHIZYHZRWPBFFSCSATOEOGJSFLWEQEVYTEPXFCFZCAPUNAXRAAPLGYYVXWDB");
    msg.plan_eta = -1092118082;
    msg.plan_progress = 0.1155718998366353;
    msg.man_id.assign("EMTJMLJBROWXTSZFCNQADNKZOCEPGUEVGTNFSYITAHBBZVHNZBRUDXLVSDEFKTVHIWJMRUZHCWKWQC");
    msg.man_type = 40863U;
    msg.man_eta = 426007125;
    msg.last_outcome = 120U;

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
    msg.setTimeStamp(0.9238605153994145);
    msg.setSource(63021U);
    msg.setSourceEntity(217U);
    msg.setDestination(6256U);
    msg.setDestinationEntity(152U);
    msg.state = 124U;
    msg.plan_id.assign("VYYRIJYKQEBWPUWQLHOXMAMRLLEDLEA");
    msg.plan_eta = 991411322;
    msg.plan_progress = 0.8110048303674059;
    msg.man_id.assign("JUXYEFOVCHVMNGSOTMAYXSSVQZZHBPKRLXISHFYVSOWAMDQCOBYGQBOLFOBKQIQGBZIJRNIJTDDAEEX");
    msg.man_type = 32100U;
    msg.man_eta = -1781501219;
    msg.last_outcome = 103U;

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
    msg.setTimeStamp(0.6807244465756928);
    msg.setSource(14364U);
    msg.setSourceEntity(205U);
    msg.setDestination(52532U);
    msg.setDestinationEntity(29U);
    msg.name.assign("LISNEPDVVHQRJVYKKEYEUZMVFDHYMSILBZDGMLBWDLYHPIPJHLNZWDRBYCWWKFJPCUOTMDGCFZUBGSQZPCHXOQYIAXJBAMWHXVFQSFUUPGTUZUKAZYMXKSDLRUQQHNEATQJWRARGLPNXCKGEWXODTBPYSBMKRTUJEONBRRTQCF");
    msg.value.assign("CKLHAQZNNJFBWXPJHPNKLNUHEMNWAOSTTZJEYQKKMCNVCKBMFDCIOWUVVZXHZQUCMGRYGZETXGREKKBLADSGQCJCIWUPICMKWFJVALXSGHSRQLWTIMLKVRIREOHOMELRFZOVZLPFHGOSEDPLNRFHYJPOGWQJTUKDABUFGYRXQPB");
    msg.type = 232U;
    msg.access = 97U;

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
    msg.setTimeStamp(0.1985078846757431);
    msg.setSource(27179U);
    msg.setSourceEntity(234U);
    msg.setDestination(710U);
    msg.setDestinationEntity(16U);
    msg.name.assign("BXDUNLLOOAPIFNHMEZZKKTGVJWBVUMIGHKAEYIICPROHOBROONSQJPDWBRRYRMNSQPZQIPEGXHUTXVKTRTLEWXSETQQSNPAIMBJHASTDUYYLACUEGDFOGXUNWSEZ");
    msg.value.assign("SSDOFSBKQHDHIZUJEYFVQVNGRXKAVUDXJCSDBTSGKMPYWEXFSZXYGYWOEUTORFRBMPNMUWIGNHQBBVKARGKFCFKSEHMQOTDOPEBGMTQAAQHHCILTZQKNQMLYXGEYWRMPNJTULWKOHIVIJXPBXPRXPIHVCNQDDZSLJTWCKJOJCOUCDAALAVDSBFAEWVUFCLISZYTUCFHRTEZJERMFYILZIOBPVGTJOWGDXUNCJPZQMLRNNKZWXUAYLGRIBP");
    msg.type = 66U;
    msg.access = 109U;

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
    msg.setTimeStamp(0.16789447300380245);
    msg.setSource(19494U);
    msg.setSourceEntity(208U);
    msg.setDestination(33136U);
    msg.setDestinationEntity(184U);
    msg.name.assign("NTFUESAGFRDZBOQWKSCDXXQRWLSOPGCYZLQEKBXSQZDVSWRJFUVSNPRXGVBZGMVHZGXZJHOETRESAATODDJUNBXVUZYCFBHKXDHHMUEAWQTOUMHLWCGAJTWKVWCBNLCYAFGCQKYYTDNSQURHHEFXDUEDESMOCLOOLJNNKXNGYCFJKFRFPTBSW");
    msg.value.assign("HJBQBDEVAQBDOMBGEHEQHZSRZDZEPWFPVJIIWUOYCJPUHSSUYOCJTOWUZBMCNPCYUHIVRAPSKKPLWVZKDVWNNRNNZBNTMTKKTAFOMAOYWCURFSUIIQQLRUXLCLSUFMKGGUHDYMATXPFYTPPYESDWXGJWGNJFZVSIMLXXXT");
    msg.type = 202U;
    msg.access = 190U;

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
    msg.setTimeStamp(0.7300489851434);
    msg.setSource(2622U);
    msg.setSourceEntity(44U);
    msg.setDestination(27771U);
    msg.setDestinationEntity(115U);
    msg.cmd = 112U;
    msg.op = 30U;
    msg.plan_id.assign("MJKZEMQVSFSPRNSGODXGJJCLNBLUUZNFBOGDQUBYAEVXZIBDKPHLZDHAXGWOVYHENTDKRBZANNVCABTUPRICUKFSYAEZTVAFONUXLYYMH");
    msg.params.assign("YYEWVMNIVFJGXDHDJYQAAHSNZZCBNEBKCKDZTCLUDTRQFLXFWJUAYYERTUPPUGDOMMQLIHSEGORHCKGPULDXWGBOAUHQYD");

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
    msg.setTimeStamp(0.06672885069774714);
    msg.setSource(16665U);
    msg.setSourceEntity(94U);
    msg.setDestination(15557U);
    msg.setDestinationEntity(28U);
    msg.cmd = 38U;
    msg.op = 120U;
    msg.plan_id.assign("SMDBQBTZVXTCEFKNZKUNIJ");
    msg.params.assign("ZSPZRHGCKXUN");

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
    msg.setTimeStamp(0.9913243827633963);
    msg.setSource(37180U);
    msg.setSourceEntity(184U);
    msg.setDestination(541U);
    msg.setDestinationEntity(225U);
    msg.cmd = 110U;
    msg.op = 226U;
    msg.plan_id.assign("NHEMYZHEKSNNBFBJSWAKJZXCALIJKEDXIBIQVVABUDRZSHOZCZICSWFLQPNRKLMPNNRLSQDEXORYDGXHOYAZHHIUWZRGUSUTLWALIOXFSMIDQWUSXIEYJFBYVXZXLUAFOYT");
    msg.params.assign("TROAEMGWERTJGSULAW");

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
    msg.setTimeStamp(0.4833874001569012);
    msg.setSource(27699U);
    msg.setSourceEntity(177U);
    msg.setDestination(27196U);
    msg.setDestinationEntity(181U);
    msg.group_name.assign("BXJEICNTGMEIALOFWIMAXSHSEQKSWUPHPMBGXFAFGVHRZGPFNJAOCAYNITXNPNMYRCOBKKVYSFDWLUBFUAXQZYTVTJSSVZWSMEHIVIOVLPDAKALSPNSMHFQEVRLCJTGUJWVNKRCBNUXZQOPFBWYZPIINSJQPEOCHEFTOYEDKRLRHWYDDWGDZUUJVJONQXUYKWGQTCEQTLBECILWDRPZRHJHGRAZXZL");
    msg.op = 47U;
    msg.lat = 0.47853465414293006;
    msg.lon = 0.46350182171540655;
    msg.height = 0.898925240004211;
    msg.x = 0.18886490829407754;
    msg.y = 0.9146852627909109;
    msg.z = 0.23046165216792336;
    msg.phi = 0.5371467392460325;
    msg.theta = 0.0307616865446686;
    msg.psi = 0.49976430786390436;
    msg.vx = 0.6572180028310177;
    msg.vy = 0.18250946109253752;
    msg.vz = 0.8630056173917204;
    msg.p = 0.15542251476635083;
    msg.q = 0.4059561074850345;
    msg.r = 0.09419754199792463;
    msg.svx = 0.10326388947010612;
    msg.svy = 0.26365747309572096;
    msg.svz = 0.408049280493183;

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
    msg.setTimeStamp(0.2402767185624769);
    msg.setSource(4698U);
    msg.setSourceEntity(203U);
    msg.setDestination(24656U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("NBZJMSTPCPJPLXCBIYHRREALUQTUGSARJNFVARJRCLMOUFCZZXVSIDICXHMBOAGLKNWJSHGCFJPPTSGVMZNKWVWHXIQUYWYNTSHIRIOCPOFLFMOZAEMJRVDEGFBYGBDWBKSJFHTSLWTAI");
    msg.op = 215U;
    msg.lat = 0.27080397713236326;
    msg.lon = 0.1295951173637021;
    msg.height = 0.8407670121104328;
    msg.x = 0.6741631683739748;
    msg.y = 0.6208274544262065;
    msg.z = 0.8247384638067996;
    msg.phi = 0.1873966707060173;
    msg.theta = 0.743248827883049;
    msg.psi = 0.06918353164150015;
    msg.vx = 0.4302777486200623;
    msg.vy = 0.31367244658220583;
    msg.vz = 0.4342241069827133;
    msg.p = 0.8271721863253388;
    msg.q = 0.05855330280165971;
    msg.r = 0.039224208750868184;
    msg.svx = 0.3287763467228839;
    msg.svy = 0.04409452675127579;
    msg.svz = 0.810725487635413;

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
    msg.setTimeStamp(0.3030186088412994);
    msg.setSource(54629U);
    msg.setSourceEntity(38U);
    msg.setDestination(23986U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("IEPAYFUQZENVIBKSIRBEIYRUSFERTXGMRECCMZV");
    msg.op = 132U;
    msg.lat = 0.0835495833676303;
    msg.lon = 0.4869608543504539;
    msg.height = 0.09521869143294992;
    msg.x = 0.789376965099624;
    msg.y = 0.5455956009035858;
    msg.z = 0.6372717721889872;
    msg.phi = 0.00524558548463816;
    msg.theta = 0.06567314255463341;
    msg.psi = 0.14449727440684612;
    msg.vx = 0.2708074938125613;
    msg.vy = 0.4053684878242356;
    msg.vz = 0.47157610763108826;
    msg.p = 0.19008101365689556;
    msg.q = 0.17007352538109222;
    msg.r = 0.9013117945012217;
    msg.svx = 0.844430393202482;
    msg.svy = 0.48347614027226815;
    msg.svz = 0.2114793699768942;

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
    msg.setTimeStamp(0.11765178779069518);
    msg.setSource(31221U);
    msg.setSourceEntity(146U);
    msg.setDestination(45347U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("YIFAINERTGXLSLCXFXEIGYURDR");
    msg.type = 104U;
    msg.properties = 100U;
    msg.durations.assign("IMIDYKXJUHGLUXBNEDBRUUZMYLSAHULBFKXLNOEGQBHKBEOIMPFFASXTKRDMNEGJSROAQVMCQJNTIYVBTFTEFHAKPVUMVHUCQTXCFAZIGDCWNQZWGGHMWJPIYASGDQIWQKPHYPWVXSZMBVBOLUZRZYALOEANSCVOEIWSFNTKOOCJJSICWVLRDNLFWQDSNFZXKDRGLUS");
    msg.distances.assign("YMYEAFLEEZHBGEGCEHJBZSYMKTLGXWUSQGPZHKVDLYUSKOQFAXILPODBABPYKPVVKYDIARKBTJBPQMMRDHFOTCSHLUTGGPUCPMOMSUAJIBBLSRCOXTOZTGKSYRVGTWKFIYSTDIJHR");
    msg.actions.assign("BPTTMNQPOGEOQTZCEGEWJDXQGHREMYQZAEKUGVSKAPBQRIMXMAHNYRBICGWBUNTSOUGSONRDJHPAOJFEAISDRKYFIBWQOSZPLLXYWZYMGBMLMKRQIVZXFCLVOUDUBXIJLYBZSCXFZWVMKQIZVWDUCYIURTAKTCVNEHLEWZ");
    msg.fuel.assign("GMGRHHIALJZNTDJXWYXWRRNKZSSBXNFLCBWCQVYTOZNGLXBPFWTVRVHXGKQIDVQKASMMLRBDKGFTDAUMFEPSDOSUICQGQPPHQPXUTEFBMVUZARZNTIGYUVCCBWZWMBVQTNRJQAAERLMWXNICPJUHFLUOKYOXEIHNCUSEJGXLYEKKPDAEIOADYTPWIZVSGIBLJBRWFAOYOLKHCFLIGJHOAEHPXPSKOQUMZNKMRNYSDUSVZCJQYTTFDWYFZVEJ");

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
    msg.setTimeStamp(0.23481599287997046);
    msg.setSource(38777U);
    msg.setSourceEntity(145U);
    msg.setDestination(3092U);
    msg.setDestinationEntity(99U);
    msg.plan_id.assign("NHFYYCCUHLKWTFNESQTAFNAMNWEBBTIYJMGNLUZWCEEOIM");
    msg.type = 83U;
    msg.properties = 14U;
    msg.durations.assign("MWKKYHHGRFXXIRWCJWPFOGJULURYOKFLLYIIBQADFGQBRSEAAKHCBQOBSVEJADWMIXKJBASTXLSYPTDYDUSSNTBLDLJIZKJFEQXF");
    msg.distances.assign("IQEHPHMAYGRQWXJMKLVUPCIQQVJNCTFBZFSSGXDOSTNYAMFSAHEMTIIHIUAHACDGNMWBEDNRRMDWULPISNYJGYRTOWOXLVWDUYPCBPGFGGESYXFALCZTKMZOIXJGOVLVQCNLUKOMBBHPFCVKREWRPLPORJWJQYZRZIBVYGDVJZYUKABSMEMXTSTXQGAXOCEBUDWWKVDRKLTUEVOFZHHFIOQBUUDNLKCSCZWJHPJQAZHBNKXJFLTNRIZFEXY");
    msg.actions.assign("TBSBLAAIAXFOSJIHDOMUSIINLFOPWIXRALDKUCLJYVCXXKXQTDOWYVHNVMDCUWXABNSKPZFOEPXWCJLGPTKJRHEPDJHCXTEJNQFRNVUEVDWVFWAKGIZWCFBZMMBGFLRKLSOLI");
    msg.fuel.assign("ZLBDTDGXNUTPRVOWMHJEQNCFOCVXGPDIDTWZWBHZUTJDNBJVLWWZFYHBJLKUFHLJPHBLKWUYDVFAEQIQW");

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
    msg.setTimeStamp(0.5616420379759564);
    msg.setSource(26298U);
    msg.setSourceEntity(116U);
    msg.setDestination(12031U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("FDBBPQKQIFNYBYZFDTMSQWMBIHFFIWIWNTFFQBWEXTVVYMRLCUSVVVHRXEEGRPQJALRSDJUZUMYTJWUGPJZORHZCHCQZNPGVEYPFUEJCLZAZTNJGQKYUKPJRXDCFDOLRAVFXEKHXPHYUOWOATHMISQXWEHHGJROBEKTMSAUNIZZIMMPIHNACLML");
    msg.type = 171U;
    msg.properties = 36U;
    msg.durations.assign("RJKPREEMTWIFALQUMTOIYDQBUBCPKDHFYYUVPKUIFHVVGDYNCCJNWHBAABWKJOLXDWPJCWXJOQXOFWIYHDEDBNZVGPAXBXRSEMGNGDZKVRPSEMJSWGAVHLCOMOFFHGLTMFCZQVOKNQZCUYPXLMYHTW");
    msg.distances.assign("MWIBJZXYIESJZTJCPEDSIQDVMYQROELOQTUFXFXTMYORHISYBKZFAHKPFMCQAWSBLWZVWENXHGDTLNGLXNARVEAGXIUKVTDRVYGXLNPOPK");
    msg.actions.assign("ZICZAYWBGUKMWGXITOVZIAQMCESWQBLDMMYEIJXLUHIXPANFPIPSSQGRWANKJOLZDNPKNFVYSRVLQAOPQLENDIVJQGLHAEZOOPETUHRWBFHJUNGCQIQLUNJUCKXCWTAWCDFHSEUYCRIXLAJOFWMBGSCEYKLSXFOVGBTMGRDPODRVTKHMVVBBSKRDAYYDOYEXUKFHTRPYMEHXFKSKTGFQYNHOWXDBQWBZLTMNJBVRHXZSUETIGPJZZ");
    msg.fuel.assign("FDOOLGGDMACXOEPLIQIVUAGBJUBHJQWCZSKVLJIICXEOHWCTZMQVCTNWOMRJPFLHOQKXSVHTOLZIODCFAPINYUWEGGSGRIBXMNADTSAMDWNN");

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
    msg.setTimeStamp(0.18104222921201407);
    msg.setSource(58770U);
    msg.setSourceEntity(218U);
    msg.setDestination(57259U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.13651698233040976;
    msg.lon = 0.20774230676435812;
    msg.depth = 0.40833221750883975;
    msg.roll = 0.8702108617922191;
    msg.pitch = 0.9318475447013795;
    msg.yaw = 0.0720000542806235;
    msg.rcp_time = 0.5532985255422136;
    msg.sid.assign("QXLUTPSTNNAXEQDSZWTHTHAJAMQQSYFVHCKMBPWQZYGISBFYJINUNZPYYJVTPXQGHZJBEQRGRILBWGBWZFUKZRLVLAAOWGVTWMBJBMTZMENRCHFORHVIKQWLJEAQXTSNYARNSAEXFYBDCJVCTLPDNOCKCDRRGFFUSELIZNACXDINGDEIHPKJTUMQIRGVJDFIVEYDOKFZMPECZBXVKDWPHSHSGLXKLCPLFMEOXDWJKKHYGPBS");
    msg.s_type = 13U;

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
    msg.setTimeStamp(0.06330446594719319);
    msg.setSource(20277U);
    msg.setSourceEntity(183U);
    msg.setDestination(34543U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.5758542392383922;
    msg.lon = 0.0621302429664794;
    msg.depth = 0.05024136193819084;
    msg.roll = 0.755445096436549;
    msg.pitch = 0.3326200014321026;
    msg.yaw = 0.7010967557732495;
    msg.rcp_time = 0.5033330459516432;
    msg.sid.assign("NKQROCSYKSLXWQEDJOYVQKFTOEJYHVUNSRHNEHZHWUAKUUTOBPCRHBJJOBVXBWARGLPNLXGCEYXQJH");
    msg.s_type = 16U;

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
    msg.setTimeStamp(0.11654430402949034);
    msg.setSource(819U);
    msg.setSourceEntity(36U);
    msg.setDestination(53620U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.6718584125011288;
    msg.lon = 0.5136787736776461;
    msg.depth = 0.9247001893663994;
    msg.roll = 0.0900291920985179;
    msg.pitch = 0.3816218796729075;
    msg.yaw = 0.7478890351049066;
    msg.rcp_time = 0.16578389080431633;
    msg.sid.assign("ZUSFPKMQBLVOUQUFW");
    msg.s_type = 213U;

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
    msg.setTimeStamp(0.7243723137499489);
    msg.setSource(33965U);
    msg.setSourceEntity(20U);
    msg.setDestination(44368U);
    msg.setDestinationEntity(75U);
    msg.id.assign("PBSEJYDIHSO");
    msg.sensor_class.assign("SDHKXMLAMHBMBCXENZAKOOJBVVIRQQWWWOLCSDDJGPRTHXKUTPKOSHXZQBJMOOOKWQSGIMURYDLTAVILERRSWGF");
    msg.lat = 0.5689162606725016;
    msg.lon = 0.8326366184020602;
    msg.alt = 0.2060173584051398;
    msg.heading = 0.9417117438920932;
    msg.data.assign("ERQIYISZVMNSCTAHSVTBILRZAKQPGNXOOUNJXHEWLJSGJJQJDYOU");

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
    msg.setTimeStamp(0.29849217151253193);
    msg.setSource(35880U);
    msg.setSourceEntity(165U);
    msg.setDestination(61377U);
    msg.setDestinationEntity(161U);
    msg.id.assign("MXBYFLFUYX");
    msg.sensor_class.assign("THUPAYHNDPJEJEAVDWOCUMXTPPNOFJHEQST");
    msg.lat = 0.3244911406895362;
    msg.lon = 0.9701126939916912;
    msg.alt = 0.8699561858947609;
    msg.heading = 0.5288116358849397;
    msg.data.assign("PZFBETBVPXLZHGUNECQHMSWJRBTUKKEJKROCALJNKRPBIEVGIJKWHDMIAFQVUYTBMRDZVPIXDOMLGHYRPXLZTVOWZDSUPLZ");

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
    msg.setTimeStamp(0.3194409549810293);
    msg.setSource(55102U);
    msg.setSourceEntity(147U);
    msg.setDestination(2740U);
    msg.setDestinationEntity(134U);
    msg.id.assign("ARAPVDQAPRAGEHGCZIJAOKKZZZXMPLYERSJBHHLUYZUPUYLIBRESWHQEFFTTWWACLDHZSMVTNXHJSCWSMXBKLXFPYIUDOCIMIBKFBYUJUHWNCKTIQQGZOYZFDATRPTWLVMLKQRKNJDNNCNHRPEMIOTDKPNNZJFYRCSXEBFCONGUORGUSDTVZWOSMQWOIMKEMXVUBLRAVSYQPJVEQYIGAKXGJINXJO");
    msg.sensor_class.assign("KOLXUAZOHIBIHZABFGBGMLCWGEBSKEKEBFKHTLUTYLQUPAMFKWSPBKOYLOKPZGQLIZCHDEJADNGWMCDVZKSIWIJOZPIZDNJUIKXVWXAYAEHDSEUCAMPAGSSYGQJJCFRHMYTWRUTJNRRPMLDEWLRBDYKVMVXXGBPVJVWRFQMQWFFSAYNTVYIQCNMURNFZUMJXX");
    msg.lat = 0.21312919664336116;
    msg.lon = 0.34346028901840875;
    msg.alt = 0.25408677071998076;
    msg.heading = 0.6509807644770559;
    msg.data.assign("IGGTCCJJRDVXZAROHYAKCBSKEIVNQLITWBEGUGHGIXKFASNNAJYXDJRPDQHBEVLOZSJAIGWYTNMROHCVFNWDFXVSWDHPEUUJSGHKBQAMULHOSDNTRPMCDFDDUKUWCVLYCJNCWFTLYYPNENDMGVIBPYBFBKWQKSZTXFPQBPMIJXSLEZQOBWMSQR");

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
    msg.setTimeStamp(0.08853103172554155);
    msg.setSource(56256U);
    msg.setSourceEntity(184U);
    msg.setDestination(45713U);
    msg.setDestinationEntity(3U);
    msg.id.assign("LYUBPMLXHEGVEDKWOOMOVUQDRFDRSUEEHBWAPUAOHGELASSMNZXJKJTLYANMNYEKCOQQWSFHUVINYNDKOYUFCIJXHNVEQUZAWERAVBMHKRJTGLPWONOPPUPWSFOVIFTMZGXJHGFZNSHVXIRGSVRDTLQWEZJXTBHGSBXFAYGSACMDCXULYBWZABICEXJYBJRDFIKJIQU");

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
    msg.setTimeStamp(0.1385240862946776);
    msg.setSource(64170U);
    msg.setSourceEntity(24U);
    msg.setDestination(51193U);
    msg.setDestinationEntity(11U);
    msg.id.assign("QQDGHXUZLPJJDVTVMTDQSKEAKEAEJBYDLSTIBZLMTNMCOUUPYMEZXYNXHGAIKAHDEAVROJIJLDMAUURZHWUWAXZFYPWNNGFBPCNAOKCXCFTFROBITEVKHPBXFXEVLGGSNLUODIRQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SYLVMTMCBKOIBVGLPTNOAFTGBGTJSTUXDAULRBZDJEPGXQNUHVOSMZWOWBWKRF");
    tmp_msg_0.feature_type = 172U;
    tmp_msg_0.rgb_red = 161U;
    tmp_msg_0.rgb_green = 179U;
    tmp_msg_0.rgb_blue = 117U;
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.476473496960369);
    msg.setSource(15593U);
    msg.setSourceEntity(13U);
    msg.setDestination(53664U);
    msg.setDestinationEntity(204U);
    msg.id.assign("RJHRFXCUGNNWENKYMLCZXSZUOCUMJNADRXXWNPFAJMBCWSKVRVWLPXUAHPMVLYHQYMWGTBTKJVCIJGESUFXOQPOKVGJIGDESIYHNTHDUDWZXYBPQPGBFBBNFXNSVJIABIBUUED");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ITBBTOGBOSPWGQMAMOLDBCOLMTGELWORODQUMYMSURCZZJBNFIPNEEVRIQHJFTFQJNERVZFDDRKEWZWIYPGEZGPQADSMYJFDVUPDACGDEFFNJVSZVKFEQTZTQYUCMMRAAPCFPGALYCACHIETFXUNXCOTBKTRXZNAHKWXSIOSHBHKRRCWLSKDZBUWSUEAUCYVLGHKLJJIDXZUPVPMYBLMKOVNAIWSXX");
    tmp_msg_0.feature_type = 113U;
    tmp_msg_0.rgb_red = 245U;
    tmp_msg_0.rgb_green = 228U;
    tmp_msg_0.rgb_blue = 92U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.23824735132127506;
    tmp_tmp_msg_0_0.lon = 0.22873460546717572;
    tmp_tmp_msg_0_0.alt = 0.17835163627381778;
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
    msg.setTimeStamp(0.7515954889747165);
    msg.setSource(55330U);
    msg.setSourceEntity(100U);
    msg.setDestination(12641U);
    msg.setDestinationEntity(164U);
    msg.id.assign("YJZKNMVHUGIJNFCFOUITGKMTBAJFJQEKZTRCDPCNHQQHBKWRCMLWRFUWTHTYOFCOLPNXKZBFTNOALPUEGSVEZUQOIWMQVYASQEJDZQVTOSGBEPOPRELQRIBHMPSIKJXKZSNWFJIBZIDLARIXHPCROPHWNWIDMAYRMNSBF");
    msg.feature_type = 166U;
    msg.rgb_red = 149U;
    msg.rgb_green = 46U;
    msg.rgb_blue = 144U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.1430640731435584;
    tmp_msg_0.lon = 0.33868909618486487;
    tmp_msg_0.alt = 0.5551674019101548;
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
    msg.setTimeStamp(0.7768796004852406);
    msg.setSource(16567U);
    msg.setSourceEntity(190U);
    msg.setDestination(61608U);
    msg.setDestinationEntity(163U);
    msg.id.assign("WZGIELKVFAWORDFXPLHLEHWCAKMSJBMHQPOPGEYZBBCASSNJDTCXROQYCWIQTNOJLSFGYQPSFJIYQXRBMLYRSPUPXCGAUJUIOVLFAQUNXTFTNKHNVVRJOBENWTHWHMCUUAKGEFRHIZPDPWBAJMEDMIKQODEBOURIQCSWFRWJJJHYDZPVUVZUIXNVENVBYVEGAVXRCKITUNQFSMWTKZHKYZMFTGKECQXZTXRMDLOLGTHCSPODDIBXZLYZGAGSK");
    msg.feature_type = 58U;
    msg.rgb_red = 215U;
    msg.rgb_green = 120U;
    msg.rgb_blue = 43U;

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
    msg.setTimeStamp(0.12335130303414643);
    msg.setSource(11922U);
    msg.setSourceEntity(179U);
    msg.setDestination(49983U);
    msg.setDestinationEntity(199U);
    msg.id.assign("VDRLGMCEBVCDBDGHPOKQLCXLKKUNDSGYXSOOAFQYUKNCDBKIDOAEIEZQANQXWOIVXMXLUHVIYGGFHPRTZPFLEJEKJSJFMHNBPXRONXEFTKGYDFBZBQXBGRAJJLUSPZMJFMKWRADCEHUUBOHUMWPEJYFWUEGJRGIPHCZNZFROKVATVOHMSJTNTVXIPRZHIQAIU");
    msg.feature_type = 126U;
    msg.rgb_red = 251U;
    msg.rgb_green = 205U;
    msg.rgb_blue = 181U;

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
    msg.setTimeStamp(0.5111404700727146);
    msg.setSource(26829U);
    msg.setSourceEntity(184U);
    msg.setDestination(32602U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.43269884016128635;
    msg.lon = 0.3639339811427609;
    msg.alt = 0.5838720711649085;

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
    msg.setTimeStamp(0.8033552365040333);
    msg.setSource(33651U);
    msg.setSourceEntity(125U);
    msg.setDestination(28135U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.6485965897872533;
    msg.lon = 0.7886142716960971;
    msg.alt = 0.756931174882637;

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
    msg.setTimeStamp(0.4044460377348019);
    msg.setSource(40334U);
    msg.setSourceEntity(111U);
    msg.setDestination(49740U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.6355962561847697;
    msg.lon = 0.11017283519697152;
    msg.alt = 0.16998114728655989;

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
    msg.setTimeStamp(0.28696671788545614);
    msg.setSource(553U);
    msg.setSourceEntity(120U);
    msg.setDestination(4027U);
    msg.setDestinationEntity(136U);
    msg.type = 105U;
    msg.id.assign("YNKMAYPGJITLARSFSCRCXXWNBROMJFVBEOWNPH");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 184U;
    tmp_msg_0.step_number = 39U;
    tmp_msg_0.step.assign("FUFECDGPNNSOYLPVOVUCZYQYLNQKNAWKNEUFNETQPNHZQASKWCKELMMJRBHUFGUOABQCDMSBPIPNWJXEFGRFGXKSMWIILQMTRHVQWDRPAOZSDAMVXG");
    tmp_msg_0.flags = 90U;
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
    msg.setTimeStamp(0.5188774786142658);
    msg.setSource(17097U);
    msg.setSourceEntity(104U);
    msg.setDestination(63691U);
    msg.setDestinationEntity(89U);
    msg.type = 169U;
    msg.id.assign("FQUOZJKNIRIDPVONTXCNYDRTTFUDNCMTMZVPYGOAHIXKGTBTKHJKJFLLHAAPOMZHRRDYFMOBTLJZGKJCCQPPHCALMSHQQUSBFTAUCFECALPNOXKZMIPRYSIIXOUEVBXQPVHDVVZTYZWRNWELFEJSICVMSYLQJYYSQJAEUGZKREKWDLMSNEEPYWOAHJBJBAIGXDMAOSHFGGETZUP");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.14072594514038694;
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
    msg.setTimeStamp(0.988461237418025);
    msg.setSource(45823U);
    msg.setSourceEntity(129U);
    msg.setDestination(39248U);
    msg.setDestinationEntity(88U);
    msg.type = 62U;
    msg.id.assign("CZMOHJVWWTLQZWKOPDKQIBONGETDENMPWSLCACATMHWHNYCUKULYHMQSIYJHQUHGYQDLUUCGDBRJOMSDK");
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("KWWZPMVNWCZKKJQEMDJJIWOYKSUYIJMCTSZYHGFMODSWPLDFZIDZDXVUKCTGRXFNFRIOVPNQBHEOEYAVBZSQLLMPFLEIUXINBHSGBDECPNTIBFZYGWSXPTSUWAOSPLRMSHMUIPJAKYVQLOXNQKCQYCEQRAVJHUAYVBEUZTXXADOFORRQFOWVABINRRWWXJYIBTCGHXCUHRYTVRXZDNJBKBEHTLKSGLFNPGCNMFTMJDOGUAPH");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("IOMATIDHAFTELNADDXBPJSEKYHFMDVQKRXNZWZQKZKRXFJMKXFHNPMHBFIOCORQTWCYRIBUFQCYIGLPUPGTOSNBWZHFUSCSEOLICAZBLXBUMSFMYQRDOPUKPBJGXBWUYAOGNJYSPHJZQNLIAL");
    tmp_tmp_msg_0_0.predicate.assign("NWSUCDWMXPKJBEGWZYKTFLPUHIJNVTYGMXUXOHHOPIPOUHFHTOJFRJUDQEQOQPIVV");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("UVGCGESYHJLVOZPXKBCFALCHGQMGKXZIXVUBQSAPQYTEPDJNKNINPZKFWFRACEFALQCGADJTYHNPAHIIQRCAEM");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 195U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("WEGUTIBXRHEHBPUEPBWBDRILZGYBKRSACFPFNMIIIMQSBQOOFASDZPYXNJNPJYALUWKMYLQHKULQLYGKQBHVKURGUUNZGEFISPXWFOJPJFZSSRULK");
    tmp_tmp_tmp_msg_0_0_0.max.assign("RULGAPPCMIYRBNRJTWUVNCKENUWFWVDKLDDWQERMVHTKWVCYZCYUDISPJNZEMMQQZATHNRTDEZGBKWHMWCXZBEFGPJAGPBOVYQJQEYJLIGOFSFSGASDIFRUEQOQNBSSVBAACNPGM");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6758415561891608);
    msg.setSource(43845U);
    msg.setSourceEntity(9U);
    msg.setDestination(64999U);
    msg.setDestinationEntity(88U);
    msg.localname.assign("DCGBQVFHRFVMCLVLTKNMNCRMZDGSFELTYRWJHWMIDEMVPMYXJQJKHKFICXUKAETOABCYISRJZJBCZEGFYZWURPQFTIXWUQIVRMAHZLNUBUYFVMPSVUBDPWSEEOIETSKXPCNHVXNQPOGMFOXWSGSPTZFROGKXWZKJDWIGPYX");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NCPSQYUDGIPUGRFQKFJDNIGHOKZORDGLMCLDZIFABHJNPDXORWPUQQRWNXJAGBMMKTKDTYTJSTRBXVSJCPME");
    tmp_msg_0.sys_type = 230U;
    tmp_msg_0.owner = 44768U;
    tmp_msg_0.lat = 0.6862125563879818;
    tmp_msg_0.lon = 0.5779413859023677;
    tmp_msg_0.height = 0.2439822036424587;
    tmp_msg_0.services.assign("MNCWOAITLBVVHDLQLKEUCBEWDVWFOJPTSIOJYHFJELTECSHKKVWIKSSIZRNFZGBLQIFEVVXLBUMWBJVQTNGKDXNSCVHKYNDEXMRTVILYYPGTDZDQXYGATMMHSNXPUHZJZRMCGWVKBZYCMKUDPKMBIQERAANGFUFFBCTAJYZUXGUCQUWAPJEHUCRORDEGJRMWOBPIJUSHTLSGXTOPHXXIZPOODJOFAZERSABIYYQQFAYPWLNZNC");
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
    msg.setTimeStamp(0.15198612826202385);
    msg.setSource(52777U);
    msg.setSourceEntity(205U);
    msg.setDestination(25798U);
    msg.setDestinationEntity(23U);
    msg.localname.assign("GZXZIIPOASQYEZPOCBFKEZSOVKUADOLAVZJWJRKPXBN");

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
    msg.setTimeStamp(0.7529724433324414);
    msg.setSource(57413U);
    msg.setSourceEntity(2U);
    msg.setDestination(54979U);
    msg.setDestinationEntity(127U);
    msg.localname.assign("VSICZSYCRKXXTKEMQEGCWADGIMHQYDRNUBTZRAFBIBFBPUKPNKGACZTZMVOYJJVPAWLXKKGQVEOTFHPBLDMFEYXGLRSGVMZWKAOMPNKHCLVNXLTUBJTMJEXWDAUDYQESOPGUJOEBVJFURA");

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
    msg.setTimeStamp(0.1979611262391039);
    msg.setSource(23588U);
    msg.setSourceEntity(178U);
    msg.setDestination(51582U);
    msg.setDestinationEntity(135U);
    msg.timeline.assign("DIXEYLSJDHTMXZRGKPZFVPRLBFKCEVNHSKZBMRCOEQWYUAADXDKXELBBMJZFTSYUIHNWRKFVUEWHPUCUMZAYUIVGDKVPAJAWZWJJYIUSONPDKBCQQEOLFTOOUQIQDWBHTSZILTNTGNQJSGTASFOPYICCPLUQFGXRGAHSMWVYNHAJDAIOZ");
    msg.predicate.assign("GPJQZRHPMVGBOPIPLHAPYVGFRWAVUKQSKVLFSWCWSWTXQKVZZQJBXPRMFYTIWMGGMLVQKFJDUECTHTKMMEEHTCXJASQHUXSMVNLHOYOBJDUZRZIZORSDHGYISJFPKOJCXKWNPOTDEPFINUOQUVYNKDRCAVRAOFZHXDELDIZBRAGNKDQSWLXYOULOZFAXXUNQHRKB");
    msg.attributes.assign("XEYGADXJRHAPMIAZARMCNEFCMRLCUAXKFDGWIQSLNDCUOIDVCHJUWKIYEJLBPFPCLOQYDGQFYJXWOKAEGUZTJFHSCHHXIKOLGKRBEDNVCCPZZIRNNBPPGBKFHAXOHTUEKUDRMYFVJVVWJKXTOEEFMSLKDDPQDQTSRXTQUFRQPLSMMWYNWXBVPLSNOXVTZWENGBVBQTNRJIMWHLIPIBYVVNUSSIURSHQZGT");

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
    msg.setTimeStamp(0.4119082072084558);
    msg.setSource(56452U);
    msg.setSourceEntity(95U);
    msg.setDestination(39923U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("NMTQKVTUDIZZACLVUFBYOEXDVQXJVTZEWETTRIGYLFSDDNVMBSHHDYUKNDKJWRESEGAACQWNBAZSMFJHOYCBYPLTQOFXFXXIIPRPJCJJBGVSZWBVNQYNGPEOHYYUFKUGASXMWHHPKYZWEOPELLPDSUWGIIRCFJLAKCANIBPXDNHF");
    msg.predicate.assign("TZIGIWBHLVDZUAVUIGFQATQWBTLLCNQGPXCUTQOFNVPGIKPFMIYCTYJSKMHDDXOGWUFYJOBAADCXLVKIBTSQBUOXRZWLJCERSLIXYKQSDHMAXXUSTTJZQMYWSKGISXVBFWPGTFVZXSNCJZLRWJHSPYEKQYV");
    msg.attributes.assign("KCEHHUZDNXKIHRBTWEEMSDCIPGKSGBTZOWCJIQHZKOMZCTPVDTIEPLQLVEQEQVKBDPOBSGFHWCACXZFSYERXNEFFPRLECBMKMRCAWWQGMAXUTGSYSFJRLUIZVOOBBFJS");

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
    msg.setTimeStamp(0.9683420139956127);
    msg.setSource(34796U);
    msg.setSourceEntity(210U);
    msg.setDestination(6606U);
    msg.setDestinationEntity(0U);
    msg.timeline.assign("LLWBOHFKPNFBFVUPIARNXKCIBSXSCGWOEQKJGYKOIUUVTMTEJDPVTDWZPRWXNHDROQTCEXNLZHUUMWVCZXSAQSMZWPDEDJXSH");
    msg.predicate.assign("HSVZLKSXRJHFRVHLZGUQNIJCEATEDOXMOZRKOOPUGZXLQMJSNBBIYEPPBBFIDHSDNHXMPLSFMOBJOFRBTNEWYRUWKYGNIAYLGXATFHTZMIGUCUDNAXEDJDUMXTAUCASWIDOKFPYFCASIOZVJAYMZKTCOMDXWSGQPQYRKCGELZQX");
    msg.attributes.assign("WNWEOMTIALKTPEWBDHVXUSOACORODCTLUYBGTSKGABGXUSSCRMZEHXWAKCLAYOEBEGVDWGRDCGIZUSHONMRVVSKQDJDMKBMWRXEZMZQIJQGHYCOZFFYXHTPNPGTYEHNRNJTBMFFWPVVYFFLIDHVXSJCQJZSSVZHLPRPLAZKNKBRPLDLFQJQSJQZXFRMKXLVNHAWYQDURNABFGYI");

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
    msg.setTimeStamp(0.03693788614636706);
    msg.setSource(2954U);
    msg.setSourceEntity(131U);
    msg.setDestination(49924U);
    msg.setDestinationEntity(214U);
    msg.command = 49U;
    msg.goal_id.assign("FGSALBJNZIQBKRZGYJAODYCTRHPCDVSPWLIJNZDBLMVAVIDWSZZRZIJBPKOYTKDDBYLHBQSBUXXEWUCWPLUWQNAUHJPLFVUCAENUOBAKTYPNXTCHFXOGVPZTQFMRBAWA");
    msg.goal_xml.assign("VRZAZELTPDWMCNGYIOKDHIMGFZRMQSWMHFDPDGVBLEERHEHPHTMVQLRIPXBTXBXUUKNSODHFBKEMSZJZWAWRUNHVSMJXIVBNZHQRUZVRQFFSITCYOGWOKDJLACETAGOILAKMPWZDYJUFQEYOGKYALPOWTUR");

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
    msg.setTimeStamp(0.6928596657975207);
    msg.setSource(16507U);
    msg.setSourceEntity(150U);
    msg.setDestination(8904U);
    msg.setDestinationEntity(136U);
    msg.command = 243U;
    msg.goal_id.assign("WQMPGXLCZDSRNZHAZKYSOELXWUHGYRMGXFUARCMRUPHRPFFGRMKEMABJPTUHAYOLYQIMLHVPAAQZGCKIHIWKXVESBROXXQ");
    msg.goal_xml.assign("XQQMQGECCQURBPMNDFCZPXCXUPMKYXOKVBQJLZADVOREKNWTFEBHSPHTRUJYTPFAGHGAVBVABISHWWFQYWMUHFIKVIBPUXZIVRHGOLCOJPYIALEQULWVWSSRKANEKEDCXSIEMAIXSJBNVYVJOEFDYGICLGBGJENZNUNFHWTDFNRLWTZGLBPUJMXCZLTZIODYQEKZTFCRDLHMRXJFOSTKZHDGHWGAYOLCRQSTSZUMRMKAJIYSDYJW");

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
    msg.setTimeStamp(0.5194224249152865);
    msg.setSource(53618U);
    msg.setSourceEntity(142U);
    msg.setDestination(35255U);
    msg.setDestinationEntity(63U);
    msg.command = 149U;
    msg.goal_id.assign("QAXGQXZUVDWHMBCIPNEKTMKKFMJLYYGQQGMDASSCSANRCKKVRMQGKWBCQLIGZSUZZFTJVNVGPVBTHNDHEJPLABHUIHWNUOCISFOHTELVPYMNXLXWWJOAGLYADLNYCQODXHIFINYWDVUJLMCKXTRUPSVVXRXRCBJRDOOFFTMZTACBKNSDIDTQEEOYRTBOPIHBGEFYJPPXHQEGOWOKQZAR");
    msg.goal_xml.assign("IKMCGHJEOZTM");

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
    msg.setTimeStamp(0.26125987225271685);
    msg.setSource(30650U);
    msg.setSourceEntity(134U);
    msg.setDestination(23832U);
    msg.setDestinationEntity(171U);
    msg.op = 233U;
    msg.goal_id.assign("DTJXAZECRMLFVKJHBCYKJOHYKUKQMYMEWLAPEVVNWRBKPXUPECJKXSMZSVACIGKDHXNIBRRSLGCPAKTCLXZNTNIZZPWWSZEWGJEFDMFYQUIAOHDIWXDJDVBWUDDFXUHBJVAPGTOUWUDGTSSNQYRAUNSLVJLCLPAQYFXHBGAOQZCGWONJKRMETYNRPFQFEOFIXONALQFEXLBSIIBNZGQMQT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UERAOTFXIDHGEDWCJTYNKEGFFVQRJORNCIUWOSOIEXYXXIYLKMZTQWTWBBNACYLWYGXSZALBPNOBSYBGVHRTXPMJDGFZSVPSDKWKTBFIFRXBJVVRGUVGKONSYECEUPUIOJHDHZVQHGCTZH");
    tmp_msg_0.predicate.assign("YFBCYHSVCVPUZANHKJCYXZCVESNBOVQFSWKARMHRKWZWIHXNJLFABZMULTEMTCIPWBZVRBHXXMJXEUBOPYVIDVTILUMJPDUMVOIODMHSIEWNRSQNQPYDJKBWKZHTQZDQSRKHKXBFXAUFZIAMYWSNPLGNRWKIJQVCZJOJDTPTWGDZGOVDCYXBFHULLGFCULGEISOTEXRJYYUPGPSOABNQKFCCTMDXQHGOEASQJNAFEYIGAUNWQKPRMEEGLGRFAL");
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
    msg.setTimeStamp(0.604858650873238);
    msg.setSource(38660U);
    msg.setSourceEntity(96U);
    msg.setDestination(46427U);
    msg.setDestinationEntity(162U);
    msg.op = 49U;
    msg.goal_id.assign("XYKASNPHHLOIGTWFRWCRNRVJREQLPOLLCPOLJADWKYEWFXMGYJWIK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CDRPUDXVMQUTDWNPMOWGJNLXNLUDOXBRGBAUYGCFJHKYHYVVENZYRFMGGRZXSJRCHFPVOCAIWCRQSGBOASLAUDPNYIVZFJJEKNEQTYMOWLBPDSODQGHPYOHQFJQWXAVUTVUOXIYMIYNLVKUWBRZDTJIXTNRDBJ");
    tmp_msg_0.predicate.assign("KZNNSGYHZRGAMQGBTSNJSJDEKHRJUTACRUWFDNGLPJGMVMRPWRHJRUWEWICJFFQKJXPODFQUELQHWGOLUKWEVOLNTRVESHWOCOFXPVCIPKMFKMSUGVUHXTLXUXYOATQWBXAZIBIMC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UIIZFMFHQYUKVHRQSLDEYPLXOMXWYOEQKFYBGBLGIPCRQNYTTLLTMBGELAHBCPIWFTMXNKENNWIOIURBPNZCYTPMQOWUCDVXVNUISSAKADGTBBUJKEWXEQCDZKRDLAAYKDJYNYRJOFORSJJFZQJGCQBGXMXZMNZXVSHGZKTKJRSRAFBDNHWMPSDYHFZDACPEVRSHGEQNXOJUOMLULEDVPUWOXRGVSOHQAJAWJBTTIWWMCZ");
    tmp_tmp_msg_0_0.attr_type = 80U;
    tmp_tmp_msg_0_0.min.assign("EMSAMRJDXPJDDLAURWFMTAZAAEPDLYNRZMWKYZIYZWTOOBVVKXYMLKVCFBOGICOWMOMTGQSDFVHAWHBCQGLKEQBPTHXUHEKKEERWIPONJTUVSVMZSBIJNLXNHSAWYAFVWRRTZFFSOHRIXSEJQXLYNFZUQYAGRNVRSSUPCPTUIYFQOBCTKZKEDVMUWLJZCXPBIDQGGDYLBFJIXCDHJINEDTOLNKHLHUCS");
    tmp_tmp_msg_0_0.max.assign("DJIUWQZRKDFVZCCWKHJYNVAPNHYPXBJULXIZMTTMHMNHJQATPKUPQYWRZCUTQLRWEBOXAVWZEQCFBBHUQJ");
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
    msg.setTimeStamp(0.23257032098870023);
    msg.setSource(11190U);
    msg.setSourceEntity(202U);
    msg.setDestination(14419U);
    msg.setDestinationEntity(233U);
    msg.op = 223U;
    msg.goal_id.assign("POVEGPJABUIMOKBIQGPIIGIJJACFDSLXAAZUNVSWPKDZHHDBHALMVVKMQCVTFJFXXEMMLSCYXURUWDYLOQOLBREZWBDYNOMAWIQNKRTYGRVJZDRFJFJZHQXYOIZQKGIYAQYHZYWLQNGEUMANTVDBHGEYWUPELCBTHMU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CYAUUDSYMOAKYCISOQXLIPGYVYOSFVLUJRVZJXZMDZNCILPUBWQWKNYHVZQYQHSQJWA");
    tmp_msg_0.predicate.assign("HVQYVOAJYQFUFFKDTUSGGVXPBIXQMECYRMLUTNKRZBWFTFRZFCWYOFEURXM");
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
    msg.setTimeStamp(0.8176010764968231);
    msg.setSource(32679U);
    msg.setSourceEntity(7U);
    msg.setDestination(43307U);
    msg.setDestinationEntity(142U);
    msg.name.assign("BLWLXAHSRPSEGFBYCRKOCMOXSDWWVWOVWUGLQJWGGQQLDQMOYCCAVWMCAXHYKIMPIKXNIBVAJPIZBESEEBSCZJKIQEHXFVZWNXFBZZKSPBGUOMRYYD");
    msg.attr_type = 37U;
    msg.min.assign("DDBJYALYYNFXYPCQSMKGGWKGVHLMKXHHYPNXUAMZHVGFEQNUGOMQQZPNFAXWISRZBRFDHKNTLMAKYVCOZIBKQKEOBYEAHWINELUOKDPRCPFUNCSCIJBHPTXTZSTCIAGSFJCLCEZUNJGFIZBCRYOHTOAALVLJPLQTERFMQDBXVDWJNOLDTFSRIOMTDUHAIJPMOZXXSVWZSAMYVGTYMWEQ");
    msg.max.assign("PVAZGVTKVQHYMYICNDMUKILDACIPLQQFSBJUAYRARPXDTYVUGJALMENHLOZLVQZXFHHXTIYWCMOAMYPQSCQYRGEPOWTEPFNNBOJZHFXUXKHM");

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
    msg.setTimeStamp(0.49523740377416503);
    msg.setSource(33702U);
    msg.setSourceEntity(79U);
    msg.setDestination(14593U);
    msg.setDestinationEntity(197U);
    msg.name.assign("ZBGXQCUULSYAVXOVRZSNAWSEOQHSGCTYEVXRHFSEUVNHLOWEAIEDKQJWIDKJMKCXAEISMMWHWUKMOEKOBGCBUJ");
    msg.attr_type = 17U;
    msg.min.assign("YRBHARULFTUVRJSRFIWFUQUJYTBXEYIKKPPMCVJPNEEYONROIDWPIJBEAKHPTOWNXOMOJZEJKSDURQVTQPJZRRSCSOHXDGAH");
    msg.max.assign("LLPVTCZCHYSLUVXHYGCTSAHPKIRCFHVHHSESSTKTGGUOHVLYCDODWPRQFPJWOQAOGWGOXPRXJCUMECZIKAISMDPHFZCMDQREFAIKNRFWNMINPMQIAVKVGJDBYHZJAPEBTZLTBANRUMWZQYGUEBYDQJKNKNOW");

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
    msg.setTimeStamp(0.4070266094535593);
    msg.setSource(52899U);
    msg.setSourceEntity(66U);
    msg.setDestination(24434U);
    msg.setDestinationEntity(175U);
    msg.name.assign("DWLFXZKTABYDRXZHCUCVNRVHUPZYPTFEXAOMYWLEJCQAEKVYRKOIXLFOOVWQSYHSAEEQRRBLPDQAUBZKAITNZCSVNNROKJJVBUWVUFHRMEMFGWEOGBZTGBBWMGXCCQDKQKBEZEULDSHJIHNCAYAAIIH");
    msg.attr_type = 93U;
    msg.min.assign("TCRJAPIEBHLANVTKHRDJYSKDZDGGNOHCWBYAGHCXYCECZSSMXUVVAHRAIPHZJMOSEQFIVJBKTLRWHZONLADXHQLZGYMLQFOKMQXWMWQWWPCKVLRXGPYEBOFCFFBFUPVLUOJYKNWDMZ");
    msg.max.assign("ZYYFPTEAXLNMRVCZVVSGTOGNCMCULTMEHPXNGNSZCABX");

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
    msg.setTimeStamp(0.13248033343379717);
    msg.setSource(22929U);
    msg.setSourceEntity(101U);
    msg.setDestination(62768U);
    msg.setDestinationEntity(179U);
    msg.timeline.assign("UUJMLQEHOAEWZJTURRSJASICVULARLYVUFQGCJB");
    msg.predicate.assign("MWLHGJHZNVCLODEWNFIBBVRCWMZRBNASZEXXNCWHUDPCQGWTGYJYKBDUIQNKYPIPXVUCPAJXWVCVYCUSSQVWBOEARAITZDYOAFPQJQMJLLLERTIIDHDKRYSOAYNKLPGLMK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("DBWUBOBSJVLVVNCARUUFVAILNYQPDJZBYCZJBUJSTKVRGOBPNLDOFLBQXDSZGYZTQHETSDTOKS");
    tmp_msg_0.attr_type = 244U;
    tmp_msg_0.min.assign("TUQYNVNTOVIIKFKAXQFXSHIUFSNXMZDWVIYFTLGMCLJFVEZXCHUBAIXSFIIAKTMJRJWDYACZLQDKUSOGWLJDGZRAKPVGVJDXUWSPLPNTTFRUEKSBANLAPIKLTONBBNEEGCTSQQAFHAHPZOMOWRVBLSUFMHZRENYPMWCESGOJDFBQYEHPPVUDORMZNHHYTMDIVXOYWJBQPENPGGKKCZHREYZLDGQYMTWZQUCYI");
    tmp_msg_0.max.assign("MNDAHSBSBYFALDHOVLDDUUINQBCHDTYLRBZGFJDCJFESQGVNTNVYTKOWYJKSIKUEWKSAJFQUAYFEMMEXYNWRQLXPZWNPMIPFXREXXPIMSYZCEWDWTOPVJGJBGMHVWYWAEPBLRGGWZFGIATKOSYHHZLURMARIJJBXKXFRCTUCCXDODZFELBQAZKRLYMXMVPVHINOIRVUHGGPV");
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
    msg.setTimeStamp(0.6213343569996402);
    msg.setSource(17838U);
    msg.setSourceEntity(83U);
    msg.setDestination(33615U);
    msg.setDestinationEntity(175U);
    msg.timeline.assign("GSVWPEXSJYWJYGVCGXFEVKMNSVTQSJ");
    msg.predicate.assign("CMHAURILCHSREKZQIBGGPCLEFTMMTVHSXJYFYJYNUQVUUCYZPYJQROJABPPFZJKOCMNFTKKDEQAWZXPGUGFEARKPKTSRKJRDWGLSXOXSDJXMP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QTRBBVFQIJFEMEXTLAKZXVUMDVMWNLFIUZVZYEBXZYYHOTRRROSLPZFOTFAOBFMJQYTKMAMCQLZODHTRYSHSAUPMEGGNPTGGEDPDHPNDFACJBKCHLYSWQYJXCIAHI");
    tmp_msg_0.attr_type = 123U;
    tmp_msg_0.min.assign("LSFBNVBBOHWNQDKVLKVGXPVWUGEOENSZIRWSBWXUEBTUOAZPUYFVEYILTYNNMLJOPHEIYXROHMNNSTZDONQGDSCYUK");
    tmp_msg_0.max.assign("MPXMUHZUUZLEGVIOJCWOLTYULEDIMNWABBXPFKWZOOXNZCNCFUKQUBGCAIXWOARFGTDYRNYSYWSPJYSNALGATXQIEBKQPYRAIDPOJHQIEQBPRALVFOUKWXZPDDVBNETSFGNDSLUEERXLFBWZTFDIHQGTMBTQHWVNYVVHJWDNTEFFSXHOGFEPHEXSMIJLMKRQUHXSTKZIDCJIRJPCKCOUCYLDKRVMBJRMKVAAWGZJMZLGNCYGARV");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.07464820992752197);
    msg.setSource(48296U);
    msg.setSourceEntity(244U);
    msg.setDestination(32207U);
    msg.setDestinationEntity(254U);
    msg.timeline.assign("ZHMIEOIBBTMMQHGMVKTGEOCDLLFKDDZDPQYURNWUGEPKSZFQJJKRDNQYNKNAPQTCSICZYYKSIRCWXAKWNSIZPPUIVTRBGLAYOSCAFHBUGXRMJZPWFOOYEFSJKGZSUVQVTEHGYRJQRORROFAXTBZAJUJXIEWGVUWFCDEEEDSGLHWNBRMFDSTOYODFHQVC");
    msg.predicate.assign("SGWLHSRHQGLINQQTRYFYEYWZWRCLWWVGNDQDHDZAWUMDSVPDFKNGPCPMYCOOPCXZAOOXKBCOEAQYDSZPSKPUANHHLGDEHZAECLGGXTMMHUWSKELFJGSRYYWKQZOKV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AZCRARYIYMRKXUQMRTEWOUMPKXZGUVXXCNYONQHBHWNBEGGCSFLQJCBVEOPBQLREFENPNRDLQBTKVZFKWOZCUZUKGADYADSJEHPWVHMDCSBLFGTLAMQUKRODLIQKILIYVDHTYEEWBYOWUVOPPJNUTJGFFOXMMWTXLHJVSAFTUIGIDAQIKPDTSZOVDZITCSFWYLYCHMCTWIBMSJXRSBJONSKPASNJDZRXAUFZRGZQLIXHHK");
    tmp_msg_0.attr_type = 32U;
    tmp_msg_0.min.assign("DZCAOTHZPQNULJWBORGQSQXAXNXJZJQJZUHENFCMCCPDYDOZEMWBQNYRIIZYNIGLVSINVQYHCZGSMWFXKKIWBBAOFGUGSLXLQHPTUDBVBVSFFVMGIIKEKOFTOKOMVYGADJPLVBHYMMNQDGPKLQXIYLHVHGEEFRVTZSTNQURCLTCJRUUFRSEOYAXOKFP");
    tmp_msg_0.max.assign("BPJVWIWFYTNXSZADRFLBFWEKIUZKXNYKJFACOHUBACDCCSVPMGKZRCLGOBDMLBVXLXPMCTHEUWEDDBTAHEOLOIYCQALHTSGNDRURIMZPODMFYBZJRWDCOGTRETQPHGJSFSJNLIYMSPONRGNGMFEHW");
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
    msg.setTimeStamp(0.3809796091221376);
    msg.setSource(37393U);
    msg.setSourceEntity(38U);
    msg.setDestination(41377U);
    msg.setDestinationEntity(176U);
    msg.reactor.assign("BEDKJLWGDZEAIUJOTQOZRHQJHLEAZSFIEN");

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
    msg.setTimeStamp(0.8933971591090799);
    msg.setSource(33475U);
    msg.setSourceEntity(30U);
    msg.setDestination(52382U);
    msg.setDestinationEntity(243U);
    msg.reactor.assign("SKQUEPXWHMJDNSQLOHXZLYNYHSZZIYDLHVQODMEGIWEFVUICJBDSZWMBYPNSJGEGVBFTUZDVLXAFZTQYOQTTNNFCTRGPKLPFLKWKZJIVBBKQGUKJOFJTXJPIOJMERTZLPUJORKZCPCSQXEKOXANKERYWJSYAXBXGWEMEINSARAOOSBTQWDHHBVRUMQGRDHCWPPBMIECUVXACNFDRT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UZBRHDFSKVWLJUXLFYRILQFZTSUOSRYXFNYKJPHZPOEVEEJOMBTITFTTJGSISYHRVQTNLATRPPXEWKLDGDZVOALJBHKVNHCMIXBGMUREAXDEKJACTZDHMASYCHBCPJMOGWYAEQMQC");
    tmp_msg_0.predicate.assign("MNMDGUHVIDPLGCYEAGTXYRIMVVPQLNEKXLRMEYJGUKUOVSGWJJSRUYQCNDXSOAXUTWHTNAHNDJJIROYBCHPMOQKYDXWZFRKR");
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
    msg.setTimeStamp(0.19495615905279828);
    msg.setSource(7654U);
    msg.setSourceEntity(24U);
    msg.setDestination(44872U);
    msg.setDestinationEntity(37U);
    msg.reactor.assign("IUXPBTMHCYAVHNKGJUBFWGRPVJZACPOPAWUPDNJOPVFZORNQQKPBBHWSLWXZPIOXBTKFFIDMUIQBIGOFLWACQMMITNYFCPCTCMKLNSZVTDYHSUJRDLGUDYRAMDXFCOKYBEDFMUVYSEZXKKGJMBQESACHKEGEEFJPUVXRCQOGLERLAUHSVWEEOQRSRWTLRTGJSDJNQLNZTLSHATKNNBW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PVXWKZETUOGWMTPDMTBGSGLLQWLMGYNIVIABYCZXCJVDTNIJMAIXBFVMDABEQWHRXKRPUIIHGJGNLNROFBYHBUZRQRJYGNANXYPKYFIHXOZJCWKDLJPRXDOXDEZKWUNPETVERBZYWRPVOQPCBELWPLUEOSUZYLALCQCAHTISVLBM");
    tmp_msg_0.predicate.assign("KERZBJMUCEDPKTDZAXYNSNLYZQOANTXYNEDJBEIHCUYSLM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZFOROQMJYFHVVPHLTSKCVIPIKILNOSZQDCWBDCJCKIPEQCZENQRRDHJHAMPPWXLJIYUGQVDDRWXJMUQGXIOKQDZKUDZJLAOJULMXDZPGJABMZRVMKHVGFNWCFKEFUBFWBQWGRCLFNLXGTEVNXHNJWYCXKDOOPULENTUVISSTEMRAKEBQAYMASWJXEOGBSXQBCXNYURPDGTBPMYYGZTHYTUHTBSKNSTRZIAURAVICAIMVYATPBYOSEH");
    tmp_tmp_msg_0_0.attr_type = 146U;
    tmp_tmp_msg_0_0.min.assign("YDKSQJOTZUSLFGMTBTUOWJUXLIQDRPCFOZIGYGAPERYYCBNDKURZWHCAGWHPBVVDCCHFEZMNWVKLFEQKMNQASMYWAHHMSHPHXSETGBNOUXDDKPFFFDVNPBANDJAZNRXMWXITRIVTCQCIJLMPLMYGSGZEYAQVWPNKHFAVIOXLEPRKSJIYOXJAYLSPZXDGVTLIFQVMMCGJSLWBGNZKBU");
    tmp_tmp_msg_0_0.max.assign("ZOKXLPDIQBZEKYCNJFJQHKONRCFPJHDYFFPXNUPZZKJWMJYSLKAUMCMTYDHWRKGVZSPHFVDELAAIMSSSQPBSICGCQXPXCEELTUJUYAHGNRHAQQMENSBTGBJUVDVYUWHXFOEWODVWVSRLYAXWQHDMPNEHRGQYJXNIVIDXCOXTQZBMROQNGGKMOPVNTLESIWCRAFMBCFAOE");
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
    msg.setTimeStamp(0.7330970064561807);
    msg.setSource(22056U);
    msg.setSourceEntity(190U);
    msg.setDestination(5470U);
    msg.setDestinationEntity(60U);
    msg.topic.assign("EEXJPQNHTIXGZLBGYOBCJRRLSQFQCPHOWKOUWCLKMHMFZMJAAFMOAPFSGGQFXNIUPCBSPTAAUIWPHOJFXBALYMCMMDGHDQVJVDTLEXYXIVZZWBVWEGROGJYAGSXFRAYKPPRNNSTCOESDDDOLLDK");
    msg.data.assign("SFVFYJOKMATPQWPYVNVZYRWNCGKUHYMELFHIOQUQPYUDGXNGUZHPQEWGZJKBDMVVQMEPGHEIRRMAZSIPRDFEAOIPVTWHCBLPRWOGXNEDDJUTJMHKQCLMJTPHSJNHGANIZWUTWLFREJAWXECNSBQBNLMSCAGKSWAQYKFRSULTVBOHNIOGXYUDJVDBKVLCTCLUVXIAQBTLKICMIFXOSEYTRIYTOCUGOXXFNADRZAZBRSH");

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
    msg.setTimeStamp(0.08738666565601239);
    msg.setSource(35111U);
    msg.setSourceEntity(71U);
    msg.setDestination(49378U);
    msg.setDestinationEntity(36U);
    msg.topic.assign("GALQBIVPJCAJKMZSYUWODXYBNTKJQJFHCEUSHVYSPRGMTVVEOBJVFMNCOGWXUDBCBODTQSANYOHHHRKELGFDPFWTORKCVJXQJRNUMHBRKUDHZIIEYKLBFZNALTGYAWPFNCIYUCBJNXZMIDQIHYTXQNMQMGVDXSQBXIPMIFWLSUSRCTKOAANPCJAIZQHXLKEUZTRGRCS");
    msg.data.assign("ULEMCYVTAGSUCFCLKESOOEFMHJRJEXVBOCYWHOIXVYVMVNICOWAHGFDWWDGAZNSJHKXIQNURPTBUSAVYNDS");

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
    msg.setTimeStamp(0.960703501484629);
    msg.setSource(14224U);
    msg.setSourceEntity(210U);
    msg.setDestination(54496U);
    msg.setDestinationEntity(102U);
    msg.topic.assign("SEPMHGYZQGYPTYQVYGFEOZKZSCSWLIXULMXKNCEISDBRZRVWDTCCTQHXVMAWBSJONJTPLXOMEPEUHUCRQLBNYRJJSZDILTXMOOLVGQFGLWSFMJJJYUMHMNOLXHDOUWJZCWBQWCJTAZNESTGSDKBURIPEPXVIPFDABTHGUAFKRZBVNSNVQOFAIAKXRKBNYWUJCHU");
    msg.data.assign("PPVAAPQRPXSHVQEONOXXTWVXINDYSGAKWGZHQUGWZNTUTJQVITKIEMYAMMQYHHKMTKQBIFFSPM");

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
    msg.setTimeStamp(0.5092428422537754);
    msg.setSource(53600U);
    msg.setSourceEntity(222U);
    msg.setDestination(46283U);
    msg.setDestinationEntity(115U);
    msg.frameid = 143U;
    const char tmp_msg_0[] = {126, -119, -9, -5, -66, -22, -44, -5, 65, 113, -95, 102, 28, 68, 66, -82, -60, 33, 115, -46, -40, 41, 82, -81, 63, 31, 55, -76, -28, -15, -10, -105, 35, -21, 73, 56, 26, 122, -42, 90, -25, -110, 43, -8, -113, 42, 68, -79, 71, -48, -110, 28, 51, -6, 84, -24, 108, -125, -29, -53, -23, -97, 1, -126, -14, 109, 69, 67, -8, 48, -126, -13};
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
    msg.setTimeStamp(0.4778328811085061);
    msg.setSource(37304U);
    msg.setSourceEntity(62U);
    msg.setDestination(5826U);
    msg.setDestinationEntity(176U);
    msg.frameid = 165U;
    const char tmp_msg_0[] = {69, -3, 108, -54, 74, 82, -77, 107, -12, 15, -39, 45, 61, -86, 84, 78, 28, 38, -73, 26, -17, 49, -28, -75, -48, 118, -47, 109, 41, 10};
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
    msg.setTimeStamp(0.008257483236583485);
    msg.setSource(46182U);
    msg.setSourceEntity(239U);
    msg.setDestination(60995U);
    msg.setDestinationEntity(68U);
    msg.frameid = 184U;
    const char tmp_msg_0[] = {45, -69, 63, 20, -35, -33, -22, 81, 77, 19, 120, 102, -11, 16, 89, 124, 121, -99, 33, -90, -17, -101, -113, 124, -9, 71, 98, 10, -16, -62, 38, -54, 70, -67, 116, -64, -14, -81, -105, 93, -3, -12, -93, -118, 33, -35, 124, -106, -63, -83, -73, -93, -122, 49, 18, -61, 40, 86, -15, -54, 36, 49, -90, 103, -88, -19, 77, 25, 19, 20, -53, -69, 104, 121, 28, -84, -37, 35, 37, 64, -60, -95, -25, 52, -82, 23, -88, -46, 101, 66, 87, -63, 55, -57, -6, 10, 27, -66, -67, 62, 77, 53, -41, 70, -89, 5, 48, 21, -25, 8, 6, -112, 42, 70, -96, -95, -98, -86, -19, 21, -126, 89, 115, 37, 102, 24, -41, 88, -41, 43, -82, -8, -93, -77, -57, -83, -3, -100, 22, -121, 25, 35, -13, 88, -36, -40, -98};
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
    msg.setTimeStamp(0.7491604109804374);
    msg.setSource(26683U);
    msg.setSourceEntity(34U);
    msg.setDestination(32691U);
    msg.setDestinationEntity(50U);
    msg.fps = 18U;
    msg.quality = 124U;
    msg.reps = 142U;
    msg.tsize = 244U;

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
    msg.setTimeStamp(0.45655343089958367);
    msg.setSource(65520U);
    msg.setSourceEntity(30U);
    msg.setDestination(25298U);
    msg.setDestinationEntity(14U);
    msg.fps = 225U;
    msg.quality = 78U;
    msg.reps = 0U;
    msg.tsize = 127U;

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
    msg.setTimeStamp(0.048655704856520154);
    msg.setSource(60656U);
    msg.setSourceEntity(160U);
    msg.setDestination(30393U);
    msg.setDestinationEntity(208U);
    msg.fps = 134U;
    msg.quality = 242U;
    msg.reps = 210U;
    msg.tsize = 115U;

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
    msg.setTimeStamp(0.8573395931982785);
    msg.setSource(53381U);
    msg.setSourceEntity(130U);
    msg.setDestination(27057U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.329351551599928;
    msg.lon = 0.2851230349267928;
    msg.depth = 101U;
    msg.speed = 0.11031894025765665;
    msg.psi = 0.1467882610450698;

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
    msg.setTimeStamp(0.3234683380826787);
    msg.setSource(56670U);
    msg.setSourceEntity(150U);
    msg.setDestination(19423U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.09787449233830103;
    msg.lon = 0.9185391021957979;
    msg.depth = 208U;
    msg.speed = 0.9660773686458708;
    msg.psi = 0.3999212962290012;

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
    msg.setTimeStamp(0.400262660279056);
    msg.setSource(26649U);
    msg.setSourceEntity(106U);
    msg.setDestination(27481U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.7799039108999631;
    msg.lon = 0.8233984574619333;
    msg.depth = 159U;
    msg.speed = 0.12236238631524099;
    msg.psi = 0.28063514401685763;

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
    msg.setTimeStamp(0.4089074950479129);
    msg.setSource(57815U);
    msg.setSourceEntity(153U);
    msg.setDestination(54189U);
    msg.setDestinationEntity(200U);
    msg.label.assign("GYNRFTCBRSJNTIXEQSVTDAYAFBLTSXTLVZLKYXMDILQFUHWGAWVGJGDQK");
    msg.lat = 0.26995618225942775;
    msg.lon = 0.6739752576425636;
    msg.z = 0.6693315407727783;
    msg.z_units = 181U;
    msg.cog = 0.6556274230213954;
    msg.sog = 0.7656344649861477;

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
    msg.setTimeStamp(0.41754137932725965);
    msg.setSource(6662U);
    msg.setSourceEntity(0U);
    msg.setDestination(268U);
    msg.setDestinationEntity(7U);
    msg.label.assign("BELWFSOTWBYYGPHSNPEFEMPSZZURXXTWVQRAQWJXPVZPHQRNVVNRVHRKEFYIKETXSBOAHBXLJSUQBTMGICVGHONCKZISDZGYVQFUSIPAAPABWCNAIHDZPVJUOUNZVGDIHMTNGFDISHUQGDDQTRCLRULZQWCJIKOXEKCJDMTYREGD");
    msg.lat = 0.7274010734283324;
    msg.lon = 0.13197617565440778;
    msg.z = 0.6892366045696364;
    msg.z_units = 179U;
    msg.cog = 0.527441356228264;
    msg.sog = 0.252000565993594;

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
    msg.setTimeStamp(0.3787657850423185);
    msg.setSource(45186U);
    msg.setSourceEntity(174U);
    msg.setDestination(54658U);
    msg.setDestinationEntity(162U);
    msg.label.assign("UFCZGCJNLOEGLJUSV");
    msg.lat = 0.4305796960495907;
    msg.lon = 0.7341048035651371;
    msg.z = 0.31188876251108233;
    msg.z_units = 145U;
    msg.cog = 0.5028583457674235;
    msg.sog = 0.29489732602305063;

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
    msg.setTimeStamp(0.1897378215377309);
    msg.setSource(53900U);
    msg.setSourceEntity(183U);
    msg.setDestination(31377U);
    msg.setDestinationEntity(71U);
    msg.name.assign("HXRFKDHSQYWKHDMGBSLTKUWUPNYZRGYFMUNNAWETGJBITP");
    msg.value.assign("VCLAOPVUJCTJXQJSNISQQNKMCZOYCOXHOFADEWXITFEDQFMYQIMYOOLKJBURXVSUUPXQKZVXCDQPZPHDGZKTRIGBAFUTGPTRWYXJVFWLLPEQRPZHVPIUCTWKRHNVBWSNKWAMMLNJSSYMNBMGOY");

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
    msg.setTimeStamp(0.5934859880591075);
    msg.setSource(16914U);
    msg.setSourceEntity(60U);
    msg.setDestination(9543U);
    msg.setDestinationEntity(75U);
    msg.name.assign("EINIZSGVPFOWKXYRYDYEORKSAYHNENXKNNTQRMTXBJZVFYGDKPJWPDUCBELZV");
    msg.value.assign("OVHEXNBKBREAVJQKEGHXIFBMUOLZANRCSEX");

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
    msg.setTimeStamp(0.9866821048862345);
    msg.setSource(21320U);
    msg.setSourceEntity(129U);
    msg.setDestination(47444U);
    msg.setDestinationEntity(196U);
    msg.name.assign("NIWTFKYOVPUAXDQYRMYA");
    msg.value.assign("FZLJRJEYVMYBVSPQEJTVCHTEWHXTWMCGOMHHLWTYLFXOONLOFO");

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
    msg.setTimeStamp(0.8238267620554098);
    msg.setSource(39279U);
    msg.setSourceEntity(213U);
    msg.setDestination(14059U);
    msg.setDestinationEntity(206U);
    msg.name.assign("LPFGCDBTRCMUSWLNITXRWKOAITCRGDNSSQWEOVQUHASOGKRWUZNBQMWVNXGMPVYPRRJPMKQRLYEDKDWKOCNCTYVKRYVXUZWMTIVGBASCOKABUQZQIEZZFAMVAEQOAQHYIZPENGDXJRODIAOP");

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
    msg.setTimeStamp(0.24183860803820112);
    msg.setSource(30696U);
    msg.setSourceEntity(27U);
    msg.setDestination(13204U);
    msg.setDestinationEntity(3U);
    msg.name.assign("ZNHQWUKDDTUINECNKIFYHMGPHXOCJPEHEJBNKLSFQGGFDYPYXOTTOTWUZNVHRMSEZVOEVRN");

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
    msg.setTimeStamp(0.8223817956385071);
    msg.setSource(30960U);
    msg.setSourceEntity(141U);
    msg.setDestination(59278U);
    msg.setDestinationEntity(122U);
    msg.name.assign("ZXKQIHAUIDWHBRAYJPPSKCWVYQHOBKVDYIJSAFZBGFEZE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QKSXHSTFSAJUSMRCQDLURYGUICXBWMZTKAFEOSHEEMPDJBIILWNUABQTMVFCWFJUYMNCNLWRTEUJEBKZRXKUTPZQCGBSINDHGQVKWQIQPYRWNOLLWVGLEYSYRYYCILMHAJCIRMRPZRDZVHFCYJDIEOPPTZYDQ");
    tmp_msg_0.value.assign("PDBCLOMUCSWOAZBEVJLMFSRDMQYAKZCIPENCWNEYSOIUNQVZNXVHUEQJFWBXHOUCTUDGLAKCGUZKUFOUYSGDVTYLKPWIHCRMGKEXKSMORGMJQVAOWRGWDENYGJQPTRBDVQGEUTIXZXLZKDHPAZPECOIIMJWSNLJBZSXFLDFJNIGIEATBFDXVVQQPKTVHYSFKYUZPBHHBZNNXCDVHFTMJIMAPQYJTLXAHBW");
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
    msg.setTimeStamp(0.4583184840092508);
    msg.setSource(34840U);
    msg.setSourceEntity(65U);
    msg.setDestination(3022U);
    msg.setDestinationEntity(156U);
    msg.name.assign("XQUGQNYTNKHLUSPLMAADOE");
    msg.visibility.assign("PZYOOQRRKPWQGANSOPYADDZPBUPOSHWXJOMTWYUIKFKLTGGCCCPLBCAQYLIMNIQUXBXRBRKIMKQVSLCTMUEFNDRSQATOEZEIFIFVWOELMZBEMGWXQJKMZJNFGRTHHULJVDKHZXYFSBZNNCTJQBYMVDBSQFLNTTOVOMXXRURIVADCJHEJDGHCANFLHSGDRYGFTBDSCFBYUWZKEKSXIUWUWVZJYKJNEDHXPVVIOHVASPYTHUA");
    msg.scope.assign("INKPUGUOIRNUXJTDFCENLMAXOKPQJQUJINHIGGJUDPENBZPRELBOXVUHHKZUQ");

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
    msg.setTimeStamp(0.8375598681184369);
    msg.setSource(6712U);
    msg.setSourceEntity(107U);
    msg.setDestination(860U);
    msg.setDestinationEntity(195U);
    msg.name.assign("ILYQUWFQRQTONNFCVNOLIYZZLHAAFFMWIVZIOMVTUVRESYAWWWWVKJGNBEKQZPPAZUEVHBJERQOFSGJODUACVRYOULQYUEMNXYGBCWXVTBDBZCPOYSDTJRHSLPTKBJHTKQUQACDGUFDERIKD");
    msg.visibility.assign("IMYVAMQYCAPVNUKAHEUVNZAZFWJFVKHZDUFYQZDCSIFJNKXCLGLKTXSEFJCHUSIYELCPWXPIMNDDEMNZTMOWWBJIOLBVGRHFWTYLHUCEKRZRIGWTYTRQYGJFPNXCSHAVGDQIRLHPNDZZVUURSTGX");
    msg.scope.assign("REZBKPITQTBRXWPUVCHSMZNHDQHXUUQGKJODXLOSCKLWHOYMYEGRXUBEOJMLVPBLPZRLAAIKHJMVYXJCDDUGGMANFSAPWNKCPDVNRDYAFHO");

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
    msg.setTimeStamp(0.6915776626785096);
    msg.setSource(51258U);
    msg.setSourceEntity(176U);
    msg.setDestination(23071U);
    msg.setDestinationEntity(148U);
    msg.name.assign("QQPIINIXAJFOFAOFUFLQZDBUTHYPUJYWEDUMWIJSOADJKTVNFBEAZPNQOBRMUMSGDDPXOTSJNIDAXLTQNHBEECLPUUNNTCXGAGVKWHDMVBVWSSPQLYOCJRBMVBHRXLZEYYFYEYHCGBEMLJITXJXUVGSKYGVFMCKXEXAVLHWPIREZV");
    msg.visibility.assign("CUKUZPCWZOQVEKRZOUBHQMYIBCITPPLBVOIEJXSVHSUECMQLUHXQCHYNUZWQIYWSXHAARFDLHWHBSJXZVXHYBEKJTUGBAGPRORNABSKNMJPVXIMCICOJKFYCMONDJHQJRSRBFSGENRFYDRPNGOCYHYTEPZAQRAIDZJLWFWQITKDGOEKIAPGEANTWFGYGKLLMDJOTWVLVXCDLGNZTFFAXMSSKTUGNZYUQTJKFVUPMWM");
    msg.scope.assign("ZZCLUDTVCXRDWFQEBGRZWONGPHJMMALDYGALESYWSLIOZHTEVWVQQQDBOYYSBMFQGVFCQCNJOSBOPMJBWSP");

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
    msg.setTimeStamp(0.258193726242426);
    msg.setSource(14892U);
    msg.setSourceEntity(44U);
    msg.setDestination(57925U);
    msg.setDestinationEntity(166U);
    msg.name.assign("WXRCKUVCKCHALVSQSPOBVPIZLWVUXKLAYIUQKNMISJNMPSPHVOGVTIFNNXKASPVSDGEWIQIZDCQBYTKCQXJWYXCNDDYBHYOSKMXFMMTEVRWNAZBIWCJNFQRTUXZWSDORWPEUUNVLGYVIRQEQZJHHYRHFWJOBEEZCBBPXDOHUGILCGABYJFAAUTJHKFDNRBFGGJPLWAQUOOMFZLRGPURXYLTGAQTEMKSHYGLNJZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FXIHHDCDDMZKMS");
    tmp_msg_0.value.assign("FGTGPCSZZEYPTROMDYWOXOTPPTEJZPLUJLJDFYFIZDVHCZBQEAWBBLHWWBJTLMIGZPUOTJVWOLGCXJHLSSNPHYNPBWYPOEXHNGVLOBNKOCNQNMMRUYRFOKEANRHAFS");
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
    msg.setTimeStamp(0.4949714580261477);
    msg.setSource(53856U);
    msg.setSourceEntity(203U);
    msg.setDestination(16502U);
    msg.setDestinationEntity(12U);
    msg.name.assign("FTTXOEIVCYTPZAQAODOJMWCXEHVDSIBBHLJVPHFDJYGYFYFNOKXBOAWBITDQEUZMSWAOZ");

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
    msg.setTimeStamp(0.224258949357652);
    msg.setSource(26252U);
    msg.setSourceEntity(124U);
    msg.setDestination(38802U);
    msg.setDestinationEntity(14U);
    msg.name.assign("DFXQJRJGVCJIEVWYSHSOKJXYBUELPZGTXUTETMKFHRZASMKDXMFITIPMPYQLQAATDWNLOKNFMCXZGWPXSCGXIYUOEQHNBVNLDLFEVBZTANHWGCSRACBIOMBAUXIRDPVOITNKOYQFUHSIJGYPGHAQJTMZ");

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
    msg.setTimeStamp(0.1204139014677128);
    msg.setSource(31847U);
    msg.setSourceEntity(138U);
    msg.setDestination(33756U);
    msg.setDestinationEntity(247U);
    msg.name.assign("HIWCPXRNAZPGXXLTNYWBWQQPRRWYBBDPXFTWXNNVZRMBDOTAMKOKKAYTVBHUQPBOLYTSRTZJLKFUYHOCYBJVEEEXCXUUJVZMOIDDQAOGDXEQQLCSPRTLGKIFGGYKHCAGDPWQUMFAZRHTIRZUFIP");

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
    msg.setTimeStamp(0.9444567385505622);
    msg.setSource(35447U);
    msg.setSourceEntity(113U);
    msg.setDestination(13130U);
    msg.setDestinationEntity(211U);
    msg.name.assign("OFXPABWNCHECLCXPCPBENHEWTZNIJLRJMEUGMHLMRDDIQDZTIRZBSJHHDWYLGFFVSTFXAGVBRIKZEUZZ");

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
    msg.setTimeStamp(0.33062745194411336);
    msg.setSource(48807U);
    msg.setSourceEntity(199U);
    msg.setDestination(41246U);
    msg.setDestinationEntity(237U);
    msg.name.assign("CMXKVJOWSJOKYPYHZQDPNSTPJSBSXUJUVFCCIFEMYORHQEJAFVQIETRCLQTOELRZOOBRSWWJTBTMGDIPDHWXHDAZZQJMGGARU");

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
    msg.setTimeStamp(0.6496296329799051);
    msg.setSource(40581U);
    msg.setSourceEntity(194U);
    msg.setDestination(45886U);
    msg.setDestinationEntity(141U);
    msg.timeout = 204812272U;

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
    msg.setTimeStamp(0.08261014248430232);
    msg.setSource(48264U);
    msg.setSourceEntity(15U);
    msg.setDestination(62537U);
    msg.setDestinationEntity(38U);
    msg.timeout = 366274792U;

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
    msg.setTimeStamp(0.44407894177146934);
    msg.setSource(61606U);
    msg.setSourceEntity(63U);
    msg.setDestination(53558U);
    msg.setDestinationEntity(47U);
    msg.timeout = 3277862626U;

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
    msg.setTimeStamp(0.3780250565306269);
    msg.setSource(26777U);
    msg.setSourceEntity(103U);
    msg.setDestination(14103U);
    msg.setDestinationEntity(44U);
    msg.sessid = 1034527882U;

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
    msg.setTimeStamp(0.11982702269677603);
    msg.setSource(51346U);
    msg.setSourceEntity(193U);
    msg.setDestination(56177U);
    msg.setDestinationEntity(146U);
    msg.sessid = 1209272697U;

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
    msg.setTimeStamp(0.24508210082116155);
    msg.setSource(48986U);
    msg.setSourceEntity(214U);
    msg.setDestination(64124U);
    msg.setDestinationEntity(230U);
    msg.sessid = 540534130U;

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
    msg.setTimeStamp(0.3089801736862574);
    msg.setSource(15083U);
    msg.setSourceEntity(71U);
    msg.setDestination(17050U);
    msg.setDestinationEntity(70U);
    msg.sessid = 1934960545U;
    msg.messages.assign("PWQWVYECDAUUOGRMLEUYFUHYNCKRJIEZRDWAIEUQIBHT");

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
    msg.setTimeStamp(0.26400858609817734);
    msg.setSource(49499U);
    msg.setSourceEntity(142U);
    msg.setDestination(26140U);
    msg.setDestinationEntity(195U);
    msg.sessid = 1103539708U;
    msg.messages.assign("UZXMRTJDKPRMMHHUIVULWFHYBEHKOYGAQKGGLVRNXVSCEINNCCHXBXAFLXELMGMWJDRXELEFBALERJEHVCNUQCQRWUIFKOXTSVNFZQYYIUVRFASFKPOYZC");

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
    msg.setTimeStamp(0.002822385277057138);
    msg.setSource(15473U);
    msg.setSourceEntity(198U);
    msg.setDestination(7771U);
    msg.setDestinationEntity(181U);
    msg.sessid = 1362152923U;
    msg.messages.assign("QZFEMEYWCFBRLXUHZJHZHDGPPRTLESATTTMKOTQUJJXNURQRXOXYIEKJJIYMNOXKRFJZSAYIHLFBDYFQXKIAOCALNHIUMIZXBMBEVEEHYHUQYPUGEWOCRNDMALJWONJMZOGLVKFPFRKWQPGPHIXDRCQBFCIZJCKHBLGTFGZLPKONJUNYTXQAPDUVTDGBEGHVZQNETSYYPDAWRSFCOVCCKSNWUSSNAGQXWMZGOKVLUVWISSLVDBMVBVSTMWWDDI");

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
    msg.setTimeStamp(0.04835706730701406);
    msg.setSource(40408U);
    msg.setSourceEntity(60U);
    msg.setDestination(33620U);
    msg.setDestinationEntity(111U);
    msg.sessid = 464423334U;

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
    msg.setTimeStamp(0.6583625284671587);
    msg.setSource(37937U);
    msg.setSourceEntity(60U);
    msg.setDestination(49725U);
    msg.setDestinationEntity(188U);
    msg.sessid = 1936598176U;

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
    msg.setTimeStamp(0.5511459070418729);
    msg.setSource(28145U);
    msg.setSourceEntity(223U);
    msg.setDestination(54590U);
    msg.setDestinationEntity(94U);
    msg.sessid = 1602464918U;

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
    msg.setTimeStamp(0.962317205318806);
    msg.setSource(64350U);
    msg.setSourceEntity(147U);
    msg.setDestination(38571U);
    msg.setDestinationEntity(75U);
    msg.sessid = 434378136U;
    msg.status = 140U;

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
    msg.setTimeStamp(0.5057251067824693);
    msg.setSource(20060U);
    msg.setSourceEntity(51U);
    msg.setDestination(38248U);
    msg.setDestinationEntity(168U);
    msg.sessid = 3168083578U;
    msg.status = 22U;

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
    msg.setTimeStamp(0.9176830788973379);
    msg.setSource(3329U);
    msg.setSourceEntity(87U);
    msg.setDestination(31979U);
    msg.setDestinationEntity(5U);
    msg.sessid = 1205558114U;
    msg.status = 173U;

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
    msg.setTimeStamp(0.9722000365129241);
    msg.setSource(44170U);
    msg.setSourceEntity(212U);
    msg.setDestination(19777U);
    msg.setDestinationEntity(201U);
    msg.name.assign("KKYZAYROGKEWPVQSXFVTSSTRCQJCPJZSZVKRNDOWZEVHWSUNLUCC");

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
    msg.setTimeStamp(0.0187735496050897);
    msg.setSource(62999U);
    msg.setSourceEntity(39U);
    msg.setDestination(35821U);
    msg.setDestinationEntity(218U);
    msg.name.assign("IYRYCQXQTNVJENLKFHLUBBKGFZBMWYOGDDMZFSSKIAQVHYLTHQZKOBSWLWCXOXQUKHFPNDGVRCGELTWJOPPZAEXANWZGODICEKWDLJXGITDAFYJDRIYEQNOUPEGONPNVRCIFRYBHDVCHJYYMAZSOE");

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
    msg.setTimeStamp(0.32403628821861163);
    msg.setSource(25479U);
    msg.setSourceEntity(64U);
    msg.setDestination(2696U);
    msg.setDestinationEntity(213U);
    msg.name.assign("MEPSMXHQBQDBCNRCWCRQQOUNWXCTVNYIGOTASXBBXGNAWKPOFVBACRVPTBWGYK");

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
    msg.setTimeStamp(0.22362714462863986);
    msg.setSource(34718U);
    msg.setSourceEntity(247U);
    msg.setDestination(15759U);
    msg.setDestinationEntity(1U);
    msg.name.assign("MWRWRPYLYFTDKUKHPMHSNTXUDJWZJLFAEZGCLPDEQRQUZRYPCOXUAYPCUXFTRCKSYQSCFEVEQVNFOCAIULIDJGZKWXAGPMWEHJTIOZGIMQLHAHXWMONKFVNREVSSIMZNFFXAGGTHESMOONBAMNEJQDHBBZRXTMIHDNBGWPWQCI");

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
    msg.setTimeStamp(0.5738520677805451);
    msg.setSource(54911U);
    msg.setSourceEntity(116U);
    msg.setDestination(59845U);
    msg.setDestinationEntity(67U);
    msg.name.assign("LKYXBGSIJSIUURQRLKUFAFNFQOIHFBGOEFZCYEWNTKWPRWLJXZBNVENOSFESCOCHPGEOPTBVKRKDRZAICIVSACJTPQMFGHZEDQMSJINLBYNBXMLLAYBJYBDLEFONWBOGZCZLCVUIWFQWDKSACUXXEXJGCJZHPHWPYMHZ");

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
    msg.setTimeStamp(0.6982721314153254);
    msg.setSource(39899U);
    msg.setSourceEntity(238U);
    msg.setDestination(43211U);
    msg.setDestinationEntity(48U);
    msg.name.assign("DXTEWGVUXMCLPQUVNQSIETTZSDBWAWBHMYQETZZTRDWXIMQLGZTACOHNFFOYGRZPUDIIRDYKSOIJKGDTDWVCEZZXJUAKMYSSHUGXZXPOJQNOKHLZBPUJGQCWTAYNIAQPFKJVBWD");

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
    msg.setTimeStamp(0.23898366388263292);
    msg.setSource(47913U);
    msg.setSourceEntity(253U);
    msg.setDestination(28432U);
    msg.setDestinationEntity(92U);
    msg.type = 234U;
    msg.error.assign("JPKEDPQUZRQNVMJYTFCWGHQNFYHZTDNBHEBDEPJQXQWJTXF");

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
    msg.setTimeStamp(0.6813987066318181);
    msg.setSource(23018U);
    msg.setSourceEntity(74U);
    msg.setDestination(30499U);
    msg.setDestinationEntity(120U);
    msg.type = 65U;
    msg.error.assign("ZRHIQZPCKHCWTREFEANLKULKBUDTUEGXQUESMSONPIYSFPUIGVTLDOVBOS");

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
    msg.setTimeStamp(0.8601523590765625);
    msg.setSource(18789U);
    msg.setSourceEntity(54U);
    msg.setDestination(42617U);
    msg.setDestinationEntity(193U);
    msg.type = 146U;
    msg.error.assign("JKDNICTPHIPQGCMFFCQMVHRQHYWEAUOPKWOERUMOFQBDAEVTALKTXZXXVEVZLEVAOAUAPUIZIKHBBHCSPDKXCMNIUJSXQRUWBRYNLWMDGYJLVHRGTMRLGZCJXWXIKZLUJALTFCZDLQPOBWHNPSFKTZC");

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
    msg.setTimeStamp(0.2692701012943852);
    msg.setSource(27023U);
    msg.setSourceEntity(85U);
    msg.setDestination(33517U);
    msg.setDestinationEntity(232U);
    msg.seq = 61287U;
    msg.sys_dst.assign("MBMFAGAPBQSTXJVTNZIWZKSCYPDZCXZZBASAPDGCJDWEAGGXGYZR");
    msg.flags = 29U;
    const char tmp_msg_0[] = {103, -51, -75, 39, 95, -95, 26, 69, -38, 46, 50, 24, 104, -91, -52, 48, -105, 8, -46, 115, 90, 124, -74, -54, -85, 95, -46, 26, 90, 40, -73, 60, 38, -110, 40, 83, 88, 106, -104, 122, 44, 98, 88, 104, -83, 41, 50, 17, 44, -37, -80, -45, 41, -114, -99, 42, -4, -36, -55, 66, 3, 15, 16, -7, -9, -29, 52, 101, 92, 19, -95, -72, -88, -103, 118, 5, 23, 31, -5, -9, -44, 96, -53, -95, 98, 10, -65, -6, 122, 126, -115, 77, -11, 0, 49, 25, 32, 118, -89, -89, -30, -99, -118, -112, 114, -80, 61, -107, -5, -95, 20, -113, 115, -49, -38, 63, 70, 16, -32, -8, -74, -76, 70, 25, -18, 17};
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
    msg.setTimeStamp(0.2508735575701546);
    msg.setSource(41278U);
    msg.setSourceEntity(14U);
    msg.setDestination(28934U);
    msg.setDestinationEntity(67U);
    msg.seq = 34434U;
    msg.sys_dst.assign("QLIQPTYWXHAGAZLYKGCNCWPVOPMSDZDTERLSZHAGSEBIMFFV");
    msg.flags = 5U;
    const char tmp_msg_0[] = {-30, -76, 2, -108, 12, -95, 37, 65, -107, -34, 9, 104, 70, -32, -20, -70, 45, 87, -23, 46, 106, -8, 71, 7, 10, -43, -99, -45, -128, -69, 126, -5, 51, 95};
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
    msg.setTimeStamp(0.14691440791075916);
    msg.setSource(6721U);
    msg.setSourceEntity(224U);
    msg.setDestination(52561U);
    msg.setDestinationEntity(113U);
    msg.seq = 44333U;
    msg.sys_dst.assign("VLNALUSHLGKYVSNMFGLQZNMNGVBJRATVTTSNRPMVDXNQHAFURTKOGAXCQFJOWPKGPXMXLXOOMW");
    msg.flags = 96U;
    const char tmp_msg_0[] = {-44, -63, -126, 91, -64, 44, 21, 39, 95, 72, -28, 55, -19, -85, -11, 123, -103, 46, 57, 107, 88, 97, -23, -108, -83, 3, 12, 113, -118, 16, 61, -27, -53, -48, 87, -2, -67, -123, 76, 13, 37, 45, -21, -53, 21, -18, 8, -105, -18, 58, -53, 62, 107, 80, 42, 29, -54, 115, -97, -122, -6, 37, 121, -4, -109, -74, -57, -86, -91, -34, -13, -72, -9, 13, 108, 105, 22, 14, -14, 56, 42, 80, 29, -125, -43, -81, 25, 80, 59, 31, 123, -54, 118, 97};
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
    msg.setTimeStamp(0.5952471275455493);
    msg.setSource(54169U);
    msg.setSourceEntity(104U);
    msg.setDestination(23489U);
    msg.setDestinationEntity(216U);
    msg.sys_src.assign("QRXPPBGVFNMKLDOFUNPTQIKRFXJLZISNXBJXVOOZCRKYQMRUGGMNTHACVHOKALSDQPKIKVNULZCFUIFMQYXMKYLFDEWBALBJBSGVHZIGFLBPKYYRZTMPTWFNWAHVRDTSSNTBAJNEJVYOCYMHDZCWTOLYIABXCGIERQDHQJXHGVBJQYCUSLSWHENGLHMDFPRCCBKQOEPPXDOEPGMOTSUTIJJWZTASJVUWUERZWDKED");
    msg.sys_dst.assign("FLUCHSJPNILMEHDGTMGBMRHHPWPSOUEVAZFOCKXEQUTGBGRTIOVWGNXFHOSVJDPMVLINNKXCIGFDUWQWBVZSFDSGAOFRASGWRAJYYSBFQQZJIVAJDNLGTJMKDVTBXAZKSFRQ");
    msg.flags = 216U;
    const char tmp_msg_0[] = {115, -37, -27, 2, 63, -84, -65, -104, -121, 0, 58, 47, -128, 103, -53, -68, 31, 105, 86, 54, 78, 22, 21, -13, -53, -37, 1, 28, 91, 62, -68, 71, 34, 57, 24, 87, 15, 116, -69, 75, -93, -30, 48, 100, -36, -68, -73, -57, 66, 3, -78, 97, 55, 82, 3, 100, 73, -76, 117, 114, -62, -101, -124, -23, -86, -75, 13, 82, -59, -8, -116, 74, 75, -51, 61, -120, -39, -66, -92, 44, -114, -30, -68, -72, 69, 108, 83, -119, -58, -54, 26, -15, 68, 9, 15, -59, -105, 62, -120, -45, -58, -13, 46, -66, 1, -16, 66, -103, -39, -50, 76, -6, 45, -101, -112, 124, -37, -76, -114, -69, -86, -94, -56, 11, -39, 97, 96, 65, 25, 69, 30, -115, 125, -35, -52, 42, 101, -18, -40, 124, 122, 68, 36, -24, 103, -54, 40, -36, 73, 60, -71, -18, -113, -126, -63, 29, 7, 20, -48, 1, 24, 124, -91, 92, 96, -72, -32, 82, -76, -96, -32, -78, 79, -104, -64, 43, -28, 89, 94, 123, -9, 100, 109, -23, 24, 123, -1, -31, 6, -37, -74, -17, 0, 49, -86, -20, 112, -42, 122, -6, 37, -9, -107, -92, 34, -21, 20, -9, -14, 70, 126, 15, -103, 42, -3, -54, 62, 97, 124, -20, -106, 0, -124, 74, 93, -39, -84, 26, 120, -28, -104, 30, -122, -56, 64, 47, -79, -126, 89, 2, 22, -92, 102, -126, -45, -26, -50, -90, 41, -111, -110, 83, -83, 25};
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
    msg.setTimeStamp(0.3647222286009756);
    msg.setSource(40896U);
    msg.setSourceEntity(192U);
    msg.setDestination(2143U);
    msg.setDestinationEntity(84U);
    msg.sys_src.assign("EXJZNRTNIPNMQHBHVEQTWVNAXKLUNLDGWLSUBSBLQBWXFQYUJKBF");
    msg.sys_dst.assign("BYQVPGQUJUCZASOWJOHDISWJKDXRRZSRZLOJTDCUYEAXOBDRCNPFYKDNWPPRHZNPDAFXRSCGVYWITJYWBZFUFNVAQFUASYQXSDWMK");
    msg.flags = 215U;
    const char tmp_msg_0[] = {-30, -36, -91, 49, 27, -59, 70, -34, -106, 114, 53, 17, 80, -78, 67, 111, 9, 56, -105, 64, -58, 95, 2, -116, 95, -86, 16, 112, 46, -24, 62, -75, 30, 96, 17, 50, -24, -54, -2, -12, -124, -65, 83, -114, 83, -48, -128, -59, 67, 13, -40, -119, 83, -64, -126, 57, 94, -4, -8, -14, -5, -19, 6, -4, 83, -35, -66, 117, 6, 62, 41, -123, 113, 9, -57, -34, -17, 59, -18, -82, 87, 115, -106, -95, 61, 85, -81, -38, -87, 124, -34, 126, 71, -26, -18, -87, -125, -30, 89, -25, -39, -29, 67, 6, 70, 106, -32, 27, -3, 103, -21, 83, 85, -52, -37, 86, -67, 44, -68, -67, -2, 13, -31, 109, 64, 52, 95, -81, -45, -80, -75};
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
    msg.setTimeStamp(0.4551802711780829);
    msg.setSource(11917U);
    msg.setSourceEntity(53U);
    msg.setDestination(50289U);
    msg.setDestinationEntity(104U);
    msg.sys_src.assign("DXCWYPWOUBYBJUUYELXKMOWFHCGFIMJCKDD");
    msg.sys_dst.assign("JCEPXCJYSUFLYGTYRNATIJJ");
    msg.flags = 235U;
    const char tmp_msg_0[] = {-89, -59, -114, 96, 76, 125, 52, -42, -65, 46, 123, -75, 29, -9, 3, 77, -117, 79, 90, 40, 117, 113, -16, 24, 59, 0, -34, 64, -24, -1, -110, 41, -15, -68, -94, 35, -56, 10, -44, -28, -5, -74, 103, -94, 0, 58, 23, -107, -42, -79, -72, -118, 70, -54, 108, 40, 106, -80, -41, 109, 79, -3, 71, 38, 50};
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
    msg.setTimeStamp(0.6482844941938221);
    msg.setSource(6883U);
    msg.setSourceEntity(78U);
    msg.setDestination(5963U);
    msg.setDestinationEntity(188U);
    msg.seq = 6158U;
    msg.value = 186U;
    msg.error.assign("EYNCMIHFQLBRLKGOCYTCWNEHXXIZTBOPGL");

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
    msg.setTimeStamp(0.15892642184969763);
    msg.setSource(56624U);
    msg.setSourceEntity(142U);
    msg.setDestination(61427U);
    msg.setDestinationEntity(60U);
    msg.seq = 48559U;
    msg.value = 23U;
    msg.error.assign("EFTCXOSSQPGDPGGRLKUMBXUWVCLZBYNKABERRNQBUCKNRIYWHGCKYYQWEWHFMLMQKQVXZTDRIOJOZKPYLATHSAHGIVJTCOXDTSUXDUFNVEKZUCTSDLXLGNLPHYPXHGYPWAREODJGUNWSIJPTPASQECCOYJHNGRBORLJZKFDSWLVEMAXJFSDCHNQLCAVAXIMAFFWIIIJWBPBMJYOGAUKZQMNFDEQMYTUFSPRK");

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
    msg.setTimeStamp(0.21323376536322758);
    msg.setSource(43537U);
    msg.setSourceEntity(185U);
    msg.setDestination(1649U);
    msg.setDestinationEntity(124U);
    msg.seq = 7158U;
    msg.value = 236U;
    msg.error.assign("BXQVVRBKQEWTFBLKRGUAAHTJSRUOIAJOGKDHPKAHMIWHANPQHUDYVFJDQJSLEDZKYEWETPMOLCPBMYRKPZHEMNWTUZUQUVQLUYWIVXEUFGCCNKHFYSMTBTTNGQCDSZPSQVLKOOXNWCVXXHBIHPERRCGWNCNLAZJDGFYZIAGMDLFLMPCPZSXEGOSZWNSYGBKBTJRJSIRBMCN");

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
    msg.setTimeStamp(0.5119464040884645);
    msg.setSource(53537U);
    msg.setSourceEntity(200U);
    msg.setDestination(32584U);
    msg.setDestinationEntity(199U);
    msg.seq = 37880U;
    msg.sys.assign("CNXPPXELFPQZJDNEBWIMFGWPGCRYEJQWZBDKOZMCIOSRFNDNVSLVSDDEWUGWOWJCLWBRMTFHAOLIRZLCYPGMYOQBJEUYSQOVIIJBUOJZUWRHFNDRHTJ");
    msg.value = 0.9394289420308143;

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
    msg.setTimeStamp(0.11028353684923786);
    msg.setSource(49574U);
    msg.setSourceEntity(177U);
    msg.setDestination(35124U);
    msg.setDestinationEntity(178U);
    msg.seq = 2464U;
    msg.sys.assign("RPFGBPWDMWBRX");
    msg.value = 0.9566189295210761;

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
    msg.setTimeStamp(0.21269607051199502);
    msg.setSource(20509U);
    msg.setSourceEntity(142U);
    msg.setDestination(24118U);
    msg.setDestinationEntity(93U);
    msg.seq = 19185U;
    msg.sys.assign("MRKYOEAFSYWXFCFGXZDAGLHYYBVLHTZVC");
    msg.value = 0.8101686636771473;

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
    msg.setTimeStamp(0.9172514002787188);
    msg.setSource(25190U);
    msg.setSourceEntity(191U);
    msg.setDestination(28447U);
    msg.setDestinationEntity(244U);
    msg.action = 163U;
    msg.longain = 0.6341796071932576;
    msg.latgain = 0.9837935124024889;
    msg.bondthick = 1806662921U;
    msg.leadgain = 0.8671033361996605;
    msg.deconflgain = 0.2895125757053051;

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
    msg.setTimeStamp(0.49405193005212955);
    msg.setSource(10875U);
    msg.setSourceEntity(26U);
    msg.setDestination(62293U);
    msg.setDestinationEntity(5U);
    msg.action = 26U;
    msg.longain = 0.5556712809513585;
    msg.latgain = 0.9394910701467594;
    msg.bondthick = 2912242220U;
    msg.leadgain = 0.8052784350229779;
    msg.deconflgain = 0.6963026581160988;

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
    msg.setTimeStamp(0.2902633118468294);
    msg.setSource(49743U);
    msg.setSourceEntity(224U);
    msg.setDestination(27934U);
    msg.setDestinationEntity(104U);
    msg.action = 230U;
    msg.longain = 0.7239538957669844;
    msg.latgain = 0.6916353831263524;
    msg.bondthick = 3043307826U;
    msg.leadgain = 0.9307245346442811;
    msg.deconflgain = 0.3854330799168456;

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
    msg.setTimeStamp(0.9773896125390763);
    msg.setSource(13704U);
    msg.setSourceEntity(167U);
    msg.setDestination(2376U);
    msg.setDestinationEntity(83U);
    msg.err_mean = 0.8651617507908331;
    msg.dist_min_abs = 0.5094467058592727;
    msg.dist_min_mean = 0.39429496990527213;

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
    msg.setTimeStamp(0.5659914007176609);
    msg.setSource(51632U);
    msg.setSourceEntity(220U);
    msg.setDestination(64786U);
    msg.setDestinationEntity(226U);
    msg.err_mean = 0.9250933741269489;
    msg.dist_min_abs = 0.8789796704931463;
    msg.dist_min_mean = 0.77740454972383;

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
    msg.setTimeStamp(0.6231074847436299);
    msg.setSource(6633U);
    msg.setSourceEntity(14U);
    msg.setDestination(52013U);
    msg.setDestinationEntity(88U);
    msg.err_mean = 0.31084643689643043;
    msg.dist_min_abs = 0.0920070764855575;
    msg.dist_min_mean = 0.035691892056634256;

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
    msg.setTimeStamp(0.3300104555159996);
    msg.setSource(58460U);
    msg.setSourceEntity(69U);
    msg.setDestination(21928U);
    msg.setDestinationEntity(73U);
    msg.action = 63U;
    msg.lon_gain = 0.781838392141503;
    msg.lat_gain = 0.55573755440062;
    msg.bond_thick = 0.36904255790654017;
    msg.lead_gain = 0.7979960543497863;
    msg.deconfl_gain = 0.5866927167563907;
    msg.accel_switch_gain = 0.8130542984197513;
    msg.safe_dist = 0.6816161703536654;
    msg.deconflict_offset = 0.43109401502441147;
    msg.accel_safe_margin = 0.9078210279465271;
    msg.accel_lim_x = 0.5395520844527655;

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
    msg.setTimeStamp(0.3423681534862554);
    msg.setSource(29606U);
    msg.setSourceEntity(210U);
    msg.setDestination(20148U);
    msg.setDestinationEntity(79U);
    msg.action = 119U;
    msg.lon_gain = 0.019246050404170156;
    msg.lat_gain = 0.7797689145722697;
    msg.bond_thick = 0.22869951845755854;
    msg.lead_gain = 0.4253365128279881;
    msg.deconfl_gain = 0.6227570286309541;
    msg.accel_switch_gain = 0.9443815116533717;
    msg.safe_dist = 0.9340134254521417;
    msg.deconflict_offset = 0.1955755619923596;
    msg.accel_safe_margin = 0.2619008430674479;
    msg.accel_lim_x = 0.8093534549340619;

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
    msg.setTimeStamp(0.6730627736164948);
    msg.setSource(42461U);
    msg.setSourceEntity(34U);
    msg.setDestination(30670U);
    msg.setDestinationEntity(202U);
    msg.action = 235U;
    msg.lon_gain = 0.753004847388872;
    msg.lat_gain = 0.10241583384267317;
    msg.bond_thick = 0.2871278823395669;
    msg.lead_gain = 0.08612918190613283;
    msg.deconfl_gain = 0.33375904492874775;
    msg.accel_switch_gain = 0.1053480630189576;
    msg.safe_dist = 0.8298459028058205;
    msg.deconflict_offset = 0.3228114813322003;
    msg.accel_safe_margin = 0.40724979002912753;
    msg.accel_lim_x = 0.2266612191571128;

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
    msg.setTimeStamp(0.42276260234341245);
    msg.setSource(3099U);
    msg.setSourceEntity(20U);
    msg.setDestination(28432U);
    msg.setDestinationEntity(116U);
    msg.type = 252U;
    msg.op = 244U;
    msg.err_mean = 0.6953481413356184;
    msg.dist_min_abs = 0.37647306153185234;
    msg.dist_min_mean = 0.8187863843495352;
    msg.roll_rate_mean = 0.6662627469466211;
    msg.time = 0.47971007181853575;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 73U;
    tmp_msg_0.lon_gain = 0.23949690508053212;
    tmp_msg_0.lat_gain = 0.7661378952518502;
    tmp_msg_0.bond_thick = 0.12592844008156157;
    tmp_msg_0.lead_gain = 0.06538988724155881;
    tmp_msg_0.deconfl_gain = 0.6259457844213934;
    tmp_msg_0.accel_switch_gain = 0.832375761783834;
    tmp_msg_0.safe_dist = 0.8191765122679738;
    tmp_msg_0.deconflict_offset = 0.8017160505463973;
    tmp_msg_0.accel_safe_margin = 0.6679064819577512;
    tmp_msg_0.accel_lim_x = 0.10515094585414475;
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
    msg.setTimeStamp(0.3813053162675629);
    msg.setSource(26616U);
    msg.setSourceEntity(229U);
    msg.setDestination(47498U);
    msg.setDestinationEntity(252U);
    msg.type = 172U;
    msg.op = 106U;
    msg.err_mean = 0.2756312372345633;
    msg.dist_min_abs = 0.9740325907811684;
    msg.dist_min_mean = 0.3989570252534691;
    msg.roll_rate_mean = 0.32230749031538697;
    msg.time = 0.004738975927422229;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 58U;
    tmp_msg_0.lon_gain = 0.8266868564594315;
    tmp_msg_0.lat_gain = 0.2011506678408076;
    tmp_msg_0.bond_thick = 0.5175334897151421;
    tmp_msg_0.lead_gain = 0.010676640953835248;
    tmp_msg_0.deconfl_gain = 0.6757460656437718;
    tmp_msg_0.accel_switch_gain = 0.32017426765401247;
    tmp_msg_0.safe_dist = 0.9633783460687279;
    tmp_msg_0.deconflict_offset = 0.40991645050581316;
    tmp_msg_0.accel_safe_margin = 0.26730901529215545;
    tmp_msg_0.accel_lim_x = 0.04216524127380261;
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
    msg.setTimeStamp(0.40484613412252457);
    msg.setSource(31648U);
    msg.setSourceEntity(210U);
    msg.setDestination(34245U);
    msg.setDestinationEntity(24U);
    msg.type = 90U;
    msg.op = 157U;
    msg.err_mean = 0.3961263992268943;
    msg.dist_min_abs = 0.23804761947702524;
    msg.dist_min_mean = 0.9197841561655369;
    msg.roll_rate_mean = 0.07205568474991064;
    msg.time = 0.008693933197501669;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 195U;
    tmp_msg_0.lon_gain = 0.02358606718600942;
    tmp_msg_0.lat_gain = 0.330293156873135;
    tmp_msg_0.bond_thick = 0.037168524787038804;
    tmp_msg_0.lead_gain = 0.6212738086242827;
    tmp_msg_0.deconfl_gain = 0.026379584952716972;
    tmp_msg_0.accel_switch_gain = 0.741804533259646;
    tmp_msg_0.safe_dist = 0.9013960879779038;
    tmp_msg_0.deconflict_offset = 0.3256299677551142;
    tmp_msg_0.accel_safe_margin = 0.1513193625897048;
    tmp_msg_0.accel_lim_x = 0.40097188262370764;
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
    msg.setTimeStamp(0.14441053867355524);
    msg.setSource(24082U);
    msg.setSourceEntity(111U);
    msg.setDestination(50518U);
    msg.setDestinationEntity(187U);
    msg.uid = 72U;
    msg.frag_number = 210U;
    msg.num_frags = 181U;
    const char tmp_msg_0[] = {-41, 122, -120, 59, -26, 36, 107, 14, 44, -123, -63, 124, -31, 77, -58, 88, -73, -9, -88, 69, -80, -21, 27};
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
    msg.setTimeStamp(0.6573957887341942);
    msg.setSource(34169U);
    msg.setSourceEntity(127U);
    msg.setDestination(21437U);
    msg.setDestinationEntity(5U);
    msg.uid = 164U;
    msg.frag_number = 239U;
    msg.num_frags = 110U;
    const char tmp_msg_0[] = {51, 99, -84, 5, 103, 74, 119, 26, 109, -123, 92, 115, 109, -51, 43, -104, 31, -1, 120, 16, -122, -72, 106, -54, -83, 93, -87, 61, 107, -14, -9, -113, 53, -109, 68, -37, 68, 8, 121, -45, -86, -42, 92, -128, -94, -49, -59, -43, -32, -47, 20, -61, 34, -124, 6, 9, 39, 14, -119, -115, -37, -79, 47, 89, -30, 62, 82, -3, -23, -105, -19, 42, -30, -109, 29, 124, -37, -67, -116, 89, -87, 102, -22, 84, 11, -66, 48, 24, 103, -28, 30, -62, -21, -34, 121, 19, -32, -65, 91, 4, 6, -6, 118, 38, -67, -91, 86, 48, -69, -37, -11, -104, -74, 114, 112, 90, -128, 81, -77, -89, -87, -68, -41, 34, 76, -72, 105, -122, 21, 121, 126, -126, -55, 33, -11, 85, -16, -115, 27, 12, -77, 106, 51, -93, -104, 72, 101, 69, -128, -120, 88, 47};
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
    msg.setTimeStamp(0.9630342724363335);
    msg.setSource(483U);
    msg.setSourceEntity(25U);
    msg.setDestination(53190U);
    msg.setDestinationEntity(124U);
    msg.uid = 63U;
    msg.frag_number = 226U;
    msg.num_frags = 158U;
    const char tmp_msg_0[] = {-24, -105, 12, -22, 96, 16, -25, -13, 126, -46, -122, -26, 7, 8, 122, 107, -80, -128, 20, 34, 100, 36, -95, -11, -121, -3, 19, 30, -88, -4, -36, 30, 63, 104, 50, 49, -33, -47, -121, -7, -114, 17, -6, -96, -110, -72, -6, 44, 101, -28, -107, -107, 57, -32, -122, 21, 9, -123, -91, -36, -15, 38, 78, -56, 75, 31, -34, 88, -99, -52, 87, -76, -99, 24, -29, 123, 122, 39, 39, 24, 71, 83, -55, 31, 88, -11, 66, 37, -32, 63, 63, -23, 14, 62, -42, 24, 48, 63, -9, -54, 53, -10, 95, -42, -37, -43, -106, 63, 20, -71, 12, 116, -18, -46, -107, -24, 34, 117, 29, 68, 50, -112, -53, 87, 98, 12, -77, -113, -5, 25, 46, -58, 103, -74, -27, -49, -10, -76, -118, -90, -13, -19, -94, -27, 14, -85, -103, -64, 105, 13, -63, -113, -115, -31, 13, 26, -88, -82, -95, 61, 110, 49, 90, 24, 5, 34, -69, -123, 54, -25, -128, 68, -36, -46, -116, 14, 57, 35, 4, 31, -52, -93, -10, 44, 5, -38, 24, 59, -55, -2, -21, 21, 36, 95, 124, -12, 72, -53, 10, -85, 34, -6, 34, -96, -67, 90, -102, -88, 122, 73, -69, 45, -122, -34, -77, -42, -76, -43, 102, -35, 44, 53, 101, 25, -121, -104, 56, -49};
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
    msg.setTimeStamp(0.43383852300664605);
    msg.setSource(46171U);
    msg.setSourceEntity(16U);
    msg.setDestination(38411U);
    msg.setDestinationEntity(104U);
    msg.content_type.assign("TKVJBTESQJXHZORJEJZIHWGKSIWBPLCWKQHD");
    const char tmp_msg_0[] = {123, 91, -2, -6, 38, 47, -72, 17, 6, 86, -14, -115, -117, -100, 82, -91, 59, 73, 69, 53, 119, 70, 76, 46, 84, -8, -28, 98, 31, 9, 47, 63, 31, -35, 27, 33, 2, 55, -110, 84, 1, -28, 5, -119, -26, 89, 1, 25, -106, -43, -1, -17, -123, -8, -101, -103, -38, -20, -126, -39, -87, 52, 115, 115, -56, 107, -20, 21, 74, -84, 68, -75, 8, 39, 73, -116, -32, 20, -28, -15, 89, -57, 36, 69, 77, -54, -126, -74, -103, 40, 37, 58, -68, 55, -87, -76, 89, 37, -60, -8, 22, -9, -10, -88, 119, -85, 125, 45, 72, 87, -84, -49, -63, -24, -90, 114, -5, 12, 60, -54, 95, -120, 85, 109, -104, 83, 87, -46, -77};
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
    msg.setTimeStamp(0.13287560297129408);
    msg.setSource(24701U);
    msg.setSourceEntity(156U);
    msg.setDestination(56099U);
    msg.setDestinationEntity(172U);
    msg.content_type.assign("SETIKQNFVUXLOPZDGBKUVDHSMNTPWIMTXFZZBRMAFGYPCSHCSYDJHQERTRAXIXITDNQEMVUJKAZGISEAG");
    const char tmp_msg_0[] = {42, -16, 20, -111, 70, -111, -41, 73, 28, -47, -122, 77, 19, 19, 110, 80, -29, 41, -56, -122, -25, 14, 93, 41, 2, 44, 91, -107, -128, 67, -51, 83, 72, 58, 26, 29, 108, 51, -60, 49, 63, -83, 12, 6, 56, 106, -67, -6, -17, 117, -99, 59, -87, 125, -55, 107, 69, -88, 34, -41, 80, -67, 122, 4, -126, 15, 106, 116, -119, 52, -71, -111, -116, -15, -40, 33, 102, -33, -82, -7, 32, -126, 119, 79, 104, -29, -122, -122, 32, 99, 114, -82, -64, -37, -86, -126, 59, -74, 98, -57, -24, 93, -86, 91, -24, 112, 52, -123, -48, 32, 41, -45, -127, 21, 3, -22, 44, 62, 78, 6, 81, 80, 69, -12, 55, 4, -47, 81};
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
    msg.setTimeStamp(0.9465852984840717);
    msg.setSource(40739U);
    msg.setSourceEntity(102U);
    msg.setDestination(37514U);
    msg.setDestinationEntity(0U);
    msg.content_type.assign("HXDSIDJPSGKOUULRFHZRKHIWAJACCULSIDDROUWAVBKFBQUNXSPRZHWMJJLQESADEIBVCNTK");
    const char tmp_msg_0[] = {-63, 94, 107, 114, -5, -108, -88, 126, 126, -10, -107, -82, 71, 99, -118, 97, 81, 117, -29, -46, 94, -116, 57, 79, -41, 118, -4, -23, 70, -124, 63, -14, -98, 4, 96, -19, -53, 112, 68, -51, -58, -83, -81, -42, -21, -93, 65, -111, -27, -34, 93, -1, -12, -38, 84, -48, -63, -101, 115, -104, 82, -64, -78, -43, 82, -1, -59, 44, -1, -64, -38, -95, 101, -109, 74, 59, -87, -69, 95, -6, 99, -117, 64, -26, 53, -69, 40, -88, 70, -27, 27, 30, 4, 113, -89, -49, 13, -79, -37, -61, 105, -13, 114, 22, -120, -54, -42, -30, -21, 98, 74, -27, -76, -39, 32, 30, 2, 81, -33, 50, 24, 31, -70, 56, 8, -107, 28, 113, 101, -85, 121, 114, -32, 7, 87, 11, 80, 77, -43, 37, 96, -119, 107, 38, -15, 110, 98, 37, -112, -106, 101, 11, 48, -80, 73, 36, -14, -83, -95, -47, -63, -10, -35, 11, -110, -64, 118, -29, 15, 86, 103, 76, -127, 120, -45, 29, -35, -117, 72, 79, -39, 4, 79, -51, -29, -111, 118, 77, -114};
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
    msg.setTimeStamp(0.6654657736533344);
    msg.setSource(29612U);
    msg.setSourceEntity(205U);
    msg.setDestination(30846U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.024699343754659098);
    msg.setSource(62826U);
    msg.setSourceEntity(179U);
    msg.setDestination(47971U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.5742021638893686);
    msg.setSource(47656U);
    msg.setSourceEntity(84U);
    msg.setDestination(24361U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.46575868445989455);
    msg.setSource(14287U);
    msg.setSourceEntity(59U);
    msg.setDestination(39778U);
    msg.setDestinationEntity(116U);
    msg.target = 2688U;
    msg.bearing = 0.16095916295872204;
    msg.elevation = 0.7529856274225712;

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
    msg.setTimeStamp(0.9539389026057251);
    msg.setSource(22871U);
    msg.setSourceEntity(214U);
    msg.setDestination(29472U);
    msg.setDestinationEntity(80U);
    msg.target = 28517U;
    msg.bearing = 0.46086928753988676;
    msg.elevation = 0.997718075024561;

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
    msg.setTimeStamp(0.6280743587964018);
    msg.setSource(7302U);
    msg.setSourceEntity(162U);
    msg.setDestination(27874U);
    msg.setDestinationEntity(129U);
    msg.target = 14442U;
    msg.bearing = 0.8162793004163765;
    msg.elevation = 0.46346719953031;

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
    msg.setTimeStamp(0.4726864435383088);
    msg.setSource(33043U);
    msg.setSourceEntity(238U);
    msg.setDestination(10391U);
    msg.setDestinationEntity(214U);
    msg.target = 25327U;
    msg.x = 0.8188649234294471;
    msg.y = 0.32212979406659326;
    msg.z = 0.3806220237509349;

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
    msg.setTimeStamp(0.2891583240091199);
    msg.setSource(44818U);
    msg.setSourceEntity(194U);
    msg.setDestination(59806U);
    msg.setDestinationEntity(155U);
    msg.target = 52131U;
    msg.x = 0.9625218252730021;
    msg.y = 0.1243829771953695;
    msg.z = 0.7317171547628646;

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
    msg.setTimeStamp(0.16444280323663674);
    msg.setSource(46163U);
    msg.setSourceEntity(220U);
    msg.setDestination(24062U);
    msg.setDestinationEntity(70U);
    msg.target = 36017U;
    msg.x = 0.16703660449809454;
    msg.y = 0.01794992951713703;
    msg.z = 0.9956884588071439;

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
    msg.setTimeStamp(0.514044674155035);
    msg.setSource(12884U);
    msg.setSourceEntity(229U);
    msg.setDestination(18506U);
    msg.setDestinationEntity(122U);
    msg.target = 8794U;
    msg.lat = 0.9920581633996962;
    msg.lon = 0.1391278968784051;
    msg.z_units = 150U;
    msg.z = 0.7768646139513645;

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
    msg.setTimeStamp(0.21724257038557482);
    msg.setSource(50913U);
    msg.setSourceEntity(6U);
    msg.setDestination(31992U);
    msg.setDestinationEntity(81U);
    msg.target = 64919U;
    msg.lat = 0.6155892186587171;
    msg.lon = 0.500366604098566;
    msg.z_units = 25U;
    msg.z = 0.37718349523414463;

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
    msg.setTimeStamp(0.11162709981773644);
    msg.setSource(10047U);
    msg.setSourceEntity(66U);
    msg.setDestination(23925U);
    msg.setDestinationEntity(236U);
    msg.target = 53346U;
    msg.lat = 0.7523792348812102;
    msg.lon = 0.24964203892134995;
    msg.z_units = 190U;
    msg.z = 0.8291748766487801;

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
    msg.setTimeStamp(0.6439238012876);
    msg.setSource(50278U);
    msg.setSourceEntity(217U);
    msg.setDestination(37710U);
    msg.setDestinationEntity(246U);
    msg.locale.assign("PSHTWNHQXWJNADVOQBYECTMRGBKOIQFSYEIDPFIGMIQMWHUGONCTFWGHAQWVKJPHRVUOJBWNDSCQAFKQXOTCPDDYEEHTMMQKEGVGZBXOVFPGXQMAWIHVBPNIIDKXUKCTKZFLRLSMZADGFOLTNAPEFCYYRBACTSHNYNDBSLJAVYNZUZCXCOYHZHIFYMZXLJWWCUDXENRSIFAVLZSJAK");
    const char tmp_msg_0[] = {25, 115, 71, -95, -51, -104, -43, -12, 15, -36, -119, 77, -15, 55, -101, 62, 122, 38, 9, -71, -17, -98, -19, -3, 117, 39, 100, 87, -106, 55, -60, 6, 46, -106, -121, -112, 98, 19, 0, -24, -61, -89, -74, -52, 105, 98, -94, -85, -47, -36, -104, -82, -67, 87, 97, -88, -7, 106, 88, 32, -36, -48, -115, -38, 79, -96, -3, 75, -3, 100, 45, 53, -47, 25, -1, 24, -98, 17, -35, 3, 19, 5, 80, 25, -31, -19, 49, 59, 56};
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
    msg.setTimeStamp(0.14239006100075635);
    msg.setSource(35755U);
    msg.setSourceEntity(152U);
    msg.setDestination(7080U);
    msg.setDestinationEntity(236U);
    msg.locale.assign("RHUOGZGIWNPQGSROOBJLIHAAZJQPTWWKYEKYNLFTFZKAVXFPGHYQDJIZMOMEHOTNMDWQCMJYCIHSKNPOS");
    const char tmp_msg_0[] = {43, -65, 86, -69, 15, -8, -80, -17, -29, -121, 13, 88, -64, 18, 30, -75, 63, 98, -72, -37, 6, -5, 102, 123, -64, -4, -81, 116, -55, -127, 88, 72, -39, 19, 38, -63, 82, -24, -110, 16, -90, -81, -17, 89, -30, 13, 125, -70, -97, -88, -104, -80, 69, 111, 79, 96, 99, 28, 80, 68, 10, -96, -46, 23, -1, -83, -22, 93, -96, 59, -99, 30, 34, 104, 47, -63, -63, 111, -55, -79, -58, -87, -87, 0, 29, -51, 61, 118, -63, 57, -82, 119, 95, 86, 97, 67, -19, -28, 95, -1, -107, -25, -100, 116, -24, -110, -7, -13, 81, -13, 103, 18, 49, 56, -18, -44, 96, -112, -79, 91, 110, 101, -8, 80, -127, 19, 38, -55, 92, -73, -34, -86, 112, 6, 89, 64, 99, 111, 124, -91, 75, 70, 3, -54, 120, 51, 60, -6, 107, 59, 55, 45};
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
    msg.setTimeStamp(0.6002666737756869);
    msg.setSource(51004U);
    msg.setSourceEntity(186U);
    msg.setDestination(41162U);
    msg.setDestinationEntity(247U);
    msg.locale.assign("RWMRYFQYCQECVADIZTIWGJZQEHNKAOZIHTGSOBZNZVAOIGEKYROHUXHBGCMJXXLMDHBPADJGFACFNSRTRWWYEIWZUUMCUBAJKVTRGNMRGMJXXHAGQGXLIZJKBPLUHIPDTYIATCFWELTETKJPPENUDDGHDSQUSUSPFYQKLVVOVWAYCPKIPBDPQIBFYCBLKURNLTVFQSZRHKLROSELSLJOMXWVDMSMXOEPDFYWCQVQZJNH");
    const char tmp_msg_0[] = {32, -14, -66, 13, 30, -12, 77, 81, -29, -38, -25, 11, -74, 33, -28, 37, -98, -107, -34, 14, 90, 20, -88, -29, -55, 35, -3, -58, -49, -16, -66, 54, 0, -13, -89, -104, -97, -107, -76, 107, -16, 30, -59, 49, -61, 79, -69, -76, -51, -32, 123, 56, -123, 48, 95, -40, 103, -30, 40, 62, 35, -27, -78, 50, -116, 111, -3, -115, 95, -75, 22, 108, 9, -75, -6, 111, -7, -42, 108, 33, 109, 1, 121, -67, -40, 5, -13, 117, -53, 108, 12, 75, 36, 43, -37, 26, 14, -34, -117, -111, -69, 61, 62, 112, 33, -63, 28, 40, 71, -51, 104, 9, 122, -11, 40, -121, 54, 11, -106, -40, -12, 126, -98, 57, 111, -17, 107, -118, -74, -85, 8, 109, -111, -86, 62, -53, -122, -70, 96, 5, -77, 79, -117, 118, -23, 41, -61, 66, -30, -4, 57, 103, 72, -31, 116, -45, -17, -101, 90, -31, -71, -84, 28, -78, 1, 114, -23, 22, -23, -32, -16, 71, -103, -37, 24, 90, 41, -49, 54, 45, -11, -53, -109, 52, -111, 31, -110, 4, 63, 121, 62, 4, -33, -116, 120, 95, 116, 46, -22, -70, 47, -50, -125, -125, 11, 8, 90, 124, -4, 103, 117, 107, 44, 11, 111, -105, 92, -108, -65, -18, 64, 83, -23, 107, 61, 99, -1, -1, 9, 60, -29, 123, 82};
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
    msg.setTimeStamp(0.8725637968430648);
    msg.setSource(2357U);
    msg.setSourceEntity(91U);
    msg.setDestination(44357U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.19254121500514298);
    msg.setSource(55538U);
    msg.setSourceEntity(155U);
    msg.setDestination(53688U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.9188776532591044);
    msg.setSource(41928U);
    msg.setSourceEntity(193U);
    msg.setDestination(10560U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.9015975381299657);
    msg.setSource(15678U);
    msg.setSourceEntity(41U);
    msg.setDestination(42723U);
    msg.setDestinationEntity(239U);
    const char tmp_msg_0[] = {-14, 16, 42, -106, -106, -89, 58, -19, 67, 71, 17, -53, 24, 27, -13, 17, 100, -51, -35, -128, -107, 59, 77, 15, 51, -115, -20, 81, 30, 39, -81, -109, 101, -78, -98, 110, -105, -126, -65, -75, -81, 92, -12, 97, -31, -87, 107, 68, -70, -93, 78, 80, 15, -84, 120, 2, 115, 25, 100, 59, 42, 108, -27, -22, -115, -49, -42, 98, -85, 91, 44, -119, -36, 48, 35, -33, -13, 110, 34, 8, -93, 60, -30, -31, 91, -21, -29, 88, -79, -8, 63, 28, 81, 57, -97, -89, 87, -105, -88, 91, -33, 98, -119, -18, -110, 10, -48, -115, 100, -105, -78, -25, -71, 66, -42, -53, 42, -105, 62, -3, -99, -118, 97, 78, -98, 27, 59, -4, 5, 99, -60, 106, -24, 98, 76, -38, 93, -38, 30, 119, 84, 49, 38, 40, 69, 12, -8, -20, 126, -89, -52, 24, -98, -48, 39, 93, -118, 18, 100, 54, -128, 71, 21, 33, 100, -34, -117, 15, -109, -50, -35, 42, 62, 6, 60, 10, 44, -66, -124, 74, 118, 110, -128, 39, 91, -12, 19, -116, 74, -94, -126, 51, 62, 16, 85, -121, 28, -50, 96, 122, -58, -39, -75, 50, 25, -36, -124, 67, 76, -125, 33, -67, -76, -43, 36, -108, 80, 97, 83, 56, -64, -34, -76, -35, -117, -50, -45, 25, -9, -104, -94, -5, 72, -127, 21, 90, -51, -116, -118, -18, 1, -71, -99, 45, 87, 85, 83, -19, -44, 2, -18, 120, -66};
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
    msg.setTimeStamp(0.43949013007396875);
    msg.setSource(47860U);
    msg.setSourceEntity(30U);
    msg.setDestination(62626U);
    msg.setDestinationEntity(165U);
    const char tmp_msg_0[] = {61, 80, -10, 50, 78, -87, -69, 92, 81, -107, -40, -104, 98, 46, -97, 117, -66, 2, -61, -120, 26, 12, -23, 67, 126, -55, -3, 119, 50, 65, -56, -116, 51, -123, -124, 44, 60, 126, -61, 36, -39, 33, -79, -8, 45, 107, 94, -32, -70, 124, -116, -17, -104, 40, 73, 71, -120, -119, 100, 43, -82, 58, 81, 90, -127, -55, -25, 88, -3, 29, -78, -49, -113, -35, 42, 30, 47, -103, 13, 50, 73, -19, 77, 58, -44, -77, 66, -33, 116, 3, -8, -126, -107, -87, 3, 117, 84, -23, 110, -121, -92, 19, -7, 61, -75, 86, -34, 64, 50, -52, -112, 53, -46, -94, 105, -5, -89, 1, -63, 102, -27, -32, -104, 43, 88, -34, 60, -38, 73, 124, 113, -40, 95, 102, 126, 84, -67, 111, -46, 83, 34, -12, -19, 115, 102, -115, 55, -82, 48, -7, -92, -60, 85, 46, 12, -78, -84, -66, -128, 39, -124, 120, 59, -10, -58, -39, 64, 72, 33, 39, 96, 38, -56, -112, -27, -64, -107, 57, -71, 108, 34, -23, 84, 108, -30, 17, -84, 81, -124, -101, -61, -51, 89, 69, 69, 76, 107, -55, -44, 9, -117, 114, 58, 11, 45, -25, 46, -111, -1, 89, -74, -32, -38, -107, -3};
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
    msg.setTimeStamp(0.13523325549748944);
    msg.setSource(8291U);
    msg.setSourceEntity(199U);
    msg.setDestination(13913U);
    msg.setDestinationEntity(16U);
    const char tmp_msg_0[] = {-77, -73, 122, -103, 18, 69, 121, -52, 12, 10, -78, -1, 1, 103, 5, -35, -121, 53, 112, 58, 70, 104, 56, 68, 3, 64, -105, 40, 95, -18, -119, 37, -72, -69, -19, -87, 73, 9, -90, 123, -81, -26, -31, 82, -8, 105, 38, -85, 69, 17, 88, -14, 101, 31, 86, -45, 107, -93, -22, -113, 95, 119, -119, 31, -93, 78, -12, -12, 48, 42, -103, -63, -34, 123, 19, 101, -18, -108, -40, -125, -25, 79, 11, -21, -116, -2, 110, 94, -118, 114, 77, -99, 44, 118, -114, -109, -61, -79, -95, 109, 36, 12, -54, 94, 27, -30, -108, -84, -50, 44, -51, 3, -24, -2, 74, -116, -11, 75, 95, 56, -45, 6, -67, 85, -33, 27, 21, -116, -85, -74, -91, 79, -127, -91, -60, -25, 52, 26, -116, -22, 23, -87, -8, 109, 37, -81, 107, -119, -33, 91, -8, -17, -37, 42, 97, 54, -22, 34, -2, 77, 108, 40, 24, 125, -1, 59, -51, -95, -81, 97, 23, 95, 81, 12, 48, -25, 16, -8, 64, -97, -83, -51, -88, -123, 58, 29, 102, -60, -75, -65, -15, 115, -126, 82, 27, -39, -43, -85, 9, -108, 92, 17, 78, 48, -4, -58, 25, -54, 59};
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
    msg.setTimeStamp(0.4736388411517445);
    msg.setSource(21645U);
    msg.setSourceEntity(78U);
    msg.setDestination(7066U);
    msg.setDestinationEntity(178U);
    msg.json.assign("YXDNCYTEQDFEMAZWGPORJWJEJOXWBLTLXEPNQQISQBXPSWMHHSEECNDJT");

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
    msg.setTimeStamp(0.6055420251127854);
    msg.setSource(25362U);
    msg.setSourceEntity(38U);
    msg.setDestination(865U);
    msg.setDestinationEntity(24U);
    msg.json.assign("GTVXFNSREOHLDWIVHOAAKMSZWLCQTNEAHWUJGRUWFKPSIHRDCPGIDALOZGZZBSPLYXTTPPORXXELIIIYBEXCBFRWDNGLQVEQQPVMAGMQADUSNGECYHYKMSCLXNCRUB");

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
    msg.setTimeStamp(0.5890188123059472);
    msg.setSource(47822U);
    msg.setSourceEntity(5U);
    msg.setDestination(9031U);
    msg.setDestinationEntity(35U);
    msg.json.assign("NNCXKZXUBKCUWTMVGQDEVBKZPYQUSMJBMQB");

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
    msg.setTimeStamp(0.4582339052084565);
    msg.setSource(17211U);
    msg.setSourceEntity(106U);
    msg.setDestination(7993U);
    msg.setDestinationEntity(247U);
    msg.highpass = 0.00314562854168543;
    msg.adot = 0.7417981475566439;
    msg.slope_compensation = 0.7728113607979858;
    msg.slope_compensation_difference = 0.2347247483579321;
    msg.altitude = 0.706989125224941;
    msg.auto_altitude = 0.9070445969875411;

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
    msg.setTimeStamp(0.5720111185355731);
    msg.setSource(65514U);
    msg.setSourceEntity(172U);
    msg.setDestination(62019U);
    msg.setDestinationEntity(160U);
    msg.highpass = 0.07417562835616132;
    msg.adot = 0.8874246428249731;
    msg.slope_compensation = 0.5092645898384957;
    msg.slope_compensation_difference = 0.18267524922095513;
    msg.altitude = 0.48436444172206805;
    msg.auto_altitude = 0.7373898555492165;

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
    msg.setTimeStamp(0.6159445829399294);
    msg.setSource(1424U);
    msg.setSourceEntity(234U);
    msg.setDestination(41376U);
    msg.setDestinationEntity(252U);
    msg.highpass = 0.7712427063814951;
    msg.adot = 0.6092897245011853;
    msg.slope_compensation = 0.3778242252631233;
    msg.slope_compensation_difference = 0.7938839135068996;
    msg.altitude = 0.7139348553287457;
    msg.auto_altitude = 0.6815670353404681;

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
    msg.setTimeStamp(0.6305280233787869);
    msg.setSource(55210U);
    msg.setSourceEntity(117U);
    msg.setDestination(60400U);
    msg.setDestinationEntity(42U);
    msg.remote_control_allowed = 238U;
    msg.remote_control_enabled = 223U;
    msg.remote_control_active = 206U;
    msg.depth_only_control_enabled = 174U;
    msg.direct_control_enabled = 106U;
    msg.return_to_closest_point_on_line = 93U;
    msg.on_shore_power = 189U;
    msg.latitude = 0.8717223940660059;
    msg.longitude = 0.9296278976726722;
    msg.depth = 0.6656909288713598;
    msg.depth_ref = 0.2988044073997932;
    msg.altitude = 0.7513077831233013;
    msg.altitude_ref = 0.6049690717007872;
    msg.pitch = 0.7077559775147734;
    msg.roll = 0.4244965185178914;
    msg.rpm = 0.41786183470629357;
    msg.rpm_ref = 0.005439336965785246;
    msg.speed = 0.6634958575078899;
    msg.speed_ref = 0.3743329551843424;
    msg.heading = 0.8067020361866002;
    msg.heading_rate = 0.39473613390828277;
    msg.heading_ref = 0.3623866629144199;
    msg.mission_state = 167U;
    msg.leg = -5349188115451428280;

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
    msg.setTimeStamp(0.18735636202978234);
    msg.setSource(45183U);
    msg.setSourceEntity(90U);
    msg.setDestination(39192U);
    msg.setDestinationEntity(35U);
    msg.remote_control_allowed = 200U;
    msg.remote_control_enabled = 228U;
    msg.remote_control_active = 166U;
    msg.depth_only_control_enabled = 223U;
    msg.direct_control_enabled = 35U;
    msg.return_to_closest_point_on_line = 102U;
    msg.on_shore_power = 241U;
    msg.latitude = 0.17085461016981307;
    msg.longitude = 0.7238482568366124;
    msg.depth = 0.06684755496931427;
    msg.depth_ref = 0.8621824037028027;
    msg.altitude = 0.2923580868797818;
    msg.altitude_ref = 0.12649955557988235;
    msg.pitch = 0.07461926607619052;
    msg.roll = 0.36432965502019043;
    msg.rpm = 0.5698721609623568;
    msg.rpm_ref = 0.9188390001423948;
    msg.speed = 0.7788904816189816;
    msg.speed_ref = 0.9852147598370771;
    msg.heading = 0.695545170781392;
    msg.heading_rate = 0.11551156638473781;
    msg.heading_ref = 0.37277375984258065;
    msg.mission_state = 133U;
    msg.leg = 773613722178947617;

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
    msg.setTimeStamp(0.5627905474968832);
    msg.setSource(63742U);
    msg.setSourceEntity(225U);
    msg.setDestination(54478U);
    msg.setDestinationEntity(245U);
    msg.remote_control_allowed = 31U;
    msg.remote_control_enabled = 31U;
    msg.remote_control_active = 238U;
    msg.depth_only_control_enabled = 33U;
    msg.direct_control_enabled = 136U;
    msg.return_to_closest_point_on_line = 7U;
    msg.on_shore_power = 135U;
    msg.latitude = 0.09184662646558295;
    msg.longitude = 0.8112939662888581;
    msg.depth = 0.0005154446154056469;
    msg.depth_ref = 0.25766067510469604;
    msg.altitude = 0.6505847069103476;
    msg.altitude_ref = 0.6776034991880917;
    msg.pitch = 0.9964815654776321;
    msg.roll = 0.14841898609463322;
    msg.rpm = 0.8584447454449977;
    msg.rpm_ref = 0.8780085250637103;
    msg.speed = 0.9951457758364556;
    msg.speed_ref = 0.8832138174266765;
    msg.heading = 0.26873296592650486;
    msg.heading_rate = 0.042394807832435766;
    msg.heading_ref = 0.38548368025433544;
    msg.mission_state = 219U;
    msg.leg = -145767105000061142;

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
    msg.setTimeStamp(0.5619421899110191);
    msg.setSource(49204U);
    msg.setSourceEntity(66U);
    msg.setDestination(52198U);
    msg.setDestinationEntity(94U);
    msg.name.assign("QGRAJKFRRSOMPSXRRHZWSVNVGKUTEEDFHBITWLUBMVPXARQUYMECWCSCKDDCFHGLCZVWYYMXQKLXXNMNWXYAVPIBSRT");
    msg.arg1 = 0.5102620372514244;
    msg.arg2 = 0.02955639123750209;
    msg.arg3 = 0.14430850861553746;
    msg.arg4 = 0.3084212409629108;

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
    msg.setTimeStamp(0.00864324980697806);
    msg.setSource(56949U);
    msg.setSourceEntity(36U);
    msg.setDestination(12539U);
    msg.setDestinationEntity(164U);
    msg.name.assign("EPGNETUUHGOXYDHKBFOJZGTOBIXBHOBLTTMSSOFVXQFFUVUVRJHSCCUAKDTNQJLGISDPAKRXLQVCGRQAVWPRFYXULHWZZZWBXDGKTILBMDKAMPDLZMSMNNRNMXYGVBFIYMCKOSIRETICBORCTBPTVQKDZCCCLWSAUGAZXQXNUSVZMEEEILASGFRKEQCYEWPXYDNAFFLKPVWYYGEHPBPJDKUWWNPRWJOIHFDOTJJVHIQJZIMHNJJ");
    msg.arg1 = 0.24497191711501431;
    msg.arg2 = 0.6518203426234848;
    msg.arg3 = 0.6131830800495371;
    msg.arg4 = 0.17909760126904273;

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
    msg.setTimeStamp(0.5998184421999343);
    msg.setSource(45249U);
    msg.setSourceEntity(28U);
    msg.setDestination(27749U);
    msg.setDestinationEntity(254U);
    msg.name.assign("SIAVXMNTFTRUJTHCFKFEDOMEUSBVQIPDNJYPZCXMIEQYKBXIMANFKXLPQTPMXBGBCEDNOTARQBJKHGXSYWPJLAWYJIBZEDDHUZLZSZJJENBRAYQNFONAQJDGHCRNOGGHCFSCZKLXODGDCGRPURVUIHLOVHLBZPBS");
    msg.arg1 = 0.31163286556721714;
    msg.arg2 = 0.06884029495339838;
    msg.arg3 = 0.08282730637856694;
    msg.arg4 = 0.776994082678376;

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
    msg.setTimeStamp(0.19485101808621974);
    msg.setSource(37554U);
    msg.setSourceEntity(41U);
    msg.setDestination(39327U);
    msg.setDestinationEntity(242U);
    msg.direction = 217U;
    msg.range1 = 0.8007444057896255;
    msg.range2 = 0.8806611085331854;
    msg.range3 = 0.40231390785583154;
    msg.range4 = 0.18428637811476256;

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
    msg.setTimeStamp(0.9654813901179558);
    msg.setSource(31976U);
    msg.setSourceEntity(163U);
    msg.setDestination(50458U);
    msg.setDestinationEntity(241U);
    msg.direction = 26U;
    msg.range1 = 0.7471948702687798;
    msg.range2 = 0.447448099972123;
    msg.range3 = 0.5527609908093181;
    msg.range4 = 0.742686065763761;

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
    msg.setTimeStamp(0.09810918237954969);
    msg.setSource(10232U);
    msg.setSourceEntity(154U);
    msg.setDestination(52618U);
    msg.setDestinationEntity(70U);
    msg.direction = 44U;
    msg.range1 = 0.47925800424274423;
    msg.range2 = 0.8769237723568944;
    msg.range3 = 0.0796532027939203;
    msg.range4 = 0.17743615116657419;

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
    msg.setTimeStamp(0.8265958945304975);
    msg.setSource(29359U);
    msg.setSourceEntity(199U);
    msg.setDestination(42143U);
    msg.setDestinationEntity(175U);
    msg.msg.assign("QAEZJVPCQSJLQUMPDIROPYTWQDFGIWCVBHRVKWHOYLEMHCJOIVNMLYPZVQYWWOMRZAVDMKFWCSZQPONPYEFNWGBTWITXCNQEBBBXRKQRIPKRFTNVECYMYSBGZHIFBDHJODIDXGNUCUAJKWPFRHDYEXDPUAIKYUQSJSDQIGYJXULMABASUNLOJKXNALKPCTLIGFESFGDUFBMZRMSHKZLBNHATJEZXKLGOTCRGUSXOXMRVHVUOL");
    msg.direction = 153U;

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
    msg.setTimeStamp(0.9146554952098745);
    msg.setSource(21207U);
    msg.setSourceEntity(70U);
    msg.setDestination(33334U);
    msg.setDestinationEntity(184U);
    msg.msg.assign("RGCQDNOJSCNMQOMIAFWPALCUVODJJHZLZIQVEYRREGGTZERLMDDSBQMEFKCYQBAMXBJCVNHCWWNXCEPANHVKRTRLYIWWPGLOXKO");
    msg.direction = 49U;

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
    msg.setTimeStamp(0.17171106768388478);
    msg.setSource(36357U);
    msg.setSourceEntity(252U);
    msg.setDestination(29185U);
    msg.setDestinationEntity(16U);
    msg.msg.assign("TNCIIBQTUGYXFGVIITLXOTNQAKVQUCLRGEJVFBBSQLJWXTWFUBNWRNYVHPZCAWKPJPTYVHHYWGHFIFKRDALULVDWMPGSUSKGEWSZIJDHSCWOQYHNBYVXHAAZDDFQYQKTNKJZZUMPIRLPDFUJIXAZOTELJGIMSRJYBYHCDHWJFVDVSCNMDNLOHCLYEQMAMCKOORX");
    msg.direction = 249U;

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
    msg.setTimeStamp(0.7950447414779135);
    msg.setSource(29291U);
    msg.setSourceEntity(40U);
    msg.setDestination(1318U);
    msg.setDestinationEntity(63U);
    msg.state = 150U;

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
    msg.setTimeStamp(0.6149971195676562);
    msg.setSource(24514U);
    msg.setSourceEntity(60U);
    msg.setDestination(3585U);
    msg.setDestinationEntity(199U);
    msg.state = 145U;

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
    msg.setTimeStamp(0.9136810283128479);
    msg.setSource(41391U);
    msg.setSourceEntity(145U);
    msg.setDestination(54147U);
    msg.setDestinationEntity(159U);
    msg.state = 36U;

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
    msg.setTimeStamp(0.5630167395366017);
    msg.setSource(33884U);
    msg.setSourceEntity(228U);
    msg.setDestination(62867U);
    msg.setDestinationEntity(208U);
    msg.dt = 0.213865589705863;
    msg.k_d = 0.6167406345331496;
    msg.range1 = 0.35973827698383665;
    msg.range2 = 0.4856725078393126;
    msg.range3 = 0.7132985461947917;
    msg.range4 = 0.5497663197713626;
    msg.u = 0.16652888998128657;
    msg.v = 0.739813082320198;
    msg.w = 0.6669932356773219;
    msg.phi = 0.6826668971646935;
    msg.theta = 0.9186950912167773;
    msg.psi = 0.5832054001647814;
    msg.adot = 0.5133272824626264;

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
    msg.setTimeStamp(0.8426461934788412);
    msg.setSource(52895U);
    msg.setSourceEntity(162U);
    msg.setDestination(18362U);
    msg.setDestinationEntity(60U);
    msg.dt = 0.1255061510517339;
    msg.k_d = 0.17511454730221376;
    msg.range1 = 0.22647642182528205;
    msg.range2 = 0.8658248552663961;
    msg.range3 = 0.34523696855956765;
    msg.range4 = 0.4395736343362774;
    msg.u = 0.5259880979607469;
    msg.v = 0.3099498093941824;
    msg.w = 0.6676296622490343;
    msg.phi = 0.27165926944219054;
    msg.theta = 0.40493569120579087;
    msg.psi = 0.6689367191832075;
    msg.adot = 0.5671048307508293;

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
    msg.setTimeStamp(0.2218243396765689);
    msg.setSource(59411U);
    msg.setSourceEntity(217U);
    msg.setDestination(5486U);
    msg.setDestinationEntity(244U);
    msg.dt = 0.07900474514234712;
    msg.k_d = 0.3666448970154933;
    msg.range1 = 0.6425032589655542;
    msg.range2 = 0.06946935103594454;
    msg.range3 = 0.20111965378308705;
    msg.range4 = 0.6836544889622345;
    msg.u = 0.4278081006139631;
    msg.v = 0.21142330151133648;
    msg.w = 0.2681474072663935;
    msg.phi = 0.6798295527743909;
    msg.theta = 0.9593707196808591;
    msg.psi = 0.7699867540901649;
    msg.adot = 0.24629464869292006;

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
    msg.setTimeStamp(0.827569332498807);
    msg.setSource(4747U);
    msg.setSourceEntity(207U);
    msg.setDestination(8367U);
    msg.setDestinationEntity(44U);
    msg.htime = 0.9312097939002753;
    msg.dt = 0.07049474376759746;

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
    msg.setTimeStamp(0.09092597596178253);
    msg.setSource(50252U);
    msg.setSourceEntity(188U);
    msg.setDestination(1545U);
    msg.setDestinationEntity(173U);
    msg.htime = 0.6443488902074535;
    msg.dt = 0.9615182083900492;

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
    msg.setTimeStamp(0.25119636973964743);
    msg.setSource(48943U);
    msg.setSourceEntity(164U);
    msg.setDestination(5835U);
    msg.setDestinationEntity(240U);
    msg.htime = 0.5676410808571749;
    msg.dt = 0.31943607431498966;

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
    msg.setTimeStamp(0.6301382988471879);
    msg.setSource(30194U);
    msg.setSourceEntity(117U);
    msg.setDestination(870U);
    msg.setDestinationEntity(24U);
    msg.value = 0.9058950490104095;

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
    msg.setTimeStamp(0.40415786556608724);
    msg.setSource(18656U);
    msg.setSourceEntity(150U);
    msg.setDestination(54243U);
    msg.setDestinationEntity(98U);
    msg.value = 0.9190134275241335;

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
    msg.setTimeStamp(0.9629663190817028);
    msg.setSource(10133U);
    msg.setSourceEntity(82U);
    msg.setDestination(5079U);
    msg.setDestinationEntity(216U);
    msg.value = 0.5267339354615433;

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
    msg.setTimeStamp(0.7290300061895902);
    msg.setSource(39428U);
    msg.setSourceEntity(238U);
    msg.setDestination(7954U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.3642757771000258;
    msg.lon = 0.8985367281805683;

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
    msg.setTimeStamp(0.7848102414700836);
    msg.setSource(35722U);
    msg.setSourceEntity(197U);
    msg.setDestination(51511U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.12254001585233265;
    msg.lon = 0.3683884444439045;

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
    msg.setTimeStamp(0.8892314172418215);
    msg.setSource(47573U);
    msg.setSourceEntity(63U);
    msg.setDestination(53666U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.0744549948975105;
    msg.lon = 0.3137278903835605;

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
    msg.setTimeStamp(0.0038156965996030134);
    msg.setSource(14764U);
    msg.setSourceEntity(245U);
    msg.setDestination(13728U);
    msg.setDestinationEntity(21U);
    msg.value = 0.46267436542881635;

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
    msg.setTimeStamp(0.6370996422839919);
    msg.setSource(40551U);
    msg.setSourceEntity(150U);
    msg.setDestination(24050U);
    msg.setDestinationEntity(33U);
    msg.value = 0.9738038367342025;

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
    msg.setTimeStamp(0.045389942325109844);
    msg.setSource(40208U);
    msg.setSourceEntity(65U);
    msg.setDestination(10377U);
    msg.setDestinationEntity(144U);
    msg.value = 0.007778966753236083;

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
    msg.setTimeStamp(0.3995952396234599);
    msg.setSource(8198U);
    msg.setSourceEntity(34U);
    msg.setDestination(25000U);
    msg.setDestinationEntity(163U);
    msg.value = 0.6065333878072707;

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
    msg.setTimeStamp(0.9115054285396428);
    msg.setSource(13397U);
    msg.setSourceEntity(10U);
    msg.setDestination(30145U);
    msg.setDestinationEntity(133U);
    msg.value = 0.8019416761441408;

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
    msg.setTimeStamp(0.25861649764267947);
    msg.setSource(4255U);
    msg.setSourceEntity(109U);
    msg.setDestination(59557U);
    msg.setDestinationEntity(206U);
    msg.value = 0.5091409663237618;

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
