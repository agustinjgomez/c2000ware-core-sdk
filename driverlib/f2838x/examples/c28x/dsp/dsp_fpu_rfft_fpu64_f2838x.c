//#############################################################################
//
// FILE:   empty_sysconfig_main.c
//
// TITLE:  Empty Pinmux Example
//
// Empty SysCfg & Driverlib Example
//
// This example is an empty project setup for SysConfig and Driverlib 
// development.
//
//#############################################################################
//
//
// 
// C2000Ware v5.04.00.00
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


//
// Included Files
//
#include "driverlib.h"
#include "device.h"
#include "board.h"
#include "c2000ware_libraries.h"

#define USE_REAL_ADC_INPUT  0U

float64_t test_input[512] = {
   0.000000000000L,   21.572962329776L,   33.101549345938L,   31.348099381273L,
  21.659704690254L,   13.462635707408L,   12.925769914236L,   18.345490092755L,
  21.719821525992L,   15.285006398720L,   -1.977025287475L,  -22.848099381273L,
 -36.616267971699L,  -36.567315531530L,  -24.653242151256L,   -9.864728951361L,
  -1.544042094290L,   -2.652831629230L,   -8.015324001497L,   -8.790653196966L,
   0.272527762980L,   16.339843294510L,   30.205102900231L,   32.969408775483L,
  22.676216863781L,    5.899542724855L,   -6.941239279948L,   -9.060737722782L,
  -2.007650711028L,    5.894206751259L,    6.138637308489L,   -3.337234005992L,
 -16.500605375735L,  -23.785006398720L,  -19.410151639799L,   -5.913445609864L,
   7.559511460003L,   11.957184168489L,    5.001188172030L,   -7.169343802757L,
 -14.623918682727L,  -11.066384521027L,    1.507067914734L,   14.394206751259L,
  18.791879459745L,   12.421701696628L,    1.174423316016L,   -5.462830966734L,
  -1.735122948048L,    9.845490092755L,   20.212753611259L,   20.457184168489L,
   8.515906797791L,   -9.174990601002L,  -22.306598085507L,  -24.135271048639L,
 -16.167960777018L,   -6.618017855735L,   -3.853711980483L,   -9.831587207746L,
 -18.508256086763L,  -20.457184168489L,  -10.220404322287L,    9.161087715993L,
  27.895433014038L,   36.216119871109L,   31.161498238020L,   18.331587207746L,
   7.368430606245L,    4.612371057489L,    8.485281374239L,   11.066384521027L,
   4.631569393755L,  -11.837234005992L,  -31.161498238020L,  -42.710473072863L,
 -39.895433014038L,  -24.839843294509L,   -6.750158426190L,    4.778428589972L,
   6.508256086763L,    3.337234005992L,    3.853711980483L,   13.112371057489L,
  28.167960777018L,   39.814026627156L,   39.277160833983L,   24.853746179518L,
   3.484093202208L,  -13.962830966735L,  -20.212753611259L,  -16.339843294510L,
 -10.264877051952L,  -10.215924611782L,  -18.144986064493L,  -28.100457275144L,
 -30.791879459745L,  -20.888559953013L,   -1.507067914733L,   17.560737722782L,
  26.623918682727L,   22.848099381273L,   11.969374576447L,    3.721571410028L,
   4.440488539997L,   12.407798811619L,   19.410151639799L,   17.290653196966L,
   4.500605375735L,  -12.341521572525L,  -23.109200056966L,  -21.572962329775L,
  -9.992349288972L,    2.566384521028L,    6.941239279948L,    0.594810476899L,
 -10.676216863781L,  -17.290653196966L,  -13.234540151754L,   -0.661087715993L,
  11.727472237020L,   15.285006398720L,    8.015324001497L,   -3.841521572525L,
 -10.455957905710L,   -5.814026627156L,    7.682679402779L,   20.888559953014L,
  24.616267971700L,   16.353746179518L,    1.977025287475L,   -8.790653196966L,
  -9.719821525992L,   -2.666734514239L,    4.044792834241L,    2.216119871108L,
  -9.659704690255L,  -24.853746179519L,  -33.101549345938L,  -28.067315531530L,
 -12.000000000000L,    5.894206751259L,   16.130986597461L,   15.669343802756L,
   9.659704690254L,    6.968282505654L,   12.925769914236L,   24.839843294510L,
  33.719821525993L,   30.963761977237L,   14.993537461001L,   -7.169343802757L,
 -24.616267971700L,  -30.072962329776L,  -24.653242151256L,  -16.359082153115L,
 -13.544042094290L,  -18.331587207746L,  -24.985886749974L,  -24.469408775482L,
 -11.727472237020L,    9.845490092756L,   30.205102900232L,   39.463761977237L,
  34.676216863781L,   21.578298303372L,   10.029323468528L,    6.618017855735L,
   9.992349288972L,   12.388559953013L,    6.138637308488L,   -9.831587207747L,
 -28.500605375736L,  -39.463761977237L,  -36.380714388276L,  -21.592201188380L,
  -4.440488539997L,    5.462830966735L,    5.001188172030L,   -0.674990601002L,
  -2.623918682727L,    4.612371057489L,   18.477630663211L,   30.072962329776L,
  30.791879459745L,   18.916054898382L,    1.174423316015L,  -11.957184168489L,
 -13.735122948048L,   -5.833265485761L,    3.242190862782L,    4.778428589972L,
  -3.484093202209L,  -15.669343802756L,  -22.306598085506L,  -17.640917846885L,
  -4.167960777017L,    9.060737722782L,   13.116850767994L,    5.847168370770L,
  -6.508256086764L,  -13.962830966735L,  -10.220404322287L,    2.666734514239L,
  15.895433014038L,   20.537364292592L,   14.190935489542L,    2.652831629230L,
  -4.631569393755L,   -1.881982144265L,    8.485281374239L,   17.560737722782L,
  16.631569393755L,    3.841521572524L,  -14.190935489543L,  -27.031717494347L,
 -27.895433014038L,  -18.345490092755L,   -6.750158426190L,   -1.715924611782L,
  -5.491743913237L,  -12.341521572525L,  -13.116850767994L,   -2.566384521027L,
  16.167960777019L,   33.319673425402L,   39.277160833984L,   31.348099381273L,
  15.484093202208L,    1.715924611782L,   -3.242190862782L,   -0.661087715993L,
   1.735122948048L,   -3.721571410028L,  -18.144986064494L,  -34.594810476899L,
 -42.791879459745L,  -36.567315531529L,  -18.477630663210L,    1.881982144266L,
  14.623918682728L,   16.353746179519L,   11.969374576447L,   10.215924611782L,
  16.440488539998L,   28.086554390136L,   36.380714388277L,   32.969408775482L,
  16.500605375734L,   -5.847168370771L,  -23.109200056967L,  -28.067315531530L,
 -21.992349288972L,  -13.112371057489L,  -10.029323468529L,  -15.083945101618L,
 -22.676216863781L,  -23.785006398720L,  -13.234540151753L,    5.833265485762L,
  23.727472237021L,   30.963761977237L,   24.985886749973L,   11.837234005991L,
   1.544042094290L,    0.680326574598L,    7.682679402779L,   14.394206751259L,
  12.616267971699L,    0.674990601002L,  -14.993537461002L,  -24.469408775482L,
 -21.719821525992L,   -9.161087715992L,    4.044792834242L,    8.710473072863L,
   2.340295309745L,   -9.174990601003L,  -16.130986597461L,  -12.388559953013L,
   0.000000000000L,   12.388559953014L,   16.130986597460L,    9.174990601001L,
  -2.340295309746L,   -8.710473072863L,   -4.044792834241L,    9.161087715994L,
  21.719821525993L,   24.469408775483L,   14.993537461002L,   -0.674990601003L,
 -12.616267971700L,  -14.394206751259L,   -7.682679402779L,   -0.680326574599L,
  -1.544042094291L,  -11.837234005993L,  -24.985886749975L,  -30.963761977237L,
 -23.727472237020L,   -5.833265485760L,   13.234540151755L,   23.785006398721L,
  22.676216863781L,   15.083945101618L,   10.029323468529L,   13.112371057490L,
  21.992349288972L,   28.067315531530L,   23.109200056965L,    5.847168370769L,
 -16.500605375737L,  -32.969408775483L,  -36.380714388277L,  -28.086554390135L,
 -16.440488539997L,  -10.215924611782L,  -11.969374576447L,  -16.353746179518L,
 -14.623918682727L,   -1.881982144264L,   18.477630663212L,   36.567315531531L,
  42.791879459745L,   34.594810476898L,   18.144986064492L,    3.721571410027L,
  -1.735122948049L,    0.661087715993L,    3.242190862782L,   -1.715924611783L,
 -15.484093202209L,  -31.348099381273L,  -39.277160833983L,  -33.319673425401L,
 -16.167960777016L,    2.566384521029L,   13.116850767994L,   12.341521572525L,
   5.491743913236L,    1.715924611782L,    6.750158426190L,   18.345490092755L,
  27.895433014038L,   27.031717494346L,   14.190935489541L,   -3.841521572526L,
 -16.631569393756L,  -17.560737722781L,   -8.485281374238L,    1.881982144266L,
   4.631569393756L,   -2.652831629230L,  -14.190935489543L,  -20.537364292592L,
 -15.895433014038L,   -2.666734514238L,   10.220404322287L,   13.962830966734L,
   6.508256086762L,   -5.847168370771L,  -13.116850767994L,   -9.060737722781L,
   4.167960777018L,   17.640917846886L,   22.306598085507L,   15.669343802756L,
   3.484093202209L,   -4.778428589972L,   -3.242190862781L,    5.833265485762L,
  13.735122948049L,   11.957184168488L,   -1.174423316017L,  -18.916054898384L,
 -30.791879459746L,  -30.072962329776L,  -18.477630663210L,   -4.612371057489L,
   2.623918682727L,    0.674990601002L,   -5.001188172030L,   -5.462830966734L,
   4.440488539998L,   21.592201188383L,   36.380714388278L,   39.463761977237L,
  28.500605375735L,    9.831587207745L,   -6.138637308490L,  -12.388559953014L,
  -9.992349288972L,   -6.618017855735L,  -10.029323468530L,  -21.578298303373L,
 -34.676216863782L,  -39.463761977237L,  -30.205102900230L,   -9.845490092753L,
  11.727472237022L,   24.469408775483L,   24.985886749974L,   18.331587207746L,
  13.544042094290L,   16.359082153115L,   24.653242151256L,   30.072962329775L,
  24.616267971698L,    7.169343802755L,  -14.993537461004L,  -30.963761977238L,
 -33.719821525992L,  -24.839843294509L,  -12.925769914235L,   -6.968282505653L,
  -9.659704690254L,  -15.669343802756L,  -16.130986597460L,   -5.894206751258L,
  12.000000000001L,   28.067315531530L,   33.101549345937L,   24.853746179517L,
   9.659704690253L,   -2.216119871109L,   -4.044792834242L,    2.666734514239L,
   9.719821525993L,    8.790653196966L,   -1.977025287476L,  -16.353746179519L,
 -24.616267971699L,  -20.888559953012L,   -7.682679402778L,    5.814026627157L,
  10.455957905710L,    3.841521572524L,   -8.015324001498L,  -15.285006398721L,
 -11.727472237020L,    0.661087715993L,   13.234540151754L,   17.290653196966L,
  10.676216863780L,   -0.594810476899L,   -6.941239279948L,   -2.566384521026L,
   9.992349288974L,   21.572962329777L,   23.109200056966L,   12.341521572524L,
  -4.500605375736L,  -17.290653196967L,  -19.410151639800L,  -12.407798811619L,
  -4.440488539997L,   -3.721571410029L,  -11.969374576448L,  -22.848099381274L,
 -26.623918682727L,  -17.560737722781L,    1.507067914735L,   20.888559953015L,
  30.791879459746L,   28.100457275145L,   18.144986064493L,   10.215924611782L,
  10.264877051952L,   16.339843294510L,   20.212753611259L,   13.962830966733L,
  -3.484093202211L,  -24.853746179520L,  -39.277160833985L,  -39.814026627156L,
 -28.167960777017L,  -13.112371057488L,   -3.853711980482L,   -3.337234005991L,
  -6.508256086763L,   -4.778428589971L,    6.750158426192L,   24.839843294511L,
  39.895433014039L,   42.710473072862L,   31.161498238018L,   11.837234005990L,
  -4.631569393757L,  -11.066384521028L,   -8.485281374239L,   -4.612371057489L,
  -7.368430606245L,  -18.331587207747L,  -31.161498238020L,  -36.216119871108L,
 -27.895433014036L,   -9.161087715991L,   10.220404322289L,   20.457184168489L,
  18.508256086763L,    9.831587207745L,    3.853711980483L,    6.618017855735L,
  16.167960777018L,   24.135271048639L,   22.306598085505L,    9.174990601001L,
  -8.515906797793L,  -20.457184168489L,  -20.212753611258L,   -9.845490092754L,
};
const float64_t test_golden[1026] = {
 102.080486845103L,  102.231251368372L,  102.686303615415L,  103.454047550821L,
 104.548927429438L,  105.992125081487L,  107.812623840128L,  110.048742424893L,
 112.750297776165L,  115.981639301024L,  119.825926768465L,  124.391232440011L,
 129.819393120818L,  136.299128513674L,  144.085990523631L,  153.533645859366L,
 165.144748061405L,  179.657336817190L,  198.199480560296L,  222.584535428622L,
 255.922785011239L,  304.030903802971L,  379.190561695765L,  512.580772329760L,
 813.331604084142L, 2118.115126849275L, -3103.127999869504L, -866.004496189934L,
-493.444525351101L, -340.225890018274L, -256.783420906854L, -204.341269881769L,
-168.358679515284L, -142.154858389649L, -122.230373018497L, -106.574883476167L,
 -93.951182735115L,  -83.556053983982L,  -74.845225036477L,  -67.436696308960L,
 -61.054342805014L,  -55.493482258380L,  -50.599031915767L,  -46.251187538866L,
 -42.355760492144L,  -38.837489234929L,  -35.635300998444L,  -32.698881280534L,
 -29.986136865041L,  -27.461277945628L,  -25.093332554387L,  -22.854962149572L,
 -20.721482594263L,  -18.670016635519L,  -16.678716177919L,  -14.725996963815L,
 -12.789724979368L,  -10.846281626427L,   -8.869409854011L,   -6.828698832902L,
  -4.687486581347L,   -2.399821489661L,    0.094128453702L,    2.875307301965L,
   6.057680726767L,    9.808858477140L,   14.387980740513L,   20.220552849220L,
  28.060530398322L,   39.387089283630L,   57.558800297822L,   92.199411382533L,
 186.608857501825L, 1596.435804949498L, -282.357489112712L, -137.416736770500L,
 -93.681875481277L,  -72.450241378439L,  -59.832281008424L,  -51.423354464507L,
 -45.387704255087L,  -40.823752068275L,  -37.236771292275L,  -34.332538442067L,
 -31.925016899778L,  -29.890752951443L,  -28.144552081182L,  -26.625685872365L,
 -25.289668118178L,  -24.103141774937L,  -23.040585060696L,  -22.082123671281L,
 -21.212038573732L,  -20.417724227220L,  -19.688946105631L,  -19.017301705012L,
 -18.395822750796L,  -17.818677202255L,  -17.280942973662L,  -16.778433977068L,
 -16.307564866780L,  -15.865244775222L,  -15.448793020303L,  -15.055871644093L,
 -14.684430974106L,  -14.332665354034L,  -13.998976884621L,  -13.681945524884L,
 -13.380304281942L,  -13.092918500901L,  -12.818768480379L,  -12.556934802491L,
 -12.306585891623L,  -12.066967413475L,  -11.837393201693L,  -11.617237458918L,
 -11.405928026153L,  -11.202940551753L,  -11.007793421267L,  -10.820043333456L,
 -10.639281427238L,  -10.465129880140L,  -10.297238911742L,  -10.135284136187L,
  -9.978964216545L,   -9.827998781050L,   -9.682126567192L,   -9.541103764687L,
  -9.404702532471L,   -9.272709668444L,   -9.144925413578L,   -9.021162374570L,
  -8.901244551297L,   -8.785006457162L,   -8.672292321954L,   -8.562955368160L,
  -8.456857152806L,   -8.353866967878L,   -8.253861293205L,   -8.156723296432L,
  -8.062342375315L,   -7.970613738149L,   -7.881438018585L,   -7.794720921542L,
  -7.710372897250L,   -7.628308840805L,   -7.548447814897L,   -7.470712793594L,
  -7.395030425314L,   -7.321330813297L,   -7.249547312046L,   -7.179616338382L,
  -7.111477195876L,   -7.045071911541L,   -6.980345083783L,   -6.917243740688L,
  -6.855717207836L,   -6.795716984869L,   -6.737196630145L,   -6.680111652852L,
  -6.624419412013L,   -6.570079021862L,   -6.517051263132L,   -6.465298499804L,
  -6.414784600929L,   -6.365474867173L,   -6.317335961723L,   -6.270335845277L,
  -6.224443714821L,   -6.179629945934L,   -6.135866038391L,   -6.093124564838L,
  -6.051379122330L,   -6.010604286565L,   -5.970775568609L,   -5.931869373987L,
  -5.893862963959L,   -5.856734418867L,   -5.820462603414L,   -5.785027133750L,
  -5.750408346280L,   -5.716587268053L,   -5.683545588678L,   -5.651265633645L,
  -5.619730338982L,   -5.588923227180L,   -5.558828384293L,   -5.529430438161L,
  -5.500714537691L,   -5.472666333133L,   -5.445271957296L,   -5.418518007660L,
  -5.392391529329L,   -5.366879998777L,   -5.341971308356L,   -5.317653751516L,
  -5.293916008703L,   -5.270747133904L,   -5.248136541796L,   -5.226073995480L,
  -5.204549594767L,   -5.183553764979L,   -5.163077246256L,   -5.143111083333L,
  -5.123646615766L,   -5.104675468591L,   -5.086189543385L,   -5.068181009727L,
  -5.050642297017L,   -5.033566086663L,   -5.016945304595L,   -5.000773114113L,
  -4.985042909031L,   -4.969748307133L,   -4.954883143891L,   -4.940441466475L,
  -4.926417528005L,   -4.912805782058L,   -4.899600877415L,   -4.886797653032L,
  -4.874391133232L,   -4.862376523107L,   -4.850749204121L,   -4.839504729908L,
  -4.828638822261L,   -4.818147367292L,   -4.808026411776L,   -4.798272159650L,
  -4.788880968690L,   -4.779849347325L,   -4.771173951614L,   -4.762851582369L,
  -4.754879182405L,   -4.747253833949L,   -4.739972756156L,   -4.733033302775L,
  -4.726432959926L,   -4.720169344002L,   -4.714240199692L,   -4.708643398113L,
  -4.703376935060L,   -4.698438929358L,   -4.693827621329L,   -4.689541371354L,
  -4.685578658548L,   -4.681938079524L,   -4.678618347263L,   -4.675618290079L,
  -4.672936850677L,   -4.670573085308L,   -4.668526163009L,   -4.666795364949L,
  -4.665380083847L,   -4.664279823495L,   -4.663494198362L,   -4.663022933286L,
  -4.662865863257L,    0.012898919637L,    0.025800955067L,    0.038709224395L,
   0.051626850348L,    0.064556962596L,    0.077502700085L,    0.090467213375L,
   0.103453667001L,    0.116465241857L,    0.129505137592L,    0.142576575042L,
   0.155682798692L,    0.168827079168L,    0.182012715767L,    0.195243039032L,
   0.208521413371L,    0.221851239722L,    0.235235958278L,    0.248679051260L,
   0.262184045763L,    0.275754516661L,    0.289394089588L,    0.303106443988L,
   0.316895316258L,    0.330764502964L,    0.344717864158L,    0.358759326792L,
   0.372892888233L,    0.387122619885L,    0.401452670935L,    0.415887272218L,
   0.430430740209L,    0.445087481160L,    0.459861995374L,    0.474758881646L,
   0.489782841847L,    0.504938685700L,    0.520231335725L,    0.535665832379L,
   0.551247339395L,    0.566981149341L,    0.582872689398L,    0.598927527380L,
   0.615151378000L,    0.631550109405L,    0.648129749992L,    0.664896495516L,
   0.681856716509L,    0.699016966037L,    0.716383987795L,    0.733964724578L,
   0.751766327136L,    0.769796163448L,    0.788061828421L,    0.806571154060L,
   0.825332220119L,    0.844353365273L,    0.863643198830L,    0.883210613028L,
   0.903064795946L,    0.923215245061L,    0.943671781496L,    0.964444565008L,
   0.985544109737L,    1.006981300797L,    1.028767411734L,    1.050914122913L,
   1.073433540904L,    1.096338218915L,    1.119641178346L,    1.143355931541L,
   1.167496505804L,    1.192077468776L,    1.217113955254L,    1.242621695554L,
   1.268617045517L,    1.295117018269L,    1.322139317869L,    1.349702374956L,
   1.377825384549L,    1.406528346147L,    1.435832106289L,    1.465758403763L,
   1.496329917643L,    1.527570318362L,    1.559504322062L,    1.592157748442L,
   1.625557582391L,    1.659732039671L,    1.694710636986L,    1.730524266760L,
   1.767205277008L,    1.804787556687L,    1.843306626993L,    1.882799739056L,
   1.923305978594L,    1.964866378064L,    2.007524036979L,    2.051324251051L,
   2.096314650947L,    2.142545351468L,    2.190069112090L,    2.238941509866L,
   2.289221125803L,    2.340969745959L,    2.394252578593L,    2.449138488901L,
   2.505700252984L,    2.564014832905L,    2.624163674884L,    2.686233032914L,
   2.750314320348L,    2.816504492278L,    2.884906461891L,    2.955629554329L,
   3.028790002039L,    3.104511486052L,    3.182925728216L,    3.264173140009L,
   3.348403534302L,    3.435776907254L,    3.526464298481L,    3.620648738727L,
   3.718526295531L,    3.820307228830L,    3.926217270151L,    4.036499040963L,
   4.151413628097L,    4.271242336759L,    4.396288644809L,    4.526880385635L,
   4.663372191257L,    4.806148232399L,    4.955625298286L,    5.112256266088L,
   5.276534018500L,    5.448995878135L,    5.630228639712L,    5.820874295812L,
   6.021636569867L,    6.233288391846L,    6.456680478618L,    6.692751213579L,
   6.942538060196L,    7.207190793812L,    7.487986897802L,    7.786349547483L,
   8.103868702444L,    8.442325951063L,    8.803723907861L,    9.190321165519L,
   9.604674063268L,   10.049686871589L,   10.528672436928L,   11.045425917246L,
  11.604315023150L,   12.210391236162L,   12.869527915153L,   13.588593184547L,
  14.375668261156L,   15.240325777650L,   16.193988245261L,   17.250394914128L,
  18.426217279149L,   19.741881511405L,   21.222683754989L,   22.900327587901L,
  24.815082570097L,   27.018877646632L,   29.579838410466L,   32.589120658271L,
  36.171520786514L,   40.502545185091L,   45.837043387882L,   52.559707323707L,
  61.279758426506L,   73.022632639542L,   89.658454610470L,  114.997029920437L,
 158.182325017715L,  248.053735535552L,  548.036250327868L, -3354.356394342403L,
-427.910137401812L, -233.011442927766L, -162.282899483568L, -125.815545043929L,
-103.630153101158L,  -88.757734466010L,  -78.132424387313L,  -70.194880951829L,
 -64.068460705852L,  -59.222734945075L,  -55.318198150410L,  -52.127718184130L,
 -49.493856690482L,  -47.304307802974L,  -45.477082091983L,  -43.951212738140L,
 -42.680732349733L,  -41.630662520587L,  -40.774284982695L,  -40.091254938716L,
 -39.566285144894L,  -39.188229604354L,  -38.949457803698L,  -38.845450433143L,
 -38.874574708612L,  -39.038017340934L,  -39.339869537939L,  -39.787373956018L,
 -40.391360834006L,  -41.166922708884L,  -42.134408486081L,  -43.320865175548L,
 -44.762131233982L,  -46.505910647086L,  -48.616371993172L,  -51.181200909150L,
 -54.322750422571L,  -58.216334738229L,  -63.121613989217L,  -69.439448398566L,
-3149.822074432357L,  -89.405719606571L, -106.360440234564L, -133.410283352307L,
-183.153879283503L, -304.187609722401L, -1031.076397834177L,  665.383455240904L,
 241.387085625993L,  143.598930117615L,  100.167486710191L,   75.633866555169L,
  59.866896947815L,   48.875402079881L,   40.768681165490L,   34.535255018200L,
  29.584892850268L,   25.549865484510L,   22.188994374116L,   19.337386711471L,
  16.878340701642L,   14.726790327369L,   12.819110337410L,   11.106597957195L,
   9.551167274051L,    8.122421559125L,    6.795609022825L,    5.550158954927L,
   4.368606711250L,    3.235782892215L,    2.138183148224L,    1.063460724313L,
 102.080486845103L,  102.236782544520L,  102.708562337190L,  103.504638763551L,
 104.640159361707L,  106.137339535691L,  108.026580809002L,  110.348083088401L,
 113.154118108493L,  116.512218986403L,  120.509677270185L,  125.259957932657L,
 130.912005618653L,  137.664036547008L,  145.784512677138L,  155.645032163400L,
 167.773817078908L,  182.946556434981L,  202.349004095263L,  227.887429097011L,
 262.831727989733L,  313.297418178536L,  392.197663778083L,  532.315414855795L,
 848.396147627448L, 2220.168199280415L, 3269.942189358217L,  917.874658834097L,
 526.339095161635L,  365.447615866993L,  277.939325212387L,  223.044249590217L,
3154.318269539313L,  158.208219627421L,  137.566719234140L,  121.438657017904L,
 108.525508295515L,   97.985353415074L,   89.248861822094L,   81.917688774658L,
  75.705225499700L,   70.400454066143L,   65.845048479629L,   61.918396895225L,
  58.527536056891L,   55.600231082156L,   53.080128226218L,   50.923311311319L,
  49.095834475691L,   47.571953983002L,   46.332878195587L,   45.365919304935L,
  44.663976100113L,   44.225312251376L,   44.053625153823L,   44.158431227584L,
  44.555829909872L,   45.269757303006L,   46.333912275561L,   47.794651002691L,
  49.715333455065L,   52.182929644342L,   55.318278233996L,   59.292493002532L,
  64.354200740936L,   70.876900443416L,   79.446143584371L,   91.031896525706L,
 107.362013757216L,  131.836619256326L,  172.188138257310L,  250.589433126310L,
 466.829681350034L, 3714.877400344528L,  616.497756144712L,  283.573650499821L,
 183.842165298659L,  135.916718494510L,  107.789333117005L,   89.312184286310L,
  76.257802816225L,   66.551495602171L,   59.056004629637L,   53.095944876669L,
  48.245057985874L,   44.221125011509L,   40.829923490494L,   37.933453539818L,
  35.430998242899L,   33.247352481904L,   31.325243266468L,   29.620298301065L,
  28.097616690245L,   26.729376859781L,   25.493133468409L,   24.370582552503L,
  23.346651422281L,   22.408817951273L,   21.546594599098L,   20.751132520009L,
  20.014914415024L,   19.331513791503L,   18.695404490631L,   18.101808671522L,
  17.546574506008L,   17.026077037184L,   16.537137251108L,   16.076955582756L,
  15.643056946256L,   15.233245030092L,   14.845564089491L,   14.478266842838L,
  14.129787366594L,   13.798718105851L,   13.483790291103L,   13.183857187970L,
  12.897879714021L,   12.624914042233L,   12.364100878783L,   12.114656157638L,
  11.875862938598L,   11.647064331339L,   11.427657297211L,   11.217087204486L,
  11.014843032439L,   10.820453135898L,   10.633481495334L,   10.453524388829L,
  10.280207431556L,   10.113182936294L,    9.952127555068L,    9.796740167577L,
   9.646739986780L,    9.501864855997L,    9.361869715280L,    9.226525217736L,
   9.095616478914L,    8.968941944564L,    8.846312363850L,    8.727549856723L,
   8.612487065491L,    8.500966381841L,    8.392839241559L,    8.287965480125L,
   8.186212743104L,    8.087455945959L,    7.991576778509L,    7.898463249755L,
   7.808009269278L,    7.720114261819L,    7.634682811990L,    7.551624336383L,
   7.470852780660L,    7.392286339380L,    7.315847196629L,    7.241461285624L,
   7.169058065715L,    7.098570315309L,    7.029933939397L,    6.963087790501L,
   6.897973501946L,    6.834535332479L,    6.772720021336L,    6.712476652945L,
   6.653756530518L,    6.596513057856L,    6.540701628755L,    6.486279523431L,
   6.433205811463L,    6.381441260766L,    6.330948252167L,    6.281690699180L,
   6.233633972620L,    6.186744829704L,    6.140991347343L,    6.096342859334L,
   6.052769897182L,    6.010244134318L,    5.968738333483L,    5.928226297067L,
   5.888682820219L,    5.850083646541L,    5.812405426212L,    5.775625676373L,
   5.739722743647L,    5.704675768657L,    5.670464652413L,    5.637070024464L,
   5.604473212703L,    5.572656214728L,    5.541601670669L,    5.511292837393L,
   5.481713564007L,    5.452848268588L,    5.424681916065L,    5.397199997195L,
   5.370388508561L,    5.344233933551L,    5.318723224254L,    5.293843784216L,
   5.269583452035L,    5.245930485718L,    5.222873547791L,    5.200401691096L,
   5.178504345259L,    5.157171303782L,    5.136392711740L,    5.116159054033L,
   5.096461144193L,    5.077290113688L,    5.058637401724L,    5.040494745511L,
   5.022854170961L,    5.005707983822L,    4.989048761203L,    4.972869343485L,
   4.957162826600L,    4.941922554654L,    4.927142112892L,    4.912815320974L,
   4.898936226560L,    4.885499099188L,    4.872498424430L,    4.859928898316L,
   4.847785422021L,    4.836063096791L,    4.824757219108L,    4.813863276091L,
   4.803376941109L,    4.793294069602L,    4.783610695116L,    4.774323025528L,
   4.765427439458L,    4.756920482868L,    4.748798865839L,    4.741059459513L,
   4.733699293209L,    4.726715551690L,    4.720105572596L,    4.713866844021L,
   4.707997002239L,    4.702493829576L,    4.697355252421L,    4.692579339372L,
   4.688164299515L,    4.684108480837L,    4.680410368761L,    4.677068584817L,
   4.674081885423L,    4.671449160795L,    4.669169433981L,    4.667241859999L,
   4.665665725106L,    4.664440446176L,    4.663565570188L,    4.663040773838L,
   4.662865863257L,    0.000000000000L,    0.010402126090L,    0.020819467953L,
   0.031267296148L,    0.041760991099L,    0.052316098760L,    0.062948387150L,
   0.073673904071L,    0.084509036274L,    0.095470570389L,    0.106575755886L,
   0.117842370367L,    0.129288787448L,    0.140934047501L,    0.152797931487L,
   0.164901038105L,    0.177264864408L,    0.189911890022L,    0.202865665005L,
   0.216150901281L,    0.229793567494L,    0.243820986910L,    0.258261937825L,
   0.273146755649L,    0.288507435494L,    0.304377733669L,   -2.820799387647L,
  -2.803801053813L,   -2.786180316673L,   -2.767895471862L,   -2.748902664111L,
  -2.729155866262L,   -1.624195731709L,   -2.687205470536L,   -2.664899344220L,
  -2.641634491411L,   -2.617355405916L,   -2.592005505853L,   -2.565527677825L,
  -2.537864984131L,   -2.508961559328L,   -2.478763721995L,   -2.447221324786L,
  -2.414289359857L,   -2.379929826488L,   -2.344113852175L,   -2.306824036829L,
  -2.268056961733L,   -2.227825771203L,   -2.186162697387L,   -2.143121361137L,
  -2.098778649818L,   -2.053235953486L,   -2.006619541900L,   -1.959079893188L,
  -1.910789844552L,   -1.861941525026L,   -1.812742142015L,   -1.763408813001L,
  -1.714162742728L,   -1.665223125161L,   -1.616801183764L,   -1.569094746375L,
  -1.522283685582L,   -1.476526454592L,   -1.431957830323L,   -1.388687859206L,
  -1.346801902946L,   -1.306361611479L,   -1.267406611715L,   -1.229956691217L,
  -1.194014269384L,   -1.159566977426L,   -1.126590204791L,    2.046543145870L,
   2.076689842682L,    2.105490290370L,    2.132996221340L,    2.159261913632L,
   2.184343000010L,    2.208295500273L,    2.231175051569L,    2.253036310329L,
   2.273932500076L,    2.293915081126L,    2.313033520521L,    2.331335143181L,
   2.348865047885L,    2.365666074217L,    2.381778808859L,    2.397241621722L,
   2.412090724096L,    2.426360242559L,    2.440082303652L,    2.453287125345L,
   2.466003112241L,    2.478256952145L,    2.490073712187L,    2.501476933196L,
   2.512488721333L,    2.523129836320L,    2.533419775819L,    2.543376855678L,
   2.553018285920L,    2.562360242430L,    2.571417934393L,    2.580205667574L,
   2.588736903576L,    2.597024315258L,    2.605079838470L,    2.612914720321L,
   2.620539564163L,    2.627964371493L,    2.635198580959L,    2.642251104671L,
   2.649130361981L,    2.655844310913L,    2.662400477404L,    2.668805982516L,
   2.675067567748L,    2.681191618599L,    2.687184186505L,    2.693051009262L,
   2.698797530048L,    2.704428915155L,    2.709950070506L,    2.715365657067L,
   2.720680105220L,    2.725897628178L,    2.731022234508L,    2.736057739837L,
   2.741007777783L,    2.745875810185L,    2.750665136664L,    2.755378903581L,
   2.760020112420L,    2.764591627643L,    2.769096184056L,    2.773536393715L,
   2.777914752406L,    2.782233645734L,    2.786495354832L,    2.790702061739L,
   2.794855854448L,    2.798958731658L,    2.803012607248L,    2.807019314487L,
   2.810980610005L,    2.814898177532L,    2.818773631427L,    2.822608520007L,
   2.826404328691L,    2.830162482968L,    2.833884351202L,    2.837571247283L,
   2.841224433138L,    2.844845121101L,    2.848434476164L,    2.851993618105L,
   2.855523623501L,    2.859025527645L,    2.862500326355L,    2.865948977700L,
   2.869372403629L,    2.872771491522L,    2.876147095667L,    2.879500038660L,
   2.882831112733L,    2.886141081026L,    2.889430678791L,    2.892700614538L,
   2.895951571132L,    2.899184206830L,    2.902399156278L,    2.905597031457L,
   2.908778422584L,    2.911943898976L,    2.915094009873L,    2.918229285220L,
   2.921350236424L,    2.924457357066L,    2.927551123589L,    2.930631995954L,
   2.933700418269L,    2.936756819385L,    2.939801613477L,    2.942835200592L,
   2.945857967176L,    2.948870286584L,    2.951872519558L,    2.954865014699L,
   2.957848108912L,    2.960822127830L,    2.963787386232L,    2.966744188433L,
   2.969692828666L,    2.972633591447L,    2.975566751926L,    2.978492576222L,
   2.981411321753L,    2.984323237541L,    2.987228564521L,    2.990127535827L,
   2.993020377069L,    2.995907306608L,    2.998788535809L,    3.001664269300L,
   3.004534705203L,    3.007400035378L,    3.010260445640L,    3.013116115982L,
   3.015967220784L,    3.018813929014L,    3.021656404429L,    3.024494805762L,
   3.027329286909L,    3.030159997106L,    3.032987081101L,    3.035810679326L,
   3.038630928054L,    3.041447959561L,    3.044261902280L,    3.047072880945L,
   3.049881016740L,    3.052686427439L,    3.055489227541L,    3.058289528406L,
   3.061087438382L,    3.063883062934L,    3.066676504763L,    3.069467863933L,
   3.072257237983L,    3.075044722043L,    3.077830408946L,    3.080614389340L,
   3.083396751793L,    3.086177582899L,    3.088956967381L,    3.091734988190L,
   3.094511726611L,    3.097287262352L,    3.100061673647L,    3.102835037345L,
   3.105607429008L,    3.108378923000L,    3.111149592576L,    3.113919509977L,
   3.116688746510L,    3.119457372645L,    3.122225458092L,    3.124993071896L,
   3.127760282515L,    3.130527157907L,    3.133293765615L,    3.136060172852L,
   3.138826446578L,    3.141592653590L,
};

uint16_t pass = 0U, fail = 0U;
float64_t tolerance = 3.2e-7;

volatile uint16_t flagInputReady = 0;
volatile uint16_t sampleIndex = 0;
uint32_t max_idx = 1;

#if USE_REAL_ADC_INPUT == 1U
#ifdef __cplusplus
#pragma DATA_SECTION("FFT_buffer_1")
#else
#pragma DATA_SECTION(test_input, "FFT_buffer_1")
#endif

uint16_t test_input[4U*myRFFT0_RFFT_SIZE];
#endif

#ifdef __cplusplus
#pragma DATA_SECTION("FFT_buffer_2")
#else
#pragma DATA_SECTION(test_output, "FFT_buffer_2")
#endif
float64_t test_output[myRFFT0_RFFT_SIZE];
float64_t test_magnitude_phase[(myRFFT0_RFFT_SIZE >> 1) + 1];
float64_t twiddleFactors[myRFFT0_RFFT_SIZE];

float64_t *inPtr = (float64_t *)test_input;
float64_t *outPtr = test_output;

//
// Main
//
void main(void)
{
    //
    // Initialize CPU and peripherals
    //
    Device_init();
    Device_initGPIO();
    Interrupt_initModule();
    Interrupt_initVectorTable();
    Board_init();
    C2000Ware_libraries_init();

    int16_t i, j;
    float64u_t out, gold, errld;
    float64_t *p_temp;

    myRFFT0_handle->calc(myRFFT0_handle);

    for(i = 0U; i < myRFFT0_RFFT_SIZE; i++)
    {
        out.f64 = myRFFT0_handle->p_currOutput[i];
        gold.f64 = test_golden[i];
        errld.f64 = fabsf(out.f64 - gold.f64);
        if(errld.f64 < tolerance)
        {
            pass++;
        }
        else
        {
            fail++;
        }
    }

    p_temp = CFFT_f64_getCurrInputPtr(myRFFT0_handle);
    CFFT_f64_setCurrInputPtr(myRFFT0_handle, CFFT_f64_getCurrOutputPtr(myRFFT0_handle));
    CFFT_f64_setCurrOutputPtr(myRFFT0_handle, p_temp);

    myRFFT0_handle->mag(myRFFT0_handle);

    for(i = (myRFFT0_RFFT_SIZE), j=0U; i <= (myRFFT0_RFFT_SIZE+(myRFFT0_RFFT_SIZE >> 1)); i++, j++)
    {
        out.f64 = myRFFT0_handle->p_currOutput[j];
        gold.f64 = test_golden[i];
        errld.f64 = fabsf(out.f64 - gold.f64);
        if(errld.f64 < tolerance)
        {
            pass++;
        }
        else
        {
            fail++;
        }
    }

    myRFFT0_handle->phase(myRFFT0_handle);

    for(i = (myRFFT0_RFFT_SIZE+(myRFFT0_RFFT_SIZE >> 1)) + 1U, j=0U; i <= (2U * myRFFT0_RFFT_SIZE) + 1U; i++, j++)
    {
        out.f64 = myRFFT0_handle->p_currOutput[j];
        gold.f64 = test_golden[i];
        errld.f64 = fabsf(out.f64 - gold.f64);
        if(errld.f64 < tolerance)
        {
            pass++;
        }
        else
        {
            fail++;
        }
    }
    while(1);
}

//
// End of File
//
