import{r as t,c as e,h as i,g as o}from"./p-84e39b72.js";import{W as r}from"./p-7b70dbb4.js";import{GcConsole as n}from"../gc-core-assets/lib/GcConsole";import{GcUtils as a}from"../gc-core-assets/lib/GcUtils";import{DataConverter as c}from"../gc-core-databind/lib/CoreDatabind";import"../gc-core-assets/lib/GcFiles";import"../gc-core-assets/lib/GcLocalStorage";import"../gc-widget-message-dialog/lib/GcMessageDialog";const s=':host::-webkit-scrollbar,::-webkit-scrollbar{width:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px));height:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px))}:host::-webkit-scrollbar-track,::-webkit-scrollbar-track{background:var(--gc-scrollbar-track-background-color, var(--theme-scroll-track-color, rgba(35, 31, 32, 0.2)))}:host::-webkit-scrollbar-thumb,::-webkit-scrollbar-thumb{background:var(--gc-scrollbar-thumb-background-color, var(--theme-scroll-thumb-color, rgba(35, 31, 32, 0.65)))}:host::-webkit-scrollbar-thumb:hover,::-webkit-scrollbar-thumb:hover{background:var(--gc-scrollbar-thumb-background-color-hover, var(--theme-scroll-thumb-color-hover, rgba(35, 31, 32, 0.8)))}:host::-webkit-scrollbar-corner,::-webkit-scrollbar-corner{background:rgba(0, 0, 0, 0)}:host(:focus),:host *:focus{outline:none}:host{-webkit-user-select:none;-khtml-user-select:none;-moz-user-select:none;-ms-user-select:none;-o-user-select:none;user-select:none;font-family:var(--gc-font-family, var(--theme-font-family, "Roboto", "Open Sans", "Segoe UI", "Tahoma", "sans-serif"));font-size:var(--gc-font-size, var(--theme-font-size, 14px));font-weight:400;color:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)));margin:var(--gc-margin, var(--theme-margin, 5px));display:inline-block;box-sizing:border-box}:host .user-select{-webkit-user-select:text;-khtml-user-select:text;-moz-user-select:text;-ms-user-select:text;-o-user-select:text;user-select:text}:host .text-link{color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-text-decoration-hover:underline;--gc-cursor-hover:pointer}:host .text-link:not([disabled]):hover{text-decoration:underline;cursor:pointer}:host([hidden]){display:none !important}:host([readonly]) *{pointer-events:none}:host([disabled]) *{cursor:not-allowed}:host([caption]:not([caption=""])){margin-top:calc(var(--gc-margin, var(--theme-margin, 5px)) + var(--gc-caption-font-size, var(--theme-caption-font-size, 14px)) + 8px)}:host([caption]:not([caption=""])),:host([info-text]:not([info-text=""])){overflow:visible;position:relative}:host([caption=""][info-text]:not([info-text=""])),:host([info-text]:not([info-text=""]):not([caption])){margin-right:calc(var(--gc-margin, var(--theme-margin, 5px)) + 22px)}#elementWrapper{box-sizing:content-box;height:100%;width:100%;display:flex;align-items:center;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container{position:relative;display:flex;flex-direction:column;width:100%;height:100%;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container .header-container.top{top:var(--gc-header-container-top, calc(0px - 8px - var(--gc-caption-font-size, var(--theme-caption-font-size, 14px))));flex-direction:row}.root-container .header-container.side{right:-22px;flex-direction:column;height:inherit}.root-container .header-container{position:absolute;display:flex;align-items:center}.root-container .header-container .icon,.root-container .header-container gc-widget-icon{cursor:default;margin:auto;height:18px;width:18px;display:block;--gc-color:var(--gc-caption-info-color, var(--theme-caption-info-color, #98999b))}.root-container .header-container .caption{flex:1;cursor:default;white-space:nowrap;margin-right:2px;font-weight:var(--gc-caption-font-weight, var(--theme-caption-font-weight, 400));font-size:var(--gc-caption-font-size, var(--theme-caption-font-size, 14px));color:var(--gc-caption-font-color, var(--theme-caption-font-color, #999999))}.invisible{visibility:hidden}div.progress{border-color:var(--gc-progress-primary-color, var(--theme-secondary-color, #118899));border-bottom-color:var(--gc-progress-secondary-color, var(--gc-border-color, var(--theme-border-color, #e5e5e5)));border-style:solid;border-width:var(--gc-progress-thickness, 2px);border-radius:50%;width:var(--gc-progress-size, 14px);height:var(--gc-progress-size, 14px);animation:spin 0.8s linear infinite}@keyframes spin{0%{transform:rotate(0deg)}100%{transform:rotate(360deg)}}';let l=class{constructor(i){t(this,i);this.cssPropertyChanged=e(this,"css-property-changed",7);this._refresh=0;this.hidden=false}render(){return r.doRender(i("div",{class:"progress"}))}async setCSSProperty(t,e){e=e.trim();if(await this.getCSSProperty(t)!==e){this.el.style.setProperty(t,e);this.cssPropertyChanged.emit({name:t,value:e})}}async getCSSProperty(t){return getComputedStyle(this.el).getPropertyValue(t).trim()}async refresh(){this._refresh++}get el(){return o(this)}};l.style=s;const h=':host::-webkit-scrollbar,::-webkit-scrollbar{width:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px));height:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px))}:host::-webkit-scrollbar-track,::-webkit-scrollbar-track{background:var(--gc-scrollbar-track-background-color, var(--theme-scroll-track-color, rgba(35, 31, 32, 0.2)))}:host::-webkit-scrollbar-thumb,::-webkit-scrollbar-thumb{background:var(--gc-scrollbar-thumb-background-color, var(--theme-scroll-thumb-color, rgba(35, 31, 32, 0.65)))}:host::-webkit-scrollbar-thumb:hover,::-webkit-scrollbar-thumb:hover{background:var(--gc-scrollbar-thumb-background-color-hover, var(--theme-scroll-thumb-color-hover, rgba(35, 31, 32, 0.8)))}:host::-webkit-scrollbar-corner,::-webkit-scrollbar-corner{background:rgba(0, 0, 0, 0)}:host(:focus),:host *:focus{outline:none}:host{-webkit-user-select:none;-khtml-user-select:none;-moz-user-select:none;-ms-user-select:none;-o-user-select:none;user-select:none;font-family:var(--gc-font-family, var(--theme-font-family, "Roboto", "Open Sans", "Segoe UI", "Tahoma", "sans-serif"));font-size:var(--gc-font-size, var(--theme-font-size, 14px));font-weight:400;color:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)));margin:var(--gc-margin, var(--theme-margin, 5px));display:inline-block;box-sizing:border-box}:host .user-select{-webkit-user-select:text;-khtml-user-select:text;-moz-user-select:text;-ms-user-select:text;-o-user-select:text;user-select:text}:host .text-link{color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-text-decoration-hover:underline;--gc-cursor-hover:pointer}:host .text-link:not([disabled]):hover{text-decoration:underline;cursor:pointer}:host([hidden]){display:none !important}:host([readonly]) *{pointer-events:none}:host([disabled]) *{cursor:not-allowed}:host([caption]:not([caption=""])){margin-top:calc(var(--gc-margin, var(--theme-margin, 5px)) + var(--gc-caption-font-size, var(--theme-caption-font-size, 14px)) + 8px)}:host([caption]:not([caption=""])),:host([info-text]:not([info-text=""])){overflow:visible;position:relative}:host([caption=""][info-text]:not([info-text=""])),:host([info-text]:not([info-text=""]):not([caption])){margin-right:calc(var(--gc-margin, var(--theme-margin, 5px)) + 22px)}#elementWrapper{box-sizing:content-box;height:100%;width:100%;display:flex;align-items:center;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container{position:relative;display:flex;flex-direction:column;width:100%;height:100%;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container .header-container.top{top:var(--gc-header-container-top, calc(0px - 8px - var(--gc-caption-font-size, var(--theme-caption-font-size, 14px))));flex-direction:row}.root-container .header-container.side{right:-22px;flex-direction:column;height:inherit}.root-container .header-container{position:absolute;display:flex;align-items:center}.root-container .header-container .icon,.root-container .header-container gc-widget-icon{cursor:default;margin:auto;height:18px;width:18px;display:block;--gc-color:var(--gc-caption-info-color, var(--theme-caption-info-color, #98999b))}.root-container .header-container .caption{flex:1;cursor:default;white-space:nowrap;margin-right:2px;font-weight:var(--gc-caption-font-weight, var(--theme-caption-font-weight, 400));font-size:var(--gc-caption-font-size, var(--theme-caption-font-size, 14px));color:var(--gc-caption-font-color, var(--theme-caption-font-color, #999999))}.invisible{visibility:hidden}:host{font-family:var(--gc-font-family, var(--theme-font-family, "Roboto", "Open Sans", "Segoe UI", "Tahoma", "sans-serif"));font-size:var(--gc-font-size, var(--theme-font-size, 14px));font-weight:400;color:var(--gc-font-color, var(--theme-font-color, #555555));box-sizing:border-box}.grid{display:grid;row-gap:0px;column-gap:0px;grid-template-columns:1fr;white-space:nowrap;width:100%;padding:5px}.grid.with-caption-column{grid-template-columns:min-content 1fr}.grid.with-caption-column .no-caption{grid-column:1/span 2}.grid.with-caption-column .caption-column{justify-self:var(--gc-caption-text-align, right);display:flex;flex-direction:column;justify-content:center}.grid.with-caption-column .caption-column gc-widget-label{--gc-font-size:var(--gc-caption-font-size);font-size:inherit;font-weight:var(--gc-caption-font-weight, var(--theme-caption-font-weight, 400));color:var(--gc-caption-font-color, var(--theme-caption-font-color, #999999));--gc-text-align:var(--gc-caption-text-align, right)}.grid.with-caption-column .caption-column.radio-caption{justify-content:start}.grid.with-caption-column .caption-column.radio-caption gc-widget-label{padding-top:var(--gc-margin, var(--theme-margin, 5px))}.grid.with-caption-column .caption-column.hide{display:none}.grid .grid-row{display:contents}.grid div.flex-horizontal{display:flex;flex-direction:row;align-items:center;position:relative}.grid div.flex-horizontal.hide{display:none}.grid div.flex-horizontal.with-caption.top>.units-column,.grid div.flex-horizontal.with-caption.top>.error-icon{margin-top:calc(var(--gc-margin, var(--theme-margin, 5px)) + var(--gc-caption-font-size, var(--theme-caption-font-size, 14px)) + 8px)}.grid div.flex-horizontal .control.auto-fit{flex:none;width:auto}.grid div.flex-horizontal .error-icon{position:absolute;left:calc(0px - var(--gc-margin, var(--theme-margin, 5px)))}.grid .with-units{--gc-text-align:right}.grid gc-widget-input,.grid gc-widget-slider{flex:1}';let d=class{constructor(i){t(this,i);this.valuesChanged=e(this,"values-changed",7);this.propertyValueChanged=e(this,"property-value-changed",7);this.cssPropertyChanged=e(this,"css-property-changed",7);this.keyCounters=new Map;this.properties=[];this.alignCaptionTop=false;this.values={};this.maxVisibleItems=8;this.onValueChangedHandler=t=>{if(!this.properties){return}const e=+t.currentTarget.id;if(e<0||e>=this.properties.length){return}const i=this.properties[e];const o=i.id||i.caption;if(!o){return}let r=t.detail.value;const n=this.getSelectOptions(i);if(this.doOptionsHaveValues(n)){r=n[r].value}if(this.values?.[o]===r){return}if(typeof this.values?.[o]==="number"&&isNaN(this.values?.[o])&&typeof r==="number"&&isNaN(r)){return}this.values=this.values?{...this.values}:{};const a=this.values[o];this.values[o]=r;this.propertyValueChanged.emit({id:i.id,caption:i.caption,row:e,value:r,oldValue:a});this.valuesChanged.emit({value:this.values})};this._refresh=0;this.hidden=false;this.disabled=false}get logger(){if(!this._logger){this._logger=new n("gc-widget-property-grid",this.el.id)}return this._logger}verifyWidgetType(t){const e=t.id||t.caption;if(!e){this.logger.error("Invalid property: missing both id and caption.  If there is no caption, you must provide an id.")}else if(t.widgetType===undefined);else if(t.format==="boolean"){if(t.widgetType!=="toggle"&&t.widgetType!=="checkbox"){this.logger.error(`Invalid widgetType="${t.widgetType}" when format="boolean", for property: ${e}.  The type must be either "toggle" or "checkbox"`)}}else if(t.options){if(t.widgetType!=="select"&&t.widgetType!=="radio"){this.logger.error(`Invalid widgetType="${t.widgetType}" when options are provided, for property: ${e}.  The type must be either "select" or "radio"`)}}else if(t.format==="color"){if(t.widgetType!=="input"&&t.widgetType!=="color"){this.logger.error(`Invalid widgetType="${t.widgetType}" when format="color", for property: ${e}.  The type can only be "input"`)}}else if(t.widgetType==="spinner"||t.widgetType==="slider"){if(!t.format){this.logger.error(`Missing format for property: ${e}.  For widgetType="${t.widgetType}" requires a numeric format.`)}else if(t.format==="text"){this.logger.error(`Invalid widgetType="${t.widgetType}" when format="text", for property: ${e}.  The type can only be "input"`)}if(t.maxValue===undefined){this.logger.error(`Missing maxValue for widgetType="${t.widgetType}"`)}}}onPropertiesChanged(){if(typeof this.propertyInfo==="string"){const t=/([^[#,|;]+)(#([a-zA-Z]+)(\d+)?|\[([^\]]+)\])?(#([^[,|;]+))?/g;const e=[];let i;while((i=t.exec(this.propertyInfo))!==null){const t=i[5];const o=i[3];const r=i[4]?+i[4]:undefined;if(o==="boolean"){e.push({caption:"",label:i[1],format:o})}else{e.push({caption:i[1],format:o,precision:r,options:t,units:i[7]})}}this.properties=e}else{this.properties=this.propertyInfo??[]}this.properties.forEach((t=>this.verifyWidgetType(t)))}onCSSPropertyChanged(t){if(t.detail.name==="--gc-caption-text-align"){this.alignCaptionTop=t.detail.value==="top"}}componentWillLoad(){this.onPropertiesChanged()}componentWillRender(){this.alignCaptionTop=getComputedStyle(this.el).getPropertyValue("--gc-caption-text-align")?.trim()==="top"}getSelectOptions(t){if(t.options&&Array.isArray(t.options)){if(typeof t.options[0]==="string"){return t.options.map((t=>({label:t})))}return t.options}if(typeof t.options==="string"){return a.parseArrayProperty(t.options).map((t=>({label:t})))}}doOptionsHaveValues(t){if(!t){return}return t.reduce(((t,e)=>e.value&&t),true)}renderInputControl(t,e){let o=this.values?.[t.id||t.caption];const r=t.hidden;const n=t.disabled||this.disabled;const a=`${e}`;const s=`control${t.units?" with-units":""}`;const l=this.alignCaptionTop?this.getCaption(t):undefined;const h=t.caption?undefined:t.infoText;const d=l?t.infoText:h;if(t.format==="boolean"){const e=c.convert(o,typeof o,"boolean");if(t.widgetType==="toggle"){return[t.widgetType,i("gc-widget-toggle-switch",{id:a,class:s,label:t.label,checked:e,"onChecked-changed":this.onValueChangedHandler,caption:l,infoText:d,disabled:n,hidden:r})]}return["checkbox",i("gc-widget-checkbox",{id:a,class:s,label:t.label,checked:e,"onChecked-changed":this.onValueChangedHandler,caption:l,infoText:d,disabled:n,hidden:r})]}if(t.widgetType==="spinner"){return[t.widgetType,i("gc-widget-spinner",{id:a,class:s+(this.canAutoFit(t)?" auto-fit":""),value:isNaN(+o)?undefined:+o,"onValue-changed":this.onValueChangedHandler,format:t.format,precision:t.precision,increment:t.increment,minValue:t.minValue,maxValue:t.maxValue,caption:l,infoText:d,disabled:n,hidden:r})]}if(t.widgetType==="slider"){return[t.widgetType,i("gc-widget-slider",{id:a,class:s,value:isNaN(+o)?undefined:+o,"onValue-changed":this.onValueChangedHandler,step:t.increment,minValue:t.minValue,maxValue:t.maxValue,caption:l,infoText:d,disabled:n,hidden:r})]}const g=this.getSelectOptions(t);if(g){if(this.doOptionsHaveValues(g)){o=g.findIndex((t=>t.value===o))}o=isNaN(+o)?-1:+o;if(t.widgetType==="radio"){return[t.widgetType,i("gc-widget-radio-group",{id:a,class:s,selectedIndex:o,"onSelected-index-changed":this.onValueChangedHandler,caption:l,infoText:d,disabled:n,hidden:r},g.map(((t,e)=>i("gc-widget-radio",{id:`${e}`,label:t.label,disabled:t.disabled,hidden:t.hidden}))))]}const e=Array.isArray(t.options)?g.map((t=>t.label)):t.options;return["select",i("gc-widget-select",{id:a,class:s+" auto-fit",labels:e,maxVisibleItems:this.maxVisibleItems<1?undefined:this.maxVisibleItems,selectedIndex:o,"onSelected-index-changed":this.onValueChangedHandler,caption:l,infoText:d,disabled:n,hidden:r})]}if(t.format==="color"||t.widgetType==="color"){return["color",i("gc-widget-color-input",{id:a,class:s,value:o,"onValue-changed":this.onValueChangedHandler,caption:l,infoText:d,disabled:n,hidden:r})]}return["input",i("gc-widget-input",{id:a,class:s+(this.canAutoFit(t)?" auto-fit":""),value:o,"onValue-changed":this.onValueChangedHandler,format:t.format||"text",precision:t.precision,placeholder:t.placeholder,caption:l,infoText:d,disabled:n,hidden:r,minValue:t.minValue,maxValue:t.maxValue})]}getCaption(t){if(!t.caption){return}let e=t.caption;if(this.autoCapitalizeCaption){e=t.caption.replace(/\s[a-z]/g,(t=>t.toUpperCase()));e=e.charAt(0).toUpperCase()+e.slice(1)}if(this.captionPunctuation&&!t.caption.endsWith(this.captionPunctuation)){e+=this.captionPunctuation}return e}renderCaption(t){if(t.caption){return i("div",{part:"caption-cell",class:`caption-column${t.widgetType==="radio"?" radio-caption":""}${t.hidden?" hide":""}`},i("gc-widget-label",{label:this.getCaption(t),hidden:t.hidden,infoText:t.infoText}))}}generateKey(t){let e=this.keyCounters.get(t);if(e===undefined){e={count:0,total:0};this.keyCounters.set(t,e)}e.count++;if(e.count>e.total){e.total=e.count}return`${t}${e.count}`}canAutoFit(t){if(t.maxValue===undefined||t.minValue===undefined){return false}if(t.format==="dec"||t.format==="exp"){return t.precision!==undefined}return t.format==="hex"||t.format==="binary"}renderProperty(t,e){const[o,r]=this.renderInputControl(t,e);return i("div",{class:"grid-row",key:this.generateKey(o)},this.alignCaptionTop?null:this.renderCaption(t),i("div",{part:"control-cell",class:`flex-horizontal ${t.caption?"with":"no"}-caption${this.alignCaptionTop?" top":""}${t.hidden?" hide":""}`},r,t.units?i("gc-widget-label",{class:"units-column",label:t.units}):undefined,t.errorText||t.warningText?i("gc-widget-icon",{size:"xs",class:"error-icon",icon:t.errorText?"navigation:cancel":"alert:error",tooltip:t.errorText||t.warningText,appearance:t.errorText?"error":"warn"}):null))}render(){this.keyCounters.forEach((t=>t.count=0));const t=(this.properties??[]).map(((t,e)=>this.renderProperty(t,e)));return r.doRender(i("div",{key:"grid",class:`grid${this.alignCaptionTop?"":" with-caption-column"}`,part:"grid",style:{"grid-template-rows":`repeat(${t.length||1}, min-content)`}},t),{caption:this.caption,infoText:this.infoText})}async setCSSProperty(t,e){e=e.trim();if(await this.getCSSProperty(t)!==e){this.el.style.setProperty(t,e);this.cssPropertyChanged.emit({name:t,value:e})}}async getCSSProperty(t){return getComputedStyle(this.el).getPropertyValue(t).trim()}async refresh(){this._refresh++}get el(){return o(this)}static get watchers(){return{propertyInfo:["onPropertiesChanged"]}}};d.style=h;export{l as gc_widget_progress_spinner,d as gc_widget_property_grid};
//# sourceMappingURL=p-309fde47.entry.js.map