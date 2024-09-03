import{r as t,c as e,h as o,g as i}from"./p-ce1dc307.js";import{W as r}from"./p-f9ca77fd.js";import{W as s}from"./p-6a8f5ea3.js";import"../gc-core-assets/lib/GcUtils";import"../gc-core-assets/lib/GcFiles";import"../gc-core-assets/lib/GcConsole";import"../gc-core-assets/lib/GcLocalStorage";import"../gc-widget-message-dialog/lib/GcMessageDialog";const c=':host::-webkit-scrollbar,::-webkit-scrollbar{width:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px));height:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px))}:host::-webkit-scrollbar-track,::-webkit-scrollbar-track{background:var(--gc-scrollbar-track-background-color, var(--theme-scroll-track-color, rgba(35, 31, 32, 0.2)))}:host::-webkit-scrollbar-thumb,::-webkit-scrollbar-thumb{background:var(--gc-scrollbar-thumb-background-color, var(--theme-scroll-thumb-color, rgba(35, 31, 32, 0.65)))}:host::-webkit-scrollbar-thumb:hover,::-webkit-scrollbar-thumb:hover{background:var(--gc-scrollbar-thumb-background-color-hover, var(--theme-scroll-thumb-color-hover, rgba(35, 31, 32, 0.8)))}:host::-webkit-scrollbar-corner,::-webkit-scrollbar-corner{background:rgba(0, 0, 0, 0)}:host(:focus),:host *:focus{outline:none}:host{-webkit-user-select:none;-khtml-user-select:none;-moz-user-select:none;-ms-user-select:none;-o-user-select:none;user-select:none;font-family:var(--gc-font-family, var(--theme-font-family, "Roboto", "Open Sans", "Segoe UI", "Tahoma", "sans-serif"));font-size:var(--gc-font-size, var(--theme-font-size, 14px));font-weight:400;color:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)));margin:var(--gc-margin, var(--theme-margin, 5px));display:inline-block;box-sizing:border-box}:host .user-select{-webkit-user-select:text;-khtml-user-select:text;-moz-user-select:text;-ms-user-select:text;-o-user-select:text;user-select:text}:host .text-link{color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-text-decoration-hover:underline;--gc-cursor-hover:pointer}:host .text-link:not([disabled]):hover{text-decoration:underline;cursor:pointer}:host([hidden]){display:none !important}:host([readonly]) *{pointer-events:none}:host([disabled]) *{cursor:not-allowed}:host([caption]:not([caption=""])){margin-top:calc(var(--gc-margin, var(--theme-margin, 5px)) + var(--gc-caption-font-size, var(--theme-caption-font-size, 14px)) + 8px)}:host([caption]:not([caption=""])),:host([info-text]:not([info-text=""])){overflow:visible;position:relative}:host([caption=""][info-text]:not([info-text=""])),:host([info-text]:not([info-text=""]):not([caption])){margin-right:calc(var(--gc-margin, var(--theme-margin, 5px)) + 22px)}#elementWrapper{box-sizing:content-box;height:100%;width:100%;display:flex;align-items:center;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container{position:relative;display:flex;flex-direction:column;width:100%;height:100%;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container .header-container.top{top:var(--gc-header-container-top, calc(0px - 8px - var(--gc-caption-font-size, var(--theme-caption-font-size, 14px))));flex-direction:row}.root-container .header-container.side{right:-22px;flex-direction:column;height:inherit}.root-container .header-container{position:absolute;display:flex;align-items:center}.root-container .header-container .icon,.root-container .header-container gc-widget-icon{cursor:default;margin:auto;height:18px;width:18px;display:block;--gc-color:var(--gc-caption-info-color, var(--theme-caption-info-color, #98999b))}.root-container .header-container .caption{flex:1;cursor:default;white-space:nowrap;margin-right:2px;font-weight:var(--gc-caption-font-weight, var(--theme-caption-font-weight, 400));font-size:var(--gc-caption-font-size, var(--theme-caption-font-size, 14px));color:var(--gc-caption-font-color, var(--theme-caption-font-color, #999999))}.invisible{visibility:hidden}:host{width:200px;height:200px}:host svg #face-layer{transform:matrix(1, 0, 0, 1, 25, 25)}:host svg #face-layer #outer-circle{fill:var(--gc-ring-color, var(--theme-tertiary-color, #63666a))}:host svg #face-layer #inner-circle{fill:var(--gc-background-color, #f7f7f7)}:host svg #scale-layer ellipse{fill:var(--gc-tick-color, #f7f7f7)}:host svg #scale-layer text{font-size:var(--gc-tick-label-font-size, 4.75px);fill:var(--gc-tick-label-font-color, #f7f7f7)}:host svg #label-layer #main-title{text-anchor:middle;font-size:5.25px;font-weight:500;fill:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)))}:host svg #label-layer #sub-title{text-anchor:middle;font-size:4.25px;fill:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)))}:host svg #needle-layer{transform:translate(50px, 50px);fill:var(--gc-needle-color, var(--theme-primary-color, #cc0000))}:host([disabled]) svg #face-layer #outer-circle{fill:#cccccc}:host([disabled]) svg #face-layer #inner-circle{fill:var(--gc-background-color-disabled, var(--theme-background-color-disabled, #e5e5e5))}:host([disabled]) svg #scale-layer ellipse{fill:var(--gc-font-color-disabled, var(--theme-font-color-disabled, #999999))}:host([disabled]) svg #scale-layer text{fill:var(--gc-font-color-disabled, var(--theme-font-color-disabled, #999999))}:host([disabled]) svg #label-layer #main-title,:host([disabled]) svg #label-layer #sub-title{fill:var(--gc-font-color-disabled, var(--theme-font-color-disabled, #999999))}:host([disabled]) svg #needle-layer{fill:#cccccc}';const a=300;const n=150;const l=Math.PI/180;let h=class{constructor(o){t(this,o);this.valueChanged=e(this,"value-changed",7);this.cssPropertyChanged=e(this,"css-property-changed",7);this.base=new class extends r{get dial(){return this.parent}get element(){return this.dial.el}onValueChanged(t,e){this.dial.value=t}}(this);this.dragging=false;this.startAngle=0;this.oldValue=0;this.valueDiff=0;this.numUnits=10;this.value=0;this.minValue=0;this.maxValue=100;this.precision=0;this._refresh=0;this.hidden=false;this.disabled=false}render(){const t=this.createTicks();const e=(this.base.value-this.base.minValue)/(this.base.maxValue-this.base.minValue);const i=e*a+n+60;return s.doRender(o("svg",{width:"100%",height:"100%",viewBox:"0 0 100 100",preserveAspectRatio:"xMidYMid meet"},o("g",{id:"face-layer"},o("ellipse",{id:"outer-circle",ry:"50",rx:"50",cy:"25",cx:"25"}),o("ellipse",{id:"inner-circle",ry:50-this.ringThickness,rx:50-this.ringThickness,cy:"25",cx:"25"})),o("g",{id:"scale-layer"},t===null||t===void 0?void 0:t.map((t=>[o("ellipse",{ry:t.tickRadius,rx:t.tickRadius,cy:t.tickY,cx:t.tickX}),t.label?o("text",{transform:`translate(${t.labelX}, ${t.labelY}) rotate(${t.labelRotate})`,"text-anchor":t.labelAnchor},t.label):undefined]))),o("g",{id:"label-layer"},o("clipPath",{id:"main-title-clip-path"},o("rect",{x:"32",y:"35",width:"36",height:"10"})),o("clipPath",{id:"sub-title-clip-path"},o("rect",{x:"32",y:"41",width:"36",height:"10"})),o("g",{"clip-path":"url(#main-title-clip-path)"},o("text",{id:"main-title",x:"50",y:"41"},this.mainTitle)),o("g",{"clip-path":"url(#sub-title-clip-path)"},o("text",{id:"sub-title",x:"50",y:"49"},this.subTitle))),o("g",{id:"needle-layer"},o("path",{id:"needle",style:{transform:`rotate(${i}deg)`},d:`m -5 ${this.ringThickness-50+8} l 5 -7 l 5 7 z`}),o("path",{id:"indicator",d:this.createValueIndicatorRing(),style:{transform:`rotate(${n-30}deg)`}}))),{caption:this.caption,infoText:this.infoText,tooltip:this.tooltip})}onValueChanged(t,e){this.valueChanged.emit({value:t,oldValue:e})}onCSSPropertyChanged(t){this.setCSSProperty("--gc-tick-label-font-size",this.getTickLabelFontSize());this.refresh()}onMouseDown(t){if(!this.disabled){this.handleMouseDown(t)}}onMouseUp(t){this.handleMouseUp(t)}onMouseMove(t){this.handleMouseMove(t)}createTicks(){const t=this.base.minValue;const e=this.base.maxValue;if(t<e){const o=+(this.base.getCSSProperty("--gc-font-size")||"5.75px").replace(/px/,"");const i=this.numUnits;const r=(e-t)/i;let s=t;const c=[];for(let t=0;t<=i;++t){c.push(this.getTickProperties(t,i,s,o));s+=r}return c}}handleMouseDown(t){if(t.button===0){const e=this.el.getBoundingClientRect();const o=t.clientX-e.left;const i=t.clientY-e.top;const r=this.getMouseInputLocation(e,o,i);if(this.hitTest(r)){this.dragging=true;this.startAngle=r.angle;this.oldValue=this.base.value;this.valueDiff=0}}}handleMouseUp(t){if(t.button===0&&this.dragging){this.dragging=false;const e=this.el.getBoundingClientRect();const o=t.clientX-e.left;const i=t.clientY-e.top;const r=this.getMouseInputLocation(e,o,i);this.setValueWithMouse(r.angle)}}handleMouseMove(t){if(this.dragging){const e=this.el.getBoundingClientRect();const o=t.clientX-e.left;const i=t.clientY-e.top;const r=this.getMouseInputLocation(e,o,i);this.setValueWithMouse(r.angle)}}hitTest(t){return t.distance<=(50-this.ringThickness)*2}getMouseInputLocation(t,e,o){const i={x:e,y:o};const r={x:(t.right-t.left)/2,y:(t.bottom-t.top)/2};i.x=i.x-r.x;i.y=i.y-r.y;const s=Math.sqrt(i.x*i.x+i.y*i.y);const c=Math.atan2(i.y,i.x)/l;return{distance:s,angle:c}}setValueWithMouse(t){let e=t-this.startAngle;if(e<-180){e+=360}else if(e>180){e-=360}this.valueDiff+=e/a;this.startAngle=t;let o=this.oldValue+this.valueDiff*(this.base.maxValue-this.base.minValue);if(o>this.base.maxValue){o=this.base.maxValue}else if(o<this.base.minValue){o=this.base.minValue}this.value=o}getTickProperties(t,e,o,i){const r="middle";const s=1;const c=-240;const n=50;const h=50;const g=50-this.ringThickness+5;const d=g+4;const f=(a/e*t+c)%360*Math.PI/180;const p=Math.cos(f);const m=Math.sin(f);const b=h+p*g;const v=n+m*g;return{tickX:b,tickY:v,tickRadius:s,label:Number(o).toFixed(this.precision),labelAnchor:r,labelX:h+p*d,labelY:n+m*d,labelRotate:f/l+90}}get ringThickness(){const t=this.base.getCSSProperty("--gc-ring-thickness");switch(t){case"thin":return 15;case"normal":return 20;case"thick":return 25}return 20}getTickLabelFontSize(){const t=this.base.getCSSProperty("--gc-font-size");switch(t){case"small":return"4.75px";case"medium":return"5.75px";case"large":return"6.75px"}return"4.75px"}createValueIndicatorRing(){const t=50-this.ringThickness;const e=t+2;const o=(this.base.value-this.base.minValue)/(this.base.maxValue-this.base.minValue);const i=o*a*l;const r=o>.6?1:0;const s=t*Math.cos(i);const c=t*Math.sin(i);const n=e*Math.cos(i);const h=e*Math.sin(i);return`M ${t} 0`+`A ${t} ${t} 0 ${r} 1 ${s} ${c}`+`L ${n} ${h} `+`A ${e} ${e} 0 ${r} 0 ${e} 0 Z`}async setCSSProperty(t,e){e=e.trim();if(await this.getCSSProperty(t)!==e){this.el.style.setProperty(t,e);this.cssPropertyChanged.emit({name:t,value:e})}}async getCSSProperty(t){return getComputedStyle(this.el).getPropertyValue(t).trim()}async refresh(){this._refresh++}get el(){return i(this)}static get watchers(){return{value:["onValueChanged"]}}};h.style=c;export{h as gc_widget_dial};
//# sourceMappingURL=p-a9b705ae.entry.js.map