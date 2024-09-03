import{r as i,c as t,h as o,H as e,g as c}from"./p-ce1dc307.js";
/*!
 * © Copyright 1995-2020 Texas Instruments Incorporated. All rights reserved.
 */var h;(function(i){i["error"]="error";i["plain"]="plain";i["success"]="success";i["warn"]="warn"})(h||(h={}));var s;(function(i){i["input"]="input";i["toggle"]="toggle"})(s||(s={}));const n=":host .ti-chip-container.ti-chip-toggle:not(.ti-chip-disabled).ti-chip-selected:focus,:host .ti-chip-container:focus{box-shadow:0 0 0 1px #ffffff, 0 0 0 3px #000000, 0 0 0 4px #ffffff;outline:none}:host{display:inline-block}:host .ti-chip-container{display:flex;justify-content:center;align-items:center;height:32px;padding:0 16px;color:#555555;background-color:#ffffff;border-color:#cccccc;border-width:2px;border-style:solid;border-radius:16px;box-sizing:border-box;cursor:default;font-size:14px;line-height:32px;white-space:nowrap;transition:opacity 75ms cubic-bezier(0.4, 0, 1, 1), color 0.15s cubic-bezier(0.4, 0, 1, 1), background-color 0.15s cubic-bezier(0.4, 0, 1, 1)}:host .ti-chip-container:hover{background-color:#e8e8e8;outline:none}:host .ti-chip-container .ti-chip-remove-icon{margin-left:8px}:host .ti-chip-container .ti-chip-remove-icon:hover{cursor:pointer}:host .ti-chip-container .ti-chip-remove-icon:focus{outline-color:#333333;outline-offset:-1px;outline-style:solid;outline-width:2px}:host .ti-chip-container.ti-chip-input:not(.ti-chip-disabled){color:#555555;background-color:#e8e8e8;border-color:#555555}:host .ti-chip-container.ti-chip-input:not(.ti-chip-disabled).ti-chip-error{color:#f7f7f7;background-color:#cc0000;border-color:#333333}:host .ti-chip-container.ti-chip-input:not(.ti-chip-disabled).ti-chip-success{color:#f7f7f7;background-color:#44bb55}:host .ti-chip-container.ti-chip-input:not(.ti-chip-disabled).ti-chip-warn{color:#f7f7f7;background-color:#ff9933}:host .ti-chip-container.ti-chip-input:not(.ti-chip-disabled).ti-chip-removable{background-color:transparent;border:0;font-weight:600;margin-right:12px;padding:0}:host .ti-chip-container.ti-chip-toggle:not(.ti-chip-disabled){cursor:pointer}:host .ti-chip-container.ti-chip-toggle:not(.ti-chip-disabled):hover{background-color:#e8e8e8}:host .ti-chip-container.ti-chip-toggle:not(.ti-chip-disabled).ti-chip-selected{color:#555555;background-color:#e8e8e8;border-color:#555555}:host .ti-chip-container.ti-chip-toggle:not(.ti-chip-disabled).ti-chip-selected:hover{background-color:#cccccc}:host .ti-chip-container.ti-chip-disabled,:host .ti-chip-container.ti-chip-disabled:hover,:host .ti-chip-container.ti-chip-disabled:focus{color:#b9b9b9;background-color:#ffffff;border-color:#e8e8e8;pointer-events:none;cursor:default}:host .ti-chip-container.ti-chip-removed{opacity:0}";let r=class{constructor(o){i(this,o);this.tiChipChange=t(this,"tiChipChange",6);this.removed=false;this.appearance=h.plain;this.disabled=false;this.removable=false;this.selected=false;this.type=s.input}onTiChipToggle(i){if(i.detail.selected&&this.type===s.toggle&&this.group&&i.detail.group===this.group&&i.detail.value!==this.value){this.selected=false}}componentWillLoad(){if(this.type===s.input){const i=this.hostElement.textContent.trim();if(!this.value){this.value=i}else if(i.length===0){this.hostElement.innerHTML=`${this.value}`}}}_chipKeyDown(i){if(["Spacebar"," ","Enter"].some((t=>t===i.key))){this._chipSelectionToggled(i)}}_chipSelectionToggled(i){i.preventDefault();i.stopPropagation();if(this.type===s.toggle&&!this.selected&&this.group&&this.value!=null){this.selected=!this.selected;this.tiChipChange.emit(this._createChipChangeEventDetail())}}_createChipChangeEventDetail(){return{group:this.group,selected:this.selected,type:this.type,value:this.value}}_removeIconKeyPressed(i){if(i.key==="Spacebar"||i.key===" "||i.key==="Enter"){this._removeChip(i)}}_removeChip(i){i.preventDefault();i.stopPropagation();this.removed=true;this.tiChipChange.emit(Object.assign({removed:true},this._createChipChangeEventDetail()));window.setTimeout((()=>this.hostElement.remove()),300)}render(){return o(e,null,o("div",{tabIndex:!this.disabled&&this.type!==s.input?0:null,class:`\n                        ti-chip-container\n                        ti-chip-${this.type}\n                        ti-chip-${this.appearance}\n                        ${this.removed?"ti-chip-removed":""}\n                        ${this.disabled?"ti-chip-disabled":""}\n                        ${this.removable&&!this.disabled?"ti-chip-removable":""}\n                        ${this.selected&&!this.disabled?"ti-chip-selected":""}\n                    `,onClick:i=>this._chipSelectionToggled(i),onKeyDown:i=>this._chipKeyDown(i)},o("slot",null),this.type===s.input&&this.removable&&!this.disabled&&o("ti-svg-icon",{tabIndex:0,class:"ti-chip-remove-icon",size:"xs",appearance:this.appearance!==h.plain&&"reversed","icon-set":"actions",onClick:i=>this._removeChip(i),onKeyPress:i=>this._removeIconKeyPressed(i)},"close")))}get hostElement(){return c(this)}};r.style=n;export{r as ti_chip};
//# sourceMappingURL=p-248b4667.entry.js.map