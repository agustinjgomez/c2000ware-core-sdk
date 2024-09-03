//#############################################################################
//! \file mpyCVbyCVCOutput.c
//! \brief  Ouput Vector (64) 
//! \author Vishal Coelho 
//! \date   22-Jul-2016
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


const double test_golden[128] = {
     0.976588406912L, -4.905088686156L, -1.503417054157L, -2.545213789043L, 
     4.237160130733L,  5.189239775676L, -8.982059235717L,  7.740420777061L, 
    -0.882631163698L, -2.144040848866L, -5.663320368464L,  2.710294176351L, 
     6.587818874789L,  1.068784201459L,  3.551868398687L, -4.405963008839L, 
    -6.133385268014L, -0.844680115278L,  3.687939639218L,  1.467972959223L, 
    -0.378082565203L, -0.961040925253L, -2.135299161061L,  4.582343562802L, 
     7.272212087155L, -3.221028503406L,  2.602152283838L, -5.515725858956L, 
     5.603637975108L,  4.036362323288L,  3.448860443674L,  7.101902528798L, 
     0.818001716989L,  0.351887593372L, -5.750024797825L,  3.652841267464L, 
     0.961894660755L,  2.576763736312L, -1.974219090802L, -3.615866527791L, 
    -1.560817105775L,  7.462311499307L,  5.618096008291L,  6.049816663744L, 
     5.165217007847L, -0.634416099531L,  8.057216016972L, -1.212169308260L, 
    10.829316128713L, -1.839937391584L, -1.090926395752L,  2.597154883421L, 
    -0.772714010080L,  0.058691558448L,  1.209609724086L,  2.759894646393L, 
    -2.071482833276L, -2.629748848940L,  2.276411757372L,  5.899997776449L, 
     1.596494550401L, -1.366540235953L,  7.796974032191L,  1.670961564012L, 
     1.347269067919L, -1.574540581716L, -0.253088063164L, -0.812302711935L, 
     5.998596139565L, -1.384591679708L,  1.787469085504L,  5.300105886330L, 
     7.952721763417L,  0.898636659469L, -1.649059375837L,  5.018270936977L, 
    -5.033894256243L, -8.167128473821L,  8.003105668498L, -1.957559731836L, 
    -8.525032712402L,  4.363006510712L, -1.959334555860L, -0.110420892783L, 
    -0.623348761878L, -0.902477109663L,  1.050611964094L,  0.366121566364L, 
    -2.563013788846L,  5.219387944166L,  3.471772497545L, -0.866507538273L, 
    -0.577287287543L,  2.898567322623L, -9.099684168834L,  7.016691632677L, 
    -4.520428173407L, -2.160214654176L, -2.614051644836L, 11.724142181562L, 
    -4.648677972974L,  1.577222797571L,  1.653706668257L, -2.282655939823L, 
    -2.855934205814L,  1.851524840697L, -2.490255214757L,  0.076490544543L, 
     0.967010869850L, -2.469483824533L,  3.205922122517L,  6.643129937687L, 
    -5.221484536882L,  2.530496172257L,  2.492985574150L,  5.222798575030L, 
    -0.013525698663L, -5.979358686633L, -0.151316160516L,  1.393773273092L, 
     0.616367229346L,  1.469189972890L,  2.450099411529L, -4.109989153343L, 
    -2.676449146819L,  1.545793092016L,  5.778626041288L,  6.704282299390L, 
}; 


// End of File
