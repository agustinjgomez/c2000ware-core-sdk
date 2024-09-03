import{W as i}from"./p-6a8f5ea3.js";import{GcConsole as t}from"../gc-core-assets/lib/GcConsole";new t("gc-widget-base-selector");class s extends i{constructor(i){super(i);this.parent=i;this.options=[];this.valuesArray=[];this.desired=undefined;this.loaded=false}initializeComponent(){if(this.loaded)return;const i=this.parent.selectedIndex;const t=this.parent.selectedValue;const s=this.parent.selectedLabel;if(i!==undefined){this.desired="Index"}else if(t!==undefined){this.desired="Value"}else if(s!==undefined){this.desired="Label"}this.loaded=true;this.labelsChanged();this.valuesChanged();this.sortedChanged();this.initialIndexChanged();if(typeof s!=="undefined")this.parent.selectedLabel=s;if(typeof t!=="undefined")this.parent.selectedValue=t;if(typeof i!=="undefined")this.parent.selectedIndex=i}doRender(t,s){return i.doRender(t,s)}getDisabledValues(){return new Array}getSorted(){return false}getSortedNumerically(){return false}findOption(i,t){if(t!==null&&t!==undefined&&(i!=="index"||t>=0&&t<this.options.length)){for(let s=this.options.length;s-- >0;){const e=this.options[s];if(e[i]==t){return{option:e,selectedIndex:s}}}}return null}updateProperties(){let i=null;if(this.options.length>0){i=this.desired===undefined?this.findOption("index",this.parent.initialIndex===undefined?this.parent.selectedIndex:this.parent.initialIndex):this.findOption(this.desired.toLowerCase(),this.parent["selected"+this.desired])}if(!i){i={option:{index:-1},selectedIndex:-1}}const t=i.option;if(this.desired!=="Index"&&this.parent.selectedIndex!==t.index){this.lastSelectedIndex=t.index;this.parent.selectedIndex=t.index}if(this.desired!=="Label"&&this.parent.selectedLabel!==t.label){this.lastSelectedLabel=t.label;this.parent.selectedLabel=t.label}if(this.desired!=="Value"&&this.parent.selectedValue!=t.value){this.lastSelectedValue=t.value;this.parent.selectedValue=t.value}if(i.selectedIndex!==this.getSelectedIndex()){this.setSelectedIndex(i.selectedIndex)}}reset(){this.loaded=false}toNumberArrayIfAppropriate(i){const t=i.reduce(((i,t)=>i&&!isNaN(+t)),true);return t?i.map((i=>+i)):i}valuesChanged(){if(this.loaded){this.valuesArray=this.toNumberArrayIfAppropriate(this.getValues());const i=this.getDisabledValues();if(this.valuesArray.length===0){this.valuesArray=undefined}for(let t=this.options.length;t-- >0;){const s=this.options[t];s.value=this.valuesArray?this.valuesArray[s.index]:s.index+1;s.disabled=s.value?i.includes(s.value.toString()):false}this.setOptions(this.options);this.updateProperties()}}labelsChanged(){if(this.loaded){const i=this.getLabels();const t=this.getDisabledValues();this.valuesArray=this.getValues();this.options=[];for(let s=0;s<i.length;s++){const e=this.valuesArray?this.valuesArray[s]:s+1;const h={index:s,label:i[s],value:e,disabled:e?t.includes(e.toString()):false};this.options.push(h)}if(this.getSorted()){this.doSort()}this.setOptions(this.options);this.updateProperties()}}doSort(){if(this.options.length>0){if(this.getSorted()){if(!this.getSortedNumerically()){this.options=this.options.sort(((i,t)=>i.label.toLocaleLowerCase().localeCompare(t.label.toLocaleLowerCase())))}else{this.options=this.options.sort(((i,t)=>+i.label-+t.label))}}else{this.options=this.options.sort(((i,t)=>i.index-t.index))}}}sortedChanged(){if(this.loaded){this.doSort();this.setOptions(this.options);const i=this.findOption("index",this.parent.selectedIndex);this.setSelectedIndex(i===null?-1:i.selectedIndex)}}selectedValueChanged(){if(this.loaded&&this.parent.selectedValue!=this.lastSelectedValue){this.lastSelectedValue=this.parent.selectedValue;const i=this.getSelectedIndex();if(i===undefined||i===null)return;if(i>=0&&i<this.options.length?this.options[i].value!=this.parent.selectedValue:this.parent.selectedValue!==undefined){this.desired="Value";this.updateProperties()}}}selectedLabelChanged(){if(this.loaded&&this.parent.selectedLabel!==this.lastSelectedLabel){this.lastSelectedLabel=this.parent.selectedLabel;const i=this.getSelectedIndex();if(i===undefined||i===null)return;if(i>=0&&i<this.options.length?this.options[i].label!==this.parent.selectedLabel:this.parent.selectedLabel!==undefined){this.desired="Label";this.updateProperties()}}}selectedIndexChanged(){if(this.loaded&&this.parent.selectedIndex!==this.lastSelectedIndex){this.lastSelectedIndex=this.parent.selectedIndex;const i=this.getSelectedIndex();if(i===undefined||i===null)return;if(i>=0&&i<this.options.length?this.options[i].index!==this.parent.selectedIndex:this.parent.selectedIndex!==undefined){this.desired="Index";this.updateProperties()}}}onSelectionChanged(i){if(this.desired===undefined){this.desired="Index"}const t=this.options[i];if(t){this.lastSelectedIndex=t.index;this.parent.selectedIndex=t.index;if(this.parent.selectedValue!=t.value){this.lastSelectedValue=t.value;this.parent.selectedValue=t.value}this.lastSelectedLabel=t.label;this.parent.selectedLabel=t.label}this.selectionChanged(i)}initialIndexChanged(){if(this.loaded&&this.desired===undefined){const i=this.getSelectedIndex();if(i>=0&&i<this.options.length?this.options[i].index!==this.parent.initialIndex:this.parent.initialIndex!==undefined){this.updateProperties()}}}}export{s as W};
//# sourceMappingURL=p-1055160b.js.map