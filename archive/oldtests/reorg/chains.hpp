/**
 * Copyright (c) 2011-2017 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef REORG_CHAINS_HPP
#define REORG_CHAINS_HPP

#include <string>
#include <vector>

typedef std::vector<std::string> string_list;

string_list raw_chain_0{
    "010000006fe28c0ab6f1b372c1a6a246ae63f74f931e8365e15a089c68d61900000000005aaadbe9b6ce0d043d58449fca4b4a2ced29f34beaeb17108f9edb3a98fd57eccee52f4fffff001d00bbc8480101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e04a7e52f4f0141062f503253482fffffffff0100f2052a010000004341049593c444f8ee3341919f226a40452b4f771b565db4ae808696c0a92815f2ce401a92807200c4e266bdcd6a57313f6eca294d6dfb5bda55bac65ab42fb192615eac00000000",
    "01000000ac1da0c016fa82383e5149e22907814da893035dcc0fabd98bc7acb3000000003ec7dff23d07e29e784c7135c6906acfe3605575708543392f4fbb5600d8d0a1c6fa2f4fffff001d0029f6010101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e04bdfa2f4f0106062f503253482fffffffff0100f2052a0100000043410455b99fe962e7c8a57a90fb746deae7d5a5b71e5cfe363b02741056aaad475810b5f8e6c1b87afc59cf77a46f52a980bf5ef2cb581228a60105ac18af60f978b4ac00000000",
    "0100000050c2ca7096e20ca5eb331ef15d2395710f01ca75204314f3f718860b00000000454fb144788968cbb4dbf2dee29175f00086eb557fe931098f63200ba23444a89014304fffff001d0034bf520101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e048714304f015c062f503253482fffffffff0100f2052a010000004341045be253bdf3c2d555efd9204292c3ef3303954ebb2662bf2a9ab33699f102ead2e717286ddc6f6f45da6b926b33860f3fec6964866cfe4a79b6c10ef0a95fcf9cac00000000",
    "01000000961b6bfd31a067d62ad7d3c93e7179c492cd9f501e7748363ab93d9200000000cc2d34d48a180085f3a244bf113ef4a95ec04d58d9e2eda8304b7818760625981d32304fffff001d012e9c820101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e04e631304f014e062f503253482fffffffff0100f2052a01000000434104092962027e89dd3166f43bd7c6a8abdec755b36f2175be4e53b400d9943777a8db83ff82af914afbeea652633d4a3349f59c555157e51d245c0ab5bdfbabb017ac00000000",
    "01000000509427db908fe11008938d918f9c6e9c89db27eaee70afb034882caf000000000a090b153caff0329cd2f6b1922cc262de072573317fe2f3c46f285265915e200938304fffff001d00979f6c0101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e04f937304f010f062f503253482fffffffff0100f2052a0100000043410429e517d2d3db4d0cfb50046a0ef966f8cb67d25d8e86de9c806dded2a297ca3390a40221271fb612139dd0543c4a0869f7bdbbf07dd35fbc0632a0dc5b169733ac00000000",
    "01000000aefe19debe8c813cf3fed38859940824d18d6506fa3f966dd1b12e1f000000007759db1f3c3f99def45fab1ba23b753209848e59b1b6ede34bde28026eedb20dbc43304fffff001d0124df9a0101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e049243304f012f062f503253482fffffffff0100f2052a01000000434104ac45e0766cf318440dbe0d66b06828ffd2ca8be2c4d5d0c8f8c5b0970e81a52049021a77074ef97a398807c3d8f27ceaae9aea7c885a8f611182f20a34d445afac00000000"
};

string_list raw_chain_1{
    "010000006fe28c0ab6f1b372c1a6a246ae63f74f931e8365e15a089c68d6190000000000f6703dbe53b05a9ff0d5c5d1c6a1f69b9259afbf78eecab04de0c2aa8f85d3d89b69304fffff001d010028d50101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e047e69304f017c062f503253482fffffffff0100f2052a010000004341045354cc3501423b1455b1e2f8bf4e3eb9e61c12b95f16a79fe9998dc126c350928a26d9dd147b9bf5e4dfa3fb919f8df03efa96cab90c7d5cdd133e0e18fbcc09ac00000000",
    "01000000beb255df4c7eb00a0a746ce02d279c8e6741b92431fb91f9468fdf4c0000000066f580d3a0dc12a62156aa38c486b8307ccf63f59257b781d6a1b3b9d4eee6c1357b304fffff001d009786360101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e04237b304f0145062f503253482fffffffff0100f2052a010000004341043e7e71137a7b6726b1c3040e754c9b065a3345db09016f8eff63260780688654ef24f2d380f7176f6dbd143965f0c3ba1588df9b72f8654f12ad9c0e640c8d9cac00000000",
    "01000000f93dfa93ac8b2096f1774541a09e45d866468a2a5d25495452608f2700000000b056a05f42353cfa49ed2bc661f860cd7ad001b267e10c4a1c845ad2523ec0bd65f7304fffff001d00379b3d0101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e045ff7304f0155062f503253482fffffffff0100f2052a01000000434104dcdbf203dfb645c0b8d8f05d52f4e472401675535567e24107ad0282537ed0b3b879fd86e80ee918ef6346eb0a51241082f51e7177adaab993b609b43522f90aac00000000",
    "01000000ed8394526e054ab31ce535d3492a37a87a258dd6c2783647e7e7ae7c0000000095dbd81d16dca6f6009a3e5d9540aeb6b81dd610e1ab27d686ef9eede2394ead8c0b314fffff001d0040c94a0101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e04810b314f0103062f503253482fffffffff0100f2052a01000000434104fc957c97f2c634b0f0ebdcccf5a6437e500f6d459abc2676e1b3a8697435ac35b19dcf1aad03198e13abbd344bdc7e649a446afa00dddbf632bc69b7ed62c792ac00000000",
    "0100000019b54fd59517229565b51f0a42b2bc222f50de603c5f25cb84c94761000000002a939ad94a4142cc8adb821ba642cc1d8a8ca0dfbd62e87dc9a3aec199e15613d32f314fffff001d001f14840101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e04d02f314f017f062f503253482fffffffff0100f2052a010000004341045c11f31dce53f33ea38dea4bcf6d9d9397adb6a296d9c41b518fe3512164c4e7252cc515deaa303a58dca2640e51b907b49e768c95a0adaefa605cd1e77e35a8ac00000000",
    "010000006837e2aa99894a0cbba02c812273d4ab2a94c5c639aa9d4c28d50344000000002ca11e31ed74148ddc37851975f947bee8438f30c31afc504cad53188e6f8da8993e314fffff001d00e17fca0101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e04733e314f013b062f503253482fffffffff0100f2052a0100000043410494eda1c3cf954d1dc8bd9123b8833ef2cecd51419e3da4b798bb5c2ca3f0f4b35e2b83103280476d5ce75a94e9ac3ba8f817727566534efd8dff0046a12e6667ac00000000",
    "01000000c4afaa38f3f46eed875332cf3a0a852cf1364f8dd9b837bb6b441477000000002861efbc90eb155f1a520c6158abd01887720a45066d76ba20c246bd7d5bc56ea158314fffff001d0075a77e0101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e049358314f0164062f503253482fffffffff0100f2052a0100000043410416949dbcb9343a7202eb8c687e9147b4333412bad5b08592e0d044933502ad0d6a86547b4c76f6985fb0c8c57f51488a3190131f454d9b5802b94ce289dcf717ac00000000"
};

string_list raw_chain_2{
    "010000006fe28c0ab6f1b372c1a6a246ae63f74f931e8365e15a089c68d61900000000008c08a76de1b2b24406b518a5e6395ee337d4f971231e17794cac2073d5ac1c781fce314fffff001d02cd5bd80101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0f04e3cd314f020101062f503253482fffffffff0100f2052a01000000434104bf88d43e4f6a796eaa2e7726dcdef2d249b0bb911a709df788e90851af0be6a16ddcf9825c05bd58ca0c4b303516672c012f886cd4c43f4e6f82869806a9211bac00000000",
    "01000000656b069f9e3f51c1aff414c5ce4032ab0899ac29112762e5cedab4eb00000000d0d6d36999f4c90b1abc04ef0709cdac5b69f26e4131db9a5695565dbc5e33482dd5314fffff001d005ce8c50101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e0427d5314f010d062f503253482fffffffff0100f2052a0100000043410435530f0180133eac9f5bdf1d1dbd1a63067b5249777ebb0f8262d193608bfce66fc2879a3d7d6fc14f2dced7186a13389f36aa71662828e004f50be9b06ec3ffac00000000",
    "01000000fe4f56cf375bbf2c2a274c96f97afa6575bda27078c3c66d6599b59700000000644a8b24d769f62971587dd0a31da086efde2a216b5d47feb07938839af14cfcb34d324fffff001d063d29da0101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e04314d324f010f062f503253482fffffffff0100f2052a01000000434104208691e6c8d50a3116eecfdec8147fb1ba05044dc7ee27d2dc4c8bedb41677e1827c0ca48ed869875a77d8f54e0e7f457e7aadaa1ef3a214e142dca890e9374dac00000000",
    "01000000f56432367cd68c824cc7945b38a124cb1aab7964a5eca50af81d6dd400000000102355c3d3e94a883a9422d41bb38b9e3da5c4b828d2f5036e2d5acde619ff049570324fffff001d018489d60101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e047870324f017d062f503253482fffffffff0100f2052a0100000043410411fdcde384bf554aa6ad416811fa603cc70c311b077a162c8dc5a45def68d1ddba372ec3ec41a38c0cdddf0b2154858e5ee2f8e995f577c4fb2aaec9c25c3872ac00000000",
    "01000000147bb8a6b16f208cc75165e0dc9c3785662bb01cf4d4512127fe533500000000a856121bdd86dd94c5317c970cc079e54fe19dde3612bce4071e2bf8671ddb9a9475324fffff001d0079ae0b0101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e048a75324f0103062f503253482fffffffff0100f2052a010000004341041d062a89face7b8e08b425d21327f940feb8b633cf86a623e4f2d2fbf6a57635a549156a7c56483b7c8f35646ce9413a4f1babc02dc5c5fb34264b82276238d3ac00000000",
    "01000000a83d155edad55c00a83a2758f724ed8a5327a6aa9e034939303179e600000000ef51c91901bb37dedf612f3387e987d81da319c5ab5b1d1b33c2a49643a7922fd879324fffff001d0201e3e00101000000010000000000000000000000000000000000000000000000000000000000000000ffffffff0e04ab79324f010e062f503253482fffffffff0100f2052a0100000043410456f6a3f7a2f110c1befcadd8ea3d4b4637f8b7b46b87c024f697805ca5b14b417e6f4932cd3e5b67d453375a6712817488f6de54c0d358a0ed7166bdbeb1738cac00000000"
};

#endif

