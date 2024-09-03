//#############################################################################
//! \file wcfft4Input.c
//! \brief  Input Vector (1024) 
//! \author Vishal Coelho 
//! \date   16-Nov-2015
//! 
//
//  Group:			C2000
//  Target Family:	$DEVICE$
//
//#############################################################################
//
//
// 
// C2000Ware v5.03.00.00
//
// Copyright (C) 2024 Texas Instruments Incorporated - http://www.ti.com
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//#############################################################################


float test_input[2048] = {
	34.00000000000F,  0.00000000000F, 32.20905042495F, 10.58419295845F, 
	27.06755420680F, 19.93245177124F, 19.23494340954F, 26.98189196782F, 
	 9.70046860060F, 30.98860732737F, -0.36279691830F, 31.62385148917F, 
	-9.76817476469F, 29.00607350132F, -17.48264140313F, 23.66497019114F, 
	-22.76482695929F, 16.44482611043F, -25.25269201748F,  8.36419003061F, 
	-24.98851125468F,  0.45574491811F, -22.37942831038F, -6.38705952483F, 
	-18.10260318836F, -11.53184576639F, -12.97301875471F, -14.67881546324F, 
	-7.79782005081F, -15.87217718403F, -3.24267048139F, -15.45230659833F, 
	 0.26720587059F, -13.95967609693F,  2.59532852208F, -12.00971613249F, 
	 3.88502561564F, -10.16240652698F,  4.49706957065F, -8.81076867072F, 
	 4.90727151353F, -8.10851244089F,  5.58450426228F, -7.94960760340F, 
	 6.87297385366F, -8.00284235813F,  8.90160227168F, -7.79423070493F, 
	11.53830100074F, -6.82124730360F, 14.39861345001F, -4.67688139502F, 
	16.90815778861F, -1.15947837855F, 18.40829282802F,  3.65334962200F, 
	18.28623832152F,  9.38220522399F, 16.10597368947F, 15.38112392471F, 
	11.71551120424F, 20.82649182255F,  5.30975766327F, 24.84580255274F, 
	-2.56445138189F, 26.66486505133F, -11.06469259128F, 25.74818776098F, 
	-19.16355085285F, 21.90774155501F, -25.79673234452F, 15.36010948057F, 
	-30.02506959383F,  6.72038111873F, -31.18385712101F, -3.06836152857F, 
	-28.99451646653F, -12.86027468214F, -23.61942101115F, -21.46766325035F, 
	-15.64985348514F, -27.83229908173F, -6.02798930287F, -31.17983337946F, 
	 4.08534714033F, -31.13251317509F, 13.47645739127F, -27.76209327080F, 
	21.05185465655F, -21.57455718001F, 25.99127709895F, -13.42938616197F, 
	27.85664023648F, -4.40676746361F, 26.64031233877F,  4.35548422324F, 
	22.74619086299F, 11.82881123081F, 16.90815778861F, 17.23786959267F, 
	10.06071541504F, 20.15904224784F,  3.18422698349F, 20.55893675083F, 
	-2.84906427533F, 18.76858716603F, -7.40279204105F, 15.39994801871F, 
	-10.15759273099F, 11.22085297613F, -11.13363725962F,  7.01128422142F, 
	-10.65297016095F,  3.42644325660F, -9.25053593434F,  0.89031470253F, 
	-7.55155033731F, -0.46247346866F, -6.13844271208F, -0.78760603468F, 
	-5.43201113587F, -0.47632961237F, -5.60847939632F, -0.05645902667F, 
	-6.56737017203F, -0.06846666837F, -7.95572432897F, -0.94034383476F, 
	-9.24386676040F, -2.88503229962F, -9.83847152308F, -5.84007033223F, 
	-9.21178324433F, -9.46141825008F, -7.02272996601F, -13.17358073770F, 
	-3.20687550842F, -16.26786453056F,  1.98249178232F, -18.03171704022F, 
	 7.99127709895F, -17.88616204193F, 14.03836663557F, -15.50644647455F, 
	19.23494340954F, -10.90350075370F, 22.72965617183F, -4.45029091842F, 
	23.85497640771F,  3.15349648878F, 22.24933345299F, 10.97435646110F, 
	17.93328453025F, 17.98129861903F, 11.32545721353F, 23.20369714396F, 
	 3.19403463639F, 25.88466374834F, -5.44957113100F, 25.60428191325F, 
	-13.49835846828F, 22.35175966472F, -19.91505362408F, 16.53388390016F, 
	-23.88828998581F,  8.91768805952F, -24.95416761377F,  0.51618989973F, 
	-23.06335136300F, -7.56444618009F, -18.58286267201F, -14.29153721350F, 
	-12.23254945099F, -18.85924912598F, -4.96704163838F, -20.80393759084F, 
	 2.17702097689F, -20.06314087736F,  8.24308872235F, -16.96940540350F, 
	12.49942651189F, -12.18106122561F, 14.54297176530F, -6.56257043635F, 
	14.34599506909F, -1.03535967140F, 12.23909963288F,  3.57528292025F, 
	 8.83496760562F,  6.67139218210F,  4.90727151353F,  7.96987877323F, 
	 1.24660622731F,  7.53255324941F, -1.48110016359F,  5.73484708910F, 
	-2.84906427533F,  3.18012575616F, -2.73746489397F,  0.57585835698F, 
	-1.34348354326F, -1.40563602230F,  0.86724901545F, -2.25670659802F, 
	 3.25825309642F, -1.73097579211F,  5.15067677154F,  0.11011339955F, 
	 5.95909483008F,  2.90893432355F,  5.30986262156F,  6.07920969094F, 
	 3.12041700878F,  8.91716634203F, -0.37511072740F, 10.73622884063F, 
	-4.65904400860F, 11.00090562936F, -9.01667199346F,  9.43555195386F, 
	-12.66117079455F,  6.08801765612F, -14.87502986223F,  1.33605570461F, 
	-15.14294834786F, -4.16558974804F, -13.25241947325F, -9.58902930941F, 
	-9.34365511644F, -14.07055758977F, -3.89918693812F, -16.85794262063F, 
	 2.32608471438F, -17.44214393223F,  8.42324517529F, -15.65035232228F, 
	13.47645739127F, -11.68370205669F, 16.71395662158F, -6.09239632719F, 
	17.63720308170F,  0.30830328526F, 16.10597368947F,  6.56758899748F, 
	12.36454644406F, 11.75258988382F,  7.00409386972F, 15.10005660354F, 
	 0.86724901545F, 16.14064137319F, -5.08932431656F, 14.77471683372F, 
	-9.95133456648F, 11.28684492638F, -12.99594313472F,  6.29639756487F, 
	-13.80844062373F,  0.65266588709F, -12.34693338548F, -4.70778323457F, 
	-8.94429660514F, -8.91735198928F, -4.24732157827F, -11.32083887502F, 
	 0.89634292504F, -11.58187489862F,  5.58401121267F, -9.73456529311F, 
	 9.01159701952F, -6.17193144880F, 10.60889763728F, -1.57355783184F, 
	10.13361759695F,  3.21478634605F,  7.70839572267F,  7.32863899221F, 
	 3.79494221804F, 10.03401262633F, -0.88979274316F, 10.85265714761F, 
	-5.50057348811F,  9.64209052059F, -9.21178324433F,  6.61697296404F, 
	-11.36062800098F,  2.30858011511F, -11.56094952567F, -2.53017508332F, 
	-9.76817476469F, -7.05736057912F, -6.28448879576F, -10.48905638135F, 
	-1.70373035771F, -12.23520110183F,  3.19403463639F, -12.00072897317F, 
	 7.57961644023F, -9.83461633254F, 10.71941485773F, -6.11859533566F, 
	12.10245459360F, -1.49783314006F, 11.52763594757F,  3.23401648741F, 
	 9.13611655904F,  7.27506093326F,  5.38337529087F,  9.95602753764F, 
	 0.95607745168F, 10.85699978163F, -3.35147960889F,  9.87957006356F, 
	-6.77949207410F,  7.26179207572F, -8.73825025421F,  3.53336264540F, 
	-8.91325884062F, -0.58103831975F, -7.32125436972F, -4.29320080737F, 
	-4.30709677730F, -6.89443155292F, -0.48188290398F, -7.88489266489F, 
	 3.38703237887F, -7.06624814361F,  6.51491901186F, -4.58098002455F, 
	 8.24308872235F, -0.89101418938F,  8.16152847692F,  3.30109962721F, 
	 6.18889774805F,  7.17511901088F,  2.59532852208F,  9.93899678970F, 
	-2.03666626182F, 10.97238858083F, -6.90712938765F,  9.94263755482F, 
	-11.13363725962F,  6.87265055375F, -13.90343350429F,  2.14822783530F, 
	-14.61666171357F, -3.53724473534F, -12.99594313472F, -9.29206384499F, 
	-9.14311347664F, -14.17142377463F, -3.53282419775F, -17.33427223300F, 
	 3.05658966994F, -18.18534280872F,  9.66390167910F, -16.47825792373F, 
	15.29755563093F, -12.36207620161F, 19.09465638006F, -6.36315750089F, 
	20.45990235317F,  0.69488427682F, 19.16132578194F,  7.81993812256F, 
	15.36698626587F, 14.00747421335F,  9.61672188611F, 18.39801128994F, 
	 2.73399455355F, 20.40990841495F, -4.30709677730F, 19.82570710336F, 
	-10.53713182726F, 16.81821655743F, -15.14294834786F, 11.91280146608F, 
	-17.59031750822F,  5.89313154341F, -17.69772913369F, -0.33286814254F, 
	-15.64985348514F, -5.88358615953F, -11.94968118033F, -10.04503827165F, 
	-7.31885181798F, -12.37910694955F, -2.56445138189F, -12.78093027616F, 
	 1.56391688997F, -11.47672174131F,  4.50164153172F, -8.96378853919F, 
	 5.95909483008F, -5.90460060367F,  5.95889786138F, -2.99469224780F, 
	 4.81475321523F, -0.82857960716F,  3.05658966994F,  0.21200516249F, 
	 1.31632426612F,  0.02743470211F,  0.19554429290F, -1.18534467477F, 
	 0.13961841526F, -2.97569425957F,  1.34159910787F, -4.73165952702F, 
	 3.69397538767F, -5.80501145405F,  6.79780038814F, -5.64610661656F, 
	10.02844431644F, -3.92373321444F, 12.64700947206F, -0.60751843753F, 
	13.93808522992F,  4.00312415412F, 13.34949505449F,  9.31022940401F, 
	10.60889763728F, 14.50483338228F,  5.79571956198F, 18.69694719887F, 
	-0.64567829457F, 21.06632843944F, -7.95572432897F, 21.00836908743F, 
	-15.16555863786F, 18.24976280819F, -21.24267048139F, 12.91333589331F, 
	-25.25269201748F,  5.51974474456F, -26.51066773258F, -3.07574529900F, 
	-24.69651107565F, -11.80226690777F, -19.91505362408F, -19.52955018028F, 
	-12.69013737844F, -25.23633851297F, -3.89307101219F, -28.16383731253F, 
	 5.38337529087F, -27.92936518387F, 13.98526502291F, -24.58189846415F, 
	20.86629371711F, -18.59078493682F, 25.23801614358F, -10.76992496451F, 
	26.67767567917F, -2.15030892670F, 25.17702533219F,  6.17783271379F, 
	21.12547228415F, 13.22727291037F, 15.23184334638F, 18.25410544221F, 
	 8.39918693812F, 20.85392652466F,  1.57458194315F, 20.99948152295F, 
	-4.40035221924F, 19.01552349822F, -8.91325884062F, 15.49735289437F, 
	-11.65915240469F, 11.18896004545F, -12.66117079455F,  6.84325789431F, 
	-12.23254945099F,  3.08946379621F, -10.88873351584F,  0.33085751697F, 
	-9.22717798142F, -1.30973465182F, -7.79782005081F, -1.98824240885F, 
	-6.98851125468F, -2.08322578691F, -6.94666380192F, -2.09697281357F, 
	-7.55155033731F, -2.53319281146F, -8.44231484450F, -3.77489355078F, 
	-9.09647004214F, -5.98599865588F, -8.94429660514F, -9.05598565695F, 
	-7.49778492161F, -12.59905429632F, -4.46978285418F, -16.00943433650F, 
	 0.13961841526F, -18.56415566944F,  6.00692625496F, -19.55574918875F, 
	12.50808457540F, -18.43150045247F, 18.79868666321F, -14.91409743600F, 
	23.93966757381F, -9.08115226315F, 27.04822217794F, -1.38771974051F, 
	27.44873039731F,  7.37453194634F, 24.79780038814F, 16.17704512964F, 
	19.16132578194F, 23.89832933668F, 11.02908823091F, 29.48963506617F, 
	 1.26264786886F, 32.13570073717F, -9.01667199346F, 31.38426487605F, 
	-18.58286267201F, 27.22281276394F, -26.27922882053F, 20.08946193016F, 
	-31.18385712101F, 10.81557324661F, -32.74035723982F,  0.50880612929F, 
	-30.83329068367F, -9.60495996698F, -25.79673234452F, -18.35577576069F, 
	-18.35532976301F, -24.79232040326F, -9.50819247247F, -28.30774316025F, 
	-0.37511072740F, -28.70956648686F,  7.96956547265F, -26.22400387293F, 
	14.64852039111F, -21.43597814034F, 19.09465638006F, -15.17669242812F, 
	21.10893759298F, -8.37901766191F, 20.85566198839F, -1.92580782664F, 
	18.79868666321F,  3.48325053522F, 15.59209016083F,  7.42454036269F, 
	11.94621083992F,  9.78901178632F,  8.49369243250F, 10.76199518766F, 
	 5.67949714284F, 10.75050132579F,  3.69397538767F, 10.27337976007F, 
	 2.45990235317F,  9.83605423626F,  1.67437029919F,  9.81395623280F, 
	 0.89634292504F, 10.36683802357F, -0.33768066479F, 11.40022981470F, 
	-2.39260193879F, 12.58147477674F, -5.43201113587F, 13.40760516280F, 
	-9.35432016962F, 13.31262178475F, -13.78123984455F, 11.79423661499F, 
	-18.10260318836F,  8.53617948628F, -21.57120722054F,  3.50248067658F, 
	-23.43201113587F, -3.01530031739F, -23.06335136300F, -10.40889146614F, 
	-20.10501914990F, -17.82302743062F, -14.54963221626F, -24.27445650892F, 
	-6.77949207410F, -28.80164200473F,  2.45990235317F, -30.62066392709F, 
	12.14783776096F, -29.26106553200F, 21.12547228415F, -24.65811981115F, 
	28.26103091761F, -17.18479280357F, 32.61696026413F, -7.61642847572F, 
	33.59209016083F,  2.96776448273F, 31.01557371414F, 13.33185192611F, 
	25.17702533219F, 22.25622392791F, 16.78757424918F, 28.70943376318F, 
	 6.87776932914F, 31.99179488945F, -3.35147960889F, 31.82828298576F, 
	-12.70118395156F, 28.39658718353F, -20.14244921251F, 22.28676887094F, 
	-24.95416761377F, 14.40012467490F, -26.80919213630F,  5.80463463133F, 
	-25.79673234452F, -2.42883393014F, -22.37942831038F, -9.38272580495F, 
	-17.29438209852F, -14.41642461464F, -11.41651863590F, -17.23837086252F, 
	-5.60847939632F, -17.91687861956F, -0.58286267201F, -16.83050791852F, 
	 3.20021505746F, -14.56916241472F,  5.58401121267F, -11.80528463590F, 
	 6.70772488710F, -9.15921896490F,  6.94443873102F, -7.08322687535F, 
	 6.79780038814F, -5.78474028422F,  6.77798097310F, -5.20194863574F, 
	 7.28088369283F, -5.03507787540F,  8.49369243250F, -4.82646622220F, 
	10.34482428993F, -4.07358833593F, 12.50808457541F, -2.35310923835F, 
	14.46078862825F,  0.56806341682F, 15.58559355656F,  4.65653718408F, 
	15.29755563093F,  9.58663672058F, 13.17296450260F, 14.77163760692F, 
	 9.05570339486F, 19.44829050236F,  3.12041700878F, 22.80110111721F, 
	-4.12095150070F, 24.10530965205F, -11.87291368112F, 22.86360891273F, 
	-19.16355085285F, 18.91207527489F, -24.98851125468F, 12.47553063232F, 
	-28.46856947502F,  4.16082571945F, -28.99451646653F, -5.11306296409F, 
	-26.33470865715F, -14.23847600233F, -20.68641182428F, -22.07714956814F, 
	-12.66117079455F, -27.62786758514F, -3.20529003140F, -30.17664581738F, 
	 6.53271630069F, -29.40497137973F, 15.36698626587F, -25.43832111413F, 
	22.24533136736F, -18.82689821235F, 26.39918693812F, -10.46162167925F, 
	27.44873039731F, -1.43900298089F, 25.44683562795F,  7.10314319090F, 
	20.85566198839F, 14.15258338748F, 14.46078862825F, 18.96541138803F, 
	 7.23801614358F, 21.16222980992F,  0.19554429290F, 20.76336824742F, 
	-5.78207346220F, 18.15910084824F, -10.06259985043F, 14.02174669852F, 
	-12.34693338548F,  9.17615154060F, -12.69013737844F,  4.45172882214F, 
	-11.46119125079F,  0.54186440835F, -9.25053593434F, -2.10535157758F, 
	-6.74332924747F, -3.34705231691F, -4.58194259327F, -3.34716143396F, 
	-3.24267048139F, -2.52103104790F, -2.94867158694F, -1.43466034687F, 
	-3.63436098516F, -0.67795298616F, -4.96704163838F, -0.73591233817F, 
	-6.42116748894F, -1.88184473754F, -7.39110236272F, -4.11252853686F, 
	-7.32125436972F, -7.13764609341F, -5.82925325520F, -10.42592177004F, 
	-2.79896566925F, -13.30010004783F,  1.57458194315F, -15.06395255749F, 
	 6.79780038814F, -15.13850307427F, 12.14783776096F, -13.18267431788F, 
	16.78757424918F, -9.17595895833F, 19.90695690037F, -3.44710335634F, 
	20.86629371711F,  3.35792798537F, 19.31632426612F, 10.36487014331F, 
	15.27347672086F, 16.60309729884F,  9.13611655904F, 21.15899570843F, 
	 1.63753451757F, 23.32510834907F, -6.25779222084F, 22.71970306500F, 
	-13.49835846828F, 19.35609338460F, -19.10683253424F, 13.64930505191F, 
	-22.33178986700F,  6.35813266024F, -22.76482695929F, -1.52851153580F, 
	-20.40354355362F, -8.94264750028F, -15.64985348514F, -14.90102353129F, 
	-9.24386676040F, -18.65481762939F, -2.14434236692F, -19.80075002876F, 
	 4.62439013725F, -18.33559908200F, 10.13361759695F, -14.64563324683F, 
	13.69290322270F, -9.43340225795F, 14.95088160448F, -3.59480595362F, 
	13.93808522992F,  1.93240481133F, 11.04562292207F,  6.32294188792F, 
	 6.94443873102F,  8.99516433877F,  2.45990235317F,  9.69742056859F, 
	-1.57609304415F,  8.53574081149F, -4.46978285418F,  5.93927858569F, 
	-5.78207346220F,  2.57063943838F, -5.39727270335F, -0.80234296321F, 
	-3.53282419775F, -3.45033745783F, -0.68925110336F, -4.81626199730F, 
	 2.45003200658F, -4.61555464036F,  5.15067677154F, -2.88555288057F, 
	 6.76731591992F,  0.02435547530F,  6.86636274038F,  3.51965429166F, 
	 5.30975766327F,  6.87246490651F,  2.28469708198F,  9.35802752044F, 
	-1.72603482173F, 10.39141931157F, -6.02798930287F,  9.63998345045F, 
	-9.83847152308F,  7.09120521820F, -12.42766070187F,  3.06359749998F, 
	-13.25241947325F, -1.84181759137F, -12.05894276244F, -6.84137034175F, 
	-8.93574527727F, -11.10279310704F, -4.30709677730F, -13.89017813790F, 
	 1.13260800356F, -14.69448496456F,  6.53271630069F, -13.32658016561F, 
	11.02908823091F, -9.95616026132F, 13.89125735011F, -5.08920876512F, 
	14.64852039111F,  0.51273478185F, 13.17296450260F,  5.95810267969F, 
	 9.70473863468F, 10.37438856363F,  4.81475321523F, 13.05535516801F, 
	-0.68925110336F, 13.58108597392F, -5.89754540640F, 11.89013798547F, 
	-9.95133456648F,  8.29117864627F, -12.18772204488F,  3.41181871662F, 
	-12.25194050492F, -1.90688951218F, -10.15759273099F, -6.75248467010F, 
	-6.28448879576F, -10.29555330947F, -1.31431239140F, -11.93032519280F, 
	 3.88502561563F, -11.37744340203F,  8.40671048413F, -8.73137773103F, 
	11.45896617988F, -4.44438965344F, 12.49942651189F,  0.75021432483F, 
	11.32709430777F,  5.96244531371F,  8.11630556185F, 10.29640347494F, 
	 3.38703237887F, 13.00177710906F, -2.08326945397F, 13.60031611528F, 
	-7.39110236272F, 11.96586267726F, -11.65915240469F,  8.34451475940F, 
	-14.18332727244F,  3.31176767719F, -14.54963221626F, -2.32574358673F, 
	-12.70118395156F, -7.66684689691F, -8.94429660514F, -11.86725770154F, 
	-3.89307101219F, -14.27990253735F,  1.63753451758F, -14.56028437245F, 
	 6.77139535039F, -12.71919518079F, 10.71941485773F, -9.11426161578F, 
	12.91067568344F, -4.38241198831F, 13.08413606638F,  0.67446108814F, 
	11.32545721353F,  5.23035949773F,  8.04318310025F,  8.57782621745F, 
	 3.88908663855F, 10.24751346385F, -0.36279691830F, 10.08400156015F, 
	-3.95679280263F,  8.26497963779F, -6.29088109384F,  5.26090444077F, 
	-7.02272996601F,  1.74273383692F, -6.12777765891F, -1.54554183970F, 
	-3.89918693813F, -3.92666707020F, -0.88979274316F, -4.91712818216F, 
	 2.19355566805F, -4.31858917595F,  4.62439013725F, -2.25720786788F, 
	 5.79571956198F,  0.83652760598F,  5.33882920546F,  4.30428718929F, 
	 3.20021505746F,  7.37955050747F, -0.33768066479F,  9.32951047191F, 
	-4.69647407121F,  9.59418726064F, -9.09647004214F,  7.89793611930F, 
	-12.69013737843F,  4.31309515448F, -14.71165459413F, -0.73635101295F, 
	-14.61666171357F, -6.53291101546F, -12.18772204488F, -12.17664269324F, 
	-7.58661335783F, -16.73097917391F, -1.34348354326F, -19.37897366853F, 
	 5.71639747932F, -19.56354412891F, 12.59691086597F, -17.08774424152F, 
	18.28623832152F, -12.15764470502F, 21.91735565152F, -5.35996993881F, 
	22.90727151353F,  2.42242607219F, 21.05185465654F, 10.14371027923F, 
	16.56046297669F, 16.75513318102F, 10.02463172528F, 21.36577577267F, 
	 2.32608471438F, 23.37767289768F, -5.50057348811F, 22.57336607102F, 
	-12.42766070186F, 19.14198871410F, -17.59031750822F, 13.64034326145F, 
	-20.41301677969F,  6.89631910548F, -20.68641182428F, -0.12843664595F, 
	-18.58286267201F, -6.49307247732F, -14.60948898971F, -11.42323959184F, 
	-9.50819247246F, -14.42380838508F, -4.12095150070F, -15.34048567544F, 
	 0.75569580013F, -14.36130058956F,  4.50164153173F, -11.95945481931F, 
	 6.76731591992F, -8.78917945192F,  7.51539798019F, -5.55424764707F, 
	 7.00409386972F, -2.87328104269F,  5.71639747932F, -1.16619615770F, 
	 4.24933345299F, -0.58205161568F,  3.18422698349F, -0.98091317818F, 
	 2.96231768672F, -1.97250669749F,  3.78896826823F, -3.00411773166F, 
	 5.58450426228F, -3.48123929738F,  7.99127709895F, -2.89844764889F, 
	10.43635415561F, -0.95596873171F, 12.23909963288F,  2.36024604520F, 
	12.74460851910F,  6.75078312179F, 11.45896617988F, 11.63400156068F, 
	 8.16152847692F, 16.23237517764F,  2.97302029052F, 19.70013476095F, 
	-3.63436098516F, 21.27075993603F, -10.88873351584F, 20.39888276964F, 
	-17.82536644725F, 16.87156148800F, -23.43201113587F, 10.86863445778F, 
	-26.80919213629F,  2.96018934528F, -27.31888882242F, -5.96032414725F, 
	-24.69651107565F, -14.79793318789F, -19.10683253424F, -22.41412902853F, 
	-11.13363725962F, -27.79589391225F, -1.70373035771F, -30.20853874806F, 
	 8.04318310025F, -29.30756650406F, 16.91827420978F, -25.19138478194F, 
	23.85497640770F, -18.38635344023F, 28.06071541504F, -9.76673740243F, 
	29.12504483953F, -0.42276713134F, 27.06755420680F,  8.50160487046F, 
	22.31894899496F, 15.97493187803F, 15.63975318556F, 21.22186992494F, 
	 7.99127709895F, 23.82169100739F,  0.38110523233F, 23.74714049061F, 
	-6.29088109384F, 21.33929565489F, -11.36062800098F, 17.22489468974F, 
	-14.48185167616F, 12.19214760753F, -15.64985348514F,  7.04768939090F, 
	-15.16555863786F,  2.47997747842F, -13.54854132522F, -1.04734380322F, 
	-11.41651863590F, -3.35443608735F, -9.35432016962F, -4.54779780813F, 
	-7.79673234452F, -4.96780463516F, -6.94666380192F, -5.09263909368F, 
	-6.74332924747F, -5.41777165971F, -6.88581472569F, -6.33444895006F, 
	-6.90712938765F, -8.03070009141F, -6.28448879576F, -10.43418697714F, 
	-4.56477573474F, -13.20854061411F, -1.48110016359F, -15.80500283991F, 
	 2.96231768672F, -17.56096810736F,  8.45429541532F, -17.82820739338F, 
	14.39861345001F, -16.10772829580F, 19.99216337403F, -12.16643846833F, 
	24.34757741298F, -6.11338778042F, 26.64031233877F,  1.58004474221F, 
	26.25525368649F, 10.12219091400F, 22.90727151353F, 18.50081728631F, 
	16.71395662158F, 25.62587113205F,  8.20638895944F, 30.49282262825F, 
	-1.72603482173F, 32.34013223376F, -11.94968118033F, 30.77477855826F, 
	-21.24267048139F, 25.84461144375F, -28.46856947502F, 18.04476049463F, 
	-32.74035723982F,  8.25601784733F, -33.54857832966F, -2.37577271896F, 
	-30.83329068367F, -12.60062624710F, -24.98851125468F, -21.24035460894F, 
	-16.79882964420F, -27.35187580254F, -7.31885181798F, -30.35244459578F, 
	 2.28469708198F, -30.08776780705F, 10.90257465952F, -26.83349019072F, 
	17.63720308170F, -21.23154664375F, 21.91735565152F, -14.17350486604F, 
	23.55630675335F, -6.65147586655F, 22.74619086299F,  0.39796433003F, 
	19.99216337403F,  6.23090950288F, 16.00000000000F, 10.39230484541F, 
	11.53830100074F, 12.75677626905F,  7.30021572169F, 13.50965415532F, 
	 3.78896826823F, 13.07427348246F,  1.24660622731F, 12.00092155544F, 
	-0.36279691830F, 10.83924179834F, -1.31431239140F, 10.01838772939F, 
	-2.03666626183F,  9.75735170578F, -2.99748847417F, 10.02202849451F, 
	-4.58194259327F, 10.53677334121F, -6.98851125468F, 10.84804976353F, 
	-10.16254125946F, 10.42804293650F, -13.78123984455F,  8.79857033488F, 
	-17.29438209852F,  5.65160063803F, -20.01470710173F,  0.94292527730F, 
	-21.24267048139F, -5.06000175292F, -20.40354355362F, -11.78709278633F, 
	-17.17200996303F, -18.43251374841F, -11.56094952567F, -24.07002501233F, 
	-3.95679280263F, -27.79845444265F,  4.90727151353F, -28.89312213172F, 
	14.03836663557F, -26.93729337533F, 22.31894899496F, -21.91046084348F, 
	28.66894075679F, -14.21702832085F, 32.20905042495F, -4.64866399300F, 
	32.39861345001F,  5.71542345039F, 29.12504483953F, 15.65562408278F, 
	22.72965617183F, 23.98376572327F, 13.96487497771F, 29.71262132526F, 
	 3.88908663855F, 32.19622638604F, -6.28448879576F, 31.21879666797F, 
	-15.36099176094F, 27.01838586334F, -22.33178986700F, 20.24206743542F, 
	-26.51066773258F, 11.84056927562F, -27.61741322614F,  2.92005578308F, 
	-25.79673234452F, -5.42450021025F, -21.57120722054F, -12.26730465320F, 
	-15.73788197971F, -16.97598001392F, -9.22717798142F, -19.28307229805F, 
	-2.94867158694F, -19.29507993975F,  2.35014651486F, -17.43999423631F, 
	 6.18889774806F, -14.36473091813F,  8.40671048413F, -10.80209707382F, 
	 9.15509404746F, -7.43167716953F,  8.83496760562F, -4.75945471868F, 
	 7.99127709895F, -3.03708131656F,  7.18589081227F, -2.23418415301F, 
	 6.87297385366F, -2.06731339267F,  7.30021572169F, -2.07880725454F, 
	 8.45429541532F, -1.74981617926F, 10.06071541504F, -0.62556744299F, 
	11.63808935678F,  1.57125097890F, 12.59691086597F,  4.86096868067F, 
	12.36454644406F,  8.97715040279F, 10.51315669322F, 13.39343628673F, 
	 6.86636274038F, 17.40358906683F,  1.56391688997F, 20.24154571793F, 
	-4.92917259054F, 21.22073080380F, -11.87291368112F, 19.86794263261F, 
	-18.35532976301F, 16.02749642664F, -23.43201113587F,  9.91597523304F, 
	-26.27922882053F,  2.11612428393F, -26.33470865715F, -6.49126428429F, 
	-23.40169947028F, -14.84796232012F, -17.69772913369F, -21.87271807155F, 
	-9.83847152308F, -26.62468002306F, -0.75792087104F, -28.44910402201F, 
	 8.42324517530F, -27.08119922306F, 16.56046297669F, -22.69066214647F, 
	22.65324120653F, -15.85913372962F, 25.99127709895F, -7.49385719652F, 
	26.25525368649F,  1.30865598678F, 23.55630675335F,  9.42691534757F, 
	18.40829282803F, 15.88012518285F, 11.63808935678F, 19.96859895011F, 
	 4.24933345299F, 21.36666130651F, -2.73746489396F, 20.15388192963F, 
	-8.44188127159F, 16.78089952805F, -12.25194050492F, 11.97704526299F, 
	-13.90343350429F,  6.61659614132F, -13.49835846828F,  1.56714997389F, 
	-11.46119125079F, -2.45380187177F, -8.44231484450F, -4.98993042583F, 
	-5.18682912866F, -5.90660771619F, -2.39260193879F, -5.39186286949F, 
	-0.58286267201F, -3.89923236809F, -0.01566240007F, -2.04414666466F, 
	-0.64567829457F, -0.47352148957F, -2.14434236692F,  0.26727522391F, 
	-3.97379832858F, -0.15430294217F, -5.50057348811F, -1.78875638019F, 
	-6.12777765891F, -4.38998712575F, -5.42134341602F, -7.45815728731F, 
	-3.20687550842F, -10.33233556510F,  0.38110523234F, -12.31629358983F, 
	 4.90727151353F, -12.81473091760F,  9.70046860060F, -11.45513252251F, 
	13.96487497771F, -8.17277139625F, 16.91827420978F, -3.24267185975F, 
	17.93328453025F,  2.74844166758F, 16.65651645674F,  8.98666882312F, 
	13.08413606638F, 14.55839586331F,  7.57961644023F, 18.59944030916F, 
	 0.82931342774F, 20.44052950082F, -6.25779222084F, 19.72403678488F, 
	-12.69013737844F, 16.47151453635F, -17.55033241543F, 11.08974965263F, 
	-20.14244921251F,  4.31343122471F, -20.10501914990F, -2.90671285599F, 
	-17.47053436675F, -9.55213381807F, -12.66117079455F, -14.69659203470F, 
	-6.42116748894F, -17.65163006731F,  0.30302679344F, -18.07320823339F, 
	 6.51491901186F, -16.01182692533F, 11.32709430777F, -11.89797427917F, 
	14.10081306188F, -6.46563777522F, 14.54297176530F, -0.62704147090F, 
	12.74460851910F,  4.68006377899F,  9.15509404746F,  8.64671404459F, 
	 4.49706957065F, 10.72270613413F, -0.36279691830F, 10.70060813067F, 
	-4.56477573474F,  8.74017230808F, -7.40279204105F,  5.32979226791F, 
	-8.44188127159F,  1.19243811818F, -7.58661335783F, -2.84704439874F, 
	-5.08932431656F, -6.00989285710F, -1.49747219320F, -7.70084084555F, 
	 2.45003200658F, -7.61122092048F,  5.95889786138F, -5.77013172882F, 
	 8.32381603873F, -2.53519992397F,  9.05570339486F,  1.47495285613F, 
	 7.96956547265F,  5.49426358631F,  5.21770626885F,  8.74854120265F, 
	 1.26264786886F, 10.59585080816F, -3.20529003141F, 10.64317101253F, 
	-7.39110236272F,  8.81874701357F, -10.53713182726F,  5.38736965665F, 
	-12.05894276244F,  0.90584137629F, -11.65103292326F, -3.87360585902F, 
	-9.34365511644F, -8.13502862431F, -5.50057348811F, -11.14251917024F, 
	-0.75792087104F, -12.37071280789F,  4.08534714033F, -11.59903837024F, 
	 8.20638895944F, -8.95297269924F, 10.90257465952F, -4.88477726853F, 
	11.71551120424F, -0.09675153594F, 10.51315669322F,  4.57990135950F, 
	 7.51539798019F,  8.32968712810F,  3.25825309642F, 10.49579976873F, 
	-1.49747219320F, 10.69650712567F, -5.89754540640F,  8.89447170536F, 
	-9.14311347664F,  5.40659979802F, -10.63122192607F,  0.85226331735F, 
	-10.06259985043F, -3.95159094771F, -7.49778492161F, -8.13068599029F, 
	-3.35147960889F, -10.90503962726F,  1.67437029919F, -11.72589369621F, 
	 6.70772488710F, -10.37425583995F, 10.85407964449F, -7.00383593566F, 
	13.34949505449F, -2.12061749677F, 13.69290322270F,  3.49787329249F, 
	11.73500414694F,  8.93020979644F,  7.70839572267F, 13.26416795766F, 
	 2.19355566805F, 15.74943607672F, -3.97379832858F, 15.92408827195F, 
	-9.83847152308F, 13.69340447262F, -14.48185167615F,  9.34770232148F, 
	-17.17200996303F,  3.51619917378F, -17.48264140313F, -2.93522990452F, 
	-15.36099176094F, -9.04504821711F, -11.13363725962F, -13.91195913707F, 
	-5.44957113100F, -16.83945793663F,  0.82931342774F, -17.44486322070F, 
	 6.77139535039F, -15.71486146091F, 11.52763594757F, -11.99884046403F, 
	14.46717580225F, -6.94196738759F, 15.27347672086F, -1.37024034739F, 
	13.98526502291F,  3.85215817754F, 10.97619228712F,  7.96833989966F, 
	 6.87776932914F, 10.45194496044F,  2.45990235317F, 11.08718912223F, 
	-1.50942364227F,  9.99252143316F, -4.40035221924F,  7.58467659744F, 
	-5.82925325520F,  4.49039280459F, -5.71986781974F,  1.42222264302F, 
	-4.30709677730F, -0.95890258747F, -2.08326945397F, -2.16946921450F, 
	 0.30302679344F, -1.99481701928F,  2.17702097689F, -0.52966607251F, 
	 2.97302029052F,  1.83971516806F,  2.35014651487F,  4.50871868588F, 
	 0.26720587060F,  6.77006418968F, -2.99748847417F,  7.95130915172F, 
	-6.88581472569F,  7.54948582511F, -10.65297016095F,  5.33838072002F, 
	-13.49835846827F,  1.42851630623F, -14.71165459413F, -3.73201729307F, 
	-13.80844062373F, -9.41748986371F, -10.63122192607F, -14.73619809252F, 
	-5.39727270335F, -18.77568060944F,  1.31632426612F, -20.75717498872F, 
	 8.64940666619F, -20.17303044670F, 15.58559355656F, -16.88331274493F, 
	21.10893759298F, -11.15445714294F, 24.36472481188F, -3.63242814345F, 
	24.79780038813F,  4.74619822886F, 22.24533136736F, 12.89136924689F, 
	16.96837281586F, 19.72289766374F,  9.61672188611F, 24.33354025539F, 
	 1.13260800356F, 26.12533186534F, -7.39110236272F, 24.89713822769F, 
	-14.87502986223F, 20.86953050947F, -20.41301677969F, 14.64353082353F, 
	-23.40169947028F,  7.10075060208F, -23.61942101115F, -0.73792296373F, 
	-21.24267048139F, -7.87127379752F, -16.79882964420F, -13.46794102737F, 
	-11.06469259128F, -16.98336378436F, -4.92917259054F, -18.22506452369F, 
	 0.75569580013F, -17.35696686968F,  5.30986262157F, -14.84403366756F, 
	 8.32381603873F, -11.34873485120F,  9.70473863468F, -7.59894908260F, 
	 9.66390167910F, -4.25148236288F,  8.64940666619F, -1.77568247549F, 
	 7.23801614358F, -0.37762011909F,  6.00692625496F,  0.02227438390F, 
	 5.40968684708F, -0.24496490213F,  5.67949714284F, -0.68034557499F, 
	 6.77798097309F, -0.73358032971F,  8.39918693812F,  0.06931683383F, 
	10.02844431643F,  2.01179575102F, 11.04562292207F,  5.10790501286F, 
	10.85407964449F,  9.07455527846F,  9.01159701952F, 13.36154335605F, 
	 5.33882920545F, 17.23556273972F, -0.01566240007F, 19.90456625754F, 
	-6.56737017203F, 20.66127361824F, -13.54854132522F, 19.02068144945F, 
	-20.01470710173F, 14.82686005247F, -24.98851125468F,  8.30907905850F, 
	-27.61741322613F,  0.07561049703F, -27.31888882242F, -8.95599042737F, 
	-23.88828998581F, -17.68251203614F, -17.55033241543F, -24.97368442781F, 
	-8.94429660514F, -29.84059534777F,  0.95607745168F, -31.58674006825F, 
	10.97619228712F, -29.91705282185F, 19.90695690037F, -24.98695328535F, 
	26.67767567917F, -17.38316587815F, 30.50808457540F, -8.03919560706F, 
	31.01557371414F,  1.90100502533F, 28.26103091761F, 11.24926383812F, 
	22.72685883413F, 18.94269636076F, 15.23184334638F, 24.18963440767F, 
	 6.79780038814F, 26.56934997505F, -1.50942364227F, 26.07091264728F, 
	-8.73825025421F, 23.06683745026F, -14.18332727244F, 18.22808225182F, 
	-17.47053436675F, 12.39657910412F, -18.58286267201F,  6.43820307311F, 
	-17.82536644725F,  1.10177615823F, -15.73788197971F, -3.09204523875F, 
	-12.97301875471F, -5.91399148663F, -10.16254125946F, -7.43237665638F, 
	-7.79673234452F, -7.96347091528F, -6.13844271208F, -7.97721794193F, 
	-5.18682912866F, -7.97732705898F, -4.69647407121F, -8.37915038559F, 
	-4.24732157827F, -9.40890141160F, -3.35147960889F, -11.04367329493F, 
	-1.57609304415F, -13.00410911752F,  1.34159910787F, -14.80181527783F, 
	 5.40968684708F, -15.83342631199F, 10.34482428993F, -15.50443523671F, 
	15.59209016083F, -13.36006932814F, 20.40007321320F, -9.19867398561F, 
	23.93966757381F, -3.14562329770F, 25.44683562795F,  4.32770370988F, 
	24.36472481188F, 12.44596307067F, 20.45990235317F, 20.22835908167F, 
	13.89125735011F, 26.62905869413F,  5.21770626885F, 30.69725412484F, 
	-4.65904400860F, 31.73064591597F, -14.60948898971F, 29.39657723807F, 
	-23.43201113587F, 23.79991000822F, -30.02506959383F, 15.48520509535F, 
	-33.54857832966F,  5.37143899908F, -33.54857832966F, -5.37143899908F, 
	-30.02506959383F, -15.48520509535F, -23.43201113587F, -23.79991000822F, 
	-14.60948898971F, -29.39657723807F, -4.65904400860F, -31.73064591598F, 
	 5.21770626885F, -30.69725412484F, 13.89125735011F, -26.62905869413F, 
	20.45990235317F, -20.22835908167F, 24.36472481189F, -12.44596307067F, 
	25.44683562795F, -4.32770370988F, 23.93966757381F,  3.14562329770F, 
	20.40007321320F,  9.19867398561F, 15.59209016083F, 13.36006932814F, 
	10.34482428993F, 15.50443523671F,  5.40968684708F, 15.83342631199F, 
	 1.34159910787F, 14.80181527783F, -1.57609304415F, 13.00410911752F, 
	-3.35147960889F, 11.04367329493F, -4.24732157827F,  9.40890141160F, 
	-4.69647407121F,  8.37915038559F, -5.18682912866F,  7.97732705898F, 
	-6.13844271209F,  7.97721794193F, -7.79673234452F,  7.96347091527F, 
	-10.16254125946F,  7.43237665638F, -12.97301875471F,  5.91399148663F, 
	-15.73788197971F,  3.09204523875F, -17.82536644725F, -1.10177615823F, 
	-18.58286267200F, -6.43820307311F, -17.47053436675F, -12.39657910412F, 
	-14.18332727244F, -18.22808225182F, -8.73825025421F, -23.06683745025F, 
	-1.50942364227F, -26.07091264728F,  6.79780038814F, -26.56934997505F, 
	15.23184334638F, -24.18963440767F, 22.72685883414F, -18.94269636076F, 
	28.26103091761F, -11.24926383812F, 31.01557371414F, -1.90100502533F, 
	30.50808457541F,  8.03919560706F, 26.67767567917F, 17.38316587815F, 
	19.90695690037F, 24.98695328535F, 10.97619228712F, 29.91705282185F, 
	 0.95607745168F, 31.58674006825F, -8.94429660514F, 29.84059534778F, 
	-17.55033241543F, 24.97368442781F, -23.88828998581F, 17.68251203614F, 
	-27.31888882242F,  8.95599042737F, -27.61741322614F, -0.07561049703F, 
	-24.98851125469F, -8.30907905850F, -20.01470710173F, -14.82686005248F, 
	-13.54854132522F, -19.02068144945F, -6.56737017203F, -20.66127361824F, 
	-0.01566240007F, -19.90456625754F,  5.33882920545F, -17.23556273972F, 
	 9.01159701952F, -13.36154335605F, 10.85407964450F, -9.07455527846F, 
	11.04562292207F, -5.10790501286F, 10.02844431644F, -2.01179575102F, 
	 8.39918693813F, -0.06931683383F,  6.77798097310F,  0.73358032972F, 
	 5.67949714284F,  0.68034557499F,  5.40968684708F,  0.24496490213F, 
	 6.00692625496F, -0.02227438390F,  7.23801614358F,  0.37762011909F, 
	 8.64940666619F,  1.77568247549F,  9.66390167910F,  4.25148236288F, 
	 9.70473863468F,  7.59894908260F,  8.32381603873F, 11.34873485120F, 
	 5.30986262156F, 14.84403366756F,  0.75569580013F, 17.35696686968F, 
	-4.92917259054F, 18.22506452369F, -11.06469259128F, 16.98336378436F, 
	-16.79882964420F, 13.46794102737F, -21.24267048139F,  7.87127379752F, 
	-23.61942101115F,  0.73792296373F, -23.40169947028F, -7.10075060208F, 
	-20.41301677969F, -14.64353082353F, -14.87502986223F, -20.86953050947F, 
	-7.39110236272F, -24.89713822769F,  1.13260800356F, -26.12533186534F, 
	 9.61672188611F, -24.33354025540F, 16.96837281586F, -19.72289766375F, 
	22.24533136736F, -12.89136924689F, 24.79780038814F, -4.74619822886F, 
	24.36472481189F,  3.63242814345F, 21.10893759299F, 11.15445714294F, 
	15.58559355656F, 16.88331274493F,  8.64940666619F, 20.17303044670F, 
	 1.31632426612F, 20.75717498872F, -5.39727270335F, 18.77568060944F, 
	-10.63122192607F, 14.73619809252F, -13.80844062373F,  9.41748986371F, 
	-14.71165459413F,  3.73201729307F, -13.49835846828F, -1.42851630622F, 
	-10.65297016095F, -5.33838072002F, -6.88581472569F, -7.54948582511F, 
	-2.99748847417F, -7.95130915172F,  0.26720587059F, -6.77006418968F, 
	 2.35014651486F, -4.50871868588F,  2.97302029052F, -1.83971516807F, 
	 2.17702097689F,  0.52966607251F,  0.30302679345F,  1.99481701927F, 
	-2.08326945397F,  2.16946921450F, -4.30709677730F,  0.95890258747F, 
	-5.71986781973F, -1.42222264302F, -5.82925325519F, -4.49039280459F, 
	-4.40035221924F, -7.58467659744F, -1.50942364227F, -9.99252143316F, 
	 2.45990235317F, -11.08718912223F,  6.87776932914F, -10.45194496044F, 
	10.97619228712F, -7.96833989966F, 13.98526502291F, -3.85215817754F, 
	15.27347672086F,  1.37024034739F, 14.46717580225F,  6.94196738759F, 
	11.52763594757F, 11.99884046403F,  6.77139535039F, 15.71486146091F, 
	 0.82931342774F, 17.44486322070F, -5.44957113100F, 16.83945793663F, 
	-11.13363725962F, 13.91195913707F, -15.36099176094F,  9.04504821711F, 
	-17.48264140313F,  2.93522990452F, -17.17200996303F, -3.51619917378F, 
	-14.48185167616F, -9.34770232148F, -9.83847152308F, -13.69340447262F, 
	-3.97379832858F, -15.92408827195F,  2.19355566805F, -15.74943607673F, 
	 7.70839572267F, -13.26416795767F, 11.73500414694F, -8.93020979644F, 
	13.69290322270F, -3.49787329249F, 13.34949505449F,  2.12061749676F, 
	10.85407964450F,  7.00383593566F,  6.70772488710F, 10.37425583995F, 
	 1.67437029919F, 11.72589369621F, -3.35147960888F, 10.90503962726F, 
	-7.49778492161F,  8.13068599030F, -10.06259985043F,  3.95159094771F, 
	-10.63122192607F, -0.85226331734F, -9.14311347664F, -5.40659979801F, 
	-5.89754540640F, -8.89447170535F, -1.49747219320F, -10.69650712566F, 
	 3.25825309642F, -10.49579976873F,  7.51539798019F, -8.32968712810F, 
	10.51315669322F, -4.57990135950F, 11.71551120424F,  0.09675153594F, 
	10.90257465952F,  4.88477726852F,  8.20638895944F,  8.95297269924F, 
	 4.08534714033F, 11.59903837024F, -0.75792087104F, 12.37071280789F, 
	-5.50057348811F, 11.14251917024F, -9.34365511644F,  8.13502862431F, 
	-11.65103292326F,  3.87360585902F, -12.05894276244F, -0.90584137629F, 
	-10.53713182726F, -5.38736965665F, -7.39110236272F, -8.81874701357F, 
	-3.20529003140F, -10.64317101253F,  1.26264786886F, -10.59585080816F, 
	 5.21770626885F, -8.74854120265F,  7.96956547265F, -5.49426358631F, 
	 9.05570339486F, -1.47495285613F,  8.32381603873F,  2.53519992397F, 
	 5.95889786138F,  5.77013172882F,  2.45003200658F,  7.61122092048F, 
}; 


// End of File
