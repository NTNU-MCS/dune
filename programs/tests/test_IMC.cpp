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
// IMC XML MD5: 903b5c88baf8d7d37c869a16edd28622                            *
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
    msg.setTimeStamp(0.9486050166365836);
    msg.setSource(57389U);
    msg.setSourceEntity(226U);
    msg.setDestination(46319U);
    msg.setDestinationEntity(172U);
    msg.state = 98U;
    msg.flags = 222U;
    msg.description.assign("TBVAPZBFKKWAXWFHUAFSSNGGDMHDLNRJZLQTJPRGQFRYKOODPKECOUCZUQJEGIETXANBWKEDMKBVKWPQXMPDIYCRYBZDJJZRYHMTLSWYONXJCQFJSDAIKGYZCTLOEWLOBSEOUYMLLIXLIKTJNHLVMINTAQUWSORA");

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
    msg.setTimeStamp(0.42501592499535046);
    msg.setSource(62002U);
    msg.setSourceEntity(156U);
    msg.setDestination(61224U);
    msg.setDestinationEntity(134U);
    msg.state = 194U;
    msg.flags = 84U;
    msg.description.assign("FGESZTUPPVOBUROWDFOHBHYZXBYZRQKFRFCQZJIUNKGEJNOWVAXOHNWBQQYKYSXEGNNFPNFCVJACJMDHGSIMWTSLCWLMLCVEZBQXPZJQTPVDSOOPGTODQSACENOIOXKRKVHBRNKGCLAAZIYKMWJITEXRRXHATLLJACFIDPHZLUDVMWBVYPRLAFUBTAXQMJSGWTXKHMUENLUDXVSAYEGWIGLUMMNZGSJJIBMFKETQQYDZ");

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
    msg.setTimeStamp(0.927107199482765);
    msg.setSource(39679U);
    msg.setSourceEntity(55U);
    msg.setDestination(60388U);
    msg.setDestinationEntity(124U);
    msg.state = 181U;
    msg.flags = 174U;
    msg.description.assign("KTLAMFZKPAHEQC");

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
    msg.setTimeStamp(0.531339113464867);
    msg.setSource(860U);
    msg.setSourceEntity(149U);
    msg.setDestination(11446U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.8092186118859459);
    msg.setSource(62954U);
    msg.setSourceEntity(209U);
    msg.setDestination(32871U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.2131241923127828);
    msg.setSource(58502U);
    msg.setSourceEntity(167U);
    msg.setDestination(25914U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.8449068148399411);
    msg.setSource(24794U);
    msg.setSourceEntity(36U);
    msg.setDestination(48250U);
    msg.setDestinationEntity(63U);
    msg.id = 221U;
    msg.label.assign("FCXWOXLYTOCLODNABGBKNIRNYLPIRIXHFPTASXIEVSRPKRIDXQEPGJTCQZBFJSKXKLEFZGYTLMISWAOEJYCDJUTBKERZLKAWSHBLJVWYGVMDQDCTNZMIKJJTPHUKHLJXFZCSSJOYDWKMBKOQFHPQIY");
    msg.component.assign("RFBOHFYBTAVPYWBYHKRMZXETTVWDLHLKUOGXGZRWISGPWMKPMDJXZSPQMQXWCAZYTTMGSPARGDE");
    msg.act_time = 40925U;
    msg.deact_time = 39118U;

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
    msg.setTimeStamp(0.3318138416564528);
    msg.setSource(59032U);
    msg.setSourceEntity(215U);
    msg.setDestination(35159U);
    msg.setDestinationEntity(201U);
    msg.id = 135U;
    msg.label.assign("ZOSXWGIXXSBXQMTDCZKVOCEVAVCXTKTFKTOOSMPQYFXAEILBLHNXDGDKYOWLMBLVHQHTETSASFUFMOJQBEFUWIMNBHSRURCUWRRNWSRYJOMTQIDJQUXIXCGJKXALBBYUVNRLDUWREJIAUAELAZWTPKQZCZVARWKHHIZDNYGYDCATMVYKYRDPGPIALSPCEHGJKPPGSFQEMNOBFGNGUJUOPNMZLHTFOEBVLCEZHPIBDJFCWVZZDPY");
    msg.component.assign("OEEPIJTDUQNRAOLGLODJUOYZVZAFPGDAIMAQQTVIVLFKKHOXOWUKZVSMDNNQNRAIBVCUMQQRFYSQCNTILSPPJZYKVDAHWNNRIGGFJTXGCRIZPWVXLRHTJOFVMXTSUHSDZEPCSCNEPFCRZUFOFKPODELBAYXLNUIKSWCLMHLRWTMHCSHGHYTQESBODNGPWXBSQJABVXJFXYEQBYGZYBXWYTRU");
    msg.act_time = 11231U;
    msg.deact_time = 63819U;

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
    msg.setTimeStamp(0.5273639587843382);
    msg.setSource(18303U);
    msg.setSourceEntity(224U);
    msg.setDestination(36754U);
    msg.setDestinationEntity(240U);
    msg.id = 166U;
    msg.label.assign("PSXTXFBAXGZCWLJEPXPPQAKCTWDDQBRQNNWQAVJNVKSPVZJEFSAWJS");
    msg.component.assign("CSFYQRHVYKCFTHBZAUKPUBPDZRKRFNYIWMNZGFQNWNXAAVYEGIGVPTTCHMJREFQHAVDULKBZOSPIPXZBATBTQKNANCVRLJOTPVMYEELLHXJJKEWCOKWPYZSJEBRVYKCXKBGKMWLOSLMJFFWUDSITEGHUTAFWQVIXDOCQRAOOJBULJUIUDNTOQHLIMYAWYOSCIBQVGGFYCMPOUDWSEZMHNHESXIUZXRQXGMTLJGNRSMDSWXLICZ");
    msg.act_time = 45255U;
    msg.deact_time = 37886U;

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
    msg.setTimeStamp(0.7888790420673999);
    msg.setSource(5944U);
    msg.setSourceEntity(181U);
    msg.setDestination(18440U);
    msg.setDestinationEntity(166U);
    msg.id = 160U;

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
    msg.setTimeStamp(0.7091063682968307);
    msg.setSource(33605U);
    msg.setSourceEntity(172U);
    msg.setDestination(17522U);
    msg.setDestinationEntity(172U);
    msg.id = 166U;

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
    msg.setTimeStamp(0.07579112782610764);
    msg.setSource(1589U);
    msg.setSourceEntity(24U);
    msg.setDestination(4850U);
    msg.setDestinationEntity(160U);
    msg.id = 61U;

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
    msg.setTimeStamp(0.9591734230794935);
    msg.setSource(47804U);
    msg.setSourceEntity(99U);
    msg.setDestination(31840U);
    msg.setDestinationEntity(106U);
    msg.op = 82U;
    msg.list.assign("JFVGHGBTLWSFRBAZOZHBBZIACYKUPCKYLOPAXYTKWQPIOSHYIEDGACADPLUWHPRSXGJWLLCFJEGIHOHCYQHAPJEUMBYTUOQUTAOXCFSNULPLXJTKSCGZVDJVITMTAYMEUWSRGNHAPWQHUENFRPNOVIMCZRYIX");

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
    msg.setTimeStamp(0.18617256260528725);
    msg.setSource(55807U);
    msg.setSourceEntity(51U);
    msg.setDestination(40917U);
    msg.setDestinationEntity(85U);
    msg.op = 23U;
    msg.list.assign("RIVBHWPSFTYDSPLMKXZUMNBWYHJRGHOMNQEXTWXTIRXUAUYSYNYYSDLMOTJDKDKHBCFQOOWXGDYDCWCXOPZGWCLIZIJEFCJTUAAXBCADGEAGHOYZWUPUJBVBKPPHIDXSFKOTQQVVNHERDMJWEZEEJMA");

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
    msg.setTimeStamp(0.14270986797242147);
    msg.setSource(10113U);
    msg.setSourceEntity(192U);
    msg.setDestination(64722U);
    msg.setDestinationEntity(80U);
    msg.op = 240U;
    msg.list.assign("WEOOXYZAOKFQPMHIWLAAPYSKDDQQPKOJPYIXSNHTVTPBMTYVSFXWBMBYDATHKPNQAUCERRZTETCLDLNRUFWZCRKONVNQRVEJALXKJSSYOKGFNFGDATJMYZZPTHIIGBIVZBUMCAEPEBQXGONJCACFEMRGJBOAMKDLXMHKLPNBWUROSSHVUFZXTKHCYGRLGMWUZQECFQTLDCSJYIUGLDIRGFMNUDIZFHUQLSHJBHN");

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
    msg.setTimeStamp(0.10735968714232724);
    msg.setSource(12781U);
    msg.setSourceEntity(208U);
    msg.setDestination(46693U);
    msg.setDestinationEntity(41U);
    msg.value = 128U;

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
    msg.setTimeStamp(0.8823424860895871);
    msg.setSource(60806U);
    msg.setSourceEntity(8U);
    msg.setDestination(10679U);
    msg.setDestinationEntity(213U);
    msg.value = 210U;

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
    msg.setTimeStamp(0.16746551679594945);
    msg.setSource(14158U);
    msg.setSourceEntity(205U);
    msg.setDestination(22602U);
    msg.setDestinationEntity(143U);
    msg.value = 227U;

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
    msg.setTimeStamp(0.4010555552988443);
    msg.setSource(16925U);
    msg.setSourceEntity(88U);
    msg.setDestination(56479U);
    msg.setDestinationEntity(64U);
    msg.consumer.assign("EKHYTDWELLJVRRGFCMPYAQEWQGXUKUONOCALVFORPLSTGAFMVSEOKDTGHHOGYBHXCGADVWMRSUMBCDXVQMIFPIIBITMSZVFVJXLBJBYJLURFXCUARNSBSQCONDHQPROKQPFXMNZUZVDNCYZFEWGHKLPXRUFOQMUSDAJIWZVTTRYIZEBJFMSJAHQ");
    msg.message_id = 46231U;

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
    msg.setTimeStamp(0.7550384897347097);
    msg.setSource(13502U);
    msg.setSourceEntity(157U);
    msg.setDestination(42484U);
    msg.setDestinationEntity(21U);
    msg.consumer.assign("ORIZROISKGWTSSTAJUKDEUPTZYVGSQPAFFDXFJZVKCRIYDEYZJXURSQKGNPCXFQOBGCPHHTWAJDSBSSBYRKWOFKMZVUZRMUDNXPOMSLOEITAETLMNIHVLXJTGFEHWEWAENKLXEHEGHKLQDHCVMNTGJZWWUPYYVAXVVNYWRCDGXFLBYZUCUNOQQIXGIJLQBDAQMQIEOKUYMLPTKC");
    msg.message_id = 31235U;

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
    msg.setTimeStamp(0.3355998703503219);
    msg.setSource(45149U);
    msg.setSourceEntity(93U);
    msg.setDestination(14193U);
    msg.setDestinationEntity(201U);
    msg.consumer.assign("QJWTTVAPLQPBJKVVSDPLMLKAMBFXBWFSKGKEVTTZOFGYDVSOIDHQDTZUMCIXOAOYAERCAAINZOXXHNWDTYNFUETTODGAVMYQUIWBWMLFVPJCCWKPVVEUMBYKGURQPJYXIYBNONZXAUZEMZVUCCDHSXWPZDSRGFRHLHBCFSPYBQJJQYZRSSRHHHFGMJIULXEQRBXKIAYMUUTWBGKMJOLNHRGLSHZICGP");
    msg.message_id = 39329U;

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
    msg.setTimeStamp(0.6459295540884251);
    msg.setSource(236U);
    msg.setSourceEntity(232U);
    msg.setDestination(63163U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.5726168637052591);
    msg.setSource(47596U);
    msg.setSourceEntity(100U);
    msg.setDestination(48618U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.4511484873771885);
    msg.setSource(56891U);
    msg.setSourceEntity(131U);
    msg.setDestination(45800U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.22369176064289664);
    msg.setSource(9955U);
    msg.setSourceEntity(25U);
    msg.setDestination(44450U);
    msg.setDestinationEntity(129U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.494463101344333);
    msg.setSource(52742U);
    msg.setSourceEntity(6U);
    msg.setDestination(32672U);
    msg.setDestinationEntity(229U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.4718924201386756);
    msg.setSource(37864U);
    msg.setSourceEntity(129U);
    msg.setDestination(14243U);
    msg.setDestinationEntity(120U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.49964398813946376);
    msg.setSource(5081U);
    msg.setSourceEntity(162U);
    msg.setDestination(38517U);
    msg.setDestinationEntity(69U);
    msg.total_steps = 243U;
    msg.step_number = 46U;
    msg.step.assign("FPDMCPKXTGZKPINNPEJIRAVZJIUAQROTJEKLMGVXCSDUGBOZMNYRPNHRBEEYXDEAPJXHNAEXLAVGATRDDYFLHFRNGHZTUIUWVBUFTUKTFKBITYDIDHISLDJURWLOZLCSZFPVQVMUSLPSAEHKWCUIYCEAGGOITWKBXBSRXHFYOZMPWFWTNMJWYOCMQQFXEKCJHOGBVBJXSSGTMHSQYLQVWICOKHLRPENCMSQWL");
    msg.flags = 87U;

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
    msg.setTimeStamp(0.4753907810282242);
    msg.setSource(5333U);
    msg.setSourceEntity(125U);
    msg.setDestination(30049U);
    msg.setDestinationEntity(92U);
    msg.total_steps = 105U;
    msg.step_number = 46U;
    msg.step.assign("ILWGKKYRSIDLK");
    msg.flags = 223U;

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
    msg.setTimeStamp(0.43878836217083106);
    msg.setSource(17402U);
    msg.setSourceEntity(206U);
    msg.setDestination(43388U);
    msg.setDestinationEntity(237U);
    msg.total_steps = 173U;
    msg.step_number = 106U;
    msg.step.assign("AXCLOBGZISZDSQVTRQZSGNMPPXKKVRFJLORHGOBIABYTEXTSYGUUPXEYPMAPJJHNKUKLQIFLWJBRAOHINBEOTNUDPSDCJFVYCONCNWJFJEBAXWSMPYWGDURVZGWDRKZQQCEZMABZDHFADHHFHXOIMOMNXJKMJITWTYPXEWCUUFQYLLMYHBIEPTVG");
    msg.flags = 55U;

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
    msg.setTimeStamp(0.0823441880745176);
    msg.setSource(8012U);
    msg.setSourceEntity(202U);
    msg.setDestination(2857U);
    msg.setDestinationEntity(65U);
    msg.state = 197U;
    msg.error.assign("NRWECISROBSODJBRUSNUIXWQPIWLVJFHBQHFAGRFRJWFSHUZGWGQMTPCUHHSNHAYRLPBZEPLMSEKTJKLGVTXCGTPCKWCBLAMOARIJUNQAUNNOSIUAOUFXVIYQFZTONB");

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
    msg.setTimeStamp(0.7524637468594235);
    msg.setSource(26969U);
    msg.setSourceEntity(16U);
    msg.setDestination(24062U);
    msg.setDestinationEntity(239U);
    msg.state = 1U;
    msg.error.assign("YNPHCRFWUWYHANNKRYIZVIZBLJNLGPUWNFIUBABMD");

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
    msg.setTimeStamp(0.3831737544256323);
    msg.setSource(49174U);
    msg.setSourceEntity(215U);
    msg.setDestination(60164U);
    msg.setDestinationEntity(68U);
    msg.state = 98U;
    msg.error.assign("WREYFHUCIYAWMTIHKKHOEZRTSDWVNCB");

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
    msg.setTimeStamp(0.17364828717216307);
    msg.setSource(9688U);
    msg.setSourceEntity(127U);
    msg.setDestination(64675U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.38147837944518603);
    msg.setSource(8670U);
    msg.setSourceEntity(241U);
    msg.setDestination(14156U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.897299017581123);
    msg.setSource(44079U);
    msg.setSourceEntity(215U);
    msg.setDestination(43725U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.43496123875442894);
    msg.setSource(3822U);
    msg.setSourceEntity(142U);
    msg.setDestination(13610U);
    msg.setDestinationEntity(82U);
    msg.op = 210U;
    msg.speed_min = 0.49720020273489896;
    msg.speed_max = 0.09168727090092721;
    msg.long_accel = 0.24357009737583646;
    msg.alt_max_msl = 0.45866429821192833;
    msg.dive_fraction_max = 0.30479579701770587;
    msg.climb_fraction_max = 0.7827534630663496;
    msg.bank_max = 0.5266797931991463;
    msg.p_max = 0.7516698744085331;
    msg.pitch_min = 0.9738961062564571;
    msg.pitch_max = 0.87359679573262;
    msg.q_max = 0.44585041522917146;
    msg.g_min = 0.8537374155773385;
    msg.g_max = 0.3034986132295753;
    msg.g_lat_max = 0.5973666716367083;
    msg.rpm_min = 0.5160065653364693;
    msg.rpm_max = 0.4397220475640925;
    msg.rpm_rate_max = 0.5478031396428703;

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
    msg.setTimeStamp(0.020952467692725962);
    msg.setSource(10489U);
    msg.setSourceEntity(188U);
    msg.setDestination(44101U);
    msg.setDestinationEntity(203U);
    msg.op = 212U;
    msg.speed_min = 0.761396669310364;
    msg.speed_max = 0.9578593499612417;
    msg.long_accel = 0.33211593276901785;
    msg.alt_max_msl = 0.5588310604919179;
    msg.dive_fraction_max = 0.6224354826318306;
    msg.climb_fraction_max = 0.8331752172108002;
    msg.bank_max = 0.27774994526656027;
    msg.p_max = 0.30525775731479066;
    msg.pitch_min = 0.1903544606664881;
    msg.pitch_max = 0.44893126895485735;
    msg.q_max = 0.5082439475336499;
    msg.g_min = 0.7871163786066628;
    msg.g_max = 0.5897949778013848;
    msg.g_lat_max = 0.6444122459555962;
    msg.rpm_min = 0.37871147730803834;
    msg.rpm_max = 0.45108009936620075;
    msg.rpm_rate_max = 0.010834385909564315;

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
    msg.setTimeStamp(0.3280626366277164);
    msg.setSource(20688U);
    msg.setSourceEntity(190U);
    msg.setDestination(52099U);
    msg.setDestinationEntity(120U);
    msg.op = 249U;
    msg.speed_min = 0.15784267486402825;
    msg.speed_max = 0.9220543117501511;
    msg.long_accel = 0.5489491580471494;
    msg.alt_max_msl = 0.38201001554207425;
    msg.dive_fraction_max = 0.46707648974446614;
    msg.climb_fraction_max = 0.7990736115007147;
    msg.bank_max = 0.4802407907787086;
    msg.p_max = 0.2269826249304221;
    msg.pitch_min = 0.6705713467216817;
    msg.pitch_max = 0.2510078956904721;
    msg.q_max = 0.40652662633644765;
    msg.g_min = 0.930879283560276;
    msg.g_max = 0.159802802814484;
    msg.g_lat_max = 0.34267809393151105;
    msg.rpm_min = 0.6517152105701864;
    msg.rpm_max = 0.5920624781076436;
    msg.rpm_rate_max = 0.8341465249281819;

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
    msg.setTimeStamp(0.5146552239734826);
    msg.setSource(28605U);
    msg.setSourceEntity(8U);
    msg.setDestination(59126U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.7870190319452041);
    msg.setSource(36992U);
    msg.setSourceEntity(126U);
    msg.setDestination(10440U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.3616164509082339);
    msg.setSource(38128U);
    msg.setSourceEntity(210U);
    msg.setDestination(3675U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.577972499993812);
    msg.setSource(57829U);
    msg.setSourceEntity(38U);
    msg.setDestination(952U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.2080691357405251;
    msg.lon = 0.5808113465819732;
    msg.height = 0.4077540793793494;
    msg.x = 0.24422939779152142;
    msg.y = 0.9813328513895904;
    msg.z = 0.1488792524147543;
    msg.phi = 0.7161821179331574;
    msg.theta = 0.6335501248261284;
    msg.psi = 0.23875306290675502;
    msg.u = 0.7038332394989354;
    msg.v = 0.29317459931256173;
    msg.w = 0.4198280414490073;
    msg.p = 0.5669993854079303;
    msg.q = 0.15390469612659374;
    msg.r = 0.8618931881823004;
    msg.svx = 0.2819412530080353;
    msg.svy = 0.9770868873304172;
    msg.svz = 0.1682804300620072;

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
    msg.setTimeStamp(0.852168809035277);
    msg.setSource(3592U);
    msg.setSourceEntity(239U);
    msg.setDestination(24209U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.36995945760577453;
    msg.lon = 0.06383334620157233;
    msg.height = 0.6353048072661015;
    msg.x = 0.7422145905410221;
    msg.y = 0.9932958258014388;
    msg.z = 0.16920941297703074;
    msg.phi = 0.9051030025034271;
    msg.theta = 0.19293625659989078;
    msg.psi = 0.6014517443956028;
    msg.u = 0.061817519330186976;
    msg.v = 0.1476586432213356;
    msg.w = 0.44749382404503235;
    msg.p = 0.44327726917317023;
    msg.q = 0.5297491484494354;
    msg.r = 0.4891082418657975;
    msg.svx = 0.7234604167686932;
    msg.svy = 0.47949401535840375;
    msg.svz = 0.8482126883793893;

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
    msg.setTimeStamp(0.7131936911355236);
    msg.setSource(39099U);
    msg.setSourceEntity(183U);
    msg.setDestination(15743U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.002945215798042633;
    msg.lon = 0.12941598401498644;
    msg.height = 0.7586469217015759;
    msg.x = 0.1990732804612081;
    msg.y = 0.9566304268636019;
    msg.z = 0.6436673029675744;
    msg.phi = 0.13948932638075973;
    msg.theta = 0.7972161741773075;
    msg.psi = 0.803583878084658;
    msg.u = 0.19125405163713805;
    msg.v = 0.25607519586366234;
    msg.w = 0.034084142076257096;
    msg.p = 0.3404374075799238;
    msg.q = 0.6027519391869212;
    msg.r = 0.016396482401617174;
    msg.svx = 0.9381618717601774;
    msg.svy = 0.3603156744001803;
    msg.svz = 0.2757932497798574;

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
    msg.setTimeStamp(0.6150718990434759);
    msg.setSource(53354U);
    msg.setSourceEntity(4U);
    msg.setDestination(37100U);
    msg.setDestinationEntity(16U);
    msg.op = 193U;
    msg.entities.assign("DOQHAEBTXBSFJXAHCZRYJRCRLXCWRQBYAMGJWKBSKOUCFBFXUGLMHVLQTIGXAZKDPDWZOLCETTOZMSGOAXTQGJMQBKCQLEPEKRIJRX");

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
    msg.setTimeStamp(0.7608183756821165);
    msg.setSource(33230U);
    msg.setSourceEntity(114U);
    msg.setDestination(5496U);
    msg.setDestinationEntity(154U);
    msg.op = 118U;
    msg.entities.assign("VHPVZHBAKEIRHLRJDGWAIPLMLVMXXPHCGZYPEOFGYXOJAKSNUDSUKDMHQJIAMHFDHZDXYBAYFEDTNDBSFZIFWAUJNEMQQWIEIYUXL");

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
    msg.setTimeStamp(0.4091193784100682);
    msg.setSource(27401U);
    msg.setSourceEntity(188U);
    msg.setDestination(17159U);
    msg.setDestinationEntity(75U);
    msg.op = 192U;
    msg.entities.assign("PPYUAGTWMRNGHIPQZXHBGBAYDAMQJTQZMBYJADGSHLYALFFUNONFUKROFSGGXWKQYHLJSEIPTVMODTFWLBVKWPBVBZTEAYIESVKFZKVHETJBDNIPBHKCVRMPCWHCMQLENYYADWNIRRDZBXWQULWWFTJAUSCGOICMJAVOOXDXQAFPJUVEEZKHCKRHQOZXWFHGQMOGEPSCKNEKLSCSVXXRIXSZYRIJUUUGQIDSOJFMZLJIRXLMDONP");

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
    msg.setTimeStamp(0.3034045220108815);
    msg.setSource(28107U);
    msg.setSourceEntity(102U);
    msg.setDestination(7636U);
    msg.setDestinationEntity(122U);
    msg.type = 30U;
    msg.speed = 27109U;
    const char tmp_msg_0[] = {-117, 28, -4, -54, -18, -83, -36, 100, 121, 35, 108, -74, 106, -86, 73, 96, -65, 64, 86, -69, -18, 42, -7, 108, -13, -89, 93, -36, 33, -127, 10, -100, -9, -120, 73, -79, -7, -115, 10, -55, 108, -74, -80, -65, -41, 30, 98, 63, 9, 42, -89, -100, -39, -67, -90, 5, 46, 63, 123, 103, -34, -81, 13, 111};
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
    msg.setTimeStamp(0.2572379437778819);
    msg.setSource(62908U);
    msg.setSourceEntity(4U);
    msg.setDestination(34508U);
    msg.setDestinationEntity(162U);
    msg.type = 3U;
    msg.speed = 21567U;
    const char tmp_msg_0[] = {30, 98, 115, -77, 124, 41, 63, 5, -115, 26, 101, 49, -53, -38, 4, -110, 99, -67, 73, 74, -98, 85, 117, 44, -100, -33, 0, -73, 11, -116, -122, -46, -100, -2, -122, 4, 47, -120, 79, -111, -118, 7, 126, 36, -47, 108, 57, 41, 23, -38, -119, 10, -57, -70, 4, -112, 80, -24, -33, -114, 24, -38, -33, 118, -55, -61, 73, -104, 86, -31, 57, 90, -74, 33, -123, -12, -87, -23, 87, -117, 66, 115, -121, 87, 36, -78, -58, 0, -89, -98, -117, 18, 119, 78, -108, 13, -53, 87, 113, -107, 45, 103, 3, -29, 61, 3, 23, 25, -49, -101, -52, 115, 18, -53, 125, 50, -4, 100, 38, 44, -83, -8, -48, -116, 20, -48, 64, -112, 106, 37, 62, -84, -106, 42, 50, 47, -59, -126, -74, 42, -34, -71, -27, -99, 102, -59, 49, -70, -70, -31, -60, -69, -3, -72, 96, 112, 6, 115, 0, 76, -69, -128, 55, 99, -45, 120, -89, 45, 72, 67, 68, -100, -128, -126, 25, 34, -75, -24, 51, 110, -70, 122, -19, 100, -110, -115, -92, -94, -116, -23, 102, 53, -21, -79, 120, 45, -120, -86, -42, 66, 110, 113, -49, -29, 106, 38, 43, 50, -120, 21, -3, 32, -82, 106, -55, 120, 3, -6, 63, -110, -56, 105, 122, -67, -115, -1, 49, 43, 53, 110, 106, -92, 35, 56, -69, -49, -97, 105, -92, 49};
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
    msg.setTimeStamp(0.10077492413577704);
    msg.setSource(30078U);
    msg.setSourceEntity(31U);
    msg.setDestination(61669U);
    msg.setDestinationEntity(211U);
    msg.type = 56U;
    msg.speed = 4606U;
    const char tmp_msg_0[] = {-35, -41, 26, -7, -47, -29, -94, -116, 94, -30, 125, 86, 94, -8, 53, -27, 14, -115, -53, -2, -63, 69, -57, -33, 67, -59, 80, -39, 49, 16, 83, 112, -55, 96, 100, 40, -120, -112, -124, 113, 99, 124, -82, -19, -112, 54, 115, -91, 89, -75, 73, 3, 56, -121, 122, 91, -4, 106, 84, 97, -51, 98, -48, -66, 64, -102, 123, 109, 2, -62, 108, -106, -78, 92, 62, -53, -43, -69, -26, -31, 8, 97, -63, -76, -38, -41, 47, -81, -26, 28, 34, -42, 37, 74, -67, 120, 114, -28, -1, 51, 77, 0, 126, 3, 67, -116, 76, 56, -80, -33, -81, 116, -45, -46, -54, 5, -86, -44, 11, -77, -89, 67, -111, 71, -103, -60, 20, 43, -54, -97, -29, 119, 52, 80, 91, -123, -26, 113, 84, 88, 114, 76, 87, -15, -77, -110, -121, -29, 99, -111, -96, 80, -92, 35, 114, 47, -112, -58, 112, -95, -63, 74, -86, 99, 97, 95, 19, -3, 53, -9};
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
    msg.setTimeStamp(0.8768014025693672);
    msg.setSource(63594U);
    msg.setSourceEntity(248U);
    msg.setDestination(36745U);
    msg.setDestinationEntity(31U);
    msg.op = 175U;
    msg.tas2acc_pgain = 0.1558597523580617;
    msg.bank2p_pgain = 0.5161149926956493;

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
    msg.setTimeStamp(0.013654219578506877);
    msg.setSource(6621U);
    msg.setSourceEntity(82U);
    msg.setDestination(21530U);
    msg.setDestinationEntity(93U);
    msg.op = 87U;
    msg.tas2acc_pgain = 0.9453914383660406;
    msg.bank2p_pgain = 0.31714703871983163;

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
    msg.setTimeStamp(0.607564384535078);
    msg.setSource(15934U);
    msg.setSourceEntity(19U);
    msg.setDestination(57577U);
    msg.setDestinationEntity(161U);
    msg.op = 55U;
    msg.tas2acc_pgain = 0.1846623697374844;
    msg.bank2p_pgain = 0.5850762427521798;

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
    msg.setTimeStamp(0.09683905056558517);
    msg.setSource(17784U);
    msg.setSourceEntity(234U);
    msg.setDestination(25461U);
    msg.setDestinationEntity(97U);
    msg.available = 2996942236U;
    msg.value = 60U;

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
    msg.setTimeStamp(0.5361917984897931);
    msg.setSource(42077U);
    msg.setSourceEntity(5U);
    msg.setDestination(61092U);
    msg.setDestinationEntity(45U);
    msg.available = 3060908393U;
    msg.value = 152U;

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
    msg.setTimeStamp(0.8791994610063544);
    msg.setSource(49831U);
    msg.setSourceEntity(114U);
    msg.setDestination(54431U);
    msg.setDestinationEntity(229U);
    msg.available = 4281610512U;
    msg.value = 251U;

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
    msg.setTimeStamp(0.3330768175461686);
    msg.setSource(6441U);
    msg.setSourceEntity(127U);
    msg.setDestination(51172U);
    msg.setDestinationEntity(59U);
    msg.op = 115U;
    msg.snapshot.assign("OZFFWULYKWOKZVTBRIQSJYAQDWASDQJCEGBEFERBTJFVXEODEHLGHSZHLMISPVRJTRNWAWNGDRQQMEVPBAGWKNTASGSLOVYKTZFNUDOBENULPQNORUNMHYGTXFAFZQDYBLUDTLRAFHYFWCUCZXCONCLARMISMBCDJVMXHGMKGRZPPISZHBIVUUBOHZADKYOGGDHPMIRCWXIFJEXHNW");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.458401331447731;
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
    msg.setTimeStamp(0.35758124279241044);
    msg.setSource(14720U);
    msg.setSourceEntity(250U);
    msg.setDestination(29170U);
    msg.setDestinationEntity(173U);
    msg.op = 172U;
    msg.snapshot.assign("LJGDPMYDLQOEVNSYOMIOGWHLORZGBWNUVVZTFZKBBVAHKRUOUWADWZKDINJCQQEAZBHJJEDXZTCCXXIHOIPHBTLAGLVAYFSGHFRNWVIIXCEHAJONKCEKSX");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("YYUVJSZIYCKAXHVMHJFRTEWYXFVBFCIUJHCPCNABTQFTNZNVAWG");
    tmp_msg_0.visibility.assign("YJUTNELQVRCWCZHRLJ");
    tmp_msg_0.scope.assign("AUZGFICXWLHVSKYCTBDIWSRPHLOJVINEQCDFWFJKDBCRMSXWPHHCXENTDLUNRTVLWNTORAVOSEBOMKIHYPRNQXTTIFOUCHZYFCFWWEDWQDCTJAIEYPULFZGHEBVJSQDYVTGCTQEOHZDOWKCHBKJUVXFVUOBMPBQZNSARXQXLKRJH");
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
    msg.setTimeStamp(0.17297811659557827);
    msg.setSource(48696U);
    msg.setSourceEntity(85U);
    msg.setDestination(12330U);
    msg.setDestinationEntity(53U);
    msg.op = 189U;
    msg.snapshot.assign("DWMFYEBKZVJPNKIPUUKGNXEKETWVTADYILFTIZJLJHCZCVTGURHMDEJPXXWVDXNZLMOQTVRWRSPLDNCQIAGCNPBXQECBMFXGALHYWXIGXTATODNPBBDTIUJNFQBUYQHPMUHLVQWXAZBJKHFWYOJVKQHKPADUFZKWSWANLYILJSYSGUBBXOFHNPCCSGEKSFCRAGZVZERRQYJIOLCDRNHABCGSHMODSRTMTMVEIPYOO");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.9510575929849274;
    tmp_msg_0.lon = 0.1768175842674804;
    tmp_msg_0.z = 0.2819775611541725;
    tmp_msg_0.z_units = 9U;
    tmp_msg_0.radius = 0.7432505059020311;
    tmp_msg_0.duration = 54857U;
    tmp_msg_0.speed = 0.3232752595505155;
    tmp_msg_0.speed_units = 144U;
    tmp_msg_0.custom.assign("WKVYJEKWAOWMYISOVLQBZUQQPEWCGREMVIEODWNZFGDWNMWDRJQKOODATNBYFWTEOFNPCFGZUICJSVHFNSXHPDRJYJMCQMTNKELKUSZCPWPMIYZSB");
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
    msg.setTimeStamp(0.3054151371876478);
    msg.setSource(26704U);
    msg.setSourceEntity(100U);
    msg.setDestination(49347U);
    msg.setDestinationEntity(233U);
    msg.op = 117U;
    msg.name.assign("QENIVDHFZPGRNGBUK");

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
    msg.setTimeStamp(0.8402832400615708);
    msg.setSource(11939U);
    msg.setSourceEntity(220U);
    msg.setDestination(44028U);
    msg.setDestinationEntity(122U);
    msg.op = 205U;
    msg.name.assign("RZQQQTGKOJSDCHXZYYQVELUTHHCKAQNWHKENTAMUISPIHXLKXMCACRUWOGDIVPYOKUFBEPLWUOPJDXJFWDKDBSH");

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
    msg.setTimeStamp(0.5317611343601863);
    msg.setSource(45991U);
    msg.setSourceEntity(43U);
    msg.setDestination(58807U);
    msg.setDestinationEntity(195U);
    msg.op = 225U;
    msg.name.assign("NRGLKJISEYYVPKCAEONVNGBFPRJQFBIGSEXUHBDLXGZHUMEQWZEWAUGFNQGRMCXJDKQPSTWHRWHFUFJEJXZPZZAAILOSYCMBBYKRNKEMQCOHVZIMQTUTANPHPTNHXUEHQYSCWOSSWMVTOYARQDFRZBLTQAQKUMSYUIXMCNEROXGJKGYFA");

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
    msg.setTimeStamp(0.26253192705342887);
    msg.setSource(50679U);
    msg.setSourceEntity(65U);
    msg.setDestination(5801U);
    msg.setDestinationEntity(107U);
    msg.type = 38U;
    msg.htime = 0.15821300935344118;
    msg.context.assign("MPHRALTYVPFOOPQUHPCGWLBKXQETDRGSCNEVPNZGYCXLWMNSIQJLDJNNRUZM");
    msg.text.assign("UUDASWYNDWRARLPBJGIQOGQWFPSJXB");

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
    msg.setTimeStamp(0.2610250020241741);
    msg.setSource(434U);
    msg.setSourceEntity(46U);
    msg.setDestination(57749U);
    msg.setDestinationEntity(102U);
    msg.type = 128U;
    msg.htime = 0.7721440438205662;
    msg.context.assign("ZMNIFZDKLIVMOEREVQBTJTLELLAIFXAGRBJDSXLTPMWNOJPDAIFVUTFHBZBKAUWSQOHYHNDBCVVHUYPUXIZELWFMQWVUPLNRWOTSIAIQXDYRGTFHMIKSIDPEBWSJR");
    msg.text.assign("JTXYLKPBTRXNOGPBOQBGESUOHLLH");

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
    msg.setTimeStamp(0.8065469203986839);
    msg.setSource(2120U);
    msg.setSourceEntity(92U);
    msg.setDestination(608U);
    msg.setDestinationEntity(126U);
    msg.type = 136U;
    msg.htime = 0.06389839093134653;
    msg.context.assign("FQPYBZYTDWKFVLEDIHLTWPCEGSXONBTOBGREALNROYXIFYDPRNRPXNPSRHGWQSPVTIJJGHTKJQLAGVLDWBGUXSNDRWGOCVSZLTRONPFQQXVKEJLSUSVJBJJAVUHKFHLIIOUEZSUKCYWJIXYARMEMFVFJCWKHZAVZMMABZMADACGAIEZECHERPKMTQSNWVMTIDHXBMBOQGHLNXTXECDUIUMGY");
    msg.text.assign("NNYQEOOBERHGZWJUHDHVYVLSLSHOPXWOTNMCRICQJGODRDXEQPFHWAPECTKPQUFICEUMRYUVKOIWZIRTVSMJDLZNOLEMMWMFNXACQGFLVWXCCAPPHDKIZODJBZANBLHKKUATQTF");

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
    msg.setTimeStamp(0.03064280455457613);
    msg.setSource(58402U);
    msg.setSourceEntity(171U);
    msg.setDestination(15541U);
    msg.setDestinationEntity(34U);
    msg.command = 55U;
    msg.htime = 0.013222437666317477;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 204U;
    tmp_msg_0.htime = 0.11392730258133521;
    tmp_msg_0.context.assign("MQAVUFFRXISVIZOTUJYFODNHYURDLNGZWJXAJZJHXJRMRKBRMKJVAQESLKECONZHTEOWLVXCNHUAPQRHMXMXRKWFOOTCGPTWSWGLQOUBVPGSRVVWAEDVYJIBOCBMFWSXUZLRCBASXITPGJYIMITQRXQYUINY");
    tmp_msg_0.text.assign("CGYRABMLGBCXZBRZHJLQRCJXMF");
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
    msg.setTimeStamp(0.012586913916844078);
    msg.setSource(29534U);
    msg.setSourceEntity(210U);
    msg.setDestination(48505U);
    msg.setDestinationEntity(4U);
    msg.command = 127U;
    msg.htime = 0.050937822065229454;

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
    msg.setTimeStamp(0.6606399200053699);
    msg.setSource(16802U);
    msg.setSourceEntity(55U);
    msg.setDestination(58240U);
    msg.setDestinationEntity(189U);
    msg.command = 118U;
    msg.htime = 0.0508490136851828;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 210U;
    tmp_msg_0.htime = 0.8751400383261749;
    tmp_msg_0.context.assign("WQFLSHVEJLFQHNDQTFLBAYOXMVPFRVIFQJIECANOEVDWKDHEUCKKIGNIBKMZGJLBPPZXFEWALZXVPWMGAXROBGDVBQPSDMHPBZHFMJHYLLYQQWHREAGPISTOGSJWMUIKJDDRZ");
    tmp_msg_0.text.assign("IKHGJYNUJBIXPXGCDXVPSMQVWKCSBGHYJMRDUTATRTUMIDPVRLMIACCSPMOPBAQNJDTCNVGFVSKFMHEJUBOHAFTIYFYLRRTFADNUQQOJZKZSECMHLZWPXPIZTHWBHRZ");
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
    msg.setTimeStamp(0.9980603350931139);
    msg.setSource(55332U);
    msg.setSourceEntity(239U);
    msg.setDestination(6624U);
    msg.setDestinationEntity(146U);
    msg.op = 167U;
    msg.file.assign("MUNPBRKHWNLFQTBETFPPSFTDAZUMJDVQYVLLAHZABXUGQSCNENOFMJEKBGYPHBKBWUPUNGMBJZGXIMYKEAQMRJNIDKSZPTRCRKDWQJDULHKISRJNWZHGHVYGYIAAVPSDSOCROXGEOEAMEUOOXTSMIHIOJCXTTTVUVNHVEAROLWBQASYEMLXQCFQWDTWDULLMQVNGRKGZCFVCAIZZLXRCVLGSIIXYIWBYZNWCFJHJTYQFPF");

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
    msg.setTimeStamp(0.06026706543616556);
    msg.setSource(8070U);
    msg.setSourceEntity(196U);
    msg.setDestination(40374U);
    msg.setDestinationEntity(147U);
    msg.op = 11U;
    msg.file.assign("JODNYNZGNEZOESGOSPUJCIDLKTUCBOFRZSQXPRUYVHKUDDJPZVSFBDQGBLNGQKNLYYAEWNYVAIAVKMIAPBRTPFMXCRPMWLVOVKQFTPWEDYIHMCJIRFMLELOHGLDLHUBWIKFCXMBCEHOXYTSHBIUZDKFXUTJMTRZLHWVEGJTVQNLMMRXCIWWQTXGPINJWXKTVSXEJPCAXMFUUHHVDWESIQGBACZASQF");

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
    msg.setTimeStamp(0.6525599098611569);
    msg.setSource(27213U);
    msg.setSourceEntity(37U);
    msg.setDestination(2365U);
    msg.setDestinationEntity(18U);
    msg.op = 91U;
    msg.file.assign("GEDNDLWOXRCXOFEWZWZVBNIXKOLRGGLIMUJITZZEQTPDVZDNKSMMROECUQDQQJVWCWDMVCPHYHAQPFJOBMGCBBFUPUYXKPIHIKFPDLWWPASVQLTSMYELMCZAQGQUNVGKQISKSYBGATWSENJARCKKYRXBZICYAOOQTXKEYSUJHTZYVFHTMXPEMJOHSCBXRKJCBOISLZDXFNFLYAFWFHHRUDBGTIAEEUI");

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
    msg.setTimeStamp(0.43303954605174033);
    msg.setSource(28613U);
    msg.setSourceEntity(208U);
    msg.setDestination(39286U);
    msg.setDestinationEntity(64U);
    msg.op = 58U;
    msg.clock = 0.3208500414890485;
    msg.tz = 101;

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
    msg.setTimeStamp(0.9220579002780325);
    msg.setSource(30543U);
    msg.setSourceEntity(176U);
    msg.setDestination(51231U);
    msg.setDestinationEntity(147U);
    msg.op = 239U;
    msg.clock = 0.8591799415657014;
    msg.tz = -52;

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
    msg.setTimeStamp(0.6835654938265554);
    msg.setSource(9235U);
    msg.setSourceEntity(6U);
    msg.setDestination(25861U);
    msg.setDestinationEntity(212U);
    msg.op = 155U;
    msg.clock = 0.5343234614844239;
    msg.tz = -102;

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
    msg.setTimeStamp(0.46092683247500343);
    msg.setSource(61906U);
    msg.setSourceEntity(85U);
    msg.setDestination(27217U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.6697256908756116);
    msg.setSource(45028U);
    msg.setSourceEntity(149U);
    msg.setDestination(28026U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.45218247525390065);
    msg.setSource(14617U);
    msg.setSourceEntity(91U);
    msg.setDestination(62912U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.8073342541360966);
    msg.setSource(7605U);
    msg.setSourceEntity(15U);
    msg.setDestination(28833U);
    msg.setDestinationEntity(176U);
    msg.sys_name.assign("AJSPIZZGQVQUPHKSX");
    msg.sys_type = 116U;
    msg.owner = 64418U;
    msg.lat = 0.9608945114941809;
    msg.lon = 0.10437454071331687;
    msg.height = 0.32882771366509134;
    msg.services.assign("HZRPMQGKUEIIVYJXTPHOGSI");

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
    msg.setTimeStamp(0.1905835374962862);
    msg.setSource(49464U);
    msg.setSourceEntity(177U);
    msg.setDestination(64974U);
    msg.setDestinationEntity(143U);
    msg.sys_name.assign("TZNUIYIVSZRPIDSXAYXKWFDXPPWSHNNHIQDBERWYOOQOSEHXHPZLGLOQEAT");
    msg.sys_type = 121U;
    msg.owner = 45129U;
    msg.lat = 0.7507489469951848;
    msg.lon = 0.9361001334090902;
    msg.height = 0.3495657245736027;
    msg.services.assign("JSUUEVUZREAPTNCWXMJRXOXKVODZGGCZYEBRCATIOIYYUDKJLKYFUXWSFABOMFFQJGKN");

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
    msg.setTimeStamp(0.9846667938604784);
    msg.setSource(61746U);
    msg.setSourceEntity(142U);
    msg.setDestination(2078U);
    msg.setDestinationEntity(163U);
    msg.sys_name.assign("GUFRUQKOZKGUIXIMOSAPUBGQOEXAOZFNWVMRENLQBHAIXQTUQIYJERMXXXZALNSTRHTDYHKNFYKTKCIKACAZQ");
    msg.sys_type = 61U;
    msg.owner = 51638U;
    msg.lat = 0.34280880316499784;
    msg.lon = 0.10284925495733632;
    msg.height = 0.9395459886541602;
    msg.services.assign("RCFGVLXYRYQUKAYDQBUPDZZUSZXNCEXVSTBFWQCFZFSAHCZPPOIBFWRIHJVFCMPAKVIMKGYPUVNMBMAQPDXYQXAFXLNRFQWTFLOOOKLDEMLACHYWQWNXIAMBVKKJJNIPPHGQUFHTTOVOEYUEEEXDTHEJPAJIKBZOVCCJOYGUDJGNAZDJGTR");

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
    msg.setTimeStamp(0.08244028790506797);
    msg.setSource(43473U);
    msg.setSourceEntity(23U);
    msg.setDestination(41298U);
    msg.setDestinationEntity(75U);
    msg.service.assign("RMVBSKTJVYPDJSYRAODPZXLOMJFKLDMHBFHCUWQVCISEECQTUOYZLQSJINNXFAYARVJOJGTWWYDLVLZQSGTECNHTZSXBLPYODMXGRMARJAQTHGZHKBEZUABPNCINUCMXFFGISECLACMHUPYNZAFOEYKBXRVFZMTQWOGSUKBNDKPNGUNUMVIIGVWBROZDWQDKZDHAPYITPUXIEWQXUCOETRILFY");
    msg.service_type = 129U;

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
    msg.setTimeStamp(0.14637995945418858);
    msg.setSource(6002U);
    msg.setSourceEntity(82U);
    msg.setDestination(11797U);
    msg.setDestinationEntity(209U);
    msg.service.assign("BZILISGZYQGLOPJVGEVDWKKYIEYNNNVMAAXYUCDKSEENPOTGQQHDSHSDPDVDGDAGXUFYUJDLBQWOSKOBKFCCTGQLRYZJRKDNAHPBFWJUEEVUKYABWTGWLTQXOLNARZZZZETTQFFPWXSRMAQXMYBFSMMJORZMNXXBCQCDFILXROPCFLYRVXOKIERKWUCAUJUINJUJKFMHZNNMPRGTMPBE");
    msg.service_type = 118U;

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
    msg.setTimeStamp(0.7091491647657884);
    msg.setSource(24685U);
    msg.setSourceEntity(57U);
    msg.setDestination(19790U);
    msg.setDestinationEntity(115U);
    msg.service.assign("DBYVWLFASTKMPGFRCVYNVFWNCXNUCTCFMVHABSBUAAXXHDHBPBALPGFHTWNEEDYQEYWVEWUIXSJVGWNRMPMKZOQHZEZLOCJSOYUIZCHVYFLXBQPPPEJXNBTOXDSDGLWYLAGIOPDIAQRMYGYJXJCAVFOJTTWPGRSCKSTNWIXIUNNUMLNQRFKTZKROKMZGXMOQBLJDTJUGAQEHUUHDFLKMZLRCEJVYOKIBZQJMIZFKCDVWRIQERBSQKHUZ");
    msg.service_type = 116U;

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
    msg.setTimeStamp(0.5694754999944228);
    msg.setSource(1419U);
    msg.setSourceEntity(154U);
    msg.setDestination(46476U);
    msg.setDestinationEntity(194U);
    msg.value = 0.7541872110754391;

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
    msg.setTimeStamp(0.5842668456536764);
    msg.setSource(20560U);
    msg.setSourceEntity(68U);
    msg.setDestination(21254U);
    msg.setDestinationEntity(141U);
    msg.value = 0.7551275691365676;

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
    msg.setTimeStamp(0.2638387812926126);
    msg.setSource(35778U);
    msg.setSourceEntity(239U);
    msg.setDestination(55981U);
    msg.setDestinationEntity(161U);
    msg.value = 0.9216594145408037;

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
    msg.setTimeStamp(0.6040785566357196);
    msg.setSource(9799U);
    msg.setSourceEntity(29U);
    msg.setDestination(36834U);
    msg.setDestinationEntity(22U);
    msg.value = 0.6465942814934119;

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
    msg.setTimeStamp(0.16435051973882675);
    msg.setSource(11453U);
    msg.setSourceEntity(104U);
    msg.setDestination(58526U);
    msg.setDestinationEntity(4U);
    msg.value = 0.34900302062132427;

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
    msg.setTimeStamp(0.6509443349218974);
    msg.setSource(8407U);
    msg.setSourceEntity(253U);
    msg.setDestination(58741U);
    msg.setDestinationEntity(4U);
    msg.value = 0.2152142255807743;

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
    msg.setTimeStamp(0.3129862781557876);
    msg.setSource(19400U);
    msg.setSourceEntity(160U);
    msg.setDestination(23319U);
    msg.setDestinationEntity(180U);
    msg.value = 0.3418672813167857;

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
    msg.setTimeStamp(0.5988977120143402);
    msg.setSource(45936U);
    msg.setSourceEntity(133U);
    msg.setDestination(47157U);
    msg.setDestinationEntity(54U);
    msg.value = 0.09564943556056005;

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
    msg.setTimeStamp(0.8025187801688672);
    msg.setSource(26503U);
    msg.setSourceEntity(133U);
    msg.setDestination(32138U);
    msg.setDestinationEntity(171U);
    msg.value = 0.7352764191571303;

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
    msg.setTimeStamp(0.3996185019642903);
    msg.setSource(43736U);
    msg.setSourceEntity(188U);
    msg.setDestination(34953U);
    msg.setDestinationEntity(187U);
    msg.number.assign("VLEOCSYZZXXQOXOSISRWDGOHBOYFPSDTCZUHBMCDIVXSFUEYUGMAIQSAQGTRMWJFNKHJUGKBNZSBDVZAKTSVRXCDQMTUMQQEYMANMABVDFABZIMWDNCUUOXRPQGCVGLNVRFGKTWQKLTWTBEKEKXZRTHNPOZWSHDGYCRCWNWFDAPHNGYCHEQWAAXGJRNHUEMPELIXAKVYKUOFIJREIWUPJHJTOXLIDYIZFJQT");
    msg.timeout = 4667U;
    msg.contents.assign("KRAMLLSVJMZADBDVFPBLIWAMTNGJWTHXNBOEZMUNOFCCWOMPHLOHCRVJFDXMDFFBTQOGUYIHRVYDCJXHKZLQPYISMUUHKRCAXOFYBEKKVNXKSAZEJNREQAKQOSROWYJIGTHPRYSDEDSOXREBWZVGRGGTJZGPBEGIAQULWLYIJFGPTIDUKZDLBCFPNXPNGSEHWZVIZCTXULMVUIABRFZINKCTKLTJVWBQFXTAQ");

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
    msg.setTimeStamp(0.06888170077447975);
    msg.setSource(55724U);
    msg.setSourceEntity(201U);
    msg.setDestination(2549U);
    msg.setDestinationEntity(136U);
    msg.number.assign("JVHUUZBFXWQCJZLOWHZVIVTMLILKQHTTUXYVIDHKKPOZYDPVGWPJBGNNMSQRYQKRGFLTXVZJVKLIASDDUUJGKWYOLDRBUYAIWWPGONUTXSEZTDWCBJDQAQBNAJACIGEWUNCZCUMCSMKHQQOAEPDLNMYRJXGOKCCFPYVNITTEZOWBCPMTQFENI");
    msg.timeout = 53959U;
    msg.contents.assign("KLRVPWNNETFTGXNKGSMDKYXZEJCDLQYBUFAHHUFMBNJYCGHUGASKWXMGMIOJYAEIRUJHBSARZFVRUZCYVXGSELWEDYHILFERQPHKXURQPGNUPQMXVVTFDWIJQDINYOAPZSULVISISBUJRVOTREKDZZMYKSCFZZCBWEWOLMTNQAMJVMQGXWQMGDITLNKTGCJXBBLITQ");

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
    msg.setTimeStamp(0.10367460644145421);
    msg.setSource(16395U);
    msg.setSourceEntity(147U);
    msg.setDestination(33832U);
    msg.setDestinationEntity(20U);
    msg.number.assign("YBCXPQNFMJZDWBFHGGPYWCIAGZCULGNVTDUBDPITZOXJEMQUFUHXIVVZYNUNMLRJISLRHBTRCASPGHIAEQYOTRBYOEKIWLJTMVQDHOXCPXXVKHKGAVMUJVZKATEFWNPTPJISKMUSRUPMJECYGOABDXNLUTWFQKXYLJXQYVZMFTTDKRRYLSQEOHCODZOZRDNWKKJFDHFGNSWXLGJIWALCRSVSEMBSNBOSQKCMQZBNAYFGQCAAVREPD");
    msg.timeout = 57991U;
    msg.contents.assign("PLSLEPQJSHGNPAFNLDCWMTDKLTJLWISZKRLDNXVTGRPRGAPKIZCIVPQFTSBVGUKTNZXRTFHVMYZXZ");

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
    msg.setTimeStamp(0.8294964055210832);
    msg.setSource(14802U);
    msg.setSourceEntity(54U);
    msg.setDestination(34534U);
    msg.setDestinationEntity(218U);
    msg.seq = 1683938434U;
    msg.destination.assign("SXHCCGIOYYTKZRIZRMGIORETFZXPBFQRWGSZGTMUEHERJZBUONRDSEDAGVHSDJNLAXYFJXWEQRPLBCILFNMANFMEYCVKRPOWUGJWYMQSKOYSASHNPMUTCEVQLXUHYOOQBJLHUUKATEVLZKABSTHUTCLYBQGKQASZFIVHJBKXGHUTWCXDPWNZDGF");
    msg.timeout = 24909U;
    const char tmp_msg_0[] = {101, -14, -125, -91, 35, -62, -90, 79, 108, -5, -48, 5, -93, -17, 120, -127, 100, 104, 36, 36, -78, 68, -18, -118, 104, 6, 117, -43, -95, -33, 24, 79, -110, -73, 0, -61, -79, -46, 65, -11, 126, -126, 85, 83, 58, -71, 116, 59, 25, -95, -67, 106, -85, 33, -124, -52, 66, -73, -85, 6, 34, -122, 18, 46, -24, -79, 96, -1, 48, 63, -63, -106, -125, 68, 41, 103, 52, -2, 126, -18, 70, -27, 63, -117, -33, 39, 5, -89, 7, 81, 51, -58, -12, 13, -39, 47, -59, -63, -70, 84, 122, 43, -44, -53, -74, 71, -25, -15, -98, -85, 77, 5, 36, -127, 24, 74, 14, -45, -88, -22, 100, 28, -7, -18, -48, 39, -88, -24, 82, 66, -22, 126, 34, 117, -18, -24, 31, 16, 81, -24, 91, -72, 29, -21, -19, 61, -62, 108, -7, -39, -95, -18, -72, 9, -47, -81, 5, -101, -27, 73, 39, -84, 102, 88, -105, 27, -42, -91};
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
    msg.setTimeStamp(0.518719469284758);
    msg.setSource(51862U);
    msg.setSourceEntity(234U);
    msg.setDestination(38508U);
    msg.setDestinationEntity(30U);
    msg.seq = 3335339052U;
    msg.destination.assign("IFKVLEJIOUCEOZNSAWFNBPAGSRSFLLPVXVVJEPLYZPSJDZXWCVGAEFLEPKYSIOB");
    msg.timeout = 24795U;
    const char tmp_msg_0[] = {-59, -30, 76, 48, 79, -24, -22, 117, -102, 46, -11, 115, 65, 53, -111, -16, -89, 103, -37, 111, -31, 57, -60, 49, 107, -3, 103, -78, 72, 64, 5, 22, -76, 94, -33, 101, 99, -104, -61, 110, 49, -52, -123, -107, -23, -17, -53, 109, 105, 3, -11, -77, -29, 19, 66, 44, 30, 112, -11, 112, -82, 123, -68, -115, 106, -9, 58, 56, -126, 90, 120, 64, -33, 17, -54, -61, 84, -81, -28, -128, 9, 38, 76, -58, -98, -77, -49, 2, 95, 44, 58, -17, -71, -80, 77, -111, -62, -93, -21, 89, 46, 117, -21, 103, 13, 42, -47, -118, -12, -83, -2, 31, 71, 21, -24, 4, -125, -81, -45, -73, 74, 108, -84, 7, 108, -72, -44, 51, 105, -44, -39, -105, -110, 101, -82, -34, 38, 79, -122, 45, 26, 7, -44, -96, -96, 11, 39, 58, -109, -24, -5, 25, -23, -128, -54, 11, 31, -95};
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
    msg.setTimeStamp(0.5988838883626764);
    msg.setSource(53670U);
    msg.setSourceEntity(33U);
    msg.setDestination(13617U);
    msg.setDestinationEntity(100U);
    msg.seq = 2616297706U;
    msg.destination.assign("NWTHCQNJFULBRPAZGQDEBYOTHT");
    msg.timeout = 22203U;
    const char tmp_msg_0[] = {59, -127, -73, -2, 104, -50, -120, -116, 107, -101, 108, -25, 94, -99, -74, 34, -88, 9, 101, -67, 38, 52, 41, -106, 113, 40, 118, -120, -117, -62, -105, 91, -92, -120, 71, -94, 44, 84, 57, 42, -38, -107, 68, 9, -106, -19, -62, -88, -54, -70, 0, -24, 95, -30, 47, -3, 45, 46, 99, -2, 59, -118, 83, -23, 52, -60, 92, 61, -93, -13, -77, 103, 12, 56, -114, -3, -62, 113, 22, 100, -1, -5, -41, -124, 57, -55, -126, 92, 110, -107, 91, 1, 60, -21, 63, 102, 123, 88, 110, -15, -116, -93, 71, 73, -106, -124, 118, 102, -85, -15, -57, 76, -22, 12, -109, 74, -44, 5, -46, 76, -88, 3, -50, -122, 40, -37, 123, 76, 100, -36, 82, -68, -75, 61, 112, 51, 87, 94, 45, 36, 64, -32, 51, -33, -121, 50, -101, 126, 108, 72, -17, -125, -80};
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
    msg.setTimeStamp(0.3312826257811564);
    msg.setSource(23851U);
    msg.setSourceEntity(94U);
    msg.setDestination(10218U);
    msg.setDestinationEntity(209U);
    msg.source.assign("OJDNKBKQVLZKEJGLCWVCOXBQDZCRXQDJPILUPKVVCBYTNLTLJC");
    const char tmp_msg_0[] = {-88, -23, 92, 125, -4, -28, 35, 42, -79, 42, 48, -70, 18, -79, -87, -21, -38, -63, -85, -50, 107, -80, -98, 125, -119, 9, -13, 29, -8, 95, -51, -15, 92, 114, -91, 116, -60, -121, -49, 94, 3, -99, -52, 35, -22, 39, -4, 84, 64, 19, 33, 88, -106, 28, -35, -96, -126, 45, 59, 61, -21, 92, -122, 2, 69, 122, -17, -60, -76, 16, 19, 71, -58, 6, 75, 40, -47, 78, 66, 58, -12, -111, -59, 49, -56, 100, 85, -82, -5, 48, -54, -69, -96, 57, -39, -30, -111, 77, 70, 100, -67, 64, 121, 34, 52, 10, -78, 25, -99, -121, -91, 40, -107, 97, 94, 104, -40, -55, 1, -43, 46, 30, -62, 70, -75, -120, -25, 74, -46, 61, 71, 71, -26, 94, 58, -24, -40, -100, 124, 117, 64, 118, 34, 30, 44, 39, -101, 113, 11, -55, -66, -48, -46, -22, -29, 122, 20, -41, 40, -104, -116, 109, 4, 26, -98, -84, -82, 59, 56, 18, 62, 86, -38, 62, -29, 31, -109, 96, 98, 9, 20, 65, -21, 105, 17};
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
    msg.setTimeStamp(0.07748544285602277);
    msg.setSource(29237U);
    msg.setSourceEntity(131U);
    msg.setDestination(57502U);
    msg.setDestinationEntity(60U);
    msg.source.assign("KUMOGVYETPUKQCGVMGHIINFKAJFWVPUKWGUQYOFOBJMOMHDWXXBEGZSOGZODQUNASYRFHANZEBWSTCQAIJRGJDVLPIADVNJLEJQBTQKLIYOXRULEHYIWKIUFLWPSKRHLMVYCOZYHJDUFTGRKWCTLHTYSVXSJRFRBSMLCZDYXLMNSTIQHNBUCBMDSTKCNEVDMAZCYXPVRPONWCEPJFGZPVAHAKJMSOWGZNPULBXETDCFRITQBXEFDE");
    const char tmp_msg_0[] = {-72, -70, -67, 80, -118, -90, 105, 116, -94, 70, 69, 12, 96, -80, 72, 73, -51, -115, -8, -124, -45, -108, 54, 74, -125, 64, -114, 6, -13, -48, 3, -41, -112, -75, -61, -37, 52, -80, 6, 69, 116, -59, -79, 21, 121, -44, -41, -5, -57, -45, -73, -80, 13, -125, 14, 22, 80, 44, -127, -38, -111, -10, -28, 33, -61, -50, 45, 126, 72, 1, -128, -58, 120, 106, -93, -10, 67, 120, -18, -114, -88};
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
    msg.setTimeStamp(0.7452793193426545);
    msg.setSource(48038U);
    msg.setSourceEntity(144U);
    msg.setDestination(61253U);
    msg.setDestinationEntity(3U);
    msg.source.assign("JNDKJMBEJJZKPRVBCWDJJCTAKFYPCOUMLEWVYOTBRHMHCWGEXMDQSIFFONVYYNYVSZHMVUHDNOIWXOKMNIGWAAVVNGG");
    const char tmp_msg_0[] = {73, 121, -70, -81, 112, 21, -107, 114, 124, 118, 54, 125, -91, -14, 101, 100, -61, -124, -128, -33, -11, 19, 22, 3, -53, 70, -39, 117, -24, 79, 22, -109, 80, -114, -125, 56, -4, 88, 112, 94, 50, -91, -97, 22, 44, -55, 101, 84, 19, 62, 44, 78, 107, -127, 119, 62, -124, 56, 0, 122, -69, 28, -39, 14, 8, 14, 33, -35, -27, 107, 125, -76, 98, -89, -8, -23, -40, 62, 74, -82, -126, 51, 81, 70, -99, -54, 120, -18, 39, -113, 74, 54, 78, 60, 110, 45, 42, -43, 40, 8, -59, 97, -53, -48, 115, -38, 52, -50, 5, 31, 27, -20, 119, 8, -44, 80, -86, 52, 126, -54, -118, -69, 54, 54, -57, 110, 16, -73, 91, -20, 113, 85, 82, -96, 8, 34, -57, -26, -30, 60, 56, 107, -107, 3, -53, 89, -84, -106, -5, -17, -5, -48, 30, -91, 20, 35, 52, 90, -24, -51, 121, -43, 81, 61, 104, -115, 109, -4, 42, 106, 50, -116};
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
    msg.setTimeStamp(0.7656514445044849);
    msg.setSource(13147U);
    msg.setSourceEntity(204U);
    msg.setDestination(42510U);
    msg.setDestinationEntity(104U);
    msg.seq = 2416137218U;
    msg.state = 5U;
    msg.error.assign("RYUJXCMCAYAEYTLEWBWJTMIVMXQODLTVDPSSIEGFLKPLDKNUAOJHXCJMLOKQHXGSNLQXRBMRTFDTILBODCTKRPIPROSVGAJFDSZZQZHH");

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
    msg.setTimeStamp(0.8715718689647648);
    msg.setSource(2745U);
    msg.setSourceEntity(22U);
    msg.setDestination(47211U);
    msg.setDestinationEntity(90U);
    msg.seq = 1150604159U;
    msg.state = 89U;
    msg.error.assign("KEHJNMTJCGHEGEHQFPVLUALYKAUGGRQNOPMVNNZSNOSZQTLZXVKJCJARJZDAV");

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
    msg.setTimeStamp(0.23026612865386642);
    msg.setSource(50167U);
    msg.setSourceEntity(63U);
    msg.setDestination(55657U);
    msg.setDestinationEntity(127U);
    msg.seq = 276878217U;
    msg.state = 176U;
    msg.error.assign("EZPXGBKFKDFIA");

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
    msg.setTimeStamp(0.9921279167223794);
    msg.setSource(26727U);
    msg.setSourceEntity(160U);
    msg.setDestination(51924U);
    msg.setDestinationEntity(75U);
    msg.origin.assign("CMNTMONWODLRXMSDFJSMRLXNJSVHKXHBBPTLCCHCYQJVLAPRPKRDTNFZHVWTBGAPNGVREJHKYWIOYFJACNCBBPHYIGFPIDOGUEAQNYVPSRIABUIZULOTGOEUUCFWO");
    msg.text.assign("TKVINCPNVKZKTGHJCDDQMKYABRVRYDRLFPMIXAHJVYCZGMQLEHIXREXNOQUWBIRLTQFNFOQIMHDYZTZNXYWEXJLZVPFDERWAEEWLZNFDAAMBDXKLOBEBDSJQJSZHFPPHCPKTOGUTGJNVWJJARWOQRMAZCLTJSHVBGOEZRFSOPSBCWCPUIXGVSULIZVKPOILUKHYJPOYCMDQWQRFOUSYMEHVUANKNKGNSXCWLUMXCQBASATYEIMGDUTH");

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
    msg.setTimeStamp(0.5180518293224583);
    msg.setSource(44334U);
    msg.setSourceEntity(212U);
    msg.setDestination(3958U);
    msg.setDestinationEntity(134U);
    msg.origin.assign("EXQPXRTVWRKVMAWPGJBCHIVXNECUNHZQUSFVBZBJCPDEJFNWNLXZUUEWXFBBFWFJQSKORPLTDOZOQYHHESYPURPIZKLHFRCUFQLHRDWDEZBEZIORHMGJAGQYFDTZISYMGJIBIBHQGTNZONIILSVKKATLQISULNNKWKHCSYDKGXPGWEMOGOQQKAFEJTAXDCMXHGTSUYAVWLMPDXCJTB");
    msg.text.assign("LFEQSOJELZYSMGFOWDCKGDDTWRWYJEUASLXEHTHGAZKXSIAHRYCBIHYGGRFNXBQUZWMYEFQQTXBUGNRLRZWUHVOERYJTKFVQCHMBJIAVVITFTSRJOKOMCBPDNBEZYVCOCYXANJYDGAPFTBQSZNHWJQSRPGKUVFOLLMLUEKQICMWMC");

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
    msg.setTimeStamp(0.5011198665258011);
    msg.setSource(60116U);
    msg.setSourceEntity(26U);
    msg.setDestination(22495U);
    msg.setDestinationEntity(5U);
    msg.origin.assign("LFDUVFKVQEQACENJHDZRNBSBRAMWRAZFRVQLBFDGBHGQMYTOAHWYYPVAXUOTNMSMXCBBNSJOFVILOJLLAOEDVPQPDDWLTDZMNXDRUQHHSGZNSIURJQANIREMLXSGEOPNVLXTLZMXSHUAFGKCYHYTPSOISBCTEDZGKIZFFUYQFVMPZWJZIYCGDWPUATBRUCUIVVYPHJCXSJKW");
    msg.text.assign("DDKMWOYPHWKWIBQQRGMZUVWIRYUANSBL");

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
    msg.setTimeStamp(0.536236003943246);
    msg.setSource(47228U);
    msg.setSourceEntity(77U);
    msg.setDestination(65424U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("LAPSBIXGSVCUTWDVRWHIAKPZTXMZMCQSWFHLMNXALFVHOARGPHDAUDXYJIYCDUJGEPQXTFIFOFEOMUKXGJHYZHCLBSAEXLVCUPVPQUQBKMERTNEOGYZMKGDGIQQVWIANKXOAVZNYIYDZHUSXWBLKNYTUMESREWTGMIJXVEJLLAUYJCQWNDDIMPBBUKRTVPMSRSPKBVTNYHYENRHTPSWEOQNQBOFWCJZOGWJFFIO");
    msg.htime = 0.30737298869863106;
    msg.lat = 0.23368201206492245;
    msg.lon = 0.9490860808022716;
    const char tmp_msg_0[] = {-29, 80, 23, 113, 121, -85, 77, 122, -125, -109, 29, -43, 114, -23, 39, -84, -36, 36, -112, -81, 58, 101, -41, 73, 116, -107, -7, 11, 98, 97, 30, 20, -107, -58, -51, 89, 47, -119, 33, -23, 31, 48, 61, -120, 97, -97, -59, -67, -71, -109, 54, -51, 11, -9, -27, 35, 52, 62, 32, 54, 27, -87, -122, 89, -57, 24, -1, -76, -8, -90, 39, 97, 83, -63, 65, -17, 97, -76, -111, -22, -121, -51, 89, -43, 28, -83, -70, 17, 57, -28, 49, -98, -92, -42, -61, -12, 45, 53, 8, -31, -30, -60, -92, 95, 94, -112, -21, -2, 52, 43, -32, -22, -91, 31, -3, 44, -11, 20, -50, 68, 0, 77, -75, -2, 91, 20, -24, -82, 95, 88, -75, -13, -11, -39, -19, 77, 33, 45, -46, 13, -82, -97, 118, -61, 116, -62, -103, 84, 115, -49, 6, -49, -10, -61, -39, -87, 29, 106, 77, -106, -96, -9, -74, 51, -35, 71, -62, 107, -103, 9, -51, 122, -35, 14, -121, 89, -103, 112, -45, -11, -42, -8, 52, 48, 88, -122, 70, -93, -119, -79, 99, -40, -40, -2, -115, 86, 104, 50, -37, 40, -81, -53, -7, 90, -15, 107, -7, -77, 114, 32, 50, -51, -22, -105, 89, -24, 98, 48, -79, 54, -31, 58, 77, -125, 93};
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
    msg.setTimeStamp(0.9432433478450765);
    msg.setSource(20169U);
    msg.setSourceEntity(119U);
    msg.setDestination(24998U);
    msg.setDestinationEntity(128U);
    msg.origin.assign("SIFIEUTQHCKPVCHTJLVZQHUBLCLNSTQQARCMMDBAQPYVTALHLPGSRFIBERGTSZNNADWCIOZVWOMIUZVRAXIDRKYJYKZKFGDTYJEBRSLBFMMLIDOXECXOLMZWJUOPPBDPOCKQDFFTJIWNHVWDRSKWGNWSAK");
    msg.htime = 0.17125083439223376;
    msg.lat = 0.748707911767973;
    msg.lon = 0.4637413285793197;
    const char tmp_msg_0[] = {-17, -74, 39, -87, -8, -30, -26, 93, 125, -78, 50, -14, 32, 13, -125, 61, -3, -58, 21, -48, -115, 122, -116, -18, 105, -107, 27, -56, -75, -90, 29, -125, -87, -16, -116, -63, 83, -53, -45, 112, -115, 69, 66, -121, -64, 56, -104, 31, 79, 28, -92, 110, 40, -43, -70, 61, -61, 4, -12, 3, 104, -23, -116, 43, -120, 6, -41, -72, 87, -10, -105, -127, -61, 122, 40, -126, -122, 113, 99, 83, 66, -57, 8, -100, -70, -2, 91, 117, -53, -8, 44, 62, 19, -80, 65, 108, 98, 77, 73, -111, 78, 76, 122, 71, 1, -61, 21, 82, -123, 109, 121, 102, 45, -107, -114, -62, -122, 80, -124, -92, -13, 74, 81, 58, -92, -39, -15, -117, -62, 42, -7, 125, 6, 58, 13, 9, 37, -76, -58, -13, 80, 16, -100, 36, -110, -49, -114, -88, 56, 45, 92, 85, -96, 25, -63, -103, -108, -123, -83, -35, -92, 39, 26, -111, -59, 71, -122, -57, -12, -105, -86, -59, -63, 0, 77, -77, 41, 62, -47, 51, -44, -83, -47, -10, -88, 27, -22, -119, 49, -34, 100, -46, 41, -85, 116, -116, -6, 50, -45, 82, -68, -24, -112, 60, -74, -85, -40, 120, 27, 105, 23, 117, -15, 1, -28, 31, 32, 113, -16, -3, -89, 99, 73, -86, 87, -27, 47};
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
    msg.setTimeStamp(0.12725668147677394);
    msg.setSource(33320U);
    msg.setSourceEntity(113U);
    msg.setDestination(35631U);
    msg.setDestinationEntity(68U);
    msg.origin.assign("WVPLBXUXBOUAFQCTNAVKNVYBHCKMQRYESPPGUZVZNOPYOZOBSFGRXDMZAJOLRDWAILDYSJNXNERWEMREJOCFLADDZAELRJSKQWMHIKGFXPFSQJFZLTJPXKAPGQSTSSOTHFNHCCJMHFEXOGTCIGIIDIVBMBSPYHHNUJGIDGUZHWOQXZYRBFUJTWBLKFLKOQVNYRYCUVCRYKGAITEMDEVKNWE");
    msg.htime = 0.25550973577724023;
    msg.lat = 0.5897364291398997;
    msg.lon = 0.2482133749480374;
    const char tmp_msg_0[] = {21, 107, 20, -29, 123, 71, -34, 114, 20, 72, 89, -119, -123, 122, -90, -99, 54, 95, -115, 119, -53, -101, -46, -114, 10, 49, 108, 11, 111, 55, 51, -44, 21, 62, 108, -64, -52, 68, 5, 118, 58, -23, 59, -52, 96, 23, -26, -22, -85, 58, -90, -81, 105, 115, 62, -55, -52, 123, 117, -31, -12, 105, 106, 93, 33, 1, 105, 51, 38, 52, -89, 74, -106, -103, 72, 57, -11, 65, -95, 95, -6, -86, -123, -26, -2, -7, -79, -94, -37, 41, 62, 21, -104, -17, 1, -10, -34, 101, -67, 55, -109, 110, 16, 101, 40, -57, -21, 64, 117, 32, 98, -6, 34, -11, 68, -34, 26, 120, -89, -105, 80, -87, -28, 8, 80, -113, -32, -12, -93, -111, 79, -42, -64, 56, 85, 23, 49, 15, 2, -71, -32, -43, 36, 65, -62, 104, 23, 91, -72, -125, 49, -26, -46, 13, -90, 86, 62, 88, 82, -101, -15, 84, 3, 37, -3, -122, 59, -102, 85, 58, 37, 122, -84, 28, -24, -65, -105, -66, -111, -118, 61, -114, -121, -53, 53, -115, 56, -54, -24, -25, -26, 67, 115, 46, 65, 73, 115, 79, -31, -20, 40, 71, 101, -17, 40, 9, -97, -33};
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
    msg.setTimeStamp(0.4421530948376109);
    msg.setSource(53703U);
    msg.setSourceEntity(91U);
    msg.setDestination(59930U);
    msg.setDestinationEntity(126U);
    msg.req_id = 54512U;
    msg.ttl = 61139U;
    msg.destination.assign("XZXDMGCPOUJCRSAEIBMKORIEHLGBJCSJTHODMBHKVNFXSPQAYQVAJZLATXYDWHHGGZFVLPKFXKSDIUGNCNITOKKPZOLBZ");
    const char tmp_msg_0[] = {-12, -25, -126, -55, -95, 112, 31, -100, -47, 5, -55, -20, 112, 12, 92, -104, 3, 60, -122, -31, -6, -97, 126, 38, -28, -56, -22, -123, -91, 102, -73, -87, 45, 120, -126, -118, 111, 17, 23, 82, -41, -108, 16, 93, 13, -94, -88, 106, -74, 3, -112, 109, -24, -65, 102, -28, 16, -71, 105, 53, 62, 74, 8, 116, -116, 57, -60, 2, 109, 99, 33, -61, 85, 76, -35, 10, -64, 33, 97, 103, 58, 39, -55, -125, -36, -79, -22, -28, 22, -8, -1, -89, -23, 104, 65, 110, -101, -76, 109, -102, -53, -92, -19, -92, -6, -74, -12, -46, -17, 75, -97, 88, -5, 66, -34, 1, -102, 4, 45, -21, -91, 85, -60, 110, -23, -87, 120, -42, 0, -3, 105, 34, -124, -79, 123, -64, 21, -68, -108, -101, -12, 40, 60, -50, 119, -89, -126, -83, 70, 72, -83, 87, 38, 43, -24, -26, 41, -85, 40, 64, -17, 26, 13, -123, -18, 51, 69, -75, 96, 93, -88, -88, 38, -47, 4, 50, 119, 18, 74, 123, 52, 106, 73, -89};
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
    msg.setTimeStamp(0.31485456465673733);
    msg.setSource(21948U);
    msg.setSourceEntity(96U);
    msg.setDestination(8821U);
    msg.setDestinationEntity(17U);
    msg.req_id = 17198U;
    msg.ttl = 23778U;
    msg.destination.assign("PIAOQLLKKTYEEROBMDYEHQJTKVAEXHNMPYSEFGQCIV");
    const char tmp_msg_0[] = {111, 118, 49, -36, 75, 88, -56, -118, -6, -1, 18, -121, -13, 27, -86, 36, -47, 76, -77, -24, 39, 88, -26, 3, -128, 33, 73, -89, 4, -39, 95, -54, 51, 67, -36, 24, 126, 44, 35, -90, -118, 123, 55, -116, -54, -51, 123, 42, -55, 13, -90, -106, 39, 62, 94, -78, -76, 57, 121, 42, 4, 22, -83, -2, 29, 35, 4, 76, -128, -110, 83, -94, -42, 17, 98, 32, 55, -72, 5, 125, 48, -1, 98, 73, 124, 91, -13, -70, -124, 96, -16, -80, -42, 49, 121, 109, -115, 37, 34, 43, -27, 113, -84, -44, -27, -75, -52, 42, 126, 87, 53, 103, 102, -85, 75, -102, -9, 63, 114, 88, 47, 12, -70, 8, -22, 28, -37, 80, -114, 121, -50, -23, 39, 5, -40, -70, 108, 34, -90, 45, -123, -114, -20, -55, 73, 44, -111, -66, 60, -69, 89, 43, 30, 24, 39, 14, 0, 30, -37, 110, -76, -120, -5, -93, 40, -101, -23, -16, 88};
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
    msg.setTimeStamp(0.01483721845229602);
    msg.setSource(35444U);
    msg.setSourceEntity(192U);
    msg.setDestination(38487U);
    msg.setDestinationEntity(122U);
    msg.req_id = 23122U;
    msg.ttl = 22236U;
    msg.destination.assign("IRUFRPSVJKIKHAJAPBLBEIMTTJQXLUSPUBLVGPVMFNOSJLEFKYFOPZHKT");
    const char tmp_msg_0[] = {-90, 35, -42, -112, -60, -70, 118, -65, -37, 76, 9, -77, 38, -79, 46, -15, 71, 54, -27, 105, -104, -103, 115, 0, -119, -122, -82, -81, 74, 102, 65, 107, 74, 98, -18};
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
    msg.setTimeStamp(0.6216969463437975);
    msg.setSource(23658U);
    msg.setSourceEntity(14U);
    msg.setDestination(17125U);
    msg.setDestinationEntity(105U);
    msg.req_id = 50958U;
    msg.status = 185U;
    msg.text.assign("GOWGRBSNWWGISJDNMRZYLKJPPQAGLKYDQIIVJFFMMWYEUETYIWAESGHXCZIGBEWYZKHZDUM");

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
    msg.setTimeStamp(0.82461877145012);
    msg.setSource(30028U);
    msg.setSourceEntity(155U);
    msg.setDestination(62344U);
    msg.setDestinationEntity(125U);
    msg.req_id = 34116U;
    msg.status = 115U;
    msg.text.assign("VLQIKWWSYFNJTIQSHWNZHSDMNIAEWPLFGI");

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
    msg.setTimeStamp(0.5059098043059448);
    msg.setSource(51495U);
    msg.setSourceEntity(124U);
    msg.setDestination(50969U);
    msg.setDestinationEntity(151U);
    msg.req_id = 45619U;
    msg.status = 157U;
    msg.text.assign("CUABTKEVDYVRSIAMFXFKXYQHTDLPGOVUDPSJTBDKLCRTGPAIBBBTFQKNSXDIDUBMBNWTNLBEWOZMBHMRQMYFEUGLJCHZGWXZUOMEQECWEPOXFZYSYKINRBNUXXRAWNNZEZVNEYQQVPAMRILSPYCUSTYLWDCOJSCXKLGUJZQHAPOPVFPUKMKDJFOMQQJHIUE");

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
    msg.setTimeStamp(0.9157260897342947);
    msg.setSource(1951U);
    msg.setSourceEntity(194U);
    msg.setDestination(33177U);
    msg.setDestinationEntity(179U);
    msg.group_name.assign("JFSPYTAYDGIORSIXFAHHDCNIA");
    msg.links = 376213497U;

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
    msg.setTimeStamp(0.6280477710508605);
    msg.setSource(60276U);
    msg.setSourceEntity(8U);
    msg.setDestination(36962U);
    msg.setDestinationEntity(173U);
    msg.group_name.assign("UNKWQORGYQTCVDLMJJZWTJTINLXVMNZHICAGRRWIEBMFKLJBOLXSBSDFDQNSJJBFQGAIZYAODGXSEEDSOOXVAFTQLRYNAWIPZJURBUKVFHHCCGELCHLUHEXEFBNMYPCESAMURAAPZOZMPJPMHWEZDFGK");
    msg.links = 238124087U;

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
    msg.setTimeStamp(0.04174449590694307);
    msg.setSource(40933U);
    msg.setSourceEntity(45U);
    msg.setDestination(14450U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("AKHSBISLHNUEMTCRXONHZDPEHXITXZUPTIYLKHDWHOVHZRRUKKXVSLJVMREDEHMWWVNDTLPPPABQBTMNJNAGSC");
    msg.links = 3154512725U;

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
    msg.setTimeStamp(0.6333580993485163);
    msg.setSource(63850U);
    msg.setSourceEntity(200U);
    msg.setDestination(25798U);
    msg.setDestinationEntity(226U);
    msg.groupname.assign("JZBVNEPMHUXCUEFZHDEKIIUAXYAOARNPTYEGAJRU");
    msg.action = 245U;
    msg.grouplist.assign("ETTFLJBEUNUQGFVZMYNFUHIMWIMWFILDWQGBZSXMYWFYEBUXOKKCRWSMBRYITJQAFXKBNJQEJGIPUUZDORHVVVDILDVTAYOBJPSZGAMOFACAIMRPLDRJFRWLHCNOH");

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
    msg.setTimeStamp(0.4831887392623715);
    msg.setSource(47864U);
    msg.setSourceEntity(102U);
    msg.setDestination(31522U);
    msg.setDestinationEntity(198U);
    msg.groupname.assign("YJHBZRDLTRGWFHSQXQOMXLECLNGFEMWPFEPVXYIOXLINBXKCAGZYDBGZHKGZPZIEAEAOKWSFMPLRLXMMKJDMLCAPAMLMI");
    msg.action = 122U;
    msg.grouplist.assign("CAXHILZQTKIGSQPQXZYOJOBVETQNMHNQBRLIUPBCGLQYXVJTGVZKOMWFDUHDEWLCQXYLOFJQHEIWZAYLNFMRILBNNRQTNXGAGRIGOUESD");

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
    msg.setTimeStamp(0.8394080046850045);
    msg.setSource(51555U);
    msg.setSourceEntity(164U);
    msg.setDestination(45610U);
    msg.setDestinationEntity(5U);
    msg.groupname.assign("JGWIXTFAGDQXMXCQOJIJTRKKLGNCELMFDYTJSWJRNSOARVVAWKVZQCBWORZZXCQSACLLYXVAWULGPHGYSWVWDPKOBIEXTYHETBVOOVYASNFFRVJWETCAIEPHRZUTRUZCKZHDC");
    msg.action = 252U;
    msg.grouplist.assign("KOWYJKIBLDRGWHRRVBSEOKXAUGNYZOWTIRJPAUYBCSPTUTFUZAQBSTPLHSUFICNKVGGDVHMGBZHUGZVNOJCOGAYPVSNXOKGXPETALBTXYIZQXDXFEEEQHQMXYKSEVTZMKRQIDGBWLLIHPBFIASJHXNDYBMLEEMNA");

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
    msg.setTimeStamp(0.33569305250458004);
    msg.setSource(22412U);
    msg.setSourceEntity(174U);
    msg.setDestination(63091U);
    msg.setDestinationEntity(158U);
    msg.id = 108U;
    msg.range = 0.15171777915869888;

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
    msg.setTimeStamp(0.17775848447331155);
    msg.setSource(45506U);
    msg.setSourceEntity(251U);
    msg.setDestination(63287U);
    msg.setDestinationEntity(163U);
    msg.id = 191U;
    msg.range = 0.9114544251673096;

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
    msg.setTimeStamp(0.6866711917348752);
    msg.setSource(43982U);
    msg.setSourceEntity(112U);
    msg.setDestination(57232U);
    msg.setDestinationEntity(165U);
    msg.id = 130U;
    msg.range = 0.743925388295656;

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
    msg.setTimeStamp(0.7609582782708315);
    msg.setSource(5446U);
    msg.setSourceEntity(164U);
    msg.setDestination(13515U);
    msg.setDestinationEntity(215U);
    msg.beacon.assign("FFNGYYSBUMCXWIATQVKBHEEXAASBDLJNYCPPDCLQJPIXPQCTXOQOKNLOJTHNDCVGBJXKRQKGXNVBEANSATISWAUCRLXAPFPNILWKDYXJSOEVZRMLZINHAYUJPQUWNEPFVVURHRYSMG");
    msg.lat = 0.9558278350168731;
    msg.lon = 0.061308550205028456;
    msg.depth = 0.3639789857888194;
    msg.query_channel = 34U;
    msg.reply_channel = 197U;
    msg.transponder_delay = 146U;

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
    msg.setTimeStamp(0.04908224495112423);
    msg.setSource(37764U);
    msg.setSourceEntity(236U);
    msg.setDestination(35830U);
    msg.setDestinationEntity(2U);
    msg.beacon.assign("JHPCSSRAWVNRMBFJIPSGCIDDNTHUYYDSEHIHLAZDIUQRYFHWBHRWLXZFHQPEBPMZCZQRRZGRMCFFOXLZYVKEILKWMRSUAGUMIKMVWOXOVUIXWELXOBEGKJMFYZTBHAVXOTYMTIRUTXDFBLUJISDANSNLUAPLJJGAKONQBLWZESKXJJTEKDSCQKZFEQZOAGTNXYJGTNCGBVCOJGWSVPDLGPADHVWBNMIOFHYN");
    msg.lat = 0.5598723635568869;
    msg.lon = 0.5267583241861684;
    msg.depth = 0.0073298033907723825;
    msg.query_channel = 146U;
    msg.reply_channel = 126U;
    msg.transponder_delay = 145U;

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
    msg.setTimeStamp(0.6500244040369577);
    msg.setSource(31445U);
    msg.setSourceEntity(93U);
    msg.setDestination(50006U);
    msg.setDestinationEntity(50U);
    msg.beacon.assign("YYSGPVHHNAWTOHYWPWBRGXZZYXSUJWZFLDUKYAHHIGEJYGBIFGXVAVKBQSJOKITKRNIUJXGLMWZMYMDVZDYPUCRWSHDGCNIRCURKQOPPHLPINDVJFGZB");
    msg.lat = 0.9499554445477943;
    msg.lon = 0.09572325091232414;
    msg.depth = 0.2632693109628518;
    msg.query_channel = 80U;
    msg.reply_channel = 43U;
    msg.transponder_delay = 59U;

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
    msg.setTimeStamp(0.05837305845603835);
    msg.setSource(59500U);
    msg.setSourceEntity(215U);
    msg.setDestination(36000U);
    msg.setDestinationEntity(228U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.8815733206967916);
    msg.setSource(30454U);
    msg.setSourceEntity(14U);
    msg.setDestination(53198U);
    msg.setDestinationEntity(241U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.8667700483137234);
    msg.setSource(21017U);
    msg.setSourceEntity(32U);
    msg.setDestination(35843U);
    msg.setDestinationEntity(234U);
    msg.op = 43U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VNGTSRZKXHYXFPMHCPPQWZYHBEBKGGNEOZHICTXESTCJZSCZDQ");
    tmp_msg_0.lat = 0.8663561434238263;
    tmp_msg_0.lon = 0.2967410559391003;
    tmp_msg_0.depth = 0.23509754185212384;
    tmp_msg_0.query_channel = 156U;
    tmp_msg_0.reply_channel = 172U;
    tmp_msg_0.transponder_delay = 71U;
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
    msg.setTimeStamp(0.9456097884021755);
    msg.setSource(22035U);
    msg.setSourceEntity(121U);
    msg.setDestination(100U);
    msg.setDestinationEntity(61U);
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 32936U;
    tmp_msg_0.rpm = 0.008422451254551544;
    tmp_msg_0.direction = 61U;
    tmp_msg_0.custom.assign("VJWDJZUSUWENEETXMOVLVDKDWUXXHQZJSCDGQMHGQMZMORQQGJGPAHIZVKWLFRTFGFMDICKLFHBBOPSYYCESTQRKWUYDMNTSISRPYDMFBKPLLASCSXOCLIORTXBBBCPZEJUBFOQALDYUYGXJICXEAAPXVBZWNHVGXUWVYNKIZIZOOHFNLNBCHYHDEGUSTMCRREANKLZVHTZJNAEJWFMSPIXUQBWL");
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
    msg.setTimeStamp(0.06713024187996885);
    msg.setSource(16848U);
    msg.setSourceEntity(54U);
    msg.setDestination(12702U);
    msg.setDestinationEntity(75U);
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 197U;
    tmp_msg_0.speed = 8901U;
    const char tmp_tmp_msg_0_0[] = {52, 113, 62, -82, -12, -37, 83, -12, -14, -78, 68, -51, 46, -15, -4, -75, 124, -63, -50, -85, 16, -111, 109, 31, 18, 108, 11, 58, -41, 27, 112, -109, 102, -29, 117, 25, -38, -39, -102, -62, -121, 105, -101, 31, 8, -65, -64, 17, 124, -33, -100, -69, 13, -75, 124, -110, -81, 60, -95, -14, -18, 123, -109, -92, -116, 101, -62, -52, -23, -60, 113, -18, 40, 96, 34, -63, 92, -33, -17, -90, 95, 13, 60, 109, 97, 78, -40, 52, -46, -28, -113, 16, 11, 47, 24, -44, 6, -116, -4, 13, -85, 69, 92, 29, -64, -84, -94, 126, 31, 13, 118, 105, 63, 81, 45, -36, 105, -48, 124, -70, 37, 89, 83, 124, 66, 94, -56, -111, 87, -71, -117, 106, 2, 63, -127, -109, 21, -32, -122, -23, -38, 115, -100, 85, -73, 5, -53, -46, -110, 48, 97, -105, 63, 71, 6, 124, 72, 14, -121, 57, -50, 74, -10, 116, 78, -70, 31, -25, -14, -53, 64, -108, 5, -89, -3, -87, 46, -14, -23, 70, 83, 46, -9, 16, 93, -96, -80, 45, 112, 69, -81, 77, 33, 7, -114, 118, 30, -64, -80, 118, -69, 11, -17, -44, -105, -111, -12, 119, 7, 27, 77, -8, -44, -29, 15, -29, -44, -116, -46, -98, 29, 94, -103, 124, -47, 94, 63, -66, 16, -4, -71, 65, 54, -10, -19};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.14948782311386766);
    msg.setSource(29070U);
    msg.setSourceEntity(182U);
    msg.setDestination(39921U);
    msg.setDestinationEntity(182U);
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.6347633279141043;
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
    msg.setTimeStamp(0.6511316905082931);
    msg.setSource(47907U);
    msg.setSourceEntity(97U);
    msg.setDestination(27853U);
    msg.setDestinationEntity(23U);
    msg.op = 212U;
    msg.system.assign("VNJBTCEGPMFUEORLQDAWYMHKZWNREQOPUZWTUMJOQXLSWBSYHVAVRRPNGEODVNBXGTOJIZDLKUIBSJYAEQDAQPSAZJELVXHXRYYEQIHCKAOIMWGPBDWPYEFJUADJZSCTK");
    msg.range = 0.6030699482596068;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.6068398352890653);
    msg.setSource(34114U);
    msg.setSourceEntity(189U);
    msg.setDestination(22430U);
    msg.setDestinationEntity(185U);
    msg.op = 253U;
    msg.system.assign("BUVBJJPXGMPAHRAGTWXFKOJALNERYQTNSOTHADJFGHYSGISQVRLAWCAGZCCGKOYGRDUPMOLXSNZFJHPTRITBLBEHZUPZBCUENCPYJVEQNWEKMMCYQNDRWZFFNVZVSMFIBIUTXQVBUKBYVPCXIXLYBHJTFXMDYOZSYDSJOEQAPWMXWSFDKTKAHJUKWLTYWTBHAOKPLLEVKOCSQNNRIZVSZRDEOUMICIHKEIVGZRR");
    msg.range = 0.7495708908104278;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 90U;
    tmp_msg_0.snapshot.assign("MLMIVBGUFGBRJYPDJTEACUVIORARR");
    IMC::TrexOperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 197U;
    tmp_tmp_msg_0_0.goal_id.assign("KRWBBLEDWFETGXEVXAOJCOPWSVNSBVVUUCDVRWFAMMQSANIDWFIMEZAWQFSGJQITLXHPGUPUZWXTMVYUDFGTAQQNCOLDNJTIGNPKJSMQHYKKY");
    IMC::TrexToken tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeline.assign("ADEQZJCTJODVWIFPEPILLDHIMDKWEDHCEUPMZLMTWSGQGILMZJCNTORQLQLKFGJPVVNIFUQUDRXAVBGDVTZNUBFXGQSAUCBYHYCRBJJVPRGVWXYZNILACYJZFXEBAYTSOCOMNZXXGGRIJUCPLQIKWRASPPKEHASRMROBEJCXTNSMIUFHVQOGKWCHZEOAOIVVFOEPNFHHASHKDTSDNSMWTRXBMHYLBBQAJWGFFYUYSYKUKWN");
    tmp_tmp_tmp_msg_0_0_0.predicate.assign("ENZEKRBNMLNYLTPJPSIHYMZMPAHPXCPQGLYHJIPOCJBZEQIDPQSZTOFZDWJGGTFDVVNANBCMOKMSILDKUQSBTQROAOUEYYOCAEOEXBALFVCJKMGVIKHFIWTJCADNNECGVDFZHJYFIGJWSUAMDWIYDXGNQCXUWWPROTRVXRZWAKZLTSUTAVQAXRVXBGRFRLRZBYYWIMUQSK");
    tmp_tmp_msg_0_0.token.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3482104733923417);
    msg.setSource(7791U);
    msg.setSourceEntity(171U);
    msg.setDestination(34665U);
    msg.setDestinationEntity(1U);
    msg.op = 41U;
    msg.system.assign("XBIETSQRSBNUOCGQNHRPXBSFEYQUHLMGIPAYGSPCZPKFABLXVJHUCNXNNVZJLVOVPAJBVLTTSFDBVDGYMWYWFQQQDYJLXMZEWFAMZDZKHGSIUXJFROKCSEVCLMHIJHOTTHBWTXRDWLFCKGZOWERTKUIDNIKQOHGZLQFMNPHDPYEEWBYRCYNEDUMPTVGAOUWVHTN");
    msg.range = 0.12447021065008435;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 46538U;
    tmp_msg_0.flags = 22U;
    tmp_msg_0.lat = 0.18866220058978467;
    tmp_msg_0.lon = 0.46750589445568225;
    tmp_msg_0.start_z = 0.7365789350391294;
    tmp_msg_0.start_z_units = 121U;
    tmp_msg_0.end_z = 0.13017466169352865;
    tmp_msg_0.end_z_units = 115U;
    tmp_msg_0.radius = 0.6191182643001576;
    tmp_msg_0.speed = 0.3203570226779475;
    tmp_msg_0.speed_units = 236U;
    tmp_msg_0.custom.assign("DNVEEDZNJDETGHJNZCLIL");
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
    msg.setTimeStamp(0.3530475121009059);
    msg.setSource(55933U);
    msg.setSourceEntity(254U);
    msg.setDestination(53586U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.42086559450406036);
    msg.setSource(49893U);
    msg.setSourceEntity(233U);
    msg.setDestination(29474U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.9400580731202584);
    msg.setSource(46194U);
    msg.setSourceEntity(53U);
    msg.setDestination(21419U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.620162387117678);
    msg.setSource(4556U);
    msg.setSourceEntity(86U);
    msg.setDestination(4297U);
    msg.setDestinationEntity(21U);
    msg.list.assign("AJRQWVYOSFXZAEGXGXKZIOYSRRLWSDLNQFBHPVVUOWUQITMWJPZNNKIMGBJCFEHZNSIWDYMOQBTIRHONGQCULSQIWDBMTYYCJXPEDLNCTPODKAQNAIGCGIMTSFRLZBUNTPKTMTEXUCMIYMVYDFSBVEYJHCLFJAXEEZLEOHVKPPDGPZJCFOFCNEZKGABYVBAZHXQRRUKWLOBSFAXWVXRHODUALPJRZAMJ");

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
    msg.setTimeStamp(0.4992542635843358);
    msg.setSource(18414U);
    msg.setSourceEntity(100U);
    msg.setDestination(19166U);
    msg.setDestinationEntity(80U);
    msg.list.assign("LQXKUSQLGKJDYVJOZEFETQNXBMTVNLWHYONMYKXCBMQCYHTUBOEDHBDGYVXROJHSTVGQDVCRAHIKQPJNVLLBKMCCNQOMXHWHJQWWEHKSAWRNIYQISZTXUEVSVAAURXZZXPUMFGITZGHAZJJAAEYOVAWFODPPKJFBRSEMDGAGUFTIOLFNWIPSBWFPSEPMYIGLCNZACKDZHPTMPWKEJFLEBOPTRURZISUYDW");

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
    msg.setTimeStamp(0.48396453486752966);
    msg.setSource(1689U);
    msg.setSourceEntity(99U);
    msg.setDestination(33858U);
    msg.setDestinationEntity(136U);
    msg.list.assign("KWXWMYCDLARGMISVABMVYXY");

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
    msg.setTimeStamp(0.8736349291369748);
    msg.setSource(30723U);
    msg.setSourceEntity(58U);
    msg.setDestination(30995U);
    msg.setDestinationEntity(67U);
    msg.value = -14697;

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
    msg.setTimeStamp(0.03989509711535988);
    msg.setSource(38971U);
    msg.setSourceEntity(223U);
    msg.setDestination(48330U);
    msg.setDestinationEntity(122U);
    msg.value = 25257;

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
    msg.setTimeStamp(0.6428153958153539);
    msg.setSource(44952U);
    msg.setSourceEntity(148U);
    msg.setDestination(35922U);
    msg.setDestinationEntity(237U);
    msg.value = 14541;

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
    msg.setTimeStamp(0.3657559541072466);
    msg.setSource(44202U);
    msg.setSourceEntity(120U);
    msg.setDestination(40031U);
    msg.setDestinationEntity(154U);
    msg.value = 0.17553171794139555;

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
    msg.setTimeStamp(0.9153155397587504);
    msg.setSource(15230U);
    msg.setSourceEntity(115U);
    msg.setDestination(33651U);
    msg.setDestinationEntity(137U);
    msg.value = 0.5018149384011502;

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
    msg.setTimeStamp(0.984075083952791);
    msg.setSource(21799U);
    msg.setSourceEntity(197U);
    msg.setDestination(37107U);
    msg.setDestinationEntity(243U);
    msg.value = 0.12323523347298648;

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
    msg.setTimeStamp(0.8899909308675205);
    msg.setSource(9223U);
    msg.setSourceEntity(3U);
    msg.setDestination(25849U);
    msg.setDestinationEntity(207U);
    msg.value = 0.7908571762789267;

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
    msg.setTimeStamp(0.2179905233678786);
    msg.setSource(10615U);
    msg.setSourceEntity(107U);
    msg.setDestination(40780U);
    msg.setDestinationEntity(145U);
    msg.value = 0.442836996598722;

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
    msg.setTimeStamp(0.03807340305838003);
    msg.setSource(18154U);
    msg.setSourceEntity(136U);
    msg.setDestination(41537U);
    msg.setDestinationEntity(101U);
    msg.value = 0.9314257946102731;

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
    msg.setTimeStamp(0.10929958086267044);
    msg.setSource(59003U);
    msg.setSourceEntity(243U);
    msg.setDestination(35225U);
    msg.setDestinationEntity(71U);
    msg.validity = 60109U;
    msg.type = 182U;
    msg.utc_year = 24038U;
    msg.utc_month = 239U;
    msg.utc_day = 52U;
    msg.utc_time = 0.821581542203493;
    msg.lat = 0.5664136169689816;
    msg.lon = 0.9225853232573025;
    msg.height = 0.14515190718321846;
    msg.satellites = 64U;
    msg.cog = 0.952845928229768;
    msg.sog = 0.8941044674013598;
    msg.hdop = 0.23659136782227697;
    msg.vdop = 0.5524451523700369;
    msg.hacc = 0.4747635906374834;
    msg.vacc = 0.21301216829536251;

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
    msg.setTimeStamp(0.27358589051490667);
    msg.setSource(42587U);
    msg.setSourceEntity(83U);
    msg.setDestination(39572U);
    msg.setDestinationEntity(49U);
    msg.validity = 10806U;
    msg.type = 139U;
    msg.utc_year = 26299U;
    msg.utc_month = 246U;
    msg.utc_day = 194U;
    msg.utc_time = 0.45118978378192054;
    msg.lat = 0.24657332164801482;
    msg.lon = 0.21691750859613168;
    msg.height = 0.46324312087081765;
    msg.satellites = 24U;
    msg.cog = 0.7543606024661427;
    msg.sog = 0.8282971859669818;
    msg.hdop = 0.03162212464877989;
    msg.vdop = 0.55141489422052;
    msg.hacc = 0.051275582403324416;
    msg.vacc = 0.8388679790260971;

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
    msg.setTimeStamp(0.012077831750848755);
    msg.setSource(14110U);
    msg.setSourceEntity(224U);
    msg.setDestination(45638U);
    msg.setDestinationEntity(173U);
    msg.validity = 52023U;
    msg.type = 119U;
    msg.utc_year = 43228U;
    msg.utc_month = 118U;
    msg.utc_day = 65U;
    msg.utc_time = 0.8551273537454694;
    msg.lat = 0.2770624626818369;
    msg.lon = 0.700581056731987;
    msg.height = 0.9072034768478332;
    msg.satellites = 93U;
    msg.cog = 0.06900747368250726;
    msg.sog = 0.5119721603170029;
    msg.hdop = 0.7752213962538878;
    msg.vdop = 0.3095003610030588;
    msg.hacc = 0.218941827421394;
    msg.vacc = 0.6183194294555966;

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
    msg.setTimeStamp(0.2455072567389175);
    msg.setSource(51029U);
    msg.setSourceEntity(199U);
    msg.setDestination(3562U);
    msg.setDestinationEntity(39U);
    msg.time = 0.6972618068940312;
    msg.phi = 0.5654003065157068;
    msg.theta = 0.5571040723506264;
    msg.psi = 0.22951178155142593;
    msg.psi_magnetic = 0.992981274799403;

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
    msg.setTimeStamp(0.10485768165000475);
    msg.setSource(15338U);
    msg.setSourceEntity(101U);
    msg.setDestination(36153U);
    msg.setDestinationEntity(47U);
    msg.time = 0.05951994743955691;
    msg.phi = 0.9097059611505475;
    msg.theta = 0.5155888313125564;
    msg.psi = 0.5668545312202895;
    msg.psi_magnetic = 0.3077735675103014;

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
    msg.setTimeStamp(0.3839214413236405);
    msg.setSource(7062U);
    msg.setSourceEntity(183U);
    msg.setDestination(45804U);
    msg.setDestinationEntity(59U);
    msg.time = 0.14524179752820254;
    msg.phi = 0.12453693190550841;
    msg.theta = 0.8102684390191963;
    msg.psi = 0.8267992348364488;
    msg.psi_magnetic = 0.8842214481568715;

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
    msg.setTimeStamp(0.9697428828616101);
    msg.setSource(3832U);
    msg.setSourceEntity(54U);
    msg.setDestination(50017U);
    msg.setDestinationEntity(4U);
    msg.time = 0.4744898858762421;
    msg.x = 0.3214546919555117;
    msg.y = 0.8382679305874957;
    msg.z = 0.3544732367671578;
    msg.timestep = 0.45128700674647904;

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
    msg.setTimeStamp(0.6568141592512996);
    msg.setSource(44409U);
    msg.setSourceEntity(241U);
    msg.setDestination(5508U);
    msg.setDestinationEntity(133U);
    msg.time = 0.34299211202315727;
    msg.x = 0.30596352008153427;
    msg.y = 0.46548503275290076;
    msg.z = 0.7209513207978233;
    msg.timestep = 0.20607936943747984;

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
    msg.setTimeStamp(0.2634395489094664);
    msg.setSource(60478U);
    msg.setSourceEntity(109U);
    msg.setDestination(48329U);
    msg.setDestinationEntity(134U);
    msg.time = 0.5324708949620265;
    msg.x = 0.45977755567221557;
    msg.y = 0.010290517310465375;
    msg.z = 0.8239429633424379;
    msg.timestep = 0.5167517233389973;

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
    msg.setTimeStamp(0.9307247754667013);
    msg.setSource(59957U);
    msg.setSourceEntity(85U);
    msg.setDestination(47394U);
    msg.setDestinationEntity(140U);
    msg.time = 0.9538701153630346;
    msg.x = 0.8545774645072574;
    msg.y = 0.9745222534175261;
    msg.z = 0.8701763941545014;

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
    msg.setTimeStamp(0.30150242226974633);
    msg.setSource(53145U);
    msg.setSourceEntity(105U);
    msg.setDestination(43400U);
    msg.setDestinationEntity(155U);
    msg.time = 0.16373455807728832;
    msg.x = 0.5503319360948961;
    msg.y = 0.398328639819057;
    msg.z = 0.5217607848269262;

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
    msg.setTimeStamp(0.3091854264329328);
    msg.setSource(4461U);
    msg.setSourceEntity(98U);
    msg.setDestination(4617U);
    msg.setDestinationEntity(100U);
    msg.time = 0.538698062330194;
    msg.x = 0.112292315669408;
    msg.y = 0.17671216052321626;
    msg.z = 0.3403830974186426;

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
    msg.setTimeStamp(0.9472559088814618);
    msg.setSource(269U);
    msg.setSourceEntity(222U);
    msg.setDestination(38207U);
    msg.setDestinationEntity(61U);
    msg.time = 0.03704584339608574;
    msg.x = 0.6691671863448058;
    msg.y = 0.27690042946068816;
    msg.z = 0.6931683607283656;

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
    msg.setTimeStamp(0.04229409394597028);
    msg.setSource(19650U);
    msg.setSourceEntity(193U);
    msg.setDestination(49751U);
    msg.setDestinationEntity(38U);
    msg.time = 0.9189329892112226;
    msg.x = 0.34230249991257766;
    msg.y = 0.7541281956698158;
    msg.z = 0.9414745308258166;

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
    msg.setTimeStamp(0.7533015384062701);
    msg.setSource(6638U);
    msg.setSourceEntity(1U);
    msg.setDestination(34964U);
    msg.setDestinationEntity(223U);
    msg.time = 0.4228973540191576;
    msg.x = 0.5963842070891323;
    msg.y = 0.13819886679057902;
    msg.z = 0.3496999991521269;

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
    msg.setTimeStamp(0.3196262519736437);
    msg.setSource(4067U);
    msg.setSourceEntity(90U);
    msg.setDestination(23473U);
    msg.setDestinationEntity(2U);
    msg.time = 0.5467602394233527;
    msg.x = 0.07135947056410019;
    msg.y = 0.8669332664459385;
    msg.z = 0.1511463432806397;

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
    msg.setTimeStamp(0.6827349047897495);
    msg.setSource(24200U);
    msg.setSourceEntity(48U);
    msg.setDestination(40374U);
    msg.setDestinationEntity(102U);
    msg.time = 0.3427121981531739;
    msg.x = 0.7945781499242358;
    msg.y = 0.43063747106327266;
    msg.z = 0.7094969951071347;

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
    msg.setTimeStamp(0.16954816967697306);
    msg.setSource(31558U);
    msg.setSourceEntity(199U);
    msg.setDestination(1375U);
    msg.setDestinationEntity(12U);
    msg.time = 0.7052913914617979;
    msg.x = 0.7134346695338957;
    msg.y = 0.694951728862374;
    msg.z = 0.3461648365712813;

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
    msg.setTimeStamp(0.34850716170702956);
    msg.setSource(61421U);
    msg.setSourceEntity(134U);
    msg.setDestination(14994U);
    msg.setDestinationEntity(225U);
    msg.validity = 27U;
    msg.x = 0.28819541303758667;
    msg.y = 0.7400061427495415;
    msg.z = 0.41614467452478;

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
    msg.setTimeStamp(0.6098679894967401);
    msg.setSource(20142U);
    msg.setSourceEntity(107U);
    msg.setDestination(17369U);
    msg.setDestinationEntity(134U);
    msg.validity = 198U;
    msg.x = 0.6176913172957135;
    msg.y = 0.5028594876080924;
    msg.z = 0.09168672021064783;

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
    msg.setTimeStamp(0.32125810529554544);
    msg.setSource(11454U);
    msg.setSourceEntity(194U);
    msg.setDestination(21531U);
    msg.setDestinationEntity(245U);
    msg.validity = 116U;
    msg.x = 0.6228695712305058;
    msg.y = 0.28166664337081726;
    msg.z = 0.13519806804635648;

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
    msg.setTimeStamp(0.4414131982890608);
    msg.setSource(64672U);
    msg.setSourceEntity(3U);
    msg.setDestination(10965U);
    msg.setDestinationEntity(250U);
    msg.validity = 139U;
    msg.x = 0.8826928589675017;
    msg.y = 0.549777715612688;
    msg.z = 0.8195211231906807;

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
    msg.setTimeStamp(0.0755623173231168);
    msg.setSource(6488U);
    msg.setSourceEntity(30U);
    msg.setDestination(53374U);
    msg.setDestinationEntity(107U);
    msg.validity = 104U;
    msg.x = 0.8205796063387512;
    msg.y = 0.27852034144235627;
    msg.z = 0.9047822145204464;

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
    msg.setTimeStamp(0.8375918637365413);
    msg.setSource(47990U);
    msg.setSourceEntity(2U);
    msg.setDestination(62557U);
    msg.setDestinationEntity(186U);
    msg.validity = 107U;
    msg.x = 0.5871350133936646;
    msg.y = 0.37033436797671315;
    msg.z = 0.42012415744886666;

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
    msg.setTimeStamp(0.6899277370919383);
    msg.setSource(58264U);
    msg.setSourceEntity(4U);
    msg.setDestination(37595U);
    msg.setDestinationEntity(100U);
    msg.time = 0.10619389040456217;
    msg.x = 0.5350818250285809;
    msg.y = 0.9777320475890703;
    msg.z = 0.0905567623825656;

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
    msg.setTimeStamp(0.6542254516790968);
    msg.setSource(1747U);
    msg.setSourceEntity(103U);
    msg.setDestination(27354U);
    msg.setDestinationEntity(140U);
    msg.time = 0.48306086085240485;
    msg.x = 0.6450897319565975;
    msg.y = 0.3581676466817969;
    msg.z = 0.66096274470493;

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
    msg.setTimeStamp(0.26799981423618524);
    msg.setSource(42604U);
    msg.setSourceEntity(137U);
    msg.setDestination(51591U);
    msg.setDestinationEntity(91U);
    msg.time = 0.900925861220911;
    msg.x = 0.29952830751769;
    msg.y = 0.09016636278798107;
    msg.z = 0.5639657593092948;

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
    msg.setTimeStamp(0.4636394274769261);
    msg.setSource(21151U);
    msg.setSourceEntity(105U);
    msg.setDestination(47793U);
    msg.setDestinationEntity(108U);
    msg.validity = 138U;
    msg.value = 0.07974871524093718;

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
    msg.setTimeStamp(0.8911447620215333);
    msg.setSource(56021U);
    msg.setSourceEntity(157U);
    msg.setDestination(8980U);
    msg.setDestinationEntity(156U);
    msg.validity = 243U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5789554952890251;
    tmp_msg_0.y = 0.4318564132061554;
    tmp_msg_0.z = 0.007818813805815283;
    tmp_msg_0.phi = 0.659736779388643;
    tmp_msg_0.theta = 0.2730831862346066;
    tmp_msg_0.psi = 0.683954457110472;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.558683350693938;
    tmp_msg_1.beam_height = 0.7933511783725712;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5624126985820257;

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
    msg.setTimeStamp(0.17998573888883673);
    msg.setSource(39723U);
    msg.setSourceEntity(195U);
    msg.setDestination(6116U);
    msg.setDestinationEntity(184U);
    msg.validity = 189U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.05857654101450582;
    tmp_msg_0.y = 0.7493588272794766;
    tmp_msg_0.z = 0.9959308006478514;
    tmp_msg_0.phi = 0.3972998796016559;
    tmp_msg_0.theta = 0.16462093497500097;
    tmp_msg_0.psi = 0.033343536086494985;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.3210081861113495;

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
    msg.setTimeStamp(0.5801874910963187);
    msg.setSource(57186U);
    msg.setSourceEntity(22U);
    msg.setDestination(24541U);
    msg.setDestinationEntity(22U);
    msg.value = 0.02698198326126633;

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
    msg.setTimeStamp(0.38318988030895074);
    msg.setSource(46748U);
    msg.setSourceEntity(137U);
    msg.setDestination(10011U);
    msg.setDestinationEntity(27U);
    msg.value = 0.7696470200674187;

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
    msg.setTimeStamp(0.35031176777329476);
    msg.setSource(62695U);
    msg.setSourceEntity(204U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(151U);
    msg.value = 0.5787937344336903;

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
    msg.setTimeStamp(0.22447473717247157);
    msg.setSource(11827U);
    msg.setSourceEntity(221U);
    msg.setDestination(59671U);
    msg.setDestinationEntity(161U);
    msg.value = 0.3104589740726367;

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
    msg.setTimeStamp(0.7870129505610467);
    msg.setSource(26367U);
    msg.setSourceEntity(28U);
    msg.setDestination(27323U);
    msg.setDestinationEntity(10U);
    msg.value = 0.6679154830860122;

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
    msg.setTimeStamp(0.9487424783648213);
    msg.setSource(14583U);
    msg.setSourceEntity(43U);
    msg.setDestination(40423U);
    msg.setDestinationEntity(246U);
    msg.value = 0.7838065457523673;

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
    msg.setTimeStamp(0.18254903226625252);
    msg.setSource(45782U);
    msg.setSourceEntity(84U);
    msg.setDestination(24548U);
    msg.setDestinationEntity(82U);
    msg.value = 0.6740894210737358;

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
    msg.setTimeStamp(0.34235328129421094);
    msg.setSource(3164U);
    msg.setSourceEntity(179U);
    msg.setDestination(22496U);
    msg.setDestinationEntity(145U);
    msg.value = 0.9559970620082825;

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
    msg.setTimeStamp(0.38651252426536464);
    msg.setSource(27666U);
    msg.setSourceEntity(146U);
    msg.setDestination(498U);
    msg.setDestinationEntity(131U);
    msg.value = 0.322854472052054;

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
    msg.setTimeStamp(0.44895177968716504);
    msg.setSource(11751U);
    msg.setSourceEntity(56U);
    msg.setDestination(1638U);
    msg.setDestinationEntity(162U);
    msg.value = 0.34447751228882084;

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
    msg.setTimeStamp(0.8944689512232572);
    msg.setSource(5657U);
    msg.setSourceEntity(182U);
    msg.setDestination(9992U);
    msg.setDestinationEntity(175U);
    msg.value = 0.9082949280687534;

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
    msg.setTimeStamp(0.368793777413048);
    msg.setSource(49296U);
    msg.setSourceEntity(238U);
    msg.setDestination(16048U);
    msg.setDestinationEntity(18U);
    msg.value = 0.9669172542065745;

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
    msg.setTimeStamp(0.2426056471589867);
    msg.setSource(31347U);
    msg.setSourceEntity(92U);
    msg.setDestination(4572U);
    msg.setDestinationEntity(77U);
    msg.value = 0.43948873537686206;

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
    msg.setTimeStamp(0.22155261781682745);
    msg.setSource(54342U);
    msg.setSourceEntity(211U);
    msg.setDestination(34915U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5400883108054981;

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
    msg.setTimeStamp(0.5417711051456565);
    msg.setSource(50203U);
    msg.setSourceEntity(102U);
    msg.setDestination(23003U);
    msg.setDestinationEntity(143U);
    msg.value = 0.17868216390633251;

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
    msg.setTimeStamp(0.9593750274259831);
    msg.setSource(15418U);
    msg.setSourceEntity(240U);
    msg.setDestination(14087U);
    msg.setDestinationEntity(246U);
    msg.value = 0.14175961262706527;

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
    msg.setTimeStamp(0.4122189408521061);
    msg.setSource(7716U);
    msg.setSourceEntity(190U);
    msg.setDestination(16668U);
    msg.setDestinationEntity(177U);
    msg.value = 0.442112241584911;

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
    msg.setTimeStamp(0.9614471193422656);
    msg.setSource(14785U);
    msg.setSourceEntity(90U);
    msg.setDestination(16516U);
    msg.setDestinationEntity(145U);
    msg.value = 0.5149224942404037;

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
    msg.setTimeStamp(0.12063253749009029);
    msg.setSource(17309U);
    msg.setSourceEntity(19U);
    msg.setDestination(62489U);
    msg.setDestinationEntity(193U);
    msg.value = 0.33504273186688815;

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
    msg.setTimeStamp(0.7381136747028288);
    msg.setSource(34975U);
    msg.setSourceEntity(107U);
    msg.setDestination(59398U);
    msg.setDestinationEntity(149U);
    msg.value = 0.10073409592061433;

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
    msg.setTimeStamp(0.22643419146446042);
    msg.setSource(27531U);
    msg.setSourceEntity(110U);
    msg.setDestination(635U);
    msg.setDestinationEntity(237U);
    msg.value = 0.07541003985517392;

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
    msg.setTimeStamp(0.1396626442905462);
    msg.setSource(41482U);
    msg.setSourceEntity(130U);
    msg.setDestination(52628U);
    msg.setDestinationEntity(187U);
    msg.value = 0.5891896614723457;

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
    msg.setTimeStamp(0.43421121657178474);
    msg.setSource(64112U);
    msg.setSourceEntity(198U);
    msg.setDestination(33597U);
    msg.setDestinationEntity(56U);
    msg.value = 0.25675119050572837;

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
    msg.setTimeStamp(0.49596084642969873);
    msg.setSource(22477U);
    msg.setSourceEntity(31U);
    msg.setDestination(17406U);
    msg.setDestinationEntity(136U);
    msg.value = 0.8926529978339731;

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
    msg.setTimeStamp(0.6038257132921688);
    msg.setSource(20322U);
    msg.setSourceEntity(192U);
    msg.setDestination(62780U);
    msg.setDestinationEntity(221U);
    msg.direction = 0.28664224080358025;
    msg.speed = 0.1703553154233255;
    msg.turbulence = 0.5109284017920865;

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
    msg.setTimeStamp(0.9326958144438373);
    msg.setSource(31576U);
    msg.setSourceEntity(15U);
    msg.setDestination(64756U);
    msg.setDestinationEntity(181U);
    msg.direction = 0.11391436495174545;
    msg.speed = 0.18811659488573362;
    msg.turbulence = 0.1547484705746759;

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
    msg.setTimeStamp(0.4058505561778879);
    msg.setSource(56278U);
    msg.setSourceEntity(49U);
    msg.setDestination(52619U);
    msg.setDestinationEntity(234U);
    msg.direction = 0.6559630382868216;
    msg.speed = 0.16630790421899455;
    msg.turbulence = 0.010448814330214717;

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
    msg.setTimeStamp(0.9406036366350339);
    msg.setSource(49436U);
    msg.setSourceEntity(237U);
    msg.setDestination(12337U);
    msg.setDestinationEntity(146U);
    msg.value = 0.921595052469008;

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
    msg.setTimeStamp(0.6800047349281431);
    msg.setSource(62856U);
    msg.setSourceEntity(44U);
    msg.setDestination(17466U);
    msg.setDestinationEntity(254U);
    msg.value = 0.30198771801477753;

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
    msg.setTimeStamp(0.8641606773720987);
    msg.setSource(53284U);
    msg.setSourceEntity(72U);
    msg.setDestination(55808U);
    msg.setDestinationEntity(41U);
    msg.value = 0.5234266374169739;

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
    msg.setTimeStamp(0.10201681862269074);
    msg.setSource(46096U);
    msg.setSourceEntity(60U);
    msg.setDestination(47580U);
    msg.setDestinationEntity(62U);
    msg.value.assign("CIVZBCFEURFCDNSMEPBBARMORHMKQWPQBOVZWDPTRNJJZPBLHKRWJSEDUWZNIQEDSTUXBUFOXJMEIXJSQBLDCVWAUJCIANZIPWKIZFRXTQQUMOSLVJUUCKWLYAVTTXAFALFAVGHSDALOYQXYMTRHBMECVKGIYSLRGNHJZQGDKGCNRONUEDYMBVIQTNFJXKLTLXGVFCIYZOPYYHISWNPHGZADHYHPXGFMETHESPCWUPVTKRWFSDYLBGOOQKXKZJ");

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
    msg.setTimeStamp(0.21766660293179174);
    msg.setSource(36834U);
    msg.setSourceEntity(72U);
    msg.setDestination(48031U);
    msg.setDestinationEntity(252U);
    msg.value.assign("GYUIMXAQGQNUJBOCDMKBJXBCXFNQJGZRSFUREFMJSUSJNEPLZXAIHUEZNAWHKGDHUBDFNFHLBZZAJYIGJFBLARLEOYWVADLVCCQHATEYQOHWTRQJXTPCVWOJOALEYFGSPDRSPTIDVEMKXVSIPOKNDYCIWUSOMWYKVINLQVRUYCGBMGUMTIWFIDRCZQTSEBOTTMDLWVGNEWVDLTEYAHKATXPPXFMSHMHYKNJOCSHCKIRZLWXBZFQRRPUPNQ");

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
    msg.setTimeStamp(0.4129324499257434);
    msg.setSource(18316U);
    msg.setSourceEntity(5U);
    msg.setDestination(62415U);
    msg.setDestinationEntity(77U);
    msg.value.assign("JQNOUNJHHSYJMCENPQXUDFSHXCYOIPAMBZGKUXCSBXLBEXSWZERCNLKAJBPYXNDUDRNAVOTHWIGLUWOCLYZZDQKKMHFPTUFVENVGJCTZZZSVSAOALI");

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
    msg.setTimeStamp(0.9238216984736445);
    msg.setSource(8187U);
    msg.setSourceEntity(55U);
    msg.setDestination(5514U);
    msg.setDestinationEntity(129U);
    const char tmp_msg_0[] = {-78, 10, 112, 106, -107, 90, -41, -119, 8, -92, -80, -52, -24, 113, 33, 26, -32, -106, -114, -112, -109, 52, -23, -123, 74, 116, 1, 100, 27, -45, 6, 74, 92, -22, 69, -86, -37, 109, -64, -103, 48, -80, 10, -16, 58, -18, -33, -124, -49, 39, -50, 126, 61, 119, 39, 49, -55, 49, 26, 20, 56, 5, -5, 88, 88, -1, -66, -22, 88, -99, -14, -99, -64, -43, -94, 39, 35, -92, 66, -79, -20, -42, -13, -69, 31, -78, -1, -22, 123, 81, 15, -67, 24, -32, 107, 106, -124, 28, -111, -65, 5, -37, -128, -105, -115, -124, -80, -104, 73, 39, -127, 117, -87, 100, -15, 116, 69, 51, -54, 61, 35, 42, -120, 58, 70, 14, 12, -33, 116, -112, 19, 30, 3, 3, 89, -13, 11, 92, -24, 22, 10, 86, -52, 58, 57, 116, 43, 12, 88, -62, 93, 24, -108, -104, 48, -119, 54, 78, -91, -5, 124, -59, 90, -81, 14, -101, 91, -51, 9, -127, -35, -74, -100, 26, -93};
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
    msg.setTimeStamp(0.2774865798910805);
    msg.setSource(34911U);
    msg.setSourceEntity(137U);
    msg.setDestination(9895U);
    msg.setDestinationEntity(153U);
    const char tmp_msg_0[] = {-14, -115, 86, -39, 13, 51, -20, 26, 105, 20, -125, 25, -2, 62, -115, -32, 100, 86, -112, 100, 87, 11, 118, -29, -113, -105, -64, 70, -40, -33, -32, 25, -105, 66, -11, -61, -94, -75, -86, 12, 37, 10, 15, -27, -115, 35, -90, -98, 7, -36, 53, 109, 122, -27, 77, 34, -29, -104, 109, -33, -42, -110, -99, -24, -70, -16, 50, -3, -120, -50, 10, -115, -106, -117, -110, 104, 17, -84, 125, -106, -125, 82, 65, 70, 48, 115, -83, -55, -11, -98, 124, 82, -45, 112, -95, -79, 107, -62, -19, 23, -68, -79, -93, -122, -22, 64, -95, -122, 123, -53, 102, -128, -62, 45, -125, 95, -99, -38, -21, -47, -1, 59, -99, -93, -14, -114, -78, -28, 66, 100, -40, -36, -12, 38, 114, -117, -71, 60, 116, 107, 108, -115, -51, 119, -24, -34, -57, 123, -112, 27, -19, -22, 110, -57, -33, 57, 1, 94, 75, 13};
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
    msg.setTimeStamp(0.16616831259724274);
    msg.setSource(47703U);
    msg.setSourceEntity(71U);
    msg.setDestination(6526U);
    msg.setDestinationEntity(215U);
    const char tmp_msg_0[] = {55, 98, 30, -52, -102, 0, 6, 4, 71, 5, 38, -43, -82, 35, 100, -95, 35, -26, -18, -116, 65, -95, -41, -24, 41, -56, 16, -2, 30, -123, 2, -63, 105, 67, -65, -23, 1, 10, 99, -114, -16, 115, -89, 19, -29, -62, -53, -6, -116, -96, 35, -119, -65, 40, -75, 23, 63, -107, -90, -49, -99, -80, 61, 35, 80, -20, -44, 62, -123, 64, -8, -111, -57, -30, 107, -47, 105, 112, -51, 50, 91, -5, -32, 52, 53, -91, -123, -51, -3, 118, -106, -85, 121, 105, 86, 88, 86, 85, -118, 14, -58, -81, -17, 81, -62, -128, 7, 7, 76, 66, -12, 49, 122, 6, 27, -46, -115, 85, -83, -92, 20, -115, 6, -93, -24, -23, -16, -51, -112, -20, -66, 54, 18, -115, -48, 83, -34, -116, -97, 25, 17, -64, 78, -104, 93, -12, 95, -63, -84, -47, -88, -15, 76, 103, 75, -96, -97, -108, -26, 47, 17, 25, 63, -109, 126, 46, -119, -125, -55, -46, 26, -41, -7, -36, -9, 13, 15, -92, 56, 12, 97, 60, -57, 27, -81, 111, 49, -3, 23, 123, 34, -37, -43, -36, 0, 102, -84, -83, 88, -61, -36, -75, -43, 26, -114, -106, 41, -15, -88, 31, 79, 57, -51, -17, -90, -12};
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
    msg.setTimeStamp(0.14691740125705666);
    msg.setSource(29396U);
    msg.setSourceEntity(80U);
    msg.setDestination(41897U);
    msg.setDestinationEntity(21U);
    msg.type = 72U;
    msg.frequency = 168601980U;
    msg.min_range = 13148U;
    msg.max_range = 52162U;
    msg.bits_per_point = 252U;
    msg.scale_factor = 0.01468962543768193;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6311547461413841;
    tmp_msg_0.beam_height = 0.016735575125719437;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {46, 120, 103, -34, -121, 45, -28, -84, 6, -124, 126, -111, 18, 0, 111, 18, -120, 61, 102, 125, -106, -87, -23, -24, 57, -56, -101, 22, -51, -108, -5, 122, -113, 91, -29, 86, -26, -128, 119, -69, -20, -3, -59, -3, -78, -78, 6, -123, -104, 71, -78, 28, -42, 89, -19, -59, -72, 88, 67, 45, -104, -118, 74, 52, 37, -80, 23, 47, -64, 27, 17, -81, -123, 40, 93, 121, -38, 26, -83, -54, 22, 60, 56, -104, 26, 108, -61, 82, -73, 118, 14, 26, 108, 20, -48, -2, -74, 8, 58, 71, -41, 46, -11, -47, -19, -66, 103, -46, 61, 122, -33, -97, 72, -68, -128, 102, 33, -125, 20, 99, -108, 59, 37, 26, -122, 59, 110, -27, 77, 2, -29, 44, -56, 10, 125, -92, -128, 49, -85, 50, -119, -124, 56, -69, 86, -27, -83, -58, 71, 76, -2, -29, -74, 25, 35, 113, 64, -22, 8, -68, 58, -35, 11, 53, 90, -4, 97, -59, -76, -29, -108, 54, 10, -68, -45, 124, 109, 70, 69, 14, -76, 95, -81, 8};
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
    msg.setTimeStamp(0.7915524229183499);
    msg.setSource(58637U);
    msg.setSourceEntity(153U);
    msg.setDestination(21576U);
    msg.setDestinationEntity(45U);
    msg.type = 153U;
    msg.frequency = 1272012611U;
    msg.min_range = 30795U;
    msg.max_range = 29949U;
    msg.bits_per_point = 57U;
    msg.scale_factor = 0.9954249108393048;
    const char tmp_msg_0[] = {-54, -50, 117, -16, -2, 110, 116, -93, -114, 14, -18, 47, -28, 50, 83, 126, 80, 124, -92, 101, -2, 40, -19, -40, 58, -84, 86, -40, 28, -73, -44, 77, 49, 71, 16, -56, 56, -91, -15, 55, -42, 25, 98, 122, -17, -26, 103, 77, 80, 83, -101, -70, 67, -95, 10, -46, 44, -19, -117, -30, 21, -89, 40, -65, -68, -8, 60, -25, 12, 7, 83, -52, -59, -26, 102, 84, -77, -85, -77, -18, 98, 74, 94, 84, -109, -17, -105, 101, -115, -1, -70, -79, -98, 19, 41, 111, 2, 21, 95, -10, -1, 34, -57, 22, 125, 33, -32, 19, -25, 37, 21, 49, 41, 67, 6, -25, -44, 33, 51, 48, -70, -81, -41, 100, -18, -69, 49, -93, -70, -78, -121, 34, 13, -77, 29, 58, -27, 54, 38, 71, -27, -58, -33, 22, 1, -72, 11, 6, 34, 12, 0, 114, 3, -115, 51, 60, 7, -83, -61, -24, 101, 61, 17, 40, -103, 62, -9, 29, 109, -46, 82, -36, 35, -51, 70, 41, -102, -25, 16, -111, -23, -1, -70, -33, -11, -10, 69, 116, -94, -128, 114, -113, 86, -20, -6, -113, 4, -89, 40, 42, -43, -112, 63, -56, -2, -9, -110};
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
    msg.setTimeStamp(0.7579508537290915);
    msg.setSource(57118U);
    msg.setSourceEntity(83U);
    msg.setDestination(35291U);
    msg.setDestinationEntity(14U);
    msg.type = 205U;
    msg.frequency = 3496680843U;
    msg.min_range = 32215U;
    msg.max_range = 28999U;
    msg.bits_per_point = 80U;
    msg.scale_factor = 0.8920969755986186;
    const char tmp_msg_0[] = {-17, -42, -122, -96, -1, -97, 7, -81, 106, -35, -13, 68, -108, 97, 96, 78, -55, -30, 45, -2, 43, 1, 118, 70, 120, 101, 79, 53, 11, -61, -52, 117, 123, 50, -101, 69, -24, -52, -113, 80, 69, -56, 112, 13, 77, 60, 80, -120, 80, 80, 124, 0, 116, -59, 49, 77, -121, -80, -46, -2, 117, 107, 17, 55, 27, -87, 7, -124, 95, -82, 98, 53, 122, 116, 71, -27, -53, 27, 81, -78, 53, -25, -15, -1, 122, 68, 123, -55, 25, -31, 48, 55, 86, -56, 80, 102, 14, -123, 80, -61, -12, -112, -55, 75, -13, 57, 66, 106, -6, 46, -47, -17, 48, -4, -128, 30, 96, 54, -93, -93, 44, -82, 100, -117, -5, -5, -120, -99, -41, -7, 48, 2, 105, -70, -40, -106, -60, 36, -35, 23, 12, -99, 74, -82, 57, -11, 70, -107, -66, -123, 41, 19, 95, -66, -41, -117, -39, -17, -95, -45, -109, 96, 65, -52, -119, 54, -16, 89, 52, 50, -61, 10, 117, 125, 115, 56, -123, 37, 63, -125, 121, 1, 110, 51, -14, 100, -3, -21, -80, 63, -70, -55, -7, 103, 38, -63, -22, -6, 121, -86, 98, 124, 50, -99, -11, 13, -4, -15, -64, -92, -67, 11, -71, -45, -88};
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
    msg.setTimeStamp(0.9719872200729605);
    msg.setSource(8685U);
    msg.setSourceEntity(202U);
    msg.setDestination(43186U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.6456417763340381);
    msg.setSource(23613U);
    msg.setSourceEntity(115U);
    msg.setDestination(59931U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.3719928700193633);
    msg.setSource(30030U);
    msg.setSourceEntity(193U);
    msg.setDestination(40240U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.5129661684740772);
    msg.setSource(43404U);
    msg.setSourceEntity(56U);
    msg.setDestination(21394U);
    msg.setDestinationEntity(99U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.6763537399181557);
    msg.setSource(13388U);
    msg.setSourceEntity(249U);
    msg.setDestination(22228U);
    msg.setDestinationEntity(40U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.06363580802208624);
    msg.setSource(26502U);
    msg.setSourceEntity(161U);
    msg.setDestination(28899U);
    msg.setDestinationEntity(3U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.3035568653992414);
    msg.setSource(25348U);
    msg.setSourceEntity(206U);
    msg.setDestination(12769U);
    msg.setDestinationEntity(227U);
    msg.value = 0.610512624065513;
    msg.confidence = 0.35986112473731136;
    msg.opmodes.assign("APJTZKDPTGNBQWCJWUDKHWNMIVXYOTLOQYUHSYCNKADZBZJJVSRMBMAKCZOPRGGMKNUPGZKBRSYXKAKQEKLIALSFEFRUJHZTEUCORORTJWJAILEMDULBRFYYNQSBQFLEIMDRXTZOFEPWGFBWKCXS");

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
    msg.setTimeStamp(0.9936154706918441);
    msg.setSource(16047U);
    msg.setSourceEntity(129U);
    msg.setDestination(50082U);
    msg.setDestinationEntity(116U);
    msg.value = 0.1711562031116759;
    msg.confidence = 0.21298741745538197;
    msg.opmodes.assign("AUXSGDNVXWUOYKIVVPETDKXEFLSOAFCRJRMXNIQQHXNEKGPZTWOHBHLUNXKTZHDOCMFWSGVBSPIJYUQCKUULSVDNNEESHDAIPZWYJABTEYAHJLVRDJGWSXGKQRWMBHFMIGMPWTRXVBNLJEWNCUYCKEYCMUTUZ");

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
    msg.setTimeStamp(0.24386625679059137);
    msg.setSource(11252U);
    msg.setSourceEntity(48U);
    msg.setDestination(57754U);
    msg.setDestinationEntity(89U);
    msg.value = 0.13688443335675216;
    msg.confidence = 0.5481907389804511;
    msg.opmodes.assign("HROIDENRKZJARDVTZVSBOSONVJSKFQJCSHFDXONJZCFQMGPECHFHTAUKEZERGSBDZKSUAQCMWIWJUEQIBTTUDQHNXBJLKBLVLJYF");

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
    msg.setTimeStamp(0.517471189673978);
    msg.setSource(347U);
    msg.setSourceEntity(125U);
    msg.setDestination(51052U);
    msg.setDestinationEntity(169U);
    msg.itow = 296697167U;
    msg.lat = 0.7266528330963189;
    msg.lon = 0.06457953327477228;
    msg.height_ell = 0.9006559552324206;
    msg.height_sea = 0.8369741346110716;
    msg.hacc = 0.6230975067779606;
    msg.vacc = 0.8913221736614168;
    msg.vel_n = 0.7517735568157168;
    msg.vel_e = 0.9535219844181052;
    msg.vel_d = 0.7181253433917807;
    msg.speed = 0.5943248510569616;
    msg.gspeed = 0.5750743008914001;
    msg.heading = 0.8636026767742544;
    msg.sacc = 0.13694693197710361;
    msg.cacc = 0.12483540252512704;

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
    msg.setTimeStamp(0.11303905857261998);
    msg.setSource(56775U);
    msg.setSourceEntity(145U);
    msg.setDestination(9837U);
    msg.setDestinationEntity(19U);
    msg.itow = 3162646675U;
    msg.lat = 0.8260989185766335;
    msg.lon = 0.2922458793926912;
    msg.height_ell = 0.9440681473004836;
    msg.height_sea = 0.8494594749874398;
    msg.hacc = 0.7750995114963578;
    msg.vacc = 0.033353889059453024;
    msg.vel_n = 0.8479846955386555;
    msg.vel_e = 0.6450379060539463;
    msg.vel_d = 0.5742282108769061;
    msg.speed = 0.9526685381677902;
    msg.gspeed = 0.8449697908084933;
    msg.heading = 0.4124433960600158;
    msg.sacc = 0.22755685073889664;
    msg.cacc = 0.32748535213240815;

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
    msg.setTimeStamp(0.10992506270160751);
    msg.setSource(54461U);
    msg.setSourceEntity(39U);
    msg.setDestination(36518U);
    msg.setDestinationEntity(110U);
    msg.itow = 1006076146U;
    msg.lat = 0.30712801852404836;
    msg.lon = 0.25548136465021;
    msg.height_ell = 0.6750837386654239;
    msg.height_sea = 0.9733481910467766;
    msg.hacc = 0.039922647228852526;
    msg.vacc = 0.06832284244487685;
    msg.vel_n = 0.6380360021138458;
    msg.vel_e = 0.8425430466754299;
    msg.vel_d = 0.1770159017465941;
    msg.speed = 0.029700545459929395;
    msg.gspeed = 0.3498094991083056;
    msg.heading = 0.7859964103555869;
    msg.sacc = 0.8965356138553453;
    msg.cacc = 0.4000944754873327;

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
    msg.setTimeStamp(0.047386028393569535);
    msg.setSource(31208U);
    msg.setSourceEntity(119U);
    msg.setDestination(32989U);
    msg.setDestinationEntity(187U);
    msg.id = 167U;
    msg.value = 0.2670677391021984;

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
    msg.setTimeStamp(0.9825374726699941);
    msg.setSource(60857U);
    msg.setSourceEntity(22U);
    msg.setDestination(8420U);
    msg.setDestinationEntity(106U);
    msg.id = 28U;
    msg.value = 0.2516169856769863;

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
    msg.setTimeStamp(0.13972333196527076);
    msg.setSource(31658U);
    msg.setSourceEntity(210U);
    msg.setDestination(22323U);
    msg.setDestinationEntity(161U);
    msg.id = 26U;
    msg.value = 0.016261872341291284;

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
    msg.setTimeStamp(0.6717419037601954);
    msg.setSource(767U);
    msg.setSourceEntity(18U);
    msg.setDestination(36129U);
    msg.setDestinationEntity(88U);
    msg.x = 0.22789781673012688;
    msg.y = 0.015023972868058122;
    msg.z = 0.7749514758939009;
    msg.phi = 0.6444581448563413;
    msg.theta = 0.557141442056722;
    msg.psi = 0.9614514609716038;

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
    msg.setTimeStamp(0.3693374689040003);
    msg.setSource(21273U);
    msg.setSourceEntity(218U);
    msg.setDestination(42965U);
    msg.setDestinationEntity(122U);
    msg.x = 0.6861472718278663;
    msg.y = 0.04763831761845061;
    msg.z = 0.9128869586337526;
    msg.phi = 0.2528712855670028;
    msg.theta = 0.5897376315451615;
    msg.psi = 0.09341015428707633;

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
    msg.setTimeStamp(0.9175661223306238);
    msg.setSource(63905U);
    msg.setSourceEntity(0U);
    msg.setDestination(65020U);
    msg.setDestinationEntity(4U);
    msg.x = 0.07575870441540156;
    msg.y = 0.45590345722334524;
    msg.z = 0.8207257486732331;
    msg.phi = 0.5493989048651075;
    msg.theta = 0.5956795376823776;
    msg.psi = 0.6935639859803507;

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
    msg.setTimeStamp(0.24143798151311568);
    msg.setSource(38531U);
    msg.setSourceEntity(232U);
    msg.setDestination(43413U);
    msg.setDestinationEntity(232U);
    msg.beam_width = 0.14827436326224597;
    msg.beam_height = 0.17158232544702068;

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
    msg.setTimeStamp(0.12648891474959867);
    msg.setSource(33864U);
    msg.setSourceEntity(244U);
    msg.setDestination(63130U);
    msg.setDestinationEntity(113U);
    msg.beam_width = 0.804013483512162;
    msg.beam_height = 0.09553707552304669;

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
    msg.setTimeStamp(0.5889492972798018);
    msg.setSource(10553U);
    msg.setSourceEntity(197U);
    msg.setDestination(19858U);
    msg.setDestinationEntity(7U);
    msg.beam_width = 0.843378492886794;
    msg.beam_height = 0.8740380288395386;

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
    msg.setTimeStamp(0.08946652429434643);
    msg.setSource(61754U);
    msg.setSourceEntity(162U);
    msg.setDestination(20505U);
    msg.setDestinationEntity(163U);
    msg.sane = 177U;

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
    msg.setTimeStamp(0.2368533729875678);
    msg.setSource(41213U);
    msg.setSourceEntity(105U);
    msg.setDestination(32571U);
    msg.setDestinationEntity(49U);
    msg.sane = 82U;

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
    msg.setTimeStamp(0.6579243712893565);
    msg.setSource(46008U);
    msg.setSourceEntity(13U);
    msg.setDestination(9185U);
    msg.setDestinationEntity(229U);
    msg.sane = 134U;

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
    msg.setTimeStamp(0.49675926187486985);
    msg.setSource(53627U);
    msg.setSourceEntity(182U);
    msg.setDestination(18805U);
    msg.setDestinationEntity(32U);
    msg.value = 0.4415895346917318;

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
    msg.setTimeStamp(0.9529401430399839);
    msg.setSource(10925U);
    msg.setSourceEntity(52U);
    msg.setDestination(16770U);
    msg.setDestinationEntity(102U);
    msg.value = 0.0183732279498956;

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
    msg.setTimeStamp(0.5724875490074013);
    msg.setSource(23634U);
    msg.setSourceEntity(109U);
    msg.setDestination(1230U);
    msg.setDestinationEntity(173U);
    msg.value = 0.9299058487923714;

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
    msg.setTimeStamp(0.7968205640027686);
    msg.setSource(38190U);
    msg.setSourceEntity(223U);
    msg.setDestination(51349U);
    msg.setDestinationEntity(142U);
    msg.value = 0.8065069972053506;

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
    msg.setTimeStamp(0.7425137271565465);
    msg.setSource(10920U);
    msg.setSourceEntity(204U);
    msg.setDestination(41642U);
    msg.setDestinationEntity(102U);
    msg.value = 0.27423036296172076;

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
    msg.setTimeStamp(0.22845666436793965);
    msg.setSource(18068U);
    msg.setSourceEntity(15U);
    msg.setDestination(26800U);
    msg.setDestinationEntity(253U);
    msg.value = 0.7602889096195035;

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
    msg.setTimeStamp(0.6666432189139476);
    msg.setSource(25991U);
    msg.setSourceEntity(102U);
    msg.setDestination(11411U);
    msg.setDestinationEntity(158U);
    msg.value = 0.0954069782354553;

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
    msg.setTimeStamp(0.1461688865522327);
    msg.setSource(30250U);
    msg.setSourceEntity(59U);
    msg.setDestination(17804U);
    msg.setDestinationEntity(104U);
    msg.value = 0.08996120010930453;

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
    msg.setTimeStamp(0.6006087172951864);
    msg.setSource(53677U);
    msg.setSourceEntity(150U);
    msg.setDestination(7032U);
    msg.setDestinationEntity(67U);
    msg.value = 0.8880908695640617;

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
    msg.setTimeStamp(0.4625752024369576);
    msg.setSource(17426U);
    msg.setSourceEntity(244U);
    msg.setDestination(37369U);
    msg.setDestinationEntity(12U);
    msg.value = 0.549464632746329;

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
    msg.setTimeStamp(0.022813917030813702);
    msg.setSource(27438U);
    msg.setSourceEntity(241U);
    msg.setDestination(52119U);
    msg.setDestinationEntity(120U);
    msg.value = 0.9766657398205753;

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
    msg.setTimeStamp(0.27950776275272105);
    msg.setSource(3886U);
    msg.setSourceEntity(146U);
    msg.setDestination(2881U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7902932041745293;

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
    msg.setTimeStamp(0.13694848214003963);
    msg.setSource(65310U);
    msg.setSourceEntity(140U);
    msg.setDestination(13366U);
    msg.setDestinationEntity(190U);
    msg.value = 0.738545203383791;

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
    msg.setTimeStamp(0.9204037095344679);
    msg.setSource(53520U);
    msg.setSourceEntity(148U);
    msg.setDestination(14131U);
    msg.setDestinationEntity(147U);
    msg.value = 0.3236052229893589;

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
    msg.setTimeStamp(0.9428277054494572);
    msg.setSource(22706U);
    msg.setSourceEntity(232U);
    msg.setDestination(20092U);
    msg.setDestinationEntity(43U);
    msg.value = 0.6429703839267501;

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
    msg.setTimeStamp(0.7548532534699626);
    msg.setSource(51059U);
    msg.setSourceEntity(168U);
    msg.setDestination(9049U);
    msg.setDestinationEntity(32U);
    msg.id = 239U;
    msg.zoom = 131U;
    msg.action = 117U;

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
    msg.setTimeStamp(0.857812212833319);
    msg.setSource(19426U);
    msg.setSourceEntity(153U);
    msg.setDestination(25657U);
    msg.setDestinationEntity(41U);
    msg.id = 130U;
    msg.zoom = 243U;
    msg.action = 223U;

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
    msg.setTimeStamp(0.7554689171249743);
    msg.setSource(10537U);
    msg.setSourceEntity(145U);
    msg.setDestination(33762U);
    msg.setDestinationEntity(141U);
    msg.id = 76U;
    msg.zoom = 8U;
    msg.action = 47U;

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
    msg.setTimeStamp(0.8708177246839927);
    msg.setSource(39568U);
    msg.setSourceEntity(59U);
    msg.setDestination(50123U);
    msg.setDestinationEntity(104U);
    msg.id = 183U;
    msg.value = 0.5800528666969375;

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
    msg.setTimeStamp(0.9039845926692354);
    msg.setSource(29290U);
    msg.setSourceEntity(161U);
    msg.setDestination(64659U);
    msg.setDestinationEntity(120U);
    msg.id = 246U;
    msg.value = 0.6009112876966961;

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
    msg.setTimeStamp(0.2817689268585246);
    msg.setSource(5870U);
    msg.setSourceEntity(135U);
    msg.setDestination(11579U);
    msg.setDestinationEntity(226U);
    msg.id = 49U;
    msg.value = 0.5054934511007838;

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
    msg.setTimeStamp(0.3594165299877361);
    msg.setSource(60737U);
    msg.setSourceEntity(185U);
    msg.setDestination(1628U);
    msg.setDestinationEntity(177U);
    msg.id = 112U;
    msg.value = 0.5577804434578844;

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
    msg.setTimeStamp(0.4148587028857271);
    msg.setSource(54651U);
    msg.setSourceEntity(108U);
    msg.setDestination(11305U);
    msg.setDestinationEntity(14U);
    msg.id = 186U;
    msg.value = 0.1064225236545201;

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
    msg.setTimeStamp(0.02717211768544625);
    msg.setSource(51864U);
    msg.setSourceEntity(202U);
    msg.setDestination(3296U);
    msg.setDestinationEntity(199U);
    msg.id = 234U;
    msg.value = 0.887511153446457;

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
    msg.setTimeStamp(0.09158624949806105);
    msg.setSource(13515U);
    msg.setSourceEntity(118U);
    msg.setDestination(59862U);
    msg.setDestinationEntity(20U);
    msg.id = 183U;
    msg.angle = 0.27631464491528157;

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
    msg.setTimeStamp(0.2297064100817754);
    msg.setSource(27572U);
    msg.setSourceEntity(196U);
    msg.setDestination(64421U);
    msg.setDestinationEntity(204U);
    msg.id = 97U;
    msg.angle = 0.8926252314313217;

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
    msg.setTimeStamp(0.5284792588497645);
    msg.setSource(40201U);
    msg.setSourceEntity(81U);
    msg.setDestination(53603U);
    msg.setDestinationEntity(122U);
    msg.id = 201U;
    msg.angle = 0.808284487438546;

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
    msg.setTimeStamp(0.26821988388970297);
    msg.setSource(17945U);
    msg.setSourceEntity(32U);
    msg.setDestination(15832U);
    msg.setDestinationEntity(177U);
    msg.op = 197U;
    msg.actions.assign("RNXALXNZFENUCNWJI");

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
    msg.setTimeStamp(0.29324142092395344);
    msg.setSource(63365U);
    msg.setSourceEntity(48U);
    msg.setDestination(51782U);
    msg.setDestinationEntity(131U);
    msg.op = 113U;
    msg.actions.assign("HEZDCTJBWAMIVXPYRLPIOXQNPGGVQNGRWWRTAMSIMAIDBTOWASKQCGSXHILPMUZHQDEWCQTHGKLRCOOHPKVF");

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
    msg.setTimeStamp(0.5762869967046719);
    msg.setSource(63731U);
    msg.setSourceEntity(51U);
    msg.setDestination(37615U);
    msg.setDestinationEntity(199U);
    msg.op = 90U;
    msg.actions.assign("JKCQELSQOYAWOFXSRHDIBPYPDWWKFLRKBSTYGDJMVQKSVPKSQBUBEIKNZRTHLRGSERVIHODCJHUEKTKPCTNSUGHMVWHNDECUYPNHTLZHWEFYFNQUDBCJJDUIWMMIVTNFXLXVYARTCOIJRWJCEXWFNZPLGHEKOQTIZGRQBZVYMCIVYEMXWFGQNQHLFDZSJARATODUAAXWSEKUNPJXLOSZPXJOIBYXGDBCLNPZZGTMALMYR");

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
    msg.setTimeStamp(0.2300720471857023);
    msg.setSource(10339U);
    msg.setSourceEntity(135U);
    msg.setDestination(56786U);
    msg.setDestinationEntity(68U);
    msg.actions.assign("RBIPKRXDGYTHMDTPBHVFCEVOTUAZNKIPBXDVNWBGYQTKMXTNJUNOQ");

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
    msg.setTimeStamp(0.03598818610060173);
    msg.setSource(23321U);
    msg.setSourceEntity(21U);
    msg.setDestination(17125U);
    msg.setDestinationEntity(205U);
    msg.actions.assign("SROABXZCVK");

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
    msg.setTimeStamp(0.4180993805814943);
    msg.setSource(35836U);
    msg.setSourceEntity(59U);
    msg.setDestination(27442U);
    msg.setDestinationEntity(125U);
    msg.actions.assign("BONFVZONSQGANXHILPEWHXFZJISFDQVMEYEFHQHSLYKWSUNANPSYN");

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
    msg.setTimeStamp(0.2811239506763643);
    msg.setSource(16190U);
    msg.setSourceEntity(25U);
    msg.setDestination(35482U);
    msg.setDestinationEntity(187U);
    msg.button = 50U;
    msg.value = 83U;

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
    msg.setTimeStamp(0.09957325564927433);
    msg.setSource(61598U);
    msg.setSourceEntity(133U);
    msg.setDestination(58898U);
    msg.setDestinationEntity(100U);
    msg.button = 226U;
    msg.value = 203U;

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
    msg.setTimeStamp(0.31709472489111523);
    msg.setSource(28629U);
    msg.setSourceEntity(41U);
    msg.setDestination(35564U);
    msg.setDestinationEntity(192U);
    msg.button = 95U;
    msg.value = 121U;

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
    msg.setTimeStamp(0.5746407348052817);
    msg.setSource(60188U);
    msg.setSourceEntity(232U);
    msg.setDestination(37779U);
    msg.setDestinationEntity(135U);
    msg.op = 35U;
    msg.text.assign("VTXZLDLLOCWHROFAKFPCCQTEIZMTEGIKNVBQXIDCTKUDWIBWXXWWTSLQOGLHOMUMVAFYAOQHPPTAOMURJIWUIMUQDSCDUEYRMFJQEAZADOHNGMKCMJYRXURWDXBIQZDPSRPUPWYYBNHOFDN");

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
    msg.setTimeStamp(0.5739979222066208);
    msg.setSource(64347U);
    msg.setSourceEntity(66U);
    msg.setDestination(18102U);
    msg.setDestinationEntity(173U);
    msg.op = 157U;
    msg.text.assign("ZCLDECQPZZHEDHMIWRDHKQUSNARHLWDVYWIKJMJFUYMUSANPRULGKALUBCNRSFFDALLWPZZRVQOQBBPTBRKKLDJTTWQPYHBTLBKXXXAATS");

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
    msg.setTimeStamp(0.8157763644621111);
    msg.setSource(20378U);
    msg.setSourceEntity(254U);
    msg.setDestination(37617U);
    msg.setDestinationEntity(244U);
    msg.op = 179U;
    msg.text.assign("NIFNPPOXZNJIXZKBUIKEKQIWRCMCQVMTJIREZDBPTZBGTXPVNLIYCKJLQMEUNBJWYYRXAHGJBWOQFFCYYZXYPRCTBNSCVSRPIHZSG");

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
    msg.setTimeStamp(0.1125675134626587);
    msg.setSource(59203U);
    msg.setSourceEntity(244U);
    msg.setDestination(16222U);
    msg.setDestinationEntity(228U);
    msg.op = 141U;
    msg.time_remain = 0.2428520388585903;
    msg.sched_time = 0.7756529569313642;

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
    msg.setTimeStamp(0.43547927677790377);
    msg.setSource(54394U);
    msg.setSourceEntity(72U);
    msg.setDestination(63302U);
    msg.setDestinationEntity(36U);
    msg.op = 25U;
    msg.time_remain = 0.7037542348870599;
    msg.sched_time = 0.26488422668035216;

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
    msg.setTimeStamp(0.5556483063216998);
    msg.setSource(33108U);
    msg.setSourceEntity(44U);
    msg.setDestination(221U);
    msg.setDestinationEntity(34U);
    msg.op = 109U;
    msg.time_remain = 0.9273178895617838;
    msg.sched_time = 0.05017845783925878;

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
    msg.setTimeStamp(0.2736560390156093);
    msg.setSource(36676U);
    msg.setSourceEntity(164U);
    msg.setDestination(7235U);
    msg.setDestinationEntity(244U);
    msg.name.assign("YJDJRKMKNNGYIGSVFSPLEZFVLLSVIZMIXIRTPGNJLRRZABXWQFNJDODFUMKQECIJGWPXRJNKQVOHZEQBKNGPGTEHZHEZYXWHFBBBLRJVWBZYIOJSXNPTNIJCDMMYUUYMUCVPPLQXRDPUYSSFCXLPKTUECHWMLDFOOFOKLGKEAIJLKRGQITCASKECVWS");
    msg.op = 226U;
    msg.sched_time = 0.6051907965346996;

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
    msg.setTimeStamp(0.189291508366091);
    msg.setSource(31857U);
    msg.setSourceEntity(5U);
    msg.setDestination(35510U);
    msg.setDestinationEntity(217U);
    msg.name.assign("TKNEKPFGITEBTIPNAFWGOEKIKDRSYTWZZDSFYUTUDAOXZODCAANPZFZZQBXNICFBQUMUKHBJMCBHMIQIOPRVFKJGRLPXCNKHXDBSPCBMTYNIYKMUNCEHRYVHZQCHLVLDDJBXWYEBQHEERJYOLFAXEQSRLFOICLOLUBSWZGNCWUKSHDGEZXWLDMVATMOL");
    msg.op = 67U;
    msg.sched_time = 0.35699172359317344;

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
    msg.setTimeStamp(0.8643727184814192);
    msg.setSource(32004U);
    msg.setSourceEntity(249U);
    msg.setDestination(25583U);
    msg.setDestinationEntity(191U);
    msg.name.assign("AYCTRSOFKVOLZPWSWJVTGECMIOGCH");
    msg.op = 224U;
    msg.sched_time = 0.4419085215680918;

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
    msg.setTimeStamp(0.9963214151987569);
    msg.setSource(53806U);
    msg.setSourceEntity(144U);
    msg.setDestination(5682U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.655998169093456);
    msg.setSource(35112U);
    msg.setSourceEntity(152U);
    msg.setDestination(6845U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.9067424989403066);
    msg.setSource(41941U);
    msg.setSourceEntity(5U);
    msg.setDestination(851U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.7437906002156811);
    msg.setSource(6955U);
    msg.setSourceEntity(238U);
    msg.setDestination(41491U);
    msg.setDestinationEntity(39U);
    msg.name.assign("NRPJMVWSQYCKGQYIRZWBFETBPKKBVKTRJBLKJEIPXAUCWSMZYVNENRAAWIMOFNXRLOFSDJAXNQHHYENIJWXFDQPOXRQFTATVVIHQTYYFDZLBNHQWATXOJRMISECJTPXLCYVL");
    msg.state = 232U;

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
    msg.setTimeStamp(0.8264900227325631);
    msg.setSource(20458U);
    msg.setSourceEntity(197U);
    msg.setDestination(64193U);
    msg.setDestinationEntity(218U);
    msg.name.assign("VAESKRQCWOCTMCZEUEBGGRQSBIQQXAZADTRCXMMGOYUVKIYJLOIHNLZLBBQVYGEOYFNCRDVZCBFMJVERJRNWKUPMDTSEKPASPXQJHVLSQWTEWHDNKTUPDEXYCBLGXIWURHFORZVPMUZVLBJYLZTMYZWPMUKVORS");
    msg.state = 61U;

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
    msg.setTimeStamp(0.8706022552399018);
    msg.setSource(55722U);
    msg.setSourceEntity(24U);
    msg.setDestination(32250U);
    msg.setDestinationEntity(140U);
    msg.name.assign("PADGGIYFVMXTMOCJXAIEIZICFBWHPOJNPWHYJGRDJJTIKZKSZULLZFHBYXBUJBVIZTUSP");
    msg.state = 7U;

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
    msg.setTimeStamp(0.8953217821473689);
    msg.setSource(21397U);
    msg.setSourceEntity(204U);
    msg.setDestination(43355U);
    msg.setDestinationEntity(71U);
    msg.name.assign("LWBGCPTWNSEMVJSDXWIDKUKVSJAEKDTSDBXCEALBQAVHHKEFZIRJSYEOFUTYDWHVHXNRJLBXVFDPFFVNACIIHZZYNWRQBNEWCGTNSRKEVYSISMTUPSICKFVTTPKIVMGCYRAYLMOHZFOOQXCUJIALOQMJGBNMURPQEKDIXNXCGQGDD");
    msg.value = 35U;

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
    msg.setTimeStamp(0.3947598669451361);
    msg.setSource(59626U);
    msg.setSourceEntity(6U);
    msg.setDestination(3547U);
    msg.setDestinationEntity(94U);
    msg.name.assign("PFQOYIVVRSAMGWCMACWSJAFRVUHXVIQMMODDNLHQJBTWYIGURCUWFLGZWYKHCCDTRELGELSOXEPHWUGFGOEIEZUBCHRZXYGMZVIJPZQRNUGLQVCQTROHOFNUJBKVNISWOANNTOXVCELWTNSNCHRJKNJKJWUPQJPTLBDDZIIBEYYXSTRQIRFVLFMDYSUAQHDATNKKYPXBJXLDYSJXWPFAPZHPBIZQPDZBGDHMM");
    msg.value = 46U;

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
    msg.setTimeStamp(0.3536301521322045);
    msg.setSource(15346U);
    msg.setSourceEntity(79U);
    msg.setDestination(51410U);
    msg.setDestinationEntity(80U);
    msg.name.assign("DBKPXKOBECUBJBPHFXKGJLBWSBPMNGNNMGVZSDFCWDWWAXTOJSVOWYAVFJUZUZPIAOOQZFIHTKMFKQQQXZMMTSMEDSEZJMWLUOPYOAXPJTUALUDHIQRXVVCGGEBGZHQDYJFNINDTOVRE");
    msg.value = 151U;

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
    msg.setTimeStamp(0.789897925727022);
    msg.setSource(25796U);
    msg.setSourceEntity(133U);
    msg.setDestination(54766U);
    msg.setDestinationEntity(119U);
    msg.name.assign("WOPDYOOHSMNNLNEJNUZOMHNBWLWWIXZFGTJWHHJNPYQLISZLFKAXHODIMYZEAAXUKNAGGVIUPBHDKAAVRTOQXLSYSSXTPGSCVBSMEWCIGODMTGIEUHTETGJVRJINLFDTQKPWXDYHUCWVKPTCCAAKVRTLNCIZVLKKBXRAFUQQSFODBDRZMGYWEYLZCUQXLH");

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
    msg.setTimeStamp(0.10242293284100867);
    msg.setSource(52872U);
    msg.setSourceEntity(145U);
    msg.setDestination(6437U);
    msg.setDestinationEntity(127U);
    msg.name.assign("QDWWXIJHLTWNAWKCDQWZCKZXNUOSJNVGGAFYGHNMLCDPJBDEGLQDHUTMFTMPDWQGE");

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
    msg.setTimeStamp(0.7544325177676175);
    msg.setSource(53357U);
    msg.setSourceEntity(127U);
    msg.setDestination(13924U);
    msg.setDestinationEntity(45U);
    msg.name.assign("QRYILOMOCZFWYNAVUEZEUHQVISKKKYHRBVIURQUOZWLYCDMLFDDNXJJFGBZIMVXVIRFPCIXTXBZIQEHSZIPRNWAZEWXXTGSHBUIGRCPDBMNTHJKWZKVEMIYDKFAPVBYPAAWPJEJQTKSPASQCA");

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
    msg.setTimeStamp(0.3707401938200421);
    msg.setSource(40631U);
    msg.setSourceEntity(158U);
    msg.setDestination(13242U);
    msg.setDestinationEntity(197U);
    msg.name.assign("KSHIFDKBDCDEJGIPWTPKLPMEGHBNUDJRXRPAUEXTLRCBXIJZCWFHQMXQLXKYMAUQVOLPJOYQZKCSHELLIQNNYZIAVREQMJSJZSLIMNKYFEZBFXVRGGNFTAJRADUFTOBAMONVJOICKYXWBTFSVEWYKBZRDAZHGBYVCCWTTHGYUUPRTOQOCGQGEFGMYFZWREACBHSVWGNMAOMUDWJMIQXWPIZOPUDFVSONHLSXLZVWSYCKPHDBQLNRETATDXJU");
    msg.value = 130U;

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
    msg.setTimeStamp(0.9221253755338675);
    msg.setSource(44456U);
    msg.setSourceEntity(193U);
    msg.setDestination(13364U);
    msg.setDestinationEntity(199U);
    msg.name.assign("MAEIKPYBHKSOGYFDLPJSBGOUNKXSVFAKMDUPIXIRBAOQMJFLDGRBOWXEXNCFBZQESIUDZTMCZXVWBJSWGMEZCQDTFWZPLLSLHSCBAEPYGKHNXQLHFULPVTKKUBVSJZOKSYUARFOUFGUICXAMAEIJCCTMWNJQQRGDWXQRRRQNPZYQJPSVHHLBDNWDYA");
    msg.value = 189U;

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
    msg.setTimeStamp(0.8726006826252657);
    msg.setSource(57570U);
    msg.setSourceEntity(233U);
    msg.setDestination(45471U);
    msg.setDestinationEntity(79U);
    msg.name.assign("MPBYUOYOMITFUBVQBPXHEXWPGCYATLHJIJFEDUXLRUGWLMMGFTAYKAXJZHBZPGEYZVMSTINNPZERIHMOODPIJQJJCSLQSTAKMWOJKWQSZRHDKOWDSBJCLDVPYEKIAEOBBXYKVXRKCUVBZRNQAMRXFLYXNAHWSNQENGGAFCYZWCGTDXSVWHFQNTAOHDMTSUREWXSNFNGCKCPODEIYTKPPHSUDUCTCNLFARVVIGIRBJQZILQVFWOLQ");
    msg.value = 99U;

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
    msg.setTimeStamp(0.5123165300439262);
    msg.setSource(4496U);
    msg.setSourceEntity(5U);
    msg.setDestination(38540U);
    msg.setDestinationEntity(84U);
    msg.id = 224U;
    msg.period = 59065633U;
    msg.duty_cycle = 1689316340U;

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
    msg.setTimeStamp(0.2211737430927544);
    msg.setSource(15996U);
    msg.setSourceEntity(240U);
    msg.setDestination(12690U);
    msg.setDestinationEntity(13U);
    msg.id = 9U;
    msg.period = 268078885U;
    msg.duty_cycle = 2721042163U;

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
    msg.setTimeStamp(0.839823546619361);
    msg.setSource(56585U);
    msg.setSourceEntity(249U);
    msg.setDestination(12888U);
    msg.setDestinationEntity(203U);
    msg.id = 254U;
    msg.period = 3762008202U;
    msg.duty_cycle = 1397063876U;

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
    msg.setTimeStamp(0.3026427206497755);
    msg.setSource(61893U);
    msg.setSourceEntity(121U);
    msg.setDestination(17022U);
    msg.setDestinationEntity(169U);
    msg.id = 18U;
    msg.period = 210791041U;
    msg.duty_cycle = 344577672U;

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
    msg.setTimeStamp(0.10242848668329152);
    msg.setSource(9498U);
    msg.setSourceEntity(241U);
    msg.setDestination(10460U);
    msg.setDestinationEntity(161U);
    msg.id = 50U;
    msg.period = 2448282916U;
    msg.duty_cycle = 557969874U;

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
    msg.setTimeStamp(0.17117922562268573);
    msg.setSource(15694U);
    msg.setSourceEntity(14U);
    msg.setDestination(1632U);
    msg.setDestinationEntity(63U);
    msg.id = 228U;
    msg.period = 1959601248U;
    msg.duty_cycle = 824078750U;

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
    msg.setTimeStamp(0.4793647332702269);
    msg.setSource(22591U);
    msg.setSourceEntity(252U);
    msg.setDestination(47197U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.8170892327025805;
    msg.lon = 0.018604927454748288;
    msg.height = 0.9105751141734083;
    msg.x = 0.04448835692362396;
    msg.y = 0.3658562164892091;
    msg.z = 0.8726029636785134;
    msg.phi = 0.2512784578320564;
    msg.theta = 0.28332289396467014;
    msg.psi = 0.39449521374114227;
    msg.u = 0.5615579917199343;
    msg.v = 0.9250148218846225;
    msg.w = 0.12182878923473717;
    msg.vx = 0.8690138122544596;
    msg.vy = 0.22665986986404318;
    msg.vz = 0.5042608369097046;
    msg.p = 0.24106264999752824;
    msg.q = 0.790241790196881;
    msg.r = 0.23069057310053553;
    msg.depth = 0.10539107379198442;
    msg.alt = 0.07435359198064284;

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
    msg.setTimeStamp(0.701550843278003);
    msg.setSource(17147U);
    msg.setSourceEntity(101U);
    msg.setDestination(15635U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.7973712467692756;
    msg.lon = 0.5566832459823043;
    msg.height = 0.8155003160182771;
    msg.x = 0.8685852770895761;
    msg.y = 0.5758791870286228;
    msg.z = 0.8438348584422781;
    msg.phi = 0.8596425550059933;
    msg.theta = 0.6405284581091306;
    msg.psi = 0.32467717808386365;
    msg.u = 0.0365989578274043;
    msg.v = 0.7040962465599222;
    msg.w = 0.5136064685151985;
    msg.vx = 0.22746429843310345;
    msg.vy = 0.5928348300700691;
    msg.vz = 0.701263242778128;
    msg.p = 0.2757369709440043;
    msg.q = 0.14810007567079075;
    msg.r = 0.6977165593158884;
    msg.depth = 0.7252946636526267;
    msg.alt = 0.4488107706758969;

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
    msg.setTimeStamp(0.6324044150912791);
    msg.setSource(14029U);
    msg.setSourceEntity(161U);
    msg.setDestination(10463U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.021950234955630088;
    msg.lon = 0.7232513836479862;
    msg.height = 0.3341109345388116;
    msg.x = 0.22311900939855978;
    msg.y = 0.7558954366621126;
    msg.z = 0.19036937221425765;
    msg.phi = 0.8288165654873169;
    msg.theta = 0.34446431895873375;
    msg.psi = 0.6573371974047021;
    msg.u = 0.3686393329473421;
    msg.v = 0.2938654990284798;
    msg.w = 0.32093039283668023;
    msg.vx = 0.2861115625900844;
    msg.vy = 0.09051097179253986;
    msg.vz = 0.9801303858435183;
    msg.p = 0.36622297682238614;
    msg.q = 0.30654432364825523;
    msg.r = 0.6513552239148795;
    msg.depth = 0.8435245881782659;
    msg.alt = 0.5947452838580249;

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
    msg.setTimeStamp(0.7978267481505763);
    msg.setSource(40289U);
    msg.setSourceEntity(97U);
    msg.setDestination(29421U);
    msg.setDestinationEntity(180U);
    msg.x = 0.11796631860973095;
    msg.y = 0.6902115831111424;
    msg.z = 0.42671907533776565;

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
    msg.setTimeStamp(0.030185976442180684);
    msg.setSource(12694U);
    msg.setSourceEntity(239U);
    msg.setDestination(61261U);
    msg.setDestinationEntity(110U);
    msg.x = 0.0668941805251615;
    msg.y = 0.7793311511605063;
    msg.z = 0.6664964665498223;

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
    msg.setTimeStamp(0.5363265462824081);
    msg.setSource(40654U);
    msg.setSourceEntity(57U);
    msg.setDestination(35272U);
    msg.setDestinationEntity(47U);
    msg.x = 0.7079511144683257;
    msg.y = 0.48398894666403125;
    msg.z = 0.6836596495569746;

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
    msg.setTimeStamp(0.8220962087421945);
    msg.setSource(23758U);
    msg.setSourceEntity(27U);
    msg.setDestination(17938U);
    msg.setDestinationEntity(136U);
    msg.value = 0.2086943367400046;

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
    msg.setTimeStamp(0.5663212289802053);
    msg.setSource(45453U);
    msg.setSourceEntity(254U);
    msg.setDestination(31080U);
    msg.setDestinationEntity(49U);
    msg.value = 0.900018184120616;

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
    msg.setTimeStamp(0.21410631537401403);
    msg.setSource(58891U);
    msg.setSourceEntity(125U);
    msg.setDestination(17153U);
    msg.setDestinationEntity(148U);
    msg.value = 0.6186531927427079;

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
    msg.setTimeStamp(0.09335995250129314);
    msg.setSource(40498U);
    msg.setSourceEntity(0U);
    msg.setDestination(15481U);
    msg.setDestinationEntity(229U);
    msg.value = 0.34984983105786693;

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
    msg.setTimeStamp(0.764861060684233);
    msg.setSource(51073U);
    msg.setSourceEntity(194U);
    msg.setDestination(1066U);
    msg.setDestinationEntity(241U);
    msg.value = 0.36753637983485077;

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
    msg.setTimeStamp(0.06822029999391332);
    msg.setSource(51357U);
    msg.setSourceEntity(205U);
    msg.setDestination(62039U);
    msg.setDestinationEntity(151U);
    msg.value = 0.23598591332258523;

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
    msg.setTimeStamp(0.6920761696099438);
    msg.setSource(30464U);
    msg.setSourceEntity(140U);
    msg.setDestination(27680U);
    msg.setDestinationEntity(34U);
    msg.x = 0.2765965786199882;
    msg.y = 0.7077241682716829;
    msg.z = 0.2579371081414582;
    msg.phi = 0.4402411961762752;
    msg.theta = 0.09385171541643178;
    msg.psi = 0.9000829514472383;
    msg.p = 0.7725293393456819;
    msg.q = 0.8990532856388869;
    msg.r = 0.011178454103650814;
    msg.u = 0.4929285791647794;
    msg.v = 0.15603029975056948;
    msg.w = 0.13201457718570686;
    msg.bias_psi = 0.6977450994574372;
    msg.bias_r = 0.8525312131355004;

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
    msg.setTimeStamp(0.31250252791450217);
    msg.setSource(39349U);
    msg.setSourceEntity(34U);
    msg.setDestination(20993U);
    msg.setDestinationEntity(198U);
    msg.x = 0.6742481615271564;
    msg.y = 0.4478744327304641;
    msg.z = 0.887190277100885;
    msg.phi = 0.001039125183870171;
    msg.theta = 0.619958439085087;
    msg.psi = 0.972217225899857;
    msg.p = 0.19485294606406245;
    msg.q = 0.16659404923753396;
    msg.r = 0.6825940455263162;
    msg.u = 0.17747475642574473;
    msg.v = 0.711988134029526;
    msg.w = 0.6420431026302403;
    msg.bias_psi = 0.8883207104056297;
    msg.bias_r = 0.9703003035431076;

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
    msg.setTimeStamp(0.8313516978563005);
    msg.setSource(34852U);
    msg.setSourceEntity(41U);
    msg.setDestination(29252U);
    msg.setDestinationEntity(160U);
    msg.x = 0.6234681713093525;
    msg.y = 0.7339525117243276;
    msg.z = 0.8790312485197029;
    msg.phi = 0.4690405794150707;
    msg.theta = 0.4181879639474343;
    msg.psi = 0.7758284384638184;
    msg.p = 0.5314318598369961;
    msg.q = 0.4721671372399765;
    msg.r = 0.2514364314796146;
    msg.u = 0.026185995097564363;
    msg.v = 0.6190562197030786;
    msg.w = 0.23545209476160267;
    msg.bias_psi = 0.08308789804919026;
    msg.bias_r = 0.7176042161186462;

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
    msg.setTimeStamp(0.044398466439718454);
    msg.setSource(41734U);
    msg.setSourceEntity(228U);
    msg.setDestination(12374U);
    msg.setDestinationEntity(63U);
    msg.bias_psi = 0.8365009927742995;
    msg.bias_r = 0.9425780723194084;
    msg.cog = 0.18895790688534475;
    msg.cyaw = 0.2022461449190216;
    msg.lbl_rej_level = 0.3005978563567049;
    msg.gps_rej_level = 0.5787488398347646;
    msg.custom_x = 0.4610044525075455;
    msg.custom_y = 0.7640151205808133;
    msg.custom_z = 0.9864427903201697;

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
    msg.setTimeStamp(0.45910808833361594);
    msg.setSource(40618U);
    msg.setSourceEntity(65U);
    msg.setDestination(59790U);
    msg.setDestinationEntity(89U);
    msg.bias_psi = 0.4165278893142702;
    msg.bias_r = 0.6980552931182826;
    msg.cog = 0.8187907369259386;
    msg.cyaw = 0.5593268262291251;
    msg.lbl_rej_level = 0.9302670205878297;
    msg.gps_rej_level = 0.2563785961153895;
    msg.custom_x = 0.8628223513869617;
    msg.custom_y = 0.3465764722602406;
    msg.custom_z = 0.5313913958282599;

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
    msg.setTimeStamp(0.2754619775066852);
    msg.setSource(3146U);
    msg.setSourceEntity(89U);
    msg.setDestination(56036U);
    msg.setDestinationEntity(52U);
    msg.bias_psi = 0.36029443006519646;
    msg.bias_r = 0.46242745977401656;
    msg.cog = 0.40992463736784823;
    msg.cyaw = 0.6404076749588955;
    msg.lbl_rej_level = 0.015025858028393957;
    msg.gps_rej_level = 0.5463314643804141;
    msg.custom_x = 0.9304993207743705;
    msg.custom_y = 0.7167716011241273;
    msg.custom_z = 0.7838750585024001;

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
    msg.setTimeStamp(0.8378655431878138);
    msg.setSource(16085U);
    msg.setSourceEntity(215U);
    msg.setDestination(46468U);
    msg.setDestinationEntity(223U);
    msg.utc_time = 0.7962713657152057;
    msg.reason = 45U;

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
    msg.setTimeStamp(0.45089306563120835);
    msg.setSource(56928U);
    msg.setSourceEntity(15U);
    msg.setDestination(4018U);
    msg.setDestinationEntity(151U);
    msg.utc_time = 0.5196676769305935;
    msg.reason = 249U;

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
    msg.setTimeStamp(0.6651794370141307);
    msg.setSource(65216U);
    msg.setSourceEntity(0U);
    msg.setDestination(43183U);
    msg.setDestinationEntity(5U);
    msg.utc_time = 0.8436140623394326;
    msg.reason = 202U;

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
    msg.setTimeStamp(0.6140224457316509);
    msg.setSource(17019U);
    msg.setSourceEntity(209U);
    msg.setDestination(47956U);
    msg.setDestinationEntity(177U);
    msg.id = 153U;
    msg.range = 0.92947372944347;
    msg.acceptance = 166U;

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
    msg.setTimeStamp(0.09114576466324897);
    msg.setSource(62518U);
    msg.setSourceEntity(0U);
    msg.setDestination(16989U);
    msg.setDestinationEntity(67U);
    msg.id = 159U;
    msg.range = 0.46232169178151095;
    msg.acceptance = 56U;

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
    msg.setTimeStamp(0.35188902002319145);
    msg.setSource(60647U);
    msg.setSourceEntity(5U);
    msg.setDestination(13009U);
    msg.setDestinationEntity(71U);
    msg.id = 85U;
    msg.range = 0.5486001846078292;
    msg.acceptance = 107U;

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
    msg.setTimeStamp(0.053344665460907215);
    msg.setSource(61475U);
    msg.setSourceEntity(73U);
    msg.setDestination(43417U);
    msg.setDestinationEntity(133U);
    msg.type = 39U;
    msg.reason = 150U;
    msg.value = 0.07966658723660258;
    msg.timestep = 0.7157564498727872;

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
    msg.setTimeStamp(0.24615287990619072);
    msg.setSource(65428U);
    msg.setSourceEntity(180U);
    msg.setDestination(15836U);
    msg.setDestinationEntity(198U);
    msg.type = 75U;
    msg.reason = 136U;
    msg.value = 0.909608450033919;
    msg.timestep = 0.056302442758821014;

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
    msg.setTimeStamp(0.0010466064398579888);
    msg.setSource(2312U);
    msg.setSourceEntity(124U);
    msg.setDestination(38555U);
    msg.setDestinationEntity(241U);
    msg.type = 226U;
    msg.reason = 184U;
    msg.value = 0.2863232851864502;
    msg.timestep = 0.8390291000174467;

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
    msg.setTimeStamp(0.5608234533775401);
    msg.setSource(45598U);
    msg.setSourceEntity(222U);
    msg.setDestination(5308U);
    msg.setDestinationEntity(170U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("POFKHRKHJEJWZAMWMPFODBVDWYBULMVGDVNKUDTMCWEGZOFURFKBGTKIWLZFYAJVBQPRJJZXZNKRALHIOJSEKYXIJXQEHGAECVZWKENHPTTPNWSLFSPXARDODXANPSAAXLPQXJCCZSLNPREMBYGZQYSTSVGDIIFDQCUPIYDV");
    tmp_msg_0.lat = 0.7448445861897842;
    tmp_msg_0.lon = 0.4471840563115027;
    tmp_msg_0.depth = 0.19787146077645645;
    tmp_msg_0.query_channel = 234U;
    tmp_msg_0.reply_channel = 139U;
    tmp_msg_0.transponder_delay = 242U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8007668287263286;
    msg.y = 0.566998544219946;
    msg.var_x = 0.512594219726825;
    msg.var_y = 0.6494274284333873;
    msg.distance = 0.5852424843685964;

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
    msg.setTimeStamp(0.7478525303929175);
    msg.setSource(48055U);
    msg.setSourceEntity(140U);
    msg.setDestination(59014U);
    msg.setDestinationEntity(33U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DKHBTLTKFIYNQTLRBLRJQVFKEGSGSNRENORVPIUHBUFTRPTDFHKYNNVCMWVAGGKPOEWCZLDYUBFZEZBOQDWSGXIMZOHTDNNUASJQDAUDYYVLHLMGWWIUAEZYNQNYZAHMPGPQTJEWEXPFDAMVRVAALDAGCJXSQCVJHQXJWBBCCJKFMPZDPTVFWZBCENGPYXRUGXXPWYIJOLJRWCVHSZAMBHSOITXICKIHRZYFOKRQMSMXMTEESSKLLQOIKUBUO");
    tmp_msg_0.lat = 0.3386872631442339;
    tmp_msg_0.lon = 0.30769037212895356;
    tmp_msg_0.depth = 0.4536718004655156;
    tmp_msg_0.query_channel = 52U;
    tmp_msg_0.reply_channel = 160U;
    tmp_msg_0.transponder_delay = 210U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6983260299165179;
    msg.y = 0.07867405512198333;
    msg.var_x = 0.8228097961668566;
    msg.var_y = 0.14128311616424372;
    msg.distance = 0.9927724962798338;

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
    msg.setTimeStamp(0.43027446594240626);
    msg.setSource(23885U);
    msg.setSourceEntity(73U);
    msg.setDestination(3864U);
    msg.setDestinationEntity(41U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YUDZHINLSPJTYMJINLRBWDGNBZHRZPGNLPEWBKWOZQXERSEWZXZOCXQGMLWVVZPBLVAVTVJJSWODRGMGLUOKNWMFZJTYEEWQKTFRAKETPYOYXQDONPIKSOJAYLDKOJNYKNADFGVDXCMPIFUUJQEHILKHINNMTYPARDQSFYTHAGBVUCCFETDKGVBVCLFUSHIVXEIHQCJBDGACBIAUWTPEYUBFW");
    tmp_msg_0.lat = 0.7182920058427422;
    tmp_msg_0.lon = 0.06566833164514241;
    tmp_msg_0.depth = 0.1827438200794671;
    tmp_msg_0.query_channel = 234U;
    tmp_msg_0.reply_channel = 138U;
    tmp_msg_0.transponder_delay = 203U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6820874429613404;
    msg.y = 0.25333395816584303;
    msg.var_x = 0.36701982114743614;
    msg.var_y = 0.9646243625092642;
    msg.distance = 0.4849296916012108;

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
    msg.setTimeStamp(0.43561884001322404);
    msg.setSource(40812U);
    msg.setSourceEntity(156U);
    msg.setDestination(11167U);
    msg.setDestinationEntity(162U);
    msg.state = 23U;

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
    msg.setTimeStamp(0.21133759981066047);
    msg.setSource(25438U);
    msg.setSourceEntity(51U);
    msg.setDestination(46620U);
    msg.setDestinationEntity(169U);
    msg.state = 182U;

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
    msg.setTimeStamp(0.20075307218552085);
    msg.setSource(5797U);
    msg.setSourceEntity(243U);
    msg.setDestination(57158U);
    msg.setDestinationEntity(224U);
    msg.state = 150U;

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
    msg.setTimeStamp(0.23304350400137297);
    msg.setSource(17517U);
    msg.setSourceEntity(20U);
    msg.setDestination(61906U);
    msg.setDestinationEntity(34U);
    msg.x = 0.2665911031082442;
    msg.y = 0.6189106856829159;
    msg.z = 0.30751428623552646;

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
    msg.setTimeStamp(0.042777827641590216);
    msg.setSource(40778U);
    msg.setSourceEntity(176U);
    msg.setDestination(14955U);
    msg.setDestinationEntity(204U);
    msg.x = 0.26478627590247916;
    msg.y = 0.18831135480376882;
    msg.z = 0.3864456741646719;

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
    msg.setTimeStamp(0.4391468380480489);
    msg.setSource(31980U);
    msg.setSourceEntity(196U);
    msg.setDestination(4424U);
    msg.setDestinationEntity(36U);
    msg.x = 0.8755155425248076;
    msg.y = 0.9132096916041271;
    msg.z = 0.8632104718301681;

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
    msg.setTimeStamp(0.14026359587878257);
    msg.setSource(53452U);
    msg.setSourceEntity(106U);
    msg.setDestination(27701U);
    msg.setDestinationEntity(160U);
    msg.value = 0.6788895341923221;

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
    msg.setTimeStamp(0.4266426701404633);
    msg.setSource(38349U);
    msg.setSourceEntity(148U);
    msg.setDestination(49617U);
    msg.setDestinationEntity(140U);
    msg.value = 0.5703248090525422;

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
    msg.setTimeStamp(0.5236840422855662);
    msg.setSource(7856U);
    msg.setSourceEntity(128U);
    msg.setDestination(31257U);
    msg.setDestinationEntity(10U);
    msg.value = 0.7896856798772132;

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
    msg.setTimeStamp(0.10044962041478966);
    msg.setSource(54427U);
    msg.setSourceEntity(115U);
    msg.setDestination(64374U);
    msg.setDestinationEntity(81U);
    msg.value = 0.23602288387594106;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.8476657099149179);
    msg.setSource(33378U);
    msg.setSourceEntity(248U);
    msg.setDestination(32686U);
    msg.setDestinationEntity(158U);
    msg.value = 0.015922334692970108;
    msg.z_units = 189U;

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
    msg.setTimeStamp(0.1471552328621455);
    msg.setSource(57587U);
    msg.setSourceEntity(131U);
    msg.setDestination(49211U);
    msg.setDestinationEntity(15U);
    msg.value = 0.17533107114599333;
    msg.z_units = 196U;

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
    msg.setTimeStamp(0.7612280802896932);
    msg.setSource(55536U);
    msg.setSourceEntity(25U);
    msg.setDestination(29956U);
    msg.setDestinationEntity(131U);
    msg.value = 0.9444911863061544;
    msg.speed_units = 30U;

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
    msg.setTimeStamp(0.14476426611656612);
    msg.setSource(57864U);
    msg.setSourceEntity(38U);
    msg.setDestination(30891U);
    msg.setDestinationEntity(213U);
    msg.value = 0.884708478314766;
    msg.speed_units = 176U;

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
    msg.setTimeStamp(0.08446520788564471);
    msg.setSource(53444U);
    msg.setSourceEntity(234U);
    msg.setDestination(49317U);
    msg.setDestinationEntity(105U);
    msg.value = 0.591548682402757;
    msg.speed_units = 13U;

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
    msg.setTimeStamp(0.8095796928407666);
    msg.setSource(10119U);
    msg.setSourceEntity(148U);
    msg.setDestination(9096U);
    msg.setDestinationEntity(105U);
    msg.value = 0.6372192121804594;

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
    msg.setTimeStamp(0.2068307036394783);
    msg.setSource(55049U);
    msg.setSourceEntity(198U);
    msg.setDestination(16024U);
    msg.setDestinationEntity(214U);
    msg.value = 0.0037668267589083815;

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
    msg.setTimeStamp(0.8088793679030313);
    msg.setSource(7157U);
    msg.setSourceEntity(133U);
    msg.setDestination(7850U);
    msg.setDestinationEntity(200U);
    msg.value = 0.40784609664113813;

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
    msg.setTimeStamp(0.8503234285033953);
    msg.setSource(11212U);
    msg.setSourceEntity(4U);
    msg.setDestination(64815U);
    msg.setDestinationEntity(138U);
    msg.value = 0.9899125648661808;

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
    msg.setTimeStamp(0.2918964145761225);
    msg.setSource(19045U);
    msg.setSourceEntity(83U);
    msg.setDestination(20750U);
    msg.setDestinationEntity(233U);
    msg.value = 0.613510063753;

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
    msg.setTimeStamp(0.25423955545344257);
    msg.setSource(19217U);
    msg.setSourceEntity(227U);
    msg.setDestination(56696U);
    msg.setDestinationEntity(77U);
    msg.value = 0.4491091466817293;

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
    msg.setTimeStamp(0.1739245828744126);
    msg.setSource(35138U);
    msg.setSourceEntity(8U);
    msg.setDestination(46451U);
    msg.setDestinationEntity(251U);
    msg.value = 0.09007206615402508;

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
    msg.setTimeStamp(0.8081599328682131);
    msg.setSource(14044U);
    msg.setSourceEntity(67U);
    msg.setDestination(61805U);
    msg.setDestinationEntity(157U);
    msg.value = 0.146889360324873;

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
    msg.setTimeStamp(0.7006575406212127);
    msg.setSource(58146U);
    msg.setSourceEntity(198U);
    msg.setDestination(44511U);
    msg.setDestinationEntity(238U);
    msg.value = 0.6893953042268871;

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
    msg.setTimeStamp(0.7438293489690302);
    msg.setSource(40025U);
    msg.setSourceEntity(70U);
    msg.setDestination(32630U);
    msg.setDestinationEntity(125U);
    msg.path_ref = 495461864U;
    msg.start_lat = 0.5201719066772683;
    msg.start_lon = 0.0001194215380351249;
    msg.start_z = 0.3584852040747939;
    msg.start_z_units = 155U;
    msg.end_lat = 0.08857917450273634;
    msg.end_lon = 0.9134134859913303;
    msg.end_z = 0.655022613581528;
    msg.end_z_units = 229U;
    msg.speed = 0.015455320449002663;
    msg.speed_units = 113U;
    msg.lradius = 0.3609813244453437;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.0882132073685401);
    msg.setSource(39715U);
    msg.setSourceEntity(33U);
    msg.setDestination(17553U);
    msg.setDestinationEntity(183U);
    msg.path_ref = 1330814002U;
    msg.start_lat = 0.8168565757226148;
    msg.start_lon = 0.09457979034028374;
    msg.start_z = 0.6903379688763144;
    msg.start_z_units = 233U;
    msg.end_lat = 0.7506799521512176;
    msg.end_lon = 0.43712953036958846;
    msg.end_z = 0.12069338182971057;
    msg.end_z_units = 253U;
    msg.speed = 0.8455610068772991;
    msg.speed_units = 35U;
    msg.lradius = 0.9939911208991914;
    msg.flags = 104U;

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
    msg.setTimeStamp(0.24039963019629063);
    msg.setSource(57182U);
    msg.setSourceEntity(93U);
    msg.setDestination(23871U);
    msg.setDestinationEntity(41U);
    msg.path_ref = 1087615668U;
    msg.start_lat = 0.07421647333428849;
    msg.start_lon = 0.01584599137323539;
    msg.start_z = 0.2637968707385344;
    msg.start_z_units = 211U;
    msg.end_lat = 0.3101365488942003;
    msg.end_lon = 0.16431832993839024;
    msg.end_z = 0.20160141388755182;
    msg.end_z_units = 188U;
    msg.speed = 0.15145008231495583;
    msg.speed_units = 137U;
    msg.lradius = 0.12004476494129801;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.14691926259270127);
    msg.setSource(45624U);
    msg.setSourceEntity(177U);
    msg.setDestination(21982U);
    msg.setDestinationEntity(219U);
    msg.x = 0.7804018267502703;
    msg.y = 0.41053151414306344;
    msg.z = 0.9693660040358798;
    msg.k = 0.6864021249330814;
    msg.m = 0.0426390395085926;
    msg.n = 0.5968880087366043;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.5019857732436778);
    msg.setSource(64477U);
    msg.setSourceEntity(161U);
    msg.setDestination(54802U);
    msg.setDestinationEntity(216U);
    msg.x = 0.4146435048590089;
    msg.y = 0.3216914441272488;
    msg.z = 0.5407958065920813;
    msg.k = 0.9175755934650606;
    msg.m = 0.9191090192895375;
    msg.n = 0.9244570779813829;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.6066787214643988);
    msg.setSource(61365U);
    msg.setSourceEntity(4U);
    msg.setDestination(13672U);
    msg.setDestinationEntity(127U);
    msg.x = 0.687168576704529;
    msg.y = 0.8299810510189681;
    msg.z = 0.9893092713008879;
    msg.k = 0.7451060934246434;
    msg.m = 0.9688205066070876;
    msg.n = 0.36138562085056614;
    msg.flags = 81U;

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
    msg.setTimeStamp(0.04396686535897676);
    msg.setSource(36088U);
    msg.setSourceEntity(198U);
    msg.setDestination(52089U);
    msg.setDestinationEntity(124U);
    msg.value = 0.008027710546934408;

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
    msg.setTimeStamp(0.3578141731932697);
    msg.setSource(12914U);
    msg.setSourceEntity(94U);
    msg.setDestination(16623U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8422941318621943;

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
    msg.setTimeStamp(0.16385773779057855);
    msg.setSource(4853U);
    msg.setSourceEntity(6U);
    msg.setDestination(24643U);
    msg.setDestinationEntity(52U);
    msg.value = 0.0939094771821446;

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
    msg.setTimeStamp(0.035844555358922725);
    msg.setSource(16508U);
    msg.setSourceEntity(247U);
    msg.setDestination(47323U);
    msg.setDestinationEntity(134U);
    msg.u = 0.6891908733528922;
    msg.v = 0.6862798586124188;
    msg.w = 0.22418965716967076;
    msg.p = 0.05432468761363507;
    msg.q = 0.5842466456029954;
    msg.r = 0.010545884695726704;
    msg.flags = 91U;

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
    msg.setTimeStamp(0.3327429286389242);
    msg.setSource(44386U);
    msg.setSourceEntity(249U);
    msg.setDestination(6195U);
    msg.setDestinationEntity(105U);
    msg.u = 0.23344477935825592;
    msg.v = 0.001543260091385057;
    msg.w = 0.8837915872447699;
    msg.p = 0.05745935755853204;
    msg.q = 0.9906745945427071;
    msg.r = 0.19295544751392735;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.45492781516908765);
    msg.setSource(23045U);
    msg.setSourceEntity(169U);
    msg.setDestination(23540U);
    msg.setDestinationEntity(79U);
    msg.u = 0.27982629892358524;
    msg.v = 0.6947069424953708;
    msg.w = 0.9101849497541948;
    msg.p = 0.3437166362290741;
    msg.q = 0.5921219759398474;
    msg.r = 0.38423370324124917;
    msg.flags = 92U;

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
    msg.setTimeStamp(0.8009491545174829);
    msg.setSource(8289U);
    msg.setSourceEntity(104U);
    msg.setDestination(50362U);
    msg.setDestinationEntity(63U);
    msg.path_ref = 315355396U;
    msg.start_lat = 0.7031641296269857;
    msg.start_lon = 0.02933107348885078;
    msg.start_z = 0.5199873055064329;
    msg.start_z_units = 174U;
    msg.end_lat = 0.9491087979912624;
    msg.end_lon = 0.10617516891846035;
    msg.end_z = 0.8871197563329979;
    msg.end_z_units = 20U;
    msg.lradius = 0.8518008365695179;
    msg.flags = 56U;
    msg.x = 0.8240444112779679;
    msg.y = 0.041395168625285694;
    msg.z = 0.9929171757520335;
    msg.vx = 0.6999128288994967;
    msg.vy = 0.5808917842353772;
    msg.vz = 0.42858552637845204;
    msg.course_error = 0.43942786289666613;
    msg.eta = 31895U;

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
    msg.setTimeStamp(0.0789583199956213);
    msg.setSource(44405U);
    msg.setSourceEntity(107U);
    msg.setDestination(28290U);
    msg.setDestinationEntity(138U);
    msg.path_ref = 3662396437U;
    msg.start_lat = 0.9936647901669027;
    msg.start_lon = 0.06511751140356647;
    msg.start_z = 0.1410224069131758;
    msg.start_z_units = 29U;
    msg.end_lat = 0.3738347325254383;
    msg.end_lon = 0.3025129760460151;
    msg.end_z = 0.3071578182924186;
    msg.end_z_units = 190U;
    msg.lradius = 0.6659223832485905;
    msg.flags = 145U;
    msg.x = 0.8480696429868059;
    msg.y = 0.9787840005005575;
    msg.z = 0.6336634380514626;
    msg.vx = 0.585376885998164;
    msg.vy = 0.3577495282614779;
    msg.vz = 0.7952829551777406;
    msg.course_error = 0.6118492872095896;
    msg.eta = 56745U;

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
    msg.setTimeStamp(0.677790591779416);
    msg.setSource(23672U);
    msg.setSourceEntity(88U);
    msg.setDestination(17120U);
    msg.setDestinationEntity(90U);
    msg.path_ref = 3299789827U;
    msg.start_lat = 0.20129001543873604;
    msg.start_lon = 0.7610400336401281;
    msg.start_z = 0.8394489440290183;
    msg.start_z_units = 247U;
    msg.end_lat = 0.6915834967134975;
    msg.end_lon = 0.7927295586280382;
    msg.end_z = 0.9776576063963022;
    msg.end_z_units = 9U;
    msg.lradius = 0.7806175252117478;
    msg.flags = 213U;
    msg.x = 0.03662307759266925;
    msg.y = 0.6050170315029871;
    msg.z = 0.15915596353513783;
    msg.vx = 0.6640635796282065;
    msg.vy = 0.3098018326779278;
    msg.vz = 0.24552333710279717;
    msg.course_error = 0.8626082487784237;
    msg.eta = 11313U;

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
    msg.setTimeStamp(0.5923842520995201);
    msg.setSource(30923U);
    msg.setSourceEntity(69U);
    msg.setDestination(50568U);
    msg.setDestinationEntity(4U);
    msg.k = 0.530256991945666;
    msg.m = 0.8359374533411744;
    msg.n = 0.8645238739795917;

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
    msg.setTimeStamp(0.9736035903324647);
    msg.setSource(53685U);
    msg.setSourceEntity(69U);
    msg.setDestination(65415U);
    msg.setDestinationEntity(110U);
    msg.k = 0.7200211185409076;
    msg.m = 0.03269215558322047;
    msg.n = 0.9326792257331253;

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
    msg.setTimeStamp(0.8053566384603364);
    msg.setSource(44472U);
    msg.setSourceEntity(40U);
    msg.setDestination(11204U);
    msg.setDestinationEntity(24U);
    msg.k = 0.29987896121930624;
    msg.m = 0.3963521650529972;
    msg.n = 0.4507918285470661;

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
    msg.setTimeStamp(0.09900343741384199);
    msg.setSource(11399U);
    msg.setSourceEntity(83U);
    msg.setDestination(6824U);
    msg.setDestinationEntity(86U);
    msg.p = 0.8525136926746049;
    msg.i = 0.6679909689320572;
    msg.d = 0.5462693827590781;
    msg.a = 0.19024005457237203;

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
    msg.setTimeStamp(0.34420717280071733);
    msg.setSource(61961U);
    msg.setSourceEntity(222U);
    msg.setDestination(26333U);
    msg.setDestinationEntity(132U);
    msg.p = 0.3440639955186783;
    msg.i = 0.6054442627863118;
    msg.d = 0.860813925334771;
    msg.a = 0.8873310697118917;

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
    msg.setTimeStamp(0.17164287883502805);
    msg.setSource(61760U);
    msg.setSourceEntity(74U);
    msg.setDestination(13784U);
    msg.setDestinationEntity(133U);
    msg.p = 0.13649233672948535;
    msg.i = 0.18245736215124564;
    msg.d = 0.3570929714242562;
    msg.a = 0.13425530301438537;

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
    msg.setTimeStamp(0.7814891102335494);
    msg.setSource(43196U);
    msg.setSourceEntity(56U);
    msg.setDestination(64110U);
    msg.setDestinationEntity(77U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.7964615554110293);
    msg.setSource(61574U);
    msg.setSourceEntity(22U);
    msg.setDestination(27247U);
    msg.setDestinationEntity(251U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.2982229475929661);
    msg.setSource(36160U);
    msg.setSourceEntity(247U);
    msg.setDestination(769U);
    msg.setDestinationEntity(45U);
    msg.op = 242U;

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
    msg.setTimeStamp(0.5769379647152859);
    msg.setSource(17821U);
    msg.setSourceEntity(134U);
    msg.setDestination(18865U);
    msg.setDestinationEntity(130U);
    msg.timeout = 21932U;
    msg.lat = 0.157933612250876;
    msg.lon = 0.48491511362853446;
    msg.z = 0.804886909545169;
    msg.z_units = 224U;
    msg.speed = 0.08475710254485658;
    msg.speed_units = 143U;
    msg.roll = 0.4989270207994102;
    msg.pitch = 0.6371877678009774;
    msg.yaw = 0.7097419305874478;
    msg.custom.assign("QZYNOWYBYDFBAONLRWMNEXSRNWJAVEJODKITTXGUTGJOVYIPJMBZEICSEZKKFKZXUIZIGJNSCHVVAFSBBMVQKFCPIVGDHMALXUWLGWYSKJCWDIBNAFNEMDSOXMRGRMYVQNDDYOGZZQUTIRYWMUURCCNDIMPLPLTXNFWTBOYUASHHFJPLZUTURFAEKZGROPPLQRSALCDMPGHFCLQEKQJJXXLWWQXHBCKSXUVHQOGBEKAHAHTEYR");

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
    msg.setTimeStamp(0.6233085512623115);
    msg.setSource(40628U);
    msg.setSourceEntity(70U);
    msg.setDestination(40681U);
    msg.setDestinationEntity(252U);
    msg.timeout = 25102U;
    msg.lat = 0.16036758103480464;
    msg.lon = 0.4788412954080421;
    msg.z = 0.3116959518221569;
    msg.z_units = 2U;
    msg.speed = 0.325622831829088;
    msg.speed_units = 98U;
    msg.roll = 0.6243546805942932;
    msg.pitch = 0.4545775099333499;
    msg.yaw = 0.002635371891080318;
    msg.custom.assign("RVYEGBZCSTDDDLOJJAINEPFCIDGFOJYJZMOVXOQLQHVPQJRIXRIWSPIDHAXGWVFWXYSKCZQYATGVVMWAEGFRUFQKLMEUZCUUFJNHTDUPROXMDLDQPHHSUZEKVEROBIBZAIOUBMSXMRSSBECTDWOFFWQJWBWXTRTXCX");

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
    msg.setTimeStamp(0.8504032517568495);
    msg.setSource(59015U);
    msg.setSourceEntity(130U);
    msg.setDestination(41557U);
    msg.setDestinationEntity(154U);
    msg.timeout = 50131U;
    msg.lat = 0.048056442076358064;
    msg.lon = 0.23257883932193824;
    msg.z = 0.42694732416706593;
    msg.z_units = 239U;
    msg.speed = 0.9167719449298695;
    msg.speed_units = 79U;
    msg.roll = 0.38340815656626825;
    msg.pitch = 0.41264472690247855;
    msg.yaw = 0.3921243064150196;
    msg.custom.assign("ZWOAEENBBHOBWOCHWPEXNUS");

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
    msg.setTimeStamp(0.07835080436635344);
    msg.setSource(28098U);
    msg.setSourceEntity(141U);
    msg.setDestination(59391U);
    msg.setDestinationEntity(227U);
    msg.timeout = 5912U;
    msg.lat = 0.29682712770270636;
    msg.lon = 0.546636388928502;
    msg.z = 0.17057077209593985;
    msg.z_units = 77U;
    msg.speed = 0.3319848858291631;
    msg.speed_units = 37U;
    msg.duration = 22596U;
    msg.radius = 0.13710682165974886;
    msg.flags = 234U;
    msg.custom.assign("ZXEEQBEODDPRFQSPMRONCONGSYNDLQVGDDIVQUISFBFIBBJGOJNALTCGVLBVODXGVAKSRBQKVYPJMLHFWJUICAHSZNXHNZSRFMQYRVBUFVWJAEACDDIMHXQYMPOTUJCENBNMYBWKAOPLZCCZWFLMDSHXW");

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
    msg.setTimeStamp(0.9019438692546701);
    msg.setSource(16604U);
    msg.setSourceEntity(222U);
    msg.setDestination(44665U);
    msg.setDestinationEntity(8U);
    msg.timeout = 50618U;
    msg.lat = 0.3451616929635396;
    msg.lon = 0.3822477438134714;
    msg.z = 0.31975831186945336;
    msg.z_units = 216U;
    msg.speed = 0.36484125007371704;
    msg.speed_units = 151U;
    msg.duration = 11354U;
    msg.radius = 0.0493769367582132;
    msg.flags = 11U;
    msg.custom.assign("EYCRJLQNFMRKPSTOMTYJJWBRAXCMHXBWAVZWXABXGCNWIDUJZERSQTQQDDAOIJFYAAKZLLSHEEILWZKAPYRAHSDTRCUDDHPCIZHIFQULTUDCRYKH");

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
    msg.setTimeStamp(0.9329026259206533);
    msg.setSource(51139U);
    msg.setSourceEntity(9U);
    msg.setDestination(56221U);
    msg.setDestinationEntity(75U);
    msg.timeout = 17676U;
    msg.lat = 0.9690537173880891;
    msg.lon = 0.46619513806016344;
    msg.z = 0.3077182475784106;
    msg.z_units = 145U;
    msg.speed = 0.70166662857009;
    msg.speed_units = 113U;
    msg.duration = 32042U;
    msg.radius = 0.024060793846092166;
    msg.flags = 140U;
    msg.custom.assign("TLLOLCCKEPBPKWCAHIGMVDBNLDXSRUSLPECHHIDMABYLPDBWTQZEWRYDNKUKYGXANSHBVJZCIIDCOGLTTCPIYNUGUBHWWJPNUQZLXFUTRAJQTOSLGQZZFFXCFNIQWRJABOPVIEZJPPFTVDHWZAZNFVXORGDGENTXMJYHFMRNWYKEIRMIBZJAQSNEYYXOHRSFZWRYGKLDJKVAKOOQESFQTAMROJXFVBVXKSEWEBXD");

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
    msg.setTimeStamp(0.39608700567156485);
    msg.setSource(37838U);
    msg.setSourceEntity(198U);
    msg.setDestination(37975U);
    msg.setDestinationEntity(95U);
    msg.custom.assign("RGWZEKYJGJRLOBRVVECMPCMXWTQTIFWATHRSCADHHXPPKPEVQNOUOTEBTRYVWGGBNK");

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
    msg.setTimeStamp(0.4871486133640067);
    msg.setSource(35084U);
    msg.setSourceEntity(9U);
    msg.setDestination(34547U);
    msg.setDestinationEntity(145U);
    msg.custom.assign("FKKMLCGJPYJJPVYZMUIQSSOSDEWRVJYBWDTFVKYDEXAJFRGGTWHGLZWLTLHNIFJHYVDWWCFMKRAOBDCHEASUYAKFBZMIMXONLCBUHXWGOUVTGXNCLBHATLFIWJYUFHKATIIQSSZOECMENMNVFQMZHCRXDZTONSEQSZXETQIAKOPBVRQNZRGVKQJBNQRUPBVPEOUKZGJXUDTP");

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
    msg.setTimeStamp(0.4131398894191346);
    msg.setSource(10712U);
    msg.setSourceEntity(46U);
    msg.setDestination(52147U);
    msg.setDestinationEntity(94U);
    msg.custom.assign("GUBMABHLTUTHMQFWGNNKVVETSORKAUOFOTLMSGRRVDRPNCNXJDRTVEHEMJCZYCLMNCXHVCQCEDAZDSUWULBGBBKTLUUDSEVMEJSGNJPZSBVUYBORDEJDQSNCJWNRKHBLLKYEPKZTUHJZOIOMZHXWEQQIKICIXIXTRPFNQMCCJYLZKLIZFQGZWHAHOPAQFIYPTPTSFGFPIDVBYYPOIIAVSXUWWWKFGXYRGFXMEZYABJOMXYDWHAPGDQK");

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
    msg.setTimeStamp(0.11887067837087739);
    msg.setSource(54360U);
    msg.setSourceEntity(30U);
    msg.setDestination(37179U);
    msg.setDestinationEntity(116U);
    msg.timeout = 21513U;
    msg.lat = 0.5852203354899652;
    msg.lon = 0.7370227248679039;
    msg.z = 0.44488483557147773;
    msg.z_units = 163U;
    msg.duration = 35610U;
    msg.speed = 0.10328505982509373;
    msg.speed_units = 253U;
    msg.type = 70U;
    msg.radius = 0.6906397306278936;
    msg.length = 0.9597345803460849;
    msg.bearing = 0.5125157091513598;
    msg.direction = 164U;
    msg.custom.assign("HCXQUQOYDKVBYZSAZJTIVHJWKGFNYPAGKTELRKITTCPUFBXGHHVFTHOVZFMZPHIEMEXPJIXVJYAUIAWGEHZNOQGWKNGVRESXETJUSDCRSBBLEMXCEAXYWFDNZVUWOTDOQQGLSSBVLMMPBWSTNHMPELZVGJWCUKROTJKCIYVUFUFRXPXASPYPZ");

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
    msg.setTimeStamp(0.7218613751895258);
    msg.setSource(8045U);
    msg.setSourceEntity(75U);
    msg.setDestination(18301U);
    msg.setDestinationEntity(63U);
    msg.timeout = 44830U;
    msg.lat = 0.5689562914790242;
    msg.lon = 0.33694138203114665;
    msg.z = 0.8380670978662714;
    msg.z_units = 24U;
    msg.duration = 20142U;
    msg.speed = 0.4524731824886602;
    msg.speed_units = 45U;
    msg.type = 32U;
    msg.radius = 0.22798803936162015;
    msg.length = 0.840189086518347;
    msg.bearing = 0.978465463650964;
    msg.direction = 203U;
    msg.custom.assign("MSGIWUHCVCWFKLINAXHKGWMHDOZDNZJYKRLVXUEQDVGKWSJJKHMOHEXQPSFYMTXCGGYRNVXIWBMJNGLVMBACBPIQXXZKAYHWIMKZLJZRGMSFRATSEZDBRPWDQXSTCBPDYTYIJFJCKDRYGIZYBDTJABW");

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
    msg.setTimeStamp(0.2610728558446296);
    msg.setSource(2591U);
    msg.setSourceEntity(172U);
    msg.setDestination(5800U);
    msg.setDestinationEntity(218U);
    msg.timeout = 34988U;
    msg.lat = 0.6843963389788529;
    msg.lon = 0.07821811888259567;
    msg.z = 0.5780242177979813;
    msg.z_units = 226U;
    msg.duration = 19725U;
    msg.speed = 0.7480015472405205;
    msg.speed_units = 41U;
    msg.type = 247U;
    msg.radius = 0.015892866980536047;
    msg.length = 0.4959054406446508;
    msg.bearing = 0.1460271339062631;
    msg.direction = 14U;
    msg.custom.assign("CZJBCHVHIXZHSROMKXOEVXEHPDANEGCPARGTBGFUWKUKUYEWZQTBMUU");

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
    msg.setTimeStamp(0.9852117984831626);
    msg.setSource(47027U);
    msg.setSourceEntity(68U);
    msg.setDestination(4253U);
    msg.setDestinationEntity(113U);
    msg.duration = 62155U;
    msg.custom.assign("STNUVUJIXBRQLMYNPUYEPZCUYIFDXORNLCXCXGSMZOCQNXOWAKNIDBXYMOKKWJETPVVPWELHGVTIMJSSTZFKSPDXZOWLYENQBHYYAFSRWQOGROJWHQDCQISJGFXITKSEGHTRBYCQCSEDFUWXKDEVABDLGGCDOGUHNTRULTFTREQQJHMMOPKPMUMHQZBZCLMVWNEVEHNWAUAJVIFALZHPXGAVFBVBJRA");

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
    msg.setTimeStamp(0.9705858480943395);
    msg.setSource(16158U);
    msg.setSourceEntity(239U);
    msg.setDestination(7581U);
    msg.setDestinationEntity(235U);
    msg.duration = 46341U;
    msg.custom.assign("LSOETKSPHKOSODYVBNLFXRMBULLHZDECICAPP");

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
    msg.setTimeStamp(0.58284151747144);
    msg.setSource(40527U);
    msg.setSourceEntity(71U);
    msg.setDestination(4243U);
    msg.setDestinationEntity(143U);
    msg.duration = 30110U;
    msg.custom.assign("VVMTPMCROSCRJINEMFGDIHXBRZCCSVKOCCNKEVBNTSWVLQWUQEEZXVQGKLDTPJJEYAQMRDVXYNMXWCTZRYUALEPSGHOTYINDRPKDZSEBAWJATMAONBUFQGFEQHSPIYJGOUBAQGDJIVSMKVWLCKJYFMNRTFFLTJBEKYCQBHOXPHGFZDAJOWADGOJPGHRDXVXKPYMU");

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
    msg.setTimeStamp(0.3244137477177569);
    msg.setSource(29943U);
    msg.setSourceEntity(252U);
    msg.setDestination(18164U);
    msg.setDestinationEntity(76U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.4037919009856442;
    msg.control.set(tmp_msg_0);
    msg.duration = 13546U;
    msg.custom.assign("SFAULTVXRLPXJDUBMZVZZCCITXIEXAKGTNIQMEAGLNBGBWUMSVWBEYPJKZPBVGCOPQEWXQORHRKBATSIXDYWFFQNHVJTVQCMDLBXGHDVWYJEPNSALTIYPWFPYRVROYIFQSMMWNYXFNRSQYZUIFQYRVGSHMEFSBJKJJKBVAKEDJTUATCOEEDBWMCLHUGLIWOMZSAPFJUHJZOQKZUCPA");

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
    msg.setTimeStamp(0.9404975555969611);
    msg.setSource(60745U);
    msg.setSourceEntity(8U);
    msg.setDestination(42184U);
    msg.setDestinationEntity(110U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.499635345687781;
    msg.control.set(tmp_msg_0);
    msg.duration = 18825U;
    msg.custom.assign("BFJHKXSVAWIEABRCJLHOSSMEGWHGUKBKKETIQIWBOAMSWEXABLLUMMRAEWFQKMTGUYYHZDBPQEGOTZHNQUMMWFAUZGFMDRHUUKCBRAVOSYDYYNALSTTKJPSNIELXCBFPTVNIOINXPIYJLNSWFJFQIVUCWPGCXPKYTWYZCXPNGJQSORVPOYXCHPRVTBCLIJDH");

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
    msg.setTimeStamp(0.12103333548413475);
    msg.setSource(48517U);
    msg.setSourceEntity(132U);
    msg.setDestination(2743U);
    msg.setDestinationEntity(58U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3645547113U;
    tmp_msg_0.start_lat = 0.609664436884488;
    tmp_msg_0.start_lon = 0.28912985787712664;
    tmp_msg_0.start_z = 0.331036726634259;
    tmp_msg_0.start_z_units = 142U;
    tmp_msg_0.end_lat = 0.6789190389888754;
    tmp_msg_0.end_lon = 0.1820535489195685;
    tmp_msg_0.end_z = 0.5269169737617426;
    tmp_msg_0.end_z_units = 244U;
    tmp_msg_0.speed = 0.4899822528160346;
    tmp_msg_0.speed_units = 79U;
    tmp_msg_0.lradius = 0.5889494587581878;
    tmp_msg_0.flags = 18U;
    msg.control.set(tmp_msg_0);
    msg.duration = 1346U;
    msg.custom.assign("BEKBZHMUVDQKROEOECSMSSUGNFIBDXCOAYAWHVXUHWPFSBMMKJVRUUUTTBIXPBSQNTIISGHYWZFIAJWLMYCGMNUDFTEERTZHNRNFKONPJBGEFCHAGRVYVAJHATDLJNZHBYYUEQYRMHINGFKZDUKCZSROROOFLWLZCQDXXQLAXFPMPRCPZBACXPSVTJVEGQHXLNOLVESWYJWPEKDQAIBIMLQFVTWTKRP");

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
    msg.setTimeStamp(0.18326851473580086);
    msg.setSource(42210U);
    msg.setSourceEntity(103U);
    msg.setDestination(41707U);
    msg.setDestinationEntity(91U);
    msg.timeout = 46823U;
    msg.lat = 0.760631219164399;
    msg.lon = 0.44922894770745947;
    msg.z = 0.19839909834073788;
    msg.z_units = 31U;
    msg.speed = 0.5345983020163635;
    msg.speed_units = 109U;
    msg.bearing = 0.6734235342776808;
    msg.cross_angle = 0.6262446866681582;
    msg.width = 0.8435005033925556;
    msg.length = 0.6155318155600128;
    msg.hstep = 0.6928887244135506;
    msg.coff = 63U;
    msg.alternation = 111U;
    msg.flags = 63U;
    msg.custom.assign("YXMVIKPFZLHRZEEFHSIVRTG");

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
    msg.setTimeStamp(0.6220720053144383);
    msg.setSource(6656U);
    msg.setSourceEntity(212U);
    msg.setDestination(6925U);
    msg.setDestinationEntity(111U);
    msg.timeout = 55835U;
    msg.lat = 0.10844311395932349;
    msg.lon = 0.19884176734013226;
    msg.z = 0.8984992551724457;
    msg.z_units = 122U;
    msg.speed = 0.20798662964032322;
    msg.speed_units = 168U;
    msg.bearing = 0.7153670068354135;
    msg.cross_angle = 0.8963530507244796;
    msg.width = 0.9374556492583295;
    msg.length = 0.37480411607252206;
    msg.hstep = 0.003231395109901336;
    msg.coff = 54U;
    msg.alternation = 97U;
    msg.flags = 56U;
    msg.custom.assign("WWVTGMOSLRSKXGOYIZBQHGFAGOMCFPKPEERWLUQNHHSLZQRMVIELJJDZXCIRGVPHUFPALXYKKENOUTFYVWWACDKXBGPYKKPDDNXQOPNEIQANTPETTLPNKMMTGJBSLXIVTJCYAGSVEMMXHIJFIQEQBORWSYTLMCOIXJLNQTLSDWHNGSZJDSUVWURDJBCUYBWAUZBQKZNXVFBVBUYSMFYJTCUMBECVZIZHFRAIZDQDDXYOZHOKA");

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
    msg.setTimeStamp(0.2824100440761558);
    msg.setSource(60120U);
    msg.setSourceEntity(21U);
    msg.setDestination(11995U);
    msg.setDestinationEntity(238U);
    msg.timeout = 18409U;
    msg.lat = 0.9675813086848644;
    msg.lon = 0.3972773671213642;
    msg.z = 0.4340699386406628;
    msg.z_units = 48U;
    msg.speed = 0.7938157450686787;
    msg.speed_units = 127U;
    msg.bearing = 0.23373108070126858;
    msg.cross_angle = 0.3250417960460783;
    msg.width = 0.7414979774408275;
    msg.length = 0.14256010452572032;
    msg.hstep = 0.7964776952756741;
    msg.coff = 39U;
    msg.alternation = 31U;
    msg.flags = 245U;
    msg.custom.assign("HKUNGLCRUQBYHPGWOPSHYYJIBXTFYRBAWFZETIQRIRQKSLWLFFTZCIHGKJCMTMOCKNZBHWSSXQOGMVQZECICCBNBCOKGSNSQQVNAWOIKLHUICJVPXVNKYBDIVBELESYTJHKRRADXLDFWZMSOMSFYUSRDTBAPOUGJVQQAUCHZGEZXDLKTXUFEEWXLWPPTXAWJNVELPJUOVPGFNVDNO");

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
    msg.setTimeStamp(0.044410255059669446);
    msg.setSource(48542U);
    msg.setSourceEntity(129U);
    msg.setDestination(16617U);
    msg.setDestinationEntity(163U);
    msg.timeout = 47081U;
    msg.lat = 0.2031058086889096;
    msg.lon = 0.21033286922299133;
    msg.z = 0.7234077793571703;
    msg.z_units = 41U;
    msg.speed = 0.6574100276414665;
    msg.speed_units = 173U;
    msg.custom.assign("PZFLQMJSPNHYFWYCZIQNVRADXTLBTFANYTTWKOIVMZAPVPRVRDMALJMDGDMKKUGOUTRHQOSGECUBWBHBAFUKHYVEVMYPQJCZXHWVRXBFZQRXGCMDBLCTYTXIMSAZUIVRBANCQDJPCZPPFYQALHPESKXNSJYBSOSXDXWARONEUIO");

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
    msg.setTimeStamp(0.4861174897241529);
    msg.setSource(28497U);
    msg.setSourceEntity(114U);
    msg.setDestination(29066U);
    msg.setDestinationEntity(17U);
    msg.timeout = 64134U;
    msg.lat = 0.42356401143606026;
    msg.lon = 0.49950899843193564;
    msg.z = 5.103185086241524e-05;
    msg.z_units = 65U;
    msg.speed = 0.38702998000233;
    msg.speed_units = 13U;
    msg.custom.assign("OFVAPNIWLBDOZEDTXGKLUNKECTZEBXWXOMDNXSDAADAVFVOHYXOJILVBMQMLTUCNRUCOIMDIVZDNZTPRABNUKQYRFGNUNKPITWEDRVYRPECCSWXOESSLCWRGJQZXNAJRMKIZVPJZHNITKHTGZKEYJJPHFVGSAHSRMEMSPCTBKMLFYKILUA");

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
    msg.setTimeStamp(0.4545746889699558);
    msg.setSource(5423U);
    msg.setSourceEntity(221U);
    msg.setDestination(8938U);
    msg.setDestinationEntity(217U);
    msg.timeout = 62766U;
    msg.lat = 0.24693941554523968;
    msg.lon = 0.07551074324699525;
    msg.z = 0.5557752949265079;
    msg.z_units = 25U;
    msg.speed = 0.8846638160387168;
    msg.speed_units = 235U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9390288254962996;
    tmp_msg_0.y = 0.7734512988390805;
    tmp_msg_0.z = 0.5150071055133727;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XDZEZWZFOSKYKWUOUSZRHCUBPAGLSIQFKTYENYW");

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
    msg.setTimeStamp(0.23076284661492164);
    msg.setSource(47335U);
    msg.setSourceEntity(160U);
    msg.setDestination(15884U);
    msg.setDestinationEntity(41U);
    msg.x = 0.584911047563503;
    msg.y = 0.953010543865739;
    msg.z = 0.8870166293764955;

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
    msg.setTimeStamp(0.4580388029548814);
    msg.setSource(899U);
    msg.setSourceEntity(116U);
    msg.setDestination(40990U);
    msg.setDestinationEntity(189U);
    msg.x = 0.9703563966051396;
    msg.y = 0.6435915232628759;
    msg.z = 0.25755190337075495;

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
    msg.setTimeStamp(0.8180974497026209);
    msg.setSource(33673U);
    msg.setSourceEntity(47U);
    msg.setDestination(48018U);
    msg.setDestinationEntity(134U);
    msg.x = 0.10931320335433203;
    msg.y = 0.0742483297839921;
    msg.z = 0.3039723289828966;

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
    msg.setTimeStamp(0.1272653678044554);
    msg.setSource(37700U);
    msg.setSourceEntity(48U);
    msg.setDestination(31031U);
    msg.setDestinationEntity(65U);
    msg.timeout = 9414U;
    msg.lat = 0.15850067878764096;
    msg.lon = 0.8426730675546457;
    msg.z = 0.9736838313371958;
    msg.z_units = 34U;
    msg.amplitude = 0.6416471249786484;
    msg.pitch = 0.8397349077399106;
    msg.speed = 0.08416764822963796;
    msg.speed_units = 105U;
    msg.custom.assign("FFQHLFCHHXFSRVKJZLTHBUUFTSDJXXDPJSXQVSAHHNNHGVSOVUZTZEWZIXGRLMFYNGYFVGYMDYYAKULJOBIETWRPHNTOBZQKQGWTUXHM");

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
    msg.setTimeStamp(0.047702204336353415);
    msg.setSource(16441U);
    msg.setSourceEntity(242U);
    msg.setDestination(26065U);
    msg.setDestinationEntity(253U);
    msg.timeout = 54657U;
    msg.lat = 0.3144491418762363;
    msg.lon = 0.7354994134376535;
    msg.z = 0.9164712953552012;
    msg.z_units = 59U;
    msg.amplitude = 0.9251995423080037;
    msg.pitch = 0.6064233284892698;
    msg.speed = 0.062308754004406164;
    msg.speed_units = 142U;
    msg.custom.assign("XNERNHQVGBMQPCDOWDTSMALWGLISI");

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
    msg.setTimeStamp(0.6056333454146393);
    msg.setSource(50411U);
    msg.setSourceEntity(33U);
    msg.setDestination(46612U);
    msg.setDestinationEntity(118U);
    msg.timeout = 7634U;
    msg.lat = 0.8643927828607775;
    msg.lon = 0.7010008559698684;
    msg.z = 0.9443714567428131;
    msg.z_units = 70U;
    msg.amplitude = 0.26641145103573727;
    msg.pitch = 0.1818972558913481;
    msg.speed = 0.8815567108311644;
    msg.speed_units = 163U;
    msg.custom.assign("INVGHQDGNFUITZBFJETFWRIASUPMMXPQYLKLPEHQJCUBGYZXYFAFYNSMUAFJJDANKMXWQBILBNBEXZFIZLUKOCCELMZOGIOOWMXQWVQOKBCRZCHVSAHLPYXOGYKRDTHFVUIDVGLERSMGUHPWR");

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
    msg.setTimeStamp(0.6425259607001996);
    msg.setSource(59380U);
    msg.setSourceEntity(159U);
    msg.setDestination(30747U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.8853916921840032);
    msg.setSource(52057U);
    msg.setSourceEntity(138U);
    msg.setDestination(17194U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.6373380058021547);
    msg.setSource(54199U);
    msg.setSourceEntity(74U);
    msg.setDestination(35325U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.24274522706780566);
    msg.setSource(30974U);
    msg.setSourceEntity(40U);
    msg.setDestination(6439U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.29972741363135624;
    msg.lon = 0.8401677098424896;
    msg.z = 0.3612302418672787;
    msg.z_units = 167U;
    msg.radius = 0.6073575087080898;
    msg.duration = 27623U;
    msg.speed = 0.4640293061114611;
    msg.speed_units = 154U;
    msg.custom.assign("JHGAAKPBVNHBLFHMPCCZJEFZXEECEECFTXHISNHWGWYWZXPHOAGVJIZUCUMXYRDRBADFUTYLTMMSMYHXFLFKBVLYWBEVQBGUILZSXKVKNCQAIOPSENPORAGNTUQVYAOQJXUAOJTVQIMUQQHWKBZTFNCOXJCAWQFKRWBZBPTWMDWMQTXDRRMZIFDVOFOIGRG");

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
    msg.setTimeStamp(0.7651928489810904);
    msg.setSource(42506U);
    msg.setSourceEntity(20U);
    msg.setDestination(20788U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.9282722333123385;
    msg.lon = 0.5969593925212353;
    msg.z = 0.34068902541053625;
    msg.z_units = 87U;
    msg.radius = 0.3349713243520399;
    msg.duration = 31741U;
    msg.speed = 0.5503614229132916;
    msg.speed_units = 163U;
    msg.custom.assign("DZVACQVMALVBKZJTOL");

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
    msg.setTimeStamp(0.12807717169256494);
    msg.setSource(15554U);
    msg.setSourceEntity(136U);
    msg.setDestination(27796U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.5863259347215568;
    msg.lon = 0.35350314173055253;
    msg.z = 0.45903241815660534;
    msg.z_units = 225U;
    msg.radius = 0.23543952455837724;
    msg.duration = 19451U;
    msg.speed = 0.8152560940929859;
    msg.speed_units = 47U;
    msg.custom.assign("ISMHAOOJWECOTYWXKAVJNHQNLNMIUHYKCEBTQHFLZEDDPKLAIYQC");

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
    msg.setTimeStamp(0.008615195056790648);
    msg.setSource(59056U);
    msg.setSourceEntity(29U);
    msg.setDestination(40215U);
    msg.setDestinationEntity(254U);
    msg.timeout = 32640U;
    msg.flags = 41U;
    msg.lat = 0.9849613447400976;
    msg.lon = 0.01900174469038929;
    msg.start_z = 0.03224225073606479;
    msg.start_z_units = 37U;
    msg.end_z = 0.5024245987036815;
    msg.end_z_units = 242U;
    msg.radius = 0.747843052143395;
    msg.speed = 0.030391876511236537;
    msg.speed_units = 206U;
    msg.custom.assign("DYCYXGIWMQIEHWSUZWIKVHXDFAIJBDCUHQBTAMAVZPQRSHTISCTJWKJFSXTHQGVVKRZVPTGPMKHELPLJYFFJYYBUSFXIBWNYTLLAGGEGVSFOTDIKZOHDXDROJMEURJWZPOBUTMYMLVFQNQZIXCXKGRLNWWXNOFYRBLDPZABOHQQZQRC");

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
    msg.setTimeStamp(0.8528165975887123);
    msg.setSource(38495U);
    msg.setSourceEntity(226U);
    msg.setDestination(38723U);
    msg.setDestinationEntity(92U);
    msg.timeout = 61501U;
    msg.flags = 151U;
    msg.lat = 0.037200130612302984;
    msg.lon = 0.5782469165902336;
    msg.start_z = 0.8055877221884823;
    msg.start_z_units = 19U;
    msg.end_z = 0.8859724861605932;
    msg.end_z_units = 197U;
    msg.radius = 0.4032461463340713;
    msg.speed = 0.1626246180372357;
    msg.speed_units = 245U;
    msg.custom.assign("SCAKFRPCQZMGZHUH");

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
    msg.setTimeStamp(0.5323758513068277);
    msg.setSource(46790U);
    msg.setSourceEntity(179U);
    msg.setDestination(5343U);
    msg.setDestinationEntity(73U);
    msg.timeout = 30375U;
    msg.flags = 155U;
    msg.lat = 0.8212119863662445;
    msg.lon = 0.036964588370189566;
    msg.start_z = 0.42542049283735994;
    msg.start_z_units = 234U;
    msg.end_z = 0.6738484796338254;
    msg.end_z_units = 15U;
    msg.radius = 0.50463478914435;
    msg.speed = 0.16143550442510612;
    msg.speed_units = 75U;
    msg.custom.assign("MIAGNQGEYROQCURDXZWFSECXWVAFLBUPBFMUCGKBWSPIVAHFONOEBUBTKRQQRTLMUSMBTGGSKEXX");

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
    msg.setTimeStamp(0.646604496619559);
    msg.setSource(30252U);
    msg.setSourceEntity(70U);
    msg.setDestination(15650U);
    msg.setDestinationEntity(194U);
    msg.timeout = 14995U;
    msg.lat = 0.892469676732165;
    msg.lon = 0.7427926822975554;
    msg.z = 0.6917519353673445;
    msg.z_units = 205U;
    msg.speed = 0.47972132008053314;
    msg.speed_units = 93U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9554876616499132;
    tmp_msg_0.y = 0.17928873323816896;
    tmp_msg_0.z = 0.2219276030204369;
    tmp_msg_0.t = 0.416645690911683;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PIEOTJYTDBHRVYQJSOVAFFNSEQDIZSFJEHXOOCHLKELCNYZWKCYDTTYBSAGDZKTFTYSAENNZRLCD");

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
    msg.setTimeStamp(0.08330415433175875);
    msg.setSource(32107U);
    msg.setSourceEntity(140U);
    msg.setDestination(51373U);
    msg.setDestinationEntity(242U);
    msg.timeout = 51494U;
    msg.lat = 0.5893477046297245;
    msg.lon = 0.9522121768237277;
    msg.z = 0.813570814740105;
    msg.z_units = 217U;
    msg.speed = 0.8417707456244903;
    msg.speed_units = 199U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.13786624649030654;
    tmp_msg_0.y = 0.9993765941087036;
    tmp_msg_0.z = 0.36955752768504035;
    tmp_msg_0.t = 0.8406096264176401;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YXZDBJTNWORDSNIVWELKLTVGGFCHPFNJEKQQYQUDFMHDKKRVFUECYRTCLVMWFSEWTMFWWKWALHYBFLLXDALGHXIZPVTWBMMTGRQDKODHCASOEYACREEMGCQUBYMFBBKWUYQXXAJPTLRDNGAGFXJP");

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
    msg.setTimeStamp(0.6689884684256847);
    msg.setSource(61632U);
    msg.setSourceEntity(89U);
    msg.setDestination(53259U);
    msg.setDestinationEntity(168U);
    msg.timeout = 38369U;
    msg.lat = 0.8983009162854413;
    msg.lon = 0.8443718328928902;
    msg.z = 0.4101420380175278;
    msg.z_units = 225U;
    msg.speed = 0.027168437336522966;
    msg.speed_units = 60U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8649134374911356;
    tmp_msg_0.y = 0.5906782571303131;
    tmp_msg_0.z = 0.9015046812673854;
    tmp_msg_0.t = 0.6121323074165135;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AZVQYNUWAFRPHFADCBBIBSUFIICNOTOSUTGHPZHONGWHYEXGXEKQOOYLVMMTCQEXELQNDFQYVBFADIEOHUHZKQIKNALUEVHJDJFXWCLJGTGCTHMRCFKVKLJOJZSBTLDUVSJZPKMGVKPXSNAXQUZIRMRCBNJAEZWWNANYEPKEDGBYTWDTUQBMBRPKTFPSPFUNDBRKU");

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
    msg.setTimeStamp(0.9398177443738094);
    msg.setSource(41683U);
    msg.setSourceEntity(90U);
    msg.setDestination(59462U);
    msg.setDestinationEntity(97U);
    msg.x = 0.8980752674320357;
    msg.y = 0.9584474066087859;
    msg.z = 0.1239569416731594;
    msg.t = 0.7954280443236572;

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
    msg.setTimeStamp(0.5222960588553918);
    msg.setSource(46865U);
    msg.setSourceEntity(240U);
    msg.setDestination(25896U);
    msg.setDestinationEntity(164U);
    msg.x = 0.45640842152598515;
    msg.y = 0.35952069600999015;
    msg.z = 0.33347961301011864;
    msg.t = 0.939759371712699;

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
    msg.setTimeStamp(0.5834460782083667);
    msg.setSource(26836U);
    msg.setSourceEntity(207U);
    msg.setDestination(51088U);
    msg.setDestinationEntity(77U);
    msg.x = 0.9756233367131429;
    msg.y = 0.2532956049857109;
    msg.z = 0.5706084358204273;
    msg.t = 0.5064491198136926;

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
    msg.setTimeStamp(0.22828162400577168);
    msg.setSource(27593U);
    msg.setSourceEntity(1U);
    msg.setDestination(58218U);
    msg.setDestinationEntity(19U);
    msg.timeout = 56867U;
    msg.name.assign("LTXTVGGENALJZVSNUNW");
    msg.custom.assign("XOLUNFOZUIOECTBXYYEPRQFGVJJNETRMMSZDUUPL");

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
    msg.setTimeStamp(0.10897689529274157);
    msg.setSource(63038U);
    msg.setSourceEntity(123U);
    msg.setDestination(48854U);
    msg.setDestinationEntity(103U);
    msg.timeout = 7128U;
    msg.name.assign("DKYBYTJFOXSDBVGSTYUWOULCAWTPHXTJBZWNUQRIAQPFGFWYZJVNLMQKXLXHAUICZKYBGRBEPDKRXWHRDOCKLRVQDKGVXQDUKMBNDONRSDREMUZEJZHPPGCBIGMNFHTWSFUJCXJHTQBUMARDJHSPZNSSVOXCEKYWLAEUYLWGI");
    msg.custom.assign("OKSGRMIUZOHHXFICPQHUIHTFEPNQYPCZDBXFNSRMQNQXVFXFZZKBPYLTEMOBNHREHSIWYPCRPWKGLLKFUYHBCSWTGRTVIMAUECHIIQOBEBWABEBQVDTIVDLMINCTOAWUNNSUVEONAZSXZCPJSAEWZUXVGSUCUCYJCPWQLGAVFFOXMZERHTWIXLRELJUHMVYKKJJZMTGPJNRYAOJQDPOATG");

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
    msg.setTimeStamp(0.30820705037476115);
    msg.setSource(11888U);
    msg.setSourceEntity(176U);
    msg.setDestination(59258U);
    msg.setDestinationEntity(221U);
    msg.timeout = 15133U;
    msg.name.assign("WROVLJENYYLFGDQCCHZHIYZOZRWDVYFZEKPSVFEGLWXUZTESLYLQQPNEQNNKJFPKRCHMPAPQVANXHZPGDAEKUDADQHIFTUHAMUETOSSSJXJRBCMCBSTKGGFUSPQDDHHWIYJMIEWGXOKFVMVIARXIGRMKASOZRMTXINIRAUYFOTCPOJSDBGRMEFBKLQBBZWTMILGUVOVYZPNJLALCAOTBYXBUTPWQFHWCBUQYGJXHJZKWI");
    msg.custom.assign("HVJHUVNFKVOTQPZPGYETYUJXZFFLLVNCRFCQZSWOGUCPTKYBEWAIMTNYFEQWIIKRFNBNSCDCHZOGGHEDUJINELPRQDBZCKVZVNKYXNMJYLMJPJHOCIAMBHAEPQZQDQYPIGSOTLBASMAFRMVJXPZULGLW");

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
    msg.setTimeStamp(0.31750813899488406);
    msg.setSource(29109U);
    msg.setSourceEntity(230U);
    msg.setDestination(27032U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.539234002969498;
    msg.lon = 0.9512251667027123;
    msg.z = 0.5653650571076749;
    msg.z_units = 205U;
    msg.speed = 0.3677034888826576;
    msg.speed_units = 35U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5902095545523317;
    tmp_msg_0.y = 0.8958481301799576;
    tmp_msg_0.z = 0.9117124302562853;
    tmp_msg_0.t = 0.7871850056185554;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 33260U;
    tmp_msg_1.off_x = 0.2820861189433719;
    tmp_msg_1.off_y = 0.6314513053289742;
    tmp_msg_1.off_z = 0.8742138463102848;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.19626045092271027;
    msg.custom.assign("GINBBWTNAKWVPRTAASOMTIHZAKJIMXZRLYUQVDMJARSHYUAWPPDQEIYLCSFGSFPUJGNDGHXNQNKJWVWKZWEXZDJJ");

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
    msg.setTimeStamp(0.8921940763353391);
    msg.setSource(5240U);
    msg.setSourceEntity(32U);
    msg.setDestination(11304U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.33509492265187824;
    msg.lon = 0.20415569111705;
    msg.z = 0.7007011180676466;
    msg.z_units = 188U;
    msg.speed = 0.3171979505298419;
    msg.speed_units = 216U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3962934778426679;
    tmp_msg_0.y = 0.26107372808467455;
    tmp_msg_0.z = 0.5654385684367997;
    tmp_msg_0.t = 0.9969066510343438;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 24842U;
    tmp_msg_1.off_x = 0.6561049410713844;
    tmp_msg_1.off_y = 0.577581861313393;
    tmp_msg_1.off_z = 0.6754052664172208;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.35860230043413877;
    msg.custom.assign("HFKEGPENMJXLXABQKTHRFULSEHTATNAQNJNGVEKJHOMBZSGWVPCAZKNGUMDRSQBUTWVOYIDPINRVWZBELEXZOYMGVJBHMNWAOVKPVUGYVZHJJTWYQKFACMXCCCICHCRLDPIZOSBSXCXYGOYQKDWRGOIDOUWMBAAJZQPFZIDEXKEIPGLEXBDRDFWCURPOHMRLSVTYITJLRBNIKSYRFJZUOZFIUBMSNNELFULSTAQAYDMFLQPCHFDVJ");

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
    msg.setTimeStamp(0.9671337536265585);
    msg.setSource(42180U);
    msg.setSourceEntity(75U);
    msg.setDestination(9627U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.12892396209499835;
    msg.lon = 0.6472910376410913;
    msg.z = 0.5168590105034032;
    msg.z_units = 58U;
    msg.speed = 0.9840547540352903;
    msg.speed_units = 167U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.1882594305682197;
    tmp_msg_0.y = 0.2327694823415294;
    tmp_msg_0.z = 0.3637070131387604;
    tmp_msg_0.t = 0.24819213755316005;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 45722U;
    tmp_msg_1.off_x = 0.6590593613332174;
    tmp_msg_1.off_y = 0.5118957637317542;
    tmp_msg_1.off_z = 0.40362195092264463;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.22147370274932787;
    msg.custom.assign("GVTPOFUYWHPONCSFVCXWDXNITYUMHLEJTNPUECASBUJSVHEZXTXTXVIRRMIAMCDIXQBMJLMAWYEQMGADQQTKHPYISTSVTUQSCUZJZWFQDBGIXAXREEOSHMARNFPZPFUCSOJDQAGVZCZLUNZEBIFNOZVGHHYRVDYGNWLKKEYONTRFBUHRDPBTXWLQSZYJCRNKAOSQLIUNLWGIV");

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
    msg.setTimeStamp(0.11825982940785973);
    msg.setSource(47463U);
    msg.setSourceEntity(13U);
    msg.setDestination(13186U);
    msg.setDestinationEntity(72U);
    msg.vid = 33780U;
    msg.off_x = 0.7308556639555606;
    msg.off_y = 0.3002195677317835;
    msg.off_z = 0.6090854521678238;

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
    msg.setTimeStamp(0.6106070325522006);
    msg.setSource(15633U);
    msg.setSourceEntity(203U);
    msg.setDestination(56947U);
    msg.setDestinationEntity(12U);
    msg.vid = 21046U;
    msg.off_x = 0.8315420663465679;
    msg.off_y = 0.1728779615204743;
    msg.off_z = 0.4750724676550482;

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
    msg.setTimeStamp(0.5510958861273311);
    msg.setSource(15717U);
    msg.setSourceEntity(88U);
    msg.setDestination(33541U);
    msg.setDestinationEntity(1U);
    msg.vid = 31149U;
    msg.off_x = 0.7257327483404705;
    msg.off_y = 0.6479853331488384;
    msg.off_z = 0.015269884217134932;

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
    msg.setTimeStamp(0.7565751775387279);
    msg.setSource(618U);
    msg.setSourceEntity(117U);
    msg.setDestination(39849U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.39746060598119515);
    msg.setSource(39086U);
    msg.setSourceEntity(171U);
    msg.setDestination(23461U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.06200874804363832);
    msg.setSource(48275U);
    msg.setSourceEntity(56U);
    msg.setDestination(5477U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.30189739823033657);
    msg.setSource(7915U);
    msg.setSourceEntity(142U);
    msg.setDestination(4717U);
    msg.setDestinationEntity(92U);
    msg.mid = 23462U;

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
    msg.setTimeStamp(0.2580855563224732);
    msg.setSource(52967U);
    msg.setSourceEntity(155U);
    msg.setDestination(8511U);
    msg.setDestinationEntity(68U);
    msg.mid = 60966U;

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
    msg.setTimeStamp(0.7471654133048644);
    msg.setSource(59483U);
    msg.setSourceEntity(100U);
    msg.setDestination(47485U);
    msg.setDestinationEntity(112U);
    msg.mid = 62022U;

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
    msg.setTimeStamp(0.5720640931715358);
    msg.setSource(32229U);
    msg.setSourceEntity(209U);
    msg.setDestination(32897U);
    msg.setDestinationEntity(105U);
    msg.state = 74U;
    msg.eta = 57805U;
    msg.info.assign("HZTQQRAWGGAHJKUHRDMMUCCVFOHNIESREDDABGDUDEWWIEBFFTWQFOMEPFICPXXYVVGVTMLBOCKKXQSGTWCHFWKALZGVXFQBFQDSBBJEKLHWKBAIPJNNQNVNGXVZM");

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
    msg.setTimeStamp(0.7180265521569974);
    msg.setSource(46744U);
    msg.setSourceEntity(52U);
    msg.setDestination(62965U);
    msg.setDestinationEntity(64U);
    msg.state = 137U;
    msg.eta = 36892U;
    msg.info.assign("SZFBYKVHFTKWMQLRBEHAYWQDYSAIFHIFRZHJPPJLLOBFZIXWXJKCRTNZYOLFSYWUVZQXILBOSEKDJCYCTEDICIRCZZHDKIAMPOSCMLDILNUARPEMJHNANEDUUHNENEWBORSVNGVSJMQMNVRKRXMSITHKGGMUFQVCUCVQGXPBCUDTPAXLUYQJZJPWYANYMDZKTGRKOVVFODEBYID");

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
    msg.setTimeStamp(0.6406490596929668);
    msg.setSource(15686U);
    msg.setSourceEntity(78U);
    msg.setDestination(10541U);
    msg.setDestinationEntity(50U);
    msg.state = 26U;
    msg.eta = 3051U;
    msg.info.assign("FHRZNWRQBJPJZHLIOIOJVGONSFZNKEFXQBDWDXMRPRYEUKBATPJYZNLRKQYZKGJQWZEQQZMYPLI");

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
    msg.setTimeStamp(0.026791085729351294);
    msg.setSource(34121U);
    msg.setSourceEntity(195U);
    msg.setDestination(5117U);
    msg.setDestinationEntity(167U);
    msg.system = 5806U;
    msg.duration = 7402U;
    msg.speed = 0.6479182853270116;
    msg.speed_units = 163U;
    msg.x = 0.17347411896308151;
    msg.y = 0.04161246629072779;
    msg.z = 0.009834270535021061;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.4225558834849238);
    msg.setSource(41089U);
    msg.setSourceEntity(189U);
    msg.setDestination(20705U);
    msg.setDestinationEntity(117U);
    msg.system = 7198U;
    msg.duration = 38911U;
    msg.speed = 0.6192717739779199;
    msg.speed_units = 22U;
    msg.x = 0.8223194563266745;
    msg.y = 0.1911998000640176;
    msg.z = 0.7417061717421352;
    msg.z_units = 198U;

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
    msg.setTimeStamp(0.9286186808466712);
    msg.setSource(4844U);
    msg.setSourceEntity(160U);
    msg.setDestination(19632U);
    msg.setDestinationEntity(137U);
    msg.system = 5806U;
    msg.duration = 10657U;
    msg.speed = 0.9162013700248507;
    msg.speed_units = 61U;
    msg.x = 0.857588611491164;
    msg.y = 0.03422720463158857;
    msg.z = 0.33342202415699107;
    msg.z_units = 69U;

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
    msg.setTimeStamp(0.19831438117128464);
    msg.setSource(56248U);
    msg.setSourceEntity(72U);
    msg.setDestination(57108U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.9352853364637653;
    msg.lon = 0.37602181024253956;
    msg.speed = 0.14020740048395253;
    msg.speed_units = 4U;
    msg.duration = 31511U;
    msg.sys_a = 10804U;
    msg.sys_b = 19871U;
    msg.move_threshold = 0.29033503334368427;

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
    msg.setTimeStamp(0.1576765254232294);
    msg.setSource(7447U);
    msg.setSourceEntity(122U);
    msg.setDestination(6543U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.8152063524383468;
    msg.lon = 0.9518914256973743;
    msg.speed = 0.10375072407610342;
    msg.speed_units = 129U;
    msg.duration = 59799U;
    msg.sys_a = 57445U;
    msg.sys_b = 53553U;
    msg.move_threshold = 0.2884536947894889;

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
    msg.setTimeStamp(0.10153558967799958);
    msg.setSource(49651U);
    msg.setSourceEntity(236U);
    msg.setDestination(37343U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.3710714606109139;
    msg.lon = 0.8679595750111678;
    msg.speed = 0.9627438789810255;
    msg.speed_units = 114U;
    msg.duration = 5229U;
    msg.sys_a = 62585U;
    msg.sys_b = 28810U;
    msg.move_threshold = 0.4907541971888496;

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
    msg.setTimeStamp(0.8219169338380192);
    msg.setSource(31811U);
    msg.setSourceEntity(146U);
    msg.setDestination(65228U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.5946302700054433;
    msg.lon = 0.14048650842977428;
    msg.z = 0.43391545438225976;
    msg.z_units = 231U;
    msg.speed = 0.2297128803855487;
    msg.speed_units = 142U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5315549428820645;
    tmp_msg_0.lon = 0.10062738879502298;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KOHUKRUMCHLXAPCFCNDELQKIXORNFKZCZWSGQLTWSDESSVKA");

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
    msg.setTimeStamp(0.9467626655683631);
    msg.setSource(41093U);
    msg.setSourceEntity(158U);
    msg.setDestination(39399U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.8335270225339547;
    msg.lon = 0.08429619975903735;
    msg.z = 0.5607792521906911;
    msg.z_units = 110U;
    msg.speed = 0.11031028781273944;
    msg.speed_units = 115U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2288274027474011;
    tmp_msg_0.lon = 0.5261004331771375;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PPGJOWFOXSOAGHVWWWUHRQFNPZBJACKWLHGMDMARUAACAIBJSFEOFZMKMDRGZTLEFKUYTMNYXIZPKXRXSIMZHLBQNTLAREUEMLMRCBUYDUNWJOTVFJVDDMLIAZWIJSSCQPPITZXRVCQBEIIXDQPFKKLOKYBVFKQXUQTJFWNOBPCYHVJPHUGTTYGCGEUNDLBINCMVYYJSVJXHAHQEVVSXDFEWNZNDOSWCTSLHZYQIOEBKPGXZTDENGL");

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
    msg.setTimeStamp(0.8263220911000662);
    msg.setSource(52936U);
    msg.setSourceEntity(69U);
    msg.setDestination(3144U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.18075495320976398;
    msg.lon = 0.0003951758708228281;
    msg.z = 0.12787771226849098;
    msg.z_units = 195U;
    msg.speed = 0.17545332002554803;
    msg.speed_units = 204U;
    msg.custom.assign("INJSAFTJAYEYXZDZUAMDBJJVINROZCFOVVQSIGKJXYCKWGDLKHCBUXPSZCURUGMLWZJUXVRLZBQOGPWEANOEZPSXCMHCDQEQHWHPCAFCMYIKILKFCZRJWVARKQEXGLKSQOBBCYVMAPTTVNBXOGYBUIYXGHNTVDJEQZZQMNRUEWPALFYNUPFMSGHTDXVDTPDTBOIQASWHRBOVEG");

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
    msg.setTimeStamp(0.8343908526585799);
    msg.setSource(61225U);
    msg.setSourceEntity(200U);
    msg.setDestination(46571U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.9122013927324472;
    msg.lon = 0.5481681881009967;

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
    msg.setTimeStamp(0.7499737810814826);
    msg.setSource(2953U);
    msg.setSourceEntity(183U);
    msg.setDestination(10152U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.250862145632781;
    msg.lon = 0.2832670140142175;

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
    msg.setTimeStamp(0.3416660336581867);
    msg.setSource(44576U);
    msg.setSourceEntity(101U);
    msg.setDestination(4120U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.38075354423973495;
    msg.lon = 0.31145701804831916;

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
    msg.setTimeStamp(0.46972437961084523);
    msg.setSource(42906U);
    msg.setSourceEntity(146U);
    msg.setDestination(64501U);
    msg.setDestinationEntity(233U);
    msg.timeout = 721U;
    msg.lat = 0.9891506544333417;
    msg.lon = 0.44944012191424654;
    msg.z = 0.9444157283776868;
    msg.z_units = 195U;
    msg.pitch = 0.6126966203354737;
    msg.amplitude = 0.6218854908576863;
    msg.duration = 55613U;
    msg.speed = 0.32400702491893896;
    msg.speed_units = 60U;
    msg.radius = 0.6323678594233754;
    msg.direction = 107U;
    msg.custom.assign("HSZSXIHSVKVEMUETVPBAZJRIVAKTGQCLXNOPGJYSCOMDJVXTGJFPNDFSXPWSTNPAKRIAMZARTHSLGQKETTOKPIECLQGDYIOKKDUMYPSCFXYWWUOCNJKZTHDKPSOCHUEYELQWIOPDBNAJFDILHZHQRBQUZRBLFEAQGU");

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
    msg.setTimeStamp(0.7500579915086492);
    msg.setSource(30707U);
    msg.setSourceEntity(175U);
    msg.setDestination(56496U);
    msg.setDestinationEntity(242U);
    msg.timeout = 10397U;
    msg.lat = 0.27589821708629547;
    msg.lon = 0.5734619641781993;
    msg.z = 0.3270936049399502;
    msg.z_units = 168U;
    msg.pitch = 0.01572706499188392;
    msg.amplitude = 0.7653031176090814;
    msg.duration = 41087U;
    msg.speed = 0.690051879288571;
    msg.speed_units = 210U;
    msg.radius = 0.7682338942009591;
    msg.direction = 161U;
    msg.custom.assign("TASFCTWPUIBQDOORHNWVRIEJZGWCKMGYWDUJLNXEWBXPOWAFWXPEJRHJDRDXGUYMHURIQMZRGNPZYCDQDALVLQBVDMHZSEQPKYUMEOTMMPENYYJWWAVECAVNLBLBKADFHFKVZSEMBJYXQVZPXEBYPSJMXGNJSITFTRZBULCFIKKYZRITTSEFBHLHCPOXNVQTOXDHIKARNSUQGIICSGNMKYFGCTJOLVCGOUBPWXZFITNAOUQVHKSOZDQJACSKFA");

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
    msg.setTimeStamp(0.013963061750440375);
    msg.setSource(3502U);
    msg.setSourceEntity(167U);
    msg.setDestination(53020U);
    msg.setDestinationEntity(144U);
    msg.timeout = 26581U;
    msg.lat = 0.26598779986238985;
    msg.lon = 0.9286110058002378;
    msg.z = 0.03911942216811559;
    msg.z_units = 63U;
    msg.pitch = 0.6942163958456624;
    msg.amplitude = 0.07359166307006504;
    msg.duration = 64615U;
    msg.speed = 0.11756151400053128;
    msg.speed_units = 2U;
    msg.radius = 0.8517432000924554;
    msg.direction = 163U;
    msg.custom.assign("JPDPWHDONFVKENQSSEKQDENETLKRWERDRHXIXPKGUGUJHPCNFRYLXMCJNTVBUXYFOZRAUMWETVIQZVUWSMNQKZHSFYYYTDFZNCZHBTZCKSPTCUMQMMTIHQFHPOLXCWBXPIOAFMAMWNKGGEJICAGLFOSLSKVVDRAOKOOJ");

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
    msg.setTimeStamp(0.5207358896874592);
    msg.setSource(15906U);
    msg.setSourceEntity(129U);
    msg.setDestination(24411U);
    msg.setDestinationEntity(11U);
    msg.formation_name.assign("QKVWTAHBFMGWJSSUNTOMYBTGPQPFKUHDIODJWXWUREFJTRLLNSBLRIZJHUIZLJUNBANLOMRXFJVQRVGKDQVKZXJEWZBEYGTCSBTQHYRZLGFYOATFGEGHVYAGQNCPFOJHMDRWGXHHIJHNZVZPLCOUKESIUECQICFDGMPFQJXYYACYIRTYALAFOSKKPVCBSVKNEMRBZHZEOXBWP");
    msg.reference_frame = 240U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25330U;
    tmp_msg_0.off_x = 0.9365735589621335;
    tmp_msg_0.off_y = 0.8724736854386353;
    tmp_msg_0.off_z = 0.8101346462905588;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XBJJOQYJSIYFOCERVMMOGQYEWVFVSGZPJGJRCNOBBMCEKHWDSLMHNNFOITXQKTRQKWSHDHIOJDAYNJWALOMDWBLQAQUKWVBEBNBFCHXVFYDLYUCEKKKAHWLDXRGPTCPNZTCVVVEFRJPFTZHTGUOPULQPQHKYVCSMFYFJAIIXTMLZO");

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
    msg.setTimeStamp(0.9487963876678077);
    msg.setSource(24370U);
    msg.setSourceEntity(148U);
    msg.setDestination(26102U);
    msg.setDestinationEntity(38U);
    msg.formation_name.assign("HTPGQYSCEKORMMOHFEYJRLWEVRAKSIKVNHVDNXJORDKBYFCIXVWODHBTAJILKHQYASZPEAMTDNPBH");
    msg.reference_frame = 129U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6123U;
    tmp_msg_0.off_x = 0.12262985514612723;
    tmp_msg_0.off_y = 0.8192301875865124;
    tmp_msg_0.off_z = 0.7552117515752433;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("GLAHULMLWDPJHCZLOYMALPMBLMKJYQXEIZXPRJEGASFJEFXUWWQQWOKXOJNVFNIKHDPTSHGHHNMHEYOFROPIPBUXYGURZDLSXFUQZTNQLCRFATXEAIHPNIRYWEVJCAGNVOUAWMKWVIBUYCTBTGYUZGXBDZVWGWACBFRJBXECBQKSKSKJFCUVVJVBCGIQDJRQNQPKMTZSLDT");

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
    msg.setTimeStamp(0.6899566749932097);
    msg.setSource(20508U);
    msg.setSourceEntity(51U);
    msg.setDestination(31948U);
    msg.setDestinationEntity(49U);
    msg.formation_name.assign("HBFOZNXOMUKRFGNUESCLTWBQMGVCVDPQFKYEPYAWGTLHXGKZVPUNCYNZFCMKBBATLQDAPQBISWJOXKKRQSXSQKSOIQXRMDWPGRZENFJZAZXLIGRCJZWUBWSERTURHYKHFYTMMET");
    msg.reference_frame = 228U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50193U;
    tmp_msg_0.off_x = 0.501189261391107;
    tmp_msg_0.off_y = 0.25983439302027456;
    tmp_msg_0.off_z = 0.44764561339497166;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ELCOZENBFWSHCKDKPZTLDOXJRKFCSSMSXIYBUTHTIIJQYNUWDTENFRGSDZWB");

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
    msg.setTimeStamp(0.48773138877944844);
    msg.setSource(42139U);
    msg.setSourceEntity(20U);
    msg.setDestination(26U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("OXMENOWVTMAARDUTIWHXLANVLPCCSRLMIDFUZYJYBGOJYSANFHZGVKIYPMWVWBLJJBWJDGWRYDI");
    msg.formation_name.assign("THEHUHOVNOG");
    msg.plan_id.assign("KYDREQCWJTYVRCKNTAIRZWHYAJQUBNWSUBQHPOXMMVSINAWZXBGLSYSCZQNUSGPESGDVRSCQRWFBTUENVVLZOCODXCAKAJMUMEHQJPIBKLKRDGZLOMYNOAKOOUTIPLHWZKEHYRBAOZZZWMLEICUIKLBGDASDT");
    msg.description.assign("GYUEMPAHJOMXFYXDBKXXUHOBVTZTVTNBILINAA");
    msg.leader_speed = 0.5921149502232836;
    msg.leader_bank_lim = 0.05821301484059449;
    msg.pos_sim_err_lim = 0.8832269108431714;
    msg.pos_sim_err_wrn = 0.14504562731427106;
    msg.pos_sim_err_timeout = 53586U;
    msg.converg_max = 0.9795836348532037;
    msg.converg_timeout = 63962U;
    msg.comms_timeout = 23870U;
    msg.turb_lim = 0.6833264139420939;
    msg.custom.assign("ZKAUKZSRYSAGCAYOELOCQFWPAZANRZHEOEEGZFLKVHMGQIUQNKTKBUSOJDHXIFOZTPBIQCDNPPYONGMXYKFYOPVIZZGTXETRKYIUSUEPGKJNVUSMLIJRCCDBOTVUHSQOQHACBMQQSFWRPKBCXMQYVECVFDGCIFTJWWMUJENDWIUMFTNFLDHALJBRFHZAHDYMWTGSBNXPBRRVLVLEWVDLQLRMSTYJPWBTUSGZANWXJJLOJEMA");

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
    msg.setTimeStamp(0.8695138208329476);
    msg.setSource(22347U);
    msg.setSourceEntity(40U);
    msg.setDestination(53736U);
    msg.setDestinationEntity(134U);
    msg.group_name.assign("OXZWSEPYBLZKVXIGATLONVNMKKGIUNBRGVRDQJPCHEFK");
    msg.formation_name.assign("ZCYTUZJKLPFEHNGBFNPYHZXATBHUDBAPBINLEAUQGFEYJPSLEDVHIDOGLQLVYJBIXKAX");
    msg.plan_id.assign("IQQLGHKUWLHLATKVNZNJUTTFPZGOBZQDJQRWSPPJPZVGLMOVNTLSVPPCXDMJCAHMWXQJPDQXVXOWUHYDEHFBIH");
    msg.description.assign("VXIOFMTWRGBBGEYQWJUPMNOGODMLORJYFGSAUNCLHKCJKIDXNUDCWLFYOBFEMQIHVMLPEEYKHCFGQIDLTRDKOJXCQOBLGNECUKXLRRDPYQKZFITJBKJPAEXUJZPSRSPZNYNHLMSMHHVWWLTZZXUVJKANQSLRDXYTVOBAGGCAWAVVSBSKEYMJVDRPFTBW");
    msg.leader_speed = 0.8529476774217217;
    msg.leader_bank_lim = 0.2848504471225014;
    msg.pos_sim_err_lim = 0.7786573386066883;
    msg.pos_sim_err_wrn = 0.13030897829672028;
    msg.pos_sim_err_timeout = 60726U;
    msg.converg_max = 0.5410220163475499;
    msg.converg_timeout = 57433U;
    msg.comms_timeout = 1946U;
    msg.turb_lim = 0.4940878130841019;
    msg.custom.assign("IRNETVGXSWSUWADMURXYYWYOHCDSRCQGKGNOWJQJEGLYKMJVOEYENCARKIYTQXBQNEJIEESGELQMMTXCBGKABPRBYIZJFKTODOQHWZASZNQVSLBPDJIUTXCZUGFCFTFPLIEHZIZCQENHOAZBMWURPNJRPSMURVMHCOYGILCOVLDQBPKJKVWQFDWFBMFAF");

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
    msg.setTimeStamp(0.06452115450769602);
    msg.setSource(45431U);
    msg.setSourceEntity(149U);
    msg.setDestination(20065U);
    msg.setDestinationEntity(179U);
    msg.group_name.assign("DOBBYBANICJBPTUOPCJNJWDMYOURWCRAAAMHSQSMQENEYYTHXLOSTHWKSCIMDC");
    msg.formation_name.assign("TXTTRAEGMETZUZLKDKXNMVZJPZAKWGOVYAUHGCGTYJIDSHPEPIXTOWVVVWMAUMHLGTYZWHNDACJVOINDEQDSGRLULSTKCJAJRPQUKQBXLUCQNSFMKZJIDQAPTOQQLUNJVPYUOERGQVJOLCRNUBDQCXFVMXSBXIWJIMFYEUWHSWOYTCISFBVLFHIXDBSRZWFOLWXKXPBRPAHOMKYIONBAHFHDSKGJGCERNAIFBBZGYD");
    msg.plan_id.assign("CFQITPEUGRRFIVMVBZCDSOLTQDJQCWEGHSYYLEVGPTBHMXNKFRAKNIRNNQS");
    msg.description.assign("LKCBCVEVMVGXMKHBOARWMZHXJDNNRUFORUOZWEKVHNORTOEHGGRUEAJDMAQWXIQBPIHVZYWTMMNWRKUDWCFYDGHGNBTZPXYODWDMIHUSQNSZOJPGQSULSMPZXCXSXPGTEICHBOVFKIJUFLQDJPCYLFMPYQIJXCAWZKFIESIRCYLTVZPAPNSIZATFYYEEKWLCDTSLXTQSFUKBFVHATMNZVNYANQBCIHDYRRKXQBDJJRFOULEVGOUAEBWPK");
    msg.leader_speed = 0.09613938850044623;
    msg.leader_bank_lim = 0.5668828632520202;
    msg.pos_sim_err_lim = 0.10846352795445369;
    msg.pos_sim_err_wrn = 0.17236802740051305;
    msg.pos_sim_err_timeout = 25016U;
    msg.converg_max = 0.12825916969945172;
    msg.converg_timeout = 43726U;
    msg.comms_timeout = 16248U;
    msg.turb_lim = 0.37435543043189634;
    msg.custom.assign("EUUGYJDCRINZYAFZRPCZVXZJFQPWAKUZDNCUTOZRIQPAFIXRSVXB");

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
    msg.setTimeStamp(0.3466454346753446);
    msg.setSource(64439U);
    msg.setSourceEntity(166U);
    msg.setDestination(32745U);
    msg.setDestinationEntity(120U);
    msg.control_src = 40796U;
    msg.control_ent = 208U;
    msg.timeout = 0.9079274146334788;
    msg.loiter_radius = 0.309406022821764;
    msg.altitude_interval = 0.8525537687087753;

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
    msg.setTimeStamp(0.4300913523532397);
    msg.setSource(31407U);
    msg.setSourceEntity(75U);
    msg.setDestination(52187U);
    msg.setDestinationEntity(115U);
    msg.control_src = 24799U;
    msg.control_ent = 20U;
    msg.timeout = 0.20141677735203756;
    msg.loiter_radius = 0.5726163318936207;
    msg.altitude_interval = 0.4416935734598104;

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
    msg.setTimeStamp(0.595806146324421);
    msg.setSource(5465U);
    msg.setSourceEntity(16U);
    msg.setDestination(53818U);
    msg.setDestinationEntity(190U);
    msg.control_src = 25566U;
    msg.control_ent = 239U;
    msg.timeout = 0.16001288943087744;
    msg.loiter_radius = 0.9399265737380097;
    msg.altitude_interval = 0.4037352789943941;

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
    msg.setTimeStamp(0.1989805536449354);
    msg.setSource(17760U);
    msg.setSourceEntity(213U);
    msg.setDestination(44476U);
    msg.setDestinationEntity(101U);
    msg.flags = 110U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.346562852861234;
    tmp_msg_0.speed_units = 165U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.016596215300646477;
    tmp_msg_1.z_units = 52U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8008214090564495;
    msg.lon = 0.22431676285120272;
    msg.radius = 0.2869052684643474;

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
    msg.setTimeStamp(0.04496979271802426);
    msg.setSource(2752U);
    msg.setSourceEntity(202U);
    msg.setDestination(20756U);
    msg.setDestinationEntity(125U);
    msg.flags = 70U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9349081435936849;
    tmp_msg_0.speed_units = 29U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4960699723772324;
    tmp_msg_1.z_units = 54U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5092299308212658;
    msg.lon = 0.6775309360375986;
    msg.radius = 0.020982527351625202;

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
    msg.setTimeStamp(0.020678611794828328);
    msg.setSource(14673U);
    msg.setSourceEntity(34U);
    msg.setDestination(53982U);
    msg.setDestinationEntity(194U);
    msg.flags = 48U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.635979667171951;
    tmp_msg_0.speed_units = 39U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7108793160643075;
    tmp_msg_1.z_units = 27U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.23274586510225803;
    msg.lon = 0.41565629367059986;
    msg.radius = 0.9766898300932033;

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
    msg.setTimeStamp(0.929771942269372);
    msg.setSource(32653U);
    msg.setSourceEntity(111U);
    msg.setDestination(23513U);
    msg.setDestinationEntity(188U);
    msg.control_src = 17194U;
    msg.control_ent = 200U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 229U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4797162753541149;
    tmp_tmp_msg_0_0.speed_units = 119U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2505604229497963;
    tmp_tmp_msg_0_1.z_units = 250U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.07789155028929451;
    tmp_msg_0.lon = 0.8728892353022933;
    tmp_msg_0.radius = 0.2061334936505702;
    msg.reference.set(tmp_msg_0);
    msg.state = 244U;
    msg.proximity = 24U;

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
    msg.setTimeStamp(0.5524810824201529);
    msg.setSource(21666U);
    msg.setSourceEntity(40U);
    msg.setDestination(42526U);
    msg.setDestinationEntity(217U);
    msg.control_src = 54731U;
    msg.control_ent = 127U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 249U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7216362889821212;
    tmp_tmp_msg_0_0.speed_units = 107U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6140135444207807;
    tmp_tmp_msg_0_1.z_units = 28U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5296821352824957;
    tmp_msg_0.lon = 0.7377789075110384;
    tmp_msg_0.radius = 0.3935408263436655;
    msg.reference.set(tmp_msg_0);
    msg.state = 155U;
    msg.proximity = 111U;

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
    msg.setTimeStamp(0.5965873492054343);
    msg.setSource(21737U);
    msg.setSourceEntity(76U);
    msg.setDestination(3859U);
    msg.setDestinationEntity(143U);
    msg.control_src = 22596U;
    msg.control_ent = 147U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 1U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.09238388874133108;
    tmp_tmp_msg_0_0.speed_units = 216U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0723591754991626;
    tmp_tmp_msg_0_1.z_units = 79U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9744021656818087;
    tmp_msg_0.lon = 0.6484191163688099;
    tmp_msg_0.radius = 0.0651102029500158;
    msg.reference.set(tmp_msg_0);
    msg.state = 169U;
    msg.proximity = 131U;

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
    msg.setTimeStamp(0.8634906202990295);
    msg.setSource(23429U);
    msg.setSourceEntity(79U);
    msg.setDestination(39349U);
    msg.setDestinationEntity(6U);
    msg.ax_cmd = 0.9121373506765094;
    msg.ay_cmd = 0.8368615093057601;
    msg.az_cmd = 0.33195526395702457;
    msg.ax_des = 0.6165454377167046;
    msg.ay_des = 0.5319547970375887;
    msg.az_des = 0.896956565782233;
    msg.virt_err_x = 0.4228410785010337;
    msg.virt_err_y = 0.6303104244076412;
    msg.virt_err_z = 0.5557042151468085;
    msg.surf_fdbk_x = 0.2692679196154135;
    msg.surf_fdbk_y = 0.9415244903832654;
    msg.surf_fdbk_z = 0.143585223675735;
    msg.surf_unkn_x = 0.012755884511139182;
    msg.surf_unkn_y = 0.7925016676131662;
    msg.surf_unkn_z = 0.4434353264813944;
    msg.ss_x = 0.35930493727409796;
    msg.ss_y = 0.05996555221782718;
    msg.ss_z = 0.24636572602440643;

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
    msg.setTimeStamp(0.46497203004338306);
    msg.setSource(50396U);
    msg.setSourceEntity(247U);
    msg.setDestination(3701U);
    msg.setDestinationEntity(177U);
    msg.ax_cmd = 0.846683237502431;
    msg.ay_cmd = 0.5741922775842517;
    msg.az_cmd = 0.03549943042511283;
    msg.ax_des = 0.29638030363271306;
    msg.ay_des = 0.3769498902752739;
    msg.az_des = 0.08100734342034255;
    msg.virt_err_x = 0.8308310747975298;
    msg.virt_err_y = 0.09716173531078809;
    msg.virt_err_z = 0.1897524294387537;
    msg.surf_fdbk_x = 0.37851449510586066;
    msg.surf_fdbk_y = 0.8301261288006615;
    msg.surf_fdbk_z = 0.06116192691506006;
    msg.surf_unkn_x = 0.3888666944322311;
    msg.surf_unkn_y = 0.0848344177472865;
    msg.surf_unkn_z = 0.6542670406726547;
    msg.ss_x = 0.08357382262220059;
    msg.ss_y = 0.5176567968425848;
    msg.ss_z = 0.313402347963999;

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
    msg.setTimeStamp(0.6586535832658893);
    msg.setSource(40948U);
    msg.setSourceEntity(119U);
    msg.setDestination(37210U);
    msg.setDestinationEntity(12U);
    msg.ax_cmd = 0.827757325438442;
    msg.ay_cmd = 0.334250014044443;
    msg.az_cmd = 0.6670841209029899;
    msg.ax_des = 0.4517503547687477;
    msg.ay_des = 0.9874116725324291;
    msg.az_des = 0.792024831419244;
    msg.virt_err_x = 0.5460167918690253;
    msg.virt_err_y = 0.4701042115698929;
    msg.virt_err_z = 0.7775019311948782;
    msg.surf_fdbk_x = 0.6876507496170048;
    msg.surf_fdbk_y = 0.2442862038165765;
    msg.surf_fdbk_z = 0.7169554609427228;
    msg.surf_unkn_x = 0.1574335282792575;
    msg.surf_unkn_y = 0.8164357008432671;
    msg.surf_unkn_z = 0.09317289428944564;
    msg.ss_x = 0.32403172409865255;
    msg.ss_y = 0.3517777913450727;
    msg.ss_z = 0.10862274160841234;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FYPMBGZUKAUDOPNSJCAPQTQTDSOFHPRBPMQIBDDHCQSDMEIKWJKXMUHBTBAKCVMWLTGWOSCHUZHRLGBOEMGNLCSXARKIOJNXLSVTUZGGYWSREVAZKDIYOEADRSROQLPEBWUABIUVJLJQLYPCHNFWRABDXWMXDWVNVYRQTYXGFJMJZIEKXJBTYXGJIQCISXLLWTZOCVNNNRVZCYU");
    tmp_msg_0.dist = 0.8376473943332141;
    tmp_msg_0.err = 0.2611657515113083;
    tmp_msg_0.ctrl_imp = 0.01790320554402347;
    tmp_msg_0.rel_dir_x = 0.13240974848267817;
    tmp_msg_0.rel_dir_y = 0.41398357280719034;
    tmp_msg_0.rel_dir_z = 0.24207361866728527;
    tmp_msg_0.err_x = 0.1154194546901951;
    tmp_msg_0.err_y = 0.18913287618340624;
    tmp_msg_0.err_z = 0.3976381045717331;
    tmp_msg_0.rf_err_x = 0.6737382287023134;
    tmp_msg_0.rf_err_y = 0.8132126731178049;
    tmp_msg_0.rf_err_z = 0.7052777678131132;
    tmp_msg_0.rf_err_vx = 0.4199192415968459;
    tmp_msg_0.rf_err_vy = 0.3693289207884839;
    tmp_msg_0.rf_err_vz = 0.7473778474925777;
    tmp_msg_0.ss_x = 0.08016522104826918;
    tmp_msg_0.ss_y = 0.13792263679076366;
    tmp_msg_0.ss_z = 0.8047292383280925;
    tmp_msg_0.virt_err_x = 0.07364976145036173;
    tmp_msg_0.virt_err_y = 0.7568038790869862;
    tmp_msg_0.virt_err_z = 0.4023255421963886;
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
    msg.setTimeStamp(0.1669673544558068);
    msg.setSource(31965U);
    msg.setSourceEntity(144U);
    msg.setDestination(9833U);
    msg.setDestinationEntity(90U);
    msg.s_id.assign("AVAMNBWMKVXVAOIFCWYURLCGEDULELQTZMHDUTDLXSZJNBIWGXHNTLFMQJXZOIKPLJBYBFCYKSFZGGJBWXRNUTAVWUESTXNAFBDKEHROEPTCNHYKHQIKISYQHJQEZBLUGRCVWHDMQKYVSW");
    msg.dist = 0.4391658683303611;
    msg.err = 0.7583238189766083;
    msg.ctrl_imp = 0.02807160292199473;
    msg.rel_dir_x = 0.9855852021503752;
    msg.rel_dir_y = 0.766331472060977;
    msg.rel_dir_z = 0.5211269078531777;
    msg.err_x = 0.74577617570807;
    msg.err_y = 0.33793431843887156;
    msg.err_z = 0.8108827557795681;
    msg.rf_err_x = 0.7076630260711416;
    msg.rf_err_y = 0.5650119030132629;
    msg.rf_err_z = 0.5182786893251241;
    msg.rf_err_vx = 0.5325676569886657;
    msg.rf_err_vy = 0.4859811988121656;
    msg.rf_err_vz = 0.1136046643010511;
    msg.ss_x = 0.028402779669030154;
    msg.ss_y = 0.06969934537141065;
    msg.ss_z = 0.5542132923179925;
    msg.virt_err_x = 0.8913489070823342;
    msg.virt_err_y = 0.1581875115870024;
    msg.virt_err_z = 0.7020951543378239;

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
    msg.setTimeStamp(0.1906859672711937);
    msg.setSource(15819U);
    msg.setSourceEntity(86U);
    msg.setDestination(41159U);
    msg.setDestinationEntity(23U);
    msg.s_id.assign("AQHSMDWLYTELZAEVEOA");
    msg.dist = 0.2269989922168828;
    msg.err = 0.5787635899363092;
    msg.ctrl_imp = 0.7133223889205527;
    msg.rel_dir_x = 0.47401027353863767;
    msg.rel_dir_y = 0.5224394022558846;
    msg.rel_dir_z = 0.518047645240953;
    msg.err_x = 0.7559381828029815;
    msg.err_y = 0.9079857329828369;
    msg.err_z = 0.7111876118560748;
    msg.rf_err_x = 0.10892913704068152;
    msg.rf_err_y = 0.6869148059375444;
    msg.rf_err_z = 0.9370091204349715;
    msg.rf_err_vx = 0.8820593957124265;
    msg.rf_err_vy = 0.4987602010220511;
    msg.rf_err_vz = 0.5038232244233735;
    msg.ss_x = 0.4465744550195153;
    msg.ss_y = 0.7990066174661465;
    msg.ss_z = 0.9946430847242784;
    msg.virt_err_x = 0.632768946666115;
    msg.virt_err_y = 0.23968633042480125;
    msg.virt_err_z = 0.3654507329647426;

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
    msg.setTimeStamp(0.4137201702604585);
    msg.setSource(35103U);
    msg.setSourceEntity(106U);
    msg.setDestination(33672U);
    msg.setDestinationEntity(42U);
    msg.s_id.assign("SJOWSELIDFALRUNGILJGGQWBERVSZVAJDUSLXFCJWMHQFDZKOUGHLABRPITT");
    msg.dist = 0.07771180110693632;
    msg.err = 0.18667814845259179;
    msg.ctrl_imp = 0.011557117480050949;
    msg.rel_dir_x = 0.32190283482303805;
    msg.rel_dir_y = 0.56003399492865;
    msg.rel_dir_z = 0.24481430486533828;
    msg.err_x = 0.28884872496471237;
    msg.err_y = 0.9026875823767849;
    msg.err_z = 0.8318823888390247;
    msg.rf_err_x = 0.807915655894671;
    msg.rf_err_y = 0.03922283842268237;
    msg.rf_err_z = 0.4992099600229233;
    msg.rf_err_vx = 0.8836568967218283;
    msg.rf_err_vy = 0.42343477638650506;
    msg.rf_err_vz = 0.6117116114913191;
    msg.ss_x = 0.7580549744123489;
    msg.ss_y = 0.331992614391703;
    msg.ss_z = 0.7414404589278059;
    msg.virt_err_x = 0.984931799836656;
    msg.virt_err_y = 0.22903924487453575;
    msg.virt_err_z = 0.4665353181173033;

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
    msg.setTimeStamp(0.431562683361984);
    msg.setSource(41161U);
    msg.setSourceEntity(151U);
    msg.setDestination(16987U);
    msg.setDestinationEntity(79U);
    msg.timeout = 13424U;
    msg.rpm = 0.8286115706794597;
    msg.direction = 112U;
    msg.custom.assign("XXVUYMEXPIZZAPPHNRIFIGWQIXQLPGUSNAZQKXVRDRRVLPAJRYXMCGQEUCSSWWRBLHJJOAWCEMPJKYHDUXYTGDZFGBTCWBZDNNOFLKUVBHYSCWIKMCLNOHQEKWRSUTMJYWABPDFEUVBLCORAEOTSIOKASWYKFNDTHVGSFIBBSMIDUCQZQYRBKODPQTMTMXGJAPZGENHFSAKLBFPHLLQIOJQVFETDVWFUONKCEETHRLHZAJYJX");

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
    msg.setTimeStamp(0.8807833850937763);
    msg.setSource(1104U);
    msg.setSourceEntity(141U);
    msg.setDestination(51307U);
    msg.setDestinationEntity(210U);
    msg.timeout = 61437U;
    msg.rpm = 0.11244641601607597;
    msg.direction = 252U;
    msg.custom.assign("TKCLQYWXFDRFDQBURUWNHINIHDPVGCKUFWAGMQWZVCXZDQLLQXGGHOWTMFJSQPIECHFCJOMXGCQRYTRCEEBWINUFSNYLLNILFLUVQSDNXISOGCJXHFNABYPOYZSSEZQAJMOEUWY");

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
    msg.setTimeStamp(0.3798973367596702);
    msg.setSource(3155U);
    msg.setSourceEntity(231U);
    msg.setDestination(20392U);
    msg.setDestinationEntity(162U);
    msg.timeout = 16403U;
    msg.rpm = 0.37852152667075867;
    msg.direction = 228U;
    msg.custom.assign("RDOERKAYUZOKGLKFQLBPKZQZBYRPYQVFZJXHLWHHVPHWMCFOCU");

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
    msg.setTimeStamp(0.5370798121793885);
    msg.setSource(32489U);
    msg.setSourceEntity(33U);
    msg.setDestination(17858U);
    msg.setDestinationEntity(249U);
    msg.formation_name.assign("FXTOSBWTJWYANITUKJQKDSSSPAZGCSKOLRZKJGFDDNELTWQOQDWOIHRLXBCWYOVNUYQUZFRVAITKUCHKBEAAVJJCPLMHVJXLIIRQBNHHFRMFPUSVSROPVVNFAYOJOZFWHGDWCGPTFDKZFZLUIBQGVUPE");
    msg.type = 94U;
    msg.op = 90U;
    msg.group_name.assign("PBLLUGCKLBQKDDNPWNXA");
    msg.plan_id.assign("LXWDUNCVHDUAGTNIVVRZZDBMQDBDBQTYCAAGTZUGJOS");
    msg.description.assign("GPMTENOURMLDWMVTOHENZSIRWLMCSCJFYMWREUNXADGNUVSLTJJMXRRHCDPLDRQKO");
    msg.reference_frame = 223U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42232U;
    tmp_msg_0.off_x = 0.06507230592870739;
    tmp_msg_0.off_y = 0.9081665540425882;
    tmp_msg_0.off_z = 0.48063583926072095;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7209077779110543;
    msg.leader_speed_min = 0.43977710143000137;
    msg.leader_speed_max = 0.6852094565622724;
    msg.leader_alt_min = 0.21821143457896663;
    msg.leader_alt_max = 0.1374217997808349;
    msg.pos_sim_err_lim = 0.2831354312844282;
    msg.pos_sim_err_wrn = 0.8888469797372226;
    msg.pos_sim_err_timeout = 46752U;
    msg.converg_max = 0.1596501512145303;
    msg.converg_timeout = 38601U;
    msg.comms_timeout = 21716U;
    msg.turb_lim = 0.17335075801487143;
    msg.custom.assign("KDYLLUDPFXXVRGIHOJPAYVKHMJWSUEXTBIXSTYIBZHRYEQQBWUNOUGQVLRJPFRSIAGFQAEXSXZSQBKIHWOAHLLBDNGGXPDNI");

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
    msg.setTimeStamp(0.6970044694350652);
    msg.setSource(23368U);
    msg.setSourceEntity(203U);
    msg.setDestination(23988U);
    msg.setDestinationEntity(184U);
    msg.formation_name.assign("BVHTFORZHXWLDSUMVQSKVYYTPJDAXWDYWWRNIKJWJDGMHWJSIYBJHBWEDLSWPIPQIBLDMNTKDVJXCCVUSLVBGNREOZLVNMLOGHUKKQOQIBGVZZXQMGXARMFAGPSCIGIIFQMORNRDSEOGIUDHPBBOANSYYAKLJZKUZAHFUNXCPAPQRYTZHITAHJCMCGFRNFEKPCVTNBLFFTUQTTVQEWHXCUCOQMROEXUZWXDEOPKZGMXSRABZLEYSCAFF");
    msg.type = 141U;
    msg.op = 222U;
    msg.group_name.assign("VPLACTQOMHUUHEBDXINQARXBEH");
    msg.plan_id.assign("CBEQBGEDAVLUHQQOXEWUBKRJTKLWEQTDPUIWMMCQKNBHCZKKSKQCPMASOVMLXDOGGWIZZGGIFKCUYPHERGKBXPUVJJNXJGAPYHXCNZTJNTWNQNNDMIUO");
    msg.description.assign("WKBFGJAJOQUQGABXNOIPSWSTMJAPBHEYXHDGNWXDPECOBBHTFHFOSKQYPMICLJRGIYWKKWMPCOVNUAHLSZFRVIAKNREUZJYAZTMDXXNFIBKBRFHLUNLQVQUHCVOELODWNSCGAFVEVNYSWTUG");
    msg.reference_frame = 75U;
    msg.leader_bank_lim = 0.161880738150591;
    msg.leader_speed_min = 0.2620084800759461;
    msg.leader_speed_max = 0.6027960399483558;
    msg.leader_alt_min = 0.8826226510648669;
    msg.leader_alt_max = 0.6897061849231576;
    msg.pos_sim_err_lim = 0.2694518940545241;
    msg.pos_sim_err_wrn = 0.022977497465806795;
    msg.pos_sim_err_timeout = 17780U;
    msg.converg_max = 0.6164008888981706;
    msg.converg_timeout = 45778U;
    msg.comms_timeout = 60960U;
    msg.turb_lim = 0.3420209821258908;
    msg.custom.assign("JVRGIRHBEIFYKZRPUYLLIUOBROIPBYFYQTXSTZGSJPCVFINCDEHUNSNXIKWFAHSYJMQLKMZNTMJUISSZFOJOTINFDPOCVWICCBVCAPRKUOFYQEO");

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
    msg.setTimeStamp(0.10400575908481613);
    msg.setSource(28369U);
    msg.setSourceEntity(218U);
    msg.setDestination(48027U);
    msg.setDestinationEntity(40U);
    msg.formation_name.assign("BWTWXMEOCUZJGTXHGGKDMBEPCPJHUTQIFCIJVRUBJLQWZKDZAXTMCFYLIJBQVTKVDNIRJOLNOTDLWFNSBIFCRBQOBEMUQMYSDXTRTAOYCOHXSNSNO");
    msg.type = 162U;
    msg.op = 114U;
    msg.group_name.assign("LWUHFWJFGAXNQCCZUQJRPVGGTUNXIUOP");
    msg.plan_id.assign("EIDDWUHJAVSEO");
    msg.description.assign("LULAZCARIUBMKVKECBXEMPIBQUHX");
    msg.reference_frame = 167U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50992U;
    tmp_msg_0.off_x = 0.26426050183115724;
    tmp_msg_0.off_y = 0.0891635940269897;
    tmp_msg_0.off_z = 0.6267434652136689;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7587902871615214;
    msg.leader_speed_min = 0.6220038033724496;
    msg.leader_speed_max = 0.2804084617424272;
    msg.leader_alt_min = 0.1476844075544259;
    msg.leader_alt_max = 0.3545052059810032;
    msg.pos_sim_err_lim = 0.7505178575577867;
    msg.pos_sim_err_wrn = 0.608699073082334;
    msg.pos_sim_err_timeout = 22688U;
    msg.converg_max = 0.48261094710049435;
    msg.converg_timeout = 15101U;
    msg.comms_timeout = 20227U;
    msg.turb_lim = 0.5434395245822078;
    msg.custom.assign("WVAYIKLYVHWEDPNONXNAUEMKATNODSZBMQSKYOSTPLXGGERCDEEWHDWGSVMSZUVSBHITCMKPTOXQPRFIQWNFUUMLNPOCQCSKVDIAKRNBQFQZZREUNFUMVHYIBKPPMHTXFZJIKSFOAVMFBXBU");

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
    msg.setTimeStamp(0.7266137999483933);
    msg.setSource(29299U);
    msg.setSourceEntity(38U);
    msg.setDestination(53015U);
    msg.setDestinationEntity(150U);
    msg.timeout = 8906U;
    msg.lat = 0.915344752181922;
    msg.lon = 0.6018154447628042;
    msg.z = 0.5236822992837525;
    msg.z_units = 63U;
    msg.speed = 0.5821739193843627;
    msg.speed_units = 97U;
    msg.custom.assign("KJQAFFNZPASIHNHYNZZQXZSWIJCLJTUGDENRLGDWXMVCWGOTDXPNJZZLHHASCBAJPQKAVMRNVTMAJNNBEKOZMIBRRTHHWIXIYJKMYIYFUYIBTODZSBVBAGLLBLVHGJPGIJFUBCUWKESAHXQREBASMTSVPRE");

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
    msg.setTimeStamp(0.010633001388820396);
    msg.setSource(50749U);
    msg.setSourceEntity(163U);
    msg.setDestination(49825U);
    msg.setDestinationEntity(157U);
    msg.timeout = 1069U;
    msg.lat = 0.8582686030708012;
    msg.lon = 0.5220240724303779;
    msg.z = 0.5963605603271256;
    msg.z_units = 81U;
    msg.speed = 0.46804938387480055;
    msg.speed_units = 209U;
    msg.custom.assign("YUMBKYIWPTGXQJIOTZSQMKSVSWATXCJFYPHTXZSVBCADEAQUPXGVLXWUYDNWZAVOSLAJARFWPPDLKVYBKPAQVCIZMBHTEHQLNBEDYGREFLSEUJCRHSRLEXRATRWBZHMEVFUAEWZFXMGJTNWILKGFDOGJDHNQBYZJCUZBYNSPFFN");

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
    msg.setTimeStamp(0.7223115202721009);
    msg.setSource(39553U);
    msg.setSourceEntity(23U);
    msg.setDestination(24880U);
    msg.setDestinationEntity(103U);
    msg.timeout = 47182U;
    msg.lat = 0.6888859129571819;
    msg.lon = 0.9467910179583253;
    msg.z = 0.8902059635994731;
    msg.z_units = 27U;
    msg.speed = 0.6678566790299455;
    msg.speed_units = 115U;
    msg.custom.assign("MXMBBAGRCDUDOSJBEZRPMAPFXEVPBNSFXJEGOVFCIUYXX");

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
    msg.setTimeStamp(0.7692268176658739);
    msg.setSource(55425U);
    msg.setSourceEntity(252U);
    msg.setDestination(53632U);
    msg.setDestinationEntity(64U);
    msg.op_mode = 84U;
    msg.error_count = 49U;
    msg.error_ents.assign("UCRIGBOLMAYOIIKXADDJZQMKYVPASEQIVNWUFRDLWKHOVTYDZGZYLMXICFNWTQNCKRMCGVJPWRFJFSYFTSTLXBZSQUUUFC");
    msg.maneuver_type = 45684U;
    msg.maneuver_stime = 0.9150016005474291;
    msg.maneuver_eta = 1045U;
    msg.control_loops = 27575391U;
    msg.flags = 180U;
    msg.last_error.assign("ZTUDIGDABPMYUQNPNVEHDLCZJRGDKEEYFDSHDAIBSMAQQLQEACMFJKKSWCHOMBPIRSVUTVKZVBAISUIGFUDBQXUEYTNTYJFPPYTZJKIHIYWJOPCNLZIRGBBWGGQJWWCZEPTKLLOHCSXOZAJTRRGKKMRYHGAGETWMMIUVUXLXMPLFZNEXCNHONHNDPOJBQLODV");
    msg.last_error_time = 0.5316635070658023;

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
    msg.setTimeStamp(0.9494127198939097);
    msg.setSource(4579U);
    msg.setSourceEntity(0U);
    msg.setDestination(36194U);
    msg.setDestinationEntity(53U);
    msg.op_mode = 32U;
    msg.error_count = 162U;
    msg.error_ents.assign("FTXTKJVIPVGZQXWKUMDMPDYKQYJBTUZPLLHZSUA");
    msg.maneuver_type = 13364U;
    msg.maneuver_stime = 0.5351099923774725;
    msg.maneuver_eta = 51092U;
    msg.control_loops = 630752756U;
    msg.flags = 157U;
    msg.last_error.assign("LREBFWBLJOVHQSZXBXAAGLZUJTVYMQUHVVIQQECSGPDEXZDFQXKUDTCPGEVWMINILCKINSGBFPMPFUEPXGWDBCHPECRSFHSZFUHVSKCTHBNEWMYFCEZYQMMOKRDSGDAKYADTAXLBEPEPJYLLTIRRHZXTWUPSQURNWMBYJMUZBGVULQRCWJOSTAUMYWLFONJNXIKFVYQJHCQTWVTOJPZFOIA");
    msg.last_error_time = 0.8771133288393287;

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
    msg.setTimeStamp(0.37167258043738316);
    msg.setSource(55625U);
    msg.setSourceEntity(54U);
    msg.setDestination(44859U);
    msg.setDestinationEntity(215U);
    msg.op_mode = 216U;
    msg.error_count = 63U;
    msg.error_ents.assign("UYCGNMOKFJOCCRJJUWSQDQTRLSJWBDPVSEBGFBPVDJLHSTQBNWRZWNXDCYDKEQAUFSXRGPTCZMTFEBTOFHDRRESYZGKTIFPINHMOBCTHUMDXYHAZRAEPVUWAZZYINLWVFNRAYJKVFLFCDBRSGKJQLIQXZMUENIZGIWVUYVBTQJZCQHGYJNOKOSACHDHUPYWARC");
    msg.maneuver_type = 36629U;
    msg.maneuver_stime = 0.25750427659565855;
    msg.maneuver_eta = 42026U;
    msg.control_loops = 1778367517U;
    msg.flags = 232U;
    msg.last_error.assign("RUBQUHAWBCFFBNDINIQNXAKHSGMVDBDTTRTIJHKPUGHEPNEYWNFVWCTNLBXJAEIGPZVNCYFXWEPGOCKSLJYRKYSBXIRDFQCFCAHKVBHWUAMZNXQVYRDIATXXZCIZDRFJKRAHOKZOOTSQZPW");
    msg.last_error_time = 0.016186683532991353;

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
    msg.setTimeStamp(0.8365843285356701);
    msg.setSource(21954U);
    msg.setSourceEntity(236U);
    msg.setDestination(25767U);
    msg.setDestinationEntity(80U);
    msg.type = 141U;
    msg.request_id = 16479U;
    msg.command = 167U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 5383U;
    tmp_msg_0.lat = 0.48633835246947954;
    tmp_msg_0.lon = 0.9671263811778549;
    tmp_msg_0.z = 0.39561914317267344;
    tmp_msg_0.z_units = 180U;
    tmp_msg_0.speed = 0.4299441704036717;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.custom.assign("LQVNUCVEEZDSXSZNWVHXEJGOYBTPBEPZLIBDJSXJAVSAAGRZGNDSOYEYTVYYXCHQDIGGFPAKCTURGBGYKWIKBOMC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17359U;
    msg.info.assign("IONWJCQGWOLLIQQXKQXUMAOLECRDOEJZCDKAZQNVZFZAYVDWYJQTKGPSBREWBPFOFXPXKTRGLVQHEMATFNDEHGSOAISEXHMRGYZTHBNLTYJGIMTZRHGARPTHKKEASVPGNLDVSGCCSDZMJYSDWXAXNTVBIKWFVCKYWNOQBDQKIJPWAUORLUPUVKHUSBUYJLLNUYXMIHWTZDFMITNOUREMJEAYURIBOBC");

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
    msg.setTimeStamp(0.8197397950619476);
    msg.setSource(30218U);
    msg.setSourceEntity(166U);
    msg.setDestination(44411U);
    msg.setDestinationEntity(47U);
    msg.type = 75U;
    msg.request_id = 63458U;
    msg.command = 34U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 33913U;
    tmp_msg_0.lat = 0.14029531729739853;
    tmp_msg_0.lon = 0.010789594243612033;
    tmp_msg_0.z = 0.47420172688914874;
    tmp_msg_0.z_units = 117U;
    tmp_msg_0.speed = 0.15850009257201914;
    tmp_msg_0.speed_units = 250U;
    tmp_msg_0.bearing = 0.8069219847089711;
    tmp_msg_0.cross_angle = 0.2666337721200125;
    tmp_msg_0.width = 0.8777675158761383;
    tmp_msg_0.length = 0.21662050088793627;
    tmp_msg_0.hstep = 0.4245594376574733;
    tmp_msg_0.coff = 14U;
    tmp_msg_0.alternation = 32U;
    tmp_msg_0.flags = 180U;
    tmp_msg_0.custom.assign("NBMZJPUYMJWEXILRFVFGBEZJYKWBRKZPUVAIMSWWGHCDGBTSFDKMQUIWXLSKIZBDESRIEQYOCLNNTUZPCUOPDGDMVXIPHQCPNTUHBYZTAYOGONQRKXNOJJJBDAYVTCUGXYHGA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 23882U;
    msg.info.assign("ANRXXPBYZEFWGFLBJWEWOSSDGQJDHWDIUYGLTGKGVOKQWBVYLIUYSRHQPFZAZOEGDCDIZNNIRSIHHASAIHYHSRDWXQUFRFLDMBPFQOEWCOPPYXJXDWOFMTCJAYVCMGDTXMVMYNSLRWLT");

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
    msg.setTimeStamp(0.8404214643359685);
    msg.setSource(30583U);
    msg.setSourceEntity(252U);
    msg.setDestination(62778U);
    msg.setDestinationEntity(72U);
    msg.type = 167U;
    msg.request_id = 50696U;
    msg.command = 4U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.360544388587023;
    tmp_msg_0.lon = 0.4859526667689169;
    tmp_msg_0.z = 0.8202388214169608;
    tmp_msg_0.z_units = 132U;
    tmp_msg_0.radius = 0.18392329246715278;
    tmp_msg_0.duration = 22007U;
    tmp_msg_0.speed = 0.9814535685877832;
    tmp_msg_0.speed_units = 216U;
    tmp_msg_0.custom.assign("QCZRQSAXABJCMRPYKVUUYPPHETDCEPOKMLRIWGTFNZWNVGBWGMCJINETREXEPNQUHIREVIUMOTWOZJSOIOOJKBBXKLVMPJOKNYETMSFXXTQWDRZYKSJPKUUMFJUFZTJQRPVYNGUFLIBCXJGKHYHVZAWNCIGTAVIILHUHOBDBVI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40043U;
    msg.info.assign("DTSKXLGRCNDWWYOOGPGPUGX");

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
    msg.setTimeStamp(0.7269134811206821);
    msg.setSource(10405U);
    msg.setSourceEntity(21U);
    msg.setDestination(30831U);
    msg.setDestinationEntity(39U);
    msg.command = 75U;
    msg.entities.assign("ZMGBXUDPUGTUPCXSSLJQJFIYAZPRGL");

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
    msg.setTimeStamp(0.6660484652972078);
    msg.setSource(51888U);
    msg.setSourceEntity(77U);
    msg.setDestination(260U);
    msg.setDestinationEntity(131U);
    msg.command = 217U;
    msg.entities.assign("PBRBKULEOZBFFNIRJZFQJBKPXN");

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
    msg.setTimeStamp(0.9584847028435359);
    msg.setSource(42054U);
    msg.setSourceEntity(83U);
    msg.setDestination(63894U);
    msg.setDestinationEntity(237U);
    msg.command = 211U;
    msg.entities.assign("WARSAKMMHKEKJZMLHTDJWVXOKLZROCPURLOKEVSCVEYODJCAYQEGUWKLJBEUXPD");

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
    msg.setTimeStamp(0.39823832849351426);
    msg.setSource(38876U);
    msg.setSourceEntity(242U);
    msg.setDestination(58090U);
    msg.setDestinationEntity(33U);
    msg.mcount = 133U;
    msg.mnames.assign("EGLWVNVPUDSYZHEBHZTROWWWXGSPXMOAGYGQQMKHOTSCRUWFIAZULNZNCVKKKQMUFIFQSCNRXDTEGXHJJANFXNLETGMBIFCFAPYPXCKJLLDQDBMWHVAH");
    msg.ecount = 228U;
    msg.enames.assign("YREZITKMTYKVKNCIZIRZIMEADJNPFMMZHGEFEGUAVRRCCLDODSOBCOOBDHTUMSGXPXVARQSFFNWWBDW");
    msg.ccount = 24U;
    msg.cnames.assign("OEGWMZJDKURGFBNCENZJLWWVBZMPNEZIADRFQUKYZNGSNKQOSTQLLPJEVTLJFQTWTDCCHULFRNXIGGJJJLHRPMFBHWMYCSPIXEHOJAMXTUKMKXWAYRHOYUNAKCTEEMEYVMDUHFFRHYSCBCDLVXDZKYSZFIGIRVAUQOQGOFDBJYZNSIHVTKLAOMPLWPUAHU");
    msg.last_error.assign("ZYGXEBZEWRBSREMBJYWEOPIIXWCXUDNAIRVBWEZDQEIBHJMMUPJGJXZGKAXSXYRSCDQROHXVHCGPVKTMYFHSZAKJANRUNHFDTCLNKTOTBDQJZKWQZHTUMYVARRDEGDOFUIAFMYENBWOFBNFKWQMSGTVCLWRTHUAITDGVLHSBCIDFPPVNVSJQFCUNQLYSPPZCRCOUOYJJKNSFUQVLQFIGZKLAYWWMPGXEKYTDOSLT");
    msg.last_error_time = 0.740760697097035;

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
    msg.setTimeStamp(0.9486769023970006);
    msg.setSource(23368U);
    msg.setSourceEntity(87U);
    msg.setDestination(1033U);
    msg.setDestinationEntity(6U);
    msg.mcount = 122U;
    msg.mnames.assign("MABGVUANCFUPKOTAVIEJWWZKSRNOSKQFZTPOVIMCSLNMXFPTSKCBIVWVEZJ");
    msg.ecount = 45U;
    msg.enames.assign("IOUIUICNQFSZWGLFXRFZERNNMJLLGZISXCLHQPVCYACXPXRAZQOYTVAIXSHKQMBOVGGJYURYMIOFASFDVDBCNDLLOUJQTHQIKEXYERHPBYJPCFMXKLYTXSAPDUDHQKTCEJWBKMERDXEMZUWOBLJOUWPEEAGEWKZNLRSYJYBGCDZHLIHVRZVGWGQTTJUHWSKARFYIPGWUSTBWNZUQCMNXTMOMNZIABP");
    msg.ccount = 241U;
    msg.cnames.assign("XVWLRJOXZMYFSUKEMZELQBQPAQMZNTZUJBEGZIMFARTLGCDIABOTGLMCNIUHQZLIVZMVKRLKYLUNHZZCCXIASRHLQKRKSPOBFDRDIAYRXWOKOHPRGARVWYGCBPDCQBHVIYPGIDMWQTDFYTEJHEPOPNNLNQWRXLUMKCWGGXOWXHECTEBAFKUBNQUTSESXUTXFHDYNJIJJPAZVJVVW");
    msg.last_error.assign("NFPDLEZDMWGRMPMT");
    msg.last_error_time = 0.10860231062314596;

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
    msg.setTimeStamp(0.46532225871890687);
    msg.setSource(59062U);
    msg.setSourceEntity(228U);
    msg.setDestination(6107U);
    msg.setDestinationEntity(59U);
    msg.mcount = 129U;
    msg.mnames.assign("XCPWNDKUTRQMCEEXDCVESDNOYFSNWRZJNZEBAFGUXRKHYQPACMWQMDOBRVWVZSAZYXTKWSLBSSJDLEDLPQHUZDKUZTIZSFSIVHJFOGYDNUJIFAYHKSDLAHCIBPMUNJXIQYVOLORUVIMBLJQAKOTQHEMPRMBETBIFWAGUXOTWBXMOLWCZGZIHWRCZMLAPRFFLTGR");
    msg.ecount = 41U;
    msg.enames.assign("QLKZDYMUMJSMAYJGAVZINKXXQHLDSCYXPSLFGW");
    msg.ccount = 245U;
    msg.cnames.assign("JRNJCEIZSIMEKOTKQMGOICJHJMXTLOSAZQZFLKBLOVRMNXZUUAANFDVPRKJFUSWECOFOHBFICDCYAWHYATIJDDNJCMZGFCSYG");
    msg.last_error.assign("LZCNTFVGWGPIIAQKJYHTHVGYPPTYUMJHDECMFSAYGHEPPMBFAFOTNIQOUCGMHLFODDXNELDEIJVCVUZCXQFCDFPXHRYCXNVAGWIEKQZNXRSTKUKDDBSRRNRSWOKUULSZQUROWPWJHG");
    msg.last_error_time = 0.8338160822345829;

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
    msg.setTimeStamp(0.781367935964269);
    msg.setSource(47498U);
    msg.setSourceEntity(186U);
    msg.setDestination(51430U);
    msg.setDestinationEntity(72U);
    msg.mask = 210U;
    msg.max_depth = 0.37956617891947686;
    msg.min_altitude = 0.48623706076151907;
    msg.max_altitude = 0.751406399212883;
    msg.min_speed = 0.4786158836719494;
    msg.max_speed = 0.08192823733156307;
    msg.max_vrate = 0.12974824145317232;
    msg.lat = 0.6137779861811357;
    msg.lon = 0.818025500221199;
    msg.orientation = 0.5522031987239584;
    msg.width = 0.6892113132098922;
    msg.length = 0.17481507645431404;

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
    msg.setTimeStamp(0.25143211938122567);
    msg.setSource(23262U);
    msg.setSourceEntity(11U);
    msg.setDestination(46028U);
    msg.setDestinationEntity(165U);
    msg.mask = 197U;
    msg.max_depth = 0.9424165114272827;
    msg.min_altitude = 0.23401179896653257;
    msg.max_altitude = 0.38977700688626304;
    msg.min_speed = 0.5438634181750595;
    msg.max_speed = 0.041586483337086144;
    msg.max_vrate = 0.3362684432536336;
    msg.lat = 0.6419100682665961;
    msg.lon = 0.823556348324827;
    msg.orientation = 0.9087473176998495;
    msg.width = 0.45915520432725565;
    msg.length = 0.806038590740696;

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
    msg.setTimeStamp(0.6397394848830349);
    msg.setSource(65299U);
    msg.setSourceEntity(43U);
    msg.setDestination(29583U);
    msg.setDestinationEntity(203U);
    msg.mask = 112U;
    msg.max_depth = 0.12369539934060592;
    msg.min_altitude = 0.7692621795023726;
    msg.max_altitude = 0.8799560564101153;
    msg.min_speed = 0.6602528888759986;
    msg.max_speed = 0.28079685227113427;
    msg.max_vrate = 0.3156776349088172;
    msg.lat = 0.4066180781493952;
    msg.lon = 0.3021806112805715;
    msg.orientation = 0.557386402240062;
    msg.width = 0.3077863060713465;
    msg.length = 0.8593995218947115;

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
    msg.setTimeStamp(0.20801661824339357);
    msg.setSource(52326U);
    msg.setSourceEntity(210U);
    msg.setDestination(29566U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.7890148904619312);
    msg.setSource(54976U);
    msg.setSourceEntity(68U);
    msg.setDestination(35148U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.5374249617392808);
    msg.setSource(19280U);
    msg.setSourceEntity(167U);
    msg.setDestination(20029U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.33719357836603203);
    msg.setSource(33244U);
    msg.setSourceEntity(230U);
    msg.setDestination(44987U);
    msg.setDestinationEntity(101U);
    msg.duration = 50245U;

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
    msg.setTimeStamp(0.8950339889532167);
    msg.setSource(17149U);
    msg.setSourceEntity(177U);
    msg.setDestination(55204U);
    msg.setDestinationEntity(40U);
    msg.duration = 60918U;

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
    msg.setTimeStamp(0.17644519031943273);
    msg.setSource(38062U);
    msg.setSourceEntity(156U);
    msg.setDestination(14525U);
    msg.setDestinationEntity(242U);
    msg.duration = 49008U;

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
    msg.setTimeStamp(0.9793456332933181);
    msg.setSource(65216U);
    msg.setSourceEntity(244U);
    msg.setDestination(3242U);
    msg.setDestinationEntity(61U);
    msg.enable = 156U;
    msg.mask = 2507469375U;
    msg.scope_ref = 2747056115U;

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
    msg.setTimeStamp(0.2341315635023159);
    msg.setSource(41964U);
    msg.setSourceEntity(72U);
    msg.setDestination(18721U);
    msg.setDestinationEntity(115U);
    msg.enable = 203U;
    msg.mask = 345270619U;
    msg.scope_ref = 2273734643U;

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
    msg.setTimeStamp(0.9941055399962581);
    msg.setSource(33558U);
    msg.setSourceEntity(15U);
    msg.setDestination(50358U);
    msg.setDestinationEntity(39U);
    msg.enable = 110U;
    msg.mask = 2384576656U;
    msg.scope_ref = 1435943035U;

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
    msg.setTimeStamp(0.46066247603723964);
    msg.setSource(27736U);
    msg.setSourceEntity(184U);
    msg.setDestination(32363U);
    msg.setDestinationEntity(2U);
    msg.medium = 48U;

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
    msg.setTimeStamp(0.21055540156308383);
    msg.setSource(22119U);
    msg.setSourceEntity(208U);
    msg.setDestination(12779U);
    msg.setDestinationEntity(45U);
    msg.medium = 50U;

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
    msg.setTimeStamp(0.5978060589405);
    msg.setSource(32991U);
    msg.setSourceEntity(215U);
    msg.setDestination(17908U);
    msg.setDestinationEntity(15U);
    msg.medium = 114U;

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
    msg.setTimeStamp(0.17444400506301194);
    msg.setSource(60511U);
    msg.setSourceEntity(216U);
    msg.setDestination(59314U);
    msg.setDestinationEntity(88U);
    msg.value = 0.7206031492632932;
    msg.type = 135U;

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
    msg.setTimeStamp(0.717977072865654);
    msg.setSource(62663U);
    msg.setSourceEntity(86U);
    msg.setDestination(27403U);
    msg.setDestinationEntity(58U);
    msg.value = 0.310464265558671;
    msg.type = 205U;

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
    msg.setTimeStamp(0.20750630681036109);
    msg.setSource(48933U);
    msg.setSourceEntity(174U);
    msg.setDestination(34437U);
    msg.setDestinationEntity(112U);
    msg.value = 0.32632886140850415;
    msg.type = 7U;

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
    msg.setTimeStamp(0.3136483111935803);
    msg.setSource(32607U);
    msg.setSourceEntity(195U);
    msg.setDestination(47493U);
    msg.setDestinationEntity(248U);
    msg.possimerr = 0.17104914999787846;
    msg.converg = 0.8351621535869965;
    msg.turbulence = 0.3829023942435168;
    msg.possimmon = 125U;
    msg.commmon = 204U;
    msg.convergmon = 245U;

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
    msg.setTimeStamp(0.6687545190272819);
    msg.setSource(43442U);
    msg.setSourceEntity(197U);
    msg.setDestination(26163U);
    msg.setDestinationEntity(77U);
    msg.possimerr = 0.14970364974672956;
    msg.converg = 0.5897012928384902;
    msg.turbulence = 0.6334228845046622;
    msg.possimmon = 74U;
    msg.commmon = 32U;
    msg.convergmon = 50U;

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
    msg.setTimeStamp(0.3942548149914983);
    msg.setSource(27034U);
    msg.setSourceEntity(70U);
    msg.setDestination(798U);
    msg.setDestinationEntity(184U);
    msg.possimerr = 0.7718536593198199;
    msg.converg = 0.19577705686294367;
    msg.turbulence = 0.8866506896624272;
    msg.possimmon = 114U;
    msg.commmon = 237U;
    msg.convergmon = 80U;

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
    msg.setTimeStamp(0.963965330496335);
    msg.setSource(40889U);
    msg.setSourceEntity(98U);
    msg.setDestination(6717U);
    msg.setDestinationEntity(220U);
    msg.autonomy = 74U;
    msg.mode.assign("HGIWAQNXXMJHQHIKVXZNTGSKDPUKBIBOUXWFULTTIZRFDSNZNUOADCFMWECCKYLGFYSCTJISZLYSIPBGLUDPVTXJCEQDKQELOWVQAZDJVDQVZMOMPL");

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
    msg.setTimeStamp(0.779103412752874);
    msg.setSource(25247U);
    msg.setSourceEntity(48U);
    msg.setDestination(46338U);
    msg.setDestinationEntity(193U);
    msg.autonomy = 101U;
    msg.mode.assign("QEBMFGEKLWAQUJMXWUHRVXIYOCHMGPBFOMSNYIRZOXZDLMWVWNUOKTPUPLWYRTQSNCCTZGBJLNQDBFNEONAJNPKYCKHJVEFXJSKHLMIAZHGVBYMZDAUVZCEDAFVCBCKIZDEFLWAGMQBIMKHQMLEKPYSFJIDRBUXTDHPGJYYFGUYXWFRARSCZEPWLXUTNISPJRBRLUSQCOOTOSZRDAQOPHJEGWLIWAVKVTXHI");

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
    msg.setTimeStamp(0.5452428007880696);
    msg.setSource(59416U);
    msg.setSourceEntity(247U);
    msg.setDestination(56744U);
    msg.setDestinationEntity(139U);
    msg.autonomy = 94U;
    msg.mode.assign("CKFJWJGKCEFPWRZJTQNFRUEDDMWEHSDQXLAVMSAPSOSBWHCZNJRQRBABVGOISFSIZLTQXGKDVXOPELUPMLAUDHUTSEBFOARMYGZIVISJHBJQPZGQJPRTGQABHCKOVKBULFJRWEITMMKSKGJPNMLDJCXNLGCFPRGXTLXYXNYCHAIEUCLDQHAVFIMELTWBOWHPKRNYXSYZBZEPTWBYUYONXUVXHNFKROIONCFVIZAWUMWZHKD");

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
    msg.setTimeStamp(0.7740628394680247);
    msg.setSource(21820U);
    msg.setSourceEntity(122U);
    msg.setDestination(4209U);
    msg.setDestinationEntity(211U);
    msg.type = 249U;
    msg.op = 192U;
    msg.possimerr = 0.8536107874688676;
    msg.converg = 0.4726652220351384;
    msg.turbulence = 0.6641760751131511;
    msg.possimmon = 125U;
    msg.commmon = 211U;
    msg.convergmon = 147U;

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
    msg.setTimeStamp(0.41720260384751817);
    msg.setSource(33092U);
    msg.setSourceEntity(236U);
    msg.setDestination(41685U);
    msg.setDestinationEntity(161U);
    msg.type = 46U;
    msg.op = 111U;
    msg.possimerr = 0.7034162313015884;
    msg.converg = 0.7507767692039827;
    msg.turbulence = 0.36802100223732503;
    msg.possimmon = 157U;
    msg.commmon = 177U;
    msg.convergmon = 108U;

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
    msg.setTimeStamp(0.661792025194724);
    msg.setSource(24950U);
    msg.setSourceEntity(132U);
    msg.setDestination(47484U);
    msg.setDestinationEntity(244U);
    msg.type = 18U;
    msg.op = 169U;
    msg.possimerr = 0.9750474055603189;
    msg.converg = 0.3714265726598993;
    msg.turbulence = 0.12149576260352069;
    msg.possimmon = 90U;
    msg.commmon = 138U;
    msg.convergmon = 85U;

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
    msg.setTimeStamp(0.7835641251403007);
    msg.setSource(49640U);
    msg.setSourceEntity(39U);
    msg.setDestination(10083U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.2113745079957534);
    msg.setSource(39826U);
    msg.setSourceEntity(130U);
    msg.setDestination(21254U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.2419465000264488);
    msg.setSource(47473U);
    msg.setSourceEntity(32U);
    msg.setDestination(8309U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.639415511581614);
    msg.setSource(41420U);
    msg.setSourceEntity(146U);
    msg.setDestination(28820U);
    msg.setDestinationEntity(163U);
    msg.plan_id.assign("AFVDVNSBUYJWZRDKYNYRIEHKOCEUWTPOZNBMEXBCEXXUFTROJCGFHLFJONNCTVUEZSGBPLRAOVGDRPWHPQJGVVJNMSXAGNBPBWDGZNWWDPFQXLEYSQSPO");
    msg.description.assign("RICJFBNJVYUSHMAJHOONOLYRFPPIEGDTXWIQPMLZQTYJDZALPUDYJUPDODNGHKFADAPOKFSCYVTCKKORGXBQWSVVHYTQAFYHQCMRLIENFMSCKNWDSWZWJCQXMXTHAVDLAL");
    msg.vnamespace.assign("MQDQFLTGWXSGHAQAULJOIPDERWMVWDXBRHMTCDOVPTJOZCQAEUOGVGLUIGHTJVXIJSEBIBUFSEPIO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZKOAWIOJIBGJZUFBZEIXHXWSVFXDNPARSVHNPARRESDIPZJQLWCLJRQXAZBMDYZKYOWUUSSEDXMIRMSKUUHTYKGTXHOBLPVUWBDTDQYABEOCKCYRUCANLRHXJMAHEGNPCOGBBFYTFWGZYIROQYMLNGTMFZLPTKMQCQINCBQNEIVVLRZTJPO");
    tmp_msg_0.value.assign("YRLSWXSSICPENRSHNRMDZWOUOTNEGIYDBFGJZQTITOKFIQALUJNGBHPWCIUKUSKCEXNGXQDLPAPZJQTQRZPADUKALKFYSSKZFUKLNVDXEYVBJOLBECNWIEFLRVAYOWQOMTZCKOI");
    tmp_msg_0.type = 233U;
    tmp_msg_0.access = 6U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YCCRRVVEBMKTGLNRMQUAFPWBVANPFIXAFOIILECFWLUZJSYDFPJXOYCSYCJZDESOLSGRJZXOPZNAQGXKJVXTNNCUEWBOLXWQYISSQTBOOTIPKHWTLCNLCSHWZXMIDCZNLUIBCBOJURGORBKMQWRJIMAHZHSMQVJIHMEJUMINSTDYBYHDRVAFYYKTTDDPVRHFFFXZDUPZQPTSDHNXGQVLGKGMKAFARHPWXAYUKEGJPBD");
    IMC::VehicleMedium tmp_msg_1;
    tmp_msg_1.medium = 82U;
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
    msg.setTimeStamp(0.7914268380117326);
    msg.setSource(62868U);
    msg.setSourceEntity(83U);
    msg.setDestination(41811U);
    msg.setDestinationEntity(159U);
    msg.plan_id.assign("ISPTDNUUCCZKYJSGZINEBFGCXWQXGVOGGOMPHBMLTOXHKGTNNCNCSURIYNYNOMHPPCMDSFYMXJASWZEVJQLHVHFPAURYLRPS");
    msg.description.assign("BLEJGZDJNUXFMHJBTQIZBALCPNWQWLMOPIGQNR");
    msg.vnamespace.assign("JMPVUVICACDXXIPEORECJUQOQCHLJQIVPFBDHABZVGYYTSHBEOVCKEPAPSGTVPIGSYQLCBFWAJGMNVBCCZVEQRQDFLKDZCTQWADUTFSTSIMXJMLGWVNZKWMLFJAJZYHRGOFEBJLSRGBIFWSIWYTZTAOQUKIFAJGNMHLKRUFMEMEYWDFBNCXKHGRTDWHXIODGWANS");
    msg.start_man_id.assign("JQIBWDDMXCARHUGAURMGCVGQWXBDLXHDWDVFQZMTGISNIVOCPJLBFVIANKPYUDXYJCSTRPDYZVKZVTYEBQALPRLLTYTWUNFOEYZBQVPROAUZXNAVIFWSCMBZIXUXLUFFHTIZOKQJNOHJJSQDZZWARPPUPPWKYMVNXJMAFNGCWRZSUYSGABYXKHMNEJIAKKCDEPCQKFYVCOUSDHEGLWSGCSRSMTBEMXQEFEKONRRNHOEILGHQTLJFTLIBMJH");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("WDYMMEMUGXARAGZGYCSXIEKGWPOALOWZGDJHFJLHOFJZALPFIUYBTJESKQNBHCXPPYANDZFYBWHYLXODXFRAFUPLEMJNIZKNTDBCZWLTIVBQQPPHRQAKOFKMGOBYURETSKEHVBKWVJIHRAEVIQCQTRSSBPZOZVUUPJDWUXRRZYS");
    tmp_msg_0.dest_man.assign("MWDVNOMKUWYTTMNHSHQOBFWIAMBNCJSRZVPQWJRSFDMXUMELFITFKGAZRCYARSUFIZXEBHJXSTGGCLCHPTEGWXSMBYCWXPQZILDROFOGJJULKRUHCBUBTPKRTJMOIAUEDZNH");
    tmp_msg_0.conditions.assign("BPDKBMFRCTNEPMNRAQKHOMUKKBOAHEBJGTYIEWTKTNSLSZRGCAEOFFQDVFGNYNEKPMVPGGWRQECJQRTAMGYDQGZNRPFJFVRCZOVOYMSAMSULZRBUAVSIKDSCDPXAZTABOLLLHJVZIMBKGLSVWQXJNBFEARHINXIUICCETDOYYJVQZXXIZHCNUOWFUXLSXTKXVHNLHWHTYUIHWUJWCDPJPSD");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.16480714059204726);
    msg.setSource(3323U);
    msg.setSourceEntity(241U);
    msg.setDestination(28810U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("AVLAWXMZRYFIKBCAYISCLBGJMZYJZTKPNVLDKNBUAINXEMLIHWIZXHJCUZOHJEZXIVNQCOHBEDOVSOYIRPVWMAKTYPNWAWCTQFOLVFJDRDAFRGPUFWIDIMBRQFBZSUEUASURBHRYPJTXCHZPXPKOXOJLQTSCHWUNDPNSLF");
    msg.description.assign("EASTIWMCRDLRHGNKIZWMRYFOINIRTQNVFFWQGEJI");
    msg.vnamespace.assign("VTDAIOXTOZZHZMPGFMBRGQPRABLFIILDHFVSLMPJWLWHEJGBUVQHERZNIUJRSSDBABJRSSXTVQWQJWSEPYXCGAZEYKFCZPPSGLEUNVOGIRTBIEILUVTYMEUWULGUIQVBSYHCCDEZYDPANKJQMQHGYFGDJIHQPHWQNZMQATXZOFAMAYXBTOWETANWKMBTLKRTFCGNXSR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DIGVKCPKNFGGTQGDNLFBKXEUZMLBLDKWETBUHFOPSTSQBRXGYCSTYJPNXNQWLYNOQCDMLEPSEEOOWOWYGRUAWYFDAMRAPVYKUPVWRMMBBYOGQQJPVTLSYRZHUAZZCVGDYHLSIQUVOIWLBJJNIATFQDRDXJR");
    tmp_msg_0.value.assign("HDNYZMEEYRJIKDBHNZOKYVTYCYYONBRAIOMUPQSQUDUZISBLRHNCEUJIXSUBXUJICZN");
    tmp_msg_0.type = 163U;
    tmp_msg_0.access = 104U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JQFTYJGPJIIBLFEWYEXSHMUGGODYMFBWORPDAQEJLOFZPLTQQSUFNOFTNRXPHYAUHDHSVIWBWKTXQXTVKHOGPDCUKBFYSWMWRKGUJQUIRTTYXDBGPPMLECSDXZEVTDOLKLZMFDZISADLXHCOJEHABUZLNWGKRQPJANCNPVASNLCZAVYCNOJUTYWCVBKGIAZBKW");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("CHBPELMVUBSRUXSNTQCICSOYDIOBKKSEBOPHZDBGGFHGLFQBKITWBAPSZBZPLAISTNRGVENJQWPWYFZPVVMMMWRCURHKWTAAKEDINBCUDFKHSHFJAYOLPUQGZJBRCOTZGDPZAYXJXMZWMLYVFQHCWTVYGFCIYAQKOQVVMJMDXMCQYRIEQONFDCDANXMITOSKWWUXZTIDLUNJNI");
    tmp_msg_1.dest_man.assign("VOKRMZBQSLJUZANKZBPVPDNQFDLYKMWJRWVTCRUFVODGIHNQMBRWGDDAOSHUMYVORXLPZPGUEFZITWGEPXQWLVRTTADG");
    tmp_msg_1.conditions.assign("TOPYNRVHHZXQAKMLVYILZSRRZSZOZDAUTZDURXM");
    IMC::LoggingControl tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 72U;
    tmp_tmp_msg_1_0.name.assign("VWNCCAYELRHRYOKCQLRPQH");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::ReplayControl tmp_msg_2;
    tmp_msg_2.op = 123U;
    tmp_msg_2.file.assign("WDEGNGLTBQMQXEWLSOFZEYZPPOAHEKIMQKXNCYUJXSSNGVCVFHPXZOAMPWOYBSVWPPFHPXRSFMMRAOTOYCVWDKMFAJIFLBKDJHCYJITYFCULWYLIDZGJTZBGTUDYRFKNCJQWRXSUVHIBNMQVXBROKGBLALVSFGMOHJAKVZJQWWTJJUZKLEUMDWQUPNNATRAVQROYHUOCCQEVBRSTCASDLIRRDUUZGEPGXXXNHEDBLQKDASIHMZN");
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
    msg.setTimeStamp(0.2797597537650607);
    msg.setSource(4102U);
    msg.setSourceEntity(83U);
    msg.setDestination(30563U);
    msg.setDestinationEntity(80U);
    msg.maneuver_id.assign("BPNRQKHRPERYTFFOABLLUFEBAGKLPAWTBGIKCYOYVKHAUHNNFQBCENEUSLTDPVCXMWTIFKVXMMGBRNNVXFGCGSRAMPXDCLOWJJTO");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("HVEHSOXDKFYZSXEXFQWLZMOTGWYBLRPCQQTEGJBXFOQQZXPDJAINDPMGDHTNWQKNYHKBUNENMJSQFYLKPEVONWGOBZQKSQZECLXHWSZOWIRASGTYOBVZPKHVDBGTMLUXPNAWNJAMHTPLTCJPDOUVUOYYUGMIRACBVQZTRWBKDWBRLMXCOCRMFIGVCVDZRHELSLFUIIUYWCMHDDCNIIFUYER");
    msg.data.set(tmp_msg_0);
    IMC::MessagePart tmp_msg_1;
    tmp_msg_1.uid = 70U;
    tmp_msg_1.frag_number = 140U;
    tmp_msg_1.num_frags = 249U;
    const char tmp_tmp_msg_1_0[] = {24, 2, -15, 53, 112, -69, 62, 107, 87, 13, -102, -49, -61, 18, 51, 92, -85, 21, 9, 18, -66, -84, 56, -53, 116, 85, 25, 17, -27, 6, -37, -70, -68, -125, 89, 109, -14, 18, -113, 46, -121, -128, -99, 68, 112, 42, -90, 14, 125, 119, 82, -26, -24, -19, 63, -67, -82, -44, 114};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.48470155487119393);
    msg.setSource(33851U);
    msg.setSourceEntity(52U);
    msg.setDestination(45873U);
    msg.setDestinationEntity(52U);
    msg.maneuver_id.assign("SIMLZUTZZZINXJFNZUMXTRWPUEVIGGUQXFKLMRUWVPHCMLTBFJYPNCKOBAA");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 5282U;
    tmp_msg_0.lat = 0.15693987727520775;
    tmp_msg_0.lon = 0.7422704146696496;
    tmp_msg_0.z = 0.9463905361191927;
    tmp_msg_0.z_units = 3U;
    tmp_msg_0.speed = 0.692178178910123;
    tmp_msg_0.speed_units = 117U;
    tmp_msg_0.roll = 0.5596970741436342;
    tmp_msg_0.pitch = 0.3365557614910769;
    tmp_msg_0.yaw = 0.3590842357891385;
    tmp_msg_0.custom.assign("ZTZKRCYSNKIYLHQZJIKEKVNVUNEMBNDPQDAACBPMWYWHRGUVDXLLMULJEWWMGYFCLIBBHYSQRVDOKMOFCINCKMYDAZREQHYHNMDRBSFLQGIML");
    msg.data.set(tmp_msg_0);
    IMC::FuelLevel tmp_msg_1;
    tmp_msg_1.value = 0.4445263114163466;
    tmp_msg_1.confidence = 0.40589535137957056;
    tmp_msg_1.opmodes.assign("FJJXYLTATKNQRZFLMQHAFUPXTIILJBPRXVTVBXMHDCLKPMJCUEKOOBSGNWQIITVAYMZLRLIJBEUEGNSOABBWUGMDCVWIKXWDCEYEHHAQBBEPCQYTUWVHZYQRFIAJFLMDJVWHXZDZFRCGPRFEQOKOQJYOTDLSNFBNKPZCOYNCNLKSKXRGTI");
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
    msg.setTimeStamp(0.3239798039581203);
    msg.setSource(17011U);
    msg.setSourceEntity(66U);
    msg.setDestination(7542U);
    msg.setDestinationEntity(231U);
    msg.maneuver_id.assign("UMOELEAFWPPQDSRBQWNYEKZGRTIPZYDKYVDNHJUZXZSTYJHCLMLIQTJZGYRGRASNSCFZFXPSUJQWMRW");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 31263U;
    tmp_msg_0.rpm = 0.6805615106386106;
    tmp_msg_0.direction = 129U;
    tmp_msg_0.custom.assign("UEETPZFQQYHKWHYYTDFXRDNSZYC");
    msg.data.set(tmp_msg_0);
    IMC::FormCtrlParam tmp_msg_1;
    tmp_msg_1.action = 199U;
    tmp_msg_1.longain = 0.9806008688888427;
    tmp_msg_1.latgain = 0.5672930851004696;
    tmp_msg_1.bondthick = 2828985028U;
    tmp_msg_1.leadgain = 0.32876523030583005;
    tmp_msg_1.deconflgain = 0.2577375889359915;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EulerAnglesDelta tmp_msg_2;
    tmp_msg_2.time = 0.6756878205377926;
    tmp_msg_2.x = 0.5941373432667929;
    tmp_msg_2.y = 0.8565596063444878;
    tmp_msg_2.z = 0.14118347941057552;
    tmp_msg_2.timestep = 0.33955112076180616;
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
    msg.setTimeStamp(0.23888507847553575);
    msg.setSource(33136U);
    msg.setSourceEntity(139U);
    msg.setDestination(53816U);
    msg.setDestinationEntity(230U);
    msg.source_man.assign("VAXFOIPEOIKKJKBERQNLASPHZPOWRCUTAJFJISNQUHWWTQAJNMSD");
    msg.dest_man.assign("PULGXYJTJRDKUZJPZOOIVFGCMFTCEUKNGDUOKKNBPTYMXLVSQLJQRGNIVRIFRNZYCOBXHMBKDQSAAXOAOUDNAZFVMQLCAACMNXRWJFGAMGIKNDZUGPMBELVHPWWRIQYHUKP");
    msg.conditions.assign("SILRJHJAYZVACBOFWNNTYZNJHGFVYQOVMNLYIXEECDXHKROEYUIKLGMVXSXTTTHOYWARXFSQAWKHGWAPBSATLRHWRPJNGLKPFDJPLOZCXLVWXMIRFZFOINGEYPARHLFEQDOBICVYDTVANSCUBLQSUGUQQWYZQNEFPNJZELRKWZUVMBEMMGNCDQUWDHZSDI");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 62651U;
    tmp_msg_0.value = 221U;
    tmp_msg_0.error.assign("CJSVAUWGFZQCJYSAPFGRWUKYGIKPWLHKMERTJIASDZOBRPZMGVNRNEHQFEPQXMATGTQBGKNDHYFZCYATQIAWRJTDDXKFBBFXGUCUPVDHY");
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
    msg.setTimeStamp(0.3724348258216281);
    msg.setSource(63358U);
    msg.setSourceEntity(118U);
    msg.setDestination(15878U);
    msg.setDestinationEntity(193U);
    msg.source_man.assign("YMOYQPDQTYFJAEYKIUFBHI");
    msg.dest_man.assign("USMCXKONOKORKEOQZHMXNNINMHDTSXNBGZYYWQCTRSLRJASRACWWPTUZFXZHKLRLJSWTWIWGAPSTVYDSGBCQDHIVFMJLBYMPUGQTKUETYRXDEZOBMBVA");
    msg.conditions.assign("GJFMCYDOSYEUYIBRWLUAFWWGGQJNSZCVDYRTKSPA");

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
    msg.setTimeStamp(0.9300846272688993);
    msg.setSource(9165U);
    msg.setSourceEntity(226U);
    msg.setDestination(43411U);
    msg.setDestinationEntity(5U);
    msg.source_man.assign("GJFXSPJOKACPXKPKCPVUYPJNBVIBMGRCOWNVQSLOFKTPEMRQZVOVNZYHCZXIFUDHOTICUHGVDGSELDEBYRGWNFTRKWADKKRHLUCLIDJFKXGNWQPAEBUZJTGEYSMSEVYSTBJPDBTELEWNZZCAFULDCOPTXHRHEXWYAESXFRQBTSWOAVIMHJQUYZLN");
    msg.dest_man.assign("WRNMUHKTLFDFVNCRDGXIWZRWANTMBRKHEDSJAXOHFUDWSZFJGLFLENLZUUFEKSPVTMKCUDYVSTRMGZSDXOIEYLSDAUAYWQLHGFGPJRIGYQCBBQMGZPCXFCLMXKQTPXXLHQJNBLPUOHVJHWQSVABEHPADZQBEJBOXOIMKFYCOPCKVPNEWMNYOJOJYFAN");
    msg.conditions.assign("LIIFRCDJUDWJRQQSOOFMZEKSMDAZNCCTFQOLMIGGXZZZEUIJLKIMLUAUOPWFTHHQQFSYVTTAUSTBPNHXLMGKHIRVYGWQM");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.734988187860445;
    tmp_msg_0.confidence = 0.8267937429902604;
    tmp_msg_0.opmodes.assign("UORRVNICUGDTSHTNBUQRNCYPZVTISRLQRMSDPOLYLLMJGHDKVHZYTNLJXRFVSZTZWHINPEBUWECGQUHFSPEACSQKACZNEEOJAOZH");
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.3201557555070432);
    msg.setSource(56553U);
    msg.setSourceEntity(235U);
    msg.setDestination(40291U);
    msg.setDestinationEntity(76U);
    msg.command = 24U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MRHRQMEGGTTO");
    tmp_msg_0.description.assign("JEVSDWDBCIEFXNDQTNCIX");
    tmp_msg_0.vnamespace.assign("BYJAADYJXXQCYHTTLAEQNIKZWFGKKATUGGPBZUSFEFGRDECBULMZEPNHWWPVLJJVHBIXIYZVKLHAGWPRDDMQNKRNOUFHDFWKAQSTUKRWYAPIXOMSQLGVQODMVCKVQSBXTAGXJCYYHPSOFBFQICRCECSXJETGOMVOJIXEMLUVESBLEPCMRKNNLOTXXKIFHMCZUHJRSALOUISLVRFSEMHOVZTIWWZWFT");
    tmp_msg_0.start_man_id.assign("TNWJOGCZSINHNWFAJHAVTRXMULEJETJF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("HRCZKVZTZFLXHUEFRDRKIMIQSTEDTNICMBPVDGQAXCONWLRSUIJSYJMCYXXUOFIULOD");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 9873U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.17995803828916634;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.29944969093581164;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8617983598569174;
    tmp_tmp_tmp_msg_0_0_0.z_units = 174U;
    tmp_tmp_tmp_msg_0_0_0.duration = 17167U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.08355029439888861;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 49U;
    tmp_tmp_tmp_msg_0_0_0.type = 26U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.31391676929826173;
    tmp_tmp_tmp_msg_0_0_0.length = 0.9168592047722578;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.17360735412094697;
    tmp_tmp_tmp_msg_0_0_0.direction = 166U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ETBJRAHKSZBSQYWDOMKZYXCDSDXMWSTUCTXANFTHVSCMKGMVIMYRWDGPARIIOFPJAQJHRCXPLNGXUFMLSFQJVXOCVYCEGYUBUENKDKCDUBGIKIBVVVQILKUGFEFI");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Acceleration tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.time = 0.9103861733082333;
    tmp_tmp_tmp_msg_0_0_1.x = 0.8595338686119695;
    tmp_tmp_tmp_msg_0_0_1.y = 0.9916390312870009;
    tmp_tmp_tmp_msg_0_0_1.z = 0.8390074822134164;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::MessagePart tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.uid = 245U;
    tmp_tmp_tmp_msg_0_0_2.frag_number = 73U;
    tmp_tmp_tmp_msg_0_0_2.num_frags = 247U;
    const char tmp_tmp_tmp_tmp_msg_0_0_2_0[] = {94, 19, 53, 124, 29, 86, 5, -37, -79, -35, 26, 62, 42, 15, 84, -58, -2, -18};
    tmp_tmp_tmp_msg_0_0_2.data.assign(tmp_tmp_tmp_tmp_msg_0_0_2_0, tmp_tmp_tmp_tmp_msg_0_0_2_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_2_0));
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::TrueSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5006041238222356;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SimulatedTime tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.htime = 0.8671512595860034;
    tmp_tmp_msg_0_2.dt = 0.8093029346260753;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.200600855873994);
    msg.setSource(2044U);
    msg.setSourceEntity(100U);
    msg.setDestination(63468U);
    msg.setDestinationEntity(75U);
    msg.command = 32U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PUVXJKQKEUNAYRIXHWDSRNJ");
    tmp_msg_0.description.assign("QKDXNNLXMXCYRTUNDXOQFYSRNEEXSRQTBAGCUIXVDQFAYTUGYPODTOWRZKLTHJUNMQKBXJSEZOYSRHONULYSQVVWUUOBXSZBCPWTPCLYVGSZVHSQOAZFXXYYZRNDIJHOQHFAGKTEOJRGLCPJCDFBBJKMHJFZUMVHTMIERKILQGDHNAAS");
    tmp_msg_0.vnamespace.assign("FVSQBTAKXMMLEVEFWQRIHWJCLMHLYHRZYEGL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ANBNAZHTZIWQEGPLWHJHTDXITLNSICZEVYWVXDPOTULLDVFJZKCJYTFAFHJXZBGJASOMHLIMJGKNEJQGFVUSMRMLREGUEVMAXOBCUHRYHQNXSMRCNMQERGWAOIDFBCWKOCNHAYLIFTYTAWKEXASWZFUUOPSZDWXLJVNQKOSVQPBYGYXDPTWPVOTOIRKUDH");
    tmp_tmp_msg_0_0.value.assign("HAHGFRITPHQBCTOUDCZDOVUDJIGDERGFSUEKUOGMOCMHQSCTDPSMFKUXDWO");
    tmp_tmp_msg_0_0.type = 214U;
    tmp_tmp_msg_0_0.access = 205U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VFIVVIQQDDOHYXFHCPBTUELNTMRVEETIAINCQSZLKRHOYUOZFXMJUBEQUGTCYWBFGHGALEIYSQIYGYYARRQZIGFDRYSKRXNDTGUHFVAMPBDRVRIPHUFGNKWOEXCMXEBMTCBQU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("AHBSIOGPHECODBPRAENGKOTCYKCIHHOSNHOISLNSZMLWDPONGWKQDPWOQNXQPOTWMAIYORTYJQPJUTRRMYZVOUXUUGMLZADNFECYDERVPTXZLUWWGCGCBIFKLMMPDWJRJHGVMXTJJBZANZVVMIWZSMEBHUFFLGIQYZJSGYYLHSQQCRUNQEZKKMTTKTXXKJIBBSQFUFDZXNLXFEFBIAEPRFFEDGYCDAKVUXNV");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredHeading tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.34030433804959903;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 62979U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("NKKGFYROLWZPMLLWJRROMBTOUZBOIXPYYGSSYFHYAGUBNHWLQJPPQEWGLLTVKXIYSVDAWKVCDFCAJEQSGOLBPUZBJHWQVNRDZ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.8067187431720904;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.02500495526643476;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.8432066597672881;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 71U;
    tmp_tmp_tmp_msg_0_1_1.duration = 1521U;
    tmp_tmp_tmp_msg_0_1_1.sys_a = 39889U;
    tmp_tmp_tmp_msg_0_1_1.sys_b = 53385U;
    tmp_tmp_tmp_msg_0_1_1.move_threshold = 0.31337349660049607;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("WKRZYYIMWZWFASXOXRLPMLSBKCNOWRGGWOUIQZYONSGHFCRHCPOLEQJDWZSIDVQFDZNXJPBDNFHZAWBVYTWXUDKOZAYGTMMSNSPCKUNZYKYEKLKBFATNKTGJWXFZRCUDWCNQYSLOGHIEMUQEEHIJCQCUVLFVEPTNBFXAQTVCRHVPBG");
    tmp_tmp_msg_0_2.dest_man.assign("ENCSAZQITFBDXYBWZKXWMBDPXZYRTVUNFAGCGIRENJPNUTNKWESFVCYFFNBVTJBWICECOQUIYNOKKDVZMGQXXDHQSCLVAYVJMACTKNTLZSREVOPQQFZCP");
    tmp_tmp_msg_0_2.conditions.assign("LSMMCQAKIWISKPOYN");
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
    msg.setTimeStamp(0.517149660023452);
    msg.setSource(39618U);
    msg.setSourceEntity(143U);
    msg.setDestination(35895U);
    msg.setDestinationEntity(86U);
    msg.command = 208U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HOVDABYMFBUVIZGHNYRBDEFXNSIMXKBXJDXYFSTUHBNEDEOOXTQNYWESOWZQXIJEWYCBGVCTWAIZGSQLYPLRFELASQCCMBCKCNGLGAPXUKCBEWSLYUUFZDCUUCOHQPKKONGSFHHGPGJCPXBPOVPQJPTNFKDEJTMSLTAOMIODUDGLJHRNAAKSVSAKYZWDVZJGJMXTLARMZRYPIEKRTRIUQRWFVQTQWMNRZFTIHJQMVILIVUZEHWNYWKMDORA");
    tmp_msg_0.description.assign("KOIXXJOVLEEAFICEP");
    tmp_msg_0.vnamespace.assign("WGNJAEFVRTRZTSJPXBMXSRFSUMVBVYWDZJBQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LFZCSSSWVAAHOOUPOCMSBCEBFFPDJECTONFVMTQEYUIEYXDPYEDZQVPIBJBBCQMUMHMFHZULLVMMUCWPGXAKINPDIRNJRQWXOTGWDPPIVXPWLRILHAOKYBHYOHIQSDRHYUEGZSZSJQECANMNTWFJNTWGXDXVXURRLZATDGFZTVQKJDBBYHZJUKRWYLJIIGSOJWLRBENTHPFXGKGFFQYSOCYQTVVNUGKARLASCUZQAR");
    tmp_tmp_msg_0_0.value.assign("PCINGQHAGPWPIRANDFYLFEMYIHHZMGUANSDKNRZJMKEVWYMLMPKPBF");
    tmp_tmp_msg_0_0.type = 189U;
    tmp_tmp_msg_0_0.access = 150U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EUCHNVSRVKYPJVDIQCCTUDERRITFZYXUBWMOZPCERNOEBSBEYXWEHQADJUXCBOLXHCGKXWIVPWETPFSONYLBAOTAGNSFKHXB");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZAXNYZHECUPOELAUVKCSNDRRAYNRPTCEGXSRALBJDVLGCDBMBDBCHVHWNCHHYSJQALWFKYXSMYIFOSUDLEEZJXI");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 12527U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6399609692753916;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.16888852630240703;
    tmp_tmp_tmp_msg_0_1_0.z = 0.34804693273777243;
    tmp_tmp_tmp_msg_0_1_0.z_units = 249U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.47544897811127385;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 23U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("EMOXGQNALNUGJEUYXDWLSNHQLEJFXRTMHLJJTNHXZDQARIUYYCGZTPIPNIOCFZNGHPNTKUPXEOBB");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.6932880719003297;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.4971193605398899;
    tmp_tmp_tmp_msg_0_1_1.z = 0.7861731994802833;
    tmp_tmp_tmp_msg_0_1_1.z_units = 128U;
    tmp_tmp_tmp_msg_0_1_1.radius = 0.28440524893462815;
    tmp_tmp_tmp_msg_0_1_1.duration = 57271U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.6201250112179559;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 159U;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("VRHGKAZZRVHTLWAEBUHJKHTRXJRXCJZIDSTWZGYQKBPNMYRAWXISLMYCQYDHHBMEAZZKAVJIVKLJTCLEBMQEYYIAITIIQS");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.38249445981061725);
    msg.setSource(44860U);
    msg.setSourceEntity(228U);
    msg.setDestination(39025U);
    msg.setDestinationEntity(6U);
    msg.state = 210U;
    msg.plan_id.assign("GZLLIRPDXZDQNYXBGTVHOSNPPPBRRLJRTZEYBYTSDXBFQUJVWLFKWMEAAUPXTDYJUMFYIEQTGUJXBQIXRBCWNGHHNOJWAZMUECSUTOVQTBHGIVGYIHYQAXSREBMWNGVJCLZNLWQJITSJFLIFOFFDTPDPEUAPKHXIEJQKKYWBVDQKKJREG");
    msg.comm_level = 252U;

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
    msg.setTimeStamp(0.3423090783685607);
    msg.setSource(33471U);
    msg.setSourceEntity(199U);
    msg.setDestination(7422U);
    msg.setDestinationEntity(250U);
    msg.state = 87U;
    msg.plan_id.assign("FBMNQCZFRSNESEGSDUVNIDAJSRIRVYZTRXGKYMKXMDNYOYQSRTGHBKMQGROOFWWLSCMPVYFUKQYGUZYVBANAKCFYAJIQGLJBLSUCPBLMLFSRZOHLZEHZERERZNXTPMJOKHOPABVLGJIVXTXBATCVEYIWFJHMZOMTJIUFHZUFPLTWXPTXADQDHBCLDICKJAZXNVDCVDKNYSHERWWNIUWENALOP");
    msg.comm_level = 148U;

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
    msg.setTimeStamp(0.48186683923843043);
    msg.setSource(34116U);
    msg.setSourceEntity(123U);
    msg.setDestination(35560U);
    msg.setDestinationEntity(104U);
    msg.state = 187U;
    msg.plan_id.assign("GQWGEIEKOVJLSKVPKOJUDGXOFAFFEUKYYPJTYMNGTXRLJSQCZBMVLAWKOSXIIOHFRMLHXBIHVVAHEXPBTDGOZEAZTHTFRPTSDIXEDNDBYJBFKABJPZHBRZHACWGDYULRVBCPIMYAKAKQCCVZDRFFBNWVLKOWXNUUMJWMCZIXWTHQEITLHFRLCQEHERGQSZQGXUYFIUJMZJUDXNNOQSTESCRPPDNBDAVLPCRGYKNPOSWSWJN");
    msg.comm_level = 96U;

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
    msg.setTimeStamp(0.3190171225944639);
    msg.setSource(27611U);
    msg.setSourceEntity(114U);
    msg.setDestination(8981U);
    msg.setDestinationEntity(61U);
    msg.type = 42U;
    msg.op = 242U;
    msg.request_id = 62482U;
    msg.plan_id.assign("GLWRSZOUGWAIHIBNSEZVAFKREYDWLBYZVCJZKADVNNETMSLUFTVUIMLWAIGENQCHZQQOTCOLXVJMWNDPPZQDXVPRYEVUEATJDMLGUQCYYDZQUPRFBXXHPJNEHQTTKWFMFOXVIMHXSP");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.46185247735886825;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SFXSNQISFOLGLDOZCMHPHLDMEWQIVSAOHZMNLKEJAEWAUIXCUWJYKOEMGFZFKAPMXCKZUCGNBSQITKTVORDNRYWRIRDOXGJAJFIEJXILVHTRXBUQAZYSWRADAQPSCOQYEGZPPYYVNCULRXRIGZXCJNJIMTDHRWQASDGHMUB");

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
    msg.setTimeStamp(0.7569165175700352);
    msg.setSource(30768U);
    msg.setSourceEntity(184U);
    msg.setDestination(3131U);
    msg.setDestinationEntity(185U);
    msg.type = 102U;
    msg.op = 252U;
    msg.request_id = 6717U;
    msg.plan_id.assign("ZHEJDHRCOTKTNEVSHJHBHSNCCHICFQPPNJBWGFRBIXWZTUIZSGVURRPLYCZFPHIKMWVJEZJPODZJGXEVTBKTWGYNPVORLJIHESMDFMFPVKQUDQYMDMQUARKZXNRYXBLXODLZQPFBQWSLHBEXYNVXIKLBAEAGAKMYKZFOUNTARWOGMLAACLIEDFSIFJANQCYHOQLGAAETZGITBURLCKCXSTSVGWETNWQNYDOXJFWKBMVUOMPYORJGVP");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.16047421612508184;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EQGGCFXCPQXNSLLGNWITSHKNMNFEPCCLKXJBPOXKKZHMUNXJQPADHWOAJVKXYVHWGPQYTTWOGMKZRRC");

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
    msg.setTimeStamp(0.10326890560172741);
    msg.setSource(34653U);
    msg.setSourceEntity(34U);
    msg.setDestination(26114U);
    msg.setDestinationEntity(65U);
    msg.type = 175U;
    msg.op = 229U;
    msg.request_id = 48596U;
    msg.plan_id.assign("CTDFSQEYWLADZOSMWGO");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.31709266082564225;
    tmp_msg_0.x = 0.475426613085842;
    tmp_msg_0.y = 0.9254031829408293;
    tmp_msg_0.z = 0.08213427812073981;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YCCIPIDHNMJHTUEBBCQTMNEICSGLLMDAVXJOOYYFGQOTAKYYRNWPKQTLWAFCKZEMEHHTVWYINJKGSOVU");

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
    msg.setTimeStamp(0.5209513365318303);
    msg.setSource(28909U);
    msg.setSourceEntity(56U);
    msg.setDestination(57100U);
    msg.setDestinationEntity(228U);
    msg.plan_count = 19393U;
    msg.plan_size = 212623685U;
    msg.change_time = 0.7517830023119627;
    msg.change_sid = 51558U;
    msg.change_sname.assign("KJIEZEXCRPCZNYHTDNFOJUKWDFPLXKMVBSPWEYCWMNHSIUIFITOSJSBMDGUTFVWNIZMHKMSWQZAZFZLRHGDSQPGYJAQNMKFUOQXQSBGBTWNJMNBOGKECRCAOWLEKRUOJREZCAWAAVUQJFCARGHWDCYDXGVNRPEFUJEBHOZHVPKBIAYPNIZLYLALUDRGUVHXBEVXBXVEYDCPFDTUKJIMOPTP");
    const char tmp_msg_0[] = {-31, 32, -53, 74, -30, -34, -48, 90, 89, 113, -17, -98, -128, 59, 112, -66, 125, 49, 24, -49, 118, -27, 102, -80, -17, 26, -105, -23, -41, -18, -54, 82, -99, 18, 56, 0, -67, -21, 87, 71, -94, -114, -74, -92, -94, -70, -40, 76, -2, -101, -23, 117, -120, 65, -80, -65, -127, -81, 125, -9, -115, 28, 119, 116, 82, -4, 88, 90, 117, 51, -39, -14, 70, 28, -73, 19, -124, -103, 61, -7, 71, -107, 92, 51, 117, 40, -115, 124, 28, -81, -52, 15, 114, -112, 81, 79, 41, 111, -45, 122, 37, -91, 108, 23, 93, 119, -43, -90, 36, -55, 89, 110, -35, -56, 94, -99, -101, -76, -111, -128, 42, -71, 44, -98, 23, -113, -16, -35, 36, -13, 113, -115, 115, -34, -126, -66, -59, 46, -83, 106, 104, -100, -46, -109, 124, -50, -1, 11, 16, 60, 32, 8, -19, 108, -21, 94, -2, 44, 68, -25, 74, -91, -75, -128, -52, 65, 29, -125, -10, 39, 114, 88, -44, 69, 27, -117, 4, -121, 96, -22, 123, 29, 95, 57, -67, 120, -73, 57, 66, -108, -94, 7, -2, -37, -91, 59, 110, -28, 79, 64, 122};
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
    msg.setTimeStamp(0.1283507992181112);
    msg.setSource(53430U);
    msg.setSourceEntity(110U);
    msg.setDestination(14696U);
    msg.setDestinationEntity(159U);
    msg.plan_count = 3319U;
    msg.plan_size = 1604707159U;
    msg.change_time = 0.7026594380537423;
    msg.change_sid = 19970U;
    msg.change_sname.assign("NAZHGTTOTAVXJOBLXFFLMUIAMBOWZBUIEYNKUZTTZEJZOOSMO");
    const char tmp_msg_0[] = {-8, -123, 114, -89, -63, 98, 116, -78, 113, 77, 22, -120, 80, 32, 99, -63, -3, -38, -110, 33, -115, -35, -48, -35, 121, -44, -5, 116, 64, -63, 23, 17, -17, -116, 32, -23, -97, -54, -95, 27, 122, 46, -86, -41, -29, -43, 4, 27, -13, 94, -23, -20, -58, 30, -98, 28, 71, 111, 57, 99, -12, 86, 11, -104, 115, -92, 125, -60, 27, 12, 20, 40, -31, -109, 108, 15, 95, 41, -48, 58, 82, 15, 14, 90, -21, 70, 26, -64, -118, -56, -77, -37, -33, -104, 39, 111, -127, 99, 19, -29, 118, 75, -59, -40, -6, -90, 0, 10, -95, -7, 85, -65, -65, 125, -36, -112, 38, 67, 110, -41, 113, -37, -66, -79, 60, -123, -63, -22, 25, 81, 125, -39, 31, 11, -19, 48, 77, 58, -14, 66, 76};
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
    msg.setTimeStamp(0.665489515114787);
    msg.setSource(62242U);
    msg.setSourceEntity(99U);
    msg.setDestination(32756U);
    msg.setDestinationEntity(69U);
    msg.plan_count = 7937U;
    msg.plan_size = 1077280620U;
    msg.change_time = 0.6118341238643371;
    msg.change_sid = 36237U;
    msg.change_sname.assign("OGHTONDSQGCFUYMEMLUXDKXFIISTSKKKIMLUFSWEVXQYTQACRZQUYVLQARYYPWSCYCXMODDRGVWEGVOOAHBXTNWXZQECAFNZRDKMN");
    const char tmp_msg_0[] = {-125, -11, 69, -122, 3, 29, -37, -119, 88, -18, -89, 116, -39, -16, 87, -19, 19, 118, -119, -2, 100, 56, -34, -55, 124, -15, -64, 65, 16, -106, 59, -76, 75, -109, 100};
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
    msg.setTimeStamp(0.7215651658944818);
    msg.setSource(8358U);
    msg.setSourceEntity(166U);
    msg.setDestination(1346U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("VJMCVEXJLJDEQWKLALABACXSAREFOJSCFMSOMDTFCLITXYOOKEPZCWKVCMRUAADQURYRRGNGMJA");
    msg.plan_size = 39041U;
    msg.change_time = 0.9155523484921019;
    msg.change_sid = 65305U;
    msg.change_sname.assign("FZEOFVXGTGKDRZHBZYPJKWSWEYPAXRWGAHWHIEQKWN");
    const char tmp_msg_0[] = {79, 58, -38, 119, 115, -27, -48, -77, -22, -7, -28, 92, -50, 78, -89, 102, 83, 79, 119, -127, 50, -104, -83, 122, 40, 3, -38, -101, -9, 34, 65, -6, -26, 61, -44, 25, 90, 113, -82, 104, 36, -108, 57, 90, 59, -113, -24, -123, 5, 77, 17, -71, -108, -67, -80, -32, -125, -74, -49, -106, -78, -108, -88, 45, -27, 93, -98, -118, 60, -80, 113, 120, -22, -48, -100, -14, 81, 25, 10, 80, 90, 108, -99, 83, -86, 40, 45, 26, -9, -97, -111, 56, -108, -98, -104, -13, -47, -123, 49, 121, -53, -69, -98, 125, -28, 47, 60, -81, -12, -18, -59, 27, -10, 102, 78, -17, 99, 77, -72, -120, 68, 105, -11, 109, 75, 21, 10, -38, 46, 119, -25, -120, -117, -30, 118, 8, 76, 82, 12, 72, -39, 70, -29, -34, -44, -86, 102, 70, -92, -79, -39, 39, -41, -92, -93, 60, -73, -92, 50, -71, -119, 110, 119, -11, 39, -22, -87, 16, 15, 12, 28, -119, 82};
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
    msg.setTimeStamp(0.5836730268319777);
    msg.setSource(9155U);
    msg.setSourceEntity(196U);
    msg.setDestination(32254U);
    msg.setDestinationEntity(201U);
    msg.plan_id.assign("KVQCLFPTIDPQABNLYCSGOQZHPEWUKZXRPRACBAWWGFHMJJWFXYLNGIFAFHFNPEOKZXQQZTAUBQGRHUSUCYVZYXFDITMWSXZIDLJKASUHUYVLRDDEQCDJDVGWIVQNEJLDRVQTGEPMSVSMG");
    msg.plan_size = 40742U;
    msg.change_time = 0.16261513367501557;
    msg.change_sid = 63266U;
    msg.change_sname.assign("MATZMMICVMNLLOJFUXWRXXJZGTHYIMLJZENNKOIBSDPFURDTMXUUFQHBQKAQISJIFCDAUJWTQUGRIHGGSDHHOHPORYAIBDZGRVKCSGOWYZFPFCQEBLZNGRUMEVXWNSWEXHWDJLSMGSLJNKYSUVNPBKWJNLCMAXKHJALDTFV");
    const char tmp_msg_0[] = {91, 8, -36, 2, -15, 58, -1, 78, 7, 86, 99, 85, 10, 82, 68, -29, -123, -123, 16, 119, -32, -13, -52, 98, 2, -109, -87, -7, 99, -28, -106, -82, 44, 9, -58, -20, -9, -97, 123, 80, 98, 93, 0, -96, -71, 15, 73, 109, 51, -59, -109, -89, -36, -51, 68, 26, 67, -81, -60, 8, 27, -98, 86, 46, 121, 82, 24, -43, -115, -35, -88, 50, -74, 89, -15, -83, -70, -62, 107, -13, 48, -103, -121, -73, -106, 62, 8, -13, -84, 107, 69, -105, 94, 61, 15, -7, 96, -20, -12, 16, -3, 114, -61, -60, 90, 105, 100, -88, -54, -21, -70, -113, -111, -77, -29, 52, -126, 100, -48, -85, 42, 5, 26, -103, 113};
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
    msg.setTimeStamp(0.21727480112945874);
    msg.setSource(29288U);
    msg.setSourceEntity(215U);
    msg.setDestination(43683U);
    msg.setDestinationEntity(117U);
    msg.plan_id.assign("AYNTJIANAPWRJHVCZCWGYIUBJDWCDXISXCGLODUNZGEYOXDQUDKZNSTPWRQASFPMGVDZFBBIUYJDWSLIMEOXQKKYBAJLSBFIROUHQYECHMLLPVWAGVXGDZWEME");
    msg.plan_size = 61857U;
    msg.change_time = 0.17920804452154282;
    msg.change_sid = 39446U;
    msg.change_sname.assign("NDQFGCPKAZJABQWNOWYHQFZFARKPJLFLHGCHTWOBXIGITUDLLYUGOGPASKEVSBFIWETKPQWEXXIDUGYTPNADHBYKAQIMJPLGEZJSXEPKYYMOZNXACQSTUZATLCQU");
    const char tmp_msg_0[] = {-70, -65, -64, -14, 41, 32, 98, -8, 85, 61, -4, 29, 121, -93, 84, -88, -65, 6, -28, 124, 73, 33, -63, 31, -64, -104, -86, 37, -17, -94, -72, -93, 94, -95, 72, -83, -57, -112, 66, -70};
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
    msg.setTimeStamp(0.49677219047941024);
    msg.setSource(47073U);
    msg.setSourceEntity(205U);
    msg.setDestination(5657U);
    msg.setDestinationEntity(175U);
    msg.type = 192U;
    msg.op = 51U;
    msg.request_id = 8920U;
    msg.plan_id.assign("BQYHQUCPQVKMQDKUWWPROBMLBVESWZLLXGAANTZNTLDRDGJRHUGKBHBMMCDMMNDHBRUWMQAYZVZBXAZTPEQFETZXKHSHVIUSSUOPTAZXXOVIGBPGNKJDERDYQPIHUDJYUXDLIFLOCDCUOZMAXIGOKJVNQOBLVROCXRTCSIFWUECZEEWGCNNFFFIAEOPYONLVKQNLGTGSYJMRYSFLPJWPJGFW");
    msg.flags = 64154U;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 136U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("OGZDALPBXDCXFNVQYNCNSKXFTHOEICWPYYNUMJRTLKPIOWFVMYHRSNABUHPTUMOJOAKMQQXDZTZWQELPWEGAMCXMVYOBFLHSRPAGVZXJNGFFDRW");
    tmp_tmp_msg_0_0.description.assign("EUZGDPSGQFZFOIGOSHJLYVXAXCFNTLRVBZHMCZEOOXTMKBORSUEFFSNCICBELTDOJBPRPQTWBSMCWKACSLJVNEADWNGJNVCMUK");
    tmp_tmp_msg_0_0.vnamespace.assign("KLQDWKJNFTRMCDPLSEQQOIAXPIXFAZPNVXJRSTQOVAUYNOYAGCY");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("WDFZPPAFYICHODIUSKQXRUIOKSTSMUSITEHXDMAENXOEBZWNXDMGVDGOTLRECQNRAZCHVGWWGVFPHCAVVHZPNFUNMVKOUDIUPWULYULCIOKOUESXJCQHJ");
    tmp_tmp_tmp_msg_0_0_0.value.assign("ETVBOLJETXRMLSBABCBPLZRYGOINARNNCQPLUZEMDKJIROPFLDXITSWUCUVGPJPVCIUXDQDNFNHWVGAVEVKUDXRMTKTDEUYKYBKXSUODMZZWQSYWIWMOYLJWWHRHCPBAGJNRZBYUZLSFPVZTDPFGHSBQ");
    tmp_tmp_tmp_msg_0_0_0.type = 231U;
    tmp_tmp_tmp_msg_0_0_0.access = 233U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("AXRUMISELGUWJPQ");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.maneuver_id.assign("VDJABGAQLWUJZJORNMWINYRBUNPHGEC");
    IMC::FormationPlanExecution tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.group_name.assign("PHYDVRJHUOSQJMTSZJSUEMGIRCUVXRTPKNHZJWYYEOKTNHUDYDAROUXUHYIQLFMWCOUMVRRIPWDBSPHTKVJLLXXKVUWN");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.formation_name.assign("EFCJOSFHFTLNSRUURYIILEYMAGTEJYRMGVUKBBMDWKHASCWXIGFZBVANRDXOMYWLHPZUCNKUZLDCSQLOXWDX");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.plan_id.assign("BGJOZNGHWHMQJCGKOWDNLEGFUAQDHELNWMSJIIPCKNTUVQYZYVXXTNGLHDKHOAXIMCRIQSVWGTZWIXXBPPGZZCIJSCWMYIVQREJPIBYZTNPPABYTVHJYSEUQHRBAOYRSAAAUFSNDDBUMVUACSENWYTEDSXVLFLILCQRCJDFZUIKKWJSHDPAPRNGFXXWOLMUJOWJDRMECTBOZEBKKFRTAKUPQGPTVLFMLGFFVMQCMXZXLEQOORRBVHNYFUHB");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.description.assign("ZOGTRHOURJDZSHFPCEDCMFHZWVIKEONHAETLUVNEAKNWSJSXKB");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.leader_speed = 0.6860536673348036;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.leader_bank_lim = 0.5386325146216474;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.pos_sim_err_lim = 0.3774390457631158;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.pos_sim_err_wrn = 0.8499402899402959;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.pos_sim_err_timeout = 1370U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.converg_max = 0.9458411620484192;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.converg_timeout = 65225U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.comms_timeout = 1236U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.turb_lim = 0.8437679923561294;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.custom.assign("ENOOQBCDXDJKJLOPYWLAJAUYVXVNTQDXKSGCBYSBYXMFXURWPZTRKXOVFC");
    tmp_tmp_tmp_msg_0_0_1.data.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.source_man.assign("CZQBWMSBSVFDHUXN");
    tmp_tmp_tmp_msg_0_0_2.dest_man.assign("SQABTTWDARMGNOPKVTFNDWCUANBJDEIFQPDUMWDOZOTGFBXUZFJJBYUKMXCSLGJYTKETLSLWIXVSNAOUZFLLKXNNYXIFRGKOVEGGQEAEMBQKAACOUXXFTVYRNPRVIIWFNJPRPVUCVDLDOSCSNLKHFBAOEMCQWZKXMVIIEYBJLYBGVNOQDMHQJBZWEEWXTOTHPCTRYSZRUZGUQKUIZQZCWBCYXMYJHGPSMRPLAPJHRCDSZMDSJYI");
    tmp_tmp_tmp_msg_0_0_2.conditions.assign("VSCFJXYSPMXOZRJIIVFZSOTKDRMQOKZCPWVRIUNMDKJMPOVIXGQLBCDVETWDVHSBRZFLTAPILHQBEJGXPSSLZSZBBWQGLDTNUEWJQVNWTAOUHBRXEESQOGEHIFKCGZLYEGKYLPUHYJSBNYFCTTAGVNDPAKPYMZMNASVUDWUNYJNJKQMRTQBZIWXIRAFEXDYUFLKJUODWHQZFGCKJOBUHHOWAHRFTNTVMCPMBPC");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YZMTWSUPURJZPNCIJNTKUVXPNTXJIJEMMXFDJOCAKSDJKKCIMEPVNCBPMTBEAGMVRBOSRLOGBSQGLRSB");

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
    msg.setTimeStamp(0.4947842424688623);
    msg.setSource(26059U);
    msg.setSourceEntity(65U);
    msg.setDestination(5405U);
    msg.setDestinationEntity(71U);
    msg.type = 80U;
    msg.op = 22U;
    msg.request_id = 11985U;
    msg.plan_id.assign("EUNDKTLRQZPAVEFLNTMNMSEAGKSXWYQMDYJXXQZDJIMGSBZEYRQPNAOMHINVOIOOTKTKYCCRRWHMWALCFYLWMTAXGTHVZIWLVWJEWTHELCZWXGDRBJBAUOIRRJUUASUUPPYTDHFFSNNCCQVBRBXBOJOBAKEFTPCFIEPNLDXLVEQWFPCOIIXQYMDSHKUF");
    msg.flags = 17075U;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 162U;
    tmp_msg_0.entities.assign("PFIWSGFCOPZYLTWMPEXZZKDOFGGVUOUDOXMMWFYFGKQGZQDCRLVDPLHKIIJTLVBTTAELAICHPXHBQQDNPYSJUUXBXQKOANJNHUYTRONBLAVMPQVCKKANBHELIBQAMEQTSXJLCEUPRDBXDCQFGHYJAIJGEJWRRYOTWSWDEALKZCVIKVAYUISXTXVNTFSWEGJOHFRBAIWVVU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DWSDYADDJMJDBVZSKBSWTZKKX");

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
    msg.setTimeStamp(0.5381431557167068);
    msg.setSource(37944U);
    msg.setSourceEntity(134U);
    msg.setDestination(28283U);
    msg.setDestinationEntity(148U);
    msg.type = 253U;
    msg.op = 108U;
    msg.request_id = 21604U;
    msg.plan_id.assign("LEQCBLGFLDCNIROADSOYKNWGCSXBLMRAJRPNGOSBHPRWVNXVCQBRPHEYCSSLAYUKDIDHKNGZWSIFJWVLWAGWDIFF");
    msg.flags = 58123U;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("MMZXXVVDCETVUJRUXGBHNBWYTSCZGQBJKMYJBKKYHQOHGTPUEXHHANDOMLIGJOTR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KUIPHGHQNLNKQJDSHILPVZBGWDUFDMELUCJRBWJULHAJTWBAQYGAYHCOZEFOZNZXBTMKZSKPTFRYIMJQNFNDTENKMTOFWQXLPIRMBVYVBWZXXZAWJYRCDETYHAMUCRLKDZVDONQSIVFLBOTQPSESL");

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
    msg.setTimeStamp(0.3127866803673558);
    msg.setSource(6835U);
    msg.setSourceEntity(242U);
    msg.setDestination(27166U);
    msg.setDestinationEntity(186U);
    msg.state = 28U;
    msg.plan_id.assign("LEQJPDZEMVKMWXQAUKCNGSFTTVRBRJWMQLCEDJIQOSLDHOTIIGVMWZAYBNHLAWGTLZXDPKWUEDYIGQHRK");
    msg.plan_eta = -1009788077;
    msg.plan_progress = 0.14757378538543975;
    msg.man_id.assign("HOEQKNDRSZWJIHHTGYKZLBZJEVCYXLMUPOXGDNEEHFZEHVOXSUZHTCMDBBFWNVNFWKXAETQUISIIUHYIYSGMCZVGTMJQKLKPMWUJPDJJFXRWORQQINCBMENBLQWNYAHULASXOKJFYSKR");
    msg.man_type = 46189U;
    msg.man_eta = 176036777;
    msg.last_outcome = 106U;

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
    msg.setTimeStamp(0.9631916513247784);
    msg.setSource(24437U);
    msg.setSourceEntity(199U);
    msg.setDestination(41621U);
    msg.setDestinationEntity(16U);
    msg.state = 138U;
    msg.plan_id.assign("VPLWCYBNCYFSADIILOTZLRPLGFVTGBXYPVVDOSHOVEYNWIUQWXBANEOADYMTPCFPCQLUVPMKRRPZXQDSHRHYURKWSUUACKOFYQGNMAMRZIJPNJROYXKWUJUALZFXIHUSJAXFDTTHMSGHMECUIVFVNBSFUWCDOGBQVHZWRZLEGSXHWNQHCORKNLTEXBWEXSPWJDQBNFQTDDOEJIIEQBFMICYLMPSBLJTAOYNZAJKZ");
    msg.plan_eta = 958580670;
    msg.plan_progress = 0.822645042540934;
    msg.man_id.assign("KWLCNBNADZAJEMDUTRMXTPNKYXDRLETGSPHWPSUVPBTXHCDOV");
    msg.man_type = 20571U;
    msg.man_eta = 1272470264;
    msg.last_outcome = 246U;

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
    msg.setTimeStamp(0.6932226746587803);
    msg.setSource(31086U);
    msg.setSourceEntity(199U);
    msg.setDestination(6877U);
    msg.setDestinationEntity(60U);
    msg.state = 26U;
    msg.plan_id.assign("IIABJVETZOLQVNEZGVCFUYHLTULQFTDJUFDNBMKKRCJCREANGCSUFOFXVGMPOWLGYGASDTIXKJVBDDTWCCUGRHAZZHWMRYPUFTERVHOCTXTXF");
    msg.plan_eta = 4120451;
    msg.plan_progress = 0.31929517179245437;
    msg.man_id.assign("YHLXMFHEIQAZUNLSXKLTPAVACOSWMUZITYGFQEFQPXUPCQTXKBSOGZOHBBGVFVMHRCPXBBKXRPLNJDFBAMZMBJAEAAXXHONYXNDRJPLLRVYIVCKZUYELUDSOJ");
    msg.man_type = 19828U;
    msg.man_eta = 2032937881;
    msg.last_outcome = 198U;

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
    msg.setTimeStamp(1.0480678536262111e-05);
    msg.setSource(48401U);
    msg.setSourceEntity(250U);
    msg.setDestination(8474U);
    msg.setDestinationEntity(118U);
    msg.name.assign("DGFKEYNDOZROORQPIAPSQTIZYJTRWZLEVSISMGLYYFUTHCBNECIACVSZWJPDLKUZDFRQZNRMKYGQLDDXMWSYCIRBTBUWYBMXJKFNABSPELHPUVCOQSULOAEKENGISUFRUWLVJMGVLXICJGQWSXZWJTATZTRFUVNXMMIKUWYCMHOEGMDNXSODBELNQNFJBPVPXGBLTPAHIOMEKOCWEAHWCAYFIOYVTADF");
    msg.value.assign("QFFUSFJZHHUSEPLEQFMQHVWIMZVIPZNAWVHPCAGRRCCMTLIQTOXINFSAGESFCOHLMJNIQDKSIGFBJOUEBDRNDEBRLSYYFYOTBJKDNEXVJZQWNJLGIKEMHPJHHIJHTEQTYKUBUMRRDNJDTCUGLMBVYVINGVYBSOKBDQTOXVWZLTVUDZZPZPAAYWDOKJYCTZPSHDABFKGOCXKMBKZOYWQXANKXGREYTUWAMCPRSALXIORPUNRVM");
    msg.type = 130U;
    msg.access = 180U;

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
    msg.setTimeStamp(0.21080372937304248);
    msg.setSource(57324U);
    msg.setSourceEntity(39U);
    msg.setDestination(574U);
    msg.setDestinationEntity(229U);
    msg.name.assign("HZKXLJCNQZBYSOBWVZMEKWOCAHVVFIDBWGCAVXRAFDWPOEADJESRCQPTGEYZZUBPFKXQBYSPHMQVTEPKEPAMRYGJMSHZJNHFEUJURLTEKHAAUM");
    msg.value.assign("CHGTOCZORJSZUYGFLXBHDYJPPVNAYLIKWAAVKTMBRXWWUYOAYCTNOKZLYMMVOVBLSMOAWFHRYQSEVQKVXCFBJFQEQBROEQJ");
    msg.type = 191U;
    msg.access = 39U;

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
    msg.setTimeStamp(0.3563570611471112);
    msg.setSource(48435U);
    msg.setSourceEntity(88U);
    msg.setDestination(44563U);
    msg.setDestinationEntity(172U);
    msg.name.assign("IXLZOAWXZGSKNWHHJGNBGOBTWAYRTQFSWAXUEJDYPHQEBMIMUZOFMOKSVGUYTIXJBAPKWIWTXTCCPAGVYHDDPQRCF");
    msg.value.assign("XFGRTFDQOJBXZMFSQCFBBANBSUMYIQHJEDLIZVMOQWYZTFINNQQIXTLIDCEZGNXUIVPQCYDZVBKNXLIIJMTARSKMCFPUKWQROJBHAZFSOHLLNXJJWVHCZBZPGRYNKPEKLPTMEVDVCTYMNCCHTWFWRBJMEJLWRPNXAGSUHAHHKSBJUKIPXQKWCFBARXKDAGODAQHNFKAJYTPSGZOXPUSMEYYLPUAICOWYOLLGSRGUVDDVGDOV");
    msg.type = 106U;
    msg.access = 247U;

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
    msg.setTimeStamp(0.39293389971398285);
    msg.setSource(44895U);
    msg.setSourceEntity(156U);
    msg.setDestination(10630U);
    msg.setDestinationEntity(61U);
    msg.cmd = 249U;
    msg.op = 250U;
    msg.plan_id.assign("EPSIHPBBFLQKVNIFARUYHKWOUSSEMOPYNOCRSMRFGNTBHWXOWLEMYREVNBBMLBMDPOCNLWVUKLWDUDGXGGJVHMCMZCTXWPWJDIX");
    msg.params.assign("RCYCDPUZGQXYXQYIXDGAGHOJODHDWVEGJGZWEUVVUSOZALFSDPCTLVMJRWHNKNUYRMRBZFAIZZMKXNPYYHWCBAHAYJXFRBQSHOTCMVQRBLRSESWIMBKNHSFMLEDLJPWISKWOVLMWIZGPEXWQTUDRJMOXAOBZSUBUI");

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
    msg.setTimeStamp(0.2136097850947506);
    msg.setSource(16717U);
    msg.setSourceEntity(53U);
    msg.setDestination(61220U);
    msg.setDestinationEntity(76U);
    msg.cmd = 27U;
    msg.op = 145U;
    msg.plan_id.assign("OLZDQLOEXJSDQUBLFYSEVPGWYALPONYKCHBCTOSOTKYIYWOSJWGPFVPYWENCKXGDNAUCOXKEXZRZCVMNWXZNPZRRADAMTQJHQDULZJVIHYDBKASJUEOWSNKITUDBDQQPSCNHKVMPLSYVKUCNUBLGSGWHEIPLDTRJILWQHGUIZXOXFGSTHCRBQXBMICFMFFMAGTMAGXVKYFHPFIMFGZBTFJNUTEZORMB");
    msg.params.assign("XBYOQIHUBCNHDSDKLSJRQTTLVZATQYGHKNOHVXXFYRWGPEBYNLUWMIBOEJPBYSDQXXFXGMURDBECQNNTYZWSTDPORNZEJPJISLMZGMGMRMFICR");

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
    msg.setTimeStamp(0.20406213199997802);
    msg.setSource(34165U);
    msg.setSourceEntity(92U);
    msg.setDestination(56686U);
    msg.setDestinationEntity(158U);
    msg.cmd = 153U;
    msg.op = 45U;
    msg.plan_id.assign("QESHBHQTCUOQJVTVKVLOBDAXEFMWNNPRDFJVSCZKVCZGTHKKGTKKPYFLMFLRASSHMCJEIHVGMMJFNXGTQZCMVEILRUDUUBWZFYYJMKRWJINHZXDIJJSOAMWCAAKWNUBNPIRTSVKGCOYEPIERXPPQPGLNYQUDAQGXAWGYBSXZCDWEQDLYRKTISPHLGOHNBAIQUPVBTJXZLNXUEYREZWCZQJUXCIABWFNORHVTMDE");
    msg.params.assign("LHDRALKYXZWCPECWRZBDZEGDJQDVHDQKRSRZEIIWZFVXRBMUAMIYOOUVFTQNAWDWJZVLZVXWXHGZGAIDSTIKXTJULIYMHYARFYOLLSKTEUEHZFPMPFTQRVPJCYRRMLJKXIFDXECUNKBOMNQCSYKNVVAQSPHLPREUHFBZG");

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
    msg.setTimeStamp(0.43396714470047093);
    msg.setSource(53754U);
    msg.setSourceEntity(27U);
    msg.setDestination(27351U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("IYMBHIZNUMNLGHEQJKQNBFLLMYXCGHDTHFAXFLXDWTJKRQPYSAXXRZDVHVGBUPIWFBZUWIABESGGMSFLDDTBLRYKAUDEEGCQSPGMCETWNA");
    msg.op = 6U;
    msg.lat = 0.8643981739961173;
    msg.lon = 0.11529626964532047;
    msg.height = 0.4052479096919479;
    msg.x = 0.6328365218411686;
    msg.y = 0.8038082816867033;
    msg.z = 0.52525505667191;
    msg.phi = 0.23728769753609413;
    msg.theta = 0.6311264794263123;
    msg.psi = 0.4702368485988504;
    msg.vx = 0.23493689927842387;
    msg.vy = 0.887426886549921;
    msg.vz = 0.35581214035055453;
    msg.p = 0.013016021238152153;
    msg.q = 0.28004347420810005;
    msg.r = 0.8794891207397999;
    msg.svx = 0.4589779258831508;
    msg.svy = 0.32033540302685937;
    msg.svz = 0.9342241954621213;

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
    msg.setTimeStamp(0.251817539305803);
    msg.setSource(40639U);
    msg.setSourceEntity(78U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(219U);
    msg.group_name.assign("DFEJPGFBZILTCNVOJPBRWXSDZAQCWZTEAKXHLGDBDUNISFRTRZIKCSGAKWUYURRZYVPKFJEDJHNPTVTENXYGFVHDOSMQOIDFUMBLVNHZLBHVZMLWYFAHNRELSPEUTMCCBBTESXDREAMIWPZWXFVHWG");
    msg.op = 195U;
    msg.lat = 0.411078477497797;
    msg.lon = 0.9902471020715577;
    msg.height = 0.18398623795136204;
    msg.x = 0.7279500911971379;
    msg.y = 0.6341541840839873;
    msg.z = 0.12123384365454626;
    msg.phi = 0.28621674871874314;
    msg.theta = 0.48962489667324904;
    msg.psi = 0.4922163351160673;
    msg.vx = 0.8957103914870532;
    msg.vy = 0.15605504882204646;
    msg.vz = 0.15912559628422285;
    msg.p = 0.12327198317788424;
    msg.q = 0.4442894245724419;
    msg.r = 0.01645934499470958;
    msg.svx = 0.8626457616610846;
    msg.svy = 0.2308654151382129;
    msg.svz = 0.9262402151179628;

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
    msg.setTimeStamp(0.49843026389697265);
    msg.setSource(45345U);
    msg.setSourceEntity(170U);
    msg.setDestination(7457U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("CGDUXTEVAEHCNTTAZQWSFLYMYXHFMHDXUESYBELODWYTXBPFKZHOLZTRMQUW");
    msg.op = 145U;
    msg.lat = 0.4154723620339955;
    msg.lon = 0.3721051227114285;
    msg.height = 0.6158016877644652;
    msg.x = 0.22276927358032528;
    msg.y = 0.9722455133372353;
    msg.z = 0.7620221908591018;
    msg.phi = 0.8781812176551252;
    msg.theta = 0.13422550458118454;
    msg.psi = 0.4462533330682178;
    msg.vx = 0.7255864087146962;
    msg.vy = 0.28376885114043804;
    msg.vz = 0.9225222751791241;
    msg.p = 0.008783283472226011;
    msg.q = 0.748161709319803;
    msg.r = 0.8459950162762309;
    msg.svx = 0.6179390755873463;
    msg.svy = 0.14312524338650934;
    msg.svz = 0.33452121064253426;

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
    msg.setTimeStamp(0.40859455995234506);
    msg.setSource(25650U);
    msg.setSourceEntity(130U);
    msg.setDestination(52890U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("NVKLFEZAQKVMPDMHRPQMYKGUEMIHHRDMPTJSCTJGQRUTUUNUCRCNIEIIMNEFZTUZLVOGLETZXCARVUZJNWXYVECEDDKNBYPADTBRGLGJXWOXRHVPOFLUKYVJAIKYOTZP");
    msg.type = 45U;
    msg.properties = 44U;
    msg.durations.assign("ZKRGEOIOLGFHWPKNSYBAEYCWKRCJQJCDMPYWDXUIRZUJFTQSFTGCKPRCEYBQPECJELYUZPMCDUNIJJPRVGX");
    msg.distances.assign("ULEJDPLQHTITWDONYCYZOFYYUNVWVWNHFXUQPXGJLDRKOZEDWTTKZOOKCAFGAEDLYMCDQYZNJTKXKFNQNUWWUAYXKTPCAGBJIPPPWAVSMJDUCPHSHNAKIFMFXZQPSPCTNQJRHCSZ");
    msg.actions.assign("CBHIOTFBUPJFPZYPQUXJMEMVXODHOBYUCGRNLQFGYQTDOQEUHZRRRTNROOBVQ");
    msg.fuel.assign("ANKXTKDHJGBPNMKSVQFARIPSPWJUOLIFXIBUYWUTWITFCJUFAQVMVVENIBRVBTDXJFFQSKDLECDCGLAHIGVJNWMBBZZOCEDPRQDMHHZQRVOQXPRNUAEMRZJFEKOLLGPITJLYARRYYGPWCNJOCVUCEYCRSNKUKZLDGNIGIDZUYYXLBKPOUNXSOYLBQSFBGDYMMXAEEPWZVKDHRSOJOFAFNOMEWAKHMEYTIUXAZTQQZGHJXLWB");

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
    msg.setTimeStamp(0.257966073807247);
    msg.setSource(59079U);
    msg.setSourceEntity(236U);
    msg.setDestination(22608U);
    msg.setDestinationEntity(146U);
    msg.plan_id.assign("JUBCEDAIXOCNYOMEIRGZNEJNQZRTMWHLGUYTCQKUWVGZBJJQBHTWTPGIPIUISXGLSSABTATVLLNCRDKDMDAFTNYUZUAWDLVFHTPXVMN");
    msg.type = 237U;
    msg.properties = 11U;
    msg.durations.assign("QYURLOYHUDEFLPQEUQFNYKOBKXPOHBNIZOOTUCVHKUDGVUDHDECEWFEFKSXQXYNABTYCVWBRVUYIGZRRFLNCDLXKMMHDDAVLXOASNSTAZNTSTZWYOQFULMAZGNZJXNKYGGPEZSFTQHCOXSQRPRFPSPJJPBHPKJLDELGCVOBWHBCUZ");
    msg.distances.assign("AZXSVKRADOKDX");
    msg.actions.assign("WARURBLDTTZGZDSVQPVXSYMDCTZLFYLMHBDMEFKOVYWLUKZZKJICUTIRHUHRYWPPJDFNUPVONXIQJOAKGBMNOHNLNWFEXEXPZAZ");
    msg.fuel.assign("UNYLFFQSHCYUVFKLPFUPD");

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
    msg.setTimeStamp(0.5434829601590709);
    msg.setSource(58856U);
    msg.setSourceEntity(192U);
    msg.setDestination(15320U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("EVIIKEBJXQDQBUONJHEXMNUMLWSIDSPTFOJAZRARMNPCQUEWGHFZTKTAHNVNPJWZWCZWEAAPVUYJJMULWKVIYNGXOFPVDCTKPRZGUXHQRHQWQHTBMIKLQSGHXATCFYCGVLMYMSWXKJLOYLVUKHFANKHVDOSFNDTFLUEFXDDRVRJZXDLZMCYBZUOCSGETQESNVGABRKPNLUXOYCYIDRIJS");
    msg.type = 61U;
    msg.properties = 105U;
    msg.durations.assign("XTFLJSKSQBGPFGWMGNDHRANYHCRKLKEVICBYSGVPPDIZDLFKHNOWROFMTSLIUEJTUNUYKFIZAEDHUJALCNEGIITPTZPKQRFVUGEXKHQATBFRXMTDBBFWAZSXPOLAYWDJICXMBKHXMUYNSRZGRJQMOWZNQUOVTNSXAVGQOOVFRSPCRELXQOMICUBOEZNYHZYZNJQPXYHRMXKLIUJSAGUBKCEHVCAEPLWDDVDJWFIPATDZLCQEVM");
    msg.distances.assign("TVFDQJPESBGEWYUHTLKRBQMKWMLFNSETADYPVYEFD");
    msg.actions.assign("TUEQBCEYXNGGGFRWRKDCFZMHPILSDNDSMKNNWNMNFVOICHUAZPARIDYCGEPFBECZVGTURQTSVLXQUCICUJHGJHKKVYVTQXUTDTFWYRLOLBGBAPPHYWGWQWYYOAZIWZZEHPZELIFUXQSBKQORTCDIVQAAM");
    msg.fuel.assign("UYDIMAKQIVTBGVLBBYDVWUXONKTXSNCELWPTVJILAWHMYYGCWQWHIPZGQWXIBHSQKJVXVAEGDELZDDINUJZFHPZHMNARXJDGMKPQQFMOBCYTOLSCWZRFUTVFMEXSSUQDCSSLQSZOOOFDOTIYCPRLVKEUYIJBIYTUKPWDPJEAIESFSPERBQAOHVANEFFMMTBZACYGRZEKFWWZBNNTLMKTZCQRRBKPXXFXUNLGNOPJAHJRAGRHL");

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
    msg.setTimeStamp(0.6624724059877916);
    msg.setSource(21381U);
    msg.setSourceEntity(204U);
    msg.setDestination(38611U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.7174228253829501;
    msg.lon = 0.8901748805071211;
    msg.depth = 0.5922991644283592;
    msg.roll = 0.2358064649858692;
    msg.pitch = 0.12365787053463595;
    msg.yaw = 0.8929775871668318;
    msg.rcp_time = 0.24123877787136017;
    msg.sid.assign("ACIQQYFPVEYUHVGLAZOELAEDJQFPFDZIGODXIHQHVEAQBCCCISYKDKGHMAFWMYUEXVEMFNYFHAWSLPQJKLMIUGTDROLRTJVCYFYBEDYOLZWUZWUNCMIALJGASUBUTOWSZBPNAOALVYKURDLJSZDNIYEGXDRQUTBKXGRRMXHCDQNRKWMIGBTJBPOEH");
    msg.s_type = 39U;

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
    msg.setTimeStamp(0.2179419092352326);
    msg.setSource(1574U);
    msg.setSourceEntity(144U);
    msg.setDestination(63958U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.42907567077434816;
    msg.lon = 0.7116351963790843;
    msg.depth = 0.9276259564038237;
    msg.roll = 0.4878394170546282;
    msg.pitch = 0.05825182845193955;
    msg.yaw = 0.13598626381400425;
    msg.rcp_time = 0.02906934160756347;
    msg.sid.assign("GDFCYMAQVBVCQDVLQEXLYAMGVUIRQQJIPVRLHRYBKXUOPKOCIHBMFEBRYMODKLQIGMFGTWLCUEKMLCEOJKDSHUQAANJLBFZ");
    msg.s_type = 126U;

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
    msg.setTimeStamp(0.7785481265074535);
    msg.setSource(13693U);
    msg.setSourceEntity(18U);
    msg.setDestination(9983U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.005601027982655826;
    msg.lon = 0.12973715046253143;
    msg.depth = 0.2228168740302212;
    msg.roll = 0.7470511112861866;
    msg.pitch = 0.5604773908820465;
    msg.yaw = 0.2265077608184527;
    msg.rcp_time = 0.1983836697086937;
    msg.sid.assign("XELIVIQCSODIJXKFWKUTJWYYQKOCSGHZYRVBJCVZJMGOVSPNLKMFPCZBOUWPPFSPGHBQUYJNEVGLXISEYQRTHMTNWXOXQPRAYCVVUTQHZCKQGLKWEGDPHIEFUTDBTMOKPLDUJRR");
    msg.s_type = 2U;

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
    msg.setTimeStamp(0.08396763530373741);
    msg.setSource(63304U);
    msg.setSourceEntity(53U);
    msg.setDestination(2593U);
    msg.setDestinationEntity(240U);
    msg.id.assign("OQBUJICEHVEXCSFZFBPXGYCDROTOJJONCLWBCNZCKVLFTMJFZKILXHRODPXWRVUOYSVJHKLCKEUJHNQAIILJDUQZZPNGVXAGVKTHJSMHEASYYYCPG");
    msg.sensor_class.assign("WSZSVEPCOXZYOFXBCADKBASQNXZNTPMMFUDDGPQTBZTIRXJYEUJWNONTIMZJHJWFIEUVWUQWBQIPMNNFWKDHYFSVSVEWZBYEALSHGWYIHGLKTXRXQLOJNDOGFCKOTAPIEHUBHOMDROTABOKAABXKDWGULYLDMYYWHTRBVIHGFEMRCSPQKYGHPSZAMNLZBXJLOZCISCXVJLCDJKSHLVVNDQECPNEC");
    msg.lat = 0.9365108655687059;
    msg.lon = 0.29926528607182035;
    msg.alt = 0.07533617805070925;
    msg.heading = 0.5826620522349198;
    msg.data.assign("CLZOXHKNSCTPNLOQYKSDSEDRILPOH");

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
    msg.setTimeStamp(0.876684118085309);
    msg.setSource(63651U);
    msg.setSourceEntity(253U);
    msg.setDestination(52245U);
    msg.setDestinationEntity(181U);
    msg.id.assign("BLZQZDGWYTDWRZIYQOBROYJQWAPODNCMHKUNTJZQSZCGKBNKXFENQKUYKQWUPTEXAMPVOTTPKXWHAEWHJSDRMZGHJEAXLSIFSLICRGVQMXMTTXEGUCISXEMTLFUXDURZFBNRJYFZESMECKYNGDLOEGGMHRXBPQQPSRQPLEIF");
    msg.sensor_class.assign("IVLKUJXOWAEWCSGERIEYWRNZM");
    msg.lat = 0.04098722911192887;
    msg.lon = 0.6129893776788689;
    msg.alt = 0.9193225827483815;
    msg.heading = 0.03867831788505205;
    msg.data.assign("VOTEDUDQYXRANRGGLAZZTONNASFPGIZMXPEILEHLYTMJDDACWAIFUTRDUSRJPFTUCYEUQQRVHMZWBYCIBRMBZWNOGLVDMVMPCJFWDM");

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
    msg.setTimeStamp(0.36864420299872525);
    msg.setSource(7905U);
    msg.setSourceEntity(107U);
    msg.setDestination(52873U);
    msg.setDestinationEntity(61U);
    msg.id.assign("CBNBNTAKFZOSTAGPGFQXXFZZOLICNGRFXWSESDZJWLLGCSSIKXIBKYTUHTUCTGTOSZGBYLPWMAEQRCNJDDRWSUUDGDOSJWIKYDPJNHDZAOGYXGDCLQFEMDJRHIUVTYUNMREOBVXLEPXRLWMAEOKMPJERKMHJWEFKQFTUPWPPNJOHFWKPVAAYJQVZHDBYVUNRCFKIVGQMIEAHBOSUSVZHQQLOQPVCEJKQYTVNRXMBYXLMACIZB");
    msg.sensor_class.assign("KFRGFSRNLUJEVTYJZNIPHKAQJCECEMMWLHDRGYQMVYGLGFMTHIBZSIGMTDNTNSOF");
    msg.lat = 0.41979512343814174;
    msg.lon = 0.1663694789704251;
    msg.alt = 0.9412098907407316;
    msg.heading = 0.9746395948524509;
    msg.data.assign("JVDRPQTBPZMIPYNENWOEELUMCZRTATXKALYMQMASKGUEJTUJSIMVHOWSLCHDOZTOQEKNHIVAKCPZOXRVKLQTBXUIHIEXFFUOMBPCVOWZNFOFQLJBUITRXNZBSYSCGCRBFKXGFCIKMYYMFYHDHARL");

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
    msg.setTimeStamp(0.32421855378692643);
    msg.setSource(28873U);
    msg.setSourceEntity(78U);
    msg.setDestination(43456U);
    msg.setDestinationEntity(150U);
    msg.id.assign("SLILJXQPBEAFYZEQMKTZGITIWDTQAYDWE");

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
    msg.setTimeStamp(0.6704420590766359);
    msg.setSource(7234U);
    msg.setSourceEntity(127U);
    msg.setDestination(30174U);
    msg.setDestinationEntity(45U);
    msg.id.assign("LCAJVDGLDZPNYBEQZVHRSXQQPWWNYSSSFSRRHGOEIZCKCZARNQVWUBOFOMJSXBADFWIGMXTBUUUTQUIHJVOQLNAKHXTIQTJNBLKHYVJPVVGHYXVFCPLQCUKKGUHMFDQRKZEONLGZRCEDDCYRNWOVLJMDFCLTXIYJMLHDWSANUETWZAXDPPPXXYZQIFSBIHDEKZFTRK");

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
    msg.setTimeStamp(0.6821783747958655);
    msg.setSource(32219U);
    msg.setSourceEntity(226U);
    msg.setDestination(58527U);
    msg.setDestinationEntity(96U);
    msg.id.assign("MYRATOHEYOCMLSZFQFHJCWG");

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
    msg.setTimeStamp(0.6018845376859778);
    msg.setSource(60616U);
    msg.setSourceEntity(185U);
    msg.setDestination(38013U);
    msg.setDestinationEntity(64U);
    msg.id.assign("WJJXZFWKESFNZILMJGYCDNZJLTLQJDNYOQMVPPWXFOKGLDPYGPQBYZHFLQDRRDBVZDMOEKUSRCQTWEAVWYNJIHEBRRAZJFHVNGBSBUYGIKGLFWICEQRNWXILBMUZCKIHMASFHXMYSLMZXTOHGCPVYBGADCRQUAUPACOZVEIXPKHSBKDUHNTKETWDHBPWTXUATYQUIXXPYWEEMQMVQNGGMZAAOLC");
    msg.feature_type = 45U;
    msg.rgb_red = 2U;
    msg.rgb_green = 185U;
    msg.rgb_blue = 183U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.825022846385804;
    tmp_msg_0.lon = 0.8911732007131838;
    tmp_msg_0.alt = 0.41596405006562254;
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
    msg.setTimeStamp(0.9202501334808426);
    msg.setSource(49745U);
    msg.setSourceEntity(39U);
    msg.setDestination(45308U);
    msg.setDestinationEntity(238U);
    msg.id.assign("VGZMGRFYSKRMPRFTBLSYNPTRXUQKIOLYFIJSNKUGSQVHWBANLDOMHFNUTVGQNJVEAAYSJOVSAWIONYPQUBEDHAIJPKEZXDMJIJWTHRBAWHFZXSZROCXACCPCPFDUBTAFKTKZOZQGMNKLSAGZPIBITCLEXSWDEJYOGUROWHQVRWLOKJRDMWBLWAYGBHGYVTVBPUFEKXQPCLHMIHUMMJKUDXEYVTIFWEZSIODMCGPZJX");
    msg.feature_type = 72U;
    msg.rgb_red = 58U;
    msg.rgb_green = 148U;
    msg.rgb_blue = 118U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.35494836198162116;
    tmp_msg_0.lon = 0.17948355987701226;
    tmp_msg_0.alt = 0.6950243115782347;
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
    msg.setTimeStamp(0.5480997511620769);
    msg.setSource(10417U);
    msg.setSourceEntity(25U);
    msg.setDestination(47800U);
    msg.setDestinationEntity(3U);
    msg.id.assign("BNIWPZWQYQWHTNGHHWGUIRAKLECEBTMACNXLOJMFPVKEPMRTZMWEDJBYLIUKCSXPSIYBFDUZAEONNUYQRRZMBHOVZCDFGQUEFFRCDHGTQDQRPRVDZPEFJRQCWVYEHSCKNXSABCHWVNDOXLGSLNISBRENSPKDGSCUJWZZMOYGXUTQJFSTKKXVFWRXTQIDJEVKOAQJOFTA");
    msg.feature_type = 146U;
    msg.rgb_red = 47U;
    msg.rgb_green = 98U;
    msg.rgb_blue = 236U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4722876773979642;
    tmp_msg_0.lon = 0.953277774238444;
    tmp_msg_0.alt = 0.33725645763586354;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7997768356641307);
    msg.setSource(56040U);
    msg.setSourceEntity(68U);
    msg.setDestination(32760U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.6553214992991242;
    msg.lon = 0.5625450632383169;
    msg.alt = 0.4114559087160897;

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
    msg.setTimeStamp(0.8979351289239487);
    msg.setSource(39647U);
    msg.setSourceEntity(169U);
    msg.setDestination(32083U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.6984882133135745;
    msg.lon = 0.45252102894949653;
    msg.alt = 0.8435149150027776;

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
    msg.setTimeStamp(0.9790143310111632);
    msg.setSource(57155U);
    msg.setSourceEntity(7U);
    msg.setDestination(21412U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.02563451051918464;
    msg.lon = 0.23298734018462364;
    msg.alt = 0.3719854368732749;

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
    msg.setTimeStamp(0.9102339577565718);
    msg.setSource(50713U);
    msg.setSourceEntity(170U);
    msg.setDestination(54349U);
    msg.setDestinationEntity(27U);
    msg.type = 250U;
    msg.id.assign("AXVJLXDICIUMMWTEVPKIWWZSBBCEOTZNQGAQKNVOGGGHLPKBQDRIVMMXNZKEJEAKRUBGCDIWCJXWKFNASHGYEVQZESOPTLBRDJYQFLTPAGQXJIRFDMIAJFH");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("BSMKYHZJZOSXVTPGRDXSLLNFUORRSPOTMASEGMKQAZVOBCDSOVNQWWWHFEMTUCPIXOGWXRJRAJUKNZJPNUHKURAIPAQFFOGNLDOUYQQLBYPNPWZQRLAFUWLWNXJVFBEHPQZHVMFXXJSXENVKNXYWCEYTYCHDTQLITKSELIHBKBDWVBIDGUFRMLTYYTLVWQDQJKIAZVMEOUYUHGCCKAMTKMCBDDIIHPIRRBJ");
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
    msg.setTimeStamp(0.33742268591477687);
    msg.setSource(5558U);
    msg.setSourceEntity(93U);
    msg.setDestination(17903U);
    msg.setDestinationEntity(136U);
    msg.type = 52U;
    msg.id.assign("JDRNEPXMWLYJWRYPTBAHMYONIUCHDNVWTVPWWFFNGSFYCCVBHXMJGCLNSMSTOGAXMGIFKDROFSLBEHBZHVKEKBYKQZPIEVWZSPMTBUUIGCDITIFPLXZJIUMTOLDBZEDUGRTJDHEDMNGWLSSGZPXAMTQXQPLYAUOOVKUVAANJVAYVTZKQ");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 125592027U;
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
    msg.setTimeStamp(0.8946788752786701);
    msg.setSource(50634U);
    msg.setSourceEntity(28U);
    msg.setDestination(62146U);
    msg.setDestinationEntity(111U);
    msg.type = 175U;
    msg.id.assign("VQADMBYSNCOVOYNFEJILEJZGZXGREXUTGDPKPAKGWLCQNHVWBQJTHPCUQFMXBDGEEB");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 286687646U;
    tmp_msg_0.start_lat = 0.5590488186335476;
    tmp_msg_0.start_lon = 0.8650714074501636;
    tmp_msg_0.start_z = 0.9504268222960027;
    tmp_msg_0.start_z_units = 112U;
    tmp_msg_0.end_lat = 0.9639278570558167;
    tmp_msg_0.end_lon = 0.47774637188262503;
    tmp_msg_0.end_z = 0.040624408058750006;
    tmp_msg_0.end_z_units = 103U;
    tmp_msg_0.lradius = 0.32899167417423214;
    tmp_msg_0.flags = 8U;
    tmp_msg_0.x = 0.8356170516577531;
    tmp_msg_0.y = 0.5071163749665692;
    tmp_msg_0.z = 0.31441662978444374;
    tmp_msg_0.vx = 0.047544131556217284;
    tmp_msg_0.vy = 0.019947341704931287;
    tmp_msg_0.vz = 0.14788957321085272;
    tmp_msg_0.course_error = 0.19214213040137196;
    tmp_msg_0.eta = 43297U;
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
    msg.setTimeStamp(0.8765912141553308);
    msg.setSource(65221U);
    msg.setSourceEntity(41U);
    msg.setDestination(29844U);
    msg.setDestinationEntity(41U);
    msg.localname.assign("LZJDVLJCVLYRIJXVIFZXGUGCKXEZDHBSPXNADPRPJSADSOWUAAYECRIPXLBLBFEJVYFLPFXNMINRQKCIRHHVFTGDGSHM");

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
    msg.setTimeStamp(0.8515097420735454);
    msg.setSource(25254U);
    msg.setSourceEntity(82U);
    msg.setDestination(28682U);
    msg.setDestinationEntity(164U);
    msg.localname.assign("BNLKWTWCAEMSWRAK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LWGLMGAKARGHQEXUEIEJTVXNKCGCEZERAFOZKHKOSJUZUMELUDGTKRHVBRYWDNWOHOVFX");
    tmp_msg_0.sys_type = 137U;
    tmp_msg_0.owner = 60969U;
    tmp_msg_0.lat = 0.15947044603297034;
    tmp_msg_0.lon = 0.19310446308124007;
    tmp_msg_0.height = 0.8592640327285451;
    tmp_msg_0.services.assign("PNQMBJBWSAANSRYXOGQJRYNCAJWQBIJUBZRKWTHYIAZJXQHHEQDHDFEIWCMEBMMKQ");
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
    msg.setTimeStamp(0.4264904582576947);
    msg.setSource(29188U);
    msg.setSourceEntity(79U);
    msg.setDestination(26604U);
    msg.setDestinationEntity(207U);
    msg.localname.assign("ADYXQXLUNWJMPCFGHHNVKTKQYRZUYQLAOXWOBGQHGTGDVPXIVPFLOLDFYFMUIPTVVAPAKVOPXSUZFMXFEAIRWINZUCZMFKDLBJSEOSBECTOYHNNDUADYZOWJQRGIISMLPGHCBMEPMFRHVOHGTJJCNYQHZHFCBYUBRTLSJIKBZDKQOEVHRWWNBRRTGNSCABJESTORLPDN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OJVPEQVCYMQKHVPSQBLJDJCXEITUMRHWNCGEHKRKDOKQOJTLVWSRXNUBBGRRTQAWCITBSSGNDEZHUWBJWCAQEZZZHDZJXNYYLTQDDIELBWYYFCLJPGPCPSATGEVZZEWITRFONNWXITAHUWXJPIYABJLGDGZSHK");
    tmp_msg_0.sys_type = 93U;
    tmp_msg_0.owner = 1406U;
    tmp_msg_0.lat = 0.062131825691627784;
    tmp_msg_0.lon = 0.20135632096728195;
    tmp_msg_0.height = 0.11581598468478305;
    tmp_msg_0.services.assign("MDVAWIEUKLRDUACBBDLCPBLKTTXQAFRGEAHCXSAWXRQUCFDZLKHZCHBDYFYWUNTEKTIXSDE");
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
    msg.setTimeStamp(0.3117627194109547);
    msg.setSource(38133U);
    msg.setSourceEntity(72U);
    msg.setDestination(55595U);
    msg.setDestinationEntity(69U);
    msg.timeline.assign("OQFFSGWVHYFQOACPAKL");
    msg.predicate.assign("YECGDBYNUQCWRHPHKMMGFNXUXAWOPDDUHBEZFWRQYVSMWJXBDEENLDQKWLHBRPTNGBOQSFGIOVZNQDKROCZOLKJIEGQHXDRRFEXRFHDNLOFYMOTLHXVRUUTJIQWDAXWUHZRGERPKVKFPACEYJAPMJS");
    msg.attributes.assign("CQFYODNVZMHFERMTNBOBQGBJVQHJZXS");

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
    msg.setTimeStamp(0.5597506185143768);
    msg.setSource(37972U);
    msg.setSourceEntity(204U);
    msg.setDestination(9362U);
    msg.setDestinationEntity(8U);
    msg.timeline.assign("EUKSUOLCVGCAYJVZADPUMVFHFVGQQJRDVHCKPHBMBLVBYSCY");
    msg.predicate.assign("TKWJSPRZBZXHNCXZZZKLGJIFNZVNQUWCLHUWGEAJOKQIPFPOXZC");
    msg.attributes.assign("FXESVKDAXJCVLZFXSRIVXMOXCDZYSLJTBAPHLKLVWIMBMAHMWWKP");

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
    msg.setTimeStamp(0.055690391274792694);
    msg.setSource(54008U);
    msg.setSourceEntity(188U);
    msg.setDestination(9826U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("XBYUWTLARNUMWYUMTAPWOIEZYZRLRFGHZELPRDVKKQBEQGZBNQZEFEXIKCWLSGCMESFDHACNJZKAZMXIULNGUVCTKVCFXOHSIDTMUKYWGGOJHUMSHADMFPTUXHFSDUWPHAIPFOXGG");
    msg.predicate.assign("VRGUUSNFRJLTDQKAVKHEQQVFMJDGTUITWNLXZXGCDJZVHEZSPIMCLCZUZDNLKLMSZGIHCAGNPEOMHVBXSARPUROYBWSPTTOYOWBBBAWMWILRHNKVGAGYKZVEQBJSAFUKQIPIWSYAELFMJYHLSGRCMUVZXKNEEXYJJAQXNAGBMDDMJWRJXZKIOTILTUUFOTFS");
    msg.attributes.assign("JJDPXZMAMRVMBZDABDHVYIQOLVTGKWQFRIUMBHROFCTBFKAFWNAJPSXIPULFPZBWKRORTRDQDTXLJMRYAYCUEVHCJTLOBUUCEPQJSCEGGJCZTLEIYMINLNQSHVWYIVGATVMOFBX");

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
    msg.setTimeStamp(0.7510339115976832);
    msg.setSource(38869U);
    msg.setSourceEntity(202U);
    msg.setDestination(2873U);
    msg.setDestinationEntity(33U);
    msg.command = 79U;
    msg.goal_id.assign("LRNHVVWSPGGDVPAFXCISPFHMWDBZZAFQYTLBIZWAURVESGXABBCZQZLIHTFUBNEXEYMGHUVKOORWVENPFJJDAHUQKYISTRALZGVNOPYHBWTXIOKPLZUGNSLXMWMXYBKMODWPTSIQFQPURTHFCJDJ");
    msg.goal_xml.assign("COZPDNDHPVXABSJLBQESCRJRQMMISCUQJEIADAUOOEWRTQFUAMGGOLOFIHMTSDBZPDABTELMSCYSWYEEBXDGVVMZXDHLPFRVNVLJTFLJHKDLNJKCFXQNANPBZXWXWGLIVWTHCKTIICWXFXDYUEZIGIKUZIRZFVPAMFKVWUVRNBT");

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
    msg.setTimeStamp(0.590110447413998);
    msg.setSource(26950U);
    msg.setSourceEntity(187U);
    msg.setDestination(57307U);
    msg.setDestinationEntity(232U);
    msg.command = 204U;
    msg.goal_id.assign("HJTVENEXIZUPFKJNWSORVCZDDVPVASLQICDZOZXJJKTMRCAMBGPRTODYMNLNQIFWUAGSPEYCCUWRBMAZEFBQTMLFALDAPGYFQYIOPUYDMVKFSAEMIPPXQBWCGDCRWEXEFENRNRHTSHKTXBVXMGJHRSVHEHSKGNGIKUVJQJNUBZTHWZMUJUASGKGUJXQOLJFCHAMWFYGXRKZVKQWAECNYBSYTXPNLTBOVYIIXILLKCWLHBOQ");
    msg.goal_xml.assign("GVMHWKAVRYRGIYFAHEUSHHSKAMPTWZOUDSWMOETBNRJPLRSUQHMGYCPYMDVKWXFGWJCGLONSAHBJWCVYVNTDIZBEIZPTZEMGOOXRUZZ");

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
    msg.setTimeStamp(0.9806661788815301);
    msg.setSource(37250U);
    msg.setSourceEntity(135U);
    msg.setDestination(30149U);
    msg.setDestinationEntity(95U);
    msg.command = 63U;
    msg.goal_id.assign("NYUZLHXKUNYJXUTQSXUCGNBTVZKSMLMWYOOAYVJNSIQNEVOAIJDJEZPXUCSKPDSNKZCCOXWWQDPIANPQMVKOBRPHJVRMEJBFDOZBLYTFPGRGGFVRCLUFSZNRQIVFMQJECYPSPSEXU");
    msg.goal_xml.assign("FECCFYRBBINUYJAZKNIUKYZIZSGNAYDAOQYOHZOTRKMSGRGVEUCTQAQWCEPLFPEKRVQHAPMS");

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
    msg.setTimeStamp(0.14736687947773985);
    msg.setSource(1730U);
    msg.setSourceEntity(40U);
    msg.setDestination(49968U);
    msg.setDestinationEntity(103U);
    msg.op = 72U;
    msg.goal_id.assign("WDZZOSSSNGHPAUTIHDXKLARIAUAFYIAJJWREWLAXQFHLYMSGGBQOLTJVXPPHYKJYBCGINCBFKEKPRJKJDCECLHCWJMMXANMMNDQGM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GETXMONACSLKSZHDFTZBMPPMQUZDORSXOFLXTYFQJSYOIUHIGTMX");
    tmp_msg_0.predicate.assign("KWNEKLQGUAME");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PJEQVQCRYPKWUMBWXKIEIAABVVLAESVDCRQRTUYJBQNHYKADD");
    tmp_tmp_msg_0_0.attr_type = 222U;
    tmp_tmp_msg_0_0.min.assign("ZRZUZQGSBKKYYIZXUPYTWSYDIWFGZCKOJCLEEZJYQPSGFRLVUMSWUWIHGJOEONBULFPOBNNTLMVJXQTXAOFSNNYDVDAXXIHUJTHMTVEAAIADEHHPMXFNEPQGNGQQBXREYXDTYHDQWKKUOSQEUOCWLXWLRJLVLWHFRVIJBMUQPFFKACBBDWVXJRLIMYDCOCKVENSTMZLHMGGGKZAFRVPTAPRCOBJTCUVTRQCNMSIDRZKAICPZSMBJEOP");
    tmp_tmp_msg_0_0.max.assign("LVDGRLAKGDTJYHITXJOLCDEGFOWBMBGOJVGCYOMHAKVLFVNTMKBZPNMUPQHXUQKERXRXUZIYQCWNGMWAUWNWYXMECUBERXJIHWLRSELSDIONZSTHATIGEFVPQYIQFRBTYCRKYFJOHHXIFGFKPITDATGDVDJNSFZTVRHXWYZTCJBDKJLSKZXPEMRUBFZQLKQEAPONVUHAW");
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
    msg.setTimeStamp(0.981487967304569);
    msg.setSource(41108U);
    msg.setSourceEntity(165U);
    msg.setDestination(14007U);
    msg.setDestinationEntity(196U);
    msg.op = 64U;
    msg.goal_id.assign("YLOEBHVBKZHKDKGARUAEPCWLQIMQLEMAJOFXBJUWDZJKCWHVTYPPDJTDERZNCSNMJWBIQCTAMHEQKFYGUUPSAHGEEKDOREVNLNHRQXXUFVOTLHURTYNOIQZVZMGJXOAGFHPAGPCGOILWMRKEJWXIZOWZSSBSMQUNZTKFUZXRMSIRYWNBCLEJFJOTGCMPYVLYBFSQLXQRPFQWSXTSXCIGDAPBYI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VKATEHYXGCDXNEWSGNVRNJOWOLNPSYEMMDUWRLZBNXRKHWWVAMKRPCGJLETWBTRBZZBLGCNJFFIDCOZZMCFPINHYHYAASGNUXPLHUBFMAFITQYDERYUCOMOGTIFDUPLQZIWZAGRVOTKVFEHHHTE");
    tmp_msg_0.predicate.assign("HBRDKNPUANQDJWYVEXPIHDTTRIWGFAEKFUZUSAASRRZBNJMVWMWCHJGZZKHJACMTWYUBBIYRRVJELGOWXNGISOYFTQHIWTFTNYUAXJMPSSEINVNGSXERLQCMGXSVCRNJPPXLLQDCEXICSABZUOTOHLJPBDOFOLXBUIDHHCWQTLFSWJUACMYBEKZKFIAKVYNPQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MJRZBORHMEGMMWFSZVNWHXIPAWIABXSJEDKSFFEQZRWPHUIIPZHLJEEFDVOXGCINKQETTNAHQMVIWYNRDZWTFBQATLWFQHRMCBCYOYXBEJEURKPSOOKWQXVGHJNLIFADVPYJTEFOBGNUFVWTYNSHDJRNMGKMYKQLMDSJCZICJHAPGCQUPZWSTRS");
    tmp_tmp_msg_0_0.attr_type = 215U;
    tmp_tmp_msg_0_0.min.assign("NTIGVUOZPJHLLICTGIYIVOBHDDENKCQYANRQFFGXEGYMZEWO");
    tmp_tmp_msg_0_0.max.assign("GNVKAAIEQTRNFTSHQZFHGXMUYHCQMNPRKJBHONKIDGCRQHWUJCYYYVTDFHHOXQNWVDINEIXWNZXJTJCRWECEVFMOLMYTRJVQUEPPLGKUYGIMSMLEDWRKZLZNRRZPAWJXCQHYAFLTUCOVUMLTQPFILSFKSEOCXLDIBYYPCPENMAALJMFUBNAIWQKHUDYXCADQ");
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
    msg.setTimeStamp(0.5917846006213205);
    msg.setSource(2921U);
    msg.setSourceEntity(149U);
    msg.setDestination(2457U);
    msg.setDestinationEntity(158U);
    msg.op = 202U;
    msg.goal_id.assign("XWJGOINCXKKZZMYAIULZXMFPNOQQVPQDKYVCRKERABBMXTYARPNEHXOTEGUJDGXDCGJISBMUNRBMLFUVATHLYAHEVEDHPWQLSPVDSPHWTELSYKCOYDFAWNCZZERVAJFBUAGKZBSFBVFIRYZCYZLVXTFRKTHASQCHKMGTRXXTJIOLVYBOKLMXJHUSNBPGIAPEJPWYWCWQNCWNIS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PLZXUOWLCGMTCBHRENZPGHNQXSZJWRGNBSDWFKCCKXKTUAJRJQTDMTVDMTDHMAUBBYMNVEXPTIICHPBZQPZYOKUUIFVEGEJHGFTXPVGGALJYLTDMIRUOQUDKNBFERLYYDPVQXZRWWIGNQPMNTRWYBOGVCFOWOXSMLMKCKASQEJCBONHQOKFILULELYDQRJN");
    tmp_msg_0.predicate.assign("NIJEZWYGYHKJBSYMKMIEUXGZLOSQAIGCYTTSHHDNBRNQEPOHYKJYOCCUKDWOQXXKDSCLMTPQDCJUUBRFFHAMRWUVPZPYDIPXXQUACWKQAVGFNWZVHEQZFXCPXVMJAKIRJPWREUSOAEAGDTFZRYVBBQZRFBLBMBVTYRGOVOXMWPWJVNBVOETFOHHQNAGGOSCKZNILELWAJMTQNLDELULADCGMTMUJKFFGVUTRXPTL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SDBEGDSXLDWTBEJYQZTEUZOYRIXSNHFNZQQMONOMZPJJKMKZCICYUIIXCLJAUAPKWAPORNGTVGCVYEQVJBRHUBDCDCAQSBCFPXOFKAFXHZVMKZANVSYGORANGFLCUGIYYEPS");
    tmp_tmp_msg_0_0.attr_type = 9U;
    tmp_tmp_msg_0_0.min.assign("PKETNWRAUUOZTXDXCFMGICUPNKTFYKJUMDHLHPEMSMCBLTJDIGKLOOSPQ");
    tmp_tmp_msg_0_0.max.assign("JJKAHGCTAJSZ");
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
    msg.setTimeStamp(0.2927194719870706);
    msg.setSource(52817U);
    msg.setSourceEntity(247U);
    msg.setDestination(22294U);
    msg.setDestinationEntity(143U);
    msg.name.assign("YUMYXFFKOHRZWYSUEVGIQALZMWEPACNZPXTIORFRSLYYHLAWITDXMQXNTCSUNGZNDJGRJDYXCKFZGFDPSUQHVDJAYCHLLJMUIRSKXOPQOT");
    msg.attr_type = 245U;
    msg.min.assign("NYIXRAIVKAKZOPXBIGQKCMCCJYZFSLMMHPFUXXHKBTQDEVHGERNAGICSNJZGVKQDLHLCULVL");
    msg.max.assign("SAWRSUOPBJQSKXIPQAGCPINRJKMMHQJTHAIROEUXVIDBLFLZMGMGEWVQJRZYAHKJFWOWCQTZKFTMTTIDZAEKNVMGWDATSSFYNZMHFVFYYDKPVXYVFDWOERYUNXMSCPMZVKAOIUQRGTNHIGIYPSESUWNHBITDRVFDBTGXFNDRBYHEGBLSOKQOLDEJQLYFDCPEIUGXOME");

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
    msg.setTimeStamp(0.04855792802997194);
    msg.setSource(13554U);
    msg.setSourceEntity(248U);
    msg.setDestination(733U);
    msg.setDestinationEntity(150U);
    msg.name.assign("IKKBPUHDRUQFOIGPWDAZNADUSOPVHCULTEITQYIRWCYWAVBGVXJEZQSFMPZNBBJKBUGHRODYVTTHMNZYBFHATFDYMWNRLPSRXMCHKQLLSKMKYKAPJSUMDGMHVYOJOJWXAQEWGQQSDSLLONEUXJCIFTYCZZTUVNOWELVSNRBYCZBXHBWDBEXJEGDGGQVNTICRFIXMIMROEVNLQPKYCFSVGGUHPEQAARFPHKPC");
    msg.attr_type = 63U;
    msg.min.assign("PLDPNYMEKOSWVZXVZJJNDOJELAZPUTXZQPGYOZYDCJVRNUFXXIRCEQBHQIGKAKUXSCXMLXJQUNAXRSBYFGYAVEEWMEFWTFTVPWBSMSBSICRTYEXMAUGQZOBIJWCCURKQK");
    msg.max.assign("YCLIUDYQZGKHHFZ");

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
    msg.setTimeStamp(0.13257274441316047);
    msg.setSource(14647U);
    msg.setSourceEntity(75U);
    msg.setDestination(60830U);
    msg.setDestinationEntity(117U);
    msg.name.assign("IAPINMXWRXQHHKFSCPFBCGZKX");
    msg.attr_type = 161U;
    msg.min.assign("EXRCIZUHFCFASOCFTDOSTYYKZJDHCPJOISHKYWNNINLOEHADMXBDQDYPNJTXEFTRYHBBEUSWBWIKGTULFEMOTRMVYMGKLLAMQCIJDEIGOJBVGFXHVHVKRERDUGXKTIXORSHWZMPXAWZQDLBRKSLUZPVWKBCVWSTCNWNQKBFNTXIBLZHRLJJZESGEKPQARDCJQYZOWGXGQQGGFPAUYXZEVORINIYPPSYSUVJOADUULAQMCQVN");
    msg.max.assign("ZQIDXXOOJJUNKCTIIXNOWLEFNSCKUGMVZTZMUZLWQMTHFPIAVGVRHMULUTUWGGFZNXPENRFDBKYIUAYMDPAKOOLCQVQ");

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
    msg.setTimeStamp(0.928040045588494);
    msg.setSource(51806U);
    msg.setSourceEntity(36U);
    msg.setDestination(43759U);
    msg.setDestinationEntity(218U);
    msg.timeline.assign("XFZMHFOIKBWCETGPLQLANEYXQDOIRYGIOJLMNSGOHBVSETZYTHLEUNBLQPOVQXTBAROESDDNJJKRXOBKJJPEFMZWTMFCUZLRKXHUDUERK");
    msg.predicate.assign("RIUWISRNIVNGMWARHSAOLQHUCGOFHPWDZXETKIMKUAPTNKUHZJVMHTKUPAJGWUFJVODAXYCZFIRCCOUWBOOYDFMNDBSKLNQDDOLUJMFGRPJLXLGXITYPBZOLSQTHGWATXCXXLNBZJNCYWLCWCYSAYRUPILXEQDOEGEVOBUZY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SJPAGYEELWHMJCXTWAVSMWHPOWJKOJQHJUVZLBHWIMARTWAGQCKFTMYX");
    tmp_msg_0.attr_type = 217U;
    tmp_msg_0.min.assign("IQABHYEKEIMMBLINMML");
    tmp_msg_0.max.assign("HLOGVSTBBLDKKABPQXGXXYAKFVC");
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
    msg.setTimeStamp(0.49737511697529757);
    msg.setSource(25631U);
    msg.setSourceEntity(236U);
    msg.setDestination(24498U);
    msg.setDestinationEntity(58U);
    msg.timeline.assign("BXKTJOGNPQMIXLJCMVOPLJYGYNNTWOCHEFHLIEALSWPUKRGSKGXUJSYBXWAYILNUPQEXYYEHCPGKAMXIORGJEOFJPTFBBZFVLADQUZZBWRHQFZCMHIYDJEUPZNGWHCRPVFEXQUHPVFFISRSHALWDGHSDSMDDQNXKBPDQMVKXLMYYWYNWZEKXMWBKMKDTASRVZBJGBACVHLVUDNMATDNCOVLEISQURZFOJSICTERVIUNJO");
    msg.predicate.assign("LRNQPVSYTBTPXFCUGCAFVXDJPURHKKAYBETETQVIJBCKOLWXMVCPUBSLEUUFFPOMARZBUNJODGWZQGMXBAAOXFDCIWQORSQTKUVRWDGIPVIHUJNKDGPFULSVQGXNKJOQVMDVCVWILQQARELBYKJFEONHTTZHMDTWCYZPEYSLWBRYMMZIEWPBSXKYJGELGSNABOAYDZRXNUC");

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
    msg.setTimeStamp(0.512735996526625);
    msg.setSource(47862U);
    msg.setSourceEntity(92U);
    msg.setDestination(60867U);
    msg.setDestinationEntity(211U);
    msg.timeline.assign("BKCPRNFLIHHSGVIDVSIHJBPLGSLZWBXUECVAFPOAEAGZRGVLGLXDEMXXLMN");
    msg.predicate.assign("WKOHLYMLDQYKJPRUTMSCKHXDVBHBFQCKTFIEDPUNZXGSAIBNYXVEODNAMMELAKLCBDILQWZBNSPQXQAWGHGIAZNJBNCERETFVFOVTBPSKJVURTUVGJF");

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
    msg.setTimeStamp(0.3489419372413082);
    msg.setSource(60124U);
    msg.setSourceEntity(161U);
    msg.setDestination(26601U);
    msg.setDestinationEntity(142U);
    msg.reactor.assign("WTSHYQLUHSVROXRRCUABKNDJECHFGJHOCAGMUDKQPTVCHLNFINPJMLIGPAZOOLOIHQCFURPGBKXMKOXIMGIOZQWYSDHVILWKAVKPLXEVNARNEOYXQXKDFNGYSWBTJYCGJMSUBENQNCWCZBFDFM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PCSMBQNAVABDNOWZHOYNORUVXYDPUALORHUSMNHGPXOWLYZPIKPRFFTDJXMYUARKKKLFZUEXTIWLDCHPSSIXTHZBFBJEITMRUXUKVHYJWBZWTPEUYQGGEVIJQNVNJKQIAEQGMADMDVCODXNYHONEGCXXRWDCHGJEQEPMECVTATQLYTVHYTFRQ");
    tmp_msg_0.predicate.assign("NBPSEQJZFHPFOAHRQDGRYYPLERZAILSSZGVQLPCEWSFJTRZCWTIRPTOMKLWQDDLULPNIXAFHYPRQLQOXJIKHIRDXEWQFMJYRZOHUWVYLUEUTQSAVTDKVVPNVBDKWIOCXMVUYNJHAYJZGSBGLGHXRFKCXXCTWIUGGMHNBCNMDHFESGUJBSXWEKKPOOYNV");
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
    msg.setTimeStamp(0.451193212101879);
    msg.setSource(38010U);
    msg.setSourceEntity(226U);
    msg.setDestination(26078U);
    msg.setDestinationEntity(119U);
    msg.reactor.assign("OELQPFZKPJKPNULDXDCKTQHHCBISOYWEAYBFAUBCGFXMNUGRBDKTWSSOZGVRTWYQJJSXOMLDDCGDDYDRVZZRVPCFHIECAHEONIVIDLGOBAAUUVRHMBFTKKOYYJGVWENFTEHMJIENULTVWXSSMVAJFCNHCTWAWQNHYFPSYQSKMLXOBYOCBGJQPPUZUOMRZLIGXNINIPZREZYXINEPURBCBJELWKMTADZGQSWGQQJKVLUXVLRMTAPRJKAWFFXHZT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TDEYPQQOMZRURLJHLSLLAHAUREEGUVKNJPCBZFYIIOCNRN");
    tmp_msg_0.predicate.assign("THHGLHJSIPEFGLYTMMSOTCNZBUKNPYLHXDXMTVSLKDEIYSVBEPCRKZBIHJATRCCMQWYQPAWDTOQURNZMBLUSIPKSNLGYLZFNGSCCRZOJVWEHGQJYXBAYMGDTVWXWKFAAFKDJPLVOEZRJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VPZUQFPUZDKTODDHWUGFACAZKIHZSSRFKBQBNNJDFSMCNYDKONTPOMDTRRRYTQZHYGHJOEVAHLHZGXOGNJDRRRVSJXHMFPCLLIVXVWNBXQCAEXTJEXZBPJLCYAKFXEK");
    tmp_tmp_msg_0_0.attr_type = 132U;
    tmp_tmp_msg_0_0.min.assign("IWWZTQALDBIWXDJOAVGKBZLWAQMKOXZGZDFMBFYTDUYOGBGKPPGVGESLNPPVVCAJTKGUXZSDDECYLHBLHEQAYIWBJBUJAHTXKYPIVILOSMVPNHDRJCMMUMKBHDMGJFKRHSJFASCCXPEFFOZJQEINUJLHOSXAPVOCRPIKQLUFENFEKQJRNTQQVEIZYXOMQ");
    tmp_tmp_msg_0_0.max.assign("OAVWHSJTORBMXQILYOALDUSYTIMETJYOZYCPWVOKFJZTYORRFSUZZTKFEKTGAWXLYOHRARLMEKLVDIJMSZFJGFCMHXGUBNFKSEMQPITSMVJZABPBCXNCKCXICSVUEWRDJHAUDPDRWHTDWEQFQXCINAIWWJVAUGDELHWALNNNNNYQBLUDYOQFPVYEHRRKIGGECZINKF");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2763937917727406);
    msg.setSource(38547U);
    msg.setSourceEntity(253U);
    msg.setDestination(62558U);
    msg.setDestinationEntity(63U);
    msg.reactor.assign("RDSIXZIVVSAUWGVESUDPZQBXWVJQVGNKLUWEQESBXEAHXLEEARAAXOMIDTYCHFJSICPBUSJFUMOGUFXWHDKGONSPTL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WRDHEDDNUZGSVTUVLHOWPGXURWOQYSBWJMTORIIJGKBCZFWLAYXFKCBLCHMYXROGDEPQXALUWTJFYKKTTHVMQNBOSQNJTMM");
    tmp_msg_0.predicate.assign("KBRHVDKUWVIQOGRNNPRQEUCWQCMMGNTVEQKGIVFWJOSQKRCJNOUCKIPODMAGJQLPIGWDDFYDSOTISEEJADATUELHHGGQBMJQSCNTRBKRPBFAFUHAZLPOFCFSHPZWCRRSVUNTFYULWGTNIFTJGNHKMKSXDEEYOWIJPPVIHDABFIZNBVZXXBYNEZZSLXHLGKYYXZSAO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KDTLQGXTRIWONTYJRSEOPLGEIQALHMJMUPNQJFJHOFFRXYVSPRKCPIMLYETTMUWSUARDNDCHOVVVCXWVAKFEQIWGVWWGZZAMVBGGIBYFOSDCUOEGWGKPMMQZHTJHUVKPSMTMHZEGZBSURIDNOHXZWUAFYFCBNQNKLZTLSX");
    tmp_tmp_msg_0_0.attr_type = 113U;
    tmp_tmp_msg_0_0.min.assign("CBTKINJHQNRRSHQVVTECSOGGICUPVGRHDWXEXFKPXAUDHKCJTMZDHNKGYAJARIGTFYTUCUZNWNTAYFXRWAKQBACPFONAIRIRFABEWHYJNDZXRGPOWVHOFQEEEZXWKKEQLQBQYPQXYTZSSFJSZLLBIMPBDEQZCOFXBAQBSGBYCFKZJUVMWTMLOMVRNCLTUCMWNZIMLUGULMIPTVHJLPGBOXADOWEVJSNJVMFUSPXIDUMKDSYYPJIOWLEH");
    tmp_tmp_msg_0_0.max.assign("TAIYKYNDFNRTNQHHYJQCIMWZUVAAMYRPUOXDVWIEUUMEDKJCFDXHBXMECZ");
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
    msg.setTimeStamp(0.04363700312196084);
    msg.setSource(13682U);
    msg.setSourceEntity(134U);
    msg.setDestination(7848U);
    msg.setDestinationEntity(61U);
    msg.topic.assign("UBZILZFMCCAEKAWDLODERORLDGGHNLVGMTEPYCRCBKPZBFORAJVPDOQYQMAYEIJABBHGPIJWVXJLUQLQQZOHDYCVUNSWMHLTWKFWQBHPYHJBICMVJXNWKXSXYSMCTU");
    msg.data.assign("YRFZMXFLFLKROJVMBDCYSZEKQGADCQYVURHULPBWXVCQADRGWALRHJJWWAZCNEMGGEPVPBXISEFJBXKYJXEJCRFBNISDUZSVGFD");

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
    msg.setTimeStamp(0.05640066322396298);
    msg.setSource(33546U);
    msg.setSourceEntity(16U);
    msg.setDestination(29121U);
    msg.setDestinationEntity(52U);
    msg.topic.assign("ELISTGMLZJBGBBITJTBANRVQUNFMWLTVYYACBPHVKODUWJQYCPAOCOYVOVRSVMFZWJECWAHDAHFXXAUQIULYXLKXQYSBEMZIDNGHRPFLFTFAGUBEFC");
    msg.data.assign("IMQHUPLFAHRLHVSOJALZQSXJZYFXCSUSNTQPVPVOQQOGFBJCQDWHGNNCFPWA");

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
    msg.setTimeStamp(0.5452995940912125);
    msg.setSource(14538U);
    msg.setSourceEntity(174U);
    msg.setDestination(33422U);
    msg.setDestinationEntity(50U);
    msg.topic.assign("XFRVRLSYBVEJKYXMWUUTVAEBPZAQOTRYNDSYXRNXSWCFA");
    msg.data.assign("NCMPTHEWXXZIVTGFMPQSKPLUBACMNMEZILHYWKKNRQJSROFENMSLTPASFOSVLHGONHXGIIUWBYDFBYOJPOVCCMHXVTDIDUQVBGZZJTZOOXUUERAKJMTIDFODYQKACPGHCPWMFLBFVEGOEKWFFIOZRGIJKHP");

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
    msg.setTimeStamp(0.831349262264427);
    msg.setSource(52787U);
    msg.setSourceEntity(116U);
    msg.setDestination(60480U);
    msg.setDestinationEntity(47U);
    msg.frameid = 6U;
    const char tmp_msg_0[] = {101, 15, -57, -6, 59, 31, 88, 37, -5, -78, 88, 125, 62, 15, 6, 69, 33, 55, 3, 70, -10, -107, -118, 73, -80, 30, 28, 120, -36, 2, -8, 24, 100, 43, -102, -68, 73, -104, 85, 25, -21, 39, -112};
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
    msg.setTimeStamp(0.37092926145458793);
    msg.setSource(3917U);
    msg.setSourceEntity(151U);
    msg.setDestination(17520U);
    msg.setDestinationEntity(117U);
    msg.frameid = 11U;
    const char tmp_msg_0[] = {44, -5, 8, -54, -77, 81, -21, 0, -94, 118, 106, 28, -89, -99, -100, -82, 19, -96, 125, 82, 79, -58, 85, 9, -84, 31, 24, -96, -37, -55, -34, -53, 78, -98, 4, -70, -3, -77, -25, -61, -65, -126, 51, -28, 63, 31, 103, 71, -50, -50, -46, 28, 46, 16, -40, 68, 56, 32, 107, 70, 22, -15, 76, 81, -113, -37, 98, 63, 113, -110, -43, -82, 86, -59, -41, 23, -42, 25, 106, 57, 11, -7, -93, 113, -7, -23, 117, 14, 35, 89, -69, 50, 41, 37, -26, 24, 115, -81, -73, 17, -17, 29, 66, 124, 120, 91, -94, -26, 106, 38, 35, 82, -115, 19, 53, -60, -87, 71, -79, 42, 90, 126, -26, -33, 110, -69, 14, -71, 54, -113, -88, -30, -11, -42, 51, 3, -3, 4, 52, -84};
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
    msg.setTimeStamp(0.17831515702851675);
    msg.setSource(58744U);
    msg.setSourceEntity(79U);
    msg.setDestination(58574U);
    msg.setDestinationEntity(127U);
    msg.frameid = 50U;
    const char tmp_msg_0[] = {43, -112, -66, -17, 120, -70, -29, -3, 24, 41, 31, -119, -111, 7, -90, 53, 67, 43, 93, -18, -5, 37, 114, -25, 28, 71, -57, 13, 100, -106, 28, -79, 121, 111, -96, -4, 90, 45, 5, 66, 9, 47, 6, 14, 65, -62, -44, 105, -128, -68, 35, -25, -60, 73, 21, -10, -32, -117, -78, -9, 52, -78, -24, 34, -100, -89, -121, -115, 4, 115, -12, -13, -99, 56, 107, 38, 51, 116, 22, -103, -92, 3, -28, 89, -20, 119, -49, -67, 92, 16, 70, 73, 82, 44, 61, -55, -64, -88, -56, 54, 61, -101, -96, 43};
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
    msg.setTimeStamp(0.49767296485086776);
    msg.setSource(10866U);
    msg.setSourceEntity(231U);
    msg.setDestination(44152U);
    msg.setDestinationEntity(244U);
    msg.fps = 67U;
    msg.quality = 222U;
    msg.reps = 148U;
    msg.tsize = 147U;

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
    msg.setTimeStamp(0.7869520846306082);
    msg.setSource(3477U);
    msg.setSourceEntity(19U);
    msg.setDestination(57052U);
    msg.setDestinationEntity(63U);
    msg.fps = 103U;
    msg.quality = 236U;
    msg.reps = 124U;
    msg.tsize = 97U;

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
    msg.setTimeStamp(0.44299711938320796);
    msg.setSource(30251U);
    msg.setSourceEntity(70U);
    msg.setDestination(19903U);
    msg.setDestinationEntity(211U);
    msg.fps = 225U;
    msg.quality = 188U;
    msg.reps = 226U;
    msg.tsize = 123U;

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
    msg.setTimeStamp(0.308924884279121);
    msg.setSource(62497U);
    msg.setSourceEntity(151U);
    msg.setDestination(24938U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.6314406659116831;
    msg.lon = 0.7553727122294667;
    msg.depth = 167U;
    msg.speed = 0.026737702956638354;
    msg.psi = 0.7063463786736216;

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
    msg.setTimeStamp(0.2478557984100812);
    msg.setSource(16532U);
    msg.setSourceEntity(29U);
    msg.setDestination(41336U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.9712119124392629;
    msg.lon = 0.43242539555537207;
    msg.depth = 1U;
    msg.speed = 0.9518245280921744;
    msg.psi = 0.05120720695728331;

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
    msg.setTimeStamp(0.8817121643033003);
    msg.setSource(46618U);
    msg.setSourceEntity(30U);
    msg.setDestination(33061U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.17798620545427357;
    msg.lon = 0.7155943018112008;
    msg.depth = 144U;
    msg.speed = 0.6621257997322917;
    msg.psi = 0.419574541588454;

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
    msg.setTimeStamp(0.31987216575878596);
    msg.setSource(25898U);
    msg.setSourceEntity(212U);
    msg.setDestination(43234U);
    msg.setDestinationEntity(192U);
    msg.label.assign("AUUCLRMIVSIUBOSCYSXFVJACGYDHDOPDSMAIFKNAFNEIZCIIGMRHJHDBQWHVBILYIQEPHORWWBCEKJJJISGJSJWAQHOUEVUMRTEUBPFZSDPOOCJLYNSVDWEUZALSULGTMQBXKBXMMULGVQYZCQKVXYWCXEKZRXWTWYNBQAFGTANPCLCNAIHZENPFFTNKGLVXPTMDZGDNURRD");
    msg.lat = 0.15615940802758077;
    msg.lon = 0.6379934389850743;
    msg.z = 0.12713106144378739;
    msg.z_units = 234U;
    msg.cog = 0.43444619762564807;
    msg.sog = 0.9992581505891841;

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
    msg.setTimeStamp(0.9355196986438054);
    msg.setSource(17372U);
    msg.setSourceEntity(129U);
    msg.setDestination(178U);
    msg.setDestinationEntity(5U);
    msg.label.assign("VCICUWQLDYLETKIWGEOHCRNLHNXXUFSODQJVJTIFQHSPLGBCJPQDJGWZIGVXOVOGODYXTZTFJHZAPZLQECMMJOTBWCLANWHVCGSI");
    msg.lat = 0.7282322942440573;
    msg.lon = 0.26838166706521205;
    msg.z = 0.8154265475670389;
    msg.z_units = 118U;
    msg.cog = 0.3534748193154822;
    msg.sog = 0.20469315813663413;

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
    msg.setTimeStamp(0.373507908325422);
    msg.setSource(37504U);
    msg.setSourceEntity(202U);
    msg.setDestination(25005U);
    msg.setDestinationEntity(204U);
    msg.label.assign("YIIGDDMOKSYHNSFJMKDCAIUCMUTHSJEXSRRNZCSTBXLZZKWWVREEQZAWYCQPLPCNHMVUVONBARGAXCAOBWQEXLQIZOJZGZMRZJSDNJCRXTFQJHDVLYIPEUDXPWGQGOFTVBNSVGKPYLRARGSPQTVQGLHMFEBNQHEZUSIPGVMKOYPWAKKFEXJJIBZMTCIDKRFDGAHUNQNFUWOVBYFTTJRKVTHPXYAMBO");
    msg.lat = 0.9527702909579381;
    msg.lon = 0.7008273544658794;
    msg.z = 0.372549278093377;
    msg.z_units = 14U;
    msg.cog = 0.05427038613646751;
    msg.sog = 0.8394190724071698;

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
    msg.setTimeStamp(0.23277096121963392);
    msg.setSource(11681U);
    msg.setSourceEntity(199U);
    msg.setDestination(31150U);
    msg.setDestinationEntity(75U);
    msg.name.assign("IOIPZBORYDZTVALRAQMSTZNAEWLHBAMGQZKFMQLUTDWVRKPQNDILPOVGYIGBYFLPJFGYFDIVUCJUGXIRXYVUIJPGVFMRMHULTXJDHLTGKCKKIRKAXHFBXEJADHOMSIBZUTZSNOKYHJEOCNSYUZCCSPPCXAPWXANUHSBUHWLDJMZQXNGSROETEBOOEMJDFWXVRADNRCTBENWJQWCUVQMOZCBDSSRFYGKQNFPBLVESTEQL");
    msg.value.assign("DTIYDMODSKAZQYJBMQHQKVMCJBGRNCCPSPPLAZMLOOCKJGRBSOEJYRQWBCGIEWPGIIIAHNLMDHXYPAYBFJZAFASOKEBMRTHWNPLTHKFWNVW");

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
    msg.setTimeStamp(0.5368805671062606);
    msg.setSource(43314U);
    msg.setSourceEntity(18U);
    msg.setDestination(9407U);
    msg.setDestinationEntity(150U);
    msg.name.assign("RFRTPFCQBMGEROWGOHILCOXDBUHLVYSTQCUOWMCKGEGHHAHENKFUVLFIBBWXTUOLJLRIIXHZHEQULLWMSDYSKNTCASFYUSRNZZRADQ");
    msg.value.assign("ONJUCJZXGIQOBOUINSIUCQLVSPIBNQXDLYXSLJYNIOAHKVHWYECRHOFGTIQRNNAYORFIWKIPBACGEKBLDDJLDDOOVKTWCUHSDXHQCUKJZKTPMZJZT");

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
    msg.setTimeStamp(0.4874351718227009);
    msg.setSource(24723U);
    msg.setSourceEntity(178U);
    msg.setDestination(13377U);
    msg.setDestinationEntity(214U);
    msg.name.assign("ASNIGAISQOXUFBRMEJNBYTDQXWWCTSNHJYLULMBHNFELPIXGVLDSZNVFCONUOOJDYBAXPSDMPDLSZUTVUSEFVS");
    msg.value.assign("LYVOAODJRNXMXDICLLKVQCWWHIOFYFZRVWJCZWGSNEQHIGRODNAIXEUFIZVJYQEJMHXYQOAYTZTDGBNUZPNGTVEHGVEOTMYPLPKWANHYJREYINSZXSCUOEXCQZGWFMRDKSFZKCJVYMFCKLURAOUBDQQNBMVTKINKPIMHFAEVPUIPBPOLXGWDFXP");

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
    msg.setTimeStamp(0.15929167550010093);
    msg.setSource(56262U);
    msg.setSourceEntity(117U);
    msg.setDestination(36238U);
    msg.setDestinationEntity(42U);
    msg.name.assign("PJIKPJFYNBBBIESTCSLOGLKVWJVFSLKEQLZEXTHTXBIKJWSHDRCYFPZHCZXSABQCFJBUCZYPJPGNVLWFDSILVAOUAXOTMJQOVXCNMFAUWZDMJNMJMLSHPQYYXCCRZNRIBOTVPAADXHAUWNHEIGTOTNXYWHZLFAVWKQGHPKCDVU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JDRYQXBGZTYNDTPFLWXEJOZBKNHZSEQKJFJGCX");
    tmp_msg_0.value.assign("TPULZMNAUBRVQYHJDNTHZNESVURKJVBASKRLQXUTOYANJXEYUFKYLSGERBXVGZJTWVGBORZHNHBHOZNUWAFCKDWQFYRXADHMXJEKVECSIPDZHGWVSGVNFEKQMNMRXDBXLVFUGIF");
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
    msg.setTimeStamp(0.8319506024986877);
    msg.setSource(24063U);
    msg.setSourceEntity(250U);
    msg.setDestination(10417U);
    msg.setDestinationEntity(69U);
    msg.name.assign("RPAZRJWUIKZZQHOIHUOAFJVYNLPDVNJTCTXKYIGCHRIIWVWTCKNPAJBBGQGMHABQFKSFIXNPVOWEDFSIADLXXVGNCZEGFGMVPNVZXVZUDSEJALUCWTHGUKMEGOJDDQWSIEEBXAFQBJLPTBQSOFCEWCQASQOHBHYUHZKWFYOVPRNYHTHFKSDEPIZRPLCNARKXQPUZXBUYRTMLTSSLSDZMNOYLKOMGXYTQTDONBMUWMWYFJRDLMCMRV");

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
    msg.setTimeStamp(0.7697620633051154);
    msg.setSource(239U);
    msg.setSourceEntity(133U);
    msg.setDestination(42841U);
    msg.setDestinationEntity(173U);
    msg.name.assign("PKXPLNETPOATSTJCQF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IDNVKUKWDGXELBVOXTEJVYGRRIRWZMUTLVKYGBSWAHRGUNUIBIKJKBKVSOOPABSWBMOFQJQDYOHFCRCBJCUSYTZHFIWUPYJNRHTKELMIXGQGQMAPWLCZHGNETOEVCXZS");
    tmp_msg_0.value.assign("ZEVRTGXGWDUOQTQNRHEJKAVUAZPWKXSBLRKMSNBAFFWFJURZHRJQCTLYEZTGPGQV");
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
    msg.setTimeStamp(0.3547142806730522);
    msg.setSource(53516U);
    msg.setSourceEntity(50U);
    msg.setDestination(438U);
    msg.setDestinationEntity(91U);
    msg.name.assign("NTRQIVRATDFPOKQWHASTNKVOCJQDRLFPABXEPPEEIYBSZABVRIFCIXJQRIYMTRUEUOWIUICBQFUFCFLFHIMNTVPLOHGWYSWRWWYKBZQGEWSXLSCDSYHGUQQWMZDNSVMPGUZSOZETOPUJNUIMSWYKMGNHKFDKROJHGJMJABOVLVXKRGAKEMHPDVLZYYGQXPKSNXTNDZBRTNAPMXLO");
    msg.visibility.assign("YVAZCLZTTMQIWWTKZPGQPGRALGXSJLWFPEVHRRTPWKFQNWKBNNABPCUTZPOMGADJCYUPLCZMMOPIXIKNCDIZAJJVGIFXYSUUGXOCJDFYBFJSXATETCEKNXUSQVBBHQIBHWCKQMEMWERIJRHLRYEOOMWLOSQEKNX");
    msg.scope.assign("IKRYLNZAZMATFUPWMJUUQFJVHAVECKVNBBDSNMLNQXTTWJQPIXFVGHNRVAKNDBPETRDUMGLAEJARYWUYKISUIVLWRTRQCLCADCYRYKWFPWMHDWDAGUTZZQOYHZSYEINKFXOVMPWFKLJ");

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
    msg.setTimeStamp(0.3555799023634435);
    msg.setSource(35032U);
    msg.setSourceEntity(241U);
    msg.setDestination(57606U);
    msg.setDestinationEntity(128U);
    msg.name.assign("VKSJGXMFOCJATBUTFXPVAXOONSBBUHBESMGXMYJYDDDHFACNRURYKRWMZ");
    msg.visibility.assign("SNSCDTZXOKLQMQTUXHRRPTXFFXHTVFWCECJOQEURWMRL");
    msg.scope.assign("TDBEDGDEYXYQTHVLJKNHWWUHFJSKJCQBKHZARJWOIDQTVIDHJTZBWCDMRLWXXXOBMMKXWZVOFETCJROHVUIGREVMXJHFRPGSDBQPFEKECEYZYUPQUNZAVQOPNKFFIPUUEFNOGSZGNVNZ");

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
    msg.setTimeStamp(0.183949466459138);
    msg.setSource(53585U);
    msg.setSourceEntity(116U);
    msg.setDestination(64647U);
    msg.setDestinationEntity(69U);
    msg.name.assign("LGBAVSHXZCHNLEJSCFFAZUNDBOONPKMZGMJHCTCZSTPTVMFLSXEIAJSXGYOHHCTRIVZDAOSYEZWOMNOEAGAGNNIIKXAFNHYRXZEKXTFJRMQKPRSAYTCRDPUQYRCYIOWHEDQQVIPMBUBEJGKFMVLKUCQSQSWOEBIBUNQRFJPHDWYVRAUQVXRPDWTQOMUNLFXJQHHZRWDYBWDWWDULLBFKPMFDPYMUECGCBKSYGWLZGXOLUEIJVGATJ");
    msg.visibility.assign("SRRMSCYMBFZBZYACDXKYFZUKGAIRBUPMWGFIWWPYKJONHSEIPOJMTRDBBSFCMSDDYJPOVIXETPMCLMKOHTVKAASEGJZITNBPXOMHFHEPQRHIWXWNDNOKNNNALCGBYXMY");
    msg.scope.assign("ZTHWORGKFCXXEWULZVCHGNIHGMXKAGQXJSMYDXNBAREDNXLHPMPCWXSMTLRDEZUBZRJLOTNKOIHDVXSHQNXKQRWVUUYQLQGWBAECVHWSBOEBMIQBEZDIWREYHSZQMJVFSJWGDZSRPYLIUVCBQPROOCBFEFWOAAUPINAYMSEVFFMAJHLCGAPLKVRJKSOKHICBZDPFQDQUVGIFZTGPBOYKD");

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
    msg.setTimeStamp(0.658907716437112);
    msg.setSource(43341U);
    msg.setSourceEntity(91U);
    msg.setDestination(8459U);
    msg.setDestinationEntity(185U);
    msg.name.assign("ZSRQQKHILSPPVOLSWEZKBBOMFSUBPMADTUHN");

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
    msg.setTimeStamp(0.8454087231807862);
    msg.setSource(34628U);
    msg.setSourceEntity(175U);
    msg.setDestination(15232U);
    msg.setDestinationEntity(181U);
    msg.name.assign("LSZPKALOLUXBWEFJQQZIAVRVDWLZGTGHMSILBYVRFANBQQGIJKEWAZTMMPBCXRDTKTMWXMLSBKFULHNDMHJDODUFXEYZPYNXNPDCPJCSLEKDVYQCBEBHELZOUQBOG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZVOVOQYYSTVDGEHAYNSOXNHNIUDEWAE");
    tmp_msg_0.value.assign("GRHUEISNXVVRHCOVZHNTCEYJVYXRYFBTGABHSWWBFJCVBUNKETEMFZKZYKAMZIOOPEBGVZGHDANMHLEUWWYQXLGDYHMNOALHFPKUZORKOQNGDIQBTLNXQNRSKJJTCUPXWPXQACFNTEUMLPNIKIYSVAEOZPJJKFXBLWKWD");
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
    msg.setTimeStamp(0.34048430789176765);
    msg.setSource(61892U);
    msg.setSourceEntity(158U);
    msg.setDestination(63166U);
    msg.setDestinationEntity(109U);
    msg.name.assign("AGRMZVIKUWEBKAFFITEFSUESWNVBVAMSCXAQJBDHZXAZPGOQLFETTCUDJVYEWSQIRPZPEDEUGLRNQSMVXXYHOZKTGXRUWPJPNFRFQUZZMFCZFEBIXJYLMDAOBCJYDKGJJFLVMYLJISCHOPXKQRUYWRXMVOCEVNAGCLMDCNOWNUCDLHBMZAWKQKBXSVGBTOJRHVBGDLFYILKTHNSNAGOIEYATISTCWOGHUTHRNHRBKZIQK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IANDTIRFSGFUGJCOGHKYVIXAKPKLEHSZWHKURGXYTQIXLIQQYNSEELRFHUENZXIRAHVIFXBPTCFDGXCXAWUTJERSPZLTHZOFPRWEMJNZJCWSFMK");
    tmp_msg_0.value.assign("MYQJPXYGZQXYER");
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
    msg.setTimeStamp(0.311690616738434);
    msg.setSource(28550U);
    msg.setSourceEntity(218U);
    msg.setDestination(43656U);
    msg.setDestinationEntity(192U);
    msg.name.assign("IQNXCUBVJJLWJWDFSVOZFPMLFEFXFZQJRTYNVEYXWWCAQSZIHHFNEGMPOARINBBMWSCRRMPDWXPBSDOYHMJYSDGDWNDOOQAZMLNYEKJINTRDHYSBCYSZHZHECYKIGOXJEGKBBIZHLCMEVUPQCCPKDHGKPVQVTXZYJGTJRDUMDKVOLMKCJAAZUTTLVWXBWRPXHUSAICMNV");

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
    msg.setTimeStamp(0.30237708618290227);
    msg.setSource(35715U);
    msg.setSourceEntity(7U);
    msg.setDestination(33509U);
    msg.setDestinationEntity(180U);
    msg.name.assign("XSGMKTKDJJCITVRMRUFDENQSAZZZZLYSKLMCLPXJBUXFAZEMXZYLDKLNWEOFQZVTXPBNFXXWVLVNFPAOSOWLOJORRKVOBIFJFONALLBCDFWMYBHWEKTKKESYNMUTWCDUDNTHYLYANAWJSUYIHSJPSIGQQOPJCZDDMAMTQIEFHSUUCEFV");

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
    msg.setTimeStamp(0.20517035655749993);
    msg.setSource(21111U);
    msg.setSourceEntity(224U);
    msg.setDestination(59057U);
    msg.setDestinationEntity(107U);
    msg.name.assign("QXFSFPWBVYUQOKNPPONEDTJWLVFPQDKZCBEGIQWLPODOZLSHSJWUNGMYNJXKBMPGOQRAXDKOUXCDNOCKEHGYEEWLLIIUQDEURNMPARFMLUFYTEBVILVYBIIJDJHITXAYDQHGWFR");

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
    msg.setTimeStamp(0.49131863245383356);
    msg.setSource(44454U);
    msg.setSourceEntity(250U);
    msg.setDestination(51072U);
    msg.setDestinationEntity(85U);
    msg.timeout = 1210965063U;

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
    msg.setTimeStamp(0.8399237391266503);
    msg.setSource(11948U);
    msg.setSourceEntity(173U);
    msg.setDestination(62261U);
    msg.setDestinationEntity(21U);
    msg.timeout = 905573358U;

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
    msg.setTimeStamp(0.2616671000923071);
    msg.setSource(54039U);
    msg.setSourceEntity(8U);
    msg.setDestination(38479U);
    msg.setDestinationEntity(41U);
    msg.timeout = 1799740030U;

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
    msg.setTimeStamp(0.16641694521072092);
    msg.setSource(19718U);
    msg.setSourceEntity(244U);
    msg.setDestination(18595U);
    msg.setDestinationEntity(195U);
    msg.sessid = 2937418514U;

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
    msg.setTimeStamp(0.2577530506492167);
    msg.setSource(64226U);
    msg.setSourceEntity(238U);
    msg.setDestination(53614U);
    msg.setDestinationEntity(227U);
    msg.sessid = 4118137303U;

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
    msg.setTimeStamp(0.48985946491996146);
    msg.setSource(11757U);
    msg.setSourceEntity(200U);
    msg.setDestination(62990U);
    msg.setDestinationEntity(231U);
    msg.sessid = 2232347030U;

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
    msg.setTimeStamp(0.4188555406980041);
    msg.setSource(2888U);
    msg.setSourceEntity(87U);
    msg.setDestination(3937U);
    msg.setDestinationEntity(48U);
    msg.sessid = 1068116709U;
    msg.messages.assign("LBYHPLZCNIMIVVBJRSJOWUCFFTISOUVVHNESBWODPIZFSGYXERERQCSBYIJDOEADZKQQPZNNJBCXAMUTZRUQNEBVJAQGEBAQWDTZCPHYYIKJHGRPNFQBVFITDVCNQHTLCGOKHMUXJFWHTSSBFMEZRKGIJXAAWOKYDACDJKXWYRGYROTYGW");

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
    msg.setTimeStamp(0.7537385989856946);
    msg.setSource(42209U);
    msg.setSourceEntity(5U);
    msg.setDestination(44164U);
    msg.setDestinationEntity(43U);
    msg.sessid = 3468335516U;
    msg.messages.assign("VPYBWZTHDXCLFYRMZYHZQXBRYPWVSDEOVUAVPUIZNQTDOZBXEKROWBJUYETLDJLKTCINLQCIWPMHBFBIIPGDLRWMSXAOLOSHFDVWOMHGEHQZSHECQWAUOQYKFSFJCAUJDMUCGZXHQPBLOASKGDGAUWVFRUNTVUIQAGXLJNYTEDCZEYMFKJAONVOMRRSCAINXMEXMATK");

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
    msg.setTimeStamp(0.6707957850364555);
    msg.setSource(53910U);
    msg.setSourceEntity(164U);
    msg.setDestination(18315U);
    msg.setDestinationEntity(203U);
    msg.sessid = 76237521U;
    msg.messages.assign("RCFFIPTHZKIOMWHVLHBJXCGWKUAPCZVXTOAZVKLBONISBCPMVDZTXTZFWAGMEQMBNISMBLAINGDDODQBOLPJTLEZKPODSMDJLCNXKQHWVPZSMQYZHWTARJUMASFKXYIPRFEUDUURGINHYQSHXYRLQTJLNGKVQOXJNRZWVWXYCRWSESOUGWUHCAEURVBIXDGGYYDMSPQLKNTOBHZVKTFFOPJHAQJYFNRQNSCJREIEJCDXTUPI");

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
    msg.setTimeStamp(0.6514426303528499);
    msg.setSource(10171U);
    msg.setSourceEntity(100U);
    msg.setDestination(25581U);
    msg.setDestinationEntity(90U);
    msg.sessid = 2434665300U;

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
    msg.setTimeStamp(0.7846411260332293);
    msg.setSource(21845U);
    msg.setSourceEntity(240U);
    msg.setDestination(23945U);
    msg.setDestinationEntity(140U);
    msg.sessid = 263521131U;

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
    msg.setTimeStamp(0.0221589484430329);
    msg.setSource(33970U);
    msg.setSourceEntity(130U);
    msg.setDestination(30917U);
    msg.setDestinationEntity(119U);
    msg.sessid = 1211179816U;

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
    msg.setTimeStamp(0.11404058293436259);
    msg.setSource(15683U);
    msg.setSourceEntity(202U);
    msg.setDestination(42028U);
    msg.setDestinationEntity(97U);
    msg.sessid = 1723169538U;
    msg.status = 115U;

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
    msg.setTimeStamp(0.4421946677877021);
    msg.setSource(20013U);
    msg.setSourceEntity(195U);
    msg.setDestination(29778U);
    msg.setDestinationEntity(118U);
    msg.sessid = 3346708044U;
    msg.status = 254U;

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
    msg.setTimeStamp(0.8841387086412494);
    msg.setSource(10835U);
    msg.setSourceEntity(22U);
    msg.setDestination(26320U);
    msg.setDestinationEntity(2U);
    msg.sessid = 2918965643U;
    msg.status = 120U;

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
    msg.setTimeStamp(0.9381905820265259);
    msg.setSource(60937U);
    msg.setSourceEntity(36U);
    msg.setDestination(65187U);
    msg.setDestinationEntity(119U);
    msg.name.assign("EZNLCKTEKHRGFRSSGADZMVNUAGJDPTVAANXBJYRGNLODASMWTZSNWFLBGUKDIQCEYSHITKRJUTERPYIHFQBGWVHNNHOCMIPZFKBKYQPTUHJGUFIJSXXZWTEVSFSMMNUMI");

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
    msg.setTimeStamp(0.9855097807243929);
    msg.setSource(41965U);
    msg.setSourceEntity(247U);
    msg.setDestination(38126U);
    msg.setDestinationEntity(147U);
    msg.name.assign("IUINWSEZPWDXDSIRYGDSGOFQEZPIBMUPCMIUYDYQAVKOETTAEJYCOJXB");

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
    msg.setTimeStamp(0.9423461376243445);
    msg.setSource(51204U);
    msg.setSourceEntity(217U);
    msg.setDestination(234U);
    msg.setDestinationEntity(16U);
    msg.name.assign("YDWYVATSWCMJKFPLNTIXERHRWOMRZNVFBBIAEZNLOOQOIZNYPMAESHDKRJASKIMNYWTKMUHWULRKHNBFDXHERMUSASOPTDWSVYTPZTJNDWZRCYNHZCLGVZWRKMEXQBKJEJAHQLCPLTXVMUFGGOVNXTODZXEJXMSSGEUHVGPCUZRMVBDHIFFINBWTYOAQUBIPCFOJLLDJGORUDQCGCKQXGSJBG");

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
    msg.setTimeStamp(0.9059327524305941);
    msg.setSource(29729U);
    msg.setSourceEntity(243U);
    msg.setDestination(25808U);
    msg.setDestinationEntity(101U);
    msg.name.assign("HWMTYLEPLOHOOUETCQZWJRPNNRBBBYSEKEGKGPCYICXRYVEPFQSPMAMUKAYNVKJTASWHSRZSUMEAOVSBEMRQMWDKYOUJFFJJHUWLHBNGUQBUIHYHOJCPLWRMLKSALQLHZFNQCJWTGFAGUVYFDXRBLMDRPODTCKTWYMLITZUNWJPMASOKQIFYKGNV");

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
    msg.setTimeStamp(0.32640293191528413);
    msg.setSource(27927U);
    msg.setSourceEntity(5U);
    msg.setDestination(55685U);
    msg.setDestinationEntity(233U);
    msg.name.assign("POQEHFGVFMUXBOCCPSTTCXVQWQBDLLWAMVCNMLRINGLSQKJVJYLCKBDAEFAPGZAKBYZPQIYZYSMEPIWFMVDCHUPWBETWUTJFCATHEQHKHJZXKKUWWDHMBDQMXWDZU");

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
    msg.setTimeStamp(0.9435813090168901);
    msg.setSource(51806U);
    msg.setSourceEntity(22U);
    msg.setDestination(15474U);
    msg.setDestinationEntity(46U);
    msg.name.assign("NIISRCMFBGSXDGUAJUYMZKBDVXREZFAAOQWQJKIUFBQECXVBCYAF");

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
    msg.setTimeStamp(0.706025186785737);
    msg.setSource(19283U);
    msg.setSourceEntity(194U);
    msg.setDestination(30811U);
    msg.setDestinationEntity(125U);
    msg.type = 225U;
    msg.error.assign("APNFKKCCQASTFUMEPXDCBTQLNESIURSZBTRLGGRXKSBJXXJQYLHPUBCLPBCCHFNWVDFPBNYRVILDPUURKLXNHWNGOPVHMRQAMZECJYYGOAESFTBRLK");

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
    msg.setTimeStamp(0.3214346231509124);
    msg.setSource(8810U);
    msg.setSourceEntity(178U);
    msg.setDestination(3145U);
    msg.setDestinationEntity(63U);
    msg.type = 234U;
    msg.error.assign("UPDJXSEZGJEDFYWFHYSMBCIHMUAKVAEEKNTQXJNJJUKWZCQPJCLKLEQZXRRTMIEVXDZNIQLUMVQOAPYGXORQRBITJKGCUOEUDWFGWEMCACAOBLZVFITNYICTWTPGBGVMQHLHSKIJLOYHBYMKINZFLADRWAFUFRCGDQGRZPAKBPNXXWNHDUQOOTPMCPEBPSLNGYNTVJOFBSRZSSIWXZHYCXRA");

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
    msg.setTimeStamp(0.28518737235824865);
    msg.setSource(39189U);
    msg.setSourceEntity(165U);
    msg.setDestination(61400U);
    msg.setDestinationEntity(73U);
    msg.type = 213U;
    msg.error.assign("ERTHSIASJTCWTUDFQRHWEDTSLDKVOOJGVWUZCOSJGPQHXRXAVAHJDCUKFSRMLEBHXGNTLYZHEFQBWQEIQRQMSMNIRTYMNKEZCQGGKUTFXBJDCPDCGAYKYVJRVNHVDPMOVPADJUOJPFKIYGAXAUBRVYHCJLZMVWZDQYYMLMSEBEPISZWAKBRQLONNKAFEUWPXIIPIOZBKMSTAXNBQTCT");

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
    msg.setTimeStamp(0.17616648011970593);
    msg.setSource(54294U);
    msg.setSourceEntity(24U);
    msg.setDestination(22607U);
    msg.setDestinationEntity(141U);
    msg.seq = 43423U;
    msg.sys_dst.assign("ONLTGDHIWZNIVGFROVPAQZBLGZLFQQFRZQMUNMAVXSPYSMWNZSQUGJRFNOBDAIPKPFLJCCPBLWRHBEECRJGDWISCXHOFMLMXWTGWMHWDBYFOPAPRRLUWLHBNHVFKMKHSKXEKBUUIDKRDXVHDETDNJYJQYYHTU");
    msg.flags = 159U;
    const char tmp_msg_0[] = {-55, -43, 88, 31, -28, -33, 97, -65, -25, 15, -6, -17, 110, -41, -12, -42, -78, 66, 114, -59, 75, -42, 2, 91, 31, -126, -53, 121, 49, -29, 57, -54, -24, -75, 73, -89, 59, -55, 108, 71, 42, -14, -28, -89, -88, -81, -37, -27, -66, 82, -22, -57, -10, -117, -109, 37, 74, -75, -107, 60, 23, -27, 96, 8, 17, -67, 110, 24, 93, 56, -31, 89, -50, 68, 66, 22, -39, 56, -32, 119, 68, 7, -94, -23, -117, -42, -123, 8, 74, -125, 72, -28, -66, -119, 40, -45, 56, 49, 76, 48, -8, -112, 119, 45, -52, -13, 97, -34, -25, 17, 23, 8, -9, -7, 94, -87, -12, 84, 21, 35, 62, 22, 43, 84, -68, 85, -25, 55, 71, 51, 54, -24, -43, 45, 21, 38, 102, 99, 76, -51, -1, -70, 39, -27, 106, -10, -33, 46, -24, -111, 108, 107, -78, -41, 111, -1, -44, -2, 33, 36, 42, -25, 86, 100, -7, -72, -1, 58, 93, -108, 20, 98, -93, 33, 46, -98, 20, 31, 79, 100, -95, -13, 88, 45, 82, -47, -114, -70, -27, -10, 68, -44, 1, 0, -116, 89, -120, 3, -18, -32, -106, -119, -5, 83, -23, 119, -56, 96, 39, 41, -112, -109, -102, 101, -49, 6, -115, 14, -93, 81, -10, -61, -58, -123, -121, 124, -127, -97, -126};
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
    msg.setTimeStamp(0.2533271419820199);
    msg.setSource(9602U);
    msg.setSourceEntity(202U);
    msg.setDestination(25160U);
    msg.setDestinationEntity(221U);
    msg.seq = 24930U;
    msg.sys_dst.assign("SDJQVFGJIRQMMESPUBGZMOVWAIYFTCBTAHNVHQTOETHETTALFBGMZPDLCZKDQPLLDKZDSHVZAEYRJHFKZXXUYVWBGEYOGCBWKJLYUCCLYJFHGVBKBCAJFSFXQDHWOIQWXESIURBPSAMAOXLMNORLLBJTEPMKZCGYVDRQQTZHIUPFWDP");
    msg.flags = 216U;
    const char tmp_msg_0[] = {-77, -35, 53, 55, -3, -93, -93, -95, -104, 37, 1, -106, -112, -117, 23, 5, -15, -16, -38, 77, -36, 120, -32, 106, -42, -99, 114, 58, 103, -127, 40, -3, -67, -16, -100, -35, -25, -40, 120, 126, -101, 34, 68, -74, 119, 62, -121, -31, -97, -3, 111, 13, 17, -37, -116, -23, -70, 101, -93, -47, -18, -81, -69, -113, 7, 92, -52, -105, -92, -118, -98, 109, -12, -67, -24, 33, -115, 95, -102, 85, 68, -123, -47, 26, -80, -119, -65, 31, 102, -49, 103, 120, 18, -49, 9, 61, -112, 2, 98, -59, 82, 48, 81, -35, 126, 116, -35, -51, -24, -4, -5, -23, 117, -14, -94, 20, -37, -76, -48, 122, 84, 89, 104, 57, 116, -32, 27, 17, 44, -107, -13, -86, -106, 119, 88, -12, -79, 24, 89, 4, 95, 104, 27, -8, 70, -25, 122, -99, -125, -34, -102, -71, 91, -23, 93, -2, 119, 59, -114, -4, -52, -56, 91, 26, -57, -30, -27, 81, -96, 43, 59, -17, -125, -50, -60, -28, -113, 10, -35, 2, 59, 8, 124, -108, -57, -55, -33, -68, 35, 118, -39, -118, -22, -111, 29, 117, -91, -127, 34, 19, 29, 68, -99, -23, 21, -61, 97, 56, 80, -32, -68, -77, 102, -128, -45, 77, 58, -52};
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
    msg.setTimeStamp(0.47609206074282395);
    msg.setSource(45550U);
    msg.setSourceEntity(140U);
    msg.setDestination(31538U);
    msg.setDestinationEntity(55U);
    msg.seq = 60173U;
    msg.sys_dst.assign("MWEYRLMSAIXQNHKFUKQABHVNMTIYOQQTZZCGEZAENOSLPSHUCPYIPRAPHFDBBDWFFJCWSRNBSFSULWWFLYLQJYTXITDMGIVVTLCKMVTSJEJJGIYVGNYAHDGDRPCXKODCPUEZXONRWVNOCAWKUJJBSAT");
    msg.flags = 233U;
    const char tmp_msg_0[] = {-61, 61, -49, -59, -35, -42, 26, -84, -92, -19, -55, -126, 60, 82, -102, -71, 19, -74, 46, 76, -66, -40, -58, -7, 37, 1, -45, -76, -53};
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
    msg.setTimeStamp(0.7776253659254904);
    msg.setSource(30800U);
    msg.setSourceEntity(2U);
    msg.setDestination(29094U);
    msg.setDestinationEntity(14U);
    msg.sys_src.assign("ACKFIULDPINVJFPDGNXFAHPLZDRYHVMEQQOAWRYMCKTNGKUULBADXTUQXOWPECIJXIHYLGDUYHSMDUZCHEXEGMPVTAOWYXOJQOUAQPBKVJDIBBQOAQICPKRSOTJDBILUEXNFSWXFPARFMWMWXIDCHYSFNWZBRRJBLIZAKTVYNKVRJSNQKHVZBPCHENSTYGRXFMLTZVOMEJWQZEUJGCGSQSZFHTA");
    msg.sys_dst.assign("MSEHHFDMVIMFIGZIPLYVOQWSKGESTJPSNXRFYDWLOZCFXKJJGUTOEAKLXDMJVEGNJEKTYGSQHEWAPBRACNZRBQKAECUMYVPWSOPBUQW");
    msg.flags = 137U;
    const char tmp_msg_0[] = {-57, -22, 35, -52, -103, 107, -87, -58, -53, -117, -44, 64, -21, 22, 120, 17, -95, 27, -92, 39, 70, 119, -30, 113, 30, -57, 7, 85, 122, 122, 19, 89, 25, -50, 61, 37, 21, 79, -7, 21, 103, -71, -46, 2, -47, -56, 70, -64, 72, 21, 79, -4, 65, -20, 40, -126, 82, 19, -36, -6, 112, 1, 126, 7, -23, -32, 41, 11, 11, -39, -67, 50, 91, -25, -92, 122, -33, 79, 54, -32, -54, 99, -90, -71, 87, 97, -64, -53, -12, -19, 18, -26, -108, 111, 118, -22, -2, -79, -90, 36, -43, -90, -103, -69, -52, -126, -107, -37, -103, 63, 0, -21, -67, 61, -24, 60, -11, 85, -30, -63, 63, 56, -1, 29, -88, -73, -114, 14, -13, 47, -66, 12, 115, 99, 85, -107, -27, -106, -50, -46, 1, -19, -73, -96, -120, -69, -75, -42, -72, -83, -8, 12, -95, -95, -65, 12, 100, -20, 113, 61, -112, -110, -58, 69, -11, -50, -29, -126, 56, -55, -81, 84, 118, -9, 6, -73, -24, 91, -44, 79, 88, 114};
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
    msg.setTimeStamp(0.2988005675876497);
    msg.setSource(47114U);
    msg.setSourceEntity(101U);
    msg.setDestination(37208U);
    msg.setDestinationEntity(160U);
    msg.sys_src.assign("UMNBZQIEQOSCGPKAXUNTMERPQPKRQXJATFHDNHLLJNMNWWVGZFMEQJTJEGXURJVCWCSDSJFXVZTQUBHGYZOWXZDWXSAIDGXVGJODFTPNYCUPMQWJKOLIIVIFGLVIDCTFK");
    msg.sys_dst.assign("KNDSMJTSCYEGIRYXTWSZMPLTBZTSOZEWWLLRCDANRNLDAAHCYNAUXCHBPGHXVQAQLBIUESQOUWHMEJSNUPVXCYECCEPALITLDFHIPGFELXQTVZVKL");
    msg.flags = 89U;
    const char tmp_msg_0[] = {15, -59, -114, 12, -28, 40, 27, 82, -104, -120, -122, -118, 2, -80, -58, -96, 45, -87, 118, 117, -81, 80, -12, -58, 30, 33, 48, 99, -128, 48, -80, 13, 13, -90, -22, 114, -98, -66, 5, -124, -59, -7, -78, -85, -111, 84, 7, 18, -75, -110, 72, -73, 15, 88, -47, -14, 48, -8, 107, 115, -70, 87, -88, 90, 110, -84, -98, -108, 7, -67, 38, -85, -43, 105, -58, 4, -117, -88, 125, 81, 77, -82, -30, 110, 25, 48, 63, 121, -30, 64, -32, -81, 60, -19, -25, 91, -74, -95, -74, -81, -87, -101, -39, -99, -22, -120, -85, -85, 16, 60, 83, -72, 76, -64, 74, 105, 13, -85, -46, 126, -91, 6, 34, 94, 77, 20, -108, 93, 49, 27, -48, 57, -58, 113, 71, -97, -53, 4, 79, -113, 0, -14, -60, 0, -42, -112, -37, -69, -112, 8, -51, 99, -110, 107, 21, -60, -2, -8, -113, -42, -16, -25, -67, -43, -98, 11, -113, -84, -60, 27, -53, -62, -64, 15, 74, -94, 26, 10, -1, -76};
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
    msg.setTimeStamp(0.5879610330847841);
    msg.setSource(20626U);
    msg.setSourceEntity(206U);
    msg.setDestination(35950U);
    msg.setDestinationEntity(118U);
    msg.sys_src.assign("BGFYQAVKGJFQPABFLOFJYYGUDCHSGWMHKIQXLNSQCIKFILRQHSCJZOFH");
    msg.sys_dst.assign("ERFYGDXLABLOBXJFRNEVGGVTEDZPAOPWRHXJMQXZASMCEORFUYWBENZIHLHETJFWKJMIBWPOKXJEFNCVXAUAMRBQQDFLANBPZMEOYTXYLLVXHZKZZSKZPQATPESDUIINVQMSUCVCJDDPHBYDGRFTUPJUBVSWWTDHSHTFKQVSRCARBKIWNJYC");
    msg.flags = 178U;
    const char tmp_msg_0[] = {28, -4, -108, 59, -59, 119, 37, 115, -97, -91, -97, -1, 3, 83, -31, -57, 66, 70, 103, 10, 0, 60, 116, -25, -8, -95, 2, -110, -37, 69, -28, 113, -56, 123, 63, -54, 99, -35, 82, -114, -113, -27, 63, 49, -33, 41, 46, -28, 69, 74, 42, -55, 45, -49};
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
    msg.setTimeStamp(0.21668673700712593);
    msg.setSource(39548U);
    msg.setSourceEntity(222U);
    msg.setDestination(64827U);
    msg.setDestinationEntity(44U);
    msg.seq = 17844U;
    msg.value = 16U;
    msg.error.assign("WNPTLVXJLTKDGSSGAJNEXZDCFAGQTFDGBFZENPEPKADKDHKFPCSQQAHESWBMQMBOGLRNSAYHKZVVBUHWRCCIMKAFOGFXOBYGROAQVGJZIXURIRIDYFKLQHCDYQUYWJOYIXHNJHEPJAURVUBJZWLTHSPMXESMKO");

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
    msg.setTimeStamp(0.5909468300829259);
    msg.setSource(49907U);
    msg.setSourceEntity(39U);
    msg.setDestination(47702U);
    msg.setDestinationEntity(176U);
    msg.seq = 50238U;
    msg.value = 126U;
    msg.error.assign("KNSKVMACSJLNGPMNXVHYRRBDKIXWIAPXSNXWUCSIXOLCFIKBCIKFYVEORMAZTOYVVXFCOUJZURPJIJMMWESPOHFHKMNXJMEZWEQPVLJTSBWUQLEWBIDTFGDCINHGTRPRQBCOYGEOKWHZIKGBHATQFBZYXVSZWXKMQADNLDILVHAAYPAEDFCJUN");

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
    msg.setTimeStamp(0.7327206001082782);
    msg.setSource(42540U);
    msg.setSourceEntity(198U);
    msg.setDestination(30249U);
    msg.setDestinationEntity(23U);
    msg.seq = 7914U;
    msg.value = 84U;
    msg.error.assign("IGLRMYLVFUWRKPHRQEZFEJNBTVPCDJGTWENYFAMUNYPAUWYQGKDNWMHISHALFLTRDMIFRSJLBMCXWXLSYUOGGZVJQHICNOHHXTRSCNPFGGAVVDQDTFUAKRVFJZTMQAMOBNAJHAQOIIEUHCIXKBCKVYPTSDEKBKTCZBJKON");

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
    msg.setTimeStamp(0.3871740868092466);
    msg.setSource(8131U);
    msg.setSourceEntity(84U);
    msg.setDestination(45639U);
    msg.setDestinationEntity(130U);
    msg.seq = 50901U;
    msg.sys.assign("FUBDCPASIHVAELQIMFCPZHCYYWFMXYJGDQNKEIACIIKCNLRKITIFPGRSKMOWLNDIGYBLQRXGDFTUZHZRKADGKENCJRCDKXTTYZXTVVSFLQNILJBJOWXQRZSZEEZBEJTMRPJRFPJVANYPTZHOMATUQAYODBSTVLIOEWNBHOHRWHEYCRYSNPHFOZKVNTGUMDXVUAXUBMQBWPLBXWECAMOMCGFPUH");
    msg.value = 0.5250088715437025;

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
    msg.setTimeStamp(0.27559786670664665);
    msg.setSource(21837U);
    msg.setSourceEntity(196U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(246U);
    msg.seq = 38003U;
    msg.sys.assign("LUWFBYRHYAKRJITPCGUXMPHBISPHXLMEBWALCKHQNWQNMWVOMGZYQDHWKVFXLCSPRLMUHGLFQQXAQMZUPQTDCVBEAOWHOVSARGHYFZONMKW");
    msg.value = 0.8301722993235192;

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
    msg.setTimeStamp(0.8624735365428795);
    msg.setSource(5767U);
    msg.setSourceEntity(163U);
    msg.setDestination(26641U);
    msg.setDestinationEntity(160U);
    msg.seq = 63701U;
    msg.sys.assign("ZJBHKKJMWFJOMHLSSFWICLWFKWRTIQVKGQUYEBIXJJSRLDQPIMNTOAPOXPINGYQXHLCVRYGKHADZXTJOOTLMAUBTHCHHOUFSWEMVCOUSWFENKGAZPRKVGDGYDFORVHNQZSEZOVBWRHXLCIGNPTVKXCZWSEDGUEIYBSYPFCXZUSMGXQLDAAEUJCNAPGBEZBQYRQNMAFUTAQYQTZYDCTKDBWFPNJWVNCKXAFBZIHJRMNEIDMJDIXSVLMYOPUVR");
    msg.value = 0.8034947917116305;

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
    msg.setTimeStamp(0.7320294158007987);
    msg.setSource(3986U);
    msg.setSourceEntity(152U);
    msg.setDestination(44016U);
    msg.setDestinationEntity(59U);
    msg.action = 63U;
    msg.longain = 0.29086912233090356;
    msg.latgain = 0.1410829850861166;
    msg.bondthick = 3915361533U;
    msg.leadgain = 0.8875283222272446;
    msg.deconflgain = 0.6104567660247182;

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
    msg.setTimeStamp(0.28709952098522507);
    msg.setSource(36733U);
    msg.setSourceEntity(149U);
    msg.setDestination(33053U);
    msg.setDestinationEntity(102U);
    msg.action = 128U;
    msg.longain = 0.660104215140718;
    msg.latgain = 0.9704831874010753;
    msg.bondthick = 3315466011U;
    msg.leadgain = 0.3325865257478209;
    msg.deconflgain = 0.09641985854592994;

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
    msg.setTimeStamp(0.3778695502791446);
    msg.setSource(35745U);
    msg.setSourceEntity(197U);
    msg.setDestination(23528U);
    msg.setDestinationEntity(44U);
    msg.action = 82U;
    msg.longain = 0.642724338706154;
    msg.latgain = 0.2404276892239926;
    msg.bondthick = 170443421U;
    msg.leadgain = 0.8123718369666476;
    msg.deconflgain = 0.27103869924700075;

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
    msg.setTimeStamp(0.18036370101340382);
    msg.setSource(34642U);
    msg.setSourceEntity(125U);
    msg.setDestination(54333U);
    msg.setDestinationEntity(148U);
    msg.err_mean = 0.8199015280672292;
    msg.dist_min_abs = 0.06793775267014535;
    msg.dist_min_mean = 0.6705455163730224;

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
    msg.setTimeStamp(0.12524839362216933);
    msg.setSource(58428U);
    msg.setSourceEntity(82U);
    msg.setDestination(18477U);
    msg.setDestinationEntity(121U);
    msg.err_mean = 0.025070228413405338;
    msg.dist_min_abs = 0.7562019691630854;
    msg.dist_min_mean = 0.2206006657857681;

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
    msg.setTimeStamp(0.23257192577204655);
    msg.setSource(52890U);
    msg.setSourceEntity(71U);
    msg.setDestination(10133U);
    msg.setDestinationEntity(244U);
    msg.err_mean = 0.37601649330350084;
    msg.dist_min_abs = 0.5822970086339069;
    msg.dist_min_mean = 0.6704876403037967;

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
    msg.setTimeStamp(0.8646912803702339);
    msg.setSource(48048U);
    msg.setSourceEntity(112U);
    msg.setDestination(49408U);
    msg.setDestinationEntity(247U);
    msg.action = 186U;
    msg.lon_gain = 0.15695776474925294;
    msg.lat_gain = 0.20364426578116657;
    msg.bond_thick = 0.00486455786452622;
    msg.lead_gain = 0.5851754600049323;
    msg.deconfl_gain = 0.7404893274110363;
    msg.accel_switch_gain = 0.3163684942209789;
    msg.safe_dist = 0.43711804237312313;
    msg.deconflict_offset = 0.1656990725423113;
    msg.accel_safe_margin = 0.06650570713781923;
    msg.accel_lim_x = 0.34990749813682076;

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
    msg.setTimeStamp(0.20709117891943896);
    msg.setSource(63122U);
    msg.setSourceEntity(215U);
    msg.setDestination(52537U);
    msg.setDestinationEntity(92U);
    msg.action = 65U;
    msg.lon_gain = 0.3439013515520568;
    msg.lat_gain = 0.6769037092690477;
    msg.bond_thick = 0.2010498852780347;
    msg.lead_gain = 0.6918935604533447;
    msg.deconfl_gain = 0.6242156838715752;
    msg.accel_switch_gain = 0.48688186033291014;
    msg.safe_dist = 0.010198409461393831;
    msg.deconflict_offset = 0.8067188183590229;
    msg.accel_safe_margin = 0.08910715299146688;
    msg.accel_lim_x = 0.08434743628171315;

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
    msg.setTimeStamp(0.6589384852920324);
    msg.setSource(9884U);
    msg.setSourceEntity(103U);
    msg.setDestination(30577U);
    msg.setDestinationEntity(177U);
    msg.action = 139U;
    msg.lon_gain = 0.19326208644236498;
    msg.lat_gain = 0.689284581038756;
    msg.bond_thick = 0.4402582927658307;
    msg.lead_gain = 0.759809757310852;
    msg.deconfl_gain = 0.4612584378962753;
    msg.accel_switch_gain = 0.794774288974318;
    msg.safe_dist = 0.8891741892690251;
    msg.deconflict_offset = 0.86948826104991;
    msg.accel_safe_margin = 0.4990035576433043;
    msg.accel_lim_x = 0.684293486908471;

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
    msg.setTimeStamp(0.6874184726750793);
    msg.setSource(58236U);
    msg.setSourceEntity(161U);
    msg.setDestination(6598U);
    msg.setDestinationEntity(136U);
    msg.type = 196U;
    msg.op = 142U;
    msg.err_mean = 0.00485915403723669;
    msg.dist_min_abs = 0.9422792983834448;
    msg.dist_min_mean = 0.17700341054704627;
    msg.roll_rate_mean = 0.3188640541992793;
    msg.time = 0.6966000260635211;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 21U;
    tmp_msg_0.lon_gain = 0.36957587586476137;
    tmp_msg_0.lat_gain = 0.16458515704353782;
    tmp_msg_0.bond_thick = 0.3378272088225731;
    tmp_msg_0.lead_gain = 0.6851622540402162;
    tmp_msg_0.deconfl_gain = 0.012131786933084254;
    tmp_msg_0.accel_switch_gain = 0.8407672560723866;
    tmp_msg_0.safe_dist = 0.15420992104171938;
    tmp_msg_0.deconflict_offset = 0.342001664151251;
    tmp_msg_0.accel_safe_margin = 0.6904686083207543;
    tmp_msg_0.accel_lim_x = 0.21761095035496958;
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
    msg.setTimeStamp(0.1531250839266115);
    msg.setSource(53865U);
    msg.setSourceEntity(188U);
    msg.setDestination(48731U);
    msg.setDestinationEntity(226U);
    msg.type = 4U;
    msg.op = 174U;
    msg.err_mean = 0.23745815693642502;
    msg.dist_min_abs = 0.5552886775608517;
    msg.dist_min_mean = 0.06665685302318702;
    msg.roll_rate_mean = 0.7681097434547685;
    msg.time = 0.670022402618661;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 214U;
    tmp_msg_0.lon_gain = 0.43617255870363514;
    tmp_msg_0.lat_gain = 0.43673644756356556;
    tmp_msg_0.bond_thick = 0.8989886740859446;
    tmp_msg_0.lead_gain = 0.9250823339739284;
    tmp_msg_0.deconfl_gain = 0.49064609296917394;
    tmp_msg_0.accel_switch_gain = 0.7130192353192293;
    tmp_msg_0.safe_dist = 0.27324117544493776;
    tmp_msg_0.deconflict_offset = 0.8607051803652803;
    tmp_msg_0.accel_safe_margin = 0.22851925903491366;
    tmp_msg_0.accel_lim_x = 0.6759170507725952;
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
    msg.setTimeStamp(0.36434349365206375);
    msg.setSource(11807U);
    msg.setSourceEntity(222U);
    msg.setDestination(59556U);
    msg.setDestinationEntity(162U);
    msg.type = 139U;
    msg.op = 192U;
    msg.err_mean = 0.5901264436677915;
    msg.dist_min_abs = 0.4911765248800476;
    msg.dist_min_mean = 0.2355503939269039;
    msg.roll_rate_mean = 0.8377274890884951;
    msg.time = 0.5670472875113303;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 218U;
    tmp_msg_0.lon_gain = 0.9209928264416927;
    tmp_msg_0.lat_gain = 0.2573800184987217;
    tmp_msg_0.bond_thick = 0.1340487332679664;
    tmp_msg_0.lead_gain = 0.019604418236979115;
    tmp_msg_0.deconfl_gain = 0.9292680723105519;
    tmp_msg_0.accel_switch_gain = 0.5342994621952515;
    tmp_msg_0.safe_dist = 0.12965020297434715;
    tmp_msg_0.deconflict_offset = 0.17948860881714146;
    tmp_msg_0.accel_safe_margin = 0.577465421532854;
    tmp_msg_0.accel_lim_x = 0.07613041549997612;
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
    msg.setTimeStamp(0.32623324749853);
    msg.setSource(60291U);
    msg.setSourceEntity(195U);
    msg.setDestination(3609U);
    msg.setDestinationEntity(79U);
    msg.uid = 152U;
    msg.frag_number = 220U;
    msg.num_frags = 93U;
    const char tmp_msg_0[] = {68, -33, 107, -99, 54, 16, 89, 100, 101, -24, -23, 102, -37, 27, 96, 108, -124, 82, 52, 20, -97, 120, 120, -102, 8, 114, -49, 78, -110, 109, 12, 69, 88, -31, 102, -125, -12, 40, -101, 96, 47, 38, -24, 14, -49, -98, -122, 106, 62, -67, -61, -65, -54, 74, 124, -65, 111, -37, 2, -60, -112, -6};
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
    msg.setTimeStamp(0.8217070512996053);
    msg.setSource(4129U);
    msg.setSourceEntity(41U);
    msg.setDestination(4760U);
    msg.setDestinationEntity(183U);
    msg.uid = 187U;
    msg.frag_number = 37U;
    msg.num_frags = 116U;
    const char tmp_msg_0[] = {94, 116, 2, 25, 1, -96, 32, -77, 125, -102, -123, -6, 61, -81, -106, 88, -49, -6, 46, -83, 34, -126, 67, -112, -100, -59, 92, 93, 41, 23, -122, -88, 72, 97, -47, -70, -9, 24, -44, -102, -1, 109, 62, -26, -37, 28, -87, -92, 11, -94, 32, -116, -4, 53, -92, -101, -105, 55, 95};
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
    msg.setTimeStamp(0.6830309203969649);
    msg.setSource(1533U);
    msg.setSourceEntity(94U);
    msg.setDestination(58230U);
    msg.setDestinationEntity(131U);
    msg.uid = 144U;
    msg.frag_number = 14U;
    msg.num_frags = 140U;
    const char tmp_msg_0[] = {-98, -124, 102, 23, 48, 25, -97, -114, 118, -36, -24, 22, 66, -110, 3, 30, 70, -61, -110, -45, 56, 22, -128, 97, -102, -49, -71, -78, -112, 5, -68, 30, -94, 93, -8, -92, -44, -45, -38, -124, 25, -101, -102, 91, 29, -64, 8, 112, 65, -41, -72, -28, 77, 30, 38, 16, 117, 25, 118, 102, -95, -11, -76, -73, 43, -40, -64, -83, 89, 17, -111, -125, 74, 13, -30, 24, 47, -2, -46, -92, 32, 3, 90, 84, -110, 107, 109, -86, -95, -11, 47, 4, -34, -124, -76, -84, 85, 91, 30, 9, 123, 84, 71, 91, 63, 1, 87, -31, -66, 116, -114, 37, -102, 30, -27, 17, -101, 68, 102, -8, -60, -61, 57, 65, 126, 81, 119, -107, 45, 95, -112, 111, -33, 109, -41, 31, 84, 24, -94, -82, -71, 81, -23, -113, 90, 45, 53, 97, 39, 56, -17, 50, 81, 42, 48, -40, 22, -63, -89};
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
    msg.setTimeStamp(0.292478779861968);
    msg.setSource(8566U);
    msg.setSourceEntity(214U);
    msg.setDestination(38023U);
    msg.setDestinationEntity(170U);
    msg.content_type.assign("RRVEYNDRLLNMRPKLSZABRUGJSTJJMLDDUMCSQHGAEJWP");
    const char tmp_msg_0[] = {-18, -107, -109, -56, 56, 52, -38, -94, 61, -78, 96, -103, -14, -72, -90, 70, 15, 107, -78, -62, 46, -122, -21, -126, 122, -51, 33, 17, -26, -84, -107, 28, 97, 36, 87, -35, -60, 103, -51, -59, 8, -101, -35, 20, 106, 115, -40, -111, 123, 19, 24, -9, 94, 79, -100, -54, -34, -7, -27, -98, -103, -43, 37, 105, -47, 94, -38, 16, 113, 36, 48, -104, -86, 50, -118, 75, -24, 55, 100, -108, -4, -74, -58, 82, -99, -128, 109, 82, -67, 95, 18, 55, -98, 76, 16, 125, 89, 48, -60, 18, -35, 58, 57, 24, -112, 70, 79, 40, -29, -55, -46, 62, -59, -14, -102, -40, -109, -120, 68, 107, 101, 23, 34, -80, -35, -122, 93, -102, -50, -91, 40, 48, -80, 76, 19, 88, -52, -109, 110, -55, 13, -22, 109, 50, 4, -24, 36, 23, 94, -68, 87, 22, 55, 112, -107, -64, 84, -6, 27, -32, -80, -20, -122, -94, -89, 5, 7, 1, 26, 96, 47, -47, 94, 102, 88, -113, 31, 6, -29, -97, 42, -24, 31, -58, 78, 111, 82};
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
    msg.setTimeStamp(0.3266091185251452);
    msg.setSource(33088U);
    msg.setSourceEntity(98U);
    msg.setDestination(33328U);
    msg.setDestinationEntity(67U);
    msg.content_type.assign("TQMCVNAWEYVHQYNVLHXBAMAITBOAKBYFHUKKPTSZEMWSCEEYYELUSODXTZJGVYGIAIMTUJXXFCLAWPVTXXIQUNCXDEOKWONDMOJBOSBOEBCQDEFSQVGLRCZPWVYZAQDPCKIGYLOZNWDWXSHKWNRISRHLWIJKHLIBVJEMHMR");
    const char tmp_msg_0[] = {47, 59, 32, 87, -126, 88, 46, 16, -94, -61, 0, -4, 33, 57, -22, 38, -31, 33, -92, -114, -16, 92, -27, 25, 65, -41, 6, -30, -103, -126, -28, 49, -22, 78, 101, 96, 22, 105, -26, -13, -28, -98, 55, -91, 83, -45, 125, 21, -31, 82, -10, -22, 0, -120, 15, -37, -29, -83, -41, 115, -97, 51, 101, -112, -21, -45, -59, 7, -107, -64, -94, 114, 112, 63, -21, -50, 86, 0, 108, -72, 74, -19, 114, -120, 119, 82, 126, 42, -121, -66, 6, -105, -108, -35, -116, 47, 25, -25, 78, 75, 19, 72, 34};
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
    msg.setTimeStamp(0.33185938029349615);
    msg.setSource(26144U);
    msg.setSourceEntity(107U);
    msg.setDestination(65123U);
    msg.setDestinationEntity(154U);
    msg.content_type.assign("WVGCEARTPIHDBGLWWGDFNBZLOIBJMSFTBKCYPCZFINXFVQLAFSNFSCMMAIILBPBTDOVWZQRUAJHYKTLQEUMNZZAXXHUIDMKJEIPHYSOVAQGFXBXRNZNVTB");
    const char tmp_msg_0[] = {24, 88, 9, 17, -18, 116, -108, 51, -110, -31, 101, -110, -41, 83, 59, 66, -94, -69, -27, 73, -3, 12, 44, 92, -76, -64, 98, -84, 34, 65, -36, -82, -78, 53, -16, -6, -71, -126, 22, -115, -26, 76, 124, -37, -14, -109, 120, -25, -49, -22, -122, -38, -9, -39, -109, -92, -46, 92, 41, 72, 4, -67, 105, -10, 73, 121, 124, 37};
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
    msg.setTimeStamp(0.7506109115368785);
    msg.setSource(41886U);
    msg.setSourceEntity(10U);
    msg.setDestination(14911U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.7585321672976131);
    msg.setSource(53952U);
    msg.setSourceEntity(104U);
    msg.setDestination(38238U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.8069427728952266);
    msg.setSource(25049U);
    msg.setSourceEntity(160U);
    msg.setDestination(28359U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.8576835554245402);
    msg.setSource(4274U);
    msg.setSourceEntity(49U);
    msg.setDestination(34228U);
    msg.setDestinationEntity(252U);
    msg.target = 30524U;
    msg.bearing = 0.9009463602408264;
    msg.elevation = 0.8547735662914044;

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
    msg.setTimeStamp(0.5752114635183899);
    msg.setSource(22932U);
    msg.setSourceEntity(22U);
    msg.setDestination(63543U);
    msg.setDestinationEntity(203U);
    msg.target = 48533U;
    msg.bearing = 0.45497014856130646;
    msg.elevation = 0.602792615419304;

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
    msg.setTimeStamp(0.48945993652130615);
    msg.setSource(1487U);
    msg.setSourceEntity(185U);
    msg.setDestination(35905U);
    msg.setDestinationEntity(64U);
    msg.target = 23311U;
    msg.bearing = 0.7322765816379239;
    msg.elevation = 0.4121831344207383;

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
    msg.setTimeStamp(0.6695030566384734);
    msg.setSource(18327U);
    msg.setSourceEntity(97U);
    msg.setDestination(29433U);
    msg.setDestinationEntity(151U);
    msg.target = 54617U;
    msg.x = 0.3968685252960582;
    msg.y = 0.10129398091241704;
    msg.z = 0.20179304067026615;

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
    msg.setTimeStamp(0.4733619714583205);
    msg.setSource(33901U);
    msg.setSourceEntity(87U);
    msg.setDestination(38081U);
    msg.setDestinationEntity(220U);
    msg.target = 16855U;
    msg.x = 0.16245145119499727;
    msg.y = 0.37585692692291073;
    msg.z = 0.4992724081499157;

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
    msg.setTimeStamp(0.2117728696000445);
    msg.setSource(14640U);
    msg.setSourceEntity(74U);
    msg.setDestination(1057U);
    msg.setDestinationEntity(41U);
    msg.target = 11060U;
    msg.x = 0.4983885800253346;
    msg.y = 0.12601063007530888;
    msg.z = 0.3943948117732433;

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
    msg.setTimeStamp(0.8164413093928623);
    msg.setSource(30230U);
    msg.setSourceEntity(217U);
    msg.setDestination(64522U);
    msg.setDestinationEntity(17U);
    msg.target = 46379U;
    msg.lat = 0.8806550104855413;
    msg.lon = 0.5769110429094495;
    msg.z_units = 147U;
    msg.z = 0.3824104172996228;

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
    msg.setTimeStamp(0.5427606696171826);
    msg.setSource(60173U);
    msg.setSourceEntity(219U);
    msg.setDestination(4065U);
    msg.setDestinationEntity(178U);
    msg.target = 56787U;
    msg.lat = 0.7683447465082709;
    msg.lon = 0.6528956573010077;
    msg.z_units = 130U;
    msg.z = 0.7300328896119825;

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
    msg.setTimeStamp(0.39573539431891225);
    msg.setSource(33008U);
    msg.setSourceEntity(21U);
    msg.setDestination(39254U);
    msg.setDestinationEntity(184U);
    msg.target = 29446U;
    msg.lat = 0.1770115401411646;
    msg.lon = 0.27130008882296397;
    msg.z_units = 122U;
    msg.z = 0.4533487641891033;

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
    msg.setTimeStamp(0.8125599735972685);
    msg.setSource(33324U);
    msg.setSourceEntity(238U);
    msg.setDestination(51660U);
    msg.setDestinationEntity(6U);
    msg.locale.assign("ZDOXYDKDEPEDJOBJIVZIVWGANLYSUGFCCOYJGKFNTYQZJNGBUSZTNLNGAVEJBYUFEMHCUQRJOQTFWCDESXOFLHCHTMAHOA");
    const char tmp_msg_0[] = {110, 110, -2, 41, -36, -22, 12, -66, 59, -84, 109, -83, 3, -54, -64, 108, -1, 51, -118, -107, 91, -44, 84, 106, -107, -115, 58, 109, 100, 40, -33, 119, 44, -77, 40, 116, -110, -37, 65, 82, -103, -9, -99, -120, -38, -2, 121, -57, 47, 84, -122, 72, 30, -125, -17, -23, -11, -45, 108, 24, 93, -26, -23, 18, -4, 5, -52, -5, -28, -68, 106, 69, 73, -5, 16, 120, -53, -123, 99, -84, 83, -55, -76, 104, 53, 38, 55, -56, 4, -115, 74, 40, -45, 57, -50, -81, -33, 119, 83, -97, -12, -3, -119, 68, 58, -57, -37, 109, 46, 32, -9, -8, -78, -37, 51, -33, 112, -18, -47, 2, 40, -89, -106, 74, -124, -27, 63, -37, -85, 105, -51, -116, 34, -106, -74, -53, -118, 19, 32, -6, 98, 112, -3, -40, 58, -93, -38, -66, 124, 50, 103, -98, -75, 52, 72, 123, -85, -49, 51, 112, 101, 72, 50, 66, -30, -53, 54, -66, 19, -93, -119, -113, 52, 75, -112, -9, 104, 117, -115, -56, 75, 114, 122, 3, 61, -75, -45, 7, -88, -46, -30, -121, 38, -62, 115, -74, 32, 51, 62, -76, 80, -7, 69, 46, 68, -54, -17, 27, 73, -33, 75, 124, 92, 104, 6, 3, -39, 32, -34, 89, 45, -24, 10, -76, -53, 56, -51, -92, 102, 40, 7, 21, -86, -18, 104, -40, -52, -62, 12, -118, -28, -128, 125, -13, -93, -64, 70, -38, 17, 103, -62, 102, 68, 103};
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
    msg.setTimeStamp(0.057689314831353755);
    msg.setSource(23932U);
    msg.setSourceEntity(3U);
    msg.setDestination(52562U);
    msg.setDestinationEntity(57U);
    msg.locale.assign("SRTEJYCORDSOGSLRYULJICSXJBYHNUZERGCSOVQQ");
    const char tmp_msg_0[] = {-58, 84, 57, -15, -105, 72, 43, 7, -100, -12, 26, 61, -103, -49, 24, 72, -70, -28, -66, -97, 54, 14, -73, 17, 37, 117, 43, -26, -97, -36, 83, -106, -78, -97, -96, -103, 23, -73, -58, 63, -95, 15, -65, 80, 90, -86, 86, -95, -52, 56, 4, 5, -122, 5, 8, 62, 73, 16, -89, -16, 14, 86, 106, 73, -80, 13, 51, 106, -12, 105, -63, -87, -49, -119, -70, -110, -30, 11, -29, 0, 110, 39, -48, -10, -69, 121, 17, 64, 11, -53, 39, -19, -11, 34, 75, -99, -76, 114, 112, -118, 67, -2, -66, -53, 104, 84, -22, -43, -42, -16, 97, -111, -50, -106, 91, 78, -18, -104, 111, 67, -83, 66, -45, -85, 64, 101, 26, 36, -16, 48, 124, 114, 13, 70, -11, -47, -28, -73, -40, -56, 24, 80, -63, 34, -29, -104, -42, 98, -75, -78, -109, 100, -33, 68, 27, 62, -107, 60, -5, 9, 14, 15, -104, 97, 100, -17, -97, 57, 65, 18, -50, -113, -75, -24, -113, 12, 30, 115, -48, -45, 81, -39, -115, 2, 22, 115, 121, -69, 54, -22, -87, -51, -48, 38, 57, 82, 54, 5, 63, 27, 92, 11, 50, 107, -63, 62, 94, 120, 101, 110, 47, 112, 84, 99, -126, -108, -50, -112, -53, 10, 89, 113, 17, 31, 98, -128, 17, -32, -44, -2, 46, 14, -99, 3, 61, -58, -89, 99};
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
    msg.setTimeStamp(0.21762793847488415);
    msg.setSource(43853U);
    msg.setSourceEntity(177U);
    msg.setDestination(65317U);
    msg.setDestinationEntity(79U);
    msg.locale.assign("PYKMTESDKXQDNZSJKIPKYIXBCTPUMUHJCBRDEWBNCPWOKKYXMROTEDNAUDPXTGAEHAOPEIBCFSXFOILPXVYMJHQMKZRPZLHVYJAHTXSRGSNXHSOWBQJSFLQMRITQJXOLWWZDNQVCJGYZTLZOYFMMCJKVBZDZCTAVOAVQIHG");
    const char tmp_msg_0[] = {74, -4, 33, -37, 73, 35, -23, 78, -41, 66, 58, -93, -94, -113, -106, 77, 39, -109, 46, -35, 6, 116, 76, 113, 90, 126, 23, 108, -58, 73, -78, -82, 85, 111, -31, -70, 75, -3, -1, 14, -107, 111, 91, 17, -117, 94, 113, 43, -76, 75, 65, -120, 96, -56, 11, -37, 16, -13, -100, 76, -16, -115, 92, -86, -95, -61, 125, -57, 121, -90, 26, -83, -1, 21, 51, 75, -63, 103, 123, -31, -36, 70, 21, 27, -58, -56, 123, -25, 75, 32, 101, -51, -62, 122, 1, -19, -72, 21, 15, -28, 71, 11, -83, 93, 39, -35, 114, -110, -57, 53, -123, -4, -125, -109, -128, -93};
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
    msg.setTimeStamp(0.3416985506155955);
    msg.setSource(24294U);
    msg.setSourceEntity(101U);
    msg.setDestination(45802U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.9835694080801256);
    msg.setSource(49225U);
    msg.setSourceEntity(145U);
    msg.setDestination(35428U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.7707313770727569);
    msg.setSource(56727U);
    msg.setSourceEntity(24U);
    msg.setDestination(3917U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.4710130953811493);
    msg.setSource(35620U);
    msg.setSourceEntity(42U);
    msg.setDestination(12297U);
    msg.setDestinationEntity(36U);
    const char tmp_msg_0[] = {106, -43, 117, -109, -79, -24, -117, 115, -22, -100, -75, -19, -36, 110, 44, -68, 123, -39, 35, -22, -35, -39, -6, 26, -110, -15, -40, -36, -60, 6, 17, -15, 36, -58, -76, -114, 2, -124, 22, 38, 41, 2, -94, -88, -62, 80, 107, 110, -3, 10, -69, 62, 65, 78, 83, 34, 85, -103, -47, -36, 43, -119, -109, 75, -63, 111, 57, -113, 69, 0, 40, 81, 64, -122, 2, 107, -87, 53, 49, -72, 55, -16, -108, 93, -32, -68, 91, 93, -88, -13, -83, 26, 36, 121, -8, 123, 110, -31, -19, -98, -126, -101, -71, 34, 60};
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
    msg.setTimeStamp(0.31306976085075655);
    msg.setSource(28908U);
    msg.setSourceEntity(209U);
    msg.setDestination(48864U);
    msg.setDestinationEntity(103U);
    const char tmp_msg_0[] = {-55, 125, -45, -23, -84, -31, 104, 55, 56, 85, -109, 112, 3, -116, 91, -78, -15, -8, 89, -45, -13, -29, -128, 61, 109, 126, -118, 104, -49, -85, -54, -97, -65, 9, -109, 23, -82, 100, -107, 109, -108, -100, -17, -48, -127, -63, 101};
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
    msg.setTimeStamp(0.6365590666021236);
    msg.setSource(3702U);
    msg.setSourceEntity(93U);
    msg.setDestination(36794U);
    msg.setDestinationEntity(251U);
    const char tmp_msg_0[] = {-19, 66, -125, -126, 38, 62, -3, -94, 34, 116, -8, 22, 75, -13, -41, 89, -74, -98, 90, -14, -22, -56, -35, -41, -63, 11, -48, -41, 36, -35, 86, 114, 28, -57, -32, 2, 50, -96, -53, 13, 7, -107, -88, -96, -16, -47, -76, -34, 60, -62, 42, 13, 67, -67, -107, 84, -93, 106, 33, -110, -51, -94, 44, -30, -2, 120, 14, -48, 1, -117, -9, 0, -108, 22, 96, -113, 99, -68, -122, -10, -4, 72, -26, -37, -49, 55, 48, 13, 78, 27, -18, -63, 42, -2, -5, 99, -128, -87, 100, 112, -56, 108, 92, 59, 90, -20, -48, 77, -94, 27, -18, -89, 16, 99, 32, -87, -70, 44, 18, -94, -49, 53, 105, 48, -6, 48, 112, 37, -2, -90};
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
    msg.setTimeStamp(0.02757642821509121);
    msg.setSource(36517U);
    msg.setSourceEntity(243U);
    msg.setDestination(40229U);
    msg.setDestinationEntity(242U);
    msg.json.assign("LZYGSZOHJDWBGNXHNBOWKJMLVUHNIBFMRQYXHMILMGPBOCQFRDCRLKBTQIMTOZFRARMSWYDMJOOQJZWHQEEVPUGKJDSCYLRODXQCUAKLMFFUZHTFTJTSCAWPJNNAWJXDXUVSVWABSPPKWZYTAEQMNJIIEZWBBFLPXCYPRTGEPQLDDEIHHLCEYK");

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
    msg.setTimeStamp(0.6336891893455576);
    msg.setSource(20571U);
    msg.setSourceEntity(238U);
    msg.setDestination(32846U);
    msg.setDestinationEntity(0U);
    msg.json.assign("GJGSYYMZXXFWIDLFFWELRMALSLTUEHNFASTXEECVCTRBWYJBZSPXKHZDCNGOWDNJIWVCS");

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
    msg.setTimeStamp(0.6932023328770557);
    msg.setSource(36129U);
    msg.setSourceEntity(153U);
    msg.setDestination(31202U);
    msg.setDestinationEntity(196U);
    msg.json.assign("NXFEINLWZSWDNZBCXBMAHJZLLOQQHGSIARWGACJTGGCOUXVJSAMBDKRHQTPGYTDHTEQGQEVBA");

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
    msg.setTimeStamp(0.5221589088878247);
    msg.setSource(42813U);
    msg.setSourceEntity(57U);
    msg.setDestination(23758U);
    msg.setDestinationEntity(67U);
    msg.highpass = 0.3095579550525862;
    msg.adot = 0.012909377478181439;
    msg.slope_compensation = 0.7149127612223557;
    msg.slope_compensation_difference = 0.9021396708057998;
    msg.altitude = 0.5013962947262879;
    msg.auto_altitude = 0.6795907454256788;

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
    msg.setTimeStamp(0.19221650428397252);
    msg.setSource(13703U);
    msg.setSourceEntity(108U);
    msg.setDestination(19061U);
    msg.setDestinationEntity(171U);
    msg.highpass = 0.5542540429227957;
    msg.adot = 0.6794182654526515;
    msg.slope_compensation = 0.81326953976127;
    msg.slope_compensation_difference = 0.33618555579845555;
    msg.altitude = 0.6286965417271494;
    msg.auto_altitude = 0.19811018976357087;

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
    msg.setTimeStamp(0.28775505993974115);
    msg.setSource(33681U);
    msg.setSourceEntity(200U);
    msg.setDestination(40416U);
    msg.setDestinationEntity(186U);
    msg.highpass = 0.46476375431765116;
    msg.adot = 0.9546055001259351;
    msg.slope_compensation = 0.5527354050371887;
    msg.slope_compensation_difference = 0.2823980266584233;
    msg.altitude = 0.48609556060691406;
    msg.auto_altitude = 0.37954607906774107;

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
    msg.setTimeStamp(0.44670586237190246);
    msg.setSource(953U);
    msg.setSourceEntity(125U);
    msg.setDestination(60724U);
    msg.setDestinationEntity(74U);
    msg.remote_control_allowed = 239U;
    msg.remote_control_enabled = 235U;
    msg.remote_control_active = 60U;
    msg.depth_only_control_enabled = 14U;
    msg.direct_control_enabled = 219U;
    msg.return_to_closest_point_on_line = 232U;
    msg.on_shore_power = 88U;
    msg.latitude = 0.5153633428626414;
    msg.longitude = 0.7780913182115958;
    msg.depth = 0.06811679314642793;
    msg.depth_ref = 0.9119337837222711;
    msg.altitude = 0.8097313562549883;
    msg.altitude_ref = 0.20056989224853972;
    msg.pitch = 0.577349710485261;
    msg.roll = 0.47309873305450134;
    msg.rpm = 0.41763475025564023;
    msg.rpm_ref = 0.9130511148509503;
    msg.speed = 0.4093470701480123;
    msg.speed_ref = 0.8585899990738579;
    msg.heading = 0.5435445148715411;
    msg.heading_rate = 0.7733001234458076;
    msg.heading_ref = 0.6174514193450735;
    msg.mission_state = 53U;
    msg.leg = -432332642450157251;

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
    msg.setTimeStamp(0.7309666173790242);
    msg.setSource(44948U);
    msg.setSourceEntity(195U);
    msg.setDestination(28691U);
    msg.setDestinationEntity(81U);
    msg.remote_control_allowed = 86U;
    msg.remote_control_enabled = 10U;
    msg.remote_control_active = 163U;
    msg.depth_only_control_enabled = 183U;
    msg.direct_control_enabled = 244U;
    msg.return_to_closest_point_on_line = 123U;
    msg.on_shore_power = 4U;
    msg.latitude = 0.6360193667792129;
    msg.longitude = 0.20943697957058216;
    msg.depth = 0.3201093168121171;
    msg.depth_ref = 0.46986900273915544;
    msg.altitude = 0.38363190748747045;
    msg.altitude_ref = 0.24921345117723726;
    msg.pitch = 0.8806420341565144;
    msg.roll = 0.37150742183857266;
    msg.rpm = 0.2870237434473828;
    msg.rpm_ref = 0.5237257320397882;
    msg.speed = 0.8670734484509485;
    msg.speed_ref = 0.7633894121632299;
    msg.heading = 0.7676931499990025;
    msg.heading_rate = 0.5105314561956653;
    msg.heading_ref = 0.3466659001653781;
    msg.mission_state = 122U;
    msg.leg = -1919826317547646875;

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
    msg.setTimeStamp(0.7358641952997605);
    msg.setSource(16774U);
    msg.setSourceEntity(122U);
    msg.setDestination(61209U);
    msg.setDestinationEntity(147U);
    msg.remote_control_allowed = 39U;
    msg.remote_control_enabled = 12U;
    msg.remote_control_active = 232U;
    msg.depth_only_control_enabled = 65U;
    msg.direct_control_enabled = 201U;
    msg.return_to_closest_point_on_line = 11U;
    msg.on_shore_power = 247U;
    msg.latitude = 0.32370321061426;
    msg.longitude = 0.4509050768704964;
    msg.depth = 0.9940029901035344;
    msg.depth_ref = 0.26597309671776803;
    msg.altitude = 0.8849566668646905;
    msg.altitude_ref = 0.1383293983265893;
    msg.pitch = 0.9165991742844322;
    msg.roll = 0.9467794836731628;
    msg.rpm = 0.026135336110691965;
    msg.rpm_ref = 0.3486646907379859;
    msg.speed = 0.8938739071659222;
    msg.speed_ref = 0.03995479023384352;
    msg.heading = 0.6637290383649763;
    msg.heading_rate = 0.8959687816852012;
    msg.heading_ref = 0.5005177284647642;
    msg.mission_state = 188U;
    msg.leg = 4908467649504119258;

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
    msg.setTimeStamp(0.9096242466520934);
    msg.setSource(53219U);
    msg.setSourceEntity(116U);
    msg.setDestination(6136U);
    msg.setDestinationEntity(248U);
    msg.name.assign("FIDRONLFLQWP");
    msg.arg1 = 0.6555235440390503;
    msg.arg2 = 0.8402135466469082;
    msg.arg3 = 0.6784748966772347;
    msg.arg4 = 0.7151424364719275;

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
    msg.setTimeStamp(0.72983701680618);
    msg.setSource(59393U);
    msg.setSourceEntity(101U);
    msg.setDestination(65297U);
    msg.setDestinationEntity(165U);
    msg.name.assign("KDWCKOTGTEXPRWA");
    msg.arg1 = 0.8258737753159716;
    msg.arg2 = 0.7983729160996024;
    msg.arg3 = 0.21039626009052614;
    msg.arg4 = 0.2579898747342645;

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
    msg.setTimeStamp(0.7489668117763045);
    msg.setSource(19356U);
    msg.setSourceEntity(24U);
    msg.setDestination(20390U);
    msg.setDestinationEntity(208U);
    msg.name.assign("BCNIJISQWSLFHSOEHKFNHDGFQQIXTZODZIUYQMASPTGLOORXCMZQVLMKVSJTNMHEKYDJYEEZAUBWAPRCNJIRCCBMGTZU");
    msg.arg1 = 0.647592300871549;
    msg.arg2 = 0.846108308164898;
    msg.arg3 = 0.6294911061110411;
    msg.arg4 = 0.902653450263994;

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
    msg.setTimeStamp(0.28681389018473047);
    msg.setSource(39481U);
    msg.setSourceEntity(155U);
    msg.setDestination(5718U);
    msg.setDestinationEntity(46U);
    msg.direction = 124U;
    msg.range1 = 0.26202700089693565;
    msg.range2 = 0.7818216626293293;
    msg.range3 = 0.15505261435945739;
    msg.range4 = 0.6925885855533082;

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
    msg.setTimeStamp(0.3012591382216764);
    msg.setSource(22780U);
    msg.setSourceEntity(154U);
    msg.setDestination(26587U);
    msg.setDestinationEntity(45U);
    msg.direction = 28U;
    msg.range1 = 0.948580467765282;
    msg.range2 = 0.6533563342044557;
    msg.range3 = 0.9222074503153587;
    msg.range4 = 0.943775223585791;

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
    msg.setTimeStamp(0.6235943288933943);
    msg.setSource(48472U);
    msg.setSourceEntity(132U);
    msg.setDestination(12445U);
    msg.setDestinationEntity(234U);
    msg.direction = 17U;
    msg.range1 = 0.6130331214308454;
    msg.range2 = 0.7634871336377249;
    msg.range3 = 0.6357916577467393;
    msg.range4 = 0.0436697269962133;

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
    msg.setTimeStamp(0.5750077771250425);
    msg.setSource(22935U);
    msg.setSourceEntity(253U);
    msg.setDestination(7932U);
    msg.setDestinationEntity(205U);
    msg.msg.assign("HSHEIZDBOGAFPVFLRVKTVVQIMLHOGQJXQ");
    msg.direction = 89U;

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
    msg.setTimeStamp(0.7262441931180569);
    msg.setSource(6310U);
    msg.setSourceEntity(213U);
    msg.setDestination(63963U);
    msg.setDestinationEntity(151U);
    msg.msg.assign("RMXTGKDQCZFBFJFRSKFUVXBFREQYKUMYNMFHPNBMYMAYXLCTOEVIYUWDPPBKGURVGBBFZEHCRQAHNKPYNTSTCZEWAESUCTNCIKENNAHDQXMLODWJAMHSZVHFVHZNGEOILWIWATUJKKSIYIXRMDEWVUDXVUJNKCCAWVIOXCTVSISIULFZWLG");
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
    msg.setTimeStamp(0.5643527823033527);
    msg.setSource(20363U);
    msg.setSourceEntity(207U);
    msg.setDestination(37166U);
    msg.setDestinationEntity(51U);
    msg.msg.assign("CEYDLSCDXGSRVLFIYJWYEVBMPXHNFQYAFCZIXOPNKOFIMDQGHHBDNJBZPUSQJZBRRMMVUSWYNZCHQHSWZJUIUEDEKLAXAIEGZALGNQXETVPWVVJRR");
    msg.direction = 234U;

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
    msg.setTimeStamp(0.905312209722607);
    msg.setSource(29905U);
    msg.setSourceEntity(106U);
    msg.setDestination(53590U);
    msg.setDestinationEntity(181U);
    msg.state = 99U;

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
    msg.setTimeStamp(0.07112938914075595);
    msg.setSource(38370U);
    msg.setSourceEntity(118U);
    msg.setDestination(2614U);
    msg.setDestinationEntity(101U);
    msg.state = 223U;

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
    msg.setTimeStamp(0.6628642283158764);
    msg.setSource(30929U);
    msg.setSourceEntity(114U);
    msg.setDestination(57653U);
    msg.setDestinationEntity(63U);
    msg.state = 78U;

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
    msg.setTimeStamp(0.2250191010441176);
    msg.setSource(12715U);
    msg.setSourceEntity(62U);
    msg.setDestination(22316U);
    msg.setDestinationEntity(208U);
    msg.dt = 0.9492283707073712;
    msg.k_d = 0.07252465449773415;
    msg.range1 = 0.3553644914268762;
    msg.range2 = 0.580523442802414;
    msg.range3 = 0.7812334750634558;
    msg.range4 = 0.500074001764371;
    msg.u = 0.39693995669991566;
    msg.v = 0.9584419869488354;
    msg.w = 0.9771606017842207;
    msg.phi = 0.7433787153851342;
    msg.theta = 0.7195672418559099;
    msg.psi = 0.260953159637606;
    msg.adot = 0.7819413527338669;

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
    msg.setTimeStamp(0.5924663998659495);
    msg.setSource(49033U);
    msg.setSourceEntity(39U);
    msg.setDestination(61965U);
    msg.setDestinationEntity(241U);
    msg.dt = 0.87955450687195;
    msg.k_d = 0.8899780007850127;
    msg.range1 = 0.9930014993069535;
    msg.range2 = 0.39381078274114834;
    msg.range3 = 0.2596602933282277;
    msg.range4 = 0.5981796613190101;
    msg.u = 0.2985918160600345;
    msg.v = 0.9701166258717396;
    msg.w = 0.5158029161767161;
    msg.phi = 0.05575554565180818;
    msg.theta = 0.743749598924895;
    msg.psi = 0.4734994933591128;
    msg.adot = 0.6840494992175403;

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
    msg.setTimeStamp(0.15326107683470158);
    msg.setSource(33988U);
    msg.setSourceEntity(23U);
    msg.setDestination(29079U);
    msg.setDestinationEntity(198U);
    msg.dt = 0.8585728152095435;
    msg.k_d = 0.0005170020755717042;
    msg.range1 = 0.6893808296478929;
    msg.range2 = 0.340511681448726;
    msg.range3 = 0.5770932545629884;
    msg.range4 = 0.7492780424507127;
    msg.u = 0.14899610226300475;
    msg.v = 0.021643073953117264;
    msg.w = 0.3285490462041041;
    msg.phi = 0.30857187383845486;
    msg.theta = 0.5206545086098328;
    msg.psi = 0.14311857528140093;
    msg.adot = 0.16507954743359898;

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
    msg.setTimeStamp(0.16937958184771884);
    msg.setSource(46886U);
    msg.setSourceEntity(180U);
    msg.setDestination(31564U);
    msg.setDestinationEntity(106U);
    msg.htime = 0.3367061194466726;
    msg.dt = 0.720556171366657;

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
    msg.setTimeStamp(0.45108050385000886);
    msg.setSource(10395U);
    msg.setSourceEntity(67U);
    msg.setDestination(46498U);
    msg.setDestinationEntity(219U);
    msg.htime = 0.6832264153505128;
    msg.dt = 0.23099115777826795;

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
    msg.setTimeStamp(0.5938958370672061);
    msg.setSource(38763U);
    msg.setSourceEntity(172U);
    msg.setDestination(35634U);
    msg.setDestinationEntity(206U);
    msg.htime = 0.1522499100665511;
    msg.dt = 0.5807896977526495;

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
    msg.setTimeStamp(0.5171708155645598);
    msg.setSource(6076U);
    msg.setSourceEntity(48U);
    msg.setDestination(37353U);
    msg.setDestinationEntity(103U);
    msg.value = 0.013095633956196284;

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
    msg.setTimeStamp(0.5472643304393228);
    msg.setSource(20915U);
    msg.setSourceEntity(115U);
    msg.setDestination(38145U);
    msg.setDestinationEntity(216U);
    msg.value = 0.3796352090397118;

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
    msg.setTimeStamp(0.6485062444270265);
    msg.setSource(54765U);
    msg.setSourceEntity(223U);
    msg.setDestination(39348U);
    msg.setDestinationEntity(174U);
    msg.value = 0.39439390276879294;

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
    msg.setTimeStamp(0.4659488963637898);
    msg.setSource(28584U);
    msg.setSourceEntity(186U);
    msg.setDestination(51333U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.682326280156349;
    msg.lon = 0.44468248429349244;

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
    msg.setTimeStamp(0.2895848028763325);
    msg.setSource(37409U);
    msg.setSourceEntity(248U);
    msg.setDestination(36621U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.5370572988282537;
    msg.lon = 0.6024368924889589;

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
    msg.setTimeStamp(0.08003601700916996);
    msg.setSource(23656U);
    msg.setSourceEntity(1U);
    msg.setDestination(48690U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.6577481151565978;
    msg.lon = 0.2076269252562739;

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
    msg.setTimeStamp(0.866695056813944);
    msg.setSource(34909U);
    msg.setSourceEntity(202U);
    msg.setDestination(7060U);
    msg.setDestinationEntity(54U);
    msg.value = 0.20676725798910245;

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
    msg.setTimeStamp(0.7528438677544304);
    msg.setSource(35098U);
    msg.setSourceEntity(191U);
    msg.setDestination(24096U);
    msg.setDestinationEntity(115U);
    msg.value = 0.4758794957566881;

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
    msg.setTimeStamp(0.5870138274007604);
    msg.setSource(9748U);
    msg.setSourceEntity(203U);
    msg.setDestination(19537U);
    msg.setDestinationEntity(28U);
    msg.value = 0.06993091999550893;

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
    msg.setTimeStamp(0.9910014325990362);
    msg.setSource(51082U);
    msg.setSourceEntity(137U);
    msg.setDestination(10128U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6869563615784857;

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
    msg.setTimeStamp(0.22847758409091756);
    msg.setSource(10424U);
    msg.setSourceEntity(238U);
    msg.setDestination(16564U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8439669857575179;

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
    msg.setTimeStamp(0.6240629704337539);
    msg.setSource(10805U);
    msg.setSourceEntity(81U);
    msg.setDestination(6379U);
    msg.setDestinationEntity(4U);
    msg.value = 0.4310267662064051;

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
    msg.setTimeStamp(0.2629725120227454);
    msg.setSource(3346U);
    msg.setSourceEntity(117U);
    msg.setDestination(52318U);
    msg.setDestinationEntity(240U);
    msg.environmenttypeid = 126U;
    msg.id = 204U;
    msg.x = 0.8597844371743856;
    msg.y = 0.7173626150066718;
    msg.psi = 0.9925666289255267;
    msg.u = 0.46776344384195856;
    msg.v = 0.7736476877223069;
    msg.r = 0.1696912488990936;
    msg.x_auv = 0.16115059919144048;
    msg.y_auv = 0.8040736286624481;
    msg.z_auv = 0.06887062229270946;
    msg.phi_auv = 0.741402985292434;
    msg.theta_auv = 0.007351107188619643;
    msg.psi_auv = 0.4141633343792913;
    msg.u_auv = 0.4774435774056073;
    msg.v_auv = 0.037661668414226246;
    msg.w_auv = 0.6432488671167856;
    msg.p_auv = 0.6183289213739646;
    msg.q_auv = 0.316514891160816;
    msg.r_auv = 0.06975191726769014;

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
    msg.setTimeStamp(0.2256887313373782);
    msg.setSource(40400U);
    msg.setSourceEntity(11U);
    msg.setDestination(15811U);
    msg.setDestinationEntity(104U);
    msg.environmenttypeid = 198U;
    msg.id = 204U;
    msg.x = 0.1118204003396368;
    msg.y = 0.15893151938502037;
    msg.psi = 0.9468254125892497;
    msg.u = 0.18919764954383544;
    msg.v = 0.5592908995883036;
    msg.r = 0.450892927004084;
    msg.x_auv = 0.21915906084473258;
    msg.y_auv = 0.05252640372671091;
    msg.z_auv = 0.7489647913847949;
    msg.phi_auv = 0.3964492666505841;
    msg.theta_auv = 0.9339027759481725;
    msg.psi_auv = 0.05524769242217642;
    msg.u_auv = 0.22207569128610005;
    msg.v_auv = 0.6627339031736693;
    msg.w_auv = 0.142773996271916;
    msg.p_auv = 0.003038546875823278;
    msg.q_auv = 0.5166702412762975;
    msg.r_auv = 0.246815216038488;

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
    msg.setTimeStamp(0.11957944552142108);
    msg.setSource(28682U);
    msg.setSourceEntity(82U);
    msg.setDestination(33190U);
    msg.setDestinationEntity(74U);
    msg.environmenttypeid = 208U;
    msg.id = 151U;
    msg.x = 0.20562438704091546;
    msg.y = 0.18801965395505005;
    msg.psi = 0.5993757427729527;
    msg.u = 0.07830276313414264;
    msg.v = 0.23687779396434783;
    msg.r = 0.4324847796711224;
    msg.x_auv = 0.9243851193409373;
    msg.y_auv = 0.5210757176274825;
    msg.z_auv = 0.15991913032999705;
    msg.phi_auv = 0.4333792627092484;
    msg.theta_auv = 0.06665568100456065;
    msg.psi_auv = 0.7114953835979531;
    msg.u_auv = 0.13647599236309782;
    msg.v_auv = 0.35657287690984707;
    msg.w_auv = 0.3993503691460839;
    msg.p_auv = 0.6395885755761304;
    msg.q_auv = 0.6738296189302752;
    msg.r_auv = 0.7620901124351854;

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
