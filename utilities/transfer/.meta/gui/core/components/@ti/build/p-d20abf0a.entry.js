import{r as t,g as s}from"./p-5bb37414.js";import{SysConfigModel as e}from"../gc-model-sysconfig/lib/SysConfigModel";import{c as i}from"./p-0c6e1a4c.js";import{GcUtils as o}from"../gc-core-assets/lib/GcUtils";let r=class{constructor(s){t(this,s);this.impl=undefined;this.optional=false}reloadScript(){return this.impl.loadConfigScript()}getConfigScript(){return this.impl.getConfigScript()}getGeneratedFile(t){return this.impl.getGeneratedFile(t)}componentWillLoad(){if(o.isInDesigner){this.el["getAdditionalProperties"]=t=>this.impl.lookupSuggestedBindings(t)}}connectedCallback(){this.impl=new e(i(this.el))}disconnectedCallback(){this.impl.dispose()}get el(){return s(this)}};export{r as gc_model_sysconfig};
//# sourceMappingURL=p-d20abf0a.entry.js.map