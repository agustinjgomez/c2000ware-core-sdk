import{r as t,c as e,h as i,H as a,g as n}from"./p-ce1dc307.js";import{T as s,a as o}from"./p-98813443.js";const d=":host{display:block}:host .ti-tab-panel-content{margin:16px 0}@media (max-width: 766px){:host .ti-tab-panel-content{transition:height 0.225s cubic-bezier(0.4, 0, 0.2, 1), margin 0.225s;overflow-y:hidden}:host .ti-tab-panel-content:not(.ti-tab-panel-expanded){margin:0;height:0}}:host .ti-tab-panel-header{box-sizing:border-box;background-color:#f7f7f7;border-top:2px solid #ffffff;border-bottom:2px solid #ffffff;padding:12px;font-size:14px;font-weight:600;display:flex;justify-content:space-between;align-items:center;user-select:none}@media (max-width: 766px){:host .ti-tab-panel-header{cursor:pointer}}@media (min-width: 767px){:host .ti-tab-panel-header{pointer-events:none}}@media (min-width: 767px){:host .ti-tab-panel-header.ti-tab-panel-hide{display:none}}@media (min-width: 767px){:host .ti-tab-panel-header .ti-tab-panel-icon{display:none}}:host .ti-tab-panel-header .ti-tab-panel-icon ti-svg-icon{transition:transform 0.15s ease-in-out}:host .ti-tab-panel-header .ti-tab-panel-icon.ti-tab-panel-expanded ti-svg-icon{transform:rotate(180deg)}:host .ti-tab-panel-header sub,:host .ti-tab-panel-header sup{line-height:0}@media (min-width: 767px){:host(.ti-tab-panel-render-when-hidden){display:block !important;visibility:hidden !important;position:fixed}}";
/*!
 * © Copyright 1995-2020 Texas Instruments Incorporated. All rights reserved.
 */var h=undefined&&undefined.__decorate||function(t,e,i,a){var n=arguments.length,s=n<3?e:a===null?a=Object.getOwnPropertyDescriptor(e,i):a,o;if(typeof Reflect==="object"&&typeof Reflect.decorate==="function")s=Reflect.decorate(t,e,i,a);else for(var d=t.length-1;d>=0;d--)if(o=t[d])s=(n<3?o(s):n>3?o(e,i,s):o(e,i))||s;return n>3&&s&&Object.defineProperty(e,i,s),s};let l=class{constructor(i){t(this,i);this.tiTabPanelExpanded=e(this,"tiTabPanelExpanded",7);this.tiMetricsAction=e(this,"tiMetricsAction",7);this.expanded=false;this.renderWhenHidden=false;this.titleVisible=false}_headerClicked(){this.expanded=!this.expanded;this.tiTabPanelExpanded.emit({tabId:this.tabId,expanded:this.expanded});this.tiMetricsAction.emit({elementName:this.hostElement.tagName,eventName:"click",data:{value:this.expanded?"expand":"collapse"}})}handleExpandedChange(t){if(this.viewportSize!==s.phone){return}this._contentEl.style.height=this._contentEl.scrollHeight+"px";setTimeout((()=>{this._contentEl.style.removeProperty("height")}),t?250:20)}componentWillLoad(){}disconnectedCallback(){}render(){return i(a,{class:{"ti-tab-panel-render-when-hidden":this.renderWhenHidden&&!this.expanded}},i("div",null,i("div",{class:{"ti-tab-panel-header":true,"ti-tab-panel-hide":!this.titleVisible},onClick:()=>this._headerClicked()},i("span",{innerHTML:this.tabTitle}),i("div",{class:{"ti-tab-panel-icon":true,"ti-tab-panel-expanded":this.expanded}},i("ti-svg-icon",{"icon-set":"objects",size:"s"},"chevron-down"))),i("div",{ref:t=>this._contentEl=t,class:{"ti-tab-panel-content":true,"ti-tab-panel-expanded":this.expanded}},i("slot",null))))}get hostElement(){return n(this)}static get watchers(){return{expanded:["handleExpandedChange"]}}};h([o()],l.prototype,"hostElement",void 0);l.style=d;export{l as ti_tab_panel};
//# sourceMappingURL=p-590df1e4.entry.js.map