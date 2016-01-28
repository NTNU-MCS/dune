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
// IMC XML MD5: aec372a00cc4f4ac5d8aa5f1bbe6eac7                            *
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
    msg.setTimeStamp(0.8018764683311747);
    msg.setSource(2560U);
    msg.setSourceEntity(229U);
    msg.setDestination(25582U);
    msg.setDestinationEntity(245U);
    msg.state = 139U;
    msg.flags = 238U;
    msg.description.assign("HISOGQCRCQWTMYOVBDJDISHTVEHTOGJHMJXSKZQMTUNXLDXEFIVBLEG");

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
    msg.setTimeStamp(0.08030723362044367);
    msg.setSource(20139U);
    msg.setSourceEntity(249U);
    msg.setDestination(9190U);
    msg.setDestinationEntity(239U);
    msg.state = 128U;
    msg.flags = 162U;
    msg.description.assign("WCEKDQLFUGLCEEFNVLRDHIVBHTNJVVETZMNQOJKXMKZTLWRYSNMGYOZUIJRQWTOLQPYNUEPDLSBQDWLNGOEGXQWPHJIFJAAQXSYFBOJHGSCWVZUBPNUNBZXMWLCDOYAFAXBIRPPIAWZMNRDYBXCTHHRSKXSQMFCXFZXTJDYFQJPDIPJGRUKRUDTRIPVTGJVCKOAVYFIYM");

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
    msg.setTimeStamp(0.8446598303154059);
    msg.setSource(27811U);
    msg.setSourceEntity(230U);
    msg.setDestination(18325U);
    msg.setDestinationEntity(114U);
    msg.state = 221U;
    msg.flags = 39U;
    msg.description.assign("WQGMGKZAANKCOKHDVFUXIWWFULCLZXEFZBKCFTWHAORRSJMGCVACJVOBWOEDTJEVLBNRFLRNDUYOVBRYEKUYZMKXTZABGCZSGIXMQTXBEELRUBPYIRNCPULPCUTHKETVZJJSNQBAWCSYIROEUVJYLCINQRZXIVAXJSTQUFDBVGXXSQGMMALZIHRGTKKOFHBMWWWDNIHMFYSLPOSMDNQYUGEZQYAHPIEXSPPPDLADITJHKVDGPHNSF");

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
    msg.setTimeStamp(0.5646410859120621);
    msg.setSource(55379U);
    msg.setSourceEntity(213U);
    msg.setDestination(12677U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.24629782473631667);
    msg.setSource(51389U);
    msg.setSourceEntity(64U);
    msg.setDestination(32949U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.16394759118205804);
    msg.setSource(48171U);
    msg.setSourceEntity(37U);
    msg.setDestination(22207U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.71024221619551);
    msg.setSource(19121U);
    msg.setSourceEntity(248U);
    msg.setDestination(50923U);
    msg.setDestinationEntity(251U);
    msg.id = 134U;
    msg.label.assign("RXJRLNEJANCJGWTQZPNSCJPTDVBFUKHBMBKOUDCHHZYFQZZBCLFVHCZRANPMYGIWPF");
    msg.component.assign("QZQJBDHBSSHLRKOVQAFMGTHICNGZBINRWINYGWTACAOMFOCDTBVDSEZVMXWTBMGFFVKPPJYRPGPFOLQMPYJOHIAVILHSXSOXEQYTZEDFNNHHUPROENHPYBDPFUQFKRUELALUYYMDVABENJUKSZRMLPOXJTJTFBRRVSZQEGGKZAWXZQAVSSKMIJGKWCWINCDKOCWXCEDXWZQMTNNVGU");
    msg.act_time = 5859U;
    msg.deact_time = 5991U;

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
    msg.setTimeStamp(0.0361359420270535);
    msg.setSource(1607U);
    msg.setSourceEntity(170U);
    msg.setDestination(57035U);
    msg.setDestinationEntity(152U);
    msg.id = 86U;
    msg.label.assign("SWZFMMPUHDWRKDKNZOJIBOMSSEQKHOQMAMLIYUAAROJUVLLLROVYPXAOURQERSXCZNUWHSCTSDTSCVEYZJFOJNLLKINAFDRDVFPJTQUQRIW");
    msg.component.assign("SVEUILFYKUHEPIXMJGXHSGLKNCJUNZRCAFMAMZZNTVPOSZMEAOHBYPGBRNNTEIRBHBFQIBCKWUYZCXZXQTUWHXFCWCLQKAUMEKCPTVXLRMRCGYPVJGGBBJWRDZYPEQOFFYJHTPEMTVOLRGFLLHYORPLRWJPDYVEOQZXWDZYCQHTQESACFQMNMIIASPEDVFSANYUDNVDKWKIGGBUTWASULDSBTINOJOXVIUTAM");
    msg.act_time = 15192U;
    msg.deact_time = 41166U;

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
    msg.setTimeStamp(0.802253165745928);
    msg.setSource(8466U);
    msg.setSourceEntity(206U);
    msg.setDestination(39219U);
    msg.setDestinationEntity(68U);
    msg.id = 38U;
    msg.label.assign("KHXWTFXYJANAASLOVTIQQSWEQWYKHDSPLDRURMDXMTFWXHQDVGKXENKKUOTPJCVTZCFJDRZNGVQVETGIFOPMBPPJILJNKLSNKNXLOYWZZHSCRGEUGDQAUDKLGLBGTEHOKSWTXBPMBZAVHFNPXQBEWPPMTAJMRONCJWCOZWSXHHHJGIYMPIFUVCYOBEFDTLUQCNDBEASZIBICS");
    msg.component.assign("UTLKWDALBSXNOIVNUFPVEOZIVTPXTTEHDFYQRACCYPYHYKYZRCJXHJKEJWIGOZVPPPJKNEDBHHQFT");
    msg.act_time = 289U;
    msg.deact_time = 2408U;

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
    msg.setTimeStamp(0.5377600582752186);
    msg.setSource(43968U);
    msg.setSourceEntity(44U);
    msg.setDestination(11883U);
    msg.setDestinationEntity(70U);
    msg.id = 109U;

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
    msg.setTimeStamp(0.46973499603134294);
    msg.setSource(55549U);
    msg.setSourceEntity(245U);
    msg.setDestination(57298U);
    msg.setDestinationEntity(184U);
    msg.id = 221U;

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
    msg.setTimeStamp(0.31383251535763446);
    msg.setSource(33344U);
    msg.setSourceEntity(188U);
    msg.setDestination(2098U);
    msg.setDestinationEntity(13U);
    msg.id = 19U;

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
    msg.setTimeStamp(0.19185139643036297);
    msg.setSource(29468U);
    msg.setSourceEntity(157U);
    msg.setDestination(33940U);
    msg.setDestinationEntity(32U);
    msg.op = 186U;
    msg.list.assign("QWUXZEMLYFCATMYXQJROXBNIFAXHZHRWVXBXZASWPPGBVCJYKBCRPEFVDPETFHKCAFIAIRCSKLYFGIBLZTXDWUHKNQTEZGJPCU");

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
    msg.setTimeStamp(0.5200015638209703);
    msg.setSource(37351U);
    msg.setSourceEntity(132U);
    msg.setDestination(41159U);
    msg.setDestinationEntity(187U);
    msg.op = 119U;
    msg.list.assign("SNWEXIONSURVZQNAUMYSVZDKETABKJMLBYNVZRMBMQQNQBKXKFHFFANBXJBGCHYWEYLIHPOMSMRPJLIWILKBUXUDHJHNRTUFLOTLXGWGXLJMS");

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
    msg.setTimeStamp(0.6461931801041101);
    msg.setSource(15804U);
    msg.setSourceEntity(115U);
    msg.setDestination(27351U);
    msg.setDestinationEntity(152U);
    msg.op = 211U;
    msg.list.assign("PSCKEDAVSYOLVPYDYFLGMCAIUWCVVYFRNHFLRPGSDDN");

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
    msg.setTimeStamp(0.03744365088164203);
    msg.setSource(58942U);
    msg.setSourceEntity(51U);
    msg.setDestination(54855U);
    msg.setDestinationEntity(131U);
    msg.value = 32U;

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
    msg.setTimeStamp(0.7781179627991769);
    msg.setSource(35092U);
    msg.setSourceEntity(128U);
    msg.setDestination(19292U);
    msg.setDestinationEntity(204U);
    msg.value = 76U;

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
    msg.setTimeStamp(0.8694234060918938);
    msg.setSource(37837U);
    msg.setSourceEntity(156U);
    msg.setDestination(49356U);
    msg.setDestinationEntity(36U);
    msg.value = 47U;

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
    msg.setTimeStamp(0.40915899277897405);
    msg.setSource(62354U);
    msg.setSourceEntity(225U);
    msg.setDestination(30116U);
    msg.setDestinationEntity(151U);
    msg.consumer.assign("WMNNAPRINKECBRASCTTNQCJLHQHDMKARXPEPBMSPXXPWVTSNXIOZWDRSYWFLIOEQVYYHBMWLPIOYWUGVAQIMYYIGPNCFOBTUPFMJTIZLEFGAGCRXAJQTJESD");
    msg.message_id = 26160U;

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
    msg.setTimeStamp(0.23376226371812714);
    msg.setSource(21111U);
    msg.setSourceEntity(147U);
    msg.setDestination(44755U);
    msg.setDestinationEntity(90U);
    msg.consumer.assign("VONKMGXRHNIGVPLPYBG");
    msg.message_id = 41459U;

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
    msg.setTimeStamp(0.611851658489121);
    msg.setSource(9725U);
    msg.setSourceEntity(167U);
    msg.setDestination(18499U);
    msg.setDestinationEntity(35U);
    msg.consumer.assign("EGGHWOHYIBBXQYSSNFIZFOKWNENMJKSXECVJJVTCYPDEUWWZDJEIGVCLAUXMOLASBGHDCDPTNAHFZIWPNLBXZOMQZXOTNKRMFFEPBQWYYLKCLUFOBGADTGMPNEDRASDUSKBKUBZXCMKRFESRAENHXKKRPTTRGUWHORKZPYPJROAOYLBICUMVGUAODXHTILDVLIPXZRYSNZCSWQBNCLVIJIMHFHADXH");
    msg.message_id = 41416U;

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
    msg.setTimeStamp(0.276067984951365);
    msg.setSource(63617U);
    msg.setSourceEntity(17U);
    msg.setDestination(14965U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.6545408554711613);
    msg.setSource(35788U);
    msg.setSourceEntity(97U);
    msg.setDestination(63246U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.21821659943017158);
    msg.setSource(25419U);
    msg.setSourceEntity(197U);
    msg.setDestination(6833U);
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
    msg.setTimeStamp(0.17715681800927907);
    msg.setSource(60984U);
    msg.setSourceEntity(238U);
    msg.setDestination(26975U);
    msg.setDestinationEntity(250U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.0959256414059062);
    msg.setSource(24928U);
    msg.setSourceEntity(109U);
    msg.setDestination(16548U);
    msg.setDestinationEntity(215U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.24330496300953186);
    msg.setSource(12159U);
    msg.setSourceEntity(181U);
    msg.setDestination(14191U);
    msg.setDestinationEntity(222U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.5825620899137031);
    msg.setSource(17338U);
    msg.setSourceEntity(12U);
    msg.setDestination(50424U);
    msg.setDestinationEntity(242U);
    msg.total_steps = 4U;
    msg.step_number = 135U;
    msg.step.assign("HJCWQJHNVPUDDZOVBDZGQBKASWALDL");
    msg.flags = 222U;

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
    msg.setTimeStamp(0.5719538214283119);
    msg.setSource(7355U);
    msg.setSourceEntity(124U);
    msg.setDestination(39199U);
    msg.setDestinationEntity(108U);
    msg.total_steps = 38U;
    msg.step_number = 127U;
    msg.step.assign("SZDJLXZFXOSKWVOHZFDWJBMABZCQXBFACAJEVSLDAVSENRCGPYNTAHGERLJBXXXPWNPTIUUOPYWFFWXMLKHMXJWKQLNYNLOILMIFOYERQHSNNJXOGRYTGTFEKKYRQSMJOGKIUTPICXDBJRYUAMEDTLALVPIAJJMFNPHWAWZBQFBGSPCTWHRPQUWDDQGCVYCYVNVIEUHBKNGRUMIZMROSUP");
    msg.flags = 161U;

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
    msg.setTimeStamp(0.6205436011068308);
    msg.setSource(27817U);
    msg.setSourceEntity(88U);
    msg.setDestination(30064U);
    msg.setDestinationEntity(19U);
    msg.total_steps = 12U;
    msg.step_number = 35U;
    msg.step.assign("AFDSKGPAZBBERRWVMDYGIWDCZDXAZBFSQGCORPXXEBESJOTJKZUJHVBXPXPHIRTFMVXUCVNJYLJO");
    msg.flags = 31U;

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
    msg.setTimeStamp(0.7072662032718736);
    msg.setSource(38921U);
    msg.setSourceEntity(123U);
    msg.setDestination(6799U);
    msg.setDestinationEntity(245U);
    msg.state = 50U;
    msg.error.assign("IRRNUDSDBAATEBOYURZNKYCKHIKJBBRISYOHGYYFHMIDSMKIYGVTTWUHJTSQEPKDRRFMDZ");

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
    msg.setTimeStamp(0.8997607891987683);
    msg.setSource(8556U);
    msg.setSourceEntity(169U);
    msg.setDestination(21160U);
    msg.setDestinationEntity(137U);
    msg.state = 238U;
    msg.error.assign("MCLLMDJKKOTPBEBJKLQIMFCPXARVPUVPBKAEFIKXDXDTJGAYYIHSCRSJCVNHKWEXIQFBQZOSYQJRKVHNCRWECGUGSJNOBWGPGSTROWTBNBGZWMCLXTHXAZAXRMZHUCKMYUQURSSGWYVUYPQCOFWOJHZPDQNYJSIHINXVLWEOIMULTEEBSHPEFTNGNVOLWYGWDOMVNSAZAZEDTHQHNAXZQPBDZVRUDOQXTRCLKFJAFILLBAJIZPKUMVRTYGF");

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
    msg.setTimeStamp(0.5057849511189367);
    msg.setSource(35019U);
    msg.setSourceEntity(168U);
    msg.setDestination(10681U);
    msg.setDestinationEntity(160U);
    msg.state = 100U;
    msg.error.assign("GXIIOOOLSVHNXLYSZGOIA");

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
    msg.setTimeStamp(0.008251852901968504);
    msg.setSource(51912U);
    msg.setSourceEntity(247U);
    msg.setDestination(20793U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.7186515688211558);
    msg.setSource(3362U);
    msg.setSourceEntity(241U);
    msg.setDestination(1276U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.6605029162382339);
    msg.setSource(35516U);
    msg.setSourceEntity(136U);
    msg.setDestination(3110U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.9614700728584412);
    msg.setSource(3381U);
    msg.setSourceEntity(22U);
    msg.setDestination(56029U);
    msg.setDestinationEntity(213U);
    msg.op = 113U;
    msg.speed_min = 0.9137932360705987;
    msg.speed_max = 0.5661484539785925;
    msg.long_accel = 0.05546102102240802;
    msg.alt_max_msl = 0.8491036372878825;
    msg.dive_fraction_max = 0.08670079666246211;
    msg.climb_fraction_max = 0.6120160685606224;
    msg.bank_max = 0.19528557040076266;
    msg.p_max = 0.7170216983743216;
    msg.pitch_min = 0.774811777857232;
    msg.pitch_max = 0.059011069359550805;
    msg.q_max = 0.7864466658648391;
    msg.g_min = 0.8617940108012513;
    msg.g_max = 0.810175160098348;
    msg.g_lat_max = 0.06450585370421535;
    msg.rpm_min = 0.8282884859362845;
    msg.rpm_max = 0.46748530885483885;
    msg.rpm_rate_max = 0.9798879940660657;

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
    msg.setTimeStamp(0.3900744802459264);
    msg.setSource(11125U);
    msg.setSourceEntity(127U);
    msg.setDestination(46949U);
    msg.setDestinationEntity(90U);
    msg.op = 177U;
    msg.speed_min = 0.8685163992153491;
    msg.speed_max = 0.8498352048278254;
    msg.long_accel = 0.9863252582328618;
    msg.alt_max_msl = 0.5194218515561276;
    msg.dive_fraction_max = 0.9868395628678885;
    msg.climb_fraction_max = 0.8787991881648423;
    msg.bank_max = 0.8603484704222358;
    msg.p_max = 0.7430771709313498;
    msg.pitch_min = 0.3765328625865072;
    msg.pitch_max = 0.7404485747721835;
    msg.q_max = 0.4412641584101603;
    msg.g_min = 0.6627319588440654;
    msg.g_max = 0.630522369956972;
    msg.g_lat_max = 0.0836049984596654;
    msg.rpm_min = 0.3115936161270273;
    msg.rpm_max = 0.06479705223689114;
    msg.rpm_rate_max = 0.02407982296427369;

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
    msg.setTimeStamp(0.3141941564418367);
    msg.setSource(50799U);
    msg.setSourceEntity(106U);
    msg.setDestination(5062U);
    msg.setDestinationEntity(145U);
    msg.op = 171U;
    msg.speed_min = 0.4690900307300232;
    msg.speed_max = 0.5503844934158982;
    msg.long_accel = 0.1389567688958635;
    msg.alt_max_msl = 0.46235416718464994;
    msg.dive_fraction_max = 0.12088249709545329;
    msg.climb_fraction_max = 0.8196575640403402;
    msg.bank_max = 0.046419826527104635;
    msg.p_max = 0.06955633158274588;
    msg.pitch_min = 0.4947801460322092;
    msg.pitch_max = 0.021841117063823523;
    msg.q_max = 0.6369921438390017;
    msg.g_min = 0.3595960991678464;
    msg.g_max = 0.5381979510157365;
    msg.g_lat_max = 0.4974037370888462;
    msg.rpm_min = 0.3046780409696954;
    msg.rpm_max = 0.9936310505108357;
    msg.rpm_rate_max = 0.08629032057862329;

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
    msg.setTimeStamp(0.2783887530059318);
    msg.setSource(41190U);
    msg.setSourceEntity(42U);
    msg.setDestination(51698U);
    msg.setDestinationEntity(225U);
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 155U;
    tmp_msg_0.op = 193U;
    tmp_msg_0.request_id = 14265U;
    tmp_msg_0.plan_id.assign("LKWCVFLOEOZKQFUYPDXEJSRFAXUFRDZFCOFABQZKZGUTLQSGDKXFRWJHRMKHKTOCKMHTEPHPBNTFILWGPWMTXPPCEJXLGDHYYSYQODJOUVTNQFXPLRBWNQNALDHZQCOCASUHTGOXXHDWMGJLSDRBNVIRVTCUMPYNZPVMGAUUMEEHZCGXASDNKCGFVJSGLEEIIRBNSIBPKAZBYIMKJWTQAJJMZVYQMIHVR");
    IMC::AutopilotMode tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.autonomy = 201U;
    tmp_tmp_msg_0_0.mode.assign("DTONSQULKMORPHYBNFUWQMJYWJLTDZTBGQKBLXADKCJCWUESTIM");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("RKQVUSGTQUTQSSRBCHPNUYPCODPZIKRAXAAZGKMGVW");
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
    msg.setTimeStamp(0.8825491401067524);
    msg.setSource(63289U);
    msg.setSourceEntity(253U);
    msg.setDestination(47683U);
    msg.setDestinationEntity(135U);
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.011080191863139466;
    tmp_msg_0.type = 196U;
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
    msg.setTimeStamp(0.2664415336457868);
    msg.setSource(13371U);
    msg.setSourceEntity(10U);
    msg.setDestination(32306U);
    msg.setDestinationEntity(226U);
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NMFYUQMNNXZMWMDKYWCNXRYANUGSKJIPXQKISCICOPXNBJVWSAGCTPXGHABYTLOEVPXXLEMONXDKBFJGLDLSFXRBKPVKBZRTUIVGMJQGXPDIJBWGQYJZDVATAYHFOEMTWUYFUBGFTORFGEHBEYENBLZOSIECZBZQTISNRRSLWFJWKRKSMKDIGAQAI");
    tmp_msg_0.attr_type = 103U;
    tmp_msg_0.min.assign("EGQZFNKMKEUJCUFZBFASTIXLLVRHMJEMABNEHPJXKOYGROYQSEROIHBJXLJXACXDFDSUSHFICVPOJBLISAOTSIHJRMZWKVWRHXPLSTHPVAREDMTWWRBNBRQDEXDSKDNVZVODZMNRHNUOVTYPGMCC");
    tmp_msg_0.max.assign("PAXNTBBVOHAO");
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
    msg.setTimeStamp(0.08873377925548998);
    msg.setSource(20203U);
    msg.setSourceEntity(142U);
    msg.setDestination(8831U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.8232770298971174;
    msg.lon = 0.9904849321374927;
    msg.height = 0.6236907987947925;
    msg.x = 0.5411566782230312;
    msg.y = 0.9409015111577423;
    msg.z = 0.8553846408139629;
    msg.phi = 0.9864086827828513;
    msg.theta = 0.5398063186652878;
    msg.psi = 0.1714755680775646;
    msg.u = 0.3303833220058833;
    msg.v = 0.7597494859734557;
    msg.w = 0.6454905100119387;
    msg.p = 0.5844176992972775;
    msg.q = 0.34791472010452773;
    msg.r = 0.32466860035415046;
    msg.svx = 0.14088500942121052;
    msg.svy = 0.6678427237270138;
    msg.svz = 0.2548080567204811;

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
    msg.setTimeStamp(0.6624807884667625);
    msg.setSource(41739U);
    msg.setSourceEntity(15U);
    msg.setDestination(15235U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.45375276409974163;
    msg.lon = 0.7782404840577953;
    msg.height = 0.33933773480207663;
    msg.x = 0.8501468022168285;
    msg.y = 0.8422018442017684;
    msg.z = 0.21386057840295758;
    msg.phi = 0.7588308679490952;
    msg.theta = 0.5722575742024779;
    msg.psi = 0.8644711635955236;
    msg.u = 0.06254071984421317;
    msg.v = 0.704590055226015;
    msg.w = 0.7282100466165168;
    msg.p = 0.44523191765418635;
    msg.q = 0.564993121497686;
    msg.r = 0.47881862223154903;
    msg.svx = 0.7072012424554375;
    msg.svy = 0.40031355540826585;
    msg.svz = 0.13440705661029295;

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
    msg.setTimeStamp(0.4290011954427472);
    msg.setSource(41298U);
    msg.setSourceEntity(124U);
    msg.setDestination(34855U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.6613889536210995;
    msg.lon = 0.5733741264486972;
    msg.height = 0.10548989459942082;
    msg.x = 0.4127816079934209;
    msg.y = 0.8722752765482733;
    msg.z = 0.4589232150440643;
    msg.phi = 0.26697647724204765;
    msg.theta = 0.5911614288375738;
    msg.psi = 0.17760349045208468;
    msg.u = 0.3069930834473278;
    msg.v = 0.10412088459643043;
    msg.w = 0.49106100827090715;
    msg.p = 0.6584526833873823;
    msg.q = 0.2855111609425851;
    msg.r = 0.10723646312152346;
    msg.svx = 0.6038633574310146;
    msg.svy = 0.003445691445948862;
    msg.svz = 0.0021419560722157893;

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
    msg.setTimeStamp(0.9295748055203243);
    msg.setSource(28902U);
    msg.setSourceEntity(42U);
    msg.setDestination(38708U);
    msg.setDestinationEntity(22U);
    msg.op = 78U;
    msg.entities.assign("UQOZMQSAHXYWWKRKORWZELIJXUQAPCWOJVENFQXESFUQYSEVHPUFDDIEBCHDWFZWONCVIJWOGFXNXXFPGTNRIMHGXKIMJULBBJTKUMVCSNIHSEBGGPJDHRYBRACZDEKDLMMOIMKLWGWCUTIQGSMYVHGAKXVDWJJSSPTFAYMCPLVJNYADUEPTVCZPVGCBNLQEZRBHEFHLDAZZRALQOTDNKRCTFBBIZNQOMYLBLQFHRUY");

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
    msg.setTimeStamp(0.23773713894249693);
    msg.setSource(53750U);
    msg.setSourceEntity(74U);
    msg.setDestination(43397U);
    msg.setDestinationEntity(131U);
    msg.op = 109U;
    msg.entities.assign("VNSOZPNGNWZHLRPFUAWJAPBXCXLOBCXQRMQISFXNQUOFPADVBEVQDJSTITYMWPNYMLANACUBGXMFWYVKDINZUDXTRNWTKHYFGPVYFBLJQNDCRLOJEISGGTHVJJPSHHXSTSGQODCDXIULEIWVYTIRRQGEABGRASMX");

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
    msg.setTimeStamp(0.8358817249166233);
    msg.setSource(63099U);
    msg.setSourceEntity(88U);
    msg.setDestination(33855U);
    msg.setDestinationEntity(238U);
    msg.op = 130U;
    msg.entities.assign("BDDVTQBMGFSXNGHXUGLWNCLMHQUUSZBNLFRLKFFLEFEEMOMPXSVRGKCHJFKTABIKKLGNRUUVODCEKKXYRBYOIJFKPEQBTYGAWJTAJQXDQICQSHSQNMVLGWVOWUACXYUTZPOHZNNMZIEADFJEWSSIRCYJOLIEROUMMWJPVFYHESAVICRCODWBHJPDZJSHZETOIJXYVTGXDYDPFAQBZRWQZVCMLTZNLXWHMVDSKPNWPAIPKGTRPBGACAOUIYNXQY");

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
    msg.setTimeStamp(0.8436976451536768);
    msg.setSource(14301U);
    msg.setSourceEntity(173U);
    msg.setDestination(6301U);
    msg.setDestinationEntity(22U);
    msg.type = 64U;
    msg.speed = 59854U;
    const char tmp_msg_0[] = {-91, 5, -104, -74, 53, -64, -71, -123, 0, 29, -59, 115, -62, -76, -85, 52, -52, -50, 91, 29, -41, -102, 50, -77, 64, 50, 25};
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
    msg.setTimeStamp(0.34646021823889717);
    msg.setSource(33910U);
    msg.setSourceEntity(246U);
    msg.setDestination(34947U);
    msg.setDestinationEntity(243U);
    msg.type = 120U;
    msg.speed = 41088U;
    const char tmp_msg_0[] = {-73, 83, -41, -42, 17, 125, 34, -59, 88, -116, 86, 118, -30, -24, -12, 42, -9, 60, -76, -34, 36, 19, 98, -87, 31, -75, 64, 100, 29, 115, 20, -42, -52, 16, 103, -5, 24, -120, -113, -11, -42, -57, -47, -113, 68, 88, 122, -5, 107, 101, 24, 78, -17, 77, 79, -30, -68, 79, 16, -125, -39, 34, 18, -80, -112, 13, 99, -15, -75, -125, -119, 27, 117, -113, 89, -79, 49, 28, -18, -52, -75, 86, 23, -113, 2, -96, 52, 124, 115, 106, 47, 89, -57, -121, -33, 43, -61, -24, -74};
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
    msg.setTimeStamp(0.8783572950078018);
    msg.setSource(22741U);
    msg.setSourceEntity(173U);
    msg.setDestination(9397U);
    msg.setDestinationEntity(186U);
    msg.type = 170U;
    msg.speed = 54403U;
    const char tmp_msg_0[] = {3, 126, 90, 125, 62, 78, -30, -39, 117, -66, 68, 41, -89, 119, -14, -52, -22, -42, -113, -2, -62, 5, -123, 90, 104, 7, -124, 123, -50, -95, 86, -51, -114, -106, -105, 121, 41, 59, 55, 20, -14, 123, 95, 63, -29, -89, -116, -16, 42, -84, 122, 27, 62, -38, 116, 58, -45, 60, 80, 73, -12, 67, 3, 32, 27, -36, -107, 36, -97, 14, 17, 41, -83, 111, -63, -73, -27, 3, -21, -74, -52, 41, 26, -105, -108, -46, -91, -67, -118, -127, 119, -120, -93, 55, 72, 29, 112, -64, 69, 65, 71, 84, -95, -105, -84, -73, -48, 6, -97, 4, -44, 117, -81, -118, -48, -113, -104, -37, -42, 7, -98, -75, 53, -46, -14, 80, 19, 50, -97, -122, -106, 95, -81, 74, -26, -30, -10, -50, -91, -109, -116, 101, -15, 5, 24, -15, -66, 116, 35, 102, 92, 40, -32, -30, -71, -70, -70, 116, 113, -50, -110, 14, -100, -128, -93, 17, 48, 38, -112, 104, -122, 111, -78, -13, -12, -127, 50, 69, 111, -85, 111, -8, 66, 34, 112, -125, -122, 61, -74};
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
    msg.setTimeStamp(0.0826680990916373);
    msg.setSource(15658U);
    msg.setSourceEntity(155U);
    msg.setDestination(12930U);
    msg.setDestinationEntity(155U);
    msg.op = 69U;
    msg.tas2acc_pgain = 0.6138612345551349;
    msg.bank2p_pgain = 0.765516759921585;

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
    msg.setTimeStamp(0.5031909489233285);
    msg.setSource(42206U);
    msg.setSourceEntity(82U);
    msg.setDestination(27733U);
    msg.setDestinationEntity(125U);
    msg.op = 208U;
    msg.tas2acc_pgain = 0.2626803227469169;
    msg.bank2p_pgain = 0.24336581434429472;

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
    msg.setTimeStamp(0.2663582362641955);
    msg.setSource(7686U);
    msg.setSourceEntity(120U);
    msg.setDestination(24742U);
    msg.setDestinationEntity(158U);
    msg.op = 21U;
    msg.tas2acc_pgain = 0.7468834796793826;
    msg.bank2p_pgain = 0.059038403097629755;

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
    msg.setTimeStamp(0.6986597742707492);
    msg.setSource(38552U);
    msg.setSourceEntity(247U);
    msg.setDestination(6879U);
    msg.setDestinationEntity(213U);
    msg.available = 3310088325U;
    msg.value = 216U;

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
    msg.setTimeStamp(0.569697447883311);
    msg.setSource(14732U);
    msg.setSourceEntity(178U);
    msg.setDestination(8610U);
    msg.setDestinationEntity(214U);
    msg.available = 2039301631U;
    msg.value = 72U;

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
    msg.setTimeStamp(0.9422388208378808);
    msg.setSource(10839U);
    msg.setSourceEntity(223U);
    msg.setDestination(41208U);
    msg.setDestinationEntity(203U);
    msg.available = 1619675419U;
    msg.value = 163U;

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
    msg.setTimeStamp(0.07302659483407425);
    msg.setSource(55422U);
    msg.setSourceEntity(64U);
    msg.setDestination(37963U);
    msg.setDestinationEntity(189U);
    msg.op = 206U;
    msg.snapshot.assign("WCJNSFXSJQHOLPCWNYYLGHKRBDGCFPBEZVRJVRBOPEBMVTIJEKNWANHLHMHSBCDDELMKQTKXBMI");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 9U;
    tmp_msg_0.request_id = 57489U;
    tmp_msg_0.command = 60U;
    IMC::Elevator tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 15697U;
    tmp_tmp_msg_0_0.flags = 228U;
    tmp_tmp_msg_0_0.lat = 0.4460267786191182;
    tmp_tmp_msg_0_0.lon = 0.2185150878624239;
    tmp_tmp_msg_0_0.start_z = 0.5938221189389302;
    tmp_tmp_msg_0_0.start_z_units = 26U;
    tmp_tmp_msg_0_0.end_z = 0.9556812006461959;
    tmp_tmp_msg_0_0.end_z_units = 254U;
    tmp_tmp_msg_0_0.radius = 0.24339520871352938;
    tmp_tmp_msg_0_0.speed = 0.17828752243510382;
    tmp_tmp_msg_0_0.speed_units = 94U;
    tmp_tmp_msg_0_0.custom.assign("TECXBVMYIIKDMZUHNRGBLKKPCTFZJJNHZFHGZTWHVFPEATZNTBOSIYFRALSUZWLPOGRNOMGXWKUZOABXXJOOMOKZDCSUJTDYWMDMIAVCNUIADROMFXWAEUDXPQJDQSGKQXANVFHCLEKJGEMRSCNP");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 21030U;
    tmp_msg_0.info.assign("PRHASROSAGEJOIKHCUGNBRTURYWKBPLPJELTGPTFQBNCMMOSIHDXHGHYOAVIWMYSLZJFWXEZZQZXUQANBAREFQPIAIKBHYDJTTDGLAJKXDUDXMQZXGYUEYMLFHGUSTTUXKFLVAXAEOVBWPTENBNRPDARUCYO");
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
    msg.setTimeStamp(0.5136315309322715);
    msg.setSource(3484U);
    msg.setSourceEntity(38U);
    msg.setDestination(54173U);
    msg.setDestinationEntity(16U);
    msg.op = 58U;
    msg.snapshot.assign("BNVJGEHQGUTSYDJRLTQQBHBWRIXQPOVJWVUDCNPMMHCEAUTZKFRFVHRLFIXKOBABPFXDAWMIIFUHBIN");
    IMC::JsonObject tmp_msg_0;
    tmp_msg_0.json.assign("EIONKVVFXTGFEIXCMHZNUAZXCGXIVTJKBBNVBEAVUQEUKIZRHUXRIHLJTRSFGZLQQKMFCFJJTSQVQPSANFDJHUNSNGTOWIQ");
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
    msg.setTimeStamp(0.7238434792545569);
    msg.setSource(4355U);
    msg.setSourceEntity(134U);
    msg.setDestination(24960U);
    msg.setDestinationEntity(245U);
    msg.op = 39U;
    msg.snapshot.assign("KFMDPCADCPUKVGRXYJWFHZUBSYLIUJXLESVWLHDDTMYWFZTTOMFIHTXVGQXPYDICEVUFOJORYOAZKMIYNKTCNPGEHKCQHENIRVGREYQVHGAHBSEHUOKROWNZMSFCRHWDQSLENLPAATDYNIVZYBJFJWPGZXVLBJHBQIAUTQOQTIIMWXUZAPIGVXSNGFRBFGZOSLXSEQDAMBSUKBNYJXP");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7313669496061797;
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
    msg.setTimeStamp(0.7778452163218523);
    msg.setSource(38387U);
    msg.setSourceEntity(1U);
    msg.setDestination(57342U);
    msg.setDestinationEntity(155U);
    msg.op = 131U;
    msg.name.assign("JKTMLCRBVLTGZAOJPJISSCMWHMJYSFFDUPGKQYPODNVIWNUHNAKAVGMVAJXRUXAUPLZOSNGOUZCXFMCLXCCLNFQQXBINUTNLBCXLAJQKAKDDSGHKZRQWRKUWEEPBYSLRAIBODDYDRJDTUPQSUHYPRIQIOEEMGTOKVHIILGOQWXBYAMYWHNHFRDJEZCTFWZEFJCVSYYEOJVZXNKEAPTPYHVDUGNXIWMWPBFBZITCFEBZOKQBXMSVHREFS");

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
    msg.setTimeStamp(0.533172147720092);
    msg.setSource(51994U);
    msg.setSourceEntity(21U);
    msg.setDestination(24330U);
    msg.setDestinationEntity(72U);
    msg.op = 58U;
    msg.name.assign("HRRVATSUGPYRSTTBDVLDCUUWMJRBHXXFOPBDAWGQFJJST");

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
    msg.setTimeStamp(0.6870981835874002);
    msg.setSource(2365U);
    msg.setSourceEntity(34U);
    msg.setDestination(10671U);
    msg.setDestinationEntity(153U);
    msg.op = 127U;
    msg.name.assign("WNARAVUYEMRSFHVIWTNCYCLTEGLDISLGKQFGPOTVHXCQXBANRKDMHISSJPTIKKPNLZOYHSCCALUZXPZGRFTHOYAIMWLXCPBPSAEXAQBPMKDUZCIIDPHUEXVVSJOTZSAGJMWTRSJTITERLBROGLHSVNGKAFDMMQWMQFDVQDFYXOCNOAONYLHVZEBIKBGEJBWJDQJ");

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
    msg.setTimeStamp(0.16730944116514568);
    msg.setSource(12391U);
    msg.setSourceEntity(127U);
    msg.setDestination(41136U);
    msg.setDestinationEntity(207U);
    msg.type = 207U;
    msg.htime = 0.9001997826200893;
    msg.context.assign("NVIANJSZQHMFWFIKJTHCMVYUCLESGPRRSOYEKLXZGWQLOAADZHSITVOZZVXEVRCMAPAPRVTZRGQJKTMBJCLDYWAJLUWFOUQDO");
    msg.text.assign("QXFKKICMICEUOFSMYBTGWFWGYXCOPAAJVNWKPMRBWIBQTDELEWZNLFIUNTISUFVHZIYVJJJWGDQJCDANVYFLRPPXZZRAOGXRRZMMGORSVWZEUVJFPQBBZMJPIQEOYBSTSAEKAPDLBDQCAOCZTHYIDRKUOU");

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
    msg.setTimeStamp(0.5467630988745551);
    msg.setSource(34490U);
    msg.setSourceEntity(144U);
    msg.setDestination(3636U);
    msg.setDestinationEntity(162U);
    msg.type = 93U;
    msg.htime = 0.739375395245439;
    msg.context.assign("UUJYBWGOGPEUCHWPCANSXWVGXTRTNSKXMRVANWCKRYJZYQODFIPZVBLFOXUMHICIHIXDTJGZARCWDNVJAAJMWYOMARFVBSDLEFPHUHLKOOTMPDGQHRCIOVWKSQKQMNBKISGPDCEUNQYLLDOXXPTOBMNLUUBHICPNEAJMQZEXQZYQESGHBBKUBZNTVCHXYLYESIJYKJK");
    msg.text.assign("XKKDSRTXUPPZHJKIKBFHBGESFXYPIQUDBLKYFCHRQDZXMNTAXPRUEWMZXDPYVCYQXPNXXFFVWLYSECGRWKTAVACTJZIUSUSTFLITAOLMKAVSRKNHDGAJSGIBHIRWQAWEEJJEROCPGGECYOOGQJGVL");

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
    msg.setTimeStamp(0.7952692392116332);
    msg.setSource(17618U);
    msg.setSourceEntity(127U);
    msg.setDestination(54711U);
    msg.setDestinationEntity(194U);
    msg.type = 31U;
    msg.htime = 0.3453220565649011;
    msg.context.assign("FJTXWUBYYNGEVTFNODSMZIJVVXGFVTHZFRHDWAXXRZIPLLHUGKDSMEIFKVLEYXIVAOEMETGLQSCSURMNUNQQITVBKBBCNLSCYFWDLZXZEXQRPTQAIJSTFODCJYZHJONHCHRNZVQKBDRPNWGXDHPOPDOWJBACHLQYNGTQLCAGMROHVQMZXPUUOLWYZPMMGFRYUMPJYJJKLKWRDBOZEICBEWSUTBAOKSPGUR");
    msg.text.assign("JTGYZOPYPHTRMTGBELJDFAUSHLZANIRBWPCXJIRTIPYPEOOWVYAHTGYEISPDMWLJDHWBWXZUWFFPQMCFHQCRXJUKAUKWRTBZTAHFEUNKJZQFWVODMPGOGCG");

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
    msg.setTimeStamp(0.7539268343875083);
    msg.setSource(7173U);
    msg.setSourceEntity(79U);
    msg.setDestination(14871U);
    msg.setDestinationEntity(76U);
    msg.command = 45U;
    msg.htime = 0.6873948730317097;

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
    msg.setTimeStamp(0.48441786699774936);
    msg.setSource(20499U);
    msg.setSourceEntity(243U);
    msg.setDestination(56925U);
    msg.setDestinationEntity(229U);
    msg.command = 219U;
    msg.htime = 0.6355770761046877;

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
    msg.setTimeStamp(0.4526358965842575);
    msg.setSource(46810U);
    msg.setSourceEntity(190U);
    msg.setDestination(41724U);
    msg.setDestinationEntity(150U);
    msg.command = 164U;
    msg.htime = 0.9743200399296189;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 123U;
    tmp_msg_0.htime = 0.6348417107840538;
    tmp_msg_0.context.assign("ZSRSFYGFQYGJEIHMSBBRQOTANQLNOPOGLXEQKYMKZORSYJCPIGUGEQKSIDKDZJBXNSIFEBNYRPP");
    tmp_msg_0.text.assign("IBTETPJERQBQJMQKTNQEZDXUFQSCQGDCYESKOXTNULHPDMOBHATDXOBWSWQYFKVRQOYBAGTEPSHTVXBBFISHEGWWMCMGVZOWRVZZIPVCWVSINOJYOCRYOVCQKREDUNKULZRIFDETVGUXAZKFTLREUSMUFIWUEWPHNGAKAHXXUGMUAGJZNFYZLPBFAYHLLCWFNPGXPORJDIDXDKTBZ");
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
    msg.setTimeStamp(0.42418295621785196);
    msg.setSource(982U);
    msg.setSourceEntity(13U);
    msg.setDestination(45722U);
    msg.setDestinationEntity(221U);
    msg.op = 34U;
    msg.file.assign("FBWIUVTTMGQXMAGYDNOZISPLYWQPEXUPSUOAOGFIKSVONBRFIOKVJDUWEPGUTRXQOVTJAZNMJNMBRMANPZFKNZIJRDTCACLUISXYJYXVVUIXGNTOJGYLIAADJWATRHKQFQTDDHZGXFCEQEYLBSERSPQWCSJVOHMQBHPVEDJELFQCKVBRIZXZUEUIKELNNWKZWYZWMYS");

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
    msg.setTimeStamp(0.10130101041459727);
    msg.setSource(369U);
    msg.setSourceEntity(156U);
    msg.setDestination(62396U);
    msg.setDestinationEntity(48U);
    msg.op = 174U;
    msg.file.assign("CXGZDPNQENRQLIMRUCALCCEWBRSAQBSGUPZXBWYYJQQZATZVEJKLWTAJVFUIHDYOKKQYOBNVUDFZUVOBIZERPWYYINGIILUKHMXKCHXEOTYVOUNTPDFPVCHMPGHOUXTBBRQGIXHKNWFFXTYJMEPKNDJLMZDKDOAZUVBJGSMNLRVXCCFHZASTBYKERKPHWRW");

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
    msg.setTimeStamp(0.7521487172710344);
    msg.setSource(19348U);
    msg.setSourceEntity(71U);
    msg.setDestination(862U);
    msg.setDestinationEntity(135U);
    msg.op = 202U;
    msg.file.assign("CBTVXPDSPUCVYZARSCZEMWWZLBLJFBWKUWIWFBILFTJSRIFMKC");

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
    msg.setTimeStamp(0.09618475807136417);
    msg.setSource(54824U);
    msg.setSourceEntity(219U);
    msg.setDestination(56415U);
    msg.setDestinationEntity(110U);
    msg.op = 242U;
    msg.clock = 0.816224846459421;
    msg.tz = 28;

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
    msg.setTimeStamp(0.5219393919298748);
    msg.setSource(64860U);
    msg.setSourceEntity(130U);
    msg.setDestination(53031U);
    msg.setDestinationEntity(201U);
    msg.op = 83U;
    msg.clock = 0.3875674983158607;
    msg.tz = -126;

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
    msg.setTimeStamp(0.17258584111815978);
    msg.setSource(53306U);
    msg.setSourceEntity(55U);
    msg.setDestination(20279U);
    msg.setDestinationEntity(240U);
    msg.op = 98U;
    msg.clock = 0.5056368900636383;
    msg.tz = -123;

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
    msg.setTimeStamp(0.031716748298944886);
    msg.setSource(63988U);
    msg.setSourceEntity(199U);
    msg.setDestination(778U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.5243323067027456);
    msg.setSource(6036U);
    msg.setSourceEntity(124U);
    msg.setDestination(6229U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.9482923287545137);
    msg.setSource(8800U);
    msg.setSourceEntity(201U);
    msg.setDestination(25779U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.3664495669743063);
    msg.setSource(18327U);
    msg.setSourceEntity(47U);
    msg.setDestination(42849U);
    msg.setDestinationEntity(95U);
    msg.sys_name.assign("ANTUOHYEJQKLIUWRATGOZICGYZNXEUFYSGMYPMPLEKZSCKEZMHNXLDWGUPNWMRXMOBXWFNKNPBHCPKRICQGFKYVJEBEDYBIURFKEJDPOQTCMLSELQQGGWEZSH");
    msg.sys_type = 131U;
    msg.owner = 14507U;
    msg.lat = 0.22178985129052187;
    msg.lon = 0.8634383329262495;
    msg.height = 0.17103895302133798;
    msg.services.assign("HSLDAXUQKCFJLKVEPHRIBAOMSJCSTRKTNXUNXUNJZQWNRMLOCQVDMYHKRNTTTNZHIFUCHDMYLTFZMOBABWMPGOBYTVUNPRSYKSLDVEWTJDNXYOHEGYEWCOZQIUVQWYEOHGLFSQSYGHXJWKXYZRNLKAAK");

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
    msg.setTimeStamp(0.5666548542822601);
    msg.setSource(6067U);
    msg.setSourceEntity(64U);
    msg.setDestination(20931U);
    msg.setDestinationEntity(194U);
    msg.sys_name.assign("WTFALXBCPCEWKJJSVLMPGUGMJETWZLGBANBEWDFAIMEYQSKNYBDIDZTUKQSPYUQGDVEFFJPNYNWNOLGXLRIRPJSHDVAHJOMC");
    msg.sys_type = 6U;
    msg.owner = 46647U;
    msg.lat = 0.4777529151372065;
    msg.lon = 0.9718117696631737;
    msg.height = 0.03251039751132179;
    msg.services.assign("YUKQGJEIUYZCNRTPYTCMLDRQFVKXGOUMDTPKBHFMGMOXSYPHWBWEKBCUKFMFRZOXAIVFXFYQLRUKHWCAGTKJJMWBOEADZJRALNIPEXKIQFDCXLOSMPQADTKDDHKYTRGBSJEGGQIAQLERNAQSVNAUHUOCBVQGSANEOJVTZQDLBXTJBIZWWRNLEVONMLCEXPXYORDYVMVFZYPBWU");

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
    msg.setTimeStamp(0.6025868859090118);
    msg.setSource(20284U);
    msg.setSourceEntity(231U);
    msg.setDestination(64711U);
    msg.setDestinationEntity(229U);
    msg.sys_name.assign("OHBGXTEOUARPQJDZTJWUHFDNKHCKEBZRGCMEXLPHEIKKQIKUXNNHRNYAFNSDUALJGMMDZMYLRYUIIEWPVVLSJDVDKQXRYOAZENWIGDQGUPUCNMHBAVFLFSOGDMREXRIJP");
    msg.sys_type = 179U;
    msg.owner = 53136U;
    msg.lat = 0.814933477878127;
    msg.lon = 0.24409949598643743;
    msg.height = 0.606884575675388;
    msg.services.assign("XNKWNGUQTMGAVHMROYTJEL");

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
    msg.setTimeStamp(0.3329503669409054);
    msg.setSource(7865U);
    msg.setSourceEntity(17U);
    msg.setDestination(63840U);
    msg.setDestinationEntity(221U);
    msg.service.assign("LKYGALBCHXWVDGIRXWKPIFYDEBIVYYZCFYCNACOTBFSKQTKTJQOTKTOHDNPPJVVZJMSSANNDGTOLZAQUBIKVNXJUEUSOKXLZMLWRXDOOVHMLYXJGYLF");
    msg.service_type = 134U;

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
    msg.setTimeStamp(0.8498382059622392);
    msg.setSource(57762U);
    msg.setSourceEntity(139U);
    msg.setDestination(56834U);
    msg.setDestinationEntity(118U);
    msg.service.assign("TLAVWPGKWZGTWJDIARSNZHWFWBMMBCMCWRGOYSDPPXPKIUONMIHQKGQRATMDXYYTDTIDASMBAOYIKPSICKJNWOIPUXADJRBUPUFXQMUQWKATOJVZLBXC");
    msg.service_type = 204U;

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
    msg.setTimeStamp(0.3075358267745112);
    msg.setSource(10470U);
    msg.setSourceEntity(198U);
    msg.setDestination(55425U);
    msg.setDestinationEntity(77U);
    msg.service.assign("MDWYBEEXQKVQVYOWWEMSYUWNUAHDIABMPBYJGHPVBVLEZZAJRBJDUQLOOMHFSOPJEOFAKCJCPVFFKQMGIIMGYCWTXMCDSDEXJZMVCRRFCTBYSXZWGKSSPZOZAGUQLGWJFHICTYZOVRSHXBJBDNTRHWZFU");
    msg.service_type = 18U;

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
    msg.setTimeStamp(0.9634216230707807);
    msg.setSource(18138U);
    msg.setSourceEntity(189U);
    msg.setDestination(12535U);
    msg.setDestinationEntity(33U);
    msg.value = 0.6286012383880921;

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
    msg.setTimeStamp(0.11990560272167994);
    msg.setSource(52131U);
    msg.setSourceEntity(73U);
    msg.setDestination(52594U);
    msg.setDestinationEntity(200U);
    msg.value = 0.5925880145683667;

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
    msg.setTimeStamp(0.9802799952252869);
    msg.setSource(17123U);
    msg.setSourceEntity(33U);
    msg.setDestination(24557U);
    msg.setDestinationEntity(223U);
    msg.value = 0.09786120960193856;

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
    msg.setTimeStamp(0.217675866890797);
    msg.setSource(19830U);
    msg.setSourceEntity(230U);
    msg.setDestination(19734U);
    msg.setDestinationEntity(41U);
    msg.value = 0.3098072384482681;

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
    msg.setTimeStamp(0.008638938379680217);
    msg.setSource(14252U);
    msg.setSourceEntity(96U);
    msg.setDestination(36629U);
    msg.setDestinationEntity(8U);
    msg.value = 0.8106930448278524;

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
    msg.setTimeStamp(0.2237080744547908);
    msg.setSource(18731U);
    msg.setSourceEntity(175U);
    msg.setDestination(20797U);
    msg.setDestinationEntity(61U);
    msg.value = 0.8207591771678723;

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
    msg.setTimeStamp(0.10240300946086556);
    msg.setSource(59995U);
    msg.setSourceEntity(244U);
    msg.setDestination(27032U);
    msg.setDestinationEntity(206U);
    msg.value = 0.6063714349191341;

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
    msg.setTimeStamp(0.07437995677617526);
    msg.setSource(19681U);
    msg.setSourceEntity(129U);
    msg.setDestination(59540U);
    msg.setDestinationEntity(84U);
    msg.value = 0.9705664855676273;

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
    msg.setTimeStamp(0.6932438088243797);
    msg.setSource(50654U);
    msg.setSourceEntity(145U);
    msg.setDestination(18806U);
    msg.setDestinationEntity(26U);
    msg.value = 0.8559805204156481;

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
    msg.setTimeStamp(0.6579804009999404);
    msg.setSource(65392U);
    msg.setSourceEntity(161U);
    msg.setDestination(47533U);
    msg.setDestinationEntity(110U);
    msg.number.assign("HLTVVUYIHXMDCFMHGNJEHITPPFPOGNCJQMEBMKNRKALCFFJEDJTDMSGQBWNJVPTMNGTSRSUUWXQVYCIDVJYOKINJESLGVKQUYRLFAWHDLJZQHGRBW");
    msg.timeout = 20414U;
    msg.contents.assign("CIFFPOTERBZSYARJVMAVUJPRNKVWGAITQKLOHJXMKQKWPTUQJSWKRMUMTQDUNPNITGXNVNVQSADYJLZGWHHGYRFQYLEIOMUACTVKYFPIZGEFUDWOZVBKNDBGSRPSRIBHWUZRUXADQTGFLEDSMADWJOBMFPXBUPXYGWACHDIVXSECPILEFJWNCSCBHZECVTZIIYZLRB");

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
    msg.setTimeStamp(0.9643601269661393);
    msg.setSource(10830U);
    msg.setSourceEntity(191U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(78U);
    msg.number.assign("RRWPZELDCGQYAEAKUEDXGGIMJMAXXTNCXGYMTRSNCMNHMPUBRBJUFJHZUAVFLHLTPADBWKBZFXPLCIQCTQBPHOGFELJZNQFDVGXJVOINPHPTKMQDHYTRGMWHWARIVKGQOVCGIZSUVOIOEXLOKKNEBIXFHYPOBJEKUEICCGYLSMBDSOYRFTNCJUN");
    msg.timeout = 10427U;
    msg.contents.assign("NKSBOKMVEJOOLIYZOGRYVINTBSQ");

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
    msg.setTimeStamp(0.024675757741268622);
    msg.setSource(47834U);
    msg.setSourceEntity(63U);
    msg.setDestination(2987U);
    msg.setDestinationEntity(185U);
    msg.number.assign("LTXBZFIMQYTDQCIZEQGWZCJGNCTASZOAYDPKPSKVHMJTBLUGOFRLDVSUJCHWTZWRKLZDEEJPRGYYOJHVBVQYAMCQZXKEDFSDSRSMTVUIUQUOXINXNNNCHWOGXLEGKAQJFBJLKEFUNQAFIHOIKGLJMSEMKJYGNOVCXWSYWPZKVPMYBHKSLCRBPBREFHLDGBHHTMOJLDWTTWQHOWUAAYFNYXATZIUEAZ");
    msg.timeout = 30052U;
    msg.contents.assign("DVGDMJUKBVMRIZFZDOXWPQKOYVXOZTVYNHAAIVTLDPSTHXPMSVCXDZCDXOVKWCAFOQLZMJKWHTZLNOBCAMJWPRGJFEVELKGFPQRYDJNBKUWDWRQDWBBYKAQNSQBJLCJXOAOMNZKUXHUCEZWKGRIQCSMUJNVQYNFTUIETYEGDIKYBRYHMXEBZLPSSPOCGLXTAGRLLIYEIFFEJNFEPTLGRMRHHMQWUFGCSBQXAPH");

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
    msg.setTimeStamp(0.7427167391365682);
    msg.setSource(31609U);
    msg.setSourceEntity(97U);
    msg.setDestination(57899U);
    msg.setDestinationEntity(174U);
    msg.seq = 2670710732U;
    msg.destination.assign("EVEPKHJLUMFSVRXSNVICUFLKFCIACAFKODREFXMHEPIWDDRRJWALGEZTOKTYSZYUOPPZRKZCDFGSYGOVVFUKPOWHOGTXRSAVJMMMZZXKKYXJNBJHWJCNAWSJLOSCKPNJWPAGACRUIYCNQRXY");
    msg.timeout = 14914U;
    const char tmp_msg_0[] = {78, 63, -11, 10, -16, 121, 42, 16, 19, -82, -83, -3, -51, -9, 39, -34, -50, -43, 119, 71, -60, 29, -70, 9, -113, -50, 34, 27, 38, -75, -66, -55, -101, -103, -76, 68, -31, -49, 77, 40, -60, -3, 65, -78, 58, 48, 41, 102, -80, 91, 79, 98, -110, 29, -116, -84, 69, 34, -89, -38, 109, -75, 59, -120, -89, -82, -11, -14, 28, -25, -111, -19, 61, -112, 114, -86, 38, -123, 90, 80, 9};
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
    msg.setTimeStamp(0.5415084204935227);
    msg.setSource(57358U);
    msg.setSourceEntity(109U);
    msg.setDestination(54386U);
    msg.setDestinationEntity(142U);
    msg.seq = 3793252225U;
    msg.destination.assign("BREXQCHMCDOHVKLRIVTU");
    msg.timeout = 61571U;
    const char tmp_msg_0[] = {-125, -31, 89, 8, -7, 121, 21, -102, 34, -89, 53, 82, 64, -8, 32, 20, -47, 18, -75, -87, 116, 42, -19, -15, -43, 34, -28, -95, 30, 2, -1, 82, 92, -27, 126, -84, 71, 85, 79, -96, 101, 103, -15, 91, 123, -117, 73, 122, -113, -92, 89, 14, -79, 113, 15, 52, -52, 27, -73, -111, 71, 47, 90, -12, 91, 126, -125, 44, -82, -105, -32, -91, -20, -47, -71, 55, -33, 44, -92, 30, -12, -99, -53, -6, -94, -75, 83, -116, -78, 62, 42, -59, 74, -77, 101, -27, -46, -9, -10, -10, -110, 30, -110, 80, 10, -30, -4, -93, -67, -24, -3, 5, -71, -86, 111, -46, -95, 26, 84, 120, 126, -105, -124, 42, -93, -48, 111, -57, 99, 83, -37, -52, 43, 75, -80, -66, 23, 73, 91, 75, -27, 108, -27, -60, 65, -80, -58, 120, 51, -100, -100, 112, 29, 126, 13, 60, -11, 7, 96, 25, 37, 65, -57, -122, -101, -117};
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
    msg.setTimeStamp(0.26101519451597366);
    msg.setSource(42118U);
    msg.setSourceEntity(163U);
    msg.setDestination(26552U);
    msg.setDestinationEntity(66U);
    msg.seq = 2173494808U;
    msg.destination.assign("VJPPWSXCWFOEKBFAJXFAFMVKYCHLVSLKMRFMVAXRHHHNPSTGPPACGCFCLQIOQFSQAEXQESJTBKOVUOTMDBNXBREQITUMLGKPQODSZVDSHJDQZXCHYNBIFLBRCJSUABY");
    msg.timeout = 19963U;
    const char tmp_msg_0[] = {-111, -24, -76, 122, 91, 116, -17, 111, 126, -123, -112, 102, -122, 112, 112, -124, 10, 70, 74, 94, 114, 1, -113, -12, 70, -28, -28, 116, -82, 0, -1, -47, -3, 77, 71, -89, -59, 72, -5, -20, -46, -17, -9, -34, -110, 42, 50, 125, 18, -80, 1, -21, -63, -88, -34, 99, -32, -72, 112, -81, 122, -7, -53, 40, -53, -85, 6, 94, -110, -20, 64, 71, -66, 84, -48, -70, -47, 0, 106, 102, -86, 17, 80, 97, -12, 78, -31, 0, 95, -24, 3, 83, 125, -30, -33, 36, -58, -90, -83, -82, -38, 96, -48, -35, -22, 126, 56, -57, 34, -107, 2, 11, -46, -79, -106, 68, -89, 81, -46, 125, 39, -114, 44, 27, 7, -56, -60, -100, -26, 17, -39, -99, -61, -39, 21, -65, 9, 60, 117, -47, -122, 18, 41, -35, -92, -40, -90, 16, 31, -47, 71, 10, 90, 88, 0, 82, 24, -126, -6, -93, 100, 87, 1, 6, 40, 73, -93, 3, -112, 88, -85, 43, 93};
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
    msg.setTimeStamp(0.6317220358531215);
    msg.setSource(58166U);
    msg.setSourceEntity(33U);
    msg.setDestination(3455U);
    msg.setDestinationEntity(151U);
    msg.source.assign("HUZUOXQMKSRQMYDSSCMRUTONIWLGDGFOMUSHYJTHJVLETNSUGTFBDAACEWDXOHFJFWGBWCIBZCAUCCQZPCRZYHOADGXXTEYFIWVPXKAZSPGNLSWRTRKLZPKRJGFXLVVSXIPMPYGAZJISZYVAMHOZCJOHZHKEYLILYRBTFMOQYTDSCWLIBRQVPHDCKDGWAKBFIINNA");
    const char tmp_msg_0[] = {82, 19, -59, 69, 58, 55, -48, -12, 99, -48, -124};
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
    msg.setTimeStamp(0.2577528505181367);
    msg.setSource(46839U);
    msg.setSourceEntity(102U);
    msg.setDestination(43063U);
    msg.setDestinationEntity(154U);
    msg.source.assign("HMSXKRALFUSCERNBMZGEYPOZDDUOQSIPDJLLASMDROMXRQOHYMTUJLQOCUBHRLWXJXMZIRBPSVJXUABZRYAEEXFLJKZFOUVYTCENQSGHBVJBKMXGDPNFUUYFTGCLMBZAOKFRJKKICWLVDWIQWVEBNYDIKRPJSTEXFEYIPNTVOHIAFJTDWGYDJ");
    const char tmp_msg_0[] = {-116, -5, -69, -33, 29, -123, -54, 62, -34, -34, -32, -69, 46, 47, -101, 86, -103, -105, 8, 13, 116, -98, 69, -78, -26, -29, 104, -16, 113, -34, -35, 123};
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
    msg.setTimeStamp(0.9758396491681199);
    msg.setSource(44885U);
    msg.setSourceEntity(73U);
    msg.setDestination(43482U);
    msg.setDestinationEntity(195U);
    msg.source.assign("AEFDKPNRVYMTBFBQQCIKUSTZIZGPDBERLQKFUIKVNNSASKCPSKKMPRMLYIZCZGWBHVOF");
    const char tmp_msg_0[] = {-63, -122, -67, -110, -114, -71, -13, 58, -104, -66, -31, -54, 41, 27, 24, -55, 105, 9, -107, 29, -9, 122, 113, 87, -36, 43, -102, 91, 25, -99, -62, -33, 116, -51, 20, 22, -107, -77, 90, -3, -67, -110, 28, -102, -80, 108, -93, -10, 56, 97, -54, 50, 85, -101, 49, -115, -65, -51, 38, 38, -63, -122, -20, -13, 70, 95, 49, -46, 22, 29, -103, -73, -38, -76, 1, 116, -28, -3, 72, 18, 15, -61, 45, 53, -26, -52, 13, -118, -46, 45, 99, 112, -107, 95, 69, 6, 85, -25, 94, 101, 2, -58, -104, 58, 45, -115, -115, 51, 87, 69, -40, -29, 47, -121, -24, 75, 63, -85, -85, 69, 86, -66, -72, 47, 68, -84, 104, 126, -99, 63, 4, 89, 33, 56, -64, -76, -36, 66, -44, -84, 28, -62, 73, -94, -55, -78, -123, -65, -111, -128, -96, 57, -18, -73, 111, -88, -70, -81, 49, 50, 11, 58, -34, -27, -19, -108, -36, 76, -36, -39, -73, 110, -66, -16, 74, 104, -66, -85, -124, 73, 76, 101, -48, 49, 49, 103, 15, -57, 59, 107, 91, 112, -53, -128, -69, 86, 24, 85, 16, 95, 110, -17, 59, 114, -71, -109, 114, -50, 40, -73, -72, -74, -102, -39, -6, -30, -86, -114, -36, 81, 96, 61, -113};
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
    msg.setTimeStamp(0.521894124616376);
    msg.setSource(19232U);
    msg.setSourceEntity(253U);
    msg.setDestination(36814U);
    msg.setDestinationEntity(84U);
    msg.seq = 1024449913U;
    msg.state = 13U;
    msg.error.assign("KDRZQHBWMYVSBFNGHWLKYADGFWLLWFXVJTVCAVASMNDPLTBNFDTBGNZQGTBTKCUWXLMJPMVDXLLEBAFMQFWIRHURTBYISYPEMEZBKBVZSEOZHRRDUHLXOJXGANKOGJERCRCYGIYJPDPFQZCKZXHLBADHGSJJMMYVXKCNTFHTZTKSDAMRTUJOXWEJYKWZC");

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
    msg.setTimeStamp(0.057164535735648836);
    msg.setSource(52482U);
    msg.setSourceEntity(82U);
    msg.setDestination(29930U);
    msg.setDestinationEntity(49U);
    msg.seq = 4081222304U;
    msg.state = 14U;
    msg.error.assign("GLUMHCTDRSWWJDGIPGSULTQJXNSYXKOKDSVKYTJUGWGHHRFLCVHJSNTNWQNYTLYRUDDEVYNZFAZLOMBFKLITFBJHDYAXGA");

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
    msg.setTimeStamp(0.2871846303093236);
    msg.setSource(30876U);
    msg.setSourceEntity(17U);
    msg.setDestination(2608U);
    msg.setDestinationEntity(60U);
    msg.seq = 2429232624U;
    msg.state = 135U;
    msg.error.assign("DLVCZDGILJLJYQYNHOWPAFMJBMXJO");

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
    msg.setTimeStamp(0.07949960537026057);
    msg.setSource(39891U);
    msg.setSourceEntity(52U);
    msg.setDestination(51314U);
    msg.setDestinationEntity(159U);
    msg.origin.assign("OPUHKMHOUNDSGMDMWNGITCRRLICLCTRAWCDNQXAVIEVBSYEKHLKLQRC");
    msg.text.assign("GHKWMZBUMZDZGCWYZETLGVFYSHQVQCQSBRZXJGMVNDSEILBSCGRUUQYDDMUVHDBYXHZKTPVCCONPPTRFWAXUQYXBZPGYSOWXFTRIBPFLGIQZ");

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
    msg.setTimeStamp(0.4770263236628136);
    msg.setSource(46505U);
    msg.setSourceEntity(108U);
    msg.setDestination(37431U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("ZSKGONMKCUZSZTRPWHYOPRIYUKJIYSNEVRBZVWHGVBIRDCOIEJLUXKJMHBAKIOYTEXDWWYBVELRFTCEGRTSAD");
    msg.text.assign("MVKORHXBTSUUADVYWUFPRGJNKCMAGXLNACQDFZOCKMAYLVJPVQXAQURLQSGDPPDWDRCXJFFHEOISEWEXCIYTKIQTMBMFRBSLBGQVFNPTVFTKEDPVNSOYHGESYBHOQKBMKREOWJPZIGSZBQZUFOZCJITATDDNJHWQISILWZSRAGWENBANBVILEPOBZVXNOGXMU");

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
    msg.setTimeStamp(0.9785035593795329);
    msg.setSource(52209U);
    msg.setSourceEntity(87U);
    msg.setDestination(53663U);
    msg.setDestinationEntity(90U);
    msg.origin.assign("UQYQNLABBGMEDWRHNASJDTQDUJFQPGOTXDELSFAJNSMJCYUKALSRQZIMVXIQQKKTNVOACWGSAZZJNZWOIZNZHEKSIMGNXXMWDKKQODOGJWNUUVXXBTDLCEGHCOLVFYRXNMAUVUCJDIVCRPEJKOPAFFREIHYHSRYBVMPHVLEUCRELFONZGP");
    msg.text.assign("GJXKZPDOXTBIKXFQEAREIAXTRIIQBLHKISHWVHTURNBZOIMOZFVUHWPVQNXSFEKRATQMUG");

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
    msg.setTimeStamp(0.9540505865128575);
    msg.setSource(10543U);
    msg.setSourceEntity(33U);
    msg.setDestination(39641U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("CEBPHNHDZDKKGDITOKWPODLCMCGLLYNTILHFVWQAXINPWFZHTLDICMRXHGWAJXJKILHAUJAANQBGZMSRISQWJRQESDMDJTNFVXEVFFRZWXAGIBRCKCKCUZYSEFPEXVPJXLMMWUVSDGJRZFOGOKBBXJVQCWKBYPQPWQGGNYSUPNUENLLMSTIKBXUYQRZGBAYUA");
    msg.htime = 0.9145975316904064;
    msg.lat = 0.7526644918157229;
    msg.lon = 0.17637653811421283;
    const char tmp_msg_0[] = {41, 70, -77, -80, 45, -65, -96, -23, -67, -90, 4, -17, -100, -19, -16, -45, -20, -15, 22, -83, -46, 102, -22, -106, -20, 43, 25, -2, 20, -29, -111, -84, -108, -53, -97, -94, -25, 101, 126, 39, -52, -56, -60, -102, -105, -21, 30, 65, -74, -6, -89, 2, -32, 101, 56, 110, -110, 108, -70, 82, -39, 82, -33, 34, -105, -110, -106, -3, 92, 121, -118, 38, 19, -52, 60, 31, -91, 36, 80, -87, -82, 60, -24, 55, 31, -39, 36, 4, 39, -116, 76, -74, -56, 95, 98, 77, 3, -76, 100, 49, 95, 64, -85, -44, -94, 81, 94, 11, -70, -84, -31, -118, 33, 16, -97, -45, 69, 37, -28, -67, 84, -54, 65, 42, 18, -33, 0, 48, -121, -61, 55, -13, 48, -117, -37, -97, 112, 65, 115, -119, -17, 60, -90, -49, -38, 14, 38, 14, -95, 104, -111, 43, 97, -112, 66, -43, -66, -5, 75, -53, -35, 19, 80, 16, 15, -113, 52, -101, 32, -16, 123, -112, -48, 97, -3, 47, 37, -94, 62, -119, -126, -51, -128, 117, -32, 48, 58, 116, 61, -72, 93};
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
    msg.setTimeStamp(0.4666131111420585);
    msg.setSource(25089U);
    msg.setSourceEntity(119U);
    msg.setDestination(19620U);
    msg.setDestinationEntity(69U);
    msg.origin.assign("UAKVORQJJJEVCLIYWNYJDAWLNLMIQSXCXSSDLEJZWIUJZTHPECGGBOAZHIJHKRSPQQAYKFEIYYKCGPNACPSRBAFICZKEFIACVDZVLNPZMTMBRTHBDXGEECAYPSMBPTSXBOJROZMAHMXSGDXIVRXWNWKJXRNUTPMNOVRUFDELBVOBTNZTILHGOISQYLHUNUWWXV");
    msg.htime = 0.05566037199262919;
    msg.lat = 0.6427382263323406;
    msg.lon = 0.9603098536442612;
    const char tmp_msg_0[] = {123, 54, -98, -109, -19, 58, 31, -36, -125, 61, -42, 32, -43, 109, 54, 122, -119, 11, -76, 124, 16, -128, -123, 16, -7, -110, -24, 78, -7, -46, 40, -36, -10, -13, -89, 14, 12, 17, -117, 116, 59, -63, 84, -88, 92, -68, 41, -50, 1, 105, 118, 122, 24, -15, 57, -25, 123, -90, -14, 43, -14, -28, -35, -2, 19, -68, -60, 68, 9, -57, 45, -14, 0, 6, -70, -51, -111, -111, 98, -56, 72, -12, 75, 11, -70, -103, -96, 29, -14, 39, 53, 39, -123, 34, 17, 83, 5, 72, -45, -41, -102, -39, 60, -99, -17, 4, 1, 37, -75, 51, 19, -38, -40, 6, -47, 8, -107, 53, 114, -20, 86, 94, -39, 68, -118, 39, -114, -106, -41, 16, -7, -38, 116, 39, -116, 15};
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
    msg.setTimeStamp(0.9473587003032728);
    msg.setSource(54775U);
    msg.setSourceEntity(176U);
    msg.setDestination(57787U);
    msg.setDestinationEntity(246U);
    msg.origin.assign("NESBZBUSKRNDQHMZODVJZVVQUFGAEWJPFDLIQWMQZOAJCNTMEMNKUITJAFXLIRPXBIPKJQBGSUMQGLDUOCPGWZLEQNSKAYIGRRGHNLGXXSYQISBTWPQPETUCJAEPVBHTFUVHYYFSRYMYYEBRRFCILWCXHMJLOBKNRUHAVZMDEOSWKHDCOFTXBDAGXLTDXBWJPTAJLHVGPS");
    msg.htime = 0.5666482276296803;
    msg.lat = 0.660725748978755;
    msg.lon = 0.2770310304152457;
    const char tmp_msg_0[] = {93, -37, -124, -121, 92, -8, 56, -102, -99, 51, 5, -73, -3, -23, 46, -89, 24, 111, 41, -66, -81, 63, -80, 51, 29, -13, -65, -43, -40, -44, -116, 111, 50, -97, -3, -125, -111, -16, 14, -73, 22, -58, -28, 96, 119, 81, 120, 12, 62, 45, 59, 50, 124, 20, -61, -42, -16, -96, -53, 104, -96, -104, -113, -41, 27, -117, -125, 111, 78, -113, -42, -13, -16, 51, 32, -49, 106, 35, -84, 123, -112, 16, -92, -78, -16, 86, -89, -24, 34, -93, 32, -79, -24, 101, 48, -52, -57, 124, 58, 12, 101, 12, -36, -114, -69, 68, 112, 45, 3, -34, -9, 43, -105, 100, -103, 11, -26, 94, 97, -106, -16, 76, 58, 121, -88, 60, -92, -86, -39, -53, 63, 112, -126, -44, -36, 70, 74, 23, 87, 19, 25, 51, -11, 29, -1, -2, 44, -89, 9, 6, -24, -37, -58, 124, -17, -46, -102, -103, 79, -29, -40, 59, -33, 113, -128, -35, 82, -74, -18, -122, -91, -103, 40, 73, 119, 62, 18, -82, 49, 97, -46, 65, 105, -125, -121, 2, 15, 34, 24, -87, 43, 16, 25, 43, 125, -54, 80, 76, 9, -113, 87, -124, 42, 35, -90, 70, -126, -19, 67};
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
    msg.setTimeStamp(0.08155333816845878);
    msg.setSource(47598U);
    msg.setSourceEntity(10U);
    msg.setDestination(739U);
    msg.setDestinationEntity(234U);
    msg.req_id = 61379U;
    msg.ttl = 2455U;
    msg.destination.assign("FTZPUAJZBAPIMXJFQTNGXUERUBDQVRBGJKBGYLQAQQUFQTCLQOCIXBAQWJITKJJWXFENCBLNSUBDFEWNGLJROSKBCXHCZYQVAKUWXVYNSREMOTMOYKNYCVJVPEGLXFHGDDRAEKBHFPESZOVMZEPNCKTUJLKOXJANYIVCHUFPBNCIZMYPHAWRDTYMDLSWZQVGGIPHXSAYLIOLMSGZWPZRTOMEDFGELNUMYFHTII");
    const char tmp_msg_0[] = {108, -23, -118, 124, -113, -94, 25, -40, 35, -51, -4, -80, 55, -46, -108, -114, 26, -12, -121, -60, -101, 11, 51, 104, 16, -31, 71, 92, -40, 63, -118, -74, 117, 106, 32, -106, 32, 79, 38, -13, 61, -22, 75, -84, 104, -114, 68, 108, -62, -28, 93, 112, 7, 76, 63, -85, -109, -48, 52, -14, -55, 122, -121, -127, -5, -73, -37, -8, 44, -12, -18, 13, 76, -22, 53, -105, 58, -56, 64, 53, 22, 104, 57, -41, 73, -7, 29, -36, 122, 31, 102, 28, 28, -12, 81, 47, 96, -5, 53, -61, 114, -82, -119, -85, -116, -18, -82, 84, 103, 8, 16, -42, -40, 121, 107, -81, 58, 74, 126, -90, 57, -89, 84, 21, 95, 86, 125, -13, 26, -96, 23, -86, 7, -72, 5, -41, -1, 62, 59, -43, -44, -8, 99, -75, -104, -53, 84, 115, -68, 70, 69, -77, -102, -17, -101, -95, -86, -34, 40, 10};
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
    msg.setTimeStamp(0.04562003405161097);
    msg.setSource(3312U);
    msg.setSourceEntity(9U);
    msg.setDestination(60281U);
    msg.setDestinationEntity(251U);
    msg.req_id = 41176U;
    msg.ttl = 16114U;
    msg.destination.assign("ZESRZKTNDUBLOVBERWLHTAQCALIVDVNKPMBISGYZZTIPZTTCFIQXCRMAAIODVKVNMAIHUAWFBPQUAWMCZKAPDXLBPMFTFTJRYOZHWLDGWWQRGMLFEC");
    const char tmp_msg_0[] = {-1, -60, 111, 8, 76, 94, 114, 55, 99, -123, -68, 85, 21, -27, 76, -31, -72, -106, 10, 56, 122, 54, 95, -80, -16, 44, -78, -55, 125, -99, -123, 26, 118, 56, 78, -76, -49, -26, -6, -107, 26, -15, 54, 38, 45, -77, -84, -89, -114, -94, 28, -110, -66, 56, 17, -72, -97, -97, 110, 36, -110, 42, -71, 117, -13, -27, -4, 97, -74, -69, 14, -55, -37, 91, -101, 79, 8, -117, -69, 85, 124, 67, -65, -55, 123, -15, -118, -93, 50, 7, 95, 68, 18, -10, -71, -63, -68, 121, -39, -90, -124, 122, -119, 15, -113, 124, 86, 6, -35, 84, 54, -35, 48, -89, -60, -21, 76, 112, -35, -43, 8};
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
    msg.setTimeStamp(0.05920407357465751);
    msg.setSource(51717U);
    msg.setSourceEntity(172U);
    msg.setDestination(37227U);
    msg.setDestinationEntity(212U);
    msg.req_id = 10621U;
    msg.ttl = 3564U;
    msg.destination.assign("FRGAIINDIWXDBPJRYYYVSRHLLMPCNXWVWNHLPKXJVPOPWEWFGWRZJXMTKUCPMIQGUEJNFQNQTPGFJSJMGZRCYGT");
    const char tmp_msg_0[] = {37, 30, 9, -47, 88, 79, 100, -85, 109, -63, -57, 31, -56, -47, 20, 85, 106, -48, 49, -111, -28, -104, -114, -84, -34, -1, 114, 12, -66, 68, -103, 92, 15, -80, -121, 23, -104, 72, 66, -121, -128, -26, -39, 113, -93, 25, 5, -21, 8, 34, -123, -28, -87, -58, 93, -51, -109, -23, -30, -128, -87, -47, 35, -56, -86, 16, -27, -108, 103, 89, 4, -78, 12, 113, 73, 11, 6, -65, -83, 5, -42, 65, 22, -61, -94, 95, 117, 104, 4, -125, 107, 102, -10, 30, 87, -58, -23, 53, 79, -95, -13, -121, 78, -68};
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
    msg.setTimeStamp(0.5688559594407198);
    msg.setSource(51369U);
    msg.setSourceEntity(139U);
    msg.setDestination(45586U);
    msg.setDestinationEntity(217U);
    msg.req_id = 8171U;
    msg.status = 7U;
    msg.text.assign("HINIEXBPNPOTIQVASMXAFYPLJJQXLNRDXVNHTQVQGMONQSERNDYJWKDTZGZKLEBWVIDSDAKHXENCMJWKMCGLWYLGFAXKQCCFPFKMIEHRBWBBDKCHSZTKGNLQGNJEZAFZTSRUCRJFYQWATJQBOBUBVWOEXCZMVAIYMOFITHTPHJLWZCMYXMDUUUDPUXSVAOHEFFTYRVXGRMOUQRKSPLTOHDY");

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
    msg.setTimeStamp(0.5303041770195772);
    msg.setSource(38213U);
    msg.setSourceEntity(120U);
    msg.setDestination(43723U);
    msg.setDestinationEntity(84U);
    msg.req_id = 50223U;
    msg.status = 254U;
    msg.text.assign("YHEVDYKTZIGSJMCNKGQFJSQAYXXLMIIDPVKSPZYOWZKUFATUUVTMJVWLUZIGPPLBBHMZNXZPEJHSHKAMADLEOCBURXFOWWUYAWSAQKORTLHRYQPJNTPDYNOTSJBPIHOQFWVNZDWWCARNPGMUEBVGQYOOJFGCBBMNPFBV");

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
    msg.setTimeStamp(0.12523697749937113);
    msg.setSource(27259U);
    msg.setSourceEntity(70U);
    msg.setDestination(16238U);
    msg.setDestinationEntity(221U);
    msg.req_id = 693U;
    msg.status = 73U;
    msg.text.assign("JFHSOKFPTCNONJJYDMTQKOUMNQTIVGVISOMNECDRHZLPEIVUYBZCBTZEHXCSUWNGMKKZBNPDXMFPREVFJPDLLREGXJAYGGSWXEHVTDSUPCDWGWPG");

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
    msg.setTimeStamp(0.9822191230189763);
    msg.setSource(23626U);
    msg.setSourceEntity(112U);
    msg.setDestination(61933U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("QELHDIROJLCYUFQGVZHWJJISEKFFPQTNTMNLPWZMMHKXIMOWUJTWZCXORRSVNUMLXGQKRWZOHBEKJNUAYXOKGWVWAOTBEMKTEDAPVHUQDXLYXC");
    msg.links = 91427073U;

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
    msg.setTimeStamp(0.4513338782110937);
    msg.setSource(22741U);
    msg.setSourceEntity(42U);
    msg.setDestination(42225U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("WNBFAEQFKEEFSEDASCTPHMWTVMHIEONXRMSQXRLIDHGUZMSGPOMGISKAZNGJGQQNIHMTPKHWFNVMXYFLGTQPYRYJOSPOELIDBKBERRDLJHOOWDJSZMCSADXZCVVUPHOROHVUGTULWYJKXYNCXCCACQJERTJDJIZAUNKQWJYLZIPIULRUIAWWN");
    msg.links = 3506380469U;

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
    msg.setTimeStamp(0.5853773130269708);
    msg.setSource(20645U);
    msg.setSourceEntity(223U);
    msg.setDestination(31371U);
    msg.setDestinationEntity(46U);
    msg.group_name.assign("IMHRJZADEVNYUJUNLIMKNXLUBHDKXIGQSEDSWRCNZBQRHIJTWKZSRTPIBDSQAXOGFXKRWTHQCXVDAQXOFSIJFZTEULCLDPMHJ");
    msg.links = 1375443750U;

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
    msg.setTimeStamp(0.00046246280169182086);
    msg.setSource(16720U);
    msg.setSourceEntity(105U);
    msg.setDestination(45470U);
    msg.setDestinationEntity(97U);
    msg.groupname.assign("NBENJNTCQCGMTOGTRBVCTASZRJDLRISPLAWKXBMXYAGPKQGPOLUNWOLHXKVFUQMMOUYMVUVGBLVIRSXBICUVAKHJSIXWYJZWUPQKHHDCAFXJFQGTLDAMXZCYBFFAUDPNSCSTIQYDQHHQPTNTENYDCOMATWJZ");
    msg.action = 1U;
    msg.grouplist.assign("DZNENKGORCBZNJAVUXHTZWMEANYCDLJZYZIAPWIIAATSMAYLLQBAIQQVUEYFYHNYTOOQJGTI");

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
    msg.setTimeStamp(0.8719390381852417);
    msg.setSource(55050U);
    msg.setSourceEntity(249U);
    msg.setDestination(10937U);
    msg.setDestinationEntity(73U);
    msg.groupname.assign("ISUJZFBUTBRWNEBILDCRXHGYWJYTOCAYHULFDUHAVRRSAPKMSGXNAIHMOUKWIEAKPQCDITDAJPVPBOLNOKEMJQLNX");
    msg.action = 140U;
    msg.grouplist.assign("MMMZVLJNCSIDUGECSHCAWAEITNZQDB");

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
    msg.setTimeStamp(0.01530774210449426);
    msg.setSource(33635U);
    msg.setSourceEntity(252U);
    msg.setDestination(29634U);
    msg.setDestinationEntity(16U);
    msg.groupname.assign("CAKECYEMOHCHJLIAPUVEADCHOREWOSWWQIVUZHGNCGFTMTNZBUXNZMJUVEWGTPIBBOMYLQZKEKYMOWRKXHBTRMSWRJOCKLOTLHKFADEZXPEPDZXUGPQISHIARUFJKVBAJDFGYKLURYVOPYIYIPZQHQLVWFHJIMIEZDRCTGBCQJBNMTBFFMSDUJCNABPANEXTUYSMVOGVVTSOQJXNDYDTLLQXLZGKNWJQXDSRDG");
    msg.action = 52U;
    msg.grouplist.assign("EFGLOIGULOSHFKIQDYXBHYTFSAXJTDPLDMUVVIIMBCUXKCUSXKUAJIDDGJFFPMGBWZNHZHCAVKHYHRJVCCNOCSJPURNNNIGCFQMJDHHMGSDOGVBAIXLWEAKCZLOEPWLQXEGLBMFWEAYSYEUSITAGFAMFZHUGPETOXJWZBLRSFHKRYMWRKBIWXWDNZEEQYBZRONZVXMOVQUQSRLPBW");

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
    msg.setTimeStamp(0.2604273667681051);
    msg.setSource(59700U);
    msg.setSourceEntity(45U);
    msg.setDestination(38690U);
    msg.setDestinationEntity(203U);
    msg.id = 134U;
    msg.range = 0.1967669712955562;

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
    msg.setTimeStamp(0.998649012351993);
    msg.setSource(1683U);
    msg.setSourceEntity(57U);
    msg.setDestination(44975U);
    msg.setDestinationEntity(229U);
    msg.id = 151U;
    msg.range = 0.4819491194002188;

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
    msg.setTimeStamp(0.5076830703448596);
    msg.setSource(48211U);
    msg.setSourceEntity(126U);
    msg.setDestination(59252U);
    msg.setDestinationEntity(48U);
    msg.id = 87U;
    msg.range = 0.7043066902714171;

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
    msg.setTimeStamp(0.9796730239289724);
    msg.setSource(64045U);
    msg.setSourceEntity(102U);
    msg.setDestination(64942U);
    msg.setDestinationEntity(123U);
    msg.beacon.assign("VQSVPWJCAIYZSMBXPZXCNGDMMPFLLTMNAZHANTGAJYSEHVLNUYJWRXCYERTZAWAALDBEBDCVCRDSRIYZRCIDUKOOKMWACRWFSXYLUHHWKPXYBPLFWDHHAHLRIJRFKQNEUFFJSHISVKMEVJGDBTKFKGYXMIGLFGGPPVIKTIYVQORXBEEOBBZTYMORPHZEZNWMDXILDDSUUPGHNULSNJCXSOJ");
    msg.lat = 0.16395413711039242;
    msg.lon = 0.4101624056488994;
    msg.depth = 0.4510245459629535;
    msg.query_channel = 113U;
    msg.reply_channel = 220U;
    msg.transponder_delay = 88U;

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
    msg.setTimeStamp(0.3722118947207478);
    msg.setSource(62936U);
    msg.setSourceEntity(242U);
    msg.setDestination(18777U);
    msg.setDestinationEntity(8U);
    msg.beacon.assign("LCNNZSZQBPLUGLRZKOOOXIWRYISNWFWEZMHQYVMIIXHXPQWUBTBLACCEGGPPDPHAJWKQCNLIVWNZXXUOVNHUBRDFQHREEYYWMXEAADZUAGFPGOXRWGTBQMPYSDVSTQOSTYYKKHJMUCDOSKRJJFAZNTKRVTJFQTLOTSBJRGVXRDHCMCIGUNXKMJWDVLDTILFHUJBAEICFDBMPBV");
    msg.lat = 0.5576204666153395;
    msg.lon = 0.40773390813854526;
    msg.depth = 0.4859567878236004;
    msg.query_channel = 234U;
    msg.reply_channel = 40U;
    msg.transponder_delay = 28U;

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
    msg.setTimeStamp(0.16586087067352207);
    msg.setSource(18742U);
    msg.setSourceEntity(130U);
    msg.setDestination(27407U);
    msg.setDestinationEntity(100U);
    msg.beacon.assign("ZYBOGAFAFQKQFKFIYDCABRSZUDMLFNQHAPMRSMEZBFMTXYLHAVXCJLQIGTNCHNSIKBPGYLWAQVHMASDQFXNCWTGPBULNZJLDMKGYAWUREOLEWTSYCXKOCEMZSBAVHJBXIZQWPVVETVREUMVDKCBQFJYGUUBODPXQOYKZKSNPNPNUJTRHSIHVWFDIXGKDTRESTZAMIRHRRYVOMTBNOXUHOZEGRLWSF");
    msg.lat = 0.8713705466190086;
    msg.lon = 0.6766481891132232;
    msg.depth = 0.7142704847765844;
    msg.query_channel = 164U;
    msg.reply_channel = 130U;
    msg.transponder_delay = 20U;

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
    msg.setTimeStamp(0.9768251849263175);
    msg.setSource(47080U);
    msg.setSourceEntity(61U);
    msg.setDestination(46306U);
    msg.setDestinationEntity(236U);
    msg.op = 72U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OJVRJLCAMHNWXLEQGDOKUDNJOIVZQCWMURCYTKLPMHGFTVLFWXALCBTYZQVGBKLQSPVPWGETKSBVASWJMOHFTIXIHMCKMIEGASQVSJXUFZCXZBNQWTBYKWIKSPRDGIRYWOOABFVEUUZARTNXZDCOAZTSXRYVMLGYQEUPROX");
    tmp_msg_0.lat = 0.5103959578312772;
    tmp_msg_0.lon = 0.12952015032127462;
    tmp_msg_0.depth = 0.8204192730879681;
    tmp_msg_0.query_channel = 213U;
    tmp_msg_0.reply_channel = 43U;
    tmp_msg_0.transponder_delay = 21U;
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
    msg.setTimeStamp(0.7548861320059874);
    msg.setSource(22672U);
    msg.setSourceEntity(115U);
    msg.setDestination(21445U);
    msg.setDestinationEntity(90U);
    msg.op = 238U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CYELQJXCJWHJPACIACIYKWBFYKZW");
    tmp_msg_0.lat = 0.8786983152219083;
    tmp_msg_0.lon = 0.20241550740846315;
    tmp_msg_0.depth = 0.2617179064468851;
    tmp_msg_0.query_channel = 68U;
    tmp_msg_0.reply_channel = 121U;
    tmp_msg_0.transponder_delay = 21U;
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
    msg.setTimeStamp(0.35152788788077827);
    msg.setSource(36405U);
    msg.setSourceEntity(231U);
    msg.setDestination(57991U);
    msg.setDestinationEntity(161U);
    msg.op = 139U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ELIJOGSIFSALFYCUZOYSNKVPLDSMVXKTBKIRYRONYJVQCCLLEXEBMAZEMJLRBBUGCHQAEFXWJHFBIRPDWLIFAHRPHBFPADCBHRJKHSLSDBPJCGDWJXCYEGMBAOYTTUNZYUDQRJIKQGIANMMZVUVOCKGQNTNJTQIDYAHDOZZHOVFTUCQWYUFSLUQUSHRAOKNWPZQXMVZVNVHEDXXZMECAXFDPUGNWETXKEPGPLIRSMJBKYTSGOXFTZWGW");
    tmp_msg_0.lat = 0.7029765208902659;
    tmp_msg_0.lon = 0.242013455640677;
    tmp_msg_0.depth = 0.14985268824624332;
    tmp_msg_0.query_channel = 222U;
    tmp_msg_0.reply_channel = 235U;
    tmp_msg_0.transponder_delay = 60U;
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
    msg.setTimeStamp(0.08689899288415859);
    msg.setSource(60064U);
    msg.setSourceEntity(33U);
    msg.setDestination(2159U);
    msg.setDestinationEntity(141U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IKMXWABMXDFHZNCRWUFSNNJHIMGKQEWBFPXSWMOIUYYMPLAPBCKQIYRTAQZJOYKCPBTIUWGWAIVH");
    tmp_msg_0.lat = 0.45230635209969017;
    tmp_msg_0.lon = 0.5530918490152913;
    tmp_msg_0.depth = 0.2896847609439137;
    tmp_msg_0.query_channel = 217U;
    tmp_msg_0.reply_channel = 192U;
    tmp_msg_0.transponder_delay = 105U;
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
    msg.setTimeStamp(0.4969001988787666);
    msg.setSource(19291U);
    msg.setSourceEntity(195U);
    msg.setDestination(29331U);
    msg.setDestinationEntity(172U);
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 54209U;
    tmp_msg_0.control_ent = 179U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 192U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.7217721537230294;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 1U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.459064767374024;
    tmp_tmp_tmp_msg_0_0_1.z_units = 243U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.654832605011049;
    tmp_tmp_msg_0_0.lon = 0.3962396128194413;
    tmp_tmp_msg_0_0.radius = 0.31433989992031386;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 19U;
    tmp_msg_0.proximity = 168U;
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
    msg.setTimeStamp(0.18586974644910592);
    msg.setSource(7357U);
    msg.setSourceEntity(19U);
    msg.setDestination(12476U);
    msg.setDestinationEntity(176U);
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 145U;
    tmp_msg_0.x = 0.7496314222073717;
    tmp_msg_0.y = 0.09540675355021311;
    tmp_msg_0.z = 0.4434278319526045;
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
    msg.setTimeStamp(0.044924896073516574);
    msg.setSource(3054U);
    msg.setSourceEntity(163U);
    msg.setDestination(2707U);
    msg.setDestinationEntity(18U);
    msg.op = 64U;
    msg.system.assign("SLLUFIFZPGBWHEUUAMKUPUCFACVOMIJMKLXDREIMNJYXPYDKKCTBATMGGBTEACZCLXTJBKSDPLVUIYCFDFKNSZFFZUNCJXXWGQBQYTIQQRROZNAAUVHWSLVDVJSOPRIOJRBVTJDEQHGBYFXPQMSVRNKWJTHCYTWXZIXHCKOMPDPLUKSYDYWLDOWHDTQJLZ");
    msg.range = 0.5541725113241052;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("UCQXQQKLKRKBTLKMZPYJNZZPJVMEBXOUMIJXUDFCHEELPMCZXSBWTHDTDOXMXXBHFPKRVYVAUHRIBOHUNDKYZTHULLYFIAGKWYFAFPBGHRJMSZKMHQZTUZTHMWIVWLBA");
    tmp_msg_0.type = 251U;
    tmp_msg_0.op = 168U;
    tmp_msg_0.group_name.assign("VKOAHODRMVAOUJMPWOUKNKOWFHKWKXEVQZZGMUOGQHSJICXXFLJOBEBLSXYTYNZLEQHGEEKYUGROXICWPRQSITFHRJLAUVCFVTZLU");
    tmp_msg_0.plan_id.assign("LBPYMILHWLIPJADZQDYEAZATDWFRQPYNLXQXJWIXFDENMSUYQNGPZBXHZDFUOJ");
    tmp_msg_0.description.assign("USHIRFZPFTWNJSJRHACRVAOFGJCPPULSROLZHQKBUYOMNQGBGTBKKSMLBMIQSPKUWHTFXAGLCVHZWVF");
    tmp_msg_0.reference_frame = 58U;
    tmp_msg_0.leader_bank_lim = 0.5921698600281959;
    tmp_msg_0.leader_speed_min = 0.9651815043849848;
    tmp_msg_0.leader_speed_max = 0.08969152100139999;
    tmp_msg_0.leader_alt_min = 0.8976980128871681;
    tmp_msg_0.leader_alt_max = 0.3297885415283327;
    tmp_msg_0.pos_sim_err_lim = 0.4263830656753449;
    tmp_msg_0.pos_sim_err_wrn = 0.45886788284004454;
    tmp_msg_0.pos_sim_err_timeout = 53649U;
    tmp_msg_0.converg_max = 0.9962078304067448;
    tmp_msg_0.converg_timeout = 8922U;
    tmp_msg_0.comms_timeout = 35725U;
    tmp_msg_0.turb_lim = 0.6131087933463611;
    tmp_msg_0.custom.assign("ZUDRRJFPCDVRPXZUABGQFZIMOJCMFLFKFWHKYBIANIOWIRZKSLCGPITRZXYJKILRFWAMFNJOQDBEBGVQTQMZRWXUEBWHYWBMPYVHRJQMDWTLGTESQNKENUQNFVSJOXYKVHTCDPCSPZKYYAUQGVYWTCILUSVPMCCELAUNONSCUAZXJ");
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
    msg.setTimeStamp(0.8148598976154249);
    msg.setSource(24857U);
    msg.setSourceEntity(129U);
    msg.setDestination(59779U);
    msg.setDestinationEntity(118U);
    msg.op = 205U;
    msg.system.assign("XHBQAYMGSDTGQKQOZMEUNIMOQEKSLSOHDMXNFKHUZNPATPDKXNLYYFULIRGTPDVNYBRJCWYESXNJTLAITYARGRWZXFQSOPUYROKCIXJDVAMLGOEENKDIBSWJGBPQBJAVFZZDKUHUNNGMXZYFKRHWVFQJQPGJUVMELPMXEBRPAMUWAAZDBSUZCIHOCMKYEBDHOPKPLQSWCXZBLSDEICJWSROUAFRHTVTHIEVL");
    msg.range = 0.3842047100394189;
    IMC::SimulatedTime tmp_msg_0;
    tmp_msg_0.htime = 0.6561263729442397;
    tmp_msg_0.dt = 0.48636171115074456;
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
    msg.setTimeStamp(0.49101853038959176);
    msg.setSource(17134U);
    msg.setSourceEntity(25U);
    msg.setDestination(47668U);
    msg.setDestinationEntity(82U);
    msg.op = 175U;
    msg.system.assign("QDSBYQIMSEYVNDFTHTDNUZTAFCDDDISOQTWOENMSH");
    msg.range = 0.039681207661469986;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.13684235013641732;
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
    msg.setTimeStamp(0.9243514225019972);
    msg.setSource(58201U);
    msg.setSourceEntity(54U);
    msg.setDestination(49627U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.013618842969225109);
    msg.setSource(61816U);
    msg.setSourceEntity(175U);
    msg.setDestination(31202U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.6381925324013713);
    msg.setSource(32767U);
    msg.setSourceEntity(108U);
    msg.setDestination(60491U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.1884626007662188);
    msg.setSource(25116U);
    msg.setSourceEntity(125U);
    msg.setDestination(12240U);
    msg.setDestinationEntity(10U);
    msg.list.assign("PGMMYQIMCHACEZMOLXAKMUAFRQVHYKLRZCVJVXOSDSQCJTKHAFWKOLGRPJWAWZZXHDENCJCHYVFXROWLYABSSTQESETLRYTIBWUBDIOANPVTGGFTTFAQETXRHBIUVMXC");

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
    msg.setTimeStamp(0.6480219083638676);
    msg.setSource(18806U);
    msg.setSourceEntity(68U);
    msg.setDestination(33022U);
    msg.setDestinationEntity(90U);
    msg.list.assign("SNMARATCJTABXQQRSJJWROYDAFYZCUFOHFYZQGFEMJHGLIEZLAUWYKWVPMEQJMDSCWUXJTEKRSWOYTFXMPAGFG");

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
    msg.setTimeStamp(0.9706401271256522);
    msg.setSource(54346U);
    msg.setSourceEntity(184U);
    msg.setDestination(42501U);
    msg.setDestinationEntity(139U);
    msg.list.assign("HNPVHYWBOVYVJUVLZTFNDIXTGAYGDRIMRKUHEBHWFLXKMTAQCZVAPEIPSRWSWSPRESFOICASTMJFCGLRNOYAUOGDXWGTHGWUANRDFZBEUJKTPFDXKCDLINIJVLUOR");

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
    msg.setTimeStamp(0.8385902883921414);
    msg.setSource(12086U);
    msg.setSourceEntity(229U);
    msg.setDestination(11552U);
    msg.setDestinationEntity(212U);
    msg.value = 28745;

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
    msg.setTimeStamp(0.4555584460836857);
    msg.setSource(18344U);
    msg.setSourceEntity(88U);
    msg.setDestination(55806U);
    msg.setDestinationEntity(219U);
    msg.value = 30445;

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
    msg.setTimeStamp(0.24279097207578548);
    msg.setSource(4579U);
    msg.setSourceEntity(210U);
    msg.setDestination(30853U);
    msg.setDestinationEntity(32U);
    msg.value = 15927;

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
    msg.setTimeStamp(0.21426766555191756);
    msg.setSource(45845U);
    msg.setSourceEntity(232U);
    msg.setDestination(18635U);
    msg.setDestinationEntity(59U);
    msg.value = 0.7623814245023235;

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
    msg.setTimeStamp(0.2002423103136448);
    msg.setSource(49420U);
    msg.setSourceEntity(122U);
    msg.setDestination(36240U);
    msg.setDestinationEntity(128U);
    msg.value = 0.22702195239190037;

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
    msg.setTimeStamp(0.4754045436506603);
    msg.setSource(21902U);
    msg.setSourceEntity(229U);
    msg.setDestination(23037U);
    msg.setDestinationEntity(53U);
    msg.value = 0.41633023107985123;

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
    msg.setTimeStamp(0.07931405768644184);
    msg.setSource(17374U);
    msg.setSourceEntity(43U);
    msg.setDestination(55199U);
    msg.setDestinationEntity(30U);
    msg.value = 0.7344802184180058;

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
    msg.setTimeStamp(0.2675556158203216);
    msg.setSource(53218U);
    msg.setSourceEntity(160U);
    msg.setDestination(49303U);
    msg.setDestinationEntity(248U);
    msg.value = 0.07438124446659078;

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
    msg.setTimeStamp(0.8181784460380493);
    msg.setSource(17765U);
    msg.setSourceEntity(114U);
    msg.setDestination(3568U);
    msg.setDestinationEntity(14U);
    msg.value = 0.7423961948497723;

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
    msg.setTimeStamp(0.3159167517281828);
    msg.setSource(2781U);
    msg.setSourceEntity(119U);
    msg.setDestination(48502U);
    msg.setDestinationEntity(184U);
    msg.validity = 12905U;
    msg.type = 9U;
    msg.utc_year = 49876U;
    msg.utc_month = 143U;
    msg.utc_day = 133U;
    msg.utc_time = 0.8543975531606355;
    msg.lat = 0.5770497717041717;
    msg.lon = 0.7399499435636521;
    msg.height = 0.7899046367664472;
    msg.satellites = 34U;
    msg.cog = 0.32812349843157107;
    msg.sog = 0.999829821600227;
    msg.hdop = 0.8639012223111966;
    msg.vdop = 0.9539425662232572;
    msg.hacc = 0.8164154728635374;
    msg.vacc = 0.8835950668228683;

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
    msg.setTimeStamp(0.7182209749177141);
    msg.setSource(10404U);
    msg.setSourceEntity(121U);
    msg.setDestination(30831U);
    msg.setDestinationEntity(63U);
    msg.validity = 14169U;
    msg.type = 71U;
    msg.utc_year = 47855U;
    msg.utc_month = 213U;
    msg.utc_day = 161U;
    msg.utc_time = 0.5607961175191325;
    msg.lat = 0.6318629223354982;
    msg.lon = 0.9895348981649289;
    msg.height = 0.47905070641288694;
    msg.satellites = 104U;
    msg.cog = 0.8935238001782645;
    msg.sog = 0.0835143208961967;
    msg.hdop = 0.8778495951238657;
    msg.vdop = 0.9098227323564736;
    msg.hacc = 0.5748213719901845;
    msg.vacc = 0.7650582927360584;

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
    msg.setTimeStamp(0.236093383472898);
    msg.setSource(51987U);
    msg.setSourceEntity(148U);
    msg.setDestination(3958U);
    msg.setDestinationEntity(239U);
    msg.validity = 39508U;
    msg.type = 174U;
    msg.utc_year = 5819U;
    msg.utc_month = 194U;
    msg.utc_day = 74U;
    msg.utc_time = 0.3119952541248705;
    msg.lat = 0.6278578805855892;
    msg.lon = 0.17542423660229334;
    msg.height = 0.6299767439004493;
    msg.satellites = 138U;
    msg.cog = 0.3082174069419201;
    msg.sog = 0.12445085735277106;
    msg.hdop = 0.27580909788919106;
    msg.vdop = 0.05410099033932525;
    msg.hacc = 0.8821550817393271;
    msg.vacc = 0.14386415622031967;

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
    msg.setTimeStamp(0.9233171827096667);
    msg.setSource(12839U);
    msg.setSourceEntity(131U);
    msg.setDestination(319U);
    msg.setDestinationEntity(171U);
    msg.time = 0.543253604522523;
    msg.phi = 0.7244361686114632;
    msg.theta = 0.2306537689670073;
    msg.psi = 0.5002795416463699;
    msg.psi_magnetic = 0.5180703139420306;

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
    msg.setTimeStamp(0.6114584026119673);
    msg.setSource(54095U);
    msg.setSourceEntity(150U);
    msg.setDestination(23941U);
    msg.setDestinationEntity(186U);
    msg.time = 0.83250286367549;
    msg.phi = 0.32593745034671884;
    msg.theta = 0.2615917673780007;
    msg.psi = 0.79678438387258;
    msg.psi_magnetic = 0.6374840020483487;

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
    msg.setTimeStamp(0.7599774982503107);
    msg.setSource(30973U);
    msg.setSourceEntity(87U);
    msg.setDestination(8012U);
    msg.setDestinationEntity(158U);
    msg.time = 0.8672002777331681;
    msg.phi = 0.08942790554272317;
    msg.theta = 0.6000346888737268;
    msg.psi = 0.8770960707880204;
    msg.psi_magnetic = 0.8201698182188215;

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
    msg.setTimeStamp(0.09164960456191273);
    msg.setSource(45134U);
    msg.setSourceEntity(81U);
    msg.setDestination(32170U);
    msg.setDestinationEntity(186U);
    msg.time = 0.7674401120402673;
    msg.x = 0.5237680976154991;
    msg.y = 0.44456288200608907;
    msg.z = 0.22446942405654224;
    msg.timestep = 0.36425465386850986;

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
    msg.setTimeStamp(0.2884383943641996);
    msg.setSource(34866U);
    msg.setSourceEntity(155U);
    msg.setDestination(30432U);
    msg.setDestinationEntity(245U);
    msg.time = 0.9734460753569459;
    msg.x = 0.17765042273097853;
    msg.y = 0.2448677799062946;
    msg.z = 0.628430863887998;
    msg.timestep = 0.38352192765689963;

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
    msg.setTimeStamp(0.46644494511898293);
    msg.setSource(36428U);
    msg.setSourceEntity(93U);
    msg.setDestination(65226U);
    msg.setDestinationEntity(250U);
    msg.time = 0.8230977749024161;
    msg.x = 0.04430745883861886;
    msg.y = 0.14610890483738148;
    msg.z = 0.9006309859359594;
    msg.timestep = 0.006159741692408849;

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
    msg.setTimeStamp(0.9944067933123122);
    msg.setSource(8446U);
    msg.setSourceEntity(113U);
    msg.setDestination(60518U);
    msg.setDestinationEntity(121U);
    msg.time = 0.3046087144949535;
    msg.x = 0.07137779020197665;
    msg.y = 0.4012063603033532;
    msg.z = 0.9345160933443958;

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
    msg.setTimeStamp(0.4989709302680666);
    msg.setSource(2648U);
    msg.setSourceEntity(25U);
    msg.setDestination(51379U);
    msg.setDestinationEntity(209U);
    msg.time = 0.5540181760675129;
    msg.x = 0.1674673429917124;
    msg.y = 0.7511020543549509;
    msg.z = 0.5380062594100349;

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
    msg.setTimeStamp(0.8137534241122271);
    msg.setSource(2660U);
    msg.setSourceEntity(203U);
    msg.setDestination(41816U);
    msg.setDestinationEntity(180U);
    msg.time = 0.9076855963683229;
    msg.x = 0.8643725583687843;
    msg.y = 0.2637827117373779;
    msg.z = 0.936312304962867;

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
    msg.setTimeStamp(0.46297979931526256);
    msg.setSource(10074U);
    msg.setSourceEntity(173U);
    msg.setDestination(38899U);
    msg.setDestinationEntity(219U);
    msg.time = 0.3575489051261279;
    msg.x = 0.37708646862768125;
    msg.y = 0.4844861607113041;
    msg.z = 0.0965797268874573;

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
    msg.setTimeStamp(0.40863336848290466);
    msg.setSource(2132U);
    msg.setSourceEntity(59U);
    msg.setDestination(41883U);
    msg.setDestinationEntity(104U);
    msg.time = 0.47192362238216856;
    msg.x = 0.7427714468504428;
    msg.y = 0.4515382997655837;
    msg.z = 0.5322439624528685;

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
    msg.setTimeStamp(0.5779310757243667);
    msg.setSource(49151U);
    msg.setSourceEntity(179U);
    msg.setDestination(31023U);
    msg.setDestinationEntity(220U);
    msg.time = 0.42641489666477306;
    msg.x = 0.6057496903219332;
    msg.y = 0.9635788148225662;
    msg.z = 0.764096170546746;

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
    msg.setTimeStamp(0.9903623996908429);
    msg.setSource(29398U);
    msg.setSourceEntity(192U);
    msg.setDestination(26649U);
    msg.setDestinationEntity(208U);
    msg.time = 0.7352703873809477;
    msg.x = 0.22818399769434006;
    msg.y = 0.6416003537979926;
    msg.z = 0.9450694253120955;

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
    msg.setTimeStamp(0.07521700464288184);
    msg.setSource(27869U);
    msg.setSourceEntity(184U);
    msg.setDestination(48382U);
    msg.setDestinationEntity(223U);
    msg.time = 0.11387344081554451;
    msg.x = 0.32843078456942576;
    msg.y = 0.6650433747545537;
    msg.z = 0.6278105768886401;

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
    msg.setTimeStamp(0.42680223759113156);
    msg.setSource(18655U);
    msg.setSourceEntity(219U);
    msg.setDestination(52593U);
    msg.setDestinationEntity(179U);
    msg.time = 0.5658840167627883;
    msg.x = 0.6684614324657445;
    msg.y = 0.23458451815470738;
    msg.z = 0.7820593607758562;

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
    msg.setTimeStamp(0.26113199438211965);
    msg.setSource(29453U);
    msg.setSourceEntity(137U);
    msg.setDestination(38416U);
    msg.setDestinationEntity(162U);
    msg.validity = 108U;
    msg.x = 0.17642984939587714;
    msg.y = 0.08057994483804365;
    msg.z = 0.7891723376760799;

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
    msg.setTimeStamp(0.8854928287612748);
    msg.setSource(38703U);
    msg.setSourceEntity(61U);
    msg.setDestination(13591U);
    msg.setDestinationEntity(200U);
    msg.validity = 200U;
    msg.x = 0.17362775981211065;
    msg.y = 0.7878595300463015;
    msg.z = 0.7266768423969365;

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
    msg.setTimeStamp(0.9381481374371567);
    msg.setSource(37561U);
    msg.setSourceEntity(55U);
    msg.setDestination(7575U);
    msg.setDestinationEntity(252U);
    msg.validity = 250U;
    msg.x = 0.8793433722874758;
    msg.y = 0.35466488431259036;
    msg.z = 0.9356101399529212;

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
    msg.setTimeStamp(0.7212328880085994);
    msg.setSource(5452U);
    msg.setSourceEntity(250U);
    msg.setDestination(3145U);
    msg.setDestinationEntity(46U);
    msg.validity = 128U;
    msg.x = 0.8482340122505053;
    msg.y = 0.7406685925423209;
    msg.z = 0.5892779525153423;

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
    msg.setTimeStamp(0.03429727445590125);
    msg.setSource(58921U);
    msg.setSourceEntity(43U);
    msg.setDestination(18585U);
    msg.setDestinationEntity(123U);
    msg.validity = 10U;
    msg.x = 0.3812696034393863;
    msg.y = 0.6243255624947172;
    msg.z = 0.8424907956912432;

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
    msg.setTimeStamp(0.12218236593498011);
    msg.setSource(19623U);
    msg.setSourceEntity(225U);
    msg.setDestination(24204U);
    msg.setDestinationEntity(124U);
    msg.validity = 200U;
    msg.x = 0.643146350465076;
    msg.y = 0.07303767973796738;
    msg.z = 0.6221415318516798;

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
    msg.setTimeStamp(0.486853592583251);
    msg.setSource(11615U);
    msg.setSourceEntity(191U);
    msg.setDestination(36469U);
    msg.setDestinationEntity(229U);
    msg.time = 0.967060311714827;
    msg.x = 0.5866000924588038;
    msg.y = 0.8411512082730633;
    msg.z = 0.1378625478905705;

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
    msg.setTimeStamp(0.6449502367446591);
    msg.setSource(56588U);
    msg.setSourceEntity(212U);
    msg.setDestination(62034U);
    msg.setDestinationEntity(51U);
    msg.time = 0.5786382803266705;
    msg.x = 0.1327882473221662;
    msg.y = 0.6913836347401051;
    msg.z = 0.860822347254594;

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
    msg.setTimeStamp(0.7831808115577374);
    msg.setSource(30906U);
    msg.setSourceEntity(180U);
    msg.setDestination(8390U);
    msg.setDestinationEntity(153U);
    msg.time = 0.49829425761690505;
    msg.x = 0.25795468494869833;
    msg.y = 0.7764045038363776;
    msg.z = 0.5529022996488724;

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
    msg.setTimeStamp(0.21927921645972548);
    msg.setSource(31727U);
    msg.setSourceEntity(251U);
    msg.setDestination(58898U);
    msg.setDestinationEntity(22U);
    msg.validity = 23U;
    msg.value = 0.15760507485375586;

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
    msg.setTimeStamp(0.5864749317140654);
    msg.setSource(55531U);
    msg.setSourceEntity(114U);
    msg.setDestination(16719U);
    msg.setDestinationEntity(253U);
    msg.validity = 144U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2935347053362054;
    tmp_msg_0.y = 0.17447917631773513;
    tmp_msg_0.z = 0.46983324358248146;
    tmp_msg_0.phi = 0.14148303970379916;
    tmp_msg_0.theta = 0.8367591269660579;
    tmp_msg_0.psi = 0.28381231470884116;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.06459400395760828;

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
    msg.setTimeStamp(0.052281854982759945);
    msg.setSource(52720U);
    msg.setSourceEntity(61U);
    msg.setDestination(38433U);
    msg.setDestinationEntity(146U);
    msg.validity = 94U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5530312903662624;
    tmp_msg_0.y = 0.17614369075848468;
    tmp_msg_0.z = 0.4320704091915345;
    tmp_msg_0.phi = 0.03513698459271575;
    tmp_msg_0.theta = 0.04148373739831035;
    tmp_msg_0.psi = 0.7881008331064903;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.9190594913360377;
    tmp_msg_1.beam_height = 0.2435468823053455;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9837831591461064;

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
    msg.setTimeStamp(0.3441705932890814);
    msg.setSource(29143U);
    msg.setSourceEntity(254U);
    msg.setDestination(62305U);
    msg.setDestinationEntity(140U);
    msg.value = 0.9893784869053732;

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
    msg.setTimeStamp(0.4524751261873873);
    msg.setSource(29390U);
    msg.setSourceEntity(36U);
    msg.setDestination(44487U);
    msg.setDestinationEntity(144U);
    msg.value = 0.2784974284921533;

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
    msg.setTimeStamp(0.8610962012626764);
    msg.setSource(25466U);
    msg.setSourceEntity(201U);
    msg.setDestination(26709U);
    msg.setDestinationEntity(62U);
    msg.value = 0.35620412363209053;

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
    msg.setTimeStamp(0.33398763575472357);
    msg.setSource(45246U);
    msg.setSourceEntity(66U);
    msg.setDestination(48210U);
    msg.setDestinationEntity(131U);
    msg.value = 0.8619688585495217;

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
    msg.setTimeStamp(0.015444222081046899);
    msg.setSource(53621U);
    msg.setSourceEntity(219U);
    msg.setDestination(24390U);
    msg.setDestinationEntity(170U);
    msg.value = 0.20625637171276667;

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
    msg.setTimeStamp(0.38756338186785877);
    msg.setSource(32088U);
    msg.setSourceEntity(213U);
    msg.setDestination(14152U);
    msg.setDestinationEntity(31U);
    msg.value = 0.03865324577977447;

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
    msg.setTimeStamp(0.6366072629951142);
    msg.setSource(49032U);
    msg.setSourceEntity(156U);
    msg.setDestination(14234U);
    msg.setDestinationEntity(107U);
    msg.value = 0.29968581201311084;

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
    msg.setTimeStamp(0.7713891140059421);
    msg.setSource(45890U);
    msg.setSourceEntity(218U);
    msg.setDestination(52098U);
    msg.setDestinationEntity(110U);
    msg.value = 0.9228032266924158;

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
    msg.setTimeStamp(0.14128297921758892);
    msg.setSource(20456U);
    msg.setSourceEntity(182U);
    msg.setDestination(62650U);
    msg.setDestinationEntity(52U);
    msg.value = 0.09475629556221055;

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
    msg.setTimeStamp(0.5646978708028672);
    msg.setSource(39544U);
    msg.setSourceEntity(38U);
    msg.setDestination(24259U);
    msg.setDestinationEntity(99U);
    msg.value = 0.5826073168230259;

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
    msg.setTimeStamp(0.08958360185827385);
    msg.setSource(65179U);
    msg.setSourceEntity(147U);
    msg.setDestination(64852U);
    msg.setDestinationEntity(50U);
    msg.value = 0.7434541500899476;

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
    msg.setTimeStamp(0.6592540311983717);
    msg.setSource(24888U);
    msg.setSourceEntity(250U);
    msg.setDestination(9111U);
    msg.setDestinationEntity(25U);
    msg.value = 0.6178091225206623;

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
    msg.setTimeStamp(0.15814701222145144);
    msg.setSource(25033U);
    msg.setSourceEntity(102U);
    msg.setDestination(16004U);
    msg.setDestinationEntity(229U);
    msg.value = 0.795302681282742;

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
    msg.setTimeStamp(0.5092913991379409);
    msg.setSource(23690U);
    msg.setSourceEntity(102U);
    msg.setDestination(56691U);
    msg.setDestinationEntity(46U);
    msg.value = 0.7612346499837069;

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
    msg.setTimeStamp(0.6135176943948628);
    msg.setSource(60442U);
    msg.setSourceEntity(167U);
    msg.setDestination(28831U);
    msg.setDestinationEntity(174U);
    msg.value = 0.4829467757558995;

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
    msg.setTimeStamp(0.5040495443550748);
    msg.setSource(64331U);
    msg.setSourceEntity(227U);
    msg.setDestination(26513U);
    msg.setDestinationEntity(131U);
    msg.value = 0.916677128645019;

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
    msg.setTimeStamp(0.3977778587897237);
    msg.setSource(22432U);
    msg.setSourceEntity(242U);
    msg.setDestination(42182U);
    msg.setDestinationEntity(6U);
    msg.value = 0.9431523906865833;

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
    msg.setTimeStamp(0.2927027082755369);
    msg.setSource(26572U);
    msg.setSourceEntity(86U);
    msg.setDestination(63924U);
    msg.setDestinationEntity(224U);
    msg.value = 0.9565723513648121;

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
    msg.setTimeStamp(0.07253646905502265);
    msg.setSource(33110U);
    msg.setSourceEntity(48U);
    msg.setDestination(10115U);
    msg.setDestinationEntity(220U);
    msg.value = 0.5829064742518314;

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
    msg.setTimeStamp(0.0012503642475527599);
    msg.setSource(40209U);
    msg.setSourceEntity(137U);
    msg.setDestination(12941U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7013817166445174;

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
    msg.setTimeStamp(0.21702952300559042);
    msg.setSource(46161U);
    msg.setSourceEntity(224U);
    msg.setDestination(21409U);
    msg.setDestinationEntity(76U);
    msg.value = 0.271016484370425;

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
    msg.setTimeStamp(0.3386859396511468);
    msg.setSource(49262U);
    msg.setSourceEntity(139U);
    msg.setDestination(65488U);
    msg.setDestinationEntity(216U);
    msg.value = 0.9618065877367812;

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
    msg.setTimeStamp(0.5689450379581505);
    msg.setSource(11249U);
    msg.setSourceEntity(92U);
    msg.setDestination(9015U);
    msg.setDestinationEntity(202U);
    msg.value = 0.48254632300715206;

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
    msg.setTimeStamp(0.6426013089082954);
    msg.setSource(29138U);
    msg.setSourceEntity(51U);
    msg.setDestination(33169U);
    msg.setDestinationEntity(217U);
    msg.value = 0.7233452170926232;

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
    msg.setTimeStamp(0.3767284060818531);
    msg.setSource(57913U);
    msg.setSourceEntity(251U);
    msg.setDestination(35479U);
    msg.setDestinationEntity(212U);
    msg.direction = 0.17513744962460842;
    msg.speed = 0.4077672464262798;
    msg.turbulence = 0.2487630457391966;

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
    msg.setTimeStamp(0.5957003819882457);
    msg.setSource(50948U);
    msg.setSourceEntity(252U);
    msg.setDestination(30535U);
    msg.setDestinationEntity(16U);
    msg.direction = 0.35072721106055316;
    msg.speed = 0.6687600200036047;
    msg.turbulence = 0.5200714375474741;

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
    msg.setTimeStamp(0.7538553877446459);
    msg.setSource(4659U);
    msg.setSourceEntity(32U);
    msg.setDestination(40111U);
    msg.setDestinationEntity(162U);
    msg.direction = 0.18877653017794438;
    msg.speed = 0.5271826393662273;
    msg.turbulence = 0.5958628173877766;

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
    msg.setTimeStamp(0.038193597940925805);
    msg.setSource(20671U);
    msg.setSourceEntity(44U);
    msg.setDestination(44620U);
    msg.setDestinationEntity(29U);
    msg.value = 0.5697290129232139;

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
    msg.setTimeStamp(0.8028679073119346);
    msg.setSource(46391U);
    msg.setSourceEntity(104U);
    msg.setDestination(963U);
    msg.setDestinationEntity(156U);
    msg.value = 0.17622867547503362;

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
    msg.setTimeStamp(0.6205660402823782);
    msg.setSource(17069U);
    msg.setSourceEntity(76U);
    msg.setDestination(19186U);
    msg.setDestinationEntity(122U);
    msg.value = 0.859977680465484;

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
    msg.setTimeStamp(0.6881360976332355);
    msg.setSource(5529U);
    msg.setSourceEntity(98U);
    msg.setDestination(18464U);
    msg.setDestinationEntity(29U);
    msg.value.assign("KZEATUTEFXKWAEXXQMISZABAILCHGZWWFZCRGNWVNTGCEYQLOYCRMSHWRBGBGVWYSYAQDMHLBTBZGQDBRUADKLACIUPEUFXMDYHVXJEAXIOKDSSYEWRPGOPHTKUCJQPCPZRBQXNFUVVDNNXQADVKILTLAJJTFFIPNR");

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
    msg.setTimeStamp(0.8395655712007626);
    msg.setSource(62882U);
    msg.setSourceEntity(37U);
    msg.setDestination(13968U);
    msg.setDestinationEntity(237U);
    msg.value.assign("VDGYCCZNBYYCBSAVRAOKUXGWVPMOGSQORKIFDPORGNLATMIXFEBRQLKJQXKHEXMIJELMUFLWGYCDLBOFZNHODBCOFQQIEHDUNQNVALZHGEHSSGMATRCIQQITZKRXDATLMEHFPOGTBMOPVVUTNEIYJPZXTNCETFHWSXLZWGIAKSRQBXYJUXURUSPJZLMCQSIZNYPWUYMKDRDTDKFVJUOSYWZJNHAWVSPVAKRZTAJFMNGUWWHWHCV");

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
    msg.setTimeStamp(0.6216659140010513);
    msg.setSource(17249U);
    msg.setSourceEntity(229U);
    msg.setDestination(34140U);
    msg.setDestinationEntity(108U);
    msg.value.assign("CKBSVFSSJWQWMJKZVTAGBSTWRUUQJHZMLFBDNXPKEPILIBZVPLXVNB");

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
    msg.setTimeStamp(0.6256665207120738);
    msg.setSource(10633U);
    msg.setSourceEntity(104U);
    msg.setDestination(51637U);
    msg.setDestinationEntity(5U);
    const char tmp_msg_0[] = {38, 85, -54, -73, -25, -9, -98, 66, 110, 95, 21, 16, -115, -114, 93, 116, -75, -39, -63, 27, 59, 66, -17, 51, 84, -72, -24, 2, -115, 35, -127, 43, -21, -62, 28, 28, 74, -15, -56, -124, -85, -119, -45, 74, 103, -119, 71, 12, 21, 99, -128, -60, -25, -94, 106, 14, -104, -63, 10, -92, -57, 81, 87, -98, -13, 17, -124, 57, 38, -8, -26, -4, -70, -59, 60, 113, 28, -90, -128, 30, -81, 112, 41, -79, -80, -36, -104, -116, 70, 79, -16, 6, 81, 30, -40, -51, 60, -106, -123, -23, 73, -101, -41, 62, -47, -23, -5, 87, 38, 39, 51, 15, 79, -19, 112, -99, -44, -26, 85, 102, -122, -124, -49, 38, 98, 112, 79, -48, -30};
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
    msg.setTimeStamp(0.7017649683917608);
    msg.setSource(32080U);
    msg.setSourceEntity(131U);
    msg.setDestination(25810U);
    msg.setDestinationEntity(163U);
    const char tmp_msg_0[] = {57, -23, 23, 65, -2, -46, -64, -23, 87, 7, 78, 86, 114, 20, -65, -6, -17, 84, -125, -121, 67, 4, -71, 25, 88, 48, -111, -36, -109, -4, 25, -45, -121, -23, -105, 89, -117, 87, 88, -63, 71, 40, 19, 43, -70, 23, -83, 88, 38, 99, 21, -125, -22, -66, -61, 23, 120, 65, 64, 18, -9, -120, 106, -100, 45, -67, 70, 6, -94, 89, 33, -23, 42, 18, 11, 23, -66, -12, 54, -67, -30, -112, 69, 58, -61, -72, -127, -25, 58, 81, -68, -46, 9, -60, 70, 98, -74, -37, 18, -66, -123, -117, 2, 26, -52, 92, 14, 9, -42, 100, 39, -92, -110, 114, -124, -89, 36, -115, -17, -21, 90, -76, 99, 1, 56, -98, 15, 79, 103, -5, 116, 96, -55, -97, 83, -3, 83, -72, 10, 72, 51, 74, -68, 88, 26, -125, -81};
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
    msg.setTimeStamp(0.1121845416386601);
    msg.setSource(22360U);
    msg.setSourceEntity(58U);
    msg.setDestination(32246U);
    msg.setDestinationEntity(211U);
    const char tmp_msg_0[] = {52, -91, 89, -31, 3, -58, 23, 35, -117, 28, -57, -19, -127, -18, -83, -17, 67, -99, 2, -19, 15, -17, -84, 120, -51, -26, -104, -69, 99, -33, -65, -63, -91, 102, 3, 15, 8, 102, -65, 86, -78, 11, 90, 97, -18, 18, -75, 68, 76, 34, 57, -18, 59, 61, -25, 95, -84, -42, 119, -2, 101, -103, 16, -32, -79, -64, -45, 92, -3, 7, 74, 44, -81, -11, 49, -42, 35, -15, -53, -26, 94, -24, 7, 49, -70, -68, -77, -118, -18, -99, -9, 43, -67, 20, -125, -104, -87, 16, 78, 71, -12, -107, 120, -33, 9, 30, -7, -73, 95, 13, -117, 66, -127, 89, 26, 63, -70, -33, -10, 51, -128, -44, -100, 23, -91, -44, -22, 14, -53, 15, -119, -96, 17, 71, -105, -101, -98, -18, 87, 82, -41, 10, -75, -40, -90, 40, 94, -41, 118, -67, -58, 72, -57, -61, 58, -127, 73, 70, -101, 51, -114, 106, -127, 17, 99, 44, -8, -16, 53, 32, 96, 108, -93, 1, 121, -81, -96, -58, 96, -49, -108, -101, 50, -96, 83, -63, 117, 100, 111, -57};
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
    msg.setTimeStamp(0.03386469421954552);
    msg.setSource(19922U);
    msg.setSourceEntity(0U);
    msg.setDestination(18665U);
    msg.setDestinationEntity(4U);
    msg.type = 173U;
    msg.frequency = 2733386766U;
    msg.min_range = 17947U;
    msg.max_range = 40910U;
    msg.bits_per_point = 247U;
    msg.scale_factor = 0.901565016335538;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.27257645296642463;
    tmp_msg_0.beam_height = 0.7904824221629353;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-52, 16, -39, 63, -10, -10, -20, -78, 125, 5, -106, -2, 92, 35, -48, 69, -34, 126, 67, 98, 6, -71, -53, -35, 25, 13, 81, 36, -94, -17, -100, -119, -96, -61, -124, 12, 119, -26, -48, -96, -42, -31, 84, -93, -52, 37, 95, 75, 36, -18, 84, 64, -78, -15, 0, -78, 61, -82, 56, -51, 76, 124, 121, 81, -78, 63, -117, -37, 36, -43, -74, -16, 97, -82, 0, -87, 65, -117, -48, -47, -109, 10, -83, -92, -54, 57, -17, -63, -123, -84, -90, -63, 67, -46, 67, -75, -68, -106, -86, 70, -69, 113, -4, -53, 125, 100, 117, 84, 53, -45, -49, -47, -40, -50, -26, -27, 93, 65, 92, 126, 45, 91, -89, 72, 76, -63, -69, 77, 59, 111, -76, -55, -49, 62, 123, 19, 48, -9, 71, -35, -7, -98, 89, -102, -76, -80, 61};
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
    msg.setTimeStamp(0.33786764137613945);
    msg.setSource(14582U);
    msg.setSourceEntity(231U);
    msg.setDestination(19792U);
    msg.setDestinationEntity(183U);
    msg.type = 162U;
    msg.frequency = 1173761611U;
    msg.min_range = 36896U;
    msg.max_range = 30152U;
    msg.bits_per_point = 185U;
    msg.scale_factor = 0.11244049839733006;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.02682624262848754;
    tmp_msg_0.beam_height = 0.24197213019369124;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {70, 96, 63, -90, -68, 43, -89, 45, 114, 99, -105, -8, 67, 15, -123, -106, -11, -10, 57, 51, -37, -63, -103, 53, -58, 102, 6, 72, -116, -60, 9, -86, 84, -6, -39, -2, 17, -20, -31, -16, -39, -66, -26, -37, -28, -27, 27, -25, -98, 8, 26, -75, 14, -106, 63, -57, -38, 35, -94, -23, 87, 59, -121, 19, 6, 63, 46, 57, 10, 91, -23, 15, -33, 20, 81, 21, -39, 22, -1, -27, 88, -56, 38};
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
    msg.setTimeStamp(0.025409291060700778);
    msg.setSource(46267U);
    msg.setSourceEntity(247U);
    msg.setDestination(27792U);
    msg.setDestinationEntity(31U);
    msg.type = 207U;
    msg.frequency = 2178642357U;
    msg.min_range = 60405U;
    msg.max_range = 34163U;
    msg.bits_per_point = 235U;
    msg.scale_factor = 0.02742200952532514;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.23628605841732453;
    tmp_msg_0.beam_height = 0.5534866588778335;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {69, 113, -92, 86, -105, 71, 7, 67, -12, -83, 14, -33, 88, 44, 114, -46, 35, -103, 70, 8, 35, 2, 9, 36, -57, -89, 108, 56, 39, 100, 40, -78, -68, -21, 48, -77, 0, 117, 116, -74, -32, 42, -23, -2, 18, -117, 25, -72, -68, -97, 76, -42, -82, 58, 70, 6, -68, 24, -33, -69, -45, 63, -46, 18, 106, -46, 100, 45, -87, 24, 68, 80, -104, 11, -63, -54, -97, 10, -125, 8, 74, -17, -114, 17, -60, 1, 8, -35, 123, 47, 101, -20, -93, -14, -84, 96, 70, -87, -63, -88, 24, -53, 1, -108, -11, -32, 25, -13, -79, -41, -99, -46, -73, 111, 24, 94, 52, -116, -17, 38, -40, 106, 74, -5, 51, -40, 87, 97, -73, 34, -91, -50, 122, 48, -37, 84};
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
    msg.setTimeStamp(0.441532499559557);
    msg.setSource(54772U);
    msg.setSourceEntity(86U);
    msg.setDestination(32676U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.749648358845695);
    msg.setSource(2947U);
    msg.setSourceEntity(112U);
    msg.setDestination(35157U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.05403460153768047);
    msg.setSource(48756U);
    msg.setSourceEntity(96U);
    msg.setDestination(62192U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.5938913915945149);
    msg.setSource(10435U);
    msg.setSourceEntity(103U);
    msg.setDestination(44156U);
    msg.setDestinationEntity(52U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.5922923690270776);
    msg.setSource(59216U);
    msg.setSourceEntity(56U);
    msg.setDestination(17412U);
    msg.setDestinationEntity(129U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.9614109028416717);
    msg.setSource(3604U);
    msg.setSourceEntity(97U);
    msg.setDestination(27980U);
    msg.setDestinationEntity(129U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.1286466724282206);
    msg.setSource(64601U);
    msg.setSourceEntity(225U);
    msg.setDestination(36386U);
    msg.setDestinationEntity(216U);
    msg.value = 0.1416638963733896;
    msg.confidence = 0.6611612027021954;
    msg.opmodes.assign("BRDPOXWTJNWENQYFRLZUBVAOIUDULODZJKHUGYRBRFZOQPVSXTPZRGDRIQGBITDJT");

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
    msg.setTimeStamp(0.22971286666751545);
    msg.setSource(43946U);
    msg.setSourceEntity(2U);
    msg.setDestination(28393U);
    msg.setDestinationEntity(176U);
    msg.value = 0.5949798952178843;
    msg.confidence = 0.23925296342920088;
    msg.opmodes.assign("YMHXBHWZCRVYMRRDIWOXOJHLYIQIEJABAURZPBNCIYTLHBHGDLMZ");

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
    msg.setTimeStamp(0.8512890095958621);
    msg.setSource(44907U);
    msg.setSourceEntity(85U);
    msg.setDestination(54158U);
    msg.setDestinationEntity(129U);
    msg.value = 0.7814844303620827;
    msg.confidence = 0.6023639700320101;
    msg.opmodes.assign("DMKYCSXAAZASTJVWULXRHXHEZBRJGTUQIVBMIEFPUJCSWUWCHQFHVQGERZOLFWNLDBEFYASYDWONFNKPKKXKVWUHSVOZKQHNERPLADSNQTRCSQVYPXVXWZRAMTUPWWCTILFQBOBEXLEAZQIAURXDDFYPSHRGUGOTDNKJDDZMIITXOMMTBRCYBGXADMPVIIJCAGEFMTQOVELMGOCZTPEOKCJCYFJGPKPOBIGFJSILWBQJL");

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
    msg.setTimeStamp(0.5522093165470401);
    msg.setSource(21417U);
    msg.setSourceEntity(14U);
    msg.setDestination(59514U);
    msg.setDestinationEntity(126U);
    msg.itow = 2806086914U;
    msg.lat = 0.18961795241356205;
    msg.lon = 0.15655963184813648;
    msg.height_ell = 0.9254374723412571;
    msg.height_sea = 0.6032862086424885;
    msg.hacc = 0.6411040065919819;
    msg.vacc = 0.2762753175555348;
    msg.vel_n = 0.8868578387082844;
    msg.vel_e = 0.6890962113640747;
    msg.vel_d = 0.1351861328404922;
    msg.speed = 0.7241057318268782;
    msg.gspeed = 0.9641216169329501;
    msg.heading = 0.914135351483795;
    msg.sacc = 0.03477728946125502;
    msg.cacc = 0.5784245413807306;

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
    msg.setTimeStamp(0.47025419263712975);
    msg.setSource(32921U);
    msg.setSourceEntity(62U);
    msg.setDestination(17293U);
    msg.setDestinationEntity(194U);
    msg.itow = 404978352U;
    msg.lat = 0.8583156512152019;
    msg.lon = 0.35347752673507327;
    msg.height_ell = 0.4777719910550152;
    msg.height_sea = 0.8606882490209088;
    msg.hacc = 0.08091224481901771;
    msg.vacc = 0.22038968634659117;
    msg.vel_n = 0.7571321433532685;
    msg.vel_e = 0.5428391895431764;
    msg.vel_d = 0.3482414656030923;
    msg.speed = 0.1420218127707772;
    msg.gspeed = 0.14240010816930093;
    msg.heading = 0.6773518256136125;
    msg.sacc = 0.4934902659176288;
    msg.cacc = 0.756406839864581;

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
    msg.setTimeStamp(0.22892462328727714);
    msg.setSource(1906U);
    msg.setSourceEntity(185U);
    msg.setDestination(36457U);
    msg.setDestinationEntity(8U);
    msg.itow = 2242222841U;
    msg.lat = 0.45009742591295143;
    msg.lon = 0.23891478799904076;
    msg.height_ell = 0.16452399166334686;
    msg.height_sea = 0.352567237880429;
    msg.hacc = 0.07333156322258694;
    msg.vacc = 0.8046154298590874;
    msg.vel_n = 0.7216253112723302;
    msg.vel_e = 0.655336905297552;
    msg.vel_d = 0.18012974173893592;
    msg.speed = 0.02701371290140575;
    msg.gspeed = 0.4054363156967983;
    msg.heading = 0.9327379386952686;
    msg.sacc = 0.5040978022995541;
    msg.cacc = 0.6223573541900387;

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
    msg.setTimeStamp(0.05455909783103119);
    msg.setSource(9684U);
    msg.setSourceEntity(37U);
    msg.setDestination(24242U);
    msg.setDestinationEntity(164U);
    msg.id = 225U;
    msg.value = 0.936355953181928;

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
    msg.setTimeStamp(0.9690791213936008);
    msg.setSource(37582U);
    msg.setSourceEntity(111U);
    msg.setDestination(21314U);
    msg.setDestinationEntity(90U);
    msg.id = 148U;
    msg.value = 0.479930924607022;

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
    msg.setTimeStamp(0.6044540263322871);
    msg.setSource(20148U);
    msg.setSourceEntity(129U);
    msg.setDestination(26197U);
    msg.setDestinationEntity(138U);
    msg.id = 164U;
    msg.value = 0.47629345407309065;

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
    msg.setTimeStamp(0.2250985558969555);
    msg.setSource(63259U);
    msg.setSourceEntity(161U);
    msg.setDestination(28103U);
    msg.setDestinationEntity(84U);
    msg.x = 0.4757614569020918;
    msg.y = 0.4076744796050309;
    msg.z = 0.5272833460774267;
    msg.phi = 0.8768045024363197;
    msg.theta = 0.8152515865279295;
    msg.psi = 0.41212051818515083;

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
    msg.setTimeStamp(0.052094216890646194);
    msg.setSource(38060U);
    msg.setSourceEntity(70U);
    msg.setDestination(635U);
    msg.setDestinationEntity(83U);
    msg.x = 0.3810068103304378;
    msg.y = 0.8148292004540664;
    msg.z = 0.15977276265027185;
    msg.phi = 0.891567293032644;
    msg.theta = 0.9817947195836647;
    msg.psi = 0.9235719587864015;

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
    msg.setTimeStamp(0.610941240493209);
    msg.setSource(60483U);
    msg.setSourceEntity(166U);
    msg.setDestination(53849U);
    msg.setDestinationEntity(235U);
    msg.x = 0.35664630142210163;
    msg.y = 0.780695860961736;
    msg.z = 0.6681620311296231;
    msg.phi = 0.46271417988094343;
    msg.theta = 0.09762683977347053;
    msg.psi = 0.047298082668432606;

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
    msg.setTimeStamp(0.705383968246482);
    msg.setSource(518U);
    msg.setSourceEntity(226U);
    msg.setDestination(32278U);
    msg.setDestinationEntity(221U);
    msg.beam_width = 0.9090859978204962;
    msg.beam_height = 0.48268885695806485;

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
    msg.setTimeStamp(0.5776952425645903);
    msg.setSource(25660U);
    msg.setSourceEntity(235U);
    msg.setDestination(40671U);
    msg.setDestinationEntity(208U);
    msg.beam_width = 0.036104854656161645;
    msg.beam_height = 0.9815745375487533;

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
    msg.setTimeStamp(0.72219097165412);
    msg.setSource(34326U);
    msg.setSourceEntity(63U);
    msg.setDestination(216U);
    msg.setDestinationEntity(37U);
    msg.beam_width = 0.13447809621722695;
    msg.beam_height = 0.5126899086216545;

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
    msg.setTimeStamp(0.27703504900638454);
    msg.setSource(58926U);
    msg.setSourceEntity(152U);
    msg.setDestination(23131U);
    msg.setDestinationEntity(94U);
    msg.sane = 34U;

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
    msg.setTimeStamp(0.1653046151066896);
    msg.setSource(61550U);
    msg.setSourceEntity(195U);
    msg.setDestination(13530U);
    msg.setDestinationEntity(28U);
    msg.sane = 222U;

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
    msg.setTimeStamp(0.17091200981625465);
    msg.setSource(47844U);
    msg.setSourceEntity(60U);
    msg.setDestination(507U);
    msg.setDestinationEntity(139U);
    msg.sane = 161U;

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
    msg.setTimeStamp(0.7603385970956862);
    msg.setSource(57919U);
    msg.setSourceEntity(5U);
    msg.setDestination(20489U);
    msg.setDestinationEntity(32U);
    msg.value = 0.3729580865940416;

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
    msg.setTimeStamp(0.8729153800703121);
    msg.setSource(9900U);
    msg.setSourceEntity(28U);
    msg.setDestination(28159U);
    msg.setDestinationEntity(115U);
    msg.value = 0.5602108266110184;

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
    msg.setTimeStamp(0.08298954827042093);
    msg.setSource(15634U);
    msg.setSourceEntity(59U);
    msg.setDestination(14570U);
    msg.setDestinationEntity(22U);
    msg.value = 0.0024721143071466667;

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
    msg.setTimeStamp(0.008985840810659784);
    msg.setSource(4026U);
    msg.setSourceEntity(81U);
    msg.setDestination(10117U);
    msg.setDestinationEntity(56U);
    msg.value = 0.8987850298202266;

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
    msg.setTimeStamp(0.7986312242128015);
    msg.setSource(45295U);
    msg.setSourceEntity(251U);
    msg.setDestination(3155U);
    msg.setDestinationEntity(93U);
    msg.value = 0.32637619928422734;

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
    msg.setTimeStamp(0.7277237439186668);
    msg.setSource(29543U);
    msg.setSourceEntity(157U);
    msg.setDestination(48062U);
    msg.setDestinationEntity(52U);
    msg.value = 0.4683370896151303;

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
    msg.setTimeStamp(0.9261715102694096);
    msg.setSource(51453U);
    msg.setSourceEntity(73U);
    msg.setDestination(41343U);
    msg.setDestinationEntity(63U);
    msg.value = 0.8113205398469515;

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
    msg.setTimeStamp(0.6041790238601432);
    msg.setSource(49666U);
    msg.setSourceEntity(45U);
    msg.setDestination(7727U);
    msg.setDestinationEntity(10U);
    msg.value = 0.080748095365333;

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
    msg.setTimeStamp(0.2813495340453225);
    msg.setSource(51378U);
    msg.setSourceEntity(115U);
    msg.setDestination(23698U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5266960770502173;

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
    msg.setTimeStamp(0.9315075939627474);
    msg.setSource(28048U);
    msg.setSourceEntity(90U);
    msg.setDestination(33292U);
    msg.setDestinationEntity(138U);
    msg.value = 0.5111114803861362;

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
    msg.setTimeStamp(0.20711499407736034);
    msg.setSource(11364U);
    msg.setSourceEntity(92U);
    msg.setDestination(12904U);
    msg.setDestinationEntity(118U);
    msg.value = 0.3370118182621169;

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
    msg.setTimeStamp(0.40837913727022734);
    msg.setSource(14544U);
    msg.setSourceEntity(170U);
    msg.setDestination(9946U);
    msg.setDestinationEntity(234U);
    msg.value = 0.025025757603723497;

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
    msg.setTimeStamp(0.8448843818773544);
    msg.setSource(13370U);
    msg.setSourceEntity(157U);
    msg.setDestination(53811U);
    msg.setDestinationEntity(63U);
    msg.value = 0.8361088962742418;

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
    msg.setTimeStamp(0.9274854604521318);
    msg.setSource(49947U);
    msg.setSourceEntity(141U);
    msg.setDestination(15058U);
    msg.setDestinationEntity(147U);
    msg.value = 0.8348041919320744;

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
    msg.setTimeStamp(0.0916511743064291);
    msg.setSource(64769U);
    msg.setSourceEntity(94U);
    msg.setDestination(64529U);
    msg.setDestinationEntity(162U);
    msg.value = 0.8893042541806002;

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
    msg.setTimeStamp(0.5143545164582439);
    msg.setSource(5460U);
    msg.setSourceEntity(196U);
    msg.setDestination(8598U);
    msg.setDestinationEntity(170U);
    msg.id = 92U;
    msg.zoom = 120U;
    msg.action = 205U;

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
    msg.setTimeStamp(0.33736267546449905);
    msg.setSource(36512U);
    msg.setSourceEntity(24U);
    msg.setDestination(14641U);
    msg.setDestinationEntity(188U);
    msg.id = 21U;
    msg.zoom = 197U;
    msg.action = 138U;

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
    msg.setTimeStamp(0.42586915390882796);
    msg.setSource(34383U);
    msg.setSourceEntity(71U);
    msg.setDestination(49442U);
    msg.setDestinationEntity(157U);
    msg.id = 27U;
    msg.zoom = 166U;
    msg.action = 102U;

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
    msg.setTimeStamp(0.40660535251320173);
    msg.setSource(38094U);
    msg.setSourceEntity(189U);
    msg.setDestination(55959U);
    msg.setDestinationEntity(96U);
    msg.id = 2U;
    msg.value = 0.5359563729767405;

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
    msg.setTimeStamp(0.41676950768391985);
    msg.setSource(52171U);
    msg.setSourceEntity(3U);
    msg.setDestination(53706U);
    msg.setDestinationEntity(215U);
    msg.id = 219U;
    msg.value = 0.9054216856276773;

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
    msg.setTimeStamp(0.8286661733124117);
    msg.setSource(12740U);
    msg.setSourceEntity(101U);
    msg.setDestination(41280U);
    msg.setDestinationEntity(163U);
    msg.id = 191U;
    msg.value = 0.8801941169930563;

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
    msg.setTimeStamp(0.3115599089176543);
    msg.setSource(29798U);
    msg.setSourceEntity(245U);
    msg.setDestination(47357U);
    msg.setDestinationEntity(4U);
    msg.id = 108U;
    msg.value = 0.7645303387611325;

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
    msg.setTimeStamp(0.008993172944137706);
    msg.setSource(31124U);
    msg.setSourceEntity(220U);
    msg.setDestination(14536U);
    msg.setDestinationEntity(194U);
    msg.id = 113U;
    msg.value = 0.05379018657157719;

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
    msg.setTimeStamp(0.8707662966651171);
    msg.setSource(31669U);
    msg.setSourceEntity(155U);
    msg.setDestination(45691U);
    msg.setDestinationEntity(206U);
    msg.id = 228U;
    msg.value = 0.7210562717707113;

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
    msg.setTimeStamp(0.7480688893418028);
    msg.setSource(29618U);
    msg.setSourceEntity(194U);
    msg.setDestination(23974U);
    msg.setDestinationEntity(47U);
    msg.id = 93U;
    msg.angle = 0.1751001236139419;

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
    msg.setTimeStamp(0.9970292452562207);
    msg.setSource(53430U);
    msg.setSourceEntity(92U);
    msg.setDestination(12354U);
    msg.setDestinationEntity(77U);
    msg.id = 108U;
    msg.angle = 0.7651521780166765;

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
    msg.setTimeStamp(0.1334799959612989);
    msg.setSource(41350U);
    msg.setSourceEntity(173U);
    msg.setDestination(32717U);
    msg.setDestinationEntity(30U);
    msg.id = 47U;
    msg.angle = 0.04645801484909773;

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
    msg.setTimeStamp(0.6120145998660648);
    msg.setSource(30585U);
    msg.setSourceEntity(41U);
    msg.setDestination(232U);
    msg.setDestinationEntity(97U);
    msg.op = 70U;
    msg.actions.assign("EGGAYECBBOYPRFZTMLFWUWUSABQBJEMRAMNHIKJNFVZMAGRCKYYDVHTDWDWGXUNWRCIZTJWKZEGFCLHGUXPMOTIRMKNNZGHCEYHZXVOQOPYYLDRAHMQOFQKBQFTAXTVINVXSSGSUMYECZAKLRFSKPKXPTWUNVGJRBRHUFOBOSIPKDXXOPBURBSXQDJZTCLJSMOQTLDSLHPDHKNEIGWEWVIICVQDOYNQ");

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
    msg.setTimeStamp(0.35128035064358876);
    msg.setSource(37025U);
    msg.setSourceEntity(109U);
    msg.setDestination(50129U);
    msg.setDestinationEntity(240U);
    msg.op = 53U;
    msg.actions.assign("LZGDXIWAJNFLCYENBEEIIUFQQZRNGVTMKFRYTCLIJDNVBBWCEKOCWQHORBMOKHSGYKLSQEPDGKULJBXNXLVF");

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
    msg.setTimeStamp(0.9694710259398278);
    msg.setSource(56593U);
    msg.setSourceEntity(241U);
    msg.setDestination(52321U);
    msg.setDestinationEntity(243U);
    msg.op = 252U;
    msg.actions.assign("YSROVVKRPCRNIPPHDNIMTOJBIPVIBLEJOVCUQYIGQPVCCBZGKYKM");

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
    msg.setTimeStamp(0.5200375294531873);
    msg.setSource(1262U);
    msg.setSourceEntity(93U);
    msg.setDestination(6679U);
    msg.setDestinationEntity(82U);
    msg.actions.assign("WBZPBMXDZKAWIPZRMKFKTICIJQVPKCEYRVUFHBDZJHJHSWDJFOBRJALTZICZCQQARFYBBMGVGNQFXBXKLFVHVWQUUFLCDEYCMIDGNNPQGOVKOIREXBXMKYIUXCEYUSGKRNLSARQYHBYRLSETEIPKTNJDQTAFPLOHTVATWSQMJGSTCZ");

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
    msg.setTimeStamp(0.4759298953800214);
    msg.setSource(39622U);
    msg.setSourceEntity(142U);
    msg.setDestination(22339U);
    msg.setDestinationEntity(108U);
    msg.actions.assign("LVRARSIKTGBMAPLEJNBNGIQWFCGWQLKULFHUCNYDMYAEBVXOEQNXRGBWPZMNSXJOUTMGYSQRFPSBCQSLTDTJGENJKFDAACDTFMZBROHWFPXSCISYAYDCRYVPEVZHWODWHSZLUYROIJVAUMKMYKHZVHZWVXEKFUAQPLMINVOTYQDQCEIXPHPUDNXMKSFJIBYGBTICIRZLWSBNTUQVXKKGUOLHNQEUZXXRHP");

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
    msg.setTimeStamp(0.8177725634223387);
    msg.setSource(15530U);
    msg.setSourceEntity(191U);
    msg.setDestination(10738U);
    msg.setDestinationEntity(254U);
    msg.actions.assign("WWOSARHFCZNDNCXOAQMEWDSGAWUEVYEJOQMXKWITFZZHIUEBHUFLPVCRBKFICQURUSXVLRMHBTKVBYCNRPOGIFSYJHUOHVTGWYKEQEQOLINAVKCYGIRJZEYNXLVESUQZZVVRFASGUNPMQT");

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
    msg.setTimeStamp(0.890079741034478);
    msg.setSource(12927U);
    msg.setSourceEntity(202U);
    msg.setDestination(44462U);
    msg.setDestinationEntity(108U);
    msg.button = 213U;
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
    msg.setTimeStamp(0.40561322073877726);
    msg.setSource(2728U);
    msg.setSourceEntity(244U);
    msg.setDestination(43540U);
    msg.setDestinationEntity(208U);
    msg.button = 102U;
    msg.value = 81U;

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
    msg.setTimeStamp(0.3638605037455822);
    msg.setSource(11823U);
    msg.setSourceEntity(38U);
    msg.setDestination(49718U);
    msg.setDestinationEntity(184U);
    msg.button = 236U;
    msg.value = 100U;

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
    msg.setTimeStamp(0.13529212305115634);
    msg.setSource(2441U);
    msg.setSourceEntity(165U);
    msg.setDestination(6009U);
    msg.setDestinationEntity(14U);
    msg.op = 92U;
    msg.text.assign("IJYWJGKNGCPSKXOENFOGPYDUPUYSZTHLQKOHKAVFEXENYGPYAMEVPNTULOTZGIGNWLSINRSUQEAZZKQ");

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
    msg.setTimeStamp(0.24310010960848039);
    msg.setSource(35555U);
    msg.setSourceEntity(78U);
    msg.setDestination(7749U);
    msg.setDestinationEntity(234U);
    msg.op = 221U;
    msg.text.assign("UNNISLUBAPUOOIGVOECWYPVMXDRRHUDJVHFKIHVYQHQMIKNDGLJJKPHANZINLQZLMYHZVDLJWXCZISYTVATFCLGYOOJHCBCNFLSEDEEFAFKGDKWMDESKXBWPERSBQATPWEVUZWXZZJGJTVOPGVZZFFXQCSNXMORGBTUKYHXPMBBXTQRCQGJXMARFTOHUBBVICWMNETMNURSUPAYCQRQKLYLAOISYJIDTCSETNMBLAGKHDFGQAPSDPWIFW");

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
    msg.setTimeStamp(0.41253922443430735);
    msg.setSource(45015U);
    msg.setSourceEntity(57U);
    msg.setDestination(18211U);
    msg.setDestinationEntity(167U);
    msg.op = 175U;
    msg.text.assign("HQELRNYVFUIDGARXMIPBCOUEZTSREYQYJXPZZEYCHYNOWKLBRUSFHOWIRTPILQXWCFWRJNTLMUKOVCLPTRRTSUMFAEWLPLSKTPVEYCENZGPAIYGFKUJNXDILMAMAKCAOSQJWCLWODYQPZFNAZKVGDZFGOHBBDJHQVDTHTSMXJBPYDUZNXZXHKRMAGJLWHUDVETGJQBCBMJIEGRBXBSVOMVUNVWGUSXVMSIKAKJNPHFQQSCHQZYEOOCFIGXI");

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
    msg.setTimeStamp(0.8063177534784608);
    msg.setSource(54334U);
    msg.setSourceEntity(156U);
    msg.setDestination(33038U);
    msg.setDestinationEntity(14U);
    msg.op = 130U;
    msg.time_remain = 0.8345897632814587;
    msg.sched_time = 0.5703389081366228;

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
    msg.setTimeStamp(0.39466556912646933);
    msg.setSource(14917U);
    msg.setSourceEntity(18U);
    msg.setDestination(53475U);
    msg.setDestinationEntity(140U);
    msg.op = 5U;
    msg.time_remain = 0.15237193232441903;
    msg.sched_time = 0.6730534240069593;

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
    msg.setTimeStamp(0.5189930054126715);
    msg.setSource(41776U);
    msg.setSourceEntity(237U);
    msg.setDestination(3180U);
    msg.setDestinationEntity(169U);
    msg.op = 228U;
    msg.time_remain = 0.03607903901540721;
    msg.sched_time = 0.8912428746185135;

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
    msg.setTimeStamp(0.19242193734303226);
    msg.setSource(60350U);
    msg.setSourceEntity(118U);
    msg.setDestination(24282U);
    msg.setDestinationEntity(135U);
    msg.name.assign("UNFLPJWGRTRFQEDUUPQKEHSABFPXRWOMWYRZZNQOJUTAGBYTQMMBOOHDVODKBFTSTUZCYJIJTMWXROYDOYAFEYCCIDUEREMMIRPJOIWSSUXHZVHJVLWLNEEIXSCHZGCZEZHDDHLNMDMIKPOJBVNFSNBOLVXBFICZRGDMIPHSJAAQYQATPUYTQFJEQAQLABPSASWGDCCTZCKLNXYQNGIVLZKKR");
    msg.op = 150U;
    msg.sched_time = 0.4886713827593592;

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
    msg.setTimeStamp(0.7871528653586027);
    msg.setSource(26904U);
    msg.setSourceEntity(249U);
    msg.setDestination(55439U);
    msg.setDestinationEntity(154U);
    msg.name.assign("RNVJNMJSFVMRFIXFRXVBDBEXDGQHXHYPTRILJXBWMLDPCXAPACKEJUTUHHRSZMGHMSQVFQXGTPHYTMPAKNTLIULKZKSTDJAP");
    msg.op = 134U;
    msg.sched_time = 0.08543455270497657;

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
    msg.setTimeStamp(0.8582119824362191);
    msg.setSource(61488U);
    msg.setSourceEntity(251U);
    msg.setDestination(38343U);
    msg.setDestinationEntity(27U);
    msg.name.assign("RLVGJEPDJUNDUQUKKXXEBZEODKEACJYTZAVLFZMPITURZLGXGVHHOYYKCVRSTCFTEGRDTNFPZQMCZAKTQ");
    msg.op = 201U;
    msg.sched_time = 0.9982581011868463;

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
    msg.setTimeStamp(0.035446895789906785);
    msg.setSource(40609U);
    msg.setSourceEntity(222U);
    msg.setDestination(1217U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.27570766658540036);
    msg.setSource(45282U);
    msg.setSourceEntity(129U);
    msg.setDestination(62688U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.720937393724109);
    msg.setSource(52964U);
    msg.setSourceEntity(185U);
    msg.setDestination(18965U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.891156838385335);
    msg.setSource(22355U);
    msg.setSourceEntity(132U);
    msg.setDestination(38593U);
    msg.setDestinationEntity(149U);
    msg.name.assign("QXTWOBHVMYPCIXSFNPNQFGIOWFUGJCHCENDGIOHFNFEKFBVEAZHYVBPUMTEIXEXJGNBJZARDTVUBPZNJBDQMXTUBOZHZGMLISDUWZXKVSAHHYCLLJSETAKXQQSFLNYKRPODTURBWKCATRFYILKLLJVJCYTNEFSVIROAG");
    msg.state = 248U;

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
    msg.setTimeStamp(0.7636701432760244);
    msg.setSource(61968U);
    msg.setSourceEntity(140U);
    msg.setDestination(37019U);
    msg.setDestinationEntity(208U);
    msg.name.assign("CBSIPADQCFTHOOHLUGWJECPHRXLVTUBRJXAZKSQVTFCTPYRWOQQMGTMANZVICGHYOFJHAIETPDYLDFZSXJPBCVKKYIYZDAVEZTJTHRZMOWMSCUUXNUHNDWFBMNMEQWRURNKMFVUEFIIQGCPATNUVYOBQKSQAKEOMB");
    msg.state = 199U;

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
    msg.setTimeStamp(0.3327656383355977);
    msg.setSource(65368U);
    msg.setSourceEntity(136U);
    msg.setDestination(38698U);
    msg.setDestinationEntity(118U);
    msg.name.assign("JXJYAOKHODQEYEZNHGPYSBBYBCIRGGQFEKYDFJWAZQDFWMOQACAXHJZYGWRQRSWXMFSIWTVNULJ");
    msg.state = 13U;

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
    msg.setTimeStamp(0.49156791531706445);
    msg.setSource(50455U);
    msg.setSourceEntity(235U);
    msg.setDestination(38894U);
    msg.setDestinationEntity(63U);
    msg.name.assign("ZEISNBGYLREJMAASBGBWYNAIUWLBYURUKWIXPQSIFASZILMVHHSMWLOMWDKDWWYVQRUWTFTDRDPNOKJKMJSADTHCDZRYRIJPLEMGVGPTJF");
    msg.value = 80U;

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
    msg.setTimeStamp(0.3973237748743714);
    msg.setSource(21526U);
    msg.setSourceEntity(100U);
    msg.setDestination(20538U);
    msg.setDestinationEntity(106U);
    msg.name.assign("RLFUAYCRQQNTMMWDYBRCJRVDIUENQURQWTMDQHEISILADSWUKEZYWVNJJNURQCDZKJFIAWVSCWGMYLNFXWKZNDWNKSYTXSBOCJFOUEJLGPKMTETGCLGNMTPGMATVBHVSYEASVOEBFXII");
    msg.value = 80U;

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
    msg.setTimeStamp(0.016686492704786282);
    msg.setSource(11016U);
    msg.setSourceEntity(206U);
    msg.setDestination(17933U);
    msg.setDestinationEntity(210U);
    msg.name.assign("DELCJDVGUUZDNXVJGSAEPCNSHGLGRUUZRWOHFMZWNHXFGOJMMKTEACTBPPFUOAIRTNHEKWBOYFYMMWSHURPJWYWHLDPCOA");
    msg.value = 53U;

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
    msg.setTimeStamp(0.36933933907777394);
    msg.setSource(10285U);
    msg.setSourceEntity(227U);
    msg.setDestination(28263U);
    msg.setDestinationEntity(249U);
    msg.name.assign("ZPWKFYDLIYGEBQRQDPFRSKRYNTFWADJEUDSAWKOTVGDIRQGQAJ");

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
    msg.setTimeStamp(0.9679887301264568);
    msg.setSource(8833U);
    msg.setSourceEntity(27U);
    msg.setDestination(44089U);
    msg.setDestinationEntity(108U);
    msg.name.assign("SNAKCTEKSBIVHCIKPSEFQBYGCLJUGCGGAUIMCLLHNISNYWNELHBHUMETFPFQSLUMSDXTJVWUMWXKAAJLIPORDNMOPIFZOOQGLYKPTVFQQWRYNETUZDPOXXSEAMYFNGGINAPE");

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
    msg.setTimeStamp(0.25530255935084567);
    msg.setSource(18521U);
    msg.setSourceEntity(18U);
    msg.setDestination(60378U);
    msg.setDestinationEntity(187U);
    msg.name.assign("QVURPGOQMXKHZYNKIETABONBLYMLCVVLNGPIWQLYIIYAAGXGNWECPLMKFSRZETSJREKSPFZFHGKERDMSIVXMXYEHFMHBZKBPXRVTFLEODUQDVBFGZAENSUVZYHPGRAHWXATONWLKAAIABWNDDUITCOVCQYJHJDTQYXKTDUJBJBJOUOZJPSUKBWI");

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
    msg.setTimeStamp(0.6499449622107112);
    msg.setSource(31702U);
    msg.setSourceEntity(64U);
    msg.setDestination(55400U);
    msg.setDestinationEntity(199U);
    msg.name.assign("RSRWDYZBBOHVQHISCTAKKKEXXDYKEOUUACGOPLNJGPALNYROSQQDGRWSNLO");
    msg.value = 95U;

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
    msg.setTimeStamp(0.936956583222778);
    msg.setSource(59227U);
    msg.setSourceEntity(131U);
    msg.setDestination(30538U);
    msg.setDestinationEntity(230U);
    msg.name.assign("ALDWBJGFDVJ");
    msg.value = 179U;

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
    msg.setTimeStamp(0.33875722844050216);
    msg.setSource(25166U);
    msg.setSourceEntity(102U);
    msg.setDestination(51987U);
    msg.setDestinationEntity(21U);
    msg.name.assign("OBHOJGXYKYTOSQVDUXYQVBWYSDLIOAUIGPRTRQKFFYEKZMNFRNDNBDIRQLDTKFUPGXLWRPIESKGGBJFVFEMIZQKCTZDWHERMRUCFFGXDTPGSMOVXWPVMNVBNKLCVANRJBUXTTEIJZNCXCPYWPAGZHJYMGTXZOMDNHQOTVWQAPUJPCLLMCQYLUWKZBTYWMHARBDHEAJHJGAOSHIVBQESZIVQHEOHZ");
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
    msg.setTimeStamp(0.5175963229376245);
    msg.setSource(39729U);
    msg.setSourceEntity(14U);
    msg.setDestination(27112U);
    msg.setDestinationEntity(232U);
    msg.id = 6U;
    msg.period = 1222555937U;
    msg.duty_cycle = 273148101U;

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
    msg.setTimeStamp(0.2084776627621837);
    msg.setSource(61077U);
    msg.setSourceEntity(191U);
    msg.setDestination(36240U);
    msg.setDestinationEntity(198U);
    msg.id = 34U;
    msg.period = 3642658344U;
    msg.duty_cycle = 492457015U;

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
    msg.setTimeStamp(0.6833122895205993);
    msg.setSource(24697U);
    msg.setSourceEntity(113U);
    msg.setDestination(38416U);
    msg.setDestinationEntity(39U);
    msg.id = 76U;
    msg.period = 47882843U;
    msg.duty_cycle = 2957165769U;

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
    msg.setTimeStamp(0.6082213078111463);
    msg.setSource(38405U);
    msg.setSourceEntity(241U);
    msg.setDestination(13570U);
    msg.setDestinationEntity(68U);
    msg.id = 147U;
    msg.period = 3007156312U;
    msg.duty_cycle = 1347065387U;

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
    msg.setTimeStamp(0.4063068432868814);
    msg.setSource(52337U);
    msg.setSourceEntity(229U);
    msg.setDestination(38186U);
    msg.setDestinationEntity(139U);
    msg.id = 47U;
    msg.period = 1693893826U;
    msg.duty_cycle = 3894311300U;

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
    msg.setTimeStamp(0.39881157445362325);
    msg.setSource(44493U);
    msg.setSourceEntity(252U);
    msg.setDestination(17675U);
    msg.setDestinationEntity(220U);
    msg.id = 76U;
    msg.period = 3497729383U;
    msg.duty_cycle = 1602716214U;

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
    msg.setTimeStamp(0.956014167759658);
    msg.setSource(11520U);
    msg.setSourceEntity(144U);
    msg.setDestination(20854U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.37494241913794624;
    msg.lon = 0.7217792119781639;
    msg.height = 0.6050783392930543;
    msg.x = 0.43513732616696876;
    msg.y = 0.23842784178311682;
    msg.z = 0.36815992285656995;
    msg.phi = 0.9921814248479729;
    msg.theta = 0.5432193679143164;
    msg.psi = 0.6752291005866274;
    msg.u = 0.5919887548473808;
    msg.v = 0.5067736224321719;
    msg.w = 0.13827002072258998;
    msg.vx = 0.11328254274428451;
    msg.vy = 0.08405757820265713;
    msg.vz = 0.6930137763799575;
    msg.p = 0.8252575986468178;
    msg.q = 0.4679295415402739;
    msg.r = 0.22756925854681687;
    msg.depth = 0.18395262453103278;
    msg.alt = 0.6466492994623464;

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
    msg.setTimeStamp(0.35378424961340504);
    msg.setSource(59297U);
    msg.setSourceEntity(72U);
    msg.setDestination(49398U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.6831544500411043;
    msg.lon = 0.04037629830820655;
    msg.height = 0.8278879640389002;
    msg.x = 0.03212514798019084;
    msg.y = 0.19044900154538447;
    msg.z = 0.1538215650080189;
    msg.phi = 0.7194608653343908;
    msg.theta = 0.45478496121932666;
    msg.psi = 0.9485712150168918;
    msg.u = 0.05337627105580589;
    msg.v = 0.5301305985516949;
    msg.w = 0.5966191925040815;
    msg.vx = 0.12345266092769536;
    msg.vy = 0.7386781898916004;
    msg.vz = 0.2652828274436517;
    msg.p = 0.08463973940349645;
    msg.q = 0.6093811956633923;
    msg.r = 0.13295314873696973;
    msg.depth = 0.24029160589199672;
    msg.alt = 0.4984365248580368;

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
    msg.setTimeStamp(0.6623256622410792);
    msg.setSource(65256U);
    msg.setSourceEntity(115U);
    msg.setDestination(53585U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.2447473510378454;
    msg.lon = 0.5967379305257563;
    msg.height = 0.09126108000689415;
    msg.x = 0.272377565290968;
    msg.y = 0.18571049036744047;
    msg.z = 0.012265554942407109;
    msg.phi = 0.7552758879448429;
    msg.theta = 0.3060854555257895;
    msg.psi = 0.28709227365732615;
    msg.u = 0.3140181396291346;
    msg.v = 0.2867375453732697;
    msg.w = 0.3072473931673263;
    msg.vx = 0.8240562902286876;
    msg.vy = 0.22792051311545825;
    msg.vz = 0.24701169940798862;
    msg.p = 0.4699175842796506;
    msg.q = 0.4192098297067952;
    msg.r = 0.915036556290193;
    msg.depth = 0.49982708039584534;
    msg.alt = 0.3110487428088411;

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
    msg.setTimeStamp(0.9280297006685246);
    msg.setSource(35295U);
    msg.setSourceEntity(180U);
    msg.setDestination(56810U);
    msg.setDestinationEntity(32U);
    msg.x = 0.49006892806203894;
    msg.y = 0.7073900146335845;
    msg.z = 0.27579419155844465;

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
    msg.setTimeStamp(0.1994536273507973);
    msg.setSource(17325U);
    msg.setSourceEntity(219U);
    msg.setDestination(24845U);
    msg.setDestinationEntity(127U);
    msg.x = 0.8658562982552691;
    msg.y = 0.5416116895473664;
    msg.z = 0.1879903628918681;

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
    msg.setTimeStamp(0.5673818215624914);
    msg.setSource(2247U);
    msg.setSourceEntity(29U);
    msg.setDestination(48146U);
    msg.setDestinationEntity(65U);
    msg.x = 0.7044978369699331;
    msg.y = 0.25928465968594805;
    msg.z = 0.3343779377783104;

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
    msg.setTimeStamp(0.9453675279543692);
    msg.setSource(4807U);
    msg.setSourceEntity(148U);
    msg.setDestination(128U);
    msg.setDestinationEntity(126U);
    msg.value = 0.99339948049706;

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
    msg.setTimeStamp(0.2529293711311368);
    msg.setSource(17543U);
    msg.setSourceEntity(76U);
    msg.setDestination(46992U);
    msg.setDestinationEntity(205U);
    msg.value = 0.6394989694222635;

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
    msg.setTimeStamp(0.8743485495477118);
    msg.setSource(4443U);
    msg.setSourceEntity(185U);
    msg.setDestination(8484U);
    msg.setDestinationEntity(201U);
    msg.value = 0.10573017896070591;

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
    msg.setTimeStamp(0.9643547428603227);
    msg.setSource(59180U);
    msg.setSourceEntity(14U);
    msg.setDestination(5156U);
    msg.setDestinationEntity(246U);
    msg.value = 0.5093219972548402;

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
    msg.setTimeStamp(0.0012013399590908858);
    msg.setSource(53207U);
    msg.setSourceEntity(225U);
    msg.setDestination(20457U);
    msg.setDestinationEntity(253U);
    msg.value = 0.34844937399817544;

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
    msg.setTimeStamp(0.08511205374609399);
    msg.setSource(17309U);
    msg.setSourceEntity(108U);
    msg.setDestination(63331U);
    msg.setDestinationEntity(169U);
    msg.value = 0.8846872033295722;

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
    msg.setTimeStamp(0.47705348322822705);
    msg.setSource(62357U);
    msg.setSourceEntity(177U);
    msg.setDestination(22670U);
    msg.setDestinationEntity(254U);
    msg.x = 0.5392649162476004;
    msg.y = 0.09170089500061918;
    msg.z = 0.20617938941922342;
    msg.phi = 0.12378390250657523;
    msg.theta = 0.1224312082512452;
    msg.psi = 0.6344681932679788;
    msg.p = 0.8058719555646608;
    msg.q = 0.6743472257558573;
    msg.r = 0.3577179502467652;
    msg.u = 0.07775173493333787;
    msg.v = 0.6442909211086757;
    msg.w = 0.37541251626211736;
    msg.bias_psi = 0.1806490868062719;
    msg.bias_r = 0.7581141765948219;

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
    msg.setTimeStamp(0.2523402596758054);
    msg.setSource(51489U);
    msg.setSourceEntity(25U);
    msg.setDestination(7746U);
    msg.setDestinationEntity(225U);
    msg.x = 0.5454682330687426;
    msg.y = 0.7486276369974773;
    msg.z = 0.5331837382574868;
    msg.phi = 0.5183989348356949;
    msg.theta = 0.9261181738678447;
    msg.psi = 0.8957255087142956;
    msg.p = 0.06107253792155087;
    msg.q = 0.7487173869496162;
    msg.r = 0.014339079181827197;
    msg.u = 0.8883585279868187;
    msg.v = 0.1869967711958942;
    msg.w = 0.06727220676681356;
    msg.bias_psi = 0.15328845050197126;
    msg.bias_r = 0.12032578526330084;

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
    msg.setTimeStamp(0.24439827588377805);
    msg.setSource(40337U);
    msg.setSourceEntity(203U);
    msg.setDestination(4403U);
    msg.setDestinationEntity(159U);
    msg.x = 0.7327157265376056;
    msg.y = 0.4206560556864166;
    msg.z = 0.45688456930686394;
    msg.phi = 0.29722683959604457;
    msg.theta = 0.170219929315654;
    msg.psi = 0.8192925265724552;
    msg.p = 0.026717249666490916;
    msg.q = 0.1467059508893449;
    msg.r = 0.32558655787923474;
    msg.u = 0.6392486417750115;
    msg.v = 0.997346208059785;
    msg.w = 0.32634429942881893;
    msg.bias_psi = 0.18692985039000098;
    msg.bias_r = 0.758031099958398;

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
    msg.setTimeStamp(0.6335782515901284);
    msg.setSource(14710U);
    msg.setSourceEntity(200U);
    msg.setDestination(10573U);
    msg.setDestinationEntity(206U);
    msg.bias_psi = 0.49716241102445846;
    msg.bias_r = 0.8926495062958559;
    msg.cog = 0.1588448156359571;
    msg.cyaw = 0.8723866602953857;
    msg.lbl_rej_level = 0.2019370576548707;
    msg.gps_rej_level = 0.8359210996426223;
    msg.custom_x = 0.26089531372592867;
    msg.custom_y = 0.9897050881303558;
    msg.custom_z = 0.06389041785927008;

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
    msg.setTimeStamp(0.11157543014181825);
    msg.setSource(23324U);
    msg.setSourceEntity(115U);
    msg.setDestination(16705U);
    msg.setDestinationEntity(158U);
    msg.bias_psi = 0.17355687125708996;
    msg.bias_r = 0.18549226912743677;
    msg.cog = 0.07086028685742163;
    msg.cyaw = 0.3299455392592927;
    msg.lbl_rej_level = 0.7824962185812221;
    msg.gps_rej_level = 0.4114910022413696;
    msg.custom_x = 0.7984509075035164;
    msg.custom_y = 0.14288762914686637;
    msg.custom_z = 0.3082842731662411;

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
    msg.setTimeStamp(0.6831627172930818);
    msg.setSource(39262U);
    msg.setSourceEntity(43U);
    msg.setDestination(22278U);
    msg.setDestinationEntity(149U);
    msg.bias_psi = 0.6065047747713056;
    msg.bias_r = 0.23992646557749342;
    msg.cog = 0.04926098829219161;
    msg.cyaw = 0.5961805850135056;
    msg.lbl_rej_level = 0.054452617704921935;
    msg.gps_rej_level = 0.6799933028548658;
    msg.custom_x = 0.5797355654793105;
    msg.custom_y = 0.9628058441165721;
    msg.custom_z = 0.1713904562944346;

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
    msg.setTimeStamp(0.026214990616372558);
    msg.setSource(47329U);
    msg.setSourceEntity(74U);
    msg.setDestination(7808U);
    msg.setDestinationEntity(8U);
    msg.utc_time = 0.6712446073411213;
    msg.reason = 118U;

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
    msg.setTimeStamp(0.7853027103442707);
    msg.setSource(9416U);
    msg.setSourceEntity(120U);
    msg.setDestination(9311U);
    msg.setDestinationEntity(20U);
    msg.utc_time = 0.8092859652404178;
    msg.reason = 237U;

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
    msg.setTimeStamp(0.7952935009302199);
    msg.setSource(58647U);
    msg.setSourceEntity(164U);
    msg.setDestination(5427U);
    msg.setDestinationEntity(214U);
    msg.utc_time = 0.06323824225021635;
    msg.reason = 24U;

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
    msg.setTimeStamp(0.6667165612045706);
    msg.setSource(46496U);
    msg.setSourceEntity(147U);
    msg.setDestination(18451U);
    msg.setDestinationEntity(49U);
    msg.id = 104U;
    msg.range = 0.9822773983712607;
    msg.acceptance = 20U;

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
    msg.setTimeStamp(0.14337684734005862);
    msg.setSource(41355U);
    msg.setSourceEntity(105U);
    msg.setDestination(36355U);
    msg.setDestinationEntity(70U);
    msg.id = 247U;
    msg.range = 0.8142259613013638;
    msg.acceptance = 8U;

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
    msg.setTimeStamp(0.7922437966737901);
    msg.setSource(34212U);
    msg.setSourceEntity(239U);
    msg.setDestination(26744U);
    msg.setDestinationEntity(236U);
    msg.id = 213U;
    msg.range = 0.8122868809470736;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.4558082005771499);
    msg.setSource(13040U);
    msg.setSourceEntity(178U);
    msg.setDestination(4433U);
    msg.setDestinationEntity(46U);
    msg.type = 241U;
    msg.reason = 36U;
    msg.value = 0.9929643401747407;
    msg.timestep = 0.5527214492840554;

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
    msg.setTimeStamp(0.30563140240575015);
    msg.setSource(7481U);
    msg.setSourceEntity(231U);
    msg.setDestination(33493U);
    msg.setDestinationEntity(104U);
    msg.type = 250U;
    msg.reason = 239U;
    msg.value = 0.7624491060325723;
    msg.timestep = 0.9122946395423109;

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
    msg.setTimeStamp(0.986821848741381);
    msg.setSource(55154U);
    msg.setSourceEntity(221U);
    msg.setDestination(15488U);
    msg.setDestinationEntity(67U);
    msg.type = 30U;
    msg.reason = 123U;
    msg.value = 0.9703560449257854;
    msg.timestep = 0.5329926217213642;

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
    msg.setTimeStamp(0.33638593352382673);
    msg.setSource(55420U);
    msg.setSourceEntity(14U);
    msg.setDestination(6122U);
    msg.setDestinationEntity(59U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GFZMPAYKAOCOPPZDGBWZOEXTFQFSMFQIMRW");
    tmp_msg_0.lat = 0.5300887514090615;
    tmp_msg_0.lon = 0.581177469747601;
    tmp_msg_0.depth = 0.15002104821442364;
    tmp_msg_0.query_channel = 5U;
    tmp_msg_0.reply_channel = 196U;
    tmp_msg_0.transponder_delay = 175U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8611787040481448;
    msg.y = 0.47979269085907394;
    msg.var_x = 0.21383106821890496;
    msg.var_y = 0.5044362340939097;
    msg.distance = 0.6284813041548519;

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
    msg.setTimeStamp(0.42189452684240014);
    msg.setSource(63249U);
    msg.setSourceEntity(164U);
    msg.setDestination(48083U);
    msg.setDestinationEntity(203U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NWQVZFREXLDIYVAMTVCOHIJMLVBSTVNZUQDWJWXDUCORZFJRPBPMETIMOTJLUZVQSNMLHXTTLACIWCBBXQMVVJRUESYLBFEMXJPOISRTYJFEYRDLLZNQWHAIKNSPTWZZ");
    tmp_msg_0.lat = 0.49727425273767933;
    tmp_msg_0.lon = 0.5727894353804042;
    tmp_msg_0.depth = 0.44235514709549895;
    tmp_msg_0.query_channel = 117U;
    tmp_msg_0.reply_channel = 57U;
    tmp_msg_0.transponder_delay = 103U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4381796641463247;
    msg.y = 0.03364784612096472;
    msg.var_x = 0.12741703935082094;
    msg.var_y = 0.7178200926912605;
    msg.distance = 0.761793325779181;

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
    msg.setTimeStamp(0.43824269210808064);
    msg.setSource(9572U);
    msg.setSourceEntity(229U);
    msg.setDestination(22472U);
    msg.setDestinationEntity(214U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YTMQTXTMYYLPSACARBJWMBDCVJVWEBYZSIABIYKPFJTKKCPCRGVVPKOHBOFOHN");
    tmp_msg_0.lat = 0.1818371181957933;
    tmp_msg_0.lon = 0.8026059764271679;
    tmp_msg_0.depth = 0.35367002197507524;
    tmp_msg_0.query_channel = 151U;
    tmp_msg_0.reply_channel = 47U;
    tmp_msg_0.transponder_delay = 243U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.17083097640499656;
    msg.y = 0.3755046466173576;
    msg.var_x = 0.21659783640131802;
    msg.var_y = 0.623907376923085;
    msg.distance = 0.5834887072346896;

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
    msg.setTimeStamp(0.2954983660974768);
    msg.setSource(3510U);
    msg.setSourceEntity(109U);
    msg.setDestination(11351U);
    msg.setDestinationEntity(52U);
    msg.state = 135U;

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
    msg.setTimeStamp(0.45148748974701225);
    msg.setSource(17326U);
    msg.setSourceEntity(161U);
    msg.setDestination(53812U);
    msg.setDestinationEntity(80U);
    msg.state = 70U;

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
    msg.setTimeStamp(0.08127792759769925);
    msg.setSource(757U);
    msg.setSourceEntity(244U);
    msg.setDestination(44690U);
    msg.setDestinationEntity(183U);
    msg.state = 128U;

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
    msg.setTimeStamp(0.21140777138503297);
    msg.setSource(18950U);
    msg.setSourceEntity(144U);
    msg.setDestination(10469U);
    msg.setDestinationEntity(21U);
    msg.x = 0.899263474528822;
    msg.y = 0.35800115335047944;
    msg.z = 0.8134301923327488;

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
    msg.setTimeStamp(0.5101486441019596);
    msg.setSource(34813U);
    msg.setSourceEntity(214U);
    msg.setDestination(49291U);
    msg.setDestinationEntity(75U);
    msg.x = 0.5685801348166989;
    msg.y = 0.7407919154279986;
    msg.z = 0.42922613836853085;

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
    msg.setTimeStamp(0.9428398343641187);
    msg.setSource(11044U);
    msg.setSourceEntity(140U);
    msg.setDestination(56124U);
    msg.setDestinationEntity(96U);
    msg.x = 0.5794630822875682;
    msg.y = 0.2436750612794566;
    msg.z = 0.6337544064395206;

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
    msg.setTimeStamp(0.3677031490245499);
    msg.setSource(58048U);
    msg.setSourceEntity(117U);
    msg.setDestination(27271U);
    msg.setDestinationEntity(20U);
    msg.value = 0.19555849090986932;

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
    msg.setTimeStamp(0.6742818756382065);
    msg.setSource(64226U);
    msg.setSourceEntity(228U);
    msg.setDestination(31202U);
    msg.setDestinationEntity(59U);
    msg.value = 0.07542113124623995;

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
    msg.setTimeStamp(0.8429007061741747);
    msg.setSource(59168U);
    msg.setSourceEntity(149U);
    msg.setDestination(8023U);
    msg.setDestinationEntity(67U);
    msg.value = 0.6674920307557736;

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
    msg.setTimeStamp(0.9578357031229697);
    msg.setSource(60959U);
    msg.setSourceEntity(92U);
    msg.setDestination(36542U);
    msg.setDestinationEntity(113U);
    msg.value = 0.1198047823754752;
    msg.z_units = 17U;

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
    msg.setTimeStamp(0.9606384775119563);
    msg.setSource(25856U);
    msg.setSourceEntity(114U);
    msg.setDestination(19177U);
    msg.setDestinationEntity(120U);
    msg.value = 0.0024055463272444344;
    msg.z_units = 119U;

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
    msg.setTimeStamp(0.5380269594161531);
    msg.setSource(31548U);
    msg.setSourceEntity(49U);
    msg.setDestination(63990U);
    msg.setDestinationEntity(252U);
    msg.value = 0.05360429758830465;
    msg.z_units = 36U;

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
    msg.setTimeStamp(0.18956895799857365);
    msg.setSource(2672U);
    msg.setSourceEntity(156U);
    msg.setDestination(6246U);
    msg.setDestinationEntity(249U);
    msg.value = 0.4487885806179862;
    msg.speed_units = 108U;

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
    msg.setTimeStamp(0.7084840679307817);
    msg.setSource(29280U);
    msg.setSourceEntity(76U);
    msg.setDestination(1690U);
    msg.setDestinationEntity(153U);
    msg.value = 0.6228211984572138;
    msg.speed_units = 233U;

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
    msg.setTimeStamp(0.06745581671646539);
    msg.setSource(46780U);
    msg.setSourceEntity(110U);
    msg.setDestination(30538U);
    msg.setDestinationEntity(110U);
    msg.value = 0.40114663778433024;
    msg.speed_units = 162U;

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
    msg.setTimeStamp(0.6592753606714147);
    msg.setSource(4910U);
    msg.setSourceEntity(18U);
    msg.setDestination(10655U);
    msg.setDestinationEntity(186U);
    msg.value = 0.10975043497359394;

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
    msg.setTimeStamp(0.7255321201259978);
    msg.setSource(65514U);
    msg.setSourceEntity(19U);
    msg.setDestination(47823U);
    msg.setDestinationEntity(231U);
    msg.value = 0.053937930981279525;

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
    msg.setTimeStamp(0.32180361258375545);
    msg.setSource(38708U);
    msg.setSourceEntity(29U);
    msg.setDestination(30387U);
    msg.setDestinationEntity(44U);
    msg.value = 0.49002781993137057;

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
    msg.setTimeStamp(0.8683780027593373);
    msg.setSource(14777U);
    msg.setSourceEntity(209U);
    msg.setDestination(28242U);
    msg.setDestinationEntity(210U);
    msg.value = 0.05168833444682397;

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
    msg.setTimeStamp(0.7883045788948919);
    msg.setSource(13781U);
    msg.setSourceEntity(211U);
    msg.setDestination(50584U);
    msg.setDestinationEntity(253U);
    msg.value = 0.4439968564609753;

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
    msg.setTimeStamp(0.5127210269882664);
    msg.setSource(56653U);
    msg.setSourceEntity(169U);
    msg.setDestination(54117U);
    msg.setDestinationEntity(141U);
    msg.value = 0.7096762037583892;

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
    msg.setTimeStamp(0.787161864197922);
    msg.setSource(4016U);
    msg.setSourceEntity(67U);
    msg.setDestination(49760U);
    msg.setDestinationEntity(23U);
    msg.value = 0.5714239047292019;

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
    msg.setTimeStamp(0.940893514759934);
    msg.setSource(52848U);
    msg.setSourceEntity(25U);
    msg.setDestination(18353U);
    msg.setDestinationEntity(52U);
    msg.value = 0.4289860479615698;

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
    msg.setTimeStamp(0.28353831138833663);
    msg.setSource(25124U);
    msg.setSourceEntity(111U);
    msg.setDestination(8438U);
    msg.setDestinationEntity(90U);
    msg.value = 0.6317737236579736;

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
    msg.setTimeStamp(0.8686235600119799);
    msg.setSource(26668U);
    msg.setSourceEntity(105U);
    msg.setDestination(20755U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 3355081360U;
    msg.start_lat = 0.45605590354780023;
    msg.start_lon = 0.49627307040939217;
    msg.start_z = 0.15616160590608597;
    msg.start_z_units = 32U;
    msg.end_lat = 0.781608939441332;
    msg.end_lon = 0.09147244734618953;
    msg.end_z = 0.18890370845718063;
    msg.end_z_units = 246U;
    msg.speed = 0.8688171118252859;
    msg.speed_units = 14U;
    msg.lradius = 0.8218573105829279;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.2718427590380874);
    msg.setSource(58033U);
    msg.setSourceEntity(160U);
    msg.setDestination(39732U);
    msg.setDestinationEntity(91U);
    msg.path_ref = 990781481U;
    msg.start_lat = 0.6029637804678215;
    msg.start_lon = 0.8053281216835356;
    msg.start_z = 0.39672636299981534;
    msg.start_z_units = 131U;
    msg.end_lat = 0.4755379638825753;
    msg.end_lon = 0.7540645676614827;
    msg.end_z = 0.07219180720370932;
    msg.end_z_units = 181U;
    msg.speed = 0.8255766745252917;
    msg.speed_units = 7U;
    msg.lradius = 0.21707506041419122;
    msg.flags = 155U;

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
    msg.setTimeStamp(0.12743339677800947);
    msg.setSource(15321U);
    msg.setSourceEntity(45U);
    msg.setDestination(37480U);
    msg.setDestinationEntity(248U);
    msg.path_ref = 735586624U;
    msg.start_lat = 0.28584625070538605;
    msg.start_lon = 0.3996090430093918;
    msg.start_z = 0.6954650742315521;
    msg.start_z_units = 70U;
    msg.end_lat = 0.6986556416823565;
    msg.end_lon = 0.9157239456700591;
    msg.end_z = 0.5580220901873812;
    msg.end_z_units = 67U;
    msg.speed = 0.9809476468655398;
    msg.speed_units = 140U;
    msg.lradius = 0.1366339735940839;
    msg.flags = 203U;

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
    msg.setTimeStamp(0.7818780248339927);
    msg.setSource(28592U);
    msg.setSourceEntity(108U);
    msg.setDestination(64634U);
    msg.setDestinationEntity(72U);
    msg.x = 0.9880017699893894;
    msg.y = 0.569038126039239;
    msg.z = 0.8939031198660309;
    msg.k = 0.9587378207880494;
    msg.m = 0.08517025547496504;
    msg.n = 0.594851911897135;
    msg.flags = 6U;

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
    msg.setTimeStamp(0.5790822571694089);
    msg.setSource(21663U);
    msg.setSourceEntity(206U);
    msg.setDestination(46687U);
    msg.setDestinationEntity(100U);
    msg.x = 0.08748295345561119;
    msg.y = 0.9098715386328169;
    msg.z = 0.20099392815755324;
    msg.k = 0.24398796138306245;
    msg.m = 0.7226004881454786;
    msg.n = 0.7914643333565758;
    msg.flags = 200U;

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
    msg.setTimeStamp(0.7504472540488359);
    msg.setSource(13202U);
    msg.setSourceEntity(35U);
    msg.setDestination(48657U);
    msg.setDestinationEntity(217U);
    msg.x = 0.5194981488269804;
    msg.y = 0.0403692012400555;
    msg.z = 0.9981880499751286;
    msg.k = 0.932698633505304;
    msg.m = 0.1386196229778074;
    msg.n = 0.5281706798320907;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.32285917107266304);
    msg.setSource(12643U);
    msg.setSourceEntity(39U);
    msg.setDestination(19798U);
    msg.setDestinationEntity(241U);
    msg.value = 0.08995536693432316;

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
    msg.setTimeStamp(0.9505263657688471);
    msg.setSource(64410U);
    msg.setSourceEntity(160U);
    msg.setDestination(18075U);
    msg.setDestinationEntity(246U);
    msg.value = 0.09770639323425012;

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
    msg.setTimeStamp(0.8740148524361993);
    msg.setSource(44017U);
    msg.setSourceEntity(158U);
    msg.setDestination(62479U);
    msg.setDestinationEntity(114U);
    msg.value = 0.7107363002897845;

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
    msg.setTimeStamp(0.4100873465489071);
    msg.setSource(43719U);
    msg.setSourceEntity(182U);
    msg.setDestination(10002U);
    msg.setDestinationEntity(74U);
    msg.u = 0.9334128823930987;
    msg.v = 0.11311523099279541;
    msg.w = 0.3487261258309171;
    msg.p = 0.018724187943232495;
    msg.q = 0.7160221592537709;
    msg.r = 0.5909991753500594;
    msg.flags = 231U;

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
    msg.setTimeStamp(0.2082919621112881);
    msg.setSource(37067U);
    msg.setSourceEntity(29U);
    msg.setDestination(8078U);
    msg.setDestinationEntity(199U);
    msg.u = 0.13241806864708183;
    msg.v = 0.3100259006305587;
    msg.w = 0.1410636877500301;
    msg.p = 0.1636536613150491;
    msg.q = 0.21000439032360474;
    msg.r = 0.6797206666677863;
    msg.flags = 209U;

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
    msg.setTimeStamp(0.10179911388051022);
    msg.setSource(1236U);
    msg.setSourceEntity(119U);
    msg.setDestination(62661U);
    msg.setDestinationEntity(205U);
    msg.u = 0.8775180491695618;
    msg.v = 0.9800548600038399;
    msg.w = 0.6029974564280263;
    msg.p = 0.022635397899267384;
    msg.q = 0.10258111288727434;
    msg.r = 0.5697772698119346;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.909104526276455);
    msg.setSource(33534U);
    msg.setSourceEntity(210U);
    msg.setDestination(12054U);
    msg.setDestinationEntity(5U);
    msg.path_ref = 3329791310U;
    msg.start_lat = 0.46804130368944485;
    msg.start_lon = 0.6344095984839075;
    msg.start_z = 0.6055362951013022;
    msg.start_z_units = 111U;
    msg.end_lat = 0.839821016640806;
    msg.end_lon = 0.9246387993019123;
    msg.end_z = 0.052020204301946316;
    msg.end_z_units = 182U;
    msg.lradius = 0.8428244083452339;
    msg.flags = 91U;
    msg.x = 0.24941768344068305;
    msg.y = 0.46579901001895807;
    msg.z = 0.1753043028454324;
    msg.vx = 0.7569394998250888;
    msg.vy = 0.17735108576207492;
    msg.vz = 0.5181621312875552;
    msg.course_error = 0.5092779973142822;
    msg.eta = 54378U;

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
    msg.setTimeStamp(0.9834524781115911);
    msg.setSource(56851U);
    msg.setSourceEntity(172U);
    msg.setDestination(55682U);
    msg.setDestinationEntity(43U);
    msg.path_ref = 335594030U;
    msg.start_lat = 0.7885880817748018;
    msg.start_lon = 0.8917758443701383;
    msg.start_z = 0.5644168662445228;
    msg.start_z_units = 113U;
    msg.end_lat = 0.8881654962019314;
    msg.end_lon = 0.37768337444326294;
    msg.end_z = 0.37562676868792766;
    msg.end_z_units = 91U;
    msg.lradius = 0.09895182184124629;
    msg.flags = 87U;
    msg.x = 0.9340186161801289;
    msg.y = 0.14574296752539673;
    msg.z = 0.05291299626583046;
    msg.vx = 0.11591061990616458;
    msg.vy = 0.7188164889035302;
    msg.vz = 0.34445832400230536;
    msg.course_error = 0.531667592103182;
    msg.eta = 41257U;

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
    msg.setTimeStamp(0.508591018266809);
    msg.setSource(5880U);
    msg.setSourceEntity(83U);
    msg.setDestination(60868U);
    msg.setDestinationEntity(0U);
    msg.path_ref = 3562742593U;
    msg.start_lat = 0.40468768821229706;
    msg.start_lon = 0.8322500016281896;
    msg.start_z = 0.6138415745674521;
    msg.start_z_units = 16U;
    msg.end_lat = 0.6388759952292895;
    msg.end_lon = 0.4458717490717986;
    msg.end_z = 0.2898522544491019;
    msg.end_z_units = 210U;
    msg.lradius = 0.8401937107914108;
    msg.flags = 212U;
    msg.x = 0.8633084661292213;
    msg.y = 0.6051554165293481;
    msg.z = 0.02236477456952435;
    msg.vx = 0.6140255746298239;
    msg.vy = 0.7649461716653082;
    msg.vz = 0.37072499062151876;
    msg.course_error = 0.7930678213492093;
    msg.eta = 20155U;

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
    msg.setTimeStamp(0.5088076792653561);
    msg.setSource(19586U);
    msg.setSourceEntity(201U);
    msg.setDestination(20816U);
    msg.setDestinationEntity(209U);
    msg.k = 0.2013541374465645;
    msg.m = 0.06271286375125718;
    msg.n = 0.5778299327832287;

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
    msg.setTimeStamp(0.9938649409741724);
    msg.setSource(6707U);
    msg.setSourceEntity(195U);
    msg.setDestination(8558U);
    msg.setDestinationEntity(14U);
    msg.k = 0.03556744787782473;
    msg.m = 0.07900069100757101;
    msg.n = 0.3928362723872796;

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
    msg.setTimeStamp(0.8006656063788227);
    msg.setSource(38051U);
    msg.setSourceEntity(237U);
    msg.setDestination(44769U);
    msg.setDestinationEntity(11U);
    msg.k = 0.5626926263646066;
    msg.m = 0.4177314638362868;
    msg.n = 0.5196504718706035;

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
    msg.setTimeStamp(0.05179102282848791);
    msg.setSource(65135U);
    msg.setSourceEntity(66U);
    msg.setDestination(1695U);
    msg.setDestinationEntity(193U);
    msg.p = 0.8941676009319214;
    msg.i = 0.8663912293516425;
    msg.d = 0.7638807703358378;
    msg.a = 0.4794366107537166;

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
    msg.setTimeStamp(0.3726960816350148);
    msg.setSource(63263U);
    msg.setSourceEntity(235U);
    msg.setDestination(30247U);
    msg.setDestinationEntity(22U);
    msg.p = 0.5071209567318182;
    msg.i = 0.8033110542902916;
    msg.d = 0.17874309263740729;
    msg.a = 0.5806252469526382;

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
    msg.setTimeStamp(0.9485480528014638);
    msg.setSource(7680U);
    msg.setSourceEntity(80U);
    msg.setDestination(63679U);
    msg.setDestinationEntity(113U);
    msg.p = 0.6247815295327835;
    msg.i = 0.8212436537584765;
    msg.d = 0.6740138808594669;
    msg.a = 0.6153583216908912;

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
    msg.setTimeStamp(0.3797974497434775);
    msg.setSource(41840U);
    msg.setSourceEntity(181U);
    msg.setDestination(34106U);
    msg.setDestinationEntity(108U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.7037770507382255);
    msg.setSource(53742U);
    msg.setSourceEntity(46U);
    msg.setDestination(35085U);
    msg.setDestinationEntity(45U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.6247662131154049);
    msg.setSource(55210U);
    msg.setSourceEntity(13U);
    msg.setDestination(13096U);
    msg.setDestinationEntity(103U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.4373645218090545);
    msg.setSource(42352U);
    msg.setSourceEntity(25U);
    msg.setDestination(32458U);
    msg.setDestinationEntity(9U);
    msg.timeout = 26498U;
    msg.lat = 0.362915652864214;
    msg.lon = 0.878913632013244;
    msg.z = 0.7164248026641112;
    msg.z_units = 185U;
    msg.speed = 0.54229446639262;
    msg.speed_units = 139U;
    msg.roll = 0.3916969940960279;
    msg.pitch = 0.8169588615805798;
    msg.yaw = 0.17741241026251675;
    msg.custom.assign("QRJOIWPHKFQCNBHVIRIFUUYDZYRQOLNMBOCKBXMNQRFVGEBGFYIMDETIWEDKCAPPUZOVSZOQRWWLXNKKZAWSEXUVJDLMIWELNZFAWILKTEBKXNHYBRQZDNNSKNFQHFCBLTSGYVBYLXVWRSQAMGSGGXAPNEX");

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
    msg.setTimeStamp(0.42474470409096177);
    msg.setSource(5566U);
    msg.setSourceEntity(160U);
    msg.setDestination(22232U);
    msg.setDestinationEntity(197U);
    msg.timeout = 27268U;
    msg.lat = 0.30530241081886356;
    msg.lon = 0.9504198624986346;
    msg.z = 0.13314625313929718;
    msg.z_units = 225U;
    msg.speed = 0.3397753811540858;
    msg.speed_units = 101U;
    msg.roll = 0.6002979705611725;
    msg.pitch = 0.6452906254374259;
    msg.yaw = 0.5329636187838807;
    msg.custom.assign("YFAFMVNIPPKDKBUTXQWJFETQFTVKQFRTEGIRCJSZLYOGTQBNMKNOBBLBESBSQVRFPZSNXGKCANKPFVTPOWEZJWIPDDUYEDVO");

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
    msg.setTimeStamp(0.8563221255542208);
    msg.setSource(210U);
    msg.setSourceEntity(194U);
    msg.setDestination(26776U);
    msg.setDestinationEntity(92U);
    msg.timeout = 10589U;
    msg.lat = 0.5166931895382102;
    msg.lon = 0.8944280997938441;
    msg.z = 0.005982448364716841;
    msg.z_units = 142U;
    msg.speed = 0.3439002046155779;
    msg.speed_units = 116U;
    msg.roll = 0.4469458825996462;
    msg.pitch = 0.6057980975284238;
    msg.yaw = 0.28934193126812735;
    msg.custom.assign("DPRXECBEHKIBVNNTWRWBSCHBRRDGILKDVPPJKLLMCYTOUHSEOXYHZIMCCUFZBMNSWZEMPEULKBIBSMPIOHSUJDOIUQOQKKSUFNTOALSDFVRARPRAWFODSEUFYAWRDZZGKGTCGGLLESHVPGTQQMKLFJDFBNAOTNYX");

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
    msg.setTimeStamp(0.6204205506170033);
    msg.setSource(34501U);
    msg.setSourceEntity(38U);
    msg.setDestination(22456U);
    msg.setDestinationEntity(36U);
    msg.timeout = 13843U;
    msg.lat = 0.021182151997251375;
    msg.lon = 0.5435761469621156;
    msg.z = 0.50431892851832;
    msg.z_units = 29U;
    msg.speed = 0.3830615529465504;
    msg.speed_units = 145U;
    msg.duration = 19616U;
    msg.radius = 0.13164081301604902;
    msg.flags = 217U;
    msg.custom.assign("EERTXSKROTGGGKCXZWHJMTEDYUYLNVZDZLBOBMIZDOHCJIAIJBCSWYN");

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
    msg.setTimeStamp(0.8755483832329124);
    msg.setSource(35979U);
    msg.setSourceEntity(8U);
    msg.setDestination(18924U);
    msg.setDestinationEntity(253U);
    msg.timeout = 58538U;
    msg.lat = 0.6443251228655275;
    msg.lon = 0.8003263815987082;
    msg.z = 0.27009807023264476;
    msg.z_units = 48U;
    msg.speed = 0.5387878311395731;
    msg.speed_units = 206U;
    msg.duration = 43453U;
    msg.radius = 0.029347657051073672;
    msg.flags = 68U;
    msg.custom.assign("DBNMOSZRERHDMSKYBAYFIDGYXPINWRAUEEDTZONMELLSHJJZPLCFKKUWPYRJXNUYKQZVAUZQHFKOVJMCXPHPQHCBOWPSZTRLDZRAEMVHGGDEOQAIBXOYUQNHUFTJYMPXUJEICNQKDIPLZLWNTFLWEGBOGZKAOTFNTQSVCHWLJMGJXFDIVTIYYUUVVBIWVQGFBAWJXEAKCBE");

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
    msg.setTimeStamp(0.11766432487798173);
    msg.setSource(10485U);
    msg.setSourceEntity(220U);
    msg.setDestination(1171U);
    msg.setDestinationEntity(187U);
    msg.timeout = 5209U;
    msg.lat = 0.10674239838984434;
    msg.lon = 0.8061821069365824;
    msg.z = 0.8962431088019058;
    msg.z_units = 136U;
    msg.speed = 0.16009629765603361;
    msg.speed_units = 227U;
    msg.duration = 55114U;
    msg.radius = 0.10104054640598459;
    msg.flags = 241U;
    msg.custom.assign("CYMRCEENCPWOEIEQVXAONDYNWTCUPLBDWSIQHNIFVWHVLJEYDFIZHOSKNKKSRBPDSROXSARJORJGRUXBKAKNXRZUE");

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
    msg.setTimeStamp(0.3782868474302322);
    msg.setSource(20330U);
    msg.setSourceEntity(195U);
    msg.setDestination(34158U);
    msg.setDestinationEntity(113U);
    msg.custom.assign("KRNXCAVGVNFZJMVHIRZTCYIRFCFFYXXFRMOKVNEPABMSOBUOSMHCJKVEDXXBPYOWTOEQWJFHEMAJFRJDUPGDQTDICAZHTCYTIJGBRCAEJDAZJQWOVWBHSBDVDAKPSNGQEGTZIEPWKGRWHGXGWCUMMUHZINKXTNZRZAKQOUIUXPUWYSSPSYEFQGBUTWOFRQVMEVRISYLBJNYXDAEQFLKNBZKHSUATCLXDZSILOGHNLDPCYJLTYLPBVWQOMI");

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
    msg.setTimeStamp(0.1975187586133641);
    msg.setSource(17755U);
    msg.setSourceEntity(33U);
    msg.setDestination(13515U);
    msg.setDestinationEntity(118U);
    msg.custom.assign("ZZTNYCVTNLOJGORFZTFXPDQOMBREMFUAQQGBKHSBMMASGADJUWVXHWQXWXZTLMSDAYPBSGWWTEIRTRGJDOLINTRCNJMSCRWQPGBXZPFAPENTFLUOHJAUJOUDKSEZHQVJIICUDCRHCFPWVSLBVOPTXKUHXFFLCPMHIALJKTI");

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
    msg.setTimeStamp(0.8552189951061919);
    msg.setSource(42586U);
    msg.setSourceEntity(31U);
    msg.setDestination(24573U);
    msg.setDestinationEntity(219U);
    msg.custom.assign("RADNVBXZHJUFKQEJAILGLWCIIUFRMBXPHJOGIUYQOGZNMZNCNXBCERVETNDRWKQAUNMEJNGGOFVAPLVWLSJFLVEOXXMJOTTBBFYECUXAOCNAKJYZDSWCMGUTDURHJUAVYCDCWRMHQTLILVQDWMAYUIXBGBLCZBKVBAPHPSNDMOEAEKKJIDPUQKYLVEWRTTTKSXQSHHNRFIP");

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
    msg.setTimeStamp(0.9135870197171538);
    msg.setSource(62932U);
    msg.setSourceEntity(162U);
    msg.setDestination(44411U);
    msg.setDestinationEntity(206U);
    msg.timeout = 56939U;
    msg.lat = 0.9467041633733886;
    msg.lon = 0.9156949738395388;
    msg.z = 0.31381196810877365;
    msg.z_units = 166U;
    msg.duration = 16604U;
    msg.speed = 0.41309733538472626;
    msg.speed_units = 37U;
    msg.type = 26U;
    msg.radius = 0.14925749025594814;
    msg.length = 0.7972937786402627;
    msg.bearing = 0.71152654183151;
    msg.direction = 62U;
    msg.custom.assign("GZOBWWRZOINYRBKYCVYSEVSQOQXTHPLUAZUCHFFJYJIWIULIYJNRGQXOQ");

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
    msg.setTimeStamp(0.5005006457449688);
    msg.setSource(42549U);
    msg.setSourceEntity(179U);
    msg.setDestination(60506U);
    msg.setDestinationEntity(2U);
    msg.timeout = 64799U;
    msg.lat = 0.6102875122055136;
    msg.lon = 0.24468338740188222;
    msg.z = 0.3176097259602585;
    msg.z_units = 212U;
    msg.duration = 13333U;
    msg.speed = 0.10565958908653406;
    msg.speed_units = 167U;
    msg.type = 89U;
    msg.radius = 0.07054494389505883;
    msg.length = 0.526577091680382;
    msg.bearing = 0.8217213041647933;
    msg.direction = 46U;
    msg.custom.assign("MBMNSDVANRGEDCZNSOOPLOPVNHZKJLQVDKFRGKFMGFOYYCOYNBCJGKAHWMGUNCBIIZAMYEEUUHAWXFLQFCQGYTVZVUITEWUJSYGIDBSVPQNJXOKQKFZJHXTVHHYEQAPALRRWJRSLQFBJWNPFYVCSKKHOORSCHTPRCOZIUCYMDTXPFADBIFTPRUSLTIIGBDGEULZYMZDURIQISTJSMWEUBVMNHWKABAHXXXTMXDEWKAXVQEPWJLXODBEWLZC");

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
    msg.setTimeStamp(0.8804048644923679);
    msg.setSource(35289U);
    msg.setSourceEntity(119U);
    msg.setDestination(9847U);
    msg.setDestinationEntity(35U);
    msg.timeout = 34599U;
    msg.lat = 0.11173973988256647;
    msg.lon = 0.5087086938511025;
    msg.z = 0.6684645404654198;
    msg.z_units = 65U;
    msg.duration = 54450U;
    msg.speed = 0.3695752965261693;
    msg.speed_units = 224U;
    msg.type = 134U;
    msg.radius = 0.30976375463712713;
    msg.length = 0.3089738701815268;
    msg.bearing = 0.2786728414313685;
    msg.direction = 12U;
    msg.custom.assign("NBCEJPDAGUHELRTDXNDACHNJGXVRDWODNIFNLEFKIKSCGXLEHZQCHTSUQJJTJOPRYMHFPFPLURTMDWVAQWOAMYMOSJEBTXHXQWBKYKPNYEVDZACGGMZDEUPILCLNZFYYMIUIIAPVBIOJIZZVOUAYSGAUHHGSWKUWIZOLTVGEBLFLJNT");

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
    msg.setTimeStamp(0.77241297331324);
    msg.setSource(18309U);
    msg.setSourceEntity(174U);
    msg.setDestination(7464U);
    msg.setDestinationEntity(21U);
    msg.duration = 55620U;
    msg.custom.assign("XQTPXICXJMUQDPLVORREZSRYMDOPKWYPVJSXABHZSONUFGFUKYSZOTLJFIYXDQGOKNMTWRHJXQLIKIAVGURGWWKBDURIKECCLDNAQEHGZWFMYDYLCRGGQFGVPPYTCWOYVNPHSMBIEZZXNUBBMPHTHMVHZAATQZVKBAQBNBUVTBAIJLOX");

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
    msg.setTimeStamp(0.7571296424825353);
    msg.setSource(23012U);
    msg.setSourceEntity(96U);
    msg.setDestination(55178U);
    msg.setDestinationEntity(240U);
    msg.duration = 47060U;
    msg.custom.assign("SRCLVIXTECOSKHIEMXCXNUYBWCIAMBBBBJSXHYNFEVZVRFJEKTDCVIJIGRWFJHOTVTARRHWCWUTQENQFTGSRWUECSQAAYOZGMWFZWLGGRXLECQOIJDYOXJHQKUKKZQAOPDQZFBATYQYAVFPHGSTL");

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
    msg.setTimeStamp(0.6057987067395394);
    msg.setSource(29204U);
    msg.setSourceEntity(47U);
    msg.setDestination(35847U);
    msg.setDestinationEntity(219U);
    msg.duration = 10241U;
    msg.custom.assign("XGFDBHYYLHEYHSEACPWQMLPYPCFNBNQHELVLOSEWXUUSQOQDJJKJJZCWPRRTGUJZRSFHFKVAOBSODDIYZUIIDPUHVYBJQQNEIMMHFCBDGRYCIQWBANZUFYJRPNCWDZXQGXGMOGRSVEQKNAVVDEVXGRYJPGLKTKCNITAPTPWAHUOQAMXUIURLCHGLIZROAXITXVTEMSPNBOBEWTTKBXYLLWKTIMA");

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
    msg.setTimeStamp(0.9311460271398752);
    msg.setSource(39661U);
    msg.setSourceEntity(95U);
    msg.setDestination(15873U);
    msg.setDestinationEntity(189U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.2550327468788869;
    msg.control.set(tmp_msg_0);
    msg.duration = 26538U;
    msg.custom.assign("MLALSOVMAZVXWYHTBSUPCIGKLMEJORCYGFYBDZAJIBFDGWZWSCUHPD");

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
    msg.setTimeStamp(0.7638219872502774);
    msg.setSource(12755U);
    msg.setSourceEntity(56U);
    msg.setDestination(38768U);
    msg.setDestinationEntity(84U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.1774745230578173;
    msg.control.set(tmp_msg_0);
    msg.duration = 2597U;
    msg.custom.assign("FFQQFPTHLDNHDMNTZIIGVZUVYUGZFNAQKFRKWGZMSCDJFKCYILUWNBQHEKPFZWQRAAJDBPDIAYZIKXLVYACVFVKUMDDPBEPXQCQEJMPQSXIWKUPUGUVOZZHDCCHTRTVZRGYDJJTUJPSNTCQWVGEGCOXBTNNFLNMEOOMRCLJXWLKPJSBOGVSRXAXTYUKS");

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
    msg.setTimeStamp(0.7139172965472298);
    msg.setSource(923U);
    msg.setSourceEntity(186U);
    msg.setDestination(24208U);
    msg.setDestinationEntity(207U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.017592651660219172;
    tmp_msg_0.z_units = 53U;
    msg.control.set(tmp_msg_0);
    msg.duration = 3569U;
    msg.custom.assign("FBIHPNEANWJCOSVCMSRQMJAHUVBFYTHATTJCGAPMKBWCFOFJZCBVZGAHBFSOJPNVFMNLEUWOGGMJYPVKKARXMSDHZILPXUZDMQRSPRKXGLKGBUZCIIOREXLELDYTHWIQDJCLOBRWVQVVTKYNENGQYWVUYTNTJWLFEBWQPYBXDKZCJGHZR");

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
    msg.setTimeStamp(0.7689696648178034);
    msg.setSource(11593U);
    msg.setSourceEntity(110U);
    msg.setDestination(60163U);
    msg.setDestinationEntity(84U);
    msg.timeout = 45509U;
    msg.lat = 0.3599135649941707;
    msg.lon = 0.8663741128206509;
    msg.z = 0.21727818957241574;
    msg.z_units = 180U;
    msg.speed = 0.5421227015385001;
    msg.speed_units = 149U;
    msg.bearing = 0.8770822090978192;
    msg.cross_angle = 0.6435670577123319;
    msg.width = 0.8649245984285542;
    msg.length = 0.9026666534968003;
    msg.hstep = 0.3976536100834761;
    msg.coff = 16U;
    msg.alternation = 248U;
    msg.flags = 8U;
    msg.custom.assign("QHLRODENBVRIRZTRSRTQZFYQHMVOXFPKLSTLJOKVUTMMJFWPZAHAEFPHXABJAYCSKMWIOPTXJQWLWCSDWAZTBJKSKRRXZQGOBYVBFPKAWYPIOHGYCIJHIVDLXAKKPNMEXECCEUCYWNVLENDQZGTBUDSQARLDOF");

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
    msg.setTimeStamp(0.19277164951263537);
    msg.setSource(63793U);
    msg.setSourceEntity(84U);
    msg.setDestination(25895U);
    msg.setDestinationEntity(145U);
    msg.timeout = 26600U;
    msg.lat = 0.1512159828009818;
    msg.lon = 0.42790464547284157;
    msg.z = 0.9513796348886788;
    msg.z_units = 192U;
    msg.speed = 0.7573734895030361;
    msg.speed_units = 21U;
    msg.bearing = 0.5821803188930748;
    msg.cross_angle = 0.07916757350046921;
    msg.width = 0.5289710799013619;
    msg.length = 0.8265085266907601;
    msg.hstep = 0.19210346481668927;
    msg.coff = 118U;
    msg.alternation = 68U;
    msg.flags = 147U;
    msg.custom.assign("FUEDVQOZLOKNPAVXQITANGHTSLEMXIIXGUNBWSMWUSHQYCCGLXNNRRXJFIMRLZPDXUQOILGMLTYORFWVTLUMLPSUEOOQYJXTVJOZWBYKJGHAMOGSHTJXZWEVRCKHFGVWMGGNFZQAQ");

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
    msg.setTimeStamp(0.6942292196354006);
    msg.setSource(57600U);
    msg.setSourceEntity(62U);
    msg.setDestination(44828U);
    msg.setDestinationEntity(153U);
    msg.timeout = 465U;
    msg.lat = 0.7189155726107495;
    msg.lon = 0.00789580200335438;
    msg.z = 0.6445540415760256;
    msg.z_units = 142U;
    msg.speed = 0.707625143113045;
    msg.speed_units = 13U;
    msg.bearing = 0.5564303646531411;
    msg.cross_angle = 0.42264709692768354;
    msg.width = 0.42103251432418276;
    msg.length = 0.8637578986386237;
    msg.hstep = 0.583132649955833;
    msg.coff = 34U;
    msg.alternation = 66U;
    msg.flags = 92U;
    msg.custom.assign("JUNTZIPQCAZTFMJBBGLQZQRHBMCNMZKCKTLMJYTNNVOFHAQKBBWRTIWQLAFUINEMYZWPOWAVQBYUTFOEWGZUDSDMBGTTIOPFILPZFLJWKLGDUVJKQLASJXVWCAPSMPSHUOLUNEXJXQMBEYQSZKZSWH");

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
    msg.setTimeStamp(0.0717013541386804);
    msg.setSource(1119U);
    msg.setSourceEntity(232U);
    msg.setDestination(27122U);
    msg.setDestinationEntity(139U);
    msg.timeout = 22882U;
    msg.lat = 0.3024512964230205;
    msg.lon = 0.9264247112232987;
    msg.z = 0.33444687301036125;
    msg.z_units = 65U;
    msg.speed = 0.8953319079071466;
    msg.speed_units = 65U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4327639354087274;
    tmp_msg_0.y = 0.8790591491848724;
    tmp_msg_0.z = 0.7492972359749287;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KTUCJIUURPPBOKSPUEWLVXIQVZPLIMUMIERGUZEJNXTTWUDWOCNGPJEZJTWYYNLAYIACCSSOOLQONCRNJRLKEHVWVODGRPCVEFLUQHM");

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
    msg.setTimeStamp(0.6313951010886606);
    msg.setSource(22116U);
    msg.setSourceEntity(25U);
    msg.setDestination(33486U);
    msg.setDestinationEntity(36U);
    msg.timeout = 5820U;
    msg.lat = 0.6574622407377592;
    msg.lon = 0.5673514538943558;
    msg.z = 0.30071196028044467;
    msg.z_units = 231U;
    msg.speed = 0.021028394898498393;
    msg.speed_units = 52U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9974608660087076;
    tmp_msg_0.y = 0.06010667902444655;
    tmp_msg_0.z = 0.16172458043800286;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QJLFPJINEWSMWBCTFZTQJMVTARDNEIUGKBIABMDZAFONZSWXFVLMEYVYYKAWUAXYMJDHSUYQUGNCJIWXIXHHZJBQMSUIHOVYPQAMPIVXLPURDIOEGJRFQTRQXPPITNHCJDKUJKNNUFCMZLEOASIDTMTDSQHWQCGLEZGXSPAELGAKCWPV");

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
    msg.setTimeStamp(0.1061223495942053);
    msg.setSource(17799U);
    msg.setSourceEntity(73U);
    msg.setDestination(54244U);
    msg.setDestinationEntity(63U);
    msg.timeout = 33205U;
    msg.lat = 0.22664787953611143;
    msg.lon = 0.324377484701181;
    msg.z = 0.9872498913871546;
    msg.z_units = 214U;
    msg.speed = 0.3335813559595937;
    msg.speed_units = 202U;
    msg.custom.assign("IIGIDJNNZXOGKCYREJEDCIYEGXVBFRTNVOTFDLYAXJTTUNYGPUWWWBOUUKSFAJQGKISUKVVAMHZKEWVSOFLOBZYDESHCCQIJHXCTGDXNBWOEYWFAQJSRITDNIQTGBAS");

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
    msg.setTimeStamp(0.32906169727505485);
    msg.setSource(30668U);
    msg.setSourceEntity(117U);
    msg.setDestination(10671U);
    msg.setDestinationEntity(98U);
    msg.x = 0.10555139420502435;
    msg.y = 0.21980259100264088;
    msg.z = 0.647635956867481;

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
    msg.setTimeStamp(0.12155102193039524);
    msg.setSource(25996U);
    msg.setSourceEntity(47U);
    msg.setDestination(36816U);
    msg.setDestinationEntity(247U);
    msg.x = 0.01955652917043571;
    msg.y = 0.8021208140009402;
    msg.z = 0.49098967095972657;

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
    msg.setTimeStamp(0.20702028940470507);
    msg.setSource(37716U);
    msg.setSourceEntity(42U);
    msg.setDestination(9031U);
    msg.setDestinationEntity(147U);
    msg.x = 0.6811962348017483;
    msg.y = 0.4467684929086251;
    msg.z = 0.35334221939051147;

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
    msg.setTimeStamp(0.13146609668183074);
    msg.setSource(7317U);
    msg.setSourceEntity(234U);
    msg.setDestination(36592U);
    msg.setDestinationEntity(5U);
    msg.timeout = 57807U;
    msg.lat = 0.7262258624392355;
    msg.lon = 0.07662424137906032;
    msg.z = 0.21693973491308982;
    msg.z_units = 183U;
    msg.amplitude = 0.06312857826553908;
    msg.pitch = 0.8848444915115579;
    msg.speed = 0.007626070626738701;
    msg.speed_units = 133U;
    msg.custom.assign("EMNZNPPQNIOXFNLMLTJRKCZMVSTRMZRDEEKYHRFHZQJNKXPQIYTJKRSDYMJKILVFICGDIEUXZBLQSWAYUOBEYITRLZAFGWWXUVAPGGVFSGKQAJDAFKMIOPWFRCMSESVBYGBSPOINLDNUZCORLVWHGXEYJAVBTMEXDCDAKONTHDURETJQUJGHGICFCODSBZHJWPLHQKRPOWNXLHQMWOZS");

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
    msg.setTimeStamp(0.06513658537015066);
    msg.setSource(15367U);
    msg.setSourceEntity(84U);
    msg.setDestination(19548U);
    msg.setDestinationEntity(74U);
    msg.timeout = 58438U;
    msg.lat = 0.9789599057038272;
    msg.lon = 0.045607100512312426;
    msg.z = 0.7223235885458686;
    msg.z_units = 71U;
    msg.amplitude = 0.9621414674789333;
    msg.pitch = 0.17882300838074572;
    msg.speed = 0.8801156683445467;
    msg.speed_units = 225U;
    msg.custom.assign("NXIWUVOKIBDUGKYTUTPMNHDMPOGPDVRBSKARELFNYUMIPOGFTEZRJOSUCRIMTJWUTNUGBOFKHKYPOMIVCAQPKQSVPZOXBJSZJTZCYFHIWQMCELJVMGLRLJBWNXKXWWPLXEOVWGLIFFSQADBYJNEVVKLG");

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
    msg.setTimeStamp(0.6422834855346887);
    msg.setSource(51755U);
    msg.setSourceEntity(146U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(180U);
    msg.timeout = 20131U;
    msg.lat = 0.4319637744566155;
    msg.lon = 0.5576690266284903;
    msg.z = 0.520433685629401;
    msg.z_units = 50U;
    msg.amplitude = 0.665331396354088;
    msg.pitch = 0.15099707682170882;
    msg.speed = 0.04783529114811358;
    msg.speed_units = 164U;
    msg.custom.assign("SIEBBEVMEAPZNHRDMDARARGIWXQCESBQTUTDJQSVIZLNETKUKSJCZYHMVPRHSYTWLOSUMUBLAOBO");

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
    msg.setTimeStamp(0.21402008962458607);
    msg.setSource(53332U);
    msg.setSourceEntity(44U);
    msg.setDestination(14699U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.8990829792681562);
    msg.setSource(16302U);
    msg.setSourceEntity(249U);
    msg.setDestination(25804U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.10352518524350995);
    msg.setSource(40333U);
    msg.setSourceEntity(227U);
    msg.setDestination(46532U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.5472676087601636);
    msg.setSource(62733U);
    msg.setSourceEntity(34U);
    msg.setDestination(3603U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.5754283509064216;
    msg.lon = 0.25146259774763025;
    msg.z = 0.5750219485227404;
    msg.z_units = 118U;
    msg.radius = 0.4787500301252653;
    msg.duration = 28387U;
    msg.speed = 0.6556205079500185;
    msg.speed_units = 44U;
    msg.custom.assign("XVYVGJIXMLOKBNGCAZDUZSOIJJMRNNPAJVPERBYXPCYWBOQEBQBTFECHGPKZSDSWLFAVPEKNFLCOKMLITRQYSGMUCKFLHWSWATMSEKICNZDBDUZISARTQFOYMNFPHCFQGKEXDVZXODBROMVQJKRMWBDOQUCIKPJALMGTRXWHVRJXUPQUJGAIVLFHPWQNHLZWOUDXZHTCXYEAAUZWTXQUIEJEBWIMLHHHINUSTLBNVCNYY");

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
    msg.setTimeStamp(0.17357501152064325);
    msg.setSource(23038U);
    msg.setSourceEntity(248U);
    msg.setDestination(45077U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.31712833467133617;
    msg.lon = 0.47533444426277405;
    msg.z = 0.038396500252371735;
    msg.z_units = 191U;
    msg.radius = 0.2869973724925954;
    msg.duration = 31047U;
    msg.speed = 0.9673716552207833;
    msg.speed_units = 37U;
    msg.custom.assign("UJIWFLWSUQNGDXRSJCRMBDLJIFUHYYNDTWUGBKZKIRRZMIQAVTMCZZKYKLPSFCWLOMVKYVEGDLQKNJCIJDWUMCYJOPBJEDEPLLQBHBDDYPPVVTRTIFRMSQXOASPWDQRHVUPTHWPNSARHMHHXFVVAHNTBBQIVUTEYYZYSGEAORGTXIFZFECLSXMUCNQGWBNAMMPGPZOHTEDOAYSXNWQBVFKLZNOAXUB");

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
    msg.setTimeStamp(0.08428696379306688);
    msg.setSource(33290U);
    msg.setSourceEntity(1U);
    msg.setDestination(3741U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.0038931397860838546;
    msg.lon = 0.7557997066539257;
    msg.z = 0.8465282332172817;
    msg.z_units = 143U;
    msg.radius = 0.09893635459216754;
    msg.duration = 15132U;
    msg.speed = 0.3594587841515178;
    msg.speed_units = 104U;
    msg.custom.assign("SVFOVEUHPLAQZINFLDRENGSCYOWLCRRDKHDMMMMXWQGZFLITRCISAXKZBPYZTFCOZHFWZPHCBIVIQULDAUNGNLFEPEYFDEDYSGOJSLYLUKNKLUTOUJXIKYXRNOWMJPKYCBTMWZVJWIZSRCTDBQXEPIBTWTBHCJB");

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
    msg.setTimeStamp(0.26165609054754246);
    msg.setSource(3616U);
    msg.setSourceEntity(211U);
    msg.setDestination(18792U);
    msg.setDestinationEntity(148U);
    msg.timeout = 49038U;
    msg.flags = 186U;
    msg.lat = 0.8816902284789342;
    msg.lon = 0.7200437668756925;
    msg.start_z = 0.7185239209199915;
    msg.start_z_units = 69U;
    msg.end_z = 0.7934187004984072;
    msg.end_z_units = 205U;
    msg.radius = 0.02638709705787623;
    msg.speed = 0.6059610706145055;
    msg.speed_units = 9U;
    msg.custom.assign("SQJRHDTQCCYATWKAUBLOGKEWCQKFPXRYZITUANXEWIIBQYNRSBLEDMUXLIVDXFSXIWGWVUGIBPKSYSDGRKHZYDBIJTKLJZHLWTMNETCLHFVZRGEZPQNVBOOZXWNMZOUBMLPTXLXGADBOIHNQYTRMHFKFEKPPRIRRGEBOZEXOISFZDCDMXAGNOT");

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
    msg.setTimeStamp(0.007203171631679051);
    msg.setSource(53196U);
    msg.setSourceEntity(234U);
    msg.setDestination(57871U);
    msg.setDestinationEntity(145U);
    msg.timeout = 6166U;
    msg.flags = 254U;
    msg.lat = 0.5567745413857742;
    msg.lon = 0.7763489435375968;
    msg.start_z = 0.23612261413153057;
    msg.start_z_units = 70U;
    msg.end_z = 0.8897015366492538;
    msg.end_z_units = 32U;
    msg.radius = 0.1377344756060711;
    msg.speed = 0.5103892803191844;
    msg.speed_units = 47U;
    msg.custom.assign("CRLYCJACZTCPYTZVWZCSAEEPOPKITZNFWRVWXFYQXIRLGPBWOJJDEGUEODWAXJBPKTKUKPPXSQVTVHATRIEVQMGSQOHNISBFHBSIKODSNNVPNGLOWZRFPFIOYZNIHHKKGYXTRBUDZTMLIWWVLLBMEHMLARQMHXUJF");

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
    msg.setTimeStamp(0.6039497250622119);
    msg.setSource(44959U);
    msg.setSourceEntity(6U);
    msg.setDestination(53160U);
    msg.setDestinationEntity(64U);
    msg.timeout = 36058U;
    msg.flags = 82U;
    msg.lat = 0.7078969765109916;
    msg.lon = 0.3091517720958178;
    msg.start_z = 0.16626305569615218;
    msg.start_z_units = 159U;
    msg.end_z = 0.047207120708051664;
    msg.end_z_units = 225U;
    msg.radius = 0.12560105358632623;
    msg.speed = 0.15657499367131866;
    msg.speed_units = 162U;
    msg.custom.assign("WIWDOQZIFNJBKDHENLEDFKMCQEWWQLAAZOCRIBRCKALIOWOZHXHPBVFIEM");

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
    msg.setTimeStamp(0.9768368538261517);
    msg.setSource(49231U);
    msg.setSourceEntity(240U);
    msg.setDestination(44579U);
    msg.setDestinationEntity(54U);
    msg.timeout = 22024U;
    msg.lat = 0.28839479084294417;
    msg.lon = 0.23771263870372095;
    msg.z = 0.9299346466562025;
    msg.z_units = 122U;
    msg.speed = 0.014324941960350723;
    msg.speed_units = 52U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8357445424538299;
    tmp_msg_0.y = 0.3394590206541547;
    tmp_msg_0.z = 0.052829319379638084;
    tmp_msg_0.t = 0.4252276592921389;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LYRVVHFACMYXMHYHLMBUUJKJNSNXNPPBTSLONEZVLOFVCKWJKDEMFOULSMKXVDDOXHARU");

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
    msg.setTimeStamp(0.721491813799984);
    msg.setSource(7106U);
    msg.setSourceEntity(80U);
    msg.setDestination(21346U);
    msg.setDestinationEntity(64U);
    msg.timeout = 52675U;
    msg.lat = 0.6461123006452002;
    msg.lon = 0.5931357730327649;
    msg.z = 0.8537175940987257;
    msg.z_units = 57U;
    msg.speed = 0.2304650870099466;
    msg.speed_units = 68U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9634296638882557;
    tmp_msg_0.y = 0.22946409813114432;
    tmp_msg_0.z = 0.3233700054113334;
    tmp_msg_0.t = 0.9212050976289586;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZIWQCDKYEKZAPKPQQIEMCTMPJVCKFSSJVWDMRATLTYVRDEYTVQJHVGGJCIBKSLLUAIWGSRBMMQWODJMYVHWLPBOYNUTGJYHZCBNFXUJUUHOTHYUPSQMSHGTLXHUPBOOYBDWASQLEFGIBPSLXUWOJPEAYKZIVRZTMET");

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
    msg.setTimeStamp(0.5391104942342554);
    msg.setSource(4045U);
    msg.setSourceEntity(51U);
    msg.setDestination(15108U);
    msg.setDestinationEntity(51U);
    msg.timeout = 23982U;
    msg.lat = 0.9679367962055516;
    msg.lon = 0.2806309075231904;
    msg.z = 0.9237220522213395;
    msg.z_units = 189U;
    msg.speed = 0.24229303804503477;
    msg.speed_units = 30U;
    msg.custom.assign("GJHXTKGIFIJRTGOLBBLHQHRRMYEDVEUTFUGBPSMLWHSOEVOGBZMNKOARNGJDKJOCGNEEVXIIXGFACUBFNGYCRPUMEESOWZVNVWBJPHOT");

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
    msg.setTimeStamp(0.8834946920788975);
    msg.setSource(11120U);
    msg.setSourceEntity(50U);
    msg.setDestination(33445U);
    msg.setDestinationEntity(129U);
    msg.x = 0.44556834001041357;
    msg.y = 0.7446440422795948;
    msg.z = 0.28988492621457107;
    msg.t = 0.7319801645822207;

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
    msg.setTimeStamp(0.1573611715929587);
    msg.setSource(52919U);
    msg.setSourceEntity(198U);
    msg.setDestination(13526U);
    msg.setDestinationEntity(153U);
    msg.x = 0.20152319267645802;
    msg.y = 0.07488669731097863;
    msg.z = 0.6928245341456425;
    msg.t = 0.35533379458810677;

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
    msg.setTimeStamp(0.849816644259099);
    msg.setSource(16778U);
    msg.setSourceEntity(167U);
    msg.setDestination(47163U);
    msg.setDestinationEntity(201U);
    msg.x = 0.022121546831674443;
    msg.y = 0.35575857306228553;
    msg.z = 0.3446677233756743;
    msg.t = 0.9268395969301211;

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
    msg.setTimeStamp(0.509635655773669);
    msg.setSource(37353U);
    msg.setSourceEntity(75U);
    msg.setDestination(48224U);
    msg.setDestinationEntity(212U);
    msg.timeout = 48959U;
    msg.name.assign("AGUJCBMMTTXWQBCYDNUVFIYCTRUQIIRQYAPSFWKOTBVNFIVFJARHYCSGJEOIBS");
    msg.custom.assign("NFAGVURZBLCCSBQJTIJXSNPRMQBXUUHHIJMNUWQNPJQPDCGNLFQDTOVCXKLRPKZNYXTHFYWWCEKVL");

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
    msg.setTimeStamp(0.2940966956903873);
    msg.setSource(62413U);
    msg.setSourceEntity(127U);
    msg.setDestination(582U);
    msg.setDestinationEntity(185U);
    msg.timeout = 54372U;
    msg.name.assign("YPFJEPTZRDAQTYKOMOXQMRDHFAIYMDBMLIIEXOLBYLLWPNGTFWHORTJKWYEDMBGAXUWIUQVXGKKPKDSUHPTOAJSEQKQZTDLSLEBASYMWSGBTOPYIPOXJHMXTHHCGACHNCKUNWXZBZUWLIVRVEGOUZVCZTMVOACRBHCQFXYEGYVOVMIPEFJHJULRBQTDRRNSNJXSJWNGQZAKUFVMCEDLDZJCRLFQSWUSCGUPNVFZFEH");
    msg.custom.assign("TCXBLSPFZUYUOFTCVJYYUOVMOGBNBEIRQORFUUCPZQEWJSWHZTKZLCEYGKHVGVHHXDRZEAKKDQNCYZNFRHFNJWXDBIDIFQIGYLNMASJKRUJXEBSYHUYEKBFQGCSMQRQZMOCXMVKMRLTCSXWVKWAPNGPYVBJLLCUROHOKPPXVLDTWFIISRVKESNYNBJTCMDFOHWZDFNDUQNOABASHZLGHJPJWEGATZXDMIADWTQBEAILPWRMJSMPULAQTGOX");

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
    msg.setTimeStamp(0.19053551356439835);
    msg.setSource(21165U);
    msg.setSourceEntity(86U);
    msg.setDestination(26451U);
    msg.setDestinationEntity(40U);
    msg.timeout = 8964U;
    msg.name.assign("ZGWORPNINMEAGOSWBXSOMWSIPFOGBRTMSRKACRTJRFDLUVKATJJEOGPXGNWQKPLZHAMFZPSIRADQVIDUBLKESHURDHFFTJYNDLZINBBUANYPCSLPXSWQWFVWYHEWSHEEEXIEYYZVTDGGWJUMBJEZJTKYCODBHFAIZLNXXKYFXAYPULQFQLUMQDPOCRZCXLHCMSOJGJBAZUZWMTITKKCVDVA");
    msg.custom.assign("VQHODABSCDPJIMJKUWUAEBAZLUTDTERXJLJSFZCXDSNBEFVTQYCBOYWKGVLANVFMNRUALMUCTPGPGSSKKPTTELFWYBZJMLBDMJBIGYOZHMIXBCMLBQGAZZTEPTRBKNHXQRGYSDOHRDQAMKOKCPAOPEVIMQNGYYJZUX");

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
    msg.setTimeStamp(0.2784978982476678);
    msg.setSource(4386U);
    msg.setSourceEntity(171U);
    msg.setDestination(31984U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.9442512215072538;
    msg.lon = 0.548261513490512;
    msg.z = 0.4120123731061759;
    msg.z_units = 2U;
    msg.speed = 0.3607987320303012;
    msg.speed_units = 19U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1709U;
    tmp_msg_0.off_x = 0.09738998867876858;
    tmp_msg_0.off_y = 0.34045104296412376;
    tmp_msg_0.off_z = 0.8995660917986629;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5659801629890713;
    msg.custom.assign("TGBJUEUQNDDYYAFMEIOXWAPLZRCJVGERDSMPLCHTOOOEQUHEBCKYEOGVWKMVNJRDMBLRCHVVMYLEIQDJE");

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
    msg.setTimeStamp(0.682435364262033);
    msg.setSource(17689U);
    msg.setSourceEntity(147U);
    msg.setDestination(3125U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.28376125982656164;
    msg.lon = 0.9166951727365928;
    msg.z = 0.1719463756221269;
    msg.z_units = 153U;
    msg.speed = 0.6440886507172536;
    msg.speed_units = 235U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6182138082055272;
    tmp_msg_0.y = 0.2325325862970975;
    tmp_msg_0.z = 0.46599669148081624;
    tmp_msg_0.t = 0.9171176302690776;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 12526U;
    tmp_msg_1.off_x = 0.25354871907588716;
    tmp_msg_1.off_y = 0.28692272089389137;
    tmp_msg_1.off_z = 0.43432280256379396;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.906491854058662;
    msg.custom.assign("NTWOUIKMLMLZKFDUPRSXIBXYVPSATNNGPCJZGKNHSKSCAJBQBPMSHWYOYTZOKCBYYWVUFZMSOEFPHBJEHDQPKRHLISLYCIODFTKCNIKLPEWJRTEWMN");

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
    msg.setTimeStamp(0.43195016367950123);
    msg.setSource(61044U);
    msg.setSourceEntity(65U);
    msg.setDestination(20030U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.11770039912295072;
    msg.lon = 0.9213803612547107;
    msg.z = 0.5742295297445993;
    msg.z_units = 218U;
    msg.speed = 0.025073667145121048;
    msg.speed_units = 70U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60170U;
    tmp_msg_0.off_x = 0.08122549298723991;
    tmp_msg_0.off_y = 0.6918393546906556;
    tmp_msg_0.off_z = 0.24941826175532855;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.4032438217745775;
    msg.custom.assign("KKZWEJPGSAWPYMUEFBFBOIWHTSOBCYZAGDESRXHXZ");

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
    msg.setTimeStamp(0.37720668535830126);
    msg.setSource(29784U);
    msg.setSourceEntity(25U);
    msg.setDestination(45676U);
    msg.setDestinationEntity(142U);
    msg.vid = 44845U;
    msg.off_x = 0.21622774873119377;
    msg.off_y = 0.15989989766719148;
    msg.off_z = 0.3339223431078189;

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
    msg.setTimeStamp(0.3701992985055149);
    msg.setSource(37932U);
    msg.setSourceEntity(147U);
    msg.setDestination(6729U);
    msg.setDestinationEntity(89U);
    msg.vid = 39938U;
    msg.off_x = 0.9690589264866413;
    msg.off_y = 0.4403448260345737;
    msg.off_z = 0.5048989289649765;

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
    msg.setTimeStamp(0.7733492033587089);
    msg.setSource(9617U);
    msg.setSourceEntity(185U);
    msg.setDestination(38596U);
    msg.setDestinationEntity(10U);
    msg.vid = 6343U;
    msg.off_x = 0.15662446615914616;
    msg.off_y = 0.5475341733441859;
    msg.off_z = 0.33899130736586747;

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
    msg.setTimeStamp(0.9941142958885523);
    msg.setSource(25466U);
    msg.setSourceEntity(54U);
    msg.setDestination(28233U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.317442493210195);
    msg.setSource(31382U);
    msg.setSourceEntity(224U);
    msg.setDestination(17739U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.4444130181123611);
    msg.setSource(11986U);
    msg.setSourceEntity(31U);
    msg.setDestination(22737U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.8432935919163524);
    msg.setSource(49565U);
    msg.setSourceEntity(69U);
    msg.setDestination(36099U);
    msg.setDestinationEntity(13U);
    msg.mid = 9389U;

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
    msg.setTimeStamp(0.05152479229971274);
    msg.setSource(2842U);
    msg.setSourceEntity(29U);
    msg.setDestination(32499U);
    msg.setDestinationEntity(17U);
    msg.mid = 31820U;

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
    msg.setTimeStamp(0.8029590114528222);
    msg.setSource(17258U);
    msg.setSourceEntity(195U);
    msg.setDestination(40908U);
    msg.setDestinationEntity(204U);
    msg.mid = 49038U;

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
    msg.setTimeStamp(0.8569516558631984);
    msg.setSource(63659U);
    msg.setSourceEntity(156U);
    msg.setDestination(40965U);
    msg.setDestinationEntity(244U);
    msg.state = 102U;
    msg.eta = 27210U;
    msg.info.assign("YWWQTEOHPOYGCGDCLTDORQFSBZJIXJPWNACBMZAKFKVDMFCMVYLAZJNLZSQVIXJKOYTUPRVVVTOEBRPGZPEWMDZNHJFQTFYAEPGPYADKCGCWDTKFCHSGIBSUXDQJZHAB");

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
    msg.setTimeStamp(0.26762477391994777);
    msg.setSource(33952U);
    msg.setSourceEntity(118U);
    msg.setDestination(21903U);
    msg.setDestinationEntity(11U);
    msg.state = 93U;
    msg.eta = 56369U;
    msg.info.assign("EUXRZXAWCJCKOEXSUDWBOENFICWSLRR");

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
    msg.setTimeStamp(0.17499018772432384);
    msg.setSource(12660U);
    msg.setSourceEntity(50U);
    msg.setDestination(45339U);
    msg.setDestinationEntity(175U);
    msg.state = 142U;
    msg.eta = 53007U;
    msg.info.assign("NXTWJALXPHFY");

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
    msg.setTimeStamp(0.7619249938626402);
    msg.setSource(51818U);
    msg.setSourceEntity(222U);
    msg.setDestination(56637U);
    msg.setDestinationEntity(28U);
    msg.system = 61321U;
    msg.duration = 42462U;
    msg.speed = 0.9934713579405076;
    msg.speed_units = 21U;
    msg.x = 0.2531284018566027;
    msg.y = 0.24797170536075697;
    msg.z = 0.9897490693234425;
    msg.z_units = 254U;

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
    msg.setTimeStamp(0.6951691334240687);
    msg.setSource(52510U);
    msg.setSourceEntity(41U);
    msg.setDestination(59096U);
    msg.setDestinationEntity(86U);
    msg.system = 31135U;
    msg.duration = 35186U;
    msg.speed = 0.6741463328609576;
    msg.speed_units = 14U;
    msg.x = 0.7727665225112723;
    msg.y = 0.33308268716902023;
    msg.z = 0.2627588054339507;
    msg.z_units = 66U;

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
    msg.setTimeStamp(0.6867974761066492);
    msg.setSource(32956U);
    msg.setSourceEntity(72U);
    msg.setDestination(43637U);
    msg.setDestinationEntity(30U);
    msg.system = 18605U;
    msg.duration = 56800U;
    msg.speed = 0.6100869008000602;
    msg.speed_units = 250U;
    msg.x = 0.9193101027690178;
    msg.y = 0.8454156154267334;
    msg.z = 0.47322896666366454;
    msg.z_units = 200U;

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
    msg.setTimeStamp(0.2823793964811194);
    msg.setSource(26789U);
    msg.setSourceEntity(251U);
    msg.setDestination(27116U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.5502103736276427;
    msg.lon = 0.059027162444366454;
    msg.speed = 0.203278701921359;
    msg.speed_units = 171U;
    msg.duration = 60646U;
    msg.sys_a = 31688U;
    msg.sys_b = 19972U;
    msg.move_threshold = 0.9080828231563652;

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
    msg.setTimeStamp(0.8543501977462199);
    msg.setSource(4529U);
    msg.setSourceEntity(176U);
    msg.setDestination(63086U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.8920523282979612;
    msg.lon = 0.6974327843460354;
    msg.speed = 0.7846426385526419;
    msg.speed_units = 230U;
    msg.duration = 7722U;
    msg.sys_a = 32929U;
    msg.sys_b = 40272U;
    msg.move_threshold = 0.43675023309043615;

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
    msg.setTimeStamp(0.7015009782700089);
    msg.setSource(16547U);
    msg.setSourceEntity(126U);
    msg.setDestination(21880U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.046225336965178276;
    msg.lon = 0.5655879841033887;
    msg.speed = 0.07044929998792726;
    msg.speed_units = 82U;
    msg.duration = 22291U;
    msg.sys_a = 34306U;
    msg.sys_b = 20140U;
    msg.move_threshold = 0.9122836917111604;

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
    msg.setTimeStamp(0.026964255679864046);
    msg.setSource(28814U);
    msg.setSourceEntity(10U);
    msg.setDestination(54925U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.10877636715073047;
    msg.lon = 0.6271411751994777;
    msg.z = 0.7290344582489043;
    msg.z_units = 36U;
    msg.speed = 0.5467404669511587;
    msg.speed_units = 246U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3779527141120522;
    tmp_msg_0.lon = 0.6789675055592512;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TTUXYFMBSRZSLAZTVJRHYLTYPCOEXDDIMLIJLKOIINBQEAJLASWLYECGPIYOYSKKIDDYWSMXPFGZWOBEZFFQQQBETGUADFNALBPOEDUSZGOMJQJMCZXCNTKMBTKFEMORFQSVWEOYXFZVBTYCCKWRKNDVHVQJBSXXWHMJIRHCQITWHNUWHVKRIGGXMOYQMPVHRXCEZKZBCPC");

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
    msg.setTimeStamp(0.5468810206080011);
    msg.setSource(56353U);
    msg.setSourceEntity(115U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.6983435144733885;
    msg.lon = 0.6447821894434993;
    msg.z = 0.6445467154472482;
    msg.z_units = 202U;
    msg.speed = 0.7075427975744839;
    msg.speed_units = 221U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8625096724476772;
    tmp_msg_0.lon = 0.5014715620965298;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AWZGNEVKVPREYOLTZKFBWGLXCHCAZFWJOXFMBXOXOEUMUKXBCNNRHYDUEDOHTCKEKQQDDWAIGVCWKHCLKDERXEAAGCTQNSOTOLYSWYAGXZFNVUCKMNBFBOLNPSESIXGHRWLUHIZCZOQSZTGVDPDSMBXGSSMHPCUPFWBHMQAQRJRTJLMLHUYFJQNXVTBTSIYEGPFPKLJQFRHJAZWJDDYPZP");

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
    msg.setTimeStamp(0.607597939519098);
    msg.setSource(44064U);
    msg.setSourceEntity(168U);
    msg.setDestination(63787U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.3152796895798814;
    msg.lon = 0.026823604911672794;
    msg.z = 0.5289818839851997;
    msg.z_units = 74U;
    msg.speed = 0.25160852893805086;
    msg.speed_units = 143U;
    msg.custom.assign("FXYRFLPCOAKMXBIKESTRMPPBZQVBBIECJAMAAHCNRIVGWSKTGHCDMRQKSJWFTQMDCXMDHDPXPOIALBIKKWISFGSGJOQQZVAFFNSK");

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
    msg.setTimeStamp(0.6177474424223999);
    msg.setSource(63060U);
    msg.setSourceEntity(87U);
    msg.setDestination(29970U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.3577008348637579;
    msg.lon = 0.23373080857386908;

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
    msg.setTimeStamp(0.7108616488135211);
    msg.setSource(53318U);
    msg.setSourceEntity(197U);
    msg.setDestination(57033U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.8501457598684685;
    msg.lon = 0.2884445607275866;

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
    msg.setTimeStamp(0.5803469522167197);
    msg.setSource(18843U);
    msg.setSourceEntity(132U);
    msg.setDestination(42055U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.11693438364853637;
    msg.lon = 0.5856684682907475;

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
    msg.setTimeStamp(0.7792071614837335);
    msg.setSource(6446U);
    msg.setSourceEntity(204U);
    msg.setDestination(30641U);
    msg.setDestinationEntity(10U);
    msg.timeout = 41592U;
    msg.lat = 0.48041942236895285;
    msg.lon = 0.16467037462973289;
    msg.z = 0.2103942625604509;
    msg.z_units = 23U;
    msg.pitch = 0.2896380538354858;
    msg.amplitude = 0.8703394167682117;
    msg.duration = 27868U;
    msg.speed = 0.422976286221282;
    msg.speed_units = 43U;
    msg.radius = 0.6387544412054514;
    msg.direction = 16U;
    msg.custom.assign("NUVKFVZYKXVGMDBNPSKDIYFZBQGZYKHPNNTNIRSAQOMUDFPPZLKIMTVOHVNXNDTWOYWSVHLGQOCGALAKNWRHTTVXWAHOHBKKIMUBBHODVXFAGXCGSIL");

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
    msg.setTimeStamp(0.13559070726292455);
    msg.setSource(25928U);
    msg.setSourceEntity(235U);
    msg.setDestination(14343U);
    msg.setDestinationEntity(127U);
    msg.timeout = 57246U;
    msg.lat = 0.21348394954924055;
    msg.lon = 0.06455915690528735;
    msg.z = 0.35606435585586305;
    msg.z_units = 207U;
    msg.pitch = 0.44249983909747836;
    msg.amplitude = 0.16714042262177686;
    msg.duration = 65454U;
    msg.speed = 0.9559074711683608;
    msg.speed_units = 244U;
    msg.radius = 0.16867039112508364;
    msg.direction = 202U;
    msg.custom.assign("RJJFCOEPYLCNZRRFSHQOLXENSOMAOTQLYXQYVZBIVIKDUABKEHEQSLZOZEPMTZHMUJGIKBCCHBWECUWDGAWTRFCGPSHNLQDCORBJPVIFNEXGMLIGTHXVBWDNTRTZIGDFNOFYIMCYJKWUAWTAKNFPDPLYTVMMVAXLYLZHNHXIB");

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
    msg.setTimeStamp(0.5718890372842355);
    msg.setSource(62003U);
    msg.setSourceEntity(42U);
    msg.setDestination(1919U);
    msg.setDestinationEntity(200U);
    msg.timeout = 35236U;
    msg.lat = 0.11894735125209321;
    msg.lon = 0.03297848646369039;
    msg.z = 0.44995937283989507;
    msg.z_units = 5U;
    msg.pitch = 0.11706576455962103;
    msg.amplitude = 0.6562821131372477;
    msg.duration = 43957U;
    msg.speed = 0.016566780796404168;
    msg.speed_units = 72U;
    msg.radius = 0.3076005695661157;
    msg.direction = 143U;
    msg.custom.assign("SXMZPXNZDVHVCMXKZQTFAUWNLBHYEMICQGSKWMPACRYDGVFMPBOBRGOMWNKLLYIHABLZSAURIIPBTRXHARGZTCWVISKNRLXIPCZRQUVQKHHESRMRXUYWADPINAVIKBSPQJQPFJFQDSDINDFWFZAFQJEZFMVLXDJOPLHGKVWSCOEFOGCTYXKUJJQLRNUHHXZNGOEOJUEYBAIYYJUDWMCTAGPFLDTTUMGSZEECJOOTEHBWEBB");

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
    msg.setTimeStamp(0.4574984634860181);
    msg.setSource(36545U);
    msg.setSourceEntity(41U);
    msg.setDestination(6225U);
    msg.setDestinationEntity(90U);
    msg.formation_name.assign("MHBSORRERJSAUWGNOTZRBGQAMQPZKJZMCTZREXDVRGPDGSTXZHSOZJWNRTNYQXKCVCKLIRADVYUHTQIFDMHIFWRHCXDUQCHWILSJNVYPFFQMEMFUBFLDGJZGNHHNOFMVJJFYIADBPIHBQMQ");
    msg.reference_frame = 162U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24478U;
    tmp_msg_0.off_x = 0.7939045395420947;
    tmp_msg_0.off_y = 0.14021984873265192;
    tmp_msg_0.off_z = 0.9103765290829214;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LXYGAETZSFBDTUZAMIJGPINWDAHKPMYOTSJMMKBNRRHVDBLFRXPGDMQECCHALQMPUNMVSVWISNQHQVN");

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
    msg.setTimeStamp(0.9643824729825007);
    msg.setSource(41448U);
    msg.setSourceEntity(55U);
    msg.setDestination(49115U);
    msg.setDestinationEntity(22U);
    msg.formation_name.assign("NBVXSEHULVHOPXVKNOAMUCDONXOFCFFKIDTKCFMBPVETYXQMGGWRGHIIRYTQQSSCWELHJQNWWQLBT");
    msg.reference_frame = 179U;
    msg.custom.assign("HPENWHDCKPWQWHFKEIZDIETSSONOCZDMJYTAXBNUSFZJVLGBKRCMRRWVLYARITXMHSDJECFNXETQTWGRTGDQFBTVBKCLVUBLLUJPAZIUFBZOJPSYMFKPVQQBSXKXAMPWKJSNYSHUCLILVNTQCHKQRAZXSXTLNAFPDIMJOVNRXCOR");

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
    msg.setTimeStamp(0.2319385275828887);
    msg.setSource(47043U);
    msg.setSourceEntity(28U);
    msg.setDestination(11993U);
    msg.setDestinationEntity(8U);
    msg.formation_name.assign("CAQJIVUPOAZGXSQJHKQCCGOGNRZDUYEFLRTEOURYOMJUQLXDYYERNFVIQOJTPWZTVOKPKKAHYCMGCFSUGZNQMFWNSSIPJYYZUEMSRDZRAPEXEXVBWADTAUGSFHSJLXISKAZMTBJBIVWLYXIBPAFHHMFEGMJTZUTLTNHUTYHQMKSGRPVOQWAVJLWROCNECFP");
    msg.reference_frame = 18U;
    msg.custom.assign("EOPOYMGPRAUGPDVMGTSDTQLABKZWVTVVPREZQWDEUJNGDLEHQPZSULXJFYLSIOONDAYQVVE");

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
    msg.setTimeStamp(0.15796940849528063);
    msg.setSource(27111U);
    msg.setSourceEntity(38U);
    msg.setDestination(39527U);
    msg.setDestinationEntity(153U);
    msg.group_name.assign("OKGYNUZJRRWUDOZEYFCJBTNGCQNPJNFDHGDGIEE");
    msg.formation_name.assign("EHIQCGXVUGTZUJSMJBPUXUICGDEBOKONESVBTDIHZKOIGTQNBEKZSAGTWHSZBGHCMMRPAETAJNCRAWZFYKWSEJ");
    msg.plan_id.assign("FUDKGANZVWNWKEQCOFSKTNDKQSBKRFLVWFTLBZOXUPZRMTRZEUCEPZGQBMHY");
    msg.description.assign("OYNMRYHMVDTFBKXOOUKLNZLTKYAAOQKREYPSGGJBDQCSDEWILEEQTHBAIWWJACSPMOCBCVDPALJDMRAJIYUSOOHMBEJFJJWBMTDGFAMGMBZBEEDRRVWECASRGHFHVIHLMUFQZKMINLTKNOQDQILXUTCVFYPFUVRUHWCRGYRPXSKKQFYIEZUVSUERUCZPBLOVDJPIXYGWTOKHZAHZTSIYLDXAPLJXZ");
    msg.leader_speed = 0.89259350408536;
    msg.leader_bank_lim = 0.7725431013378596;
    msg.pos_sim_err_lim = 0.9837448598980578;
    msg.pos_sim_err_wrn = 0.9592411182215159;
    msg.pos_sim_err_timeout = 16739U;
    msg.converg_max = 0.8349115125550467;
    msg.converg_timeout = 3055U;
    msg.comms_timeout = 60160U;
    msg.turb_lim = 0.32367281034676476;
    msg.custom.assign("UZJMLJQALTWRDLYLRIIHYCQOACGWJOTSEEDPCMZCUVEKBAKIDCPUDLYZXRQHMBUUZKGNHBEQJJCNSCEDQWKPLICYXYEPLDSUKRJGETPJVUWVIFODNVMZBUOIFABTJQVLIRVK");

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
    msg.setTimeStamp(0.7305241810287383);
    msg.setSource(47824U);
    msg.setSourceEntity(15U);
    msg.setDestination(20493U);
    msg.setDestinationEntity(211U);
    msg.group_name.assign("ZQXSEYRXUPWPTFILYRHSGCNZWLCPRDCBIUJEKMQLVHOADEFMVDZXUGNIYOHLCMZWNGCMBWCQGTKBAERYCSMJYZOXVAMPWWBKWICKOOGUVAQGVDYRLIKIKJRPPHWOIBWFTZUJZYTVZSHVQDE");
    msg.formation_name.assign("YEPTAMKLKHSQUIMUVUMNULDPYXDVWFCDFCMWASTDMOYOOJYLIVPECXXVEIHCHCLFBHRCHADXHBISGNXLKXBJSMSBDOYNTAGZWKYDGBOTZGRNILZQAIHLGOJQFSMVZEOQIAKTZQFWKITPTKKMHNATZVNFNJRDWLJEUQWBWSAOUYIWDESXRQJPOPTQRJXMACRQRGEJJRSQRUFPGKBZGYIUJUKZXFVRUPNECFVFVEDYXSTNBEOG");
    msg.plan_id.assign("YNEMPLIDBRGJVDFNFMGOIEJUQQVERLJUHCTVOWLGWNKMVXBQYKHAGECFDAIGQLDPXZTNKYSRZWWXQOVCZSIZRVIQUJYKUHTGTXBIPNHCVUWOYSCWRAUJQMLCUUJKATBEAHREOTSXKHLPNXLLFZBPXBNKIUDHSOTVMSAPUFFCEWDAGJPZYSOIVRKTKCD");
    msg.description.assign("ANCOCCJKBEAHAMJTRQMDBIHQOCYHLBBWOQLCPEYFBKXFFYUKGEPARSIGSGRLXKTKVXTXAMIRUMZVAYSFFSLYRLFSQSUNRBVZLMXOEUMJFQBFHDPHUHDRNWSEZIPTPEENTJPOKZJZNGYDVJZMMYFEJGMSHQXZQDP");
    msg.leader_speed = 0.4862880790713454;
    msg.leader_bank_lim = 0.7218191194161689;
    msg.pos_sim_err_lim = 0.5891017009100569;
    msg.pos_sim_err_wrn = 0.3897516648105349;
    msg.pos_sim_err_timeout = 43084U;
    msg.converg_max = 0.01757138059562302;
    msg.converg_timeout = 32203U;
    msg.comms_timeout = 30640U;
    msg.turb_lim = 0.52222579475249;
    msg.custom.assign("SKTYTZGMXWBQPEKWJOAQJUCNBLHRTFIAPJQKAMVMMYDAUBEMIGBAIXRXFVHINBHPZUETMLSCKJAFQOKXTLQDPLVNUOXRJBKXRIPDWCZSLRZOFQANWICCHWYNNCYEFIWUPTJOIUBSQQHWSXODGUSVVGKHD");

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
    msg.setTimeStamp(0.8043153759799414);
    msg.setSource(44670U);
    msg.setSourceEntity(113U);
    msg.setDestination(51816U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("BYVADWUOFSDCKCDDPTQZODJPISHCGWJVFLBNVAJHGZBXAQQZOLGRWJSCEHMMUIUEULRLBDDDARLRBLSPUFZ");
    msg.formation_name.assign("CKMEGYZESYXJNLJDIPOZBKDVQSLMGKMFSNQONBEPOKGCRDZIAQUSMHVNTHILGQLVKBQTJRPZUKOSAJTRNDUP");
    msg.plan_id.assign("CZJABWHFEAG");
    msg.description.assign("CQSEQJAPHDPDGIEMSVXPIXSLFYMPEWDTFTMGOQYCGBCPHCNYFBIFRXSMMAXDNSTXRHNYRRZSVAWAEVZLMQTIVKYKKOQAULDLTGEOVJGKJZQFIUJUAQWDWYOEIXYWBBNOK");
    msg.leader_speed = 0.8607296927837066;
    msg.leader_bank_lim = 0.944311617047697;
    msg.pos_sim_err_lim = 0.8616067216163104;
    msg.pos_sim_err_wrn = 0.3977470314292161;
    msg.pos_sim_err_timeout = 24997U;
    msg.converg_max = 0.29964144466165166;
    msg.converg_timeout = 53619U;
    msg.comms_timeout = 33093U;
    msg.turb_lim = 0.0886980113901048;
    msg.custom.assign("HOMXUGRTAZKZKEWGIJTRCZLDRQEPHKCHJEPTHYNFYJKWZXIBGASLOVOMCPSULHZJSLVGVWKSYTXVVTBBLZPERNQCMMAZ");

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
    msg.setTimeStamp(0.4179091232484342);
    msg.setSource(17900U);
    msg.setSourceEntity(83U);
    msg.setDestination(20320U);
    msg.setDestinationEntity(248U);
    msg.control_src = 51971U;
    msg.control_ent = 125U;
    msg.timeout = 0.12071349892917049;
    msg.loiter_radius = 0.6252819810579023;
    msg.altitude_interval = 0.026736331746344932;

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
    msg.setTimeStamp(0.21272940779169025);
    msg.setSource(7339U);
    msg.setSourceEntity(178U);
    msg.setDestination(60733U);
    msg.setDestinationEntity(167U);
    msg.control_src = 36208U;
    msg.control_ent = 116U;
    msg.timeout = 0.47991826466343657;
    msg.loiter_radius = 0.8977792995400401;
    msg.altitude_interval = 0.392285508762397;

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
    msg.setTimeStamp(0.5490095041029519);
    msg.setSource(7991U);
    msg.setSourceEntity(87U);
    msg.setDestination(23327U);
    msg.setDestinationEntity(8U);
    msg.control_src = 60710U;
    msg.control_ent = 245U;
    msg.timeout = 0.37429078337479293;
    msg.loiter_radius = 0.937266601298409;
    msg.altitude_interval = 0.0912842769231339;

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
    msg.setTimeStamp(0.5852392975222325);
    msg.setSource(18351U);
    msg.setSourceEntity(58U);
    msg.setDestination(35453U);
    msg.setDestinationEntity(188U);
    msg.flags = 233U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5534664042993886;
    tmp_msg_0.speed_units = 27U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6489925755829746;
    tmp_msg_1.z_units = 165U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8291433588630466;
    msg.lon = 0.664867292350075;
    msg.radius = 0.8781414365435694;

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
    msg.setTimeStamp(0.7362202613135244);
    msg.setSource(55578U);
    msg.setSourceEntity(234U);
    msg.setDestination(45954U);
    msg.setDestinationEntity(210U);
    msg.flags = 6U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3269806672479718;
    tmp_msg_0.speed_units = 41U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7242122180426803;
    tmp_msg_1.z_units = 70U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9328032128297026;
    msg.lon = 0.5771021850153624;
    msg.radius = 0.3858156670706012;

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
    msg.setTimeStamp(0.5281326933027707);
    msg.setSource(11606U);
    msg.setSourceEntity(173U);
    msg.setDestination(11968U);
    msg.setDestinationEntity(107U);
    msg.flags = 125U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.029218840347860153;
    tmp_msg_0.speed_units = 107U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.49396930501003256;
    tmp_msg_1.z_units = 88U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.017048818653564557;
    msg.lon = 0.4391036611755663;
    msg.radius = 0.7775410209285315;

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
    msg.setTimeStamp(0.4549180435397583);
    msg.setSource(26446U);
    msg.setSourceEntity(205U);
    msg.setDestination(43410U);
    msg.setDestinationEntity(15U);
    msg.control_src = 43553U;
    msg.control_ent = 28U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 10U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2055987426547985;
    tmp_tmp_msg_0_0.speed_units = 209U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8209812353917357;
    tmp_tmp_msg_0_1.z_units = 99U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9634227043835636;
    tmp_msg_0.lon = 0.6040539962495737;
    tmp_msg_0.radius = 0.5213028985351081;
    msg.reference.set(tmp_msg_0);
    msg.state = 119U;
    msg.proximity = 201U;

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
    msg.setTimeStamp(0.16345859347690017);
    msg.setSource(27846U);
    msg.setSourceEntity(143U);
    msg.setDestination(36449U);
    msg.setDestinationEntity(219U);
    msg.control_src = 58400U;
    msg.control_ent = 88U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 90U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.056047545392385434;
    tmp_tmp_msg_0_0.speed_units = 3U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9765928604851173;
    tmp_tmp_msg_0_1.z_units = 59U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7204110089908712;
    tmp_msg_0.lon = 0.12157821962766546;
    tmp_msg_0.radius = 0.7413023088806519;
    msg.reference.set(tmp_msg_0);
    msg.state = 171U;
    msg.proximity = 51U;

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
    msg.setTimeStamp(0.7697680509760325);
    msg.setSource(65099U);
    msg.setSourceEntity(228U);
    msg.setDestination(32436U);
    msg.setDestinationEntity(216U);
    msg.control_src = 22506U;
    msg.control_ent = 179U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 76U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.052214229133789924;
    tmp_tmp_msg_0_0.speed_units = 95U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5840833174597088;
    tmp_tmp_msg_0_1.z_units = 90U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.524032960914935;
    tmp_msg_0.lon = 0.7072345115449623;
    tmp_msg_0.radius = 0.8535926831337315;
    msg.reference.set(tmp_msg_0);
    msg.state = 236U;
    msg.proximity = 21U;

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
    msg.setTimeStamp(0.9578797846494955);
    msg.setSource(25989U);
    msg.setSourceEntity(171U);
    msg.setDestination(458U);
    msg.setDestinationEntity(35U);
    msg.ax_cmd = 0.9626194411672435;
    msg.ay_cmd = 0.43611264070756695;
    msg.az_cmd = 0.2845087999051751;
    msg.ax_des = 0.007100012825133617;
    msg.ay_des = 0.20641758050819414;
    msg.az_des = 0.0813267536155905;
    msg.virt_err_x = 0.5038339800376549;
    msg.virt_err_y = 0.783616374569774;
    msg.virt_err_z = 0.982687295369823;
    msg.surf_fdbk_x = 0.16297866522058602;
    msg.surf_fdbk_y = 0.3667543465844596;
    msg.surf_fdbk_z = 0.35699561920645384;
    msg.surf_unkn_x = 0.9775564349458399;
    msg.surf_unkn_y = 0.3813537021298967;
    msg.surf_unkn_z = 0.4660903654619356;
    msg.ss_x = 0.22974512369918976;
    msg.ss_y = 0.7056283373280251;
    msg.ss_z = 0.1758458272414657;

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
    msg.setTimeStamp(0.8314394187352299);
    msg.setSource(3174U);
    msg.setSourceEntity(206U);
    msg.setDestination(6530U);
    msg.setDestinationEntity(15U);
    msg.ax_cmd = 0.08471300520097858;
    msg.ay_cmd = 0.8915104789172268;
    msg.az_cmd = 0.4023215178834022;
    msg.ax_des = 0.037244950332325444;
    msg.ay_des = 0.026204157348904134;
    msg.az_des = 0.3121869442156018;
    msg.virt_err_x = 0.9755853150895539;
    msg.virt_err_y = 0.7460151640997964;
    msg.virt_err_z = 0.6126533874725889;
    msg.surf_fdbk_x = 0.6014597266246235;
    msg.surf_fdbk_y = 0.6745832225070246;
    msg.surf_fdbk_z = 0.3461855310084281;
    msg.surf_unkn_x = 0.5337768819616263;
    msg.surf_unkn_y = 0.15649971830155296;
    msg.surf_unkn_z = 0.9845649202140632;
    msg.ss_x = 0.5410821579453352;
    msg.ss_y = 0.4096551606653297;
    msg.ss_z = 0.8076126974945558;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GFOPZOKPAAXSOTSQOAKIVLMYNRYHITVWUGGJHAVGQCBKAQVVZKUPLLDIREMZIZWTFWGQBFXSQWNYSZJJTJATTSWGCMSJGBDUEHFNCCHDASBJOHFLPYHDQUYXMFEPNDNQTFXRVYIYCEUPXZIMLKRCMYESMGCNZTHLXBYUTLPRRBQOOSJUZWLVRTAMFUKEMFEKXXNQHNNFPKQJZEBLJRODVKGDBYBIPX");
    tmp_msg_0.dist = 0.1768870726382713;
    tmp_msg_0.err = 0.25272154051499685;
    tmp_msg_0.ctrl_imp = 0.03224399473441997;
    tmp_msg_0.rel_dir_x = 0.9331952078140611;
    tmp_msg_0.rel_dir_y = 0.5410088647471323;
    tmp_msg_0.rel_dir_z = 0.13183025450110863;
    tmp_msg_0.err_x = 0.7990338464562864;
    tmp_msg_0.err_y = 0.006040725216460929;
    tmp_msg_0.err_z = 0.9452811740660382;
    tmp_msg_0.rf_err_x = 0.493661219370781;
    tmp_msg_0.rf_err_y = 0.9301224564639787;
    tmp_msg_0.rf_err_z = 0.7593569359504508;
    tmp_msg_0.rf_err_vx = 0.9690981992388602;
    tmp_msg_0.rf_err_vy = 0.15677295128689173;
    tmp_msg_0.rf_err_vz = 0.4935536929754202;
    tmp_msg_0.ss_x = 0.926161275981022;
    tmp_msg_0.ss_y = 0.047273817581799604;
    tmp_msg_0.ss_z = 0.41815555264344584;
    tmp_msg_0.virt_err_x = 0.22731511370175972;
    tmp_msg_0.virt_err_y = 0.24891840691705203;
    tmp_msg_0.virt_err_z = 0.07334082230577199;
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
    msg.setTimeStamp(0.4528344911412364);
    msg.setSource(25870U);
    msg.setSourceEntity(209U);
    msg.setDestination(13582U);
    msg.setDestinationEntity(221U);
    msg.ax_cmd = 0.6074312250387607;
    msg.ay_cmd = 0.8925183940488697;
    msg.az_cmd = 0.9952880385791548;
    msg.ax_des = 0.27295148547614456;
    msg.ay_des = 0.7262093486701845;
    msg.az_des = 0.5447596346197573;
    msg.virt_err_x = 0.9861766369813266;
    msg.virt_err_y = 0.8223509893642972;
    msg.virt_err_z = 0.053113607038118626;
    msg.surf_fdbk_x = 0.266857270262544;
    msg.surf_fdbk_y = 0.06731395456985312;
    msg.surf_fdbk_z = 0.26941013266609637;
    msg.surf_unkn_x = 0.846205317819357;
    msg.surf_unkn_y = 0.4806464847644868;
    msg.surf_unkn_z = 0.6135212319666918;
    msg.ss_x = 0.4193395310558581;
    msg.ss_y = 0.3167296834433344;
    msg.ss_z = 0.5261762263431449;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DWGXTEUIWIXSYUZDRIQZWGPVLZQUARAJQWYAKVXRIAHJUGMPFSBMSYOF");
    tmp_msg_0.dist = 0.9475455810551532;
    tmp_msg_0.err = 0.7624175886992908;
    tmp_msg_0.ctrl_imp = 0.6539832300508602;
    tmp_msg_0.rel_dir_x = 0.48025653906112187;
    tmp_msg_0.rel_dir_y = 0.4652271682888336;
    tmp_msg_0.rel_dir_z = 0.96800998641414;
    tmp_msg_0.err_x = 0.750486198413925;
    tmp_msg_0.err_y = 0.719921900850021;
    tmp_msg_0.err_z = 0.29160272359015793;
    tmp_msg_0.rf_err_x = 0.635022504512484;
    tmp_msg_0.rf_err_y = 0.6885601830613589;
    tmp_msg_0.rf_err_z = 0.21333454083540282;
    tmp_msg_0.rf_err_vx = 0.18041697039949434;
    tmp_msg_0.rf_err_vy = 0.2570256149999909;
    tmp_msg_0.rf_err_vz = 0.0408347136722329;
    tmp_msg_0.ss_x = 0.36696272619055736;
    tmp_msg_0.ss_y = 0.446782962613799;
    tmp_msg_0.ss_z = 0.7571251423127655;
    tmp_msg_0.virt_err_x = 0.06997920000474844;
    tmp_msg_0.virt_err_y = 0.6058334993169158;
    tmp_msg_0.virt_err_z = 0.7439518572368748;
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
    msg.setTimeStamp(0.569740750936673);
    msg.setSource(45924U);
    msg.setSourceEntity(226U);
    msg.setDestination(30945U);
    msg.setDestinationEntity(138U);
    msg.s_id.assign("SNFVLWNZFUKCXGSTGVTDIGPZMHKBXIMERFHSLQQJCNEXQZWEZEFFDXHLOWZWUXNHGRMCDKXWBVGYTHEI");
    msg.dist = 0.41666626944580487;
    msg.err = 0.950826074764305;
    msg.ctrl_imp = 0.3554152093969013;
    msg.rel_dir_x = 0.6453263191515687;
    msg.rel_dir_y = 0.7798494819037287;
    msg.rel_dir_z = 0.33614721968657213;
    msg.err_x = 0.35858083486007264;
    msg.err_y = 0.20041439571869257;
    msg.err_z = 0.4414927953484389;
    msg.rf_err_x = 0.8267035489947078;
    msg.rf_err_y = 0.04509301174670832;
    msg.rf_err_z = 0.3424691610145323;
    msg.rf_err_vx = 0.877194612034442;
    msg.rf_err_vy = 0.6233893151428966;
    msg.rf_err_vz = 0.39928955456969184;
    msg.ss_x = 0.9970484416366715;
    msg.ss_y = 0.6356205236562132;
    msg.ss_z = 0.4554825868150314;
    msg.virt_err_x = 0.7764820241264504;
    msg.virt_err_y = 0.16703660586362634;
    msg.virt_err_z = 0.10172047353856228;

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
    msg.setTimeStamp(0.6570357037883318);
    msg.setSource(17921U);
    msg.setSourceEntity(185U);
    msg.setDestination(1779U);
    msg.setDestinationEntity(192U);
    msg.s_id.assign("UYCAHFMTDGJVGWEQLJCNLAOPMKJLBHZXWILWERIAVFGJQRTBQDQOPRTZOYTUBTBOUKIAM");
    msg.dist = 0.3875550900498863;
    msg.err = 0.9608132908959197;
    msg.ctrl_imp = 0.6435779477489343;
    msg.rel_dir_x = 0.9469112260115158;
    msg.rel_dir_y = 0.2524945183855093;
    msg.rel_dir_z = 0.2893650081084884;
    msg.err_x = 0.323969203808939;
    msg.err_y = 0.7972151673973163;
    msg.err_z = 0.4983149145764054;
    msg.rf_err_x = 0.5303932582604876;
    msg.rf_err_y = 0.762753242573048;
    msg.rf_err_z = 0.33254530746989497;
    msg.rf_err_vx = 0.6710587302757673;
    msg.rf_err_vy = 0.737216097904433;
    msg.rf_err_vz = 0.9476349094059658;
    msg.ss_x = 0.7858707225661735;
    msg.ss_y = 0.7841905571831153;
    msg.ss_z = 0.7382410739337445;
    msg.virt_err_x = 0.424677381718339;
    msg.virt_err_y = 0.4385354443934182;
    msg.virt_err_z = 0.3422904626717489;

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
    msg.setTimeStamp(0.5518512629169634);
    msg.setSource(39532U);
    msg.setSourceEntity(13U);
    msg.setDestination(49797U);
    msg.setDestinationEntity(67U);
    msg.s_id.assign("NLYAQJPTDYTTWWKANTLBQLKRMYFHRMBKPPPEXFIMXMONXDCUPOJUGWFRQIZUTMICAADMFKOJMNXXDVDAUZEGCLOHFJRSJBBKPHCQUDFDZXVSVEYCYQTEKVERNOGYLGVYQSCMSTRMWPXNSHTATANHUNIV");
    msg.dist = 0.4129739496522199;
    msg.err = 0.7738702201174873;
    msg.ctrl_imp = 0.10780995581106056;
    msg.rel_dir_x = 0.3153969804817933;
    msg.rel_dir_y = 0.06012995875687943;
    msg.rel_dir_z = 0.6645136622340012;
    msg.err_x = 0.7710673857051333;
    msg.err_y = 0.4981430602487985;
    msg.err_z = 0.4030056483486487;
    msg.rf_err_x = 0.3738972156510011;
    msg.rf_err_y = 0.7345090792712318;
    msg.rf_err_z = 0.5473808284194182;
    msg.rf_err_vx = 0.8890435320329364;
    msg.rf_err_vy = 0.946728370184332;
    msg.rf_err_vz = 0.790398831221229;
    msg.ss_x = 0.4350187293877672;
    msg.ss_y = 0.9560907105359174;
    msg.ss_z = 0.9648486013551585;
    msg.virt_err_x = 0.41646366890966846;
    msg.virt_err_y = 0.6382267556743709;
    msg.virt_err_z = 0.6878882302506948;

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
    msg.setTimeStamp(0.19728297111873894);
    msg.setSource(52434U);
    msg.setSourceEntity(52U);
    msg.setDestination(17802U);
    msg.setDestinationEntity(44U);
    msg.timeout = 7621U;
    msg.rpm = 0.24516365047889466;
    msg.direction = 168U;
    msg.custom.assign("XLLNBJROKSXQMEZPAFPCZLDNHKMVANUNBYCIVFROVJTJOABUJPDGYHDAWTJOMWWUFNTYXDMCVUQQAFKOYFLQHIFPAOSZPISXIDUWKSVHEQGRUGDSTSCJWEEJYBCGNRWXEYRCLFANEGUIZZRBKVXZVAHGKTVZYLSHKXLFXDMMXSRUCPKJGHQCGVNIUHKLTAUQLZMOYNHDTOIBWGGEWWRQN");

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
    msg.setTimeStamp(0.8097445910168571);
    msg.setSource(24137U);
    msg.setSourceEntity(0U);
    msg.setDestination(18873U);
    msg.setDestinationEntity(35U);
    msg.timeout = 48168U;
    msg.rpm = 0.6550195362498212;
    msg.direction = 120U;
    msg.custom.assign("VUTDTZPXJPYZOYHXWYZDZDRRWP");

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
    msg.setTimeStamp(0.649383961800713);
    msg.setSource(11624U);
    msg.setSourceEntity(165U);
    msg.setDestination(20273U);
    msg.setDestinationEntity(37U);
    msg.timeout = 43437U;
    msg.rpm = 0.8342382475169778;
    msg.direction = 76U;
    msg.custom.assign("FCHEBSTFKXAKQRRUTWDXDHQHBYEOWYKRFDDRGZVOJUWVLDEXBYLTGLMSSDHWRYJEAXOBAKQGMILOTYNFMEIQKGOYWMBSCHMQBEZZODGYNCPJFKIZXREWITNOOXCSNJIZWLXMBVCCFSVNPPIRVAFQMNIEZCVGAUUJHPRVOTYJADBZJAWFBITURLTPQGWHHSQSGYFU");

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
    msg.setTimeStamp(0.12559182245907052);
    msg.setSource(41610U);
    msg.setSourceEntity(55U);
    msg.setDestination(62987U);
    msg.setDestinationEntity(117U);
    msg.formation_name.assign("BOUHQQSGGRGKHFZQSZYXKQILPCBOXPPFLEGLKOWRWKZNSYZUMXSDDPEJBKDUILWLEMPYRHUZXWNROWWIKFHKBQNXTCSACVVQNUJBPAJVZDSBCDRQCKWCRKAAMDVAAQEVFBIVPSGTTIUQGUNWJJTVPOFXMBTEIKXVJTSGHNMZJUDLXOEONRYHVCYTTGEBETZRMMIXTHWAVAIXYULGALRWFUILJEOPYOFPMNFQFHMMFYJI");
    msg.type = 172U;
    msg.op = 198U;
    msg.group_name.assign("OSRLIKBVODWRTIXAHDGHEPQPHCPQUPUKKTAJIYWGEBZKTPKYZVGCIROVSASVUZOMIOLBEORFSGYVHLZMINXDMURRDEQLJDZMYHBMUVCAJWTQPLEQCKHYJAGXXXMETHSPYVQKJESTICKDTWFFXFKNNECULOSULWFMFHDZNFLRUVXYJOAQBNBFRWINRLOUJEGVWOMSNPAYTFYHGWDBXECA");
    msg.plan_id.assign("CLNUYZHKLHRWFFQTVTBIQ");
    msg.description.assign("WXHAZHXKDPFBUBKDNHURJCACLWGFUSYRUQIWMBRTMGBMQDJKWHVCAZSKTJLKVRUAOTQUWBZJYIEFLEPDNYCEZKDLDWFWQP");
    msg.reference_frame = 199U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10941U;
    tmp_msg_0.off_x = 0.16490900171095135;
    tmp_msg_0.off_y = 0.7986175716953123;
    tmp_msg_0.off_z = 0.5856366272238179;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8156968523751607;
    msg.leader_speed_min = 0.0002315497358000851;
    msg.leader_speed_max = 0.2950286573885528;
    msg.leader_alt_min = 0.9460772628333325;
    msg.leader_alt_max = 0.5275994692734847;
    msg.pos_sim_err_lim = 0.8467585262060224;
    msg.pos_sim_err_wrn = 0.666523921494656;
    msg.pos_sim_err_timeout = 63926U;
    msg.converg_max = 0.8181680565037207;
    msg.converg_timeout = 37273U;
    msg.comms_timeout = 52907U;
    msg.turb_lim = 0.19479684115128038;
    msg.custom.assign("OEFFFZEADAGMUJJV");

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
    msg.setTimeStamp(0.5047698262184398);
    msg.setSource(27434U);
    msg.setSourceEntity(220U);
    msg.setDestination(1417U);
    msg.setDestinationEntity(104U);
    msg.formation_name.assign("WWFNJCFGDIFRKNSTZGEMNUNPKULEYUCANYEJVZSZNSVRZBJQCUUETBELEVTOUCLHOWAISMXKBJYXDWAWJGKWSWQAQLVMZTUPAQORNBUSOEDZEHWDDROCMRYKXOKQSMFIWAXFRGCNXOTBPGHRZCTLKFHEIIJRVQFMQYUHSSJQEIPXHZGAOAJTUBTGIOLGHVLPHCNXPHYNTWMQZHMZCSJBVCDFIPKD");
    msg.type = 208U;
    msg.op = 83U;
    msg.group_name.assign("XKSMLVNTVPXUIDFYYUMZDHGENBUKHKMSEQCTVRIYFONYBGYCABNLVAMOXJJWXPQWQUCIGXAIHDBZWUPOXUMNTDAWMIRSCSSEGJNOAPQWVEQWG");
    msg.plan_id.assign("BJZTOHWELMZNGDNDGXCQYUZSLQDTIKXCLGHXRABMKRGOLUYJWWJLPHMPTMNHPBCWQJUYFIPYNOTGCRCPIRVRBMDJUVGBOQQVAIADXCFUSDEPTAACWBXEAAWVDOHSJKLLKKNCBPUUISHTOSJOPZWRTEYOGNHHUMVOLTVFFFPXEWEJBZHFMNNDZSEHEVQBAKXKXPASXRSCVKG");
    msg.description.assign("HELNSKEKFKKTMCRJDMLGLDGWCJNLWUZBTYYERXVFCZDLCYBTFAIGOHOWSZBZYJIRVSDHQBBHNS");
    msg.reference_frame = 196U;
    msg.leader_bank_lim = 0.8888642730563715;
    msg.leader_speed_min = 0.3800448514743662;
    msg.leader_speed_max = 0.15813643361877816;
    msg.leader_alt_min = 0.24774095191390866;
    msg.leader_alt_max = 0.7747726694083514;
    msg.pos_sim_err_lim = 0.5620612610898669;
    msg.pos_sim_err_wrn = 0.6281411486924723;
    msg.pos_sim_err_timeout = 53442U;
    msg.converg_max = 0.15001001990306462;
    msg.converg_timeout = 13397U;
    msg.comms_timeout = 13790U;
    msg.turb_lim = 0.8444358184189773;
    msg.custom.assign("JKTIVWLYBOQSFNOQTPJPKPLGDUWCEDKOLYXIOTNVOQQLZZQ");

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
    msg.setTimeStamp(0.18156190144900697);
    msg.setSource(21096U);
    msg.setSourceEntity(111U);
    msg.setDestination(57705U);
    msg.setDestinationEntity(158U);
    msg.formation_name.assign("GPVQJKHLNFTHSWWCEEYMUFYOGBIPMSWRGTLSGDXSNMVTFRDMTKPAWDGTVNHAGOVUXRVUAXPCQJEWDXPLIQJYTMKCSLOBCTSJYZZPHPNYAWJQXAQYWZEQEBLSACJBZEIVYGXRBIJCKPHDKLXLYJMRYVIKRRBFORNVJMOZASMEURLLPHOIHBUWXQCZRKXUIHZDFOANCSDGCXAMEFQYNWGTHZFIVOWPDIUNZUZJKKENVBSTOAKL");
    msg.type = 214U;
    msg.op = 135U;
    msg.group_name.assign("NIWFEIRGLHJGSLBABMWDZG");
    msg.plan_id.assign("AANMKLNFEJAJPIQOQLZSRVPDWTUHFHCBXCUFXLIJKGZMYOWXEMRZUHQMCQRSRKCYKYKZBVWOMTZTORNSMRUAZLWQASYFAFXAWBSDSLOUHEHQTSSJMNTKOCDQCXJIDGPGZQVFFWJNYBTDTREABDFSLTRPXBJVEUVALKJMF");
    msg.description.assign("VFGHUITBURAVARUYSONYPMQLIRKFAFTLKBCWVRPCTGPVUMANDVHHWTIMSHOUQOIJYSPUKWDLHIYBJZGOHDHQGNGQARXVXRXBSQZGBJXJSPGRJCWCKFKB");
    msg.reference_frame = 121U;
    msg.leader_bank_lim = 0.4243867168579317;
    msg.leader_speed_min = 0.4040615112560064;
    msg.leader_speed_max = 0.5209782151268568;
    msg.leader_alt_min = 0.31251532273938354;
    msg.leader_alt_max = 0.23259730493568964;
    msg.pos_sim_err_lim = 0.07040381125845974;
    msg.pos_sim_err_wrn = 0.6810454374811393;
    msg.pos_sim_err_timeout = 49107U;
    msg.converg_max = 0.18247088942469303;
    msg.converg_timeout = 59884U;
    msg.comms_timeout = 17171U;
    msg.turb_lim = 0.7838536866018129;
    msg.custom.assign("MSOTXVRNKGWUSLFTBADMCFDJRUDWYJYJNIIWKXMMNOSGANNWIJHVFOOROCXGQXWKEOJPWCHIEJRFKMUWPHZDK");

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
    msg.setTimeStamp(0.1861530724209547);
    msg.setSource(26233U);
    msg.setSourceEntity(249U);
    msg.setDestination(44399U);
    msg.setDestinationEntity(90U);
    msg.timeout = 4000U;
    msg.lat = 0.8400465342281304;
    msg.lon = 0.7397134606833377;
    msg.z = 0.4852299235562595;
    msg.z_units = 103U;
    msg.speed = 0.1840933274165859;
    msg.speed_units = 32U;
    msg.custom.assign("CMPBAVVKBSVBOGUMVXVSBZVGNZUNDKOKLOYWHSATIJLFFSWHHTKUSZJPDUDSYQFWAQCLUPUKXUHPEDPNKFQZWXLMTKMAGETYDWEWGUHWFCXKOJYPWZFNANSBPNJJIEFTYLMEGCVZAALGITIIRDFFIAOSLDBEIHMMKSBGGYTZNRDRZMBTNHICHMQJQQGPCWYQQR");

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
    msg.setTimeStamp(0.27425097674666177);
    msg.setSource(10601U);
    msg.setSourceEntity(217U);
    msg.setDestination(49315U);
    msg.setDestinationEntity(213U);
    msg.timeout = 7835U;
    msg.lat = 0.8122406511419005;
    msg.lon = 0.18793382863412478;
    msg.z = 0.5410559323582063;
    msg.z_units = 177U;
    msg.speed = 0.1355572762251651;
    msg.speed_units = 159U;
    msg.custom.assign("AEVQGPQXXBVJMEKBQUKQURRCYMKSILBWJSICYIPXDNRJCDRUCCDQPMUHKTYHZWFDUSYDKULDJVZLIEBNVBOBSGVARHMBNIFMGQZMGAIXKCWXHBGZISVAYTLFMWOKGUYPNXEPFYHWSPJKNNVJOIYUXBFOFHPGQRWIGRCLSTAYTPIATWDNQOOHTNHELOG");

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
    msg.setTimeStamp(0.8132767099319187);
    msg.setSource(2576U);
    msg.setSourceEntity(200U);
    msg.setDestination(2173U);
    msg.setDestinationEntity(213U);
    msg.timeout = 31641U;
    msg.lat = 0.7905200818037516;
    msg.lon = 0.4659655207171718;
    msg.z = 0.5561724512451341;
    msg.z_units = 26U;
    msg.speed = 0.40671716871351304;
    msg.speed_units = 171U;
    msg.custom.assign("XIKCJPBVVHJPLVLEDHIVNWZNNDEKFGVHITXHBVMUUJOXTTBPCZIBQSGPZLMASUROSWWKQTRRATFFFYMYXGOUWCDJXYEZVOSCLPQZSFIMDLCMFQI");

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
    msg.setTimeStamp(0.444720267219201);
    msg.setSource(18873U);
    msg.setSourceEntity(177U);
    msg.setDestination(35636U);
    msg.setDestinationEntity(149U);
    msg.op_mode = 28U;
    msg.error_count = 245U;
    msg.error_ents.assign("IMBLMJTTJWPRRTNUFRDTHGAIUCKKFMZVWOUOSCPLOJGK");
    msg.maneuver_type = 15293U;
    msg.maneuver_stime = 0.02658697142412081;
    msg.maneuver_eta = 10443U;
    msg.control_loops = 2904746959U;
    msg.flags = 253U;
    msg.last_error.assign("QOMZQBSHYKFMP");
    msg.last_error_time = 0.32577031874611595;

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
    msg.setTimeStamp(0.8380542911389269);
    msg.setSource(55973U);
    msg.setSourceEntity(161U);
    msg.setDestination(63444U);
    msg.setDestinationEntity(251U);
    msg.op_mode = 179U;
    msg.error_count = 143U;
    msg.error_ents.assign("DWDCWLYEVLIWESUTDHSBZOKIKGTWGTOXWFZQKUNZCYVDUFAOFMXJLZUIAEYQDPTGTIMYOYHGKKBUIIRZOXDXEPMASQITPOFPEWNVEDRFXGYOPBAAJXJQPNMMMVJGCUWPJTFLHTCYOMXBBARLYEHANSICRERPVWIBZXNSCRQSORKLURGFGYDHMDRLUQVBWRMZKHHVFQZJIVSTUCXEFNFAXKYLBOQZCSLDVHUPAJGNCZJJHEBV");
    msg.maneuver_type = 52912U;
    msg.maneuver_stime = 0.4107319942817854;
    msg.maneuver_eta = 41564U;
    msg.control_loops = 545278551U;
    msg.flags = 62U;
    msg.last_error.assign("MQNGNRWOXRINUGUQQKZABQACNVEURYNJETKBZTDDUXTIGUR");
    msg.last_error_time = 0.2548453038274784;

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
    msg.setTimeStamp(0.8071383873603382);
    msg.setSource(6496U);
    msg.setSourceEntity(144U);
    msg.setDestination(1917U);
    msg.setDestinationEntity(228U);
    msg.op_mode = 24U;
    msg.error_count = 154U;
    msg.error_ents.assign("XCZYOVFSMQPFLPUXEMOEAZLKBFXBDPBXXJYQKZICEURMRJOCVTMCGKGZDLJQWNJRKPDVDYUZEINEJHCSFQXKUWDNTJHZLXMWAAZGYVPCTQRBLABBVUFHITTHMGKXMTEHSYEKBQDAR");
    msg.maneuver_type = 29740U;
    msg.maneuver_stime = 0.9937196451984488;
    msg.maneuver_eta = 46168U;
    msg.control_loops = 1534386425U;
    msg.flags = 175U;
    msg.last_error.assign("AHTJGBBUTFXKXJKBEAXYJINNZAQRMOOZYYDPWJOSPHSGUTFNESACVRAPNREFUWMTKAIYUSCABWGJWTZFUOUCPYMTYQNJSKDKGYCMEMBIKQNWODQGKGEAXRQXKXSLLPVVFSNWHJCHMQDPHZKYEUZVOIGIMYZFCNGOBHCERXMBDTCEQBLMCQVLCDROBJOAVLZWADVULQPUU");
    msg.last_error_time = 0.27491663762503704;

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
    msg.setTimeStamp(0.0236811752486068);
    msg.setSource(51386U);
    msg.setSourceEntity(192U);
    msg.setDestination(20924U);
    msg.setDestinationEntity(195U);
    msg.type = 133U;
    msg.request_id = 64261U;
    msg.command = 139U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 23039U;
    tmp_msg_0.flags = 125U;
    tmp_msg_0.lat = 0.18370669941178064;
    tmp_msg_0.lon = 0.8953176649724028;
    tmp_msg_0.start_z = 0.2001972791375276;
    tmp_msg_0.start_z_units = 128U;
    tmp_msg_0.end_z = 0.7718966284359722;
    tmp_msg_0.end_z_units = 111U;
    tmp_msg_0.radius = 0.6798514721279478;
    tmp_msg_0.speed = 0.5028982977071552;
    tmp_msg_0.speed_units = 61U;
    tmp_msg_0.custom.assign("EVFYLQDTNXVMAMCKUPOQCHHMPOZPACJKZOWNRSXFFATNSWNIRIKBLHRHTDMKPZJGHXALFUTOWQUOVZVLFAEIRRNBXEYEVHZOGCZBKUUSDDEQEPGTQNWQRIBIQUQGWUBAXNYNWLJWMW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61939U;
    msg.info.assign("SPVANMSKGZXXJEPEUOIAIREYWACIOXAGPQSTCJJADSUTRPFODWNHEMCLAVONBZZSGBCHVQMQQEEZOLJVTXERHBXMDSBWTKWJSJEUTLGPLBNVPBHIFGTYLXAMWCEGBMMWPOICIRQKQYNSMOTGUVJUKNYDNPYUABPKKWSKXTRSWAGBFIDUNJF");

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
    msg.setTimeStamp(0.9807599824075135);
    msg.setSource(54234U);
    msg.setSourceEntity(203U);
    msg.setDestination(17088U);
    msg.setDestinationEntity(109U);
    msg.type = 209U;
    msg.request_id = 26522U;
    msg.command = 138U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 7826U;
    tmp_msg_0.lat = 0.27568773039807615;
    tmp_msg_0.lon = 0.5757689580382732;
    tmp_msg_0.z = 0.8901468092789091;
    tmp_msg_0.z_units = 86U;
    tmp_msg_0.speed = 0.6160426080680308;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.custom.assign("MAAHJGJXSSXFVERXRNZCYIAWPIEBGUYLIKQKKDPKHQZNGUSFZFCVAREATGYLRMPHTGPQQLCRREPBRMHMNTTJTIWUCOFELEGGXUBSDZSXFOBYRSUDYE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51435U;
    msg.info.assign("EXRWEXDHGARADIEZMLYJILGIQCAKJVRPZYZJLHXTXYGEPCJYFHOPNHTFRSWOANDYRZGQCLBLAOJDRWITPRSAYKLCKKHWBCOVNTVKPFJEYUSBTOOFZVFVHSEFKUFGGKNSUABNYGURJUUWSQIGQHFKBUXSIUPCAXTYULXDEFMJDDVEBTUQMCOWWLMWJCGNMCQPMJDP");

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
    msg.setTimeStamp(0.03860037430702146);
    msg.setSource(61475U);
    msg.setSourceEntity(0U);
    msg.setDestination(10579U);
    msg.setDestinationEntity(29U);
    msg.type = 10U;
    msg.request_id = 1194U;
    msg.command = 151U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("VQJIUSEGAVIUIACNZHGZAEJTJYLSXIPERXJFLHCHANVLFPTHZH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5616U;
    msg.info.assign("EKTXCAANKPVOXJJFUSYRTOCCWLVOXCUACPINYYGEFKIPMSSASXFXGQCPWQHSLSFLHRMLMGQTVMMDRBEDKOTDWBBLRVNHQSGPZBVOKEDDVJDIUNVRZLZZBBTEMSAPHROPOJKNRAQZ");

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
    msg.setTimeStamp(0.31787589761563195);
    msg.setSource(15442U);
    msg.setSourceEntity(108U);
    msg.setDestination(25137U);
    msg.setDestinationEntity(229U);
    msg.command = 75U;
    msg.entities.assign("WSXICEPNVXOLOPRDWWSS");

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
    msg.setTimeStamp(0.36217839508230454);
    msg.setSource(54767U);
    msg.setSourceEntity(215U);
    msg.setDestination(61931U);
    msg.setDestinationEntity(139U);
    msg.command = 143U;
    msg.entities.assign("MTUCHHRZWXHHEXNIPVQTBRORJLRGWKNGYPBQYODDTBUFOGJOGKCISHHXMUJDNEZOIXBFQMMYJRIADVVRVCNWNQAVNLXILQCOHTATLKMFSELTRGTBWVUJLMREANYFIFDUXBBWXYKHUQIZASERMQUOZDZAELTFLAHFJNNBSKCVYMCASGVJWCKJGVZXKPSPJNKTCYCFBRLWFBGVIXMZYGWMEEZ");

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
    msg.setTimeStamp(0.7588677791305507);
    msg.setSource(6032U);
    msg.setSourceEntity(225U);
    msg.setDestination(34480U);
    msg.setDestinationEntity(152U);
    msg.command = 54U;
    msg.entities.assign("QHVAURMLSNDLDYVFZTUJBXQWKSEMBHLPGOCNVVTNQOYMYBIYFTRIXDIBRVTLKMGZQMKZNHSXKJAPTOUAAIOIDXXJRCBCPVSZHMOPC");

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
    msg.setTimeStamp(0.20269611632446805);
    msg.setSource(46983U);
    msg.setSourceEntity(167U);
    msg.setDestination(105U);
    msg.setDestinationEntity(161U);
    msg.mcount = 111U;
    msg.mnames.assign("ZSSPLMCULKKIBATZBKTMEFHWRKKKTBWWNWJGVFLWIPYAPZFHUNXOJBPOUJTXNDUXPEPEBDJEJGXEFHSFZZHQWGHOKMOCCECDZALUTEHPBSSLPGCUNSMMYJMCAAOJUWVOJVVOWVIVQQPYZSTKOFHFGQDIINYJCDEZFXDYRLKYVBAMQYWGLIIDQNDWBAGVASKFJBYRIXQSGQMREQGNDAURVHMXUNUNBLRGMONHRCZFQTIXYPARRVZXIS");
    msg.ecount = 177U;
    msg.enames.assign("JTSZECHUYTTXLXOYDFXGOCFUCXKHKIXICRLBMNAAGEUZABYQQTIUSZATOZABRGFMINVYRMKDBAGVCMGWZMZJRMJSYSQWGHKGOCDITZAXEFOZAPO");
    msg.ccount = 218U;
    msg.cnames.assign("QVTWRLKWGRMNJRUXWZPQHNCFPBOQWQGHDCXNNORQBCJJKDDEFJMUJFZGGWUTARJPIOLEISNUAXMVFPFFQYTLBTHU");
    msg.last_error.assign("ZMKTRIRYJJSKETATPTBQHPLMPCSIWUFUJKGWYGVWSYIXDWXKENVZHFLHMODJIQRBBTRZPUXQVHEZTZCUNDUHWAUKUPIXFGLHZAFTEDFODXONNNIMDGSIFKEDWLVDQGVLOUGLOPIYOGVHEMWAFERORAPUJNBMPTAQOAYBLGNYATKZFMDSBSEESOYWLVMCXCYISOMV");
    msg.last_error_time = 0.8488935237362297;

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
    msg.setTimeStamp(0.021423355260583588);
    msg.setSource(25894U);
    msg.setSourceEntity(63U);
    msg.setDestination(19063U);
    msg.setDestinationEntity(52U);
    msg.mcount = 154U;
    msg.mnames.assign("EPBOJGDOQTYIXDABFMOEOXVJXFYFOQHYPWVLYWSQOCDUNYPZTXSMLAFOKXIBEUMVHASKLARSNZEYUZXIGFLIRROTHIEUAPPRAKGNPGJCXGBZRWJMMKLRCLBWJGJNBMPKFUWITKGEVXHREKMVLMUZOUSZKJCUIIQTMLFWQYQDSNNPSTDWNWYTRZSBJCAORVBQHYVDVVHIMB");
    msg.ecount = 29U;
    msg.enames.assign("JGXGEJHDYRSITWNHAZYBVIXZNQWFDHKIEERULTWKXOVKIQHJMMTVBKYGGGWRGSVKQBGUTUEAHQRLOCEJOKENNCSLEGZJHVULVJAQKUHYFSCWSEOHUJAWFNRTXLOCWVGFRCCARPDYXQDTPJKMDLNJFRZQQWTUAH");
    msg.ccount = 209U;
    msg.cnames.assign("ICTAENJZTRINAEHPZXTHURJWNYXQXFFTBGPHXDWUIGMCBSBRQJGJBDAHKEMVNGVWWMUUHXNQLQPOQWRDTUHKHBSVIKYTHIACDGECRPSCZCJJWGOZOPTBWMPVAOYFGYDSZQLFZIVNFVMYL");
    msg.last_error.assign("ODXFEGKFQSMGLXWPUWTYUWHHWSOZVCSWZWAQJITXLQRXSIGHUIMLVMYJUVHGMIUZYVQLKKWIIAOTPFGQROVFFARZRWRLDOQRBGECXCZSYCJCBHRHBPETSTFPHXUNTDVLDEKSFCPRYOLJJTQAOKPMUPVVSBKUWEZ");
    msg.last_error_time = 0.28392236315916375;

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
    msg.setTimeStamp(0.5500714416521872);
    msg.setSource(44668U);
    msg.setSourceEntity(177U);
    msg.setDestination(58144U);
    msg.setDestinationEntity(112U);
    msg.mcount = 46U;
    msg.mnames.assign("GKFFQORGMOCSPYIAQQFKDUSQWXZDCBPAIRZLBEKXMYFRSLKMORPPNIOLCAETLLPXXZRHFSLBKYSHZBMPONHEGJKLHGORTTVGAFKMYZAVYJUXSNUUOENJHJWXAQUTTEWGEUIWVIHVTCKWXWYUQTFRWPZSGFMDVGRMFJZGKBYTZL");
    msg.ecount = 81U;
    msg.enames.assign("ACHXKYANHAFAIYN");
    msg.ccount = 220U;
    msg.cnames.assign("BQFGFZBQZSKSEEWMOOTQPMKVXEPWJGZFVVUYKZPUPDYCHZFJZGMUAYDDMNVWSXFRBUXXWWRDNPUXFLTSSMNAZDCSDOIPLUWBORXKTCIRUZHG");
    msg.last_error.assign("XZRIFSNJMDMOVZFCGVMBIGHBXICCYJGYJHVZURDJBACLXZMZWTRJPBJWHEZQPOPRHPSKAPEIKCIFHNBUQSNFODUURYSZIQRUYUQQJGXELKSNZOYJFMYVPRWQIIQTCAFNSACBWTVLEGFLLPSDWXXKTPLESNHAOFYTIXQXRWWPTVYNZUZLMLABHETMVTQNEKUPJKRILQCHJXEWVMSADTXUKOFGODDBCGYLCKKNOMOW");
    msg.last_error_time = 0.2949359091487782;

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
    msg.setTimeStamp(0.6127707227217825);
    msg.setSource(15023U);
    msg.setSourceEntity(72U);
    msg.setDestination(45725U);
    msg.setDestinationEntity(183U);
    msg.mask = 92U;
    msg.max_depth = 0.2185752754190089;
    msg.min_altitude = 0.3239238702411589;
    msg.max_altitude = 0.8938508782254648;
    msg.min_speed = 0.396753368495387;
    msg.max_speed = 0.3890773319336054;
    msg.max_vrate = 0.14866913764737832;
    msg.lat = 0.4708302168445584;
    msg.lon = 0.27733322744293887;
    msg.orientation = 0.495904559303474;
    msg.width = 0.04734159372884594;
    msg.length = 0.5741735081724607;

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
    msg.setTimeStamp(0.9555062297765065);
    msg.setSource(16631U);
    msg.setSourceEntity(60U);
    msg.setDestination(27173U);
    msg.setDestinationEntity(148U);
    msg.mask = 14U;
    msg.max_depth = 0.9577665121640829;
    msg.min_altitude = 0.21990571707556827;
    msg.max_altitude = 0.9187929303559433;
    msg.min_speed = 0.6037472094894921;
    msg.max_speed = 0.7316900284202178;
    msg.max_vrate = 0.6772129802054427;
    msg.lat = 0.817104536455729;
    msg.lon = 0.17310390274966203;
    msg.orientation = 0.6166293122964233;
    msg.width = 0.9260635496073668;
    msg.length = 0.6947563903752153;

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
    msg.setTimeStamp(0.37162349142884965);
    msg.setSource(17988U);
    msg.setSourceEntity(108U);
    msg.setDestination(6918U);
    msg.setDestinationEntity(119U);
    msg.mask = 90U;
    msg.max_depth = 0.5177566723341739;
    msg.min_altitude = 0.5643574235977614;
    msg.max_altitude = 0.9219570920363945;
    msg.min_speed = 0.8292048666178703;
    msg.max_speed = 0.48955028201857687;
    msg.max_vrate = 0.4052784949582957;
    msg.lat = 0.1852405290112472;
    msg.lon = 0.12730466993947376;
    msg.orientation = 0.2732734574875233;
    msg.width = 0.6238497845481595;
    msg.length = 0.09497179123462363;

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
    msg.setTimeStamp(0.908280563661419);
    msg.setSource(32669U);
    msg.setSourceEntity(215U);
    msg.setDestination(28310U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.8785831718095196);
    msg.setSource(30362U);
    msg.setSourceEntity(4U);
    msg.setDestination(65462U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.45393223967532337);
    msg.setSource(38141U);
    msg.setSourceEntity(196U);
    msg.setDestination(515U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.4640504976970935);
    msg.setSource(60978U);
    msg.setSourceEntity(222U);
    msg.setDestination(38383U);
    msg.setDestinationEntity(18U);
    msg.duration = 61337U;

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
    msg.setTimeStamp(0.7544645081704403);
    msg.setSource(28264U);
    msg.setSourceEntity(37U);
    msg.setDestination(7410U);
    msg.setDestinationEntity(150U);
    msg.duration = 1261U;

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
    msg.setTimeStamp(0.17387323632980412);
    msg.setSource(771U);
    msg.setSourceEntity(6U);
    msg.setDestination(1616U);
    msg.setDestinationEntity(65U);
    msg.duration = 54997U;

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
    msg.setTimeStamp(0.24779032333906048);
    msg.setSource(32464U);
    msg.setSourceEntity(111U);
    msg.setDestination(8767U);
    msg.setDestinationEntity(174U);
    msg.enable = 140U;
    msg.mask = 2170570416U;
    msg.scope_ref = 2412854160U;

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
    msg.setTimeStamp(0.46514731321696656);
    msg.setSource(8449U);
    msg.setSourceEntity(226U);
    msg.setDestination(2680U);
    msg.setDestinationEntity(76U);
    msg.enable = 173U;
    msg.mask = 3516533055U;
    msg.scope_ref = 3383869930U;

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
    msg.setTimeStamp(0.9010986380945367);
    msg.setSource(14890U);
    msg.setSourceEntity(37U);
    msg.setDestination(28379U);
    msg.setDestinationEntity(137U);
    msg.enable = 222U;
    msg.mask = 3088904357U;
    msg.scope_ref = 1533607796U;

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
    msg.setTimeStamp(0.44282387910005105);
    msg.setSource(51472U);
    msg.setSourceEntity(89U);
    msg.setDestination(59614U);
    msg.setDestinationEntity(38U);
    msg.medium = 229U;

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
    msg.setTimeStamp(0.23263410806470308);
    msg.setSource(10048U);
    msg.setSourceEntity(184U);
    msg.setDestination(59684U);
    msg.setDestinationEntity(160U);
    msg.medium = 17U;

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
    msg.setTimeStamp(0.2947049863169404);
    msg.setSource(46120U);
    msg.setSourceEntity(89U);
    msg.setDestination(33882U);
    msg.setDestinationEntity(179U);
    msg.medium = 202U;

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
    msg.setTimeStamp(0.5893220263941494);
    msg.setSource(2044U);
    msg.setSourceEntity(176U);
    msg.setDestination(47360U);
    msg.setDestinationEntity(186U);
    msg.value = 0.6039482537386857;
    msg.type = 139U;

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
    msg.setTimeStamp(0.11021818554336282);
    msg.setSource(41400U);
    msg.setSourceEntity(100U);
    msg.setDestination(24464U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9417903464731868;
    msg.type = 19U;

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
    msg.setTimeStamp(0.558805604151027);
    msg.setSource(64313U);
    msg.setSourceEntity(89U);
    msg.setDestination(40358U);
    msg.setDestinationEntity(170U);
    msg.value = 0.13583313481881198;
    msg.type = 139U;

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
    msg.setTimeStamp(0.16436303956483045);
    msg.setSource(36939U);
    msg.setSourceEntity(143U);
    msg.setDestination(4507U);
    msg.setDestinationEntity(98U);
    msg.possimerr = 0.7729061537651197;
    msg.converg = 0.40111108182133537;
    msg.turbulence = 0.36439530969861167;
    msg.possimmon = 158U;
    msg.commmon = 118U;
    msg.convergmon = 185U;

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
    msg.setTimeStamp(0.20672783218153934);
    msg.setSource(4223U);
    msg.setSourceEntity(89U);
    msg.setDestination(3198U);
    msg.setDestinationEntity(197U);
    msg.possimerr = 0.6956517936440272;
    msg.converg = 0.45954015206310106;
    msg.turbulence = 0.08369105145093714;
    msg.possimmon = 249U;
    msg.commmon = 186U;
    msg.convergmon = 198U;

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
    msg.setTimeStamp(0.3736753856041728);
    msg.setSource(52067U);
    msg.setSourceEntity(112U);
    msg.setDestination(42896U);
    msg.setDestinationEntity(81U);
    msg.possimerr = 0.09664447435816947;
    msg.converg = 0.5635608277485831;
    msg.turbulence = 0.41705841021837875;
    msg.possimmon = 98U;
    msg.commmon = 108U;
    msg.convergmon = 65U;

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
    msg.setTimeStamp(0.04502015968919826);
    msg.setSource(61646U);
    msg.setSourceEntity(229U);
    msg.setDestination(37517U);
    msg.setDestinationEntity(106U);
    msg.autonomy = 109U;
    msg.mode.assign("CNJYPZZFWHFQHWLTFOPBGSNZYTJMOHHJMDMYBPETIGIQTVCCMWZVBHEODUPKNDCMMJATXMDYROLTENWYFRRTPXVQMBEXDASNZVIVJSXYYRUNGDJWKRLASZLQAKCEXZQPODFUOBVZSTGLJWWEHTYPGTSEI");

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
    msg.setTimeStamp(0.30730856151125197);
    msg.setSource(23922U);
    msg.setSourceEntity(186U);
    msg.setDestination(14576U);
    msg.setDestinationEntity(231U);
    msg.autonomy = 13U;
    msg.mode.assign("FNLVILXJKHBJFSVJGUWOQQNWTXKZPFHURSLOPJLOBCTMOHVTXJPAQVYSSYMOYALCLCNVTZQBAHLKFSFUXCWDBEVMBVRGWMNIBUEPGBUTWROEDTNCGUSPCVFDVDZAKIRSIYRKWUIDQENEWARIZRFSEUJUMTQSWTYHNSRVEAHWDPZKMKLYCDBZQEACYJCJKXTDNEGUIHAIMDZXTAGYOXIPHWLOMFFAZIYPCJPXOGXQELJGH");

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
    msg.setTimeStamp(0.8803287008346703);
    msg.setSource(27179U);
    msg.setSourceEntity(212U);
    msg.setDestination(13924U);
    msg.setDestinationEntity(159U);
    msg.autonomy = 209U;
    msg.mode.assign("DXDEHAREXQCQRIATBRAGZHJUJRSUHWSLIINHOWSVMNVBWUPIJJCHNEXKNGVOFRFJZMQCEYJK");

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
    msg.setTimeStamp(0.5655230882603204);
    msg.setSource(37011U);
    msg.setSourceEntity(116U);
    msg.setDestination(15939U);
    msg.setDestinationEntity(25U);
    msg.type = 79U;
    msg.op = 195U;
    msg.possimerr = 0.37438179836806984;
    msg.converg = 0.21477373620511853;
    msg.turbulence = 0.22995949305004693;
    msg.possimmon = 196U;
    msg.commmon = 144U;
    msg.convergmon = 254U;

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
    msg.setTimeStamp(0.5093690410965463);
    msg.setSource(35111U);
    msg.setSourceEntity(1U);
    msg.setDestination(3730U);
    msg.setDestinationEntity(238U);
    msg.type = 107U;
    msg.op = 24U;
    msg.possimerr = 0.3940073798212719;
    msg.converg = 0.3102174025972456;
    msg.turbulence = 0.5113679213805119;
    msg.possimmon = 17U;
    msg.commmon = 100U;
    msg.convergmon = 106U;

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
    msg.setTimeStamp(0.38273306919543215);
    msg.setSource(55655U);
    msg.setSourceEntity(234U);
    msg.setDestination(40139U);
    msg.setDestinationEntity(145U);
    msg.type = 140U;
    msg.op = 70U;
    msg.possimerr = 0.583740977415666;
    msg.converg = 0.29846244721601234;
    msg.turbulence = 0.9597859432763381;
    msg.possimmon = 153U;
    msg.commmon = 120U;
    msg.convergmon = 34U;

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
    msg.setTimeStamp(0.2648650068999594);
    msg.setSource(43001U);
    msg.setSourceEntity(137U);
    msg.setDestination(30498U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.30695437306524986);
    msg.setSource(50937U);
    msg.setSourceEntity(194U);
    msg.setDestination(28677U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.03901196415548347);
    msg.setSource(23639U);
    msg.setSourceEntity(187U);
    msg.setDestination(11248U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.3298910330363176);
    msg.setSource(60761U);
    msg.setSourceEntity(237U);
    msg.setDestination(12744U);
    msg.setDestinationEntity(250U);
    msg.plan_id.assign("HCBMVFUCEDXUWBRGBGCYHGDEKLBAHGIYXLOZPUEKDOGPTYIJWYQXQQVXJKFJMNSOFNNFQNMJTIUMDZVSXORUJSRILSVERPABNXUOLTMRJEMMWTIGYNKOQADFFLSESBRAEQHMBYPRDJTOPHFEZEPZCZWSWVDMLLIFVUTWVKCVVYFIKWDLOGTAZAWSGNPHSQBYKAUHJVTTLIXAZUNHHRYDFHRKWCSQQCOYZRPZPPJXTCINIKXCGBDZQO");
    msg.description.assign("OIJMDTGXJJGKPIFYURMUWVFMALEBTBZSZTGZMVVSSCVQHCJWIFIXVCJSGWXPQWQNWLPVJGZBXYJEGCTADXIESTHRRENUHEHMIHMKSKFOLLRIUNTPNQWWHYOJNFNVLCQQWGAZYCAZUYVLDBEPASRULIBKCCGLOOUYTUFORCLWAMBQMKYXX");
    msg.vnamespace.assign("UMKCTTUSJCDAHMYFSLNDAHKSLQFYHSFEKLLIWNQFDGGERTWJAGOCASTVRSXWZJHKVCPPLQECYLLGEBVGWIQXTARVQXKUMIJLVXGRPFBPRIOJDOJZNWTSIASHOAOVMJPGYZVUEEABAUMDBRDCVDYJFUBOQNZWXEAXKMYYTNWGXZPOZUMKTKBHEUGBCXZHPPZBPTOWSKYHQHXFGRQUW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VVJENPDEDESMALDOZYONFFZQUO");
    tmp_msg_0.value.assign("ZNZNRTYBUDCCGYXPZNGXVMHQJDOHFMMFRMLITSXUFUNEKJQEXJWQTPRYLPHBUUUFSCUDAFOVXRDXEHUIKAQXWPBDZBKZTGHVCEQJWHYEIGGRVJGNYHWLVNEAOUYGNKPPSPVOMAZQCWAWPBKALRTGCJLESIXQAIBKUMCFIFEZOLYOHMOCBMVRINWSWYFYLZISISNGDCYBLSTLAPXKRGLWBZCZMENXATKT");
    tmp_msg_0.type = 59U;
    tmp_msg_0.access = 198U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HHDXKGLVWOQFPABPGZSLUYXVZDBNMQEFIQTTQFIRQOQRKHFLIDLBHZCHAJIFCRWPJMMYBSCHTDZMWPMURICKMLJOSNZEXCAZQXNOCEFJRMIVUEUREFXHNCYVAEGUKONZYKQFJOZGJXNNXQWGBEUEKTYNRSPSOLIVTMZYSYGKCTGGFUPFHDIBQGUHTLWSAVYABNHXAMDSJ");
    IMC::IridiumMsgRx tmp_msg_1;
    tmp_msg_1.origin.assign("RDWFSUOCWLKQQQGNYTQTQMOTVLUXLGTOCYCTGXHBRWNBOQRXYBCXJPQPTBMZCXZYVYMZXOM");
    tmp_msg_1.htime = 0.47416035721013505;
    tmp_msg_1.lat = 0.9191823384893493;
    tmp_msg_1.lon = 0.18803729544369607;
    const char tmp_tmp_msg_1_0[] = {-123, 49, 112, 83, -22, 36, 92, 47, 39, -99, -75, -32, -61, 78, 117, 23, -65, 71, 36, 64, -48, -58, 48, -87, -43, -90, -64, -44, 122, 61, -72, 105, 72, 20, 88, -102, -33, 122, -89, 77, 5, -80, -79, -76, -61, 5, 91, -16, -13, 90, 68, -70, 13, 84, 28, -98, 84, 76, 58, 16, -100, 36, -54, 125, 34, 14, 123, -5, 87, 90, -34, -127, 14, 52, 73, 59, 40, -20, -78, 122, -4, -2, 113, 125, -38, -101, -26, 18, 34, -98, 115, -72, 4, -19, 26, -105, 122, 69, -121, 89, -89, -111, -94, 77, -119, -122, 117, 49, -27, 117, -65, 82, -6, -43, -101, 1, -13, -44, 46, 86, 86, -80, -110, -70, -118, -94, -109, -106, -23, -95, -73, -47, -66, -53, -17, 89, 6, 15, 36, -16, -38, -112, 1, 103, -93, 47, 117, -117, 42, -118, 81, -45, 23, 100, -45, -115, -42, 78, 20, -34, -109, -65, 62, -91, 5, -90, 59, -17, -9, -31, -46, -34, -85, 6, 76, -99, -76, -23, -2, 109, 17, 82, 80, 47, 37, 110, 25, 45, 41, -125, 112, 58, 50, 3, 125, 69, -42, 47, 26, 74, -74, -104, -66, -43, -71, -1, 105, 30, -1, -10, -111, 87, 97, 106, -73, 42, 37, 9, -34, 84, 94, -127, 116, 3, -120, -70, 46, -30, 117};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.010953281037718754);
    msg.setSource(154U);
    msg.setSourceEntity(125U);
    msg.setDestination(34650U);
    msg.setDestinationEntity(246U);
    msg.plan_id.assign("JGOPGMIXPAUEKRFIQIZOFVIFJNTQLDBSIVMYZVHNPCMTUACZIPTDAUALUNABHXBVADQRQCWHAOWHQDXIVCJZWCXOGNHOZJSFKSWMHFNTKZRMKDRYPVVPGDHEYOWMOXMDLIJYJGHQWLNFREZEWBGGNMRAJVXBQSYFEURBOXSCSAPYXUCKKEKHCTULXTNWFUSCLFPZKYDMQYDC");
    msg.description.assign("XNLOERMUKJQWCITWQZIHVCKQIUBAXMXYISHDJXTXWSEFEOBOGBUIPLNODSAXPWEAWUDFKHOGJJDFXNFHUVLOQKTTAQJCYTBCLGKTWPHWCOUYYSVRZRGSQJWAEPAFKMXBVSBDQPUAHLRVPIGPCREJGJMDSIZNAHFNNOGMPBPWSALZTIMFKFUCZYCTKYNRLJEBMBNSGXZKYYHQDBNOZDMCLRQNHLIQR");
    msg.vnamespace.assign("GVBFUIKTADUCTXEQTJUPWGBMROGXKCNEECLAJKGCECQONEYXKLYLMUDKZPMRAJYRWQELPNROYIVGNMBBCAVIMPSUJXFVMVKIZPONUJMGJNDUCWXPQJTKJSVDTYQNBVIXWYQIDTCHSBYFAFZQHMGTINRSYLWPOMXWZCVPIDHOQBLWUKHKFEVROWIHAINWSJHDSDSOHFQFZAYTEGLGDZUXSEHXGZS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MYTWZOFFNIXTGZQCUKFHAPRTTIFPPQJ");
    tmp_msg_0.value.assign("AKCUKNPXHKUYZUGRYUGXFOCMOXIVNRSDEVSMOYTBJKBRFVNHPYWVWESTXDGMOHUCQBDCRZGSDAEJPTKOZPYGCFXBVEQYJLCOIVXMOWRFUAKRLRWOVQJJIXBFPAEKYFIWNPYQLZRNOQGQABH");
    tmp_msg_0.type = 210U;
    tmp_msg_0.access = 131U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WXCRGBZQRTLJNJULBPVDWNBMQPFUZAAKLMYKHYTTLBZZCCHREXHLKXGMDWGDOQYIAOREAJHJXFEUZSQLGOFGLUMYRKFOSRHKSSHFQWVBWQTUUHDCVFUKVOKQIVSJRVHSRDOZAFPZLPFSBJBPGBWA");
    IMC::TrexAttribute tmp_msg_1;
    tmp_msg_1.name.assign("VZPHRNZMMDEZE");
    tmp_msg_1.attr_type = 223U;
    tmp_msg_1.min.assign("BBWFNYOCKLEYQTQGYNYDWNVNRBHCZHJLSRB");
    tmp_msg_1.max.assign("NINXVONCMQXBYTSRZCAJLMPAEIIYRBHGMDICMZQWGAERFGWACWZBSDSRUXUELZXIAKRPUQHIGHQDDVDGSNSVRUUOYFXHHEQJVWLXKPQYJFOVAMWSTDGBTBWLCFFGBYCKRKOMZMLQAJNOLVUDJVJJEVOJHPNBMFCVWSISEXWUTMHDDENYKQPYBSVOGXCLFKJEZJFZCEOTGOYBYHKFRDURKXPWMALKTWELRTU");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.7828407464489355);
    msg.setSource(450U);
    msg.setSourceEntity(140U);
    msg.setDestination(28075U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("IETGYAZHNPPKHWFTAYILQHKSNSJOAFUILOTJSXORCOFMOBEJLYNNXGVNDNIZDBSUPMLWTALMUAWZLQOGAJYQSEDWCDHVPRGKUG");
    msg.description.assign("FNKKPVWJFGJSSLIWBGROHQCQUFVGEJVMUNSVKXWCMIHNERWXJQGTJHLNPFDTURTMRDVQFOWXHOFE");
    msg.vnamespace.assign("PFJUJZKIOAMSZAQRVOMXDJEHEVKGTLUPQUVSFSHQEGRVTBTGZAISGYLDMTLTLTZMNFNHAKJXYBTUZIDVFWJGPFHSYVYCFUNPHSJKQCEJPIEFYHDBUZCHHISHRSOGGFXDB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RKEYKZTXJMQIJNXBYXEYROHYXKBQVUVSWHYXEIVVBAUQAQAHOHKMIIQAVROCDLGHZZULCLRVJAZFTOSHZOPK");
    tmp_msg_0.value.assign("TXPAJOOUVAUQEZGVYDOAYIBRJBRXWIT");
    tmp_msg_0.type = 120U;
    tmp_msg_0.access = 249U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WKSHBBUWWYOZTLLIAFETQSKWHIZSGPDBWJYBTAIQOZRENHEACRREELOLPYMFDJMDCPWLRIYGLGBSUYEX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("UTQQSLFLDLLCTZVDUAZVMYESOXCDYUAQNRCUAETAKBEKZVPLNMPTFHHZWNPVBBJFKIQOBHSRWDIYYQXMXHHKF");
    IMC::LowLevelControl tmp_tmp_msg_1_0;
    IMC::DesiredHeading tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.4767899494821639;
    tmp_tmp_msg_1_0.control.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.duration = 15885U;
    tmp_tmp_msg_1_0.custom.assign("PPMOTPHUWOOUFSRR");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::MonitorEntityState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.command = 28U;
    tmp_tmp_msg_1_1.entities.assign("TTOKBAHWGYZLQPAKNAKIBNJOQZWEQIAJAKEMVYRLMVCOSUQXRTIJQDCBWUVRNRFT");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::TrueSpeed tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.value = 0.9504683816467746;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("LXLYOAEGVKFCDYRVDGGXMJFPPRBAQMMNXSSWEUWBNKYNRHVJBWUGEXYMXUYWQUZITOQIBPXDNIWFCAIFSICBZTPSXCEBOEIEUOLEOAMHUOLPZOHDFHCAZYDILGAIMTIYWZDMFKTYRJGFASJFKPNRQMHTGBHCZNBGRQXBZAMTZLVA");
    tmp_msg_2.dest_man.assign("LWDNNWWTPFQYYZVTYDGNZOGMSRAJIIJTLBWSZSBBUTAZUXAHUGMUIKNMJMHQGXUJVASGHSUPHDROXWTEVSJEVQXCAOKXOWCCPTPNFMLJWJNYZMFRXUOTBAGQCCOXBQZRNNLFODMLHBITILGKHPEFNOIGEFBIYXADLIDEFVAIVUWTPOKYEYWLQQKYMCKJVVXERTDKPGZBYHHECZGFSHZYQQBOC");
    tmp_msg_2.conditions.assign("ZUZXUGDSZEDUPCOFAEFHAYAMPMGYMBHYGABSYVYCRZNOSZBWGGWANMPLERHKYNCPNZFILWOQOKDXIXMNHHASEMOECJBYVVJRQDPESUZGOGVTURTMSSLBIQLHQKTJXPWKDBCPDBKKCXXFFLAKVAIOMHBZRQFZCKCINTFTHEVAXROLLBWJYIRSWPIVZJNPJQOVWJTGQQTLKUREUVOWMAFILEDM");
    IMC::DvlRanges tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.direction = 78U;
    tmp_tmp_msg_2_0.range1 = 0.8771595876269972;
    tmp_tmp_msg_2_0.range2 = 0.8274137593345758;
    tmp_tmp_msg_2_0.range3 = 0.609548044679772;
    tmp_tmp_msg_2_0.range4 = 0.520344728605008;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::EntityState tmp_msg_3;
    tmp_msg_3.state = 149U;
    tmp_msg_3.flags = 242U;
    tmp_msg_3.description.assign("TKMEFZHHWPKWNYWIERCUHOWYXCOGUURKHZTNTTDZNMVAPAQADASETASVWGJVODXUUFLGQLVMFEPHVKEGEGCIHVOIPKLSOPAWBCJRLAXJVSWILQLJSJEDFJKMHOIWDHFYGXYZQQTJNINPKRSJXBRBBCISDTB");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.8053807707588447);
    msg.setSource(10645U);
    msg.setSourceEntity(68U);
    msg.setDestination(24179U);
    msg.setDestinationEntity(144U);
    msg.maneuver_id.assign("GIKYIFNXWXCJRZIFBKPJXDMLMQAAYTOXLGSWYBTFGVYRXXEDZTSAEFBVZNMGGEXRWJTDJMMOXHBYBNIRGQNSKABLUDXTWBJACFYRHLSEPQPLMLHBNQFNATWEKFOVCLJMVCIPPGYULKNHQORHHPCQYDCUNTDJGTCMKZKABVKDWU");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 5287U;
    tmp_msg_0.lat = 0.6564381716423837;
    tmp_msg_0.lon = 0.8820916188791141;
    tmp_msg_0.z = 0.17702491027949285;
    tmp_msg_0.z_units = 236U;
    tmp_msg_0.speed = 0.9074402115555241;
    tmp_msg_0.speed_units = 44U;
    tmp_msg_0.custom.assign("NELQGQNQRBNOFCXGZKXLWSKRYTOVNFEAVOBKIWRXYGJYVFUUVFZBVETJSEGFSGVDADPCUPMZ");
    msg.data.set(tmp_msg_0);
    IMC::Rpm tmp_msg_1;
    tmp_msg_1.value = 19541;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PathPoint tmp_msg_2;
    tmp_msg_2.x = 0.6815111192688458;
    tmp_msg_2.y = 0.6599449631730931;
    tmp_msg_2.z = 0.7179432129556036;
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
    msg.setTimeStamp(0.6566785463121412);
    msg.setSource(35888U);
    msg.setSourceEntity(181U);
    msg.setDestination(54219U);
    msg.setDestinationEntity(4U);
    msg.maneuver_id.assign("TQIVMYUTRATDHFPLHSUKEMGNQSLUSVTFUJPLJLIYWJKATNGPFDKLISALWOX");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 16334U;
    tmp_msg_0.rpm = 0.5947913482314302;
    tmp_msg_0.direction = 80U;
    tmp_msg_0.custom.assign("RXMXQXEETNQQTJJMBCOHGGXPSGNOUXIDAHEBKVWXDIILPSEFKLRAFEJGBCZKTVJINMHFUEVHPEFVCLPMVWYRUADISQCAWBLQF");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.33753466493611006);
    msg.setSource(56067U);
    msg.setSourceEntity(242U);
    msg.setDestination(8519U);
    msg.setDestinationEntity(52U);
    msg.maneuver_id.assign("ETQCANPEFPFEQGKABXBSQ");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.00440747633570493;
    tmp_msg_0.lon = 0.8866263677713819;
    tmp_msg_0.speed = 0.5797994040644951;
    tmp_msg_0.speed_units = 99U;
    tmp_msg_0.duration = 62261U;
    tmp_msg_0.sys_a = 40050U;
    tmp_msg_0.sys_b = 5206U;
    tmp_msg_0.move_threshold = 0.011693464413279342;
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
    msg.setTimeStamp(0.7371294419385079);
    msg.setSource(43833U);
    msg.setSourceEntity(11U);
    msg.setDestination(57955U);
    msg.setDestinationEntity(11U);
    msg.source_man.assign("SNKZBUZOHXJRFVIFNSYQIMBZXSXQDXWBFJYMULOGOAHIFGIEIVUSKWJUSUTPBZALMYTEMVORUYFGZLWBJCJQGKAHSRFTPBIZVJOXKPNTCZSDHEEHTXMQQVUICCTFQEMRNXAJTLWALFONAPJWAHLGPQYBLRQLBPCWACCPCVDPHWVITNOXGGYSDRDEEDXYARKZPKIBWRLJKRMGHKNNAXHEUVVYDNIHMJCDGMTDWWBMSQLGDNEZUFUVRZYPOK");
    msg.dest_man.assign("AIJODYKDMVFPEQEKUBLXGETIFJKADRGDDVUHJNGLEVWOQZSMGKMLRKMJVJPMQHUWSXRATCBRZESIICOOHETZALNUJHALHGBUFNBPKZIVZAWLURTDEQLOCRURBPJOXJCTBZOVSKWNMVCADYTLGNWLZYGSXQCCPQYPPRJMCXDDMOCOPHUDYMKWZGQBXMXPROWVAVXSXNZBWHFLBFVTNXZFTGEYRSIHEJYINYPTWFEKKFIAHUFNSYISWNTA");
    msg.conditions.assign("UHNUFXMKXGHEKQMNVPPHPCTFGVEISFGXXQEUYVBHQMTQUGQMWSUKSQYBRJRGJAJQKDNSUYGEIOKBDYCVDMZPNRBLZRFACNDTLJICFGPLDMNCGSTZRVOHPHFSVIAIFZVMRSFZUVODWLWFHYQPXJZTBZPTBTRHWDGOOOTOYKAILQXLJILBWRXYJGZMNBUCSQPCZLSWHNEPXXS");

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
    msg.setTimeStamp(0.9596898032231364);
    msg.setSource(23785U);
    msg.setSourceEntity(43U);
    msg.setDestination(57850U);
    msg.setDestinationEntity(160U);
    msg.source_man.assign("IIBUWCDJUHGSGVIPCRBGQNDPQPJFEQAJUGQGGYZNBALBJXRXQVREUOLVERFCYSPWTVNQFXJMSWJXOMWRUFHNKSLEXHHRTFBUVOSJVYKXQHFIUCNDPHTVBZBQTUGOZTZEBHOAEYNEZCXXMPSAIAIFLLMMCBK");
    msg.dest_man.assign("NWYRFIFXDHKJAOCERWVUMYADWDURLQBEJEVWSNTLBLDLFFNSERBOKQSKAMBCTYXTFSUPIOZQMEAXUJWBCQCDDPVCAJYNFSZPPAZHPIOZWQIKMPZQOEGPKJQKMAAXLRFWSNGHREM");
    msg.conditions.assign("BVMMDHCVNKOEXJITOOUELHAREVCHUBWUPNQESRSPLYRRMDIKWICKTGAIEJJMT");

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
    msg.setTimeStamp(0.4520903785087176);
    msg.setSource(19863U);
    msg.setSourceEntity(16U);
    msg.setDestination(11849U);
    msg.setDestinationEntity(115U);
    msg.source_man.assign("WKJOBJURLAFAGIOCNYJPHAMPDXSFRUZJGEMVUVFTHLHRWWZLBAZMPWWTBZOJRACIWPMSFLWTDCZYVOYCGPKRXQI");
    msg.dest_man.assign("PUJDAECBJHVEFCNUIYDZBPSIVGLVYBXCQKFSGGTAKORWBUSIELEOLXAOFVMUQKCIYYMGNNIVJLBWXAHQTVEKYSTPESYZHKNKYOCMHLWKPWZRUCAZHUEGKWMZHRRMFPDFEKLGTTQODMAGOYRVVDTWHPCJOHVLTXQGPYCBNPSVHRRJADWRDBOJXZIAXKZATNOIETGSFRJNWEMUBLHBZNUNQLWCMSRXBXDFPMZXSWU");
    msg.conditions.assign("YEVDHGVHOWKTDJQQPKZYLFNQIACXVEUFMWFDXBVVDSUAQLTSONYYJXOPZABRHSKIVPJGXDNCHLAWULZNTHZXWOLQFKNUROKFLFEYRPSCPFLXWDXTUEEMBFOLNTCAISJKKTLEDPRTZVQPPJNHZGVWCYIXVJKRTOXMAUCBHIFKWUCOERYS");

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
    msg.setTimeStamp(0.15237983543956424);
    msg.setSource(49151U);
    msg.setSourceEntity(76U);
    msg.setDestination(17453U);
    msg.setDestinationEntity(62U);
    msg.command = 97U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TNWQFRMDFKZUPCMVETNYFRIIYWSJILVFHVTQIKUHZNMQQYCYPOGXLAMZWPZFQMHCPPAMESUVZIOHMKDAKECGOGMVWNUDJWITCKXBUHLHZHAWZDESRCCENDKRYJBRIDWXDUTWBYBJDAGRLZHAUKSJLENXTJGNAKIQMXFOGPTSGORJPPBHXNIETVTZQYFBPBYEOLYKQULAXGVAUJDVCSABJFMSOELVNRXZWFNBJGLUC");
    tmp_msg_0.description.assign("JFHSEVUUZALYKDWUGXLFVLVORAWSHMVIFCFSRGIYVZAKTLCQKINXDQJBXOONEWAUDBGVSVCENERJGCLMVUNUKYPSYEMRJIKQKPDADGRTBMIXABQXPHPSNQSNRIZMNSEEHMTOHOAMTTNFOCEBCLTXZUJXQP");
    tmp_msg_0.vnamespace.assign("LSMXSYXPLSCPIHOICMMJQSBUYMCJGALROPARICSZ");
    tmp_msg_0.start_man_id.assign("RVOSLUPMSDCNCOBHWPMYSEGMZPXDANQMYFIZZVBNNGJPQQOMVVYBCGPODFFKZZSTDQASBAVXZYUIDSIJLPKLDWPCGOUCZLRXWFFKEGQOGPIGWVMJEWKTDJOESWJIVKMILLCRBC");
    IMC::RSSI tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6856592273600021;
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
    msg.setTimeStamp(0.5469982440408359);
    msg.setSource(49182U);
    msg.setSourceEntity(51U);
    msg.setDestination(47315U);
    msg.setDestinationEntity(37U);
    msg.command = 85U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XCACLPCIQVUWAAPVFKEYZRGKDEORDUHVNFSMBEJICKZOBMYLTOMRQDJIKSWPHSAOKEDXBLZRG");
    tmp_msg_0.description.assign("VGRVVKAGXCIAQXRJENBAMYYGWMSESPHXXLDJNXLLDVLEBEMUBSVURANFGZHRT");
    tmp_msg_0.vnamespace.assign("KYAKGFDOUBAVMQRFWBNTDFPNGAULRVXRDNDWWFRFZJIWISWSHUVBMHSLJEJOARQNTZSCLOEBQXMJRBITLQAGIKSXYPLZNOWYFGGDOYZYVPQSFJXMUUOGQJPSKNQRKKWESKPBQOZFGHOPBDEPLIMHWMJXZTVJRTDDCEQLPOEAIZKIIUOHHGUVXCTCUVPJMHMIBMNNAMGDVC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MDABHNZETRDXNQMSZBQHGKLOTRXPITSPISCZLBIZFHHJSXARTCOQVYLJWPLEKIRAALRUINWKYPWMFDMJGYGMXVJKPSTMIJNGBAJAKYLNQFVXRUBDJ");
    tmp_tmp_msg_0_0.value.assign("UQZJHCOVUFAWRALXBMQALCHSIMVTCPTZWEJUZMGRCPBFUYNQSM");
    tmp_tmp_msg_0_0.type = 193U;
    tmp_tmp_msg_0_0.access = 221U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OFNSOXRXBLJTRKJZODWEONKPTSHIPZYAWLEQSDGSZZDOJXYQBPAKMA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JUNTFWFTQEEIYFKQZVOHKMDMQKSUHBHVMICWDCBETXXNCLXMFMHXGLWOFAVSAHGLSAWNGNJEUQRVGXSYHONFAXOAPZANNTVDZEVCFQUOWJRBUOMRUCMQNXZMDEUTDBJBAGCYAGHTJSIKPTGXJKFJSYEIRWQACYPVDCZIPFRPMLYRABGKOTEHVBQIZEWEUXHVSWKY");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("TWRCITNYJCYBPWEEHCAFSAVJJZLNVDBWGVTSOHUSKWSOECSJGFJGPPBUDVOTMNYQBOMUJEUSEYMKRHWAVKOPTOXYKNKGMHZGKBLBQIVUUKGNDITSUAWRZUBXFGMYPLXZDCGHROZDXMPCJLZIAKXHFMDRESNZKIHPSQADLLBIQGRMJGQOQWNZQFDIMBPVIUIYNFDZ");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("PVITWATNUJZUKHWOFQWQUZMLBPXFXCFBOXPXBNETVYZDZDQFUKQXSAMXJCGEAWOLYTUYNHCMKXPDKSYCMEKDAHJLPQVIEKVQDOOJLHZKKXWYGIGNFMWCAWXEUKAJDM");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("SKFOKTTHLZXLXRQBRCCSGFJXAIZNGNJDDDQEUOHPMLGXAJBFFEGWMLMPGHZGPPIZDMOQJZORVY");
    tmp_tmp_tmp_msg_0_1_0.description.assign("URNQMBUIYICYNUXYAWLRBJRGTFTCFEWPONOPGIEACZMLPQWSEZXUCLWDXMXQPIVLUBRGKJGVDCHGHBWNOZJLEMIALNPAVAVRKWFNXQJGADMFXCMIYXZGWAFQMQSTVCHRZHKIYTBFVSLHOTVEDNZW");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.7021462770766568;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.3148900627627593;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.5547262039289413;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.27826932537917004;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 30163U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.14084844550516207;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 52621U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 25711U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.7907393193596584;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("NYQYEPNXWWWLUVQWHWRTLEWADSFHLMVBJZZJVPBQTUOFQEPCXJKDVTIRLMBHXIUUKQOLCHSKHSXGFXZVGZMITTDIBUCRIZTJVNIZASAALVCNITSAYVCADBSJEMJZPWJSOXVEGDYMREFPLQBSNMMORNOKHCTYAD");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::GetParametersXml tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::DesiredHeading tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.value = 0.5019836117625065;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XWTIFCJOQNFFUPUJETLGSJYZCQPPWCDRJHSKTCDQEMBABYGLDRDHVBGNTWQACRZUNJJLIDOKBUAUBFNVQHQRHHNOFSEXSRMWZ");
    tmp_tmp_msg_0_2.dest_man.assign("HJDNHRHQPWCAZENGBYPQBYJEWBELQOJAODVENRBNHXFJAXCHRBCGPOABQCYFZGESIVPVXYBTPJUDZSTHNEKEKVPZTNASUQTITRRVUMMFMQHWQJZVUTCKSFYPWUIBVSXUYLPLII");
    tmp_tmp_msg_0_2.conditions.assign("RZSAIUFRBMHXDTINWSAOWQRLKRTRUOEVOPAMIZSHCYERAQXGAZDITMVWOJJXLAOQPQXCDUMDKHHIFFQEGSVPYIEHGGZHZTJBMTGQCOKCJJAFXNFCXLMYBNJDFPERLEBCOKVRFRDYDAICYMZGTNIPKNJNUMPWXYBTBUMGXVLU");
    IMC::SimulatedState tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.13182887697614876;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.8185973115783939;
    tmp_tmp_tmp_msg_0_2_0.height = 0.3394595438652064;
    tmp_tmp_tmp_msg_0_2_0.x = 0.8090681019764182;
    tmp_tmp_tmp_msg_0_2_0.y = 0.8957984870570134;
    tmp_tmp_tmp_msg_0_2_0.z = 0.10796122489922588;
    tmp_tmp_tmp_msg_0_2_0.phi = 0.5420026392177195;
    tmp_tmp_tmp_msg_0_2_0.theta = 0.4936651283771568;
    tmp_tmp_tmp_msg_0_2_0.psi = 0.7154656990913955;
    tmp_tmp_tmp_msg_0_2_0.u = 0.7524818609691853;
    tmp_tmp_tmp_msg_0_2_0.v = 0.46198572300671814;
    tmp_tmp_tmp_msg_0_2_0.w = 0.5740889250743666;
    tmp_tmp_tmp_msg_0_2_0.p = 0.6587397491127861;
    tmp_tmp_tmp_msg_0_2_0.q = 0.050028555858422585;
    tmp_tmp_tmp_msg_0_2_0.r = 0.24679009238846938;
    tmp_tmp_tmp_msg_0_2_0.svx = 0.8532174039958008;
    tmp_tmp_tmp_msg_0_2_0.svy = 0.8296952672877522;
    tmp_tmp_tmp_msg_0_2_0.svz = 0.5560914706201117;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SessionStatus tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sessid = 3606802188U;
    tmp_tmp_msg_0_3.status = 44U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::Reference tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.flags = 218U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_4_0;
    tmp_tmp_tmp_msg_0_4_0.value = 0.4657903655275738;
    tmp_tmp_tmp_msg_0_4_0.speed_units = 17U;
    tmp_tmp_msg_0_4.speed.set(tmp_tmp_tmp_msg_0_4_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_4_1;
    tmp_tmp_tmp_msg_0_4_1.value = 0.5810938027719988;
    tmp_tmp_tmp_msg_0_4_1.z_units = 246U;
    tmp_tmp_msg_0_4.z.set(tmp_tmp_tmp_msg_0_4_1);
    tmp_tmp_msg_0_4.lat = 0.2335268731669019;
    tmp_tmp_msg_0_4.lon = 0.6567929703753369;
    tmp_tmp_msg_0_4.radius = 0.8933521708078785;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.7524659215324863);
    msg.setSource(53801U);
    msg.setSourceEntity(64U);
    msg.setDestination(43813U);
    msg.setDestinationEntity(252U);
    msg.command = 122U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RWETVRPRZGMKUSEWQELDUFLYFGRNBQWVBCYADEXRTUIUXCFONMTVAUCHPQMNJLGELAZTHFWZBMZHNHXMAUCPVONUEOCKGWZTKFEALEQUJDTPDVMXVCHCPFJKJXLVJMUFOHVNSYPVKQYPHUHYRBIGKB");
    tmp_msg_0.description.assign("KKVTTVXPDFPKJLYPYRQXJGWMCKKZYPQZLLUGUMDQSBRFOMGAVWYWDSANXCRXPRJMGCQCCKABXDOJCTNSVENQDIUTLRBHUNYAONFPUEZQMITEGSESBGTDKVSFAWHYAIWWYPMUCUFDDSBMWQPXZUTXDCKFGHLFEBHCQWFHRTMIQXHIRQEOJVEJOZJNZIAMWGLEZZMXLAHVPYXOHOFVTLICEK");
    tmp_msg_0.vnamespace.assign("LXSRVQQCVCXYFSFGCJGHIWGCERZRWSPJNMLFHKOUKPDJGYGDEPSNTXZQILHSUUWXAKZIWARLQTVDAPSBWFNZEOVHIVZGBUHGDAKROKFDWNIFEOAQCTIRHUMHZMWYDBEXOZTCMMGOVFZVJPBFBYJIYHOTYGJDLNEXTKDZQRKCLPMBICPKPATXQKROLANYBWRMUONZYXVNWXRFQVDFDLSNWMHPJGPIBAHYCELBVUNJQBJMKTQSTCS");
    tmp_msg_0.start_man_id.assign("TSBKXGWONFAPRSEMYBZYMHKLUAEMZXACWQG");
    IMC::DataSanity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sane = 250U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::Pulse tmp_tmp_msg_0_1;
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
    msg.setTimeStamp(0.4295402135134073);
    msg.setSource(36758U);
    msg.setSourceEntity(37U);
    msg.setDestination(64309U);
    msg.setDestinationEntity(12U);
    msg.state = 200U;
    msg.plan_id.assign("VWDITENFELMKBCRUDHVFRUEYVAVMSGFUOEZKIXUXLPSLJADEBCKBIZOQWCNJYMGQJDLHKCHTWMNBZYZMIMUFRMVMOGDFZGHGTQRGFLWTZUOPVHNTEHSHBKIOJGROGYCCNYBJMPJYKQGBZEZKEYPSXBYLL");
    msg.comm_level = 7U;

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
    msg.setTimeStamp(0.9816594600925883);
    msg.setSource(12992U);
    msg.setSourceEntity(214U);
    msg.setDestination(9007U);
    msg.setDestinationEntity(242U);
    msg.state = 130U;
    msg.plan_id.assign("SNPIZIWGDYQNUFFKWXECRWRJZLLGMUKAUQKSBYMYLMFPTRE");
    msg.comm_level = 180U;

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
    msg.setTimeStamp(0.4578771268916353);
    msg.setSource(24895U);
    msg.setSourceEntity(223U);
    msg.setDestination(19332U);
    msg.setDestinationEntity(57U);
    msg.state = 86U;
    msg.plan_id.assign("TJNQRARLOCKAQWGPITEAWUREHIJCFYWFKXAWNIBGWNHBKDQPKQNGUIXGQQNBOMYUHFNVMBDKOHGKXRFTFXPYQGTENZNCADSIJICPWBDULBVIDMPXVJLEECDKWHPOTXVHSYGCYOCRSBCKMMVOADBATZEMUTSLVRZKVKITQGZRZQDNBMSLLDJZCJVOFJPSUYDAQIBRWYGMXZPUMESWFAYULUNOXZL");
    msg.comm_level = 38U;

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
    msg.setTimeStamp(0.948386489189224);
    msg.setSource(21665U);
    msg.setSourceEntity(83U);
    msg.setDestination(11047U);
    msg.setDestinationEntity(87U);
    msg.type = 131U;
    msg.op = 6U;
    msg.request_id = 23934U;
    msg.plan_id.assign("CAABXSEQTWJFUKFQEFQZXKZHHDRAEZKKDSXLDSSBTYJTQRTRBGGNRKDVHPFSNIQRWUOZZJWBQGPLTJHBNELMXXMQZCUJEGETSCJUPDGRBRRHICVLZPYYIXUGPULVDVNWMFIABMAFAIMAKSOQKCHOPPYIJ");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 4U;
    tmp_msg_0.tas2acc_pgain = 0.6081577774134821;
    tmp_msg_0.bank2p_pgain = 0.09820482322105073;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HRGMSBXCYJROPBDIUSSUYPEVHCDOFYXWOBEPWOQRVLWNKWGCPNJUMMTAYCYRTPQOLWZSTFRIMKNAWJVNQXUSFDXILXWHFZKOOQAPBKQARXHFHEIKGVZDVFAUTQMMZKGMKUHOGKARSKMSHBLBLPXGEDUJYCJLBEWBVBINNLEFNYHEHIJRXYYDUWGLVISAQZCPIUSLVPIQNUCTGCTNDQTWVGCZODZMVEJKSFNPAAMFXDAJTJHEJE");

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
    msg.setTimeStamp(0.4307801909227815);
    msg.setSource(23696U);
    msg.setSourceEntity(209U);
    msg.setDestination(34372U);
    msg.setDestinationEntity(26U);
    msg.type = 10U;
    msg.op = 233U;
    msg.request_id = 31571U;
    msg.plan_id.assign("PGVERXRPSTBRAWQCINWVUKSGMAGNKXPZYIZCHFAQDLZLNUNJXAGIRZCENQOVMHFSEOEYJEBMOKQPTLIVBKGUFNEWPCUWOVCSMWWVFRBLTUDIEVMUWJGNBJHCBUPURFQTPYKTRMYFDDZPFYQWYIATMKJCJGLJZVSHTXYLZWHKQDBKSLLXNLKHKJLHS");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 177U;
    tmp_msg_0.goal_id.assign("XZQYNBDLOPVNOOUTSGUFQAKNYXLAXWKZGEEYYFWXDTFJSCULMQVHVONNUODYGXCESBZAOIZKPNSNXUBXRPIPIFLGQVSRDTEDWBQFMJZIGKBCTQIFEZRYIZVVLRBLECSVOWGYUJUHJFTCDRJPPTDMXIWYAPMRQEPCBNTYR");
    tmp_msg_0.goal_xml.assign("ICWISWEVHGUYTMFGJDQGGVXTNVYXWQCDBJZSSXMIYGKDLLMOMQBKNFINKJCWACRZDSWYRNEBIYCOGMFXDPUVNZIDLGEJALUHVAURKZAJJBESCSTOLMBPEWHZKFTMIUJGBCYDSTTOEADGLKVIMPWVGOCKARTXWPRQZEZEAYLPQTRLTPRRJWOZFKLJBSXX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XQZHHGHFMLKRJNZDNRLCTWCJKNELXEZXDTJXHSCQSPWPTWLKENIMUEBQULVDOWOGCJUVVZFQPYROBBBJBUSTGCJOTJJFEYYODHWZRYPUWFMMACHSLBHPMXJAVEWSTIMBFQQUGRWJENKKXTKRU");

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
    msg.setTimeStamp(0.13422302146623177);
    msg.setSource(36931U);
    msg.setSourceEntity(105U);
    msg.setDestination(43111U);
    msg.setDestinationEntity(83U);
    msg.type = 144U;
    msg.op = 253U;
    msg.request_id = 27622U;
    msg.plan_id.assign("SZUCXGGXHNUBCJYOPRYHJVFTEHHPJFVESXQSWEFYJGMFNJTCNHXFSNZPYNNMKHCKMSIUBADELIDEMREVHOXVLUKGJWFQACEBVPBWXNHDTQZLLBUNFPWSKDHMUDKRIGJEOOJRWBFTYTPCCGZUZQCXBQBNVKDLMMRUOBADRAMRHQFSKKVIIPGIQCTGOVJOYZCZPETLYAEX");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 17394U;
    tmp_msg_0.flags = 140U;
    tmp_msg_0.lat = 0.009418557563896868;
    tmp_msg_0.lon = 0.31811844700381786;
    tmp_msg_0.start_z = 0.06759876434397727;
    tmp_msg_0.start_z_units = 160U;
    tmp_msg_0.end_z = 0.08048349157348578;
    tmp_msg_0.end_z_units = 217U;
    tmp_msg_0.radius = 0.6380147103320569;
    tmp_msg_0.speed = 0.7304758122450445;
    tmp_msg_0.speed_units = 199U;
    tmp_msg_0.custom.assign("BPRGDMZLRZFNOAYXJQYXDUCVGXEWOWQYENXXRQUUQJACJKFTEPJNFJGQKJYCTISFRJBRCVSOPGIIKLLXGSTYFWUNBYXEGSFHZIITMJHLOQSPWQQZITZICKDMXVHTREHIBTLLGSZBWOKATLUPPYIFMQPCFOZDABBDMJMPNSEMVUSINNOOYAFRZVADVMUDXROAEQYWAKNUWGKUYMWWHTCREVWUTHPNJKBZDVLR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TUEZZDGJCSRIUUILPDJXEAXCQVBANBXSMNDOZXGQMATJOYJIPDQEGYMOXPKLOQXOCBQIBFREYTPWNCDHULKUWYPWRFPWFLNMVAEJZRNLFXPVGYLBWAMRNVAFYUSAMMARCLKBSMYKTKRIDFGLJVAEZJSZCZREHHBFHINSXXHMYEIZIVUHVWP");

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
    msg.setTimeStamp(0.9657147934024963);
    msg.setSource(7044U);
    msg.setSourceEntity(64U);
    msg.setDestination(12369U);
    msg.setDestinationEntity(40U);
    msg.plan_count = 43361U;
    msg.plan_size = 708389596U;
    msg.change_time = 0.18133445853195762;
    msg.change_sid = 64421U;
    msg.change_sname.assign("JLNLMFNRNAEAHWFDRKJWXAZDCGSFOLPZIXERBOETYMZEKZIXPRJMPCVVNMDPSDHXBOIHSGTSFEUXLCPJWVSADGBIVSNNGWKTLPSYKHUWWWHFX");
    const char tmp_msg_0[] = {-2, 51, -114, 109, 90, -45, -96, 103, -94, -80, -29, -88, 34, 3, -32, -71, -91, -114, 9, -30, -30, 43, 42, -93, -56, -64, -77, -44, 24, 65, 114, -25, -121, -45, -117, 0, -113, 86, 104, 16, -92, 28, -87, -101, -78, 5, -31, 97, 49, 118, 107, -12, -33, -107, 90, 54, 120, -24, 0, -69, 43, -108, 76, 124, 79, 44, 110, -98, -113, -14, -73, -116, -87, -100, 23, 37, 79, 7, -86, -116, 17, 87, 35, -123, -66, -64, -94, 34, -128, 4, 11, -63, 20, 88, -49, 79, 56, 33, 17};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MARPZBKFJLOTYNTVRB");
    tmp_msg_1.plan_size = 51225U;
    tmp_msg_1.change_time = 0.5302759862384643;
    tmp_msg_1.change_sid = 704U;
    tmp_msg_1.change_sname.assign("HVKTRSVTFQYJTTUNYGEKUOGKQBPENTBXHLQSNRVIQXKOAIWIPVMTWMTZXEMEMPMTHMNFUQMCBRDYI");
    const char tmp_tmp_msg_1_0[] = {-41, -58, -53, -45, -94, 85, -127, -49, -6, 24, -44, -79, 3, -104, 89, -59, 35, -42, -18, -3, 70, -106, -83, 86, 37, -62, -126, -93, 88, -89, 65, -103, -22, 125, 57, 9, -86, -114, 48, 28, 38, 25, -75, 97, 41, 69, -118, -32, -18, -94, 3, 116, 22, -126, -16, -102, -104, -33, 108, -32, 95, -37, 105, 71, 49, 53, -12, 112, 55, 88, -63, -18, -58, -90, 40, 114, -62, 73, 95, 98, -115, 112, -34, 81, -93, 97, -44, 78, 24, 35, -30, 54, 88, -109, -61, 13, -122, -75, -30, 25, 116, 125, 111, 87, -28, -73, -112, 48, -91, 29, -10, 111, -54, 106, -49, -39, -31, -102, 86, 75, -64, 87, -10, 11, -69, -59, 35, -6, -128, 103, 98, 73, -117, 9, 11, 126, -99, 57, 39, -59, -3, -121, 39, -15, 28, -18, -12, 4, 117, 13, -83, 80, 122, -123, 2, 44, 89, 58, -104, -65};
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
    msg.setTimeStamp(0.30275593842999327);
    msg.setSource(59911U);
    msg.setSourceEntity(132U);
    msg.setDestination(65058U);
    msg.setDestinationEntity(44U);
    msg.plan_count = 5192U;
    msg.plan_size = 3423707375U;
    msg.change_time = 0.5339496608260768;
    msg.change_sid = 44847U;
    msg.change_sname.assign("TLFHPNIQRVOMZWPGPCZVCXJYQAHJDOCORXTYWNFATHEVUZXPUMNKZTEHKARGLTQQLQHYMQKSACIPESUYSNTDXXBLHIXNHJZRVWTIUTJMGIGESVVBAOKSWOIUTXSNSCVLLENYEWDLERIJKFFKHFMFMBDNAFCXCBHDDCRB");
    const char tmp_msg_0[] = {53, 76, 32, 22, 9, -67, -17, -108, 107, -56, -79, 16, 102, 113, 100, 85, 28, 123, 79, -52, -111, -58, 37, 48, 45, 121, -117, 92, 48, -49, 60, 23, 3, 60, -1, -96, -79, -112, 23, 43, 55, 89, 112, -45, -52, 43, 62, 47, 77, -30, -78, -117, 94, 28, 18, -90, -100, 105, 50, -56, -69, -73, -43, -11, -65, 49, -76, 22, -55, 123, -109, 100, -29, -87, -93, -111, -88, -42, 94, -114, 79, 37, 122, 61, -70, 3, -41, 21, 79, -28, 117, 49, -42, -74, -51, -16, -83, -84, -41, -9, 98, 108, -60, -44, -58, 111, -109, 87, -64, -108, 110, -44, 58, 47, 76, -77, -39, 25, 23, -63, 76, 54, 113, -121, 120, 72, 40, 91, -54, 8, -43, 8, -27, -98, 110, 25, -96, 43, -57, -52, -120, 124, 74, 75, -61, 88, 63, 97, -9, -52, -74, -68, -22, -118, 103, 117, -108, 66, 26, -85, -64, 20, -49, 26, -79, 23, 37, 58, 28, -79, 32, 48, -60, 33, -95, 58, -80, 74, -98, -74, 15, -35, -62, 76, 110, 82, 119, 32, -24, -118, 87, 79, -75, 125, -8, 34, 79};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TLWBYKAABGPXFONWPUJODKDOCDDAMGFSTVCLGXKFCDMLONJRMEQFIIUSMABNHBXWLNGUFPERJAKLKJGQKPVDGCMSHJJYFHNOBLYWQQCUCWQZCXCLKSVVGEJYEUMHIZPZXXHPEYSUWSFJASCWDCBRJTWBKQRDZTEHTQHVNYSIXAPQIVQXARZGQOYRBO");
    tmp_msg_1.plan_size = 49754U;
    tmp_msg_1.change_time = 0.7709652568897737;
    tmp_msg_1.change_sid = 26019U;
    tmp_msg_1.change_sname.assign("YKFJKRLQYXVTLILXZDBBONUQUB");
    const char tmp_tmp_msg_1_0[] = {-33, -58, 45, 21, 108, -25, 8, -106, -98, -70, 30, 33, 8, -107, 19, -50, 115, 15, -20, 49, 58, 72, 120, -14, -98, 64, -24, 116, 0, 8, 63, -127, -68, -18, 51, 53, 52, -10, 60, -95, 117, -83, 73, -15, -58, -121, 89, -33, 58, -44};
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
    msg.setTimeStamp(0.47443995341342304);
    msg.setSource(11473U);
    msg.setSourceEntity(11U);
    msg.setDestination(9330U);
    msg.setDestinationEntity(251U);
    msg.plan_count = 24354U;
    msg.plan_size = 3295637819U;
    msg.change_time = 0.5343699198460508;
    msg.change_sid = 5875U;
    msg.change_sname.assign("YGAKLPMSCKZGAVIYUSBBAOKQGQXVRPYQFJDKCTRDGHCSZJVKXAXXUBIHHBLALRHKNDFIHNUJQHZ");
    const char tmp_msg_0[] = {-79, 16, -119, -77, 43, -103, -85, 57, -5, 82, 110, -12, -105, 29, -84, 73, -11, -92, 14, -86, -78, -51, -96, -92, -20, -39, 79, -78, -8, -85, -120, 21, -106, -29, 117, 88, 27, 99, -2, -61, -70, 74, -119, 12, -41, 34, -81, 125, 15, -87, 15, 86, 61, 40, -3, 76, -88, 96, 102, 67, -70, 22, 115, -66, 126, -100, -62, 66, 28, 14, -48, -69, -32, 125, 44, -59, 30, -94, -49, 42, 1, -12, 91, 6, -22, -123, 75, -46, -107, -109, -19, -54, -5, 28, 34, -108, -58, -77, -73, -42, -18, -90, -97, 48, 69, -125, -93, 53, -125, 39, 82, -33, 103, 117, 94, -72, -4, 58, 112, 71, -31, 108, 77, 90, 23, 118, 3, 62, -41, -27, 75, -79, -114, -102, 90, 75, 100, 126, -63, 108, -7, 61, -30, 101, -35, 55, -64, -80, -61, 104, 125, -36, -121, 87, 60, -64, 63, -92, -65, -127, -37, -97, 122, 120, -115, -36, 83, -126, -50, -110, -62, 103, -31, -103, -3, 102, 23, 13, -51, -13, -99, -87, 49};
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
    msg.setTimeStamp(0.5238747580400773);
    msg.setSource(50304U);
    msg.setSourceEntity(220U);
    msg.setDestination(50778U);
    msg.setDestinationEntity(109U);
    msg.plan_id.assign("FFWEVPUPQSNRVABEKICQGOQEYRDMUDJANXIYVIDFGUVDDFNSPFTJBOYPCMYNRQMVJHZERSZNKBJNMHJBPYWFVUTUZXHCLQLMJ");
    msg.plan_size = 57078U;
    msg.change_time = 0.4426062094072949;
    msg.change_sid = 52291U;
    msg.change_sname.assign("RQJSXXFKEOJTVXLHEKGBBHIVBWFFKAYUUGHVLPNUQZDMTENWMAKCNGWBIOWPDUCTYMNQUCSBQQRJAPMIPVFVZCKXFBGDNMYVMRIPIEZTEWTIJRRUGQMSUYYPHFFFOGJNTKSHHAIOLOMZXCVCDBJLGZQALLDJIUQLVTYEFWPAJWLJGNXNZSXXGZARK");
    const char tmp_msg_0[] = {116, -97, 97, 43, -54, -64, -15, -29, 54, 73, -35, -20, 126, -91, -42, -33, -34, -106, -126, -22, 120, 109, -102, -24, 53, 18, 38, 43, -33, 25, 64, -25, 114, 34, -100, -66, -125, -70, 66, 104, -74, -79, 70, -7, 112, -79, -108, -97, -12, -100, -109, -116, -38, 109, 47, 64, 22, -33, -9, 70, 55, -90, -72, -97, 43, 26, 34, -128, -80, -80, 119, 37, 62, 120, -35, 26, -8, -73, -49, -97, -35, -41, -60, -59, 95, -39, -118, -68, -77, 22, 88, 65, -36, 73, 73, 121, 95, 44, 7, 23, 13, 8, -9, 121, -100, -10, -38, 31, 15, -26, 17, 118, 55, -100, 109, 18, 102, -28, -28, 64, 91, -15, 100, -103, 50, -128, -118, 119, -91, -122, -11, -105, 42, 82, -57, 123, -98, -26, -37, 49, -97, -122, 86, 88, -49, 4, -86, -67, -106, 71, -64, 114, 14, 116, 0, 81, 87, 50, 27, 106, -24, 82, 44, 121, -76, -40, -49, 37, -91, -52, -21, 95, -11, 105, 102, -36, 80, 16, 4, -38, 88, -107, 58, -100, 10, -56, -87, -117, 71, 62, 37, 71, 113, 125, -127, -99, -124, 113, 52, 110, -11, -126, 85, 73, -26, 107, -83, -102, -25, 93, 92, 6, 125, -111, 112, -114, -14, 83, -119, -9, -106};
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
    msg.setTimeStamp(0.4411785707270658);
    msg.setSource(19540U);
    msg.setSourceEntity(149U);
    msg.setDestination(50223U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("BTLIEZUOKOBTCUFHYAJCNEKBM");
    msg.plan_size = 32260U;
    msg.change_time = 0.04837442824961191;
    msg.change_sid = 9940U;
    msg.change_sname.assign("DGPDVOYVDVLUQXEZHKXBUWUBIFAPZEAITRUNGERWVBYIUBRSXWSXDASLQALNUZITMFJQXGKWPPRPJDNPQTBVEZNONSTQGZRFTXXLYCBKVMCMSQHDQLOGLSBSKAYBBYMYTUAGTHMEJXGOATIAMOMZMQWRJFYSPUVGWGFV");
    const char tmp_msg_0[] = {50, -22, 12, 25, -91, -114, 111, 34, 113, -124, -75, 24, 5, -3, -42, -21, 91, -78, -15, -114, 50, -67, 20, -11, -88, -62, -53, 81, -101, -91, -125, 32, 36, 25, 27, -102, 89, -110, 19, -122, 118, 112, -28, -111, -119, -16, 100, -72, -77, 125, -70, -119, -33, 100, -111, -127, 86, -5, -67, -100, 22, -113, -17, 115, 79, 10, -49, 59, 103, 104, -34, 6, 84, -50, -66, -60, 116, -34, -49, 85, 115, -123, 0, 103, -113, -71, 42, -76, -29, 109, 78, 93, 123, -124, -32, -105, -99, -67, 95, 54, 113, 102, 111, 38, -124, 22, 9, 122, 16, 102, -101, 126, 113, -110, -26, -11, 81, 12, -95, -116, -28, 18, -46, -118, -23, 92, 82, -41, 2, -127, -47, -72, 115, 57, -3, -128, 92, -120, -88, 44, -73, -77, -54, 59, -94, 89, -114, -115, -95, 112, -22, -84, -17, -46, 80, -48, 33, 121, 59, -47, 114, -65, 102, -4, 38, -38, 70, -79, 82, 58, 20, -52, 59, 117, 18, 23, -36, 63, -104, 58, 126, 6, 57, -67, 105, -68, 9, 67, -18, -55, 31, -107, -13, -51, -7, -1, -121, -35, 32, 120, 72, 14, -104, -45, -116, 16, 77, 23, -108, -75, -27, -107, 15, 74, -14, -38, -3, 115, 12, -117, 38, 110, -57, -44, -68, 94, -31, -110, -101, -77, -123, -34, -5, -35, -5, 28};
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
    msg.setTimeStamp(0.6380811831462868);
    msg.setSource(48798U);
    msg.setSourceEntity(158U);
    msg.setDestination(24431U);
    msg.setDestinationEntity(151U);
    msg.plan_id.assign("UXRGGJFWEZXFMDHDNBBEMPTZRMBYCWBHORAFULMZSKAECAFZBUOKBUSQCAGQRFDYDWLFVNHHSVYJQPHMZTKNPJNUABLBHCKYSCYEQQDJOIKBANPCKTDRJIVLQOMGDNMVWGVGYA");
    msg.plan_size = 40231U;
    msg.change_time = 0.5310960082607341;
    msg.change_sid = 53113U;
    msg.change_sname.assign("EXZSTUGCHZWGXMZAVZALKWLEUBVFNGNDIEBZPTJEHUISYDHVIFLHXTAXQNAKNCBZCXYOFMMOLOUUTVRWRBUJWDYNMGWOCEIQCPIGGQAMRZXWXMPJIYOYJURFXZOFKQUZHIFPZVQNQGNTYMVOSJAJSWDETFCWCSUQGDPYXLBJKKJFIBLBMVGQJKWHLLNIQBMDRHR");
    const char tmp_msg_0[] = {-110, -32, -96, 72, -80, 3, -8, 25, 21, 34, -75, 11, -94, 106, 112, 32, 100, 114, -38, 99, -40, 69, -10, -20, 28, 40, -78, 91, 39, -3, 120, -113, -114, 14, -112, -105, 67, -17, 41, -84, 111, 1, -112, 12, -98, 35, 3, -50, 61, 88, -81, -56, 49, -16, -102, 30, -80, 15, -16, 15, -84, -12, -101, -75, 90, 55, 111, 90, -37, -10, -98, -124, -41, -32, -64, 1, -15, -34};
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
    msg.setTimeStamp(0.2933826305798609);
    msg.setSource(65005U);
    msg.setSourceEntity(227U);
    msg.setDestination(45792U);
    msg.setDestinationEntity(187U);
    msg.type = 131U;
    msg.op = 83U;
    msg.request_id = 58702U;
    msg.plan_id.assign("BVFXQSTYGDOMCZRNEBXLPHDYANPFEDKBVSPDXPGMNTBGFZLKNMKXIWTNYFAKRWWWIYSOZGOQXRCCAHOVUSSITFQILTEMLLTAHGHCCSKECBSDYNLBUQGYFFUQDKJFXQQFIAQGCZPEJODWIEUGHULTABRMJPKMKHJEIINIESAABVJZAYHEOWKPLRPNVRNDBHZWOXLMKNDSPVTXTRVJWVVTPMUCYWIRUYJZLBQ");
    msg.flags = 23948U;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 12U;
    tmp_msg_0.plan_id.assign("GJVBKZYNCHTGHWQLENHJGVBYFMXSEDSOMEMJCDETDFHYCMSTPZXICXCIVRNUOGQAJNYMSPSZRZZIOORJPALOTFOMQVNLHIAMYUFYZPIRDZFBUUOLCILCAENYWLLTWMYDPPZAUBKWSRFJOX");
    tmp_msg_0.comm_level = 128U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QJIKQDLPCUBVKPKWOJFSWVMEGYJYCXEOUZFTFJPECNRPDSIBTGLZDLCJJPQRMLMLMLGXRPXTXTOMRNXOMRIBVKDEOYNFISAQAFBTOHFNLADRGVMXFAPESISCHHHW");

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
    msg.setTimeStamp(0.6782839696817285);
    msg.setSource(46682U);
    msg.setSourceEntity(142U);
    msg.setDestination(31826U);
    msg.setDestinationEntity(229U);
    msg.type = 163U;
    msg.op = 201U;
    msg.request_id = 37580U;
    msg.plan_id.assign("LBUMEQAXFLSGCFFOHXSUPKSOBVECJRRXQNQCZAFHWIIAERMJPIHBAKEKIMWDKUZEOXCHDTULRQWWPEYLFNGNZGSIG");
    msg.flags = 64302U;
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.2333149128020151;
    tmp_msg_0.x = 0.6628114436221703;
    tmp_msg_0.y = 0.8626298725788468;
    tmp_msg_0.z = 0.28769789598860374;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YURNIHTQOVXRUNJXADXFTYEAAXONEPNCULUFYAWZGXQBMPYLLUPGDDBRHCZWEKLQGPQSCROHDDJIXLQZVKOICIGMBVPVVIOFSWGXKSVLZUATGOFECTCURIIAWRSKPWHTENQTCMOZJOKOKPHOWQLL");

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
    msg.setTimeStamp(0.1732679174789532);
    msg.setSource(50017U);
    msg.setSourceEntity(14U);
    msg.setDestination(6174U);
    msg.setDestinationEntity(121U);
    msg.type = 121U;
    msg.op = 248U;
    msg.request_id = 41944U;
    msg.plan_id.assign("VPNKGPEMZDZFXNUOISRMOGDRKJYHTDWOXJJOUCIRXPWEGLXBWYFRDKQPPHPMREJIOTTWBTQLCIAQBGXNQSZQMUHZLIZGNAOCYDBLNRANYRVUJUHHEWOYSDBTDLWZDBMFYVPQAQZTEBIYHGLLYQAMPSMKOLXFAIBXSCGKFIEOZWFGRDCRKTCSYFCYSATVCBHGLMABQMVWEWHJNVNAIJRTSJMZAJQPKOPSCDXGEFVKNHUFJNVFZXVSU");
    msg.flags = 22609U;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 1938753433U;
    tmp_msg_0.start_lat = 0.3261347428175633;
    tmp_msg_0.start_lon = 0.8889443621034818;
    tmp_msg_0.start_z = 0.43035072947610087;
    tmp_msg_0.start_z_units = 156U;
    tmp_msg_0.end_lat = 0.4718978101227863;
    tmp_msg_0.end_lon = 0.47347831276799746;
    tmp_msg_0.end_z = 0.7412475334105749;
    tmp_msg_0.end_z_units = 117U;
    tmp_msg_0.lradius = 0.32835773049954153;
    tmp_msg_0.flags = 4U;
    tmp_msg_0.x = 0.08340606290646368;
    tmp_msg_0.y = 0.12662673857572182;
    tmp_msg_0.z = 0.41730739723528565;
    tmp_msg_0.vx = 0.3583895808001333;
    tmp_msg_0.vy = 0.3105831036764941;
    tmp_msg_0.vz = 0.4548117698710241;
    tmp_msg_0.course_error = 0.6761789796588494;
    tmp_msg_0.eta = 44051U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XFHWDPGYPIAWTIPWWDGLJXKLJWKAJBFNXRJOOZTAZJZSXWDCXHMRZHSMYXA");

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
    msg.setTimeStamp(0.4296413208338844);
    msg.setSource(62506U);
    msg.setSourceEntity(219U);
    msg.setDestination(7234U);
    msg.setDestinationEntity(129U);
    msg.state = 221U;
    msg.plan_id.assign("LUTSRDXAHCUSPNAHMUIAFBIMBGFCVEOXAQRKSIGXHJBEQQETWWPUJNETYJMSXMVSQJJSYYACOBHVBBRGYRGNFZZUTXF");
    msg.plan_eta = -1989018551;
    msg.plan_progress = 0.27677486492997005;
    msg.man_id.assign("TZMQLQHOKUFRSEYPBZZZTCFDTKMXIGQDUNQLXCGOYOCRIXZGLJIOJYLAERGBOCNNRIBOVUVYIWXUCCRAHSIWYZYUTDNWVQECTCUMHKPDEOHBEFKFPWJLRNMNJFSNXTIEMDNFIRYBXRDBVDVWQTPAQQAVGTUHXQJGJZLRKWSPGLVGIJSASPCR");
    msg.man_type = 46504U;
    msg.man_eta = 1853112123;
    msg.last_outcome = 53U;

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
    msg.setTimeStamp(0.7491921327948161);
    msg.setSource(9531U);
    msg.setSourceEntity(115U);
    msg.setDestination(7737U);
    msg.setDestinationEntity(223U);
    msg.state = 5U;
    msg.plan_id.assign("ZPKPLQMGEIPTIFRRNTWDAGINELHVYZXFIVJTNDEFBJRPDZWODWEGPTFUCUZMGMMKDUJBMBGOHHSSRMJRJSQLFLVVTVODMFVHZOKXHDTHDJSNGJA");
    msg.plan_eta = -1040443737;
    msg.plan_progress = 0.18748760498544237;
    msg.man_id.assign("CYDQJQNORYUJVZGPEMJYRDWQLCYLWBHNONPZHUQNGFFHIIUEGCZFTJHKILDWAMGCNMETWFXOSELOODJLRQOHLPCXENERFUWZMBVXFBZJFHWZSGQAKTKYPKPYIBSNJAZCXUZFEIOHYBEFPDHBDRMXZPKVANKLVHFRSMPTCGMGMSXKNVCJKWAJVYWKADUGGCVRBQNKEZSI");
    msg.man_type = 35206U;
    msg.man_eta = -1583753;
    msg.last_outcome = 227U;

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
    msg.setTimeStamp(0.7741467742054953);
    msg.setSource(43371U);
    msg.setSourceEntity(115U);
    msg.setDestination(56195U);
    msg.setDestinationEntity(14U);
    msg.state = 181U;
    msg.plan_id.assign("XZBDOLNSVKGPBSIIRQEUCRFIPHQFJBNXUWJPXPTAWCALYKHEDKOJKPEGIDWMEKSKYLRVUIQEQJTHKFFSNJTIZYCMWMYSQLZSVUMGFGDOWXZXBMTMZOYTCBARRQCOMVKZIQMUCFZXYRVGAWSENTLVWTXUDPJCEPNCSXUBBSHLUHONPGRFODZOBNHPTAGJLJJ");
    msg.plan_eta = -952330887;
    msg.plan_progress = 0.542994303842755;
    msg.man_id.assign("KOPHDBWSFGPWYAXBYXCIOSBVSCMDVBACKYGPEICNQIJBGLLAJNTWUTQLPOICRUVVFYEQJDQMMTZWOPPA");
    msg.man_type = 23817U;
    msg.man_eta = 1601136837;
    msg.last_outcome = 27U;

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
    msg.setTimeStamp(0.3172454513854801);
    msg.setSource(47612U);
    msg.setSourceEntity(140U);
    msg.setDestination(43022U);
    msg.setDestinationEntity(89U);
    msg.name.assign("XMTTFUOXYGFJBNHZESUHLAPKZBJGFSSOWXBWIUUNZMMGVTBWCACFKORFPKQLRCJYLCWYVINMUYGNEQDXWJTAVFWIIEPXJRZFOUGEPSRECHVGKVKMARKDNUTPWIOLDEVNADUSOOMHQDLPFHZVJZRKJQDTXORRTEYGAGPZBXDZPQLAMCROGYMWQTWBMAJIIHCDNLEPSMCAHTUYBULH");
    msg.value.assign("SKJDHBBKLZRVTURHGCBNXSG");
    msg.type = 114U;
    msg.access = 127U;

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
    msg.setTimeStamp(0.6494506060351577);
    msg.setSource(21941U);
    msg.setSourceEntity(194U);
    msg.setDestination(2673U);
    msg.setDestinationEntity(231U);
    msg.name.assign("MHHCHSMOTUJTDZGJLINSPXUQTBESUYKYLYPREKRSVGQIYNYCEAHFLJXMAAHOVXVFRAAAYJKVRQNPFOTSAOSJFBKFUUKCXFXAAYJUXEWUWDFUBKKMNVZWKMLCMBGELNZEFOLQSQCNIVTIUDXCLBMHIKCZOZEBILZPPKWGDHJZZXGOWAEYTYQTFSSVRPREHCWVIRRSLTJZLPTYNQIIWDDUPJBO");
    msg.value.assign("BOUGLVWPXWJQANNFAXOXKNTEHQVNUPIMEDHOTIVQXRETBBEEJRFVPAVUUSSRKJHMNQXSTPDGQQZXHRLXPPZPRSHNMIOFZLGYPSWYMMLHFJESYOKPUQQCKLVRACGVWRYGBYUDORSCESZAUHHWKWXDYFZRCPNFSSCJUYAJLGYDZIFQAJCWNQUEJYAXNCKFMDDWDBHTZBGOZUEBIGBJWBYRTOABTILVGXKVLVLCIOZKCIMGJDTMCKNALOZHTW");
    msg.type = 178U;
    msg.access = 211U;

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
    msg.setTimeStamp(0.40503774388224345);
    msg.setSource(42975U);
    msg.setSourceEntity(141U);
    msg.setDestination(35879U);
    msg.setDestinationEntity(51U);
    msg.name.assign("VFTQUAXPXVYGMHQDUSRNADIUHVZJGOVPEBHSMJPLEDZYAIJKLOCFARAKGMLNCQAVWEUVZEKYIPXMMMLXPJKWDULUPMBRFANPOEDYLWOQDBQZJMFOQWMSRUKSTZJAZIMNGHURDJSBDHCXGFGSGRHHIZBXBHCNRBE");
    msg.value.assign("YERQRDKSFOWZOVURTKHVUXMGUATIBGICLDVDXOPOQSSFJLWSVROEUCJHYISERCJMBBCNBDUFHTMPPLBBCAAGXALDDGXWUCASQAVNBAFIQBYHKNUTOGYZRNAFZLGQWYHIKRROFMDPDZIXMWGQYEJCYSXXVJLSPYIFMHNDOTXWPZUKISTQMCPPKRQXSNQPBCINLTVKJQZYHWIXEZZKWPVVDEGE");
    msg.type = 150U;
    msg.access = 195U;

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
    msg.setTimeStamp(0.7304629711180182);
    msg.setSource(55180U);
    msg.setSourceEntity(72U);
    msg.setDestination(34162U);
    msg.setDestinationEntity(247U);
    msg.cmd = 110U;
    msg.op = 111U;
    msg.plan_id.assign("UENZOWHHPGTMTRCTPUQERZSIPKFFGOCOCINUNFYWETODBZLYUOVTTNDFMJWHRXJFDIOXBNQTAPHYBDYZS");
    msg.params.assign("SNVXPDFBAADQGLJFYJEHCDEMQBGHHMWBHHKYHZJGSOHZKLAJJYYYSCZTSJNQKDRJDLHLIPFXKRZYKWQLCVXQCPUTOVUBLCVVISMGBDTVSOZCUGMVUUCETDQRNXBTBOGAQJROZPQIYQKDDFZCWIEZIAMMPENGQFNKFNGALLXIMORXZSUBEMDGIOBEPVHVTFWNIXREEONRYS");

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
    msg.setTimeStamp(0.006740766302578471);
    msg.setSource(1083U);
    msg.setSourceEntity(1U);
    msg.setDestination(58411U);
    msg.setDestinationEntity(194U);
    msg.cmd = 11U;
    msg.op = 38U;
    msg.plan_id.assign("SVSCDWMTPVNOZPSWIDKEGPZEMYKKFAFZHRZRIOGMFSFJGWXGKSSMDJTFMPQJHPFPJFQIJBUOUGPAYIOXBNXJWZORTJCICIQTU");
    msg.params.assign("MCNZABUJKQCFMLDXGGRUDLOOIFPSMBCXJDNBYFYGRRNWSZXWSMDJLBRPHVUVVFSQQWQETWIWEDUZOKTSRQYLXFGCZYSAOQLUXEMCFUCNEHITWGUNLEIFAZIEYPTKRJEAODKMBEWWKKLUN");

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
    msg.setTimeStamp(0.06326252258506049);
    msg.setSource(26471U);
    msg.setSourceEntity(226U);
    msg.setDestination(38714U);
    msg.setDestinationEntity(17U);
    msg.cmd = 214U;
    msg.op = 216U;
    msg.plan_id.assign("BKFXRACMYYNJDDSLRJXCLVJSRZXIOEZIXTDL");
    msg.params.assign("BUDNPOIMSBRHHVNHVNNHFZCGFULSCICMFSTOBXFRKWAUEFOZXPRVYRANGPVIKFQHVOKGAIXWYSDQOIG");

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
    msg.setTimeStamp(0.3854562389667564);
    msg.setSource(64838U);
    msg.setSourceEntity(185U);
    msg.setDestination(52352U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("TOEQRDXXMCQQUTTXUALWAVRORWGAGFODXJHUBWLAYLDSYIBOONWAPVGBOBNTRNCJMVNKCGNPIFHIFDKCLCJHCGIWLRMDHADVSEVBWEJWFESYUMSDLHAFDXFZTTZSGPMUIQHMXIZUNZRAFVSUFBYCYTZZKNWFBLPMQBSREJVOGPKICOHRENXGYPMHYJXHVKAZWZAVRSQNIJSGUGYICVIERBXJMKQJWELDPEHYULBKTEQP");
    msg.op = 239U;
    msg.lat = 0.9687182588278213;
    msg.lon = 0.3721615611947181;
    msg.height = 0.8169110630926323;
    msg.x = 0.5665413687497355;
    msg.y = 0.24025700097562896;
    msg.z = 0.6764545934497271;
    msg.phi = 0.463101957828274;
    msg.theta = 0.06201355459720603;
    msg.psi = 0.48008077295838647;
    msg.vx = 0.248738974808155;
    msg.vy = 0.8760370785960808;
    msg.vz = 0.393854511001166;
    msg.p = 0.41670717980205063;
    msg.q = 0.9656499626974505;
    msg.r = 0.8502788523701271;
    msg.svx = 0.008133669719131875;
    msg.svy = 0.3779490163623156;
    msg.svz = 0.47279591010545496;

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
    msg.setTimeStamp(0.12651603896525343);
    msg.setSource(51239U);
    msg.setSourceEntity(246U);
    msg.setDestination(11342U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("QGGJNPBXTEJVMMUCVEBLPSJMDXWOYXHEAUPTPEIVCOOZLWACCGFABVYGVIRLHXUYLUIZHRDZPRITBEJZAODGMLMPZROKALXATDMUGNSTBFPNQKFBTBWTOHEUQSZDCFGLRTUUGRQBYPAXQFMVOMHSQNJZTNYIIJXLYKZMADJFINOCFDTJZAYNSKHGEEYJYVCUQFQXVSKCHOWPEAYVWIWXRKUNSCBWRRKVIFNGKLFIHRQOKJDHQ");
    msg.op = 250U;
    msg.lat = 0.7807768782927674;
    msg.lon = 0.6453831279236178;
    msg.height = 0.05712828338238485;
    msg.x = 0.4750411500426335;
    msg.y = 0.3128357757615696;
    msg.z = 0.5246388374806151;
    msg.phi = 0.48004099847780624;
    msg.theta = 0.6920613541583861;
    msg.psi = 0.40661473469791554;
    msg.vx = 0.593407945307364;
    msg.vy = 0.35296526407117024;
    msg.vz = 0.8638956760176675;
    msg.p = 0.4386261939638635;
    msg.q = 0.6756659545825199;
    msg.r = 0.7352500827525431;
    msg.svx = 0.9304091109169018;
    msg.svy = 0.2568460157991732;
    msg.svz = 0.002647468275705278;

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
    msg.setTimeStamp(0.9420505111121745);
    msg.setSource(34734U);
    msg.setSourceEntity(232U);
    msg.setDestination(37354U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("KIEEJYYTECUJAJLCZQNNUTVNOBIUOSJRSDOFXPRLSTOSKZXTLDCKANPTIGCVBYDPKIRMOQOFBGQMIZWRHCMRUUIJHFVBZHEN");
    msg.op = 115U;
    msg.lat = 0.6230051656841263;
    msg.lon = 0.424401605504667;
    msg.height = 0.7326383590651455;
    msg.x = 0.5574783569704581;
    msg.y = 0.04688771046972817;
    msg.z = 0.7734773451383999;
    msg.phi = 0.9246139173747719;
    msg.theta = 0.17274892058055624;
    msg.psi = 0.7152438093494683;
    msg.vx = 0.14637686999385346;
    msg.vy = 0.28561028526062016;
    msg.vz = 0.27320661193533025;
    msg.p = 0.4454871701994565;
    msg.q = 0.8769719075034704;
    msg.r = 0.25263078245034043;
    msg.svx = 0.1304361146836014;
    msg.svy = 0.9104661557795748;
    msg.svz = 0.2377358985919773;

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
    msg.setTimeStamp(0.24705797777356042);
    msg.setSource(59521U);
    msg.setSourceEntity(175U);
    msg.setDestination(45212U);
    msg.setDestinationEntity(191U);
    msg.plan_id.assign("CVURXPYXRSZYGEITXONBVGIHNNUMMELDWWFSHJVEITVIHGJRQAEKIEHNZSKZFXZXFMPPDKQKRKYKIBCGPTPSYLFJHQOTQTRQHOCOXRCIVRCBNBAFGVPFXNCDZMALOYQUGUKURPYLDA");
    msg.type = 127U;
    msg.properties = 13U;
    msg.durations.assign("IJMONVSVHJTYTXFBKPDUPPWLDXQRALINJZHIEUXWRNDLUTMPVKUYPUNRMQDBMGWSKWRAIYXEDKLNRZITYFZWDVWQZYOSGHSKQMZZGKOWMKYPJGEUOLOCJJPQXBQAFFIIAAGJVKJETSYZROWRFNNEIASGYSCVK");
    msg.distances.assign("KMAINCPFEJCQOLACZINDDBCXVUJHSINMEFSVRQFRQXZCVWEMRJXHTHGQNLWKAJMAPTEKGNGAHPPDYJTBTOFUBXCLEDLXQAMXOVKRFYVYGUSHPWSDXZFOIDWEUVSUTJATTSONTELYJZZWGIHWZBOQCUHSUUYOZORDAMPLBNKRSYXVVEBYRIWQLOKHLLAZIKSKINOPMJMTVUDKX");
    msg.actions.assign("EXRXPUPNCEBSJACYHRQGXCTRDSRHBOARPCJXGNXVAVMBDOYPMERWOJQUCXHESOUBKPGHBLNIVFOAPJTOEPTMWKZGWNIDPDKWOCAQ");
    msg.fuel.assign("AKNHSJFZGZXEKDBGCICSIHA");

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
    msg.setTimeStamp(0.40656390510912777);
    msg.setSource(4891U);
    msg.setSourceEntity(117U);
    msg.setDestination(4233U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("IXIVOYXUANNYPBTEDZTNIPSZHGUAAEABCIDHSPCJIJYNJRKFUXYWADOOWAKJBIHIDDLNHXZTZSDPQQPB");
    msg.type = 230U;
    msg.properties = 92U;
    msg.durations.assign("SYSXNUYWQJMTIFOLXBGCJEZMKYTQZHXXERUOJCDUAULFUAACNMSVTKPXJFPJNGJOKOSSIZXVZRDBLDGRJPRQPCHEUPDMFNREAYISNMLFMWBLAGZFAQGYEFGHKKVVLDHIDIMCWRTEMWJBEOWXEUHPXQBIGDALVQIQRSECCYHMVIAKRNPUYRTZXHUCCUWAELWZFNOZTTVLQOYBOIBNNKWZKGKOGCGTJDHPWKXTZR");
    msg.distances.assign("CPRHRAOPISRENRPPETRCCYRZYOITJAVYJTFZZCMJTYRBAGDSDHQRKIHEKBNMHZYVWIXYWECHMMHXJVYHNMUJDFATWLOZEAGKZXAXKQCLVGQVICEWITGSYNORLPGNEGLOWDGFLPHEGPLWUZTFJTYJFAPHSUALZII");
    msg.actions.assign("FWZDJPXROBRJQZWPBENDNTCKW");
    msg.fuel.assign("YFLEZXWETRXKPPJJXUHQTCEHGUMKIRACPTOIHAQTGWNQNVDZCSCCQAZRVLSZMVOZIUWWKYQUALEOXPAJVCJENCIIGBMBFLFVOZPBFWLYGPPSSF");

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
    msg.setTimeStamp(0.8302018696175512);
    msg.setSource(30185U);
    msg.setSourceEntity(95U);
    msg.setDestination(63043U);
    msg.setDestinationEntity(172U);
    msg.plan_id.assign("MDQZTWEJUHDFJANEELDWENLUPIQGEKGFSTRZK");
    msg.type = 75U;
    msg.properties = 17U;
    msg.durations.assign("MEVNYTALTHNMFKAZNPLPLCDUWFCQXYCUAXMEYRIGFNJDYJJJGZHWUCGASGHWSFGIBXFBBTLNOHVIZBRIXPKBVYJORSAJZGJKQSOXYGURIOYFHJCGQHRBPLZTQBWRARKMLNWEVHFIMVTZEUOVGVWWBOWEZITVTLOCKNKPKPVDCLSDLMUDILER");
    msg.distances.assign("NFMNHAFITIZLNOKJMQOBYXDQZ");
    msg.actions.assign("VITCHOQWJUJENUHQHDYTGHCBAQXZHXANESMJOAYOIGTNZTFXGLORGLSKZWABMJZWBRSDTKBGGRHJQQSHSEIVBSDGCFDBPMTJFVOSVZHOKUTBAGULXWEXUCWPWCFTACJZOFGLPPVQBRCYRARFUQLJYAPDTCUZWRODKSSAWEIZYDL");
    msg.fuel.assign("UAAWWREGKPXRXBGHMVYXXFZSMTMACLVOJNIROKBHTLTPCCDEJGBQBBIGLGXUASMIOJBZCFRQVKTEHIAPRJTZQUYJAXKZLKDTENRDJJVACSVWTJHHGUUBTPSSFWOHFIDQPPZYSEY");

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
    msg.setTimeStamp(0.2954573517089558);
    msg.setSource(14832U);
    msg.setSourceEntity(96U);
    msg.setDestination(6295U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.2533810854063858;
    msg.lon = 0.7991037622709845;
    msg.depth = 0.011678233986642472;
    msg.roll = 0.12679067814488476;
    msg.pitch = 0.19931314896587993;
    msg.yaw = 0.5568787274446874;
    msg.rcp_time = 0.015447470235992022;
    msg.sid.assign("LUHRBDEIVRCTGUAOCOMKSFNJCIQYWBWKHIKDCYPFTDFBRLKPAXRLQZASRIUZQOQDIMVMZORBHLHPEHHVBHZJJLKDXERUHQTOUOXNBULHRSLWBTGAXXYZJEPGPREYKSJYTZKOQEBICWJTNOLTCGGFBPWFLERDDWFJMZYXYAUQHWVM");
    msg.s_type = 82U;

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
    msg.setTimeStamp(0.8665321926310658);
    msg.setSource(4360U);
    msg.setSourceEntity(138U);
    msg.setDestination(41325U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.7702173791239375;
    msg.lon = 0.5523064156453658;
    msg.depth = 0.1193199895652104;
    msg.roll = 0.20514698123365194;
    msg.pitch = 0.4064907400559479;
    msg.yaw = 0.08928616673321055;
    msg.rcp_time = 0.7315723078147146;
    msg.sid.assign("VJFVWGGMILDVEIGUCBFGNOGWCPRBBKTEVUWMYSHBAXORJBCGTTRSYFSRSQUPUFSLWLHTGWERCDLKQFUWHMOXIZMOQHZJKHAAIDYCVZDPVCSPNNEQGNPLEPIAW");
    msg.s_type = 62U;

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
    msg.setTimeStamp(0.623549654590368);
    msg.setSource(55108U);
    msg.setSourceEntity(75U);
    msg.setDestination(47499U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.42825287833343495;
    msg.lon = 0.31412137835481924;
    msg.depth = 0.5591316611016663;
    msg.roll = 0.7973225465067663;
    msg.pitch = 0.06992623386571717;
    msg.yaw = 0.2650869632333437;
    msg.rcp_time = 0.5732225951529634;
    msg.sid.assign("LZLODLJOSGLMAOMTBALYND");
    msg.s_type = 55U;

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
    msg.setTimeStamp(0.266990629663881);
    msg.setSource(23332U);
    msg.setSourceEntity(148U);
    msg.setDestination(6879U);
    msg.setDestinationEntity(120U);
    msg.id.assign("TWGYRUUMAKTPLWAIUNULJMQSWYAFZGBOSFQQCKHDCOJVSSSRTLITHFMZXVULXYWWNYJCVTCELJPWKXRADJXAKQXDESYDCDNOPLWPDHOFKIZGTJHDREGBHRCCVUGFLWPIVOBQBXQYTQFSQYIARCSZFRSBENGGIZEYKVMOCGZPEZFLMZDQGUTJNNTUMYEFWHNKUMPSNVHXHIAPWJDJLUPVXXNOEEBZOAROBDIMPVZIKIKTXBVHHMALO");
    msg.sensor_class.assign("EARQIMPJQIDRXPHIWELRURUJNVSQBGGIRVETTXSOKMVELKTREIUKGYWPSYBZYQQSOKAYBDRTFGTFZSFQSAI");
    msg.lat = 0.011989545162399251;
    msg.lon = 0.12762343037371449;
    msg.alt = 0.04559894737120873;
    msg.heading = 0.3364642085550913;
    msg.data.assign("KNPIJYYGMMOVEGBHSEFTMPZDWIFDEESUIYXQTZTQDHMQXQNARFBMURWATWHVPKIOYXTIYFLPKXJTOIUWGWXZGDQWWKRVLURAPYOPZKJAZMJEUYKVCWFQJTWXYZNKOOAJOSUNT");

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
    msg.setTimeStamp(0.3538188247971511);
    msg.setSource(8358U);
    msg.setSourceEntity(139U);
    msg.setDestination(53901U);
    msg.setDestinationEntity(182U);
    msg.id.assign("SOWQVPAYOJGGPLFWGAGCEKUVZJTFFQMMYAM");
    msg.sensor_class.assign("UTLFMNHZJQHEJDCZPYEGINHXPMMVZTVNNJAXWQUIUMQLXWWNZVTIRPUFYXZWTRITJBBRSWVLT");
    msg.lat = 0.3205454362230311;
    msg.lon = 0.9932945512834469;
    msg.alt = 0.9686898822442612;
    msg.heading = 0.6538502771562905;
    msg.data.assign("LYTODPJPYSLNWUCGNGDIYXBGMJIKVWQSDJLXTPDTHOKGYHKXSHAURNCVIFHBJFACXAEKKCOSSGNFUYV");

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
    msg.setTimeStamp(0.981970710425158);
    msg.setSource(35791U);
    msg.setSourceEntity(234U);
    msg.setDestination(18290U);
    msg.setDestinationEntity(5U);
    msg.id.assign("RBXOYKGWPMUYTPFOBKHKVBIPZHDCXCJOTTJOAZVUGSWJRSIKZHVJZEAQMYMRIITCSDDVDFENFCMFTRFGNBGQXLCROVNENZMEPJRCUYAYVLHKHPYVWAJUUXGJQEFWSHXKOOTABONSILJLIWSWGUKPPCSQOQGDRHFAICSPLODNGFFTTXSVYZBKCWALELUXCTBQQXMXQFWDDRILGRBGUNMAEZQYNMEQWUZEVPKMSWKDHII");
    msg.sensor_class.assign("AUVGEJFXVQWZILNEAFSUGVRYRQFIHMQYZYYKEBAOQWHWXMQOSUBRNEZTFFPPGYDQMKUQKXJRWCMQNTPXBOASXLACEIGNJYMTVAOCGTKCVMGNEKYFPPKORZDDP");
    msg.lat = 0.024945737841336246;
    msg.lon = 0.7941321102145963;
    msg.alt = 0.7590422959754827;
    msg.heading = 0.4353981319261193;
    msg.data.assign("CZIMGSFACEN");

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
    msg.setTimeStamp(0.2730555033466303);
    msg.setSource(34365U);
    msg.setSourceEntity(157U);
    msg.setDestination(34698U);
    msg.setDestinationEntity(72U);
    msg.id.assign("WKBUMTINZIFXFWZMAYIFDOUJOZGYNDNYJHSMJMEVPANQWJSGVRYOITDDJKQRUTWOAAHBRJBEGTQYNVDLYFSHELHOZXJXWKJVLJIWCDDPRUITSDSCCGICPBNONHSZTZKPEHVDARKOEPEBKGOXAGQXLFSGLVNUZTFLFBMAHTPSRKLZBBYQVH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CCNIXHGNRBIQVFZDKYURTGJRIZLHEEAJYJUCDYNATCQIKZSBBBEIWZLRPVJPQLATTOJPXKD");
    tmp_msg_0.feature_type = 248U;
    tmp_msg_0.rgb_red = 215U;
    tmp_msg_0.rgb_green = 203U;
    tmp_msg_0.rgb_blue = 47U;
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
    msg.setTimeStamp(0.8797363406635507);
    msg.setSource(44358U);
    msg.setSourceEntity(174U);
    msg.setDestination(61142U);
    msg.setDestinationEntity(245U);
    msg.id.assign("SEEWVOWDPGSMSQBIILSJAVVOYYGIBJKKADRZMDLLZXXTMVHAGURNVYBREYINFBSBURMWUISXSIFDVDRFAHPGOCEOFNTXPZUEZPTYBHTZDZQMPYIJRLTWVHMKENJCLZDIRIBANFNZCSZNQVFJEUKMVFCFCUQKXJLOXGMJBTNGRKXVHAEGWAWTEGQHPDSCJJ");

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
    msg.setTimeStamp(0.2430155550979881);
    msg.setSource(58894U);
    msg.setSourceEntity(147U);
    msg.setDestination(3164U);
    msg.setDestinationEntity(233U);
    msg.id.assign("YAFNJTOKGUSVSSPWVUQQRJXBYBTOAQTIPMZINWYIRREXOWAGUGSQOYLIMFCFAYYZGELEBBIOR");

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
    msg.setTimeStamp(0.4762353603773657);
    msg.setSource(33750U);
    msg.setSourceEntity(143U);
    msg.setDestination(56356U);
    msg.setDestinationEntity(250U);
    msg.id.assign("WSSRGNAIRFDDODZMTVB");
    msg.feature_type = 98U;
    msg.rgb_red = 5U;
    msg.rgb_green = 118U;
    msg.rgb_blue = 243U;

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
    msg.setTimeStamp(0.9269944582890137);
    msg.setSource(4344U);
    msg.setSourceEntity(116U);
    msg.setDestination(40962U);
    msg.setDestinationEntity(198U);
    msg.id.assign("RCPXIEMISCKCGEOGHZYZTVCMYUHZXDKUDGGRJAOEQFFSSDUBGBDWVIQUYKLYPAQUWBAMOSBWUMXWKZFDOHNLPAHSVPMPHRUMENOSECTZWJJLRRFLPQWCAKIUAROJXNCFZYYWFT");
    msg.feature_type = 109U;
    msg.rgb_red = 252U;
    msg.rgb_green = 199U;
    msg.rgb_blue = 86U;

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
    msg.setTimeStamp(0.3907525279893699);
    msg.setSource(1116U);
    msg.setSourceEntity(242U);
    msg.setDestination(22305U);
    msg.setDestinationEntity(150U);
    msg.id.assign("GNYTWYPWLMODPYMXOSKSJGOZBWGNVIGTPVPLAGFWUUHAZEAUEDFEBFUCQJYBFDQWCKAMMAFTIKAFCHWSFTEUXRQHKSAETQLVNXPXMORHVVLBTYNCLNCTMVIABSDQHLBGXPWHCNMRZIPWYOZU");
    msg.feature_type = 36U;
    msg.rgb_red = 17U;
    msg.rgb_green = 208U;
    msg.rgb_blue = 187U;

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
    msg.setTimeStamp(0.9989872598249655);
    msg.setSource(18426U);
    msg.setSourceEntity(75U);
    msg.setDestination(33244U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.849433463591704;
    msg.lon = 0.16899588752261496;
    msg.alt = 0.16137230022443494;

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
    msg.setTimeStamp(0.5742673966328894);
    msg.setSource(64149U);
    msg.setSourceEntity(68U);
    msg.setDestination(43568U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.037259980714579255;
    msg.lon = 0.946821381339251;
    msg.alt = 0.7587041784315481;

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
    msg.setTimeStamp(0.23492063525634543);
    msg.setSource(41979U);
    msg.setSourceEntity(143U);
    msg.setDestination(53858U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.09946316200052085;
    msg.lon = 0.5859029420890017;
    msg.alt = 0.6084463163497983;

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
    msg.setTimeStamp(0.48690354113947176);
    msg.setSource(61046U);
    msg.setSourceEntity(173U);
    msg.setDestination(42716U);
    msg.setDestinationEntity(64U);
    msg.type = 195U;
    msg.id.assign("MZDCSKOYDKAJYLHGZBMWFTLBSFDJWIQCGEMQJHOPBNYQSX");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 30524U;
    tmp_msg_0.type = 85U;
    tmp_msg_0.utc_year = 12373U;
    tmp_msg_0.utc_month = 210U;
    tmp_msg_0.utc_day = 64U;
    tmp_msg_0.utc_time = 0.2875722084002067;
    tmp_msg_0.lat = 0.36159136693519733;
    tmp_msg_0.lon = 0.795266869373193;
    tmp_msg_0.height = 0.6807038716336203;
    tmp_msg_0.satellites = 6U;
    tmp_msg_0.cog = 0.7551803377758529;
    tmp_msg_0.sog = 0.2342708573459551;
    tmp_msg_0.hdop = 0.22878250585715;
    tmp_msg_0.vdop = 0.21073091622475704;
    tmp_msg_0.hacc = 0.8072244361484712;
    tmp_msg_0.vacc = 0.18689931847208108;
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
    msg.setTimeStamp(0.603524570987342);
    msg.setSource(63040U);
    msg.setSourceEntity(36U);
    msg.setDestination(8685U);
    msg.setDestinationEntity(3U);
    msg.type = 3U;
    msg.id.assign("KVPERCDQZLCOYYDBGWHYOWUJZGGARTZXVCHQWOCFKTPNNHYBLAXQIKZNASPXZWMCJMDBXVMMARLUBNKFRVHULNTBSFQBRCXIGRYTUYFJYFTOPVXKNLZFCINSXVSKEIPILHWQ");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.4472459893556139;
    tmp_msg_0.x = 0.41220553777564883;
    tmp_msg_0.y = 0.517230886631948;
    tmp_msg_0.z = 0.009400896933628222;
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
    msg.setTimeStamp(0.5655199458371681);
    msg.setSource(65113U);
    msg.setSourceEntity(29U);
    msg.setDestination(59274U);
    msg.setDestinationEntity(128U);
    msg.type = 236U;
    msg.id.assign("YFRJLLUGHVBWDXKLKAWWMVYTGEJMFPIFUCSKLVTPLXDWSXHALMQSJDRIADAWODTNOCBDFWPRZFGNESOJMNUAIFZLPWWO");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.06759728434112477;
    tmp_msg_0.lon = 0.4755817383601102;
    tmp_msg_0.depth = 62U;
    tmp_msg_0.speed = 0.595634914885249;
    tmp_msg_0.psi = 0.44503987964436775;
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
    msg.setTimeStamp(0.8310878961242342);
    msg.setSource(1699U);
    msg.setSourceEntity(191U);
    msg.setDestination(44210U);
    msg.setDestinationEntity(228U);
    msg.localname.assign("MESVRJPNOZNLGFPFOUKSPESMMZTBKUNCENAWFXTNPQIWGBTWDCSCYVDYIWGMZNGRUJWWHAFTCHUUGKZYZEDDOHEXLQKBFPUORJXOCESUJYBJJVXFAICBMR");

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
    msg.setTimeStamp(0.4952765871655972);
    msg.setSource(27013U);
    msg.setSourceEntity(196U);
    msg.setDestination(43653U);
    msg.setDestinationEntity(164U);
    msg.localname.assign("RZVFIBHSAGUWKBUGJSRCRMDRWFKLVERIJCRXQMCWSCOHMWTPWPXHGYUBGCSTHFWZVPAGZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LFCZZCLLGVXFYIZJFXBPHQUDACVGDABKDQCSOUOBRBKEKYXDOVDAWMBEVWOJOOXMGMZNSZFJGNYITREGAWBELGHGLYUMSCDQYJLBJTUKTRHRBZSVBJHRSHTXZUWVMUIWFWKYSDCMKFNHSEKDZNVWQNITJNBGEJKKCIIXNERWHCGPCEUMMFPFTTTAQRMV");
    tmp_msg_0.sys_type = 56U;
    tmp_msg_0.owner = 29125U;
    tmp_msg_0.lat = 0.3858191821918274;
    tmp_msg_0.lon = 0.06940581578293303;
    tmp_msg_0.height = 0.5742526554577961;
    tmp_msg_0.services.assign("EJAOSIOSSAMEGIYBQGHFNRNVGPZZCYOKVIFNBAMBHBDFYVVXLMESUIDOVSWWPIGFXJNQXKNZTSOWCLWCBRCLJIPLTPRBXVZFPDUZNUQUYQXWJUHMKRQTKGAQGPTEKSDYWCXLFMNWQXVNBMZYXBGHDHTTWRRHAGYTGEHLCMTFJNTOUDZZWLIAEHIKCLFOYCQHUEQKKPUADRSPJKPRIBHZRXGLCEOTKIPYOVLJUSAFORAZVJFCUBAMEEN");
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
    msg.setTimeStamp(0.1235490802663246);
    msg.setSource(44473U);
    msg.setSourceEntity(22U);
    msg.setDestination(3217U);
    msg.setDestinationEntity(197U);
    msg.localname.assign("NMBNVXSDHWDRYEBFAUGDTVSKTBPDXPMGPZZJWYFUZPVVADARVIGYCPJBQWCORYTNNOLGJYSMYHQYTWIKQXLOHPBEGKNZFFMCGSZLHAFBSXQALRMEXOTLBJWJZBKRTZMOWYKKSAPRTRCDDCOEVQFKUF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FRQBFIOQSIJWVZXHWABXKYDYGFCUGKJCJWUYIUWDGUHMPGHSKEIGSAMZDUMMRNHCCFSJLWFVOTNPCMNNSDPGWEBTBXOKYUTNIVKMQFEOPVVFKJLQZVSDALLUPVDIRMHZYQZJIPOAEEWJMSDZTUHTURQNXN");
    tmp_msg_0.sys_type = 157U;
    tmp_msg_0.owner = 16176U;
    tmp_msg_0.lat = 0.9861547257767811;
    tmp_msg_0.lon = 0.040492058388788;
    tmp_msg_0.height = 0.24196038012025156;
    tmp_msg_0.services.assign("OZXUZQYSNEBKXVYOLJSVYRLSIZSFJADXOZTAUXXRPUFWTHGKSHBWQNKBMQEGIECSYTRCKJQIETITIUMTSVHTQOZNWOHBCIPKIPSGWYUQERGKJVMVQUMYGMLDZLCELJCFLWYVDETFABEFZVJWAKUFPRLZUAKDWGMWXAADXCVXK");
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
    msg.setTimeStamp(0.9766438692314084);
    msg.setSource(10196U);
    msg.setSourceEntity(145U);
    msg.setDestination(44686U);
    msg.setDestinationEntity(229U);
    msg.timeline.assign("HYUOZXJHFHCNEMEDFLMVKYMLFVGTGCWHREDHFTKVIKDJLALADXHGNUKZCRQFKOFPVEQXFQRZPMAUOUSFPOPGCWADHSGJQYDIZCUNRRBZUUHYYKHIIWNYESBTDXTRBESXYALABZHWVTUMQRQIVNMDPPTNPMWPIYBPTLBEATREKPOAGJKCXSTEJLZKRISIXSNZ");
    msg.predicate.assign("NWBNYYCBTNSYDXVBCDUTTAQFJVFDYTVQZINJSMDZJMCGCYUYBHHOPQXLXLHFXOMOEBTTJVZYUAFWLHGPGGJAUUZAJXDOQREAPITAONFKQRLNKMGEWXPIVUSLZQVANYKDAYXPXCOFOOWKLQEUIORMUWXISJKFHOEQGRKRPNKHRGMMLEHIWXALISEECBRWVBMBTPVUSSKIMEPGVCRZIJUPQWCDZJJWBZD");
    msg.attributes.assign("NJJDTPYQIVDJYYSRFVSICZWLJKGNBYKCBZZJACSJTKGPDEPTLYTKVHGOLUNQUCGOMBWWZPWTRPJHOADZVNGLIPKQNUPQJAFEXNBJSECFEQZKXXLRHFINYQMJNUYQXSWRVFYIRZOMIEXUOFMWKVYUPUZUCSAIXFWSOLFRGXZNRVATDTWROLWOEGEAAOBHGGHFPACFHHPMSDHINICKXSAMEKMBEKBYMCWGQAQBCBB");

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
    msg.setTimeStamp(0.8810425823829332);
    msg.setSource(46693U);
    msg.setSourceEntity(75U);
    msg.setDestination(51576U);
    msg.setDestinationEntity(101U);
    msg.timeline.assign("UUODYYBURHITJWTOKAMWYLJWCSUGVXEDTWPZPDRCQSIRVXRLFECCZSLCQDPFQEIYECTLNCHBZMDKZFOPPNBAERISBIANZDQCWJGKUTYAIZBHMQNHNOTKKXMUNBOPVMFRHVZHRGNOESJQGSVEBAGHZDXADXVBSB");
    msg.predicate.assign("BJKYYQWJYMHGNZ");
    msg.attributes.assign("OWSSWGHIRJTXQYWUPKMGWTHBHKKGYGCLZMSISDUCYDJJZDNJVAHYTEOFEAIFLVBCYYQJKEBDRXZEGASXJJSHKXHHIEBRTSFFGWBRVRYMETKJU");

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
    msg.setTimeStamp(0.5798661876484227);
    msg.setSource(45238U);
    msg.setSourceEntity(32U);
    msg.setDestination(20187U);
    msg.setDestinationEntity(13U);
    msg.timeline.assign("DEFOAPLBCHDUNRYEVSSDPMFYYIQVJKCGITMVMV");
    msg.predicate.assign("QEPWSBSTIBZXDULLCGIGULOCWEIOCAZRNVHDJSKAUMBMPZJGXGRHXBQZWPCKSFNNRXVENATUBTSCKKWNTMT");
    msg.attributes.assign("YXXSWDGIWUBSAMDETKUNXQMRBNQNROVWTNKVIJSBQEOGJPYOLTQRKVDFEONQSSMBPENZLNRNUWPVMZSZECLOBGDIUCBWEAXDLZCA");

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
    msg.setTimeStamp(0.6978546742377907);
    msg.setSource(40539U);
    msg.setSourceEntity(220U);
    msg.setDestination(29649U);
    msg.setDestinationEntity(213U);
    msg.command = 46U;
    msg.goal_id.assign("DEBIHWZHILGYIDGBQIFQSNDWMPPOYDOWRPAJQVKGBVWFLPSWOMULHJHRJTXYZUDYAJTSBEEMCWWMUZKLOTZYEAPGKBKIIRYHHSOGUMDAZOMQNCARXWUKLGGYXYKGSTQLLZBUVJFFXRVPCEGXXHQBCUINJNMTNAFTFXYDCJHRLNAVCCEESDYIFSDXBTQKKQZMMJKOHHSTNVSVDPUNAZWFXIUIJVRQJRALOVEERTNRNZWFVESTQOAXFZ");
    msg.goal_xml.assign("IRLYLYKAGGOYCEYNSGUIXZGAHSLISNSYLPFHPBZNIEMHHOCFAUUOYDQXXIHHDRMDOPENUWRDZLTAZWQQVEEGFYZGXMHZQVIDOZPXTACFVQWMWXMXUMULDRVMBZMRKJYKONPJTHTBXRIPD");

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
    msg.setTimeStamp(0.4206030823179412);
    msg.setSource(16828U);
    msg.setSourceEntity(164U);
    msg.setDestination(64740U);
    msg.setDestinationEntity(91U);
    msg.command = 226U;
    msg.goal_id.assign("UOKLUIPTGJRPARLYITDHLSUCOTFPGYBIDPUQHEKMQOWZSZRFPSSNCDWRDHHJWICXFN");
    msg.goal_xml.assign("ZMNBKZXTZQIFXAXYEHRYABJNTRFDVMLIHRAVYZFCJBWGNEQTWMHTHPDTRDWSSNEOWRBATP");

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
    msg.setTimeStamp(0.8643597428460316);
    msg.setSource(11692U);
    msg.setSourceEntity(183U);
    msg.setDestination(51618U);
    msg.setDestinationEntity(61U);
    msg.command = 79U;
    msg.goal_id.assign("OGTXGLNJTGLFQRZWJHSAMYRYHWKNIBVXBSYCNUZRQEMAOUKBZVWKMBDWHKTDRMEVPOICSAROYDSUBPUAEPCEWQYVSILTDERIEEVPLJBVGWKMUHZQCKOMANXPNOUIDETCIMYOVQPLPVBUDNFZZHJBRPFEVHIAKABYMNPXILIRMATFJXSJYOUCLNLKTLZZKIFDDSLFNFTYFFXXSHQJWZWJAUXCHUTHDMBSXOWCJ");
    msg.goal_xml.assign("QYRTVSTSHPUZBFKZWXQGBTWADLGGIQEAIRANYABJPPXVRGOEMIJIALUDUWCNANIHVHOQFZPMCZIRSYJMKDIXUULINVKKETPNYKBWUPAGRFMJFVOZZEVCPYJFJKPCLCRRWSQMMHTMGGPYGHXENLOKIHASEYWHECUXQIDOOVYFXVUCLZFKDZHCSRVTLLOTDFADNHYOJNZSQOMJVKSLEFEJWHXDM");

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
    msg.setTimeStamp(0.7759072621667099);
    msg.setSource(51069U);
    msg.setSourceEntity(241U);
    msg.setDestination(53379U);
    msg.setDestinationEntity(253U);
    msg.op = 7U;
    msg.goal_id.assign("GZWOCMNFILBWWTKUUEYCRVBMGEPXJAANENQLCQJSYUNYDFIPROAKTZPJEBMZRBIDXFGTABJQPZSFTWEEDZLUZGVTFKQQTKPWPAMVKCQUBVSVBICKSYIXAEWNXGHDWHHZCIOOUKIL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NJCLLRFCCRXGMMGDITHJVPNUQVIVOAZEQWTFJZTGLVMFMRCSYOVHKTGJNJXWDHURFAMNNIULPWZHPFCKREBEYTJOBMYUAVDAGTNLNIRHDIZCPJSWXGDLQXYSPWYIRVZBDZIXCAEJQNIIBPQDKBMELNGTEDCAOFSGGKMXOWHWHELBYQZGOKEKJAQXESZPXAHAVUSFUQPYWTRKZPCKCUQJIOUXRSQBENL");
    tmp_msg_0.predicate.assign("UKEUSCJNNAOJSXPARLINXCCEDTMFWDFKBKWUXHHGDARXBSEHZVSDZTCRVWRUKISYLYIUZGMZ");
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
    msg.setTimeStamp(0.3032244523125418);
    msg.setSource(26205U);
    msg.setSourceEntity(100U);
    msg.setDestination(55981U);
    msg.setDestinationEntity(54U);
    msg.op = 37U;
    msg.goal_id.assign("USXOJTERNQTZGDJJAFIDNEGZRFAPWAKSOPQLOMXFCXMYETGVBGWUXYXVMQJIDCJILLHUZMOXQBSROPCUCZZOKEYOURKKCHIEZENQRCIYEJRBVFUDGABISMKVYKWGEYBSZIVZFBQMVEAXKVLFWYWTGHLWUNPTFWQPPNHLJDSZULIBRCLFSBJOYOSRTDMIMZNDNHAYOUWXVLPYTJCFUMPSWLBFINREPKHKGAQDAHHBWJNVPXKNAQH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SLSGADEYNOLQWNFHDONKLUAMFZSVXOMEDOKPLLMKVTPUBNPXPZFVHNDAETPTZYAEVZQWHGKZNZCCQSVYIYUFBWBTVJLCMIBUIVYAJKASPIXTLWMGBDUHFJEJCJJRITKUQLDKUCMQO");
    tmp_msg_0.predicate.assign("LFVMLCHAWMQWSSGCXORNZVBIKEJEMEDARGCVXRQNVLUKJPYTPVXGNIYCZFRKOFCGIDVCQQSGHMHKOZEXBGCNMBZUUMSITATMNLAYSOJWIBPGEKJJQOYIFTHRSJAETCXICWYQGUTHRAJVWMUDNIPADDHPYPMPPZFXXUUXRTHKNLZTQIBLTORRVBYSEZFOVSGKFWOIKYNKDOSASHJ");
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
    msg.setTimeStamp(0.8690132010410291);
    msg.setSource(52950U);
    msg.setSourceEntity(106U);
    msg.setDestination(57951U);
    msg.setDestinationEntity(37U);
    msg.op = 85U;
    msg.goal_id.assign("APWPLSVBULISBVKDNTHNIDEQCWOKQMQQGSNMSGVZMMIJWFYUYRWLGPVFRRTTDLHDCEEXCAXI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YZOJOCTTXIBKCOFBJAAENELCGUDZEVCRYNYOJEIZGZWZFMKUBWRPXWHADOHMIXLVJDGZQCNEKSEOHMLFKKYYNQTXJDXAPVIRULSGVMAQVUNFLJTWPBIDDVRZFXVSCSPNSRHDLNPW");
    tmp_msg_0.predicate.assign("HNHZQDVYSLBJUTOICWMLDIYMHSYLKTAQQGTFZDBEJKQJNWKEXMYOAOGEEKROEQEEVSPEHLNPXVAT");
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
    msg.setTimeStamp(0.058662452338133275);
    msg.setSource(50993U);
    msg.setSourceEntity(22U);
    msg.setDestination(15686U);
    msg.setDestinationEntity(26U);
    msg.name.assign("ISXISKGCNSMVQMJQOJEXVZAULKERDBUUKEON");
    msg.attr_type = 164U;
    msg.min.assign("VIHGSECBJBFWCRZDCSZFZWVQRRUCKLRICFIKDMLTXONUWDQVCRPOOTMAXLUZHSJORRSXARSQEGITUOLTPQSJFEKFKWTZGZWDNJFRKAPTXAVNBGDFFUHBETWANFDEHINBBJBHAPNPNUYOMFETSVZ");
    msg.max.assign("SXVZGUYOMSFETYEHMJPAXHNVPRTGVLYBZVHTLXWKDSDPMLZNOPPWNXEKUNHJYYRAS");

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
    msg.setTimeStamp(0.512223909412744);
    msg.setSource(18926U);
    msg.setSourceEntity(173U);
    msg.setDestination(43232U);
    msg.setDestinationEntity(124U);
    msg.name.assign("BXZPMGAMBGYQNIKKIQPFOSFNROJXACDUZOUASDEQESVTJXOXYNPEGLRJRGWPYNIDFAHODCPEAOOGQHGCRDWDBQYUHAZVKUFFR");
    msg.attr_type = 14U;
    msg.min.assign("OANSXBTFFZHDSQRRYZSVWPAMHWIKPMOTQULRFZKEHHPGYWJLDDXCUTVQBQOLDBOKAEPVYYWTYGIXWVJDPASMFEUIBOREOIFQEVRQJJOUTEHQTZXCCXEKBYJOHBSULDGCUEFZKGNPMGGQAGXATVKDSCVWAIHNKQUQBAVILTZCRWVDNWLYCTKNJN");
    msg.max.assign("WDSGNVRZQFSPWKYYLFOBSEOKUNWDMLKEAYPUCGSTCMUPTLTASOHLQTHIPYAJLIEHQJKWJJKZPMBRETWYFHIXRMGIMXMRFQTLNZCVJVOFWMSVLUCJLGUDTQKHPHXSCFNVNGDIWAUZNBXAPSVOJUIIFFRAOPDDQEHNCXZITEAFGBQAUYWXRJBZUNDDFMUVBEKR");

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
    msg.setTimeStamp(0.32780028316236787);
    msg.setSource(21770U);
    msg.setSourceEntity(142U);
    msg.setDestination(57612U);
    msg.setDestinationEntity(182U);
    msg.name.assign("EZPUJNRKYAFWNZDMKLRHOLSTOPCSJQYDTCVKOEERVHGUSMJBWVUPSJKNJPXLEGJHLKBQQUSTRXHYGMWEFNCFISAWBDOLFATWSIYFWNESUIXQLXEAVEDMKCPHHVOZGPHYGPZZTIDLJJDQBA");
    msg.attr_type = 9U;
    msg.min.assign("MPDPOIKAKFCYODIYMVGEULXAHXKCPFZGTEGNBTOGQNKUDHEMBROAGFUITYQXNCBLYSSEGLWRTAFYYWHJSGHPSDOLOHZENBJRVALWHAFTHTSZIFQFDXYSZUMPLCFWIPBKNPCAOZRQJNZLXLTJIRLICXPUORISHVASTCWKDUDVQNCJEV");
    msg.max.assign("ERNTPOMAOZSGDCJKVUJKAPOFVNQGRJMBGKMBHTAEYPDZFKZZJKSHFUZEXRQRPETMOZCXLWRQCXEBVDXIDTJFFLMSGSDNFQOBGQAFNXXJJWHLGNTANCZHCFEMAUXVQCUWHSPVJKSXSHULUGDBNEOIRHSLAYCUOFPXYBBHVLIIN");

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
    msg.setTimeStamp(0.841636603433633);
    msg.setSource(44665U);
    msg.setSourceEntity(22U);
    msg.setDestination(43749U);
    msg.setDestinationEntity(97U);
    msg.timeline.assign("ZXJIRONOWENPFTLAXXQRYRTTUGSPAFVGHZZWWXHTJNHSDBKXAXDRXBOLUJCNWPGQMPIPUVHVMKEQMDFFFFAMQTCRNLNIUXGQMIKNCLKCECLOIZSAFIUGAKVGRIBDDAJODTJLETPHOYSXBSIPWSDSOQOYZG");
    msg.predicate.assign("BEAVKNCVVKNDYKWDBEXVJRETSSURWUXBLFLMCTSSFRBBTNDPMMOQREAFGIPGHFVFTCPKBBYGW");

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
    msg.setTimeStamp(0.03613647373189699);
    msg.setSource(54806U);
    msg.setSourceEntity(167U);
    msg.setDestination(4692U);
    msg.setDestinationEntity(227U);
    msg.timeline.assign("GUTRYNJOIBJMKJYEHAFSFTONYVRLXDAPNLVMQAUQUGEHSDEPYQWOFTEACEAJSRQYMZFPUDBJTXNOOSWOPICHUFGZKVAKNTSRDBIJFTBPCTLSRUYSNCLXKGIMSGQZYANCBTRLMRQPHGMIVWAYOBEVGXNCGKBUZKUOBPZPWXKIVZCCVHQIDTEDW");
    msg.predicate.assign("NWRPHNGRVZLGLRJWGVNQIAKCOOLLCDXXTGZKWPIFTVMSZJWPALTIUJUCESVUPOSQMGRMUPOFHZUIHYNPLAAVNFDWNGQWTSFDYGFPHNPZEQZQM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ICYLSQHPHJEWBLHUGHYEIMJUOC");
    tmp_msg_0.attr_type = 33U;
    tmp_msg_0.min.assign("SVZZYWQRFNZUFMFIIWSDDWEORTCNLUGCCKYLMVKHUESPSDQNQORJPHGCRVHDDLNRRQXKDNHUGPTDBMTOOMYGQHVAEXBVWIKVFENJMEKCIRVDTQOOHKGOKJMTBGKEUXABPMWIYRVOYQCSTQMLPUBFAAXBVSCZYGLLLAEFPEDKTTRLOPUXX");
    tmp_msg_0.max.assign("DKNXLBPCYQHBOOJIUVEQKJKURWDAZHWIFJYOPVTJDKSINADQSUDGY");
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
    msg.setTimeStamp(0.37992861875174966);
    msg.setSource(8041U);
    msg.setSourceEntity(42U);
    msg.setDestination(18925U);
    msg.setDestinationEntity(66U);
    msg.timeline.assign("HLRWWPABELPAIZWOOJKBOWLCFIKZQTKSHWGGYZYGMYIXFFGFFQAVBHIYTHMEHPGYYXUIJMKKFDXLDRQXXTSTQKHHMEDNSNJUJMPWYLQGBCVNUNXFITJEHNZZUOIQPNDVLJDA");
    msg.predicate.assign("BLKTBVUQHGZYVIHKXHIHULRUOHHKRMRDXCFKPCFAEAGDQPNBJBMGLQMDYYZDWLAWMYYUFTCLOKSEHGNAGRXWHZOIQKJMUCATVAJVOWVSVODHXUJPPXGIDAUFYZGBEIJXOSLZSGVCSWFRPHTNTTGDBQKUQVDFBNSZYJPJIEIERWQYKWXENPAZTZ");

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
    msg.setTimeStamp(0.8489797972078632);
    msg.setSource(16504U);
    msg.setSourceEntity(90U);
    msg.setDestination(18084U);
    msg.setDestinationEntity(107U);
    msg.reactor.assign("FSMVBMUFIGFMNOSSETNQZNCYPKJAKFCPVTTKHBDSWTXBUQEQWBCQYVE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QDSWRICZPTBEAKTUSWOYDKMBWKGHHXQNFAVRFTVLSGROFQNTUMTAWLBUUVNLQLIKKWFVAPTCFNMDQODPPPJCQPMJTCVCRHIGXYQHLGWZYTIEPCMNJLBKXGNMUDRDFZBWQDNPKMYGYHOEJBOJIUOZVOPNRPJLAEUHSBZXXZEWACTBQXKEJOYHZSGKUHLAYJMFFG");
    tmp_msg_0.predicate.assign("FCOEGKSIANYZJVDWU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GCOVAUFTEXUCNMFFIOETYIGBHIAUXXNBNSPJVEILRNKPARYEHYSPLADWRKDROKVANJKPKPTWCGGLYHQZTSJZCZXBKTXKNFBWXZCMLOSWWHZXJZSYDBFQSYTLTJISQLKGXJMJDTWDEJLHFUH");
    tmp_tmp_msg_0_0.attr_type = 236U;
    tmp_tmp_msg_0_0.min.assign("ULBNYGUTBBYLRAMSYZZTTUADEQFJRAUVXNDRYFCTMURHFDKWPPSQGCNXZYQWHTOSKAZDYUDJBSNIDAIAOPOMGMNNZCPUMNWWLVWPKHJWFOFCSRUGKLHGDKBJEJAEIVKXHBYERV");
    tmp_tmp_msg_0_0.max.assign("NZIUBXVBTHJOUIEDZHRJBROUZCVMHYDIJDRBVQLTGZVJOXCGHHUSQSMRRQHRANWQVYFVPIXFKLADKINGAXRTKVIWFSWJHDEMPMKECGLELVSMUZPTIQPSWNBDSENTKZNOEZBGJPCBRYAYMFWCQPLHMJQYAFPODGAFXVRGISEENZFAOKLXXLKTBTJOYUHVWUGTLHK");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.06190538236991072);
    msg.setSource(39347U);
    msg.setSourceEntity(54U);
    msg.setDestination(52358U);
    msg.setDestinationEntity(173U);
    msg.reactor.assign("FXLSKKWDZVAGGVJUPNCVDWEJVTROQSXIYYIMXXBHRJTBUSMUOJXOFGBLMJECXQKTFVPJFWEAVEPEWODNAOVQQMHQYHCTCRTMKEQWAQZPIKJLCNFNG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZPUNQPMELWVRLTBLSUOEEITBOPYMRAWCPULNYJFDACLCOFPXKTKPSOXXGBHDBQAIR");
    tmp_msg_0.predicate.assign("PNTYFCAFGKSXCYTRYNDIPWAIMAW");
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
    msg.setTimeStamp(0.3099527251110985);
    msg.setSource(63516U);
    msg.setSourceEntity(31U);
    msg.setDestination(9282U);
    msg.setDestinationEntity(123U);
    msg.reactor.assign("QDTRNXRFDXWKVAWKZCMQHOJLGFRHAOGIRDMPZKUDZUKYUQLYFYGGIQYXFZIBSGMNRBPOOABOGOFKNWPDLXLTBEZCKLCFBJWUEVQMEQFJTFXHCJRLEPOIKAVAVVIZUIOTSGSLAEYJJSIDYKPCPWCYDTAHXCBCTCJPUQVVUXLBZSWANMDLBWVZQH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CMFRSLRNZGPKDCTCRMDXJYVQVMXKGSPYYXQLTKOGFNZLBHMGJZYFHHWXXIWQFJZSHRJYUKLPSFCTQARGBNYPBDENEEJTACOSFXFKQLVXGDWHHTGRBVUQLKOOJJIEGYBUUAEPSBZIOMTVLCNRBDKRTUHOCZVDBACYOKKGSFMEATWUSYQIZFVVTZFDAIIPWUIT");
    tmp_msg_0.predicate.assign("TZRNXRUUIFSPEHSDIOQREATLOHFJBMHOJFVMWV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OLTJIBLYQXAOYQCBTGHFYIZLDEOWHVLXSLBSHRUOUZFVKYCGXJCITDNWSXOQFGGWMAWODKRLHBFZPEHSEPZQMNCGNMOUIYQVYYAPMRRFXDSUFPJEZMUCCAYFXVTVGBHH");
    tmp_tmp_msg_0_0.attr_type = 27U;
    tmp_tmp_msg_0_0.min.assign("VVLIEBYCTTKTKGCKGEADUNPOCBQVXUVFDQMSAONHXDISOQFCRNNARGVPABGCDZRGSAA");
    tmp_tmp_msg_0_0.max.assign("RTKJAAQVWIMWGSFPYBOSTUMBWYMXRZQINWKZQFEBQEACXSXRCOMFAZEKMPZ");
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
    msg.setTimeStamp(0.3043494867137364);
    msg.setSource(39345U);
    msg.setSourceEntity(119U);
    msg.setDestination(1667U);
    msg.setDestinationEntity(14U);
    msg.topic.assign("MRGFMJRGRVEEKLLEHVKJFSSZUXNKELTAHDBJNYPLQDOEZKJKPVFAFPKGIIXBTNWLRCBFUNCGPQQPAGLSIWCETWGNNSWPZHOBMNUTYXISHHKWROBWXTHKYOOJECGOAGQKTIGQWTXCZBMXWCACDRXNHVVZVKDWQRMMNHYRHJBCJPDFJPQMUYLSADYUBSSJICDDZ");
    msg.data.assign("ZEPWYTPYNLFXDQGPKSTOREQEASEQIBPWFNSYUNGHVORLKIZCZZBGCDQJCVKJSPRESEKIZKD");

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
    msg.setTimeStamp(0.6788120532005574);
    msg.setSource(13922U);
    msg.setSourceEntity(223U);
    msg.setDestination(24874U);
    msg.setDestinationEntity(184U);
    msg.topic.assign("AOHVXSWYQASQWBFYMLVWLTNESQTBZDAESEVPVJBIRJOVOMMOILGAMTPLYLMKESPMCKCXPCCFXPORVDEQTHEJUXSBHAYRJZJSAPGW");
    msg.data.assign("CVRVKOILOHQWWHVIVDQHNHZSRJJRQBFQSGDBHYDXDWGGPLDQJHIALAKASGLCQILJCNTFYNCZHFRUFMRGUZWXZTYSYAXXUFPAYSETWGNLRKJRQPKUPGMTDPBTVUDNABJMKVMWQGXUMFOEIOAHLI");

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
    msg.setTimeStamp(0.7508939613238685);
    msg.setSource(21785U);
    msg.setSourceEntity(252U);
    msg.setDestination(5467U);
    msg.setDestinationEntity(94U);
    msg.topic.assign("JIROJTMAJSGJFAOKNISLUMVPYSMSOQGDUUGTVKSEQMHQNCCZLBXQAVQYDMYLETNURYBVPDPNAGZLNGNIXBERXWDXPVWHXTHDKYLOUHXZVNPSNRAYBPFBQEWUBZPEVAEBIFQDTFTXYCWWLLTHRQFHIKNCTOKYATDSIGPGQOFZZZJCUES");
    msg.data.assign("OXTXKWIDYHNOJCZJVMCKQRSSQKGOXIIRTILKSNUNCPFMSTRCYDFOEFTSWEQFZIDWDKLJZMRYHZEMWDWLXDYBESNKGESPUGRUCMHDVFMUAFVGJEPKANQHNOGWLHSAZRJXUBXIKYGKCQJANMUURHHUBGGXAGNFRIKZQIEUOTQBBBYTIPLBCMWTBOVD");

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
    msg.setTimeStamp(0.24808309901735348);
    msg.setSource(43248U);
    msg.setSourceEntity(235U);
    msg.setDestination(34351U);
    msg.setDestinationEntity(174U);
    msg.frameid = 153U;
    const char tmp_msg_0[] = {33, 39, -112, -93, 3, -39, 31, 56, 87, 52, 90, 100, 99, -117, -121, -114, -112, 36, -121, 64, -102, -30, -3, 8, 32, -109, 118, 104, -105, -70, 50, -99, 38, 3, -48, -111, -124, -102, 89, -56, -43, -127, 81, 102, -57, -50, 118, -85, -66, -90, -28, 66, -122, 22, 85, -121, 23, -7, 70, -126, 36, -31, 113, -128, 18, 108, 20, 67, 9, 35, 70, 33, -23, -88, 125, -4, 64, 19, -96, -33, 21, -5, -65, -46, 20, 115, 101, -111, 55, 50, -16, 78, 26, 1, 5, 99, -7, -61, -104, -23, 88, 15, 119, 119, -75, -46, 39, 119, 56, 1, -122, 33, -98, -88, 33, -126, 25, -94, 34, 86, -119, -5, 44, 45, 117, -45, -97, 104, 65, 11, 30, -65, -124, 81, -2, -25, -14, 84, -10, -19, -20};
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
    msg.setTimeStamp(0.6090873819283255);
    msg.setSource(20436U);
    msg.setSourceEntity(41U);
    msg.setDestination(51334U);
    msg.setDestinationEntity(156U);
    msg.frameid = 209U;
    const char tmp_msg_0[] = {119, 55, 121, 56, -121, -91, -123, 40, 9, 47, -78, 14, -47, -4, -62, -106, -66, 28, 28, -109, -110, 43, 74, 111, -43, 115, 52, -59, -67, -26, 55, -122, 20, -67, -82, 52, -30, -119, 70, -18, 58, 124, 34, -39, 60, 24, -60, -81, -69, 37, -6, 16, 27, 94, 41, -62, 36, 87, 62, -98, -107, 83, 27, -66, 11, 110, -40, 32, 63, -11, -80, 33, 72, -56, -45, 84, 124, -15, 29, 121, -92, 91, 3, 34, -95, -55, 115, -63, 20, 72, -90, -83, -61, 86, -110, -61, -63, -90, 28, 106, -73, 48, 19, 51, -62, -16, -18, 109, 108, 60, 46, -29, 78, 36, -121, -123, 72, -112, 114, -14, 43, -9, -57, 61, -42, 73, 10, 38, 8, -90, -37, -50, 16, 39, 25, -34, -41, 43, 4, 15, -114, 27, 8, 111, 67, 6, 76, 0, 6, 117, 97, -45, -21, -69, -63, 74};
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
    msg.setTimeStamp(0.27397580659753296);
    msg.setSource(12489U);
    msg.setSourceEntity(210U);
    msg.setDestination(42529U);
    msg.setDestinationEntity(92U);
    msg.frameid = 3U;
    const char tmp_msg_0[] = {56, 84, -28, -23, 2, 97, -20, 122, -64, 36, 106, -126, 114, -118, 102, 109, -61, -32, -73, -15, 23, 98, 101, -108, 86, -42, 100, 100, -28, 24, 48, 46, 47, -69, 111, 42, -95, -121, -33, 11, 26, 8, -53, -75, -73, -81, 120, -89, -99, 26, 47, -22, 101, 76, 49, -48, -73, 37, -101, 75, -31, 31, -109, -34, 110, -123, -20, -62, -55, -19, -123, -9, 28, -37, 50, -81, 75, -78, 48, -122, -38, 117, 12, 120, -123, -17, -18, -86, -58, 104, 108, 36, -73, 5, 71, -67, 72, -104, -28, -44, -45, 93, -95, -18, -27, 87, 121, -80, 50, 29, -114, 107, -120, -16, 46, 5, 31, 88, 69, 106, -48, 82, -101, -115, -88, 84, -12, 37, 126, 87, 106, 77, 68, -78, 35, 32, 38, -57, -109, -11, -111, 91, -21, 6, 72, -57, -42, -74, -27, -28, 110, -24, 4, 84, 62, -86, 9, -5, -63, 39, 12, 17, -37, -41, -66, -90, -50, -15, -53, -91, -127, -29, -104, 76, 20, -127, -35, -91, -71, -98, -55, 36, -85, -24, 19, -126, -16, -36, 4, -102, 28, 56, -99, -39, -14, -41, -91, -107, -118, -66, 107, 12, 71, -61, 69, -99, -57, -1, -61, 46, 35, 8, 5, -109, 66, 107, -38, 126, -54, -75, -24, 60, -124, -85, 116, -93, 69, 87, -40};
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
    msg.setTimeStamp(0.42373157732186795);
    msg.setSource(30938U);
    msg.setSourceEntity(166U);
    msg.setDestination(13027U);
    msg.setDestinationEntity(169U);
    msg.fps = 135U;
    msg.quality = 103U;
    msg.reps = 87U;
    msg.tsize = 75U;

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
    msg.setTimeStamp(0.26753495660985815);
    msg.setSource(51602U);
    msg.setSourceEntity(69U);
    msg.setDestination(52093U);
    msg.setDestinationEntity(108U);
    msg.fps = 210U;
    msg.quality = 169U;
    msg.reps = 10U;
    msg.tsize = 94U;

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
    msg.setTimeStamp(0.3960628785697532);
    msg.setSource(28475U);
    msg.setSourceEntity(19U);
    msg.setDestination(64464U);
    msg.setDestinationEntity(98U);
    msg.fps = 148U;
    msg.quality = 13U;
    msg.reps = 200U;
    msg.tsize = 35U;

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
    msg.setTimeStamp(0.18445401329350186);
    msg.setSource(36487U);
    msg.setSourceEntity(197U);
    msg.setDestination(43379U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.2396917702868251;
    msg.lon = 0.5559428082662498;
    msg.depth = 155U;
    msg.speed = 0.22316146837092476;
    msg.psi = 0.20994648867214305;

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
    msg.setTimeStamp(0.33143730868525056);
    msg.setSource(40571U);
    msg.setSourceEntity(173U);
    msg.setDestination(64330U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.7950128790086379;
    msg.lon = 0.14100200977433663;
    msg.depth = 46U;
    msg.speed = 0.5245587341619525;
    msg.psi = 0.03128471518706699;

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
    msg.setTimeStamp(0.2425059591574067);
    msg.setSource(51913U);
    msg.setSourceEntity(115U);
    msg.setDestination(8075U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.2046897450764955;
    msg.lon = 0.36595306880643286;
    msg.depth = 107U;
    msg.speed = 0.14150138758270125;
    msg.psi = 0.15856206952663043;

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
    msg.setTimeStamp(0.5885934173655643);
    msg.setSource(46542U);
    msg.setSourceEntity(82U);
    msg.setDestination(2555U);
    msg.setDestinationEntity(87U);
    msg.label.assign("QTZZLIIAYGURWRDGIDIKGMBJLWVLXUWWQEZSQGWZXQBCMRRFTRPKFWNCMJFJQTCCYNYLPRXLDSUHOXGHDONRNOMIKMFEJEDZAPSCDMSUSBMYDBTHXVTZSGHRQGWLOTJGULHVKVGAWNFHKHCGXUJDUYX");
    msg.lat = 0.4593601773515188;
    msg.lon = 0.6445063502767426;
    msg.z = 0.5397614039519733;
    msg.z_units = 27U;
    msg.cog = 0.8479138600238292;
    msg.sog = 0.8244506226341971;

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
    msg.setTimeStamp(0.9772897926238857);
    msg.setSource(31607U);
    msg.setSourceEntity(12U);
    msg.setDestination(5872U);
    msg.setDestinationEntity(63U);
    msg.label.assign("ZNLUQKGOOBAPRPWLTDCEMTQHQZMVNLLQXRYFJKYBEZKPFHPMNYAWFSJREXUYQXFJINZJFDKPKMXTJDDEFADZXIMQVEGZJIIQWBFPXWVISTKBGGACVMQTOCCYBYVXTQHPSSLLVDUFYYOVWWUCYLOTUBRREJPDNEURHCMBJDZDTOVINKWRXZHAUGAELCI");
    msg.lat = 0.39035928482713933;
    msg.lon = 0.033015065762128315;
    msg.z = 0.6587827981812568;
    msg.z_units = 185U;
    msg.cog = 0.883172308147851;
    msg.sog = 0.8641808829991451;

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
    msg.setTimeStamp(0.5424273508647331);
    msg.setSource(41505U);
    msg.setSourceEntity(237U);
    msg.setDestination(55099U);
    msg.setDestinationEntity(87U);
    msg.label.assign("LRSRZOLIYEGZPTWWMTEJZMZFPRMBAOQHNNMBZNMTDJCXMQDBXIRPGZMKBYHVCGGXPIMZUBCYILKJQVTGTVGRUNEMKZICSCFK");
    msg.lat = 0.14906019823962235;
    msg.lon = 0.027347265796453413;
    msg.z = 0.9874211939615058;
    msg.z_units = 212U;
    msg.cog = 0.6513638192314075;
    msg.sog = 0.5432393561325117;

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
    msg.setTimeStamp(0.38645231792219426);
    msg.setSource(629U);
    msg.setSourceEntity(85U);
    msg.setDestination(59917U);
    msg.setDestinationEntity(140U);
    msg.name.assign("QHXJTXVMSGNEORVKEYXIRRGYRATLESJCRETBNMMLYMGMSOOWRVCWZAMDNKGFNVFNCAUEAZCTGFPNULIASYGVZXDPFNJSSFKDWKMZSHJAVCLVOQQVRGDUMLKUGKANSPFIAPDDYRHWPXHBWQIWFFCXDVEIBKTL");
    msg.value.assign("TRJTPJNCOYUEVLOFOHONOZURWNZBMLBPHIXCCMLFDTTDFBCVLUHKZT");

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
    msg.setTimeStamp(0.6642574271946897);
    msg.setSource(4643U);
    msg.setSourceEntity(192U);
    msg.setDestination(50990U);
    msg.setDestinationEntity(11U);
    msg.name.assign("GKWCNBSMYRFKNQKGBZBONITDAZLQFLGTIZJPDVHESYPICUUEIRLAUHUKXNCMQSYRRGJTAZUJVLBAXYDQVMSPLGBDOUPEFCAVMLEDIQMSF");
    msg.value.assign("FMYSYNKDGSKSFGWPQAJMDTII");

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
    msg.setTimeStamp(0.7176295141958019);
    msg.setSource(7605U);
    msg.setSourceEntity(148U);
    msg.setDestination(20813U);
    msg.setDestinationEntity(177U);
    msg.name.assign("GIZYMYDXXYBZYUWC");
    msg.value.assign("JFZENGYKVPKPYLMQRXTOUKFUFPEHKUMRIZFIGDJZRLHSOCDPTMBUMWPNUABONCQSZVXIEDSIPYTNAKJNAGGBSLKUVZNXTHHKVQVRBCWSWRGOQQOECTCMGQHNKCLZIKAEWBVEGDWELBDRBJOOQZMQXLNDTAPCIUOFJZVREUYRJ");

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
    msg.setTimeStamp(0.8201383467554407);
    msg.setSource(53453U);
    msg.setSourceEntity(153U);
    msg.setDestination(2833U);
    msg.setDestinationEntity(132U);
    msg.name.assign("DAOKOUTKLKWJAWRTEMFSTBPFFYNUGLUQJFKITZSCZQQXQBNZNPYCDLINBDUGLAEBERDRURFNCNQWVYHIIKGXQLMCLNPXAVNEGXZLBJWBNECBLIFQCICHROGPCSVJPZPMMDYFYHAWBISJEJ");

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
    msg.setTimeStamp(0.14337490103080608);
    msg.setSource(17629U);
    msg.setSourceEntity(151U);
    msg.setDestination(39457U);
    msg.setDestinationEntity(128U);
    msg.name.assign("EOKCAWELAJVMIGECIFVZSFWGKADDESL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MEUZXZOVWTRMXDIBMGAEIFBKDVQQXPJPMKBTKKMLQSJOZDCNQVSBZDQTNIZHJFSVCPQOYRWZJYRSCNLOOYZMTJHBVAHURTCFNPKLLFYDTIBXPTHOWKEAVVEMYAZXIWIRXXVSIOZAHOPAGKIFHEWEFNAJXASRCLERRQYBPKECGQDFNWZCKGWHSVSCHNGQXMEYOSMNUFWEIKNWADM");
    tmp_msg_0.value.assign("QOKJWKEJQSTYWFXAIKZVNGJNLOGSCMNXXTJDMVVVRQQFRCXNMAVNQZPXUOXFEXPPXDIERUHMNFNXAFDWULAFSCILVTNJTEHPQNBRYAYFSPHVBUFOHTKDLZMTWIJDZHLACZHHIGIKWEHDZGMYPQJBDVOGOYVEZDTUEBRPGDRJOPSIGYJMKPSUBFJHISCFGIWCTZBKKAZKMYAZGWWREUYQNRRBEWYSBLKBS");
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
    msg.setTimeStamp(0.23402093468819007);
    msg.setSource(26389U);
    msg.setSourceEntity(186U);
    msg.setDestination(41823U);
    msg.setDestinationEntity(54U);
    msg.name.assign("WGHKIZPUDOTQKMJLCZWZOTAUDZRYCTNDJDQMKHZFXKMRBXMYSYHNAYKFTAQYKRMMGFSDGCWHYQIJNGBLJVLDKJLJTXNFGPHINBEMAWTAPHRQBYOKCNPXPGJDNRUBVZGJIYZLUHFXHJTUOMSIOG");

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
    msg.setTimeStamp(0.6510621751259643);
    msg.setSource(52876U);
    msg.setSourceEntity(63U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(198U);
    msg.name.assign("XMJXPXYOFTNFSEKWDZBCGGEQXOELGMAKLKXSGOCDOVIARFRKKNDFPMPVHDISPZFJRPUQKYPQPPPBERCXZRVOXKVVGHBCLIPVKUFTDTTZIAIYJQDMLRMNZCHRXMLUHBBDHUBSFETBNCGZJWYZQWLWMZNTHYWEDIX");
    msg.visibility.assign("SIHFPHLPJIGUVOKMEECOFGJUYSRPQTMIKOWEERYJNBOXYRHXAIWJQRAEHNUPNGTBEYIXQUNMBHDBGERCIISQYSXZMGXHYUPACPLYNNWDKUDTBRHZQVWEMUIZSAWGRFQLKPRHLOJJLUMGVATEACLFPULJVSZJBKIQLOGTDXTWVDDVBYQDCMZDOAVVCNHCMBTVIB");
    msg.scope.assign("FNSFHNGVOJDJRWKFZLCXBFWNFRXCPFQMKUGAUD");

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
    msg.setTimeStamp(0.4150863223889427);
    msg.setSource(37346U);
    msg.setSourceEntity(124U);
    msg.setDestination(7435U);
    msg.setDestinationEntity(251U);
    msg.name.assign("XGOENPVWTADGRCLVBNTLFTXNKGDJIELEFPOIAMGCQQRDILNKEULBJIVWNOECZUXNVIFRDGKJAYCWXONTGSFRDLRQIHUUOROJSHBPRSKEIKGBZYAFAZCDHRAKHOMSQIZQWQVXXCEUBLTBYJQYQVHM");
    msg.visibility.assign("FNEDSBTGOOUKSSSODHHCIMWKYXVNEONRKARQPTIDPFZLEITGBEPZIVB");
    msg.scope.assign("EMVYNZRKAZRTXQGONITBLNRASTOQJLZHCFINSQZHVMPWMEKSKDRHPQAFYBFIJWBTILBBFVHSMVQTHXEXMCJGDFDIWWLJCOUK");

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
    msg.setTimeStamp(0.14421792654483567);
    msg.setSource(29918U);
    msg.setSourceEntity(36U);
    msg.setDestination(11717U);
    msg.setDestinationEntity(141U);
    msg.name.assign("CMWIBVDCUJYPJRLDIIDRFHZQPWZAGQJWXVVFCFWTZKTEDRXUIBFNSOUODQSNQORMXATPYNWOGXVSNLWZLRHEYMSUTHQDSKPTATUMZBOALXDGPLIPUKYITRNG");
    msg.visibility.assign("TIKITGUANUTUMKMVWSBKLODAWWZZHRJAGYGEEALSBFFRSUEGULQJQDEPYWPVHCNJVTDPHGDBNXDWKSXMQCXGVMJSMUXKIBIYPNCZ");
    msg.scope.assign("KPLCZVDGTONWQHKATSGUKQQDBVRGAFDBWNLNQHRXJEREXIOIEIAMYDTUOZLQXA");

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
    msg.setTimeStamp(0.4581245507135816);
    msg.setSource(32714U);
    msg.setSourceEntity(155U);
    msg.setDestination(42090U);
    msg.setDestinationEntity(99U);
    msg.name.assign("LYRVOKDKSXNJNUZAAGSLRXXYJZNJBEVRPYFIZSCSTWVBDMFXJNOUUGXLTQMBJDCCTGMYVSJDDFMPUZYYASPQUDGOLENYGIGARFKIEHTABRKOD");

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
    msg.setTimeStamp(0.7234111267338728);
    msg.setSource(45662U);
    msg.setSourceEntity(32U);
    msg.setDestination(6823U);
    msg.setDestinationEntity(9U);
    msg.name.assign("CXGVAUWJPQUXCFPINSFUZFLCOJTOMAMARGQLYJRTIBYWEEYPYQDOWHCZQJDGVBHBSREHZDXNZNWEHUINTOBJUXPYSQNVPJLKBGWYUHJXINMSQOAAVJMWVWRMUWBYHTKMZVCAAGZSDNKBTDFTKIRLHMHLXMPGTKEBPQPSPKXUCINBQGFZIGAHOJYOSRBGCNOEELATFLDNROPEDASKDILCFLDTEDFUGMRTIKKWZXQYWLCZOSFHSVZRQVVXXICJ");

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
    msg.setTimeStamp(0.6766789402513705);
    msg.setSource(44491U);
    msg.setSourceEntity(49U);
    msg.setDestination(3091U);
    msg.setDestinationEntity(45U);
    msg.name.assign("EXGIIHJUBQSMICNNXWFCBRBDCIFDAUIOZASVOKBARVAPMQRJWABUQOLZUWJRHLUOQISCDPDWRBFZLQTARUVGETYKKCEFMHDHSDNPIWQFYXCPEESZESOXEQKYMKXN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JXXJUFBYIFDT");
    tmp_msg_0.value.assign("EHKUQJPEDKPLTUKPLVZBAGIKMVLPCSJCTONPGAICXXXEMMNMWSARGWFSTRTHTIRPNZGOOYSAZPUCRNVCVBLKRYWWFJFGHDBDDYHIEBHKIKFCUGDSGEJXULYBTWV");
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
    msg.setTimeStamp(0.9411291073498544);
    msg.setSource(39287U);
    msg.setSourceEntity(151U);
    msg.setDestination(38963U);
    msg.setDestinationEntity(37U);
    msg.name.assign("SSBCXWQZKFKQABYWPRJXFZRZKZFWCSDZBHPYVXUVSROANZIHTBKDFMOHFVBMZFELGSLAPHDTYXITERHAWEADDOJAXLJBQIKTZZRQIHMEYNGIIICDXNOMWOBGPCI");

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
    msg.setTimeStamp(0.24033363478849223);
    msg.setSource(26201U);
    msg.setSourceEntity(120U);
    msg.setDestination(2995U);
    msg.setDestinationEntity(107U);
    msg.name.assign("VXMTCLHWADRGMOSPSEVLZMZTNHUTCJJFHLFIMXDYORVIZABATKARKFVZDQZPBRYCSEECKQGHOYFVANULBAVJQPQDGWBRNRLNNCGUJDTMFIRUMXSPCBUSHRLLWQXXLZTAPEZPWJIGFUKLXOYEGPHOIXLBINGSCEEYXMWFVBMDP");

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
    msg.setTimeStamp(0.4945203011985403);
    msg.setSource(12432U);
    msg.setSourceEntity(178U);
    msg.setDestination(32539U);
    msg.setDestinationEntity(179U);
    msg.name.assign("UXNRJRTJYQRBSBJXIIVVZAZEJHDDLKFYGCVNFJSULZZYUXKNSNDUPACLPYXOYIJKQRTVDWWWMBGGXOTBTPNBWFUCIWUCJEKCVNIGNCPLHGSFDXSACUVVWSMQBRVETUHZXDKBMZLOPGWCHLGRAMKAEDOWYMHTGPEKTLMWZRPYJYBSJIQDAOJQAHZZRKBTCMWTPQMFOAEVIQNQIIOLOKEFDFYEHQSSNMDBVCMLXFRIPAZQAUOSUOGERHXH");

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
    msg.setTimeStamp(0.33677313304421896);
    msg.setSource(56885U);
    msg.setSourceEntity(243U);
    msg.setDestination(57386U);
    msg.setDestinationEntity(66U);
    msg.timeout = 1897331992U;

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
    msg.setTimeStamp(0.34291494925176624);
    msg.setSource(25384U);
    msg.setSourceEntity(113U);
    msg.setDestination(45424U);
    msg.setDestinationEntity(160U);
    msg.timeout = 1160416364U;

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
    msg.setTimeStamp(0.47210734889199335);
    msg.setSource(18354U);
    msg.setSourceEntity(112U);
    msg.setDestination(55108U);
    msg.setDestinationEntity(109U);
    msg.timeout = 2237519006U;

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
    msg.setTimeStamp(0.7743288515847248);
    msg.setSource(22531U);
    msg.setSourceEntity(63U);
    msg.setDestination(18784U);
    msg.setDestinationEntity(65U);
    msg.sessid = 3573243792U;

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
    msg.setTimeStamp(0.09458941655999376);
    msg.setSource(55747U);
    msg.setSourceEntity(230U);
    msg.setDestination(59040U);
    msg.setDestinationEntity(179U);
    msg.sessid = 294686411U;

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
    msg.setTimeStamp(0.8011059364603537);
    msg.setSource(40582U);
    msg.setSourceEntity(212U);
    msg.setDestination(42424U);
    msg.setDestinationEntity(136U);
    msg.sessid = 1426954875U;

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
    msg.setTimeStamp(0.29254551820476093);
    msg.setSource(64081U);
    msg.setSourceEntity(109U);
    msg.setDestination(64235U);
    msg.setDestinationEntity(234U);
    msg.sessid = 1807458315U;
    msg.messages.assign("EASTVUWLCCJNDVNBIYWMCIJBFMUXEOYKAUAWQOYRRYZFSICAELFWDJDVBUXUMEPYGNXPSHQOABFS");

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
    msg.setTimeStamp(0.3983253316485491);
    msg.setSource(31976U);
    msg.setSourceEntity(147U);
    msg.setDestination(24734U);
    msg.setDestinationEntity(209U);
    msg.sessid = 3973260483U;
    msg.messages.assign("TOOMRXSBWZVFGRQYHVGSBHEKTRJEAKGQPKYXWEWTMDIMSTCUYSXANIYTNKIMSODWVRYGHPEZBQZKCPWOPCBZGMUFAFBLIJUYDNQYVQLRCNNUXEASSQSFRLSCHEBDPUFOHHLAELAMZMZXLFPGJDENFKUFTCTLIVQFUGUOBEWJUOXNXLIHLQNUCYGJTXHKJDOONZTJNRWVXRKJXIIAYFVMJ");

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
    msg.setTimeStamp(0.12697581571724192);
    msg.setSource(52712U);
    msg.setSourceEntity(77U);
    msg.setDestination(39049U);
    msg.setDestinationEntity(184U);
    msg.sessid = 3140077995U;
    msg.messages.assign("YFNLLGDLZWTZJWFGIAITBLGIGDBYLDUQKCBHQUNPKCJGVIUOZPWBSVYGUWWKVFQQLURVASMODBRYGCOJYQJYEKAUDSNQTCNFHFAPXOSHLVFAQDQOTPUCCVZGHNMJTEMBRIRTXYTRHRBPPKVLGXZEFMCXKVLOWMOCRXDZPJEPHIHMWN");

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
    msg.setTimeStamp(0.3749549937157438);
    msg.setSource(9334U);
    msg.setSourceEntity(192U);
    msg.setDestination(47536U);
    msg.setDestinationEntity(183U);
    msg.sessid = 211912282U;

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
    msg.setTimeStamp(0.5495900383205579);
    msg.setSource(52561U);
    msg.setSourceEntity(147U);
    msg.setDestination(51658U);
    msg.setDestinationEntity(49U);
    msg.sessid = 1790560335U;

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
    msg.setTimeStamp(0.9856957348114491);
    msg.setSource(60111U);
    msg.setSourceEntity(40U);
    msg.setDestination(19420U);
    msg.setDestinationEntity(200U);
    msg.sessid = 2172913237U;

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
    msg.setTimeStamp(0.7024583436482936);
    msg.setSource(3175U);
    msg.setSourceEntity(163U);
    msg.setDestination(36886U);
    msg.setDestinationEntity(215U);
    msg.sessid = 2336985570U;
    msg.status = 104U;

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
    msg.setTimeStamp(0.7296008227930013);
    msg.setSource(45441U);
    msg.setSourceEntity(243U);
    msg.setDestination(16465U);
    msg.setDestinationEntity(236U);
    msg.sessid = 113296807U;
    msg.status = 17U;

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
    msg.setTimeStamp(0.12976737674880245);
    msg.setSource(41329U);
    msg.setSourceEntity(85U);
    msg.setDestination(42458U);
    msg.setDestinationEntity(130U);
    msg.sessid = 1018591015U;
    msg.status = 142U;

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
    msg.setTimeStamp(0.3822792492439967);
    msg.setSource(25194U);
    msg.setSourceEntity(9U);
    msg.setDestination(46122U);
    msg.setDestinationEntity(230U);
    msg.name.assign("PLHPMBLCVBCGWFUAFVQEPBGMIUYSNIBNJFZYEAYKQTMXOKMFZDQOJWIWXUMIUDOCASGJNLCDMOZYNMRWXPNMHAUEXQXHRJVEYWHTGMGPRALTCVPKOAOXAXLLZRBAYCXHSZSSIUJSDGDRFZPKCSFNZDFJFBZJTQCOSHCUVEWKVRQWANRLDWHXRFPRIJHKCPOGBFKO");

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
    msg.setTimeStamp(0.8347835257781601);
    msg.setSource(31018U);
    msg.setSourceEntity(250U);
    msg.setDestination(24408U);
    msg.setDestinationEntity(235U);
    msg.name.assign("CWSMAATLCNYIKYGARMHTVIDFGNZBRCRZTYOPKLHGOQMLIEOOMNFNPSSQPJSLZZBCXQTFIWRDPDEVMLEKUYTUUYIDJVSQ");

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
    msg.setTimeStamp(0.5895571876549999);
    msg.setSource(41319U);
    msg.setSourceEntity(221U);
    msg.setDestination(62330U);
    msg.setDestinationEntity(180U);
    msg.name.assign("JAORQTAHSNQJEWPKSZGTGIWKCWIAUGPMVWUSGMSCVUFOJYMFWTYPAVMGFZMXFKIOBFRLLMSSBEUTULHICIIQNRDWHVUBNNYQNAYFEFVRBXLWWTAJYPEQDEDETDHZZZBNLTVJDRBMUXUCRAFQZHDKPYBICAPGYOMOMKLVXKNUPXDHKOCJWPDRP");

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
    msg.setTimeStamp(0.3031149145960068);
    msg.setSource(35668U);
    msg.setSourceEntity(2U);
    msg.setDestination(16893U);
    msg.setDestinationEntity(208U);
    msg.name.assign("BWFQQCBGUFFFMKLUAQDMUFVZICVZGXHBZANCRXRCWHTUZQDNXEPJEYETDGHAJAYUHOILENEXOKRPCZSYTKKKKNTMPCKMCWNVXBWFYZLUMODTBYRIIRIBVJEIVMZRBSPJFFJLOTTAHYSSMAOLJEHUWBYVMGAIJRPTOIMANNAYKSNMBSSKZOGVLQSESYPNOZCEQFVQDJRGJ");

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
    msg.setTimeStamp(0.22388052827742821);
    msg.setSource(19079U);
    msg.setSourceEntity(18U);
    msg.setDestination(8934U);
    msg.setDestinationEntity(113U);
    msg.name.assign("PDVEOQNCXQYELPZCKGTXZMHMIAJUFFYKCREYOGZTJZQYVXAAOBPQLA");

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
    msg.setTimeStamp(0.79608813285806);
    msg.setSource(56965U);
    msg.setSourceEntity(192U);
    msg.setDestination(21063U);
    msg.setDestinationEntity(196U);
    msg.name.assign("VAMMRRZJMKPYMYZCDPMTRFEQUWXFLPYVKLWLOWYVPVQCLNQJIHNPRPQXXDSTOLJVCUWPTYBFEAKGHFRSESCHDKINSHZPJCATAZZIDVHGEJNEANDTVMBJTMAUKQYRBAZEGOYZGUU");

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
    msg.setTimeStamp(0.37354141700478904);
    msg.setSource(25813U);
    msg.setSourceEntity(112U);
    msg.setDestination(46118U);
    msg.setDestinationEntity(116U);
    msg.type = 250U;
    msg.error.assign("BIAELAUZXWIWGVKMQWRYEIBKCZ");

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
    msg.setTimeStamp(0.78576172345121);
    msg.setSource(43471U);
    msg.setSourceEntity(0U);
    msg.setDestination(29856U);
    msg.setDestinationEntity(142U);
    msg.type = 94U;
    msg.error.assign("BPSFSDBITCFCKEQWNXMGYEVYALGCEIVTXJYVMUKGBEJOVDT");

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
    msg.setTimeStamp(0.79317405352189);
    msg.setSource(10610U);
    msg.setSourceEntity(243U);
    msg.setDestination(45537U);
    msg.setDestinationEntity(23U);
    msg.type = 48U;
    msg.error.assign("JDLAQTXOWBTVZYGBGIEHULZKXISIJEBNUACKSHHOPQPOFUQYFLOGRHCEWZSYIVSNPZALMUDJNADJYSUUQQKIQKCWJYFOBUODVXFEMRNWXUEDKLQCGBAPIWRDRSJGYCZCSQBNVEMOSKEZMFMGDNFKIBZIGLULNSDNWTTZVMRRBSXVKCBOHEHAIPKOMXDJJPMJQPDTTHRHNN");

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
    msg.setTimeStamp(0.28500153839863773);
    msg.setSource(22405U);
    msg.setSourceEntity(154U);
    msg.setDestination(49919U);
    msg.setDestinationEntity(127U);
    msg.seq = 4899U;
    msg.sys_dst.assign("FKXLNWBJLIMSGZNWECZJAVNTFRKLWCXPVCOEPSBBENLOOPOBIUZPMTUXTJWFUIIDCQFVDLHTESXDQEAIJJTLEDUKNTHVEHXMMGQWKVSZFFOQXDBONMJNTDYVZJQQHCFGHVDLOXOZRYYTEHBMRBWRRIADUPZDWFKYYAIFRSKTA");
    msg.flags = 74U;
    const char tmp_msg_0[] = {120, -52, 59, 48, -47, 17, 32, -74, -89, -72, -98, 35, -53, 2, -68, 60, 103, 29, 116, -107, -92, -51, 112, -93, 75, 18, -29, 12, -105, 48, 36, -75, -58, -75, 120, 75, -8, -108, 116, -38, 24, 6, -5, 92, -54, 92, -13, 81, -53, 10, 101, -75, 22, -32, -18, -4, -109, 74, 97, 26, -8, 91, 59, -65, 31, -108, -29, -72, -128, -55, 0, -86, 26, -81, 125, -25, -90, -30, -72, -78, -50, -55, 56, 12, 58, 43, 74, 106, 105, 79, 81, -86, 12, -24, 3, -15, 78, 113, -112, 50, -59, -113, -47, -44, -19, -33, -125, -66, -62, 63, 104, 72, 81, -82, -15, -118, 113, 49, 116, 57, 124, -105, 79, -52, -123, 23, 64, 38, 72, 10, -50, -128, 110, 60, -72, 110, -45, 14, -51, -67, 46, -111, 67, -3, 45, 48, -11, 56, 2, -22, -42, 2, 126, -93, 9, -99, -9, 28, 119, 124, 82, -98, -121, 44, -51, 31, -49, 47, -79, 12, -74, -50, 30, -39, 47, -118, -125, -30, 73, 119, 30, 121, -81, 15, 36, 99, 26, 26, -11, -90, -44, -91, -51, -105, -68, -38, -21, 21, 116, -56, -83, 119, 4, -24, 27, -87, 53, 122, -52, 114, -105, 104, -76, -44, -96, 84, -29, 97, -41, 96, -67, 46, -30, -27, 36, -17, -60, -8, -81, 57, -86, 39, -105, 63, 45, -61, -12, 9, 48, 111};
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
    msg.setTimeStamp(0.4030516051163656);
    msg.setSource(65047U);
    msg.setSourceEntity(44U);
    msg.setDestination(21572U);
    msg.setDestinationEntity(160U);
    msg.seq = 43364U;
    msg.sys_dst.assign("UIVIIEQVCEMKGHQKTBNMFBQPFDMZJLEJCVVADNDGIUIXEGZCYPKPXNRYSYHHOSRSKFMSNNEXTQOLWJVGTWTSFNGRGRPKJZWIJUZLC");
    msg.flags = 67U;
    const char tmp_msg_0[] = {-63, -95, -102, 70, -7, -63, 70, 21, -29, -52, -39, -121, 123, -32, 10, 40, -64, 52, -44, -122, -96, -61, 73, -118, -80, 0, 2, 118, 79, 92, 60, 28, 17, -67, 79, 119, 85, 16, -7, -58, 110, -80, -8, -123, -22, 52, -44, -92, 27, 11, 36, 17, -89, -126, 49, 6};
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
    msg.setTimeStamp(0.00849845714392683);
    msg.setSource(24912U);
    msg.setSourceEntity(94U);
    msg.setDestination(2642U);
    msg.setDestinationEntity(140U);
    msg.seq = 39455U;
    msg.sys_dst.assign("FKVEVLVQUPDWLAGFOEHQDFTNXHHFGBCKMLHEYPYYBUZVHQPUKPDZBWBVOZNSUBWJMKMXGUTKBXRJTZSYJYNDMOXTUEHWLQOJZYXYGNTQDHGIOPICHICVURFBFOROHSAAH");
    msg.flags = 9U;
    const char tmp_msg_0[] = {-1, -26, 70, 102, 108, -57, -62, 3, 56, 30, 1, 10, 107, -32, -63, -70, 55, -7, 78, 6, 6, -1, 63, 70, 72, -117, 24, -34, 51, -10, -40, 44, -8, -76, 41, 70, -90, 66, -28, -27, 50, -25, 42, 78, 46, 2, 110, -89, 45, -105, -64, 30, -118, 4, -127, 38, 30, 72, 52, 108, -123, -64, 50, 37, -30, 32, -54, 93, -73, -67, -73, -82, -114, -93, -36, -1, -66, 1, -80, 122, -94, 16, -36, -34, 61, -60, 6, 10, -101, 116, 64, -71, 110, 110, 23, -79, 36, 43, -93, 42, 80, -75, 62, 34, -69, 97, 106, -38, -100, 101};
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
    msg.setTimeStamp(0.3652024606818398);
    msg.setSource(10715U);
    msg.setSourceEntity(241U);
    msg.setDestination(51288U);
    msg.setDestinationEntity(174U);
    msg.sys_src.assign("AODFXOTBYNFVKHSNSWZDJMHLMCLQXMEUITKQGRFSYXNPGCLLQPUAPIPTYSNPSKNUAYEFIHGWYOWDTYMELFGBZVHPVBCOZSERHJBGQZUCCNBGGBATWIPFRZNSURGLIOEKVXCDJXQDWNVP");
    msg.sys_dst.assign("AAXVIYOKTUYABEUWLQGOEMQFVPBURPVSMROHCNRZOWBTUTAXSIOZODQMETSCGBFBFQZRKZLDHCLNYKQEDRKHTCJXMXXGJIZYVOHASXFDDAMHIESBJVCXVEQNBIJVQPBKMFT");
    msg.flags = 51U;
    const char tmp_msg_0[] = {55, -66, -25, 66, 26, -92, 88, -70, 107, -115, 63, -19, -13, -95, -13, -50, 65, -95, 75, 49, 37, 110, 124, -106, 16, 26, -79, -32, 118, 39, 121, 63, 2, -122, 74, 18, 97, -12, 116, -125, -41, 113, -125, -38, -24, 118, 61, -5, 121, 98, -128, 105, 17, -99, 60, 87, -52, -107, 59, 43, 74, 27, 84, 87, -51, 62, 20, 121, -37, -104, -80, -18, -8, 0, -109, -81, -126, -58, 114, -112, -73, -47, -65, 125, -103, 108, 113, -16, 21, -60, 118, -127, -29, 80, -37, -62, 54, 8, 57, -33, -116, 70, 25, -79, -120, -123, -66, -58, -88, 41, -10, 120, -42, 39, -121, -79, -1, -23, -2, -80, -36, 46, 28, 41};
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
    msg.setTimeStamp(0.6627247071879908);
    msg.setSource(14920U);
    msg.setSourceEntity(191U);
    msg.setDestination(7305U);
    msg.setDestinationEntity(20U);
    msg.sys_src.assign("WQRGSGHIHALDRKXYZSKODJCCESHNMBHBIXRYYTVJOMGDTCOFSMHFUODMPXKWTBXYETNVNKNHLDIXSYJSNOULHQGZTNAKVBEYQWWZISQAPAPEXXDSJPSJKWDUXFFEVMMLIMABPOGACPDOPQVUYNZRKOIFA");
    msg.sys_dst.assign("HWSDLTIWSQRTHDNJNOFQWHXRQPBFPTHWUKCYVQJANSTCBALWVYPMOOBJRGJLFCPHREYMPRIMGFKXAOIWADOTJIYXNZJJEMMQWXZBOVFWOEXKCLGYYDNCDVWSMQUSBMLCREFOPTIGIRGAKNSBQARINAZOEXXKVIZXHGYGWZN");
    msg.flags = 8U;
    const char tmp_msg_0[] = {-119, -12, -104, -59, 5, -39, -19, -101, -83, -51, 9, 62, -22, 101, 82, 112, 119, -80, -24, 63, 62, -15, 84, -82, -93, -119, -56, 62, -61, 63, 12, 113, 82, 40, 69, 64, 99, 3, -10, 119, -3, 91, 62, -94, 0, -26, -111, -21, -92, 51, -61, 58, -127, -68, 1, 82, 77, 122, -46, -114, -44, 89, -61, -104, 35, 110, 8};
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
    msg.setTimeStamp(0.31488104423544305);
    msg.setSource(34055U);
    msg.setSourceEntity(234U);
    msg.setDestination(49195U);
    msg.setDestinationEntity(65U);
    msg.sys_src.assign("YLKBAXYRFHGRLVBGNZADHKYXPUGDABMNOUCCJEJEBCKEDXAIERLFZCQJXJOSMNSVGMDLUQZFPGVAQLKSMSWQJXWLUR");
    msg.sys_dst.assign("GAZCLMRWMXEKEVTKIHBBLQAFVFGWJNPZFXXDYUNRDWNCNGCHZJPHTQWHFBPNQKCDVKIMXJINSCGRSJSOWQYLTGOMILEDUDXQBQKNALSJYJLZEDVMMCUAQXJGRSGIFPYOLUBETKSZOUYBAIGRIMOIAPODBSKFGXCYOUJDAQDUYWPBHVNZZUTPXSHFTVVSWRPTYZOZHQCHFNRLYROAMAVREEWXHPBEPZUHCDUWJMLTMWJSVVIN");
    msg.flags = 5U;
    const char tmp_msg_0[] = {-82, -92, -27, 44, -62, -22, 80, 5, 107, -116, -24, -40, -106, -57, 26, -80, -125, -4, -64, 53, -64, 14, -99, -40, -71, 7, 41, -46, -38, 113, -88, -114, 60, 44, 110, 9, -91, 99, -102, -124, 97, -128, -21, -77, -115, -97, -48, -81, 1, -71, -61, -42, 39, -82, 109, -93, -43, 59, -89, -32, 1, 97, 82, 68, -2, 102, -113, 45, 91, -73, 110, 101, -92, 75, 62, 62, 85, -122, 80, -115, 52, -29, 99, 26, -11, -72, -78, -44, -80, 64, -79, -115, 68, 86, 67, 28, -51, 51, 79, 101, -120, 111, 96};
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
    msg.setTimeStamp(0.9356500715740473);
    msg.setSource(7451U);
    msg.setSourceEntity(114U);
    msg.setDestination(33810U);
    msg.setDestinationEntity(41U);
    msg.seq = 53804U;
    msg.value = 22U;
    msg.error.assign("USNQBZWOWAZLFRYOWKRDLBNWPEFTLZHYFCXJYTLOCEQXAEVJNAJUQEIJZHSGBGRENB");

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
    msg.setTimeStamp(0.8015518016435498);
    msg.setSource(19502U);
    msg.setSourceEntity(30U);
    msg.setDestination(10284U);
    msg.setDestinationEntity(160U);
    msg.seq = 52844U;
    msg.value = 216U;
    msg.error.assign("CSCUCOJBCSWOGXKRCKGGMYUORPLFLJJHNKDWJNUFBBRQRWKZWZCPBEUANZSJSMTZWLDMGHONZFX");

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
    msg.setTimeStamp(0.9111134939473007);
    msg.setSource(64498U);
    msg.setSourceEntity(47U);
    msg.setDestination(12175U);
    msg.setDestinationEntity(136U);
    msg.seq = 47262U;
    msg.value = 80U;
    msg.error.assign("EGHGYEDPRAUWKRYYEOYAYMCAFOEQPGRSQMRLGECPZEUWCDIZUYGUHTVLXVZIBRNVTWDKNVLIIFRHKISZWIGBFPEDSXFWKUVQXUIMJNSSXZAASYXZSJUTZMRZOWQHVDDLOCLFJGNPJDAPBCULOFKIWBTVNMUXTVTFCNBAPKEQBNCHHCKJTZIDK");

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
    msg.setTimeStamp(0.13292250853724863);
    msg.setSource(64138U);
    msg.setSourceEntity(17U);
    msg.setDestination(55467U);
    msg.setDestinationEntity(85U);
    msg.seq = 51088U;
    msg.sys.assign("DJURUPODLKEYZSCAMXDAJPKEMNIHHLKCFHBHVBJQZGBZJNSHEVWYPYFOWAOUUONNTZRSDCBSWDWDVSGMFKGGPNFXAIZRFAQGWPJPRUXAVKWRIFTVWPIHTZBPKZULZEWZAGIUBNJFHESKPQUCQVHLOGTRNFXCSMQQYOKVEWCTXECQYEMQMLGVXYJOQLTWNDTFMUJMVXBSIEX");
    msg.value = 0.6237693616595011;

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
    msg.setTimeStamp(0.6950758844867386);
    msg.setSource(59118U);
    msg.setSourceEntity(224U);
    msg.setDestination(14103U);
    msg.setDestinationEntity(56U);
    msg.seq = 46641U;
    msg.sys.assign("YEDDJFPUJNQBMXKHPWZAKPODJDRSQUIQMLMBWINLAKIEYGCOORFIHQRAVWEZERPCJWPGYAYPYGPUVRLTYLWJCTCETBXLBIDKVJMNUHICSVMKZIHOKWDBHIZRSOCVCOSGTWGCDNENLGOEGYNHZAO");
    msg.value = 0.3210289769287413;

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
    msg.setTimeStamp(0.931181635035631);
    msg.setSource(29665U);
    msg.setSourceEntity(215U);
    msg.setDestination(44232U);
    msg.setDestinationEntity(59U);
    msg.seq = 9507U;
    msg.sys.assign("XGMDRNOZNTACUFTZRTHHIIGPKRDYUVKQESACHJUYCMJDBDPDHRJUOECSWBOBXAESLIGVBMGPWIHQLRIJLAQFLHLQGHPMYQMJNCIGQKIWEWWYFPQUWZJVZSJTYNOHEBMVEXTKYZVKFPTRADTSXUMOUWCUESFYTDVZBKGVMNACHLKD");
    msg.value = 0.23112708103561508;

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
    msg.setTimeStamp(0.5527567123867767);
    msg.setSource(45799U);
    msg.setSourceEntity(11U);
    msg.setDestination(5826U);
    msg.setDestinationEntity(176U);
    msg.action = 41U;
    msg.longain = 0.9196529349107457;
    msg.latgain = 0.28392354267038356;
    msg.bondthick = 2717867018U;
    msg.leadgain = 0.566254993498958;
    msg.deconflgain = 0.38848436746214243;

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
    msg.setTimeStamp(0.8669585582581145);
    msg.setSource(22873U);
    msg.setSourceEntity(234U);
    msg.setDestination(25231U);
    msg.setDestinationEntity(235U);
    msg.action = 69U;
    msg.longain = 0.9972740243930737;
    msg.latgain = 0.11144460055233796;
    msg.bondthick = 3960070728U;
    msg.leadgain = 0.36829404315786296;
    msg.deconflgain = 0.09666392400471391;

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
    msg.setTimeStamp(0.4724691446857827);
    msg.setSource(46085U);
    msg.setSourceEntity(28U);
    msg.setDestination(9987U);
    msg.setDestinationEntity(166U);
    msg.action = 142U;
    msg.longain = 0.6965470487698399;
    msg.latgain = 0.672695372984803;
    msg.bondthick = 1607144497U;
    msg.leadgain = 0.064434070941361;
    msg.deconflgain = 0.09332191952190616;

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
    msg.setTimeStamp(0.6851805558388161);
    msg.setSource(55228U);
    msg.setSourceEntity(57U);
    msg.setDestination(1889U);
    msg.setDestinationEntity(92U);
    msg.err_mean = 0.5291690354081549;
    msg.dist_min_abs = 0.2081910263196124;
    msg.dist_min_mean = 0.8117964244261054;

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
    msg.setTimeStamp(0.31501652127921786);
    msg.setSource(33534U);
    msg.setSourceEntity(157U);
    msg.setDestination(58106U);
    msg.setDestinationEntity(102U);
    msg.err_mean = 0.9834984698048198;
    msg.dist_min_abs = 0.037813331351548074;
    msg.dist_min_mean = 0.3552969867471476;

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
    msg.setTimeStamp(0.3781724149970327);
    msg.setSource(42320U);
    msg.setSourceEntity(155U);
    msg.setDestination(40045U);
    msg.setDestinationEntity(144U);
    msg.err_mean = 0.02007531452917921;
    msg.dist_min_abs = 0.9196726077664388;
    msg.dist_min_mean = 0.8396430368859359;

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
    msg.setTimeStamp(0.32109232172139124);
    msg.setSource(40961U);
    msg.setSourceEntity(156U);
    msg.setDestination(65352U);
    msg.setDestinationEntity(61U);
    msg.action = 23U;
    msg.lon_gain = 0.34843184626220214;
    msg.lat_gain = 0.6186733882237749;
    msg.bond_thick = 0.6429728827662686;
    msg.lead_gain = 0.7512030201190174;
    msg.deconfl_gain = 0.6177454500969521;
    msg.accel_switch_gain = 0.21761501422331408;
    msg.safe_dist = 0.423575403064523;
    msg.deconflict_offset = 0.09613562485515803;
    msg.accel_safe_margin = 0.7948688266534202;
    msg.accel_lim_x = 0.8069450234331339;

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
    msg.setTimeStamp(0.9892816532642353);
    msg.setSource(3825U);
    msg.setSourceEntity(29U);
    msg.setDestination(8531U);
    msg.setDestinationEntity(235U);
    msg.action = 128U;
    msg.lon_gain = 0.0403822752903491;
    msg.lat_gain = 0.9201970443780277;
    msg.bond_thick = 0.6907317665170991;
    msg.lead_gain = 0.6493360655656724;
    msg.deconfl_gain = 0.6322497718232201;
    msg.accel_switch_gain = 0.048244125760547374;
    msg.safe_dist = 0.8201413098805844;
    msg.deconflict_offset = 0.34214906424856395;
    msg.accel_safe_margin = 0.5486190912805806;
    msg.accel_lim_x = 0.8504761163087338;

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
    msg.setTimeStamp(0.7035351050319597);
    msg.setSource(14672U);
    msg.setSourceEntity(240U);
    msg.setDestination(17565U);
    msg.setDestinationEntity(54U);
    msg.action = 36U;
    msg.lon_gain = 0.5260980352320576;
    msg.lat_gain = 0.8887790708286997;
    msg.bond_thick = 0.6767625830448346;
    msg.lead_gain = 0.6877908841078247;
    msg.deconfl_gain = 0.16471190430573068;
    msg.accel_switch_gain = 0.03923081114664284;
    msg.safe_dist = 0.8139636524180087;
    msg.deconflict_offset = 0.8764409996357775;
    msg.accel_safe_margin = 0.2909758074753288;
    msg.accel_lim_x = 0.3087145838378036;

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
    msg.setTimeStamp(0.9808222854459494);
    msg.setSource(35912U);
    msg.setSourceEntity(254U);
    msg.setDestination(8778U);
    msg.setDestinationEntity(14U);
    msg.type = 47U;
    msg.op = 127U;
    msg.err_mean = 0.600986700505346;
    msg.dist_min_abs = 0.07927785707586887;
    msg.dist_min_mean = 0.8545647269072226;
    msg.roll_rate_mean = 0.14498867818890493;
    msg.time = 0.7227402255055748;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 64U;
    tmp_msg_0.lon_gain = 0.1892771250659343;
    tmp_msg_0.lat_gain = 0.597850783338482;
    tmp_msg_0.bond_thick = 0.012628052334219375;
    tmp_msg_0.lead_gain = 0.3317370227797949;
    tmp_msg_0.deconfl_gain = 0.6746769952534635;
    tmp_msg_0.accel_switch_gain = 0.8148657127848233;
    tmp_msg_0.safe_dist = 0.46680905402116135;
    tmp_msg_0.deconflict_offset = 0.5274747531145594;
    tmp_msg_0.accel_safe_margin = 0.9481262971453882;
    tmp_msg_0.accel_lim_x = 0.5802991328686864;
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
    msg.setTimeStamp(0.153196410262329);
    msg.setSource(10116U);
    msg.setSourceEntity(195U);
    msg.setDestination(23454U);
    msg.setDestinationEntity(102U);
    msg.type = 37U;
    msg.op = 177U;
    msg.err_mean = 0.9720386992540441;
    msg.dist_min_abs = 0.7385808446984639;
    msg.dist_min_mean = 0.6560145190065179;
    msg.roll_rate_mean = 0.8086704963050249;
    msg.time = 0.13028550150493234;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 189U;
    tmp_msg_0.lon_gain = 0.0936646343916896;
    tmp_msg_0.lat_gain = 0.06382773742426673;
    tmp_msg_0.bond_thick = 0.04058007484660264;
    tmp_msg_0.lead_gain = 0.2899498114727148;
    tmp_msg_0.deconfl_gain = 0.3225027834606963;
    tmp_msg_0.accel_switch_gain = 0.310214666169884;
    tmp_msg_0.safe_dist = 0.5454229746824938;
    tmp_msg_0.deconflict_offset = 0.12420575223893382;
    tmp_msg_0.accel_safe_margin = 0.6368863323442716;
    tmp_msg_0.accel_lim_x = 0.7094983688972235;
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
    msg.setTimeStamp(0.3392201999622134);
    msg.setSource(14121U);
    msg.setSourceEntity(111U);
    msg.setDestination(51966U);
    msg.setDestinationEntity(214U);
    msg.type = 43U;
    msg.op = 121U;
    msg.err_mean = 0.6292188416561317;
    msg.dist_min_abs = 0.5486137701095923;
    msg.dist_min_mean = 0.24862340918792714;
    msg.roll_rate_mean = 0.8188375251240321;
    msg.time = 0.5489829483086829;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 158U;
    tmp_msg_0.lon_gain = 0.8265913697495703;
    tmp_msg_0.lat_gain = 0.9321800619072511;
    tmp_msg_0.bond_thick = 0.6507604949559808;
    tmp_msg_0.lead_gain = 0.15486657920964653;
    tmp_msg_0.deconfl_gain = 0.5328163253588146;
    tmp_msg_0.accel_switch_gain = 0.3517939443765917;
    tmp_msg_0.safe_dist = 0.3056496462829301;
    tmp_msg_0.deconflict_offset = 0.3319420002356809;
    tmp_msg_0.accel_safe_margin = 0.897877677461959;
    tmp_msg_0.accel_lim_x = 0.13911317323313543;
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
    msg.setTimeStamp(0.9409074937171081);
    msg.setSource(14677U);
    msg.setSourceEntity(201U);
    msg.setDestination(48577U);
    msg.setDestinationEntity(24U);
    msg.uid = 57U;
    msg.frag_number = 201U;
    msg.num_frags = 99U;
    const char tmp_msg_0[] = {-3, 33, -114, -71, 20, -46, -27, 70, 30, -88, -32, -25, -12, 97, -27, 81, -109, 75, 3, 8, 105, -113, -24, -57, 63, 25, 18, -61, 30, -98, -45, 112, -37, 12, -9, -28, -34, -113, -28, 72, -51, -120, -20, 103, -53, 28, -21, 125, -93, -77, -119, -94, -3, 93, -40, -107, -78, -126, 114, 125, 92, -48, 77, -9, 35, 36, 51, 69, -91};
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
    msg.setTimeStamp(0.2807137059434234);
    msg.setSource(50835U);
    msg.setSourceEntity(100U);
    msg.setDestination(33414U);
    msg.setDestinationEntity(41U);
    msg.uid = 90U;
    msg.frag_number = 54U;
    msg.num_frags = 199U;
    const char tmp_msg_0[] = {2, -47, 117, 59, 67, 14, 117, 100, -25, -47, -116, 6, 82, -72, 41, -7, -32, 42, -84, -79, 95, -63, 49, -106, -68, -37, 37, 21, 71, 53, 125, 22, 3, -64, -57, -94, 56, 101, -106, 33, -74, -91, -28, 113, 85, 76, 125, -1, -54, 79, -32, -3, -19, 100, 46, -43, -90, 120, 88, -70, 49, 119, 56, 116, 115, -10, -104, -10, -13, -19, 121, 22, 9, -10, -104, -23, 52, 60, 50, 18, -119, -109, 123, 0, 73, -80, 10, -110, 102, 30, -46, 59, 60, -95, 106, -106, -101, 26, -120, -61, 81, 58, 120, 82, -94, -127, -60, -29, 56, -105, 58, 106, 95, -73, -4, 39, 4, -119, -110, -53, 62, 55, 73, -107, -69, -4, -23, 31, 17, 30, -67, -79, 23, 86, -66, -18};
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
    msg.setTimeStamp(0.12348989450460846);
    msg.setSource(5303U);
    msg.setSourceEntity(102U);
    msg.setDestination(58091U);
    msg.setDestinationEntity(71U);
    msg.uid = 67U;
    msg.frag_number = 126U;
    msg.num_frags = 124U;
    const char tmp_msg_0[] = {80, -72, -36, 68, 102, 39, 86, -61, -58, -49};
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
    msg.setTimeStamp(0.3001186655819593);
    msg.setSource(15083U);
    msg.setSourceEntity(34U);
    msg.setDestination(20362U);
    msg.setDestinationEntity(216U);
    msg.content_type.assign("RHKCHGOMDEIQBUQPAISCKFMZRANTUDSBJYJJGSRPRKBJXVQV");
    const char tmp_msg_0[] = {-52, -116, -95, 42, -35, 52, 105, -110, 48, 122, -55};
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
    msg.setTimeStamp(0.8130421871323723);
    msg.setSource(38303U);
    msg.setSourceEntity(171U);
    msg.setDestination(52536U);
    msg.setDestinationEntity(86U);
    msg.content_type.assign("DXZYJQXGKHDPNUNPQBBEEFUAJNNSNDREFZYSGPCRFQXTSUCKWGWFFIVHBUAWDJICWP");
    const char tmp_msg_0[] = {-31, 1, -20, 41, 30, -49, -75, 12, 97, 48, -12, 98, -79, 72, 17, -59, -85, 89, 110, 95, -49, 114, 34, -10, -45, 1, -117, -122, -122, -101, 89, 90, -22, -92, -124, 38, 122, -75, -93, -94, 60, -27, -3, -84, -108, -36, 111, 107, 31, -9, 102, 92, 44, -20, 22, -61, -70, -64, -43, -122, -36, 28, -85, -81, -44, 67, -1, -18, 38, -96, -87, 102, -28, -67, 74, 20, -95, 102, -83, -41, 38, -61, 32, -83, -72, -119, -115, 7, -73, 63, -5, 63, -18, -17, -10, -64, -34, 82, -118, -32, 120, -107, 98, -50, 77, -63, 112, 114, 121, 84, -118, 50, -88, 79, -21, 75, 13, 50, -85, -47, 82, 72, -88, 88, -121, 80, -45, 18, 84, 85, -97, 47, -4, 83, 79, 41, -1, -67, -3, -99, -104, -18, -4, 18, 93, 103, 99, 123, 20, -124, -46, -51, 53, -126, -123, 122, -23, -90, 78, -19, -6, -43, -80, 40, -63, 36, -59, -27, 18, 14, -122, -101, -28, -59, -121, -71, -28, -98, -2, -82, -112, -94, 92, 85, 111, -76, -98, -38, -96, -23, -48, -4, 97, -125, 10, 92, -96, 77, 102, -19, 89, 79, -28, -127, 104, -73, -113, 107, 119, 11, -18, 80, 30, 117, -58, 4, -20, 19, 81, 85, -60, -26, 112, -122, -114, 0, -13, -86, -7, 18, -74, -29, -112, 121, 4, 28, -117, -80, 103, 91, -82, 63, 15};
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
    msg.setTimeStamp(0.8083884124005715);
    msg.setSource(23587U);
    msg.setSourceEntity(20U);
    msg.setDestination(47551U);
    msg.setDestinationEntity(121U);
    msg.content_type.assign("IFCVZHVOWHDQNNNTAYKOTLYRFMLZMIQSIXOLIJGUUJWDDWNKVZCYBFELWGVYFJHOXMGYMAHCISBECXIBRZJJMAPLZRORNERDSPEWCNYGHYICWLQKKMGBNJRCHFSFVEUUWAVOGPWXBFAKFLVYHOBKSKYVEAAXOTYRCZWDLPBUEXJMQSDMUNVRKUZUPS");
    const char tmp_msg_0[] = {-55, -107, -96, -74, 92, 21, 71, 14, 90, 97, -32, -62, -56, -71, -6, -122, -6, -114, 8, -114, -96, 110, -10, -56, 10, -20, -79};
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
    msg.setTimeStamp(0.6721349943768583);
    msg.setSource(23735U);
    msg.setSourceEntity(163U);
    msg.setDestination(7925U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.7247497364346397);
    msg.setSource(57992U);
    msg.setSourceEntity(73U);
    msg.setDestination(54168U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.30705590536757554);
    msg.setSource(17966U);
    msg.setSourceEntity(169U);
    msg.setDestination(55015U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.03507000857441589);
    msg.setSource(42592U);
    msg.setSourceEntity(186U);
    msg.setDestination(46103U);
    msg.setDestinationEntity(174U);
    msg.target = 29519U;
    msg.bearing = 0.6820333339805413;
    msg.elevation = 0.8719924542800911;

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
    msg.setTimeStamp(0.5228686472982129);
    msg.setSource(49742U);
    msg.setSourceEntity(110U);
    msg.setDestination(30711U);
    msg.setDestinationEntity(106U);
    msg.target = 59485U;
    msg.bearing = 0.1493760220139555;
    msg.elevation = 0.46354197502538785;

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
    msg.setTimeStamp(0.40862793137112374);
    msg.setSource(41805U);
    msg.setSourceEntity(244U);
    msg.setDestination(45253U);
    msg.setDestinationEntity(228U);
    msg.target = 1810U;
    msg.bearing = 0.44311455447372217;
    msg.elevation = 0.24010903121903604;

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
    msg.setTimeStamp(0.8813815512084807);
    msg.setSource(8794U);
    msg.setSourceEntity(55U);
    msg.setDestination(57270U);
    msg.setDestinationEntity(7U);
    msg.target = 23178U;
    msg.x = 0.48848438774812863;
    msg.y = 0.6546375704141422;
    msg.z = 0.1394591464142486;

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
    msg.setTimeStamp(0.21926327674222013);
    msg.setSource(9897U);
    msg.setSourceEntity(123U);
    msg.setDestination(30262U);
    msg.setDestinationEntity(221U);
    msg.target = 26472U;
    msg.x = 0.27636184855840606;
    msg.y = 0.19394981886095153;
    msg.z = 0.9965927760686621;

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
    msg.setTimeStamp(0.11585022581061577);
    msg.setSource(59014U);
    msg.setSourceEntity(71U);
    msg.setDestination(58825U);
    msg.setDestinationEntity(208U);
    msg.target = 45309U;
    msg.x = 0.5326705573848536;
    msg.y = 0.5861062850233513;
    msg.z = 0.653398181318192;

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
    msg.setTimeStamp(0.8840482121949815);
    msg.setSource(62207U);
    msg.setSourceEntity(44U);
    msg.setDestination(51568U);
    msg.setDestinationEntity(66U);
    msg.target = 4765U;
    msg.lat = 0.612334209476369;
    msg.lon = 0.9340185545622942;
    msg.z_units = 181U;
    msg.z = 0.8824081629920927;

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
    msg.setTimeStamp(0.6114115060557831);
    msg.setSource(29219U);
    msg.setSourceEntity(88U);
    msg.setDestination(51628U);
    msg.setDestinationEntity(136U);
    msg.target = 43096U;
    msg.lat = 0.6855613593193175;
    msg.lon = 0.49182240576911374;
    msg.z_units = 137U;
    msg.z = 0.8156888942625341;

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
    msg.setTimeStamp(0.07508631339954652);
    msg.setSource(11999U);
    msg.setSourceEntity(187U);
    msg.setDestination(37629U);
    msg.setDestinationEntity(253U);
    msg.target = 50001U;
    msg.lat = 0.5053807232975978;
    msg.lon = 0.5419194947707763;
    msg.z_units = 135U;
    msg.z = 0.1605357294860913;

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
    msg.setTimeStamp(0.3892574850954257);
    msg.setSource(30232U);
    msg.setSourceEntity(40U);
    msg.setDestination(24956U);
    msg.setDestinationEntity(130U);
    msg.locale.assign("WDOMXNKMAXUGHCLSRJOMIUNKTAAMBQCLAZBDCWEALPFFLEHWGRKWTEZYQVYWZIUSVHEWJRTZKCFDRCYMMJZVAVOTHSVLKENOKSFIIGBPQYBLPSALLOTSOLLEGDSZWBJQFMRPPODTPGHIZUJNGDITDIQXQXFFVUTTERAHZXIKPQBU");
    const char tmp_msg_0[] = {0, 5, 123, -56, 41, -115, -64, 73, 32, -55, 54};
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
    msg.setTimeStamp(0.30615150888316345);
    msg.setSource(46648U);
    msg.setSourceEntity(223U);
    msg.setDestination(17892U);
    msg.setDestinationEntity(178U);
    msg.locale.assign("FZYXHXRXQBUXKQVRPSHNDEVFEONMDZJDUWMOQIRWRWIPUZGHDPSAQOBEOVJBVXAOVQALXNUFRUAICISGTGYYLHDRRCJFYPOSZHYWDVJUCVEKGEVHCRSSNKKJJLZZPBGPSXJACIQUKHMOVOGU");
    const char tmp_msg_0[] = {91, -2, 112, 88, 19, -126, 85, -73, 43, 43, 94, 16, -93, 93, 99, -76, 65, -7, 115, -84, 51, -17, -82, 9, -22, 115, 99, 117, 98, 50, -83, -20, -39, -67, 57, -30, 32, 79, 50, 48, -46, -37, 41, -24, 106, 125, -24, 108, -15, 10, 4, 64, 33, 92, -16, -64, 79, -122, -24, -35, 112, -83, -50, -7, 69, 6, -112, 111, 52, -85, 82, 105, -79, -42, 90, 51, -91, -7, -29, 119, 78, -101, -20, 39, 20, -7, -99, -94, -32, 77, 62, 76, -112, 64, -15, -13, 1, -122, 68, -4, -89, -114, -41, 56, 9, 102, -69, -100, -66, 3, -21, -76, 106, -39, 27, -108, -1, 88, 60, 82, -94, 81, 116, 14, -26, -7, -30, -104, -13, 89, 37, 10, 49, -115, -59, 100, 88, 121, -51, -29, -44, 9, 23, -47, -30, 112, 11, 66, -110, -38, -81, -82, 39, 67, 104, 84, 100, -36, -109, 74, -53, 11, 94, 107, 29, -118, -47, 36, -70, 86, 39, 50, -94, 33, -2, 123, -79, 55, 16, -106, 86, -46, -38, -24, 30, 87, -128, -103, -28, 18, -53, -75, -71, 88, -100, 42, -40, -29, 49, 75, -35, -113, 79, 9, -16, 35, 51, -43, -19, -17, -85, -35, -63, -81, -43, -54, -101, -62, -17, 77, -68, -45, -30, -108, -121, 102, -35, -33, -73, -77, 97, -11, 32, -23, -40, -36, -1, -77, 32, 31, 32, 61, 14, 19, -45, 21, -33, 45, 104, -17, 45, 74, -91};
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
    msg.setTimeStamp(0.2755608534336146);
    msg.setSource(55713U);
    msg.setSourceEntity(216U);
    msg.setDestination(42556U);
    msg.setDestinationEntity(183U);
    msg.locale.assign("HXRSMZLLIDCEJJJMZPGMCURVHPBKMOXBEDXZZGGAXLASDSRYQMOHPAJUGWBERWOYJUDQJDPZABFNTOLPIWCTNDSBBNMUHZKEKNHRKQETFFSDHCTCBTIHUVXYALKYKVWESQMRNBODSGZIGFIQFKYRDVNSVYMPZHJXEEAPNWNURGQHTAPIVIZSHOQWGLVACBIOONFDRWLLYKPXUMJFKIXOQYTMITCVUQWTPYRNTKFLGAJVSAUWYVFBLCCUXFJ");
    const char tmp_msg_0[] = {36, 55, -46, 31, -62, -82, -60, 13, -16, -65, 42, 54, 25, -121, 114, 37, 10, 50, 36, -110, 15, -103, 32, -41, -19, -46, 120, -97, -82, 56, 119, 105, -9, -26, -90, -43, 32, -81, -36, 126, -22, -125, 24, 71, 44, -106, 77, 114, 38, -61, -123, 56, -44, -86, -120, 126, 28, 53, 114, 104, -79, 18, 110, 123, 110, -91, -1, 55, 16, 96, 19, -123, 58, 29, 43, 106, -50, -112, 51, 47, 41, -123, -88, -45, -20, 15, -61, -100, 39, 24, 73, 54, -14, -73, -54, -102, 45, -65, 83, -103, 35, 99, -96, -88, -81, -29, 119, -82, -16, -108, -84, 76, -58, -83, -19, 0, 67, 17, 101, -70, -44, 68, -60, -33, -118, -24, 88, -89, -116, 112, -45, -32, -17, 69, 28, -91, 98, 114, -61, -87, 8, 19, 106, 14, -9, -36, 20, 112, 31, -84, -30, 72, 73, -98, 96, 70, 107, -73, 53, -111, 54, -96, -126, -48, -91, -9, -29, 59, 84, 113, 33, 81, -110, -91, -33, 83, -11, 110, 11, -94, -90, 5, -94, 29, -114, -45, -4, 53, 108, -126, 58, 17, -18, -84, -50, -114, -70, -98, 97, -72, -125, 66, 28, 82, -118, -64, -115, -55, 122, -125, -112, 17, 105, -105, 24, -87, 112, -22, 110, -20, 93, -28, -24, 65, 65, 106, 70, 75, -97, 115, 0, -32, -126, -124, 90, 108, 4, -99, 63, 75, 53, 92, 2, 68};
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
    msg.setTimeStamp(0.7530376182244031);
    msg.setSource(41390U);
    msg.setSourceEntity(118U);
    msg.setDestination(39587U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.9407964983026342);
    msg.setSource(15547U);
    msg.setSourceEntity(225U);
    msg.setDestination(35004U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.6768088117738598);
    msg.setSource(50239U);
    msg.setSourceEntity(75U);
    msg.setDestination(65382U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.5383128058078542);
    msg.setSource(61121U);
    msg.setSourceEntity(63U);
    msg.setDestination(3214U);
    msg.setDestinationEntity(249U);
    const char tmp_msg_0[] = {-27, 94, 46, -11, -97, -20, -44, -128, -79, 10, 93, 68, -11, -124, -100, -37, -19, -84, 114, -41, 92, -81, -9, 26, 16, -49, -47, 33, -28, 85, 17, -50, -4, 77, -62, -100, -60, -53, -4, 105, -118, -21, 80, -109, -105, 94, 87, 57, -124, 87, 3, 126, 114, -104, -4, 72, 45, -1, 86, 59, -90, 116, 41, 19, -98, -104, 108, -11, 0, -43, 53, 54, 83, 78, 49, 11, -41, 90, 68, -73, 67, -14, 45, -76, 82, 106, 55, 62, -26, 90, 126, -12, -32, 65, -15, 93, 65, 10, 102, 92, 46, -23, 79, -87, 28, -7, -30, -61, 12, 99, 1, -119, 29, -72, 49, -33, 76, 79, -62, -89, -2, -124, -101, -110, -67, 43, -50, -17, 12, -123, -66, -22, 69, 1, -17, 61, -55, -65, 7, -101, 98, -107, -81, 80, -121, -10, 51, -99, -86, 83, 87, 112, -37, -109, -14, -6, 10, 55, -31, 91, -16, 27, 109, 3, 120, 112, -30, 99, 32, 86, 73, 73, -103, 70, -40, 79, 72, 117, 0, -37, 16, 51, 105, 70, -77, -16, 20, -125, -82, 98, 75, 21, -103, -33, 76, -9, -20, 80, 57, -105, -87, -11, 104, -17, -56, 67, -71, 74, -60, -75, -126, -111, -71, 88, -46, -104, 110, 67, 88, 31, -45, -77, -125, 119, 90, 46, 95, 59, 31, 37, 82, -3, 42, -98, 17, 109, -67, 113, 35, -94, -51, -65, 14, 55, -11, 13};
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
    msg.setTimeStamp(0.7584305591071626);
    msg.setSource(58844U);
    msg.setSourceEntity(198U);
    msg.setDestination(46698U);
    msg.setDestinationEntity(148U);
    const char tmp_msg_0[] = {44, 69, 52, 93, 107, 71, 57, 78, 26, 25, 83, 72, 13, 89, -56, -102, 105, -76, -90, -75, -23, -100, -7, 124, 102, -61, 63, 104, -14, 30, 30, -26, 35, -73, -1, -99, -80, 52};
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
    msg.setTimeStamp(0.013291978073475486);
    msg.setSource(48524U);
    msg.setSourceEntity(26U);
    msg.setDestination(64759U);
    msg.setDestinationEntity(14U);
    const char tmp_msg_0[] = {-93, -127, -98, -21, 15, 114, -93, -78, -22, 26, -1, -80, -23, 8, 97, -32, -121, -75, -25, -92, -94, 72, 63, 91, -61, 29, 25, 74, 47, 18, 78, -5, -54, 41, -73, -62, -15, -31, -84, 58, -66, -105, 76, -6, 105, -125, -122};
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
    msg.setTimeStamp(0.9554677887838257);
    msg.setSource(65397U);
    msg.setSourceEntity(138U);
    msg.setDestination(43059U);
    msg.setDestinationEntity(96U);
    msg.json.assign("ELGYTSIARQNVTNLIOYKBRGHDEGVRILLYCZNIZJPPBFRRMQQSFICHMDMUYFJVGOYRCOSSWOZWWBTQOKHICQNOUEJYYGPUAMXEDHKPUONCQVPUSCKBHTXCWTYVUVDZLEVMDZWZHJWFWIVBAJLRAFDFXOAJNKLETYJMWUPPLMYWAQWPSEGKLKAQQRHBFRHSSTRPBDDZJEOXELTBMHSAGIUGKJMXCXVGAEXZJKO");

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
    msg.setTimeStamp(0.7272499692437171);
    msg.setSource(43017U);
    msg.setSourceEntity(33U);
    msg.setDestination(19168U);
    msg.setDestinationEntity(75U);
    msg.json.assign("HOYPYZTLQZCFYQCIBGZGXHNBXOIDTFHUODHMJSKMQXGYKUWTBDVPXYWQROCPEMWZPHATRRYGYKWZKXUKKIRBAPENNVGOAXARJZROFWBRNKCEDSFSOULZZTNJFPL");

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
    msg.setTimeStamp(0.8251431461582747);
    msg.setSource(38273U);
    msg.setSourceEntity(50U);
    msg.setDestination(21983U);
    msg.setDestinationEntity(92U);
    msg.json.assign("CMOUDHYYQEQRVZJWLPVDRXKQFKFHSJFBRVJKPQQSLAAEYGAAPJFZFSRYVXZQPKIM");

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
    msg.setTimeStamp(0.08517884928007724);
    msg.setSource(52242U);
    msg.setSourceEntity(125U);
    msg.setDestination(41603U);
    msg.setDestinationEntity(199U);
    msg.highpass = 0.9186914670211418;
    msg.adot = 0.18177448393883833;
    msg.slope_compensation = 0.35281811868925295;
    msg.slope_compensation_difference = 0.32523532182084236;
    msg.altitude = 0.679275289391106;
    msg.auto_altitude = 0.21332404882168987;

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
    msg.setTimeStamp(0.33868793597868385);
    msg.setSource(41098U);
    msg.setSourceEntity(178U);
    msg.setDestination(8955U);
    msg.setDestinationEntity(220U);
    msg.highpass = 0.6550482051033014;
    msg.adot = 0.45950551361713354;
    msg.slope_compensation = 0.33255161053407123;
    msg.slope_compensation_difference = 0.7358366118290268;
    msg.altitude = 0.948800366919239;
    msg.auto_altitude = 0.32635214343299046;

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
    msg.setTimeStamp(0.8820475676378144);
    msg.setSource(8354U);
    msg.setSourceEntity(152U);
    msg.setDestination(37578U);
    msg.setDestinationEntity(214U);
    msg.highpass = 0.5849706347047773;
    msg.adot = 0.1401311526512533;
    msg.slope_compensation = 0.37206551887732187;
    msg.slope_compensation_difference = 0.945485322929007;
    msg.altitude = 0.8383428220873343;
    msg.auto_altitude = 0.581322730040526;

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
    msg.setTimeStamp(0.4375440299963387);
    msg.setSource(56267U);
    msg.setSourceEntity(26U);
    msg.setDestination(31255U);
    msg.setDestinationEntity(165U);
    msg.remote_control_allowed = 106U;
    msg.remote_control_enabled = 223U;
    msg.remote_control_active = 215U;
    msg.depth_only_control_enabled = 151U;
    msg.direct_control_enabled = 120U;
    msg.return_to_closest_point_on_line = 97U;
    msg.on_shore_power = 69U;
    msg.latitude = 0.07055317699518526;
    msg.longitude = 0.11332584131539014;
    msg.depth = 0.9098126140181869;
    msg.depth_ref = 0.3924195264364754;
    msg.altitude = 0.46242222347402573;
    msg.altitude_ref = 0.6304907000744464;
    msg.pitch = 0.9565204713405177;
    msg.roll = 0.4617696920969234;
    msg.rpm = 0.8829719244965762;
    msg.rpm_ref = 0.14602992227364142;
    msg.speed = 0.367622111389762;
    msg.speed_ref = 0.051694515387640805;
    msg.heading = 0.6717404443628829;
    msg.heading_rate = 0.6059951508203689;
    msg.heading_ref = 0.36516781553382294;
    msg.mission_state = 216U;
    msg.leg = -893105768893523371;

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
    msg.setTimeStamp(0.18152828863610826);
    msg.setSource(58328U);
    msg.setSourceEntity(226U);
    msg.setDestination(22989U);
    msg.setDestinationEntity(232U);
    msg.remote_control_allowed = 148U;
    msg.remote_control_enabled = 124U;
    msg.remote_control_active = 108U;
    msg.depth_only_control_enabled = 224U;
    msg.direct_control_enabled = 237U;
    msg.return_to_closest_point_on_line = 222U;
    msg.on_shore_power = 78U;
    msg.latitude = 0.5520712907372227;
    msg.longitude = 0.8022712592802538;
    msg.depth = 0.0019291632937546987;
    msg.depth_ref = 0.5023614863363527;
    msg.altitude = 0.15864843440953758;
    msg.altitude_ref = 0.039537066104452734;
    msg.pitch = 0.2620802350501159;
    msg.roll = 0.0009368025446397921;
    msg.rpm = 0.4741513924085491;
    msg.rpm_ref = 0.994194820929655;
    msg.speed = 0.4193995454013485;
    msg.speed_ref = 0.6301732861964081;
    msg.heading = 0.9637595558029083;
    msg.heading_rate = 0.5758197944132776;
    msg.heading_ref = 0.029056670882313895;
    msg.mission_state = 15U;
    msg.leg = -1446383492714939097;

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
    msg.setTimeStamp(0.6725342749449509);
    msg.setSource(7326U);
    msg.setSourceEntity(168U);
    msg.setDestination(56843U);
    msg.setDestinationEntity(87U);
    msg.remote_control_allowed = 146U;
    msg.remote_control_enabled = 143U;
    msg.remote_control_active = 239U;
    msg.depth_only_control_enabled = 177U;
    msg.direct_control_enabled = 157U;
    msg.return_to_closest_point_on_line = 188U;
    msg.on_shore_power = 50U;
    msg.latitude = 0.7082048553632193;
    msg.longitude = 0.42002461779839384;
    msg.depth = 0.4402994697652042;
    msg.depth_ref = 0.691601757781052;
    msg.altitude = 0.8998266568271612;
    msg.altitude_ref = 0.8105434848108707;
    msg.pitch = 0.6647386558116126;
    msg.roll = 0.6266168904231609;
    msg.rpm = 0.3402162967910394;
    msg.rpm_ref = 0.7155351321012567;
    msg.speed = 0.0003407673146493817;
    msg.speed_ref = 0.16611943791457695;
    msg.heading = 0.9406377914985676;
    msg.heading_rate = 0.6949611887439524;
    msg.heading_ref = 0.25600452626646086;
    msg.mission_state = 179U;
    msg.leg = 1072514697495024564;

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
    msg.setTimeStamp(0.10422659791132172);
    msg.setSource(14077U);
    msg.setSourceEntity(131U);
    msg.setDestination(57556U);
    msg.setDestinationEntity(88U);
    msg.name.assign("WMPDFNIXINZEUTUDKHTLUSLJCBJINASWVYWYKLWQMZZBZJJQDHWGGOYFQGAYVEGBQYDBTVHDVLSSGHZFPJHHRDGCZQLIAJZEWUXQZTLSQWVVGIKEX");
    msg.arg1 = 0.018885200593151796;
    msg.arg2 = 0.14914700966730055;
    msg.arg3 = 0.35183742091390835;
    msg.arg4 = 0.5194179396005811;

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
    msg.setTimeStamp(0.8452443862420099);
    msg.setSource(38684U);
    msg.setSourceEntity(21U);
    msg.setDestination(28165U);
    msg.setDestinationEntity(10U);
    msg.name.assign("QCZWFBZLRGVZUSJNYYTALTJFHTFEVYIXNEAMZFKGOTMFNDTZHWFZTIBLVTXEKFPLQHVGEAJOJEKGXRXQBVRUURXCCDYOUCWHUBCPKEBOISMHMHWMBMSQGGKTSYZIPDMNLWJFYWOTXBIQRNPOAGCNKSUDMVDDNYPOFFAZHTQQXAVWDOGPJQKBCWVBJNHSPVVAMARRUJRYSLCLLE");
    msg.arg1 = 0.5071818529185922;
    msg.arg2 = 0.8499180465602846;
    msg.arg3 = 0.27682777633374256;
    msg.arg4 = 0.3423153815712582;

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
    msg.setTimeStamp(0.1204346482762283);
    msg.setSource(42868U);
    msg.setSourceEntity(36U);
    msg.setDestination(11085U);
    msg.setDestinationEntity(83U);
    msg.name.assign("NFQKMVQTEFOECLBNMYQDTBAZFZGLUINBEWYORTHUUTUQICCRTXGHODQVEZOEJEWWALZINM");
    msg.arg1 = 0.1806608071132969;
    msg.arg2 = 0.6155890396500655;
    msg.arg3 = 0.5631342087136594;
    msg.arg4 = 0.390408773768263;

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
    msg.setTimeStamp(0.880006946945392);
    msg.setSource(44070U);
    msg.setSourceEntity(17U);
    msg.setDestination(33740U);
    msg.setDestinationEntity(140U);
    msg.direction = 39U;
    msg.range1 = 0.46632362186364096;
    msg.range2 = 0.9413367435851698;
    msg.range3 = 0.7113606333097555;
    msg.range4 = 0.6218738157180572;

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
    msg.setTimeStamp(0.8517452323507874);
    msg.setSource(61214U);
    msg.setSourceEntity(69U);
    msg.setDestination(46806U);
    msg.setDestinationEntity(101U);
    msg.direction = 79U;
    msg.range1 = 0.6454565283119323;
    msg.range2 = 0.11432480400647183;
    msg.range3 = 0.4673099864885355;
    msg.range4 = 0.9061259086170095;

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
    msg.setTimeStamp(0.4685172958395716);
    msg.setSource(2628U);
    msg.setSourceEntity(128U);
    msg.setDestination(2870U);
    msg.setDestinationEntity(235U);
    msg.direction = 116U;
    msg.range1 = 0.06511364268475472;
    msg.range2 = 0.6102963709966926;
    msg.range3 = 0.2249542056359618;
    msg.range4 = 0.8413159909604256;

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
    msg.setTimeStamp(0.9270302837070297);
    msg.setSource(47080U);
    msg.setSourceEntity(96U);
    msg.setDestination(25805U);
    msg.setDestinationEntity(212U);
    msg.msg.assign("CJPTEKMYWLNBEAMIGUDQNHPCHLHDOXXNGJWCALBTKLZHNZDSIGCXNVJJRYXHSBWVRYVUGOEHQNSEIRDCBRFQGSWEUFAZAGSBDTUVKZTFNDPFWHMDOVPGVMUMTKLIXOLMFNTAMJJGIIQAOHRNEEXZURJCLQKJSIULDOXOSTJBWEYAUVICZPRTKWYHRUCQPPFQQOZWJBXRKEFLFPBBYATQBGYMOKMFGVKSOSZLZFNKMCWUYYCPTDVD");
    msg.direction = 73U;

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
    msg.setTimeStamp(0.40242428181181966);
    msg.setSource(64971U);
    msg.setSourceEntity(3U);
    msg.setDestination(30986U);
    msg.setDestinationEntity(69U);
    msg.msg.assign("OPXMZAXWOQMEMZWMCHIDEXZQLLGIEGTUAKRQCHOKUHFOUSRNGTYIBVPQRHLVRVQUPWBIXDRFTQWVJQSAFFYRKYOGOAZEYLPJHJMKDSUWYP");
    msg.direction = 231U;

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
    msg.setTimeStamp(0.9204007625763082);
    msg.setSource(3116U);
    msg.setSourceEntity(57U);
    msg.setDestination(40461U);
    msg.setDestinationEntity(86U);
    msg.msg.assign("ZALGDBBBCT");
    msg.direction = 143U;

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
    msg.setTimeStamp(0.07457852875781246);
    msg.setSource(6492U);
    msg.setSourceEntity(101U);
    msg.setDestination(8191U);
    msg.setDestinationEntity(111U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.7188895092538881);
    msg.setSource(52076U);
    msg.setSourceEntity(210U);
    msg.setDestination(63213U);
    msg.setDestinationEntity(31U);
    msg.state = 196U;

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
    msg.setTimeStamp(0.03979228380858291);
    msg.setSource(13481U);
    msg.setSourceEntity(67U);
    msg.setDestination(10186U);
    msg.setDestinationEntity(146U);
    msg.state = 9U;

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
    msg.setTimeStamp(0.8054514140531318);
    msg.setSource(45477U);
    msg.setSourceEntity(34U);
    msg.setDestination(35471U);
    msg.setDestinationEntity(32U);
    msg.dt = 0.9710352326347405;
    msg.k_d = 0.40282406788803016;
    msg.range1 = 0.6024841002850687;
    msg.range2 = 0.6825150542330906;
    msg.range3 = 0.2277558837006729;
    msg.range4 = 0.03290981244791569;
    msg.u = 0.2882327908188155;
    msg.v = 0.09652047754167037;
    msg.w = 0.08157578805407817;
    msg.phi = 0.523713371150587;
    msg.theta = 0.7475528732256562;
    msg.psi = 0.9945689315288039;
    msg.adot = 0.8130483396014353;

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
    msg.setTimeStamp(0.6822605899144517);
    msg.setSource(10799U);
    msg.setSourceEntity(207U);
    msg.setDestination(17315U);
    msg.setDestinationEntity(95U);
    msg.dt = 0.19507956095132872;
    msg.k_d = 0.7618301701353717;
    msg.range1 = 0.3790148154566396;
    msg.range2 = 0.644584476907988;
    msg.range3 = 0.3845146469792161;
    msg.range4 = 0.27830596090435766;
    msg.u = 0.1338280126275826;
    msg.v = 0.0008631279438844341;
    msg.w = 0.04381330049646304;
    msg.phi = 0.7414085521164764;
    msg.theta = 0.2598968982675225;
    msg.psi = 0.7156299350506506;
    msg.adot = 0.582816860445311;

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
    msg.setTimeStamp(0.5642827379195378);
    msg.setSource(53845U);
    msg.setSourceEntity(200U);
    msg.setDestination(33592U);
    msg.setDestinationEntity(142U);
    msg.dt = 0.15451327669051773;
    msg.k_d = 0.6473584259270749;
    msg.range1 = 0.7802527289026492;
    msg.range2 = 0.7436012861890335;
    msg.range3 = 0.5510921638426177;
    msg.range4 = 0.500794543128839;
    msg.u = 0.5200765948049775;
    msg.v = 0.6096339929441835;
    msg.w = 0.4695460676581117;
    msg.phi = 0.10559675480765818;
    msg.theta = 0.9131518987912096;
    msg.psi = 0.9291020800779852;
    msg.adot = 0.5187082932447032;

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
    msg.setTimeStamp(0.8396320102070726);
    msg.setSource(30486U);
    msg.setSourceEntity(197U);
    msg.setDestination(36334U);
    msg.setDestinationEntity(76U);
    msg.htime = 0.31763535888658534;
    msg.dt = 0.6689131852791296;

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
    msg.setTimeStamp(0.6950489141880992);
    msg.setSource(61530U);
    msg.setSourceEntity(245U);
    msg.setDestination(9532U);
    msg.setDestinationEntity(245U);
    msg.htime = 0.48480994108221664;
    msg.dt = 0.9631697506244367;

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
    msg.setTimeStamp(0.5385996838790962);
    msg.setSource(13051U);
    msg.setSourceEntity(157U);
    msg.setDestination(33494U);
    msg.setDestinationEntity(252U);
    msg.htime = 0.5799230341598054;
    msg.dt = 0.2367716196452755;

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
    msg.setTimeStamp(0.7486337274568498);
    msg.setSource(46553U);
    msg.setSourceEntity(229U);
    msg.setDestination(62351U);
    msg.setDestinationEntity(114U);
    msg.value = 0.19925336692935047;

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
    msg.setTimeStamp(0.2549219151769445);
    msg.setSource(22724U);
    msg.setSourceEntity(150U);
    msg.setDestination(23058U);
    msg.setDestinationEntity(76U);
    msg.value = 0.8680070187368651;

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
    msg.setTimeStamp(0.7671031058364325);
    msg.setSource(60448U);
    msg.setSourceEntity(245U);
    msg.setDestination(60891U);
    msg.setDestinationEntity(7U);
    msg.value = 0.2570853877834117;

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
    msg.setTimeStamp(0.6332463747245571);
    msg.setSource(6907U);
    msg.setSourceEntity(58U);
    msg.setDestination(30584U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.28483267876027407;
    msg.lon = 0.48148394901132574;

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
    msg.setTimeStamp(0.7325531010848493);
    msg.setSource(9356U);
    msg.setSourceEntity(114U);
    msg.setDestination(42599U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.13637409569715764;
    msg.lon = 0.8928683790802844;

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
    msg.setTimeStamp(0.13132722949532805);
    msg.setSource(63669U);
    msg.setSourceEntity(219U);
    msg.setDestination(13540U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.2710633655706626;
    msg.lon = 0.044311825441540886;

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
    msg.setTimeStamp(0.713318690088265);
    msg.setSource(22119U);
    msg.setSourceEntity(126U);
    msg.setDestination(36516U);
    msg.setDestinationEntity(125U);
    msg.value = 0.7260219064995438;

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
    msg.setTimeStamp(0.862593650217747);
    msg.setSource(45862U);
    msg.setSourceEntity(238U);
    msg.setDestination(33680U);
    msg.setDestinationEntity(42U);
    msg.value = 0.535343192310031;

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
    msg.setTimeStamp(0.5239443349456478);
    msg.setSource(22233U);
    msg.setSourceEntity(33U);
    msg.setDestination(30088U);
    msg.setDestinationEntity(116U);
    msg.value = 0.7542042107373201;

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
    msg.setTimeStamp(0.2668245070582064);
    msg.setSource(59219U);
    msg.setSourceEntity(251U);
    msg.setDestination(27796U);
    msg.setDestinationEntity(172U);
    msg.value = 0.020033048086149252;

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
    msg.setTimeStamp(0.34732163177387987);
    msg.setSource(110U);
    msg.setSourceEntity(60U);
    msg.setDestination(49944U);
    msg.setDestinationEntity(143U);
    msg.value = 0.4449892223795563;

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
    msg.setTimeStamp(0.004471237454994337);
    msg.setSource(23598U);
    msg.setSourceEntity(181U);
    msg.setDestination(18704U);
    msg.setDestinationEntity(248U);
    msg.value = 0.8365325538144796;

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
    msg.setTimeStamp(0.13809289509328748);
    msg.setSource(10742U);
    msg.setSourceEntity(85U);
    msg.setDestination(50156U);
    msg.setDestinationEntity(227U);
    msg.environmenttypeid = 98U;
    msg.id = 94U;
    msg.x = 0.27629415085557696;
    msg.y = 0.2811334038563651;
    msg.psi = 0.633306937858125;
    msg.u = 0.7672359486195024;
    msg.v = 0.26519237728467937;
    msg.r = 0.8105774914539271;

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
    msg.setTimeStamp(0.6279074122451332);
    msg.setSource(64718U);
    msg.setSourceEntity(126U);
    msg.setDestination(27688U);
    msg.setDestinationEntity(122U);
    msg.environmenttypeid = 124U;
    msg.id = 65U;
    msg.x = 0.01884152088217106;
    msg.y = 0.6344462537962926;
    msg.psi = 0.41226742657501636;
    msg.u = 0.7930337445130331;
    msg.v = 0.4977576673456633;
    msg.r = 0.020879492687074785;

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
    msg.setTimeStamp(0.20213223518691759);
    msg.setSource(8092U);
    msg.setSourceEntity(186U);
    msg.setDestination(58835U);
    msg.setDestinationEntity(99U);
    msg.environmenttypeid = 176U;
    msg.id = 2U;
    msg.x = 0.9629143481262993;
    msg.y = 0.1907139452916915;
    msg.psi = 0.35308932321241815;
    msg.u = 0.34076238432690087;
    msg.v = 0.8527943344019426;
    msg.r = 0.3773804836625041;

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
