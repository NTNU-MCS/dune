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
// IMC XML MD5: 0432e8918a29c5db5e9a394e816b76e7                            *
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
    msg.setTimeStamp(0.8165526840728003);
    msg.setSource(51035U);
    msg.setSourceEntity(140U);
    msg.setDestination(45152U);
    msg.setDestinationEntity(49U);
    msg.state = 18U;
    msg.flags = 237U;
    msg.description.assign("IWYKUMJWSVFZLZCBEQIDZLKLAHCFCEPSRDVHNCRTBXIZXJBGOZTDJVQVCVOLXYH");

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
    msg.setTimeStamp(0.9723102334455196);
    msg.setSource(51831U);
    msg.setSourceEntity(203U);
    msg.setDestination(22126U);
    msg.setDestinationEntity(243U);
    msg.state = 160U;
    msg.flags = 207U;
    msg.description.assign("QGJGTJJEBPYJQMQOKZCZUSHAYZNRAGMWBVZORIHTUSFZBKGOAEMPXLWNJQDTXARFRUQEGBEXKWYQXPWWCUVEMVSZXFSUZFBYLPHSETKIWCJDSHDWBSLHTSAECDLXLCVSKKNDWVNKXHITRTCGIMPQDYJSOGQTFXPIPHKIWAMDLCVROILFVBNNUEGVCNOZBPOMZFYLFIDLZTYGCKUFXAEQUHVYXPABTJHJUGRRKIJRBD");

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
    msg.setTimeStamp(0.22498405226782114);
    msg.setSource(61294U);
    msg.setSourceEntity(94U);
    msg.setDestination(30337U);
    msg.setDestinationEntity(172U);
    msg.state = 183U;
    msg.flags = 165U;
    msg.description.assign("VAHTLCPZYLSNOVLWHZUYVBGRUCZEBQOUPNPIFBXRHTZYHSNXYEFIPOJMRWSGAMTLONLKRVLHFUPGYYBVKKQIFSSCESIWTRHVVCCIXITERQMVEQTCZMALWBZJHSTZUMBQOYKICRKXNRTFUDQOPOMZVWDUXYDNKBGL");

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
    msg.setTimeStamp(0.007821918147218776);
    msg.setSource(22575U);
    msg.setSourceEntity(37U);
    msg.setDestination(11691U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.999249175032792);
    msg.setSource(15228U);
    msg.setSourceEntity(84U);
    msg.setDestination(37019U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.832606868326583);
    msg.setSource(49720U);
    msg.setSourceEntity(142U);
    msg.setDestination(31571U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.5492453176814437);
    msg.setSource(17233U);
    msg.setSourceEntity(232U);
    msg.setDestination(13678U);
    msg.setDestinationEntity(227U);
    msg.id = 177U;
    msg.label.assign("KUCBMRMOCZWZZFVRHFNURSGFEWQFWTLTRYQZLVPSJHJCXZEJAIOAPJLKDZNUBQMHGLFVSOBINSEEDUTEDAMVRAXE");
    msg.component.assign("AFUQHDVGQWVHNRRFLYHZUDNPNQYGMEGXYORBRGPTULBIDMEYCOZIGUPILKEJOWFHQXTWGSDQIVPCIGSTANCPZUTMNUW");
    msg.act_time = 34148U;
    msg.deact_time = 22903U;

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
    msg.setTimeStamp(0.740187452017624);
    msg.setSource(23860U);
    msg.setSourceEntity(212U);
    msg.setDestination(47344U);
    msg.setDestinationEntity(167U);
    msg.id = 139U;
    msg.label.assign("NPDNXQEKWLWHYCAUCKYANZRNMVZCFZJSTBGIMWQTFGZMOUODWSERSHKYUQAEDPCQRGBKXPMTMYLXGVIWLVBTZLPFVRDFPEAKOAKJUJYJEGPLHIBLUDVSGNAJBQOIPSWLJODFMSZTWVEDNWMVBLXLAWWX");
    msg.component.assign("CDYHMMREUTLIEMYDRISJXBJKNELZBCNUDCPQSEJVSEZOFAWZDIHDVOIQLSLASKASLUKFZXBMSHBEMSQWJSKVZJWYGEDOFWAYYRQWXHUKYAPHKNOCJTWPGPRBZAPKVIORNXCXUYFMNXDHWVPWTDQWSYJZULVTGJPMCTXOANGRHCETXVUORQLAKVJXVTICUBXEFKLPATZDRGNLQFAUCMIBPPIHVOFZQHEFTCGNRGTYNIGDRGKFMUOMB");
    msg.act_time = 29542U;
    msg.deact_time = 40851U;

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
    msg.setTimeStamp(0.9770526316880793);
    msg.setSource(52704U);
    msg.setSourceEntity(213U);
    msg.setDestination(28585U);
    msg.setDestinationEntity(55U);
    msg.id = 8U;
    msg.label.assign("FCTVLVRONQIMUGKRXUYTYEMSUJOAANMOJMDAJIYVAJKUWPLLWDGCYZQUYTRJOXSRHPHWWOICPLONPELMPCPZEFILXSUQT");
    msg.component.assign("NLPGOPIIVXOHTQCCMGMCVYZSNWCRYUHBVADBIWKBFBVLNNTLRJI");
    msg.act_time = 14426U;
    msg.deact_time = 30774U;

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
    msg.setTimeStamp(0.3496392954745996);
    msg.setSource(32433U);
    msg.setSourceEntity(7U);
    msg.setDestination(4996U);
    msg.setDestinationEntity(192U);
    msg.id = 197U;

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
    msg.setTimeStamp(0.8381006483854309);
    msg.setSource(485U);
    msg.setSourceEntity(122U);
    msg.setDestination(54012U);
    msg.setDestinationEntity(123U);
    msg.id = 101U;

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
    msg.setTimeStamp(0.24792468285199387);
    msg.setSource(28341U);
    msg.setSourceEntity(26U);
    msg.setDestination(59804U);
    msg.setDestinationEntity(17U);
    msg.id = 109U;

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
    msg.setTimeStamp(0.6255496036817488);
    msg.setSource(27852U);
    msg.setSourceEntity(118U);
    msg.setDestination(23616U);
    msg.setDestinationEntity(62U);
    msg.op = 121U;
    msg.list.assign("GANBOZTZQUOBQOGLYFCRSGKHAFKPYHBMZKNEMRJQOBRNCC");

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
    msg.setTimeStamp(0.4103239980931628);
    msg.setSource(27869U);
    msg.setSourceEntity(28U);
    msg.setDestination(48956U);
    msg.setDestinationEntity(226U);
    msg.op = 46U;
    msg.list.assign("SDBQPUNHQDVOGHLBHAXXMBCAWEUPUXHTCATGFRNFWRJDCSFMYQPNTYZSZSOGYJBQOYIBLCLITEUZFJLXMGOGGAICMLEBNVNQUDWPXYKOCPTRNZJDUKGCVQVBLOWFHDURVMGDDERIRZFPSXXVACCHSRBHZFEDCOMVJGEZFXIIKFEJWPNAAEKXNSALMWEQYXWQAZUMRVTZTHIPTYSNKWJKUTK");

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
    msg.setTimeStamp(0.2955731731921366);
    msg.setSource(44046U);
    msg.setSourceEntity(22U);
    msg.setDestination(151U);
    msg.setDestinationEntity(3U);
    msg.op = 248U;
    msg.list.assign("JLKQNRJCJVBGWZVEXAUFBZSOKGDGOSTUXEHXPTCHEXHQLVALQACIMZMNOYNZVSOBJHBINUWCWBCWUBRSDNEMNIDQTOZVPLXLWLMAGENOWGJQCPJFFKRENUUZSBDHP");

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
    msg.setTimeStamp(0.996066515525461);
    msg.setSource(43168U);
    msg.setSourceEntity(187U);
    msg.setDestination(38973U);
    msg.setDestinationEntity(36U);
    msg.value = 64U;

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
    msg.setTimeStamp(0.14986510035459244);
    msg.setSource(65229U);
    msg.setSourceEntity(228U);
    msg.setDestination(11528U);
    msg.setDestinationEntity(218U);
    msg.value = 126U;

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
    msg.setTimeStamp(0.09664691902801448);
    msg.setSource(5009U);
    msg.setSourceEntity(152U);
    msg.setDestination(19807U);
    msg.setDestinationEntity(235U);
    msg.value = 140U;

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
    msg.setTimeStamp(0.46058989699128083);
    msg.setSource(14652U);
    msg.setSourceEntity(7U);
    msg.setDestination(4705U);
    msg.setDestinationEntity(62U);
    msg.consumer.assign("GASVHSNKMAHAEHQERJLLRSBHYMTXLUQPBZBNILEUXSVLCIIRCRYOZKQKHXADGDBOOILPPVFNOMEFDQTMHCPPZEXKYWSYXTPIVMNWWDCWJWGFVQPOJVNFZNBFEZTFUXUUFXYTKWWOVAYPTMCXJKUQVYKIYG");
    msg.message_id = 40588U;

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
    msg.setTimeStamp(0.9739543993038277);
    msg.setSource(34487U);
    msg.setSourceEntity(30U);
    msg.setDestination(46387U);
    msg.setDestinationEntity(228U);
    msg.consumer.assign("RIVGCSBZUYHUDWDTTOBIQTCTBOKYINNXXCQIFSCWQUQFYNKTJEPMPFFSVJXHFEGEMPERWRQELDHEDZFIODHLGSVKWWDZPTBKXMNZJIYGXMRDRHBJCSV");
    msg.message_id = 63155U;

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
    msg.setTimeStamp(0.7214390973620317);
    msg.setSource(11213U);
    msg.setSourceEntity(116U);
    msg.setDestination(29660U);
    msg.setDestinationEntity(138U);
    msg.consumer.assign("CWBQRTUEPAFNXPFTOBIPJAGINUOMDOZOGUABQTSCLKPVVIXNMISBXQUKYWEXACYVUHSMZCYDLXNZDRXRGEEFYTSMQZAKOWFNWJTMCNZSKIFJSEPNCKSTXLYQJECOHFUIYJGBDLHVCVAZGLYQTJKKXEFBMVDFDMCGABOXBKAIVTLRJZKOVVNNRWTUQLSDLUNYOSGMQWGGMHVRAPSYMPQPZPIDBHTHFRDRGOZJKHBJWFRPLDACWEEZWEIW");
    msg.message_id = 47821U;

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
    msg.setTimeStamp(0.933710705805258);
    msg.setSource(60703U);
    msg.setSourceEntity(183U);
    msg.setDestination(5977U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.7742703679152741);
    msg.setSource(35377U);
    msg.setSourceEntity(163U);
    msg.setDestination(30271U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.4214821133243143);
    msg.setSource(13221U);
    msg.setSourceEntity(11U);
    msg.setDestination(45427U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.8584309461035806);
    msg.setSource(12291U);
    msg.setSourceEntity(84U);
    msg.setDestination(20307U);
    msg.setDestinationEntity(82U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.6207696374237089);
    msg.setSource(51495U);
    msg.setSourceEntity(180U);
    msg.setDestination(61477U);
    msg.setDestinationEntity(160U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.6376754914425501);
    msg.setSource(29583U);
    msg.setSourceEntity(176U);
    msg.setDestination(7283U);
    msg.setDestinationEntity(45U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.09017249782619363);
    msg.setSource(40648U);
    msg.setSourceEntity(156U);
    msg.setDestination(63855U);
    msg.setDestinationEntity(50U);
    msg.total_steps = 252U;
    msg.step_number = 180U;
    msg.step.assign("TJDAEHEIGFSAFOTXDOYZDXZESVFTLWMIATGPVOEDWKNKGJYXFSNBHMMBZQLBVPEMQRTKCRQXLPKBSLVQKIMQWYHFEGZCODXBSOAVYUWQNJXGEGWPKEZIQRSOIY");
    msg.flags = 20U;

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
    msg.setTimeStamp(0.20403955280721187);
    msg.setSource(36621U);
    msg.setSourceEntity(157U);
    msg.setDestination(56910U);
    msg.setDestinationEntity(188U);
    msg.total_steps = 88U;
    msg.step_number = 95U;
    msg.step.assign("BSPFJVZMBCQLDAKHECGWVBQFYMWXBBEERVYYUZDQOQXTEJTUOYWWNIEHUDVFLDAOAJYCKXIZNKGHLPIKTXOCDZBQAJDIFZIXBOCMGUIIZRGHTOREYLFRWEXRCPGLZHLHYKRUCGXPVBAJLAPRU");
    msg.flags = 136U;

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
    msg.setTimeStamp(0.6626554901482278);
    msg.setSource(52744U);
    msg.setSourceEntity(170U);
    msg.setDestination(24412U);
    msg.setDestinationEntity(131U);
    msg.total_steps = 86U;
    msg.step_number = 140U;
    msg.step.assign("GAXXAGAFEVSMRNZKUCJWOVLUAFHJRORBKNMQHLTCMYQTITWDQTDETFQXDLLCGJCIXLQWIRPNGUWSDRDNJPVMZDGHHWRPGKIVTVSKYJEUAKEHTMEPDBDKPKBWRKGABPECYHUFMJJAQXSCUZLRZDIZIETWTSSNVFFWAOJYIOEYNOAUHGFBWONOU");
    msg.flags = 6U;

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
    msg.setTimeStamp(0.5342872287258501);
    msg.setSource(5445U);
    msg.setSourceEntity(214U);
    msg.setDestination(16497U);
    msg.setDestinationEntity(78U);
    msg.state = 197U;
    msg.error.assign("THXQINZFTXZRRPUBYJSLVCTZLTOFWNROWQMEAXCDFWFMBDBSNMUDKSNBJKOOTZCUHJSEIWIQKPBKCCGSMIFWAGBCHOAPCIZGOCLRXVNXVHCSHFAAZOMKJYXZKPSMTNPPVUUHVYBTNRGUNFJDPTEWXIGSWYYORXJVQZJSAXJRFUYNFYGQHHEBQWMIZWYPQOYVDGIRPXSDKFDLDALDEROGQVAMKRNWAMTEJBKKELMLUQIEVUA");

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
    msg.setTimeStamp(0.9103994259784924);
    msg.setSource(10131U);
    msg.setSourceEntity(138U);
    msg.setDestination(65140U);
    msg.setDestinationEntity(108U);
    msg.state = 100U;
    msg.error.assign("QDKKEZKQRL");

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
    msg.setTimeStamp(0.8064732963005137);
    msg.setSource(5881U);
    msg.setSourceEntity(16U);
    msg.setDestination(43858U);
    msg.setDestinationEntity(190U);
    msg.state = 251U;
    msg.error.assign("MBASKSGLTTDHMPGQEUJQSEDMUQDJJAOZNXOBFWQLEXSCVCGLTJPHKCUUKPJEGGQOLCTTKPLGZICWZPVDYWKUFZCRXWKAPNHOIAYNXOVJCYRAWLJKLECTSCMERBUYEMNNAOIOYQSFQMVFSBBHDUQNVTSPBKFRLFZRMHHDPRREOXNGAILXJPWTDVBAZKRQEBCYYPBAEHMXAQFVIGUXWIVFXILNBYZRDFMWRTHJYIKHGNWXODSHUFM");

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
    msg.setTimeStamp(0.8202239015771566);
    msg.setSource(51250U);
    msg.setSourceEntity(53U);
    msg.setDestination(17046U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.5724989156510705);
    msg.setSource(29985U);
    msg.setSourceEntity(107U);
    msg.setDestination(62486U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.06321709985039048);
    msg.setSource(31498U);
    msg.setSourceEntity(237U);
    msg.setDestination(48924U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.6689842590619505);
    msg.setSource(41159U);
    msg.setSourceEntity(15U);
    msg.setDestination(58013U);
    msg.setDestinationEntity(132U);
    msg.op = 113U;
    msg.speed_min = 0.8417837665864035;
    msg.speed_max = 0.7194753451728699;
    msg.long_accel = 0.3051114992262851;
    msg.alt_max_msl = 0.06934797092363199;
    msg.dive_fraction_max = 0.25294008812282065;
    msg.climb_fraction_max = 0.545429482588626;
    msg.bank_max = 0.4097663843694247;
    msg.p_max = 0.7520121290149601;
    msg.pitch_min = 0.5655695344728338;
    msg.pitch_max = 0.8945689320442441;
    msg.q_max = 0.1964036552967161;
    msg.g_min = 0.5336438132828274;
    msg.g_max = 0.9417158031615547;
    msg.g_lat_max = 0.4660147807033981;
    msg.rpm_min = 0.5348544398035636;
    msg.rpm_max = 0.43185679189957527;
    msg.rpm_rate_max = 0.470015718274151;

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
    msg.setTimeStamp(0.3071437902200873);
    msg.setSource(33272U);
    msg.setSourceEntity(218U);
    msg.setDestination(10901U);
    msg.setDestinationEntity(218U);
    msg.op = 206U;
    msg.speed_min = 0.7409064748315939;
    msg.speed_max = 0.2894090629144287;
    msg.long_accel = 0.8451272218489947;
    msg.alt_max_msl = 0.552748311534616;
    msg.dive_fraction_max = 0.16276611930700857;
    msg.climb_fraction_max = 0.2964766908216607;
    msg.bank_max = 0.5567018337639288;
    msg.p_max = 0.27785135192225807;
    msg.pitch_min = 0.4593680876956133;
    msg.pitch_max = 0.7893443513776088;
    msg.q_max = 0.6944956591502851;
    msg.g_min = 0.7841335759068191;
    msg.g_max = 0.9246571308884155;
    msg.g_lat_max = 0.16122344119247523;
    msg.rpm_min = 0.6968734787742952;
    msg.rpm_max = 0.37804397613676566;
    msg.rpm_rate_max = 0.7832907883061806;

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
    msg.setTimeStamp(0.4476181399103375);
    msg.setSource(42775U);
    msg.setSourceEntity(104U);
    msg.setDestination(30923U);
    msg.setDestinationEntity(109U);
    msg.op = 75U;
    msg.speed_min = 0.2637757913718053;
    msg.speed_max = 0.8082736106988;
    msg.long_accel = 0.14520070951897024;
    msg.alt_max_msl = 0.14116715250818967;
    msg.dive_fraction_max = 0.3116053691258901;
    msg.climb_fraction_max = 0.8760496269533167;
    msg.bank_max = 0.8789744050485493;
    msg.p_max = 0.6460326302171717;
    msg.pitch_min = 0.010713622781803656;
    msg.pitch_max = 0.9068736440308345;
    msg.q_max = 0.30890561254993065;
    msg.g_min = 0.5776064271695168;
    msg.g_max = 0.463181367939439;
    msg.g_lat_max = 0.9798462614960893;
    msg.rpm_min = 0.3161246572455627;
    msg.rpm_max = 0.9203911898126403;
    msg.rpm_rate_max = 0.0001917678234025777;

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
    msg.setTimeStamp(0.467200734267757);
    msg.setSource(11468U);
    msg.setSourceEntity(29U);
    msg.setDestination(6817U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.2091851042672107);
    msg.setSource(48475U);
    msg.setSourceEntity(93U);
    msg.setDestination(825U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.38740862630880557);
    msg.setSource(17036U);
    msg.setSourceEntity(5U);
    msg.setDestination(35700U);
    msg.setDestinationEntity(177U);
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 26U;
    tmp_msg_0.period = 1035334266U;
    tmp_msg_0.duty_cycle = 318791918U;
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
    msg.setTimeStamp(0.7992026070190822);
    msg.setSource(36943U);
    msg.setSourceEntity(55U);
    msg.setDestination(43958U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.7638496945802645;
    msg.lon = 0.5320850862592844;
    msg.height = 0.08295871618701212;
    msg.x = 0.14022014132160066;
    msg.y = 0.907634637098396;
    msg.z = 0.13790396301179275;
    msg.phi = 0.052558155601940104;
    msg.theta = 0.8871636690162076;
    msg.psi = 0.3933769538973749;
    msg.u = 0.6969018353598296;
    msg.v = 0.584972846425169;
    msg.w = 0.4661104533108529;
    msg.p = 0.2604891535380317;
    msg.q = 0.38041376375713776;
    msg.r = 0.7011881786613016;
    msg.svx = 0.9817280743004643;
    msg.svy = 0.4842053229294633;
    msg.svz = 0.26013045755164677;

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
    msg.setTimeStamp(0.4602895292141298);
    msg.setSource(28476U);
    msg.setSourceEntity(13U);
    msg.setDestination(41836U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.4502393573659015;
    msg.lon = 0.2545185073343206;
    msg.height = 0.6839779858003161;
    msg.x = 0.3707362591313096;
    msg.y = 0.4829275196986803;
    msg.z = 0.5863488258103893;
    msg.phi = 0.6789186306764037;
    msg.theta = 0.5467224365171589;
    msg.psi = 0.9154258543909386;
    msg.u = 0.464532143671302;
    msg.v = 0.9032033189050429;
    msg.w = 0.23501953417777421;
    msg.p = 0.7074608587384948;
    msg.q = 0.5033372222981486;
    msg.r = 0.34498554705111584;
    msg.svx = 0.7923701479020391;
    msg.svy = 0.7862104321757813;
    msg.svz = 0.07699806504245554;

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
    msg.setTimeStamp(0.715223934888729);
    msg.setSource(53490U);
    msg.setSourceEntity(202U);
    msg.setDestination(50867U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.9876851792033294;
    msg.lon = 0.37285384468818505;
    msg.height = 0.6832583600116856;
    msg.x = 0.34530248032107125;
    msg.y = 0.4056775711021714;
    msg.z = 0.6048412481706347;
    msg.phi = 0.6170706868847974;
    msg.theta = 0.32618192008168956;
    msg.psi = 0.2563541417668588;
    msg.u = 0.923387596039377;
    msg.v = 0.6525932157959232;
    msg.w = 0.3046198644824536;
    msg.p = 0.06054884855008846;
    msg.q = 0.9076173348640357;
    msg.r = 0.7115611021549817;
    msg.svx = 0.7598151190906433;
    msg.svy = 0.7521366673974205;
    msg.svz = 0.31631888737485536;

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
    msg.setTimeStamp(0.23784669181834217);
    msg.setSource(37984U);
    msg.setSourceEntity(224U);
    msg.setDestination(38091U);
    msg.setDestinationEntity(25U);
    msg.op = 8U;
    msg.entities.assign("TEOWNORPLDHQBKVHQXJUMMZYNBKRPRDIEANYWRSVPGPGPEAMDCLXAPQNXFBOJWUJEWJTRLAWHUDKBSCIOVOFFWBEKXZTGKFVSDVURGBTLIRETVHJMXUZAMKBJLTGTYQIMRYHCGKWZIBZARQJSQKZNOYXIAXMFOFLSWXMJGYJ");

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
    msg.setTimeStamp(0.48588323102905584);
    msg.setSource(33166U);
    msg.setSourceEntity(131U);
    msg.setDestination(46626U);
    msg.setDestinationEntity(55U);
    msg.op = 239U;
    msg.entities.assign("FVNHFQHZEOAAUAJISQQERYJNUWWGMJWESLLXVLGCBVXY");

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
    msg.setTimeStamp(0.811657891399519);
    msg.setSource(51569U);
    msg.setSourceEntity(215U);
    msg.setDestination(64349U);
    msg.setDestinationEntity(194U);
    msg.op = 169U;
    msg.entities.assign("JLGBXYSLMNMDKDLZVQWDEFRDOUQXVVEXTZNVRTRAVFIRMBHISLZNODHUHPPBIPEYBHTABBVZFMFFNHQNPDSSHZCGJPOKEGTAPSJMRXIBZYMOMXISLWEOGKFUDKNCSIIDNRZKEFNHERFEQMXMIYALWWJOYTOWWVXGKTUPPREWNCHNABWWKXOQHORUYSSUYQJJWAGCLXETVPK");

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
    msg.setTimeStamp(0.7206815343694402);
    msg.setSource(23278U);
    msg.setSourceEntity(31U);
    msg.setDestination(27757U);
    msg.setDestinationEntity(198U);
    msg.type = 54U;
    msg.speed = 44894U;
    const char tmp_msg_0[] = {8, -64, 87, 35, -59, -28, -89, -8, 15, 21, -53, -83, -11, -104, -60, 87, 43, 41, 81, -78, -99, 101, 107, 109, -107, -45, -65, -75, -103, 105, 28, -48, 96, -110, -32, 12, -117, 16, -98, 55, -18, 72, 4, -25, -102, -22, 12, 30, -54, 91, 105, -71, -100, -50, 122, -88, 97, -34, 86, 0, 31, 103, -12, -126, -21, 7, 94, -88, -82, 122, 37, -89, 27, -86, -99, 47, 5, 33, -89, 106, 120, -108, -22, -100, -68, 67, 37, -75, 107, 98, -45, -81, -113, -74, 30, -46, 81, 89, 82, 34, 65, 112, 88, 104, -128, -28, 95, 14, -110, -72, -111, 68, 1, 48, -126, 58, 39, -20, 118, -55, -23, -74, 47, -118, -76, -49, 12, -51, 49, -76, -10, -8, 66, -1, 9, -83, 95, 18, -14, -36, -111, -127, -49, 14, 45, 98, 32, 33, -100, 4, 28, 124, 100, 4, 76, 115, -89, -118, 25, -21, -123, -83, 125, -66, -84, -56, -56, -118, 23, -109, 12, -59, 8, 30, 78, -81, -102, 79, 7, 100, -99, 34, 106, -57, 41, -8, 71, 100, 29, 73, -7, 74, -53, 49, 17, -13, -117, -114, 40, -63, -89, 42, -58, -1, -87, 108, 2, 16, 61, -46, -110, -118, 95, -38, -68, 29, -14, -73, 47, 84, 83, -112, 103, 38, 80, 123, -126, 35, 90, -91, 117, -40, 36, 11, 65, 55, -60, 97, -33, 38, 26, 72, 38, -103, -124, 79, 108, -5, -111, -56, 32, 72, 64};
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
    msg.setTimeStamp(0.504896123080485);
    msg.setSource(50615U);
    msg.setSourceEntity(216U);
    msg.setDestination(57338U);
    msg.setDestinationEntity(232U);
    msg.type = 218U;
    msg.speed = 56416U;
    const char tmp_msg_0[] = {42, -82, -24, 43, 54, 55, -3, -113, -110, 119, 126, -40, 0, -56, -51, -77, 118, -92, -52, -86, 23, 17, -19, 55, -58, 7, -28, 104, -55, 58, -37, 84, 7, -25, 11, -122, 61, -117, 25, 13, -113, -7, 63, -8, 6, -23, 109, 50, -69, 35, -102, 119, -32, -50, -37, -86, 119, 32, -5, -68, -48, 107, 18, -89, -116, 47, -16, -67, 65, -37, 95, -15, -2, -40, 14, -59, 112, -36, 3, -41, -54, 104, 117, -29, -111, -80, -92, -2, 35, 95, -42, 63, -112, 116, 11, 87, 55, -90, 0, -54, 39, -125, -84, -115, 51, 61, 89, 15, 108, 77, -118, 122, -96, 64, 49, 69, -68, 40, 8, 69, -33, -74, 36, 53, 58, -6, 95, 40, -47, 20, -110, 27, -119, 120, -11, -65, -21, -8, 103, -81, -67, 63, 50, 116, 121, 64, 2, -85, -106, 46, 88, 30, 13, -66, -98, 86, -29, 111, -55, 78, -56, -115, 94, -117, -22, -51, -73, -96, -73, -71, -43, 46, -95, 32, 91, -43, 71, 74, 44, 94, -34, 83, -88, 36, 85, 115, 79, -39, -31, 110, 35, -7, -45, -57, 116, -18, 105, 109, 121, -31, -18, 7, 125, 95, -63, -36, -12, 39, 12, 13, -29, 119, 103, 59, -49, -16, 110, 89, -56, 70, -20, 81, -63, -60, 62, 83, 109, -73, 67, -86, -41, 45, 7, 47, 104, 69, -65, 93, 89, -31, 110};
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
    msg.setTimeStamp(0.5863430554418437);
    msg.setSource(31458U);
    msg.setSourceEntity(189U);
    msg.setDestination(34926U);
    msg.setDestinationEntity(85U);
    msg.type = 163U;
    msg.speed = 38343U;
    const char tmp_msg_0[] = {-90, 76, -103, -101, -53, 23, -100, 122, -94, 83, -109, -21, 67, 10, -15, -2, -120, 20, 2, -43, -56, 21, 39, 120, -95, -23, -126, -81, -83, 26, -54, 26, 0, 37, -118, -52, -24, 89, 100, 122, 3, 118, 20, -19, 65, -123, -33, -97, 97, 41, 25, 19, 119, -28, 120, 124, 32, 95, -44, 0, 90, 34, 52, -79, 48, 11, -73, -82, -19, -15, 43, -36, 90, 40, -107, 47, 50, 78, -56, 112, 12, -117, 61, 11, -36};
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
    msg.setTimeStamp(0.5408064423129163);
    msg.setSource(7331U);
    msg.setSourceEntity(143U);
    msg.setDestination(4809U);
    msg.setDestinationEntity(48U);
    msg.op = 123U;
    msg.tas2acc_pgain = 0.1677045909932836;
    msg.bank2p_pgain = 0.20869367622071355;

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
    msg.setTimeStamp(0.546509811903833);
    msg.setSource(7739U);
    msg.setSourceEntity(237U);
    msg.setDestination(39711U);
    msg.setDestinationEntity(192U);
    msg.op = 63U;
    msg.tas2acc_pgain = 0.2608770605047136;
    msg.bank2p_pgain = 0.8296752980974232;

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
    msg.setTimeStamp(0.5547277037622584);
    msg.setSource(44295U);
    msg.setSourceEntity(223U);
    msg.setDestination(31286U);
    msg.setDestinationEntity(108U);
    msg.op = 77U;
    msg.tas2acc_pgain = 0.13227523942363295;
    msg.bank2p_pgain = 0.09524990931238175;

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
    msg.setTimeStamp(0.31359698437652506);
    msg.setSource(1614U);
    msg.setSourceEntity(124U);
    msg.setDestination(63624U);
    msg.setDestinationEntity(168U);
    msg.available = 3363242596U;
    msg.value = 217U;

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
    msg.setTimeStamp(0.8463694272804229);
    msg.setSource(45585U);
    msg.setSourceEntity(231U);
    msg.setDestination(6913U);
    msg.setDestinationEntity(243U);
    msg.available = 4064093583U;
    msg.value = 4U;

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
    msg.setTimeStamp(0.4275562661310395);
    msg.setSource(52565U);
    msg.setSourceEntity(248U);
    msg.setDestination(61901U);
    msg.setDestinationEntity(37U);
    msg.available = 2001557036U;
    msg.value = 94U;

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
    msg.setTimeStamp(0.4538835242136613);
    msg.setSource(47986U);
    msg.setSourceEntity(232U);
    msg.setDestination(1665U);
    msg.setDestinationEntity(195U);
    msg.op = 120U;
    msg.snapshot.assign("JIGEVGDRHLTZMRYZTKVYKFRACCSFHOOKWNHLBMTLIGKFBTHMKCRFOYENNSFFDVBQUDZTIBPRB");
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 156U;
    tmp_msg_0.op = 93U;
    tmp_msg_0.err_mean = 0.40363100035025934;
    tmp_msg_0.dist_min_abs = 0.48885001957538177;
    tmp_msg_0.dist_min_mean = 0.9684471537344381;
    tmp_msg_0.roll_rate_mean = 0.6987546593275741;
    tmp_msg_0.time = 0.4327245585064988;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 149U;
    tmp_tmp_msg_0_0.lon_gain = 0.41863687390975934;
    tmp_tmp_msg_0_0.lat_gain = 0.17032551390142148;
    tmp_tmp_msg_0_0.bond_thick = 0.9711706435002929;
    tmp_tmp_msg_0_0.lead_gain = 0.42171932010037405;
    tmp_tmp_msg_0_0.deconfl_gain = 0.48936775900850304;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.14205199190688844;
    tmp_tmp_msg_0_0.safe_dist = 0.48679289596432584;
    tmp_tmp_msg_0_0.deconflict_offset = 0.690406160545804;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.08306595094443736;
    tmp_tmp_msg_0_0.accel_lim_x = 0.4237664078115012;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.154771993415172);
    msg.setSource(13697U);
    msg.setSourceEntity(202U);
    msg.setDestination(31907U);
    msg.setDestinationEntity(233U);
    msg.op = 204U;
    msg.snapshot.assign("WJLYRCDTYSEBIAKAZFDPXQMFRALHMWJIVNIJXGNCTHVPCHCKYYQSUKUIPBCSFYJAHYKWAQOOGPUNAQOMXEYEQADLFLQHBXZWCDMMQGGRKZRPPRRVSNMHTYNWTBVETSOWTDUFKUUOGDQWSWRFIGJLDHXYXOLUWBIPRNSCTGXAZBN");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 76U;
    tmp_msg_0.time_remain = 0.7932771478116025;
    tmp_msg_0.sched_time = 0.43845047255513214;
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
    msg.setTimeStamp(0.11363831474929031);
    msg.setSource(35497U);
    msg.setSourceEntity(246U);
    msg.setDestination(10808U);
    msg.setDestinationEntity(65U);
    msg.op = 241U;
    msg.snapshot.assign("HJTREKQPWKXAMUKFXT");
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.7153566356989048;
    tmp_msg_0.dist_min_abs = 0.5877906826120104;
    tmp_msg_0.dist_min_mean = 0.9456204371406597;
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
    msg.setTimeStamp(0.17463717069672402);
    msg.setSource(16784U);
    msg.setSourceEntity(134U);
    msg.setDestination(59560U);
    msg.setDestinationEntity(129U);
    msg.op = 202U;
    msg.name.assign("ARGTQSXLKVJTIORFOFPPKLZGLPWOOWZYTQZNCEIDMVPXFSLUMPYXTCVXCTNJURYVFZHHXTEI");

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
    msg.setTimeStamp(0.08196300564934289);
    msg.setSource(17157U);
    msg.setSourceEntity(111U);
    msg.setDestination(35304U);
    msg.setDestinationEntity(195U);
    msg.op = 18U;
    msg.name.assign("PCIENFTIGAOPGDTPLUUKSVSODYZMMJFXWOBBWLLYUCWMOYPTQXWVJFFNKJZBNXXVPPLEWADWFDHQKZEFUENELUPZTRKEOSDAFYGNETICHYMMKAMLUAQUKHRHBGZBRMQZBLKVUHQZNPNXVECJTSVAIYKBIDCHIXZTFWMPBXQNRGVZMGSRCIOKQJCVNQGUOAPCTSVGWGQJXORRTAJRSCJHCLX");

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
    msg.setTimeStamp(0.055707840159272215);
    msg.setSource(65521U);
    msg.setSourceEntity(92U);
    msg.setDestination(48475U);
    msg.setDestinationEntity(14U);
    msg.op = 176U;
    msg.name.assign("NSESNZTLGFCXTJXIQKESODDXGSEUAGCJJNTHEHBZNPVEPWRDQRYPEYOJFXEUBRQCPUTGPAMOMOYFPCCVPONZABQMYYDQLTYADURDKGKLXPMPTJODBQMMJWUEPCFLYIJUFFQOZIKFETKMRRSUNSAHNKYVMIFSARMXNKQDIABIOZAVGDSHWHSCWZHHWWLATNXBRVOXBTWKEJVXIKGUDCHOUBVIVHGCZYGWIUZCAQRBQLWSNYBLJXFLLMGLTHFK");

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
    msg.setTimeStamp(0.6006899445416173);
    msg.setSource(39640U);
    msg.setSourceEntity(41U);
    msg.setDestination(37250U);
    msg.setDestinationEntity(117U);
    msg.type = 208U;
    msg.htime = 0.1845105978687177;
    msg.context.assign("KZYHVYNZEPPIUSWBIULQDFJEQMEDBXKARLSZBNALJAKDGMOXQLUCBHENJONCFOGBXWPWEVMERLSHGURDLUJYFHETAEPZQMCRJPLPQQ");
    msg.text.assign("UOZPGNMNAXCRYGUTPZUPYEUCSHLLAYIHDFAZOKVAOKZJGDVPBVBIXEZKMQUBQKFQNXWLNIYBINJPJGMOZCEENRYDDLOJUDSSYTVLSTXYRSZGQWYJBGBNIQHFVAJKQMVXXLVVMWRWIPRHSZHCMNSYNEKPLCMDOXJFPZGQQBWULLSTVYZRFAWAPRHDMTBFDENQI");

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
    msg.setTimeStamp(0.6873665385719789);
    msg.setSource(14979U);
    msg.setSourceEntity(21U);
    msg.setDestination(7059U);
    msg.setDestinationEntity(5U);
    msg.type = 185U;
    msg.htime = 0.974925632346499;
    msg.context.assign("HTAUCNBCXYPHXIFNGZBPHZSXQWCWUZUXYJEYCWEFIMUOOFPBRKTZGLJDMSOQ");
    msg.text.assign("MOUKBGLSERYXDLMCNQVUSEAITVWPYQBWADZYROUTLCXKXVNKBNRDBFRUNKNJDJTWCMTRBTQHSCNFPBSSGYTVZZSWYAOCPOCJISUDIPBFHZCAHXEWQSBPLFUNEQ");

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
    msg.setTimeStamp(0.8748602050000455);
    msg.setSource(21042U);
    msg.setSourceEntity(4U);
    msg.setDestination(44263U);
    msg.setDestinationEntity(104U);
    msg.type = 103U;
    msg.htime = 0.6910390810128119;
    msg.context.assign("EJGKANUWUTSCPUNIQOLTTCMFWBAOFDAZZFIVZSBEMLRVNABGOBXALPLMEURJVEASINXZSDSUWRZTSZPQHLFTIYYXPYKGDEHHPYGWCZKIDGRPHRPQOCLACYOOHUBIWKGXVHKWMJBVPHGTCTXCEQZCNDOGEJKMXKVXGJWHKIFDHQBFRDKSMPLNQFULJDYQZPURW");
    msg.text.assign("TWELYTJUAKYNRRPZGZXQXTPHIDJLVFLQUZQMPGLOANXBPTQPIRAOOMCUUFLLDJBREXRINKDNMNJRUCBIVGGAGJVBYOFMIOYJUHCZTPSHZXLVFLVGAFZXIKMCKNVEQSADKWSXWHTJOBNMQXAIONUYDHADYKEHMJ");

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
    msg.setTimeStamp(0.6814118926711833);
    msg.setSource(26670U);
    msg.setSourceEntity(3U);
    msg.setDestination(52640U);
    msg.setDestinationEntity(226U);
    msg.command = 29U;
    msg.htime = 0.2953498524299265;

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
    msg.setTimeStamp(0.5937216000226502);
    msg.setSource(50224U);
    msg.setSourceEntity(136U);
    msg.setDestination(51480U);
    msg.setDestinationEntity(150U);
    msg.command = 242U;
    msg.htime = 0.04775621598648072;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 163U;
    tmp_msg_0.htime = 0.3331517994982084;
    tmp_msg_0.context.assign("FLMXEZAVDCIVVBRPAWLBBGUOQPQNRXMZDDQRNWPXIXNJTTGGJIUMYSKREWSGYQXPKBLCYVEXHWQDOUDYBHVAHERVQUWWBKICTFISSEJUPTLUSPGHGAZOEOTJXQJFLAJNHPDORCZMTSFCYYDCFAJOLMZTOSDYJXYHTOKZLMRIMBQPDHIAZRINVOFNGJZRCANOZXLCNE");
    tmp_msg_0.text.assign("JTFKPETHSJYELCJAEGUYLHIIHYCRTMNJTXIPOUFVDUCQRNUATFBZVFEHXPLXNLVDLYABOJUVK");
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
    msg.setTimeStamp(0.22745170942262627);
    msg.setSource(8649U);
    msg.setSourceEntity(220U);
    msg.setDestination(47215U);
    msg.setDestinationEntity(157U);
    msg.command = 190U;
    msg.htime = 0.5007308308833855;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 76U;
    tmp_msg_0.htime = 0.14549752125476234;
    tmp_msg_0.context.assign("UXVMWQPIOHZFEJILBHAIXEXDRKEKQRABHLPRZZGUBDUCVHKCMXOPTYTRDQUPIXLBTVGJHVJBGYBLSNLLZXIKYEWZUBFSCFXYKOEWHDAOPCRKGHKXWOIVZYQWJF");
    tmp_msg_0.text.assign("IUBWRKJCVOQBKFFAGIRKRIXMHNUNDQHNMJUVPJYQKKEXOFHVOVYDMICCMCARWZSLNZAWBRIHRSZBXLUTASGAEBDFIBRGZH");
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
    msg.setTimeStamp(0.7381492645831474);
    msg.setSource(1656U);
    msg.setSourceEntity(250U);
    msg.setDestination(34184U);
    msg.setDestinationEntity(47U);
    msg.op = 107U;
    msg.file.assign("CVPMHYHCDLNQOPCWXEGDYRQVSWUJTWOZLIHILZVCOWYXADKDSUUJRNUXAHSRDZZNGTRADFHLZQWFJONGFPDIUBINJGAKAOZGCKOOFPNFZIUWLWNGBIPCVFVXVLGMLJBVZCBJORMSJMESJCSFKRKYJKVAPXQYETXGYXQEBDMIYWHBAQGETROSURSSPNMQKGPOEZEIRIUPFEEFIQTFYUKMSZDPRXLLVM");

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
    msg.setTimeStamp(0.24997244867294932);
    msg.setSource(54576U);
    msg.setSourceEntity(79U);
    msg.setDestination(47464U);
    msg.setDestinationEntity(30U);
    msg.op = 213U;
    msg.file.assign("DYEZJUSVTWUOARRZZTYPMKTENMNDGKEBOTFJDMETARIFGRQRYVKYNGQNQNEJCBEAIKXHLWYEIOJGXVSLWHHMESGWBDSTQCTUHBLPPUUXZIKZIKQYRVTKHFUWLDYQWXCIPUFRQZIVFKMAPHTWNXSIVOZJPSRDECNRXRMEOHCGYDGMWJBABDCAZUJLU");

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
    msg.setTimeStamp(0.01797683557460339);
    msg.setSource(29099U);
    msg.setSourceEntity(113U);
    msg.setDestination(48786U);
    msg.setDestinationEntity(219U);
    msg.op = 55U;
    msg.file.assign("THHBFBNDPHTVVPZOSBKIJWAQUFZWLLSJUJLBHLTCOFUDWBAKRYKKXMKRLDRRJOCNRNQOAATEPBYBMDQGPALETZXBMZSPPOIDHSMQUZIM");

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
    msg.setTimeStamp(0.24333388307210968);
    msg.setSource(60501U);
    msg.setSourceEntity(57U);
    msg.setDestination(26586U);
    msg.setDestinationEntity(33U);
    msg.op = 236U;
    msg.clock = 0.6362440135679005;
    msg.tz = 30;

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
    msg.setTimeStamp(0.544805475229644);
    msg.setSource(17791U);
    msg.setSourceEntity(70U);
    msg.setDestination(46366U);
    msg.setDestinationEntity(243U);
    msg.op = 230U;
    msg.clock = 0.15735630056149386;
    msg.tz = -92;

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
    msg.setTimeStamp(0.1632621229290273);
    msg.setSource(45716U);
    msg.setSourceEntity(236U);
    msg.setDestination(38514U);
    msg.setDestinationEntity(84U);
    msg.op = 231U;
    msg.clock = 0.8744473411849423;
    msg.tz = -3;

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
    msg.setTimeStamp(0.00677807135339803);
    msg.setSource(61913U);
    msg.setSourceEntity(131U);
    msg.setDestination(16694U);
    msg.setDestinationEntity(90U);
    msg.conductivity = 0.5863801932696769;
    msg.temperature = 0.6743991758339309;
    msg.depth = 0.15143940422600344;

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
    msg.setTimeStamp(0.09113419724433458);
    msg.setSource(38818U);
    msg.setSourceEntity(254U);
    msg.setDestination(37457U);
    msg.setDestinationEntity(186U);
    msg.conductivity = 0.18177220686458362;
    msg.temperature = 0.6158077548316938;
    msg.depth = 0.7193143892903657;

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
    msg.setTimeStamp(0.6114470274884966);
    msg.setSource(49651U);
    msg.setSourceEntity(23U);
    msg.setDestination(29845U);
    msg.setDestinationEntity(61U);
    msg.conductivity = 0.7133580724726732;
    msg.temperature = 0.5265288205414732;
    msg.depth = 0.3096098699467523;

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
    msg.setTimeStamp(0.786667187822452);
    msg.setSource(34777U);
    msg.setSourceEntity(229U);
    msg.setDestination(45621U);
    msg.setDestinationEntity(187U);
    msg.altitude = 0.21291345893840108;
    msg.roll = 7467U;
    msg.pitch = 55055U;
    msg.yaw = 32169U;
    msg.speed = -11498;

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
    msg.setTimeStamp(0.5502288671296123);
    msg.setSource(3276U);
    msg.setSourceEntity(149U);
    msg.setDestination(15440U);
    msg.setDestinationEntity(242U);
    msg.altitude = 0.34529930857468705;
    msg.roll = 29019U;
    msg.pitch = 47706U;
    msg.yaw = 13525U;
    msg.speed = 1749;

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
    msg.setTimeStamp(0.28712318855623253);
    msg.setSource(11905U);
    msg.setSourceEntity(61U);
    msg.setDestination(15009U);
    msg.setDestinationEntity(14U);
    msg.altitude = 0.7938996462569412;
    msg.roll = 23019U;
    msg.pitch = 24622U;
    msg.yaw = 47147U;
    msg.speed = 21116;

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
    msg.setTimeStamp(0.748589704380248);
    msg.setSource(17025U);
    msg.setSourceEntity(21U);
    msg.setDestination(12198U);
    msg.setDestinationEntity(148U);
    msg.altitude = 0.5372927189309805;
    msg.width = 0.21888589644680412;
    msg.length = 0.26757124328087345;
    msg.bearing = 0.6135963731261325;
    msg.pxl = -4163;
    msg.encoding = 216U;
    const char tmp_msg_0[] = {5, -105, -90, -1, 24, 74, 31, 17, -117, -35, -110, 74, 80, -87, -69, 120, -88, -96, 4, 73, 106, -112, -75, 28, 65, 81, -28, -11, -15, 37, 117, 119, -115, -96, -29, 46, 80, 77, 113, -107, -38, -118, 16, -27, 49, 24, -96, 39, 8, 76, 82, 107, 108, -112, -38, 90, -98, 25, -72, 53, -34, -58, -100, -56, -27, 33, -118, -46, 28, 14, -56, 50, 91, 76, 120, 124, 93, 79, -101, 52, -30, 26, 123, 100, -128, -2, -24, -47, -70, -50, 47, 54, 4, 9, 120, 48, -125, -89, 92, 68, 38, 119, 51, 28, -82, -88, 2, 29, 65, 28, -81, -97, 33, 101, 0, -93, -17, 71, -122, -33, 8, 125, 87, -74, -107, -101, 90, 15, -112, 10, 125, -54, 69, 39, -25, 125, 64, -122, 70, -17, -111, -34, 39, -88, 107, -6, 76, 68, -91, 78, 103, -63, 16, 22, -84, -46, -9, -126, 81, -115, -75, 32, 57, 81, -41, 68, 57, 1, -44, -76, -4, 117, -35, 65, -13, -79, 47, -65, -117, -63, -52, 51, -83, 115, -16, 10, -89, -70, -61, -75, 58, -93, -16, 74, 100, 34, -48, -78, 75, 15, -99, 30, 71, -5, -126, -24, 71, -73};
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
    msg.setTimeStamp(0.20118843306735046);
    msg.setSource(20198U);
    msg.setSourceEntity(31U);
    msg.setDestination(65121U);
    msg.setDestinationEntity(250U);
    msg.altitude = 0.14712411892153998;
    msg.width = 0.32923532675830725;
    msg.length = 0.1918264274791066;
    msg.bearing = 0.9414750614076215;
    msg.pxl = -25516;
    msg.encoding = 161U;
    const char tmp_msg_0[] = {-86, 97, 23, 70, -115, -51, -91, 29, 66, -44, -110, 46, -113, -63, -55, 82, -120, -117, 103, -119, 95, 12, 18, -37, 46, -66, -112, -42, -33, 13, -55, 74, -2, 11, -30, -55, 93, 79, -44, 74, -7, -102, -18, -1, -56, 45, -82, 97, 64, -75, -93, 8, -111, -5, -10, -96, 33, 96, -76, -91, -6, -8, 84, -50, -117, 90, -128, 31, 24, -45, -113, -40, 56, -28, 19, -122, -48, 3, 77, 124, -107, 79, -103, 61, 27, 90, -53, 48, 27, -50, 38, 84, -66, 63, -113, 41, 124, -10, 98, -68, 92, -114, -103, 10, 115, -32, 30, -3, -55, -99, -95, 126, -101, -89, -67, 59, -49, 62, -19, -46, 34, 22, -73, 38, 119, -128, -43, 78, 63, 57, -43, 16, -76, -128, 35, 124, 115, 103, -75, 9, -39, 124, 116, 102, -4, 16, -32, 8, 89, -86, 39, 119, 101, 62, -116, 25, -17, 26, 93, 53, -92, -15, -69, 84, 45, -62, -72, 116, 19, -109};
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
    msg.setTimeStamp(0.03852331647429663);
    msg.setSource(9676U);
    msg.setSourceEntity(57U);
    msg.setDestination(606U);
    msg.setDestinationEntity(14U);
    msg.altitude = 0.36177435144083603;
    msg.width = 0.0023032122949134815;
    msg.length = 0.476399827960837;
    msg.bearing = 0.21394846427875402;
    msg.pxl = -2929;
    msg.encoding = 245U;
    const char tmp_msg_0[] = {33, -82, 13, -75, -43, -63, 59, 35, 0, -24, 65, 62, -88, 106, 47, -84, 79, -35, 79, -40, 8, -50, -37, 5, 16, 2, 44, 71, 125, 9, 87, -127, -62, -95, 55, 52, 69, 27, 37, 85, -57, 33, 41, 95, -44, 75, -69, 11, -71, 90, 116, -63, 87, 71, 3, 120, 59, 2, 35, -63, -8, -74, -126, 46, -19, -107, 118, -74, -50, 88, -10, -68, 68, 14, 43, -126, -3, -39, -93, 106, 63, 57, 72, 67, 87, -48, -101, 59, -9, 27, -91, 117, 86, 67, 76, 114, -48, -118, 120, 6, 54, 74, 124, 16, 44, 3, -36, -95, 75, -77, 36, 50, 33, 35, 60, -95};
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
    msg.setTimeStamp(0.18149033075241572);
    msg.setSource(24217U);
    msg.setSourceEntity(73U);
    msg.setDestination(62489U);
    msg.setDestinationEntity(110U);
    msg.text.assign("SJNLLOHEGTAVTZCMBKPVDHMIXZQFTLRPFCFVHNXOJZYTWUZVMCFDSCNJTQREBRPCEMLKDDTQLCOVNAPBXYMSGRKWFQDXAFULBVCWTUUOFQKNIMZXUSWVOYKHQIR");
    msg.type = 196U;

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
    msg.setTimeStamp(0.9662790107478203);
    msg.setSource(19976U);
    msg.setSourceEntity(170U);
    msg.setDestination(15515U);
    msg.setDestinationEntity(163U);
    msg.text.assign("ZJHUECXYWUCQDSVEHLXBHHEXDXBNPTKQAFVTRRWHNZKONSZDWJKMLTXGGOIRNGOZNBFYWKOPSRXBGKDGQMIIUSSHVUVCAQPNMJSZRTGQBGTFHLRAOXIQPTQQJVMMQYYWFNNCRIPWSVCFNOUCVYUFZXACAYEEBOFTKGRGIBJXHVOIZOAUBBZUSEYJJELPDVHZYMYFAKFPDDNCTLMDKAXWLHOLZIMRPSIPUEQMS");
    msg.type = 220U;

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
    msg.setTimeStamp(0.8346639776993808);
    msg.setSource(46926U);
    msg.setSourceEntity(240U);
    msg.setDestination(19702U);
    msg.setDestinationEntity(201U);
    msg.text.assign("TYQPDOOBTNJQRZCFSSPNUIRFSCYEOUGRYPJMLJLCZHNMCUEUPPEFXKKGYOZAZQFQIZBMGQHKYKRRLEOGGRKGWOVPGVWFEH");
    msg.type = 202U;

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
    msg.setTimeStamp(0.8436352554382822);
    msg.setSource(8097U);
    msg.setSourceEntity(14U);
    msg.setDestination(26058U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.7873770084362267);
    msg.setSource(59161U);
    msg.setSourceEntity(22U);
    msg.setDestination(31192U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.6231303490543827);
    msg.setSource(42649U);
    msg.setSourceEntity(76U);
    msg.setDestination(41114U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.027321568679941732);
    msg.setSource(10035U);
    msg.setSourceEntity(72U);
    msg.setDestination(19568U);
    msg.setDestinationEntity(127U);
    msg.sys_name.assign("JTAYPHMRWCYCUUDSBOUJAJHIQCIUBWXIZPRFPWVBRAIDAGIOVKFJXZZPVDNASTSOTFSGYYOCFNNITRTMEFSGBULVNMWAVKSP");
    msg.sys_type = 73U;
    msg.owner = 5985U;
    msg.lat = 0.4465226822917353;
    msg.lon = 0.3272882924105823;
    msg.height = 0.8536111614301793;
    msg.services.assign("SWPTFNKGJXALDRVBDPWETYOWAZTZKEWBOACCGEHFBGWNYFTVEMAIDUNUPJBVMZCXLJSREBZZSERNPWQQVTVJTEILFYCSNVQGLUXIYOWQOLTTHBKORQSRAKLHBKCIPULNAUFKNFDYERBFPBGKNUQUXTLXJJMXIMVHGHRPIGMLRUHVIFSJOXCEASCYRAGZMYCTFSUZKOWQHPXUQXKCGRPDDQJWYLOMHIDDMZ");

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
    msg.setTimeStamp(0.4239886630272274);
    msg.setSource(40342U);
    msg.setSourceEntity(205U);
    msg.setDestination(45401U);
    msg.setDestinationEntity(74U);
    msg.sys_name.assign("HNJJQYUHRDSLXBMF");
    msg.sys_type = 45U;
    msg.owner = 41555U;
    msg.lat = 0.24493880130319368;
    msg.lon = 0.4849300065270128;
    msg.height = 0.8823603425866194;
    msg.services.assign("CKJQQYCVNXNDJAFEWTIQHHUUMIDNSBZWBBLANZSCEZLVXCAUYFFJXHQYUXYWRLSENGLTIPUBYQIWPSBANLZEAGDQWIDGEUXHIQJYOVMOZEKCSSHHXMIBBJDNLKGTMRDYEFPMYXPULANTOTGIRZVCKKMFORKGFBHCDOPGGRHORWVKORMVMCZRCTJJNAAXDZOHRQGIVMOWJEBPXTPLXBNATFRZFKJPFGVTQDQMYCLUH");

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
    msg.setTimeStamp(0.20474221332504328);
    msg.setSource(55906U);
    msg.setSourceEntity(53U);
    msg.setDestination(24151U);
    msg.setDestinationEntity(233U);
    msg.sys_name.assign("XPTUCAZJXIYYBJZNKQFEMLAMLJOVWPLJLDODYRAMSXKEVKDOXITVGOFCOIKPQPRZFXHJUQNTBCHGUYRFZSVXEYAZIVILCSUTNWRPHMFLVACXABFNPXMSSVPAGRLNWOGGRIWYEUJQTYHWQBEHFAQRTODDELFGENUUHLUQEZAHGJTRJIYROVFSCKZYDCWBIKUQ");
    msg.sys_type = 213U;
    msg.owner = 65371U;
    msg.lat = 0.0007676622664009036;
    msg.lon = 0.3839735862072031;
    msg.height = 0.3694174529346319;
    msg.services.assign("STCXCJBVBDKCPRPZSIHRWYPRDSGVEMMKGXNSNBGHSYRJZQBCPOQQHIMAPXJQUVHFSGRNVZGNAUKYGRUXJLNFSXMGFDWOEOKUACXVDZSMBUNVTAIIDCQOERKMHKFVTMVCYWTZEGOPBJBQFFPRZQHLEVXIOEGIXAZLNURLRDTYFALXOWEFTDIIYDWINLWQTWBUHCJHYUAQTNULXPSMCTJQFVNJZBFILKEPL");

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
    msg.setTimeStamp(0.25255844787240656);
    msg.setSource(30854U);
    msg.setSourceEntity(15U);
    msg.setDestination(58316U);
    msg.setDestinationEntity(23U);
    msg.service.assign("BVSJSFHEHAKZJATIVFWCMVKYPJORGMVRFDNPXIWIUBQMNMNDJNNFKDFUZZXRGKTSUGCCLASXFIJHSSGWBDWEVNLKUPBS");
    msg.service_type = 237U;

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
    msg.setTimeStamp(0.7165288387077209);
    msg.setSource(32133U);
    msg.setSourceEntity(34U);
    msg.setDestination(42534U);
    msg.setDestinationEntity(6U);
    msg.service.assign("UTLRVGQPSIPFBEQECERWTOTGOCOAOIFMKYZQVUZPAYVMUHBJUZBLKCMONAIIYWPDQNCYTLDTNEHRJLNOOXMSKDBUMRPZNHNAQDRFWCIJHSORUXLWPPMNRAYYXFMSAQKEHATSNDECMDVDS");
    msg.service_type = 30U;

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
    msg.setTimeStamp(0.31382213113834867);
    msg.setSource(51639U);
    msg.setSourceEntity(97U);
    msg.setDestination(49075U);
    msg.setDestinationEntity(240U);
    msg.service.assign("QCDCEAASWYUIHPQMPDXBYUJRWOWVXNXKRDGXOOSKUMLINDYQNTEDMKGQPHFCXSBIZHXBFSILVZEKUNBKWYFWRTIME");
    msg.service_type = 57U;

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
    msg.setTimeStamp(0.5301805192977445);
    msg.setSource(56357U);
    msg.setSourceEntity(54U);
    msg.setDestination(19672U);
    msg.setDestinationEntity(63U);
    msg.value = 0.9122222251961102;

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
    msg.setTimeStamp(0.5265364388913774);
    msg.setSource(40058U);
    msg.setSourceEntity(233U);
    msg.setDestination(29095U);
    msg.setDestinationEntity(117U);
    msg.value = 0.4641442630009335;

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
    msg.setTimeStamp(0.7074570027828208);
    msg.setSource(40065U);
    msg.setSourceEntity(181U);
    msg.setDestination(3704U);
    msg.setDestinationEntity(57U);
    msg.value = 0.6615785520442622;

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
    msg.setTimeStamp(0.3509881635190151);
    msg.setSource(53203U);
    msg.setSourceEntity(117U);
    msg.setDestination(47180U);
    msg.setDestinationEntity(90U);
    msg.value = 0.07030883462964677;

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
    msg.setTimeStamp(0.2845581474859691);
    msg.setSource(46148U);
    msg.setSourceEntity(18U);
    msg.setDestination(34704U);
    msg.setDestinationEntity(83U);
    msg.value = 0.20219662532428506;

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
    msg.setTimeStamp(0.6178498403367713);
    msg.setSource(12896U);
    msg.setSourceEntity(121U);
    msg.setDestination(7166U);
    msg.setDestinationEntity(111U);
    msg.value = 0.5081503176545343;

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
    msg.setTimeStamp(0.5319281702435592);
    msg.setSource(11217U);
    msg.setSourceEntity(8U);
    msg.setDestination(51390U);
    msg.setDestinationEntity(53U);
    msg.value = 0.41523854423626194;

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
    msg.setTimeStamp(0.5405438113191242);
    msg.setSource(22582U);
    msg.setSourceEntity(217U);
    msg.setDestination(43369U);
    msg.setDestinationEntity(147U);
    msg.value = 0.37991540636179666;

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
    msg.setTimeStamp(0.45681073385695037);
    msg.setSource(45519U);
    msg.setSourceEntity(27U);
    msg.setDestination(6564U);
    msg.setDestinationEntity(55U);
    msg.value = 0.769528656063356;

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
    msg.setTimeStamp(0.9525315547530258);
    msg.setSource(22820U);
    msg.setSourceEntity(49U);
    msg.setDestination(55674U);
    msg.setDestinationEntity(157U);
    msg.number.assign("KPFNKNGXZFQTOLIBRVTHFELNY");
    msg.timeout = 29156U;
    msg.contents.assign("QZRMFDGNLXMWIZWPWXBEBELLOPSOTKALVHU");

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
    msg.setTimeStamp(0.9247875742391);
    msg.setSource(20613U);
    msg.setSourceEntity(226U);
    msg.setDestination(29326U);
    msg.setDestinationEntity(161U);
    msg.number.assign("YLOBMJPRCKPYYINRFABEWRYXJZDWGFFFTWYCQUJHYSEUMTZQVBVMENKCIAMZCELHAFTBXTVAGUXDHCZRTIMMWZBBDDJAYOKRHZPETGCKZNIDSWUTGGUKVSQIRKVPJKFBVZQSXLUPNWIMWNGNMHPXEQNILXKXAXHEOPSRZCALRSGHUTGYLFQJBJXWARLOSAJLIOYVWQLHCPQOQHUPJDFTQFVVXEC");
    msg.timeout = 44709U;
    msg.contents.assign("IRQHZSDORBCQFNPHJINMERWSALEDPEGDWAFJGTVBNRDRKIIEZFGDGFQXBFAQCXVKE");

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
    msg.setTimeStamp(0.596311062698836);
    msg.setSource(39963U);
    msg.setSourceEntity(27U);
    msg.setDestination(11563U);
    msg.setDestinationEntity(23U);
    msg.number.assign("QCNCYJBUKXEQRHVFKOLALQFTNMGQEEGOTWTRRPFFTNNJLEYHWRPESAQSMMVKOGXZIXDJYXRCSIOWDQBYEHPFZQPUBZUDRFWHBUUWREMJIIYRFEZ");
    msg.timeout = 37364U;
    msg.contents.assign("SJKBUNYABGWKZQGDYMGOWLTZUVFNRGIBMAVOXPOIEGSQ");

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
    msg.setTimeStamp(0.3938807839661459);
    msg.setSource(47131U);
    msg.setSourceEntity(172U);
    msg.setDestination(1506U);
    msg.setDestinationEntity(187U);
    msg.seq = 1864467853U;
    msg.destination.assign("BKVEMADBOAGQBWATIKPZPEKJBRJAGCXVPWQGOJDYXAQQATLHKESRCCELOXWHLJIEQTHDMTRSDKHZBSARIEMFXFHNRPVCWJDTOASGXNLUKGGNZZZBQYCCBYNDEMJPHPHJFXDPTYTUBXALOWZFHOWSQZSFQHXGMHUNUCZLIUEORPVNDSTERSYVJACEJLYMOLWIXYGOGGFUIBZKQLWTVBYNFZKYWDDRSIIMVVTPN");
    msg.timeout = 12802U;
    const char tmp_msg_0[] = {-113, -98, 79, 36, 45, 75, 68, 60, -6, -11, 89, -52, 56, -88, -58, 45, -3, 8, -27, 86, 74, -52, 54, 34, -85, -109, 125, 90, 71, 71, 0, 71, 91, 39, -105, -118, -85, 58, 39, 119, 25, 39, -69, 37, 40, 34, -82, -43, -81, 48, 26, -38, -38, -57, 101, -29, 3, -93, -43, 115, 109, 12, -63, 64, 83, -74, -18, 72, -117, -43, 97, 75, 122, 119, 13, 61, 19, 102, -109, 35, -85, -66, -31, 69, -51, -46, 58, 75, -33, 68, 68, 12, 104, -106, -23, 50, 71, 41, -48, -18, -106, 80, -84, 113, 1, 103, -59, 17, 88, 49, -103, -76, -72, 43, -90, 65};
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
    msg.setTimeStamp(0.18785609351122812);
    msg.setSource(32294U);
    msg.setSourceEntity(169U);
    msg.setDestination(8321U);
    msg.setDestinationEntity(75U);
    msg.seq = 3110095427U;
    msg.destination.assign("UPWJYTIKNZZDHYDIRJKQKBMVZPQKWGWVCDXVGGOTBGEHXOBSPMAVHNPMXZQMNRTRFCTBIKFEEPDMCAXQFYX");
    msg.timeout = 33635U;
    const char tmp_msg_0[] = {-76, 120, -64, -96, 67, 58, -57, 29, 73, -33, 29, 115, 70, 11, -81, 25, 95, -30, 126, -40, 105, -94, -9, 87, -10};
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
    msg.setTimeStamp(0.8493311433971534);
    msg.setSource(41849U);
    msg.setSourceEntity(141U);
    msg.setDestination(12544U);
    msg.setDestinationEntity(80U);
    msg.seq = 2895365U;
    msg.destination.assign("TNVSFHCHYIFUGUJUQNUSWWJRBVQQDJFDIJJFIXTLXANDBANFOHYNWQUJRXAKMEGBMVMVZDKKOVTUAZCVJLYOSETXIZMBAPPRBOASXCOLVTQNCNVBEPTGKCV");
    msg.timeout = 18116U;
    const char tmp_msg_0[] = {79, 126, -29, 68, -51, 67, 106, 49, -38, -127, 0, -9, -40, 89, -48, -43, 42, -9, -12, 83, 54, -23, -40, -50, 11, -94, -54, -62, -55, -104, -41, 78, 39, -14, -96, -108, -29, 68, -43, 76, 50, -11, 14, -87, -97, -26, 16, 3, 99, 106, -54, -2, -66, -49, -17, 92, 17, 40, -127, 66, 104, -120, 110, -105, -15, 1, -16, -123, 100, 114, 93, -79, -119, -84, 56, 116, -15, -83, 72, -19, -108, 31, -58, -32, 6, 73, 56, 45, 21, -26, -84, -63, -7, 46, 78, -63, 102, 107, 43, -81, -119, -36, 120, -47, 2, 7, 1, -86, 28, 72, -116, -89, -14, -127, -7, -103, -29, -7, -20, 36, -71, -128, -32, -44, 25, 73, 9, 44, 104, 103, -105, 111, -73, 28, 104, 95, -47, -33, -25, 102, 0, -12, 16, 48, -9, -107, 86, -43, -62, -119, -35, 10, 24, 94, -57, 39, -101, 78, -92, 46, -70, 83, 111, 47, 15, -93, 92, -2, 75, 124, -101, 117, 42, 40, -120, -53, 26, 68, -31, 12, 101, 120, -77, -81, 9, -71, 14, -67, -23, -100, 113, -43, 125, 25, -108, 102, 71, 17, 63, -15, -19, -113, 49, -17, -123, -33, -34, 87, 24, 31, 4, 77, 83, -114, 79, -10, 124, -46, -72, 89, -93, 3, 19, 124, -123, 87, -33, 101, 90, -51, 74, -114, -71, 85, 102, -121, -38, -117, -60};
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
    msg.setTimeStamp(0.8361107708325201);
    msg.setSource(24004U);
    msg.setSourceEntity(19U);
    msg.setDestination(23372U);
    msg.setDestinationEntity(25U);
    msg.source.assign("UVJUTTPINEMNSSCXLZLDSQGZHFCNPQFTUUBJGCKNXWQVSOFTNMWTUGLTHBRLFVUHVNXOELPQYCKEVJUDJEPBYGVAAPLFOCEAFHJWRZWYESYRUHSESZNZGNZLMBRYGAKKTXTLOGXYEESSYUONNFDKJYDMOXIZZGQYIOZPIRBACMJFXWVO");
    const char tmp_msg_0[] = {27, -20, -39, 99, -102, 60, 120, -6, -91, -19, -46, -2, -84, -10, -127, 80, 93, -7, -42, -16, 22, 35, -22, -121, -3, -8, 36, 20, -22, -94, 51, 96, -37, -26, 19, 93, 126, 48, -102, -27, -68, -116, -108, -117, 20, 21, -114, 83, -48, 73, -22, -107, 15, -111, 44, 2, 80, -11, -48, 19, 72, -78, -72, -125, -60, -81, 57, 55, 35, 10, -62, -12, 95, -11, -119, -16, -36, -21, -26, -108, -123, -15, 16, 32, 124, -26, 121, -55, -101, -13, 28, 117, -98, 101, 98, 62, -103, -107, -45, 34, 116, -15, -107, 112, 13, -108, -26, -99, -64, 115, -36, -43, 72, 117, -101, 60, 3, 19, -46, -91, 111, -21, -72, -63, 58, -6, -127, -21, -26, 77, -36, -52, -13, -22, 105, -108, 64, -16, -126};
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
    msg.setTimeStamp(0.43033672899964315);
    msg.setSource(27922U);
    msg.setSourceEntity(177U);
    msg.setDestination(43193U);
    msg.setDestinationEntity(11U);
    msg.source.assign("ERMLNFJSBZDFWWSTVE");
    const char tmp_msg_0[] = {-47, 99, -117, 2, -61, 70, -121, 5, -126, 10, -68, 123, 99, 87, 84, -60, -46, -99, -61, -54, -45, 112, 12, 51, -82, -29, -10, 27, 79, 101, 85, 79, -55, 29, 118, -77, -53, 73, 113, 125, 40, 70, -83, 9, -20, -48, 29, -14, -50, -31, 60, 1, 33, 34, -62, -30, 105, -17, -61, -50, -13, 116, -10, 69, -23, -123, -2, -116, -63, 88, 93, -97, 60, 125, 51, -23, -62, 68, 126, 109};
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
    msg.setTimeStamp(0.894079066385197);
    msg.setSource(22504U);
    msg.setSourceEntity(215U);
    msg.setDestination(56637U);
    msg.setDestinationEntity(82U);
    msg.source.assign("TMGBYFEXEPDQUQJEVAREPUZCDRTKGYIXJWSYZGPO");
    const char tmp_msg_0[] = {-115, -48, 58, -22, 94, 44, -111, 119, -79, 18, -125, 57, -14, 63, 12, 114, -84, 27, 18, -66, -2, -115, -38, 66, -20, -27, -97, 48, 39, -55, 2, -89, -70, 45, 39, 91, 107, 70, -91, -36, -109, -9, 28, -76, -32, 114, -29, -43, -125, -102, 112, -57, 53, 40, 122, 46, 23, -78, 11, 33, -16, 117, -27, 71, 73, -87, -1, -75, 21, 62, -37, 72, 103, -46, 75, 92, 38, -103, 34, 4, 111, 115, 106, 118, 48, 91, -75, 52, -112, 44, 46, -26, 8, 88, -4, -49, 114, -111, -46, 40, -37, -70, 55, 14, 124, 57, -6, 39, 66, -88, -82, 45, 46, -72, -69, -51, -92, -128, 77, 100, 53, 80, -42, -96, 32, -10, -70, 17, 66, -27, 113, 68, 25, 97, -73, -45, 108, -50, 5, 35, -24, 88, 45, 65, -68, 27, -60, -91, 18, -93, -33, 96, 37, -1, -14, 15, -10, 13, 50, 42, 5, 94, -29, -10, -82, 79, -59, 70, 63, 55, 93, -66, 122, 110, -59, 125, 73, -89, 5, -13, -42, 97, -25, -9, -88, 122, -56, -100, -37, 51, 3, -58, 55, -73, 109, 10, -89, -93, 6, 84, -105, -38, -93, 37, 105, 40, 60, -105, 97, -71, 109, -97, 125, -45, -45, 49, -6, 100, -9, 22, 64, -71, 38, 65, 62, -61, 2, -110, -27, 83, 69, -87, -107, -13, -105, -53, -25, 10, -11, -11, 95, 95, 48, -124};
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
    msg.setTimeStamp(0.5351572650791004);
    msg.setSource(49320U);
    msg.setSourceEntity(18U);
    msg.setDestination(32717U);
    msg.setDestinationEntity(159U);
    msg.seq = 2878370786U;
    msg.state = 8U;
    msg.error.assign("BKZKRSOLHEUFVSEYJRXFZHUDTWXFVTAGTFHEISPGXVGDXWPNJMFNDOSJGDJUJOVBKSOYHHYUFCBRDKABZPEGXWKBMJCSGSDZLNQZMDVZOORQMBAVEZNWNCLAVT");

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
    msg.setTimeStamp(0.03344396607932609);
    msg.setSource(45303U);
    msg.setSourceEntity(102U);
    msg.setDestination(30512U);
    msg.setDestinationEntity(179U);
    msg.seq = 1133524162U;
    msg.state = 39U;
    msg.error.assign("QTWXLURWUFKWVYCMHCQSJIAPVHGGPSGFJPMMZXXENEDOHTNLCILNQXEAJYMYYHJOFSIDGALKUSLKXXCSSFECY");

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
    msg.setTimeStamp(0.37705326664221017);
    msg.setSource(58868U);
    msg.setSourceEntity(100U);
    msg.setDestination(29703U);
    msg.setDestinationEntity(210U);
    msg.seq = 193732656U;
    msg.state = 61U;
    msg.error.assign("AYIHCQKUCGUVSHRPOUIYKIZVMAXPXBDDXORV");

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
    msg.setTimeStamp(0.11553273506032247);
    msg.setSource(26082U);
    msg.setSourceEntity(192U);
    msg.setDestination(11439U);
    msg.setDestinationEntity(238U);
    msg.origin.assign("QKQQLVJNBGIPCFMGPUZFNDVARLDUOMBXSJAEZKXMXKLDUDGEORJXOIPCIATZSXFWNCNZUABHOVOMTDWHLRXNQMVDYUEIKSWRZYOPSPIURQUWNCLKTRVGVBLVPTBEZODJKAIXEUPYXKQWCGHAGNOMBCZHTJIWESPPWNH");
    msg.text.assign("HNVBZDPCNVNSWNGPIUWIPBJFGXLUDDJNNAFFUGTNDWUJITJKXYCVCFZACEHXQVTTZXTRORGAEAHSM");

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
    msg.setTimeStamp(0.10628236614871367);
    msg.setSource(23968U);
    msg.setSourceEntity(5U);
    msg.setDestination(14911U);
    msg.setDestinationEntity(195U);
    msg.origin.assign("KGCFYPYZDVNPDAIEVSKAUJUSEQTBADOXJRRLIGMUVKGDLZQCQMNQVQVCWJOITTHEFBAJMWZGCUWVFWNHJDQOJLGFVVTOSREPWAGIEHLFKMZXYHTZMTGIJADHMBQKBBHA");
    msg.text.assign("FFNMRCZBDZNOAKJGULVRRXISIANKCUVLBIQLUJPCRSYJSOKXEDFPYOFGYN");

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
    msg.setTimeStamp(0.354094572893746);
    msg.setSource(39891U);
    msg.setSourceEntity(195U);
    msg.setDestination(35075U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("UHJREPRGGXFKIMT");
    msg.text.assign("JOOXSYZCJGWHAQAFXQUNPOASCRTGLVEFXHZCGXZTDEHRWEACZRJZOFEAIUYRNMHMILVYQDLPOHSFGAYHPIYMVXIGQLYHGPPTCJFUJBBSTKIUTDDLPOWWEDRNJ");

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
    msg.setTimeStamp(0.8026455922829068);
    msg.setSource(47103U);
    msg.setSourceEntity(136U);
    msg.setDestination(21122U);
    msg.setDestinationEntity(143U);
    msg.origin.assign("RHTWWWAAVSNUNQYHMDOASIHXDBVNHNFLEU");
    msg.htime = 0.10739610068586625;
    msg.lat = 0.3689446815801354;
    msg.lon = 0.47843698231452503;
    const char tmp_msg_0[] = {-71, 83, -17, 26, -34, -83, 70, -63, 25, 25, 19, -7, -86, -97, 92, 120, 99, -93, 7, 41, -127, -106, -57, 14, -68, -81, 4, 113, -70, -25, 85, 45, 44, 91, -125, 97, -18, 105, 16, 57, 109, -69, -83, -32, -50, 58, -124, -113, -38, -7, -48, 33, -84, -19, 96, -77, -106, -21, -8, 79, 126, 48, 54, 117, -63, -68, 14, 69, 91, -114, -1, 29, -112, 35, -60, -32, -45, 18, 124, 45, 56, 43, -122, -14, 70, -96, -32, -33, 8, 27, -71, -24, 110, -111, 39, -13, 33, -127, -2, -98, -123, -25, -93, -119, -10, -59, -4, 18, 88, -75, -12, 115, 27, 30, -124, 126, 79, 43, -30, -5, 72, -60, -126, 50, 95, -47, 59, -117, -88, -2, 110, 110, 24, 75, 4, 19, -16, 15, 22, -29, 33, 84, -96, -58, 25, -11};
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
    msg.setTimeStamp(0.9766408236957237);
    msg.setSource(52183U);
    msg.setSourceEntity(152U);
    msg.setDestination(34724U);
    msg.setDestinationEntity(183U);
    msg.origin.assign("RBTWZKQWHHNMSSOOFXGKHGCONANCHGZMEQVETPESDUGXDYQFWMWGPKEUWILQPRCIGRHLXTGWVBOZYUNZZIRDXLRBLSIVRBZAZAQNMAIDKPBNNWPRKCXDDCRMTLS");
    msg.htime = 0.06829352445804437;
    msg.lat = 0.3508249972557126;
    msg.lon = 0.14461820370255019;
    const char tmp_msg_0[] = {82, -3, -70, -114, 11, -72, 31, -124, 72, -12, -48, 36, -73, -96, 53, 12, -23, -16, -52, -117, 125, 8, 107, 61, -47, 84, -118, -1, -81, 79, -96, 10, 100, -26, -52, -83, 90, 109, 17, 125, -5, -50, 67, 19, -75, -19, -82, 2, -107, 94, 52, -66, 117, 125, -97, -82, -29, -66, 76, 119, -30, -31, -114, -49, -39, -123, 4, 85, -23, -20};
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
    msg.setTimeStamp(0.3129454875332327);
    msg.setSource(43649U);
    msg.setSourceEntity(201U);
    msg.setDestination(42879U);
    msg.setDestinationEntity(247U);
    msg.origin.assign("BMEPJFORLZQREKILZPEXMSRBQHNMFVFHIOGFGNUXDYOAJQABLENVDRGFACCTPWDDCVOHEIBRLAEDFQNJTVIIUTLUZQUCGAEBCCYVTVWDOVZUFPINTJARANVSMGZZBYIRQYAGBCSHZECYJAPMOPLMORXWOHHTHXJXJPHYJWXCSUSYBDUADLNPYKJMGYEOWRDNFFMDRKTGOWWQIHQPKCVLKWKZTYKBQKSKSIXHULSKBVFEUTQLXGW");
    msg.htime = 0.8895031048441008;
    msg.lat = 0.5550704320104932;
    msg.lon = 0.7821054419171285;
    const char tmp_msg_0[] = {-102, -128, -18, -112, 117, 68, -27, -53, 16, -110, -88, 8, -24, -77, 96, 100, -91, -14, 17, -70, 102, -11, 58, -67, 53, -81, -65, -9, 34, 12, 8, -112, 67, -70, 69, 88, -12, 114, -64, 121, 18, 82, 45, 8, 55, -48, 94, -118, -74, 113, -29, 50, 125, -51, -23, -59, 52, 91, 2, 47, -83, -88, 85, 16, -15, 72, 13, -11, 41, -42, 11, 110, -125, 45, 16, -65, -96, 105, 87, 107, -7, 27, 23, 67, 81, -38, 4, -51, -3, 71, 66, 108, -103, 3, 112, -43, 104, 88, 106, -85, 108, 105, 87, -124, -60, 117, -8, 13, 4, 76, 46, 118, -114, 73, -3, 33, -109, -120, 17, -36, -57, 48, -72, -10, 77, 122, -44, 87, 117, 89, -83, 39, -112, 58, -66};
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
    msg.setTimeStamp(0.7481948328730461);
    msg.setSource(52738U);
    msg.setSourceEntity(125U);
    msg.setDestination(46348U);
    msg.setDestinationEntity(189U);
    msg.req_id = 49542U;
    msg.ttl = 3497U;
    msg.destination.assign("VFXUWXNNIORZMYKYZFVUXIYGPLOE");
    const char tmp_msg_0[] = {93, -99, 20, 104, -128, -65, 80, 70, -43, 71, 43, 102, 112, -21, -27, 108, 113, -45, 5, 85, -98, 91, -49, 36, -117, -79, 27, -5, 5, -24, 24, 61, 39, -14, 66, -66, -15, 77, -68, 36, -74, 53, 102, 47, -101, 84, 100, -66, -23, 91, 32, 0, 12, -78, -16, 95, -76, -109, 8, -107, -121, -57, -16, 111, 98, 77, -125, -21, 29, -64, -49, 120, 11, 27, -90, -65, 4, -4, 21, -69, -48, 42, 32, -61, -23, 87, -73, -9, 119, -14, -108, 59, 4, -2, 102, -73, -90, -13, 73, 68, -38, 97, 124, -76, 31, 106, 80, -76, 115, -59, 85, 41, -2, -110, 85, -72, -69, 116, -39, -54, -57, 109, -62, -80, 50, -36, -95, 75, -28, -125, 61, 120, 99, -101, 106, 103, -20, 39, -116, -91, 98, 111, -77, 99, 56, -128, 73, -51, -57, -20, -126, 28, -72, 39, 46};
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
    msg.setTimeStamp(0.46100147634682875);
    msg.setSource(48488U);
    msg.setSourceEntity(22U);
    msg.setDestination(14799U);
    msg.setDestinationEntity(180U);
    msg.req_id = 7919U;
    msg.ttl = 34630U;
    msg.destination.assign("YVMICWEAVAPNHAJGTIDQURNYBFSFDQXZPXHKOKLGBMENOCTXEHOIMMULAUGRYFATGPRJDGCSRRHDRBDBKCVOKEMQIWKJTDPMONHLKQCHL");
    const char tmp_msg_0[] = {44, 119, 119, 21, -79, -52, 23, -21, -28, -124, 105, -94, -56, 119, -89, -125, -88, -65, 107, -23, 15, -94, -109, 23, 23, -100, 16, -2, -35, -55, -107, -40, -113, 51, 21, 71, -90, -6, -73, 102, -54, 126, 81, 5, -108, -124, 22, -103, 24, -33, -27, -100, 76, -54, 56, -40, 42, -112, 64, -112, 1, -49, 119, -3, 73, 36, 23, 31, -61, -74, -104, -30, 39, 109, 5, 107, -94, 26, -95, -78, 91, 95, -111, 95, -117, -97, 45, 87, -6, 6, 117, -77, -117, 116, 91, -112, -103, -6, -37, -19, 32, -101, -73, 62, -15, -59, -96, 112, -31, -89, 76, -52, 78, -83, -56, 51, -46, 56, -105, -35, 5, 45, 60, 13, -49, 9, 126, -117, -75, 25, 83, 42, 107, -117};
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
    msg.setTimeStamp(0.737151941082445);
    msg.setSource(4893U);
    msg.setSourceEntity(231U);
    msg.setDestination(35866U);
    msg.setDestinationEntity(146U);
    msg.req_id = 22283U;
    msg.ttl = 26439U;
    msg.destination.assign("EIKXUJZZPSCWQDRGGRALDELOBCIVXDMYKSDDPQPZYGBCWZFLLAOKQRSKOXNMAYAAABCJUETIHYQXXHUTSEZDBCEQNTSIFPUWFAPPMHXNVGWDJKBRAVWKETQAEEVFLMPBU");
    const char tmp_msg_0[] = {-73, 4, -40, -50, -18, 109, 78, -120, -103, -118, -86, 34, 64, 51, 44, 13, -108, -88, 53, -62, -95, -81, 92, -77, -112, 28, 50, -18, 123, -12, -97, 41, -12, -116, -26, -61, 70, -72, 94, 105, -38, -80, 42, 34, -111, 117, 104, 123, 44, -34, -16, -27, 7, 111, 66, -30, 34, 95, 2, 15, -50, -96, 105, -44, 118, -54, -27, 58, -56, 96, -125, 96, -110, -114, 93, 97, 69, -20, -118, -57, 101, 122, 112, 32, 15, -68, -85, 90, 37, -95, -27, 77, 65, -10, -42, -23, 110, 72, -1, -14, 115, -108, 114, -34, 42, 23, 102, 14, 79, 58, 9, 108, 96, 123, 81, -17, -64, -4, -89, 30, -6, -74, 43, -120, 99, 26, 121, -107, 66, 98, -51, 17, -94, 60, 117, 91, 46, -61, -21, 79, 75, -41, -98, -51, -123, 72, 108, 78, -88, -42, 71, 94, 113, -91, 32, 10, 99, -126, -59, -94, -109, -72, 44, 92, -76, 16, 88, 66, -26, 107, 79, -71, 46, 82, -38, 66, 84, -94, -68, -38, -10, -47, -74, -1, -69, 19, -70, -92, 16, -79, -33, -10, -119, 71, -22, 37, 7, 65};
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
    msg.setTimeStamp(0.4308063528095665);
    msg.setSource(53295U);
    msg.setSourceEntity(154U);
    msg.setDestination(40861U);
    msg.setDestinationEntity(214U);
    msg.req_id = 30767U;
    msg.status = 162U;
    msg.text.assign("AYZVSXXACSFQNBTMZHMIEGNWWHNYJPANEFOQHIDFXYMXMWREOHTZMUIGS");

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
    msg.setTimeStamp(0.34565159955733316);
    msg.setSource(6388U);
    msg.setSourceEntity(81U);
    msg.setDestination(35959U);
    msg.setDestinationEntity(103U);
    msg.req_id = 63903U;
    msg.status = 183U;
    msg.text.assign("MYMMSZSHKNZIZHLURSBVVHTKJNQWMDWDTEUBQQYGDZCLPXONDUBXMCHIGASJPFZXJEJIDWNHCUOVLQPTTGRSMXFIFVTQEZWLXHCMH");

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
    msg.setTimeStamp(0.8308363837674327);
    msg.setSource(31673U);
    msg.setSourceEntity(18U);
    msg.setDestination(53136U);
    msg.setDestinationEntity(10U);
    msg.req_id = 11021U;
    msg.status = 159U;
    msg.text.assign("ACSFOXPJAQLKNMGBULGYUOQPDVAKPMTYJEUOIULSFCYJSPCWTWMYFMNFAUTRUPRXOPRNHBNGIJXGDGOVKCPAORXHWHKEVZXWLEXMNEUDJFZROYWBNCDYRSQFDQSFHDENNTZZEDAHVWCHVVRROSSLTNCMRWMIICQZYIXFULMESKIQKIDXKYLKXCOMILKQZWGLYZWYMRABFDJEBGSBHOPBDTTEATZGBUKUGVJSVWQZIHTPVEHCLAJZIX");

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
    msg.setTimeStamp(0.9990056661348761);
    msg.setSource(1266U);
    msg.setSourceEntity(215U);
    msg.setDestination(19692U);
    msg.setDestinationEntity(239U);
    msg.group_name.assign("CSXKYEMVFBXFLEBHTDRXTDDUWFAPHQTKJCWMPMSQUPROFXORHKHJJBFOAGXNJDLDQWQIKEAFCGUYTFEUINVABWXVGDYCYBPRZVNOLIZMEONMGPQIYTVSZSNQSGVWUFLBSEZOEMRHPSYORJVIYZMKRHATLDIIRNJKXPZY");
    msg.links = 2683039167U;

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
    msg.setTimeStamp(0.7821406701926633);
    msg.setSource(28183U);
    msg.setSourceEntity(67U);
    msg.setDestination(33436U);
    msg.setDestinationEntity(46U);
    msg.group_name.assign("GGNSMBOMLQORPWGLRRKMOFUEYBCMTLXTVAXYFSALFPJISVDJEZRYWNHVDABTYUQIAZHEWIKOQEJXKSRBOUNVPWJNZDDJICNNTZBLIAFIKCVDNLXIQDDSKPFTVHGLEDWNXUCUCXDMXWKGUBHFXYURYRJELHQPMRPCZWSSHBAJYBJJVRAZITVMZKKEQFYYQCTICMLXAGDZBWWRWUGFECGUMHQZFGKMVAOQHAULONPCFIHGKXZOTOYJQBVPPNPHES");
    msg.links = 2114470557U;

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
    msg.setTimeStamp(0.8640895148234663);
    msg.setSource(41864U);
    msg.setSourceEntity(49U);
    msg.setDestination(3270U);
    msg.setDestinationEntity(19U);
    msg.group_name.assign("USUNFBGDCDYERWFBNVBJNGNZNXVMX");
    msg.links = 538825616U;

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
    msg.setTimeStamp(0.6956263462941908);
    msg.setSource(22704U);
    msg.setSourceEntity(121U);
    msg.setDestination(18646U);
    msg.setDestinationEntity(115U);
    msg.groupname.assign("TWASVLUCKJ");
    msg.action = 2U;
    msg.grouplist.assign("HZLLIXXWXVHHLFDUMSSYUNYQHDAMGQZTZIAKOKHEE");

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
    msg.setTimeStamp(0.01370465234035545);
    msg.setSource(56151U);
    msg.setSourceEntity(85U);
    msg.setDestination(30329U);
    msg.setDestinationEntity(160U);
    msg.groupname.assign("QSUYOIDAGXFKJVJIJILITXOOQMFFCYDMJWUMSEQWZOZSMFCHSWSXVVTEBB");
    msg.action = 222U;
    msg.grouplist.assign("FKWRUIAQXPUDKHDZXFWXWINKLUFOJGIMNBQIDYHVTYSIPXSNGKAUVNVIJFQCZNZTJKOXSEGHWKPOZTJJZPAEKAZTCNTAOBRLFBGXPNRBPAFTEMUUMSVIUMHXHYQLYROVVLFTSRVZSTCKWIPZSYEKAVMTVWHJDJMHRORXLQGGCLFEWYBBDUZDJCCRTEGYQGAYNJVFD");

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
    msg.setTimeStamp(0.7144114224576471);
    msg.setSource(59814U);
    msg.setSourceEntity(150U);
    msg.setDestination(21207U);
    msg.setDestinationEntity(4U);
    msg.groupname.assign("JLTCGXMGDRAKKBBXGZVZDOSEUDQRSPIXHKNYHEGPKVSZVGHLFNGEVMMUGQDDHFOXDNUMOESTSRSCAIZEYACTLNJXSAWJUIAKQWWBIWWSNVAJZV");
    msg.action = 105U;
    msg.grouplist.assign("OBHHOLWCYRMEKGLGBLQVEMDGVIDTRCEZHVTYSGOXZIGRJJYFRNXDCKBBASDTLWGVBJWUHQMIIAFNOECDJLESVHMAPTKYXAXMKSYYWORPFJOMKUJEWWLOGSQVSXUKDAHBEMOKQKTJACGPWXZXIPXNMPEQCHSUSGIPLTFELTRIPVREKIYCFHY");

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
    msg.setTimeStamp(0.33413212925196467);
    msg.setSource(41555U);
    msg.setSourceEntity(248U);
    msg.setDestination(51235U);
    msg.setDestinationEntity(5U);
    msg.value = 0.8619313476990207;
    msg.sys_src = 34905U;

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
    msg.setTimeStamp(0.5395461623518987);
    msg.setSource(63335U);
    msg.setSourceEntity(112U);
    msg.setDestination(29733U);
    msg.setDestinationEntity(144U);
    msg.value = 0.8997923318871627;
    msg.sys_src = 26662U;

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
    msg.setTimeStamp(0.33525540178944335);
    msg.setSource(56521U);
    msg.setSourceEntity(62U);
    msg.setDestination(4321U);
    msg.setDestinationEntity(161U);
    msg.value = 0.35700170416705324;
    msg.sys_src = 17967U;

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
    msg.setTimeStamp(0.7057139035603565);
    msg.setSource(29618U);
    msg.setSourceEntity(118U);
    msg.setDestination(60641U);
    msg.setDestinationEntity(77U);
    msg.value = 0.6843765949686681;
    msg.units = 179U;

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
    msg.setTimeStamp(0.8862583977085812);
    msg.setSource(53860U);
    msg.setSourceEntity(162U);
    msg.setDestination(16389U);
    msg.setDestinationEntity(110U);
    msg.value = 0.20921624685753748;
    msg.units = 248U;

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
    msg.setTimeStamp(0.7612454782203267);
    msg.setSource(14570U);
    msg.setSourceEntity(36U);
    msg.setDestination(21925U);
    msg.setDestinationEntity(123U);
    msg.value = 0.4978140976927876;
    msg.units = 172U;

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
    msg.setTimeStamp(0.2721794022112295);
    msg.setSource(54640U);
    msg.setSourceEntity(17U);
    msg.setDestination(63723U);
    msg.setDestinationEntity(154U);
    msg.base_lat = 0.6822556222182192;
    msg.base_lon = 0.3038162161612409;
    msg.base_time = 0.14935236717964462;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 50957U;
    tmp_msg_0.destination = 26651U;
    tmp_msg_0.timeout = 0.7533108289122193;
    IMC::MagneticField tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.49269218873464127;
    tmp_tmp_msg_0_0.x = 0.48428165989833105;
    tmp_tmp_msg_0_0.y = 0.5159779071667243;
    tmp_tmp_msg_0_0.z = 0.37362695164307225;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2181229865797717);
    msg.setSource(23519U);
    msg.setSourceEntity(64U);
    msg.setDestination(29501U);
    msg.setDestinationEntity(177U);
    msg.base_lat = 0.9467380747924465;
    msg.base_lon = 0.8394064717918645;
    msg.base_time = 0.3389132203443619;

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
    msg.setTimeStamp(0.8556393402404314);
    msg.setSource(45636U);
    msg.setSourceEntity(9U);
    msg.setDestination(13015U);
    msg.setDestinationEntity(134U);
    msg.base_lat = 0.912363969178531;
    msg.base_lon = 0.30006909648302604;
    msg.base_time = 0.6598201534190444;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 65337U;
    tmp_msg_0.priority = 70;
    tmp_msg_0.x = -8871;
    tmp_msg_0.y = 25003;
    tmp_msg_0.z = 20066;
    tmp_msg_0.t = -16107;
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 50794U;
    tmp_tmp_msg_0_0.lat = 0.9145221643872427;
    tmp_tmp_msg_0_0.lon = 0.4559452124745075;
    tmp_tmp_msg_0_0.z = 0.15880541509098112;
    tmp_tmp_msg_0_0.z_units = 174U;
    tmp_tmp_msg_0_0.speed = 0.13715808377520555;
    tmp_tmp_msg_0_0.speed_units = 64U;
    tmp_tmp_msg_0_0.custom.assign("ADANBCRRXPWXVRQSNQFJYWPOOUCCOVPHNEGGUZUHDYXXDTDEFEEOCYEWWCXXKFLLZFQYURGZHIFQJHHRZRKYVAGNKBKJBWGJGGMZTDUXPBCNNGLZPATVXCLLIOSWCKOIBDALVSQTIDYZPRAXMTAZLFMEIIUTALQEIWJKJVFMXLNHUVSMMDBQDYNHQJTIEAHOTVCPVMQDIKYRF");
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
    msg.setTimeStamp(0.8589652718217042);
    msg.setSource(17015U);
    msg.setSourceEntity(176U);
    msg.setDestination(5885U);
    msg.setDestinationEntity(15U);
    msg.base_lat = 0.046266071363953;
    msg.base_lon = 0.25271838269276004;
    msg.base_time = 0.26857937481940064;
    const char tmp_msg_0[] = {19, 106, 70, 29, -91, -108, -2, -114, 52, 55, 94, 53, 51, 11, -43, 85, -15, -89, -75, 19, -99, 26, -6, -94, 123, -109, -74, 39, 122, 32, -111, -92, 12, -67, -67, 102, -126, -58, -120, -115, 120, 58, -38, -102, 71, 24, 46, -17, 45, -102, 51, 72, 67, 16, 109, -49, 48, 111, 56, 86, 71, -28, 68, 17, 94, -90, 24, 115, -106, -127, 17, -58, 69, -82, -27, -59, -98, 108, -118, -26, -18, -19, 50, 44, 118, 52, -13};
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
    msg.setTimeStamp(0.547673444836512);
    msg.setSource(21860U);
    msg.setSourceEntity(43U);
    msg.setDestination(25582U);
    msg.setDestinationEntity(19U);
    msg.base_lat = 0.7107659023146716;
    msg.base_lon = 0.4107319711496099;
    msg.base_time = 0.30551344016541215;
    const char tmp_msg_0[] = {85, 4, -5, 125, -119, -110, -31, 49, 5, -21, -73, 57, 113, -1, -120, 86, -67, 112, 116, -35, -43, 31, 21, 121, -113, 103, -96, -55, 36, 82, 49, -85, 110, -123, -69, -24, -71, -65, 28, 68, -51, 106, -16, 10, -120, -57, -73, 21, 98, -99, -99, -59, 4, -10, 71, -92, 79, -12, -22, 110, 63, 96, 16, 24, -77, -10, 47, -41, 95, 87, 91, 10, 6, -104, -90, -74, -40, -84, -71, -128, 121, -100, 35, -86, -122, -117, -19, -48, -41, -124, -31, 81, 29, 92, -57, 79, -24};
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
    msg.setTimeStamp(0.22859642291926852);
    msg.setSource(49228U);
    msg.setSourceEntity(216U);
    msg.setDestination(20332U);
    msg.setDestinationEntity(193U);
    msg.base_lat = 0.22025841234933086;
    msg.base_lon = 0.9283295411542823;
    msg.base_time = 0.25506738375549587;
    const char tmp_msg_0[] = {-17, 58, -7, -77, -14, -8, -26, -13, -21, -108, 5, 10, 87, -48, -91, -10, 32, -46, 95, 85, -61, 18, -113, -75, 69, 58, -121, 67, -123, 60, -36, -118, -66, 3, 76, 65, -101, -101, -1, -30, 67, -104, 113, 70, -17, -100, -46, -100, -11, -106, 118, -12, 118, 62, 86, -92, -24, -108, 88, 69, 74, 82, 112, -80, 31, 7, -52, -1, -32, -89, -43, -84, -110, 78, -111, 25, 108, 63, -104, -53, -1, -18, -40, -119, 59, 55, 50, 62, -88, 50, -62, -39, -75, 43, 92, 96, -61, -30, 22, -68, 32, -53, -109, 109, 70, 97, -57, 96, 24, -124, 54, 98, -70, -123, 119, -43, -69, 47, 69, -26, 9, -92, 90, -37, -46, -110, 11, -116, 20, -31, 86, 99, 35, -5, -27, 117, -20, -4, 71, -27, -84, 89, 17, 76, 37, -6, 25, -62, -101, 3, 103, -57, -9, -79, 119, 57, 84, 26, -118, 44, -80, -31, -104, 103, 104, 87, -33, -122, -111, 15, -105, 12, -77, -59, 12, -81, 15, -23, 109, 101, -124, 122, 16, -36, 115, -74, 100, -53, 72, 111, -38, 17, 124, 30, 124, 106, -7, 74, 18, -91, 38, 65, -29, -59, 10, 51, -66, 77, 93, 58, 59, -45, 2, -91, 86, -64, 105, 95, -50, -59, 11, 16, -76, 45, -99, -80, 110, -1, 60, 119, 47, -64, 36, -39, 94};
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
    msg.setTimeStamp(0.7081386263603927);
    msg.setSource(46278U);
    msg.setSourceEntity(148U);
    msg.setDestination(52095U);
    msg.setDestinationEntity(68U);
    msg.sys_id = 53297U;
    msg.priority = 69;
    msg.x = -1051;
    msg.y = 17895;
    msg.z = 20831;
    msg.t = -21481;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.04956178318896831;
    tmp_msg_0.lon = 0.32979347935126235;
    tmp_msg_0.height = 0.7516643837258351;
    tmp_msg_0.x = 0.630137217188595;
    tmp_msg_0.y = 0.499752535284266;
    tmp_msg_0.z = 0.7419162938292956;
    tmp_msg_0.phi = 0.10112105753091016;
    tmp_msg_0.theta = 0.7076541990584571;
    tmp_msg_0.psi = 0.6902765309068112;
    tmp_msg_0.u = 0.043811962629194734;
    tmp_msg_0.v = 0.2642212856433297;
    tmp_msg_0.w = 0.9508049300283614;
    tmp_msg_0.vx = 0.5029918095975862;
    tmp_msg_0.vy = 0.08344773688744311;
    tmp_msg_0.vz = 0.9411925278744974;
    tmp_msg_0.p = 0.8173760545609183;
    tmp_msg_0.q = 0.0870120730938404;
    tmp_msg_0.r = 0.22963408660415197;
    tmp_msg_0.depth = 0.6014712551830916;
    tmp_msg_0.alt = 0.31873618529311176;
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
    msg.setTimeStamp(0.5559900346789854);
    msg.setSource(49098U);
    msg.setSourceEntity(193U);
    msg.setDestination(8047U);
    msg.setDestinationEntity(130U);
    msg.sys_id = 21254U;
    msg.priority = 107;
    msg.x = -19187;
    msg.y = 8678;
    msg.z = -12829;
    msg.t = -16680;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 192U;
    tmp_msg_0.htime = 0.026720638919037643;
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
    msg.setTimeStamp(0.8016391806971357);
    msg.setSource(30693U);
    msg.setSourceEntity(81U);
    msg.setDestination(50045U);
    msg.setDestinationEntity(49U);
    msg.sys_id = 18378U;
    msg.priority = -28;
    msg.x = -11936;
    msg.y = -20158;
    msg.z = 12708;
    msg.t = -3153;
    IMC::SimulatedDynamicEnvironment tmp_msg_0;
    tmp_msg_0.environmenttypeid = 200U;
    tmp_msg_0.id = 164U;
    tmp_msg_0.x = 0.6087149130944012;
    tmp_msg_0.y = 0.7719673617377092;
    tmp_msg_0.psi = 0.9870711659238788;
    tmp_msg_0.u = 0.46602749419224876;
    tmp_msg_0.v = 0.2985684102954912;
    tmp_msg_0.r = 0.4438066583090766;
    tmp_msg_0.x_auv = 0.7048436258931439;
    tmp_msg_0.y_auv = 0.18201899413418643;
    tmp_msg_0.z_auv = 0.3491614938178488;
    tmp_msg_0.phi_auv = 0.45603465490392336;
    tmp_msg_0.theta_auv = 0.05838733753218717;
    tmp_msg_0.psi_auv = 0.7157277984049671;
    tmp_msg_0.u_auv = 0.8126974281918135;
    tmp_msg_0.v_auv = 0.21352743557872467;
    tmp_msg_0.w_auv = 0.5347948534291208;
    tmp_msg_0.p_auv = 0.6647508157514163;
    tmp_msg_0.q_auv = 0.2270660956691536;
    tmp_msg_0.r_auv = 0.22886801704209336;
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
    msg.setTimeStamp(0.3578609052726949);
    msg.setSource(2974U);
    msg.setSourceEntity(159U);
    msg.setDestination(43723U);
    msg.setDestinationEntity(227U);
    msg.req_id = 1205U;
    msg.type = 156U;
    msg.max_size = 57859U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7596379433075848;
    tmp_msg_0.base_lon = 0.3432584378510394;
    tmp_msg_0.base_time = 0.4114544553969346;
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
    msg.setTimeStamp(0.9101162826818396);
    msg.setSource(8901U);
    msg.setSourceEntity(203U);
    msg.setDestination(62722U);
    msg.setDestinationEntity(12U);
    msg.req_id = 14083U;
    msg.type = 141U;
    msg.max_size = 17005U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5319618088047081;
    tmp_msg_0.base_lon = 0.8429722293682234;
    tmp_msg_0.base_time = 0.5314345373669914;
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
    msg.setTimeStamp(0.27344301209896027);
    msg.setSource(64707U);
    msg.setSourceEntity(85U);
    msg.setDestination(29206U);
    msg.setDestinationEntity(82U);
    msg.req_id = 59538U;
    msg.type = 85U;
    msg.max_size = 35628U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.24238191082696947;
    tmp_msg_0.base_lon = 0.7038106632898026;
    tmp_msg_0.base_time = 0.5352491283106903;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 22122U;
    tmp_tmp_msg_0_0.destination = 38715U;
    tmp_tmp_msg_0_0.timeout = 0.9406925725875644;
    IMC::FormationEvaluation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 213U;
    tmp_tmp_tmp_msg_0_0_0.op = 31U;
    tmp_tmp_tmp_msg_0_0_0.err_mean = 0.6196347315159211;
    tmp_tmp_tmp_msg_0_0_0.dist_min_abs = 0.4511677307769688;
    tmp_tmp_tmp_msg_0_0_0.dist_min_mean = 0.8380882518625388;
    tmp_tmp_tmp_msg_0_0_0.roll_rate_mean = 0.5365136656494177;
    tmp_tmp_tmp_msg_0_0_0.time = 0.8910462902047986;
    IMC::FormationControlParams tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.action = 215U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon_gain = 0.2066936811174761;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat_gain = 0.1909855094610886;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.bond_thick = 0.22111577741421173;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lead_gain = 0.42828661716287053;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.deconfl_gain = 0.96403603104244;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.accel_switch_gain = 0.5985475560742244;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.safe_dist = 0.4682026494025603;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.deconflict_offset = 0.971694990966677;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.accel_safe_margin = 0.9463480209771267;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.accel_lim_x = 0.807723346106401;
    tmp_tmp_tmp_msg_0_0_0.controlparams.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.6918993148635492);
    msg.setSource(14504U);
    msg.setSourceEntity(19U);
    msg.setDestination(45075U);
    msg.setDestinationEntity(115U);
    msg.original_source = 56695U;
    msg.destination = 54770U;
    msg.timeout = 0.32964430376902787;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 208U;
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
    msg.setTimeStamp(0.5469083288523975);
    msg.setSource(45787U);
    msg.setSourceEntity(103U);
    msg.setDestination(3442U);
    msg.setDestinationEntity(4U);
    msg.original_source = 28023U;
    msg.destination = 16472U;
    msg.timeout = 0.28746633305798097;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 22983U;
    tmp_msg_0.lat = 0.6836371888158518;
    tmp_msg_0.lon = 0.7966656472081143;
    tmp_msg_0.z = 0.6618021956314243;
    tmp_msg_0.z_units = 28U;
    tmp_msg_0.speed = 0.9623382005027146;
    tmp_msg_0.speed_units = 227U;
    tmp_msg_0.roll = 0.8079774472111355;
    tmp_msg_0.pitch = 0.9000710959884386;
    tmp_msg_0.yaw = 0.9465386772981766;
    tmp_msg_0.custom.assign("TSTQKLASZRXSNFDWSYXMRGSCINNLGQXSAJFBYKVVCIQOBGLYGTUPELPUREBEITLRUKKYDVAGFUOOQKRPNTLJXJYXTCZPIPISMHURHFWIJWQFPSDTKEZCVDOQDSWOWXGYEWBKQHXEKWDZBBBGX");
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
    msg.setTimeStamp(0.8982614731221981);
    msg.setSource(15613U);
    msg.setSourceEntity(212U);
    msg.setDestination(36035U);
    msg.setDestinationEntity(96U);
    msg.original_source = 41337U;
    msg.destination = 44898U;
    msg.timeout = 0.13488595750396448;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.026090620755887306;
    tmp_msg_0.dist_min_abs = 0.2578004511761378;
    tmp_msg_0.dist_min_mean = 0.27579674629497797;
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
    msg.setTimeStamp(0.4829323900464212);
    msg.setSource(36589U);
    msg.setSourceEntity(34U);
    msg.setDestination(34006U);
    msg.setDestinationEntity(120U);
    msg.id = 203U;
    msg.range = 0.4129600315192572;

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
    msg.setTimeStamp(0.18483129129612452);
    msg.setSource(46889U);
    msg.setSourceEntity(97U);
    msg.setDestination(54329U);
    msg.setDestinationEntity(14U);
    msg.id = 80U;
    msg.range = 0.8629954697858181;

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
    msg.setTimeStamp(0.25018376636033746);
    msg.setSource(6753U);
    msg.setSourceEntity(17U);
    msg.setDestination(49783U);
    msg.setDestinationEntity(50U);
    msg.id = 217U;
    msg.range = 0.5352837783333062;

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
    msg.setTimeStamp(0.47405611806936276);
    msg.setSource(13030U);
    msg.setSourceEntity(246U);
    msg.setDestination(61514U);
    msg.setDestinationEntity(187U);
    msg.beacon.assign("EQUCWOGFWZKWMIYPRGSSNVOQQFZJFWAOCCYGBCPDULILUDACZFQKDMF");
    msg.lat = 0.9195678032946891;
    msg.lon = 0.1367923490219396;
    msg.depth = 0.4577504682074224;
    msg.query_channel = 121U;
    msg.reply_channel = 54U;
    msg.transponder_delay = 241U;

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
    msg.setTimeStamp(0.9810575888253259);
    msg.setSource(31282U);
    msg.setSourceEntity(37U);
    msg.setDestination(3510U);
    msg.setDestinationEntity(241U);
    msg.beacon.assign("JCEAKCTDRQMMHBXKAWXEYVTWPIAZQCIWXNWIZIQVDDFQCPTPBQMYKLEECQDTEQXRVXWDBMIYLNRZZEBALSVRAVSUEBLEGOTUJSHRAUDRBOOZGRZQGIJYPUCSNVMDAZQDYVLKKIBCLLGVCWXFQSFTOGPNKFCFSJNYINEFXULL");
    msg.lat = 0.33755741177405985;
    msg.lon = 0.9991795740208204;
    msg.depth = 0.7387470179271641;
    msg.query_channel = 120U;
    msg.reply_channel = 51U;
    msg.transponder_delay = 252U;

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
    msg.setTimeStamp(0.8118049239061869);
    msg.setSource(19788U);
    msg.setSourceEntity(64U);
    msg.setDestination(28838U);
    msg.setDestinationEntity(237U);
    msg.beacon.assign("QIBRKONLBGGMAABQULCSIKSXMEZMKFFIKQQOBTJTDOZENKYSGELXGMDYMLPWWNROCLTPBHZPFVOMRVSGBZUXFSMTUDSITHDAARDXUBDJXHWRWORTHGWJZXNPEYCNIAVFINRGOLZBPE");
    msg.lat = 0.5190190610107482;
    msg.lon = 0.3383134527567476;
    msg.depth = 0.6794863828108484;
    msg.query_channel = 127U;
    msg.reply_channel = 193U;
    msg.transponder_delay = 194U;

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
    msg.setTimeStamp(0.8086763040338848);
    msg.setSource(13674U);
    msg.setSourceEntity(11U);
    msg.setDestination(24594U);
    msg.setDestinationEntity(160U);
    msg.op = 114U;

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
    msg.setTimeStamp(0.3926651826247647);
    msg.setSource(14478U);
    msg.setSourceEntity(144U);
    msg.setDestination(59812U);
    msg.setDestinationEntity(93U);
    msg.op = 216U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MKHYEPPTMOMWQIUFKADAZZXCGFTBWTLWYDSLDSXENZPNPYUGGAKLJUZSPZNUXFPYQVBLPBHYIECDVVQGOZUHGLBZBBJMRQVHRWOMSFWNGQYGCLVZRNUSXRQEJDCZHOBNFECEDITGPSYWHRYKMT");
    tmp_msg_0.lat = 0.7325064365820364;
    tmp_msg_0.lon = 0.9395427263700605;
    tmp_msg_0.depth = 0.5690535293950679;
    tmp_msg_0.query_channel = 139U;
    tmp_msg_0.reply_channel = 124U;
    tmp_msg_0.transponder_delay = 153U;
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
    msg.setTimeStamp(0.9121400603092976);
    msg.setSource(39104U);
    msg.setSourceEntity(71U);
    msg.setDestination(24921U);
    msg.setDestinationEntity(1U);
    msg.op = 119U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LFDTJHKMGRYYJOBAGGNCSSBDVFOKUXRBGWLUPUHQFFYOZBLUOOOEWEGRWMVBEXRNCDIXSSYSPCTNEIHTUJCKZCSIMLDXWIYDMAJVZEMXIWUUSRXPGQTQJVXPJRSNXICLZATOPWNKGZFHBMVIQPSMXZXBLITVHHOBDUNCPJFKQEZTNHHQPVGALMDNWPKWANYAMFRRJCOTHYVEANYWU");
    tmp_msg_0.lat = 0.6039071789207351;
    tmp_msg_0.lon = 0.9710912591357562;
    tmp_msg_0.depth = 0.42793606235942583;
    tmp_msg_0.query_channel = 217U;
    tmp_msg_0.reply_channel = 69U;
    tmp_msg_0.transponder_delay = 110U;
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
    msg.setTimeStamp(0.6267002852531354);
    msg.setSource(26672U);
    msg.setSourceEntity(61U);
    msg.setDestination(1884U);
    msg.setDestinationEntity(126U);
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 168U;
    tmp_msg_0.plan_id.assign("NZPEHICEWPCXBLIOHDLDNDBEWOYKDWPEDWRKLYWXLPVTLQHLFRVCBAXFGBYFJKHDKBUMCMRMINBNITUQCFXCOFEVAJJUYJTSVARRIKQYQDCEDUVGELNVEHINXJZNZTFHJADKSZOEOWYJU");
    tmp_msg_0.comm_level = 76U;
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
    msg.setTimeStamp(0.4350170255311676);
    msg.setSource(55144U);
    msg.setSourceEntity(111U);
    msg.setDestination(12996U);
    msg.setDestinationEntity(31U);
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("NNYSRLZXNMUKNSDLWZFOICGFDAHQDOMJVUXDQGCSIQHSHIEBHTCUKINFOVKIXXKCGOVYEMPKOLRZLEAWIRYNQNXSAUOYCFNJOWPEZUJMWKXYHTVDPTFQJABYHQYZPTMPRQRDINH");
    tmp_msg_0.type = 125U;
    tmp_msg_0.properties = 99U;
    tmp_msg_0.durations.assign("RUGCYOPBOVOQNVDQOLNFRPULIDEBOXKUWZMIDIKPZVFUCTJNFITXOCARLUHNTQDWJVEJSEBITGGMODNTBHCMBWAFLSFRCVTSASXXQADYHWXGXAUJAOTFVRBENDHYMLUKMYDPBBSMTKJWNCCRZXUVLBJHWDIELIMLJYTIEAJYGOHSYPYSVTWZEYCKMRMRNEPZNFQZKXGRJEZAPFZOQPNDFHXXVSAZQHGUJPYQCBZQGHHIRFGWWKEKCMIQW");
    tmp_msg_0.distances.assign("ZEGPFVAOIHGBENMKCTBSRAYAPQSSEQMIAIJBICEZLHXRKUTRCKGZGWKKGCYNPDYQXYSITSJVCVVEMMHAOLYJNOFLPZFZWQXGKHUSWTYOXWOMTSDFBCVDTGNKBWAVPXMLAUCGRDAXZHLUVLZB");
    tmp_msg_0.actions.assign("PYZQCDRJYONGRJDSQUZVKNDBQVJAGPLIVLWRXPQGDIMBBYHCEQGHBKLPDZACXMJXIYYQTXONSBZAYMTRSTCQ");
    tmp_msg_0.fuel.assign("FNXAMSSHVAKHRNCYGRDSPTVEWJKSHDYVKPXZLOAYQBIIBJLIRNXZFKTYDKPMFPZGNYGVUYFBHNUXRXXFJCRQBGQJQAEPIITZXEYQOPDQCLHNNGJBSGOUOSFWGUCLWHVTEKBZETWAXZAUHQREPINPMDJLKVHUZCFCYBLVJCMQDGTONZRAMIMBPRWQOBFLXNJOOVUKQCUDTEKELACYGIWWLMVI");
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
    msg.setTimeStamp(0.5024202073581518);
    msg.setSource(50159U);
    msg.setSourceEntity(130U);
    msg.setDestination(48397U);
    msg.setDestinationEntity(111U);
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("EUVXUADRSAI");
    tmp_msg_0.value = 243U;
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
    msg.setTimeStamp(0.9555108967834048);
    msg.setSource(3437U);
    msg.setSourceEntity(77U);
    msg.setDestination(34510U);
    msg.setDestinationEntity(74U);
    msg.op = 160U;
    msg.system.assign("GYRJPVBUYRDWIMSQIRIJLUTESNYFUTOLMSQFQVNTQKMTPKTXSIHTOBYIOUSJPBQGOPANHYQJFXRZVHOMLYOELSLEWTUXCRLFVDQHBIRAXQMLAZVRWUVZAOKDAXMA");
    msg.range = 0.7715855983519184;
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.4927269642929941;
    tmp_msg_0.roll = 51084U;
    tmp_msg_0.pitch = 20689U;
    tmp_msg_0.yaw = 52865U;
    tmp_msg_0.speed = 20483;
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
    msg.setTimeStamp(0.24071746961125262);
    msg.setSource(24909U);
    msg.setSourceEntity(4U);
    msg.setDestination(57363U);
    msg.setDestinationEntity(74U);
    msg.op = 100U;
    msg.system.assign("VKUNQXIKHAPIWZQDRFKXVAGKCXEUWDXRBOUUTHSWBTQMGBRPPEQLLANOEKQQKYSEZUHWIOYBIYCGFCHZXRIQXTNSJIAEFMWVLYZGUKTDGXOUMJZNJQKWJHVJVXNMZMRFDTML");
    msg.range = 0.8628281842216899;
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.4207886077662468;
    tmp_msg_0.x = 0.8409890619248744;
    tmp_msg_0.y = 0.9753291842617704;
    tmp_msg_0.z = 0.7711767346094717;
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
    msg.setTimeStamp(0.8906299832718814);
    msg.setSource(64008U);
    msg.setSourceEntity(137U);
    msg.setDestination(49675U);
    msg.setDestinationEntity(69U);
    msg.op = 243U;
    msg.system.assign("ZXFAZJPUPYSFNMOWGYCDYTJLQNUWYJCDGDVEXRJGMABMBWDHLTTEGGOCZQZURDVWYQOMIGUNYGRQLVCRZESLWSTIHWTMKIATQJDHRMPXBORXAYOCRDEJEPOEPAJFEFCSBIAXNXVUCAEZSWTHROFPGMDVXPWBUUNOJKMRDLKQAJNDSHLHUKVKLBOYZMCIVEWRNLUATKLZLOKIBKXPVXFVIBCZHQEMQUJIQGSINKKHY");
    msg.range = 0.3502869191479979;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.10643253384868301;
    tmp_msg_0.lon = 0.14458153496528503;
    tmp_msg_0.height = 0.24408241393261243;
    tmp_msg_0.x = 0.038623389041295364;
    tmp_msg_0.y = 0.08560266713471032;
    tmp_msg_0.z = 0.12384220971635262;
    tmp_msg_0.phi = 0.9618569666027962;
    tmp_msg_0.theta = 0.6347473305642397;
    tmp_msg_0.psi = 0.6523505299820381;
    tmp_msg_0.u = 0.6151627521506622;
    tmp_msg_0.v = 0.9058180594719537;
    tmp_msg_0.w = 0.4463051480308239;
    tmp_msg_0.vx = 0.44161033605846;
    tmp_msg_0.vy = 0.32339441808912883;
    tmp_msg_0.vz = 0.5669897735454609;
    tmp_msg_0.p = 0.6386368257960958;
    tmp_msg_0.q = 0.8722424728070772;
    tmp_msg_0.r = 0.2587778237459465;
    tmp_msg_0.depth = 0.3770095797340408;
    tmp_msg_0.alt = 0.5043556663112931;
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
    msg.setTimeStamp(0.43296056917698134);
    msg.setSource(30418U);
    msg.setSourceEntity(157U);
    msg.setDestination(33410U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.9988830317256343);
    msg.setSource(15966U);
    msg.setSourceEntity(246U);
    msg.setDestination(32864U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.6182354589023012);
    msg.setSource(36452U);
    msg.setSourceEntity(172U);
    msg.setDestination(55557U);
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
    msg.setTimeStamp(0.7772640744652302);
    msg.setSource(332U);
    msg.setSourceEntity(19U);
    msg.setDestination(53886U);
    msg.setDestinationEntity(29U);
    msg.list.assign("FEYPFJFHBRWIYBVZRCTJINKIJXDCKWDMAAYOPQLTHZQZKNOPOSGUZZBNUDSVSOPQOSLYYFRAUUKEESLKWBRQTG");

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
    msg.setTimeStamp(0.25608239976270564);
    msg.setSource(5436U);
    msg.setSourceEntity(187U);
    msg.setDestination(55061U);
    msg.setDestinationEntity(20U);
    msg.list.assign("DZUEXGEHZBOOJPMBTCLYNS");

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
    msg.setTimeStamp(0.4327873738264233);
    msg.setSource(35970U);
    msg.setSourceEntity(155U);
    msg.setDestination(5963U);
    msg.setDestinationEntity(211U);
    msg.list.assign("NVJXFQQAUCTVVBNBEMVGXYZUIXRTTDKGVEHQINYRBXJUVFGEFPDOVSJHCU");

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
    msg.setTimeStamp(0.5527044466482495);
    msg.setSource(21946U);
    msg.setSourceEntity(114U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(22U);
    msg.peer.assign("BNVPJKQNGCPRGXIRTEYNOGZSKXDOTSXVTFILKIBTMWHOEUQUFCFLXIOVAPLVTIJBDYYDJHRMLVDKMLDYIZBACTSPQXZBFFWZUMZSHOHNHNMOGJMYVPGTJUUIFSCPOLCIZFYICSNKKVPKMQYEHUEFDBWLUWDNEEGXJBIAARWSOMGDRUPAEZXXPDOREYALWSGCXSVLQNHHDCGMUHJSYTLRWZVCZRUJJKNQFYH");
    msg.rssi = 0.44404034404019876;
    msg.integrity = 12180U;

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
    msg.setTimeStamp(0.7396066043792783);
    msg.setSource(15327U);
    msg.setSourceEntity(183U);
    msg.setDestination(53436U);
    msg.setDestinationEntity(249U);
    msg.peer.assign("ALOLVMGRPIZYGBEJPLWYPUDLPYWFKKJOSWRUTF");
    msg.rssi = 0.9471541302852939;
    msg.integrity = 5358U;

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
    msg.setTimeStamp(0.34178520663253276);
    msg.setSource(37212U);
    msg.setSourceEntity(9U);
    msg.setDestination(40909U);
    msg.setDestinationEntity(103U);
    msg.peer.assign("SGFJKRKRMITQSHGQKKAQFJVYHSIBMYOSHLDNEBEZATXJCYKIQAWBGZJCUIAYGDQUWJRALNQOKUEJRBFMAZDJHWEZYUDMGHKJNSYQRFELWNLNSBBMPERZDZQCVDYEWDHFCSIGXMXPLHPBVOKGZXPTKONOORGXPFTUI");
    msg.rssi = 0.23943238311873738;
    msg.integrity = 54979U;

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
    msg.setTimeStamp(0.3385637620513564);
    msg.setSource(58699U);
    msg.setSourceEntity(13U);
    msg.setDestination(6270U);
    msg.setDestinationEntity(75U);
    msg.value = -25909;

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
    msg.setTimeStamp(0.4526643887641799);
    msg.setSource(57685U);
    msg.setSourceEntity(124U);
    msg.setDestination(20771U);
    msg.setDestinationEntity(4U);
    msg.value = 4007;

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
    msg.setTimeStamp(0.3245930076872141);
    msg.setSource(7181U);
    msg.setSourceEntity(4U);
    msg.setDestination(64895U);
    msg.setDestinationEntity(186U);
    msg.value = -17506;

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
    msg.setTimeStamp(0.24849551249318502);
    msg.setSource(13053U);
    msg.setSourceEntity(62U);
    msg.setDestination(29969U);
    msg.setDestinationEntity(183U);
    msg.value = 0.9780733699571171;

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
    msg.setTimeStamp(0.8211555518989729);
    msg.setSource(60144U);
    msg.setSourceEntity(218U);
    msg.setDestination(64527U);
    msg.setDestinationEntity(159U);
    msg.value = 0.048127569099882916;

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
    msg.setTimeStamp(0.5932474910141131);
    msg.setSource(45035U);
    msg.setSourceEntity(158U);
    msg.setDestination(32863U);
    msg.setDestinationEntity(164U);
    msg.value = 0.8532130419207309;

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
    msg.setTimeStamp(0.4958530873962482);
    msg.setSource(58512U);
    msg.setSourceEntity(239U);
    msg.setDestination(31465U);
    msg.setDestinationEntity(244U);
    msg.value = 0.17220721456915866;

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
    msg.setTimeStamp(0.9515145007576546);
    msg.setSource(5406U);
    msg.setSourceEntity(226U);
    msg.setDestination(15675U);
    msg.setDestinationEntity(11U);
    msg.value = 0.6458918432653452;

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
    msg.setTimeStamp(0.02034422340770725);
    msg.setSource(27122U);
    msg.setSourceEntity(99U);
    msg.setDestination(44002U);
    msg.setDestinationEntity(14U);
    msg.value = 0.8810871818044184;

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
    msg.setTimeStamp(0.2878244974684544);
    msg.setSource(12460U);
    msg.setSourceEntity(111U);
    msg.setDestination(2311U);
    msg.setDestinationEntity(39U);
    msg.validity = 23516U;
    msg.type = 19U;
    msg.utc_year = 48717U;
    msg.utc_month = 242U;
    msg.utc_day = 89U;
    msg.utc_time = 0.6065455738975696;
    msg.lat = 0.9493879180458442;
    msg.lon = 0.9460142641803223;
    msg.height = 0.15104474949200175;
    msg.satellites = 86U;
    msg.cog = 0.31934651250342416;
    msg.sog = 0.21705980031763528;
    msg.hdop = 0.31890479419295803;
    msg.vdop = 0.4614213311269686;
    msg.hacc = 0.37979576030780804;
    msg.vacc = 0.5967475189057847;

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
    msg.setTimeStamp(0.9977347760227845);
    msg.setSource(38577U);
    msg.setSourceEntity(10U);
    msg.setDestination(45951U);
    msg.setDestinationEntity(184U);
    msg.validity = 30898U;
    msg.type = 81U;
    msg.utc_year = 63801U;
    msg.utc_month = 60U;
    msg.utc_day = 50U;
    msg.utc_time = 0.01786937253617127;
    msg.lat = 0.4279990342233656;
    msg.lon = 0.6948228384330782;
    msg.height = 0.30409308563798965;
    msg.satellites = 115U;
    msg.cog = 0.7750004270524118;
    msg.sog = 0.3375273136407908;
    msg.hdop = 0.4456384946639743;
    msg.vdop = 0.21792903424732013;
    msg.hacc = 0.7280816248390689;
    msg.vacc = 0.8519554995773074;

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
    msg.setTimeStamp(0.596663857213236);
    msg.setSource(29193U);
    msg.setSourceEntity(119U);
    msg.setDestination(29837U);
    msg.setDestinationEntity(127U);
    msg.validity = 17815U;
    msg.type = 138U;
    msg.utc_year = 5366U;
    msg.utc_month = 202U;
    msg.utc_day = 174U;
    msg.utc_time = 0.10815277127773071;
    msg.lat = 0.785547707949686;
    msg.lon = 0.7015518588117862;
    msg.height = 0.3656846549232763;
    msg.satellites = 195U;
    msg.cog = 0.5790869903750746;
    msg.sog = 0.37677289160628513;
    msg.hdop = 0.1764235922958688;
    msg.vdop = 0.9859880911848594;
    msg.hacc = 0.22145677407912123;
    msg.vacc = 0.9207341592331937;

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
    msg.setTimeStamp(0.8386000700334902);
    msg.setSource(56846U);
    msg.setSourceEntity(110U);
    msg.setDestination(49528U);
    msg.setDestinationEntity(102U);
    msg.time = 0.1380106538261724;
    msg.phi = 0.4108691674077578;
    msg.theta = 0.2414552837742444;
    msg.psi = 0.7396892600647256;
    msg.psi_magnetic = 0.351408898015785;

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
    msg.setTimeStamp(0.0702730214874342);
    msg.setSource(7900U);
    msg.setSourceEntity(133U);
    msg.setDestination(50445U);
    msg.setDestinationEntity(152U);
    msg.time = 0.23030336177161692;
    msg.phi = 0.9407728243901324;
    msg.theta = 0.1280160876115244;
    msg.psi = 0.09374099383403234;
    msg.psi_magnetic = 0.9691252298568895;

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
    msg.setTimeStamp(0.12262786394401626);
    msg.setSource(45618U);
    msg.setSourceEntity(25U);
    msg.setDestination(40103U);
    msg.setDestinationEntity(192U);
    msg.time = 0.6873833164885286;
    msg.phi = 0.8463897334114729;
    msg.theta = 0.07984836105472182;
    msg.psi = 0.5362061711290356;
    msg.psi_magnetic = 0.6820123622925688;

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
    msg.setTimeStamp(0.12122714263187861);
    msg.setSource(39385U);
    msg.setSourceEntity(73U);
    msg.setDestination(20975U);
    msg.setDestinationEntity(230U);
    msg.time = 0.48335236892853695;
    msg.x = 0.934913932529276;
    msg.y = 0.15699023833676362;
    msg.z = 0.06355576748917158;
    msg.timestep = 0.019379215345826206;

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
    msg.setTimeStamp(0.29441650691863375);
    msg.setSource(18069U);
    msg.setSourceEntity(119U);
    msg.setDestination(4576U);
    msg.setDestinationEntity(193U);
    msg.time = 0.24244017517462513;
    msg.x = 0.018664655550971965;
    msg.y = 0.6276637865482465;
    msg.z = 0.30038605738718627;
    msg.timestep = 0.9707609222250252;

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
    msg.setTimeStamp(0.5638208575134822);
    msg.setSource(26829U);
    msg.setSourceEntity(76U);
    msg.setDestination(9322U);
    msg.setDestinationEntity(189U);
    msg.time = 0.2548163348250704;
    msg.x = 0.25647916120455305;
    msg.y = 0.8315029105775542;
    msg.z = 0.33983012846580596;
    msg.timestep = 0.5770732846212198;

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
    msg.setTimeStamp(0.7886919709265836);
    msg.setSource(27099U);
    msg.setSourceEntity(230U);
    msg.setDestination(65303U);
    msg.setDestinationEntity(241U);
    msg.time = 0.1070999678929182;
    msg.x = 0.09337615250991227;
    msg.y = 0.5737242549048838;
    msg.z = 0.20986772693922018;

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
    msg.setTimeStamp(0.012958802412516346);
    msg.setSource(20020U);
    msg.setSourceEntity(69U);
    msg.setDestination(1810U);
    msg.setDestinationEntity(214U);
    msg.time = 0.6661500041918205;
    msg.x = 0.6898063690672211;
    msg.y = 0.6439869286763334;
    msg.z = 0.5627209572525573;

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
    msg.setTimeStamp(0.44658750384367674);
    msg.setSource(54587U);
    msg.setSourceEntity(163U);
    msg.setDestination(6509U);
    msg.setDestinationEntity(16U);
    msg.time = 0.031008758052955;
    msg.x = 0.4547331782794888;
    msg.y = 0.6823901208948168;
    msg.z = 0.9793878344715008;

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
    msg.setTimeStamp(0.2212646121278412);
    msg.setSource(35511U);
    msg.setSourceEntity(133U);
    msg.setDestination(22862U);
    msg.setDestinationEntity(29U);
    msg.time = 0.44194623744498496;
    msg.x = 0.36500810399780204;
    msg.y = 0.4800240253734649;
    msg.z = 0.20566626568392277;

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
    msg.setTimeStamp(0.7071825774317579);
    msg.setSource(59815U);
    msg.setSourceEntity(39U);
    msg.setDestination(16968U);
    msg.setDestinationEntity(91U);
    msg.time = 0.1491085089726485;
    msg.x = 0.09116269661423004;
    msg.y = 0.42240370921004444;
    msg.z = 0.7543204454977585;

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
    msg.setTimeStamp(0.040546766413511626);
    msg.setSource(21172U);
    msg.setSourceEntity(20U);
    msg.setDestination(30674U);
    msg.setDestinationEntity(62U);
    msg.time = 0.34379412368617823;
    msg.x = 0.2184853108361814;
    msg.y = 0.9681577179468986;
    msg.z = 0.5004167084311874;

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
    msg.setTimeStamp(0.025723667548925744);
    msg.setSource(39737U);
    msg.setSourceEntity(87U);
    msg.setDestination(21345U);
    msg.setDestinationEntity(68U);
    msg.time = 0.47747207628108823;
    msg.x = 0.06773730447761683;
    msg.y = 0.9110372310559595;
    msg.z = 0.39225784546939557;

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
    msg.setTimeStamp(0.6026688365101855);
    msg.setSource(8519U);
    msg.setSourceEntity(222U);
    msg.setDestination(41054U);
    msg.setDestinationEntity(208U);
    msg.time = 0.7385825038011943;
    msg.x = 0.19857918072638003;
    msg.y = 0.3104518591140669;
    msg.z = 0.6434073108570674;

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
    msg.setTimeStamp(0.07952866368372469);
    msg.setSource(43811U);
    msg.setSourceEntity(209U);
    msg.setDestination(52188U);
    msg.setDestinationEntity(157U);
    msg.time = 0.7107420422402588;
    msg.x = 0.09781769934022588;
    msg.y = 0.04665832138084425;
    msg.z = 0.10471128210625702;

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
    msg.setTimeStamp(0.6994942757711974);
    msg.setSource(21828U);
    msg.setSourceEntity(191U);
    msg.setDestination(40824U);
    msg.setDestinationEntity(84U);
    msg.validity = 47U;
    msg.x = 0.03142863889145586;
    msg.y = 0.4558372403641363;
    msg.z = 0.6440051583811163;

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
    msg.setTimeStamp(0.42897781558904313);
    msg.setSource(25003U);
    msg.setSourceEntity(44U);
    msg.setDestination(61969U);
    msg.setDestinationEntity(227U);
    msg.validity = 10U;
    msg.x = 0.8279216330838614;
    msg.y = 0.6632601635184585;
    msg.z = 0.5049954867203166;

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
    msg.setTimeStamp(0.38227379000168327);
    msg.setSource(37132U);
    msg.setSourceEntity(16U);
    msg.setDestination(10074U);
    msg.setDestinationEntity(12U);
    msg.validity = 120U;
    msg.x = 0.580157736671254;
    msg.y = 0.1128483113569384;
    msg.z = 0.3985180687828369;

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
    msg.setTimeStamp(0.17561573858902102);
    msg.setSource(63375U);
    msg.setSourceEntity(26U);
    msg.setDestination(39356U);
    msg.setDestinationEntity(70U);
    msg.validity = 193U;
    msg.x = 0.9338299351296216;
    msg.y = 0.5134475974752808;
    msg.z = 0.5921533950460699;

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
    msg.setTimeStamp(0.19690981142037234);
    msg.setSource(41347U);
    msg.setSourceEntity(17U);
    msg.setDestination(55006U);
    msg.setDestinationEntity(229U);
    msg.validity = 253U;
    msg.x = 0.9236650129246481;
    msg.y = 0.050159722888263425;
    msg.z = 0.8910913605900594;

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
    msg.setTimeStamp(0.0629720042060764);
    msg.setSource(13107U);
    msg.setSourceEntity(132U);
    msg.setDestination(37808U);
    msg.setDestinationEntity(3U);
    msg.validity = 175U;
    msg.x = 0.3049369818447297;
    msg.y = 0.7614695644145926;
    msg.z = 0.7014579880941477;

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
    msg.setTimeStamp(0.661835705066603);
    msg.setSource(18394U);
    msg.setSourceEntity(110U);
    msg.setDestination(62779U);
    msg.setDestinationEntity(154U);
    msg.time = 0.071150496230444;
    msg.x = 0.758960294213568;
    msg.y = 0.6295478436446429;
    msg.z = 0.04602872707047312;

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
    msg.setTimeStamp(0.3694697307449072);
    msg.setSource(32497U);
    msg.setSourceEntity(21U);
    msg.setDestination(46359U);
    msg.setDestinationEntity(251U);
    msg.time = 0.8845006897338396;
    msg.x = 0.11880457393242294;
    msg.y = 0.5974918724870715;
    msg.z = 0.9034456021636752;

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
    msg.setTimeStamp(0.7689188395386608);
    msg.setSource(40781U);
    msg.setSourceEntity(109U);
    msg.setDestination(26936U);
    msg.setDestinationEntity(210U);
    msg.time = 0.17280345213793946;
    msg.x = 0.35218944457537305;
    msg.y = 0.571426470181948;
    msg.z = 0.9509472681390286;

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
    msg.setTimeStamp(0.487307779222516);
    msg.setSource(6564U);
    msg.setSourceEntity(186U);
    msg.setDestination(63239U);
    msg.setDestinationEntity(217U);
    msg.validity = 212U;
    msg.value = 0.006099633400855953;

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
    msg.setTimeStamp(0.6181984203797383);
    msg.setSource(56568U);
    msg.setSourceEntity(124U);
    msg.setDestination(56589U);
    msg.setDestinationEntity(187U);
    msg.validity = 199U;
    msg.value = 0.5909568494676167;

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
    msg.setTimeStamp(0.6564288277498065);
    msg.setSource(8859U);
    msg.setSourceEntity(141U);
    msg.setDestination(49183U);
    msg.setDestinationEntity(103U);
    msg.validity = 53U;
    msg.value = 0.7538534053052537;

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
    msg.setTimeStamp(0.6122607206725252);
    msg.setSource(7257U);
    msg.setSourceEntity(11U);
    msg.setDestination(38921U);
    msg.setDestinationEntity(20U);
    msg.value = 0.958322449708566;

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
    msg.setTimeStamp(0.06452468041832171);
    msg.setSource(55999U);
    msg.setSourceEntity(62U);
    msg.setDestination(30465U);
    msg.setDestinationEntity(66U);
    msg.value = 0.8513893990285792;

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
    msg.setTimeStamp(0.43098334815339234);
    msg.setSource(54316U);
    msg.setSourceEntity(128U);
    msg.setDestination(61591U);
    msg.setDestinationEntity(250U);
    msg.value = 0.5721660014114323;

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
    msg.setTimeStamp(0.3588957133180971);
    msg.setSource(321U);
    msg.setSourceEntity(65U);
    msg.setDestination(10280U);
    msg.setDestinationEntity(148U);
    msg.value = 0.25013642135507275;

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
    msg.setTimeStamp(0.6065702548519575);
    msg.setSource(41705U);
    msg.setSourceEntity(114U);
    msg.setDestination(45401U);
    msg.setDestinationEntity(56U);
    msg.value = 0.41973278990618845;

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
    msg.setTimeStamp(0.013621074216137674);
    msg.setSource(50389U);
    msg.setSourceEntity(179U);
    msg.setDestination(35005U);
    msg.setDestinationEntity(118U);
    msg.value = 0.03527107467032009;

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
    msg.setTimeStamp(0.6296965696651036);
    msg.setSource(52689U);
    msg.setSourceEntity(207U);
    msg.setDestination(25565U);
    msg.setDestinationEntity(2U);
    msg.value = 0.09068823811044269;

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
    msg.setTimeStamp(0.15651330929314977);
    msg.setSource(51607U);
    msg.setSourceEntity(169U);
    msg.setDestination(33621U);
    msg.setDestinationEntity(170U);
    msg.value = 0.4012826287612776;

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
    msg.setTimeStamp(0.6299168377714802);
    msg.setSource(53242U);
    msg.setSourceEntity(115U);
    msg.setDestination(33442U);
    msg.setDestinationEntity(11U);
    msg.value = 0.9357182151594802;

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
    msg.setTimeStamp(0.6700725469067835);
    msg.setSource(14262U);
    msg.setSourceEntity(185U);
    msg.setDestination(51396U);
    msg.setDestinationEntity(171U);
    msg.value = 0.09231101591567326;

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
    msg.setTimeStamp(0.4405715018381323);
    msg.setSource(63449U);
    msg.setSourceEntity(253U);
    msg.setDestination(40148U);
    msg.setDestinationEntity(115U);
    msg.value = 0.7431355787524111;

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
    msg.setTimeStamp(0.21886195252514484);
    msg.setSource(20209U);
    msg.setSourceEntity(244U);
    msg.setDestination(4737U);
    msg.setDestinationEntity(215U);
    msg.value = 0.9751107751355385;

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
    msg.setTimeStamp(0.1906961436259832);
    msg.setSource(26708U);
    msg.setSourceEntity(220U);
    msg.setDestination(11148U);
    msg.setDestinationEntity(108U);
    msg.value = 0.8752227409171177;

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
    msg.setTimeStamp(0.2865058203916542);
    msg.setSource(64091U);
    msg.setSourceEntity(65U);
    msg.setDestination(2743U);
    msg.setDestinationEntity(254U);
    msg.value = 0.015553522821550425;

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
    msg.setTimeStamp(0.37363722042233605);
    msg.setSource(10964U);
    msg.setSourceEntity(227U);
    msg.setDestination(4311U);
    msg.setDestinationEntity(207U);
    msg.value = 0.2577863941169982;

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
    msg.setTimeStamp(0.15201311679913976);
    msg.setSource(33983U);
    msg.setSourceEntity(106U);
    msg.setDestination(49151U);
    msg.setDestinationEntity(61U);
    msg.value = 0.740232405768823;

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
    msg.setTimeStamp(0.6326980224778065);
    msg.setSource(13711U);
    msg.setSourceEntity(242U);
    msg.setDestination(49123U);
    msg.setDestinationEntity(135U);
    msg.value = 0.11227702523958916;

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
    msg.setTimeStamp(0.32663411007610155);
    msg.setSource(31592U);
    msg.setSourceEntity(79U);
    msg.setDestination(56047U);
    msg.setDestinationEntity(201U);
    msg.value = 0.31218444773742926;

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
    msg.setTimeStamp(0.26175911111415395);
    msg.setSource(52357U);
    msg.setSourceEntity(57U);
    msg.setDestination(13524U);
    msg.setDestinationEntity(203U);
    msg.value = 0.34300708039421324;

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
    msg.setTimeStamp(0.9101904818201403);
    msg.setSource(59420U);
    msg.setSourceEntity(245U);
    msg.setDestination(55408U);
    msg.setDestinationEntity(32U);
    msg.value = 0.5779272463790253;

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
    msg.setTimeStamp(0.49504434798544317);
    msg.setSource(13244U);
    msg.setSourceEntity(213U);
    msg.setDestination(53763U);
    msg.setDestinationEntity(142U);
    msg.value = 0.5499212478962762;

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
    msg.setTimeStamp(0.6702837091787143);
    msg.setSource(58358U);
    msg.setSourceEntity(63U);
    msg.setDestination(41561U);
    msg.setDestinationEntity(39U);
    msg.value = 0.7078960012599991;

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
    msg.setTimeStamp(0.617952088979361);
    msg.setSource(40583U);
    msg.setSourceEntity(57U);
    msg.setDestination(25209U);
    msg.setDestinationEntity(245U);
    msg.value = 0.8397388479788833;

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
    msg.setTimeStamp(0.3857762210954231);
    msg.setSource(5889U);
    msg.setSourceEntity(142U);
    msg.setDestination(60159U);
    msg.setDestinationEntity(216U);
    msg.value = 0.47042410022266634;

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
    msg.setTimeStamp(0.8962035986760719);
    msg.setSource(8313U);
    msg.setSourceEntity(66U);
    msg.setDestination(25544U);
    msg.setDestinationEntity(146U);
    msg.direction = 0.2545405660915184;
    msg.speed = 0.2359453500963148;
    msg.turbulence = 0.7030534083904972;

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
    msg.setTimeStamp(0.4444026727042808);
    msg.setSource(39787U);
    msg.setSourceEntity(230U);
    msg.setDestination(43467U);
    msg.setDestinationEntity(130U);
    msg.direction = 0.682245026695316;
    msg.speed = 0.9697600206647791;
    msg.turbulence = 0.26652805203775554;

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
    msg.setTimeStamp(0.372349469054859);
    msg.setSource(19219U);
    msg.setSourceEntity(139U);
    msg.setDestination(1256U);
    msg.setDestinationEntity(79U);
    msg.direction = 0.7097990318630274;
    msg.speed = 0.3740329087884028;
    msg.turbulence = 0.5968568712304962;

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
    msg.setTimeStamp(0.4382722188713285);
    msg.setSource(47700U);
    msg.setSourceEntity(201U);
    msg.setDestination(63547U);
    msg.setDestinationEntity(94U);
    msg.value = 0.22513588211074953;

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
    msg.setTimeStamp(0.9111115489264674);
    msg.setSource(43598U);
    msg.setSourceEntity(234U);
    msg.setDestination(59262U);
    msg.setDestinationEntity(239U);
    msg.value = 0.07426438033894056;

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
    msg.setTimeStamp(0.6321890919061773);
    msg.setSource(53478U);
    msg.setSourceEntity(35U);
    msg.setDestination(481U);
    msg.setDestinationEntity(217U);
    msg.value = 0.47589198368532815;

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
    msg.setTimeStamp(0.6494538078884936);
    msg.setSource(7344U);
    msg.setSourceEntity(149U);
    msg.setDestination(53242U);
    msg.setDestinationEntity(184U);
    msg.value.assign("NRISTVAKPQICOBRTNEMDGANDTIZYWIRCNPFAYZXLOLQLUJARMXYZUXUBBUJPWXFPKIZE");

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
    msg.setTimeStamp(0.09406880628034653);
    msg.setSource(57809U);
    msg.setSourceEntity(143U);
    msg.setDestination(25722U);
    msg.setDestinationEntity(176U);
    msg.value.assign("GSQGASLEHCOBWKGLRZCEAIQIQQCXAFOVSRNUVUNOXTCOCDGOQKXIBCIGRMUXDLRPMEWMVZTMIZVWFRHJJSHLBNMTEVLJBIBRCPPFNLHDZNMBJWKQKSWLDTXEYJBIKVQUENAMAHMNRQXKIYXVBTOZUPYZKDAFDRCWKNJOYQFFMDKXPVDSWHJDEJTIPTUPOGGLGRPYSAHCVIFJYAWEWOUDPCTHWPTZVURFFMGUYYUNGKYAYHSZQTNEBSFEBSJLO");

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
    msg.setTimeStamp(0.6160143253276734);
    msg.setSource(55929U);
    msg.setSourceEntity(248U);
    msg.setDestination(31337U);
    msg.setDestinationEntity(247U);
    msg.value.assign("FWAHMJRGIUESPPICTJAYNLEDQTHDKTUYSBSBEGSLOMXHENNBFQXKDYCQTZONOPJVNLGGLASOLIVLEAKKJORUJBCVNRAZMDRTZHLRCAWYPWQOEMFIKVYRVHGCLTSUTOFXENLBGQBMKIMSEPSEQZCZSCONHQVZCXZOACQDJWRJUYYHBBGHYWWYINUPRWUXGHMPSDFAKXOJKNUQJFTGDKFIAPUFFIZITJWMP");

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
    msg.setTimeStamp(0.3264703595131244);
    msg.setSource(59523U);
    msg.setSourceEntity(83U);
    msg.setDestination(5554U);
    msg.setDestinationEntity(122U);
    const char tmp_msg_0[] = {-100, -22, 92, 13, 92, -59, 6, -25, 18, 67, 76, 98, 34, -81, -86, -40, -30, -84, 118, -84, 79, -111, -10, 29, 115, -52, 2, -27, 94, -119, 102, 2, -34, -105, 1, 25, 21, 36, -53, 80, 103, 3, -92, -18, 39, 69, 70, 116, 64, -75, -29, -10, -113, -94, 67, -115, -65, 4, 19, -32, 103, -32, 45, 65, 58, 50, 0, 21, 116, 57, -49, -89, 45, -105, -8, 9, 39, -104, 91, -71, -60, 70, -110, -57, -21, -59, -55, 43, -20, 61, 122, 31, -95, 41, -72, 92, -7, 122, 19, -88, -65, 55, -59, 103, -85, 7, -57, -113, 83, -20, 38, -93, 66, 42, -1, -101, 76, 68, -98, 71, 45};
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
    msg.setTimeStamp(0.9751718652626732);
    msg.setSource(14021U);
    msg.setSourceEntity(230U);
    msg.setDestination(3247U);
    msg.setDestinationEntity(218U);
    const char tmp_msg_0[] = {-76, 106, 73, 102, 119, 102, -97, 61, 109, 29, 90, 91, 124, -89, -96, -86, 95, 100, -55, 21, -103, 96, -85, 54, 43, 60, -29, -66, 40, -67, 120, -102, 77, 51, 5, 109, -106, -100, 11, -25, 100, -104, -17, -20, 18, 90, 40, 55, 42, 3, -8, -102, -64, 4, -60, -36, 59, -29, 41, -80, -95, 47, -100, 1};
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
    msg.setTimeStamp(0.840596514295544);
    msg.setSource(41026U);
    msg.setSourceEntity(4U);
    msg.setDestination(60164U);
    msg.setDestinationEntity(208U);
    const char tmp_msg_0[] = {-41, 47, 3, -98, -115, 100, 35, -20, 62, -77, 4, 101, -84, -16, -27, 8, 18, 3, -78, -108, 105, -15, 118, -112, -110, -44, 96, 63, -36, 95, 11, -96, 113, 78, -120, -2, -64, -64, 7, 87, -61, -60, 48, 32, -98, 29, 82, -47, -34, 110, 111, -27, -61, -11, -42, -99, 29, -46, -10, 29, 124, 86, 95, -34, 12, 4, -102, -62, 78, -88, -29, 30, -33, 66, -88, 79, 0, 33, -55, 20, 76, 22, -52, -96, 111, -113, -6, 19, 69, -114, -102, -52, 123, -53, -9, 59, 41, 4, 125, -8};
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
    msg.setTimeStamp(0.5842709632595904);
    msg.setSource(4339U);
    msg.setSourceEntity(243U);
    msg.setDestination(24800U);
    msg.setDestinationEntity(229U);
    msg.type = 176U;
    msg.frequency = 1779294600U;
    msg.min_range = 63088U;
    msg.max_range = 21281U;
    msg.bits_per_point = 159U;
    msg.scale_factor = 0.5630366160702065;
    const char tmp_msg_0[] = {-77, -52, 72, 62, 19, 122, -105, -42, 0, 44, -13, 45, 67, -23, -80, -43, 60, -105, -30, -120, -96, -35, -119, 102, -18, -32, -10, 107, -39, -66, -90, -83, -65, 23, 16, -44, 36, 91, 89, -101, -85, -120, 5, -92, 74, 73, -110, -34, -104, 105, -70, -26, -48, -25, -123, 63, 118, 55, -128, -30, -100, -3, 107, -39, -57, 70, 37, 94, -78, -35, -33, 92, -16, -84, 109, -76, 108, -32, -75, 70, 30, 4, -91, 115, 124, 8, -65, -43, 34, 76, -3, -16, 56, 79, 28, 29, -60, 8, -40, 19, -90, 22, 115, -23, 21, -33, 101, -16, -71, -45, 68, 68, 111, -100, 75, 48, 7, 82, -75, -55, -51, 75, -99, -37, -84, -20, 83, -111, 33, -9, 91, -123, -119, -23, 113, 110, -23, 27, 61, 0, 114, 100, 28, 91, 24, 108, -29, 64, 111, 97, -43, 80, 119, -29, -59, -61, -92, -51, 73, 10, 84, -58, -50, -110, 62, 117, 9, 60, 32, 42, 70, -69, 76, 126, -79, -5, -122, -124, -112, -21, -36, 94, -32, 64, -73, -29, 29, -14, -118, 93, 70, -22, 90, -18, 118, -127, -65, -30, 100, 64, 28, -102, 102, -112, 90, -37, -87, -125, 41, -69, -38, 16, -70, 67, -84, -69, 88, 117};
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
    msg.setTimeStamp(0.28624824123562986);
    msg.setSource(44736U);
    msg.setSourceEntity(105U);
    msg.setDestination(3378U);
    msg.setDestinationEntity(0U);
    msg.type = 125U;
    msg.frequency = 964635683U;
    msg.min_range = 33237U;
    msg.max_range = 55507U;
    msg.bits_per_point = 253U;
    msg.scale_factor = 0.28225247680299104;
    const char tmp_msg_0[] = {64, -5, 45, -97, 60, 21, 96, -12, 103, -108, 55, -46};
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
    msg.setTimeStamp(0.3721942867225312);
    msg.setSource(9522U);
    msg.setSourceEntity(215U);
    msg.setDestination(61403U);
    msg.setDestinationEntity(254U);
    msg.type = 122U;
    msg.frequency = 2297550248U;
    msg.min_range = 15702U;
    msg.max_range = 41111U;
    msg.bits_per_point = 252U;
    msg.scale_factor = 0.4791413716403816;
    const char tmp_msg_0[] = {-88, 105, 37, -72, -44, -8, -105, -44, 62, -7, -118, -70, -81, 40, 83, -116, -39, 11, 82, -118, 78, 39, -53, 106, -50, 33, 61, 93, -39, 6, -26, 115, -115, 33, -112, 64, -41, -51, -49, -18, -9, -19, 93, 110, -33, 43, 112, -74, -120, -84, 73, 94, -8, -8, -56, 68, -23, -92, -26, -113, 119, 33, -106, 100, -117, -87, -58, -40, -78, 49, 60, 38, 94, 7, -75, 120, 15, -50, 120, -71, 126, 110, 109, 91, 42, 88, 108, 57, -51, -117, 72, 39, -74, -42, -79, 104, 98, 70, 93, -28, 122, 88, -90, -55, 82, -123, -123, 37, -53, -72, -120, -15, -26, 119, 40, -89, -66, -6, -80, 113, 90, 114, 51, 63, 55, 2, -79, -90, 38, -4, -118, 85, 109, 126, -65, 66, 34, 71, 54, -123, 26, 107, 38, -112, 98, 54, 16, 76, 104, -64, 73, 6, 28, -102, 13, 72, -57, -20, 20, -22, -42, 19, 125, 112, -77, -55, -92, 6, -53, 121, 85, 41, -125, -23, -46, -60, 48, -15, 88, -73, 115, -10, -39, -115, 89, -33, -34, 64, -58, 6, -56, -125, 114, 16, -80, -37, 2, -104, 26, -9, -56, -60, -8, 75, -55, -25, 107, 119, 61, 67, 89};
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
    msg.setTimeStamp(0.6401618810611284);
    msg.setSource(6379U);
    msg.setSourceEntity(144U);
    msg.setDestination(45932U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.19338692748349906);
    msg.setSource(52142U);
    msg.setSourceEntity(30U);
    msg.setDestination(32178U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.38954548091254604);
    msg.setSource(19997U);
    msg.setSourceEntity(109U);
    msg.setDestination(28757U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.06092074508676548);
    msg.setSource(49435U);
    msg.setSourceEntity(98U);
    msg.setDestination(32572U);
    msg.setDestinationEntity(31U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.9390029648207654);
    msg.setSource(31139U);
    msg.setSourceEntity(29U);
    msg.setDestination(32670U);
    msg.setDestinationEntity(116U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.5394744108239945);
    msg.setSource(48780U);
    msg.setSourceEntity(208U);
    msg.setDestination(30820U);
    msg.setDestinationEntity(141U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.6931555920679862);
    msg.setSource(1449U);
    msg.setSourceEntity(109U);
    msg.setDestination(7928U);
    msg.setDestinationEntity(122U);
    msg.value = 0.03679012111068425;
    msg.confidence = 0.2671921863057214;
    msg.opmodes.assign("CEPKQMMVASYFFAPQSBEMXSI");

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
    msg.setTimeStamp(0.08313122546135165);
    msg.setSource(58357U);
    msg.setSourceEntity(200U);
    msg.setDestination(61332U);
    msg.setDestinationEntity(110U);
    msg.value = 0.7028223512764585;
    msg.confidence = 0.9683506056922205;
    msg.opmodes.assign("CVEQYTDSTWUVOJLBKWOTL");

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
    msg.setTimeStamp(0.6180153762881399);
    msg.setSource(15438U);
    msg.setSourceEntity(122U);
    msg.setDestination(46253U);
    msg.setDestinationEntity(231U);
    msg.value = 0.2870198817964821;
    msg.confidence = 0.7023701097298141;
    msg.opmodes.assign("JVBDIHRZRECDCQDVQKPGBZAXZPNBLMWAMSTLVXJLUVCPGDSQAEPURKWFNAWTHXXYZOWEJYEOVZOSOEGHOIISAKGTUAIJXXHQVFPOYOQYIMGFQCNRDJZWSMSUQFXLISUYNREBKJZCTGKBRTIIMXDHTFRVZUOJKTNYQXPDKWVDTCBY");

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
    msg.setTimeStamp(0.5348650858621153);
    msg.setSource(29282U);
    msg.setSourceEntity(18U);
    msg.setDestination(39618U);
    msg.setDestinationEntity(89U);
    msg.itow = 977618238U;
    msg.lat = 0.617631725935448;
    msg.lon = 0.07199333746534042;
    msg.height_ell = 0.4642516965016287;
    msg.height_sea = 0.5275534905175129;
    msg.hacc = 0.22334564065346463;
    msg.vacc = 0.6993136184508127;
    msg.vel_n = 0.1301849080074381;
    msg.vel_e = 0.02418696008550114;
    msg.vel_d = 0.5682606712591343;
    msg.speed = 0.9195680400628772;
    msg.gspeed = 0.701235224831721;
    msg.heading = 0.7999643768081045;
    msg.sacc = 0.35454573434568404;
    msg.cacc = 0.23417218689846087;

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
    msg.setTimeStamp(0.028256191809700737);
    msg.setSource(27746U);
    msg.setSourceEntity(192U);
    msg.setDestination(51973U);
    msg.setDestinationEntity(159U);
    msg.itow = 2030331700U;
    msg.lat = 0.2908783183808431;
    msg.lon = 0.16432937127442304;
    msg.height_ell = 0.3509561515863985;
    msg.height_sea = 0.4824281443568028;
    msg.hacc = 0.5555016433695711;
    msg.vacc = 0.2934390428644693;
    msg.vel_n = 0.3039763123213559;
    msg.vel_e = 0.36601142330107683;
    msg.vel_d = 0.515785985310015;
    msg.speed = 0.9681103231306032;
    msg.gspeed = 0.3611698020105003;
    msg.heading = 0.8457488080135868;
    msg.sacc = 0.25691307924279716;
    msg.cacc = 0.9096604213371319;

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
    msg.setTimeStamp(0.5450911745982814);
    msg.setSource(24767U);
    msg.setSourceEntity(67U);
    msg.setDestination(42386U);
    msg.setDestinationEntity(243U);
    msg.itow = 707526004U;
    msg.lat = 0.5981927804067351;
    msg.lon = 0.8937881065385069;
    msg.height_ell = 0.2204842350403431;
    msg.height_sea = 0.1637042514175493;
    msg.hacc = 0.274205840687585;
    msg.vacc = 0.6757064930026055;
    msg.vel_n = 0.5705995143516768;
    msg.vel_e = 0.6417377823769287;
    msg.vel_d = 0.833605540250176;
    msg.speed = 0.23372277006732678;
    msg.gspeed = 0.5168828837994187;
    msg.heading = 0.8364713191891616;
    msg.sacc = 0.20509147278654072;
    msg.cacc = 0.9301527971290818;

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
    msg.setTimeStamp(0.16976296776765398);
    msg.setSource(44125U);
    msg.setSourceEntity(26U);
    msg.setDestination(54495U);
    msg.setDestinationEntity(7U);
    msg.id = 154U;
    msg.value = 0.8727727445259318;

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
    msg.setTimeStamp(0.49957236026336826);
    msg.setSource(23054U);
    msg.setSourceEntity(119U);
    msg.setDestination(3036U);
    msg.setDestinationEntity(254U);
    msg.id = 26U;
    msg.value = 0.6238880583662768;

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
    msg.setTimeStamp(0.5292475992461892);
    msg.setSource(1087U);
    msg.setSourceEntity(133U);
    msg.setDestination(65104U);
    msg.setDestinationEntity(126U);
    msg.id = 185U;
    msg.value = 0.5917756809108846;

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
    msg.setTimeStamp(0.5744795243040495);
    msg.setSource(47626U);
    msg.setSourceEntity(188U);
    msg.setDestination(45249U);
    msg.setDestinationEntity(254U);
    msg.x = 0.3585093556075536;
    msg.y = 0.06069718128239232;
    msg.z = 0.9079188732531295;
    msg.phi = 0.17587856086546705;
    msg.theta = 0.535135917232811;
    msg.psi = 0.6793764547236754;

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
    msg.setTimeStamp(0.770653934683438);
    msg.setSource(1480U);
    msg.setSourceEntity(137U);
    msg.setDestination(65175U);
    msg.setDestinationEntity(117U);
    msg.x = 0.3368128199031608;
    msg.y = 0.7260347538056896;
    msg.z = 0.42826235605278884;
    msg.phi = 0.1966053546864871;
    msg.theta = 0.229451029839413;
    msg.psi = 0.37331212571813877;

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
    msg.setTimeStamp(0.019359613426428446);
    msg.setSource(18661U);
    msg.setSourceEntity(112U);
    msg.setDestination(44063U);
    msg.setDestinationEntity(29U);
    msg.x = 0.6847661542911267;
    msg.y = 0.5079171456371727;
    msg.z = 0.33230709226055366;
    msg.phi = 0.4025537004330336;
    msg.theta = 0.1764956431644611;
    msg.psi = 0.31642444773268985;

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
    msg.setTimeStamp(0.06648652925574516);
    msg.setSource(61277U);
    msg.setSourceEntity(179U);
    msg.setDestination(2892U);
    msg.setDestinationEntity(232U);
    msg.beam_width = 0.44924535817097533;
    msg.beam_height = 0.3900917773047441;

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
    msg.setTimeStamp(0.7696894330181856);
    msg.setSource(26736U);
    msg.setSourceEntity(199U);
    msg.setDestination(58493U);
    msg.setDestinationEntity(242U);
    msg.beam_width = 0.827198360527297;
    msg.beam_height = 0.9877623305186063;

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
    msg.setTimeStamp(0.30561568400520367);
    msg.setSource(16959U);
    msg.setSourceEntity(115U);
    msg.setDestination(22075U);
    msg.setDestinationEntity(151U);
    msg.beam_width = 0.5131779845305866;
    msg.beam_height = 0.25634491715047714;

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
    msg.setTimeStamp(0.30821675612228305);
    msg.setSource(20158U);
    msg.setSourceEntity(116U);
    msg.setDestination(54751U);
    msg.setDestinationEntity(89U);
    msg.sane = 29U;

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
    msg.setTimeStamp(0.6395792480173195);
    msg.setSource(4159U);
    msg.setSourceEntity(84U);
    msg.setDestination(35802U);
    msg.setDestinationEntity(171U);
    msg.sane = 56U;

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
    msg.setTimeStamp(0.12402633295474252);
    msg.setSource(45625U);
    msg.setSourceEntity(236U);
    msg.setDestination(43020U);
    msg.setDestinationEntity(224U);
    msg.sane = 193U;

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
    msg.setTimeStamp(0.8732973701298704);
    msg.setSource(63964U);
    msg.setSourceEntity(170U);
    msg.setDestination(224U);
    msg.setDestinationEntity(220U);
    msg.value = 0.7304972627008449;

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
    msg.setTimeStamp(0.833232223874316);
    msg.setSource(46993U);
    msg.setSourceEntity(142U);
    msg.setDestination(40141U);
    msg.setDestinationEntity(152U);
    msg.value = 0.38138516892530516;

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
    msg.setTimeStamp(0.41468539454249387);
    msg.setSource(9556U);
    msg.setSourceEntity(212U);
    msg.setDestination(63891U);
    msg.setDestinationEntity(168U);
    msg.value = 0.4577126112406229;

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
    msg.setTimeStamp(0.45298490330231755);
    msg.setSource(7476U);
    msg.setSourceEntity(250U);
    msg.setDestination(7336U);
    msg.setDestinationEntity(61U);
    msg.value = 0.1150157807549459;

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
    msg.setTimeStamp(0.8559585764238903);
    msg.setSource(64651U);
    msg.setSourceEntity(137U);
    msg.setDestination(59372U);
    msg.setDestinationEntity(141U);
    msg.value = 0.37731778783870107;

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
    msg.setTimeStamp(0.14730372992228258);
    msg.setSource(21053U);
    msg.setSourceEntity(205U);
    msg.setDestination(17570U);
    msg.setDestinationEntity(6U);
    msg.value = 0.7380060858376701;

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
    msg.setTimeStamp(0.09535068479230879);
    msg.setSource(4186U);
    msg.setSourceEntity(251U);
    msg.setDestination(56897U);
    msg.setDestinationEntity(27U);
    msg.value = 0.37116659139468644;

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
    msg.setTimeStamp(0.5420226377074311);
    msg.setSource(42580U);
    msg.setSourceEntity(195U);
    msg.setDestination(61798U);
    msg.setDestinationEntity(97U);
    msg.value = 0.05992799902148116;

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
    msg.setTimeStamp(0.9624165749952688);
    msg.setSource(16449U);
    msg.setSourceEntity(24U);
    msg.setDestination(62780U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6726634455793826;

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
    msg.setTimeStamp(0.0836589954975211);
    msg.setSource(22437U);
    msg.setSourceEntity(147U);
    msg.setDestination(7590U);
    msg.setDestinationEntity(233U);
    msg.value = 0.52149545318486;

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
    msg.setTimeStamp(0.7164864784238762);
    msg.setSource(12862U);
    msg.setSourceEntity(218U);
    msg.setDestination(28658U);
    msg.setDestinationEntity(50U);
    msg.value = 0.48358510855998715;

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
    msg.setTimeStamp(0.21587775815822552);
    msg.setSource(54966U);
    msg.setSourceEntity(98U);
    msg.setDestination(13182U);
    msg.setDestinationEntity(121U);
    msg.value = 0.20102845180743945;

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
    msg.setTimeStamp(0.7167486226809309);
    msg.setSource(19340U);
    msg.setSourceEntity(56U);
    msg.setDestination(40257U);
    msg.setDestinationEntity(240U);
    msg.value = 0.46183499146056406;

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
    msg.setTimeStamp(0.42498594524721545);
    msg.setSource(10827U);
    msg.setSourceEntity(214U);
    msg.setDestination(48618U);
    msg.setDestinationEntity(252U);
    msg.value = 0.411071505432538;

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
    msg.setTimeStamp(0.26434502015986094);
    msg.setSource(23870U);
    msg.setSourceEntity(240U);
    msg.setDestination(64251U);
    msg.setDestinationEntity(49U);
    msg.value = 0.05984913082552146;

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
    msg.setTimeStamp(0.4711741547858498);
    msg.setSource(24643U);
    msg.setSourceEntity(222U);
    msg.setDestination(12791U);
    msg.setDestinationEntity(200U);
    msg.value = 0.39593855797471267;

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
    msg.setTimeStamp(0.8242614713689491);
    msg.setSource(42933U);
    msg.setSourceEntity(69U);
    msg.setDestination(54169U);
    msg.setDestinationEntity(136U);
    msg.value = 0.9441080713710708;

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
    msg.setTimeStamp(0.5643457326106682);
    msg.setSource(9063U);
    msg.setSourceEntity(237U);
    msg.setDestination(6618U);
    msg.setDestinationEntity(238U);
    msg.value = 0.30067882815142144;

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
    msg.setTimeStamp(0.5774965429395617);
    msg.setSource(10842U);
    msg.setSourceEntity(119U);
    msg.setDestination(6269U);
    msg.setDestinationEntity(24U);
    msg.value = 0.271613593565606;

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
    msg.setTimeStamp(0.35445014457083157);
    msg.setSource(61620U);
    msg.setSourceEntity(79U);
    msg.setDestination(5974U);
    msg.setDestinationEntity(222U);
    msg.value = 0.4295728048063304;

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
    msg.setTimeStamp(0.9512085004703943);
    msg.setSource(32079U);
    msg.setSourceEntity(195U);
    msg.setDestination(60211U);
    msg.setDestinationEntity(138U);
    msg.value = 0.8661257357161896;

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
    msg.setTimeStamp(0.9336631396313217);
    msg.setSource(42556U);
    msg.setSourceEntity(119U);
    msg.setDestination(876U);
    msg.setDestinationEntity(240U);
    msg.value = 0.21760309464011773;

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
    msg.setTimeStamp(0.08650171144780061);
    msg.setSource(4923U);
    msg.setSourceEntity(158U);
    msg.setDestination(61294U);
    msg.setDestinationEntity(185U);
    msg.value = 0.2335445664498106;

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
    msg.setTimeStamp(0.2755952849151565);
    msg.setSource(21876U);
    msg.setSourceEntity(224U);
    msg.setDestination(21698U);
    msg.setDestinationEntity(162U);
    msg.value = 0.9166132485368483;

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
    msg.setTimeStamp(0.6964986964623401);
    msg.setSource(44509U);
    msg.setSourceEntity(142U);
    msg.setDestination(4462U);
    msg.setDestinationEntity(155U);
    msg.validity = 46670U;
    msg.type = 17U;
    msg.tow = 2356200994U;
    msg.base_lat = 0.15867363726264372;
    msg.base_lon = 0.18500052973998837;
    msg.base_height = 0.08703441381015764;
    msg.n = 0.8765867187566659;
    msg.e = 0.45076022358469825;
    msg.d = 0.2768031221475332;
    msg.v_n = 0.5198395825757104;
    msg.v_e = 0.6699776890747673;
    msg.v_d = 0.030100633444882008;
    msg.satellites = 68U;
    msg.iar_hyp = 14563U;
    msg.iar_ratio = 0.15148223065149713;

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
    msg.setTimeStamp(0.0609812790689519);
    msg.setSource(43936U);
    msg.setSourceEntity(223U);
    msg.setDestination(60821U);
    msg.setDestinationEntity(54U);
    msg.validity = 52193U;
    msg.type = 148U;
    msg.tow = 2629013588U;
    msg.base_lat = 0.5587728064589921;
    msg.base_lon = 0.2972598281756923;
    msg.base_height = 0.34501138138088927;
    msg.n = 0.6376807734797524;
    msg.e = 0.9916296011476403;
    msg.d = 0.019688779740506313;
    msg.v_n = 0.826355638902699;
    msg.v_e = 0.8187010901858481;
    msg.v_d = 0.9241322381298521;
    msg.satellites = 112U;
    msg.iar_hyp = 31432U;
    msg.iar_ratio = 0.632533765647932;

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
    msg.setTimeStamp(0.6427770650416853);
    msg.setSource(33261U);
    msg.setSourceEntity(229U);
    msg.setDestination(47377U);
    msg.setDestinationEntity(43U);
    msg.validity = 35874U;
    msg.type = 233U;
    msg.tow = 1617406340U;
    msg.base_lat = 0.5109988838410706;
    msg.base_lon = 0.31810899435855255;
    msg.base_height = 0.13604240804444656;
    msg.n = 0.9985948350239902;
    msg.e = 0.7270306412248765;
    msg.d = 0.35865972054717044;
    msg.v_n = 0.19155814197512533;
    msg.v_e = 0.8332080025666001;
    msg.v_d = 0.932521366511825;
    msg.satellites = 98U;
    msg.iar_hyp = 17465U;
    msg.iar_ratio = 0.9357149290749838;

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
    msg.setTimeStamp(0.16478952854273177);
    msg.setSource(64358U);
    msg.setSourceEntity(21U);
    msg.setDestination(40065U);
    msg.setDestinationEntity(234U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7916733517032545;
    tmp_msg_0.lon = 0.33319699942707315;
    tmp_msg_0.height = 0.35485824643527;
    tmp_msg_0.x = 0.4283891965425263;
    tmp_msg_0.y = 0.7800602445242157;
    tmp_msg_0.z = 0.16753121684134809;
    tmp_msg_0.phi = 0.9245906411023278;
    tmp_msg_0.theta = 0.5566379142250492;
    tmp_msg_0.psi = 0.7743994102657982;
    tmp_msg_0.u = 0.26110115341324425;
    tmp_msg_0.v = 0.6653732848191772;
    tmp_msg_0.w = 0.25369274616288595;
    tmp_msg_0.vx = 0.2692381615986329;
    tmp_msg_0.vy = 0.7701722117352328;
    tmp_msg_0.vz = 0.22641092060975543;
    tmp_msg_0.p = 0.18720194320820793;
    tmp_msg_0.q = 0.20509080601635854;
    tmp_msg_0.r = 0.25545721184442916;
    tmp_msg_0.depth = 0.8363021119400608;
    tmp_msg_0.alt = 0.9558624927111145;
    msg.state.set(tmp_msg_0);
    msg.type = 78U;

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
    msg.setTimeStamp(0.8424966167442556);
    msg.setSource(51857U);
    msg.setSourceEntity(36U);
    msg.setDestination(30633U);
    msg.setDestinationEntity(75U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2614296575766891;
    tmp_msg_0.lon = 0.8065887653260595;
    tmp_msg_0.height = 0.8595682566923497;
    tmp_msg_0.x = 0.15237653889519298;
    tmp_msg_0.y = 0.38155682812441916;
    tmp_msg_0.z = 0.575658092760893;
    tmp_msg_0.phi = 0.1361132532777013;
    tmp_msg_0.theta = 0.11606101264903723;
    tmp_msg_0.psi = 0.42550733009891295;
    tmp_msg_0.u = 0.5226346308286125;
    tmp_msg_0.v = 0.45603387294524755;
    tmp_msg_0.w = 0.7974523020668479;
    tmp_msg_0.vx = 0.570100813092303;
    tmp_msg_0.vy = 0.7714477705320086;
    tmp_msg_0.vz = 0.8840007124271049;
    tmp_msg_0.p = 0.3120377774443014;
    tmp_msg_0.q = 0.4442047259856523;
    tmp_msg_0.r = 0.7533409596551707;
    tmp_msg_0.depth = 0.5486074594331749;
    tmp_msg_0.alt = 0.58015153158958;
    msg.state.set(tmp_msg_0);
    msg.type = 113U;

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
    msg.setTimeStamp(0.522365495406014);
    msg.setSource(61823U);
    msg.setSourceEntity(132U);
    msg.setDestination(45616U);
    msg.setDestinationEntity(167U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.556238411644897;
    tmp_msg_0.lon = 0.5569451015171334;
    tmp_msg_0.height = 0.29540362886187865;
    tmp_msg_0.x = 0.23536494877338798;
    tmp_msg_0.y = 0.5567734408601235;
    tmp_msg_0.z = 0.27599150480772483;
    tmp_msg_0.phi = 0.304962490406016;
    tmp_msg_0.theta = 0.2798807182392191;
    tmp_msg_0.psi = 0.7506435156725769;
    tmp_msg_0.u = 0.10276904058852343;
    tmp_msg_0.v = 0.5571354718957122;
    tmp_msg_0.w = 0.8818349725359279;
    tmp_msg_0.vx = 0.5195509502200781;
    tmp_msg_0.vy = 0.3355149983696183;
    tmp_msg_0.vz = 0.7101277203900529;
    tmp_msg_0.p = 0.6550325078188637;
    tmp_msg_0.q = 0.008123514117367114;
    tmp_msg_0.r = 0.1218971082720115;
    tmp_msg_0.depth = 0.38688272791343103;
    tmp_msg_0.alt = 0.26633907345441343;
    msg.state.set(tmp_msg_0);
    msg.type = 154U;

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
    msg.setTimeStamp(0.4760031996666866);
    msg.setSource(58623U);
    msg.setSourceEntity(68U);
    msg.setDestination(57739U);
    msg.setDestinationEntity(229U);
    msg.value = 0.7585321850986623;

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
    msg.setTimeStamp(0.4597118679398978);
    msg.setSource(8209U);
    msg.setSourceEntity(1U);
    msg.setDestination(63003U);
    msg.setDestinationEntity(154U);
    msg.value = 0.49109371857745077;

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
    msg.setTimeStamp(0.69720965829164);
    msg.setSource(61309U);
    msg.setSourceEntity(26U);
    msg.setDestination(21339U);
    msg.setDestinationEntity(146U);
    msg.value = 0.044227678176350316;

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
    msg.setTimeStamp(0.46064499951755444);
    msg.setSource(57990U);
    msg.setSourceEntity(194U);
    msg.setDestination(21154U);
    msg.setDestinationEntity(26U);
    msg.value = 0.09806479053510708;

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
    msg.setTimeStamp(0.41563165742513564);
    msg.setSource(10974U);
    msg.setSourceEntity(25U);
    msg.setDestination(39793U);
    msg.setDestinationEntity(69U);
    msg.value = 0.7015557989879707;

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
    msg.setTimeStamp(0.6567537305486332);
    msg.setSource(50335U);
    msg.setSourceEntity(252U);
    msg.setDestination(44473U);
    msg.setDestinationEntity(80U);
    msg.value = 0.7745715176454793;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.8899599660290168);
    msg.setSource(38723U);
    msg.setSourceEntity(20U);
    msg.setDestination(49952U);
    msg.setDestinationEntity(118U);
    msg.id = 246U;
    msg.zoom = 27U;
    msg.action = 99U;

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
    msg.setTimeStamp(0.36543444703575934);
    msg.setSource(23129U);
    msg.setSourceEntity(36U);
    msg.setDestination(14783U);
    msg.setDestinationEntity(98U);
    msg.id = 34U;
    msg.zoom = 46U;
    msg.action = 135U;

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
    msg.setTimeStamp(0.16062373413423303);
    msg.setSource(61601U);
    msg.setSourceEntity(199U);
    msg.setDestination(15349U);
    msg.setDestinationEntity(206U);
    msg.id = 205U;
    msg.zoom = 180U;
    msg.action = 121U;

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
    msg.setTimeStamp(0.5019661820077357);
    msg.setSource(8330U);
    msg.setSourceEntity(64U);
    msg.setDestination(54121U);
    msg.setDestinationEntity(208U);
    msg.id = 203U;
    msg.value = 0.03268275030795309;

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
    msg.setTimeStamp(0.3364036215094093);
    msg.setSource(8137U);
    msg.setSourceEntity(140U);
    msg.setDestination(37237U);
    msg.setDestinationEntity(129U);
    msg.id = 144U;
    msg.value = 0.016360679645538556;

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
    msg.setTimeStamp(0.5599203701976914);
    msg.setSource(52312U);
    msg.setSourceEntity(142U);
    msg.setDestination(7061U);
    msg.setDestinationEntity(149U);
    msg.id = 0U;
    msg.value = 0.8758558263945013;

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
    msg.setTimeStamp(0.7535033731893154);
    msg.setSource(6813U);
    msg.setSourceEntity(229U);
    msg.setDestination(12298U);
    msg.setDestinationEntity(75U);
    msg.id = 249U;
    msg.value = 0.574188576262102;

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
    msg.setTimeStamp(0.6086712618338977);
    msg.setSource(49268U);
    msg.setSourceEntity(221U);
    msg.setDestination(52952U);
    msg.setDestinationEntity(230U);
    msg.id = 97U;
    msg.value = 0.7890326465522087;

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
    msg.setTimeStamp(0.8676712692283084);
    msg.setSource(63172U);
    msg.setSourceEntity(215U);
    msg.setDestination(45852U);
    msg.setDestinationEntity(29U);
    msg.id = 177U;
    msg.value = 0.5380164936045972;

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
    msg.setTimeStamp(0.7456976026459418);
    msg.setSource(36448U);
    msg.setSourceEntity(174U);
    msg.setDestination(38232U);
    msg.setDestinationEntity(6U);
    msg.id = 188U;
    msg.angle = 0.25685039367978046;

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
    msg.setTimeStamp(0.6334580355470648);
    msg.setSource(30510U);
    msg.setSourceEntity(104U);
    msg.setDestination(38222U);
    msg.setDestinationEntity(126U);
    msg.id = 74U;
    msg.angle = 0.909316612857249;

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
    msg.setTimeStamp(0.45876543889966914);
    msg.setSource(14707U);
    msg.setSourceEntity(16U);
    msg.setDestination(16447U);
    msg.setDestinationEntity(200U);
    msg.id = 52U;
    msg.angle = 0.00183901614415094;

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
    msg.setTimeStamp(0.8358177746678213);
    msg.setSource(61645U);
    msg.setSourceEntity(103U);
    msg.setDestination(56558U);
    msg.setDestinationEntity(246U);
    msg.op = 142U;
    msg.actions.assign("RPTSAONXOKFMFHELZSJUQGMLHXCUFOXIGJUFVEJAYPLMKQEYYEAZKDTNYWZJNSVPDVTDIALYXBGHRKHFHMKTWQOOSERPEZY");

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
    msg.setTimeStamp(0.4524958012492323);
    msg.setSource(13756U);
    msg.setSourceEntity(203U);
    msg.setDestination(37844U);
    msg.setDestinationEntity(120U);
    msg.op = 55U;
    msg.actions.assign("MZUBGRJFKXJQLVJWMHUBSNGCDOKEAEXGLPCHACIOVKUBJQKXMTVVISALMWZXOQJFYGSKHWWBTTRUSVUAWIDUOPMYNBYDGTHYDMJXIEJBRYLLBHPFHVOHCEUESYAWVEWQAEPCAFOPGEBNVFONYFJRMAFIZSRHKMYNUWZXEKLTVPTGXIQZ");

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
    msg.setTimeStamp(0.4849203683482962);
    msg.setSource(63908U);
    msg.setSourceEntity(168U);
    msg.setDestination(14373U);
    msg.setDestinationEntity(161U);
    msg.op = 128U;
    msg.actions.assign("HGOBVHPNVYDKFDPFPCCJITSRUXUSQUKHATUPFSAEEGCIYCOTNGRXXGFQDOUSYJBHTVAGEKXFLFGXMKBKEZWVINFDXYMXPGWZTOJLNRAWMZQYNBCRFSJCYLQTKHBMNDLOYJESWZQZSHLNIZBQXRYLDNMZJOQREUIKAUTDWBIFVBTGMHCZRVDWKOVCJJWMGXOOHUZNVIKULMBLNEHYPJIMPJEQETUIMRKSYLAZXGVWQSSPVAWFDRCEPICTWAOQB");

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
    msg.setTimeStamp(0.3052945707713788);
    msg.setSource(15545U);
    msg.setSourceEntity(241U);
    msg.setDestination(15349U);
    msg.setDestinationEntity(243U);
    msg.actions.assign("CPTKNYXSBWYBSMYQFVSQPTYIXOLZLPXLRQDPKZOKVGGJOKQIJVCEAEOEWQAUDXBDJLLGAWTJZJMKCFN");

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
    msg.setTimeStamp(0.16254176057728154);
    msg.setSource(15688U);
    msg.setSourceEntity(143U);
    msg.setDestination(27198U);
    msg.setDestinationEntity(117U);
    msg.actions.assign("JDMFPOCKHRPGN");

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
    msg.setTimeStamp(0.2346802991375031);
    msg.setSource(53635U);
    msg.setSourceEntity(188U);
    msg.setDestination(60769U);
    msg.setDestinationEntity(75U);
    msg.actions.assign("GTJARYEFZUTPNWKXQS");

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
    msg.setTimeStamp(0.9366165214905082);
    msg.setSource(51758U);
    msg.setSourceEntity(170U);
    msg.setDestination(34785U);
    msg.setDestinationEntity(10U);
    msg.button = 83U;
    msg.value = 172U;

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
    msg.setTimeStamp(0.7373255183557503);
    msg.setSource(26410U);
    msg.setSourceEntity(197U);
    msg.setDestination(33577U);
    msg.setDestinationEntity(153U);
    msg.button = 93U;
    msg.value = 161U;

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
    msg.setTimeStamp(0.12025796096609442);
    msg.setSource(29597U);
    msg.setSourceEntity(12U);
    msg.setDestination(30405U);
    msg.setDestinationEntity(234U);
    msg.button = 61U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.28605686335383285);
    msg.setSource(19861U);
    msg.setSourceEntity(178U);
    msg.setDestination(36692U);
    msg.setDestinationEntity(254U);
    msg.op = 205U;
    msg.text.assign("FPMUXETARUHUZDISBMKYVFNWNTCAVKFMCRHONIIKOIBNQZEZICRPFHTOWBDFITZFEWRORADWBSDSTGBYUBKTWDHQADPTRJQRWGFCPGBZXFVYLHSORVBKOXOXEGXKNXFNSUKLZCNEYCLGW");

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
    msg.setTimeStamp(0.2663199948613679);
    msg.setSource(13911U);
    msg.setSourceEntity(254U);
    msg.setDestination(60263U);
    msg.setDestinationEntity(9U);
    msg.op = 178U;
    msg.text.assign("YQVJCBBANAKSXEYVPTDDMAYV");

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
    msg.setTimeStamp(0.11295608338799001);
    msg.setSource(27885U);
    msg.setSourceEntity(44U);
    msg.setDestination(58979U);
    msg.setDestinationEntity(238U);
    msg.op = 48U;
    msg.text.assign("GDLZLAJGVMLUCWWPZIEUGWRAOVFNWTKYKBIGLATRYHFKBSVDVEDCOPOYPIMTMZQETBLAVPIKHSBIRNKRTZWTODACEFCJNWSKEDUVXFMQJMMKBORBFDNBQWCIYXQOAJOHUQFLUJJXTOESYQPXO");

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
    msg.setTimeStamp(0.6402657800668439);
    msg.setSource(53476U);
    msg.setSourceEntity(220U);
    msg.setDestination(17546U);
    msg.setDestinationEntity(7U);
    msg.op = 100U;
    msg.time_remain = 0.8273529385230622;
    msg.sched_time = 0.5923854031420133;

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
    msg.setTimeStamp(0.1318080188082611);
    msg.setSource(55811U);
    msg.setSourceEntity(73U);
    msg.setDestination(12054U);
    msg.setDestinationEntity(159U);
    msg.op = 16U;
    msg.time_remain = 0.32669791170955154;
    msg.sched_time = 0.7958517603414856;

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
    msg.setTimeStamp(0.9487343113199549);
    msg.setSource(28701U);
    msg.setSourceEntity(122U);
    msg.setDestination(46385U);
    msg.setDestinationEntity(151U);
    msg.op = 122U;
    msg.time_remain = 0.6961385953027608;
    msg.sched_time = 0.9430267154141366;

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
    msg.setTimeStamp(0.06418449968988504);
    msg.setSource(29914U);
    msg.setSourceEntity(62U);
    msg.setDestination(28021U);
    msg.setDestinationEntity(112U);
    msg.name.assign("HDQGWCNVDFTNUVRDDCUWTOTWQOHHHNJBMFWRGRMJMWDIRVIVVTMKWHFIAQXPLCKTDEPYNUFEZRQPXSIHCPWLBVPKEYFGVJZLQKJJGZLKSXNSPFZZWIWCAISOOHJYYUBDVRNEA");
    msg.op = 148U;
    msg.sched_time = 0.3364088377547999;

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
    msg.setTimeStamp(0.07588897457007471);
    msg.setSource(48727U);
    msg.setSourceEntity(124U);
    msg.setDestination(18512U);
    msg.setDestinationEntity(108U);
    msg.name.assign("KOYJFXGDOLXPPWZSYEJZHDVTYHMMBNXBYJLPUZOCGNMCXPPDZBQGIIBINFBEGGAHNNQPTUQAEORKHABURZUDRLPRAEBDQVKQJCTJPMHCBUUNJVJSITGOXNVLSAWVLDRTIBZAUFWWOCAWVKZSAZKTONSJXQVHDMKUDSJCRQXETWTSSTNRVAERZDIVSMLECIWLJFW");
    msg.op = 64U;
    msg.sched_time = 0.0037540080002022025;

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
    msg.setTimeStamp(0.03851270028280929);
    msg.setSource(3364U);
    msg.setSourceEntity(182U);
    msg.setDestination(30133U);
    msg.setDestinationEntity(26U);
    msg.name.assign("CDXYAXRTCPJSJXDKPUOYRGPXSAKONBRAJMTEGBTDBOIQWPCYGHLBLMVNRWLHMPFHMSNUJZVYTXQIFILQWVVFNEFUOEWCGZEHHCJWIEOFXJLIUZYZRODGBJANJDBTKBYFZNOJLCXTCRE");
    msg.op = 96U;
    msg.sched_time = 0.6415339963500517;

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
    msg.setTimeStamp(0.7157286888243847);
    msg.setSource(22992U);
    msg.setSourceEntity(212U);
    msg.setDestination(17873U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.44516237319791585);
    msg.setSource(49657U);
    msg.setSourceEntity(172U);
    msg.setDestination(8605U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.27107321988270094);
    msg.setSource(47443U);
    msg.setSourceEntity(241U);
    msg.setDestination(35612U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.7712835177467435);
    msg.setSource(61498U);
    msg.setSourceEntity(204U);
    msg.setDestination(31182U);
    msg.setDestinationEntity(49U);
    msg.name.assign("DIGUQWLEBTYUQFG");
    msg.state = 98U;

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
    msg.setTimeStamp(0.8194852082874446);
    msg.setSource(61835U);
    msg.setSourceEntity(203U);
    msg.setDestination(26969U);
    msg.setDestinationEntity(36U);
    msg.name.assign("YBRRIVJRGGMXZJJPYXLXCILXYQYJVSUOAKVEBULOCEZWQAKMVDQTMLJBIZISNWRODWTKTXVUKSNIPHNNPALNLAJNPBZS");
    msg.state = 233U;

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
    msg.setTimeStamp(0.7261169664514565);
    msg.setSource(39730U);
    msg.setSourceEntity(124U);
    msg.setDestination(65076U);
    msg.setDestinationEntity(31U);
    msg.name.assign("RYKCKLNOXJDJWBUQBVVAVTAZEDFQMOZIBVRSTUTOPUSHHJ");
    msg.state = 191U;

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
    msg.setTimeStamp(0.9164687682914421);
    msg.setSource(23128U);
    msg.setSourceEntity(123U);
    msg.setDestination(55490U);
    msg.setDestinationEntity(219U);
    msg.name.assign("BELSWIAVXXVKPVDCPUJMFXMKNJFLHBVKPUVTFMYMLRBHNILPBUCZOFYJSSPCAWHYHCOCEWGARBZEHYDIBOHOOQXZZACGNLZSROFCRQWRAFVKWNQDVIYHEXEETVMGYDPXZTESSWNIEZQEQUNJGWVYMKQIVJKDW");
    msg.value = 33U;

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
    msg.setTimeStamp(0.2514015933776712);
    msg.setSource(9344U);
    msg.setSourceEntity(163U);
    msg.setDestination(58260U);
    msg.setDestinationEntity(149U);
    msg.name.assign("NQRXCDMXLUWBVCFXLDAADGRJEHTZRHVGPOYTOMRFFSBYYAXKPPBTXCLMIIKRYRSYMJBQYWWUAZQOHMPTCZPHMLQSBGIGKJHAOOBNJQXGJQICHVCEEVAXLLZKCPPQJLZBHNPSBWIKHUOKRZWDANCSDWXTBZOHGAQHDNPZCONLUKZSLFIWSSURQVDEJGBDQGOMFKWNSGEMDSNXEFZAPWLI");
    msg.value = 17U;

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
    msg.setTimeStamp(0.701365550678267);
    msg.setSource(23464U);
    msg.setSourceEntity(80U);
    msg.setDestination(12922U);
    msg.setDestinationEntity(201U);
    msg.name.assign("PCGKLHMTSZCNAYIMTPSCAZEGQDWMSYFWAHINFMOMGTSQNBUGJKDJLBUSLIIFFPYNXCYBLCFZVETBDFXUPQJIWJRHKYPUUEVNJIOMQHRHIUXPSZRJWRXCAHDGDKDOKBLBAJYELFWJVXPJNBEXGNKZLPYVXBMEIOCRGZKR");
    msg.value = 235U;

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
    msg.setTimeStamp(0.5604152968445999);
    msg.setSource(10827U);
    msg.setSourceEntity(194U);
    msg.setDestination(29842U);
    msg.setDestinationEntity(24U);
    msg.name.assign("KAJFSDUFXYFPDUXAWCEOKVIBWMJYLRQBMVSGTMQMZMKABMLVHGAUVSL");

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
    msg.setTimeStamp(0.8816262624032066);
    msg.setSource(51461U);
    msg.setSourceEntity(22U);
    msg.setDestination(21410U);
    msg.setDestinationEntity(215U);
    msg.name.assign("KRLAEOATDIDWZIAUFVMTGJBAIZRSBVFGFZHQG");

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
    msg.setTimeStamp(0.18123161656478937);
    msg.setSource(13647U);
    msg.setSourceEntity(148U);
    msg.setDestination(26777U);
    msg.setDestinationEntity(171U);
    msg.name.assign("FYSRMYLKGZDDXXHVWJ");

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
    msg.setTimeStamp(0.869858268248458);
    msg.setSource(28765U);
    msg.setSourceEntity(148U);
    msg.setDestination(4308U);
    msg.setDestinationEntity(37U);
    msg.name.assign("IKEZDSLYQNUEOWEPDWIFXLBGIJIOPTYMQHNSDGQCQMLKUNVRDYZTOBOKWOTMWMUHZNGZHXGRPWKHKNSBLRQFVFCBQLURFZCODKFMMBTRYYXDFAMQRTWGCIUXAZQJSLIPXRDVFWBAPIXALAEBUZTNXLIWPABVXMUEHFBVJPUYEEBUHOAVHVJIZGPPOXVJVRDLOZIYTQEHDCKNEAJMJYAE");
    msg.value = 251U;

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
    msg.setTimeStamp(0.5019452435531134);
    msg.setSource(5135U);
    msg.setSourceEntity(27U);
    msg.setDestination(6038U);
    msg.setDestinationEntity(108U);
    msg.name.assign("NHIGUNSTPFUBDQMWHDGYA");
    msg.value = 92U;

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
    msg.setTimeStamp(0.4151368297050533);
    msg.setSource(24015U);
    msg.setSourceEntity(4U);
    msg.setDestination(57498U);
    msg.setDestinationEntity(45U);
    msg.name.assign("KFXBBLMHVZRXVXCOUSMVGWZQQXOITPDNHSXUTEEVOYFPFISBRTEOHWTDBYZHCKATBFFYJASIUKPKZITCRNJQROZJWJQI");
    msg.value = 211U;

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
    msg.setTimeStamp(0.981596507016956);
    msg.setSource(8369U);
    msg.setSourceEntity(199U);
    msg.setDestination(25333U);
    msg.setDestinationEntity(145U);
    msg.id = 36U;
    msg.period = 4251967203U;
    msg.duty_cycle = 3727516141U;

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
    msg.setTimeStamp(0.42904992591021573);
    msg.setSource(37148U);
    msg.setSourceEntity(7U);
    msg.setDestination(30352U);
    msg.setDestinationEntity(244U);
    msg.id = 11U;
    msg.period = 4134943978U;
    msg.duty_cycle = 2345378852U;

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
    msg.setTimeStamp(0.503477903592162);
    msg.setSource(6500U);
    msg.setSourceEntity(226U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(119U);
    msg.id = 23U;
    msg.period = 2794576112U;
    msg.duty_cycle = 1477203814U;

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
    msg.setTimeStamp(0.5658433819216877);
    msg.setSource(2208U);
    msg.setSourceEntity(36U);
    msg.setDestination(5029U);
    msg.setDestinationEntity(219U);
    msg.id = 60U;
    msg.period = 240094943U;
    msg.duty_cycle = 3540317101U;

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
    msg.setTimeStamp(0.5384501712271168);
    msg.setSource(37230U);
    msg.setSourceEntity(58U);
    msg.setDestination(14941U);
    msg.setDestinationEntity(131U);
    msg.id = 191U;
    msg.period = 2836507735U;
    msg.duty_cycle = 560831051U;

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
    msg.setTimeStamp(0.08359143053858853);
    msg.setSource(43993U);
    msg.setSourceEntity(8U);
    msg.setDestination(63162U);
    msg.setDestinationEntity(74U);
    msg.id = 154U;
    msg.period = 2063969530U;
    msg.duty_cycle = 3835016848U;

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
    msg.setTimeStamp(0.8505188313962774);
    msg.setSource(30863U);
    msg.setSourceEntity(243U);
    msg.setDestination(49068U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.804472411664048;
    msg.lon = 0.9998957564273611;
    msg.height = 0.5832173650908127;
    msg.x = 0.12943988385428296;
    msg.y = 0.5736283561724345;
    msg.z = 0.07878128155410247;
    msg.phi = 0.37435787471168824;
    msg.theta = 0.2445240899857578;
    msg.psi = 0.33071027999093083;
    msg.u = 0.7831374164171424;
    msg.v = 0.11725653381333712;
    msg.w = 0.1070286902803721;
    msg.vx = 0.10088349665924812;
    msg.vy = 0.8968296571454155;
    msg.vz = 0.45626395330021285;
    msg.p = 0.8895902844599168;
    msg.q = 0.5591306519250636;
    msg.r = 0.9114328201615618;
    msg.depth = 0.202621172228446;
    msg.alt = 0.8459315865395751;

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
    msg.setTimeStamp(0.4636145388508336);
    msg.setSource(3940U);
    msg.setSourceEntity(196U);
    msg.setDestination(65410U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.12294667206852361;
    msg.lon = 0.7695509887954841;
    msg.height = 0.8095167124653619;
    msg.x = 0.6939157989721958;
    msg.y = 0.5502819362845026;
    msg.z = 0.46320234647791847;
    msg.phi = 0.7989497541379194;
    msg.theta = 0.6641750494319832;
    msg.psi = 0.015005136335555447;
    msg.u = 0.039860895325080525;
    msg.v = 0.6809920118846379;
    msg.w = 0.5950516368245181;
    msg.vx = 0.6761008523687945;
    msg.vy = 0.29273178363382346;
    msg.vz = 0.8942991760023096;
    msg.p = 0.7134248424698713;
    msg.q = 0.8404228627073903;
    msg.r = 0.9574260131628214;
    msg.depth = 0.3757607540713628;
    msg.alt = 0.44605241370318693;

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
    msg.setTimeStamp(0.13675357371026375);
    msg.setSource(34708U);
    msg.setSourceEntity(201U);
    msg.setDestination(27254U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.4464450687345578;
    msg.lon = 0.27172210477583303;
    msg.height = 0.04033535673779787;
    msg.x = 0.7299414768537514;
    msg.y = 0.48291651082745346;
    msg.z = 0.5986931964645672;
    msg.phi = 0.5707127841393894;
    msg.theta = 0.1712409634035006;
    msg.psi = 0.12459664638648882;
    msg.u = 0.3018023132228468;
    msg.v = 0.20647402382452273;
    msg.w = 0.9541998179429567;
    msg.vx = 0.9423648941083803;
    msg.vy = 0.6529025355596831;
    msg.vz = 0.12016527444036051;
    msg.p = 0.16306354013697333;
    msg.q = 0.995518053091853;
    msg.r = 0.32281471369915316;
    msg.depth = 0.1375594845696141;
    msg.alt = 0.1082486454093411;

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
    msg.setTimeStamp(0.3401021813240269);
    msg.setSource(10249U);
    msg.setSourceEntity(31U);
    msg.setDestination(32854U);
    msg.setDestinationEntity(57U);
    msg.x = 0.7420918991494535;
    msg.y = 0.7329739630560289;
    msg.z = 0.6411485316153863;

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
    msg.setTimeStamp(0.8225624235569393);
    msg.setSource(52812U);
    msg.setSourceEntity(47U);
    msg.setDestination(1204U);
    msg.setDestinationEntity(109U);
    msg.x = 0.6422610078363474;
    msg.y = 0.46873560839665585;
    msg.z = 0.414515996324322;

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
    msg.setTimeStamp(0.4750151366510179);
    msg.setSource(14591U);
    msg.setSourceEntity(196U);
    msg.setDestination(61250U);
    msg.setDestinationEntity(137U);
    msg.x = 0.6354347698179841;
    msg.y = 0.7448947002985017;
    msg.z = 0.7416400517874687;

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
    msg.setTimeStamp(0.07472361460606225);
    msg.setSource(14087U);
    msg.setSourceEntity(127U);
    msg.setDestination(10912U);
    msg.setDestinationEntity(146U);
    msg.value = 0.2418497208649103;

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
    msg.setTimeStamp(0.8551529639202616);
    msg.setSource(31485U);
    msg.setSourceEntity(119U);
    msg.setDestination(53951U);
    msg.setDestinationEntity(188U);
    msg.value = 0.9282486563712778;

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
    msg.setTimeStamp(0.8801310453399246);
    msg.setSource(51614U);
    msg.setSourceEntity(111U);
    msg.setDestination(22210U);
    msg.setDestinationEntity(192U);
    msg.value = 0.040075726167542514;

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
    msg.setTimeStamp(0.677147016426752);
    msg.setSource(24781U);
    msg.setSourceEntity(36U);
    msg.setDestination(49582U);
    msg.setDestinationEntity(117U);
    msg.value = 0.197168897801429;

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
    msg.setTimeStamp(0.9277957322039003);
    msg.setSource(55033U);
    msg.setSourceEntity(152U);
    msg.setDestination(20431U);
    msg.setDestinationEntity(140U);
    msg.value = 0.057101042045996975;

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
    msg.setTimeStamp(0.2329965985850052);
    msg.setSource(55882U);
    msg.setSourceEntity(147U);
    msg.setDestination(11016U);
    msg.setDestinationEntity(164U);
    msg.value = 0.22442045423305368;

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
    msg.setTimeStamp(0.6982288872434566);
    msg.setSource(23988U);
    msg.setSourceEntity(61U);
    msg.setDestination(30241U);
    msg.setDestinationEntity(62U);
    msg.x = 0.04001831154600011;
    msg.y = 0.9744210413286778;
    msg.z = 0.8575984040133331;
    msg.phi = 0.24418937722278933;
    msg.theta = 0.38510460698791293;
    msg.psi = 0.6133574717366398;
    msg.p = 0.8635993741791474;
    msg.q = 0.1210560171594468;
    msg.r = 0.43313989040573975;
    msg.u = 0.7515765913410879;
    msg.v = 0.3693741409823744;
    msg.w = 0.8546744368330609;
    msg.bias_psi = 0.04301325900196118;
    msg.bias_r = 0.048577060754293244;

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
    msg.setTimeStamp(0.8904646790821021);
    msg.setSource(22621U);
    msg.setSourceEntity(158U);
    msg.setDestination(18647U);
    msg.setDestinationEntity(59U);
    msg.x = 0.19401060945334958;
    msg.y = 0.04887372930668077;
    msg.z = 0.7802696382884559;
    msg.phi = 0.8351602093888498;
    msg.theta = 0.9236706349243786;
    msg.psi = 0.8379218560439384;
    msg.p = 0.951205967431221;
    msg.q = 0.9562463666561825;
    msg.r = 0.6347595592693005;
    msg.u = 0.3739863560203429;
    msg.v = 0.3471750996767059;
    msg.w = 0.8451677539824423;
    msg.bias_psi = 0.6261060656833057;
    msg.bias_r = 0.413201054540405;

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
    msg.setTimeStamp(0.9329233226078861);
    msg.setSource(15989U);
    msg.setSourceEntity(16U);
    msg.setDestination(50180U);
    msg.setDestinationEntity(126U);
    msg.x = 0.4560290961505544;
    msg.y = 0.17122853267269267;
    msg.z = 0.717805286074287;
    msg.phi = 0.6241504229164238;
    msg.theta = 0.14625394656078528;
    msg.psi = 0.7599637524661447;
    msg.p = 0.22257651474494755;
    msg.q = 0.4085541356045421;
    msg.r = 0.49241581184583383;
    msg.u = 0.7239396378145392;
    msg.v = 0.3461107731488171;
    msg.w = 0.953007861280541;
    msg.bias_psi = 0.6400670806827435;
    msg.bias_r = 0.6374887142837511;

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
    msg.setTimeStamp(0.6250680578848711);
    msg.setSource(35983U);
    msg.setSourceEntity(129U);
    msg.setDestination(19034U);
    msg.setDestinationEntity(6U);
    msg.bias_psi = 0.08646168464464887;
    msg.bias_r = 0.48269671700099637;
    msg.cog = 0.1967438923256669;
    msg.cyaw = 0.3406230966575018;
    msg.lbl_rej_level = 0.5299612819836059;
    msg.gps_rej_level = 0.38099892212555786;
    msg.custom_x = 0.8079985139431144;
    msg.custom_y = 0.20234677884756203;
    msg.custom_z = 0.5783770949056213;

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
    msg.setTimeStamp(0.9523707176612959);
    msg.setSource(41483U);
    msg.setSourceEntity(211U);
    msg.setDestination(43897U);
    msg.setDestinationEntity(247U);
    msg.bias_psi = 0.2369915401507534;
    msg.bias_r = 0.5495687646234668;
    msg.cog = 0.592982906624681;
    msg.cyaw = 0.5481997051886006;
    msg.lbl_rej_level = 0.39706474575346884;
    msg.gps_rej_level = 0.09976142131010146;
    msg.custom_x = 0.22181617843178258;
    msg.custom_y = 0.354660167143229;
    msg.custom_z = 0.04658141495345436;

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
    msg.setTimeStamp(0.5763237470905733);
    msg.setSource(59188U);
    msg.setSourceEntity(129U);
    msg.setDestination(11274U);
    msg.setDestinationEntity(191U);
    msg.bias_psi = 0.7886341592159934;
    msg.bias_r = 0.37411447861819147;
    msg.cog = 0.6790835077513346;
    msg.cyaw = 0.990343002612247;
    msg.lbl_rej_level = 0.5571443121422827;
    msg.gps_rej_level = 0.9286938517751242;
    msg.custom_x = 0.21320537735525735;
    msg.custom_y = 0.7698790227498672;
    msg.custom_z = 0.455524084134993;

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
    msg.setTimeStamp(0.67851731518511);
    msg.setSource(52076U);
    msg.setSourceEntity(129U);
    msg.setDestination(62589U);
    msg.setDestinationEntity(21U);
    msg.utc_time = 0.3794080771719788;
    msg.reason = 222U;

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
    msg.setTimeStamp(0.5461092953143272);
    msg.setSource(33822U);
    msg.setSourceEntity(4U);
    msg.setDestination(746U);
    msg.setDestinationEntity(148U);
    msg.utc_time = 0.5881198759678858;
    msg.reason = 47U;

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
    msg.setTimeStamp(0.4758753734631468);
    msg.setSource(9959U);
    msg.setSourceEntity(208U);
    msg.setDestination(54746U);
    msg.setDestinationEntity(195U);
    msg.utc_time = 0.8118590394871;
    msg.reason = 151U;

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
    msg.setTimeStamp(0.571039494650551);
    msg.setSource(37617U);
    msg.setSourceEntity(117U);
    msg.setDestination(24546U);
    msg.setDestinationEntity(213U);
    msg.id = 10U;
    msg.range = 0.21691841183573668;
    msg.acceptance = 83U;

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
    msg.setTimeStamp(0.7116147189419503);
    msg.setSource(64869U);
    msg.setSourceEntity(145U);
    msg.setDestination(40936U);
    msg.setDestinationEntity(25U);
    msg.id = 120U;
    msg.range = 0.9482408857525705;
    msg.acceptance = 168U;

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
    msg.setTimeStamp(0.26674987691482055);
    msg.setSource(25537U);
    msg.setSourceEntity(173U);
    msg.setDestination(10554U);
    msg.setDestinationEntity(166U);
    msg.id = 210U;
    msg.range = 0.15810891564432905;
    msg.acceptance = 6U;

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
    msg.setTimeStamp(0.6044393720134305);
    msg.setSource(63676U);
    msg.setSourceEntity(67U);
    msg.setDestination(46766U);
    msg.setDestinationEntity(195U);
    msg.type = 72U;
    msg.reason = 12U;
    msg.value = 0.7927713268912886;
    msg.timestep = 0.9388432286547685;

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
    msg.setTimeStamp(0.5185460722841532);
    msg.setSource(12027U);
    msg.setSourceEntity(66U);
    msg.setDestination(37409U);
    msg.setDestinationEntity(206U);
    msg.type = 108U;
    msg.reason = 49U;
    msg.value = 0.8846183949815417;
    msg.timestep = 0.7791556980490248;

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
    msg.setTimeStamp(0.005981385770734815);
    msg.setSource(18966U);
    msg.setSourceEntity(162U);
    msg.setDestination(14822U);
    msg.setDestinationEntity(150U);
    msg.type = 99U;
    msg.reason = 23U;
    msg.value = 0.38267272189909685;
    msg.timestep = 0.566273955961046;

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
    msg.setTimeStamp(0.8400451333585764);
    msg.setSource(27197U);
    msg.setSourceEntity(117U);
    msg.setDestination(55801U);
    msg.setDestinationEntity(82U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EJPKMBFCATVUUYVFATCEQKEWOSPOPOCDWSMILXDIBIGUMKRRIFAQAHMYUMGYGDHZLEKMGULHDXVJDLBVBSNGWSAQEFCTOTUPRAFVJPPOAFDZZZDQXYIJVAEIBWXNTYGJXUWEBPRTNAJNLGSICQHCHZMIRHTRLQNKGUNPDSGLPULSJPMTEXZEMEVYCBBGJKSWMKZVZVXNHDOOWWRWSIUHBJNH");
    tmp_msg_0.lat = 0.975494442525051;
    tmp_msg_0.lon = 0.28231360586307064;
    tmp_msg_0.depth = 0.8249110669743458;
    tmp_msg_0.query_channel = 154U;
    tmp_msg_0.reply_channel = 48U;
    tmp_msg_0.transponder_delay = 116U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.31404378318788795;
    msg.y = 0.18889385232607392;
    msg.var_x = 0.7982058338112574;
    msg.var_y = 0.05275707930401641;
    msg.distance = 0.14177657695448842;

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
    msg.setTimeStamp(0.9169796561711243);
    msg.setSource(43773U);
    msg.setSourceEntity(135U);
    msg.setDestination(30065U);
    msg.setDestinationEntity(68U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IIDZGPAXUWOGCJNAFTFJRFNWRRKEOEKKUZXJHQTEPXYICUWBZSQNQHPXURONSVPUKESYUQODLRHWFJCSPTAWYUOVYTLBXIKGWACFVRAQERLYNBECMVVMQWMBDWCVDZNTADBLHKBFWUJYMIXDETUIEKMLLJTFGNZYFMXILORHOPZITVKXGRSNJDDZMHPGLHHMYQFQPYXACWOHGVGBPBFLKQIMGOCTCVSRZXOCAZBNJTNSVAJLJYZKEPESSQDDIG");
    tmp_msg_0.lat = 0.43898950547129145;
    tmp_msg_0.lon = 0.7460793635344103;
    tmp_msg_0.depth = 0.08754001900760544;
    tmp_msg_0.query_channel = 199U;
    tmp_msg_0.reply_channel = 90U;
    tmp_msg_0.transponder_delay = 58U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.24171888284169785;
    msg.y = 0.0077832534423075694;
    msg.var_x = 0.9123024151534894;
    msg.var_y = 0.6493430556488033;
    msg.distance = 0.9097347490395343;

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
    msg.setTimeStamp(0.3671953741687308);
    msg.setSource(34886U);
    msg.setSourceEntity(168U);
    msg.setDestination(31061U);
    msg.setDestinationEntity(206U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TVCSXHNXOJFJGAQFSMOAJLZNMKOMHXKXCURYRHLQKQTRDXXUTJOJRKFREJCDEGXESSUKOBBPLPFDQPMRRCJ");
    tmp_msg_0.lat = 0.13716198660805345;
    tmp_msg_0.lon = 0.08392934356830473;
    tmp_msg_0.depth = 0.9901035808878151;
    tmp_msg_0.query_channel = 58U;
    tmp_msg_0.reply_channel = 133U;
    tmp_msg_0.transponder_delay = 219U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.45481455984712715;
    msg.y = 0.861025348926024;
    msg.var_x = 0.4274391641294225;
    msg.var_y = 0.8722290072305907;
    msg.distance = 0.85120666584325;

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
    msg.setTimeStamp(0.06588282500618137);
    msg.setSource(29206U);
    msg.setSourceEntity(148U);
    msg.setDestination(20121U);
    msg.setDestinationEntity(125U);
    msg.state = 72U;

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
    msg.setTimeStamp(0.5723964324065008);
    msg.setSource(53118U);
    msg.setSourceEntity(150U);
    msg.setDestination(36299U);
    msg.setDestinationEntity(99U);
    msg.state = 51U;

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
    msg.setTimeStamp(0.5746897428987539);
    msg.setSource(25022U);
    msg.setSourceEntity(17U);
    msg.setDestination(10100U);
    msg.setDestinationEntity(152U);
    msg.state = 38U;

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
    msg.setTimeStamp(0.6097068225074539);
    msg.setSource(19191U);
    msg.setSourceEntity(107U);
    msg.setDestination(14528U);
    msg.setDestinationEntity(175U);
    msg.x = 0.7124509569969215;
    msg.y = 0.4516201584870715;
    msg.z = 0.08851082079581729;

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
    msg.setTimeStamp(0.04214467551306056);
    msg.setSource(31049U);
    msg.setSourceEntity(172U);
    msg.setDestination(34350U);
    msg.setDestinationEntity(101U);
    msg.x = 0.07850007544104842;
    msg.y = 0.6776461661027842;
    msg.z = 0.5418513605615735;

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
    msg.setTimeStamp(0.7588467581607515);
    msg.setSource(38003U);
    msg.setSourceEntity(90U);
    msg.setDestination(2425U);
    msg.setDestinationEntity(135U);
    msg.x = 0.6214236196200459;
    msg.y = 0.31501074556884445;
    msg.z = 0.7411561709373437;

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
    msg.setTimeStamp(0.553190908992805);
    msg.setSource(46462U);
    msg.setSourceEntity(28U);
    msg.setDestination(48059U);
    msg.setDestinationEntity(72U);
    msg.va = 0.16040526530140964;
    msg.aoa = 0.4478966787968396;
    msg.ssa = 0.751279379354179;

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
    msg.setTimeStamp(0.578113364891341);
    msg.setSource(1551U);
    msg.setSourceEntity(231U);
    msg.setDestination(7496U);
    msg.setDestinationEntity(84U);
    msg.va = 0.384129074209153;
    msg.aoa = 0.7585009130745132;
    msg.ssa = 0.7429942917810394;

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
    msg.setTimeStamp(0.3024812058341557);
    msg.setSource(18421U);
    msg.setSourceEntity(243U);
    msg.setDestination(12007U);
    msg.setDestinationEntity(218U);
    msg.va = 0.2888297838779865;
    msg.aoa = 0.19344102281381315;
    msg.ssa = 0.1628118834559915;

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
    msg.setTimeStamp(0.5310421145216616);
    msg.setSource(28577U);
    msg.setSourceEntity(73U);
    msg.setDestination(31007U);
    msg.setDestinationEntity(60U);
    msg.value = 0.6009335749970024;

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
    msg.setTimeStamp(0.13686927415660732);
    msg.setSource(29965U);
    msg.setSourceEntity(40U);
    msg.setDestination(20597U);
    msg.setDestinationEntity(88U);
    msg.value = 0.2918886925966544;

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
    msg.setTimeStamp(0.24925486145125564);
    msg.setSource(32789U);
    msg.setSourceEntity(122U);
    msg.setDestination(6133U);
    msg.setDestinationEntity(72U);
    msg.value = 0.7544903550279438;

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
    msg.setTimeStamp(0.18239268529929709);
    msg.setSource(11143U);
    msg.setSourceEntity(110U);
    msg.setDestination(57462U);
    msg.setDestinationEntity(31U);
    msg.value = 0.6995881483538346;
    msg.z_units = 185U;

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
    msg.setTimeStamp(0.7843122982810401);
    msg.setSource(24984U);
    msg.setSourceEntity(166U);
    msg.setDestination(60099U);
    msg.setDestinationEntity(70U);
    msg.value = 0.10639108162517652;
    msg.z_units = 13U;

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
    msg.setTimeStamp(0.4158291623050874);
    msg.setSource(18623U);
    msg.setSourceEntity(121U);
    msg.setDestination(46544U);
    msg.setDestinationEntity(49U);
    msg.value = 0.3742211909758777;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.10883426667380325);
    msg.setSource(7412U);
    msg.setSourceEntity(32U);
    msg.setDestination(29135U);
    msg.setDestinationEntity(145U);
    msg.value = 0.16895725365079717;
    msg.speed_units = 180U;

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
    msg.setTimeStamp(0.16658573735082793);
    msg.setSource(15899U);
    msg.setSourceEntity(144U);
    msg.setDestination(57614U);
    msg.setDestinationEntity(138U);
    msg.value = 0.5096722555683897;
    msg.speed_units = 204U;

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
    msg.setTimeStamp(0.9285879029703391);
    msg.setSource(16094U);
    msg.setSourceEntity(101U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(191U);
    msg.value = 0.5181830926655835;
    msg.speed_units = 134U;

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
    msg.setTimeStamp(0.7816307022571795);
    msg.setSource(19978U);
    msg.setSourceEntity(119U);
    msg.setDestination(47757U);
    msg.setDestinationEntity(14U);
    msg.value = 0.5388418411902852;

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
    msg.setTimeStamp(0.3407355864234911);
    msg.setSource(20795U);
    msg.setSourceEntity(52U);
    msg.setDestination(19293U);
    msg.setDestinationEntity(156U);
    msg.value = 0.9783217247940124;

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
    msg.setTimeStamp(0.10654899224698866);
    msg.setSource(24820U);
    msg.setSourceEntity(35U);
    msg.setDestination(61428U);
    msg.setDestinationEntity(39U);
    msg.value = 0.34036897427750423;

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
    msg.setTimeStamp(0.6566783282836218);
    msg.setSource(30024U);
    msg.setSourceEntity(19U);
    msg.setDestination(30732U);
    msg.setDestinationEntity(9U);
    msg.value = 0.28011681615423334;

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
    msg.setTimeStamp(0.057235094566251754);
    msg.setSource(7262U);
    msg.setSourceEntity(145U);
    msg.setDestination(53907U);
    msg.setDestinationEntity(139U);
    msg.value = 0.04325340465585659;

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
    msg.setTimeStamp(0.47000380041808754);
    msg.setSource(39007U);
    msg.setSourceEntity(133U);
    msg.setDestination(27871U);
    msg.setDestinationEntity(213U);
    msg.value = 0.2932750513856396;

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
    msg.setTimeStamp(0.2892996770588523);
    msg.setSource(21800U);
    msg.setSourceEntity(92U);
    msg.setDestination(54850U);
    msg.setDestinationEntity(225U);
    msg.value = 0.04320414588970445;

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
    msg.setTimeStamp(0.34867010382617547);
    msg.setSource(13787U);
    msg.setSourceEntity(162U);
    msg.setDestination(47148U);
    msg.setDestinationEntity(199U);
    msg.value = 0.1224241910517242;

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
    msg.setTimeStamp(0.4873477729461908);
    msg.setSource(65133U);
    msg.setSourceEntity(126U);
    msg.setDestination(36046U);
    msg.setDestinationEntity(91U);
    msg.value = 0.4838094078191688;

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
    msg.setTimeStamp(0.44065983663875674);
    msg.setSource(45122U);
    msg.setSourceEntity(12U);
    msg.setDestination(32642U);
    msg.setDestinationEntity(229U);
    msg.path_ref = 765846869U;
    msg.start_lat = 0.6133005314474563;
    msg.start_lon = 0.496772131403559;
    msg.start_z = 0.7647688881083523;
    msg.start_z_units = 159U;
    msg.end_lat = 0.1942797137521075;
    msg.end_lon = 0.6246997060139385;
    msg.end_z = 0.32517681235568896;
    msg.end_z_units = 178U;
    msg.speed = 0.43617858350637206;
    msg.speed_units = 129U;
    msg.lradius = 0.9007252506691249;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.8790891158370537);
    msg.setSource(1582U);
    msg.setSourceEntity(195U);
    msg.setDestination(18852U);
    msg.setDestinationEntity(70U);
    msg.path_ref = 3746158002U;
    msg.start_lat = 0.3799004789449202;
    msg.start_lon = 0.6466641954215381;
    msg.start_z = 0.9081907899297411;
    msg.start_z_units = 183U;
    msg.end_lat = 0.5741749298411218;
    msg.end_lon = 0.05364440539881521;
    msg.end_z = 0.9309863454668266;
    msg.end_z_units = 241U;
    msg.speed = 0.7127462601006562;
    msg.speed_units = 240U;
    msg.lradius = 0.5763048504664378;
    msg.flags = 7U;

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
    msg.setTimeStamp(0.907646798293633);
    msg.setSource(22800U);
    msg.setSourceEntity(131U);
    msg.setDestination(13502U);
    msg.setDestinationEntity(67U);
    msg.path_ref = 3199952084U;
    msg.start_lat = 0.39512031291619565;
    msg.start_lon = 0.1589425279635669;
    msg.start_z = 0.04434419623673902;
    msg.start_z_units = 119U;
    msg.end_lat = 0.42929245744619104;
    msg.end_lon = 0.5910374596634645;
    msg.end_z = 0.5869633769067251;
    msg.end_z_units = 48U;
    msg.speed = 0.7851910749315213;
    msg.speed_units = 186U;
    msg.lradius = 0.8016509321497287;
    msg.flags = 179U;

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
    msg.setTimeStamp(0.436317421944712);
    msg.setSource(45299U);
    msg.setSourceEntity(60U);
    msg.setDestination(65054U);
    msg.setDestinationEntity(1U);
    msg.x = 0.995441018798194;
    msg.y = 0.11648674083634092;
    msg.z = 0.5462494175059228;
    msg.k = 0.15879775596750756;
    msg.m = 0.8037708118224309;
    msg.n = 0.5439762834946641;
    msg.flags = 192U;

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
    msg.setTimeStamp(0.35694611990989455);
    msg.setSource(62322U);
    msg.setSourceEntity(103U);
    msg.setDestination(6868U);
    msg.setDestinationEntity(45U);
    msg.x = 0.11266643693852663;
    msg.y = 0.6055905682153073;
    msg.z = 0.8643687430689178;
    msg.k = 0.20112212241732375;
    msg.m = 0.15704773058027932;
    msg.n = 0.6608262097618269;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.4707208219869494);
    msg.setSource(11759U);
    msg.setSourceEntity(145U);
    msg.setDestination(11431U);
    msg.setDestinationEntity(20U);
    msg.x = 0.5284307514312861;
    msg.y = 0.2107818478786304;
    msg.z = 0.000812335198108749;
    msg.k = 0.7192062324988968;
    msg.m = 0.6921266220371745;
    msg.n = 0.2983126009480538;
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
    msg.setTimeStamp(0.33321408882159764);
    msg.setSource(27066U);
    msg.setSourceEntity(100U);
    msg.setDestination(12346U);
    msg.setDestinationEntity(104U);
    msg.value = 0.13946101238697772;

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
    msg.setTimeStamp(0.3130153358320966);
    msg.setSource(45993U);
    msg.setSourceEntity(154U);
    msg.setDestination(52085U);
    msg.setDestinationEntity(160U);
    msg.value = 0.1297078228024493;

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
    msg.setTimeStamp(0.8176654654476408);
    msg.setSource(56861U);
    msg.setSourceEntity(123U);
    msg.setDestination(57910U);
    msg.setDestinationEntity(52U);
    msg.value = 0.39347298910649064;

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
    msg.setTimeStamp(0.11118131023013111);
    msg.setSource(48799U);
    msg.setSourceEntity(45U);
    msg.setDestination(19288U);
    msg.setDestinationEntity(161U);
    msg.u = 0.2818931164038416;
    msg.v = 0.34210281179939706;
    msg.w = 0.8800728034691165;
    msg.p = 0.8328176131909131;
    msg.q = 0.06314916722277986;
    msg.r = 0.7252899813615269;
    msg.flags = 39U;

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
    msg.setTimeStamp(0.7606807024372231);
    msg.setSource(9643U);
    msg.setSourceEntity(175U);
    msg.setDestination(8829U);
    msg.setDestinationEntity(38U);
    msg.u = 0.26571166112216593;
    msg.v = 0.65861531004382;
    msg.w = 0.9034548306175263;
    msg.p = 0.736299886235402;
    msg.q = 0.9410296780289473;
    msg.r = 0.7727478152090016;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.43012212712549536);
    msg.setSource(2793U);
    msg.setSourceEntity(149U);
    msg.setDestination(2405U);
    msg.setDestinationEntity(14U);
    msg.u = 0.7302925084542599;
    msg.v = 0.04525372281036022;
    msg.w = 0.6309278119477705;
    msg.p = 0.5292274743445208;
    msg.q = 0.14198001818718597;
    msg.r = 0.4498776627512836;
    msg.flags = 182U;

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
    msg.setTimeStamp(0.17878731332257847);
    msg.setSource(23348U);
    msg.setSourceEntity(88U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(248U);
    msg.path_ref = 3199290900U;
    msg.start_lat = 0.8389954187139192;
    msg.start_lon = 0.012946988436483342;
    msg.start_z = 0.6144237329387475;
    msg.start_z_units = 251U;
    msg.end_lat = 0.7286615394175221;
    msg.end_lon = 0.8863056754477798;
    msg.end_z = 0.22614118570299147;
    msg.end_z_units = 76U;
    msg.lradius = 0.44139234458844534;
    msg.flags = 171U;
    msg.x = 0.1025958204666565;
    msg.y = 0.7869092280322479;
    msg.z = 0.8007559195171774;
    msg.vx = 0.5658288136263474;
    msg.vy = 0.11285768678186425;
    msg.vz = 0.6865468902572648;
    msg.course_error = 0.36254588190701775;
    msg.eta = 21332U;

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
    msg.setTimeStamp(0.6072838736209477);
    msg.setSource(49606U);
    msg.setSourceEntity(95U);
    msg.setDestination(6805U);
    msg.setDestinationEntity(240U);
    msg.path_ref = 624126391U;
    msg.start_lat = 0.12185625598970162;
    msg.start_lon = 0.4185554806478915;
    msg.start_z = 0.07112369282611286;
    msg.start_z_units = 124U;
    msg.end_lat = 0.7606725898799812;
    msg.end_lon = 0.9899266297373498;
    msg.end_z = 0.5667219561090395;
    msg.end_z_units = 142U;
    msg.lradius = 0.14244774513021552;
    msg.flags = 52U;
    msg.x = 0.3054228743526013;
    msg.y = 0.11567627907516886;
    msg.z = 0.6576313425453625;
    msg.vx = 0.37307755964061406;
    msg.vy = 0.7901626930545355;
    msg.vz = 0.08386768913147291;
    msg.course_error = 0.7768254066175255;
    msg.eta = 44674U;

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
    msg.setTimeStamp(0.532515945103154);
    msg.setSource(55831U);
    msg.setSourceEntity(54U);
    msg.setDestination(12253U);
    msg.setDestinationEntity(115U);
    msg.path_ref = 1255761496U;
    msg.start_lat = 0.31864949209552806;
    msg.start_lon = 0.4487347512534775;
    msg.start_z = 0.2552630354970915;
    msg.start_z_units = 80U;
    msg.end_lat = 0.22706677006366915;
    msg.end_lon = 0.16341310280645194;
    msg.end_z = 0.6484779646312422;
    msg.end_z_units = 157U;
    msg.lradius = 0.38478409483160225;
    msg.flags = 101U;
    msg.x = 0.8794482651972796;
    msg.y = 0.11777287412562609;
    msg.z = 0.7628003663272744;
    msg.vx = 0.40771953144118256;
    msg.vy = 0.10795929855993225;
    msg.vz = 0.7363975830610576;
    msg.course_error = 0.755194239793595;
    msg.eta = 50665U;

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
    msg.setTimeStamp(0.7538620799209739);
    msg.setSource(8429U);
    msg.setSourceEntity(135U);
    msg.setDestination(12343U);
    msg.setDestinationEntity(94U);
    msg.k = 0.7065570329809246;
    msg.m = 0.012999158868457483;
    msg.n = 0.8788059137448253;

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
    msg.setTimeStamp(0.9482445984845599);
    msg.setSource(33212U);
    msg.setSourceEntity(15U);
    msg.setDestination(58188U);
    msg.setDestinationEntity(28U);
    msg.k = 0.6565565491300968;
    msg.m = 0.9077200615333133;
    msg.n = 0.06271280955209346;

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
    msg.setTimeStamp(0.16884443871311017);
    msg.setSource(59620U);
    msg.setSourceEntity(143U);
    msg.setDestination(9118U);
    msg.setDestinationEntity(11U);
    msg.k = 0.8522612317510828;
    msg.m = 0.05278997855643608;
    msg.n = 0.1772440365922472;

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
    msg.setTimeStamp(0.5725961414499);
    msg.setSource(37836U);
    msg.setSourceEntity(251U);
    msg.setDestination(34267U);
    msg.setDestinationEntity(22U);
    msg.p = 0.15804804374046255;
    msg.i = 0.6165268289545903;
    msg.d = 0.09329339482347987;
    msg.a = 0.7077232191618111;

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
    msg.setTimeStamp(0.9476318668342725);
    msg.setSource(39062U);
    msg.setSourceEntity(135U);
    msg.setDestination(50807U);
    msg.setDestinationEntity(199U);
    msg.p = 0.3298024152945136;
    msg.i = 0.5693526104807604;
    msg.d = 0.723318768263628;
    msg.a = 0.35072799959016454;

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
    msg.setTimeStamp(0.3560636143968481);
    msg.setSource(40253U);
    msg.setSourceEntity(25U);
    msg.setDestination(11U);
    msg.setDestinationEntity(18U);
    msg.p = 0.14253104052766064;
    msg.i = 0.007067274116018374;
    msg.d = 0.061184257230839534;
    msg.a = 0.892690295713084;

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
    msg.setTimeStamp(0.1717714725573224);
    msg.setSource(1586U);
    msg.setSourceEntity(62U);
    msg.setDestination(10449U);
    msg.setDestinationEntity(205U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.2910830104433092);
    msg.setSource(31839U);
    msg.setSourceEntity(29U);
    msg.setDestination(5838U);
    msg.setDestinationEntity(17U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.48206633261755205);
    msg.setSource(24259U);
    msg.setSourceEntity(7U);
    msg.setDestination(33936U);
    msg.setDestinationEntity(131U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.9476510625034732);
    msg.setSource(51622U);
    msg.setSourceEntity(180U);
    msg.setDestination(21545U);
    msg.setDestinationEntity(178U);
    msg.x = 0.19701178115658524;
    msg.y = 0.4776547954012902;
    msg.z = 0.6076807172708748;
    msg.vx = 0.13020535356868357;
    msg.vy = 0.7800884488706162;
    msg.vz = 0.19118044700762915;
    msg.ax = 0.55868849761549;
    msg.ay = 0.42919073359527316;
    msg.az = 0.6671271690002136;
    msg.flags = 50797U;

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
    msg.setTimeStamp(0.6846936204662138);
    msg.setSource(55057U);
    msg.setSourceEntity(34U);
    msg.setDestination(35051U);
    msg.setDestinationEntity(214U);
    msg.x = 0.8306534107118584;
    msg.y = 0.4975229085047542;
    msg.z = 0.6709941063224114;
    msg.vx = 0.34926971002484386;
    msg.vy = 0.7647582609467164;
    msg.vz = 0.9278930968535117;
    msg.ax = 0.9533904843395657;
    msg.ay = 0.669980111052831;
    msg.az = 0.232001912495578;
    msg.flags = 63397U;

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
    msg.setTimeStamp(0.6461672828749538);
    msg.setSource(53202U);
    msg.setSourceEntity(142U);
    msg.setDestination(62178U);
    msg.setDestinationEntity(254U);
    msg.x = 0.8654222381573343;
    msg.y = 0.8139677482606396;
    msg.z = 0.857122041532412;
    msg.vx = 0.9341731224643518;
    msg.vy = 0.15960443300718874;
    msg.vz = 0.8561571471781622;
    msg.ax = 0.2671521751723479;
    msg.ay = 0.8180705181233732;
    msg.az = 0.16686136435021282;
    msg.flags = 64685U;

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
    msg.setTimeStamp(0.48617323237841803);
    msg.setSource(44613U);
    msg.setSourceEntity(35U);
    msg.setDestination(10376U);
    msg.setDestinationEntity(76U);
    msg.value = 0.12787548763112744;

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
    msg.setTimeStamp(0.4559016659396252);
    msg.setSource(41195U);
    msg.setSourceEntity(33U);
    msg.setDestination(1006U);
    msg.setDestinationEntity(192U);
    msg.value = 0.800301657607949;

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
    msg.setTimeStamp(0.6151822135500732);
    msg.setSource(55200U);
    msg.setSourceEntity(157U);
    msg.setDestination(19056U);
    msg.setDestinationEntity(99U);
    msg.value = 0.7202432602616513;

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
    msg.setTimeStamp(0.26255851083977033);
    msg.setSource(25604U);
    msg.setSourceEntity(142U);
    msg.setDestination(11764U);
    msg.setDestinationEntity(162U);
    msg.timeout = 51929U;
    msg.lat = 0.8915758760925345;
    msg.lon = 0.26716841564329497;
    msg.z = 0.27536738551891093;
    msg.z_units = 38U;
    msg.speed = 0.4560150735092753;
    msg.speed_units = 56U;
    msg.roll = 0.5262743224761137;
    msg.pitch = 0.8957189359979567;
    msg.yaw = 0.8206122390675719;
    msg.custom.assign("WUFCJVZHQPRVIXOLJVYNPHXWNC");

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
    msg.setTimeStamp(0.5174176001272616);
    msg.setSource(6876U);
    msg.setSourceEntity(185U);
    msg.setDestination(29306U);
    msg.setDestinationEntity(15U);
    msg.timeout = 28402U;
    msg.lat = 0.1256661075784996;
    msg.lon = 0.7699622051791325;
    msg.z = 0.49350272266095196;
    msg.z_units = 74U;
    msg.speed = 0.28523326942082117;
    msg.speed_units = 209U;
    msg.roll = 0.2365663335766861;
    msg.pitch = 0.9009251509007755;
    msg.yaw = 0.7027009826675689;
    msg.custom.assign("TPNFIXTMNOEEPJYWDCXJDZGFQRHRHEZPJPSSETCUNKJOZABJLAMQINIFVYWELKNHUUSZPUOROVZEERDACGZSIQTZADI");

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
    msg.setTimeStamp(0.512477441199725);
    msg.setSource(41836U);
    msg.setSourceEntity(67U);
    msg.setDestination(16422U);
    msg.setDestinationEntity(118U);
    msg.timeout = 35589U;
    msg.lat = 0.44541593340317864;
    msg.lon = 0.15731391054688337;
    msg.z = 0.3872855212563523;
    msg.z_units = 218U;
    msg.speed = 0.9027429762708968;
    msg.speed_units = 143U;
    msg.roll = 0.18259236051648498;
    msg.pitch = 0.1393101428725656;
    msg.yaw = 0.42784708642182523;
    msg.custom.assign("PYJJKKNBFANATYESHBSQRYWLWFLBDZWILZAFZLZFSYZJSPTZGBHGMQVVWPKCWCCJXDILQKVWQDRPMGRDZMTABSCIVMEHVFRULKEXKXWOTHEXXBUJKJTOMVNIUDUORDUCKGPVHNNYEMSDVY");

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
    msg.setTimeStamp(0.499961188602995);
    msg.setSource(30324U);
    msg.setSourceEntity(63U);
    msg.setDestination(33060U);
    msg.setDestinationEntity(3U);
    msg.timeout = 11382U;
    msg.lat = 0.7089637486508035;
    msg.lon = 0.8089474164880096;
    msg.z = 0.23025953517534148;
    msg.z_units = 151U;
    msg.speed = 0.05407632331170065;
    msg.speed_units = 45U;
    msg.duration = 7776U;
    msg.radius = 0.3869627461232882;
    msg.flags = 227U;
    msg.custom.assign("XJPHSMHBXDDYOAEZNYMGDNIOCUKDPIHAIQVTRJFLRGWYSGCCA");

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
    msg.setTimeStamp(0.9382772976340251);
    msg.setSource(32377U);
    msg.setSourceEntity(124U);
    msg.setDestination(26393U);
    msg.setDestinationEntity(99U);
    msg.timeout = 35517U;
    msg.lat = 0.2587288472529935;
    msg.lon = 0.23386454443632898;
    msg.z = 0.6573449448387934;
    msg.z_units = 243U;
    msg.speed = 0.20881714377333693;
    msg.speed_units = 225U;
    msg.duration = 21513U;
    msg.radius = 0.10473739976608787;
    msg.flags = 93U;
    msg.custom.assign("DMECQHSKYOYBCTMVQZXHTTJJGQAFLOIAOYPFMLUFFKNSBWYMTELGCNGCAUHXBRVMV");

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
    msg.setTimeStamp(0.22504216146191436);
    msg.setSource(38867U);
    msg.setSourceEntity(188U);
    msg.setDestination(35652U);
    msg.setDestinationEntity(9U);
    msg.timeout = 6844U;
    msg.lat = 0.5625611721188333;
    msg.lon = 0.8427920215765348;
    msg.z = 0.02538490677138938;
    msg.z_units = 169U;
    msg.speed = 0.35040990558349316;
    msg.speed_units = 214U;
    msg.duration = 15268U;
    msg.radius = 0.2982978976758831;
    msg.flags = 78U;
    msg.custom.assign("XONQESJEAMTWPZRLDXDGXMRQKGNAZIAWRAJXBOIBMKBGBFMNKNVYJEKDKLLPIDMW");

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
    msg.setTimeStamp(0.5447986847678994);
    msg.setSource(38698U);
    msg.setSourceEntity(29U);
    msg.setDestination(21523U);
    msg.setDestinationEntity(244U);
    msg.custom.assign("PAOYBVLOBOQWBHXEFIZYYYKWHVLLRGBPVNDMFGFLXAKEXQQMJFEXBGXETLCVDJIWWQIRJCZSBZWACBIQREO");

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
    msg.setTimeStamp(0.027457858645391853);
    msg.setSource(57937U);
    msg.setSourceEntity(150U);
    msg.setDestination(40394U);
    msg.setDestinationEntity(88U);
    msg.custom.assign("MJRFONNMWNFWNKRRVBCDLTHEJYFLHZDLSIDISZGDFYTCWTNTCODAZCIONSKPVMMTNJWAXRMFPVNQPLASPSGOVEEXOJXJILYPAVMEROHOACUTBG");

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
    msg.setTimeStamp(0.23599362006012792);
    msg.setSource(8916U);
    msg.setSourceEntity(167U);
    msg.setDestination(3789U);
    msg.setDestinationEntity(229U);
    msg.custom.assign("EUROSTRUTKRWPQMDTJCAKYLENTYQRLSLHUPXUQIBSGOFNDTMHOCICNIKZZKAWIWBXXRJPYWZJVPHHXYMKCLUNFFTLEXMPLVPGBK");

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
    msg.setTimeStamp(0.9808721553049996);
    msg.setSource(63400U);
    msg.setSourceEntity(214U);
    msg.setDestination(58742U);
    msg.setDestinationEntity(39U);
    msg.timeout = 18326U;
    msg.lat = 0.2818603862068594;
    msg.lon = 0.8036098742202584;
    msg.z = 0.44796555175061414;
    msg.z_units = 201U;
    msg.duration = 31069U;
    msg.speed = 0.5556633452822827;
    msg.speed_units = 44U;
    msg.type = 69U;
    msg.radius = 0.5383423019795638;
    msg.length = 0.9086657333419358;
    msg.bearing = 0.18869203043624505;
    msg.direction = 114U;
    msg.custom.assign("SZYPKQHEVTLXPUPOYZTBJWSEOUGGFLYLXQUICKXGBXTTDWDPOWNSHDRSQZZDZZKQAMIGNBZWSTRXXIADMKLKINOJASBFFCMRQE");

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
    msg.setTimeStamp(0.5811980632200344);
    msg.setSource(63863U);
    msg.setSourceEntity(25U);
    msg.setDestination(13385U);
    msg.setDestinationEntity(97U);
    msg.timeout = 56424U;
    msg.lat = 0.7503387768098144;
    msg.lon = 0.04652386799583896;
    msg.z = 0.7429334732462908;
    msg.z_units = 158U;
    msg.duration = 50427U;
    msg.speed = 0.012252484787023676;
    msg.speed_units = 254U;
    msg.type = 216U;
    msg.radius = 0.4040762366736388;
    msg.length = 0.14464775060668522;
    msg.bearing = 0.22733796531111228;
    msg.direction = 21U;
    msg.custom.assign("DPKCQDJFFUAMIQTFPDRJIQBXJPXVOOGKYNUHLLJUVTYONLKCJTRCJWOXGDPHIZSQDBWMLHEYPLAFWNVKHSFSCRPKODJEEPUKVUIYEMIGDDDKNUUFRIKAYMAXRNIECVAEGPHWSMWZESSIVSOZBSGEHLLEFBMVBKTZJQOTNZVZQUMXWQOUTZXHLWTMUHFRJKPRIMQYZBFRWYWMZGN");

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
    msg.setTimeStamp(0.731366304344618);
    msg.setSource(45303U);
    msg.setSourceEntity(214U);
    msg.setDestination(34535U);
    msg.setDestinationEntity(179U);
    msg.timeout = 45435U;
    msg.lat = 0.9890086190460092;
    msg.lon = 0.474915237680411;
    msg.z = 0.3495160328769459;
    msg.z_units = 220U;
    msg.duration = 9594U;
    msg.speed = 0.4165058947293423;
    msg.speed_units = 254U;
    msg.type = 49U;
    msg.radius = 0.9337629273065501;
    msg.length = 0.7519041851640038;
    msg.bearing = 0.1249741379925986;
    msg.direction = 141U;
    msg.custom.assign("CGPIAXYQZMPYLGQKUXEOYCBLCJFMKHZDZTTRCHBTRFZTXFUYAZVMUGMGLHNVNICNQQAEJFBQOTSVFZTCVNUVNNSRIIEQLJBJQBRJYMMBLMYDGASOEJWOFPJUVHXQZLTKWHUDEXUOTKYEALXO");

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
    msg.setTimeStamp(0.7490846247840011);
    msg.setSource(13706U);
    msg.setSourceEntity(203U);
    msg.setDestination(13139U);
    msg.setDestinationEntity(203U);
    msg.duration = 49099U;
    msg.custom.assign("RETXLPXQABHOAHMUCZYZZEPAZJRFJAFIQYOROGIPMNYBMIDJHTKDKHXNTSJHWDJGWNAXQUPPEFOHKXTJLBYPNIRUKJVBCHWRMMYDMVIHWVEYSWVCKYYGEVZ");

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
    msg.setTimeStamp(0.4686314523667029);
    msg.setSource(54276U);
    msg.setSourceEntity(145U);
    msg.setDestination(17248U);
    msg.setDestinationEntity(234U);
    msg.duration = 24642U;
    msg.custom.assign("IBVLNRDKXONMFGTVYDEANOBKIUX");

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
    msg.setTimeStamp(0.5883159067161483);
    msg.setSource(55889U);
    msg.setSourceEntity(29U);
    msg.setDestination(63157U);
    msg.setDestinationEntity(164U);
    msg.duration = 46177U;
    msg.custom.assign("LBYDKSOTPJUYZFFVVCPHVKDLVXIFVNCLBRNIUNXEAGWPFCWEJMSKSIOSSXFWRKYQVKVJAHNQRWUDEGQBOBRFXICARRMLWQOQBBDPZCVPNOCMBHICQPMYOAUZDLGUSZTYCTK");

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
    msg.setTimeStamp(0.05637155795702797);
    msg.setSource(48288U);
    msg.setSourceEntity(79U);
    msg.setDestination(1452U);
    msg.setDestinationEntity(165U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4047271608311851;
    tmp_msg_0.speed_units = 69U;
    msg.control.set(tmp_msg_0);
    msg.duration = 28603U;
    msg.custom.assign("APDWYXNCXLVYQSRPDXSNMBJUHADBFZLMQBXICYONCUXPVXPOIRAULNSVQYHJFDGYRMETCWRVMVGMBGPGKBLWWKLHQVMHDCJSZEOJDKXFIKFGJLETAIKDPBHVUTZVCDHEBQFZDMYJQTRUKZSTMUEPWFSPRIWZSSIOEUHOVAJKQZCFOMTARCPABFOELYYIJCNIJWNNAYIR");

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
    msg.setTimeStamp(0.5666782633138076);
    msg.setSource(15268U);
    msg.setSourceEntity(230U);
    msg.setDestination(30153U);
    msg.setDestinationEntity(54U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.6226551827629779;
    msg.control.set(tmp_msg_0);
    msg.duration = 44818U;
    msg.custom.assign("THGWIMEUIPPCPHWSCEQTFQSDKRBQJUVAHIDMCZOVBGYKEJXNOCPXXAIBGFOHPFBKDAKQGFPOKVHHDSAWLKNFFRMKILMCNJXXZORDWQOREUIONLBRTJGJBQQLUBFKCZXTQAJLTGKPXUSTHJJDMDVTGBCHWYVLFIPSSAZEYNMSLRPLYZZXNZTUDCMNMVCGEUWVYFYODTTRRHLKXFLBUWVAECXJWEIESOMZBEPNUNQJZVSUNZYDWRVA");

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
    msg.setTimeStamp(0.15963693658381184);
    msg.setSource(14663U);
    msg.setSourceEntity(147U);
    msg.setDestination(30134U);
    msg.setDestinationEntity(204U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3320152846U;
    tmp_msg_0.start_lat = 0.40184485154734717;
    tmp_msg_0.start_lon = 0.2842419645466292;
    tmp_msg_0.start_z = 0.6608699503431561;
    tmp_msg_0.start_z_units = 228U;
    tmp_msg_0.end_lat = 0.3492838166786497;
    tmp_msg_0.end_lon = 0.4972233065213518;
    tmp_msg_0.end_z = 0.32994205067221627;
    tmp_msg_0.end_z_units = 78U;
    tmp_msg_0.speed = 0.6965441258669486;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.lradius = 0.5605061274919286;
    tmp_msg_0.flags = 177U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12370U;
    msg.custom.assign("BDAHYSDMWYSZSUNSAAGHEPXUZAMFWPIVZBQDVEDYYBHCBZRDDXQIWSBAQTMINZYLDHUJQNXELIJBQKOUMNROIOFCFRMFHONTFXVHXGISRSJTWXJAJYJMRWCYGKLGJEKUFVKKY");

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
    msg.setTimeStamp(0.12261976176173339);
    msg.setSource(8043U);
    msg.setSourceEntity(97U);
    msg.setDestination(17199U);
    msg.setDestinationEntity(31U);
    msg.timeout = 57749U;
    msg.lat = 0.35282073220416865;
    msg.lon = 0.02279661953361467;
    msg.z = 0.3165307946096899;
    msg.z_units = 252U;
    msg.speed = 0.9004970814323955;
    msg.speed_units = 216U;
    msg.bearing = 0.014357028637391633;
    msg.cross_angle = 0.09461629455832077;
    msg.width = 0.06883988224193138;
    msg.length = 0.9505768614935415;
    msg.hstep = 0.903393596745457;
    msg.coff = 77U;
    msg.alternation = 121U;
    msg.flags = 123U;
    msg.custom.assign("RNLEXOZUBVKPDLVZUDJWGVJWZJPKNIPLEKVLTNXHHBAMMVOQXZHKCERUOHYQLGDAMFXDKNILPGNRASHEEJWZJGMIBIGRBPBHCSHQXSMIXGTXQVNAYMNZIAZYHMHPNUCGTOKYQEOFAUWDRGIUYZDQBIAVGFKX");

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
    msg.setTimeStamp(0.9028184001221006);
    msg.setSource(3742U);
    msg.setSourceEntity(147U);
    msg.setDestination(41078U);
    msg.setDestinationEntity(4U);
    msg.timeout = 12179U;
    msg.lat = 0.001446998794668919;
    msg.lon = 0.20552418034571673;
    msg.z = 0.3649193278185757;
    msg.z_units = 9U;
    msg.speed = 0.7324211432323576;
    msg.speed_units = 92U;
    msg.bearing = 0.5946996064245711;
    msg.cross_angle = 0.8229477939952118;
    msg.width = 0.9351630375690289;
    msg.length = 0.053840620338511225;
    msg.hstep = 0.20603448940331925;
    msg.coff = 151U;
    msg.alternation = 211U;
    msg.flags = 148U;
    msg.custom.assign("SMVAYCQZPQKKNBLNGVZWQDAGIRTLYFBCEP");

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
    msg.setTimeStamp(0.4671100211021484);
    msg.setSource(34856U);
    msg.setSourceEntity(55U);
    msg.setDestination(12209U);
    msg.setDestinationEntity(204U);
    msg.timeout = 4687U;
    msg.lat = 0.09994074775850015;
    msg.lon = 0.6328032846665138;
    msg.z = 0.0037883631382501504;
    msg.z_units = 64U;
    msg.speed = 0.11958605226291885;
    msg.speed_units = 55U;
    msg.bearing = 0.49919728827469934;
    msg.cross_angle = 0.3663976703431421;
    msg.width = 0.13720816380442047;
    msg.length = 0.9373535445814297;
    msg.hstep = 0.47620309055745513;
    msg.coff = 87U;
    msg.alternation = 29U;
    msg.flags = 222U;
    msg.custom.assign("TNZIYIPRAKCVPYEZLYUZBHSCCXTLV");

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
    msg.setTimeStamp(0.9925273683827481);
    msg.setSource(37342U);
    msg.setSourceEntity(150U);
    msg.setDestination(24622U);
    msg.setDestinationEntity(39U);
    msg.timeout = 3615U;
    msg.lat = 0.5811047232096839;
    msg.lon = 0.9498554400240802;
    msg.z = 0.33074318176005546;
    msg.z_units = 226U;
    msg.speed = 0.8824220770869388;
    msg.speed_units = 26U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.841841612875965;
    tmp_msg_0.y = 0.6782143090116675;
    tmp_msg_0.z = 0.566494143130661;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NOPLFYLEQXGTPIIFZZEWZDEYMEUFKRYNMWRKCNXQAJUJJVAKCDCAVPJVMGBMBSLXBIUTRPHQBMQUOIGXSPRYATUMCKOHQUXPHVCKLBISGICEKWZACPBXJBVACIRWGDSSHAQXFSDHOSZPLNNCBUDNWETFNHRGZXFHBHUEWRQOWJNDKMZGAAKQMTZNIHLYDJERDPWOYJ");

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
    msg.setTimeStamp(0.7461675462886878);
    msg.setSource(15983U);
    msg.setSourceEntity(240U);
    msg.setDestination(39390U);
    msg.setDestinationEntity(14U);
    msg.timeout = 3036U;
    msg.lat = 0.5465927813418454;
    msg.lon = 0.34056363011677937;
    msg.z = 0.21160337065167545;
    msg.z_units = 103U;
    msg.speed = 0.7714248053372639;
    msg.speed_units = 15U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9169600401405;
    tmp_msg_0.y = 0.8553072797752066;
    tmp_msg_0.z = 0.6422670035200712;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SJYRANTONUKSHYMRTFMECSHGDFJWAQHGGUWLZTVKVQEKTZZDBFDEQOKSMJPKFGKDPPDIZDVQRDGQUIFQZLNNYHWRSFCWLJRMBMPGSBYORYIYXUKWXHNLIZZCOFWATAWEXUKXMZUEUCJBDVCOHSXBSFZLWLOCFBTUILTQJLVAVPJCUPNPLVAFHTTCZMKROIJCQEOHXBORVGNPEDNBLHSREVBIWYRXAMNIYGMAQCE");

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
    msg.setTimeStamp(0.4447092585551433);
    msg.setSource(36769U);
    msg.setSourceEntity(239U);
    msg.setDestination(15931U);
    msg.setDestinationEntity(109U);
    msg.timeout = 63828U;
    msg.lat = 0.8708697296660876;
    msg.lon = 0.46609107643722125;
    msg.z = 0.21342863862799555;
    msg.z_units = 221U;
    msg.speed = 0.38571649056020907;
    msg.speed_units = 69U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7436840330349311;
    tmp_msg_0.y = 0.9159183674458969;
    tmp_msg_0.z = 0.3454453969414929;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZNVIEUKPWOAZRSFKDCYQDBYYHHNWXMHVCTTGJJASIPGGXSKFWGPAWSSSIIOMARJUXZTEPTYFATRJKHZQIKXNODCRUSEUBGZUSKEDYFKTNQHQMFNMYUBVATYEDOQLMGFMINPRUDBJFWGFIZRFBXTULPBOHXYDQHLLWCLXGVPPGLUOLBCMMJZEWHMXZRZROVNXYBCLHVERQHSFLXJIMEQNAOPCOJURVEJPVWGAWNBCKZJKQLAVCYWQVCITN");

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
    msg.setTimeStamp(0.7973485615061136);
    msg.setSource(58618U);
    msg.setSourceEntity(191U);
    msg.setDestination(55275U);
    msg.setDestinationEntity(185U);
    msg.x = 0.32559756395884143;
    msg.y = 0.7201772455381713;
    msg.z = 0.29986670085796574;

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
    msg.setTimeStamp(0.550329126863702);
    msg.setSource(48909U);
    msg.setSourceEntity(163U);
    msg.setDestination(1384U);
    msg.setDestinationEntity(81U);
    msg.x = 0.7449933266620142;
    msg.y = 0.09390267620285342;
    msg.z = 0.252544191926824;

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
    msg.setTimeStamp(0.725421062662119);
    msg.setSource(19957U);
    msg.setSourceEntity(112U);
    msg.setDestination(3567U);
    msg.setDestinationEntity(122U);
    msg.x = 0.5609137472302936;
    msg.y = 0.9776414019956139;
    msg.z = 0.14799042952448482;

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
    msg.setTimeStamp(0.5211352907395551);
    msg.setSource(13593U);
    msg.setSourceEntity(252U);
    msg.setDestination(3933U);
    msg.setDestinationEntity(136U);
    msg.timeout = 38963U;
    msg.lat = 0.2976402458853409;
    msg.lon = 0.16285640050922512;
    msg.z = 0.8203919327994909;
    msg.z_units = 235U;
    msg.amplitude = 0.6357169751225301;
    msg.pitch = 0.6699376030302784;
    msg.speed = 0.2625701228797055;
    msg.speed_units = 80U;
    msg.custom.assign("IIURIZTHDSVGHBZCCSRPEMAVDWWRPJMYESLJNXCQRZDXABSFDH");

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
    msg.setTimeStamp(0.6396294818576157);
    msg.setSource(30292U);
    msg.setSourceEntity(45U);
    msg.setDestination(993U);
    msg.setDestinationEntity(213U);
    msg.timeout = 40447U;
    msg.lat = 0.03189779371965862;
    msg.lon = 0.22408176349730802;
    msg.z = 0.11496567245558398;
    msg.z_units = 239U;
    msg.amplitude = 0.8500104310156676;
    msg.pitch = 0.9960263580223043;
    msg.speed = 0.7978931804743011;
    msg.speed_units = 245U;
    msg.custom.assign("IRQJGNEOPXYCTVRWAVTXJFSTZGZTYUOTADA");

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
    msg.setTimeStamp(0.9334516658024994);
    msg.setSource(45906U);
    msg.setSourceEntity(226U);
    msg.setDestination(8748U);
    msg.setDestinationEntity(199U);
    msg.timeout = 35318U;
    msg.lat = 0.4600853830570283;
    msg.lon = 0.3693831919706829;
    msg.z = 0.21695450041375586;
    msg.z_units = 14U;
    msg.amplitude = 0.759507463501578;
    msg.pitch = 0.27526444096199;
    msg.speed = 0.7057371395582805;
    msg.speed_units = 90U;
    msg.custom.assign("UQJOPTCXEARUWTAZJMEDNTCHAMETNSVYJLAGQCMLOWLFKQENNHBACDKYQQBIYHFOLUJWZTAKBIYSVXSIH");

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
    msg.setTimeStamp(0.06596575825525008);
    msg.setSource(24941U);
    msg.setSourceEntity(44U);
    msg.setDestination(21909U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.1782866269802702);
    msg.setSource(34588U);
    msg.setSourceEntity(204U);
    msg.setDestination(34132U);
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
    msg.setTimeStamp(0.9152419110316582);
    msg.setSource(51509U);
    msg.setSourceEntity(149U);
    msg.setDestination(49387U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.6656505817489792);
    msg.setSource(36129U);
    msg.setSourceEntity(67U);
    msg.setDestination(22316U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.7367276943580964;
    msg.lon = 0.47287731719711956;
    msg.z = 0.9052581101528724;
    msg.z_units = 69U;
    msg.radius = 0.35945553367983585;
    msg.duration = 2779U;
    msg.speed = 0.8150664934804812;
    msg.speed_units = 79U;
    msg.custom.assign("JFAKQQEBAUADXZZMTNGCTIYRWOVCTQDWP");

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
    msg.setTimeStamp(0.9783197409820256);
    msg.setSource(42518U);
    msg.setSourceEntity(47U);
    msg.setDestination(34698U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.7136829838248525;
    msg.lon = 0.49531926351505495;
    msg.z = 0.10995814700215045;
    msg.z_units = 193U;
    msg.radius = 0.783393649568577;
    msg.duration = 4708U;
    msg.speed = 0.0010809219209950705;
    msg.speed_units = 251U;
    msg.custom.assign("CFCFBQWLGMSHPSOPAEJADLDKORWCACHHTMXOIVXNZTPKKLFVUXNEUASYLTAIQFAENX");

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
    msg.setTimeStamp(0.3992618935402814);
    msg.setSource(64737U);
    msg.setSourceEntity(208U);
    msg.setDestination(12655U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.6458923967001491;
    msg.lon = 0.6398523699770848;
    msg.z = 0.3506909399821527;
    msg.z_units = 177U;
    msg.radius = 0.28232316897139254;
    msg.duration = 34103U;
    msg.speed = 0.883082360247834;
    msg.speed_units = 29U;
    msg.custom.assign("GTRFJWFSCIUGLCXVBWHGIUCQZZELYRJMKBRDMYTIPXXPMCPDIKHIIHNJFDLTEZSQPTJZCWTXEMNOPRFMZZFYMVPRLEKORQAMTWBYUBPNNEKYV");

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
    msg.setTimeStamp(0.664499491136649);
    msg.setSource(53052U);
    msg.setSourceEntity(205U);
    msg.setDestination(63486U);
    msg.setDestinationEntity(194U);
    msg.timeout = 20516U;
    msg.flags = 157U;
    msg.lat = 0.6651684431752477;
    msg.lon = 0.8409670047984561;
    msg.start_z = 0.018152832610611735;
    msg.start_z_units = 0U;
    msg.end_z = 0.4343935266210236;
    msg.end_z_units = 135U;
    msg.radius = 0.6640117772320847;
    msg.speed = 0.4233278618155849;
    msg.speed_units = 156U;
    msg.custom.assign("NWDFSYTESULRVHVVDOFQTYOFHOPFCDPPDONEWAINOPDGMEVJKULYZHLEHJROCZVGUYMXWYOSQVQCBEMRYRGDLYHEKKTNAJDJMOZCZWZBRPBAUTAIVTFAAIXACSJLBBFEXIPUEMXQGHLNNHLTGNTKVQBMTRGQMAFGDSQCXWOERIKKRQPUNUDJCCJKCNPXZMR");

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
    msg.setTimeStamp(0.6337873999041826);
    msg.setSource(61350U);
    msg.setSourceEntity(116U);
    msg.setDestination(19109U);
    msg.setDestinationEntity(38U);
    msg.timeout = 52456U;
    msg.flags = 41U;
    msg.lat = 0.19794846996731563;
    msg.lon = 0.058694104924785995;
    msg.start_z = 0.8562543626924443;
    msg.start_z_units = 105U;
    msg.end_z = 0.18004543042904186;
    msg.end_z_units = 65U;
    msg.radius = 0.03449230133352177;
    msg.speed = 0.014471550780795872;
    msg.speed_units = 233U;
    msg.custom.assign("PECIQYSSPHGTOXTOPKMENTGHUPCADQLBOWTICKJTRIEADLVAOHEMXJINYALRSFRFESZPWKUQGRGNJ");

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
    msg.setTimeStamp(0.14557468129940443);
    msg.setSource(14094U);
    msg.setSourceEntity(224U);
    msg.setDestination(24432U);
    msg.setDestinationEntity(183U);
    msg.timeout = 55514U;
    msg.flags = 103U;
    msg.lat = 0.9509452071453346;
    msg.lon = 0.942789606696147;
    msg.start_z = 0.09389891006855955;
    msg.start_z_units = 39U;
    msg.end_z = 0.45495607680569383;
    msg.end_z_units = 136U;
    msg.radius = 0.29638098298825266;
    msg.speed = 0.5324549392489483;
    msg.speed_units = 155U;
    msg.custom.assign("WZSLTKBQSGNGHZIPVXKQZEZOJFTOIKVNWXCMZQVESDPASHRFETMEXUYNXCY");

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
    msg.setTimeStamp(0.7864002098427253);
    msg.setSource(48757U);
    msg.setSourceEntity(251U);
    msg.setDestination(2917U);
    msg.setDestinationEntity(105U);
    msg.timeout = 22737U;
    msg.lat = 0.9853234083069876;
    msg.lon = 0.9535520060100011;
    msg.z = 0.7197173082503018;
    msg.z_units = 153U;
    msg.speed = 0.6199187838332249;
    msg.speed_units = 104U;
    msg.custom.assign("IPLQYXENOCDKMDXJOPQIHMTRPKXGRYMFLFYALWUESNUJWGKYOZKLGUJXCNBFGZRWNSYSZBLZYXBUWVQTXHDTEDEJMNVVCQPCMKJXNADIGDJJVQTEPAXDEIQGTMZBVTBVGCYDAMNLBCPOFAIGPILMAFBRTSSCOUAPDWFAZSRKLHYTNMWVKRGWIPMSNWHFBQOTBJ");

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
    msg.setTimeStamp(0.9644919586562746);
    msg.setSource(558U);
    msg.setSourceEntity(77U);
    msg.setDestination(47703U);
    msg.setDestinationEntity(221U);
    msg.timeout = 36915U;
    msg.lat = 0.9300472839171661;
    msg.lon = 0.9617074065288278;
    msg.z = 0.4045368245993409;
    msg.z_units = 33U;
    msg.speed = 0.7371142611805731;
    msg.speed_units = 45U;
    msg.custom.assign("DCXXPIIDFYXJYTFBUGHCNZTW");

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
    msg.setTimeStamp(0.18706592827892377);
    msg.setSource(44310U);
    msg.setSourceEntity(95U);
    msg.setDestination(45812U);
    msg.setDestinationEntity(65U);
    msg.timeout = 41332U;
    msg.lat = 0.050855026129154934;
    msg.lon = 0.8017854879419442;
    msg.z = 0.2667403712052373;
    msg.z_units = 187U;
    msg.speed = 0.8971876756253017;
    msg.speed_units = 193U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9296492161821703;
    tmp_msg_0.y = 0.3359289864094258;
    tmp_msg_0.z = 0.4508142055600479;
    tmp_msg_0.t = 0.10228743270846163;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QBHIEJEPLOACCNQEDWPAXKYB");

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
    msg.setTimeStamp(0.049087810581066704);
    msg.setSource(29908U);
    msg.setSourceEntity(246U);
    msg.setDestination(11404U);
    msg.setDestinationEntity(107U);
    msg.x = 0.8737580070593555;
    msg.y = 0.5402604523021084;
    msg.z = 0.1457545606396834;
    msg.t = 0.776569891844316;

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
    msg.setTimeStamp(0.8631957610486123);
    msg.setSource(47034U);
    msg.setSourceEntity(146U);
    msg.setDestination(11490U);
    msg.setDestinationEntity(248U);
    msg.x = 0.11500817294933463;
    msg.y = 0.37240821417510794;
    msg.z = 0.8173725216971505;
    msg.t = 0.79720324785352;

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
    msg.setTimeStamp(0.2148191104773438);
    msg.setSource(11896U);
    msg.setSourceEntity(192U);
    msg.setDestination(52127U);
    msg.setDestinationEntity(117U);
    msg.x = 0.2272138216502092;
    msg.y = 0.25209513950426177;
    msg.z = 0.047587473828210825;
    msg.t = 0.050023046072039445;

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
    msg.setTimeStamp(0.021898124189693724);
    msg.setSource(49426U);
    msg.setSourceEntity(232U);
    msg.setDestination(41896U);
    msg.setDestinationEntity(176U);
    msg.timeout = 51485U;
    msg.name.assign("NYOBTYHTVGNWZJQBEOIQHINNSGEIYPKNGUHDCRMMZYTFJHMHDKDXMVFVTSYEBGSWMJMZPRQBAELFPCKLWPYWDJRJQQQTIEFGAQHCAOOSVUUWTGZOIWYXMCWHEIBF");
    msg.custom.assign("OKGHXWSILYVVFXDPSINVHJYSOLIUJCTTGODVKVMSBNDJEPUQIJDBUQCYNXMMTZCAPHCZJIOBGNDVQTEOZRBXARVKGQQSCRMP");

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
    msg.setTimeStamp(0.4362496741658558);
    msg.setSource(37157U);
    msg.setSourceEntity(58U);
    msg.setDestination(62509U);
    msg.setDestinationEntity(22U);
    msg.timeout = 20086U;
    msg.name.assign("UCWNRVYNQUYVXEQADEMMLFHRSEZWPDCKHZHRLXFS");
    msg.custom.assign("IEJJXXDUEVLIPVJKMYBSTKNCRETZFBRPGLALVRQJOHGWOBTYSTLVGUMTBVOYNZXNPOTDUUACSEIKMAMXWUIZSIQSNWKXCYPHDVKBDOQJKAVJMMYEPRLSANZEKQHAHSUQRFPQJJWFKWMCOSFYWVYUBHNNKIRDDZPHFUCAXFLUTWCNBIXAVLLMEGQCVRZGDIGWAOCAGMTNJSTCRBEZXZWDGOGZQNZJHHDFYXPRFQBQHGFLHFCIM");

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
    msg.setTimeStamp(0.16011772524856804);
    msg.setSource(60689U);
    msg.setSourceEntity(253U);
    msg.setDestination(39183U);
    msg.setDestinationEntity(95U);
    msg.timeout = 26865U;
    msg.name.assign("XQCMKNWSAOCYEHVQKXSZZZZWYTSBJIRKSVPAKGMBMFUCWSHYJTUHOFKMPBICHKGZMILTKAESEJVRWPFEMIQLUDVYNZFDFHOYCOGOLQDBSWXKCRJZRVIHLIRPXPBYDPKETPAEXUWLJAMDBSTXDNNTQTOYACXRFVURGIRWEJNGOGHWGSEEJZXGPINBQCUNIVZMMXTUGYDDBQFUFPHRNYTTPDOULXLVJVQJWBGCQAAAOLZVMFCQBLDAENHLJUFH");
    msg.custom.assign("MEJWKNCHANDVUJUQJTH");

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
    msg.setTimeStamp(0.054927402812859794);
    msg.setSource(49259U);
    msg.setSourceEntity(229U);
    msg.setDestination(62928U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.9609046575544674;
    msg.lon = 0.0030571478151051323;
    msg.z = 0.3058798139834962;
    msg.z_units = 211U;
    msg.speed = 0.6995632282443788;
    msg.speed_units = 116U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.46432167399621205;
    tmp_msg_0.y = 0.09138577748924903;
    tmp_msg_0.z = 0.775703509740969;
    tmp_msg_0.t = 0.4874434254572817;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 10139U;
    tmp_msg_1.off_x = 0.4787229645782104;
    tmp_msg_1.off_y = 0.10616691609844853;
    tmp_msg_1.off_z = 0.5255358859064142;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.25514514516436004;
    msg.custom.assign("XQAHYNUZUXHMLEGRHWXGHXFRGQTDTLDKTCCAOKNOMFWFQJNPDZLZVBGGXSZLSWBFXTQCWWKOMDXYTIHPMERISZKQAEEBNAREPEOEGIYCPVYITPKNJRBJHDTJOJGYZDKSMMHVCVXSBSWZDLAJPRVLLWKCOICSKEFRUVPXYGINCVNAVHKZUGZPAFQVISYQAPOBBTMQWUYZSNXLCOISGFDUMTM");

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
    msg.setTimeStamp(0.52364021244749);
    msg.setSource(23529U);
    msg.setSourceEntity(78U);
    msg.setDestination(55166U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.16851383142902243;
    msg.lon = 0.767331321948935;
    msg.z = 0.4779042929714935;
    msg.z_units = 128U;
    msg.speed = 0.9807845885973294;
    msg.speed_units = 61U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 57872U;
    tmp_msg_0.off_x = 0.7696311849650044;
    tmp_msg_0.off_y = 0.01905493235043454;
    tmp_msg_0.off_z = 0.3812737883075069;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.723746426812473;
    msg.custom.assign("MOEYIGWGRCKSGVHJJWUQXITLREZHFBNSGPLWWEWNENWPBZRQBYLYPDTRNJMVKMCXRTCLKAZADRBAHNPRSBAKJXDLCTZQBZVJQJNGECGSFUEMBEOSCUBVVVRGKDALYDIKIIYPZUJORBHOIKNXFSBMYTMYAEGNVXXSTIYZHOWCPPUDFATZME");

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
    msg.setTimeStamp(0.6566814786171338);
    msg.setSource(53040U);
    msg.setSourceEntity(148U);
    msg.setDestination(65202U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.7113498066856742;
    msg.lon = 0.6131796334356026;
    msg.z = 0.5645430299047596;
    msg.z_units = 163U;
    msg.speed = 0.8926484130898024;
    msg.speed_units = 141U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.38304503339748164;
    tmp_msg_0.y = 0.0666007128236753;
    tmp_msg_0.z = 0.7211339529344378;
    tmp_msg_0.t = 0.9059540513995719;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.9355510571015061;
    msg.custom.assign("LUPIRXTJDVDUONYBIIAMSGS");

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
    msg.setTimeStamp(0.9275057266415786);
    msg.setSource(51614U);
    msg.setSourceEntity(24U);
    msg.setDestination(51541U);
    msg.setDestinationEntity(95U);
    msg.vid = 22484U;
    msg.off_x = 0.3527652378552757;
    msg.off_y = 0.22163276148690714;
    msg.off_z = 0.6603445934993869;

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
    msg.setTimeStamp(0.028119600431355307);
    msg.setSource(27204U);
    msg.setSourceEntity(156U);
    msg.setDestination(48873U);
    msg.setDestinationEntity(57U);
    msg.vid = 24182U;
    msg.off_x = 0.839673246521618;
    msg.off_y = 0.3579133871612178;
    msg.off_z = 0.7691530165739913;

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
    msg.setTimeStamp(0.41266786199689554);
    msg.setSource(55693U);
    msg.setSourceEntity(93U);
    msg.setDestination(5189U);
    msg.setDestinationEntity(87U);
    msg.vid = 13096U;
    msg.off_x = 0.0942783846057359;
    msg.off_y = 0.12594758391138383;
    msg.off_z = 0.9309142503688425;

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
    msg.setTimeStamp(0.9067245555962524);
    msg.setSource(16962U);
    msg.setSourceEntity(33U);
    msg.setDestination(6319U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.49708224600449447);
    msg.setSource(61502U);
    msg.setSourceEntity(41U);
    msg.setDestination(21367U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.3550268293016471);
    msg.setSource(62372U);
    msg.setSourceEntity(43U);
    msg.setDestination(44712U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.3574739103883052);
    msg.setSource(38696U);
    msg.setSourceEntity(16U);
    msg.setDestination(53072U);
    msg.setDestinationEntity(99U);
    msg.mid = 14437U;

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
    msg.setTimeStamp(0.8515069696129336);
    msg.setSource(1755U);
    msg.setSourceEntity(68U);
    msg.setDestination(5018U);
    msg.setDestinationEntity(174U);
    msg.mid = 40589U;

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
    msg.setTimeStamp(0.34263127649434955);
    msg.setSource(29243U);
    msg.setSourceEntity(23U);
    msg.setDestination(45624U);
    msg.setDestinationEntity(54U);
    msg.mid = 29260U;

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
    msg.setTimeStamp(0.5945951807547536);
    msg.setSource(56702U);
    msg.setSourceEntity(147U);
    msg.setDestination(26150U);
    msg.setDestinationEntity(65U);
    msg.state = 139U;
    msg.eta = 21493U;
    msg.info.assign("UMDKTQDYKYUBZCXREMGXMGXF");

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
    msg.setTimeStamp(0.6295787766881645);
    msg.setSource(39804U);
    msg.setSourceEntity(20U);
    msg.setDestination(28906U);
    msg.setDestinationEntity(42U);
    msg.state = 83U;
    msg.eta = 22311U;
    msg.info.assign("BJRSSDRKUALGAISOJCGVXUXORAQNNOWWYOCYZBMSBFDVPGKGELQAIMFDWCQYMUWIYCVCDEXNMEUOKEUWJYTPHUZJNZKCRKSCAJASUBKSJZNPJETVBWPJJMWPGVCZQVFXPITFGQSLQHWWOLDZQMCTQVENOZXLEFRDRXRFRHEIZHKXHBHTDLAUXNTQHJKMDYGIOLPIPLNFIEITHUBLRNETRFYZTVMABSBZPAVKAK");

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
    msg.setTimeStamp(0.806498677351801);
    msg.setSource(8033U);
    msg.setSourceEntity(190U);
    msg.setDestination(61400U);
    msg.setDestinationEntity(116U);
    msg.state = 161U;
    msg.eta = 10306U;
    msg.info.assign("YNKGFDWHWWMOUMBNUVUEMXSZKWPSZAVBQDYVMDTHRRGDFIDDJQHPJTZFRQCBTWMIENCZJKXRCBOILQKZPDVANFTPFAIJMIPFZETEISUTQAFKPRWJZOPOXRCLGGEXEORXNNVIYMUEOAAANRSLMLNBEUTTLQNCDDQWYLOAUUFVCSZJXKDVYHQHYCIYWKPKNBVYBGCAGIIZSLLPLABVXSKCTQEKHHSRGWSZ");

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
    msg.setTimeStamp(0.7450683296575963);
    msg.setSource(30327U);
    msg.setSourceEntity(92U);
    msg.setDestination(12986U);
    msg.setDestinationEntity(4U);
    msg.system = 7121U;
    msg.duration = 28509U;
    msg.speed = 0.6612795748882961;
    msg.speed_units = 11U;
    msg.x = 0.05060385951170787;
    msg.y = 0.4745048077117311;
    msg.z = 0.6963047590749275;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.409240096798421);
    msg.setSource(22107U);
    msg.setSourceEntity(116U);
    msg.setDestination(28572U);
    msg.setDestinationEntity(155U);
    msg.system = 23U;
    msg.duration = 31988U;
    msg.speed = 0.2671756916753093;
    msg.speed_units = 150U;
    msg.x = 0.41883960802523024;
    msg.y = 0.9429089319470952;
    msg.z = 0.09263823051907105;
    msg.z_units = 184U;

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
    msg.setTimeStamp(0.11025000011998065);
    msg.setSource(4420U);
    msg.setSourceEntity(109U);
    msg.setDestination(60283U);
    msg.setDestinationEntity(65U);
    msg.system = 1294U;
    msg.duration = 10274U;
    msg.speed = 0.9328054113541492;
    msg.speed_units = 95U;
    msg.x = 0.973631190712798;
    msg.y = 0.974233033659015;
    msg.z = 0.13113382799158546;
    msg.z_units = 128U;

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
    msg.setTimeStamp(0.6968805711295235);
    msg.setSource(16454U);
    msg.setSourceEntity(153U);
    msg.setDestination(64354U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.013232645114921837;
    msg.lon = 0.2262454687696982;
    msg.speed = 0.6105887494649752;
    msg.speed_units = 191U;
    msg.duration = 41737U;
    msg.sys_a = 22264U;
    msg.sys_b = 44610U;
    msg.move_threshold = 0.6630060695226115;

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
    msg.setTimeStamp(0.8296060252499045);
    msg.setSource(60145U);
    msg.setSourceEntity(163U);
    msg.setDestination(29052U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.43174467087856705;
    msg.lon = 0.29786630337138775;
    msg.speed = 0.5840489666680001;
    msg.speed_units = 62U;
    msg.duration = 13227U;
    msg.sys_a = 42514U;
    msg.sys_b = 27447U;
    msg.move_threshold = 0.9630234820773607;

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
    msg.setTimeStamp(0.5361286305073374);
    msg.setSource(27820U);
    msg.setSourceEntity(203U);
    msg.setDestination(11351U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.14588497325235517;
    msg.lon = 0.8966822449968862;
    msg.speed = 0.7867097424052109;
    msg.speed_units = 47U;
    msg.duration = 4999U;
    msg.sys_a = 15999U;
    msg.sys_b = 65100U;
    msg.move_threshold = 0.48882609443394465;

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
    msg.setTimeStamp(0.164089763908012);
    msg.setSource(23570U);
    msg.setSourceEntity(36U);
    msg.setDestination(10976U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.7616649345675877;
    msg.lon = 0.6292962108534372;
    msg.z = 0.10229862796557032;
    msg.z_units = 118U;
    msg.speed = 0.35186599939588836;
    msg.speed_units = 101U;
    msg.custom.assign("BPAMMYGFXXNFAHMTNKVMVTDVQHGLZIKHXISMVFRZCSJWUEGELUCQNFJVSCCCGTITEYWOOGNSPELABYZYOXVBGF");

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
    msg.setTimeStamp(0.04546171133934018);
    msg.setSource(7046U);
    msg.setSourceEntity(131U);
    msg.setDestination(27161U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.6792972058025384;
    msg.lon = 0.06924093921258578;
    msg.z = 0.03474583304282686;
    msg.z_units = 55U;
    msg.speed = 0.820057283702886;
    msg.speed_units = 56U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7539503698188251;
    tmp_msg_0.lon = 0.8290522571720556;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TPGOXKDTUICSLHHMGTZJUKHEIEGGUXXTEBMVZSWAQEIUUZLVIYHQPMFRSNHSB");

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
    msg.setTimeStamp(0.558218766474139);
    msg.setSource(61388U);
    msg.setSourceEntity(113U);
    msg.setDestination(32220U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.3435378905464992;
    msg.lon = 0.4821367993019112;
    msg.z = 0.8947056300112572;
    msg.z_units = 20U;
    msg.speed = 0.2862554935609991;
    msg.speed_units = 152U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.20598354537934227;
    tmp_msg_0.lon = 0.7411726851648707;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KJSWKGCFIXMNBFACZIHUBWRFNAOKODZXRVHUIRKGUATWGCZZKPRLMOGMNPYTWDXCFY");

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
    msg.setTimeStamp(0.38908666929838265);
    msg.setSource(58783U);
    msg.setSourceEntity(216U);
    msg.setDestination(40327U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.783163150653111;
    msg.lon = 0.20988584751152783;

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
    msg.setTimeStamp(0.30314630032649703);
    msg.setSource(1641U);
    msg.setSourceEntity(73U);
    msg.setDestination(1191U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.12149361338017872;
    msg.lon = 0.6688576855491652;

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
    msg.setTimeStamp(0.5414792591581368);
    msg.setSource(49955U);
    msg.setSourceEntity(3U);
    msg.setDestination(44796U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.3146406652221867;
    msg.lon = 0.5321240464402334;

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
    msg.setTimeStamp(0.7858785025185324);
    msg.setSource(25499U);
    msg.setSourceEntity(68U);
    msg.setDestination(13558U);
    msg.setDestinationEntity(99U);
    msg.timeout = 17107U;
    msg.lat = 0.3778358496575447;
    msg.lon = 0.880012015671067;
    msg.z = 0.3390573595289619;
    msg.z_units = 174U;
    msg.pitch = 0.9554495819304671;
    msg.amplitude = 0.3407546517948815;
    msg.duration = 34845U;
    msg.speed = 0.8042128829609103;
    msg.speed_units = 168U;
    msg.radius = 0.07579317845752842;
    msg.direction = 73U;
    msg.custom.assign("SXHDMQQLKAOSVNBVINRCYTVON");

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
    msg.setTimeStamp(0.6100045860613744);
    msg.setSource(15612U);
    msg.setSourceEntity(58U);
    msg.setDestination(16507U);
    msg.setDestinationEntity(242U);
    msg.timeout = 63279U;
    msg.lat = 0.25570127356577876;
    msg.lon = 0.8683305891055064;
    msg.z = 0.7824823901394016;
    msg.z_units = 142U;
    msg.pitch = 0.5414641267092584;
    msg.amplitude = 0.8700739943185349;
    msg.duration = 51403U;
    msg.speed = 0.547637517029323;
    msg.speed_units = 212U;
    msg.radius = 0.924378480003981;
    msg.direction = 18U;
    msg.custom.assign("VXAKQPXKRRTZJRDVHBQWNLKPGWFLAOTLWIRCTKHYXMBUWHOIUZISFWEEQABCUEELHHNSPMMBYGRHENPJQCDAPUUTJMKRFWGLZQPVDZAPGUSNYXRJZVIOIRJDXNGEJGASKLIRTYJECCYWOWKESXBZBVFSOQOGEKCXLHIXMUIADNXDBDDVYFFOAXFZCPIYUDBTVGKGMHMZNMCYSOZEHFMSZAOQYJLBIUFTNTATPW");

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
    msg.setTimeStamp(0.6607141751439194);
    msg.setSource(31642U);
    msg.setSourceEntity(176U);
    msg.setDestination(3112U);
    msg.setDestinationEntity(65U);
    msg.timeout = 46914U;
    msg.lat = 0.41255276249148376;
    msg.lon = 0.910349810092763;
    msg.z = 0.34036306462354937;
    msg.z_units = 76U;
    msg.pitch = 0.9635325119170065;
    msg.amplitude = 0.45602574331568824;
    msg.duration = 7183U;
    msg.speed = 0.5231632915554758;
    msg.speed_units = 134U;
    msg.radius = 0.24239253128454685;
    msg.direction = 0U;
    msg.custom.assign("RCFBDUBSZDOUIA");

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
    msg.setTimeStamp(0.49592782759109255);
    msg.setSource(7364U);
    msg.setSourceEntity(233U);
    msg.setDestination(54004U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("KVKVYMNZZOT");
    msg.reference_frame = 179U;
    msg.custom.assign("GQDJSNFUDTURWAVCUIRNSRPSWLCADYVUHPEXTYCZUMKTOBYWYOHGHMQQBDTHTZLHTOLZMPLNIZXZWFPKKPOCUFIJRYENSSWBACPBJRMIGIKEGJVKEJSTAEHUXLGBCFQAYLADIMUOBNFFWQLBWKECITYSNQDFRGJYVSDRAPHVOKXZNYHBUNMOQRFZWSLJWATXXVJLBPZYPIEMXNPMCHVGJBXNGOIGJVAXVMCZEDEOLUQSDRQDOF");

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
    msg.setTimeStamp(0.07546063846092088);
    msg.setSource(63225U);
    msg.setSourceEntity(47U);
    msg.setDestination(61535U);
    msg.setDestinationEntity(86U);
    msg.formation_name.assign("HWNEDKLYVETPNXBISSKASZKXHUWLQPGSEIFEYVJEUNAXOWWXFOUHCVJSWTKPLCBFMBQYMVBRWGKTJNQLLREHKLDTERKTBZKFVDVS");
    msg.reference_frame = 170U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11641U;
    tmp_msg_0.off_x = 0.8318552582618391;
    tmp_msg_0.off_y = 0.16259409751870402;
    tmp_msg_0.off_z = 0.7227676820563447;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XELRDUZIBPKCDYLLWKZLZFAQHKCHTGDKJGMMYKQXYNLAPXUMNBTAHFJVTHNNWSAYWNCYGUJRXJHPLGARQ");

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
    msg.setTimeStamp(0.9250510884677675);
    msg.setSource(38875U);
    msg.setSourceEntity(78U);
    msg.setDestination(4559U);
    msg.setDestinationEntity(246U);
    msg.formation_name.assign("RYXESVZWYTFBQEAZFPSXWSIYOHOKCAPQLVXNNZYREGPICFIZQENHDTROPIPHQROSYKNINIAAHKUOXBKONWHUSAAKJCZDVXBHPGJIQGDQNTEVOJDHCHRWYEJEMMLMKJPSSTTXFFIHWLRPFJGMXDLCZYMEJKDXSX");
    msg.reference_frame = 128U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64436U;
    tmp_msg_0.off_x = 0.983443929438144;
    tmp_msg_0.off_y = 0.015006109191770478;
    tmp_msg_0.off_z = 0.6295507183267486;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VVTUPRWTCESIUSRBQEKGQXEGKMBNAFOTXHUSREGHEZONJIYGCTHUVOWKYRIBWQXGIJONQHYGYNZKAAJJPWPHUFHKMYWLBTPWFAJPXTNJDMHXH");

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
    msg.setTimeStamp(0.35878257349096465);
    msg.setSource(60427U);
    msg.setSourceEntity(104U);
    msg.setDestination(63856U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("YBGFEAWOBDJKZDVCCGWRYYZANQNMGHRWEOPZXCIEVJOSUPTXFFHDCKQDCGRQKWAEBJATNIBYXXZIXMEGWLUJROOSEKPKFJ");
    msg.formation_name.assign("NJZYYJSXQCXMDFEPGBYEHWWGUTIWPOFNCNFKZREOCZXATQRHIZOAKYKTCENNWMQGYQKDJEDRQAMPAOINPMJCPPYVFQKRTSCXLXSKVUHPXTVQCXIMGLGBVOJHHOBRBVUSXWCREGMTIBKZALAJALMPGLDSFNKZMTCRMFCOSHPJWEZJVVUKWYDSZRZTUIDYDJLVSNDBJIQEDGBUHASUHFKVUU");
    msg.plan_id.assign("PKRJQCXSSYGZWQDYSEVENBGXNJHWXOQQRFZFYKAXOCDYFZEWHTFXMKOUPRZSFHUDUBHRVKRILQGMMGZKIWASQLZPMTSMNGIYEXEDEZZUMICPHA");
    msg.description.assign("HDMWVWXNQYFVLNBSODLKQNSUZCLYYUGWR");
    msg.leader_speed = 0.016757934271419583;
    msg.leader_bank_lim = 0.028347674525616928;
    msg.pos_sim_err_lim = 0.9208946071409754;
    msg.pos_sim_err_wrn = 0.14531488006913096;
    msg.pos_sim_err_timeout = 35531U;
    msg.converg_max = 0.34782730865732236;
    msg.converg_timeout = 62100U;
    msg.comms_timeout = 57193U;
    msg.turb_lim = 0.26093673973810416;
    msg.custom.assign("DBRLAWDSAQGTAVQVPPTZXSELCFNYEDSPTJ");

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
    msg.setTimeStamp(0.6869728476871494);
    msg.setSource(46858U);
    msg.setSourceEntity(2U);
    msg.setDestination(26938U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("MKTEZPSRQSNUTDBYCCGEFVXRUPKMBJZVKYLYJXANZAHYWLDCOHDMQASMZSXLJHWNEWIXXZOYGHPGPYWALRRFIJDOUVWEPIRVGURNQBCMUNEYVMNMSRDSLUIQFNVMUAQAHLYCFDBZZOTTNTJPPWFSGPBWJUKWZQFYEOBDF");
    msg.formation_name.assign("FQTXMOLRXZWDKHSQAZFNAFZJZWBNFVIWBUSLNDJSYUWSGVKNAOUUNRDXIEAQHTKOQXBZUVPRRZXQEMIGCMROFOKLGUHMVJTTEXJBDKQFVIAPISPZFIWFVKDWPUKYPBJOKTXTMLA");
    msg.plan_id.assign("RLAIMIAFCURPNWQTUEGKWKJLMEXWVVLXTTIQVNHLXGGFOPFOWQTBRYOODTYBNXDXZVAVJAPIOUIOUUQLYSEQSECNDEMKBSMCXARKHOZJKVIBPJPDQUPCFZRWYXLEEZHDVITHNKAFHDCUSOZFGBIZMBYHAZVHUNSJDRWDOUXRSNUCVRBEGMWQQ");
    msg.description.assign("ICOPUZWABYVETTCYIWMJCZADFJZWTIUAOMBYALSDDGCSBXZONIQDFADGFVFUZNCUFIQZQJPVMQRRLXKHZCQYFUSSJRIPWBTCEOHEROTMPLXUHHMSCJSZMGKTJVOTJMHEVTWTNRAMCSRNQGXNVKLFJPXUSGYFYBRLYNWSQKZMREOLKURHKHQJINH");
    msg.leader_speed = 0.7371162932504373;
    msg.leader_bank_lim = 0.18800268999411118;
    msg.pos_sim_err_lim = 0.7569818033029856;
    msg.pos_sim_err_wrn = 0.9740537038940216;
    msg.pos_sim_err_timeout = 24915U;
    msg.converg_max = 0.3811505315099588;
    msg.converg_timeout = 34446U;
    msg.comms_timeout = 6500U;
    msg.turb_lim = 0.26113604415248026;
    msg.custom.assign("NFRVKTPXJYNK");

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
    msg.setTimeStamp(0.8572055459445297);
    msg.setSource(52283U);
    msg.setSourceEntity(252U);
    msg.setDestination(12857U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("LWMGVAZXCCHXIIOJTYBNNJRWHONTLREQVNLFQABLCEEXNEQHGULRBFIZLKAAXOYJEPAPHFGTJDIGUBVMAKFHVUEGTZUSNPFZVEGQJMTETKHWWPZBXCODQMAUDEORXBKNDYNGINBSNVKMRQLYSIWACUYRXFULDKY");
    msg.formation_name.assign("TZMREZGEYRRXFIBLFZZKKOYZBXPWQSJWYQVLNXLTUTOHSMTLUOSPUJXZEJINHHHZNAVNKZKWFJJOLDSYJKOLTQVFKNUUMBIRFUBCESHRABAXVXEVXOBPNNUEZHATLERGCJXLDXYAGUAPCCMGCMIJDDMHDLNWIOTDTUKCGPSIGWRUMYFAPEKYIGM");
    msg.plan_id.assign("OGMUDTWRSPHPMGEFXHNIKRGESGRFDIXULAXJUDRQIAAXVMZYXVYIKJCUFHVEUIPBSQIFCLFURXJOZVJAZBVSZBYQQWSDPFHWDIWNTYVGQAKLCQMEYHAVFGGTWKPOOZABENEAM");
    msg.description.assign("YWUZKZSOPVUCIVNCUATGFXFRHTBWCDHSVDISNSBEHGZQXRXHIJURVKIVQMQVZSSMBWUULTYNBJJZACKQDOZDQPRXEWZTFMHDWHPLIFFLK");
    msg.leader_speed = 0.1893953445713077;
    msg.leader_bank_lim = 0.932106185177999;
    msg.pos_sim_err_lim = 0.620104095970598;
    msg.pos_sim_err_wrn = 0.30134027297706767;
    msg.pos_sim_err_timeout = 46365U;
    msg.converg_max = 0.4383994501410301;
    msg.converg_timeout = 54640U;
    msg.comms_timeout = 24615U;
    msg.turb_lim = 0.7334584083325509;
    msg.custom.assign("DPLYMGKNXOLB");

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
    msg.setTimeStamp(0.3704321549102213);
    msg.setSource(25601U);
    msg.setSourceEntity(92U);
    msg.setDestination(367U);
    msg.setDestinationEntity(65U);
    msg.control_src = 58343U;
    msg.control_ent = 52U;
    msg.timeout = 0.6338588620705868;
    msg.loiter_radius = 0.9789043600431085;
    msg.altitude_interval = 0.4556829536074166;

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
    msg.setTimeStamp(0.8895974232463615);
    msg.setSource(47478U);
    msg.setSourceEntity(33U);
    msg.setDestination(62802U);
    msg.setDestinationEntity(195U);
    msg.control_src = 10001U;
    msg.control_ent = 99U;
    msg.timeout = 0.39578331046794946;
    msg.loiter_radius = 0.19919789030495305;
    msg.altitude_interval = 0.2942825925219257;

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
    msg.setTimeStamp(0.3156359204254843);
    msg.setSource(22556U);
    msg.setSourceEntity(219U);
    msg.setDestination(23909U);
    msg.setDestinationEntity(36U);
    msg.control_src = 18575U;
    msg.control_ent = 107U;
    msg.timeout = 0.5783181593752957;
    msg.loiter_radius = 0.16819355091373622;
    msg.altitude_interval = 0.09851843158095142;

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
    msg.setTimeStamp(0.003029355305141146);
    msg.setSource(61692U);
    msg.setSourceEntity(209U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(57U);
    msg.flags = 114U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7985306076064971;
    tmp_msg_0.speed_units = 59U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9009222048592538;
    tmp_msg_1.z_units = 109U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.12630169712899664;
    msg.lon = 0.03689645231569172;
    msg.radius = 0.016985875211205648;

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
    msg.setTimeStamp(0.3420550368083465);
    msg.setSource(25908U);
    msg.setSourceEntity(209U);
    msg.setDestination(41883U);
    msg.setDestinationEntity(179U);
    msg.flags = 166U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5307907147816121;
    tmp_msg_0.speed_units = 252U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5783256097987475;
    tmp_msg_1.z_units = 80U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6077269071511374;
    msg.lon = 0.7297779094216139;
    msg.radius = 0.8922319639543249;

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
    msg.setTimeStamp(0.8339322103218219);
    msg.setSource(29477U);
    msg.setSourceEntity(4U);
    msg.setDestination(60501U);
    msg.setDestinationEntity(53U);
    msg.flags = 10U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7349932833586674;
    tmp_msg_0.speed_units = 142U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5772655257374121;
    tmp_msg_1.z_units = 5U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9587144372775824;
    msg.lon = 0.1734997444677654;
    msg.radius = 0.9343248658354127;

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
    msg.setTimeStamp(0.564804666794562);
    msg.setSource(34536U);
    msg.setSourceEntity(132U);
    msg.setDestination(36197U);
    msg.setDestinationEntity(205U);
    msg.control_src = 31888U;
    msg.control_ent = 245U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 76U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6470895448130534;
    tmp_tmp_msg_0_0.speed_units = 48U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7844167218591103;
    tmp_tmp_msg_0_1.z_units = 239U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.19877916744042978;
    tmp_msg_0.lon = 0.598719517792361;
    tmp_msg_0.radius = 0.9312619756866692;
    msg.reference.set(tmp_msg_0);
    msg.state = 171U;
    msg.proximity = 132U;

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
    msg.setTimeStamp(0.5546429493427256);
    msg.setSource(62591U);
    msg.setSourceEntity(151U);
    msg.setDestination(2999U);
    msg.setDestinationEntity(202U);
    msg.control_src = 18989U;
    msg.control_ent = 82U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 126U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5914267866194505;
    tmp_tmp_msg_0_0.speed_units = 206U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2081005016777322;
    tmp_tmp_msg_0_1.z_units = 61U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.010440689415622262;
    tmp_msg_0.lon = 0.17605704911454634;
    tmp_msg_0.radius = 0.8224681063359826;
    msg.reference.set(tmp_msg_0);
    msg.state = 209U;
    msg.proximity = 204U;

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
    msg.setTimeStamp(0.48779881975344175);
    msg.setSource(37482U);
    msg.setSourceEntity(84U);
    msg.setDestination(50975U);
    msg.setDestinationEntity(78U);
    msg.control_src = 32943U;
    msg.control_ent = 190U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 111U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7768169223774721;
    tmp_tmp_msg_0_0.speed_units = 152U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4675847093570178;
    tmp_tmp_msg_0_1.z_units = 89U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8978578915682135;
    tmp_msg_0.lon = 0.12576051287794032;
    tmp_msg_0.radius = 0.9690507107572556;
    msg.reference.set(tmp_msg_0);
    msg.state = 254U;
    msg.proximity = 99U;

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
    msg.setTimeStamp(0.6953765030714922);
    msg.setSource(63655U);
    msg.setSourceEntity(133U);
    msg.setDestination(10514U);
    msg.setDestinationEntity(45U);
    msg.ax_cmd = 0.8369235874277953;
    msg.ay_cmd = 0.7931233558850883;
    msg.az_cmd = 0.4197868813517689;
    msg.ax_des = 0.27840569201213583;
    msg.ay_des = 0.8258189050782;
    msg.az_des = 0.9847046850661489;
    msg.virt_err_x = 0.12273534923869822;
    msg.virt_err_y = 0.9780425179249849;
    msg.virt_err_z = 0.2954156028135111;
    msg.surf_fdbk_x = 0.40754353041985514;
    msg.surf_fdbk_y = 0.8244024560855429;
    msg.surf_fdbk_z = 0.6530484655144775;
    msg.surf_unkn_x = 0.7128188468357421;
    msg.surf_unkn_y = 0.11674770611146168;
    msg.surf_unkn_z = 0.4760258383485011;
    msg.ss_x = 0.6446590539451101;
    msg.ss_y = 0.43355701964965665;
    msg.ss_z = 0.21706538857360036;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OZFMFCAOEYAFCHZBRTJISEWJBSUHEYFPQMGJDLGIECCJIVLOXPLCLQEUZKBQYWNXOCYQZNRAKVVYZUKXQQPHHNNWFGFKLAQQPJJTGOCSEXPFCDOIDEGGWIBADUYIVSAHOUUCVXTSPULRFDXYRFWVXUKQMZAHJWWOKLMPSEZWLVMBBQGILKHEJVZUIMTMHIFBOBLT");
    tmp_msg_0.dist = 0.7980641585790127;
    tmp_msg_0.err = 0.9681005226599155;
    tmp_msg_0.ctrl_imp = 0.9927776031094386;
    tmp_msg_0.rel_dir_x = 0.5987495582928819;
    tmp_msg_0.rel_dir_y = 0.9767464970133981;
    tmp_msg_0.rel_dir_z = 0.06973504822267418;
    tmp_msg_0.err_x = 0.5892259242240142;
    tmp_msg_0.err_y = 0.1539450546536163;
    tmp_msg_0.err_z = 0.3162852712679092;
    tmp_msg_0.rf_err_x = 0.3445355695317306;
    tmp_msg_0.rf_err_y = 0.4098422072250071;
    tmp_msg_0.rf_err_z = 0.3584304760566204;
    tmp_msg_0.rf_err_vx = 0.473965828172794;
    tmp_msg_0.rf_err_vy = 0.003435952421416477;
    tmp_msg_0.rf_err_vz = 0.7044646419105088;
    tmp_msg_0.ss_x = 0.49501066791848747;
    tmp_msg_0.ss_y = 0.5299494794198603;
    tmp_msg_0.ss_z = 0.858507825994649;
    tmp_msg_0.virt_err_x = 0.9608458309017761;
    tmp_msg_0.virt_err_y = 0.15133578759915556;
    tmp_msg_0.virt_err_z = 0.7085777586607594;
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
    msg.setTimeStamp(0.8007170971830128);
    msg.setSource(21245U);
    msg.setSourceEntity(183U);
    msg.setDestination(44098U);
    msg.setDestinationEntity(12U);
    msg.ax_cmd = 0.9790821305553846;
    msg.ay_cmd = 0.636805490043375;
    msg.az_cmd = 0.7773810244147908;
    msg.ax_des = 0.41656696102930013;
    msg.ay_des = 0.5931197564857976;
    msg.az_des = 0.3267891920559839;
    msg.virt_err_x = 0.2938525536645845;
    msg.virt_err_y = 0.3212792474574213;
    msg.virt_err_z = 0.7276240569301785;
    msg.surf_fdbk_x = 0.067193197908192;
    msg.surf_fdbk_y = 0.23859279006205736;
    msg.surf_fdbk_z = 0.22606596979584126;
    msg.surf_unkn_x = 0.8668617660021687;
    msg.surf_unkn_y = 0.41065603303179;
    msg.surf_unkn_z = 0.7771985396209664;
    msg.ss_x = 0.7732231081611566;
    msg.ss_y = 0.3393084908031053;
    msg.ss_z = 0.7396239413018952;

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
    msg.setTimeStamp(0.6006351322145368);
    msg.setSource(40106U);
    msg.setSourceEntity(20U);
    msg.setDestination(352U);
    msg.setDestinationEntity(161U);
    msg.ax_cmd = 0.22140468505507505;
    msg.ay_cmd = 0.8133514746224971;
    msg.az_cmd = 0.6829317760276966;
    msg.ax_des = 0.5096826403560577;
    msg.ay_des = 0.9759784690905455;
    msg.az_des = 0.6489230189898646;
    msg.virt_err_x = 0.26201983440136134;
    msg.virt_err_y = 0.6070752630931612;
    msg.virt_err_z = 0.9396481809136948;
    msg.surf_fdbk_x = 0.8172348081637862;
    msg.surf_fdbk_y = 0.11742056271514267;
    msg.surf_fdbk_z = 0.7006313002450407;
    msg.surf_unkn_x = 0.38189338781529714;
    msg.surf_unkn_y = 0.8188274405526965;
    msg.surf_unkn_z = 0.9474734693047325;
    msg.ss_x = 0.6056982095576975;
    msg.ss_y = 0.950514739553991;
    msg.ss_z = 0.07590935043431413;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HXDTNJPCWWIMORAWXZHJDRGXUFHXQESVAAESMUHXFGYUWYOZQUKBPMAZKVIOQIPEQRBISKTCUHYROLQWCLMNSQJMRDLQVDLDTCYIMTVAOLFEKGFNJIPSECGWCHBPFCTXLFWINKMDTZQGASAYFPJHRGOBFCAYOVNLZJXCLXZHBBMMDRLZKDGGKEGKPQTSCUVUWHUYETAJOVNEDEBYWBUZOMNL");
    tmp_msg_0.dist = 0.0941265659019731;
    tmp_msg_0.err = 0.2922907036477296;
    tmp_msg_0.ctrl_imp = 0.008126522396380564;
    tmp_msg_0.rel_dir_x = 0.4255177080828857;
    tmp_msg_0.rel_dir_y = 0.18651582302907288;
    tmp_msg_0.rel_dir_z = 0.8867200868024439;
    tmp_msg_0.err_x = 0.46185297079045695;
    tmp_msg_0.err_y = 0.6759847317597726;
    tmp_msg_0.err_z = 0.5117335560331461;
    tmp_msg_0.rf_err_x = 0.6952902771945773;
    tmp_msg_0.rf_err_y = 0.375431366484005;
    tmp_msg_0.rf_err_z = 0.017410882575487285;
    tmp_msg_0.rf_err_vx = 0.4705007571793679;
    tmp_msg_0.rf_err_vy = 0.26900532318323833;
    tmp_msg_0.rf_err_vz = 0.05340945127610097;
    tmp_msg_0.ss_x = 0.8531456109569145;
    tmp_msg_0.ss_y = 0.507200872382843;
    tmp_msg_0.ss_z = 0.9750578774976012;
    tmp_msg_0.virt_err_x = 0.822513613289918;
    tmp_msg_0.virt_err_y = 0.0061727261776797215;
    tmp_msg_0.virt_err_z = 0.2167811398339219;
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
    msg.setTimeStamp(0.14300816903294045);
    msg.setSource(27813U);
    msg.setSourceEntity(237U);
    msg.setDestination(15678U);
    msg.setDestinationEntity(132U);
    msg.s_id.assign("PSNGFFTSXWSQCQRTVULSPVUVPPZZHRGKTLBIXJKFFBKVDG");
    msg.dist = 0.8333782873926697;
    msg.err = 0.03646548872786548;
    msg.ctrl_imp = 0.7610089754598673;
    msg.rel_dir_x = 0.3329528205517941;
    msg.rel_dir_y = 0.31221245170005796;
    msg.rel_dir_z = 0.29661551524155116;
    msg.err_x = 0.9551143241207843;
    msg.err_y = 0.1581642975792379;
    msg.err_z = 0.46799019159250066;
    msg.rf_err_x = 0.7744455037380594;
    msg.rf_err_y = 0.986507763552528;
    msg.rf_err_z = 0.9646285655458005;
    msg.rf_err_vx = 0.9965155914759097;
    msg.rf_err_vy = 0.5448091859656128;
    msg.rf_err_vz = 0.05330334167992967;
    msg.ss_x = 0.6102268637055257;
    msg.ss_y = 0.21213643051082198;
    msg.ss_z = 0.63975124711498;
    msg.virt_err_x = 0.12542204495817277;
    msg.virt_err_y = 0.6607931851340471;
    msg.virt_err_z = 0.9431391704042617;

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
    msg.setTimeStamp(0.38830986133804757);
    msg.setSource(12228U);
    msg.setSourceEntity(26U);
    msg.setDestination(11469U);
    msg.setDestinationEntity(226U);
    msg.s_id.assign("YLETTHJSUUOBFGJMPDVXWWCFUYFWIXILJITEITZGTPACBIVQHEGHHBCWUQGYQNALEGNKSMYDGBBATRFWSVALWMPUZTXUWQFCJSABO");
    msg.dist = 0.5267815724309186;
    msg.err = 0.797486285589208;
    msg.ctrl_imp = 0.30063645023140784;
    msg.rel_dir_x = 0.16246838672683506;
    msg.rel_dir_y = 0.6736205641968103;
    msg.rel_dir_z = 0.1264927919801273;
    msg.err_x = 0.8485495651830366;
    msg.err_y = 0.9060042933094676;
    msg.err_z = 0.05562948231453024;
    msg.rf_err_x = 0.6656324924833923;
    msg.rf_err_y = 0.5401613453604703;
    msg.rf_err_z = 0.10456182997139951;
    msg.rf_err_vx = 0.9452314727874738;
    msg.rf_err_vy = 0.7220477806755924;
    msg.rf_err_vz = 0.30646117311408216;
    msg.ss_x = 0.9812586781654818;
    msg.ss_y = 0.2696068204843123;
    msg.ss_z = 0.7860489959181104;
    msg.virt_err_x = 0.6073140014777083;
    msg.virt_err_y = 0.737165266849334;
    msg.virt_err_z = 0.93899271729889;

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
    msg.setTimeStamp(0.9454139250275121);
    msg.setSource(28385U);
    msg.setSourceEntity(75U);
    msg.setDestination(48347U);
    msg.setDestinationEntity(236U);
    msg.s_id.assign("UBKWNIQOGXXHTVJZZZZOIVTTYGASBYFYTWIKDTWORXOHRSQELGBMEJJMNAJYBRZGSGLFCLOHPLZUDETHMPQXQCWPLSFMLQVMEMULIULKGHNRAVO");
    msg.dist = 0.4389373540354966;
    msg.err = 0.026666656186340454;
    msg.ctrl_imp = 0.05788196959647973;
    msg.rel_dir_x = 0.8704250892529958;
    msg.rel_dir_y = 0.9872886881146692;
    msg.rel_dir_z = 0.05231043790452472;
    msg.err_x = 0.7129510975653478;
    msg.err_y = 0.04500456999680558;
    msg.err_z = 0.1411089852974181;
    msg.rf_err_x = 0.9925837923941985;
    msg.rf_err_y = 0.01954546523670031;
    msg.rf_err_z = 0.5793421747412498;
    msg.rf_err_vx = 0.49124738737821627;
    msg.rf_err_vy = 0.4925173289458087;
    msg.rf_err_vz = 0.11095343230234622;
    msg.ss_x = 0.24209342668180334;
    msg.ss_y = 0.7263952731125385;
    msg.ss_z = 0.1263310224110774;
    msg.virt_err_x = 0.9096979922292914;
    msg.virt_err_y = 0.20262321685635587;
    msg.virt_err_z = 0.8370251035921694;

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
    msg.setTimeStamp(0.7414786310326156);
    msg.setSource(39604U);
    msg.setSourceEntity(151U);
    msg.setDestination(19623U);
    msg.setDestinationEntity(113U);
    msg.timeout = 50337U;
    msg.rpm = 0.5921057749274624;
    msg.direction = 143U;
    msg.custom.assign("ZFYLLNDNUYERSNYWLTGXMXOYGTKLURYHJVWFYECXIHXQKDRVFZVEIQAZAUAWASUMURDRTVGTOGGSIXZBGWKXPCTCBMZQOTBLJJPQAHLSABZWPDNESVYCTUQMSQVABWJAHQVKFDGVTMOAEYUEEJSFCLEJJIBOYSZZIGNCPKZKIXQHOEGMJBDRXPCFPCUBCCOREKVKIFMNRPKRNULHLF");

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
    msg.setTimeStamp(0.7358611579116962);
    msg.setSource(9238U);
    msg.setSourceEntity(202U);
    msg.setDestination(2275U);
    msg.setDestinationEntity(25U);
    msg.timeout = 19745U;
    msg.rpm = 0.19735433546178127;
    msg.direction = 190U;
    msg.custom.assign("TCRECHZBWSEKIAAGRLBZCPPXVVUJAKRQYJPBHSPPCDVDMUKNOLIOWXQWXYTEKBMGEHVFNFNWGEMQJLUJUHUPABJSPFXMOYJGXDDTKSDTXSIYWUUETOVCVJLZFIRGHTOIDDIYUZABFYUSMWAALMWRNM");

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
    msg.setTimeStamp(0.36723810010568825);
    msg.setSource(14930U);
    msg.setSourceEntity(192U);
    msg.setDestination(62757U);
    msg.setDestinationEntity(75U);
    msg.timeout = 63350U;
    msg.rpm = 0.773798922991566;
    msg.direction = 180U;
    msg.custom.assign("BMTPEPGRXVFMJU");

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
    msg.setTimeStamp(0.8268516196152766);
    msg.setSource(8197U);
    msg.setSourceEntity(61U);
    msg.setDestination(51942U);
    msg.setDestinationEntity(85U);
    msg.formation_name.assign("THCFIJEKEJREFQORUPZSHDOZLZSGQGEFGAHHAZNAEJMZVTKUOVYOFUHPFLTDBRULPQQVESMDCWYSIFRXCMNGJEWRHHNZM");
    msg.type = 16U;
    msg.op = 80U;
    msg.group_name.assign("DLUVCDAWBQLCEJNPDUHMGQCYXMNMXBL");
    msg.plan_id.assign("MLMGECOAOMWEXRVQZEDCHJJINOKUAU");
    msg.description.assign("JHERYSCBZDEDPXRFWDJRFMXTOOZQYNQJRKUGBDNYLEKGCTYAIDJXGOILVCOKKVFURCKSAFCHZWCZUJIWWRTMQQNTHFENBPXBAPUYUVRWP");
    msg.reference_frame = 164U;
    msg.leader_bank_lim = 0.07066585261670233;
    msg.leader_speed_min = 0.049813338595921075;
    msg.leader_speed_max = 0.4417344509507951;
    msg.leader_alt_min = 0.6785314214381589;
    msg.leader_alt_max = 0.8818662843248366;
    msg.pos_sim_err_lim = 0.4105223267409226;
    msg.pos_sim_err_wrn = 0.5531132818914573;
    msg.pos_sim_err_timeout = 10923U;
    msg.converg_max = 0.5926260878206493;
    msg.converg_timeout = 53661U;
    msg.comms_timeout = 8906U;
    msg.turb_lim = 0.7792647924977213;
    msg.custom.assign("IWRVAEHEQEHLVNVUWTNGVINOGIWUEWVRDWPGRLMXISZEKKORBFPBECPRYCEYVMYYDPQFIDWFOOSYZJCBWWHJZUQZKRYKSCQBXGKPOERALQKBAYHLULXMCLOSTUALUTPWUFFGTFSPHJIRSMOXZDAJDAAEFNLPCZKEDNQQTNUSBZMHGDXOXFAZDSYZRKMQAXJWHJQMCZNCDYBIMXTRHPCYLVDBTGBPTGOHVFKKJGMUNHL");

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
    msg.setTimeStamp(0.9401908551828412);
    msg.setSource(63474U);
    msg.setSourceEntity(44U);
    msg.setDestination(59910U);
    msg.setDestinationEntity(39U);
    msg.formation_name.assign("JDKOYTUUWLNETPQJJCBMGNEKURQMVKUYCQOUPKNRZLGXJECMOMWFDTFVBGVIOAKWRXTMSZVVAPLTEQHGMZMTUFYSDJXYXLROHLVGLRZFBENDPPSOXOIRVJFASLKHGPBBMQKLXWYNLWLGHCBHBKXHSBSDUYVCICKBUKNIZCXQMTAXGTWBHFZPSOHYFWYNRAAQFWQIZVZUISEQTA");
    msg.type = 114U;
    msg.op = 198U;
    msg.group_name.assign("ESZDZWVNXPELVGTCWBCCOWRXUEVMWXDUODBEMIWSHSOMGLYTSBOBYBHGZUAQRPQIVJOAFFNIYKMWIMPAGXDEQC");
    msg.plan_id.assign("XWGCUYRMJAYNPJELYUNRXFDEZILRQTMILEYEGTSHDRBVHQPOHYASZSRBUQUMKZFLSWDCCJGUJWOLAYHKCZIMVALVHXSCQDCGTINBIIADLRUYVFUFPCCKWFDVELZBRIHCVQENBOMTMSRYSZ");
    msg.description.assign("KGQKXPBGJTJTSEJQEOXLUBLIWWXAXVQGWVHSQDRXFOTZQVDEAHWKDSUYAZATMHOXFWJWOADTWPRLECYQQXPVJZXQJIHDPHBPFYMTCVRDMIIIJNNUZABOIONCNXYPFBMGCBYFLMTAWMDTRRVPDQYVUOKVSZMARINKDUGANUUPMRWSNZPLHNKLHTRBMWYIZCKVJH");
    msg.reference_frame = 153U;
    msg.leader_bank_lim = 0.9671255029870717;
    msg.leader_speed_min = 0.369306086692354;
    msg.leader_speed_max = 0.3389373136259767;
    msg.leader_alt_min = 0.12789776102118866;
    msg.leader_alt_max = 0.27029454970364963;
    msg.pos_sim_err_lim = 0.7088368677766891;
    msg.pos_sim_err_wrn = 0.5931326881202182;
    msg.pos_sim_err_timeout = 46814U;
    msg.converg_max = 0.09440468225745413;
    msg.converg_timeout = 37837U;
    msg.comms_timeout = 58252U;
    msg.turb_lim = 0.31977103018914;
    msg.custom.assign("LDBYRUFQJOKBKEXPVENNZXDYEMTRKXLSCAHUZUGOKVXOWPLUWXS");

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
    msg.setTimeStamp(0.5598444864611173);
    msg.setSource(40627U);
    msg.setSourceEntity(67U);
    msg.setDestination(16332U);
    msg.setDestinationEntity(43U);
    msg.formation_name.assign("ESWUPQLTYSYKUYIODETJQBGYKNAZFFZWMJZEMOXXKPAJEJHHWHJGEVCNANUQOWRUNGKIADCDSHUBELIEOTBMLCEFWXSAFPZWSVVKZJAHAXWJKMXIEMOMIUCXZQTXGWFRHCQKZDVNBHQCYFAQKVTHHDLNFLRNYOPNCEBGILMWTCJXZARIRINVU");
    msg.type = 36U;
    msg.op = 7U;
    msg.group_name.assign("TJAZDEQMUXDELWLICUEYGWRWUYMHQHAJKUUYHYONATKIXILEHTQWQWDOHGRRNOBBEVYBZUFZXVGPXGCMYSKAOFVKTOESZHSDFLTJCJIDPYZULZGXPQEOPRKNBRNBIYGSQBVUVHISADEYCQFI");
    msg.plan_id.assign("FYABKGDAKPDJUYQNAHVCYLCLMACOPGAFMIYCYRFTLEFKFUODZLUKBAXWNJDLVHUPRKNNFQHVGRPAPZSJR");
    msg.description.assign("ZAAXEWRFYQCWIXYRHVTTAKLRYREGZNSFHHUYKQDWIBOGVMNRWMJDZDQXJWLLKAACOHIEJOFWWCSGXPQTPDXKSBROHZYCMEAMTIEXFEPZGQNTUKMDQVLIUKYSIWYYWMKNCDDKSJTNXLBOVHHJVOSUDGOQNGIZSRFGGTUJRUEOFCNRRVPMOML");
    msg.reference_frame = 15U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47798U;
    tmp_msg_0.off_x = 0.7791443169806869;
    tmp_msg_0.off_y = 0.5986056673737902;
    tmp_msg_0.off_z = 0.8401980408555924;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.35893300481667156;
    msg.leader_speed_min = 0.05826637230812337;
    msg.leader_speed_max = 0.24300826605672943;
    msg.leader_alt_min = 0.030280447100894614;
    msg.leader_alt_max = 0.6990818336382787;
    msg.pos_sim_err_lim = 0.11887724378151643;
    msg.pos_sim_err_wrn = 0.33919504354870933;
    msg.pos_sim_err_timeout = 22155U;
    msg.converg_max = 0.08750324774381846;
    msg.converg_timeout = 896U;
    msg.comms_timeout = 61271U;
    msg.turb_lim = 0.4465237113661128;
    msg.custom.assign("KEFRTUKCWXWKSIDXWAYJINMLDCRNPXVHDIHWJXBCLIDMIVVRONISMKQZGLKXVPTTYYJNAYWFWAZENBGPNZSSMOPZOMBREGYJZJFHKGRVXIESVUSMHSQCXHUAYJHDVLLWOZIPYRFU");

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
    msg.setTimeStamp(0.18729012071684148);
    msg.setSource(18664U);
    msg.setSourceEntity(190U);
    msg.setDestination(7622U);
    msg.setDestinationEntity(223U);
    msg.timeout = 28612U;
    msg.lat = 0.10435311172954165;
    msg.lon = 0.9299440908271408;
    msg.z = 0.24465922305702326;
    msg.z_units = 153U;
    msg.speed = 0.914110705941906;
    msg.speed_units = 240U;
    msg.custom.assign("BUQJMUOYGTUESQWXNFLOMFWXLDDXSVOBAYHZTGDYPMJNNKFGDCGPRBOCRDBACDXGSSVTEDXMWVTKAYIJTYRRKCQVQIV");

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
    msg.setTimeStamp(0.5608930181047627);
    msg.setSource(29934U);
    msg.setSourceEntity(8U);
    msg.setDestination(8652U);
    msg.setDestinationEntity(17U);
    msg.timeout = 46152U;
    msg.lat = 0.9130934091009745;
    msg.lon = 0.8718459826549124;
    msg.z = 0.27790664797764797;
    msg.z_units = 49U;
    msg.speed = 0.2545694521856743;
    msg.speed_units = 238U;
    msg.custom.assign("TFJFKWERBDBCZJKEAOGZFXGBMQVUWMYWBNGPLHUOSAERZRLLNXKAXZFVFKVPHHTAZCNOHUMICNENZCJXSQJLTCEFLITFKPYDMRGOITILYRTLODTXUUIUAXHRPDWQWYMVJNAMOWQCLAOUFSGJKTZKBXZPKLSDTVUQAHIMVY");

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
    msg.setTimeStamp(0.47685006010579545);
    msg.setSource(63707U);
    msg.setSourceEntity(10U);
    msg.setDestination(60738U);
    msg.setDestinationEntity(162U);
    msg.timeout = 2755U;
    msg.lat = 0.9927916572690527;
    msg.lon = 0.5038008120067075;
    msg.z = 0.6860891686278178;
    msg.z_units = 5U;
    msg.speed = 0.25501788064658404;
    msg.speed_units = 113U;
    msg.custom.assign("KPWQRUVUFPCLKJOMKVHB");

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
    msg.setTimeStamp(0.8906822880672193);
    msg.setSource(40736U);
    msg.setSourceEntity(253U);
    msg.setDestination(59122U);
    msg.setDestinationEntity(161U);
    msg.timeout = 42429U;
    msg.lat = 0.33831132515731555;
    msg.lon = 0.3381029901736634;
    msg.z = 0.04759901467501326;
    msg.z_units = 199U;
    msg.speed = 0.017586224477480927;
    msg.speed_units = 1U;
    msg.custom.assign("DEVADRPSLAVXURTUS");

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
    msg.setTimeStamp(0.7520206863134477);
    msg.setSource(14541U);
    msg.setSourceEntity(111U);
    msg.setDestination(37034U);
    msg.setDestinationEntity(29U);
    msg.timeout = 15512U;
    msg.lat = 0.11229314046642425;
    msg.lon = 0.3501044240793386;
    msg.z = 0.83565733124667;
    msg.z_units = 204U;
    msg.speed = 0.7118538295977745;
    msg.speed_units = 42U;
    msg.custom.assign("PXJNSBRYFNNNQREPSQANCKCSFJEWUVMXVJROKMXIERRWNAYVXIVDGREIFUVKSIRTUUXVGGQWRGCLYIIREWPOHWAWGNGIZQSOZBOHSEMD");

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
    msg.setTimeStamp(0.027447265094892703);
    msg.setSource(31848U);
    msg.setSourceEntity(106U);
    msg.setDestination(19880U);
    msg.setDestinationEntity(107U);
    msg.timeout = 41633U;
    msg.lat = 0.5519302667575439;
    msg.lon = 0.2981896526325122;
    msg.z = 0.9433348500429072;
    msg.z_units = 33U;
    msg.speed = 0.19897574329284562;
    msg.speed_units = 249U;
    msg.custom.assign("TIFCBDFYGFZNHNGHAZDLIXKLPYESGRQERZJNYAJPSMDVQSDKUAHFKVRJQGSXCVUQBLXJUYXJLXXNIDKETPRFMORMHJBWHMVXUAZNVVMDWUULYRQGCTAOJPORPPBDPAZCBNVLLWLOAHTVISZZASJQOKWXHIGHCMHUYQWYFMKRCBUSCOSSNUWAEKSJIEEIEVEPBPZDBTKQTFWKOFWNWTIBLCVWJFGZONMFLROOMYXTCGIB");

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
    msg.setTimeStamp(0.3997557781590708);
    msg.setSource(19797U);
    msg.setSourceEntity(182U);
    msg.setDestination(62382U);
    msg.setDestinationEntity(248U);
    msg.arrival_time = 0.06796494474456038;
    msg.lat = 0.8516398883277249;
    msg.lon = 0.3131183013053732;
    msg.z = 0.9488449794288702;
    msg.z_units = 221U;
    msg.travel_z = 0.2992738032140253;
    msg.travel_z_units = 95U;
    msg.delayed = 145U;

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
    msg.setTimeStamp(0.7424128039783613);
    msg.setSource(54700U);
    msg.setSourceEntity(213U);
    msg.setDestination(30774U);
    msg.setDestinationEntity(182U);
    msg.arrival_time = 0.9023282817397664;
    msg.lat = 0.7995610114937084;
    msg.lon = 0.03644303401309701;
    msg.z = 0.935877445923962;
    msg.z_units = 56U;
    msg.travel_z = 0.9382205182451449;
    msg.travel_z_units = 9U;
    msg.delayed = 4U;

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
    msg.setTimeStamp(0.8875002062638352);
    msg.setSource(52496U);
    msg.setSourceEntity(52U);
    msg.setDestination(41773U);
    msg.setDestinationEntity(112U);
    msg.arrival_time = 0.9328101390995555;
    msg.lat = 0.4679022979139027;
    msg.lon = 0.9263994810274515;
    msg.z = 0.7221443512826373;
    msg.z_units = 88U;
    msg.travel_z = 0.2403674686660151;
    msg.travel_z_units = 219U;
    msg.delayed = 39U;

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
    msg.setTimeStamp(0.4561277239586534);
    msg.setSource(6633U);
    msg.setSourceEntity(73U);
    msg.setDestination(17828U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.9739461523580663;
    msg.lon = 0.9701239484164659;
    msg.z = 0.7272304868986286;
    msg.z_units = 253U;
    msg.speed = 0.9833775683743248;
    msg.speed_units = 227U;
    msg.bearing = 0.3409965447613379;
    msg.cross_angle = 0.49156588198587814;
    msg.width = 0.9052379427395477;
    msg.length = 0.9188934847229097;
    msg.coff = 178U;
    msg.angaperture = 0.18152197365143397;
    msg.range = 5116U;
    msg.overlap = 148U;
    msg.flags = 117U;
    msg.custom.assign("IPDRKFTSAYJRENOIDIRGRYMDNPIWQUFBTEUMHCLIPNZLXDQYJJTNTUWKLOSZHEQKKZABOUKRIXKFVYZRDJSHEVLNLVYGSIDCZQPNXGQQBMXRPCYXZLNZG");

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
    msg.setTimeStamp(0.7205751368048768);
    msg.setSource(54479U);
    msg.setSourceEntity(54U);
    msg.setDestination(12900U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.9492801121475902;
    msg.lon = 0.5320988624938654;
    msg.z = 0.6292270823429675;
    msg.z_units = 199U;
    msg.speed = 0.5264946359904413;
    msg.speed_units = 218U;
    msg.bearing = 0.015476097956541479;
    msg.cross_angle = 0.7549769822648392;
    msg.width = 0.15143688868725214;
    msg.length = 0.15240788807601724;
    msg.coff = 111U;
    msg.angaperture = 0.9484733548474826;
    msg.range = 25539U;
    msg.overlap = 111U;
    msg.flags = 239U;
    msg.custom.assign("ORAKPVITALXZHMROELFHPNIWGTFMFKGNBNIH");

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
    msg.setTimeStamp(0.5794070455130378);
    msg.setSource(18250U);
    msg.setSourceEntity(80U);
    msg.setDestination(26900U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.20584104019329863;
    msg.lon = 0.6087389759067644;
    msg.z = 0.6158751543294579;
    msg.z_units = 154U;
    msg.speed = 0.9152165687550206;
    msg.speed_units = 114U;
    msg.bearing = 0.8479749975067976;
    msg.cross_angle = 0.5430304348877387;
    msg.width = 0.3249921575592737;
    msg.length = 0.8815876425986919;
    msg.coff = 30U;
    msg.angaperture = 0.9054788692011468;
    msg.range = 5532U;
    msg.overlap = 223U;
    msg.flags = 235U;
    msg.custom.assign("MCUGLAZPFAFJTPKEFNDVGXKDFPRAKXEGQVJQMFVNZRYRGBSTUOCZVYLLSLNITKZDLXJIDQCOLJWCKKDDFMTYMC");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.20862139418845516);
    msg.setSource(8052U);
    msg.setSourceEntity(200U);
    msg.setDestination(15393U);
    msg.setDestinationEntity(165U);
    msg.op_mode = 4U;
    msg.error_count = 239U;
    msg.error_ents.assign("LGIOZEFDBULDEDXJCHYFDIXMQTZYVYSLEYCBJGKDMSDWXZVEAVLFFBSUEBOOLMPYMYNQAIQVPIZHPMXWSSPTJEZTCBMRFQLXUJ");
    msg.maneuver_type = 58009U;
    msg.maneuver_stime = 0.8820367479676151;
    msg.maneuver_eta = 29035U;
    msg.control_loops = 2504388716U;
    msg.flags = 203U;
    msg.last_error.assign("GQXONHWWYYPGTQHBDMIJUUXFUBSVOISFARGCFSTXILPQGTQBKLKWMUHVJDNCKOOZQJCJRZZDZNKUCCHTSRKOWPIVVSAFDECFJAAQMNYFTENYEPOTRUAGNLUWFEMDKFGPZDIVYEUQYKGHXAJKRITEHVVIFKXYEIEDSJXZVLCTKLWICTMYP");
    msg.last_error_time = 0.7890298273673915;

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
    msg.setTimeStamp(0.2312035936000455);
    msg.setSource(28233U);
    msg.setSourceEntity(12U);
    msg.setDestination(6922U);
    msg.setDestinationEntity(122U);
    msg.op_mode = 144U;
    msg.error_count = 57U;
    msg.error_ents.assign("KAJZJCHQYWOFMDXYMKYDWLNKSTRQSBMHEDUWNOAIPOMSESCFYIJPBWWEZHRWONCSMJTIRFE");
    msg.maneuver_type = 24300U;
    msg.maneuver_stime = 0.5332721448561116;
    msg.maneuver_eta = 54159U;
    msg.control_loops = 4050219225U;
    msg.flags = 54U;
    msg.last_error.assign("VOYIJQNXCEKZSADCELJBAREHZIICSYIOFTAZWRKZYSXBOMUYSLTJPMRSRLWIHWBVFWQEKDJHCTQYBRLUGOKSZOWPWNPVGUXRODKYNVMZYZLDTBPUQLQABJKFMTPHJZFKMVBWGPUVIIJCEVAASRCUQNPMEXPOKQSWPQRMONT");
    msg.last_error_time = 0.08987014724594566;

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
    msg.setTimeStamp(0.3866530544086839);
    msg.setSource(33961U);
    msg.setSourceEntity(186U);
    msg.setDestination(6649U);
    msg.setDestinationEntity(142U);
    msg.op_mode = 166U;
    msg.error_count = 252U;
    msg.error_ents.assign("FQKQOGDTZMFMAIXVQQPKEEUHWLAJTSUFPKKVECYTUOEFIMOKUNCAYIBYWXWBUAROLTSLMVEJDFHISMHSMXTXDCWRBXAGNMAGT");
    msg.maneuver_type = 6217U;
    msg.maneuver_stime = 0.4493621768084137;
    msg.maneuver_eta = 18567U;
    msg.control_loops = 2613761460U;
    msg.flags = 42U;
    msg.last_error.assign("ACDEKSMZDZKRLUOWUVFNDSNXHKIGEPHHXOYRSKZXGYPQITPYTNVXRSYLNB");
    msg.last_error_time = 0.8492310973085436;

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
    msg.setTimeStamp(0.6086661933335707);
    msg.setSource(58594U);
    msg.setSourceEntity(224U);
    msg.setDestination(10625U);
    msg.setDestinationEntity(3U);
    msg.type = 60U;
    msg.request_id = 53582U;
    msg.command = 178U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 29381U;
    tmp_msg_0.lat = 0.557711059465258;
    tmp_msg_0.lon = 0.8513088887062608;
    tmp_msg_0.z = 0.17399593363065224;
    tmp_msg_0.z_units = 236U;
    tmp_msg_0.duration = 4645U;
    tmp_msg_0.speed = 0.5728032058239757;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.type = 190U;
    tmp_msg_0.radius = 0.11968905850979772;
    tmp_msg_0.length = 0.8519652269828545;
    tmp_msg_0.bearing = 0.8532047102334718;
    tmp_msg_0.direction = 191U;
    tmp_msg_0.custom.assign("VESAGANRWXSLGTABJXBIBWEKNZYBPOQVDBDIMKXXRQGPKQNUSPMLHYSGLQOJCMDRKOUBGMUQJOJCTUWSTFJTDFALAKYYCJNXSTPJBFIVZMGUUKWZJDQNHCMOMXNBUQYYIFHRAPFGWLTGUFEXHIPRUVJFEWETYVBXWLVRISPAKZVDGMDKOIOPDCRDCFHWIONLKCLZYHUZOKXHHQCEGCRVZIWNJZTAZNQISBTDEPHYYMFLNVLZSRQWV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53889U;
    msg.info.assign("CQGPSHZHLXJRTTKDPOCVOEVBAZGCWWVXUFOYFBZPXGTRNJGQQJGBKEKBEDFQBPWTAJXFDIOMKLGRTRQEKNFEHJAHXLFP");

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
    msg.setTimeStamp(0.9836036191837806);
    msg.setSource(45723U);
    msg.setSourceEntity(35U);
    msg.setDestination(44483U);
    msg.setDestinationEntity(90U);
    msg.type = 150U;
    msg.request_id = 50842U;
    msg.command = 119U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("EJAPZCBWMLQAFHRSOFOVUOLXBUHCZWXBCFALKBIV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44053U;
    msg.info.assign("QJBCZTCILMJUXKWDHBSIMCTBIHGFNFKZJJLDTBSVGKIANFAEGQTXGVOFBOTUEJOQSQXEJOZJTUIYMNWLOIJBHAZRWZTUAGYFEIEZSMZGLCPHSOBVV");

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
    msg.setTimeStamp(0.7641792544577878);
    msg.setSource(34508U);
    msg.setSourceEntity(87U);
    msg.setDestination(43336U);
    msg.setDestinationEntity(191U);
    msg.type = 76U;
    msg.request_id = 38287U;
    msg.command = 52U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.2305892729168213;
    tmp_msg_0.lon = 0.6800620486772775;
    tmp_msg_0.z = 0.49558402432295334;
    tmp_msg_0.z_units = 85U;
    tmp_msg_0.speed = 0.17693605646492927;
    tmp_msg_0.speed_units = 157U;
    tmp_msg_0.bearing = 0.5267925895003931;
    tmp_msg_0.cross_angle = 0.4337712614428403;
    tmp_msg_0.width = 0.7555980500051617;
    tmp_msg_0.length = 0.35045570717639773;
    tmp_msg_0.coff = 83U;
    tmp_msg_0.angaperture = 0.08250322555166145;
    tmp_msg_0.range = 48972U;
    tmp_msg_0.overlap = 137U;
    tmp_msg_0.flags = 193U;
    tmp_msg_0.custom.assign("VBVKMDZWZJCYZJLOLQAERMPJQWTRJLXWPNPGLHBCFCWM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14457U;
    msg.info.assign("JKAYAQANPEPQVVTGXQECMBOSAHICLBWIHJISKTQDKBJMTZKRBTYSKAWPQNWWERBURFEKGWNDZGZSNLPZIUVJOYWZAGBXKKFVDZPFMCXAHNSFWUPVGURDXDAAMPJNJMXLJXZYHPWXRKFPFDXMIMBLRSOXFBTLERMUCOOOVDLJEUETHGWLQNTVQSQKCPLYUQSZDINOVEHNMCEHHFVYBLHRUMSYGQJCIYGXYRYICTHDCCUOTZODIIEVJTFLNZSRG");

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
    msg.setTimeStamp(0.16627319903263593);
    msg.setSource(44510U);
    msg.setSourceEntity(46U);
    msg.setDestination(65478U);
    msg.setDestinationEntity(108U);
    msg.command = 252U;
    msg.entities.assign("ODMDTRVTYUQBQMOPICLZNGXKZSLLCVPVZJCAAOEYIJWYJVWMSOISCXFPKTZXZNIRMVEWKHKBOUKHISUSRELTJQAHETVUFFUYWBINNEIYNP");

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
    msg.setTimeStamp(0.6336394921124661);
    msg.setSource(24588U);
    msg.setSourceEntity(24U);
    msg.setDestination(11433U);
    msg.setDestinationEntity(135U);
    msg.command = 220U;
    msg.entities.assign("GZDPTNHKDDXNBNUHIDMODJVWVUINJHHZOVYMCBYJOCHMGDQNQSQZZUKAPHQLPUOUROJJYERWTFUXWSQMTXVDDYIFMSSROKSFXACSTAEPQMWKUWAPFIMNGCBOWCNADVNQNVRKRQICJEYYRBFAKCYOFIMGZTQDRLTECLZFXZFBFARVSWITRHCLEWLGVABEHALYBXJYGWOGXBETPVQLELMHXJUASPHVRIIJTBSKGLWBLSMUXPZPZUEKOC");

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
    msg.setTimeStamp(0.23777921953251369);
    msg.setSource(33328U);
    msg.setSourceEntity(58U);
    msg.setDestination(16756U);
    msg.setDestinationEntity(193U);
    msg.command = 179U;
    msg.entities.assign("MONGRTOJQDGPHECWGCSGOVVMTJWJUPRKRRTNTFQIQWKSEHPWSGTIMLSIYMDGFSXTYGUHROLDLSTFUZJLQITNZONPWZILEUDNDJRDFYWMIAJPVSZKELZBRAQFVDXHXPBHHZWLAGCIKRYORHPXACYDTEHFOLVFSBYCDPQSZYNCEXCBUUROQXZULQWJKAEFCLIKZIXBUABGAMJHWBYVEMKQEAFYJNKMKOBVXIUPVPBSCBHJMTNXGQVENXMONDKCV");

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
    msg.setTimeStamp(0.5368465750057253);
    msg.setSource(3830U);
    msg.setSourceEntity(89U);
    msg.setDestination(3803U);
    msg.setDestinationEntity(95U);
    msg.mcount = 142U;
    msg.mnames.assign("HJZSLTQJATWQXXQJJOQUZQBNNCLFAZBTTDPXCJRBZQQXUAHKFZPERLBCYSVRWDLDHYIQNDWJFJELEYXFUDLWCSNIUGHAAPGMESDCEOKBLGLVXDEFEJDUMIWWHPZIKRHMXRUMOVLTHGEYVOUFGMPYIOITEGAVZGITJPCPQRDNCFYVJUSRPAXOAYDXAMO");
    msg.ecount = 227U;
    msg.enames.assign("TTRYWZOPUHQIIENAHCOOTNJVMQZZCJEHRMUBEWMSUDPZWRMRKAKDASYYFSHGXXTBTDCUPZNWPSIRBEVXPCRGLKJLEEVYVOPXDQXWMFYUTFPSZLHOFZNRSHSQYGGVJLWKLSQCOODBLXKIIA");
    msg.ccount = 209U;
    msg.cnames.assign("KZXLCIYCFBOCIATKRVMVXQDXZNDJMPHBJACWOJHKOBGKPVOYELNOOGEGEUWDYWQOVQXHGZJONFDSISCRMWTPDPUHINMKWUANDPUETDCLFIVVFJRNJPHZLPEAKKPWIRUYRVHSZRIKDSEMLTTNYZSEWFGHMDXGPFUSLPBKESBZIQOKIFGLYGTLJTFYLCYVGUBQVYMJAFMETUMUQEHNCGQLAXHQXCOSJNRDXBQRAJBCTVM");
    msg.last_error.assign("HKNZPTPSJFSCEDNDXARLIIZGRWBESMOPTARTVFYRHHPTLXPJJAFMTUXYQBNUQWMXAHGBQLWNEWHVMNDLTFRAQMVZUYQOMAFQIZTHYWQBPFFGULWNHRCQIOSCVRVURREJSHDKKQEKYRZDKPZSNTFTPMACCBVOAGOUZDXGYYEZLGBOKOIAAJZFIKISILODCJVVEDNGVGYMXSLYXTHNHWIGBJLVOPUCXPMWUUYBIJGECSJZWK");
    msg.last_error_time = 0.6232388670365906;

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
    msg.setTimeStamp(0.904672762838613);
    msg.setSource(39934U);
    msg.setSourceEntity(149U);
    msg.setDestination(37516U);
    msg.setDestinationEntity(23U);
    msg.mcount = 202U;
    msg.mnames.assign("JMXWCBIXTTCEAMOPUMCRAUSDPEMYWIPMIBQZZOUYZFEVTLHLJMCKBQDDRTHHWNLGJXJCYGSYPEDSNIFVZFCHZVGXRDEJKWDMVTETEQBRNBN");
    msg.ecount = 202U;
    msg.enames.assign("TZUEUCDHQBIEOBYEAWUXWXSDDBDMWZPNCJUSDGFGVCYVFFQLHGHKPZZXCZZJLGRHQOHCORJUWPUKTSYAJMXLENNKVLVQMIDTTQFKSNLECONHFZLXDFHNAPNKVACGMSYKOPOBUNYRMWWERKSXHSBGOJNRBJIYTLPZQMQYPGGYXWTASYEFDMMDCJAFPVGQFXBDCTRBRIP");
    msg.ccount = 166U;
    msg.cnames.assign("MHUFZKOPBSNSQQEOIZGUDXSRTJKEQMBFEJKVYAPQEPAVMAAEWBVQCRQCJTXYXONSPXWDHHCWMLSIHLGQTTDHLDFWRGUKRPIPCSTGNJVLXK");
    msg.last_error.assign("IBOPWTLAHJZXPZXYPASGMOYUXUOYNEXZBXVCBUWJONEBVYPNHYXTQQGTPZTQHXBGFHRCVQPGMSKSJYQAMEZQLLXLPFVWHWERSELKYRQSAGBKCPITWREGYPCSISQDQFETRLODVCJOBMGAZCJCBURTGJCAKVGIELSYIXFORMUKNWUORIZJUMUNUWKMDDJNVHRKCAKKHOYWRDNDZVKFASTVCWBILLFMDTXHJBIWSOMULNIETFMPIZFAFNE");
    msg.last_error_time = 0.9972080440142768;

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
    msg.setTimeStamp(0.49091978007250414);
    msg.setSource(55441U);
    msg.setSourceEntity(216U);
    msg.setDestination(30595U);
    msg.setDestinationEntity(191U);
    msg.mcount = 246U;
    msg.mnames.assign("JTBOPBUWTIICEMUFWDUYJHMROYPMN");
    msg.ecount = 71U;
    msg.enames.assign("HTLSHJXDWAHJHPUTYNEKFTOMZSVNYYPEVROCUUUEJZCIBLTBZGASJKSRAGLPCLIYSGJFCBXQMLKNXCKILDVPPKRODIRPPMZFZOYHYMWYSPXZKBFIWXCZMNORFPNQNYQVOQHQNAMKLGEUUVFRDGQGSWXGETUHYRBZBTOUXGWQFDVJUIVWWKJY");
    msg.ccount = 163U;
    msg.cnames.assign("SPKHXUMFZFYTOV");
    msg.last_error.assign("WULPCQWGOKMSYKWMEVLNNKNPAWKNFHUEMLRBFXEQZGHYLBFGNXZRBKJJCDTITJOOZRYOZTRDAXUWHKNYQULAPDZNNSGZMVTQDDCJBEYVTQGOUEOGHMQJYRVKAVCDOKRYFKGJYFQVZKSUGJXXEXGSEVWAVILIIJNUYUQBILJCFOUITPNBFVBEZBMLBLXRPSDETFAQOWIDSSASHCCOFPWMYTPZSWDDRTIAHFMIBC");
    msg.last_error_time = 0.16753400189779255;

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
    msg.setTimeStamp(0.9550927888784926);
    msg.setSource(9157U);
    msg.setSourceEntity(242U);
    msg.setDestination(169U);
    msg.setDestinationEntity(195U);
    msg.mask = 26U;
    msg.max_depth = 0.5888940235455957;
    msg.min_altitude = 0.9553145581638063;
    msg.max_altitude = 0.5723375550961735;
    msg.min_speed = 0.08222556942939463;
    msg.max_speed = 0.7559665035803776;
    msg.max_vrate = 0.07150975136777937;
    msg.lat = 0.8875775523955873;
    msg.lon = 0.5059242319409641;
    msg.orientation = 0.018795343303436907;
    msg.width = 0.8648121145623295;
    msg.length = 0.32687362868868886;

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
    msg.setTimeStamp(0.6960081384610814);
    msg.setSource(22169U);
    msg.setSourceEntity(34U);
    msg.setDestination(57483U);
    msg.setDestinationEntity(119U);
    msg.mask = 57U;
    msg.max_depth = 0.6347592436880946;
    msg.min_altitude = 0.6651211345839161;
    msg.max_altitude = 0.6290056648561533;
    msg.min_speed = 0.340277270089708;
    msg.max_speed = 0.9566198797789944;
    msg.max_vrate = 0.602412370060308;
    msg.lat = 0.900508590511718;
    msg.lon = 0.8481626706771033;
    msg.orientation = 0.4179852728160257;
    msg.width = 0.8988631610627137;
    msg.length = 0.9344206394661005;

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
    msg.setTimeStamp(0.0740469975322019);
    msg.setSource(14185U);
    msg.setSourceEntity(250U);
    msg.setDestination(5234U);
    msg.setDestinationEntity(234U);
    msg.mask = 43U;
    msg.max_depth = 0.6654499453509487;
    msg.min_altitude = 0.8406994433491491;
    msg.max_altitude = 0.2387206110553981;
    msg.min_speed = 0.9985564903226427;
    msg.max_speed = 0.914266942705329;
    msg.max_vrate = 0.6666038510051303;
    msg.lat = 0.8609257805187434;
    msg.lon = 0.4114533476739364;
    msg.orientation = 0.8067589762942825;
    msg.width = 0.8791093620814953;
    msg.length = 0.442616478880524;

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
    msg.setTimeStamp(0.7912275897873857);
    msg.setSource(19911U);
    msg.setSourceEntity(118U);
    msg.setDestination(56411U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.9746597988282012);
    msg.setSource(38076U);
    msg.setSourceEntity(27U);
    msg.setDestination(32653U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.9593728832993362);
    msg.setSource(40433U);
    msg.setSourceEntity(4U);
    msg.setDestination(7174U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.8462219967302902);
    msg.setSource(56848U);
    msg.setSourceEntity(74U);
    msg.setDestination(97U);
    msg.setDestinationEntity(143U);
    msg.duration = 26276U;

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
    msg.setTimeStamp(0.7059885539252521);
    msg.setSource(41295U);
    msg.setSourceEntity(199U);
    msg.setDestination(60068U);
    msg.setDestinationEntity(38U);
    msg.duration = 40507U;

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
    msg.setTimeStamp(0.6084155631313288);
    msg.setSource(63636U);
    msg.setSourceEntity(206U);
    msg.setDestination(24477U);
    msg.setDestinationEntity(107U);
    msg.duration = 25366U;

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
    msg.setTimeStamp(0.14930481360275405);
    msg.setSource(15407U);
    msg.setSourceEntity(56U);
    msg.setDestination(18029U);
    msg.setDestinationEntity(43U);
    msg.enable = 40U;
    msg.mask = 1966497503U;
    msg.scope_ref = 3392905118U;

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
    msg.setTimeStamp(0.6271294485080497);
    msg.setSource(21596U);
    msg.setSourceEntity(238U);
    msg.setDestination(62216U);
    msg.setDestinationEntity(127U);
    msg.enable = 219U;
    msg.mask = 1801303741U;
    msg.scope_ref = 4249542603U;

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
    msg.setTimeStamp(0.5922453947387001);
    msg.setSource(21631U);
    msg.setSourceEntity(181U);
    msg.setDestination(21557U);
    msg.setDestinationEntity(169U);
    msg.enable = 179U;
    msg.mask = 3989677152U;
    msg.scope_ref = 2449291929U;

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
    msg.setTimeStamp(0.5900797984832769);
    msg.setSource(3036U);
    msg.setSourceEntity(16U);
    msg.setDestination(21840U);
    msg.setDestinationEntity(116U);
    msg.medium = 65U;

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
    msg.setTimeStamp(0.16562604501560652);
    msg.setSource(60423U);
    msg.setSourceEntity(244U);
    msg.setDestination(32220U);
    msg.setDestinationEntity(159U);
    msg.medium = 204U;

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
    msg.setTimeStamp(0.7022000432932125);
    msg.setSource(44803U);
    msg.setSourceEntity(115U);
    msg.setDestination(12229U);
    msg.setDestinationEntity(181U);
    msg.medium = 201U;

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
    msg.setTimeStamp(0.07010476463006032);
    msg.setSource(55316U);
    msg.setSourceEntity(147U);
    msg.setDestination(32780U);
    msg.setDestinationEntity(174U);
    msg.value = 0.8136636188195155;
    msg.type = 145U;

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
    msg.setTimeStamp(0.21894821221433547);
    msg.setSource(18457U);
    msg.setSourceEntity(118U);
    msg.setDestination(45037U);
    msg.setDestinationEntity(72U);
    msg.value = 0.6245488351942972;
    msg.type = 164U;

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
    msg.setTimeStamp(0.7687403513914896);
    msg.setSource(40617U);
    msg.setSourceEntity(80U);
    msg.setDestination(37226U);
    msg.setDestinationEntity(179U);
    msg.value = 0.05984286259930249;
    msg.type = 245U;

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
    msg.setTimeStamp(0.42069251833109034);
    msg.setSource(5959U);
    msg.setSourceEntity(206U);
    msg.setDestination(53367U);
    msg.setDestinationEntity(92U);
    msg.possimerr = 0.4336922927579103;
    msg.converg = 0.3880485712104962;
    msg.turbulence = 0.7751922053825353;
    msg.possimmon = 221U;
    msg.commmon = 97U;
    msg.convergmon = 139U;

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
    msg.setTimeStamp(0.5458891706870752);
    msg.setSource(8095U);
    msg.setSourceEntity(79U);
    msg.setDestination(59655U);
    msg.setDestinationEntity(202U);
    msg.possimerr = 0.16442695115407036;
    msg.converg = 0.6254245712692029;
    msg.turbulence = 0.3925752183686414;
    msg.possimmon = 153U;
    msg.commmon = 199U;
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
    msg.setTimeStamp(0.17155877329473967);
    msg.setSource(63361U);
    msg.setSourceEntity(27U);
    msg.setDestination(12245U);
    msg.setDestinationEntity(165U);
    msg.possimerr = 0.8163458436652902;
    msg.converg = 0.665905263113124;
    msg.turbulence = 0.9190115908490925;
    msg.possimmon = 73U;
    msg.commmon = 42U;
    msg.convergmon = 47U;

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
    msg.setTimeStamp(0.5808215686962873);
    msg.setSource(28781U);
    msg.setSourceEntity(40U);
    msg.setDestination(6198U);
    msg.setDestinationEntity(150U);
    msg.autonomy = 33U;
    msg.mode.assign("NRICZYLCBLGLQUHNQUWVVOYW");

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
    msg.setTimeStamp(0.1633680030291086);
    msg.setSource(29158U);
    msg.setSourceEntity(217U);
    msg.setDestination(63726U);
    msg.setDestinationEntity(226U);
    msg.autonomy = 82U;
    msg.mode.assign("LMVGXZRPJKQFAOTPPDJOPWQUPEENISXFBZQHVDHJBLPDSE");

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
    msg.setTimeStamp(0.3853536154529402);
    msg.setSource(43498U);
    msg.setSourceEntity(148U);
    msg.setDestination(18967U);
    msg.setDestinationEntity(122U);
    msg.autonomy = 204U;
    msg.mode.assign("GRIHGHHOBNBULRNGMSARQPQJVRTXJCTWYTQNJLAOTYMRFHYCRXWDDEUUDIEKVNLNMVVBZGAJSJOXQYZGPWOGVDANPSSVPNRULFLWTIFMAJCPHCYSDSIHPYHJXLBMHOUIDFRUNWACEDBWKTYPQYRUQXFIIOBECBTYJPLCATFNLVNZI");

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
    msg.setTimeStamp(0.5812143054324486);
    msg.setSource(15792U);
    msg.setSourceEntity(162U);
    msg.setDestination(50465U);
    msg.setDestinationEntity(63U);
    msg.type = 123U;
    msg.op = 5U;
    msg.possimerr = 0.8049200130183399;
    msg.converg = 0.7580884272607149;
    msg.turbulence = 0.6444454177346252;
    msg.possimmon = 212U;
    msg.commmon = 240U;
    msg.convergmon = 83U;

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
    msg.setTimeStamp(0.5942521451954604);
    msg.setSource(56645U);
    msg.setSourceEntity(137U);
    msg.setDestination(2876U);
    msg.setDestinationEntity(148U);
    msg.type = 202U;
    msg.op = 50U;
    msg.possimerr = 0.3974633818766251;
    msg.converg = 0.7131642905228663;
    msg.turbulence = 0.6966998203816769;
    msg.possimmon = 19U;
    msg.commmon = 44U;
    msg.convergmon = 37U;

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
    msg.setTimeStamp(0.33581022803170624);
    msg.setSource(1281U);
    msg.setSourceEntity(18U);
    msg.setDestination(41132U);
    msg.setDestinationEntity(129U);
    msg.type = 175U;
    msg.op = 212U;
    msg.possimerr = 0.452233077764296;
    msg.converg = 0.32798084590747234;
    msg.turbulence = 0.49307284806150653;
    msg.possimmon = 116U;
    msg.commmon = 177U;
    msg.convergmon = 36U;

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
    msg.setTimeStamp(0.8047334328214233);
    msg.setSource(53677U);
    msg.setSourceEntity(201U);
    msg.setDestination(7511U);
    msg.setDestinationEntity(19U);
    msg.op = 20U;
    msg.comm_interface = 84U;
    msg.period = 64325U;
    msg.sys_dst.assign("CTTZLNUPGLCVNKAYEWETGXORHMZHSYMYFSIUMTOJSTYFBCRXQDLILSHUDNQJPABYLUIEVZNPNNTWMSDQRGPUWAIVDVLAXEZECGJQZGIKVOYSISIUVFVJQWXVHEUCDDCKBKGYACPXHMENJHKLBKOJWNYOBFWVMZAOTIUBBQGROWNRAEQCYPWICKQAUVQPXKZDBRXOSGFRRWEFLJAPQSO");

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
    msg.setTimeStamp(0.9103786454101714);
    msg.setSource(30225U);
    msg.setSourceEntity(129U);
    msg.setDestination(24919U);
    msg.setDestinationEntity(119U);
    msg.op = 100U;
    msg.comm_interface = 146U;
    msg.period = 27327U;
    msg.sys_dst.assign("XUWRHFSYFRPIZCFOANSWEJLVDTOAZROXQDTDNFTBNOIKFZAEWTLQRDZXHFKDCYBSYAIMQWTGOLUJJOLPZIOPNBSIZHMCL");

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
    msg.setTimeStamp(0.021681800962114584);
    msg.setSource(2247U);
    msg.setSourceEntity(25U);
    msg.setDestination(14642U);
    msg.setDestinationEntity(48U);
    msg.op = 72U;
    msg.comm_interface = 26U;
    msg.period = 46541U;
    msg.sys_dst.assign("MTLPEZEKYZGBJSEBHHLRQLYVLZJFFDVXCKYQOIVMFWURUFJDIAZPQPGMBDSHMRO");

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
    msg.setTimeStamp(0.7545475693238869);
    msg.setSource(32838U);
    msg.setSourceEntity(28U);
    msg.setDestination(51004U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.46200900415731816);
    msg.setSource(9941U);
    msg.setSourceEntity(118U);
    msg.setDestination(55530U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.45428778142736803);
    msg.setSource(14240U);
    msg.setSourceEntity(7U);
    msg.setDestination(16395U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.22884153674390806);
    msg.setSource(11792U);
    msg.setSourceEntity(68U);
    msg.setDestination(45435U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("QTCJLMUULJWDOUCLHOTNYMAYQIUPPWAWRBXOSSXORDEWHQSXWNSIBZGJNKZTVEHOSKRSQGPHZXVHRGBGTMYGKVECTJPVOAYKKZFCTBPBUEADBQWGJVMZJRIKHZVYJIFBEGEVLHQXPWNYKDXKXQBZTNCCJFOZEZMHEQNDLJFLAYMZDFWPUDTVRSGPBNYUINURIXXUILSHFWVFFLHNGCPCISCQNAVAOATMRTYWFMOECFLMPEASIBADGORJIKRQYK");
    msg.description.assign("RZJMVDVUAOKSPPINCHGXKSAFGBFUPSQIQKVANGSEIVPXXJWTHXJKPRUWVMYTXQVZCNPHOHRLUQYFOWGNQRIHQD");
    msg.vnamespace.assign("ESZYVOPKPHVFKZJSGUZEWMICJNKMWLHSBBWXXWAKOVGQIZRIXKLAREDSMHYLTGHVMGDCDXEVVJYD");
    msg.start_man_id.assign("QQJNLTFHPYZPUIVLNXNOCBVGMURBCTYYXU");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.3826294215788577;
    tmp_msg_0.x = 0.8447329518276121;
    tmp_msg_0.y = 0.9398937674727281;
    tmp_msg_0.z = 0.29618335379197813;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7021656815503737);
    msg.setSource(41447U);
    msg.setSourceEntity(228U);
    msg.setDestination(61643U);
    msg.setDestinationEntity(102U);
    msg.plan_id.assign("EJKXRXYDSUAITHJTWTTKCUYPJEGGSGGCRGKNQTMOTSUDRWXZHHCLEDBJBRCJXENWVEKQEXMPFXVQPYSVJYJVXCYFFMFPUHPUUZRIILRMQUCSDNICLIEZVCIUMIQOSJTMZBQOEONKBCOBHWPNLVTWYHA");
    msg.description.assign("NYMKVOIKCLXJOEDGQOEBIWBXNZBFHBKYIXBEZZMMHXQJAJNGKKDYLDRCHRUUSDKTKVCIMSMDNDPBAVTPHRDARTBJCZAIXNUWBCSGYETWWQTOPLVGMOFTPAFMOLBVIUCJEHXOOFZEMZL");
    msg.vnamespace.assign("KDZVLPINXUVFDDREZIKKOKNGMZSWVXOEAWSQCQCDASQETRLSYYFTBZYJIXIIPQSOTYKFZHRPBSCPFMWMAEWRTMPRRHCACJVSJEYNJEPKAQWYFHCPMMTGIFUNJTBCTSXLKPDNQLRGZQOMVLXYXMZNB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QEMFALUAWFQIRJLMMDWQGZAJTVCAJXJHCHCLUUBLTFKXJYXLTUFQEQYNWFGBTAZROUWUOXBREYDNOW");
    tmp_msg_0.value.assign("ZTXIGXUSWNJSNISHEKQFJIPIAENLFHAAXZVZOYYGASKEQKVCWWIFJXBEKLMOZCYQECMXCOCSXFFQLPSREZTAQRBQLRGGBBTUCRLMKGJGITDHGLWHGQWFREGVBUXHMUMRDXJLKBZMJOPLRAYVSVONAFWTMPDCKXVNTDMUEJHZDYNTPCOAUODKCUIOOFHWJBPASUPPJGFNDWQQPFZXTBIUWNVRYYZHKUOISVVSEAKRDIBMDWLJHPTLZMCD");
    tmp_msg_0.type = 106U;
    tmp_msg_0.access = 75U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XETWVUCGVATHPBZLTDTOQZDGISCQKPQHHARRBYEHMOFUBUIZKTVCDROCNDLFBNPOXBIYFMRHGOREUMIZPNCEHKRYCYIWKUYODLGGHEUBMLTSXFXULWWVQKPYZWHZYFMASJFXKSWXGRYBVNO");

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
    msg.setTimeStamp(0.16138346242694301);
    msg.setSource(64178U);
    msg.setSourceEntity(204U);
    msg.setDestination(25227U);
    msg.setDestinationEntity(158U);
    msg.plan_id.assign("YUBDVTFYLQKNOWCKQVJKHBHNUGOUSXTJQJQRPDZJODAKGJSMSMZHCYOHAETOCLBMXXGTQLYIFPSVYWPTWZFZUIEWHCDFL");
    msg.description.assign("MEYVIPQJWIIIUAGOOKLQHYGLR");
    msg.vnamespace.assign("CQWBMKQNBIHPRXRMOYMJUSUIIGALSNGVXXNHNYFEMBJJKEQRDGUIOQZYAHWRXIBREGBYCUDDCOBTLZLBDPGWPTYLUAAHWDWDNECPKRBJLCDLFRXGUNHETTTMTTKETYTDVLQZQPWYHPS");
    msg.start_man_id.assign("RQPPMLZMESBUFXHGLOJBIVDHJERBMAPMQHIUMOIBITHZKNAEYSACSELCKQFORPSFWNZNTHMOYKYKQLJWESQAYWXAXTCZRATBUNDUVVDBURPZWUPEHWRDYXRWDXQNVBTTAPKEHVASIPHGSRBDTUMGJZVWMMKILPCGHSKGOFQGOVNKXVCJLJDSXYDWELTGQZAIQKNOQGG");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("YXILWOAOMWBXZKOYXEHEMHEDUMEFTAYEJZVRLGMWQCDPEAQOGPRGVGAWAOZVHVDIBBXRRJGOKUTGJOUNYQFNFHESYTYCFPWUBNGNUITPMDDYMAXJDNPEDDTWZSAQUQHZHARGMXJECUAVLIGQYKB");
    tmp_msg_0.dest_man.assign("ZRQGPTGTBYFZMBHYCVRGEHENFYKTOVWOUCPCBQBQVZHAZCSKINJJOTNRZEKYJRDEXJACVGXZBJLMVBOLQMMDQKDIUODXEBGSDCGIVUURLYTYOZJNALBKQHTCUJWMLAHFSWFASHDNSMDHTPEPNUNALPMUSLENXQXGNSDCXSWFZFJPWAAVFSFJUVGVKKRPRRGDDOFAZOPHVQXXCHIWWHEMEYYIFURMITJZOBEXBNKQITGIUR");
    tmp_msg_0.conditions.assign("YYYLZHKJFPKMSZRKAGJINMNDWITWJJNBSQXFTNAYQOEOYRSPMRZBOZPQASRSZLUKYPHFWDOHFWGDBBKLVBVXVQLYHVTCEUHVDRTNEEUQWLDVUJTGRIZUYMLBANMKYMJUVIPEIROBCNDFHEGPOHELBWPCYXGSAPRXFXGCQBCMDXSHUIIQWWAQLLTJJJXACJEOGAXXRTOEDNOGQKAIUDEVZWCA");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8590943239733416);
    msg.setSource(16592U);
    msg.setSourceEntity(14U);
    msg.setDestination(23052U);
    msg.setDestinationEntity(221U);
    msg.maneuver_id.assign("UYJFZYPZYFUKTGXWMFXGMPDYMIYOUPFWYRCQKHNWMVWZUROENIACQLTDSZBGGLJIRDPVBHZJWAZRFYYVHJSKBBDIVSMPGCXZCPOLKWLICRLKISBXXYDUAGNAREUBNQTHSYOQCTXVGPINXNZIQQMQECRRSTDEPXURPTKFOAUEAOTLTBVOBFFGLSSFVJAKEKTXPJJVIAMWJJMNHERAWOHGOQFLMLEEBDCGWWDCQSTOHAQNNXDZJNS");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("XRBNXMYANMTAOAOFUMBDDVCLUNRIFIFGGAQWEZUCJLCKHXFRJTVXJYWPEAKYVSJYRKNTQSLFBHGBFFVUNWQKAEVYEOVSTYBNBPDWHXXPGQFEPZOCIVNYFMNIEIMKIUGUPQBRRGZZDKWGJSSOKLWUBZWGXMEMSCRJZVDOXGWDUDVKYAVISCJQXTYPAIOHPKSTNDZEXWQFQGNHHRIDLHLMB");
    msg.data.set(tmp_msg_0);
    IMC::VehicleFormation tmp_msg_1;
    tmp_msg_1.lat = 0.9663425268182463;
    tmp_msg_1.lon = 0.027132596599273695;
    tmp_msg_1.z = 0.9942554524032111;
    tmp_msg_1.z_units = 252U;
    tmp_msg_1.speed = 0.16953544710942414;
    tmp_msg_1.speed_units = 147U;
    IMC::TrajectoryPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.24726962774452543;
    tmp_tmp_msg_1_0.y = 0.6200764840026899;
    tmp_tmp_msg_1_0.z = 0.13126306940578947;
    tmp_tmp_msg_1_0.t = 0.17588120915015737;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.start_time = 0.5684433047964034;
    tmp_msg_1.custom.assign("FQKOSRBISKLUTDWMUXJJHHRYEORWQKNZIJCUTHPKAARRYQEKISQNEXMIVNCSAGRBSTGVYNRNZKXCJHEFXHUDJWFRJYQPLIWDTYBXHEQCPLEORPEFACIVFLIVHZZDTATCDUISXVKNLFQNGWGVXZFOCUCWBGJZOGCYLMUKPGDBMLWCTJMMZFZEWUAVIZODBJMPZAQLBSMBEFFXXWTVRSDNAGBTJBPVNPMOTHEKAHDNUUOMQPYLGSIKAP");
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
    msg.setTimeStamp(0.7475083963180545);
    msg.setSource(55892U);
    msg.setSourceEntity(252U);
    msg.setDestination(6103U);
    msg.setDestinationEntity(101U);
    msg.maneuver_id.assign("NIDSGTUSVSYKWKKZURBXQNWJUITNLYYDXCPYQGDNYNEVHUIZEOXXVZINESDDTQLYCLQRKEPRAPMBFCZCXMWHFLTVFNHEBMHLOLQAKFBARYSDYNSIWFGRYOFBJELFODVMEICDHXSZSXWAAVJLQFOMUGOOCGMRRZNATPTS");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.8603560589680509;
    tmp_msg_0.lon = 0.8228888487910583;
    tmp_msg_0.z = 0.6182822760412321;
    tmp_msg_0.z_units = 13U;
    tmp_msg_0.speed = 0.33835066967948657;
    tmp_msg_0.speed_units = 79U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.4721840563358398;
    tmp_tmp_msg_0_0.y = 0.264030706319877;
    tmp_tmp_msg_0_0.z = 0.24103918341614305;
    tmp_tmp_msg_0_0.t = 0.34644043109885714;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 10304U;
    tmp_tmp_msg_0_1.off_x = 0.03035585558923548;
    tmp_tmp_msg_0_1.off_y = 0.9084475631511416;
    tmp_tmp_msg_0_1.off_z = 0.013353153832700082;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.6135341725208682;
    tmp_msg_0.custom.assign("FDHILHABSOPBZICQSGYIIXOFHCNMUFLFOULKRJJEQWCITPNOAEDKNUXCGCEBVOXPPJQQFAKFESJMMVNAOCFENKNUSAYPCADWGEMDRWTSLIYHGTKGVUSTLZDGJIDFMKLLUTFKTJUEQAR");
    msg.data.set(tmp_msg_0);
    IMC::HistoricData tmp_msg_1;
    tmp_msg_1.base_lat = 0.9305089511906696;
    tmp_msg_1.base_lon = 0.5559627426397298;
    tmp_msg_1.base_time = 0.9871972632913281;
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
    msg.setTimeStamp(0.7234312203576915);
    msg.setSource(14573U);
    msg.setSourceEntity(191U);
    msg.setDestination(14935U);
    msg.setDestinationEntity(219U);
    msg.maneuver_id.assign("HTQOMCAMSMQTHMGOSPKINRQLPSPAAYQRIWFSZQQRKAAGOYQGHGUXSZXIUVECWVDJSWBSWWURSCAHBRXTRHPXFNJJNUYMXUWOZGNXVDBNVTIKEQBMJIDZFWVOFSNBIXHMJFPXYPMOOLEFTREGDTUCMKYZEAGPVKIEYVJOYWTTEXVENLQWNOAARTLZUWFJIVJHHYCLNCRYUDZSKYKMLEHPKLBJIKB");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 58115U;
    tmp_msg_0.lat = 0.916228735397587;
    tmp_msg_0.lon = 0.410182023992108;
    tmp_msg_0.z = 0.4175530702490633;
    tmp_msg_0.z_units = 122U;
    tmp_msg_0.speed = 0.17843820457225146;
    tmp_msg_0.speed_units = 163U;
    tmp_msg_0.custom.assign("SEYOHXZGINKQUBFJUOEPVTFLGIQEGCWSEOLPCCHZVAIBMHLNVBZUNRWXRBPASHRZFUZHTCGTXBHWMTNRXPIVFXJJYCPKATKNSWVDLOEFLIFYBJBQCEDSVMUWARRXRSQOZCIOOAUGQMPZLEAOQRMTSQYDXYLTGHTYELQVUSBKAIYTNMYMWNAKLUKGDPKXBTAYZVINJCKGJBKPPDVWEZWIDOMHYCWXQJIJRFPOSJNSLGUNMF");
    msg.data.set(tmp_msg_0);
    IMC::TransportBindings tmp_msg_1;
    tmp_msg_1.consumer.assign("NIHNMVYSTZOYGPNMOYQMKTZPXLARDPKMVYWOSXSINNASFFBJWRRUDLLUDDVWCUGMIHXWOMYLGRHCEEQQVTVXYUATLBOUCCHIOFSERQPTTVNHXUDTCWMNAQRWPDFOHSRIGZJQINIFKBVILAPWCRVKMVBGLIBKMAAZZFJJJJYEGZGVPZDEBXSPXQZPCOHZJASXQJLEFKYAKRCQ");
    tmp_msg_1.message_id = 55581U;
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
    msg.setTimeStamp(0.5545853984440862);
    msg.setSource(51088U);
    msg.setSourceEntity(65U);
    msg.setDestination(39699U);
    msg.setDestinationEntity(26U);
    msg.source_man.assign("DLMPJAPDBOMFKXAQHZOVCYRUIVCQUUVPGCRUDNFWCCLUDINGIZAEPGLZVHISHMUIBGRJTWFLYIMLOEXZAWBDIBOSDBQLJXVJFDKOHYQ");
    msg.dest_man.assign("ZLOQQPFQOXQKNZSXGDZTLNTNGJQQBJSBMCBWTWKVFOVSTUAQYFZWHSXPJIVCKFLTVDHJWKECFOHELPZJOGAGVRSJYSXAJ");
    msg.conditions.assign("ZWXOMBZWSYXGZBWSAHWURQOASPPXMFDPYENMYNNBRJMNHFRAQXTPNETOFPSPGCHKF");

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
    msg.setTimeStamp(0.11090580502949776);
    msg.setSource(42661U);
    msg.setSourceEntity(99U);
    msg.setDestination(34285U);
    msg.setDestinationEntity(95U);
    msg.source_man.assign("PWOBDLGQUDQEIGQWJGFSNFGVNFTSXRCXSAQUEYSDDFMTRCUWUMKCRUEBOSXVQORJTYFRKHIX");
    msg.dest_man.assign("CFMUQGTASIVWGJLIWOXLPJPAQPYLZCDSBVRRIDFKTSNISEQRRBZNKHXEZNGMVDBFVEHKMWIZIOFBUPKOSUFNQYOHVWGPWURVSCVNTMLQTEPOCHOSOPTNBVJMNYCUYWGZYACRAHWNTDYWUEZDHJEBKWYFHCEHXFXQUDQLAXYJBEQZLNOTTVGEKSUMKYCARFIQPV");
    msg.conditions.assign("BGQOTKRAVZGUYYUUCPCVDXFUDBVZKAJDFOMWLELFGYNYTOQYRLXFVCGZYITTIHFKRXPENTQEXMEJZFGCLKSQFZAMHZQMXFJWBFPWINOAPJOUUMGBKWMGVQFEKXDZSQHAYRKQJNWMHHVGNTQKWNPEYORWSIJBPTTWCNXDEXMNBOJTSVUESDOIXEGCOMAZRCCSAANBBRIRKGYHZCRKDOCZJE");

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
    msg.setTimeStamp(0.16333802663914732);
    msg.setSource(7619U);
    msg.setSourceEntity(196U);
    msg.setDestination(46591U);
    msg.setDestinationEntity(83U);
    msg.source_man.assign("BKVFDFQXJFCYFXVHQNPGATDARHDPLAUXZEOUICVRJPJSKXQZKMOGPYRGYWNGJULYHWPQWBBLEXVGSJXUGGEVSOHPTDLGJDLJMWMKXVBKUSIWRRMVNZYNNPQHSGTUFRKCTYNYTOSDCOZZKBYAUIMOVEJLNBABPAIFLNRKRZGAYHNCID");
    msg.dest_man.assign("IDQGZXNZAJOTHCHDYMXFAYMQGYFAVCOOVNIPXKHWKPZZAIZJMQBRKNJMPRLLDSPFCKPVCDDIVSEGCYBQDUXYGXJVSBSXILAOMSQUNPGUWMET");
    msg.conditions.assign("DKQIKIBOOCUZJJSDFBNNYKJUHECFCTZRRWVRAVLCXBGUHUCPFBZVVAKCPGKHBWDAQICYSOKEMTIKNGLAJMFUGXGYGECRNBLAJXVBTMDZIOTETYZA");
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.8644814925189251;
    tmp_msg_0.ay_cmd = 0.9270914957431425;
    tmp_msg_0.az_cmd = 0.04093910197937167;
    tmp_msg_0.ax_des = 0.17292784336651545;
    tmp_msg_0.ay_des = 0.7973814875285238;
    tmp_msg_0.az_des = 0.08123803063342816;
    tmp_msg_0.virt_err_x = 0.9854756968359137;
    tmp_msg_0.virt_err_y = 0.6282601408606793;
    tmp_msg_0.virt_err_z = 0.2053932962564432;
    tmp_msg_0.surf_fdbk_x = 0.018719867325449613;
    tmp_msg_0.surf_fdbk_y = 0.8177161860364169;
    tmp_msg_0.surf_fdbk_z = 0.4325765999143931;
    tmp_msg_0.surf_unkn_x = 0.00698082858394522;
    tmp_msg_0.surf_unkn_y = 0.8517219147083345;
    tmp_msg_0.surf_unkn_z = 0.27879538415746574;
    tmp_msg_0.ss_x = 0.9361061832970985;
    tmp_msg_0.ss_y = 0.3689507825768876;
    tmp_msg_0.ss_z = 0.49920165999400756;
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
    msg.setTimeStamp(0.5784151979006817);
    msg.setSource(54949U);
    msg.setSourceEntity(61U);
    msg.setDestination(5392U);
    msg.setDestinationEntity(98U);
    msg.command = 167U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XFMNDALGJATQZ");
    tmp_msg_0.description.assign("XNWIKOGLXWOOHKZKEVAUOGEVDXNMQIQVUASGDCLCETFCPIILQBFHMRNLATZYZPLMSFKFSCVHJVHEOMBYSHWKJCRHUZKNWEIX");
    tmp_msg_0.vnamespace.assign("TNTUHYVFOXQXASQHRKAPFRDIJCLGIOPGRKWHMIYBJOVMMOYDCBFCKWPISXBUAEKFTYJNXONHHMGUNPOCQAIZZRAVMXWQZDFBVXNBLDJMONFDTSJAWENJKGMFCZYVEGVOCIPZQLTTPDSRPBZGLBWVBLXW");
    tmp_msg_0.start_man_id.assign("FNDJDQPDFANVYYPEZUPJGYJYMNXYKOXQTZTXXCNQAGIEOTIEWMTLKRNWQGCZAJOYSAFKOICQRHVFIKDDMUNZSSLXQXBGBHWGXBZFAJLYCCSZPLDPZJUVYXEPPIKQFBBLHWNMTMLKJALWVEHOEZERIIAPPQ");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("XPIXFGHVQRUMFDJTBFOUXJQVQAVZHPUQGJAMJCIGQIGWXECRJWCLOMSBYLUOJNHFNBYHMBVDUUKMPUNYARGLEUQXCFSPIQFOWSOXZZGMFMGORTUVAAHNKQGRRVANQ");
    tmp_tmp_msg_0_0.dest_man.assign("HSEKLVJMJYMFTCNKYTKVSMOASIWURFTKNQQUENZEOAIOOZGJFZBFQCJXWHOKLSSBKFYJRZGGDBFAJDADDBLXUNQNMHZPYTDJWZPKRHOMTPBSQSZHLAGICVXRQGFROEUTVYLQQCVYPHKBRWVSBENCYEIMDNVKNATDXFXNJPWYZHLDAIFGBMCDDPYORPCJXTRIZUUKRFIWHPGWVLVOCEMGTWAUIPCTWQVUXZEMABERLXXLHIUBMECO");
    tmp_tmp_msg_0_0.conditions.assign("WVVAIDNZGIBXDNMOKBFPUKWBMLZYPMUXMQRDGNQBEHJWSOPCXAJCHLSTYLAAPCUELTLYI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::HistoricCTD tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.conductivity = 0.7322050923721052;
    tmp_tmp_msg_0_1.temperature = 0.1696259569484091;
    tmp_tmp_msg_0_1.depth = 0.5630869383584441;
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
    msg.setTimeStamp(0.6963117359932096);
    msg.setSource(48728U);
    msg.setSourceEntity(137U);
    msg.setDestination(10425U);
    msg.setDestinationEntity(78U);
    msg.command = 74U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SQFIEKJKAWZPJLEIVBTTKRHUQNXLTNTDZEDRHTRSTIQQHVCYTRWOZXDFBKYMVMMEDRWNLYKBOIULBURBUXPZHJUWKGFQMGBNIQWWWFVFAECOEEGZKFXCGHWSQEASADALZVCAUDOJNJUPWVJDKJSYHCVOLPDDUEYIGXGECHNPMGAAJMNXYLSOPGSLCAGSPABCPHNVDRNBXHFLWCJZTFIRKRIIYFOMKNMVOQSJQIGMUPHYFZVTMBCTRZXYXZU");
    tmp_msg_0.description.assign("WOCJILYZGQDTARIFXXESUXITCVPUQJRSHKRSBXGVLNAWNTVYSRULUMNVOPPFLIAUFZEWZMPGTHDCPVNWGMHVENKQYOCABYXSIDDQHWSMULWIFBFOTBPJAMJBKAYMOQSNKZCPPOONZYJENGTVVJOCTURXZDIEFALPMOQKJLNRIAMVWFRKIFQCKIZBGBMFTYYEKORPLYXLFJRWUDECYXSRWCTBZDZWHSCXGQABZBDUHGGQMHKH");
    tmp_msg_0.vnamespace.assign("MRJURHOWQIGXVBKOCBHKGCDWTHGVCVYMBERLATHUQRTUGPPEEDKUCQHIXXLZFYFCQESPPLCALJHZBVXOXFDKIROFISRBSATBNWODPSPADFSZEKMGWDWERUJGDLKVNMQKIUIWTVASROOLANLMCYJFGRDCTNVOZYWUKQAZUEZLTXSJXQAPPXAGJBNMIZEYSETYJFHCJIWHBZDUXVMXNQYZKPMLTGTWBJCOQFNARYYHNJUQOZYSDFMKISPFWIGVE");
    tmp_msg_0.start_man_id.assign("ISRPKANXBRUSMTKRWHAZFIIOWXOGPMGMAHARPZLSCKBDFXQLUZNLHWDCGDXQBXNZGBDWFLTQTQXMGGHSZBSJKBKSQLCPSPVKZDRFKWAMYNPUMHYDBWRJYOHFCJE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("PFBTALCVFXUDDJMGKBDIEJOYNKWPPYHSAJWOELTIELQHHCEQAGIVRXXBDWJCINYKDSCZKYMQTGZQLKJKVRMLELZKARFGBB");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 44707U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7644967880640475;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.720181823607878;
    tmp_tmp_tmp_msg_0_0_0.z = 0.4353349300442575;
    tmp_tmp_tmp_msg_0_0_0.z_units = 8U;
    tmp_tmp_tmp_msg_0_0_0.duration = 27326U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.7896923050128333;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 187U;
    tmp_tmp_tmp_msg_0_0_0.type = 112U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.8734688090184176;
    tmp_tmp_tmp_msg_0_0_0.length = 0.4957337241478582;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.5874195942474844;
    tmp_tmp_tmp_msg_0_0_0.direction = 88U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NPAAABFLRXHHZNIFWDRWCLAXLXCBYWRCWZNNJDFYVGYZYGQJOOKAMPSEFSOIHFGSHTRUBHRGTLRIDLYTWTIJONATDGIVQPEKKCUWOVHKBUOJINWJVESXVFCHMBAMKMNKLCHQWT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.1293754635219465);
    msg.setSource(35032U);
    msg.setSourceEntity(229U);
    msg.setDestination(45010U);
    msg.setDestinationEntity(139U);
    msg.command = 105U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UQDUWCZRXBXPIKPOPHITPOSUKNZIUMUFNWTAALRAE");
    tmp_msg_0.description.assign("BDINLKAXMMLNRFEVKONYJZWMLTREBWIXSXQOZIUXAKOXKSYSNQRYTFJHPMCLBOWIRPXOYYKHBIFBVZPEHSHNQPJ");
    tmp_msg_0.vnamespace.assign("COWKQJKZGPVBWVWQCBCVDTUN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VBNAHUZDCVWGPBGXTZOPLFTCRLQHNHOYNGYWQRSVRXUCCOCJLDQALFBBNMJMHFCMEMSGVSNQUROEFHJXIGUEAWKUTOPHXMFYCGJLKONWALYUDIJEBUNXWVYQTKWDDVEUXPSTZBDMXZPAZPJYPFGSVJWBDIRSEXUHYRQJIWQYZESFW");
    tmp_tmp_msg_0_0.value.assign("QOWOVZKYWDSFAIGXHANFNAIIXIWJZBXXBUDBVXIKJZMJVKEJLTRGOD");
    tmp_tmp_msg_0_0.type = 131U;
    tmp_tmp_msg_0_0.access = 166U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VGWEOHTGPADQZVFKYWHKDRRZEFZUAUKXZKCIXCSRIPGJNFQMBEHQWELXWZUIDCUYYXSJFSLVADOFKUMJCDHELNPKGTYOOEYZMAQYPXZBDTEICSIPGKLQVBBJDOLBSMJCRYFCWAMFGDMHTBANZRLQHWNFSEVOBKOKYTNVZXPNDLJWVLIFQTGRGEHXNOHRAPVRHUTSOJQIYINXLWMUSZNYBPARWDTIKXMIVBMQMGJCAUV");
    IMC::DataSanity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sane = 87U;
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
    msg.setTimeStamp(0.876630757066274);
    msg.setSource(11503U);
    msg.setSourceEntity(183U);
    msg.setDestination(35351U);
    msg.setDestinationEntity(174U);
    msg.state = 215U;
    msg.plan_id.assign("XJYDGPXXZPKWAKGMNLCGDSBXWQHOVJZTWQXYYEKLMLNSOTQDHKLSNTBXPRAHITYCADMYQGRPATBSIVHEDEDQ");
    msg.comm_level = 108U;

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
    msg.setTimeStamp(0.015101412948281157);
    msg.setSource(58738U);
    msg.setSourceEntity(72U);
    msg.setDestination(17843U);
    msg.setDestinationEntity(208U);
    msg.state = 211U;
    msg.plan_id.assign("ZTVHQMTEHAWRZDG");
    msg.comm_level = 144U;

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
    msg.setTimeStamp(0.7426439548252579);
    msg.setSource(3005U);
    msg.setSourceEntity(86U);
    msg.setDestination(19405U);
    msg.setDestinationEntity(218U);
    msg.state = 40U;
    msg.plan_id.assign("VDQMSZGSQCNOYUQZPLKAGMBTPDH");
    msg.comm_level = 205U;

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
    msg.setTimeStamp(0.6320431488357455);
    msg.setSource(23946U);
    msg.setSourceEntity(221U);
    msg.setDestination(27940U);
    msg.setDestinationEntity(245U);
    msg.type = 160U;
    msg.op = 133U;
    msg.request_id = 57221U;
    msg.plan_id.assign("ONHEAOSRBZGPNZFLHTMILWKQUCGDLTDQYRFMSVRUZGYIOTYZMGAKAEFKWNPAARUTKOEHCLXWFFEKUPQQQSYXARIBYJKDYUPKQPNJSWFVFL");
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("SKSBMDDBOAGWFOBJVAACUJLVXRTQJZVKCXQKIFMKTMPOCXQEVEPYAJQUQYZNIAPINDZGYRUQOAXBGTULLWZXLLDJODICET");
    tmp_msg_0.links = 1271844890U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YYIRFYKETGTBXXZOVJYPWGZHIQZHBSOXPXFNYTZMUUIWCDPVLDJTWJSRYDKRRRAANWWLYEUXCDHTPCSBTQRIVFVARBIDERQGHAISLPPNHEJZVZQLOTYFRGDSDWQNPOTDFGRWL");

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
    msg.setTimeStamp(0.07957029338924693);
    msg.setSource(35522U);
    msg.setSourceEntity(233U);
    msg.setDestination(54800U);
    msg.setDestinationEntity(73U);
    msg.type = 243U;
    msg.op = 182U;
    msg.request_id = 64669U;
    msg.plan_id.assign("IKIODEGYXTPQXNYVLNZGSSWJIXMSBQUIGRCMGWSJAPURDXEWBHAONFCFNNYCVCKLDTZGHWXESIDYHBGFF");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("HWXEOTWHWTQOYSLVUXCARTRDBWFPWSEXMQHVE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VKFYBAOZXPNGWMSLQYSHXWVJPPMYYOENNCYFRURGHZYDKDJQKXJF");

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
    msg.setTimeStamp(0.11176176080255618);
    msg.setSource(41058U);
    msg.setSourceEntity(85U);
    msg.setDestination(27801U);
    msg.setDestinationEntity(4U);
    msg.type = 35U;
    msg.op = 160U;
    msg.request_id = 29342U;
    msg.plan_id.assign("BHEMOKQEAKQBWMUOMGOQSIMALPYVRTJPLPXAITRZOXDTIRTFWMJVLILKHTSSEYSSXEEMUFYCAKIUKONJQACRKGHNJUCAAWWTXWBHQNPQQVGZUYUFVJUTPEIQQJACVHZIRNZNXJXWEVNUXZMDFBCVHCXELYGZKHYOCXFNPDLN");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 198U;
    tmp_msg_0.time_remain = 0.3744372899517746;
    tmp_msg_0.sched_time = 0.53003583792526;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZJCMICRDXBSZQZWANEFIJPYLRYCNEAOFGFBKMRQWKOUHBGKWEGVTNLOQXJTYSHCBX");

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
    msg.setTimeStamp(0.8732823517687797);
    msg.setSource(27451U);
    msg.setSourceEntity(135U);
    msg.setDestination(5270U);
    msg.setDestinationEntity(233U);
    msg.plan_count = 63084U;
    msg.plan_size = 3135551351U;
    msg.change_time = 0.24872134438803117;
    msg.change_sid = 25756U;
    msg.change_sname.assign("TAPSXOSKKHTFSXGJBFRPFNIERCMMMKEPKQHSQCRQJNZMOCRFQZLEHYBTGJPDYWLKXAAJAI");
    const char tmp_msg_0[] = {-60, 22, 70, 47, 101, 28, 108, -95, 99, -77, -99, 7, 53, 63, -3, 94, 59, -56, 116, 40, -65, 14, -10, 21, -126, 5, 84, 49, 67, -43, -25, 59, 69, 98, -103, -101, 17, -67, 37, 67, 79, -13, -66, 10, 84, 7, 7, -115, 56, -120, -80, -11, -73, 102, -16, 97, 65, 64, -41, 4, -62, 10, -104, -50, -85, -26, -43, 52, -94, -95, -16, -44, 72, -5, -120, -64, 109};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BNSNJTSWLXDKQYENBWEWAHOUNEWZWYDOXJGSHJJTIJYKCSKUUBOPOPUBAGCHFRZVANDPESQQDZVXCLVIRSJMERCQWNDVOXOFTYIZIAIEFOJE");
    tmp_msg_1.plan_size = 34553U;
    tmp_msg_1.change_time = 0.964258202660777;
    tmp_msg_1.change_sid = 60103U;
    tmp_msg_1.change_sname.assign("ZKVNPOFDWRIATNQQYTKHIXLTAQGLIXBLRJYGZPICEHALTDSKBYQMYECEZXMIPYAMRLR");
    const char tmp_tmp_msg_1_0[] = {120, -118, -46, 87, 64, 4, 59, 37, -53, 4, -71, 122, 125, 6, -115, 92, -104, 89, 126, 8, -101, 106, -105, -108, -89, 34, -8, 101, -59, -39, 53, -71, 111, -115, -68, 79, 53, 14, 120, -99, -104, -32, 77, 66, -128, 60, -3, -92, -118, -84, -72, 39, -46, -77, -11, 105, 36, -6, -99, -107, -32, -125, -8, -79, -119, -128, 3, 82, 125, 40, 14, -118, -94, -18, 2, -120};
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
    msg.setTimeStamp(0.2868523395745225);
    msg.setSource(30837U);
    msg.setSourceEntity(85U);
    msg.setDestination(44392U);
    msg.setDestinationEntity(227U);
    msg.plan_count = 65164U;
    msg.plan_size = 1487716974U;
    msg.change_time = 0.3574491591575347;
    msg.change_sid = 38737U;
    msg.change_sname.assign("WGDGAMAYGBBXVVUFCKQERQCSBEBCTTASSNTMUXTVQRDCSIEIGCZIDQSKOOLZNQVVPSVNHQDJWUJLCNUAGEKIIZIVUEBVZPVOWNIFJOWHBFWZTITFEKRHDXGLUSAHBROANXYXKOFJBRLLKMXMFLAIBPHALRYHWNUYCIBZFRHTXHEJQPPDZKQWGNOPRYZEYURXQXCKVOSLDDLCZOYTJJMZWMFHAPRMPGEYMTW");
    const char tmp_msg_0[] = {-128, 112, 52, -115, 24, -65, -119, 40, -47, 89, 62, -115, -69, 82, -75, -103, -72, -13, 23, -98, 51, 30, 88, 44, -23, -120, -87, -3, -87, 11, 56, -128, 49, 113, -108, -23, -71, -43, -111, -99, 82, -89, 33, -56, 37, -9, -24, 80, 114, 83, -59, -33, 22, -20, 125, 73, -73, 105, 76, 107, -64, -114, 121, -116, 102, 23, -64, -79, 56, 97, -82, -107, 98, -13, -98, -57, 89, 42, 47, 61, 96, -24, 121, -22, 19, 24, 80, 117, -45, 35, -33, -89, -6, -63, 69, -98, 102, -14, -58, 36, -53, 32, -84, 98, 4, -94, 0, -105, -101, 18, 79, -53, 19, -86, -113, -7, 7, 29, 51, -115, -30, -99, 104, -18, -94, 35, -51, -82, 12, 116, 22, -51, -28, 54, -4, -40, -92, -89, 33, -103, -1, -76, 20, 0, 47, 41, 121, -108, -122, 55, -8, -67, -2, -8, -126, -57, 20, -108, 59, -51, 78, 112, 60, 42, 8, 96, -17, 82, 82, -111, -49, 94, 85, 99, -33, -59, -110, 108, 117, 69, -29, 28, 2, 68, 2, -72, -94, 81, -33, -117, -97, 38, 84, 97, -126, -69, -95, 117, 37, -43, 120, -17, -80};
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
    msg.setTimeStamp(0.6014548515221181);
    msg.setSource(25890U);
    msg.setSourceEntity(233U);
    msg.setDestination(36421U);
    msg.setDestinationEntity(142U);
    msg.plan_count = 56808U;
    msg.plan_size = 2836218101U;
    msg.change_time = 0.4523986182751695;
    msg.change_sid = 37849U;
    msg.change_sname.assign("FBZVLKJXUYFWSOPLVPXEDQUGRKNZTDWASQZCORBIXYWUNBOWKCJCAGQZFR");
    const char tmp_msg_0[] = {30, 61, -45, -123, -6, -40, -62, -116, -97, 111, -91, 76, -66, 86, 9, 77, -98, 93, -45, 45, 59, -71};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LTYHQQVFJCTOSBUJDTNOFSRESFEJIKANJNKR");
    tmp_msg_1.plan_size = 27143U;
    tmp_msg_1.change_time = 0.47784314809205763;
    tmp_msg_1.change_sid = 27634U;
    tmp_msg_1.change_sname.assign("UNXFBCVTCVAMHXOIMDKVCZOHRAUGWVSRRMMECNZWGWEOQQMMDZRWCDLOHQKLGRRVSGRYXSLLEOKJFQXDSXQBJIEPWJERXULHAFCNNAWXDKVMDQFMWAAVAZOPFMGBYAYQDLFBBJITAUSKQXIHJEDFQUPUTEGNHHPQIX");
    const char tmp_tmp_msg_1_0[] = {-112, 85, -77, 118, -21, 77, -110, 41, -23, 46, 74, 103, 101, 21, -9, 31, 104, -52, 116, -39, -28, -40, -3, 69, -103, -40, 6, -103, -55, -37, -59, 45, 19, 55, -125, 17, -33, 56, 1, 90, 24, 2, -44, 96, 89, -27, 26, -90, 3, -86, -86, -125, -92, 60, 56, 72, 21, 75, -47, 36, 38, 107, -58, -37, -16, -100, 118, 89, -59, 42, -10, -128, 96, 7, 75, -39, 111, -95, 41, 42, 103, 94, -66, 107, -25, 8, -81, 69, 76, 126, -83, -69, -76, 92, -36, 32, 80, 42, -90, -28, 32, 51, -62, -95, 86, 48, -108, -61, -107, 42, 36, -54, -45, 61, -1, 16, -68, -67, -67, -56, 14, -64, 63, 95, 124, -24, -68, 44, -5, -17, -66, -9, -53, 98, 38, -22, 55, -77, 121, 42, -93, -51, 65, -117, -28, 9, -55, -36, -54, -63, -64, 126, 120, -127, 88, 113, -3, -84, 49, 115, -37, -7, -30, -111, 10, -8, 124, 2, -92, -59, -24, -68, -76, -83, -74, 112, 28, -108, -113, -117, -66, -25, 114, 47, -83, -43, -52, 53, 37, -24, -91, -99, 125, 55, -35, -13, -115, 50, 77, 78, 100, 84, -46, -125, -17, 98, -84, -126, -9, -44, -19, 40, -57, 53, 23, -60, 74, 10, 111, 62, 26, 124, -100, -45, -33, -20, 95};
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
    msg.setTimeStamp(0.7454752309474562);
    msg.setSource(49226U);
    msg.setSourceEntity(101U);
    msg.setDestination(36792U);
    msg.setDestinationEntity(71U);
    msg.plan_id.assign("SEBVCMYKDKLOHFCUMWICOEABSUYYMDNBCIFIPHIUBKGTDUZMFIJDGZLSLEW");
    msg.plan_size = 1371U;
    msg.change_time = 0.19326031231051788;
    msg.change_sid = 3307U;
    msg.change_sname.assign("ZXGWKRHDRVAEIBYIMHAWPQHHUMCEKXSJDOZBETNXFFYXEPPRTUZOKADUHFAXLSJJKLZZVBQGINLCBZROFULMNJDKQNKZWAFPRCTDYMLQTVMCSWYMUXMLGEXTPODSRLRNVGOBYFFYMIHVLUFKPUZUWPEWXRKXVJEQBQWYJJGCHOQTVHWATBIAOSDILSGNMINZYCTUSIVQACQHPVCMSJBIYIEOCFASWNHKBGNRSEJBTJDPFTLYG");
    const char tmp_msg_0[] = {-125, -112, 112, -6, -12, 78, 88, 108, 107, -94, 30, 77, -96, -65, 28, -34, 103, -110, -41, 71, 75, 31, -32, -46, 59, -31, -99, -78, -108, 101, -66, 119, -115};
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
    msg.setTimeStamp(0.9747424734205963);
    msg.setSource(48440U);
    msg.setSourceEntity(19U);
    msg.setDestination(25907U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("PVIKWAEUZUSAVBHHFYFLNOOHBMAEJOMWPGBVRWUMWPAIXZKUBHLUUDQVXYTYASJQNGKTLIFQRGKFTGJEFMKIIHDTGHSTLLBJFCERKLGEZIFESBITCPYZPZZETOAYRJLYCVDFWPOPBZXZBQSNFXAHCMYZHPQPMCJWEVELMGTXUERHRQBUIFNGDMAQDVPNSWXNRYLQCCIAURMUDDHJXIJCVKSTZOOVJLNVJNXQBWYSOXWNAWCMOGRK");
    msg.plan_size = 33422U;
    msg.change_time = 0.8733936571306031;
    msg.change_sid = 9496U;
    msg.change_sname.assign("UCKGOWORBSYZTSHXZCPREFIIRVDWZBAZTJGKQJAPLDGSMSFOARRYTHUXIXQIZFWJWPBBQVLOHDWYSFMBPSLDMXTUWLMSRUGXFYOLKNAZCQAEIEHOJGNTPMLNJUVOKXDPEKJMFNIVGIAQVWYGLJDZZWNQHRUBNCEYLXSTFXEBYASEYTJCNCWGVTCXHNFUQMMKZUSFJDVUITLCOEGBMXRLEKBROOIYCRCUYDDW");
    const char tmp_msg_0[] = {-101, 10, -38, 46, 35, 46, 47, 42, -1, 117, -64, 72, 7, -114, -50, -120, -67, 25, 42};
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
    msg.setTimeStamp(0.3856342316504119);
    msg.setSource(51971U);
    msg.setSourceEntity(104U);
    msg.setDestination(4586U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("LGTTUYKISONJVDVOJEQHDSWUNNRNBRUVQSAYILRLRFKMTXANWGTICADGOSEJNPXEQQNJNUBXFLWCGWXZFGSAYWKLOHZUEVIFLEXOWGXOYJDZLMJWLFJTHHBUBCIC");
    msg.plan_size = 65311U;
    msg.change_time = 0.1624294370722329;
    msg.change_sid = 16228U;
    msg.change_sname.assign("OPHLKOAPFMORTWBCUSZQTBBUESSHKUUTPAKIGYOTYIBEFXCMTFARUCCCHHKQBHVNVNQEOLWXAHNRZPLQWIXSEJTVKJSMWAGELISIEGVEYVLQFKLNYNJZXTOJNBEYOYDMWXMNRKIDJDZFXMLZUZHOLWGVHGHRBVUZOHJDUIQTMPGVUDOAWZMBFEIIMQZQVQDDYBCURPRKSLPZCYXGD");
    const char tmp_msg_0[] = {-59, -5, -20, 70, 9, 96, -20, 33, -61, 94, -88, 0, -64, 50, -64, 61, 91, 105, -106, 67, 76, -15, 93, 111, 106, -84, 123, -30, -71, -128, -27, 36, -73, 121, -79, 102, 118, -75, -33, -19, -52, 13, -103, -50, -9, -46, -74, -62, 93, -53, -118, 13, -83, 87, -72, 33, -18, 8, -53, 86, -26, -59, -18, 59, -17, -40, -18, -111, 113, -43, 89, 41, 20, 52, 39, 15, 50, -10, 125, -76, -83, 74, -116, -81, 109, 42, 26, 15, 28, 78, 111, -121, -43, -49, -62, -92, -24, 23, -40, -10, -84, -117, 122, -124, -85, -115, 94, 53, 82, -82, -125, -68, 15, 90, 78, -20, -94, 80, 87, -18, -80, 70, 115, -128, -63, -103, 47, -98, -1, 8, -54, -100, -64, 114, -54, -113, -86, -75, -36, 84, 24, -79, -92, 19, -90, 114, 114, -62, -65, 1, 98, -34, 106, 73, -27, 33, -47, 64, 4, -90, -90, 36, 2, 47, 96, 123, -39, -16, 114, -64, -63, -91, 117, -77, 69, 109, -81, 96, 81, 12, 93, 126, 68, 4, -89, 52, 4, 19, 108, 92, -33, -37, 33, -85, -64, 51, 20, 69, 56, 115, -124, -91, 65, -12, 8, 73, 32, 9, -23, 48, 29, -92, -88, -56};
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
    msg.setTimeStamp(0.564651329222586);
    msg.setSource(37958U);
    msg.setSourceEntity(116U);
    msg.setDestination(53220U);
    msg.setDestinationEntity(242U);
    msg.type = 226U;
    msg.op = 148U;
    msg.request_id = 63102U;
    msg.plan_id.assign("FHCZXSBDUKHNMXBMOCXWZEDUOTPMIRSIJKVNRBMGZNNLOOAJIPKUOMATMKVXCFMQDEKBECVLYRVKNFZEPNUFQHDPEIEHLNODKNGTSMFJGTUGAIYFQACHFOSODGXVIIPPBGZTWFKQQTJUWZWSLSHVJPFWZURXUYPRWAYLITCGBLUXSEVVCZVEJLPRFWYAXEZYSXLCCHBVDTAAXGQYZUJSBQOIBDWPSAORBGK");
    msg.flags = 6013U;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 142U;
    tmp_msg_0.value = 122U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OHXXMTAFGMPFZBLCTTXPQVAQYADRDTXIRLPWMQMZUKHSYHYEKWWACLVQFDGFPBOSCANIRJWFEQBOQAQVEUVWKVSVNSYHJMWVUPDLHQUDCIOIERJKGBJGQNGDHSBASHCDTGNBLUKDKIYONIUJSLCXNRTPWNJWZIOBPZIWEVTFKIAJEAOXRXLMYZYNNRPISLFEY");

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
    msg.setTimeStamp(0.3612981344538806);
    msg.setSource(10514U);
    msg.setSourceEntity(17U);
    msg.setDestination(55319U);
    msg.setDestinationEntity(184U);
    msg.type = 101U;
    msg.op = 16U;
    msg.request_id = 61804U;
    msg.plan_id.assign("QYUBICEYCPXLWFSDWERUWBYQUGMGYNIBAHHGMTCHFGVHQMSXROLRZATBLILTFVOALJQEYATTZFXBODJPXMQWBCIMETBGLS");
    msg.flags = 38134U;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.43523617977952733;
    tmp_msg_0.x = 0.442934149496908;
    tmp_msg_0.y = 0.5097087407156441;
    tmp_msg_0.z = 0.9194597072706918;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QHGBOPKEAXUSUJJDHJRLPKHIAWPTCVSIYVXMLMFRMQZWMHOGDGCAZXTBBFYZAWPGDPMELIPINXIKFPEAOYKHRIJBARYSPCGCUILQFXKLUTUJU");

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
    msg.setTimeStamp(0.8282581040404614);
    msg.setSource(26549U);
    msg.setSourceEntity(235U);
    msg.setDestination(54695U);
    msg.setDestinationEntity(150U);
    msg.type = 23U;
    msg.op = 23U;
    msg.request_id = 55602U;
    msg.plan_id.assign("TABNMJSTCARGXQBTJIVDZLPSYPQUCRVSKFIMXFFSUPKFVDSQAWYJUNPEQQPNBIHLVIJEXEITDVUDKASW");
    msg.flags = 4276U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.3312291283738924;
    tmp_msg_0.lon = 0.8437363341883597;
    tmp_msg_0.z = 0.0534313047641769;
    tmp_msg_0.z_units = 162U;
    tmp_msg_0.speed = 0.3060587041178783;
    tmp_msg_0.speed_units = 20U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.6826638314911876;
    tmp_tmp_msg_0_0.y = 0.7840824350864977;
    tmp_tmp_msg_0_0.z = 0.8459240777587987;
    tmp_tmp_msg_0_0.t = 0.7926722477850279;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.13886678024240395;
    tmp_msg_0.custom.assign("CXSHJCSWUQYKXLMWQFTNHQZKLOUFCJOHSNDORVWUQVSYYGEQUSPJZYGFDSTXPYUQEDRPUAOFBTTXEGIB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KJOTVDKTFVQXAJDAEHOOKZONKYOXMUBQNTZWGZWIBNGJQSMDNUAWFHPLRMHHCCIFLSYKEAEMPDSZDEYRCGGQWHUTVVAIUEESKTILTDSXLGPDCNUYYVEJQKWGXDURGFSLHXICYBRZBFBQMBRILFFGJNFYORUAOPGDNTNPMVEC");

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
    msg.setTimeStamp(0.8753893840604983);
    msg.setSource(50806U);
    msg.setSourceEntity(122U);
    msg.setDestination(30547U);
    msg.setDestinationEntity(239U);
    msg.state = 63U;
    msg.plan_id.assign("KCLJZFZQDOYRTAVGDCBLGYEKUNQHYIGKMRUVLUYXGMFAIGEVWBQKLUQPIQCAMJATNFJRXOXTIOCZFNMWKXASMKSMZCZDSEVPPWWABJLNJGPLJVXMFENHYYUCJQTBXWZP");
    msg.plan_eta = -532792150;
    msg.plan_progress = 0.8227321030805379;
    msg.man_id.assign("VLCQKMDOPASDMAHYIWYBDQAAAOQVEGZNBVBTQGUUYC");
    msg.man_type = 9372U;
    msg.man_eta = -172556767;
    msg.last_outcome = 99U;

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
    msg.setTimeStamp(0.72035594662744);
    msg.setSource(64360U);
    msg.setSourceEntity(30U);
    msg.setDestination(15489U);
    msg.setDestinationEntity(188U);
    msg.state = 76U;
    msg.plan_id.assign("VTXVVTKNREGLZJWGJPYAMESQFZYKXJISBBGJHISEKVTJILOZFUEODHFDVVINDKAQPCXHWKQYHCQLIBWPGZMCENXKAFRBKJYOCHUKUAYTULLGWJGWQUZISNERLACPTFPMMRUH");
    msg.plan_eta = 1504985896;
    msg.plan_progress = 0.8695417379209334;
    msg.man_id.assign("STTSZJXXQGTWNVZULLVHUWBPFZPQFGTSNUJOHAJXUYCTDUVYWLZXWMDMWAGCVZDOGCQZJKPCVJFMEONGMUFYBFFHCKDCOYQWYXDWSPBNXUCBRYMWLBLOZAKFAOHANIVSYDILBCH");
    msg.man_type = 27480U;
    msg.man_eta = -1399478316;
    msg.last_outcome = 48U;

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
    msg.setTimeStamp(0.7001600042167228);
    msg.setSource(58312U);
    msg.setSourceEntity(145U);
    msg.setDestination(27164U);
    msg.setDestinationEntity(149U);
    msg.state = 232U;
    msg.plan_id.assign("MAKVGDMGYQBKRGUWPRIMNPTZXXNOMWJTOPKNEHGQNEEORAJKRAQEXFWGMGBCJZLSSVSAKCUQMIRKQYYBADLUHDTFYHIYXICSDILYWTNHWDGFHJZDWOVUKEFRESEANPLUDSBQVVPHXPIBCTVCZCZBUTLOEZSHCIRJRMSAHSOMTQWCJKVMCFIUK");
    msg.plan_eta = -1728868137;
    msg.plan_progress = 0.02461085799475704;
    msg.man_id.assign("BRQLASGEPLJZAKMCGSJUOZWPFTRGJUZYQDRAITBXJMMIVAVYHKHFENXECGXWLUTLPXDAXCTYWTMNZHFDPUNHIXLTEDKBTDHBGUSPTFKROGJQHROOQBOOYYBBSIZDZHDREEYHZLILUNGQCNQWLRPVPA");
    msg.man_type = 40773U;
    msg.man_eta = 1068852614;
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
    msg.setTimeStamp(0.4612821660827431);
    msg.setSource(21489U);
    msg.setSourceEntity(123U);
    msg.setDestination(49308U);
    msg.setDestinationEntity(239U);
    msg.name.assign("WCOQRTKIGMALECOKXLZEEDIZGATUULJNIDKVUNYPLW");
    msg.value.assign("GEZSJTIUNXNRHUWGSODFCKUNKOQDYSEWAMBXERZBAKDZRFUEEGNHQDUNLLXLNJJMXHJZKATKURNWTPXMYAZLPSOTXALPJTMYIICFIQOUMXCWIAUHVSFPEUMTOJQQPMCFMIIBCWRCRZBFYPZJTDXBMCHVYVOZCOQZFSPEDQXBVPVKFCFGYAQHRHMQLIZYRGLWNARSNGOVAGKILJLEBWDE");
    msg.type = 77U;
    msg.access = 43U;

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
    msg.setTimeStamp(0.07355909330250976);
    msg.setSource(32731U);
    msg.setSourceEntity(167U);
    msg.setDestination(57279U);
    msg.setDestinationEntity(88U);
    msg.name.assign("GDBHTWZOFVJSGDUUBQQCHTROWRDSZNWCHZFVOSVTRQZDQXNIVODZFRELFTMRADEZAMNGYEFFAHIXCKNRCQKEUEPMUJEPMBGTZMDYXJSRHQZIEXRLRKSBNCGIBVMVIPUYDJGLCBTKUGYOZMTSSDWJJNZKPGLXHLAQPSLNNIYAOBLYBTEKMPAVIOEGJLYWLYHSBVPAUOXUUPCAIAYAOSKIKBCFNWQCPXWFFYMXGXHPWNVIHM");
    msg.value.assign("OIYIUSEXKJRIK");
    msg.type = 114U;
    msg.access = 20U;

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
    msg.setTimeStamp(0.7601417336996618);
    msg.setSource(1463U);
    msg.setSourceEntity(191U);
    msg.setDestination(21631U);
    msg.setDestinationEntity(212U);
    msg.name.assign("OPYHTSDGRYJXPBFVLSVZXAKRSNZJPDYOXBNZDQJXLPSLWQWCAHBBFNEIKAGUUEVMHNNINJVFMYKGCMATVLWUPWGARQERWHFVENVIUWCJOTLRUNDKSBJMMTAVTOGXGECWGCZLZUL");
    msg.value.assign("UWEIEJNBQAWRXBYJDHWPMXBITHPQUJUBNNFVGITUIQMLYCYKKO");
    msg.type = 212U;
    msg.access = 218U;

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
    msg.setTimeStamp(0.7025145076140459);
    msg.setSource(5886U);
    msg.setSourceEntity(225U);
    msg.setDestination(26545U);
    msg.setDestinationEntity(177U);
    msg.cmd = 2U;
    msg.op = 16U;
    msg.plan_id.assign("FXDGOGPRWKFVRWQZNWAPBAANELMDFLWURFYMMIETNXKGXAWQWEHYMZJHCNLJKIITIGHDWKKDHZIXIXPQYIOVPULDLBQJHDNSCGEMQEGWLKZUESEVPJDOGVUVMBIAFCVFJDJZOYSPOBNZSZYCXYZYPTYASRSTGAZBLHAFOAEYKJCVNOTJCROLLCFCXCIM");
    msg.params.assign("ONVYFFTLHLEMIELHHGIGBQNLQZIBPJHOJASESIUHMYCFQYWIESDQSUUKWUUEWJQYXUNJQSFAKIABOTXPVPOTQMSCUDRDWLRRNNVFHRFCJIXMCJREIETEZNKVEMDZG");

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
    msg.setTimeStamp(0.2691162419296571);
    msg.setSource(24671U);
    msg.setSourceEntity(212U);
    msg.setDestination(7833U);
    msg.setDestinationEntity(103U);
    msg.cmd = 164U;
    msg.op = 102U;
    msg.plan_id.assign("IUSWZMQJJFNDYRYSHDAXTUHVZIHYXOEMMJEBDEK");
    msg.params.assign("ZSOOYWSIFOAWTULYFVD");

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
    msg.setTimeStamp(0.9231083691647747);
    msg.setSource(11285U);
    msg.setSourceEntity(18U);
    msg.setDestination(54876U);
    msg.setDestinationEntity(95U);
    msg.cmd = 25U;
    msg.op = 80U;
    msg.plan_id.assign("VCWLCCABBKEOTHGVJHRUFRJYPIVZWWDLGJ");
    msg.params.assign("WWYVGNJTPDHEMDGESLEELPMCZIDDTXFWVBIMFJQXQNQMNKPFFQIFOVWRH");

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
    msg.setTimeStamp(0.49868350572818254);
    msg.setSource(30764U);
    msg.setSourceEntity(103U);
    msg.setDestination(21939U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("SCOSVMCIBREJCQQBZFWMHOLOKISVRURXAMANGOIFOLWDBREZDEZTINRLBPJHCXCIFUUJGLXDSYCCHBVJPAZFNZKRQDTNAKREVLKDNCPLIMHZW");
    msg.op = 97U;
    msg.lat = 0.5501789492115541;
    msg.lon = 0.32014141418578457;
    msg.height = 0.7202185705797027;
    msg.x = 0.9863121661140749;
    msg.y = 0.8770180925396722;
    msg.z = 0.30247060377803336;
    msg.phi = 0.71334395063769;
    msg.theta = 0.2776219696732505;
    msg.psi = 0.7906810224896267;
    msg.vx = 0.6157660353391907;
    msg.vy = 0.7776009890109148;
    msg.vz = 0.15602043843049873;
    msg.p = 0.7362307466678576;
    msg.q = 0.4021369497397401;
    msg.r = 0.08904267013697775;
    msg.svx = 0.21061352680667278;
    msg.svy = 0.8507029107162657;
    msg.svz = 0.08263272916970843;

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
    msg.setTimeStamp(0.2524060740076156);
    msg.setSource(32410U);
    msg.setSourceEntity(75U);
    msg.setDestination(24658U);
    msg.setDestinationEntity(192U);
    msg.group_name.assign("ZVZHBUGAVTPMLNHUXYGLTFDNGYBBMHNWXRAWXSPYZQQZRNWLPRAHOYDXMRVDXZQOEAHAXNCQMLWOPLOUUSRHFGJIRNLEHQJKXJDRCNBKMTZEQDTXKUSXBCSFBVQEWQPAWLGVCNJG");
    msg.op = 57U;
    msg.lat = 0.8532240871318282;
    msg.lon = 0.3647393105765453;
    msg.height = 0.9632573497134319;
    msg.x = 0.27706895761633266;
    msg.y = 0.8930972004430253;
    msg.z = 0.79913690477354;
    msg.phi = 0.005081669511963205;
    msg.theta = 0.09437038743860648;
    msg.psi = 0.8283494251820398;
    msg.vx = 0.8223347152562921;
    msg.vy = 0.7608554126101339;
    msg.vz = 0.9239985390410184;
    msg.p = 0.8389822999153399;
    msg.q = 0.245780739234298;
    msg.r = 0.8433189199047167;
    msg.svx = 0.7793743540739211;
    msg.svy = 0.6773080263279203;
    msg.svz = 0.9735173529606671;

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
    msg.setTimeStamp(0.7079972675616298);
    msg.setSource(25570U);
    msg.setSourceEntity(97U);
    msg.setDestination(1U);
    msg.setDestinationEntity(13U);
    msg.group_name.assign("RAQPVKCAYCDDVJMPRGNCAOCRMZODUXUJYLOZIBWJCWXMLXOFVOFNSTXSBMZSDXEIHSQRWJFYXNKVBCQWNZHPSUIWKOLYRBPYHVCGIKFGDUTBCHTHWUQQVXNYHYFZMPAGEUQWULEMHYVPOVLENLUWTWRSNOJBZXVGMIEPSEXPDGDBTPKQITBOKADBAFUEGAMMKSJIMFEJGKUTH");
    msg.op = 144U;
    msg.lat = 0.3247092558364222;
    msg.lon = 0.5892262825521839;
    msg.height = 0.8268330121922507;
    msg.x = 0.8786281229356018;
    msg.y = 0.5104502150289428;
    msg.z = 0.4995692770587554;
    msg.phi = 0.2261984327973977;
    msg.theta = 0.8607432292528141;
    msg.psi = 0.59405744152531;
    msg.vx = 0.3340208154939841;
    msg.vy = 0.3784310461071235;
    msg.vz = 0.26873928601643293;
    msg.p = 0.018316108341963067;
    msg.q = 0.8821099825331207;
    msg.r = 0.4033264503786167;
    msg.svx = 0.12971279109241485;
    msg.svy = 0.3854565072451762;
    msg.svz = 0.3413899192941102;

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
    msg.setTimeStamp(0.6091425490081778);
    msg.setSource(51601U);
    msg.setSourceEntity(23U);
    msg.setDestination(8252U);
    msg.setDestinationEntity(58U);
    msg.plan_id.assign("VAIUNQLBYXDJXQPNUBWKWZECOVEXRTUEWUCIGOKLTAKAJJJSPFQHJMIHGGUVZCXILYRNDIZPLMMAGMDHOGFYIBSEXOTJFHRATQTTQHBDCJUJEADEBEWSCVKNAYRIKVGCNIMXSBTFNLHCKHNGQUWEWCNKHXDRDJYO");
    msg.type = 213U;
    msg.properties = 83U;
    msg.durations.assign("NRZDHDELWKENIFIJRIOISWOQOYLUHNRNRUOKPFGUSXXJZVVCBECMFMXFUMGWQVDEPWFAYBHAPJMDQYIIKPXYZMNHIJTXVLXYBVOAVGRKMJQYPLRDDLVBXFUJZRDCHENTYFYLSRZKSZIOZSWBACOWXSHQBQFKOANPLZCHPWVNGGCASXVAHFOKKEGYBMAONDWTTJVICESBCARPGGZERQCMUHESLLTTQZWTUAJCW");
    msg.distances.assign("AHUCTAMFIQQGIXLLNNYCVZYSAFTTAELBJRKAQFXVLGPLADBCCMGYBWBXGYHJAAOWHDKKQNHODVRKXZUXJDZQOTVAEMEQUQNARFMSUPUJFKYOHBIDBOLRJGEMJKIPIUBLM");
    msg.actions.assign("XISICSLWZWTCIPEMOGGRFAJAAVPNHMSQDHFECYUQGKVJMNOKQXZGRSFWROUQZCDYQSPCWNXALRAINFQLFBDVMYCRJKBXYENDWUIZTBZFVOSPXRKDHJNEJTMTHKKIUFGDLGCRATPHEQBYKCEMXYZLTYGFBZBTNPYUTAMYUPBHOJSARIWHXZKJPDRIQ");
    msg.fuel.assign("NXJDAAQRIGNICPTAJYCWZSCSJRKFIXYVUTYKCKBWFPZEDZSQDBOJPNLTSUEXHFNCVWYNXQCTHMQFHQGYRPNGKTUTBUABGBH");

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
    msg.setTimeStamp(0.282256889451057);
    msg.setSource(26861U);
    msg.setSourceEntity(89U);
    msg.setDestination(34131U);
    msg.setDestinationEntity(13U);
    msg.plan_id.assign("QJEQZGEMTECFXRRRUCQIULQQNTIIEPCTEOOYMMJNWW");
    msg.type = 251U;
    msg.properties = 18U;
    msg.durations.assign("DJFIAPZQJBFMXIMJXCVVDLHZXWKYWMKJWHMPICYDGBOTONNKNOUXTVQMHVIVFLZAETLVGSXPEYQSQEBNFIPUSXTVFQERJVJHGFRBNHEAQVOTTPWRGNPCVXLSUNYGJASBWOEGBKCOAWARXCMEFYPUNGGLUSZUHNQITERKCYZYRPITGBKLSDEBCKDTZWAQSDUJRIHSFQHE");
    msg.distances.assign("BTRLWBVYXKMBHBUCHREQT");
    msg.actions.assign("DYXFXQJVFLIILPCLYFVMVJZCRNNWSRRKIHRFZECIUFSHUEOXDYEBKEXHKRLUXQTGYPIEJBGSKGYUPBVNYPHOTSEJPDQFBQFQVACRMAZAFOXODJYPWKCKJQNZNGYWBZDGWNUQIWFLNGZFQSMADUQPCVCSXLQXLHJUEUNDABCBJGZRYDGMMWIMGPLWATMAHVETOOLODWAHKOTHYIBREXMKHDVNPPOSTJBBMRJSAZLRTSSAIXEOMICNWKUTU");
    msg.fuel.assign("JNNUTXDQJZNVZEGCZKOYSDOEKTNVQUHLPHXVPYMCACSZWMPANLDFXOQNIU");

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
    msg.setTimeStamp(0.16698350674147922);
    msg.setSource(5553U);
    msg.setSourceEntity(185U);
    msg.setDestination(6238U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("KYLBXLESOOMCHSJOZWYKYAVFFTXAMCEMKUB");
    msg.type = 179U;
    msg.properties = 246U;
    msg.durations.assign("CFZUXFJZEINQXNEZSVXYJJETRKLQITWYUOSTVAWMWPNZVGJPSZAVLZIKSGBXLYADGQOMSXDEUTQFRLNAQQNGRLPOSOABQIPFMDYTZUUKHKTHFPEHECONHEPDFSUGCNMGGYHXVXNMXJYRWTEGLAEJZJBINFWIBQCMMVPBUUCSSWAZYAHJRR");
    msg.distances.assign("JFCCOETWSBKNFRFJQTKZMNLEJXEJLZAHQHAVYMXIFYHILBWGXXGQYVBSUEJKWZGHQCCLANPVTBZBFGUQQSHVFRCNXNPNDLNZPPTWUCP");
    msg.actions.assign("RZBEOBSTUQAWUIOKWFRFRVGDKSMCAPNYRNBFJSQLEQCLCXDHFVHOGODPYMRXMOTUGUZQYTXVTQWPBCATHMXVHQQNPDYCYDASLNJLZNLXHSYZULANIBTLZFJEGIVSYQPIMFJBMEMVSMQRADNRBTIMIBHFPIWDYKJSKOLVXEWZTIYEZHOGWXRUJFNPQEUEKKZGKVOCBPTHBUUCGUJI");
    msg.fuel.assign("YJBJBZHUEORZMLRNYGRQCAEHVHIKDESYDGORMJMODFE");

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
    msg.setTimeStamp(0.3124704276590675);
    msg.setSource(55136U);
    msg.setSourceEntity(246U);
    msg.setDestination(18327U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.9291604968205621;
    msg.lon = 0.30536084909092764;
    msg.depth = 0.22530063124929245;
    msg.roll = 0.0424962134368172;
    msg.pitch = 0.010976871943282895;
    msg.yaw = 0.43851609036342654;
    msg.rcp_time = 0.44664252828011497;
    msg.sid.assign("AOBQIPMHQAXQBEYYGGRXTULVPTLRXQPRLDLVPA");
    msg.s_type = 183U;

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
    msg.setTimeStamp(0.24834996099627227);
    msg.setSource(45749U);
    msg.setSourceEntity(61U);
    msg.setDestination(47578U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.811637047219643;
    msg.lon = 0.4663344111700386;
    msg.depth = 0.5194925713777999;
    msg.roll = 0.08622925774266155;
    msg.pitch = 0.5473099894871494;
    msg.yaw = 0.5526228929354302;
    msg.rcp_time = 0.9222874410144333;
    msg.sid.assign("ZTWHPOMEUFWFRYSQFQNCPTWZVAUZPUZOESNHENIVIHDCSXACEDGXEYEUHVFKLYUJRECZDOZBOMOQQLELKGXGKMOJXWNMPPOZCONGHIIUMXUVFLCYFKBJXFTBHFGVWVZYKWANEXHIIQTQKANQRXHRERZRIUJXRIZRQBLFQUTTTWPBSLDBPMPKJKKOPBPDBAYAJAOSLAKYSYMSDHMJCAXSVGBLWTMNRYCSIL");
    msg.s_type = 1U;

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
    msg.setTimeStamp(0.9657624120848234);
    msg.setSource(3197U);
    msg.setSourceEntity(143U);
    msg.setDestination(1781U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.008615128750852574;
    msg.lon = 0.08938641994307617;
    msg.depth = 0.9409588423604653;
    msg.roll = 0.7588483829851618;
    msg.pitch = 0.23172800680417616;
    msg.yaw = 0.4914655821077155;
    msg.rcp_time = 0.17859087445595045;
    msg.sid.assign("UBBUMKJHKUJAXZMYGXMOCQCGNELUXHPGPECQGFSLFYQAVQYRKTADNONHHTJURGKNJILJBESZRFGBHATYJDAYCBYBTBZOXNDBFVJDWZO");
    msg.s_type = 229U;

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
    msg.setTimeStamp(0.6315565453142977);
    msg.setSource(20422U);
    msg.setSourceEntity(194U);
    msg.setDestination(25406U);
    msg.setDestinationEntity(216U);
    msg.id.assign("ZDJWKDNZMVOLQMUEDKCMHUGGPCAINSAZRLLKXTK");
    msg.sensor_class.assign("MFRYRLVUNBWSCQTTDPXQTLXJQGXXEAUWLPJCGRMSCYOSNHCOIMCMVJZKYMLWYLBBMDJAKWETAIXXLOBDFSHQQQKA");
    msg.lat = 0.007723803564952281;
    msg.lon = 0.32968022867096203;
    msg.alt = 0.9732486140094764;
    msg.heading = 0.9290232388736752;
    msg.data.assign("XTIIUHDLBFCLLHKCIGWSRQFHCKFUSNCNSRKAUBKNRYMGNNWUXVMFBGOUWCVZJJXZWCLFSYBFIATVVCJLXVPEBYDNQDHOXAEZTNELKMGTSOMUJYXGDWGHTZQURZVPWJEERJQOEPYGNRKEAYTSDKGIJQRPAITAXGYCIAUHDVPYOXVKEZGES");

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
    msg.setTimeStamp(0.9427116991230514);
    msg.setSource(55365U);
    msg.setSourceEntity(100U);
    msg.setDestination(7404U);
    msg.setDestinationEntity(44U);
    msg.id.assign("QVZBTSDTXIOTRYKSORWUSMDXTIGZVXCSYOEYOKPDSKFGGKHJVTPABQNGWTWLYVELDGRIFLRPXSKAVKOLJZNWUCNURGWWIIGZPGJPISBVHASZRSYUPQYHJDUEMDFOYZTDCIFIHDHXXNMVXRVMEBBH");
    msg.sensor_class.assign("LGZWWSUSTVBQOXESXVFVDXPRINGUGVZGQWXTZSIYIFSSUVGUNACYBJGFIJXRIMIEVHMQFRNWPNDMHRRWCOCJZQDCUXJHEAHVKPIALYEOFLOQALGUTRQOTZKZZMWDTDINJZJKLLJOKYMQJNPWTKLPVHPLNEKMDDTFXDEOYPTHOOSWNBKA");
    msg.lat = 0.25435790940859715;
    msg.lon = 0.2703938992729754;
    msg.alt = 0.5600700234065144;
    msg.heading = 0.3888001772811439;
    msg.data.assign("BKYNKNREFUYEOQINKIOBFBXDCZQCDXTJFYIVOCIGBMVDARLJQWALGDNGAZLMTPQZPCVEREQMOQQMSHEBPLYOZDWUZHTCWSGIXBBALBRGAKHEFPLXSURTYLJWJSSDMEDKOKZLDMYGWJNJETBATJQOHZCWYFTVRAVXXKGQWNUHFMUAISZWRPQLWIRJXYIPATNKMFVPGFPHZOIUHFXDCRNDXCUTSHKNSCEMYBUPUJH");

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
    msg.setTimeStamp(0.3233438026044334);
    msg.setSource(6705U);
    msg.setSourceEntity(162U);
    msg.setDestination(56973U);
    msg.setDestinationEntity(135U);
    msg.id.assign("TQDDHFCLYTSFMJFKPTCPVTRVHUBLNQEUGTFGZIMERWIHLLBHJTRAORNCWJVPNZOXQKZGASFDQTXQYIXOQJROAGUEBGBYFLBKSXYHPISYJWUOCFRKMAUZIHCXDAEYWLDJELGKCYAMMSGJWAQFNBUGSPMICNHDNFVOOPUHRBEMOVBXZNUTBDVAZOT");
    msg.sensor_class.assign("NOSFPTELISHWDGYQOJEGRDWYCMZCRWXXUBOKJWKYUHNWLVGTGXYKLGIVYPHZWRLIARUMBACGYMHQKCGIQVSSUSHSNDJOBTQMEBJNHPZYDDTCTIXEBPJKHPQTLDWFVIBEMCAIXRDZFAUCNIUKWFRRVJNQCPVKGLXUJDVVZZZEKN");
    msg.lat = 0.5554687359211974;
    msg.lon = 0.37108586659879084;
    msg.alt = 0.10949427408638235;
    msg.heading = 0.5109668888602746;
    msg.data.assign("FBBVLEWCRTQCQGUOXQGWEESGZGNRTQTHVRYWDNBHKKXPOKUZD");

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
    msg.setTimeStamp(0.0688466959562376);
    msg.setSource(30328U);
    msg.setSourceEntity(203U);
    msg.setDestination(54584U);
    msg.setDestinationEntity(165U);
    msg.id.assign("CLLVMRCZWROCRYLWNTJAETVVYPKCRSJQPGTGDUMPCPTHBCDPRSQVQPFJNAIGANYBDTOHSXYLAUKGBXORHXJHMSVZZEWQIITYWGJEAZQXUVM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TGVSNECUZPLGSSAV");
    tmp_msg_0.feature_type = 241U;
    tmp_msg_0.rgb_red = 105U;
    tmp_msg_0.rgb_green = 175U;
    tmp_msg_0.rgb_blue = 245U;
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
    msg.setTimeStamp(0.9603879510296021);
    msg.setSource(2595U);
    msg.setSourceEntity(76U);
    msg.setDestination(28927U);
    msg.setDestinationEntity(231U);
    msg.id.assign("TAAFFZKYSZAZKHGWTMYOPWFUSBXYYIWVURMLRTUBAXLMXOIJQYPAQRNJIKMGMQOXAFKVDNCPFNVOMBHKLFCRAOFDSICIVSVPJDIBDGQCKLBGHFFWEEGHQLI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AVZNMEYIFFZBPOGYDLRF");
    tmp_msg_0.feature_type = 31U;
    tmp_msg_0.rgb_red = 191U;
    tmp_msg_0.rgb_green = 236U;
    tmp_msg_0.rgb_blue = 208U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9516046463585911;
    tmp_tmp_msg_0_0.lon = 0.23263825721858677;
    tmp_tmp_msg_0_0.alt = 0.8096417350142368;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9968846367435056);
    msg.setSource(27399U);
    msg.setSourceEntity(79U);
    msg.setDestination(16016U);
    msg.setDestinationEntity(245U);
    msg.id.assign("MLUKHEKCOBFLQJREJNZVFUDLBLXGMFBXVEPTTTJVFQPWYFLKVVXLHYYWQYKISPYEZHWUBUDEFIDGUYPOILMZWZECQXOYGSGNBNZIRAIQNSGADCOZKXNTEKRCCHCYCNAJIZCAVDUNGDMRJJTQMASQOKMARKGRHWHDALEONVGPMXDTSSTBCLORGXPOPWOFYKAIJUNBJRXML");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WIHMUMCYZDXTIYEYBSASNAITGQGEWPFOHUWRGOSRTGYUOOBZFDGZNWIIFQTDNUWEZMVALBRHPYLFVYYJNZWLGGTAJMMNJBD");
    tmp_msg_0.feature_type = 109U;
    tmp_msg_0.rgb_red = 246U;
    tmp_msg_0.rgb_green = 126U;
    tmp_msg_0.rgb_blue = 225U;
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
    msg.setTimeStamp(0.05871615680798947);
    msg.setSource(49087U);
    msg.setSourceEntity(5U);
    msg.setDestination(33703U);
    msg.setDestinationEntity(252U);
    msg.id.assign("EHJNYOYHSSPFMFLWFXVXNVZYTCAGMCNIUVKJYGJHJTTRVHNLCBVRWWBTPTUEHUZDRKBACOCXDIQNMGKZEHZPOMVCYYABMEBRTUPKRFDNCLEBZMSQGEZSWSJWOXALGUVDEBADSJIOZRLUTMQKALAJXQLZZUOSNSZSXPTRFKWKCKFIFDHXCJNPYDGYOEYINIQVBTQWEEHBFNHLFOWMKDOPGAY");
    msg.feature_type = 74U;
    msg.rgb_red = 0U;
    msg.rgb_green = 216U;
    msg.rgb_blue = 201U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8282493859589799;
    tmp_msg_0.lon = 0.5871384411683918;
    tmp_msg_0.alt = 0.6342383592017174;
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
    msg.setTimeStamp(0.18555445708118068);
    msg.setSource(53384U);
    msg.setSourceEntity(208U);
    msg.setDestination(40679U);
    msg.setDestinationEntity(237U);
    msg.id.assign("UHVGFQZCLBACCAETEPUCOAWAYATNGYHBLZQEWCZUYTCAORVDKLLJEXGJNETJZSMMYNYIYHSVZJOVMDKSDMKEIQWOODRPUDITGVKVTSW");
    msg.feature_type = 65U;
    msg.rgb_red = 51U;
    msg.rgb_green = 127U;
    msg.rgb_blue = 33U;

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
    msg.setTimeStamp(0.20607757415237782);
    msg.setSource(8440U);
    msg.setSourceEntity(58U);
    msg.setDestination(21259U);
    msg.setDestinationEntity(40U);
    msg.id.assign("FXIGOYWTFJQJJBBXDDWFTLWAVBWDRJSBALQVZFNTKQIEKMEZOREMYUQHZHMEGPMWSSNYLDPKVCYAVNAXNKSSOYTGHAYCDGPXHLCIHCEFDQFVPAIOCMKCOZTPTGYSHLLNXVOEXMLEJAWPXTQDRSOMJCUUQAKYIQMDVVCFSROIFRUSXICRNKUHJEWNNZRUFQBPLJWZKQUYITRJWEUYGISMCZKTGDUJMRZDHZBGLHAFBBGAZNPBPOXEGVBOKHUX");
    msg.feature_type = 32U;
    msg.rgb_red = 124U;
    msg.rgb_green = 161U;
    msg.rgb_blue = 197U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.45177559035896864;
    tmp_msg_0.lon = 0.7306571259258232;
    tmp_msg_0.alt = 0.32580360911497963;
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
    msg.setTimeStamp(0.003425415768807172);
    msg.setSource(38530U);
    msg.setSourceEntity(171U);
    msg.setDestination(14660U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.22422302290640694;
    msg.lon = 0.6320934509680486;
    msg.alt = 0.17555318182171098;

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
    msg.setTimeStamp(0.7541233596915285);
    msg.setSource(32271U);
    msg.setSourceEntity(234U);
    msg.setDestination(4623U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.6822895866333053;
    msg.lon = 0.5924032891019403;
    msg.alt = 0.9610622053824598;

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
    msg.setTimeStamp(0.30018242854717414);
    msg.setSource(7658U);
    msg.setSourceEntity(120U);
    msg.setDestination(12525U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.0018017184779353101;
    msg.lon = 0.6652549413241525;
    msg.alt = 0.458964438506537;

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
    msg.setTimeStamp(0.7755251406236771);
    msg.setSource(24097U);
    msg.setSourceEntity(237U);
    msg.setDestination(60361U);
    msg.setDestinationEntity(203U);
    msg.type = 174U;
    msg.id.assign("QTKKGPQUOSSJKLGJVOEXRTOBTHENXDHNLIVPAXPIDZLONLZHKPU");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 228U;
    tmp_msg_0.value = 0.9423230296879224;
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
    msg.setTimeStamp(0.7181559472086549);
    msg.setSource(43098U);
    msg.setSourceEntity(13U);
    msg.setDestination(31683U);
    msg.setDestinationEntity(149U);
    msg.type = 162U;
    msg.id.assign("JNKSOKWMEFVAKPULOBJLHNLHZHEKDCDRQAHGPVUK");
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("RNJGHIYPDGJOBCAUAMBVFPZKSLCWWVSGYEWAYDLCWDDCWQFHJRVMFUSPVDOFLURQVXNKOVHMQVRXJXBROQNGMLQTIROKESLJBGBHDBOFPZIRGGZQXZASTAIXCECNZXKIYNZRISOQUTSJXQNMDHEJMLKEWTIZEIYVKPVUBCZSFWMXIMHLWHYPUCAYSRGFJKAKDIT");
    const char tmp_tmp_msg_0_0[] = {-56, -1, -9, -53, -1, -93, -35, 26, 62, -79, -117, 6, -21, -33, -30, -12, 112, -95, 49, 90, 108, 19, -43, -68, 7, 120, 113, 70, -94, -51, 7, -125, -27, 49, -77, 116, -20, -95, 3, 49, -122, -44, -22, -112, -43, -3, 97, 111, -16, -108, -52, 31, 92, -100, -114, 38, -88, -60, -52, -37, 75, -108, 65, 9, -62, -37, -82, 56, -84, -71, -44, 47, -106, 74, 109, 95, 79, 126, -69, 53, 79, 93, 48, -51, -102, -55, 104, -76, 58, 100, 126, -63, -118, -83, 78, 59, -11, 99, 84, -96, 28, 67, 79, 10, 124, 91, -73, 33, -17, 3, 79, -15, -47, -63, -62, 11, -90, -96, -97, 32, 58, 123, -82, -10, -66, 1, -55, -34, 59, -3, 101, 58, 82, -9, -79, 38, -14, -103, -30, -21, -124, -39, 6, 62, -83, -54, 79, 44, 70, -67, 83, -46, -119, -43, -108, 1, 24, -6, 1, 88, -85, 1, -18, -12, 61, -111, -61, -110, -31, 61, -114, 79, 65, 64, 93, -62, 61, -83, 49, 109, -33, 57, 41, 5, -32, -58, 64, -20, -25, 17, 101, -84, -84, 42, 38, -102, 60, 113, -23, 24, 86, 84, -118, -121, -7, 23};
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
    msg.setTimeStamp(0.549421542421853);
    msg.setSource(58U);
    msg.setSourceEntity(25U);
    msg.setDestination(755U);
    msg.setDestinationEntity(114U);
    msg.type = 101U;
    msg.id.assign("ILHWSFTRTLWQYWZFEAIXHPZVZUO");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 725524147U;
    tmp_msg_0.value = 103U;
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
    msg.setTimeStamp(0.30505555732555434);
    msg.setSource(23975U);
    msg.setSourceEntity(153U);
    msg.setDestination(43870U);
    msg.setDestinationEntity(134U);
    msg.localname.assign("TAJGOSIAFKSEKAILVDCWNJWKPDWWKEVHCKLOGFMFYTAPWMWJQPMHVSEDVKDXPJCLSSGBBFBTPIIXRQYTVYWPPNZNMSQZZLTLBYFWV");

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
    msg.setTimeStamp(0.006876592235813828);
    msg.setSource(64286U);
    msg.setSourceEntity(232U);
    msg.setDestination(30353U);
    msg.setDestinationEntity(191U);
    msg.localname.assign("HXFHAHDVTQEVUIFYYZGWZWOAUMMVWZQJFGIQQVGWLJHPMYTYVOCYRFTBOZLAWULNGURQLXDIVNHMTERGVOSPRIWICSTSKZUNDRJQWFAFPMNMDNZLSXSKCSGGXSCKQEEXXAUZNCIJBTIKQEPUKCCWPMLFABWOMGFADODBJDGAFTGMXXYYRSSRXJOYITZBRHVCLBXUELCHZAKNNNONBDKOLOMPJJBZSFEDUURBYKHC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UDRPEWSFWRHOONT");
    tmp_msg_0.sys_type = 105U;
    tmp_msg_0.owner = 34893U;
    tmp_msg_0.lat = 0.4215459563932169;
    tmp_msg_0.lon = 0.9093465184832329;
    tmp_msg_0.height = 0.34359732142260757;
    tmp_msg_0.services.assign("TACXJLENVEVGIYPHLOCTOQZFQERTVHQTFNPGYAPYRKTJKAKHHYGJOIKGDUJWSQNMHEYWCHKXQBYRLTJBBMMMYGXEAWUBLYNQCSVZUZJAMUDOQ");
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
    msg.setTimeStamp(0.05311258296015675);
    msg.setSource(19357U);
    msg.setSourceEntity(113U);
    msg.setDestination(58849U);
    msg.setDestinationEntity(247U);
    msg.localname.assign("ARUXHOTXKEUNEDKPMYQRKGRUHPITMECPCFMVDZOOALXHYLUCXOL");

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
    msg.setTimeStamp(0.8778649230279743);
    msg.setSource(3848U);
    msg.setSourceEntity(178U);
    msg.setDestination(2931U);
    msg.setDestinationEntity(29U);
    msg.timeline.assign("URHOIAXYYTPMYOENJVKXFNCWNQYDWPPAWXJSYSPBCVLQQMCKDJPILFCLWNJFFXSIOPXXWUSZSREKEZZSDVMCMKWLDLEEJCHUHETBUFOVBTFGBAOJJRBXYQDARQS");
    msg.predicate.assign("ZDISJJYLLMMOGYUTCMQZUIORVDHABXHIRPPIKTRDTVWYAAFZYYWBXKCECCHBFZURCRRMCEWITVUZTXASGFQFOWAYJDENIWZSGYWCNDXTDISFONVQOCEPUNUJPIWPTUOAKXJWCVVBYLZXXEUHSFPDEGFKUIYQQEAFGQMNN");
    msg.attributes.assign("AWJESQBWQSXMCBPKWSEAITRUINYKJVHUPAOZPVTTVFRQQUOHPRQADLXRSHAQRICUTDZNEAFEZGLZRTIOGJYRMECXTHDOGFLEFZLBYDRBWGDRVFPHSDWXENMGMNOHAFLWKIJPCJPVUJYXLYSOIWVMXZXOYIDVZGKBTSGXBOQKKOUASE");

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
    msg.setTimeStamp(0.986212938022096);
    msg.setSource(16828U);
    msg.setSourceEntity(231U);
    msg.setDestination(3593U);
    msg.setDestinationEntity(83U);
    msg.timeline.assign("NCRTOZDULEKZNTJYTZEWZHFYFVMLHCIXCVQMVREYAGLHLRYUQDTDUUGWOVB");
    msg.predicate.assign("MUIWLSHQUVXBRGKLDHPFXADNZUSNTZSJTWNDMTNUYCEVGAYOM");
    msg.attributes.assign("OXWWMFKVZZTJLVBPULGKHJOKFEYQWMJTIQDRMDCUWCNXSLUNJX");

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
    msg.setTimeStamp(0.02591584312315387);
    msg.setSource(22918U);
    msg.setSourceEntity(111U);
    msg.setDestination(15894U);
    msg.setDestinationEntity(217U);
    msg.timeline.assign("PXQMFLANDHWYSWYSOBZNOKNJECFGICBNZAEGZHJGZNUZRCQPCUYLJCOFIEUTHKXONZRCGREZBJMLKWVGLHJAOVYVOBELJTFYTWPIGDYVDLONRQJBRAPFWOQENGRTTDKBKUWLHAKDQTMBOZRSSOEXDMTQCUUPLMFKXKQNMTFPHSETJXGVEMXBNPAVYSWKAIFWDQHJYVKAXWSMEVRSTVUSUCQBQIPIDIHPHDHILMWBCXUARRFACZJXSGMYIFIVZD");
    msg.predicate.assign("UZYXNNTZIKHCCVUJDZYQAGROJDHWZLLKDKLQRUQMFSLSJRGIYECZEIMCYGDPSEZFFCSNNNATBVMIIZW");
    msg.attributes.assign("NGYCUKACPUMRSJHEWSDVZUPPPHZXEOVTBBASTLZQIDRODOMSMBYXTIYUENHMTHMDNLQNJAENPSMHJXCLQWBCQFIRDWFYRFKNOKVTAESDGTCCBDMPSVWCPJZNSMRCQABAKOCGZPZD");

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
    msg.setTimeStamp(0.7067152007050397);
    msg.setSource(29276U);
    msg.setSourceEntity(168U);
    msg.setDestination(37534U);
    msg.setDestinationEntity(196U);
    msg.command = 220U;
    msg.goal_id.assign("ODCNVXMDVNMZWHZGVYQZAKYGKESIRDSMXPRJEZHBTRNWEIMXXORACQHDFDSUVWQNNCXLTWEWMJJIKZAYOQQSPMYAFQBIJBWCHYTAUHILQERCFMLPPGVKIVZTLPPVLOAYKUYLMSENUQDBOGTWYQSR");
    msg.goal_xml.assign("ZHDLLKKYJRRNWWXWWXYJJQXUIMFPUAXNRHGQYQOBZJTODJTFUTENHETHGMTBLMTVKQVASGVQVODD");

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
    msg.setTimeStamp(0.8464186363274188);
    msg.setSource(43830U);
    msg.setSourceEntity(245U);
    msg.setDestination(23456U);
    msg.setDestinationEntity(220U);
    msg.command = 132U;
    msg.goal_id.assign("IBQMYWTWBBCYSVQRYKGSDDLOWLFTDAOEQJHYMVZKQYKLDZPJDHWGQSAJJVLFGPSIYYOSCPWZMWVXUFMEVPIIFEBRWXLISAKHCWVEFZIHATXCXPOHMXAUERGDJNIFNADKNZCQIOGXCRBDQQJHVGRKLMFYLNYOFNTUSEHFNUZAPXZWBHER");
    msg.goal_xml.assign("OLTUADFWMWQMYIZEWEKIDKRPPVUXQBWYRDJEHPILLYRETXDETVOJBVIXIJPTNXLKJNONACVONANUZKSSADFKGZSUBHZDGIRFJOKSYJKXYIIBUOYGZXVVRHMRHHNZGLJDXRKECPLPEGDUHBGHAUNQVQYTECPLMMZXWCATQBMZQUYWJSQNALWLSXQBTSTLTOPFXOOBFVOWECMKGVZHNIMRDAFIBZYNTARSCYFGVESCBHGFCD");

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
    msg.setTimeStamp(0.07225517604842424);
    msg.setSource(34799U);
    msg.setSourceEntity(40U);
    msg.setDestination(6850U);
    msg.setDestinationEntity(231U);
    msg.command = 215U;
    msg.goal_id.assign("BWMZEPVATDRXLDAWZUJVUSXGMYQGQCBOHNQSNPLMGUVKDDQPCAPYDNOZCQUKEXRHSVIMHJFZEKSXYBIFKHJWEGRPJGEYITPXD");
    msg.goal_xml.assign("EZBPXLLIOQYXZTBCCMZUHQGQBWVBOMLGJMHFKEDVTRMVGVFSEIXMNZBRVGXPXRRCHJIYRAEHSZFFIFZKYAOQTZLEYOUYQMFRBNUNIOPWLMCZYTNLHKKSBPIFRUUSNPOSYSHKDWQXWQIDQAQCUBQGTSVTAESTMXEYNLTP");

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
    msg.setTimeStamp(0.8017846505073372);
    msg.setSource(53397U);
    msg.setSourceEntity(63U);
    msg.setDestination(55951U);
    msg.setDestinationEntity(236U);
    msg.op = 226U;
    msg.goal_id.assign("HSOUBBQAWJBVSEQRSKRWEMYBVWJFKJODONFKVUIYTJQQGSMAVUYQGRJWGBPCNAEVPGXUUESFZUWNEYJJQGZXYZOYPHGSKVC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BWFQUDRBJKALGFHVL");
    tmp_msg_0.predicate.assign("BTQRZXXHBAKMSESVMSOTLNNIRUNARNCMFBUYGDBCACVCQHKRMJGGSAUWSNOPSNAYXQWKDBIDHTVJDGHPYDHKFLLGNEORJFCUQZRIEWWFOKCEDLQIPSCFGJYJZBAMFQUMIHFYPOZYUYVLVDEQPZMOEZIDATXDQWHNLQALGGLJROYGEUNOTJISPETBPWMWZSVVFIYU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QVBJFGMGUOHQXKNLCYMROTEQPURPXSKYADKSVEJCVVNCLTYHBJUKCZLOWYCXGWJIVPAOSLZJTGSRHMQLGWMTAXU");
    tmp_tmp_msg_0_0.attr_type = 174U;
    tmp_tmp_msg_0_0.min.assign("VRAWASGAODSDXXXUZFWOGQMQTHBZXHUUGDJSGJRCZZCIZCECTPUUEDWPEOWFBXYVLMKZKEQAVPZRXSIGUKBIBKTMOLPVBXNALCADQPNMHKKHBTPFFNTFWTAUVVQXIBYIKEIYETOHRLSLRTSYSLSOGWJAYCIWGBZJUUGJQFZVYMNNEEOPKKYMRCDDOHDBPCPFHVDRCMRMAQINKHNFWJNTNLSLJJWMZRRVQLYIDG");
    tmp_tmp_msg_0_0.max.assign("EYDSWWGNOABIGQETIEUMWPQVYZNWVDZMVBXYAPZYZTBIUOFVJTAVMMXUBOPPFBDPBANGLYWACGONOFPXVULDROGMUYZBTIUDXJPTXATCXLHGBTKXHNNAAIESRPJEQKKFGQYCGKVUDHAOMCFSVTHODFHZICKHEUZKFWJJMMSJHJCLLRIIORYUCIECENJEKDXRHMFRXSKTWWLFQYSDLRSRZCQNQLKAHHYPFLMEBZUILJRWBXRDQSVSOGPGSKJ");
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
    msg.setTimeStamp(0.046849536063216735);
    msg.setSource(60770U);
    msg.setSourceEntity(36U);
    msg.setDestination(57327U);
    msg.setDestinationEntity(62U);
    msg.op = 56U;
    msg.goal_id.assign("WFZLSYGFMOVPNBSULYPJPCGYOXBDQHTNFRNMMBCMIFNVPVHSMKZTELAJTCWBRZBYVBAUNHYGFQCXKAELCLMTPAIJHCQKGGJEHFVXDPEWEYXYQXGNELOGIGKNPMXEDUJPTOODLQGVKDSJWRSPQSTEZTHLCZXKKMVJSHDBWKVONLNUMHIFCHOCKIZYNZBCTIZUDDUMXIDWUJRRROURBALQRQWHXTRJWGAQSIAKSIARVWZEDXAYBOQYEVAUSPFT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZRLHCJGDCBAGTFSZXORDSAPBYIDNNEEIWCZULQVSVDNREPLQJKZYMUJGWEOPMMCUEQVENDOLYTEKBMWYMFKSKUGGVCHVAMOYTXSNFDHBUJKWFBHNZXOFKAUWJTVSVMAAPRTEAGLXPXTOWLJEIINWRSMIPYOXCZYTHGBACUKAZPHGZDVQQDJPARWSHLRFLBTPHIYQJQFMUORDIZKYJIEHILKYGJUNQVTXFINOMXZBSFPW");
    tmp_msg_0.predicate.assign("NBXMOJURFIMETWTULEOJQUBTSRMEPNXAAPQVZQJPMGIORTPVIQHBHAMOXONGEJFDKSYCZEZOLXOYRTIMXUHKDYZJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NBOHGRLHYQYYMTMCWNFFEPLJIKKHIOVJLZJCEZEJTDEAWZUSJDXHFTURNDLAHDKIIGUHOCWEJSSBZPLVUXOYNXDGQVRYUVTOXLRS");
    tmp_tmp_msg_0_0.attr_type = 214U;
    tmp_tmp_msg_0_0.min.assign("JCYQCYDGFV");
    tmp_tmp_msg_0_0.max.assign("TIEMTLPHVNRNHJUTQGVFLRWJLOSMRVUGCAIULDEVLZBFHNXTXWTWZGXH");
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
    msg.setTimeStamp(0.8175099229431652);
    msg.setSource(47554U);
    msg.setSourceEntity(166U);
    msg.setDestination(39829U);
    msg.setDestinationEntity(66U);
    msg.op = 228U;
    msg.goal_id.assign("DWHITPPAJIWMQCMXDMXJXYWVSAWVRSRCTAZUACCTRUIFXHBP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SJFBZDIEJHXXWNXMVNFMRPXSVTPILJKPVBZPPFYQSUCUYHQHIARERFYULWKTYCKLVOJGLHXJXZHRCLMDCIASSJAFLOHMQMTGGOWOCNWADQERYKEEZSWZMGIQHUJCIXROQQGIAPZOWXCDPAKUULMXVFKXSNMWCDVAOF");
    tmp_msg_0.predicate.assign("XFDBRVRESZAZODHGHNYAOPPIUYJHVIYYVCLXEXQWTCIXMJSGVJFUNGOBMYFAAFJSTECFBVBFUAPBGEAACKRFEGHQJPXICRWPWLWEOZRYNNIBUBJLSSKVQJMIPMHDZIGHETQAXOZQRDGLNWKOTMHLKLKCAQER");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NUSWGYKOAFYMQZRCJTALRZHVWBKPFWGVKMTRVUFVHNPRYILQMLTXPRBEKISLIHMXCULNELLBMSMPFZVISYOLQXTTFYAZTKXLCZYVZWMODYOUZJJJWQAXACBGOEBHKMMGAPBCNHCNHNFVCHNXIKPFGR");
    tmp_tmp_msg_0_0.attr_type = 56U;
    tmp_tmp_msg_0_0.min.assign("KMWKUNGWRDFUFTTBQYPWWMWIDKEPMEJFCDJHXECLSHHV");
    tmp_tmp_msg_0_0.max.assign("WTYYIAFCYPBFUAHFVBMOPGJUVMIFTEILHXDSHKIZPUFGYPGQBOEMFJTXHMDSIXHEJZGZPWXPTMUCAUXWNERVWDZYMOEZTR");
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
    msg.setTimeStamp(0.5500417415705557);
    msg.setSource(24918U);
    msg.setSourceEntity(85U);
    msg.setDestination(301U);
    msg.setDestinationEntity(140U);
    msg.name.assign("EGSRLAMGWVDHHZGQNIFFTQMZTVDMVIDIFCLWMOAXHEIOKVUYAQSWCPLUEZSQRZLCAOXYKNEADSUBEWIRKVMLPSJGCUNSQOIUTPSTYHAWKXWFQMIZOTNBJEDM");
    msg.attr_type = 209U;
    msg.min.assign("UXPIDPKPZZEZVPJIZMOJQTWLLCWZLCGYLWX");
    msg.max.assign("OYHCSOPNLQDZAECOPBCBBCSQD");

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
    msg.setTimeStamp(0.6487597672981638);
    msg.setSource(30370U);
    msg.setSourceEntity(46U);
    msg.setDestination(53007U);
    msg.setDestinationEntity(203U);
    msg.name.assign("ZCVBYJEEWOGWQDENRSOXHLHSVMMZTQWGTKFAICKZVBASDYKPXGSDSJNHBPCGURTDMOUDIYVIERUNPWYAZFGUPSVLNNREZNLCKXVMQHYEAARDAPTFICJDCFNBJJQUULWOQJQFBVTM");
    msg.attr_type = 191U;
    msg.min.assign("CMATNCJWVIHJEJUVCOFIRCGLZNPRBTMUFJDKXWRYORPXIJIKLWUBBXDWPMTIHWAZUSVRCZVSBSJYQRGHVRVPAVVLJDATINESOABTADUPJEEICZZTXGBUFIOZOQZNMYTQLUOSYDDKYKAIFMBXWMEOPRWLHSVMLC");
    msg.max.assign("TKRDYWEOGJLQBSSTIZOVEDCNCBLLFNGWVGKGGOAVYWHAPVINRFLOF");

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
    msg.setTimeStamp(0.39484141746851487);
    msg.setSource(33442U);
    msg.setSourceEntity(195U);
    msg.setDestination(2616U);
    msg.setDestinationEntity(229U);
    msg.name.assign("MEMAPHUUIOPZJIVDIYIKCVPFOBLYFLDJWNZCTEBLAVZRXFVBTRDAZBSQINXXZMUFRWWOGICLQGOMXHQKJADDXNDTCGPOVDQYYDWO");
    msg.attr_type = 244U;
    msg.min.assign("KZFUTJKLBXFWFCZSKFGEVOJQCIACHVRZQXGGFLNUKTBSMYCXWVAHQRLTHWAOCTKTLPQCANRCSGRIIUQIZTYPSKGBHMAXDDOWSZUUCEWMOINTPLLEZTENVFOBUPLTRKPNMLZPCOXYZRDWZGBGXTOQIQMFVLYEVCIPEABMHDWWSGIJAFKBLUNWDJRSVJMJDMPVSKFHHAEXMRYDENHPQHJAXBOYNEWMHRX");
    msg.max.assign("GWWLVESIJDNTYXCGKEDRMDARXLHLQBMKYOZJXXPNPKCPVASVUAZLLMZAVBIYGOCSHDLWAIRPZRDKYKUSGZYXPMJCWNOJDQRNYTZNMXSFNBQMINIWRNIBDWVTXYVFJFAOQGCJEPMSEHFHRUDCZFESTDGVZQBUWTAHSXYUYPUFOSMRGLUSBQEQHVAIGQOJEFNKHVJZRALXVCFQOTCUUTMGLBJAKPQHFNPKHP");

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
    msg.setTimeStamp(0.5804057082787906);
    msg.setSource(7371U);
    msg.setSourceEntity(168U);
    msg.setDestination(34377U);
    msg.setDestinationEntity(37U);
    msg.timeline.assign("KHQALTGHGMUBNZRYHTNQPJYWTMTGZHEODVNDPJNWSSCOVLTIGDQJHFCCSNOCBADZHOIXUG");
    msg.predicate.assign("RXPLVZMMTACABULFOUSVVJFGRKVYSVRGUDKONMHQCATDULLPHHDKGZPCZYYEYXZYBOBZTWHTFGFIAPDBOVQNNWWZFSHNSMFKXVZIO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UYQJLNUHJSKKINOEPFHMWQEFZBWRAQVAAXIBCP");
    tmp_msg_0.attr_type = 218U;
    tmp_msg_0.min.assign("YCCWIZPPLBWEKIEBLUVDSTKDKHTWPGSXDOMQQYQVRADZCJIBZOCOPOCSFIADYRBNGNWSAKKRXZPHJYUNCEYHHBXFPMWRJPOXSGECZGQGFNRYGGMSNDQJMAOQHMCWITTUVSZYJXURIHKECJZDNFJHBQMRTXZVQFNUYKONLNUQABWHJSUAFNDIWUVZGRMFTXHALMVYWJSXEVEZBFYTLKQCS");
    tmp_msg_0.max.assign("FIVCODQNDNNCNKBYVQVVOJKCGGMYPQTEOVYGDMAKIJBPGAIDARECQJJSPDSNGFUUHHYJAMDL");
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
    msg.setTimeStamp(0.3346632482236399);
    msg.setSource(22396U);
    msg.setSourceEntity(48U);
    msg.setDestination(11047U);
    msg.setDestinationEntity(215U);
    msg.timeline.assign("PEIVMXXJDUNSAHODSWYLWWNCFIGZCFZBNNLOFPBMDOXIPA");
    msg.predicate.assign("IKKGUSPWJRCGBTGJVNGPRFKXUJDXQSMOUDHGPFXZOYEJHUBSIMIHERHCVMWJJDAKJPCCVGPWAUTEIHTNHYXQSFYMYPMIBZKLZLNNQTTVPZBCRQAHNQKYAWSRXSKRGATZBAUOHKVPWNVLSNBXBTPYFBWBEOILSMOJCQMEQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WSUCQGEQYDQLFNYWXSFCTKVRCZYYWJMTUPIWTEXYJGXRHAFAVCOUNIPACLPINKZZVEHGAGXXCOAZSIKKPUNUSVMBFIEJULNSRPODVNLAEBYDGBFMCSVPXWRCOLQERGKMDMZIPIMKDJFWHPWCGBSRVMEDDPXWNOMZJZTNJQVNNBSAHIIHRDWUJHDQPZYTFHAXLBHAKBQSZQBSTEHKVUAXKHLYUJCYLTQTOJRLQBBXZEWOOTFRYOTMGDK");
    tmp_msg_0.attr_type = 64U;
    tmp_msg_0.min.assign("WVQZHBZBHOOQNUCYEFBWZKEEQBUYGHSTDQSSIALTYDGMEGAIOMZFGXWRFWDWCILREPUGTMSCJCMZAMLBNKKITXNOVKUWKIYEFLVMJRSPSTDZQIBEYGCGXYJDHIJZNMDDDFCYRRHAQUSUBWJFRBIEBOGTKMRAZLXOPOJJVA");
    tmp_msg_0.max.assign("OJXNBRRAQIXPVLOTOVRESMYKFTSDCEAJNBQT");
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
    msg.setTimeStamp(0.8967791465012536);
    msg.setSource(8434U);
    msg.setSourceEntity(251U);
    msg.setDestination(24313U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("NLEIUYAMGXNYSQXPLDCERNMXAAFOGSFFYJSGMWGCCAOFXPHLGMPHIFJKKFANDTRVMBVFZBBWANFETWSNORYQLTSNLDDVRITRYUYRZUVOVFGQOEYCUEPTKPMVZMPCQOWBOMKAQUHJQVJWZTDHYZRPDBTKOUOJBDGDZKCXBLNIEGPZYUWBVHLCEQCJXWOJRRAKVXINJQCLRXDDUEAKIXHS");
    msg.predicate.assign("ZPFVAEBKPVMFXPJRUECXKUCJZCQSNAFACCVHLTOXBGCLLYCQQHSUVNQUWESXWVTDRQOTWIYFSONOKUKZTGHKODBSANYRUIGIICXEBYRKBADEMHIEWHOZWZMOQGENSQWJPTHNYMQMSPITALMYJULRFGKJUBIJTBHOXPXKXZGRJSHDRDYGLBHZIOLPE");

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
    msg.setTimeStamp(0.6832387956431376);
    msg.setSource(61526U);
    msg.setSourceEntity(102U);
    msg.setDestination(44781U);
    msg.setDestinationEntity(0U);
    msg.reactor.assign("JAWGSQMEMDSGOBHIZLJUWODBULAMRYJRBAGFXNGXUHDNNPZJGUZRIJIWOPTZFRRJKBL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JGLUZLNHILUYBIAWFIPZNEQPDBHXHMLAQAOLV");
    tmp_msg_0.predicate.assign("AJIXVNRVOLLPBYKYKIRWICYBUKHOQETSAGPAEMA");
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
    msg.setTimeStamp(0.5949707502848907);
    msg.setSource(55970U);
    msg.setSourceEntity(145U);
    msg.setDestination(63624U);
    msg.setDestinationEntity(82U);
    msg.reactor.assign("NESVZFMZQMNKJAEFOWCCLWZBXWFDHMNYEOSRXTOTJZESWKXZWCKBLINIRCXVMUXKRCPIUZEUBHEPTDHWEPUGTJIJFNVTVPQDYOLATSWUQAVRYAGUZLWXHYPYFWCCQTXDFYDGDXUMQONKMTTLHMBVAPNOYJPBFSXZZHKLULXCVRUQNORMIPBSCGVCHJBBHVQSYENZGDAJOD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VJJCHEMGDRYCULWCICEJZEQVRDZJRRYKGLQGGASXAQWSBYDRFGIQQYNWYVEYMBNUOVLNWEIUCPKAXZBZJHVOTRHTVKCHAXPUBPDOLOVWDJJJNDIBVZABBIKEQOQKSLUZJAHMOCBENLPKZXGYXDVDACUF");
    tmp_msg_0.predicate.assign("ZIQUXSZCEBRIFVTEAZDUBYEIOSRJFNFESOYHSHIKFNLXCMKTIXIHFEUORLFDDPTBHLAGLGQWRGSVDEQPYGRPGTYTKEOPBSIQOOHYAMQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AJPKFJYGOIDVIJOVCVUUBRFLYXRYIFDNGLELZGHVJTYCMIMLXQXHJSLOQCBHQMXGKPKWBRZGNJXVSZMRRLJIFKTZSEEEUIZAWOSEPTDDDMCYNAXVPKVWQPYIDBSPSLNATNLCBRHDOVFQMQAYTGFUYJQHUWUZASGNZPYHLXWMHPMYTNHSBU");
    tmp_tmp_msg_0_0.attr_type = 224U;
    tmp_tmp_msg_0_0.min.assign("PFLXGJPTSYUEYOZKOHXAGMJXONAYSAECRWICRBRBIVEUVDGZEDJMKAUARHFNNQBVEVCVXXNHHGISCINGVUFKENTZKMIZVXAOMBXWLVPZTYGDPYRQUYKJMIOOPPLLW");
    tmp_tmp_msg_0_0.max.assign("UUKTMERKCVVTQAOYQIFMLVYUQXOFSBIYBWDRIMHERWPCECSWHVACDEZTPILHKPKUSIWPDQXNQFCWTDNL");
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
    msg.setTimeStamp(0.6404226908746408);
    msg.setSource(62678U);
    msg.setSourceEntity(89U);
    msg.setDestination(26610U);
    msg.setDestinationEntity(211U);
    msg.reactor.assign("JEVHZXFZNJMDSLUOIGADROMFWHKVXSEOHAKCGKDUXJPQEWMXLUUKIMZWJGQYVVDATQQCDIBFSGRENTGYLTYJPGXMTSNUNNUDEVOALYTDYNCTWLFBGRYVSCUKANDSKCPQJZRZGIPWCSLQTAAXXBUHHEWSYZQBHKYBLJYIARXJVYPMBBAXMOORCHPC");

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
    msg.setTimeStamp(0.8929611882024342);
    msg.setSource(2044U);
    msg.setSourceEntity(181U);
    msg.setDestination(32890U);
    msg.setDestinationEntity(128U);
    msg.topic.assign("FSXBEAKBYHWUWTCYDZKXGR");
    msg.data.assign("GRRGNFIEENVEBTZCQ");

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
    msg.setTimeStamp(0.6935998347782005);
    msg.setSource(14920U);
    msg.setSourceEntity(106U);
    msg.setDestination(62900U);
    msg.setDestinationEntity(80U);
    msg.topic.assign("VOFDBPAKZHVYZULYSSQBISSTWLOQZXUHFXQHO");
    msg.data.assign("RNPPURAYXXKMTVJRNB");

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
    msg.setTimeStamp(0.2170267100734924);
    msg.setSource(64017U);
    msg.setSourceEntity(185U);
    msg.setDestination(17031U);
    msg.setDestinationEntity(54U);
    msg.topic.assign("ASIHAIENMCWMBWIIZLVPHFNLAJMURUTEQXQDXGHJVGQOPVVYM");
    msg.data.assign("EVMFJUTQTQRKSCLASQKMMTHRUERFNQNIBEBBFCEPNTDUJXIIHLWOQZLXRWTOZTVVMHNLPSCQSHZGWJAHLIGMTODIKYBRLGZMDFDEZMECZKJAWPP");

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
    msg.setTimeStamp(0.12724009032382966);
    msg.setSource(29591U);
    msg.setSourceEntity(207U);
    msg.setDestination(56923U);
    msg.setDestinationEntity(149U);
    msg.frameid = 142U;
    const char tmp_msg_0[] = {-125, 104, 61, 48, -94, 51, -106, -13, 59, 18, 126, 82, -32, 14, -50, 30, 83, 27, -126, -14, 83, 2, 116, 22, -89, 17, -112, -106, -64, -96, -79, 44, -108, -87, 85, -74, 13, -64, 39, -113, 89, -1, 126, -97, 67, -7, 81, 0, -89, 120, 49, -93, -115, 21, -115, 7, 77, 101, -64, -66, 70, 101, -1, -106, -37, 69, 73, 104, -42, 25, -27, 79, 57, 25, 39, 45, -58, -87, 115, 43, -111, -41, 98, -23, -112, 88, 70, -78, 98, 49, 29, -18, 89, -113, -30, 108, -119, -29, -88, -76, 116, 65, -36, -123, 111, -55, -15, 51, 1, -128, 102, -78, 28, -81, -55, -128, 104, 46, -19, -96, -41, -47, -4, 66, 69, 105, -105, 43, -33, -26, 26, -34, -128, 111, 24, 82, -86, -70};
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
    msg.setTimeStamp(0.9727597655857675);
    msg.setSource(22124U);
    msg.setSourceEntity(15U);
    msg.setDestination(27820U);
    msg.setDestinationEntity(154U);
    msg.frameid = 29U;
    const char tmp_msg_0[] = {63, -123, 11, 100, -20, 19, 7, -67, -113, 53, -8, 7, -106, 97, 93, -86, 69, 1, 41, -54, 45, 3, -90, 69, 41, -102, -25, -78, -36, 53, -4, -52, 120, 92, 92, 119, -49, 115, 34, -8, 14, -29, -113, 111, 71, -29, -110, 94, 3, -83, 51, 33, -37, 73, 78, -122, -108, -112, 75, -22, 12, 29, -36, 89, 121, 68, -42, 54, 3, -103, 16, -55, 4, 92, 19, 34, 47, -66, -88, 9, -53, -12, 12, -16, -39, 1, -31, 55, -80, -82, 104, 39, 59, 57, -76, -9, 30, 6, 81, 113, 98, 66, 52, -6, -64, -124, -16, -80, -60, 108, -76, 14, -108, 100, 13, 119, -28, 9, 50, 55, -128, 83, 6, -19, -93, -3, -18, 117, -26, -87, -51, -23, 22, 44, -88, 30, -96, 10, -3, -122, -57, 100, 91, -22, 14, -4, -117, 52, -21, -40, -122, 23, -72, 89, -72, 29, 81, -66, 58, 114, 100, -89, -119, 49, -56, 59, -104, -118, -33, -30, -54, 78, 73, 124, -64, 54, -101, -12, -90, -109, 1, -122, -3, -5, 86, 46, 42, -81, -54, 106, 40, -3, 52, 121, 59, 68, -108, 116, -78, -17, -44, -117, -80, 10, -13, -75, 114, 124, -42, -96, 45, 89, 110, 99, -32, -17, -121, 61, -71, -36, 109};
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
    msg.setTimeStamp(0.6891429745977898);
    msg.setSource(21806U);
    msg.setSourceEntity(11U);
    msg.setDestination(14403U);
    msg.setDestinationEntity(203U);
    msg.frameid = 169U;
    const char tmp_msg_0[] = {-81, -62, -83, 121, -20, -94, -2, 30, 78, 92, -120, -62, -128, 85, 13, 102, -20, -55, -38, -68, 108, 77, -30, 63, 9, -16, 7, -27, 105, 106, 29, 51, -87, -68, -23, 48, -42, 108, 88, -109, -36, 38, -59, -111, 29, 18, -78, -20, 7, -33, 98, -23, 79, 75, 69, 92, -108, -14, 3, -66, 47, -65, -74, 9, -126, 82, -77, 112, -108, -22, -109, -78, -67, -88, 20, -117, -92, 48, -108, 116, 84, 102, -71, 70, -30, 0, -99, -103, -1, 47, 7, 61, -18, 113, -24, 103, -42, -19, -36, 55, 88, -108, 41, -123, -24, 115, -70, 64, -62, -99, -1, 10, -26, -88, -17, -112, 51, 102, 72, -74, 21, -107, -37, -76, 21, 31, -39, 99, -53, -14, -107, -37, 36, -23, -17, 1, 123, 113, -82, 99, 61, -42, 94, -9, 102, -43, 21, 48, -95, -38, 107, -94, -111, 61, 32, 78, -19};
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
    msg.setTimeStamp(0.7584609047102162);
    msg.setSource(32127U);
    msg.setSourceEntity(175U);
    msg.setDestination(12940U);
    msg.setDestinationEntity(177U);
    msg.fps = 151U;
    msg.quality = 223U;
    msg.reps = 240U;
    msg.tsize = 175U;

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
    msg.setTimeStamp(0.9271208779735625);
    msg.setSource(16119U);
    msg.setSourceEntity(100U);
    msg.setDestination(49902U);
    msg.setDestinationEntity(115U);
    msg.fps = 199U;
    msg.quality = 220U;
    msg.reps = 167U;
    msg.tsize = 136U;

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
    msg.setTimeStamp(0.24658567997228853);
    msg.setSource(30986U);
    msg.setSourceEntity(114U);
    msg.setDestination(46200U);
    msg.setDestinationEntity(103U);
    msg.fps = 250U;
    msg.quality = 196U;
    msg.reps = 74U;
    msg.tsize = 238U;

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
    msg.setTimeStamp(0.8319697618186803);
    msg.setSource(27776U);
    msg.setSourceEntity(99U);
    msg.setDestination(20929U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.549251393419417;
    msg.lon = 0.4855942488738666;
    msg.depth = 167U;
    msg.speed = 0.7371906107134739;
    msg.psi = 0.9455703721799631;

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
    msg.setTimeStamp(0.694372453499446);
    msg.setSource(9782U);
    msg.setSourceEntity(117U);
    msg.setDestination(54228U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.17181672267932002;
    msg.lon = 0.9961017125385021;
    msg.depth = 3U;
    msg.speed = 0.739767932436006;
    msg.psi = 0.4169184863955182;

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
    msg.setTimeStamp(0.8302772976642094);
    msg.setSource(16081U);
    msg.setSourceEntity(68U);
    msg.setDestination(60638U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.5475117006373292;
    msg.lon = 0.017661145870226824;
    msg.depth = 242U;
    msg.speed = 0.9137731767473787;
    msg.psi = 0.1249272791517192;

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
    msg.setTimeStamp(0.8762225799624889);
    msg.setSource(55870U);
    msg.setSourceEntity(61U);
    msg.setDestination(36586U);
    msg.setDestinationEntity(245U);
    msg.label.assign("ZZJKQNKNACMPFADMFFUGLPSUGBZGSTIQTWSUMHYIFUAKIMPAEDCJBPYTNGSVHJG");
    msg.lat = 0.6882786105759678;
    msg.lon = 0.48009645561593484;
    msg.z = 0.48149496400142333;
    msg.z_units = 168U;
    msg.cog = 0.34463206075541686;
    msg.sog = 0.45944652650959583;

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
    msg.setTimeStamp(0.7226958506192414);
    msg.setSource(44859U);
    msg.setSourceEntity(187U);
    msg.setDestination(60225U);
    msg.setDestinationEntity(115U);
    msg.label.assign("KIAGAXSCZIUALBSLPDQBJMCQQYGGXIFZFVTOGNWLSGLJPXITDXURADFRBLCONKVWDVTXATQEWQWZPMVUTYRJPAZAUNCPTQUMKWYPJNDZFBWXUBWKKXYJSHHWA");
    msg.lat = 0.4962325348333333;
    msg.lon = 0.41079943038668054;
    msg.z = 0.08589719737799317;
    msg.z_units = 46U;
    msg.cog = 0.8809565074588929;
    msg.sog = 0.939438766100338;

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
    msg.setTimeStamp(0.433315132880672);
    msg.setSource(62839U);
    msg.setSourceEntity(59U);
    msg.setDestination(60329U);
    msg.setDestinationEntity(83U);
    msg.label.assign("QCDISSMNITJWLULKOTHMOZDZJBXGHNLGGFOBUVEQPKQRZQQDWFWBKDJGDIVUADFAK");
    msg.lat = 0.5357703403327544;
    msg.lon = 0.7153507844296206;
    msg.z = 0.8060788780376067;
    msg.z_units = 174U;
    msg.cog = 0.3122821548156427;
    msg.sog = 0.048834877682973565;

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
    msg.setTimeStamp(0.08178280214085187);
    msg.setSource(7693U);
    msg.setSourceEntity(28U);
    msg.setDestination(47817U);
    msg.setDestinationEntity(4U);
    msg.name.assign("EWCGHNBICGIBOEFHXXSYFZRVQETNNJKEHQAZLWRQBSOWDYFOAVTSDWILJSLPUOXQILWSHIVDLEPKLHHDXYPKLJGAWRJSGVYMWQCNNFMGFEQIRLAUCVXARWBENXQBQFGMLNFTRYATHVMDDZIPGAPTBXBKYQJMJDTTCJYNJBMFIGOLM");
    msg.value.assign("LQAONFSKCJWRXIEMRJNXYXKCOZNNBAVCXUQEZCRKBGJOPOJRTEETDYLBSBUODDFVSWBYJTXQLUDYQZGHEFTGKYOFMMSXPTFGILJZYILWEHDZQRUAANCFMEBNHDWHVKGYHPWIS");

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
    msg.setTimeStamp(0.6029613792581103);
    msg.setSource(16106U);
    msg.setSourceEntity(143U);
    msg.setDestination(26356U);
    msg.setDestinationEntity(108U);
    msg.name.assign("MLNTXFHKZRZSVICMVSDDZUODYABHKEWN");
    msg.value.assign("EDKWLFEDSZPABCMIXXPHXINMSEDJGAJGJAHFICFBSXOVROJKUTNPWOYJYZUTQBYUUBIIVOZHQWBB");

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
    msg.setTimeStamp(0.5597007361423602);
    msg.setSource(15416U);
    msg.setSourceEntity(142U);
    msg.setDestination(29369U);
    msg.setDestinationEntity(80U);
    msg.name.assign("WZYWRJOGHVJUCDOJOMFNJGNCKSBZJNEOZYSXPAHEIXAAQTCXKTWMRBVQINBVFGSHJYLTBOWJVZSATFOTIYRZCTGYUPFWEKDDPUSEUPPEKZOVCZLVCLANXSFXDHWEEPFIDLALPCLIQVBUOKNDFHWMWBNKHSIROC");
    msg.value.assign("LZOBWQTYKUKSBFHTFDKDXCNXEIMDRJCPCYAYBLKLNHEMHKIFPGYDHMZPIYDGWZBZINORXEGKCBFZXWRMPGSETPXKWHXTGPJF");

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
    msg.setTimeStamp(0.21436780198303473);
    msg.setSource(48931U);
    msg.setSourceEntity(115U);
    msg.setDestination(49662U);
    msg.setDestinationEntity(120U);
    msg.name.assign("QJPZEBVCKLIBYTGQXHZLSFIGWMOPSLTUMKMMHTJABCOUYCBSZMLDVFBMDRVVNETGEBHCGHQHIOVWAJZEFKFDCQVWSWFOQFSOPJQHDNAWZAIJXTNM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JJOUGBFCMNQJRKQRIQDKKTYLZDOOJPVMDFJAFRPTUAZMYUPTCYPGUCZQWDSPW");
    tmp_msg_0.value.assign("UCIPXYVSJOTBETIJHTHNOGJTHYYMLRKTFDUEDBPFPVXSSUPAPIZYIRUOFNFATBKCZQWJNLKMEAPHPVQZIOJQDFAFGBADYKOKZDVMZYGSWWVSTGESAQZHYELPXCQBLLHRVSERVOEXDMNSAWQTIYCFULWLWOPJNJVAWRIQRGNZW");
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
    msg.setTimeStamp(0.8735589762391783);
    msg.setSource(5802U);
    msg.setSourceEntity(124U);
    msg.setDestination(43405U);
    msg.setDestinationEntity(9U);
    msg.name.assign("DSRFCCSXPBBJMCZDKWGXYASCRCGYJJVLINUNHQPUMPRNHXDYTPWVTKUONMUFNQVSMOKPSSDEHYT");

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
    msg.setTimeStamp(0.9792012933952379);
    msg.setSource(9424U);
    msg.setSourceEntity(100U);
    msg.setDestination(18531U);
    msg.setDestinationEntity(151U);
    msg.name.assign("OCEIGIBAPMAEFLIHHUQJPPPTHMFBLNDIMZKSSVQRLFGRGNDSHLUJUOWVROWCGAYVCXDGJHKPZCFCJTXQSAVZAYIKNGGXNX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AGRGVIORIIVKKYRDGOVTXHMQPODDYKASSUEYPHLUIFZFBZSVCTLDLHTMMIYMRPKFURJRMYPZDJDFNPQUKGJKLNSJZBOJYECFESLGNAFNNSAJTWIZEVXUUJNTMGMFXCHHQKQKCIBQAMYBEPYZTLXDFCRQNWIVPPREAOENBDWSNXVONQD");
    tmp_msg_0.value.assign("MGJMEFYULBTPPPTLKMFCZVUQIQFHVNZQVYTUGDRSTNU");
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
    msg.setTimeStamp(0.7895132859108326);
    msg.setSource(38412U);
    msg.setSourceEntity(113U);
    msg.setDestination(22758U);
    msg.setDestinationEntity(38U);
    msg.name.assign("QDCDFTBJBTKCYVMDEKOEMAZLGXOGHIXQPQVTBLJGRRJHJHSGFFQLDSCKWENQUHOZVZLGCYIBNVNKMLUMHFZHNPIKGEEFWAJYIEBPBTQWVRSTLIMZAFQWHJIIDLZMSPUFIJHNAUPJXRTOVAUNVDRVSVJMMYASWAUSLLBXFYPTWUYDNPYSAKTOGMNYWDXWFRNYEHISOXMTVAUC");
    msg.visibility.assign("FQBNKPKYJUTMXXMGLFTWYDEEUVPNZDXVRTROEIWIYDGQTZAKFYXARXHEQGNMZYJOAZHQPOQOZBFUQZRNWUWWGBUCOHZMXPYLLLBUVDXQIXNPKSDZVTFZRTLSMHEHSAJMWPPOUVTQIRWHSXYKIOFUB");
    msg.scope.assign("FUTHIPXYXEEXHPZZLAKJQIKLGGOMUPAJKZDNOEKDGMPNGSRUGTMMPEDHSWHJECRDJFZVUCSRTVBYPTPBESYAYOEBSBASFCWWOBYZXXQCKCQNFUVQLRGRRCJOMOLCLTZVYYETLBULUOOQAQGZJHXFCVIYNMRZWNIDIARXOWQFIBIUVLTEXJABDAUMQHPHDBDLIMMDVRJZPGTNHIFAKWAKEYFFSZIT");

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
    msg.setTimeStamp(0.8908986763498021);
    msg.setSource(45360U);
    msg.setSourceEntity(237U);
    msg.setDestination(28216U);
    msg.setDestinationEntity(159U);
    msg.name.assign("KKQJMXDQGJPP");
    msg.visibility.assign("GBOECQNRTPLSLVISIUFRPZGVDJYQDKALFOEMFODNCHHVGFOIWKITJHFXSBLXANFGAENXQVPTYCSDNYAEPVURNQZLVVSSFAZHJJHNLSTKUCDWYSZLIQOJYVURMLVUNNPAKEXIUBMPKWYQWGLDTJJQYAMHDRAKJRMMYQPZQKCBCOMBBRSIOGDXKIYBWTXIUTEWXPUXWCTIHFROWZGPPBAXHMKEUZTZHRWHFG");
    msg.scope.assign("XFSHTHVOLSFPXPASLIZMUXUDTBGSIVVDATKWL");

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
    msg.setTimeStamp(0.42108374050204633);
    msg.setSource(24082U);
    msg.setSourceEntity(74U);
    msg.setDestination(29141U);
    msg.setDestinationEntity(191U);
    msg.name.assign("IGJHEVJZQLMSQEXXBPTGKCRZKTQBJSMSTWRBQKEYYOXSNWZSRCAFMUIINFCRNLXOUXMWTDZJTFBFZFARSYFVAXLGDAZDOJIPBAAVDVBGHOJIJHUBPWR");
    msg.visibility.assign("MIAYXFRNQNCTIXJWNEOWXFSISMQKUMMDMQMKSOKLDSSJAARKWQYDXBGBYUHECWCDOPUTOPCJUKWNPNOUEQVSYNBCUVZTAHSSYAPIMTOJRLCQGKGHZPIBHIXHOUGIHLAMTLNQQWGDWIPOVBSGRERLJ");
    msg.scope.assign("DMYVRUQYFMDHRKOBJGYMOAVRTFCVLHNTVHMGQGKLZOFETBDNPEFSUINJEXEPSHQUUCKQJHAQIROEZDDGKX");

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
    msg.setTimeStamp(0.2232838001826607);
    msg.setSource(31994U);
    msg.setSourceEntity(62U);
    msg.setDestination(25758U);
    msg.setDestinationEntity(81U);
    msg.name.assign("FOJOKEAVZCTCLWGYYDXQX");

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
    msg.setTimeStamp(0.20612227352361012);
    msg.setSource(18149U);
    msg.setSourceEntity(46U);
    msg.setDestination(23302U);
    msg.setDestinationEntity(28U);
    msg.name.assign("QBMPZOYLAVZVJKLAQDXCFHPVSJAUKXNVIIFSHKCJZTEXBZMASSIDLMDBYTIMV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AMJVFUAWTQRPRHBIGPXRRFLWJEARVLJWUMVUMDIUPG");
    tmp_msg_0.value.assign("CRJBEPTCGASGRYPZGBAOAJTTWIQAYQJBEMGMCNUIFOECERNDQFKRFZNXWYCQADVUPVQDFXLUFUYKUGBRLPDOTQMUPMHHIVEOBRYW");
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
    msg.setTimeStamp(0.7192453057013176);
    msg.setSource(9851U);
    msg.setSourceEntity(142U);
    msg.setDestination(23525U);
    msg.setDestinationEntity(6U);
    msg.name.assign("IQCDSQHCNSRMFYOXWKJDUGIZVAXERDZEJNEDVNNJRUPBYJJGBHQLJYUNZRVQQYXZTXPMZOMWRSJWTAKXCTGJCMLEKWPLXMAZBGEIFHOGKQIENCMXKPPJOVPRDBEXOZKFOUHVFGGPUIVNDPYWTTUIQQZMBXBTKADRLOTLABLUFIOLISZZVO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HPGDSAMNZECOYXWIBBWDVNADEAVBJRGFPWPYJLOQUJNKDUXVECGASTRUXSKWSUYPYLNHWTIGIQPDGCLVAVZNEKOQXQARKTCZQYTKLLANYXPHWQLVGJVPFMGWOPEEUELENZRRFZBQXPHSYRXIHYQZDBZMKBJGUELSSKOTCCTKKWMRCMFXTNDZIDSIFHBCOZAOOUYRASVNQM");
    tmp_msg_0.value.assign("EWWNBTUISXCXGYUGMKPLSLYZAWSIFWUUQMEYGFKIABSNZUAEULERQBPPFGQHHBHCQYBGDRKRSJNXUTETAVMMLGXZBJRZUJMOCPFAMPVKVKZLNYVJBMOJFDSNLLAMLHZMWXJTDWAGNRHIEUHCPLOEPERQXVZNDCOR");
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
    msg.setTimeStamp(0.4901907027561506);
    msg.setSource(30744U);
    msg.setSourceEntity(180U);
    msg.setDestination(56841U);
    msg.setDestinationEntity(30U);
    msg.name.assign("BAAKSXJVRTRZFHJDOCWVXMYKMGWAZHLBRNLNEOKEXPWEFWEPLQOEUKXINGVWRQUVUKISGQOJOKXHRXWYKZATVPZGAALAWQFVFRGPMITHKKTMORGNWE");

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
    msg.setTimeStamp(0.17414264643140476);
    msg.setSource(23435U);
    msg.setSourceEntity(175U);
    msg.setDestination(16295U);
    msg.setDestinationEntity(238U);
    msg.name.assign("GNAVUDWVOKEZRHUJDITZQYPYHUYRGBCDHTSLMTGJEADUILBVBUFCOHLMSARHADRQNQCIJPQMHIZXOPVBMZXQAULPMPZRAGPLSZONB");

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
    msg.setTimeStamp(0.5877488576091952);
    msg.setSource(7893U);
    msg.setSourceEntity(244U);
    msg.setDestination(54346U);
    msg.setDestinationEntity(37U);
    msg.name.assign("CSRIHORPGEOFLCWPQKGWXJWFDUIIQUJSSBWSRVYNRZNUESVHSLGUXWXFOEDTOLOJQKFTMCOAHTIBKLYKTQUFDSINZTNUONIBRHELRLVDATXUMHQDAGVYLOOMEKPFUSRHFNIIJJHHXM");

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
    msg.setTimeStamp(0.860472194594488);
    msg.setSource(11858U);
    msg.setSourceEntity(19U);
    msg.setDestination(11213U);
    msg.setDestinationEntity(182U);
    msg.timeout = 1047349705U;

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
    msg.setTimeStamp(0.397034597160393);
    msg.setSource(23142U);
    msg.setSourceEntity(214U);
    msg.setDestination(23687U);
    msg.setDestinationEntity(47U);
    msg.timeout = 3410279058U;

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
    msg.setTimeStamp(0.05457845544612183);
    msg.setSource(4702U);
    msg.setSourceEntity(74U);
    msg.setDestination(29988U);
    msg.setDestinationEntity(159U);
    msg.timeout = 2353413364U;

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
    msg.setTimeStamp(0.13682120925939667);
    msg.setSource(1314U);
    msg.setSourceEntity(67U);
    msg.setDestination(34153U);
    msg.setDestinationEntity(152U);
    msg.sessid = 462019069U;

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
    msg.setTimeStamp(0.9309806661540644);
    msg.setSource(22674U);
    msg.setSourceEntity(249U);
    msg.setDestination(62595U);
    msg.setDestinationEntity(27U);
    msg.sessid = 882689366U;

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
    msg.setTimeStamp(0.026691522413823776);
    msg.setSource(26941U);
    msg.setSourceEntity(209U);
    msg.setDestination(13808U);
    msg.setDestinationEntity(102U);
    msg.sessid = 162103930U;

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
    msg.setTimeStamp(0.31777162013521143);
    msg.setSource(42842U);
    msg.setSourceEntity(218U);
    msg.setDestination(31625U);
    msg.setDestinationEntity(113U);
    msg.sessid = 900301288U;
    msg.messages.assign("YMMWEUANDRWWKLOSZCYGKWKPDSKQHTFUPCDSNKWVCVUXJTLCLPRJOYFDPFOMIIHOYYMPTUGIZDLUFDEAZCFGJEKCGGVNWRNAKAFPVQJMEZHAXKVQEZNG");

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
    msg.setTimeStamp(0.02857370929480929);
    msg.setSource(11762U);
    msg.setSourceEntity(58U);
    msg.setDestination(19903U);
    msg.setDestinationEntity(150U);
    msg.sessid = 2466487217U;
    msg.messages.assign("EPTDJLKKMYCREUELKETQPUFVUSFIGORHKXYBGNKYBWBIDAJGNJBFHLJBKZJPMYJOLYPQDTDYAZXFEWXIJFRTGTAFXCBKZ");

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
    msg.setTimeStamp(0.49571489487118214);
    msg.setSource(35385U);
    msg.setSourceEntity(117U);
    msg.setDestination(52251U);
    msg.setDestinationEntity(139U);
    msg.sessid = 2017603512U;
    msg.messages.assign("HNLAWAWNGYEFWHAGQUQFRCZNUHTQCLAODBKPAVINNRXXJAFRNAIRLQFEXEHXFMPINXPPYPZUXKNMWAGBMYELCZRGLMLKCDBBNVYBMRIEWDXTVLWUMEDHVLZGVCCQKKSZWYNIJSOBZJQGDSMUHQTJVZLYIDUEOTJMRIUBFF");

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
    msg.setTimeStamp(0.7006733931535042);
    msg.setSource(6573U);
    msg.setSourceEntity(51U);
    msg.setDestination(22232U);
    msg.setDestinationEntity(101U);
    msg.sessid = 57076501U;

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
    msg.setTimeStamp(0.014519831109632508);
    msg.setSource(12807U);
    msg.setSourceEntity(82U);
    msg.setDestination(55761U);
    msg.setDestinationEntity(119U);
    msg.sessid = 3239364097U;

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
    msg.setTimeStamp(0.6891538699027218);
    msg.setSource(65065U);
    msg.setSourceEntity(137U);
    msg.setDestination(43693U);
    msg.setDestinationEntity(220U);
    msg.sessid = 3598772791U;

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
    msg.setTimeStamp(0.883971917509541);
    msg.setSource(3853U);
    msg.setSourceEntity(145U);
    msg.setDestination(16904U);
    msg.setDestinationEntity(174U);
    msg.sessid = 4188755857U;
    msg.status = 186U;

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
    msg.setTimeStamp(0.8129992877344637);
    msg.setSource(36260U);
    msg.setSourceEntity(132U);
    msg.setDestination(16824U);
    msg.setDestinationEntity(174U);
    msg.sessid = 577393079U;
    msg.status = 107U;

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
    msg.setTimeStamp(0.433294851126648);
    msg.setSource(2493U);
    msg.setSourceEntity(206U);
    msg.setDestination(37283U);
    msg.setDestinationEntity(171U);
    msg.sessid = 4136851259U;
    msg.status = 60U;

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
    msg.setTimeStamp(0.4533716468317207);
    msg.setSource(48325U);
    msg.setSourceEntity(204U);
    msg.setDestination(27532U);
    msg.setDestinationEntity(98U);
    msg.name.assign("VKOIRYBDMZABEYWGDUGORFQMCJGMILPUFRXQCFNYVHJKRFKXTACPPZTFMBIILTGSCRGKGHNEDKAEHIUOERJJSEWIXGCDWZQVTIAAHVECDBCDSFEMGTWLFJBSUPJQTZLUNAFZOVQNMJRDJY");

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
    msg.setTimeStamp(0.6756662381091606);
    msg.setSource(16799U);
    msg.setSourceEntity(179U);
    msg.setDestination(55195U);
    msg.setDestinationEntity(55U);
    msg.name.assign("XLZHUSKYYFLKDFTSTZMCAHHFKMMCBWUEOPJXPXVZREPJODQECSCJOSSIHYNTZEGZWYOISBYRNKTZFHYAAFVFDXJTSXARWTEDOWJNQMRWBEIZAIAQDBUPRGKXWDBHMRLHULVQRBNIVLNGTJTLTWIO");

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
    msg.setTimeStamp(0.873848268172574);
    msg.setSource(36519U);
    msg.setSourceEntity(2U);
    msg.setDestination(3305U);
    msg.setDestinationEntity(237U);
    msg.name.assign("HTXXQVGJVCQLRGOSKGVWMHASNXLMSESGQPKKNAQZYBZKDYHEWMPA");

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
    msg.setTimeStamp(0.2257801857464189);
    msg.setSource(54301U);
    msg.setSourceEntity(75U);
    msg.setDestination(54015U);
    msg.setDestinationEntity(160U);
    msg.name.assign("OGSLCHATISOMRUZDAEXMPYUFQYOTQUFKNVAVBQKWGAUXERSLGIMYCCEFZOIBZDRFDJIOJVAJHEZIDMKNHINCHTQAGQTCGWNNFKZYMDNALZGPSWWPJPFXRWHBNIVLTKTRVYDMZNXSRDJBWVRDUHYWZCOFCBQJKPN");

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
    msg.setTimeStamp(0.15423960507493606);
    msg.setSource(22923U);
    msg.setSourceEntity(206U);
    msg.setDestination(35558U);
    msg.setDestinationEntity(121U);
    msg.name.assign("TFORJKDXEBABJOKPLYNXHGOWZRCSQGSSVWXKNECKQPXBWVXXQTPXPUQYTMGDLUGHRDHJJSXFCPIMZFKTGZDBYMEOZRZYPKCGASLAAKTMWHZNIFMRIMDAXWOJNLUHTVYPLZLEUMAWNMQQWBGNASAVBCLIQDYRJQOQJNCSYNCINODHTTEUGWJUOBTTZEXGKGFMJNAZWUCEHDVYJKFSVIFBWPLEMFYZHCVBKDLRREIFHUBQLPOSAUIHI");

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
    msg.setTimeStamp(0.4047720771647412);
    msg.setSource(32979U);
    msg.setSourceEntity(120U);
    msg.setDestination(51244U);
    msg.setDestinationEntity(93U);
    msg.name.assign("MMLIBUVEJPTPEJVLFLWFSYNDH");

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
    msg.setTimeStamp(0.32307560328415785);
    msg.setSource(59070U);
    msg.setSourceEntity(178U);
    msg.setDestination(47233U);
    msg.setDestinationEntity(35U);
    msg.type = 30U;
    msg.error.assign("MBEBEZEZVEZZGFTFTHENZHFAGMQLPUUXIWWMOTCHJXVJDNXGBUCQKPGITKYNOYYACJWHSMLNCKRHAAMUJKRYZHGESQJQIDBHSORKRUWHTJACSBCDLVBURQOZCHAKQQOLFCNDMFSTVILMGKFDBSPJYBABXOLNRRIZTXSTLRYIJAMDVXLVFGPKEYDEDPFPXEBNJWOSS");

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
    msg.setTimeStamp(0.3084194428339968);
    msg.setSource(4909U);
    msg.setSourceEntity(46U);
    msg.setDestination(21510U);
    msg.setDestinationEntity(233U);
    msg.type = 179U;
    msg.error.assign("HYFUJHWBEGGHYGNAUWKRJYXXVPYOZERCREMKDPWTUACOHVCBQUHKDBYSLFFRQDECUEGVOYMQNXPOCLTLIXPLVYYIFRQNQWJNJVHDTOXLZTWBMPSZKMAXZBBNPAMDKWKQRRPEANLJREOBCZUMRMB");

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
    msg.setTimeStamp(0.9612169284066324);
    msg.setSource(58774U);
    msg.setSourceEntity(76U);
    msg.setDestination(14772U);
    msg.setDestinationEntity(105U);
    msg.type = 81U;
    msg.error.assign("ECQQIKBASLMXJWLQKZHUGQZDSTVCDCAIKRQEVJUQKVSWHDNHMBKZTMPGTSUGLHBRLXLZGHTPIOPUXNOXWTFMPMNRGRWTXLQEGBCSUAVMIYEVUWFJOZLJ");

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
    msg.setTimeStamp(0.9715028638179237);
    msg.setSource(58077U);
    msg.setSourceEntity(98U);
    msg.setDestination(1405U);
    msg.setDestinationEntity(46U);
    msg.seq = 37967U;
    msg.sys_dst.assign("OWDXRWYNUZOSTEJKWYNXXEGZXEMJSJWCBKHLAEFTGFQEINJCQEQBXKZYAXYJTZKBSICWIGLVVOPFVICLERHAKBHVRDZQTVJBWLDCBPMRDKMMSIXSGYQMSCPHNBJKUTWRMKRSYSYRGJOMXNLETOBQFPZYUAMKBANHPQVOFQBWTIVPTGPRZUUASNC");
    msg.flags = 142U;
    const char tmp_msg_0[] = {-79, 27, 53, 93, -94, 46, -119, -24, -28, 40, 11, 66, 72, -114, -30, 67, -40, 1, -91, -41, -21, 93, -126, 9, -6, -22, 46, -85, -121, -8, -76, -9, 25, 32, -35, -56, 85, -40, 123, 13, -26, -127, 12, 36, 74, -59, 93, -117, -103, 49, -3, -64, -99, 119, -37, -109, -23, 123, 65, -114, -10, -80, 72, -68, -88, -90, 29, 39, -113, 45, 54, -75, -25, 120, 33, 51, 41, -18, -106, 117, -79, 47, -40, -20, -22, -76, -47, 76, 113, 55, -16, -35, -9, -97, 124, -65, 89, -35, -27, -102, -99, -30, -8, -66, -95, -33, 40, -3, -125, 2, -69, 67, -119, 101, 2, -116, -107, 46, -119, 3, -17, 122, -26, -29, 90, 30, 101, -37, 2, -33, 47, -46, 119, -14, -94, -82, 71, -68, 101, 67, 66, 78, 87, -111, 125, 41, -62, 7, 110, 25, 66, -99, -85, -86, -114, 97, -24, -111, 86, -85, 37, 113, -3, 49, 3, 36, 56, 56, -41, 53, -123, -17, -39, -123, -36, -25, 38, -91, -14, -97, -101, 56, 108, -35, -13, -100, -75, -47, -105, -29, 80, -107, 111, 94, 32, 14, 18, 94, -121, -34, -40, 5, 12, -28, -14, -2, -47, -42, -21, -62, -89, 42, 114, 71, 100, 5, 65, 53, 30, 6, -27, -50, 29, -97, 67, 76, 94, -106, -110, 57, 11, 103, -93, -47, -128, 68, 76};
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
    msg.setTimeStamp(0.03981652613694853);
    msg.setSource(49127U);
    msg.setSourceEntity(0U);
    msg.setDestination(389U);
    msg.setDestinationEntity(7U);
    msg.seq = 2962U;
    msg.sys_dst.assign("WZVIDHZXDQVCCAYUXWELEERESAFQDXULOBJPGQBKKVMMVBCAKTSNPNNNYXUYXKGEYPOOPQVIYANHZDOSPFLAVFFEKVPQXVYHCRJYJBSKARCPJQHHGNDGZENBOCIMGTWFIIRASEWTIJXHJDDRMDLTRTWZIGOIGUBZLESFTBAHQVIWAHRSMMLBXZNBQUWOFSGJBFLRDXETKNMKJMRCYNHKFUOOQCGTMGFSOQUCPWUZUAVIXLPPJDJWYKTRLZLUC");
    msg.flags = 250U;
    const char tmp_msg_0[] = {-73, 42, 62, -87, -81, 46, 110, 12, 52, 71, -70, -50, -39, 12, -5, -40, 111, -23};
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
    msg.setTimeStamp(0.3891906716360406);
    msg.setSource(6537U);
    msg.setSourceEntity(29U);
    msg.setDestination(26355U);
    msg.setDestinationEntity(101U);
    msg.seq = 64674U;
    msg.sys_dst.assign("LSJDPWCZRRKYONMOLCHSTPSAYYPLHLBBUUQMDOXDEOGQVFJNEUGIUFETDIQFIOJESKYGWUXAJPPPXQOZGMXILRZZKHCMTDQOYTYIZQPZHCWQTJDNHCJAKWXXNGNJOYPMRGXNKVSAMISKGGCUBKLHEFFVHWLPSJDVCNUFRACQLBZCWIXTZ");
    msg.flags = 54U;
    const char tmp_msg_0[] = {-30, -46, -113, -124, -34, -74, -30, 108, 86, 78, -31, -82, 18, 31, -13, 28, -25, 116, -4, -59, -105, -14, 17, -72, 6, -68, -114, 83, 105, 55, -42, -99, -51, -63, -29, 103, -92, -42, 123, -127, 35, 108, -51, 25, 77, -62, 66, 123, 114, -64, -102, -48, 84, -17, -70, -28, -122, -99, 121, 113, -15, 25, 60, -21, -92, 0, -3, -106, 66, -96, 12, -110, 88, 79, 76, 44, 33, 70, 25, 62, -73, -54, -96, 93, 23, -10, -16, 17, 84, -97, 44, -79, -109, 32, -91, 122, 24, -35, -46, -62, 34, 48, 7, -96, 62};
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
    msg.setTimeStamp(0.31146859234204305);
    msg.setSource(63150U);
    msg.setSourceEntity(77U);
    msg.setDestination(18804U);
    msg.setDestinationEntity(76U);
    msg.sys_src.assign("CPFJBLPSBUYBRKSBDJMFEQFGWRAUBVARGTCVEJIBWXEMDALGJTFONKAHQKENBFNXSVQZPJUHPKZNWIMAGSLDHAEDLXITUWEBHDDXX");
    msg.sys_dst.assign("USYQWGMPBCOMYWUZYMDLWGMSABQXMORIKQEVGPDFPXZ");
    msg.flags = 42U;
    const char tmp_msg_0[] = {-75, -72, -98, 96, -31, -12, -39, 24, 125, 91, -32, 99, -45, 17, 124, 4, -44, 84, -29, -7, -23, 52, -76, 91, -62, -89, 80, 20, 17, 36, 80, 17, 9, -44, -8, 124, -119, -77, -97, 39, -6, -10, 3, 95, -69, 30, 119, -52, -26, -33, 87, 99, 83, -101, 88, -51, -35, 85, -92, -81, 7, -15, 28, 80, 70, 103, 33, -96, -82, -4, -85, 22, 20, 1, 34, -91, 6, -112, 34, -13, -61, -107, 94, -28, 102, -17, -40, 63, -115, -36, 15, 31, 3, 48, 49, 50, -123, -69, 65, 94, -31, -89, -72, 103, 22, -40, 1, 121, -103, -38, -72, -40, -78, 6, 9, -97, 28, -71, 100, -6, 64, 57, -28, -124, -43, 29, -41, -95, -93, -75, -112, -5, -20, -78, 113, 50, -79, -88, -18, -34, 108, 34, -35, -113, 118, -92, 37, 10, -95, -6, -89, 50, 5, -24, -86, 40, -28, 118, 15, -128, 33, 106, 125, 112, -113, 75, 126, -8, -120, 62, -81, 30, -3, -10, 19, -8, -73, 99, -72, -76, 34, -71, 19, 108, 109, 100, 59, -55, 56, -60, -2, -76, 4, -19, -4, 117, 4, -65, -42, -115, -63, 116, 26, -112, 55, -50};
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
    msg.setTimeStamp(0.32109154531922546);
    msg.setSource(15840U);
    msg.setSourceEntity(131U);
    msg.setDestination(31573U);
    msg.setDestinationEntity(22U);
    msg.sys_src.assign("KXRTXYJWOXNETMDVWZKTLZLPYWLMCWVQUJIQIOSEEHMBGGFFUNFVMSBLELXFWKVPBQLRIUHSKJHCVHZYAPPDASXNKYQVIAVPGITCEQOOKGKEQOBRDFBZASCJDXYNEUPWWQPYZFIMGUZJYGBRPEOCOZXEUDOGCJQZCABHDSLUXTRITKIKANHWRFRBZACGLTMNMKXYMPPOUNFOHTGRSSMJJDRAZIJBXQINYUNHVTCAVWEDGCBARULDSSFFMY");
    msg.sys_dst.assign("VSDZROOLIFLQHDKENAGPYNLLTNBNHWXRCMKRXJBOUUYTPDMOO");
    msg.flags = 216U;
    const char tmp_msg_0[] = {-82, 84, -75, -70, 79, 10, -119, 57, -103, -13, 111, -19, 81};
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
    msg.setTimeStamp(0.7443832515612737);
    msg.setSource(56829U);
    msg.setSourceEntity(133U);
    msg.setDestination(26014U);
    msg.setDestinationEntity(141U);
    msg.sys_src.assign("ANJQOPDEXKVZLQYELGATEJALWVR");
    msg.sys_dst.assign("QMXGTYHHENBIUYHZWLATOLJUVEYRNBXQAZCCNOCPSDFKOJVSULIPMQMJKBRGRWZXUNBGBJMMOGYMHKVIWTQFYITSVFAPVXUMKKIJGMOLIWYEJBDNUBKSWPFTACVQANTWKUWQVIEXHDDRHZTLSPP");
    msg.flags = 30U;
    const char tmp_msg_0[] = {-63, 69, 30, -62, -16, -107, -99, 35, 95, -34, -11, -50, 1, 65, 17, 1, 121, -97, -25, -56, -42, 16, 55, -22, -62, -81, 12, 79, -42, 19, 71, -110, -101, -49, 94, 101, -84, -5, 17, -123, -110, -14, -96, 83, 96, 116, -71, 101, -98, -53, -55, 48, 14, 109, -54, 82, 44, 22, 94, 26, 121, 43, 33, 11, 82, 97, -91, -2, -6, 16, -48, 36, -30, 85, 120, -75, -84, 76, -31, 48, -102, -119, -90, -46, 32, 83, -122, -69, 24, -68, -90, 81, 25, -104, -113, -110, 110, 11, 51, -26, 52, -114, 101, 101, -30, 11, 63, 99, -22, -49, 125, -10, 46, 99, 14, 33, 111, 91, 122, -67, 89, 93, 99};
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
    msg.setTimeStamp(0.43048993734972685);
    msg.setSource(59282U);
    msg.setSourceEntity(182U);
    msg.setDestination(7206U);
    msg.setDestinationEntity(4U);
    msg.seq = 55933U;
    msg.value = 31U;
    msg.error.assign("STSMEFNNSTAZPIIFYQXFYFKGPZNUXTACVQDPMOXPWSCCVCCDJLWDGDGZKGEUGMGAZSRQUBRENVKAXLNR");

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
    msg.setTimeStamp(0.5018736969919734);
    msg.setSource(1722U);
    msg.setSourceEntity(41U);
    msg.setDestination(12321U);
    msg.setDestinationEntity(94U);
    msg.seq = 38061U;
    msg.value = 185U;
    msg.error.assign("DVZROAXXMSWNCSTHKFTULEERIVWEBBUTYUIIQMTPPHLDFJXADEOYEBQVSKQQGWQNZRLGNMQHCZIWTTPROZSJUVAYOILAKSILBCURDCBUMKMSDGIJYFFVHWRFQWJPWPEOCNZSLKYZDXVECQUZBB");

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
    msg.setTimeStamp(0.34261084002368025);
    msg.setSource(49239U);
    msg.setSourceEntity(113U);
    msg.setDestination(29442U);
    msg.setDestinationEntity(154U);
    msg.seq = 3807U;
    msg.value = 167U;
    msg.error.assign("CCCNKTPDLPIYAAIXOMOKJUUPMSIFIMOMQFWHQTWBLPYSYQBFUVFJRTZRVCFSEHOBMQTICWYNOBZNELTRBFRJRLPNHTXDUPVKTINTYKXVBGEWSAEFMLJGMIHUEMXZGCACZVUJTGAUOEQHKDRK");

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
    msg.setTimeStamp(0.9305334470207486);
    msg.setSource(21180U);
    msg.setSourceEntity(107U);
    msg.setDestination(49129U);
    msg.setDestinationEntity(9U);
    msg.seq = 48878U;
    msg.sys.assign("WQFRHBRSXHHWUCSGZGNAVVENIBCMLEUUEUSWMPOLXNUISRYCTBHFRHYWJEDBGPTLAPHHLKFZGQTDDFQYLVJAISIKCQAUEF");
    msg.value = 0.02145831123763764;

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
    msg.setTimeStamp(0.40108442338690653);
    msg.setSource(10887U);
    msg.setSourceEntity(144U);
    msg.setDestination(60557U);
    msg.setDestinationEntity(226U);
    msg.seq = 13548U;
    msg.sys.assign("CNTNNYCANBJBSKWRYKPGBSULAPTEPZVOHHCFIZADXWIQHVBVIYYEFBROAFXRIIXTIOQTDGEJBKHHSKSSZAPGLDJTXQMKMKZOWVROJIUNEUCQNTZOZMXQFIDYXGPSCRJJQVJFPZOHBZAKETRFYKWEWOLFLJTXLCKW");
    msg.value = 0.6945549171781819;

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
    msg.setTimeStamp(0.2687498564387042);
    msg.setSource(36435U);
    msg.setSourceEntity(89U);
    msg.setDestination(4372U);
    msg.setDestinationEntity(124U);
    msg.seq = 1031U;
    msg.sys.assign("QSUJLNECLXPQCCFJGHAUIPGZBKDCWFNZCXHNXULEDINIRFWJSAUWSXDQRPAOTYKJEKWOPVEFYYWTWFMNXXKRJMZPHZLKUTISXECDLBUVEPQJDWGMGTGABSEDKSPOFAHVZDCHVPGBYQHITNHBMHDBTSVRXKOQQAYITOVLNFEOMZRKVEAGEGVLKFYOWIMSTFRIMHWOGAVCNFXZSYAMMRIJNBXULUZJPUDPYZLUTS");
    msg.value = 0.055893868164368365;

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
    msg.setTimeStamp(0.7733142197746826);
    msg.setSource(27241U);
    msg.setSourceEntity(162U);
    msg.setDestination(1152U);
    msg.setDestinationEntity(203U);
    msg.action = 35U;
    msg.longain = 0.461914745906689;
    msg.latgain = 0.37948148197362597;
    msg.bondthick = 3502851680U;
    msg.leadgain = 0.46232344958199656;
    msg.deconflgain = 0.2076524574655063;

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
    msg.setTimeStamp(0.5182336270438559);
    msg.setSource(32855U);
    msg.setSourceEntity(77U);
    msg.setDestination(29543U);
    msg.setDestinationEntity(120U);
    msg.action = 89U;
    msg.longain = 0.564789821069803;
    msg.latgain = 0.08207734083186735;
    msg.bondthick = 801836934U;
    msg.leadgain = 0.7729679114781176;
    msg.deconflgain = 0.9023624475318863;

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
    msg.setTimeStamp(0.5688925574743433);
    msg.setSource(31784U);
    msg.setSourceEntity(173U);
    msg.setDestination(4352U);
    msg.setDestinationEntity(10U);
    msg.action = 195U;
    msg.longain = 0.8850217841207821;
    msg.latgain = 0.6869965344067538;
    msg.bondthick = 2560665198U;
    msg.leadgain = 0.253622771787666;
    msg.deconflgain = 0.27268394452649214;

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
    msg.setTimeStamp(0.08298792972592028);
    msg.setSource(3748U);
    msg.setSourceEntity(22U);
    msg.setDestination(31246U);
    msg.setDestinationEntity(49U);
    msg.err_mean = 0.002985111213221203;
    msg.dist_min_abs = 0.36790200717898813;
    msg.dist_min_mean = 0.632574417608774;

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
    msg.setTimeStamp(0.23121299532473893);
    msg.setSource(4818U);
    msg.setSourceEntity(95U);
    msg.setDestination(59890U);
    msg.setDestinationEntity(125U);
    msg.err_mean = 0.7072824038106733;
    msg.dist_min_abs = 0.09067972687546244;
    msg.dist_min_mean = 0.15433099263536287;

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
    msg.setTimeStamp(0.706488249671151);
    msg.setSource(9331U);
    msg.setSourceEntity(231U);
    msg.setDestination(35263U);
    msg.setDestinationEntity(213U);
    msg.err_mean = 0.1127884736460969;
    msg.dist_min_abs = 0.25607704756219307;
    msg.dist_min_mean = 0.8567760918406206;

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
    msg.setTimeStamp(0.5464669100733779);
    msg.setSource(62417U);
    msg.setSourceEntity(143U);
    msg.setDestination(7454U);
    msg.setDestinationEntity(137U);
    msg.action = 167U;
    msg.lon_gain = 0.22170464783597432;
    msg.lat_gain = 0.6675831452225971;
    msg.bond_thick = 0.2555238244879807;
    msg.lead_gain = 0.1632514258933866;
    msg.deconfl_gain = 0.5939853730591617;
    msg.accel_switch_gain = 0.302319668037035;
    msg.safe_dist = 0.5939678159150298;
    msg.deconflict_offset = 0.07891365649193383;
    msg.accel_safe_margin = 0.38846368858099756;
    msg.accel_lim_x = 0.923292047607898;

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
    msg.setTimeStamp(0.3446492073090043);
    msg.setSource(61001U);
    msg.setSourceEntity(96U);
    msg.setDestination(6645U);
    msg.setDestinationEntity(176U);
    msg.action = 141U;
    msg.lon_gain = 0.26832043282943063;
    msg.lat_gain = 0.8928009434947415;
    msg.bond_thick = 0.6281163136144919;
    msg.lead_gain = 0.8438264389189074;
    msg.deconfl_gain = 0.6364813267807644;
    msg.accel_switch_gain = 0.6249184557366435;
    msg.safe_dist = 0.6326828062022029;
    msg.deconflict_offset = 0.322787560856057;
    msg.accel_safe_margin = 0.9969222594853651;
    msg.accel_lim_x = 0.35587114889053484;

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
    msg.setTimeStamp(0.6695743796854289);
    msg.setSource(22496U);
    msg.setSourceEntity(144U);
    msg.setDestination(50755U);
    msg.setDestinationEntity(125U);
    msg.action = 168U;
    msg.lon_gain = 0.5786424411762863;
    msg.lat_gain = 0.2319041554635335;
    msg.bond_thick = 0.185503877275642;
    msg.lead_gain = 0.40061265080748976;
    msg.deconfl_gain = 0.23928480557823117;
    msg.accel_switch_gain = 0.03267658411284169;
    msg.safe_dist = 0.2386360055300193;
    msg.deconflict_offset = 0.5038764593513945;
    msg.accel_safe_margin = 0.15409077206747956;
    msg.accel_lim_x = 0.6082534793190342;

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
    msg.setTimeStamp(0.8098056119294021);
    msg.setSource(51888U);
    msg.setSourceEntity(237U);
    msg.setDestination(7543U);
    msg.setDestinationEntity(166U);
    msg.type = 90U;
    msg.op = 44U;
    msg.err_mean = 0.9623258335521464;
    msg.dist_min_abs = 0.7583989644775272;
    msg.dist_min_mean = 0.6906132044456399;
    msg.roll_rate_mean = 0.6690122433618031;
    msg.time = 0.9361869594478608;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 218U;
    tmp_msg_0.lon_gain = 0.9283343371586542;
    tmp_msg_0.lat_gain = 0.5035123892226373;
    tmp_msg_0.bond_thick = 0.306377689060937;
    tmp_msg_0.lead_gain = 0.649208828506226;
    tmp_msg_0.deconfl_gain = 0.11679188096673276;
    tmp_msg_0.accel_switch_gain = 0.04869026559444267;
    tmp_msg_0.safe_dist = 0.04467016922780531;
    tmp_msg_0.deconflict_offset = 0.2668550035675249;
    tmp_msg_0.accel_safe_margin = 0.06390053318603528;
    tmp_msg_0.accel_lim_x = 0.4922034590344817;
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
    msg.setTimeStamp(0.580964693443466);
    msg.setSource(57478U);
    msg.setSourceEntity(38U);
    msg.setDestination(28688U);
    msg.setDestinationEntity(168U);
    msg.type = 12U;
    msg.op = 191U;
    msg.err_mean = 0.12874012145224278;
    msg.dist_min_abs = 0.4023537436138279;
    msg.dist_min_mean = 0.8806867808684827;
    msg.roll_rate_mean = 0.4554759059882595;
    msg.time = 0.38649278093181516;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 107U;
    tmp_msg_0.lon_gain = 0.5102595268904659;
    tmp_msg_0.lat_gain = 0.7371028472185092;
    tmp_msg_0.bond_thick = 0.9265828388030926;
    tmp_msg_0.lead_gain = 0.9337625580527041;
    tmp_msg_0.deconfl_gain = 0.05252393521109977;
    tmp_msg_0.accel_switch_gain = 0.6453490886381572;
    tmp_msg_0.safe_dist = 0.19955906739733908;
    tmp_msg_0.deconflict_offset = 0.05966620461597849;
    tmp_msg_0.accel_safe_margin = 0.23396683232159954;
    tmp_msg_0.accel_lim_x = 0.467210233504339;
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
    msg.setTimeStamp(0.14928869442985926);
    msg.setSource(54294U);
    msg.setSourceEntity(155U);
    msg.setDestination(63671U);
    msg.setDestinationEntity(112U);
    msg.type = 199U;
    msg.op = 84U;
    msg.err_mean = 0.8772084629791864;
    msg.dist_min_abs = 0.20907119970103694;
    msg.dist_min_mean = 0.8027124673097041;
    msg.roll_rate_mean = 0.7197059579712102;
    msg.time = 0.09677088139108259;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 49U;
    tmp_msg_0.lon_gain = 0.8663794358563189;
    tmp_msg_0.lat_gain = 0.18836730675941427;
    tmp_msg_0.bond_thick = 0.6791507235626106;
    tmp_msg_0.lead_gain = 0.925592824250727;
    tmp_msg_0.deconfl_gain = 0.4969192602128798;
    tmp_msg_0.accel_switch_gain = 0.1371963272313178;
    tmp_msg_0.safe_dist = 0.19668798513205632;
    tmp_msg_0.deconflict_offset = 0.7928889231617866;
    tmp_msg_0.accel_safe_margin = 0.5637493817690674;
    tmp_msg_0.accel_lim_x = 0.40133246094011876;
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
    msg.setTimeStamp(0.1406438229276047);
    msg.setSource(17022U);
    msg.setSourceEntity(246U);
    msg.setDestination(58231U);
    msg.setDestinationEntity(13U);
    msg.uid = 229U;
    msg.frag_number = 144U;
    msg.num_frags = 87U;
    const char tmp_msg_0[] = {-28, -17, 31, 51, 110, -17, 71, 92, 40, 14, -98, 0, 48, 31, -110, 112, -82, 7, 115, -11, -16, 94, 107, -16, 23, 100, -93, 4, -87, 122, -127, 41, -2, 110, -100, -85, -87, -124, -102, -109, -20, -28, 38, -118, 49, 90, -4, -72, -18, 103, 77, -83, 100, 63, 7, -92, -103, -121, -22, -5, -16, -128, -105, 74, 121, -33, 89, 17, -85, 39, 20, -107, 81, 90, -90, 103, 92, 47, -16, 96, 40, -95, 90, -126, 81, -121, -125, 11, 126, -39, -81, 67, 111, 12, 76, 52, 117, -30, -50, -20, 18, 110, 78, 47, -77, -55, 109, -110, 109, 98, -98, 84, 29, 3, 59, -36, -95, 1, -48, -105, -122, -60, -48, -10, 123, -58, 23, -42, 95, -49, -121, -38, -26, 18, -105, -95, 83, -23, 57, -88, 80, 13, -110, 73, -18, -16, 98, -19, 31, 9, 80, -123, -13};
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
    msg.setTimeStamp(0.18192472068246202);
    msg.setSource(60976U);
    msg.setSourceEntity(191U);
    msg.setDestination(58957U);
    msg.setDestinationEntity(17U);
    msg.uid = 215U;
    msg.frag_number = 167U;
    msg.num_frags = 197U;
    const char tmp_msg_0[] = {-42, -6, -128, -52, 109, 19, -31, -2, 81, -104, -88, 101, 17, 13, 101, 70, -65, -17, -33, -15, 118, 41, -104, 38, 24, 90, 13, 32, 105, -43, -46, -31, 0, 70, -83, 39, 103, 32, 86, 67, -43, 86, 49, 109, -57, -73, -128, -94, 15, 102, 0, 115, 74, -119, 60, -22, -49, 18, -13, -26, -38, -6, 28, -49, -7, 23, -35, 97, -50, -117, 60, 89, 73, 48, 71, -63, 12, -74, -111, 69, -38, 62, 81, -19, 80, 1, -68, 75, -31, 102, -44, 83, 104, 58, -50, 109, 114, 79, -122, -60, -108, 59, 62, -111, 78, 116, -23, -109, 65, 59, -35, -12, 74, 26, 24, 105, -25, -52, -120, -78, -74, -28, 122, 64, -41, 94, 3, 51, -59, 33, -26, 95, -91, 74, 33, -46, -123, 73, -45, 43, -58, -26, 38, 96, -41, -88, -106, 30, 112, 15, 27, -114, -72, -112, -91, -122, -71, -11, 63, 110, 82, -5, -19, -20, -14, 28, -55, -53, 93, 58, 92, -124, -51, 91, -60, -90, 65, -126, -15, 0, 35, -48, 61, -87, -18, 21, -103, 78, 75, 97, 55, 94, -65, 5, 35, -64, -39, -50, 8, -118, 0, 95};
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
    msg.setTimeStamp(0.4610840891649761);
    msg.setSource(26385U);
    msg.setSourceEntity(9U);
    msg.setDestination(116U);
    msg.setDestinationEntity(5U);
    msg.uid = 168U;
    msg.frag_number = 83U;
    msg.num_frags = 251U;
    const char tmp_msg_0[] = {-39, 43, 94, -117, -10, -121, -104, 62, 56, -22, -58, 117, 81, 61, -3, -90, -47, -35, 94, 21, -49, -11, -112, -67, -16, -76, -48, -28, 6, -45, -7, -110, 11, 27, -16, -72, 37, 50, 59, -13, -74, -121, -126, 104, 35, 83, 36, -83, 70, -100, 86, 28, -91, 100, -73, 94, -48, 35, -109, 107, 104, -22, 113, 125, 118, -55, -56, 108, 50, 90, 27, 59, -24, 33, 117, 74, -16, 103, 101, -51, -37, 16, 40, 88, -29, -124, -15, -71, 100, -2, 73, -62, -106, -39, -45, -33, 8, -124, -77, 102, -69, -43, 50, -16, -65, -34, 47, -66, -10, -50, 89, 16, -14, 38, 43, 111, -110, 34, 103, -27, 80, -23, -95, -126, 19, -120, -104, -63, 17, -125, -71, 54, 67};
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
    msg.setTimeStamp(0.7746318767826594);
    msg.setSource(60650U);
    msg.setSourceEntity(198U);
    msg.setDestination(53598U);
    msg.setDestinationEntity(121U);
    msg.content_type.assign("YTNMKVKENMFPEFLJICLTUNVHMTAIBGPBKNEDCZKDQUFFCADFDKCJSFASSLYGJOZNVXQSQVOQMDDDXJVDOAOZRFEIVLYZSBKYMVWUIACFWHMNMGYOXYTHEJTWTRLWTBPOPCUAIZUSHJHFLBUXJXDMRYQBSNIRHOGMCYNGUACOPKKSWXXPIGGRGLNAWVJLEHCDFZOTEWQUQHRXPPIQQWSAZLQBXPVHJWJOBP");
    const char tmp_msg_0[] = {-57, -106, 103, -60, 22, -80, -3, 29, -1, -30, -35, 120, 42, -94, 61, -92, 122, -91, 72, 21, -72, 25, -60, -62, 59, -72, -58, 31, -55, 125, 88, 27, 72, -18, -95, 77, -107, -113, -72, -67, 33, 75, -128, 72, -70, -75, -98, 11, -109, 37, 31, 71, -26, 94, 7, 103, 12, 123, -77, -69, 57, -84, -127, 65, 31, -59, 93, 126, -120, -35, 40, 73, -13, 114, 40, 37, -61, -35, 22, 6, 106, -118, -71, -68, 57, -43, -31, -58, 42, -11, -101, -77, -80, 120, -88, -80, 7, -28, 11, -27, 43, 38, -23, 83, -74, 80, -70, 26, -87, -29, -4, 69, -78, 66, -101, -74, -49, -83, 70, 11, 8, 100, 58, 118, 55, -121};
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
    msg.setTimeStamp(0.46422021097873434);
    msg.setSource(60382U);
    msg.setSourceEntity(110U);
    msg.setDestination(32455U);
    msg.setDestinationEntity(229U);
    msg.content_type.assign("HSDRYVXZESIEWRKZIPUXMAJZJUQEPATGRPHOGNXKYQOQWXJYFDVJBVVCQNTYELNMLUPRBUNZHVIXTIBFXSYVHZWCUNQSOYUWHRJLNDICEOMSHTQNJNYKTVVORFXIMSQUBKFHFDRDPRZLRPCAEFHWCGLYZMLMKBZWVGWNTYGBTWAJDHEADZNXUSGGUZKESFMBTIQWPKJVAJBMOIKMELKAROCTOCDXCLEQCIFDTLLPW");
    const char tmp_msg_0[] = {-119, -85, 126, 94, 49, -91, 101, -119, -51, 112, -47, 34, -104, 36, 62, 3, 123, -31, -62, 36, -45, 6, -30, 14, 88, 66, 41, 67, 35, 4, 45, 94, -90, 82, -86, 31, 84, 27, 27, 65, -80, 73, -30, 87, 39, -113, 84, 108, -44, 18, -21, 63, 94, -17, 75, 36, 59, -43, -36, 51, 105, -89, 76, 48, -91, -120, -66, -3, -52, -68, 108, -25, -17, 54, -56, -28, -19, 59, -6, -126, -15, -16, -14, 31, -66, -119, -31, -55, 95, 113, -63, -124, -19, 35, -24, 119, -59, -90, 86, 14, -30, -35, 12, -28, 27, -108, 49, -82, 54, 53, -34, -32, -73, 52, 115, -47, 2, 8, -105, 34, 11, 27, 126, -8, 16, -3, -47, -110, -49, -107};
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
    msg.setTimeStamp(0.2207923505548357);
    msg.setSource(44576U);
    msg.setSourceEntity(117U);
    msg.setDestination(266U);
    msg.setDestinationEntity(75U);
    msg.content_type.assign("BBFFXFTENLJODPWBKEXQFBWUKGIYCCHHUOCPRLBXZPSNPJEASXGIHQVLEHTLAUDWARYOTQTGUSARR");
    const char tmp_msg_0[] = {119, 65, 100, -6, 99, -26, -118, -81, 8, -102, -16, 124, 8, -98, 39, -68, -71, -107, 64, -122, 71, 27, 111, 123, 48, 56, 73, -90, -90, -108, 29, -112, 96, 7, -42, -1, -122, 77, -29, -20, -17, -88, 43, -14, 3, 109, 48, 72, 23, -52, -59, 90, 81, 28, 55, 119, 28, -55, -7, -62, 73, 45, -77, -123, 42, 118, 103, -117, 71, -5, 78, 34, -62, -104, 102, 105, -1, 49, -91, 86, -125, -80, 100, 23, 106, -115, 18, 54, 24, -77, 119, -80, 121, 0, -33, 36, 11, 51, 101, 24, 41, -60, 31, 114, 114, -128, 97, -3, -59, 58, 111, -72, -70, -25, 105, -81, 56, -112, 48, 59, 10, 58, 49, -8, -18, 58, 106, -19, -85, 45, 4, -38, -106, 109, 68, -127, 74, -25, -25, 68, 27, 121, -13, 49, 16, 100, 26, -49, -22, -108, 89, -41, -93, -42, 101, 13, -66, 77, -85, -113, -60, -20, -119, 118, -24, 37, -113, 76, 62, -70, 73, -101, 96, -125, 117, -90, 99, -37, -106, -7, -47, -62, 92, 74, -88, -79, -106, -18, 2, -28, 56, 13, -92, -29, 90, -8, 123, -83, -6, -55, 61, -10, -23, -31, -91};
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
    msg.setTimeStamp(0.018649193184598567);
    msg.setSource(21038U);
    msg.setSourceEntity(7U);
    msg.setDestination(30787U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.5504290022678308);
    msg.setSource(7343U);
    msg.setSourceEntity(152U);
    msg.setDestination(42765U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.9708882043798037);
    msg.setSource(39036U);
    msg.setSourceEntity(167U);
    msg.setDestination(57762U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.5752199834814534);
    msg.setSource(52755U);
    msg.setSourceEntity(126U);
    msg.setDestination(60162U);
    msg.setDestinationEntity(168U);
    msg.target = 15810U;
    msg.bearing = 0.51421850505599;
    msg.elevation = 0.745648111019954;

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
    msg.setTimeStamp(0.672243660068713);
    msg.setSource(19237U);
    msg.setSourceEntity(37U);
    msg.setDestination(62112U);
    msg.setDestinationEntity(21U);
    msg.target = 5248U;
    msg.bearing = 0.5863385114471846;
    msg.elevation = 0.964227860622567;

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
    msg.setTimeStamp(0.7213035893967034);
    msg.setSource(17859U);
    msg.setSourceEntity(93U);
    msg.setDestination(37462U);
    msg.setDestinationEntity(7U);
    msg.target = 28887U;
    msg.bearing = 0.554339801598425;
    msg.elevation = 0.3614332150970987;

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
    msg.setTimeStamp(0.14513207170515452);
    msg.setSource(33352U);
    msg.setSourceEntity(242U);
    msg.setDestination(48008U);
    msg.setDestinationEntity(234U);
    msg.target = 14823U;
    msg.x = 0.41951816947714726;
    msg.y = 0.46957335784690346;
    msg.z = 0.1971036590260723;

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
    msg.setTimeStamp(0.43845562094773627);
    msg.setSource(30346U);
    msg.setSourceEntity(202U);
    msg.setDestination(18151U);
    msg.setDestinationEntity(246U);
    msg.target = 16759U;
    msg.x = 0.3686675617804924;
    msg.y = 0.6930233114798947;
    msg.z = 0.37222447968548766;

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
    msg.setTimeStamp(0.6966251074037415);
    msg.setSource(47399U);
    msg.setSourceEntity(179U);
    msg.setDestination(43395U);
    msg.setDestinationEntity(117U);
    msg.target = 35513U;
    msg.x = 0.9629755648925573;
    msg.y = 0.5063703937250451;
    msg.z = 0.15755706507757805;

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
    msg.setTimeStamp(0.07254911572413292);
    msg.setSource(59109U);
    msg.setSourceEntity(20U);
    msg.setDestination(24999U);
    msg.setDestinationEntity(173U);
    msg.target = 20527U;
    msg.lat = 0.5808443537172961;
    msg.lon = 0.38233173696996947;
    msg.z_units = 20U;
    msg.z = 0.6194413787337544;

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
    msg.setTimeStamp(0.15535191243466295);
    msg.setSource(15705U);
    msg.setSourceEntity(114U);
    msg.setDestination(5303U);
    msg.setDestinationEntity(76U);
    msg.target = 59275U;
    msg.lat = 0.13779628841473823;
    msg.lon = 0.07193833911220893;
    msg.z_units = 154U;
    msg.z = 0.17271169971490286;

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
    msg.setTimeStamp(0.08357389517499225);
    msg.setSource(55473U);
    msg.setSourceEntity(109U);
    msg.setDestination(45791U);
    msg.setDestinationEntity(116U);
    msg.target = 22143U;
    msg.lat = 0.5311615892765227;
    msg.lon = 0.3261242217896092;
    msg.z_units = 151U;
    msg.z = 0.8542856620937328;

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
    msg.setTimeStamp(0.39226674268945083);
    msg.setSource(62460U);
    msg.setSourceEntity(181U);
    msg.setDestination(27232U);
    msg.setDestinationEntity(22U);
    msg.locale.assign("WRYCWVJOKDAKQZXDAHNPYXYAQITSTUXQJSKOFBPWLFNFJWMBTRKTWOHGLGGDUIUGSEOKJHVOTHUXRSEDJZBLZGKQFVKPKBNRUOCFZMNUZQENAZHBGESBCVOLDPUCMQWTNMCNOAXAYRFTSBMLSYBXLHPEIMHDXUPVMLPMCTRRESXGTGQDFZAYCZTYJPICSHQWUAIPSDJYVEOVFBERBKNHEDIIVINWIXHO");
    const char tmp_msg_0[] = {111, 123, 117, -59, 121, 27, -54, -12, -110, -86, -116, 67, -104, -120, -95, -117, 116, -103, -21, 89, 80, 42, 108, 48, 100, 84, 82, 95, 64, 52, -66, -3, 118, -86, -79, 15, -81, -17, 8, -31, -72, 20, -86, 59, 33, 35, 111, 53, 9, 103, 87, 79, -76, -63, 42, 33, 107, 34, 119, 48, 5, 3, -36, 106, 91, -14, -17, 64, 116, -16, 91, -93, 28, -88, 116, 8, -23, 120, -89, -5, -31, 29, 118, -55, 123, -16, 90, 20, -4, 81, -18, 18, -57, 97, -30, 115, 106, -87, -118, 42, -82, 5, -27, 99, 37, 107, -101, -3, 24, -85, -84, 106, -58, 4, 106, 105, 9, 84, -23, 84, 36, -24, 86, -29, -20, -83, 122, 23, 75, -89, -40, -67, 43, 83, -58, 95, 60, 120, 58, -85, 113, 2, -12, -52, 54, 5, -57, 16, -72, 59, 62, 118, 60, 37, -19, -55, -113, -93, 17, 52, -25, -91, -52, 4, -63, -34, 119, -7, 1, -4, 11, -10, -18, 55, 12, 98, 84, 68, -116, 38, 75, 33, 1, -12, 27, 125, 42, 27, -20, -99, -107, -88, -7, 87, -54, -110, -52, 28, -82, 59, 74, -105, 56, -117, 33, -52};
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
    msg.setTimeStamp(0.21121732333737342);
    msg.setSource(32937U);
    msg.setSourceEntity(57U);
    msg.setDestination(62142U);
    msg.setDestinationEntity(119U);
    msg.locale.assign("LKKJMWFWLCFAZGRCPGKVKYSRNJWLNXGULCCEFVTPZESKNXOGDVCTUTKWRMYAYAVQJGAYUJ");
    const char tmp_msg_0[] = {29, -84, 16, 61, 53, 109, 124, -70, -120, -25, -63, 90, -78, -125, -19, -68, 55, -84, 106, 97, 46, 5, 81, -74, -12, -109, 91, 17, -113, -104, 70, -68, -97, 43, -106, -125, 27, 31, 92, 118, 113, -102, 45, 53, -93, -81, 120, 27, -121, -55, -112, 20, -125, 24, -49, -81, -37, 82, -61, 98, 82, -37};
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
    msg.setTimeStamp(0.849248385791469);
    msg.setSource(63645U);
    msg.setSourceEntity(34U);
    msg.setDestination(60859U);
    msg.setDestinationEntity(31U);
    msg.locale.assign("JWRZUMXERABKVOQAUJIDVRJDBHBXXKSOPEKYMTIYBWUWLFVPOHUMVNYGXKJUYMCCCPUKWATEHWTVQFCWGDXQJJYBPSOLFKRLOERECMZUIJFPEODDOIGTHYAL");
    const char tmp_msg_0[] = {9, -124, -58, 35, 69, -52, -10, -113, -1, 36, -70, -62, 17, -12, 80, 16, 63, 103, -72, 11, -32, 84, 29, -45, -96, -58, -90, -23, -85, -115, -128, 105, -32, 76, -99, 80, -30, 106, -26, -8, 69, -36, -89, -40, -72, 98, -67, -31, 47, 43, 34, 6, -79, -59, -111, 74, 35, 90, 51, 21, 107, -30, 59, 92, 1, -99, -67, -39, 103, -4, 91, 5, 55, 11, -6, 92, 46, 18, -12, 22, -31, -101, -122, -50, 24, 51, -51, 122, -45, -42, 26, -117, 97, -15, 71, 65, 60, -82, 23, 6, 25, 88, -94, -67, -56, 112, 82, 78, 95, 15, 99, 106, 89, -33, -103, 50, 51, 79, 4, -21, -77, 2, -39, -75, -42, 74, 41, 6, 67, -7, 69, -116, -36, -17, 38, 55, 20, 99, 64, 83, 86, -42, 3, -26, 74, 35, 1, -18, 42, 122, -57, 15, 71, 69, -127, 70, -88, 120, -88, -84, -90, -94, -125, -125, 0, -112, -1, 21, 101, 26, 73, -49, -101, -59, 20, 46, 38, -114, -128, -34, 76, 78, 120, -69, 69, 58, 1, 3, -68, 25, -118, 7, 79, -94, -5, 125, 112, -86, 109};
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
    msg.setTimeStamp(0.9659999671457357);
    msg.setSource(55947U);
    msg.setSourceEntity(5U);
    msg.setDestination(39448U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.5535660935905562);
    msg.setSource(59274U);
    msg.setSourceEntity(251U);
    msg.setDestination(61846U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.9323267659737062);
    msg.setSource(13837U);
    msg.setSourceEntity(246U);
    msg.setDestination(4320U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.38028616972477414);
    msg.setSource(40018U);
    msg.setSourceEntity(94U);
    msg.setDestination(56137U);
    msg.setDestinationEntity(156U);
    msg.camid = 62U;
    msg.x = 8003U;
    msg.y = 8765U;

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
    msg.setTimeStamp(0.22273433862091396);
    msg.setSource(52687U);
    msg.setSourceEntity(161U);
    msg.setDestination(46917U);
    msg.setDestinationEntity(172U);
    msg.camid = 7U;
    msg.x = 5123U;
    msg.y = 29436U;

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
    msg.setTimeStamp(0.9001279703752396);
    msg.setSource(22493U);
    msg.setSourceEntity(118U);
    msg.setDestination(48994U);
    msg.setDestinationEntity(201U);
    msg.camid = 139U;
    msg.x = 50971U;
    msg.y = 30609U;

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
    msg.setTimeStamp(0.625548921017524);
    msg.setSource(60201U);
    msg.setSourceEntity(65U);
    msg.setDestination(64696U);
    msg.setDestinationEntity(40U);
    msg.camid = 108U;
    msg.x = 40624U;
    msg.y = 34226U;

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
    msg.setTimeStamp(0.17969601932691293);
    msg.setSource(12300U);
    msg.setSourceEntity(241U);
    msg.setDestination(45909U);
    msg.setDestinationEntity(177U);
    msg.camid = 212U;
    msg.x = 35546U;
    msg.y = 43149U;

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
    msg.setTimeStamp(0.07907938093820288);
    msg.setSource(46099U);
    msg.setSourceEntity(213U);
    msg.setDestination(26522U);
    msg.setDestinationEntity(151U);
    msg.camid = 71U;
    msg.x = 1057U;
    msg.y = 54122U;

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
    msg.setTimeStamp(0.6206142010130433);
    msg.setSource(46547U);
    msg.setSourceEntity(203U);
    msg.setDestination(17793U);
    msg.setDestinationEntity(253U);
    msg.tracking = 78U;
    msg.lat = 0.6372523213269848;
    msg.lon = 0.6729399952948191;
    msg.x = 0.74022699457088;
    msg.y = 0.9339330994245222;
    msg.z = 0.6095881398955477;

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
    msg.setTimeStamp(0.26052189838665574);
    msg.setSource(33574U);
    msg.setSourceEntity(194U);
    msg.setDestination(7339U);
    msg.setDestinationEntity(225U);
    msg.tracking = 79U;
    msg.lat = 0.43735417497063567;
    msg.lon = 0.6725010530627761;
    msg.x = 0.4024298232235196;
    msg.y = 0.8702544173020025;
    msg.z = 0.5259173325278956;

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
    msg.setTimeStamp(0.11046840302516736);
    msg.setSource(17819U);
    msg.setSourceEntity(54U);
    msg.setDestination(36133U);
    msg.setDestinationEntity(64U);
    msg.tracking = 229U;
    msg.lat = 0.547721706978511;
    msg.lon = 0.2368924131606639;
    msg.x = 0.5056564966956337;
    msg.y = 0.7633685848091821;
    msg.z = 0.7256163787912805;

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
    msg.setTimeStamp(0.2625110693529883);
    msg.setSource(31836U);
    msg.setSourceEntity(243U);
    msg.setDestination(55695U);
    msg.setDestinationEntity(119U);
    msg.target.assign("GLSVXOBVWGFASMLLHTKXVGEEXQTPAWWDCUNWEMFZGTTZWPEAMFKFBONJDARGHSRHABTVMZYRTKCQYHPEBNOCXSHLBLVRTPIWONPVKIQWUFMBQCEUZRDACVZBZNMYQULNKVHYJDJ");
    msg.lbearing = 0.7518439396065937;
    msg.lelevation = 0.1509723291292555;
    msg.bearing = 0.2014593244660121;
    msg.elevation = 0.18245574285972255;
    msg.phi = 0.14604753814454274;
    msg.theta = 0.7426485853823283;
    msg.psi = 0.7522623352033643;
    msg.accuracy = 0.17226531121440447;

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
    msg.setTimeStamp(0.4490280689215541);
    msg.setSource(11785U);
    msg.setSourceEntity(10U);
    msg.setDestination(41226U);
    msg.setDestinationEntity(101U);
    msg.target.assign("NRNKBFEWIRKQRAAZQLSXDWXCVFVCTCAOYYPGAUAMHDWGMLBGHCAHGITRKNMULBZCQILVPYUWPKDMGVZEVBOKNCJTPOVRVLRIUJEXNDXTCWSSIAHPOMNXUFMJCUFRPJGYHZFMEFOWLUEQHSKTSDTYKFZGEFTPHXHKTLQKZRHBJDXFYQMEYNRWDNRSMSYOOTZKGCHIYQSAXQ");
    msg.lbearing = 0.04755097014474452;
    msg.lelevation = 0.7005499770560188;
    msg.bearing = 0.8763489981657048;
    msg.elevation = 0.3097980796298284;
    msg.phi = 0.8279686969039505;
    msg.theta = 0.917298109430665;
    msg.psi = 0.7020418288259923;
    msg.accuracy = 0.4942369121373468;

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
    msg.setTimeStamp(0.5764240135955887);
    msg.setSource(54974U);
    msg.setSourceEntity(71U);
    msg.setDestination(9654U);
    msg.setDestinationEntity(208U);
    msg.target.assign("YGXGGMIXPZVHNXOZLTPOUBLCHIZJPBADJSXBKZCFHERSMGWWQPSJTNKHWIJQLMPOCTMSEPGCRDBYLLRPODYNDUCQZEHOMWUIOUNRMXGJHJKIFKVUCSKKYKCWNZLWNDWRAOJTRKLESWJPDLURIRLCVYFXDMBGVCNTXVXXFZTOWSASKZUTDEXQJAVHLHFQEYMIYZASECQDMUVAHBFBVEDMENUGFBVQSAHRQYIWJYFOG");
    msg.lbearing = 0.8399647416206382;
    msg.lelevation = 0.014120664482526468;
    msg.bearing = 0.9374246788158226;
    msg.elevation = 0.9458369305135716;
    msg.phi = 0.5370475141134122;
    msg.theta = 0.10504715966710287;
    msg.psi = 0.9835937261561588;
    msg.accuracy = 0.8751420835056998;

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
    msg.setTimeStamp(0.9725267307936191);
    msg.setSource(18155U);
    msg.setSourceEntity(34U);
    msg.setDestination(47949U);
    msg.setDestinationEntity(241U);
    msg.target.assign("YGFYFDKKYSNPBJAAENCPIDQY");
    msg.x = 0.7003697902307107;
    msg.y = 0.5884770057820776;
    msg.z = 0.18949173491236537;
    msg.n = 0.2503607083563075;
    msg.e = 0.7746531312914811;
    msg.d = 0.44700025310486524;
    msg.phi = 0.48924930067283834;
    msg.theta = 0.2831896381909823;
    msg.psi = 0.44557988025737416;
    msg.accuracy = 0.21085440037028624;

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
    msg.setTimeStamp(0.30881469694924146);
    msg.setSource(22139U);
    msg.setSourceEntity(241U);
    msg.setDestination(42833U);
    msg.setDestinationEntity(229U);
    msg.target.assign("PPDDJBHBWOZNGCEHRYSLKRNI");
    msg.x = 0.7014711958891442;
    msg.y = 0.6951392314327886;
    msg.z = 0.130528194081327;
    msg.n = 0.6998613913079633;
    msg.e = 0.2585062940547054;
    msg.d = 0.9637890272205404;
    msg.phi = 0.6725925474718798;
    msg.theta = 0.004095000086002054;
    msg.psi = 0.6964764157410387;
    msg.accuracy = 0.8203744439087113;

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
    msg.setTimeStamp(0.06415047959424724);
    msg.setSource(25538U);
    msg.setSourceEntity(116U);
    msg.setDestination(17010U);
    msg.setDestinationEntity(173U);
    msg.target.assign("WCFWRCYIUMTXNBMBSTYFPNJIEJRIAORRYJQBMAYKKRPCHVNOSHBDPKUJWDKMMJ");
    msg.x = 0.24521578107226472;
    msg.y = 0.2934115454556645;
    msg.z = 0.12247906343211257;
    msg.n = 0.3776048244770477;
    msg.e = 0.25786582665971036;
    msg.d = 0.643410357068404;
    msg.phi = 0.2533625468711507;
    msg.theta = 0.1822336795638232;
    msg.psi = 0.5181449732385702;
    msg.accuracy = 0.9451388734241667;

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
    msg.setTimeStamp(0.13690969945273457);
    msg.setSource(19846U);
    msg.setSourceEntity(237U);
    msg.setDestination(469U);
    msg.setDestinationEntity(153U);
    msg.target.assign("IMGLQMIRHBUUBNDTGHWYQKYDZMZGKFIITAWHZVRRKEQVGSIRRZMNHAJSFXWUUCZVVNAFZOXKGXONNBMMVNKLPDASQSBJCSBFKQFHYZWKTJYYDDSQEPZTWHSYRX");
    msg.lat = 0.009525218933293056;
    msg.lon = 0.30096219020397874;
    msg.z_units = 57U;
    msg.z = 0.586765348922253;
    msg.accuracy = 0.7046608379908426;

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
    msg.setTimeStamp(0.35422178969850626);
    msg.setSource(33408U);
    msg.setSourceEntity(55U);
    msg.setDestination(61970U);
    msg.setDestinationEntity(104U);
    msg.target.assign("ZYFBWIDWZEMEWPASSIOIFHXWLCOVRGHHBSOKUPWCLIBYXUBKDESNLGNUPUTOOISKJGAXUMEMRYBYREVVCMHJGCLNIODVBZBNXXLPDYIQCQLPFYPMWYUZPAXRYSECOTQTNRWFYRLGIDTJHCCTMMQLQJYEEOFCAALAPTNZWQW");
    msg.lat = 0.33034576357575474;
    msg.lon = 0.8031406147753176;
    msg.z_units = 141U;
    msg.z = 0.48035993044672176;
    msg.accuracy = 0.08210608604411784;

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
    msg.setTimeStamp(0.7491073186475516);
    msg.setSource(20463U);
    msg.setSourceEntity(78U);
    msg.setDestination(56239U);
    msg.setDestinationEntity(181U);
    msg.target.assign("QLSCMWXNWNALDSDPPNQVJAIHOFXNTFDVNMRQMEUUCJJDPSMSERRIYGKLUOIUKYG");
    msg.lat = 0.8777087655744717;
    msg.lon = 0.5452621243760473;
    msg.z_units = 32U;
    msg.z = 0.7518227768143406;
    msg.accuracy = 0.8391166588462828;

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
    IMC::HighpassControlParcel msg;
    msg.setTimeStamp(0.720244615566733);
    msg.setSource(35743U);
    msg.setSourceEntity(82U);
    msg.setDestination(9058U);
    msg.setDestinationEntity(73U);
    msg.highpass = 0.7990611657196237;
    msg.adot = 0.920868439998624;
    msg.slope_compensation = 0.31642254392105984;
    msg.slope_compensation_difference = 0.5253678905887962;
    msg.altitude = 0.8247633507987673;
    msg.auto_altitude = 0.6946446586805276;

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
    msg.setTimeStamp(0.5064700940607146);
    msg.setSource(49537U);
    msg.setSourceEntity(8U);
    msg.setDestination(21604U);
    msg.setDestinationEntity(227U);
    msg.highpass = 0.7435309813867118;
    msg.adot = 0.17874450022952126;
    msg.slope_compensation = 0.662189659462336;
    msg.slope_compensation_difference = 0.16871469104461212;
    msg.altitude = 0.6003414790926079;
    msg.auto_altitude = 0.19497978336217325;

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
    msg.setTimeStamp(0.026438695783793542);
    msg.setSource(17785U);
    msg.setSourceEntity(5U);
    msg.setDestination(65141U);
    msg.setDestinationEntity(198U);
    msg.highpass = 0.782131589777296;
    msg.adot = 0.4353921970831933;
    msg.slope_compensation = 0.6627769246990928;
    msg.slope_compensation_difference = 0.4502927345123129;
    msg.altitude = 0.9176912373565074;
    msg.auto_altitude = 0.8819835705709659;

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
    msg.setTimeStamp(0.4500315990528587);
    msg.setSource(19835U);
    msg.setSourceEntity(52U);
    msg.setDestination(40295U);
    msg.setDestinationEntity(183U);
    msg.remote_control_allowed = 139U;
    msg.remote_control_enabled = 115U;
    msg.remote_control_active = 96U;
    msg.depth_only_control_enabled = 8U;
    msg.direct_control_enabled = 29U;
    msg.return_to_closest_point_on_line = 181U;
    msg.on_shore_power = 18U;
    msg.latitude = 0.918748081631193;
    msg.longitude = 0.2707856068054456;
    msg.depth = 0.8949326045576339;
    msg.depth_ref = 0.35606844675723304;
    msg.altitude = 0.7780655129991985;
    msg.altitude_ref = 0.2467089465401039;
    msg.pitch = 0.0289933825328057;
    msg.roll = 0.6250902177707884;
    msg.rpm = 0.10190839182866329;
    msg.rpm_ref = 0.9131547894568457;
    msg.speed = 0.33075139733899195;
    msg.speed_ref = 0.6396644540664292;
    msg.heading = 0.975360578376381;
    msg.heading_rate = 0.1900867411039201;
    msg.heading_ref = 0.30022105733670146;
    msg.mission_state = 17U;
    msg.leg = -22128235960536469;

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
    msg.setTimeStamp(0.986356838763353);
    msg.setSource(33203U);
    msg.setSourceEntity(251U);
    msg.setDestination(65468U);
    msg.setDestinationEntity(5U);
    msg.remote_control_allowed = 48U;
    msg.remote_control_enabled = 163U;
    msg.remote_control_active = 36U;
    msg.depth_only_control_enabled = 213U;
    msg.direct_control_enabled = 109U;
    msg.return_to_closest_point_on_line = 149U;
    msg.on_shore_power = 73U;
    msg.latitude = 0.2902523009023511;
    msg.longitude = 0.874574760995352;
    msg.depth = 0.6591453794967018;
    msg.depth_ref = 0.1260395758146503;
    msg.altitude = 0.4279080465870714;
    msg.altitude_ref = 0.7314928796593552;
    msg.pitch = 0.16364447461441;
    msg.roll = 0.031658171797303014;
    msg.rpm = 0.7496292436744023;
    msg.rpm_ref = 0.4664363684771836;
    msg.speed = 0.06984115146666148;
    msg.speed_ref = 0.2694538584932581;
    msg.heading = 0.5448454157124816;
    msg.heading_rate = 0.6410681122525554;
    msg.heading_ref = 0.35622311642447946;
    msg.mission_state = 252U;
    msg.leg = 2323665856340879358;

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
    msg.setTimeStamp(0.924162415889062);
    msg.setSource(54639U);
    msg.setSourceEntity(211U);
    msg.setDestination(20994U);
    msg.setDestinationEntity(40U);
    msg.remote_control_allowed = 130U;
    msg.remote_control_enabled = 145U;
    msg.remote_control_active = 162U;
    msg.depth_only_control_enabled = 240U;
    msg.direct_control_enabled = 78U;
    msg.return_to_closest_point_on_line = 217U;
    msg.on_shore_power = 102U;
    msg.latitude = 0.8496095939594775;
    msg.longitude = 0.20633773526360788;
    msg.depth = 0.8950220045779478;
    msg.depth_ref = 0.7010284879205284;
    msg.altitude = 0.16768528171684216;
    msg.altitude_ref = 0.973801481275159;
    msg.pitch = 0.9993243763036681;
    msg.roll = 0.4511471723019054;
    msg.rpm = 0.30178036579753076;
    msg.rpm_ref = 0.9982645941102612;
    msg.speed = 0.2921355746905424;
    msg.speed_ref = 0.7565409597750448;
    msg.heading = 0.20584070975236468;
    msg.heading_rate = 0.13216986434012445;
    msg.heading_ref = 0.6562053587924727;
    msg.mission_state = 207U;
    msg.leg = 2336690239935827617;

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
    msg.setTimeStamp(0.7433290097785489);
    msg.setSource(30216U);
    msg.setSourceEntity(40U);
    msg.setDestination(33084U);
    msg.setDestinationEntity(81U);
    msg.name.assign("BZAPCXLZPT");
    msg.arg1 = 0.5527043879138119;
    msg.arg2 = 0.5804048384461571;
    msg.arg3 = 0.16968338688402929;
    msg.arg4 = 0.36090212265879995;

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
    msg.setTimeStamp(0.5184436759735159);
    msg.setSource(55468U);
    msg.setSourceEntity(106U);
    msg.setDestination(59621U);
    msg.setDestinationEntity(134U);
    msg.name.assign("XKUZGZBGFUTAD");
    msg.arg1 = 0.4980178402576587;
    msg.arg2 = 0.5870149395544507;
    msg.arg3 = 0.14420203285823818;
    msg.arg4 = 0.6351774110871662;

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
    msg.setTimeStamp(0.24244124040290616);
    msg.setSource(1036U);
    msg.setSourceEntity(32U);
    msg.setDestination(22200U);
    msg.setDestinationEntity(121U);
    msg.name.assign("DTNTOKYJJURXAMJILUBRAIVDCNBVBGMFBFAYRHFLAPI");
    msg.arg1 = 0.1677997538558471;
    msg.arg2 = 0.7798699254523831;
    msg.arg3 = 0.6340986913320265;
    msg.arg4 = 0.31516052811948614;

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
    msg.setTimeStamp(0.9520837600695576);
    msg.setSource(5497U);
    msg.setSourceEntity(230U);
    msg.setDestination(56336U);
    msg.setDestinationEntity(239U);
    msg.direction = 194U;
    msg.range1 = 0.10816478827360176;
    msg.range2 = 0.0820700952889124;
    msg.range3 = 0.3268340998962179;
    msg.range4 = 0.2660846721626988;

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
    msg.setTimeStamp(0.9457806269605232);
    msg.setSource(27368U);
    msg.setSourceEntity(148U);
    msg.setDestination(44838U);
    msg.setDestinationEntity(49U);
    msg.direction = 107U;
    msg.range1 = 0.7146325844987211;
    msg.range2 = 0.032093336297251196;
    msg.range3 = 0.7331633760596892;
    msg.range4 = 0.7317740385293636;

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
    msg.setTimeStamp(0.4438810068896659);
    msg.setSource(63421U);
    msg.setSourceEntity(141U);
    msg.setDestination(10203U);
    msg.setDestinationEntity(205U);
    msg.direction = 215U;
    msg.range1 = 0.7597490511907097;
    msg.range2 = 0.39459739516752357;
    msg.range3 = 0.22301560715136215;
    msg.range4 = 0.75249391029942;

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
    msg.setTimeStamp(0.24210656796070695);
    msg.setSource(56141U);
    msg.setSourceEntity(169U);
    msg.setDestination(20048U);
    msg.setDestinationEntity(146U);
    msg.msg.assign("QVWYUOWJPPFRLJIVTNHPWZGYJDMCGQNBSTKNBZKOSCXVTPVXHEPIOOIVBEVDCCDTEPQQCGPZVNLXMKOOZKJYXHWJPFQRGMBEOADYSTQTZZHKWEVMIWGFHRRMGKDBANKGOXNAYAILLAWRRYOWUQUUBNKCEQUIPZMENEUMXMLSSJUIMDLQWARLOARFTWUBRSALFKHJVLIFEHDBSZVFXTFGLJIIPACEZDCJDSYXAJFKNHSYH");
    msg.direction = 62U;

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
    msg.setTimeStamp(0.1663358612432846);
    msg.setSource(62979U);
    msg.setSourceEntity(66U);
    msg.setDestination(55954U);
    msg.setDestinationEntity(110U);
    msg.msg.assign("ICFQNCZOFMHMLRYUFVORLUNUWUDGCTARTLNORDAIYYFU");
    msg.direction = 228U;

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
    msg.setTimeStamp(0.17753182972563686);
    msg.setSource(48578U);
    msg.setSourceEntity(81U);
    msg.setDestination(20155U);
    msg.setDestinationEntity(28U);
    msg.msg.assign("LERVBGTDJCQRFEWKTMLUSNJGRYOATTQSZEHXKZYCBLRPWWPNCY");
    msg.direction = 2U;

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
    msg.setTimeStamp(0.7127465309254447);
    msg.setSource(55766U);
    msg.setSourceEntity(110U);
    msg.setDestination(4538U);
    msg.setDestinationEntity(91U);
    msg.state = 227U;

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
    msg.setTimeStamp(0.4431992383389268);
    msg.setSource(7747U);
    msg.setSourceEntity(180U);
    msg.setDestination(7638U);
    msg.setDestinationEntity(221U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.5328348231794178);
    msg.setSource(42092U);
    msg.setSourceEntity(55U);
    msg.setDestination(49015U);
    msg.setDestinationEntity(30U);
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
    msg.setTimeStamp(0.9141548436033934);
    msg.setSource(21013U);
    msg.setSourceEntity(86U);
    msg.setDestination(1972U);
    msg.setDestinationEntity(109U);
    msg.dt = 0.10109527762429948;
    msg.k_d = 0.5474331496135344;
    msg.range1 = 0.6457255557506425;
    msg.range2 = 0.7947310750780151;
    msg.range3 = 0.8517506981858484;
    msg.range4 = 0.4071160786936211;
    msg.u = 0.708659217335352;
    msg.v = 0.9478088005627816;
    msg.w = 0.3208055626832451;
    msg.phi = 0.7654084536971786;
    msg.theta = 0.7022185289273164;
    msg.psi = 0.1776148417938257;
    msg.adot = 0.15427984304240538;

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
    msg.setTimeStamp(0.9939414693224674);
    msg.setSource(56793U);
    msg.setSourceEntity(167U);
    msg.setDestination(45661U);
    msg.setDestinationEntity(20U);
    msg.dt = 0.1437929816807081;
    msg.k_d = 0.3250479502580672;
    msg.range1 = 0.672214418535589;
    msg.range2 = 0.8448485243508945;
    msg.range3 = 0.18199441765254132;
    msg.range4 = 0.471428935013654;
    msg.u = 0.27238662126349733;
    msg.v = 0.5711470470808804;
    msg.w = 0.30902455273117524;
    msg.phi = 0.6839657668412519;
    msg.theta = 0.1991696814183198;
    msg.psi = 0.6317374012171282;
    msg.adot = 0.43009020432190836;

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
    msg.setTimeStamp(0.8849475772291681);
    msg.setSource(21050U);
    msg.setSourceEntity(126U);
    msg.setDestination(43625U);
    msg.setDestinationEntity(160U);
    msg.dt = 0.15909378766883575;
    msg.k_d = 0.5713097121939037;
    msg.range1 = 0.515921365700973;
    msg.range2 = 0.6122703939226448;
    msg.range3 = 0.7791111715525508;
    msg.range4 = 0.25351086416050594;
    msg.u = 0.04424188367447146;
    msg.v = 0.9831631441944145;
    msg.w = 0.8847155681354348;
    msg.phi = 0.2554417159558393;
    msg.theta = 0.3726846544817939;
    msg.psi = 0.8537097012070312;
    msg.adot = 0.6280757889653011;

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
    msg.setTimeStamp(0.9584518525877108);
    msg.setSource(52465U);
    msg.setSourceEntity(138U);
    msg.setDestination(27500U);
    msg.setDestinationEntity(17U);
    msg.htime = 0.13020580027278017;
    msg.dt = 0.2290416482022547;

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
    msg.setTimeStamp(0.35739892810938356);
    msg.setSource(11287U);
    msg.setSourceEntity(153U);
    msg.setDestination(33015U);
    msg.setDestinationEntity(9U);
    msg.htime = 0.8548404709459559;
    msg.dt = 0.16834370258619402;

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
    msg.setTimeStamp(0.9186734999532363);
    msg.setSource(46059U);
    msg.setSourceEntity(160U);
    msg.setDestination(23398U);
    msg.setDestinationEntity(67U);
    msg.htime = 0.7273475993068201;
    msg.dt = 0.2068271832041233;

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
    msg.setTimeStamp(0.10206576315702398);
    msg.setSource(30473U);
    msg.setSourceEntity(5U);
    msg.setDestination(7570U);
    msg.setDestinationEntity(36U);
    msg.value = 0.37403023453628537;

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
    msg.setTimeStamp(0.26221922454342317);
    msg.setSource(25333U);
    msg.setSourceEntity(251U);
    msg.setDestination(48819U);
    msg.setDestinationEntity(158U);
    msg.value = 0.3278084167707911;

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
    msg.setTimeStamp(0.9006284227197322);
    msg.setSource(35889U);
    msg.setSourceEntity(139U);
    msg.setDestination(47742U);
    msg.setDestinationEntity(190U);
    msg.value = 0.7520271131554265;

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
    msg.setTimeStamp(0.18747602686415898);
    msg.setSource(26589U);
    msg.setSourceEntity(85U);
    msg.setDestination(52679U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.9735628184814276;
    msg.lon = 0.7669675065713446;

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
    msg.setTimeStamp(0.8736190637719814);
    msg.setSource(36141U);
    msg.setSourceEntity(219U);
    msg.setDestination(25317U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.896082919089451;
    msg.lon = 0.1273205838716025;

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
    msg.setTimeStamp(0.335728347551953);
    msg.setSource(6539U);
    msg.setSourceEntity(27U);
    msg.setDestination(12123U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.11373292379758071;
    msg.lon = 0.4557311368596224;

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
    msg.setTimeStamp(0.7616770444207582);
    msg.setSource(61958U);
    msg.setSourceEntity(144U);
    msg.setDestination(63196U);
    msg.setDestinationEntity(58U);
    msg.value = 0.3282501652710961;

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
    msg.setTimeStamp(0.32936596505168714);
    msg.setSource(23760U);
    msg.setSourceEntity(107U);
    msg.setDestination(26417U);
    msg.setDestinationEntity(122U);
    msg.value = 0.17047042495072873;

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
    msg.setTimeStamp(0.2563872356686072);
    msg.setSource(57863U);
    msg.setSourceEntity(191U);
    msg.setDestination(40980U);
    msg.setDestinationEntity(251U);
    msg.value = 0.11436940204160528;

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
    msg.setTimeStamp(0.2222432476225239);
    msg.setSource(39102U);
    msg.setSourceEntity(5U);
    msg.setDestination(49501U);
    msg.setDestinationEntity(133U);
    msg.value = 0.14284618739943722;

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
    msg.setTimeStamp(0.842929984603266);
    msg.setSource(21503U);
    msg.setSourceEntity(7U);
    msg.setDestination(36048U);
    msg.setDestinationEntity(51U);
    msg.value = 0.05531352783035737;

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
    msg.setTimeStamp(0.2660982908950237);
    msg.setSource(9361U);
    msg.setSourceEntity(67U);
    msg.setDestination(49503U);
    msg.setDestinationEntity(142U);
    msg.value = 0.46555094609493464;

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
    msg.setTimeStamp(0.16797702041345508);
    msg.setSource(36278U);
    msg.setSourceEntity(97U);
    msg.setDestination(64297U);
    msg.setDestinationEntity(202U);
    msg.environmenttypeid = 110U;
    msg.id = 130U;
    msg.x = 0.42722326318743264;
    msg.y = 0.11789108559348693;
    msg.psi = 0.388861295582138;
    msg.u = 0.6746738609129131;
    msg.v = 0.5172807527299037;
    msg.r = 0.28037583465314375;
    msg.x_auv = 0.9009203296292804;
    msg.y_auv = 0.012279424171393716;
    msg.z_auv = 0.8707006993225165;
    msg.phi_auv = 0.8766281922589632;
    msg.theta_auv = 0.7345706741881697;
    msg.psi_auv = 0.611283807354879;
    msg.u_auv = 0.29020498273654993;
    msg.v_auv = 0.8439997997306417;
    msg.w_auv = 0.2909791020405549;
    msg.p_auv = 0.8127689954863626;
    msg.q_auv = 0.6857145810681281;
    msg.r_auv = 0.8272542723334295;

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
    msg.setTimeStamp(0.34297695941859163);
    msg.setSource(52786U);
    msg.setSourceEntity(84U);
    msg.setDestination(25068U);
    msg.setDestinationEntity(234U);
    msg.environmenttypeid = 166U;
    msg.id = 228U;
    msg.x = 0.5686657067690349;
    msg.y = 0.15890288130017283;
    msg.psi = 0.9853985307604941;
    msg.u = 0.5541549352553985;
    msg.v = 0.21903627912929247;
    msg.r = 0.784856339385565;
    msg.x_auv = 0.1431324373845705;
    msg.y_auv = 0.9621190961479326;
    msg.z_auv = 0.7893898919741711;
    msg.phi_auv = 0.6283863096260306;
    msg.theta_auv = 0.8107999452771034;
    msg.psi_auv = 0.31689405559429273;
    msg.u_auv = 0.3356812136880043;
    msg.v_auv = 0.49183214245525564;
    msg.w_auv = 0.9686214947320109;
    msg.p_auv = 0.0004909460976378899;
    msg.q_auv = 0.32719992768852946;
    msg.r_auv = 0.7472285573627238;

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
    msg.setTimeStamp(0.19339839988853202);
    msg.setSource(8870U);
    msg.setSourceEntity(111U);
    msg.setDestination(38752U);
    msg.setDestinationEntity(174U);
    msg.environmenttypeid = 175U;
    msg.id = 98U;
    msg.x = 0.3598103652483212;
    msg.y = 0.23123412892523587;
    msg.psi = 0.6630609494129748;
    msg.u = 0.2133618352383404;
    msg.v = 0.5006573933250316;
    msg.r = 0.6572917661605102;
    msg.x_auv = 0.7483346391657785;
    msg.y_auv = 0.9933432342483411;
    msg.z_auv = 0.31152702970198076;
    msg.phi_auv = 0.061660253894830874;
    msg.theta_auv = 0.9607146933627548;
    msg.psi_auv = 0.5662880964732985;
    msg.u_auv = 0.8372696780345046;
    msg.v_auv = 0.13478411324608364;
    msg.w_auv = 0.2681881693917726;
    msg.p_auv = 0.3118517213344606;
    msg.q_auv = 0.36364568866364366;
    msg.r_auv = 0.15897590684974328;

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
