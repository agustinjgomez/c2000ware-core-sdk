//#############################################################################
//! \file macCVbyCVInput.c
//! \brief  Input Vector (64) 
//! \author Vishal Coelho 
//! \date   19-Jul-2016
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


const double test_input[256] = {
	 1.209714148026L,  2.918053678972L,  0.356067074406L, -0.424209293900L, 
	-0.650179035650L,  1.223664127764L, -2.754607079297L,  1.621685574292L, 
	 1.760394782897L, -0.423220746678L, -1.020490679037L,  0.977022998989L, 
	 0.677741483660L, -2.451981331498L,  1.515843899130L,  2.725393506219L, 
	-2.483031631624L, -1.963741669009L, -2.338046264778L, -1.469141683883L, 
	 0.311269672514L,  1.871322714995L, -0.092806362957L, -0.077887776058L, 
	 2.453431050263L,  1.689914612979L,  1.878422831267L, -0.653408890493L, 
	 1.472408453947L, -1.426667632593L, -2.819064900979L, -2.907640547881L, 
	-2.683640813182L,  1.088844058136L, -2.585358219680L, -0.442559554732L, 
	 1.874593765785L, -0.303231330160L,  2.783502233512L,  0.690252951973L, 
	 1.154318985256L, -2.768350731572L, -2.311690966921L, -1.157290864380L, 
	 1.399419555120L,  1.713563685581L, -2.448221285422L,  1.234224870368L, 
	-2.403363291251L, -2.354107334728L,  0.884156786036L, -2.323826972795L, 
	-1.075592010638L, -2.561325795866L,  0.966429440441L, -3.092456299937L, 
	 1.565339148528L, -0.483117981397L,  0.522671365644L,  0.977495086961L, 
	 1.508167596461L,  1.400663531784L, -1.666131633115L,  0.196093774885L, 
	 1.476281773796L, -2.457869382675L,  2.956857738405L,  0.827912542135L, 
	 2.305491017895L, -2.346770558393L, -2.599765122580L, -2.297740105221L, 
	-0.839203489920L, -2.522107698893L, -0.821848150795L, -2.249209133023L, 
	 1.162568180837L, -2.084438566994L,  0.615385444405L, -1.908524308715L, 
	 1.818127279118L, -1.146808395044L, -0.831561238319L, -1.153410615388L, 
	-1.847081433877L, -1.774602064443L, -2.597050676370L, -1.564250215216L, 
	 1.708611192441L,  2.468804283755L, -1.849301522261L,  1.276889178610L, 
	-0.702010046196L,  0.350211822747L,  0.325334111221L, -1.982761742186L, 
	-1.703036944447L, -1.809363579122L,  0.891839220584L, -2.655608325299L, 
	-0.097512696121L,  2.599984661115L, -2.187519081218L,  1.298830018604L, 
	 1.771430790090L,  0.363098786831L, -2.509464487113L, -1.172260229176L, 
	-1.293919385981L, -2.097304869162L, -1.650133983855L,  0.769672979677L, 
	 0.193976111757L,  3.065784357516L, -2.566689169212L, -2.070736670446L, 
	-0.594920762623L, -1.521836172491L, -2.482824254199L, -0.648429004855L, 
	-2.436091712339L, -2.676669804576L,  1.787113144074L,  1.156709703045L, 
	-1.309602316107L, -0.613312193813L,  0.650519781161L,  3.033743043188L, 
	-0.614596146857L,  0.965724884332L,  0.758204205633L,  2.718191239582L, 
	-2.171658559930L, -2.114214142116L, -0.745530068061L,  2.645832091115L, 
	-2.129158049178L,  1.851390096119L,  1.621768236117L,  0.486282079608L, 
	 2.331759948550L, -0.376767463673L, -0.937597364022L, -1.522957808151L, 
	 1.165755239160L,  1.583025880145L, -1.293402279773L, -1.704819923424L, 
	 0.192449591963L, -2.738293289178L,  2.088677736470L,  1.679680854287L, 
	 0.612548941168L,  1.075695055589L, -1.034769427172L,  1.352220110824L, 
	-1.261506383443L,  0.892594509941L, -0.297869846262L, -0.508634572087L, 
	-0.486031695132L, -0.686362080082L, -0.882119520138L,  1.986366849396L, 
	 0.366430339745L, -1.147134564578L,  1.523957478103L,  1.976311679613L, 
	-0.475418575788L,  1.816302461759L, -0.443870671255L,  2.213339300058L, 
	-2.356993970734L,  0.035415912709L, -2.988069202947L,  0.852385645245L, 
	-1.318304859360L,  2.833053165793L, -1.146551992390L, -0.352083597861L, 
	 0.965663591597L, -2.764483286997L,  2.871013084443L,  2.304357564236L, 
	 2.737777817766L,  0.824283127627L, -0.264607968358L, -0.910599101138L, 
	-1.630622323920L,  3.122763653779L,  1.658119686136L, -1.733081584891L, 
	 1.629402003439L,  0.957878341740L,  1.512036386075L,  0.659675658629L, 
	 1.531139006764L, -0.708457848223L, -2.476075047444L, -2.248204383466L, 
	 1.140777829096L, -2.983664880679L, -0.230840592774L, -0.495666328059L, 
	-1.808531919608L, -1.984856420011L, -2.522581168466L,  1.418587843289L, 
	 2.033078380362L, -0.814535263350L, -2.041974043057L,  2.146085323099L, 
	-2.113852599732L,  1.471708554211L,  1.042928439334L,  0.446268720560L, 
	 2.478021528534L, -2.030379554018L,  0.104038291426L,  2.873828570512L, 
	 1.273616156763L, -1.474525134111L, -2.176555855891L,  2.667720442679L, 
	 2.849154798946L, -1.735601734616L,  0.256882258554L, -0.794422026115L, 
	 1.129301388438L, -2.591811742757L, -2.911860435802L,  0.880378237236L, 
	 1.942785095373L, -2.006743278231L,  1.562118442232L, -2.858528197040L, 
	-2.386435348060L,  1.402240325355L,  0.157363411252L, -0.958577543709L, 
	-1.094319584760L,  1.009185271802L,  0.291850438326L, -0.729675099447L, 
	-0.635350970899L,  0.800141673074L, -0.533483985715L, -3.005562856401L, 
	-2.005983813904L,  2.579687319457L, -1.536950438107L,  1.888465733077L, 
	-3.012562575986L,  1.544705301429L,  2.662032384227L,  1.967345829969L, 
}; 


// End of File
