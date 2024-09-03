//#############################################################################
//! \file wrfft2Input.c
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


float test_input[1024] = {
	 0.00000000000F, 21.35474357317F, 33.81085056429F, 33.37493978807F, 
	23.01694267663F, 10.69937104220F,  4.55192016093F,  8.03177856972F, 
	17.91124048327F, 26.27031404173F, 25.31834014239F, 12.20458616344F, 
	-9.02127929063F, -29.47207102422F, -40.32732514145F, -37.73178242635F, 
	-24.84150666593F, -9.83708041121F, -1.07939321634F, -2.25002002335F, 
	-10.31950707681F, -17.52292630583F, -16.16818273266F, -3.43818418681F, 
	16.65149908155F, 35.31248924836F, 43.87923330761F, 38.69405578467F, 
	23.13618755177F,  5.61569391155F, -5.29051649922F, -5.71689635397F, 
	 1.44324122181F,  8.50164701520F,  7.77696372688F, -3.60388443493F, 
	-21.74305775061F, -38.02136893134F, -43.97921603495F, -36.18380219839F, 
	-18.23874469908F,  1.24132346414F, 13.51231019053F, 14.59316220898F, 
	 7.32316075483F, -0.59753566955F, -1.41095145816F,  7.89050863188F, 
	23.58964680262F, 37.27832317550F, 40.72010289359F, 30.69820817651F, 
	11.00654435254F, -9.59199527455F, -22.25969792643F, -22.98438121475F, 
	-14.63912093129F, -5.01961704410F, -2.03264425561F, -8.87480705290F, 
	-22.04166657466F, -33.34315368113F, -34.74740121160F, -23.21113051598F, 
	-2.65587254213F, 18.08450569646F, 30.16380927208F, 29.62428503820F, 
	19.45133917282F,  7.60092212688F,  2.17391419345F,  6.57796726986F, 
	17.51834591110F, 26.99526902828F, 27.13144543196F, 14.98933682467F, 
	-5.46145490892F, -25.40046587293F, -36.05485354046F, -33.59347479655F, 
	-21.17035362463F, -6.93725759261F,  0.79898194260F, -1.56753894618F, 
	-10.91558394425F, -19.37931324864F, -19.16452905464F, -7.35911703374F, 
	12.10135873237F, 30.48657566918F, 39.16175266783F, 34.46946076518F, 
	19.75782953528F,  3.37621028737F, -6.18459323714F, -5.16410113977F, 
	 3.42850628372F, 11.78757984218F, 12.12246043290F,  1.46807276537F, 
	-16.34444004545F, -32.73118416557F, -39.23280416434F, -32.38088032281F, 
	-15.70967456991F,  2.26427832116F, 12.91623332309F, 12.39630148631F, 
	 3.67611946262F, -5.42156757345F, -7.03635063664F,  1.91271791673F, 
	17.74602005866F, 32.05337610700F, 36.55607255278F, 27.95754238659F, 
	 9.94030784228F, -8.86704028801F, -19.77325069877F, -18.91277606346F, 
	-9.29327217627F,  1.17848626038F,  4.51785058553F, -2.50936345782F, 
	-16.39215564708F, -28.88953683533F, -31.87785730257F, -22.18817565896F, 
	-3.59242318943F, 15.23695000356F, 25.61366892291F, 23.72499430499F, 
	12.67406285836F,  0.49698530756F, -4.67006459951F,  0.56734787705F, 
	12.85313340454F, 24.08244346601F, 26.23736869404F, 16.21547397696F, 
	-2.18933535695F, -20.32850867263F, -29.58285868126F, -26.24349435611F, 
	-13.54459995418F,  0.33128505944F,  7.09918784041F,  3.22655167948F, 
	-8.04604003523F, -18.69683217148F, -20.75177467217F, -11.10977178361F, 
	 6.47595955389F, 23.43540780000F, 31.25833024920F, 26.36517189685F, 
	12.12817841799F, -3.13559127119F, -11.02196551604F, -7.90476692969F, 
	 3.03561171155F, 13.79938931879F, 16.39493203389F,  7.66617606984F, 
	-8.72056805028F, -24.30594489582F, -30.70395143692F, -24.46164270054F, 
	-9.06899489225F,  7.05836894682F, 15.44530345226F, 12.42808759324F, 
	 1.18577478812F, -10.24748115263F, -13.81362695110F, -6.26459605663F, 
	 8.84224559102F, 23.16341491436F, 28.42523926976F, 21.27358105569F, 
	 5.27509533573F, -11.10652391218F, -19.38047294663F, -15.90061453784F, 
	-3.89465447110F,  8.52846670082F, 13.21698141001F,  6.81897486890F, 
	-7.21260794944F, -20.62982543320F, -25.23717762491F, -17.73455881316F, 
	-1.71404803049F, 14.36563705353F, 22.04806541910F, 17.74720358984F, 
	 4.77064043973F, -8.68068071481F, -14.35951139147F, -8.82379548134F, 
	 4.55014034918F, 17.57064190745F, 22.07333835323F, 14.76166267710F, 
	-0.79620555579F, -16.19020104283F, -23.03236384012F, -17.81825508635F, 
	-3.94237007273F, 10.31031835639F, 16.61920931790F, 11.48626308161F, 
	-1.74583413742F, -14.89391029590F, -19.77649857020F, -13.05634356295F, 
	 1.75847891411F, 16.33147098068F, 22.35455578155F, 16.40183355016F, 
	 1.93754946029F, -12.69889440192F, -19.15279879906F, -13.91538632250F, 
	-0.34274630494F, 13.34593006794F, 18.91420793922F, 12.95636083561F, 
	-1.09481437983F, -14.97760656909F, -20.45102658524F, -14.14213562373F, 
	 0.45102658525F, 14.97760656909F, 21.09481437983F, 15.32791041185F, 
	 1.08579206078F, -13.34593006794F, -19.65725369506F, -14.36888492496F, 
	-0.84720120094F, 12.69889440192F, 18.06245053971F, 11.88243769730F, 
	-2.35455578156F, -16.33147098068F, -21.75847891411F, -15.22792768451F, 
	-0.22350142980F, 14.89391029590F, 21.74583413742F, 16.79800816586F, 
	 3.38079068210F, -10.31031835639F, -16.05762992727F, -10.46601616111F, 
	 3.03236384012F, 16.19020104283F, 20.79620555579F, 13.52260857036F, 
	-2.07333835323F, -17.57064190745F, -24.55014034918F, -19.46047576612F, 
	-5.64048860853F,  8.68068071481F, 15.22935956027F, 10.53706765762F, 
	-2.04806541910F, -14.36563705353F, -18.28595196951F, -10.54971243430F, 
	 5.23717762491F, 20.62982543320F, 27.21260794944F, 21.46529637856F, 
	 6.78301858999F, -8.52846670082F, -16.10534552890F, -12.38365670962F, 
	-0.61952705337F, 11.10652391218F, 14.72490466427F,  7.01069019177F, 
	-8.42523926976F, -23.16341491436F, -28.84224559102F, -22.01967519083F, 
	-6.18637304890F, 10.24748115263F, 18.81422521188F, 15.85618365422F, 
	 4.55469654774F, -7.05836894682F, -10.93100510775F, -3.82262854692F, 
	10.70395143693F, 24.30594489582F, 28.72056805028F, 20.61809517762F, 
	 3.60506796611F, -13.79938931879F, -23.03561171155F, -20.37950431777F, 
	-8.97803448396F,  3.13559127119F,  7.87182158200F,  1.91909935061F, 
	-11.25833024920F, -23.43540780000F, -26.47595955389F, -17.17449946385F, 
	 0.75177467217F, 18.69683217148F, 28.04604003523F, 25.05771956799F, 
	12.90081215959F, -0.33128505944F, -6.45540004582F, -2.04077689136F, 
	 9.58285868126F, 20.32850867263F, 22.18933535695F, 12.06879727050F, 
	-6.23736869404F, -24.08244346601F, -32.85313340454F, -28.85161912451F, 
	-15.32993540049F, -0.49698530756F,  7.32593714164F,  4.55927694247F, 
	-5.61366892291F, -15.23695000356F, -16.40757681057F, -6.09609558850F, 
	11.87785730257F, 28.88953683533F, 36.39215564708F, 30.79363470528F, 
	15.48214941447F, -1.17848626038F, -10.70672782373F, -9.37149518400F, 
	-0.22674930123F,  8.86704028801F, 10.05969215772F,  0.32672886087F, 
	-16.55607255278F, -32.05337610701F, -37.74602005867F, -30.19698916419F, 
	-12.96364936335F,  5.42156757345F, 16.32388053738F, 15.88796976115F, 
	 7.08376667691F, -2.26427832116F, -4.29032543009F,  4.09660907535F, 
	19.23280416434F, 32.73118416557F, 36.34444004545F, 26.81619848209F, 
	 7.87753956710F, -11.78757984218F, -23.42850628372F, -23.12017010769F, 
	-13.81540676286F, -3.37621028737F,  0.24217046472F, -6.18518951772F, 
	-19.16175266783F, -30.48657566918F, -32.10135873237F, -20.92515421372F, 
	-0.83547094536F, 19.37931324864F, 30.91558394425F, 29.85181019364F, 
	19.20101805740F,  6.93725759261F,  1.17035362463F,  5.30920354909F, 
	16.05485354046F, 25.40046587293F, 25.46145490892F, 13.29493442279F, 
	-7.13144543196F, -26.99526902828F, -37.51834591110F, -34.86223851732F, 
	-22.17391419345F, -7.60092212688F,  0.54866082718F, -1.34001379074F, 
	-10.16380927209F, -18.08450569646F, -17.34412745787F, -5.07314073148F, 
	14.74740121160F, 33.34315368113F, 42.04166657466F, 37.15907830036F, 
	22.03264425561F,  5.01961704410F, -5.36087906870F, -5.29989003271F, 
	 2.25969792643F,  9.59199527455F,  8.99345564746F, -2.41393692905F, 
	-20.72010289359F, -37.27832317550F, -43.58964680262F, -36.17477987934F, 
	-18.58904854184F,  0.59753566955F, 12.67683924517F, 13.69110903849F, 
	 6.48768980947F, -1.24132346414F, -1.76125530092F,  7.89953095093F, 
	23.97921603495F, 38.02136893134F, 41.74305775061F, 31.88815568240F, 
	12.22303627312F, -8.50164701520F, -21.44324122181F, -22.56737489349F, 
	-14.70948350078F, -5.61569391154F, -3.13618755177F, -10.40978453720F, 
	-23.87923330761F, -35.31248924836F, -36.65149908155F, -24.84608706065F, 
	-3.83181726734F, 17.52292630583F, 30.31950707681F, 30.53429127081F, 
	21.07939321634F,  9.83708041121F,  4.84150666593F,  9.44751117889F, 
	20.32732514145F, 29.47207102422F, 29.02127929063F, 16.07968508402F, 
	-5.31834014239F, -26.27031404173F, -37.91124048327F, -36.31604981718F, 
	-24.55192016093F, -10.69937104219F, -3.01694267663F, -5.09066854061F, 
	-13.81085056430F, -21.35474357317F, -20.00000000000F, -6.92952767429F, 
	13.81085056430F, 33.37493978807F, 43.01694267663F, 38.98364228966F, 
	24.55192016093F,  8.03177856972F, -2.08875951673F, -2.01395720573F, 
	 5.31834014239F, 12.20458616344F, 10.97872070937F, -1.18779977676F, 
	-20.32732514145F, -37.73178242635F, -44.84150666593F, -38.12135165868F, 
	-21.07939321634F, -2.25002002335F,  9.68049292319F, 10.76134494163F, 
	 3.83181726734F, -3.43818418681F, -3.34850091845F,  7.02821800090F, 
	23.87923330761F, 38.69405578467F, 43.13618755177F, 33.89996515901F, 
	14.70948350078F, -5.71689635397F, -18.55675877819F, -19.78262423226F, 
	-12.22303627312F, -3.60388443493F, -1.74305775061F, -9.73709768388F, 
	-23.97921603495F, -36.18380219839F, -38.23874469908F, -27.04294778332F, 
	-6.48768980947F, 14.59316220898F, 27.32316075483F, 27.68673557791F, 
	18.58904854184F,  7.89050863187F,  3.58964680262F,  8.99405192804F, 
	20.72010289359F, 30.69820817651F, 31.00654435254F, 18.69227597291F, 
	-2.25969792643F, -22.98438121475F, -34.63912093129F, -33.30388829156F, 
	-22.03264425560F, -8.87480705290F, -2.04166657466F, -5.05888243367F, 
	-14.74740121160F, -23.21113051598F, -22.65587254213F, -10.19976555100F, 
	10.16380927209F, 29.62428503820F, 39.45133917282F, 35.88519337434F, 
	22.17391419345F,  6.57796726986F, -2.48165408890F, -1.28900221919F, 
	 7.13144543196F, 14.98933682467F, 14.53854509108F,  2.88380537453F, 
	-16.05485354046F, -33.59347479655F, -41.17035362463F, -35.22152884007F, 
	-19.20101805740F, -1.56753894618F,  9.08441605575F,  8.90495799882F, 
	 0.83547094536F, -7.35911703374F, -7.89864126763F,  2.20230442172F, 
	19.16175266783F, 34.46946076518F, 39.75782953528F, 31.66048153483F, 
	13.81540676286F, -5.16410113977F, -16.57149371628F, -16.49669140528F, 
	-7.87753956710F,  1.46807276537F,  3.65555995455F, -4.44691291811F, 
	-19.23280416434F, -32.38088032281F, -35.70967456991F, -26.01999292630F, 
	-7.08376667691F, 12.39630148631F, 23.67611946262F, 22.86270367401F, 
	12.96364936335F,  1.91271791673F, -2.25397994134F,  3.76910485954F, 
	16.55607255278F, 27.95754238659F, 29.94030784228F, 19.41723095946F, 
	 0.22674930123F, -18.91277606346F, -29.29327217627F, -27.10578498708F, 
	-15.48214941447F, -2.50936345782F,  3.60784435292F, -0.60526558787F, 
	-11.87785730257F, -22.18817565896F, -23.59242318943F, -13.04732124390F, 
	 5.61366892291F, 23.72499430499F, 32.67406285836F, 28.78125655502F, 
	15.32993540049F,  0.56734787705F, -7.14686659546F, -4.20182778145F, 
	 6.23736869404F, 16.21547397696F, 17.81066464305F,  7.95576257483F, 
	-9.58285868126F, -26.24349435611F, -33.54459995418F, -27.95298618802F, 
	-12.90081215959F,  3.22655167948F, 11.95395996477F,  9.58743907599F, 
	-0.75177467217F, -11.10977178361F, -13.52404044611F, -4.84886344746F, 
	11.25833024920F, 26.36517189685F, 32.12817841799F, 25.14867997627F, 
	 8.97803448396F, -7.90476692969F, -16.96438828845F, -14.48488192867F, 
	-3.60506796611F,  7.66617606984F, 11.27943194972F,  3.97832635165F, 
	-10.70395143692F, -24.46164270054F, -29.06899489225F, -21.22590230064F, 
	-4.55469654774F, 12.42808759325F, 21.18577478812F, 18.03679009483F, 
	 6.18637304889F, -6.26459605663F, -11.15775440898F, -5.12085633311F, 
	 8.42523926976F, 21.27358105569F, 25.27509533573F, 17.17774733528F, 
	 0.61952705337F, -15.90061453784F, -23.89465447110F, -19.75580454664F, 
	-6.78301858998F,  6.81897486891F, 12.78739205056F,  7.65444581426F, 
	-5.23717762491F, -17.73455881316F, -21.71404803049F, -13.91863419393F, 
	 2.04806541910F, 17.74720358984F, 24.77064043973F, 19.60359053265F, 
	 5.64048860853F, -8.82379548135F, -15.44985965082F, -10.71362934001F, 
	 2.07333835323F, 14.76166267711F, 19.20379444421F, 12.09407020463F, 
	-3.03236384012F, -17.81825508635F, -23.94237007273F, -17.97395289107F, 
	-3.38079068209F, 11.48626308161F, 18.25416586258F, 13.39036095156F, 
	 0.22350142980F, -13.05634356295F, -18.24152108589F, -11.95280026678F, 
	 2.35455578156F, 16.40183355016F, 21.93754946029F, 15.58537684554F, 
	 0.84720120094F, -13.91538632250F, -20.34274630494F, -14.93834117952F, 
	-1.08579206078F, 12.95636083561F, 18.90518562017F, 13.30666467837F, 
	-0.45102658524F, -14.14213562373F, -19.54897341475F, -13.30666467837F, 
	 1.09481437984F, 15.32791041185F, 21.08579206078F, 14.93834117952F, 
	 0.34274630494F, -14.36888492496F, -20.84720120094F, -15.58537684554F, 
	-1.93754946029F, 11.88243769730F, 17.64544421844F, 11.95280026678F, 
	-1.75847891411F, -15.22792768452F, -20.22350142980F, -13.39036095156F, 
	 1.74583413743F, 16.79800816586F, 23.38079068210F, 17.97395289107F, 
	 3.94237007273F, -10.46601616111F, -16.96763615988F, -12.09407020463F, 
	 0.79620555579F, 13.52260857036F, 17.92666164677F, 10.71362934001F, 
	-4.55014034918F, -19.46047576612F, -25.64048860853F, -19.60359053266F, 
	-4.77064043973F, 10.53706765762F, 17.95193458090F, 13.91863419393F, 
	 1.71404803049F, -10.54971243430F, -14.76282237509F, -7.65444581426F, 
	 7.21260794944F, 21.46529637856F, 26.78301858999F, 19.75580454664F, 
	 3.89465447110F, -12.38365670962F, -20.61952705337F, -17.17774733528F, 
	-5.27509533573F,  7.01069019177F, 11.57476073024F,  5.12085633310F, 
	-8.84224559102F, -22.01967519083F, -26.18637304890F, -18.03679009483F, 
	-1.18577478812F, 15.85618365422F, 24.55469654774F, 21.22590230064F, 
	 9.06899489225F, -3.82262854692F, -9.29604856307F, -3.97832635164F, 
	 8.72056805028F, 20.61809517762F, 23.60506796611F, 14.48488192867F, 
	-3.03561171155F, -20.37950431778F, -28.97803448397F, -25.14867997627F, 
	-12.12817841800F,  1.91909935061F,  8.74166975080F,  4.84886344746F, 
	-6.47595955389F, -17.17449946386F, -19.24822532783F, -9.58743907599F, 
	 8.04604003523F, 25.05771956799F, 32.90081215959F, 27.95298618803F, 
	13.54459995418F, -2.04077689136F, -10.41714131874F, -7.95576257483F, 
	 2.18933535695F, 12.06879727050F, 13.76263130596F,  4.20182778145F, 
	-12.85313340455F, -28.85161912451F, -35.32993540049F, -28.78125655503F, 
	-12.67406285836F,  4.55927694247F, 14.38633107709F, 13.04732124390F, 
	 3.59242318943F, -6.09609558850F, -8.12214269743F,  0.60526558787F, 
	16.39215564708F, 30.79363470528F, 35.48214941447F, 27.10578498709F, 
	 9.29327217627F, -9.37149518400F, -20.22674930123F, -19.41723095946F, 
	-9.94030784228F,  0.32672886087F,  3.44392744722F, -3.76910485954F, 
	-17.74602005867F, -30.19698916419F, -32.96364936336F, -22.86270367401F, 
	-3.67611946262F, 15.88796976116F, 27.08376667691F, 26.01999292630F, 
	15.70967456991F,  4.09660907535F, -0.76719583566F,  4.44691291811F, 
	16.34444004546F, 26.81619848210F, 27.87753956710F, 16.49669140528F, 
	-3.42850628372F, -23.12017010770F, -33.81540676286F, -31.66048153483F, 
	-19.75782953528F, -6.18518951772F,  0.83824733217F, -2.20230442172F, 
	-12.10135873238F, -20.92515421372F, -20.83547094536F, -8.90495799882F, 
	10.91558394426F, 29.85181019365F, 39.20101805740F, 35.22152884007F, 
	21.17035362462F,  5.30920354909F, -3.94514645954F, -2.88380537453F, 
	 5.46145490893F, 13.29493442279F, 12.86855456804F,  1.28900221918F, 
	-17.51834591110F, -34.86223851733F, -42.17391419345F, -35.88519337435F, 
	-19.45133917282F, -1.34001379074F,  9.83619072792F, 10.19976555100F, 
	 2.65587254212F, -5.07314073148F, -5.25259878840F,  5.05888243367F, 
	22.04166657466F, 37.15907830036F, 42.03264425561F, 33.30388829156F, 
	14.63912093129F, -5.29989003271F, -17.74030207357F, -18.69227597291F, 
	-11.00654435254F, -2.41393692905F, -0.72010289359F, -8.99405192804F, 
	-23.58964680262F, -36.17477987934F, -38.58904854184F, -27.68673557791F, 
	-7.32316075483F, 13.69110903849F, 26.48768980947F, 27.04294778332F, 
	18.23874469908F,  7.89953095092F,  3.97921603495F,  9.73709768388F, 
	21.74305775062F, 31.88815568240F, 32.22303627312F, 19.78262423226F, 
	-1.44324122181F, -22.56737489349F, -34.70948350078F, -33.89996515901F, 
	-23.13618755177F, -10.40978453720F, -3.87923330761F, -7.02821800090F, 
	-16.65149908155F, -24.84608706066F, -23.83181726734F, -10.76134494163F, 
	10.31950707681F, 30.53429127081F, 41.07939321634F, 38.12135165868F, 
	24.84150666592F,  9.44751117889F,  0.32732514145F,  1.18779977676F, 
	 9.02127929063F, 16.07968508402F, 14.68165985761F,  2.01395720573F, 
	-17.91124048328F, -36.31604981718F, -44.55192016093F, -38.98364228966F, 
	-23.01694267663F, -5.09066854060F,  6.18914943571F,  6.92952767429F, 
	-0.00000000000F, -6.92952767429F, -6.18914943571F,  5.09066854061F, 
	23.01694267663F, 38.98364228966F, 44.55192016093F, 36.31604981718F, 
	17.91124048327F, -2.01395720574F, -14.68165985761F, -16.07968508402F, 
	-9.02127929062F, -1.18779977676F, -0.32732514145F, -9.44751117889F, 
	-24.84150666593F, -38.12135165868F, -41.07939321634F, -30.53429127081F, 
	-10.31950707681F, 10.76134494164F, 23.83181726734F, 24.84608706065F, 
	16.65149908155F,  7.02821800089F,  3.87923330761F, 10.40978453721F, 
	23.13618755177F, 33.89996515901F, 34.70948350078F, 22.56737489349F, 
	 1.44324122180F, -19.78262423226F, -32.22303627312F, -31.88815568239F, 
	-21.74305775061F, -9.73709768388F, -3.97921603495F, -7.89953095093F, 
	-18.23874469908F, -27.04294778332F, -26.48768980947F, -13.69110903848F, 
	 7.32316075483F, 27.68673557791F, 38.58904854184F, 36.17477987934F, 
	23.58964680262F,  8.99405192804F,  0.72010289359F,  2.41393692905F, 
	11.00654435254F, 18.69227597291F, 17.74030207357F,  5.29989003271F, 
	-14.63912093130F, -33.30388829156F, -42.03264425561F, -37.15907830036F, 
	-22.04166657465F, -5.05888243367F,  5.25259878840F,  5.07314073148F, 
	-2.65587254213F, -10.19976555100F, -9.83619072792F,  1.34001379074F, 
	19.45133917282F, 35.88519337435F, 42.17391419345F, 34.86223851732F, 
	17.51834591110F, -1.28900221919F, -12.86855456804F, -13.29493442279F, 
	-5.46145490892F,  2.88380537454F,  3.94514645954F, -5.30920354909F, 
	-21.17035362463F, -35.22152884007F, -39.20101805740F, -29.85181019364F, 
	-10.91558394425F,  8.90495799882F, 20.83547094536F, 20.92515421372F, 
	12.10135873237F,  2.20230442172F, -0.83824733217F,  6.18518951772F, 
	19.75782953528F, 31.66048153483F, 33.81540676286F, 23.12017010769F, 
	 3.42850628372F, -16.49669140529F, -27.87753956710F, -26.81619848209F, 
}; 


// End of File
