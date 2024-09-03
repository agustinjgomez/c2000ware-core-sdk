//#############################################################################
//! \file macRVbyCVInput.c
//! \brief  Input Vector (64) 
//! \author Vishal Coelho 
//! \date   20-Jul-2016
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


const double test_input[192] = {
     1.977467242167L,  2.456117572862L,  2.549665936805L,  2.885813134564L, 
    -2.343710955249L,  0.296663924139L,  2.597317105635L, -2.270589591193L, 
     0.831637671153L, -2.203550751411L, -2.528728214041L, -1.523620574802L, 
    -1.391736736729L,  2.140789656699L,  0.294565272647L, -1.543890602798L, 
     2.874600226335L,  1.974709801425L,  2.920980813840L, -1.611480148166L, 
    -2.151280454574L,  2.697142890117L,  2.956821652023L, -0.942579797403L, 
     2.872464652128L, -1.906348264619L, -0.091887509072L, -1.563986246285L, 
     1.886717830155L,  0.729130204141L, -2.250094495438L, -0.167831112112L, 
    -0.491588359455L, -0.932050805682L,  2.612143343541L,  2.078657573992L, 
     1.835992799739L,  0.535730084761L,  2.887076062272L,  0.312422645035L, 
     0.978547672671L,  2.621305098824L, -2.917209559478L, -1.345613130319L, 
     2.193644124941L,  1.616036700552L,  2.726859997725L,  1.594226917175L, 
     1.123026098879L, -0.751180897697L,  1.619429001520L,  0.426135936514L, 
     1.527646351421L, -2.664986095921L, -0.677157607374L, -2.802614060663L, 
     0.976896395155L,  0.193506732563L, -2.065994971947L,  1.754059438423L, 
     1.294625752847L,  2.726969554308L, -2.941580980945L, -2.325367873196L, 
    -1.401634223263L,  0.432431814778L, -2.851489250364L, -0.192324274365L, 
    -2.531295672869L, -3.066809745375L,  2.032345474438L, -1.023388607585L, 
     1.224144341300L, -2.122571157666L, -1.149197859557L,  1.849044302155L, 
     2.828828562229L, -1.186170874041L, -2.925161546684L,  0.179278977780L, 
    -0.384880539389L, -2.100790990244L, -0.744190162153L,  0.640771435812L, 
     1.668291182107L, -1.489295342357L,  1.854795681505L,  0.968107527693L, 
    -1.967437450339L,  1.188869786035L, -0.064312197993L,  1.559182441983L, 
    -0.341891984201L, -0.310756301606L,  0.919311755380L, -2.614927402932L, 
     1.315478029088L, -1.702887928066L,  1.600243618166L,  2.597075236696L, 
    -1.407275945379L, -2.184173323665L,  1.129105218868L,  2.047168445792L, 
     0.974509499741L,  0.240912625867L, -2.119872988240L,  3.117306361892L, 
    -2.393908169234L, -2.650401319947L, -0.010278964549L, -0.360163053129L, 
     2.888656485213L, -2.471473535021L, -1.002886057027L,  2.902191235043L, 
     0.535753080132L, -3.112474964600L, -1.735340763808L,  1.727313392665L, 
     1.578757495207L,  1.993674933930L, -1.538782772203L,  2.316577155575L, 
     0.037429259497L, -2.611066589676L,  1.250835938798L, -0.629684186706L, 
    -1.508778756628L,  1.885385866093L, -0.430939631557L,  2.580174931748L, 
    -1.999014077203L, -1.484070044508L, -2.227144270415L, -2.286648684742L, 
     2.320331373100L,  0.500798692250L,  0.313280887591L, -2.230814795185L, 
     2.218159931847L,  0.766895008813L, -0.936493810448L,  0.083249314220L, 
    -0.616958319613L, -2.664279852523L, -1.634155002626L, -2.366756934136L, 
    -1.986065940378L, -1.633926469911L, -0.519826335949L, -2.829604666531L, 
     2.530339944784L,  2.794680335281L, -0.057402599972L, -0.067527664496L, 
    -1.019639019851L,  2.513612449892L, -0.821546703732L, -2.442885135410L, 
     1.760875677982L, -0.692791319558L, -1.623001517063L, -0.603737795039L, 
    -2.535550998241L, -2.312380000546L,  2.777485776991L,  2.865977841269L, 
     0.472549539571L, -2.765986707674L, -1.666426951467L, -0.922631907783L, 
     2.018121674125L, -3.044810000457L, -2.871266135154L, -2.079796983410L, 
     0.936920161319L,  1.455954688915L,  0.928315264773L, -0.308355446684L, 
     0.295365581320L, -1.279754121583L,  1.537450250181L, -1.954353279419L, 
     1.173544658663L, -1.988558056158L, -0.826335651000L,  0.789284695086L, 
     1.760720903212L, -2.631864414619L,  2.697911623900L,  1.732353851235L, 
}; 


// End of File
