//#############################################################################
//! \file icfft4Input.c
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
	 2.80820250803F,  2.88115711748F,  2.84995568555F,  2.92616697333F, 
	 2.89323452943F,  2.97262695853F,  2.93812036614F,  3.02061210811F, 
	 2.98470033478F,  3.07020277382F,  3.03306791403F,  3.12148510482F, 
	 3.08332350729F,  3.17455158168F,  3.13557509387F,  3.22950161045F, 
	 3.18993895497F,  3.28644218497F,  3.24654048474F,  3.34548862673F, 
	 3.30551509817F,  3.40676541308F,  3.36700924975F,  3.47040710634F, 
	 3.43118157877F,  3.53655939847F,  3.49820420018F,  3.60538028841F, 
	 3.56826416303F,  3.67704141217F,  3.64156510229F,  3.75172954932F, 
	 3.71832911491F,  3.82964833382F,  3.79879889613F,  3.91102020217F, 
	 3.88324017940F,  3.99608861840F,  3.97194453135F,  4.08512062266F, 
	 4.06523256359F,  4.17840975986F,  4.16345763574F,  4.27627945622F, 
	 4.26701013961F,  4.37908692549F,  4.37632247376F,  4.48722770468F, 
	 4.49187484182F,  4.60114094076F,  4.61420203829F,  4.72131557749F, 
	 4.74390142365F,  4.84829762662F,  4.88164233926F,  4.98269875154F, 
	 5.02817727481F,  5.12520644874F,  5.18435518102F,  5.27659618480F, 
	 5.35113742417F,  5.43774594192F,  5.52961701522F,  5.60965374855F, 
	 5.72104192513F,  5.79345893522F,  5.92684353679F,  5.99046807291F, 
	 6.14867160398F,  6.20218684352F,  6.38843752239F,  6.43035948781F, 
	 6.64836831356F,  6.67701801942F,  6.93107454908F,  6.94454414722F, 
	 7.23963660379F,  7.23574790679F,  7.57771527980F,  7.55396850893F, 
	 7.94969523210F,  7.90320509067F,  8.36087313268F,  8.28828825106F, 
	 8.81770774686F,  8.71510802732F,  9.32815706736F,  9.19092123470F, 
	 9.90214004156F,  9.72477238812F, 10.55218013771F, 10.32808039196F, 
	11.29432016672F, 11.01547251201F, 12.14945182361F, 11.80599641449F, 
	13.14529721604F, 12.72492656982F, 14.31944859202F, 13.80653533252F, 
	15.72418997749F, 15.09848844664F, 17.43445134359F, 16.66909622946F, 
	19.56155795384F, 18.61984775972F, 22.27838160996F, 21.10833926998F, 
	25.86869404124F, 24.39326570816F, 30.83308260683F, 28.93097566041F, 
	38.14491324505F, 35.60881241341F, 49.98098834972F, 46.41119662095F, 
	72.41344421342F, 66.87361507244F, 131.17657891758F, 120.45598347426F, 
	689.48779146530F, 629.43676012138F, -212.41884768043F, -192.74675538293F, 
	-92.17316589512F, -83.11513904964F, -58.91928602661F, -52.78685461263F, 
	-43.33570280342F, -38.56699633678F, -34.29674450943F, -30.31317051010F, 
	-28.39659495877F, -24.92056150354F, -24.24331337343F, -21.12024358482F, 
	-21.16202072107F, -18.29697905656F, -18.78583768918F, -16.11630894271F, 
	-16.89817402633F, -14.38078072189F, -15.36292218660F, -12.96631142120F, 
	-14.09025221706F, -11.79100553104F, -13.01848462589F, -10.79862993579F, 
	-12.10386482238F, -9.94929207871F, -11.31449296527F, -9.21390628189F, 
	-10.62656409420F, -8.57076616715F, -10.02195389971F, -8.00334378848F, 
	-9.48661989703F, -7.49883210273F, -9.00951382461F, -7.04715348313F, 
	-8.58182420899F, -6.64026921867F, -8.19643779328F, -6.27168853388F, 
	-7.84754943833F, -5.93611295881F, -7.53037484207F, -5.62917442983F, 
	-7.24093579161F, -5.34723951246F, -6.97589744618F, -5.08726105594F, 
	-6.73244351453F, -4.84666439295F, -6.50817941623F, -4.62325904929F, 
	-6.30105637160F, -4.41516953224F, -6.10931132731F, -4.22078055431F, 
	-5.93141899358F, -4.03869329769F, -5.76605323725F, -3.86769020707F, 
	-5.61205576913F, -3.70670643140F, -5.46841056725F, -3.55480649396F, 
	-5.33422284714F, -3.41116510675F, -5.20870166353F, -3.27505129471F, 
	-5.09114543290F, -3.14581518172F, -4.98092982099F, -3.02287693168F, 
	-4.87749755682F, -2.90571744485F, -4.78034982572F, -2.79387049270F, 
	-4.68903896337F, -2.68691603764F, -4.60316222769F, -2.58447453421F, 
	-4.52235646811F, -2.48620204715F, -4.44629354544F, -2.39178605232F, 
	-4.37467638253F, -2.30094181134F, -4.30723554725F, -2.21340922994F, 
	-4.24372628652F, -2.12895012592F, -4.18392594425F, -2.04734584530F, 
	-4.12763170697F, -1.96839517543F, -4.07465863047F, -1.89191251219F, 
	-4.02483790816F, -1.81772624549F, -3.97801534813F, -1.74567733263F, 
	-3.93405003084F, -1.67561803399F, -3.89281312402F, -1.60741078922F, 
	-3.85418683447F, -1.54092721549F, -3.81806347965F, -1.47604721178F, 
	-3.78434466453F, -1.41265815582F, -3.75294055093F, -1.35065418173F, 
	-3.72376920876F, -1.28993552851F, -3.69675603982F, -1.23040795033F, 
	-3.67183326614F, -1.17198218121F, -3.64893947604F, -1.11457344738F, 
	-3.62801922188F, -1.05810102135F, -3.60902266448F, -1.00248781280F, 
	-3.59190525975F, -0.94765999151F, -3.57662748362F, -0.89354663851F, 
	-3.56315459219F, -0.84007942172F, -3.55145641416F, -0.78719229293F, 
	-3.54150717324F, -0.73482120319F, -3.53328533845F, -0.68290383399F, 
	-3.52677350086F, -0.63137934179F, -3.52195827514F, -0.58018811369F, 
	-3.51883022513F, -0.52927153209F, -3.51738381243F, -0.47857174652F, 
	-3.51761736762F, -0.42803145055F, -3.51953308372F, -0.37759366222F, 
	-3.52313703188F, -0.32720150600F, -3.52843919950F, -0.27679799465F, 
	-3.53545355114F, -0.22632580920F, -3.54419811298F, -0.17572707522F, 
	-3.55469508175F, -0.12494313351F, -3.56697095925F, -0.07391430336F, 
	-3.58105671417F, -0.02257963621F, -3.59698797286F,  0.02912334248F, 
	-3.61480524138F,  0.08125890542F, -3.63455416146F,  0.13389341252F, 
	-3.65628580331F,  0.18709561949F, -3.68005699902F,  0.24093700928F, 
	-3.70593072060F,  0.29549214988F, -3.73397650763F,  0.35083908249F, 
	-3.76427094995F,  0.40705974460F, -3.79689823220F,  0.46424043308F, 
	-3.83195074744F,  0.52247231320F, -3.86952978892F,  0.58185198023F, 
	-3.90974633005F,  0.64248208141F, -3.95272190464F,  0.70447200721F, 
	-3.99858960107F,  0.76793866223F, -4.04749518701F,  0.83300732775F, 
	-4.09959838339F,  0.89981263017F, -4.15507431043F,  0.96849963169F, 
	-4.21411513201F,  1.03922506267F, -4.27693192984F,  1.11215871886F, 
	-4.34375684467F,  1.18748505037F, -4.41484552896F,  1.26540497511F, 
	-4.49047996421F,  1.34613795531F, -4.57097170668F,  1.42992438355F, 
	-4.65666563874F,  1.51702833464F, -4.74794431904F,  1.60774075107F, 
	-4.84523304530F,  1.70238314474F, -4.94900576880F,  1.80131191635F, 
	-5.05979203172F,  1.90492341654F, -5.17818513882F,  2.01365990286F, 
	-5.30485182691F,  2.12801658379F, -5.44054376151F,  2.24854998929F, 
	-5.58611127569F,  2.37588796951F, -5.74251987790F,  2.51074170436F, 
	-5.91087020127F,  2.65392021265F, -6.09242226119F,  2.80634799059F, 
	-6.28862514590F,  2.96908659689F, -6.50115361436F,  3.14336125557F, 
	-6.73195355067F,  3.33059389283F, -6.98329887988F,  3.53244450046F, 
	-7.25786346388F,  3.75086338237F, -7.55881278731F,  3.98815777880F, 
	-7.88992209353F,  4.24707770726F, -8.25573032150F,  4.53092781368F, 
	-8.66174317361F,  4.84371491897F, -9.11470463547F,  5.19034529836F, 
	-9.62296546914F,  5.57689241567F, -10.19699164276F,  6.01096632692F, 
	-10.85007888238F,  6.50223284013F, -11.59937790071F,  7.06315839482F, 
	-12.46740020414F,  7.71010410163F, -13.48428956666F,  8.46497607128F, 
	-14.69135543603F,  9.35779259071F, -16.14676965250F, 10.43082303737F, 
	-17.93514729648F, 11.74554877829F, -20.18449742185F, 13.39497860409F, 
	-23.09813032182F, 15.52683071983F, -27.01957231452F, 18.39069610244F, 
	-32.57862401463F, 22.44415605134F, -41.06803693323F, 28.62645376216F, 
	-55.62735422644F, 39.21860498134F, -86.37288728160F, 61.57054416790F, 
	-194.00251671972F, 139.78186685089F, 774.74353674751F, -564.03969867003F, 
	128.92579575735F, -94.81217811607F, 70.22201854289F, -52.14809222052F, 
	48.21276822083F, -36.14430835770F, 36.68759738541F, -27.75781841371F, 
	29.59794278843F, -22.59408065041F, 24.79754129848F, -19.09374040910F, 
	21.33249922889F, -16.56375022653F, 18.71423776846F, -14.64913376723F, 
	16.66660443659F, -13.14925153831F, 15.02174250694F, -11.94214559458F, 
	13.67174466917F, -10.94941386538F, 12.54408357901F, -10.11835940186F, 
	11.58821034073F, -9.41225360237F, 10.76781560323F, -8.80471356735F, 
	10.05614548700F, -8.27629891905F,  9.43305235350F, -7.81236905797F, 
	 8.88307437618F, -7.40168788760F,  8.39414822042F, -7.03548851974F, 
	 7.95672401120F, -6.70683025912F,  7.56314318204F, -6.41014658239F, 
	 7.20719240462F, -6.14092104735F,  6.88377807829F, -5.89545079409F, 
	 6.58868500340F, -5.67067120941F,  6.31839488808F, -5.46402406267F, 
	 6.06994806774F, -5.27335703773F,  5.84083689206F, -5.09684627265F, 
	 5.62892262977F, -4.93293598609F,  5.43237005334F, -4.78029094904F, 
	 5.24959546537F, -4.63775872248F,  5.07922505093F, -4.50433939740F, 
	 4.92006123924F, -4.37916115390F,  4.77105533344F, -4.26146037446F, 
	 4.63128508687F, -4.15056535105F,  4.49993621350F, -4.04588285056F, 
	 4.37628704999F, -3.94688697015F,  4.25969576008F, -3.85310983973F, 
	 4.14958960292F, -3.76413382387F,  4.04545588695F, -3.67958494862F, 
	 3.94683430858F, -3.59912733421F,  3.85331043430F, -3.52245845878F, 
	 3.76451013222F, -3.44930511168F,  3.68009479518F, -3.37941992216F, 
	 3.59975722758F, -3.31257837010F,  3.52321809042F, -3.24857620248F, 
	 3.45022281846F, -3.18722719277F,  3.38053893763F, -3.12836119127F, 
	 3.31395372364F, -3.07182242321F,  3.25027215197F, -3.01746799871F, 
	 3.18931509794F, -2.96516660440F,  3.13091775199F, -2.91479735142F, 
	1027.07492822057F, -2.86624875820F,  3.02120628816F, -2.81941785089F, 
	 2.96962231862F, -2.77420936353F,  2.92005627825F, -2.73053502886F, 
	 2.87239686530F, -2.68831294470F,  2.82654073220F, -2.64746700846F, 
	 2.78239178949F, -2.60792641093F,  2.73986058154F, -2.56962518220F, 
	 2.69886372551F, -2.53250178357F,  2.65932340631F, -2.49649874016F, 
	 2.62116692107F, -2.46156230946F,  2.58432626754F, -2.42764218192F, 
	 2.54873777164F, -2.39469120981F,  2.51434174979F, -2.36266516159F, 
	 2.48108220234F, -2.33152249870F,  2.44890653483F, -2.30122417265F, 
	 2.41776530411F, -2.27173344025F,  2.38761198683F, -2.24301569496F, 
	 2.35840276803F, -2.21503831298F,  2.33009634776F, -2.18777051239F, 
	 2.30265376411F, -2.16118322423F,  2.27603823082F, -2.13524897421F, 
	 2.25021498833F, -2.10994177412F,  2.22515116682F, -2.08523702208F, 
	 2.20081566023F, -2.06111141063F,  2.17717901014F, -2.03754284215F, 
	 2.15421329880F, -2.01451035078F,  2.13189205023F, -1.99199403034F, 
	 2.11019013896F, -1.96997496771F,  2.08908370550F, -1.94843518119F, 
	 2.06855007813F, -1.92735756341F,  2.04856770038F, -1.90672582835F, 
	 2.02911606373F, -1.88652446226F,  2.01017564517F, -1.86673867802F, 
	 1.99172784908F, -1.84735437268F,  1.97375495323F, -1.82835808803F, 
	 1.95624005849F, -1.80973697382F,  1.93916704194F, -1.79147875346F, 
	 1.92252051315F, -1.77357169208F,  1.90628577338F, -1.75600456669F, 
	 1.89044877748F, -1.73876663827F,  1.87499609826F, -1.72184762569F, 
	 1.85991489314F, -1.70523768132F,  1.84519287298F, -1.68892736818F, 
	 1.83081827281F, -1.67290763849F,  1.81677982446F, -1.65716981364F, 
	 1.80306673082F, -1.64170556529F,  1.78966864176F, -1.62650689770F, 
	 1.77657563138F, -1.61156613107F,  1.76377817677F, -1.59687588595F, 
	 1.75126713792F, -1.58242906845F,  1.73903373889F, -1.56821885646F, 
	 1.72706955004F, -1.55423868654F,  1.71536647127F, -1.54048224165F, 
	 1.70391671626F, -1.52694343953F,  1.69271279758F, -1.51361642175F, 
	 1.68174751265F, -1.50049554338F,  1.67101393045F, -1.48757536320F, 
	 1.66050537900F, -1.47485063451F,  1.65021543351F, -1.46231629631F, 
	 1.64013790516F, -1.44996746513F,  1.63026683049F, -1.43779942714F, 
	 1.62059646137F, -1.42580763077F,  1.61112125548F, -1.41398767967F, 
	 1.60183586728F, -1.40233532603F,  1.59273513950F, -1.39084646433F, 
	 1.58381409496F, -1.37951712525F,  1.57506792896F, -1.36834347005F, 
	 1.56649200191F, -1.35732178512F,  1.55808183240F, -1.34644847687F, 
	 1.54983309065F, -1.33572006680F,  1.54174159216F, -1.32513318688F, 
	 1.53380329183F, -1.31468457514F,  1.52601427823F, -1.30437107141F, 
	 1.51837076821F, -1.29418961337F,  1.51086910179F, -1.28413723268F, 
	 1.50350573721F, -1.27421105134F,  1.49627724632F, -1.26440827825F, 
	 1.48918031008F, -1.25472620588F,  1.48221171433F, -1.24516220708F, 
	 1.47536834578F, -1.23571373211F,  1.46864718807F, -1.22637830574F, 
	 1.46204531818F, -1.21715352446F,  1.45555990280F, -1.20803705392F, 
	 1.44918819506F, -1.19902662635F,  1.44292753126F, -1.19012003818F, 
	 1.43677532781F, -1.18131514776F,  1.43072907827F, -1.17260987311F, 
	 1.42478635060F, -1.16400218987F,  1.41894478438F, -1.15549012923F, 
	 1.41320208831F, -1.14707177601F,  1.40755603771F, -1.13874526684F, 
	 1.40200447215F, -1.13050878833F,  1.39654529320F, -1.12236057544F, 
	 1.39117646228F, -1.11429890975F,  1.38589599853F, -1.10632211799F, 
	 1.38070197687F, -1.09842857048F,  1.37559252605F, -1.09061667969F, 
	 1.37056582683F, -1.08288489888F,  1.36562011024F, -1.07523172075F, 
	 1.36075365583F, -1.06765567617F,  1.35596479012F, -1.06015533294F, 
	 1.35125188498F, -1.05272929462F,  1.34661335617F, -1.04537619940F, 
	 1.34204766190F, -1.03809471898F,  1.33755330140F, -1.03088355755F, 
	 1.33312881366F, -1.02374145078F,  1.32877277609F, -1.01666716480F, 
	 1.32448380334F, -1.00965949533F,  1.32026054607F, -1.00271726673F, 
	 1.31610168983F, -0.99583933113F,  1.31200595398F, -0.98902456763F, 
	 1.30797209061F, -0.98227188147F,  1.30399888352F, -0.97558020324F, 
	 1.30008514727F, -0.96894848816F,  1.29622972621F, -0.96237571531F, 
	 1.29243149356F, -0.95586088698F,  1.28868935058F, -0.94940302800F, 
	 1.28500222567F, -0.94300118503F,  1.28136907360F, -0.93665442599F, 
	 1.27778887468F, -0.93036183944F,  1.27426063404F, -0.92412253398F, 
	 1.27078338088F, -0.91793563772F,  1.26735616777F, -0.91180029768F, 
	 1.26397806993F, -0.90571567932F,  1.26064818466F, -0.89968096599F, 
	 1.25736563061F, -0.89369535846F,  1.25412954721F, -0.88775807444F, 
	 1.25093909408F, -0.88186834811F,  1.24779345044F, -0.87602542968F, 
	 1.24469181457F, -0.87022858497F,  1.24163340328F, -0.86447709496F, 
	 1.23861745134F, -0.85877025544F,  1.23564321106F, -0.85310737656F, 
	 1.23270995176F, -0.84748778251F,  1.22981695927F, -0.84191081111F, 
	 1.22696353557F, -0.83637581345F,  1.22414899824F, -0.83088215361F, 
	 1.22137268014F, -0.82542920825F,  1.21863392891F, -0.82001636634F, 
	 1.21593210663F, -0.81464302881F,  1.21326658941F, -0.80930860828F, 
	 1.21063676704F, -0.80401252875F,  1.20804204260F, -0.79875422533F, 
	 1.20548183212F, -0.79353314392F,  1.20295556424F, -0.78834874100F, 
	 1.20046267990F, -0.78320048333F,  1.19800263199F, -0.77808784772F, 
	 1.19557488508F, -0.77301032076F,  1.19317891507F, -0.76796739861F, 
	 1.19081420895F, -0.76295858677F,  1.18848026448F, -0.75798339982F, 
	 1.18617658995F, -0.75304136123F,  1.18390270390F, -0.74813200316F, 
	 1.18165813483F, -0.74325486623F,  1.17944242101F, -0.73840949933F, 
	 1.17725511022F, -0.73359545942F,  1.17509575948F, -0.72881231136F, 
	 1.17296393486F, -0.72405962771F,  1.17085921124F, -0.71933698856F, 
	 1.16878117211F, -0.71464398135F,  1.16672940935F, -0.70998020070F, 
	 1.16470352302F, -0.70534524827F,  1.16270312118F, -0.70073873256F, 
	 1.16072781969F, -0.69616026881F,  1.15877724204F, -0.69160947880F, 
	 1.15685101912F, -0.68708599070F,  1.15494878911F, -0.68258943900F, 
	 1.15307019727F, -0.67811946427F,  1.15121489577F, -0.67367571310F, 
	 1.14938254356F, -0.66925783795F,  1.14757280617F, -0.66486549700F, 
	 1.14578535561F, -0.66049835404F,  1.14401987017F, -0.65615607837F, 
	 1.14227603431F, -0.65183834463F,  1.14055353850F, -0.64754483275F, 
	 1.13885207910F, -0.64327522777F,  1.13717135821F, -0.63902921980F, 
	 1.13551108355F, -0.63480650384F,  1.13387096834F, -0.63060677974F, 
	 1.13225073116F, -0.62642975206F,  1.13065009585F, -0.62227512999F, 
	 1.12906879138F, -0.61814262724F,  1.12750655175F, -0.61403196197F, 
	 1.12596311585F, -0.60994285665F,  1.12443822739F, -0.60587503804F, 
	 1.12293163479F, -0.60182823704F,  1.12144309103F, -0.59780218863F, 
	 1.11997235363F, -0.59379663180F,  1.11851918448F, -0.58981130945F, 
	 1.11708334981F, -0.58584596832F,  1.11566462002F, -0.58190035890F, 
	 1.11426276969F, -0.57797423538F,  1.11287757739F, -0.57406735555F, 
	 1.11150882566F, -0.57017948075F,  1.11015630093F, -0.56631037577F, 
	 1.10881979341F, -0.56245980883F,  1.10749909699F, -0.55862755146F, 
	 1.10619400924F, -0.55481337847F,  1.10490433126F, -0.55101706788F, 
	 1.10362986765F, -0.54723840084F,  1.10237042642F, -0.54347716159F, 
	 1.10112581893F, -0.53973313740F,  1.09989585979F, -0.53600611849F, 
	 1.09868036687F, -0.53229589800F,  1.09747916114F, -0.52860227192F, 
	 1.09629206669F, -0.52492503902F,  1.09511891060F, -0.52126400085F, 
	 1.09395952292F, -0.51761896163F,  1.09281373663F, -0.51398972823F, 
	 1.09168138753F, -0.51037611011F,  1.09056231420F, -0.50677791926F, 
	 1.08945635798F, -0.50319497021F,  1.08836336287F, -0.49962707989F, 
	 1.08728317552F, -0.49607406767F,  1.08621564515F, -0.49253575527F, 
	 1.08516062351F, -0.48901196672F,  1.08411796482F, -0.48550252833F, 
	 1.08308752575F, -0.48200726865F,  1.08206916535F, -0.47852601842F, 
	 1.08106274500F, -0.47505861053F,  1.08006812840F, -0.47160487998F, 
	 1.07908518148F, -0.46816466384F,  1.07811377241F, -0.46473780124F, 
	 1.07715377150F, -0.46132413329F,  1.07620505122F, -0.45792350308F, 
	 1.07526748611F, -0.45453575561F,  1.07434095276F, -0.45116073780F, 
	 1.07342532980F, -0.44779829841F,  1.07252049782F, -0.44444828805F, 
	 1.07162633935F, -0.44111055911F,  1.07074273882F, -0.43778496575F, 
	 1.06986958256F, -0.43447136387F,  1.06900675872F, -0.43116961105F, 
	 1.06815415725F, -0.42787956658F,  1.06731166989F, -0.42460109136F, 
	 1.06647919011F, -0.42133404793F,  1.06565661310F, -0.41807830040F, 
	 1.06484383571F, -0.41483371444F,  1.06404075647F, -0.41160015727F, 
	 1.06324727553F, -0.40837749761F,  1.06246329460F, -0.40516560563F, 
	 1.06168871701F, -0.40196435300F,  1.06092344759F, -0.39877361278F, 
	 1.06016739269F, -0.39559325948F,  1.05942046016F, -0.39242316893F, 
	 1.05868255930F, -0.38926321837F,  1.05795360086F, -0.38611328636F, 
	 1.05723349700F, -0.38297325275F,  1.05652216126F, -0.37984299870F, 
	 1.05581950855F, -0.37672240662F,  1.05512545514F, -0.37361136020F, 
	 1.05443991859F, -0.37050974431F,  1.05376281779F, -0.36741744505F, 
	 1.05309407288F, -0.36433434970F,  1.05243360529F, -0.36126034669F, 
	 1.05178133766F, -0.35819532561F,  1.05113719386F, -0.35513917716F, 
	 1.05050109895F, -0.35209179316F,  1.04987297917F, -0.34905306651F, 
	 1.04925276192F, -0.34602289116F,  1.04864037574F, -0.34300116215F, 
	 1.04803575029F, -0.33998777552F,  1.04743881635F, -0.33698262832F, 
	 1.04684950576F, -0.33398561864F,  1.04626775146F, -0.33099664550F, 
	 1.04569348741F, -0.32801560893F,  1.04512664865F, -0.32504240987F, 
	 1.04456717121F, -0.32207695022F,  1.04401499212F, -0.31911913279F, 
	 1.04347004944F, -0.31616886129F,  1.04293228217F, -0.31322604032F, 
	 1.04240163029F, -0.31029057533F,  1.04187803471F, -0.30736237267F, 
	 1.04136143728F, -0.30444133951F,  1.04085178078F, -0.30152738382F, 
	 1.04034900889F, -0.29862041444F,  1.03985306616F, -0.29572034097F, 
	 1.03936389806F, -0.29282707382F,  1.03888145088F, -0.28994052416F, 
	 1.03840567180F, -0.28706060393F,  1.03793650883F, -0.28418722581F, 
	 1.03747391080F, -0.28132030323F,  1.03701782737F, -0.27845975033F, 
	 1.03656820900F, -0.27560548196F,  1.03612500695F, -0.27275741368F, 
	 1.03568817327F, -0.26991546173F,  1.03525766075F, -0.26707954303F, 
	 1.03483342298F, -0.26424957517F,  1.03441541430F, -0.26142547636F, 
	 1.03400358976F, -0.25860716549F,  1.03359790517F, -0.25579456207F, 
	 1.03319831706F, -0.25298758621F,  1.03280478266F, -0.25018615865F, 
	 1.03241725991F, -0.24739020072F,  1.03203570745F, -0.24459963435F, 
	 1.03166008459F, -0.24181438202F,  1.03129035133F, -0.23903436681F, 
	 1.03092646834F, -0.23625951232F,  1.03056839692F, -0.23348974274F, 
	 1.03021609907F, -0.23072498277F,  1.02986953738F, -0.22796515764F, 
	 1.02952867510F, -0.22521019311F,  1.02919347612F, -0.22246001545F, 
	 1.02886390493F, -0.21971455141F,  1.02853992662F, -0.21697372825F, 
	 1.02822150692F, -0.21423747371F,  1.02790861212F, -0.21150571601F, 
	 1.02760120913F, -0.20877838381F,  1.02729926542F, -0.20605540625F, 
	 1.02700274904F, -0.20333671292F,  1.02671162863F, -0.20062223383F, 
	 1.02642587336F, -0.19791189943F,  1.02614545299F, -0.19520564061F, 
	 1.02587033780F, -0.19250338864F,  1.02560049864F, -0.18980507522F, 
	 1.02533590687F, -0.18711063245F,  1.02507653443F, -0.18441999281F, 
	 1.02482235373F, -0.18173308919F,  1.02457333773F, -0.17904985481F, 
	 1.02432945991F, -0.17637022330F,  1.02409069426F, -0.17369412862F, 
	 1.02385701525F, -0.17102150512F,  1.02362839788F, -0.16835228746F, 
	 1.02340481764F, -0.16568641066F,  1.02318625049F, -0.16302381007F, 
	 1.02297267289F, -0.16036442135F,  1.02276406179F, -0.15770818050F, 
	 1.02256039459F, -0.15505502381F,  1.02236164919F, -0.15240488790F, 
	 1.02216780393F, -0.14975770966F,  1.02197883764F, -0.14711342628F, 
	 1.02179472959F, -0.14447197524F,  1.02161545951F, -0.14183329430F, 
	 1.02144100757F, -0.13919732149F,  1.02127135441F, -0.13656399508F, 
	 1.02110648110F, -0.13393325364F,  1.02094636913F, -0.13130503596F, 
	 1.02079100047F, -0.12867928108F,  1.02064035748F, -0.12605592830F, 
	 1.02049442297F, -0.12343491712F,  1.02035318017F, -0.12081618730F, 
	 1.02021661273F, -0.11819967881F,  1.02008470472F, -0.11558533182F, 
	 1.01995744064F, -0.11297308672F,  1.01983480537F, -0.11036288412F, 
	 1.01971678423F, -0.10775466479F,  1.01960336293F, -0.10514836972F, 
	 1.01949452760F, -0.10254394008F,  1.01939026475F, -0.09994131722F, 
	 1.01929056131F, -0.09734044266F,  1.01919540459F, -0.09474125808F, 
	 1.01910478230F, -0.09214370535F,  1.01901868255F, -0.08954772647F, 
	 1.01893709384F, -0.08695326360F,  1.01886000502F, -0.08436025904F, 
	 1.01878740538F, -0.08176865526F,  1.01871928455F, -0.07917839482F, 
	 1.01865563257F, -0.07658942045F,  1.01859643983F, -0.07400167497F, 
	 1.01854169713F, -0.07141510135F,  1.01849139562F, -0.06882964265F, 
	 1.01844552682F, -0.06624524205F,  1.01840408265F, -0.06366184282F, 
	 1.01836705538F, -0.06107938835F,  1.01833443764F, -0.05849782209F, 
	 1.01830622246F, -0.05591708762F,  1.01828240319F, -0.05333712855F, 
	 1.01826297359F, -0.05075788861F,  1.01824792775F, -0.04817931157F, 
	 1.01823726015F, -0.04560134130F,  1.01823096559F, -0.04302392169F, 
	 1.01822903928F, -0.04044699671F,  1.01823147676F, -0.03787051038F, 
	 1.01823827392F, -0.03529440677F,  1.01824942703F, -0.03271862996F, 
	 1.01826493270F, -0.03014312411F,  1.01828478791F, -0.02756783336F, 
	 1.01830898998F, -0.02499270192F,  1.01833753659F, -0.02241767399F, 
	 1.01837042578F, -0.01984269381F,  1.01840765594F, -0.01726770559F, 
	 1.01844922580F, -0.01469265359F,  1.01849513446F, -0.01211748203F, 
	 1.01854538136F, -0.00954213515F,  1.01859996631F, -0.00696655717F, 
	 1.01865888944F, -0.00439069230F,  1.01872215128F, -0.00181448471F, 
	 1.01878975265F,  0.00076212143F,  1.01886169478F,  0.00333918201F, 
	 1.01893797921F,  0.00591675292F,  1.01901860786F,  0.00849489014F, 
	 1.01910358298F,  0.01107364964F,  1.01919290720F,  0.01365308749F, 
	 1.01928658346F,  0.01623325980F,  1.01938461510F,  0.01881422273F, 
	 1.01948700578F,  0.02139603253F,  1.01959375953F,  0.02397874549F, 
	 1.01970488073F,  0.02656241802F,  1.01982037412F,  0.02914710659F, 
	 1.01994024479F,  0.03173286775F,  1.02006449819F,  0.03431975815F, 
	 1.02019314012F,  0.03690783455F,  1.02032617675F,  0.03949715380F, 
	 1.02046361461F,  0.04208777287F,  1.02060546058F,  0.04467974884F, 
	 1.02075172190F,  0.04727313890F,  1.02090240619F,  0.04986800038F, 
	 1.02105752142F,  0.05246439073F,  1.02121707592F,  0.05506236755F, 
	 1.02138107841F,  0.05766198857F,  1.02154953795F,  0.06026331166F, 
	 1.02172246399F,  0.06286639486F,  1.02189986634F,  0.06547129636F, 
	 1.02208175519F,  0.06807807452F,  1.02226814110F,  0.07068678784F, 
	 1.02245903500F,  0.07329749504F,  1.02265444820F,  0.07591025498F, 
	 1.02285439241F,  0.07852512673F,  1.02305887970F,  0.08114216956F, 
	 1.02326792252F,  0.08376144290F,  1.02348153373F,  0.08638300641F, 
	 1.02369972656F,  0.08900691997F,  1.02392251462F,  0.09163324365F, 
	 1.02414991195F,  0.09426203776F,  1.02438193294F,  0.09689336282F, 
	 1.02461859240F,  0.09952727959F,  1.02485990556F,  0.10216384908F, 
	 1.02510588801F,  0.10480313253F,  1.02535655578F,  0.10744519144F, 
	 1.02561192529F,  0.11009008757F,  1.02587201337F,  0.11273788294F, 
	 1.02613683729F,  0.11538863983F,  1.02640641469F,  0.11804242081F, 
	 1.02668076368F,  0.12069928874F,  1.02695990276F,  0.12335930675F, 
	 1.02724385087F,  0.12602253828F,  1.02753262738F,  0.12868904707F, 
	 1.02782625208F,  0.13135889717F,  1.02812474522F,  0.13403215293F, 
	 1.02842812747F,  0.13670887906F,  1.02873641995F,  0.13938914057F, 
	 1.02904964424F,  0.14207300281F,  1.02936782235F,  0.14476053149F, 
	 1.02969097677F,  0.14745179265F,  1.03001913042F,  0.15014685271F, 
	 1.03035230672F,  0.15284577844F,  1.03069052954F,  0.15554863699F, 
	 1.03103382321F,  0.15825549589F,  1.03138221255F,  0.16096642305F, 
	 1.03173572288F,  0.16368148679F,  1.03209437997F,  0.16640075583F, 
	 1.03245821011F,  0.16912429929F,  1.03282724008F,  0.17185218672F, 
	 1.03320149714F,  0.17458448808F,  1.03358100909F,  0.17732127380F, 
	 1.03396580422F,  0.18006261473F,  1.03435591134F,  0.18280858216F, 
	 1.03475135979F,  0.18555924785F,  1.03515217943F,  0.18831468405F, 
	 1.03555840065F,  0.19107496346F,  1.03597005439F,  0.19384015927F, 
	 1.03638717212F,  0.19661034517F,  1.03680978589F,  0.19938559535F, 
	 1.03723792828F,  0.20216598453F,  1.03767163244F,  0.20495158791F, 
	 1.03811093209F,  0.20774248126F,  1.03855586154F,  0.21053874087F, 
	 1.03900645568F,  0.21334044360F,  1.03946274996F,  0.21614766684F, 
	 1.03992478047F,  0.21896048857F,  1.04039258388F,  0.22177898734F, 
	 1.04086619747F,  0.22460324230F,  1.04134565917F,  0.22743333318F, 
	 1.04183100749F,  0.23026934034F,  1.04232228161F,  0.23311134474F, 
	 1.04281952134F,  0.23595942799F,  1.04332276714F,  0.23881367233F, 
	 1.04383206013F,  0.24167416066F,  1.04434744210F,  0.24454097654F, 
	 1.04486895551F,  0.24741420419F,  1.04539664350F,  0.25029392854F, 
	 1.04593054993F,  0.25318023520F,  1.04647071933F,  0.25607321051F, 
	 1.04701719696F,  0.25897294151F,  1.04757002880F,  0.26187951597F, 
	 1.04812926155F,  0.26479302244F,  1.04869494265F,  0.26771355020F, 
	 1.04926712032F,  0.27064118929F,  1.04984584351F,  0.27357603058F, 
	 1.05043116194F,  0.27651816569F,  1.05102312614F,  0.27946768708F, 
	 1.05162178740F,  0.28242468801F,  1.05222719785F,  0.28538926260F, 
	 1.05283941040F,  0.28836150582F,  1.05345847881F,  0.29134151349F, 
	 1.05408445766F,  0.29432938232F,  1.05471740241F,  0.29732520992F, 
	 1.05535736935F,  0.30032909480F,  1.05600441566F,  0.30334113641F, 
	 1.05665859943F,  0.30636143511F,  1.05731997960F,  0.30939009226F, 
	 1.05798861607F,  0.31242721015F,  1.05866456966F,  0.31547289209F, 
	 1.05934790211F,  0.31852724238F,  1.06003867614F,  0.32159036633F, 
	 1.06073695542F,  0.32466237032F,  1.06144280463F,  0.32774336176F, 
	 1.06215628943F,  0.33083344913F,  1.06287747651F,  0.33393274203F, 
	 1.06360643356F,  0.33704135114F,  1.06434322937F,  0.34015938829F, 
	 1.06508793373F,  0.34328696644F,  1.06584061757F,  0.34642419972F, 
	 1.06660135288F,  0.34957120346F,  1.06737021278F,  0.35272809418F, 
	 1.06814727150F,  0.35589498963F,  1.06893260444F,  0.35907200880F, 
	 1.06972628817F,  0.36225927198F,  1.07052840044F,  0.36545690069F, 
	 1.07133902019F,  0.36866501782F,  1.07215822762F,  0.37188374756F, 
	 1.07298610415F,  0.37511321547F,  1.07382273246F,  0.37835354847F, 
	 1.07466819655F,  0.38160487491F,  1.07552258169F,  0.38486732453F, 
	 1.07638597450F,  0.38814102856F,  1.07725846295F,  0.39142611967F, 
	 1.07814013638F,  0.39472273206F,  1.07903108553F,  0.39803100143F, 
	 1.07993140256F,  0.40135106505F,  1.08084118108F,  0.40468306176F, 
	 1.08176051616F,  0.40802713201F,  1.08268950436F,  0.41138341788F, 
	 1.08362824379F,  0.41475206312F,  1.08457683407F,  0.41813321316F, 
	 1.08553537642F,  0.42152701516F,  1.08650397364F,  0.42493361804F, 
	 1.08748273018F,  0.42835317246F,  1.08847175214F,  0.43178583095F, 
	 1.08947114729F,  0.43523174784F,  1.09048102513F,  0.43869107935F, 
	 1.09150149692F,  0.44216398361F,  1.09253267567F,  0.44565062071F, 
	 1.09357467623F,  0.44915115268F,  1.09462761526F,  0.45266574361F, 
	 1.09569161133F,  0.45619455960F,  1.09676678488F,  0.45973776886F, 
	 1.09785325834F,  0.46329554170F,  1.09895115608F,  0.46686805062F, 
	 1.10006060450F,  0.47045547029F,  1.10118173207F,  0.47405797766F, 
	 1.10231466934F,  0.47767575191F,  1.10345954897F,  0.48130897459F, 
	 1.10461650583F,  0.48495782957F,  1.10578567696F,  0.48862250317F, 
	 1.10696720168F,  0.49230318414F,  1.10816122160F,  0.49600006372F, 
	 1.10936788066F,  0.49971333570F,  1.11058732519F,  0.50344319647F, 
	 1.11181970395F,  0.50718984505F,  1.11306516818F,  0.51095348315F, 
	 1.11432387162F,  0.51473431521F,  1.11559597060F,  0.51853254846F, 
	 1.11688162407F,  0.52234839299F,  1.11818099366F,  0.52618206175F, 
	 1.11949424372F,  0.53003377067F,  1.12082154136F,  0.53390373868F, 
	 1.12216305655F,  0.53779218776F,  1.12351896214F,  0.54169934302F, 
	 1.12488943393F,  0.54562543275F,  1.12627465073F,  0.54957068850F, 
	 1.12767479440F,  0.55353534509F,  1.12909004995F,  0.55751964073F, 
	 1.13052060556F,  0.56152381708F,  1.13196665270F,  0.56554811927F, 
	 1.13342838613F,  0.56959279602F,  1.13490600402F,  0.57365809969F, 
	 1.13639970799F,  0.57774428636F,  1.13790970321F,  0.58185161586F, 
	 1.13943619843F,  0.58598035193F,  1.14097940612F,  0.59013076222F, 
	 1.14253954246F,  0.59430311841F,  1.14411682752F,  0.59849769626F, 
	 1.14571148524F,  0.60271477574F,  1.14732374359F,  0.60695464106F, 
	 1.14895383462F,  0.61121758080F,  1.15060199454F,  0.61550388798F, 
	 1.15226846386F,  0.61981386013F,  1.15395348740F,  0.62414779944F, 
	 1.15565731446F,  0.62850601280F,  1.15738019887F,  0.63288881193F, 
	 1.15912239911F,  0.63729651345F,  1.16088417841F,  0.64172943905F, 
	 1.16266580485F,  0.64618791549F,  1.16446755146F,  0.65067227480F, 
	 1.16628969635F,  0.65518285437F,  1.16813252281F,  0.65971999702F, 
	 1.16999631942F,  0.66428405116F,  1.17188138017F,  0.66887537091F, 
	 1.17378800460F,  0.67349431620F,  1.17571649793F,  0.67814125290F, 
	 1.17766717113F,  0.68281655298F,  1.17964034113F,  0.68752059459F, 
	 1.18163633092F,  0.69225376224F,  1.18365546967F,  0.69701644692F, 
	 1.18569809292F,  0.70180904626F,  1.18776454267F,  0.70663196464F, 
	 1.18985516761F,  0.71148561340F,  1.19197032319F,  0.71637041092F, 
	 1.19411037183F,  0.72128678285F,  1.19627568310F,  0.72623516225F, 
	 1.19846663384F,  0.73121598972F,  1.20068360836F,  0.73622971363F, 
	 1.20292699863F,  0.74127679029F,  1.20519720446F,  0.74635768406F, 
	 1.20749463366F,  0.75147286766F,  1.20981970228F,  0.75662282224F, 
	 1.21217283478F,  0.76180803767F,  1.21455446425F,  0.76702901270F, 
	 1.21696503262F,  0.77228625516F,  1.21940499088F,  0.77758028222F, 
	 1.22187479930F,  0.78291162058F,  1.22437492767F,  0.78828080668F, 
	 1.22690585555F,  0.79368838698F,  1.22946807248F,  0.79913491819F, 
	 1.23206207828F,  0.80462096749F,  1.23468838326F,  0.81014711280F, 
	 1.23734750856F,  0.81571394307F,  1.24003998636F,  0.82132205851F, 
	 1.24276636019F,  0.82697207091F,  1.24552718525F,  0.83266460389F, 
	 1.24832302869F,  0.83840029323F,  1.25115446990F,  0.84417978714F, 
	 1.25402210090F,  0.85000374661F,  1.25692652662F,  0.85587284571F, 
	 1.25986836525F,  0.86178777195F,  1.26284824864F,  0.86774922660F, 
	 1.26586682260F,  0.87375792505F,  1.26892474733F,  0.87981459719F, 
	 1.27202269780F,  0.88591998778F,  1.27516136414F,  0.89207485683F, 
	 1.27834145206F,  0.89827998002F,  1.28156368330F,  0.90453614913F, 
	 1.28482879606F,  0.91084417241F,  1.28813754546F,  0.91720487510F, 
	 1.29149070402F,  0.92361909982F,  1.29488906214F,  0.93008770710F, 
	 1.29833342864F,  0.93661157581F,  1.30182463124F,  0.94319160372F, 
	 1.30536351713F,  0.94982870798F,  1.30895095354F,  0.95652382569F, 
	 1.31258782828F,  0.96327791441F,  1.31627505041F,  0.97009195280F, 
	 1.32001355079F,  0.97696694117F,  1.32380428275F,  0.98390390209F, 
	 1.32764822280F,  0.99090388107F,  1.33154637125F,  0.99796794718F, 
	 1.33549975296F,  1.00509719374F,  1.33950941810F,  1.01229273905F, 
	 1.34357644287F,  1.01955572706F,  1.34770193033F,  1.02688732822F, 
	 1.35188701123F,  1.03428874018F,  1.35613284482F,  1.04176118863F, 
	 1.36044061980F,  1.04930592817F,  1.36481155517F,  1.05692424313F, 
	 1.36924690124F,  1.06461744853F,  1.37374794060F,  1.07238689096F, 
	 1.37831598912F,  1.08023394960F,  1.38295239707F,  1.08816003721F, 
	 1.38765855017F,  1.09616660117F,  1.39243587079F,  1.10425512458F, 
	 1.39728581909F,  1.11242712737F,  1.40220989431F,  1.12068416748F, 
	 1.40720963603F,  1.12902784211F,  1.41228662554F,  1.13745978890F, 
	 1.41744248717F,  1.14598168734F,  1.42267888982F,  1.15459526005F, 
	 1.42799754840F,  1.16330227427F,  1.43340022545F,  1.17210454328F, 
	 1.43888873274F,  1.18100392796F,  1.44446493297F,  1.19000233840F, 
	 1.45013074157F,  1.19910173552F,  1.45588812850F,  1.20830413284F, 
	 1.46173912022F,  1.21761159826F,  1.46768580164F,  1.22702625596F, 
	 1.47373031826F,  1.23655028831F,  1.47987487831F,  1.24618593796F, 
	 1.48612175502F,  1.25593550993F,  1.49247328902F,  1.26580137383F, 
	 1.49893189078F,  1.27578596619F,  1.50550004323F,  1.28589179284F, 
	 1.51218030439F,  1.29612143146F,  1.51897531026F,  1.30647753419F, 
	 1.52588777774F,  1.31696283038F,  1.53292050766F,  1.32758012945F, 
	 1.54007638807F,  1.33833232389F,  1.54735839756F,  1.34922239241F, 
	 1.55476960879F,  1.36025340319F,  1.56231319218F,  1.37142851733F, 
	 1.56999241978F,  1.38275099245F,  1.57781066928F,  1.39422418639F, 
	 1.58577142828F,  1.40585156121F,  1.59387829871F,  1.41763668728F, 
	 1.60213500151F,  1.42958324761F,  1.61054538146F,  1.44169504237F, 
	 1.61911341237F,  1.45397599365F,  1.62784320242F,  1.46643015045F, 
	 1.63673899981F,  1.47906169389F,  1.64580519870F,  1.49187494274F, 
	 1.65504634547F,  1.50487435918F,  1.66446714524F,  1.51806455484F, 
	 1.67407246879F,  1.53145029723F,  1.68386735982F,  1.54503651640F, 
	 1.69385704257F,  1.55882831206F,  1.70404692990F,  1.57283096096F, 
	 1.71444263175F,  1.58704992475F,  1.72504996410F,  1.60149085823F, 
	 1.73587495835F,  1.61615961805F,  1.74692387134F,  1.63106227187F, 
	 1.75820319578F,  1.64620510808F,  1.76971967141F,  1.66159464598F, 
	 1.78148029667F,  1.67723764663F,  1.79349234109F,  1.69314112421F, 
	 1.80576335843F,  1.70931235812F,  1.81830120054F,  1.72575890577F, 
	 1.83111403204F,  1.74248861604F,  1.84421034587F,  1.75950964364F, 
	 1.85759897980F,  1.77683046427F,  1.87128913393F,  1.79445989071F, 
	 1.88529038924F,  1.81240708985F,  1.89961272733F,  1.83068160087F, 
	 1.91426655134F,  1.84929335443F,  1.92926270824F,  1.86825269315F, 
	 1.94461251250F,  1.88757039335F,  1.96032777134F,  1.90725768821F, 
	 1.97642081161F,  1.92732629242F,  1.99290450834F,  1.94778842845F, 
	 2.00979231541F,  1.96865685458F,  2.02709829804F,  1.98994489477F, 
	 2.04483716768F,  2.01166647061F,  2.06302431923F,  2.03383613543F, 
	 2.08167587081F,  2.05646911080F,  2.10080870646F,  2.07958132555F, 
	 2.12044052175F,  2.10318945765F,  2.14058987278F,  2.12731097900F, 
	 2.16127622871F,  2.15196420360F,  2.18252002818F,  2.17716833916F, 
	 2.20434274001F,  2.20294354265F,  2.22676692841F,  2.22931097999F, 
	 2.24981632329F,  2.25629289038F,  2.27351589597F,  2.28391265554F, 
	 2.29789194087F,  2.31219487447F,  2.32297216381F,  2.34116544413F, 
	 2.34878577727F,  2.37085164660F,  2.37536360367F,  2.40128224347F, 
	 2.40273818711F,  2.43248757799F,  2.43094391453F,  2.46449968581F, 
	 2.46001714731F,  2.49735241521F,  2.48999636422F,  2.53108155774F, 
	 2.52092231696F,  2.56572499031F,  2.55283819962F,  2.60132282999F, 
	 2.58578983346F,  2.63791760280F,  2.61982586874F,  2.67555442799F, 
	 2.65499800538F,  2.71428121958F,  2.69136123462F,  2.75414890701F, 
	 2.72897410390F,  2.79521167696F,  2.76789900782F,  2.83752723898F, 
}; 


// End of File
