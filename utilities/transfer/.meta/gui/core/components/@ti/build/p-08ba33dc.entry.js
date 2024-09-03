import{r as t,c as e,h as o,g as r}from"./p-ce1dc307.js";import{W as i}from"./p-f9ca77fd.js";import{W as a}from"./p-6a8f5ea3.js";import"../gc-core-assets/lib/GcUtils";import"../gc-core-assets/lib/GcFiles";import"../gc-core-assets/lib/GcConsole";import"../gc-core-assets/lib/GcLocalStorage";import"../gc-widget-message-dialog/lib/GcMessageDialog";const c=':host::-webkit-scrollbar,::-webkit-scrollbar{width:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px));height:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px))}:host::-webkit-scrollbar-track,::-webkit-scrollbar-track{background:var(--gc-scrollbar-track-background-color, var(--theme-scroll-track-color, rgba(35, 31, 32, 0.2)))}:host::-webkit-scrollbar-thumb,::-webkit-scrollbar-thumb{background:var(--gc-scrollbar-thumb-background-color, var(--theme-scroll-thumb-color, rgba(35, 31, 32, 0.65)))}:host::-webkit-scrollbar-thumb:hover,::-webkit-scrollbar-thumb:hover{background:var(--gc-scrollbar-thumb-background-color-hover, var(--theme-scroll-thumb-color-hover, rgba(35, 31, 32, 0.8)))}:host::-webkit-scrollbar-corner,::-webkit-scrollbar-corner{background:rgba(0, 0, 0, 0)}:host(:focus),:host *:focus{outline:none}:host{-webkit-user-select:none;-khtml-user-select:none;-moz-user-select:none;-ms-user-select:none;-o-user-select:none;user-select:none;font-family:var(--gc-font-family, var(--theme-font-family, "Roboto", "Open Sans", "Segoe UI", "Tahoma", "sans-serif"));font-size:var(--gc-font-size, var(--theme-font-size, 14px));font-weight:400;color:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)));margin:var(--gc-margin, var(--theme-margin, 5px));display:inline-block;box-sizing:border-box}:host .user-select{-webkit-user-select:text;-khtml-user-select:text;-moz-user-select:text;-ms-user-select:text;-o-user-select:text;user-select:text}:host .text-link{color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-text-decoration-hover:underline;--gc-cursor-hover:pointer}:host .text-link:not([disabled]):hover{text-decoration:underline;cursor:pointer}:host([hidden]){display:none !important}:host([readonly]) *{pointer-events:none}:host([disabled]) *{cursor:not-allowed}:host([caption]:not([caption=""])){margin-top:calc(var(--gc-margin, var(--theme-margin, 5px)) + var(--gc-caption-font-size, var(--theme-caption-font-size, 14px)) + 8px)}:host([caption]:not([caption=""])),:host([info-text]:not([info-text=""])){overflow:visible;position:relative}:host([caption=""][info-text]:not([info-text=""])),:host([info-text]:not([info-text=""]):not([caption])){margin-right:calc(var(--gc-margin, var(--theme-margin, 5px)) + 22px)}#elementWrapper{box-sizing:content-box;height:100%;width:100%;display:flex;align-items:center;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container{position:relative;display:flex;flex-direction:column;width:100%;height:100%;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container .header-container.top{top:var(--gc-header-container-top, calc(0px - 8px - var(--gc-caption-font-size, var(--theme-caption-font-size, 14px))));flex-direction:row}.root-container .header-container.side{right:-22px;flex-direction:column;height:inherit}.root-container .header-container{position:absolute;display:flex;align-items:center}.root-container .header-container .icon,.root-container .header-container gc-widget-icon{cursor:default;margin:auto;height:18px;width:18px;display:block;--gc-color:var(--gc-caption-info-color, var(--theme-caption-info-color, #98999b))}.root-container .header-container .caption{flex:1;cursor:default;white-space:nowrap;margin-right:2px;font-weight:var(--gc-caption-font-weight, var(--theme-caption-font-weight, 400));font-size:var(--gc-caption-font-size, var(--theme-caption-font-size, 14px));color:var(--gc-caption-font-color, var(--theme-caption-font-color, #999999))}.invisible{visibility:hidden}:host{width:200px;height:200px}:host svg #face-layer{transform:matrix(1, 0, 0, 1, 25, 25)}:host svg #face-layer #outer-circle{fill:var(--gc-ring-color, var(--theme-tertiary-color, #63666a))}:host svg #face-layer #inner-circle{fill:var(--gc-background-color, #f7f7f7)}:host svg #scale-layer path{stroke:var(--gc-tick-color, var(--gc-font-color, var(--theme-font-color, #555555)))}:host svg #scale-layer path.major{stroke:var(--gc-major-tick-color, var(--gc-font-color, var(--theme-font-color, #555555)))}:host svg #scale-layer text{font-size:var(--gc-font-size, 4.75px);fill:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)))}:host svg #label-layer #main-title{text-anchor:middle;font-size:5.25px;font-weight:500;fill:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)))}:host svg #label-layer #sub-title{text-anchor:middle;font-size:4.25px;fill:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)))}:host svg #label-layer #detail-value-background{fill:var(--gc-detail-value-background-color, #e5e5e5)}:host svg #label-layer #detail-value{text-anchor:end;font-size:4.5px;fill:var(--gc-detail-value-font-color, var(--gc-font-color, var(--theme-font-color, #555555)))}:host svg #needle-layer{transform:translate(50px, 50px);fill:var(--gc-needle-color, #990000)}:host([disabled]) svg #face-layer #outer-circle{fill:#cccccc}:host([disabled]) svg #face-layer #inner-circle{fill:var(--gc-background-color-disabled, var(--theme-background-color-disabled, #e5e5e5))}:host([disabled]) svg #scale-layer path{stroke:var(--gc-font-color-disabled, var(--theme-font-color-disabled, #999999))}:host([disabled]) svg #scale-layer text{fill:var(--gc-font-color-disabled, var(--theme-font-color-disabled, #999999))}:host([disabled]) svg #label-layer #main-title,:host([disabled]) svg #label-layer #sub-title,:host([disabled]) svg #label-layer #detail-value{fill:var(--gc-font-color-disabled, var(--theme-font-color-disabled, #999999))}:host([disabled]) svg #label-layer #detail-value-background{fill:var(--gc-background-color-disabled, var(--theme-background-color-disabled, #e5e5e5));filter:brightness(1.05)}:host([disabled]) svg #needle-layer{fill:#cccccc}';const s=300;const l=150;let n=class{constructor(o){t(this,o);this.cssPropertyChanged=e(this,"css-property-changed",7);this.base=new class extends i{get gauge(){return this.parent}get element(){return this.gauge.el}}(this);this.numTicksPerUnit=1;this.numTicksPerNumberLabel=10;this.numTicksToFirstLabel=0;this.value=0;this.minValue=0;this.maxValue=100;this.precision=0;this._refresh=0;this.hidden=false;this.disabled=false}render(){const t=this.createTicks();const e=(this.base.value-this.base.minValue)/(this.base.maxValue-this.base.minValue);const r=e*s+l+60;return a.doRender(o("svg",{width:"100%",height:"100%",viewBox:"0 0 100 100",preserveAspectRatio:"xMidYMid meet"},o("g",{id:"face-layer"},o("ellipse",{id:"outer-circle",ry:"50",rx:"50",cy:"25",cx:"25"}),o("ellipse",{id:"inner-circle",ry:"44",rx:"44",cy:"25",cx:"25"})),o("g",{id:"scale-layer"},t===null||t===void 0?void 0:t.map((t=>[o("path",{class:t.major?"major":undefined,d:t.tick,"stroke-width":t.tickStrokeWidth}),t.label?o("text",{x:t.labelX,y:t.labelY,"text-anchor":t.labelAnchor},t.label):undefined]))),o("g",{id:"label-layer"},o("clipPath",{id:"detail-value-clip-path"},o("rect",{x:"38",y:"60",width:"30",height:"8"})),o("clipPath",{id:"main-title-clip-path"},o("rect",{x:"32",y:"26",width:"36",height:"10"})),o("clipPath",{id:"sub-title-clip-path"},o("rect",{x:"32",y:"32",width:"36",height:"10"})),o("g",{"clip-path":"url(#main-title-clip-path)"},o("text",{id:"main-title",x:"50",y:"32"},this.mainTitle)),o("g",{"clip-path":"url(#sub-title-clip-path)"},o("text",{id:"sub-title",x:"50",y:"40"},this.subTitle)),this.hasDetailValue?[o("rect",{id:"detail-value-background",x:"35",y:"60",width:"30",height:"8"}),o("g",{"clip-path":"url(#detail-value-clip-path)"},o("text",{id:"detail-value",x:"63",y:"65.55"},this.detailValue))]:undefined),o("g",{id:"needle-layer"},o("circle",{cx:"0",cy:"0",r:"3"}),o("path",{style:{transform:`rotate(${r}deg)`},d:"m -1.19,-2.7 1.19,-39.83 1.19,39.83 -1.19,2.7 z"}))),{caption:this.caption,infoText:this.infoText,tooltip:this.tooltip})}onCSSPropertyChanged(t){if(t.detail.name==="--gc-tick-style"){this.refresh()}}getTickProperties(t,e,o,r,i,a,c){let l="start";let n=.2;let h=6;if(!o){if(r){switch(a){case"bold":h=2;n=.45;break;default:h=4}}else{h=2}}else{switch(a){case"bold":h=2;n=.9;break;default:h=4}}const g=-240;const d=50;const f=50;const v=42;const b=v-h;const p=b-4;const m=(s/e*t+g)%360*Math.PI/180;const u=Math.cos(m);const x=Math.sin(m);const k=f+u*v;const y=f+u*b;const w=d+x*v;const z=d+x*b;if(t>e*.7){l="end"}else if(t>e*.3){l="middle"}return{tick:`M ${k} ${w} L ${y} ${z} z`,tickStrokeWidth:n,major:o,label:o?Number(i).toFixed(this.precision):"",labelAnchor:l,labelX:f+u*p,labelY:d+x*p+ +c/2}}createTicks(){const t=this.base.minValue;const e=this.base.maxValue;if(t<e){const o=this.base.getCSSProperty("--gc-tick-style");const r=+(this.base.getCSSProperty("--gc-font-size")||"4.75px").replace(/px/,"");const i=1/this.numTicksPerUnit;const a=(e-t)*this.numTicksPerUnit;let c=t;let s=false;let l=false;const n=[];for(let t=0;t<=a;++t){if(t>=this.numTicksToFirstLabel&&(t-this.numTicksToFirstLabel)%this.numTicksPerNumberLabel===0){s=true;l=false}else{s=false;l=this.numTicksPerNumberLabel%2===0&&t>=this.numTicksToFirstLabel&&(t-this.numTicksToFirstLabel)%(this.numTicksPerNumberLabel/2)===0?true:false}n.push(this.getTickProperties(t,a,s,l,c,o,r));c+=i}return n}}async setCSSProperty(t,e){e=e.trim();if(await this.getCSSProperty(t)!==e){this.el.style.setProperty(t,e);this.cssPropertyChanged.emit({name:t,value:e})}}async getCSSProperty(t){return getComputedStyle(this.el).getPropertyValue(t).trim()}async refresh(){this._refresh++}get el(){return r(this)}};n.style=c;const h=':host::-webkit-scrollbar,::-webkit-scrollbar{width:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px));height:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px))}:host::-webkit-scrollbar-track,::-webkit-scrollbar-track{background:var(--gc-scrollbar-track-background-color, var(--theme-scroll-track-color, rgba(35, 31, 32, 0.2)))}:host::-webkit-scrollbar-thumb,::-webkit-scrollbar-thumb{background:var(--gc-scrollbar-thumb-background-color, var(--theme-scroll-thumb-color, rgba(35, 31, 32, 0.65)))}:host::-webkit-scrollbar-thumb:hover,::-webkit-scrollbar-thumb:hover{background:var(--gc-scrollbar-thumb-background-color-hover, var(--theme-scroll-thumb-color-hover, rgba(35, 31, 32, 0.8)))}:host::-webkit-scrollbar-corner,::-webkit-scrollbar-corner{background:rgba(0, 0, 0, 0)}:host(:focus),:host *:focus{outline:none}:host{-webkit-user-select:none;-khtml-user-select:none;-moz-user-select:none;-ms-user-select:none;-o-user-select:none;user-select:none;font-family:var(--gc-font-family, var(--theme-font-family, "Roboto", "Open Sans", "Segoe UI", "Tahoma", "sans-serif"));font-size:var(--gc-font-size, var(--theme-font-size, 14px));font-weight:400;color:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)));margin:var(--gc-margin, var(--theme-margin, 5px));display:inline-block;box-sizing:border-box}:host .user-select{-webkit-user-select:text;-khtml-user-select:text;-moz-user-select:text;-ms-user-select:text;-o-user-select:text;user-select:text}:host .text-link{color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-text-decoration-hover:underline;--gc-cursor-hover:pointer}:host .text-link:not([disabled]):hover{text-decoration:underline;cursor:pointer}:host([hidden]){display:none !important}:host([readonly]) *{pointer-events:none}:host([disabled]) *{cursor:not-allowed}:host([caption]:not([caption=""])){margin-top:calc(var(--gc-margin, var(--theme-margin, 5px)) + var(--gc-caption-font-size, var(--theme-caption-font-size, 14px)) + 8px)}:host([caption]:not([caption=""])),:host([info-text]:not([info-text=""])){overflow:visible;position:relative}:host([caption=""][info-text]:not([info-text=""])),:host([info-text]:not([info-text=""]):not([caption])){margin-right:calc(var(--gc-margin, var(--theme-margin, 5px)) + 22px)}#elementWrapper{box-sizing:content-box;height:100%;width:100%;display:flex;align-items:center;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container{position:relative;display:flex;flex-direction:column;width:100%;height:100%;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container .header-container.top{top:var(--gc-header-container-top, calc(0px - 8px - var(--gc-caption-font-size, var(--theme-caption-font-size, 14px))));flex-direction:row}.root-container .header-container.side{right:-22px;flex-direction:column;height:inherit}.root-container .header-container{position:absolute;display:flex;align-items:center}.root-container .header-container .icon,.root-container .header-container gc-widget-icon{cursor:default;margin:auto;height:18px;width:18px;display:block;--gc-color:var(--gc-caption-info-color, var(--theme-caption-info-color, #98999b))}.root-container .header-container .caption{flex:1;cursor:default;white-space:nowrap;margin-right:2px;font-weight:var(--gc-caption-font-weight, var(--theme-caption-font-weight, 400));font-size:var(--gc-caption-font-size, var(--theme-caption-font-size, 14px));color:var(--gc-caption-font-color, var(--theme-caption-font-color, #999999))}.invisible{visibility:hidden}:host{height:100px;width:200px}:host svg #face-layer #arc-background{fill:var(--gc-arc-background-color, var(--theme-tertiary-color, #63666a))}:host svg #face-layer #arc{fill:var(--gc-internal-arc-color, #cc0000)}:host svg #label-layer{fill:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)));text-anchor:middle}:host svg #label-layer #main-title{font-size:5.25px;font-weight:500}:host svg #label-layer #sub-title{font-size:4.25px}:host svg #label-layer #min-value{text-anchor:start;font-size:5.25px}:host svg #label-layer #max-value{text-anchor:end;font-size:5.25px}:host svg #label-layer #value{font-size:8px;font-weight:500}:host([disabled]) svg #face-layer #arc-background{fill:var(--gc-background-color-disabled, var(--theme-background-color-disabled, #e5e5e5))}:host([disabled]) svg #face-layer #arc{fill:#cccccc}:host([disabled]) svg #label-layer{fill:var(--gc-font-color-disabled, var(--theme-font-color-disabled, #999999))}';let g=class{constructor(o){t(this,o);this.cssPropertyChanged=e(this,"css-property-changed",7);this.base=new class extends i{get meter(){return this.parent}get element(){return this.meter.el}}(this);this.value=0;this.minValue=0;this.maxValue=100;this.precision=0;this._refresh=0;this.hidden=false;this.disabled=false}render(){return a.doRender(o("svg",{width:"100%",height:"100%",viewBox:"0 0 100 50",preserveAspectRatio:"xMidYMid meet"},o("g",{id:"face-layer"},o("path",{id:"arc-background",d:this.createMeterPath(this.base.maxValue)}),o("path",{id:"arc",d:this.createMeterPath(this.base.value)})),o("g",{id:"label-layer"},o("text",{id:"main-title",x:"50",y:"40"},this.mainTitle),o("text",{id:"sub-title",x:"50",y:"47"},this.subTitle),o("text",{id:"min-value",x:this.meterThickness+3,y:"49"},(this.base.minValue<this.base.maxValue?this.base.minValue:0).toFixed(this.precision)),o("text",{id:"max-value",x:100-this.meterThickness-3,y:"49"},(this.base.maxValue>this.base.minValue?this.base.maxValue:100).toFixed(this.precision)),o("text",{id:"value",x:"50",y:"30"},this.base.value.toFixed(this.precision)))),{caption:this.caption,infoText:this.infoText,tooltip:this.tooltip})}componentWillLoad(){this.onValueChanged()}onValueChanged(){this.setCSSProperty("--gc-internal-arc-color",this.getMeterFillColor())}onPropChanged(){this.onValueChanged()}onCSSPropertyChanged(t){this.setCSSProperty("--gc-internal-arc-color",this.getMeterFillColor());this.refresh()}trimHexColor(t){return t.charAt(0)==="#"?t.substring(1,7):t}get meterThickness(){const t=this.base.getCSSProperty("--gc-arc-thickness");switch(t){case"thin":return 10;case"normal":return 15;case"thick":return 20}return 15}getArcFillColor(){const t=[];const e=this.base.getCSSProperty("--gc-arc-low-color");const o=this.base.getCSSProperty("--gc-arc-mid-color");const r=this.base.getCSSProperty("--gc-arc-high-color");if(e)t.push(e);if(o)t.push(o);if(r)t.push(r);return t.length>0?t:undefined}getMeterFillColor(t=true){var e;const o=this.base.value/this.base.maxValue;const r=(e=this.getArcFillColor())!==null&&e!==void 0?e:["#329b46 ","#f3cd34 ","#dd0000"];const i=r.length;if(i===1)return r[0];const a=t?1/(i-1):1/i;const c=[];for(let e=0;e<i;++e){const o=t?a*e:a*(e+1);const i=parseInt(this.trimHexColor(r[e]).substring(0,2),16);const s=parseInt(this.trimHexColor(r[e]).substring(2,4),16);const l=parseInt(this.trimHexColor(r[e]).substring(4,6),16);c[e]={pct:o,color:{r:i,g:s,b:l}}}if(o===0){return`rgb(${c[0].color.r}, ${c[0].color.g}, ${c[0].color.b})`}for(let e=0;e<c.length;++e){if(o<=c[e].pct){if(t){const t=c[e-1];const r=c[e];const i=r.pct-t.pct;const a=(o-t.pct)/i;const s=1-a;const l=a;const n={r:Math.floor(t.color.r*s+r.color.r*l),g:Math.floor(t.color.g*s+r.color.g*l),b:Math.floor(t.color.b*s+r.color.b*l)};return`rgb(${n.r}, ${n.g}, ${n.b})`}else{return`rgb(${c[e].color.r}, ${c[e].color.g}, ${c[e].color.b})`}}}}createMeterPath(t){const e=50;const o=e-this.meterThickness;let r=t;if(this.base.minValue>this.base.maxValue){r=Math.max(r,this.base.maxValue);r=Math.min(r,this.base.minValue);r=(this.base.minValue-r)/(this.base.minValue-this.base.maxValue)}else{r=Math.max(r,this.base.minValue);r=Math.min(r,this.base.maxValue);r=(r-this.base.minValue)/(this.base.maxValue-this.base.minValue)}const i=(1-r)*Math.PI;const a=e*Math.cos(i);const c=e*Math.sin(i);const s=o*Math.cos(i);const l=o*Math.sin(i);return"M 0 50 "+`A ${e} ${e} 0 0 1 ${e+a} ${e-c} `+`L ${e+s} ${e-l} `+`A ${o} ${o} 0 0 0 ${e-o} ${e} Z`}async setCSSProperty(t,e){e=e.trim();if(await this.getCSSProperty(t)!==e){this.el.style.setProperty(t,e);this.cssPropertyChanged.emit({name:t,value:e})}}async getCSSProperty(t){return getComputedStyle(this.el).getPropertyValue(t).trim()}async refresh(){this._refresh++}get el(){return r(this)}static get watchers(){return{value:["onValueChanged"],minValue:["onPropChanged"],maxValue:["onPropChanged"],precision:["onPropChanged"]}}};g.style=h;export{n as gc_widget_gauge,g as gc_widget_meter};
//# sourceMappingURL=p-08ba33dc.entry.js.map