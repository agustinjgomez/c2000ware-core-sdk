import{r as t,c as i,h as s,g as e}from"./p-ce1dc307.js";let h=class{constructor(s){t(this,s);this.tiColumnFilterChange=i(this,"tiColumnFilterChange",7);this.enabledOptions="";this.eventName="tiChange";this.filterType="partial";this.highlightMatch=false;this.optionDelimiter=",";this.valueProperty="value"}enabledOptionsHandler(t){if(this._multiSelect&&typeof this._multiSelect.setEnabledOptions==="function"){this._multiSelect.setEnabledOptions(t)}}async setEnabledOptions(t){if(t!==undefined){this.enabledOptions=t}}componentDidLoad(){this.hostElement.addEventListener(this.eventName,(t=>this._onEvent(t)));if(this.filterType==="multi"){this._multiSelect=this.hostElement.querySelector("ti-multi-select");this.optionDelimiter=this._multiSelect.optionDelimiter}}_onEvent(t){let i;if(t.detail[this.valueProperty]!==undefined){i=t.detail[this.valueProperty]}else{i=t[this.valueProperty]}if(i!==undefined){this.filterValue=i;const s=Object.assign(Object.assign({},t.detail),{filterColumn:this.filterColumn,filterType:this.filterType,filterValue:this.filterValue,optionDelimiter:this.optionDelimiter,highlightMatch:this.highlightMatch});this.tiColumnFilterChange.emit(s)}}render(){return s("slot",null)}get hostElement(){return e(this)}static get watchers(){return{enabledOptions:["enabledOptionsHandler"]}}};export{h as ti_column_filter};
//# sourceMappingURL=p-4e2b0d27.entry.js.map