//#############################################################################
//! \file wrfft4Input.c
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
	 0.00000000000F, 38.25186476228F, 54.73978060248F, 44.10044334829F, 
	19.70192963377F,  0.69867596029F, -3.85724087241F,  0.11718569589F, 
	 0.64836771734F, -7.64816595826F, -19.45538073375F, -25.77311578113F, 
	-23.43557075270F, -16.95877111353F, -11.61980749709F, -6.39022190609F, 
	 4.62501173637F, 23.25989339415F, 40.92367103084F, 43.30448224052F, 
	23.42927962060F, -9.26291885422F, -33.90488163318F, -34.45376615947F, 
	-13.16774185430F, 11.13485342120F, 18.94462175021F,  6.08852707506F, 
	-14.09058839490F, -23.59208962635F, -15.35344861602F,  2.31032902066F, 
	15.08738087780F, 15.72891313178F,  8.44541571793F,  1.99851123056F, 
	 0.11665801443F, -0.56236792746F, -3.86353200452F, -7.31209392470F, 
	-3.82275949650F,  9.22150552980F, 23.56963348658F, 24.87154645453F, 
	 5.86829278105F, -24.38805073412F, -45.40108937678F, -41.42625654144F, 
	-14.96025988297F, 14.93295202401F, 28.40429689388F, 20.78153061002F, 
	 4.74166975080F, -2.47571581886F,  5.48145035328F, 19.82957831006F, 
	26.21859013216F, 17.92205645656F,  0.25701188042F, -16.43442455544F, 
	-26.60996253185F, -31.91903099649F, -34.93872023536F, -32.72570561468F, 
	-18.69390100190F,  8.29963351119F, 37.74927925169F, 52.64317346622F, 
	43.14167223477F, 16.30730356060F, -8.33465921836F, -14.74137354530F, 
	-3.82905062860F,  7.96046164205F,  3.98436186725F, -17.23038566321F, 
	-40.42607210350F, -46.91100236462F, -30.31370849898F, -0.86406275849F, 
	24.42607210350F, 35.44130574595F, 34.01563813275F, 27.56873364538F, 
	19.82905062860F,  8.77632329823F, -7.03792378367F, -22.27235380767F, 
	-27.14167223477F, -17.11397817879F,  0.25072074832F,  9.91128657156F, 
	 2.69390100190F, -15.04935950843F, -25.68869676261F, -15.85603412662F, 
	10.60996253185F, 34.64534463818F, 37.74298811958F, 17.60713883087F, 
	-10.21859013216F, -25.79462855713F, -20.85403335531F, -3.48933442821F, 
	11.25833024920F, 14.74766467740F,  9.59570310612F,  3.27796805873F, 
	-1.03974011703F, -6.34880858167F, -15.22632762119F, -23.38701438899F, 
	-21.86829278105F, -6.66062637178F, 14.43036651342F, 26.30768975762F, 
	19.82275949650F,  1.34704367764F, -11.50905099751F, -5.40268231960F, 
	15.88334198557F, 33.53068405687F, 29.55458428206F,  2.48200695096F, 
	-31.08738087780F, -50.08539414378F, -45.27396838195F, -24.18297549676F, 
	-1.90941160510F, 12.12239300769F, 19.05537824979F, 24.39434186623F, 
	29.16774185430F, 28.48871591240F, 18.53229863115F,  3.29786860715F, 
	-7.42927962060F, -7.77528695310F, -2.92367103084F, -5.04897331141F, 
	-20.62501173637F, -41.38484321702F, -49.00760950088F, -30.81629400958F, 
	 7.43557075270F, 43.98403586388F, 57.45538073375F, 43.17736124569F, 
	15.35163228265F, -6.08223594296F, -11.51534212962F, -6.66372620736F, 
	-3.70192963377F, -8.57124806087F, -16.73978060248F, -20.04094467953F, 
	-16.00000000000F, -9.52320036083F, -5.88763639549F, -3.67462177482F, 
	 3.70192963377F, 18.90959604304F, 34.14275912759F, 35.64638098332F, 
	16.64836771734F, -13.61321620533F, -34.82796373578F, -31.73816602820F, 
	-7.43557075270F, 18.57042417390F, 26.38019250291F, 11.82069817666F, 
	-11.37498826363F, -24.51517172896F, -19.70374596713F, -4.47058288259F, 
	 7.42927962060F,  8.94800122853F,  4.09511836682F,  1.07542912796F, 
	 2.83225814570F,  5.16980317413F,  3.57203874818F,  0.12347682800F, 
	 1.90941160510F, 11.93710566107F, 22.64655138398F, 20.52124910341F, 
	-0.91261912220F, -32.04615199133F, -52.18200128004F, -45.77655389255F, 
	-15.88334198557F, 17.64855215529F, 34.13646799548F, 28.21710136272F, 
	12.17724050350F,  3.25645528274F,  8.19705048455F, 18.90649620746F, 
	21.86829278105F, 11.14114455330F, -7.40108937678F, -23.21533645869F, 
	-30.96025988297F, -32.84211309910F, -32.22312010409F, -26.99353451309F, 
	-11.25833024920F, 15.73520426389F, 43.48145035328F, 55.35877359749F, 
	42.21859013216F, 11.95700620949F, -15.11557112161F, -22.39947480250F, 
	-10.60996253185F,  3.61016429093F,  3.06127976464F, -14.51478553194F, 
	-34.69390100190F, -39.47543161192F, -22.87813774628F,  4.86810834311F, 
	27.14167223477F, 34.51822364335F, 29.66534078164F, 20.78782174213F, 
	12.17094937140F,  1.99541139498F, -11.38822113479F, -23.19543591027F, 
	-24.42607210350F, -11.38180707719F,  7.68629150102F, 17.34685732426F, 
	 8.42607210350F, -12.33375937716F, -26.61177886522F, -20.20633147773F, 
	 3.82905062860F, 26.98724338098F, 30.96207621633F, 13.25684147976F, 
	-11.14167223477F, -23.07902842586F, -15.12186225371F,  3.94623632450F, 
	18.69390100190F, 20.47983577900F, 12.31130323739F,  2.35488595613F, 
	-5.39003746815F, -13.12972048493F, -22.88442887839F, -30.16792629224F, 
	-26.21859013216F, -7.58370847438F, 17.14596664469F, 32.03986085922F, 
	27.25833024920F,  8.78261443034F, -5.77687989591F, -2.68708218833F, 
	14.96025988297F, 29.18038670575F, 22.77367237881F, -5.17609430624F, 
	-37.86829278105F, -54.43569149489F, -46.19705048455F, -21.46737536548F, 
	 3.82275949650F, 19.55796376039F, 26.49094900249F, 30.12651296783F, 
	31.88334198557F, 27.56563380980F, 14.18200128003F, -3.48304329610F, 
	-15.08738087780F, -14.55619885635F, -7.27396838195F, -5.97205541401F, 
	-17.90941160510F, -35.65267211543F, -41.57203874818F, -23.38072325688F, 
	13.16774185430F, 46.69963599515F, 56.53229863115F, 38.82706389458F, 
	 8.57072037940F, -13.74033720016F, -18.29625403287F, -11.01402355847F, 
	-4.62501173637F, -5.85564792960F, -11.00760950088F, -12.60537392683F, 
	-8.56442924730F, -3.79102925923F, -3.17203626422F, -4.59770387742F, 
	-0.64836771734F, 12.12868413979F, 26.48465787038F, 28.86546908007F, 
	12.29807036623F, -14.53629830793F, -32.11236360451F, -26.00599492660F, 
	 0.00000000000F, 26.00599492660F, 32.11236360451F, 14.53629830793F, 
	-12.29807036623F, -28.86546908007F, -26.48465787038F, -12.12868413979F, 
	 0.64836771735F,  4.59770387742F,  3.17203626422F,  3.79102925923F, 
	 8.56442924730F, 12.60537392683F, 11.00760950088F,  5.85564792959F, 
	 4.62501173637F, 11.01402355847F, 18.29625403287F, 13.74033720016F, 
	-8.57072037941F, -38.82706389458F, -56.53229863115F, -46.69963599515F, 
	-13.16774185429F, 23.38072325689F, 41.57203874818F, 35.65267211542F, 
	17.90941160510F,  5.97205541401F,  7.27396838195F, 14.55619885635F, 
	15.08738087780F,  3.48304329610F, -14.18200128004F, -27.56563380980F, 
	-31.88334198557F, -30.12651296782F, -26.49094900249F, -19.55796376038F, 
	-3.82275949650F, 21.46737536549F, 46.19705048456F, 54.43569149489F, 
	37.86829278105F,  5.17609430623F, -22.77367237882F, -29.18038670575F, 
	-14.96025988297F,  2.68708218833F,  5.77687989591F, -8.78261443034F, 
	-27.25833024920F, -32.03986085922F, -17.14596664468F,  7.58370847438F, 
	26.21859013216F, 30.16792629224F, 22.88442887839F, 13.12972048493F, 
	 5.39003746815F, -2.35488595613F, -12.31130323739F, -20.47983577900F, 
	-18.69390100190F, -3.94623632449F, 15.12186225372F, 23.07902842586F, 
	11.14167223477F, -13.25684147976F, -30.96207621633F, -26.98724338098F, 
	-3.82905062860F, 20.20633147773F, 26.61177886522F, 12.33375937715F, 
	-8.42607210350F, -17.34685732426F, -7.68629150101F, 11.38180707720F, 
	24.42607210350F, 23.19543591027F, 11.38822113478F, -1.99541139498F, 
	-12.17094937140F, -20.78782174213F, -29.66534078164F, -34.51822364335F, 
	-27.14167223477F, -4.86810834311F, 22.87813774629F, 39.47543161192F, 
	34.69390100190F, 14.51478553193F, -3.06127976465F, -3.61016429093F, 
	10.60996253185F, 22.39947480250F, 15.11557112161F, -11.95700620949F, 
	-42.21859013217F, -55.35877359749F, -43.48145035328F, -15.73520426388F, 
	11.25833024920F, 26.99353451309F, 32.22312010409F, 32.84211309910F, 
	30.96025988297F, 23.21533645869F,  7.40108937678F, -11.14114455331F, 
	-21.86829278105F, -18.90649620746F, -8.19705048455F, -3.25645528274F, 
	-12.17724050350F, -28.21710136273F, -34.13646799548F, -17.64855215528F, 
	15.88334198557F, 45.77655389255F, 52.18200128003F, 32.04615199132F, 
	 0.91261912220F, -20.52124910342F, -22.64655138398F, -11.93710566107F, 
	-1.90941160510F, -0.12347682800F, -3.57203874818F, -5.16980317413F, 
	-2.83225814570F, -1.07542912796F, -4.09511836682F, -8.94800122853F, 
	-7.42927962060F,  4.47058288259F, 19.70374596713F, 24.51517172896F, 
	11.37498826363F, -11.82069817666F, -26.38019250291F, -18.57042417390F, 
	 7.43557075270F, 31.73816602820F, 34.82796373578F, 13.61321620533F, 
	-16.64836771735F, -35.64638098332F, -34.14275912758F, -18.90959604304F, 
	-3.70192963377F,  3.67462177482F,  5.88763639549F,  9.52320036083F, 
	16.00000000000F, 20.04094467954F, 16.73978060248F,  8.57124806086F, 
	 3.70192963377F,  6.66372620736F, 11.51534212962F,  6.08223594296F, 
	-15.35163228266F, -43.17736124569F, -57.45538073375F, -43.98403586388F, 
	-7.43557075269F, 30.81629400959F, 49.00760950088F, 41.38484321702F, 
	20.62501173637F,  5.04897331140F,  2.92367103084F,  7.77528695309F, 
	 7.42927962059F, -3.29786860715F, -18.53229863115F, -28.48871591240F, 
	-29.16774185430F, -24.39434186623F, -19.05537824979F, -12.12239300768F, 
	 1.90941160510F, 24.18297549676F, 45.27396838195F, 50.08539414377F, 
	31.08738087780F, -2.48200695097F, -29.55458428207F, -33.53068405687F, 
	-15.88334198557F,  5.40268231960F, 11.50905099751F, -1.34704367764F, 
	-19.82275949650F, -26.30768975762F, -14.43036651341F,  6.66062637178F, 
	21.86829278105F, 23.38701438899F, 15.22632762118F,  6.34880858167F, 
	 1.03974011703F, -3.27796805874F, -9.59570310612F, -14.74766467740F, 
	-11.25833024920F,  3.48933442821F, 20.85403335532F, 25.79462855713F, 
	10.21859013216F, -17.60713883088F, -37.74298811958F, -34.64534463818F, 
	-10.60996253185F, 15.85603412662F, 25.68869676261F, 15.04935950843F, 
	-2.69390100190F, -9.91128657156F, -0.25072074831F, 17.11397817879F, 
	27.14167223477F, 22.27235380767F,  7.03792378367F, -8.77632329823F, 
	-19.82905062860F, -27.56873364538F, -34.01563813275F, -35.44130574595F, 
	-24.42607210349F,  0.86406275849F, 30.31370849899F, 46.91100236463F, 
	40.42607210350F, 17.23038566320F, -3.98436186725F, -7.96046164205F, 
	 3.82905062860F, 14.74137354530F,  8.33465921836F, -16.30730356061F, 
	-43.14167223477F, -52.64317346622F, -37.74927925168F, -8.29963351118F, 
	18.69390100190F, 32.72570561469F, 34.93872023536F, 31.91903099649F, 
	26.60996253185F, 16.43442455543F, -0.25701188042F, -17.92205645656F, 
	-26.21859013217F, -19.82957831006F, -5.48145035328F,  2.47571581886F, 
	-4.74166975080F, -20.78153061003F, -28.40429689388F, -14.93295202401F, 
	14.96025988297F, 41.42625654144F, 45.40108937678F, 24.38805073412F, 
	-5.86829278105F, -24.87154645453F, -23.56963348658F, -9.22150552980F, 
	 3.82275949650F,  7.31209392470F,  3.86353200452F,  0.56236792747F, 
	-0.11665801443F, -1.99851123056F, -8.44541571794F, -15.72891313179F, 
	-15.08738087780F, -2.31032902066F, 15.35344861602F, 23.59208962635F, 
	14.09058839490F, -6.08852707507F, -18.94462175021F, -11.13485342120F, 
	13.16774185430F, 34.45376615947F, 33.90488163318F,  9.26291885421F, 
	-23.42927962060F, -43.30448224052F, -40.92367103084F, -23.25989339415F, 
	-4.62501173637F,  6.39022190609F, 11.61980749709F, 16.95877111353F, 
	23.43557075270F, 25.77311578113F, 19.45538073375F,  7.64816595826F, 
	-0.64836771735F, -0.11718569590F,  3.85724087241F, -0.69867596029F, 
	-19.70192963377F, -44.10044334830F, -54.73978060248F, -38.25186476228F, 
	 0.00000000001F, 38.25186476229F, 54.73978060248F, 44.10044334829F, 
	19.70192963377F,  0.69867596029F, -3.85724087242F,  0.11718569589F, 
	 0.64836771734F, -7.64816595827F, -19.45538073375F, -25.77311578113F, 
	-23.43557075270F, -16.95877111352F, -11.61980749708F, -6.39022190609F, 
	 4.62501173637F, 23.25989339416F, 40.92367103084F, 43.30448224052F, 
	23.42927962059F, -9.26291885422F, -33.90488163318F, -34.45376615947F, 
	-13.16774185430F, 11.13485342120F, 18.94462175021F,  6.08852707506F, 
	-14.09058839490F, -23.59208962635F, -15.35344861602F,  2.31032902067F, 
	15.08738087780F, 15.72891313178F,  8.44541571793F,  1.99851123056F, 
	 0.11665801443F, -0.56236792746F, -3.86353200452F, -7.31209392470F, 
	-3.82275949650F,  9.22150552981F, 23.56963348659F, 24.87154645453F, 
	 5.86829278105F, -24.38805073413F, -45.40108937679F, -41.42625654143F, 
	-14.96025988296F, 14.93295202402F, 28.40429689389F, 20.78153061002F, 
	 4.74166975080F, -2.47571581886F,  5.48145035329F, 19.82957831006F, 
	26.21859013216F, 17.92205645655F,  0.25701188041F, -16.43442455544F, 
	-26.60996253185F, -31.91903099649F, -34.93872023536F, -32.72570561468F, 
	-18.69390100189F,  8.29963351119F, 37.74927925169F, 52.64317346622F, 
	43.14167223476F, 16.30730356060F, -8.33465921836F, -14.74137354530F, 
	-3.82905062860F,  7.96046164205F,  3.98436186724F, -17.23038566321F, 
	-40.42607210350F, -46.91100236462F, -30.31370849898F, -0.86406275848F, 
	24.42607210350F, 35.44130574596F, 34.01563813275F, 27.56873364538F, 
	19.82905062860F,  8.77632329823F, -7.03792378367F, -22.27235380767F, 
	-27.14167223477F, -17.11397817879F,  0.25072074832F,  9.91128657156F, 
	 2.69390100190F, -15.04935950843F, -25.68869676261F, -15.85603412661F, 
	10.60996253186F, 34.64534463819F, 37.74298811958F, 17.60713883087F, 
	-10.21859013217F, -25.79462855713F, -20.85403335531F, -3.48933442820F, 
	11.25833024920F, 14.74766467740F,  9.59570310611F,  3.27796805873F, 
	-1.03974011703F, -6.34880858168F, -15.22632762119F, -23.38701438899F, 
	-21.86829278105F, -6.66062637178F, 14.43036651342F, 26.30768975763F, 
	19.82275949650F,  1.34704367763F, -11.50905099751F, -5.40268231960F, 
	15.88334198557F, 33.53068405687F, 29.55458428206F,  2.48200695096F, 
	-31.08738087780F, -50.08539414378F, -45.27396838195F, -24.18297549675F, 
	-1.90941160510F, 12.12239300769F, 19.05537824979F, 24.39434186623F, 
	29.16774185430F, 28.48871591240F, 18.53229863115F,  3.29786860714F, 
	-7.42927962060F, -7.77528695310F, -2.92367103084F, -5.04897331141F, 
	-20.62501173637F, -41.38484321703F, -49.00760950088F, -30.81629400958F, 
	 7.43557075271F, 43.98403586389F, 57.45538073375F, 43.17736124569F, 
	15.35163228265F, -6.08223594296F, -11.51534212962F, -6.66372620736F, 
	-3.70192963377F, -8.57124806087F, -16.73978060248F, -20.04094467953F, 
	-16.00000000000F, -9.52320036082F, -5.88763639549F, -3.67462177482F, 
	 3.70192963377F, 18.90959604304F, 34.14275912759F, 35.64638098332F, 
	16.64836771734F, -13.61321620534F, -34.82796373578F, -31.73816602820F, 
	-7.43557075270F, 18.57042417390F, 26.38019250291F, 11.82069817666F, 
	-11.37498826363F, -24.51517172896F, -19.70374596713F, -4.47058288259F, 
	 7.42927962060F,  8.94800122853F,  4.09511836682F,  1.07542912796F, 
	 2.83225814570F,  5.16980317414F,  3.57203874818F,  0.12347682800F, 
	 1.90941160510F, 11.93710566108F, 22.64655138398F, 20.52124910341F, 
	-0.91261912221F, -32.04615199133F, -52.18200128004F, -45.77655389255F, 
	-15.88334198556F, 17.64855215529F, 34.13646799548F, 28.21710136272F, 
	12.17724050350F,  3.25645528274F,  8.19705048456F, 18.90649620746F, 
	21.86829278105F, 11.14114455330F, -7.40108937679F, -23.21533645869F, 
	-30.96025988297F, -32.84211309909F, -32.22312010408F, -26.99353451308F, 
	-11.25833024919F, 15.73520426390F, 43.48145035329F, 55.35877359749F, 
	42.21859013216F, 11.95700620948F, -15.11557112162F, -22.39947480250F, 
	-10.60996253185F,  3.61016429093F,  3.06127976464F, -14.51478553194F, 
	-34.69390100190F, -39.47543161192F, -22.87813774628F,  4.86810834312F, 
	27.14167223477F, 34.51822364335F, 29.66534078164F, 20.78782174213F, 
	12.17094937140F,  1.99541139498F, -11.38822113479F, -23.19543591028F, 
	-24.42607210350F, -11.38180707719F,  7.68629150102F, 17.34685732426F, 
	 8.42607210349F, -12.33375937716F, -26.61177886522F, -20.20633147773F, 
	 3.82905062861F, 26.98724338098F, 30.96207621633F, 13.25684147975F, 
	-11.14167223477F, -23.07902842586F, -15.12186225371F,  3.94623632450F, 
	18.69390100190F, 20.47983577900F, 12.31130323738F,  2.35488595613F, 
	-5.39003746815F, -13.12972048493F, -22.88442887839F, -30.16792629224F, 
	-26.21859013216F, -7.58370847438F, 17.14596664469F, 32.03986085923F, 
	27.25833024920F,  8.78261443033F, -5.77687989592F, -2.68708218833F, 
	14.96025988297F, 29.18038670575F, 22.77367237881F, -5.17609430625F, 
	-37.86829278106F, -54.43569149489F, -46.19705048455F, -21.46737536548F, 
	 3.82275949650F, 19.55796376039F, 26.49094900249F, 30.12651296783F, 
	31.88334198557F, 27.56563380980F, 14.18200128003F, -3.48304329611F, 
	-15.08738087780F, -14.55619885635F, -7.27396838195F, -5.97205541401F, 
	-17.90941160510F, -35.65267211543F, -41.57203874818F, -23.38072325688F, 
	13.16774185431F, 46.69963599516F, 56.53229863115F, 38.82706389457F, 
	 8.57072037940F, -13.74033720017F, -18.29625403287F, -11.01402355847F, 
	-4.62501173637F, -5.85564792960F, -11.00760950088F, -12.60537392683F, 
	-8.56442924730F, -3.79102925923F, -3.17203626422F, -4.59770387742F, 
	-0.64836771734F, 12.12868413979F, 26.48465787039F, 28.86546908007F, 
	12.29807036623F, -14.53629830794F, -32.11236360451F, -26.00599492660F, 
	 0.00000000001F, 26.00599492660F, 32.11236360451F, 14.53629830793F, 
	-12.29807036624F, -28.86546908007F, -26.48465787038F, -12.12868413979F, 
	 0.64836771735F,  4.59770387742F,  3.17203626422F,  3.79102925923F, 
	 8.56442924730F, 12.60537392684F, 11.00760950088F,  5.85564792959F, 
	 4.62501173637F, 11.01402355847F, 18.29625403287F, 13.74033720016F, 
	-8.57072037941F, -38.82706389458F, -56.53229863115F, -46.69963599515F, 
	-13.16774185429F, 23.38072325689F, 41.57203874819F, 35.65267211542F, 
	17.90941160510F,  5.97205541401F,  7.27396838195F, 14.55619885635F, 
	15.08738087779F,  3.48304329609F, -14.18200128004F, -27.56563380980F, 
	-31.88334198557F, -30.12651296782F, -26.49094900248F, -19.55796376038F, 
	-3.82275949649F, 21.46737536549F, 46.19705048456F, 54.43569149489F, 
	37.86829278104F,  5.17609430623F, -22.77367237882F, -29.18038670575F, 
	-14.96025988296F,  2.68708218833F,  5.77687989591F, -8.78261443034F, 
	-27.25833024920F, -32.03986085922F, -17.14596664468F,  7.58370847439F, 
	26.21859013217F, 30.16792629224F, 22.88442887838F, 13.12972048492F, 
	 5.39003746815F, -2.35488595613F, -12.31130323739F, -20.47983577900F, 
	-18.69390100190F, -3.94623632449F, 15.12186225372F, 23.07902842586F, 
	11.14167223476F, -13.25684147976F, -30.96207621633F, -26.98724338098F, 
	-3.82905062860F, 20.20633147773F, 26.61177886521F, 12.33375937715F, 
	-8.42607210350F, -17.34685732426F, -7.68629150101F, 11.38180707720F, 
	24.42607210350F, 23.19543591027F, 11.38822113478F, -1.99541139498F, 
	-12.17094937140F, -20.78782174213F, -29.66534078164F, -34.51822364335F, 
}; 


// End of File
