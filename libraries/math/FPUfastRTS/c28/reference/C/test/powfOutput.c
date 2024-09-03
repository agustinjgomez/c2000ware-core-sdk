//#############################################################################
//! \file powfOutput.c
//! \brief  Powf Ouput Vector (512) 
//! \author Vishal Coelho 
//! \date   07-Feb-2017
//! 
//
//  Group:          C2000
//  Target Family:  $DEVICE$
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


const double test_golden[512] = {
     1.000000000000L,  0.987022919540L,  0.974366748965L,  0.962022392789L, 
     0.949981068304L,  0.938234293437L,  0.926773875143L,  0.915591898291L, 
     0.904680715041L,  0.894032934664L,  0.883641413804L,  0.873499247156L, 
     0.863599758534L,  0.853936492316L,  0.844503205250L,  0.835293858605L, 
     0.826302610638L,  0.817523809389L,  0.808951985759L,  0.800581846878L, 
     0.792408269750L,  0.784426295141L,  0.776631121736L,  0.769018100513L, 
     0.761582729354L,  0.754320647869L,  0.747227632428L,  0.740299591384L, 
     0.733532560497L,  0.726922698525L,  0.720466282996L,  0.714159706146L, 
     0.707999471009L,  0.701982187666L,  0.696104569629L,  0.690363430379L, 
     0.684755680020L,  0.679278322072L,  0.673928450384L,  0.668703246161L, 
     0.663599975103L,  0.658615984659L,  0.653748701372L,  0.648995628333L, 
     0.644354342726L,  0.639822493464L,  0.635397798911L,  0.631078044691L, 
     0.626861081576L,  0.622744823449L,  0.618727245343L,  0.614806381554L, 
     0.610980323818L,  0.607247219553L,  0.603605270170L,  0.600052729437L, 
     0.596587901912L,  0.593209141416L,  0.589914849578L,  0.586703474418L, 
     0.583573508985L,  0.580523490045L,  0.577551996812L,  0.574657649725L, 
     0.571839109264L,  0.569095074814L,  0.566424283563L,  0.563825509441L, 
     0.561297562091L,  0.558839285885L,  0.556449558962L,  0.554127292308L, 
     0.551871428865L,  0.549680942668L,  0.547554838016L,  0.545492148664L, 
     0.543491937055L,  0.541553293560L,  0.539675335766L,  0.537857207764L, 
     0.536098079483L,  0.534397146033L,  0.532753627074L,  0.531166766205L, 
     0.529635830381L,  0.528160109335L,  0.526738915037L,  0.525371581155L, 
     0.524057462549L,  0.522795934768L,  0.521586393575L,  0.520428254484L, 
     0.519320952311L,  0.518263940740L,  0.517256691912L,  0.516298696015L, 
     0.515389460898L,  0.514528511694L,  0.513715390457L,  0.512949655810L, 
     0.512230882609L,  0.511558661613L,  0.510932599171L,  0.510352316915L, 
     0.509817451468L,  0.509327654161L,  0.508882590757L,  0.508481941192L, 
     0.508125399315L,  0.507812672647L,  0.507543482146L,  0.507317561975L, 
     0.507134659289L,  0.506994534019L,  0.506896958675L,  0.506841718144L, 
     0.506828609511L,  0.506857441873L,  0.506928036168L,  0.507040225011L, 
     0.507193852532L,  0.507388774226L,  0.507624856807L,  0.507901978066L, 
     0.508220026742L,  0.508578902390L,  0.508978515263L,  0.509418786194L, 
     0.509899646486L,  0.510421037809L,  0.510982912100L,  0.511585231467L, 
     0.512227968102L,  0.512911104196L,  0.513634631861L,  0.514398553055L, 
     0.515202879513L,  0.516047632680L,  0.516932843655L,  0.517858553131L, 
     0.518824811347L,  0.519831678038L,  0.520879222393L,  0.521967523018L, 
     0.523096667901L,  0.524266754378L,  0.525477889112L,  0.526730188068L, 
     0.528023776493L,  0.529358788903L,  0.530735369073L,  0.532153670029L, 
     0.533613854041L,  0.535116092631L,  0.536660566569L,  0.538247465886L, 
     0.539876989882L,  0.541549347143L,  0.543264755558L,  0.545023442339L, 
     0.546825644050L,  0.548671606634L,  0.550561585443L,  0.552495845277L, 
     0.554474660422L,  0.556498314690L,  0.558567101467L,  0.560681323766L, 
     0.562841294269L,  0.565047335396L,  0.567299779354L,  0.569598968204L, 
     0.571945253930L,  0.574338998503L,  0.576780573957L,  0.579270362465L, 
     0.581808756419L,  0.584396158514L,  0.587032981831L,  0.589719649932L, 
     0.592456596951L,  0.595244267691L,  0.598083117725L,  0.600973613502L, 
     0.603916232450L,  0.606911463092L,  0.609959805159L,  0.613061769709L, 
     0.616217879247L,  0.619428667854L,  0.622694681317L,  0.626016477256L, 
     0.629394625271L,  0.632829707074L,  0.636322316641L,  0.639873060353L, 
     0.643482557159L,  0.647151438722L,  0.650880349588L,  0.654669947347L, 
     0.658520902804L,  0.662433900149L,  0.666409637140L,  0.670448825279L, 
     0.674552190002L,  0.678720470869L,  0.682954421760L,  0.687254811071L, 
     0.691622421924L,  0.696058052371L,  0.700562515611L,  0.705136640206L, 
     0.709781270309L,  0.714497265887L,  0.719285502958L,  0.724146873830L, 
     0.729082287343L,  0.734092669117L,  0.739178961813L,  0.744342125386L, 
     0.749583137352L,  0.754902993065L,  0.760302705984L,  0.765783307967L, 
     0.771345849550L,  0.776991400248L,  0.782721048855L,  0.788535903749L, 
     0.794437093206L,  0.800425765724L,  0.806503090343L,  0.812670256985L, 
     0.818928476790L,  0.825278982464L,  0.831723028633L,  0.838261892207L, 
     0.844896872745L,  0.851629292831L,  0.858460498464L,  0.865391859441L, 
     0.872424769762L,  0.879560648035L,  0.886800937895L,  0.894147108421L, 
     0.901600654577L,  0.909163097646L,  0.916835985684L,  0.924620893976L, 
     0.932519425509L,  0.940533211440L,  0.948663911595L,  0.956913214955L, 
     0.965282840168L,  0.973774536063L,  0.982390082178L,  0.991131289298L, 
     1.000000000000L,  1.008998089213L,  1.018127464789L,  1.027390068083L, 
     1.036787874543L,  1.046322894321L,  1.055997172880L,  1.065812791632L, 
     1.075771868571L,  1.085876558932L,  1.096129055854L,  1.106531591063L, 
     1.117086435560L,  1.127795900336L,  1.138662337084L,  1.149688138941L, 
     1.160875741236L,  1.172227622251L,  1.183746304007L,  1.195434353055L, 
     1.207294381289L,  1.219329046771L,  1.231541054578L,  1.243933157660L, 
     1.256508157718L,  1.269268906100L,  1.282218304713L,  1.295359306953L, 
     1.308694918655L,  1.322228199064L,  1.335962261818L,  1.349900275960L, 
     1.364045466961L,  1.378401117772L,  1.392970569892L,  1.407757224457L, 
     1.422764543351L,  1.437996050345L,  1.453455332249L,  1.469146040096L, 
     1.485071890344L,  1.501236666103L,  1.517644218392L,  1.534298467411L, 
     1.551203403850L,  1.568363090216L,  1.585781662189L,  1.603463330008L, 
     1.621412379880L,  1.639633175424L,  1.658130159137L,  1.676907853894L, 
     1.695970864477L,  1.715323879137L,  1.734971671184L,  1.754919100609L, 
     1.775171115747L,  1.795732754962L,  1.816609148372L,  1.837805519614L, 
     1.859327187633L,  1.881179568520L,  1.903368177377L,  1.925898630228L, 
     1.948776645963L,  1.972008048325L,  1.995598767938L,  2.019554844374L, 
     2.043882428263L,  2.068587783447L,  2.093677289181L,  2.119157442369L, 
     2.145034859859L,  2.171316280779L,  2.198008568914L,  2.225118715147L, 
     2.252653839938L,  2.280621195859L,  2.309028170180L,  2.337882287508L, 
     2.367191212483L,  2.396962752527L,  2.427204860652L,  2.457925638321L, 
     2.489133338377L,  2.520836368026L,  2.553043291883L,  2.585762835081L, 
     2.619003886450L,  2.652775501753L,  2.687086906996L,  2.721947501808L, 
     2.757366862880L,  2.793354747495L,  2.829921097112L,  2.867076041040L, 
     2.904829900179L,  2.943193190844L,  2.982176628668L,  3.021791132588L, 
     3.062047828913L,  3.102958055475L,  3.144533365876L,  3.186785533813L, 
     3.229726557502L,  3.273368664194L,  3.317724314781L,  3.362806208508L, 
     3.408627287775L,  3.455200743050L,  3.502540017874L,  3.550658813987L, 
     3.599571096549L,  3.649291099480L,  3.699833330908L,  3.751212578737L, 
     3.803443916332L,  3.856542708323L,  3.910524616535L,  3.965405606044L, 
     4.021201951358L,  4.077930242738L,  4.135607392647L,  4.194250642337L, 
     4.253877568583L,  4.314506090556L,  4.376154476842L,  4.438841352616L, 
     4.502585706970L,  4.567406900389L,  4.633324672402L,  4.700359149389L, 
     4.768530852552L,  4.837860706071L,  4.908370045422L,  4.980080625882L, 
     5.053014631219L,  5.127194682561L,  5.202643847467L,  5.279385649190L, 
     5.357444076137L,  5.436843591541L,  5.517609143338L,  5.599766174260L, 
     5.683340632147L,  5.768358980484L,  5.854848209167L,  5.942835845500L, 
     6.032349965440L,  6.123419205076L,  6.216072772372L,  6.310340459153L, 
     6.406252653361L,  6.503840351579L,  6.603135171826L,  6.704169366635L, 
     6.806975836416L,  6.911588143114L,  7.018040524166L,  7.126367906763L, 
     7.236605922431L,  7.348790921927L,  7.462959990468L,  7.579150963291L, 
     7.697402441560L,  7.817753808625L,  7.940245246635L,  8.064917753526L, 
     8.191813160377L,  8.320974149158L,  8.452444270864L,  8.586267964059L, 
     8.722490573823L,  8.861158371129L,  9.002318572644L,  9.146019360974L, 
     9.292309905358L,  9.441240382824L,  9.592861999817L,  9.747227014312L, 
     9.904388758411L, 10.064401661461L, 10.227321273674L, 10.393204290286L, 
    10.562108576249L, 10.734093191486L, 10.909218416705L, 11.087545779792L, 
    11.269138082804L, 11.454059429564L, 11.642375253876L, 11.834152348376L, 
    12.029458894040L, 12.228364490343L, 12.430940186114L, 12.637258511077L, 
    12.847393508111L, 13.061420766236L, 13.279417454346L, 13.501462355710L, 
    13.727635903247L, 13.958020215612L, 14.192699134091L, 14.431758260338L, 
    14.675284994974L, 14.923368577055L, 15.176100124448L, 15.433572675120L, 
    15.695881229373L, 15.963122793035L, 16.235396421652L, 16.512803265669L, 
    16.795446616663L, 17.083431954625L, 17.376866996322L, 17.675861744772L, 
    17.980528539856L, 18.290982110080L, 18.607339625540L, 18.929720752094L, 
    19.258247706783L, 19.593045314525L, 19.934241066121L, 20.281965177590L, 
    20.636350650875L, 20.997533335952L, 21.365651994373L, 21.740848364273L, 
    22.123267226883L, 22.513056474586L, 22.910367180545L, 23.315353669940L, 
    23.728173592870L, 24.148987998933L, 24.577961413545L, 25.015261916036L, 
    25.461061219550L, 25.915534752818L, 26.378861743828L, 26.851225305443L, 
    27.332812523022L, 27.823814544082L, 28.324426670053L, 28.834848450180L, 
    29.355283777615L, 29.885940987768L, 30.427032958949L, 30.978777215379L, 
    31.541396032607L, 32.115116545408L, 32.700170858211L, 33.296796158121L, 
    33.905234830604L, 34.525734577883L, 35.158548540133L, 35.803935419529L, 
}; 


// End of File
