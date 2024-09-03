import{r as t,c as e,h as i,g as o}from"./p-5bb37414.js";import{GcConsole as s}from"../gc-core-assets/lib/GcConsole";import{ActionRegistry as r}from"../gc-widget-menu/lib/ActionRegistry";import{nullDataProvider as n}from"../gc-widget-grid/lib/NullDataProvider";const a="annotationCellValue";const c="addressCellValue";const l="instructionCellValue";const h="dasmInstruction";class d{constructor(t,e,i,o){this.type=t;this.dasmInstruction=e;this.addressCellValue=i;this.instructionCellValue=o;this.annotationCellValue={type:t,dasmInstruction:e,breakpoints:[]}}}const g=(t,e)=>{if(t&&e&&t.length===e.length&&t.length>0){for(let i=0;i<t.length;++i){if(t[i]!==e[i])return false}return true}return false};class u{constructor(t,e,i){this.dasmView=t;this.rowCount=e;this.console=i;this.dataIsReady=false;this.gridRows=[];this.includeSource=false;this.hasLabels=false;this.viewPortStartRow=0;this.viewPortVisibleRows=0;this.onDisassembly=async(t,e,i)=>{const o=[];t.forEach(((t,i)=>{let s=-1;for(let i=o.length-1;i>=0;--i){const r=o[i].dasmInstruction.labels;const n=e?t.labels:undefined;if(r&&n&&g(r,n)){s=i;break}const a=o[i].dasmInstruction.source;const c=t.source;if(a&&c&&a.line===c.line&&a.path===c.path){s=i;break}}if(s!==-1){o.splice(s+1,0,u.createGridRow(t,e,true)[0])}else{o.push(...u.createGridRow(t,e,false))}}));let s=0;switch(i){case"scrollDown":s=this.getScrollTopRowIndex(o)+1;break;case"scrollUp":s=this.getScrollTopRowIndex(o)-1;break;case"refresh":s=this.getScrollTopRowIndex(o);break;case"reposition":{s=o.findIndex((t=>t.dasmInstruction.isRequestedLocation));const t=o[s];const e=Number.parseInt(t.dasmInstruction.location.replace("0x",""),16);const i=Number.parseInt(this.gridRows[this.viewPortStartRow].dasmInstruction.location.replace("0x",""),16);const r=Number.parseInt(this.gridRows[this.viewPortStartRow+this.viewPortVisibleRows].dasmInstruction.location.replace("0x",""),16);if(e>i&&e<r){s=this.findMatchingRowIndex(o,this.gridRows[this.viewPortStartRow].dasmInstruction,this.gridRows[this.viewPortStartRow].type)}}break;default:s=o.findIndex((t=>t.dasmInstruction.isRequestedLocation));break}this.gridRows=o;await this.updateBreakpoints();this.dataIsReady=true;return s}}clearGridRows(){this.gridRows=[]}async disassemble(t,e,i,o){this.console.debug(`Requesting disassemble at ${t}, reason is ${o}`);if(u.targetAdapter&&t){this.includeSource=e;this.hasLabels=i;const s=this.rowCount/2;const r=await u.targetAdapter.disassemble(e,t,s,s);return this.onDisassembly(r,i,o)}else{this.includeSource=false;this.hasLabels=false;this.gridRows=[];this.dataIsReady=true;this.dasmView.el.dispatchEvent(new CustomEvent("dasm-data-changed"))}}async onViewportChanged(t,e,i){var o,s;this.console.debug(`Viewport changed startRow=${t}, visibleRows=${e}, reason=${i}`);this.viewPortStartRow=t;this.viewPortVisibleRows=e;if(i==="onScroll"||i==="resize"){if(t+e>=this.rowCount-1){const t=(o=this.gridRows[this.viewPortStartRow])===null||o===void 0?void 0:o.dasmInstruction.location;if(t&&parseInt(t.replace("0x",""),16)<4294967295){this.console.debug((()=>"Requesting next disassembly block"));return this.disassemble(t,this.includeSource,this.hasLabels,"scrollDown")}}else if(t<=0){const t=(s=this.gridRows[0])===null||s===void 0?void 0:s.dasmInstruction.location;if(t&&parseInt(t.replace("0x",""),16)>0){this.console.debug((()=>"Requesting previous disassembly block"));return this.disassemble(t,this.includeSource,this.hasLabels,"scrollUp")}}}return 0}async updateBreakpoints(){var t;const e=await((t=u.targetAdapter)===null||t===void 0?void 0:t.getBreakpoints());if(!e)return;for(const t of this.gridRows){const i=e.find((e=>{var i;if(e.type===t.annotationCellValue.type){switch(e.type){case"source":{let i,o,s,r;if(t.dasmInstruction.source){i=t.dasmInstruction.source.line;o=t.dasmInstruction.source.path}if(e.source){s=e.source.line;r=e.source.path}return s===i&&r===o?e:undefined}case"address":{return e.location===t.dasmInstruction.location?e:undefined}case"label":{return(i=t.dasmInstruction.labels)===null||i===void 0?void 0:i.find((t=>t.startsWith(e.label)))}}}}));t.annotationCellValue.breakpoints=i?[i]:[]}}async toggleBreakpoint(t){await u.targetAdapter.toggleBreakpoint(t);await this.updateBreakpoints();this.dasmView.el.dispatchEvent(new CustomEvent("dasm-data-changed"))}getValue(t,e){var i;if(!this.dataIsReady){return e===a?undefined:"..."}return(i=this.gridRows[t])===null||i===void 0?void 0:i[e]}getPartName(t,e,i){const o=this.gridRows[t];let s="dasm-cell";if(e===c){s+="-location"}else if(o.type==="label"){s+="-symbol"}if(i===null||i===void 0?void 0:i.selected){s+="-selected"}return s}setValue(){}getRowInfo(t){return this.gridRows[t]}static createAddressRow(t){return new d("address",t,t.addressText,t.instructionText.replace(/\s/g,"&nbsp;"))}static createSourceRow(t){var e,i;return new d("source",t,`<span class="location-col">line ${(e=t.source)===null||e===void 0?void 0:e.line.toString()}</span>`,(i=t.source)===null||i===void 0?void 0:i.content)}static createLabelRow(t){var e;return new d("label",t,"",(e=t.formattedLabels||t.labels)===null||e===void 0?void 0:e.join(", "))}static createGridRow(t,e,i){var o;if(i){return[u.createAddressRow(t)]}else{const i=[];if(t.source){i.push(u.createSourceRow(t))}if(e&&((o=t.labels||t.formattedLabels)===null||o===void 0?void 0:o.length)>0){i.push(u.createLabelRow(t))}i.push(u.createAddressRow(t));return i}}getScrollTopRowIndex(t){var e;return((e=this.gridRows)===null||e===void 0?void 0:e.length)>0?this.findMatchingRowIndex(t,this.gridRows[this.viewPortStartRow].dasmInstruction,this.gridRows[this.viewPortStartRow].type):0}findMatchingRowIndex(t,e,i){var o,s,r,n,a,c;for(let l=0;l<t.length;++l){const{dasmInstruction:h,type:d}=t[l];if(h.location===e.location&&((o=h.labels)===null||o===void 0?void 0:o.toString())===((s=e.labels)===null||s===void 0?void 0:s.toString())&&((r=h.source)===null||r===void 0?void 0:r.path)===((n=e.source)===null||n===void 0?void 0:n.path)&&((a=h.source)===null||a===void 0?void 0:a.line)===((c=e.source)===null||c===void 0?void 0:c.line)&&d===i){return l}}return-1}}const m=':host::-webkit-scrollbar,::-webkit-scrollbar{width:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px));height:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px))}:host::-webkit-scrollbar-track,::-webkit-scrollbar-track{background:var(--gc-scrollbar-track-background-color, var(--theme-scroll-track-color, rgba(35, 31, 32, 0.2)))}:host::-webkit-scrollbar-thumb,::-webkit-scrollbar-thumb{background:var(--gc-scrollbar-thumb-background-color, var(--theme-scroll-thumb-color, rgba(35, 31, 32, 0.65)))}:host::-webkit-scrollbar-thumb:hover,::-webkit-scrollbar-thumb:hover{background:var(--gc-scrollbar-thumb-background-color-hover, var(--theme-scroll-thumb-color-hover, rgba(35, 31, 32, 0.8)))}:host::-webkit-scrollbar-corner,::-webkit-scrollbar-corner{background:rgba(0, 0, 0, 0)}:host(:focus),:host *:focus{outline:none}:host{-webkit-user-select:none;-khtml-user-select:none;-moz-user-select:none;-ms-user-select:none;-o-user-select:none;user-select:none;font-family:var(--gc-font-family, var(--theme-font-family, "Roboto", "Open Sans", "Segoe UI", "Tahoma", "sans-serif"));font-size:var(--gc-font-size, var(--theme-font-size, 14px));font-weight:400;color:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)));margin:var(--gc-margin, var(--theme-margin, 5px));display:inline-block;box-sizing:border-box}:host .user-select{-webkit-user-select:text;-khtml-user-select:text;-moz-user-select:text;-ms-user-select:text;-o-user-select:text;user-select:text}:host .text-link{color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-text-decoration-hover:underline;--gc-cursor-hover:pointer}:host .text-link:not([disabled]):hover{text-decoration:underline;cursor:pointer}:host([hidden]){display:none !important}:host([readonly]) *{pointer-events:none}:host([disabled]) *{cursor:not-allowed}:host([caption]:not([caption=""])){margin-top:calc(var(--gc-margin, var(--theme-margin, 5px)) + var(--gc-caption-font-size, var(--theme-caption-font-size, 14px)) + 8px)}:host([caption]:not([caption=""])),:host([info-text]:not([info-text=""])){overflow:visible;position:relative}:host([caption=""][info-text]:not([info-text=""])),:host([info-text]:not([info-text=""]):not([caption])){margin-right:calc(var(--gc-margin, var(--theme-margin, 5px)) + 22px)}#elementWrapper{box-sizing:content-box;height:100%;width:100%;display:flex;align-items:center;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container{position:relative;display:flex;flex-direction:column;width:100%;height:100%;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container .header-container.top{top:var(--gc-header-container-top, calc(0px - 8px - var(--gc-caption-font-size, var(--theme-caption-font-size, 14px))));flex-direction:row}.root-container .header-container.side{right:-22px;flex-direction:column;height:inherit}.root-container .header-container{position:absolute;display:flex;align-items:center}.root-container .header-container .icon,.root-container .header-container gc-widget-icon{cursor:default;margin:auto;height:18px;width:18px;display:block;--gc-color:var(--gc-caption-info-color, var(--theme-caption-info-color, #98999b))}.root-container .header-container .caption{flex:1;cursor:default;white-space:nowrap;margin-right:2px;font-weight:var(--gc-caption-font-weight, var(--theme-caption-font-weight, 400));font-size:var(--gc-caption-font-size, var(--theme-caption-font-size, 14px));color:var(--gc-caption-font-color, var(--theme-caption-font-color, #999999))}.invisible{visibility:hidden}:host{height:400px;width:600px;margin:0;border:2px solid var(--gc-border-color, var(--theme-border-color, #e5e5e5))}:host gc-widget-grid{border:none;flex:1;overflow:hidden;--gc-font-color-highlighted:$gc-font-color;--gc-background-color-highlighted:transparent;--gc-outline-color-focus:transparent}:host gc-widget-grid::part(annotation-cell){background-color:var(--gc-annotation-background-color, #eeeeee);width:24px;height:100%;padding:0;position:relative;display:flex;align-items:center;justify-content:center}:host gc-widget-grid::part(annotation-pc){position:absolute;margin:0;--gc-color:var(--gc-annotation-pc-color, #f3cd34)}:host gc-widget-grid::part(annotation-bp){position:absolute;margin:0;--gc-color:var(--gc-annotation-bp-color, #dd0000)}:host gc-widget-grid::part(annotation-bp-disabled){position:absolute;margin:0;--gc-color:var(--gc-annotation-bp-color-disabled, #98999b)}:host gc-widget-grid::part(dasm-cell){color:var(--gc-font-color)}:host gc-widget-grid::part(dasm-cell-location){color:var(--gc-location-font-color)}:host gc-widget-grid::part(dasm-cell-symbol){color:var(--gc-symbol-font-color)}:host gc-widget-grid::part(dasm-cell-location-selected){color:var(--gc-location-font-color-selected-inactive)}:host gc-widget-grid::part(dasm-cell-symbol-selected){color:var(--gc-symbol-font-color-selected-inactive)}:host gc-widget-grid::part(dasm-cell-selected){color:var(--gc-font-color-selected-inactive)}:host gc-widget-grid #address-col{--gc-column-width:100px}:host gc-widget-grid #text-col{--gc-column-width:1fr;min-width:300px}:host gc-widget-grid:focus-within::part(dasm-cell-location-selected){color:var(--gc-location-font-color-selected)}:host gc-widget-grid:focus-within::part(dasm-cell-symbol-selected){color:var(--gc-symbol-font-color-selected)}:host gc-widget-grid:focus-within::part(dasm-cell-selected){color:var(--gc-font-color-selected)}:host .no-margin{margin:0}:host>*{width:100%}:host #root-container{display:flex;flex-direction:column;height:100%}:host #root-container #top-bar{display:flex;flex-direction:row;align-items:center;justify-content:flex-end;background-color:var(--gc-background-color, #eeeeee);height:var(--gc-height);padding:3px 0 3px 0}:host #root-container #top-bar gc-widget-select{height:100%}:host #root-container #top-bar gc-widget-label{margin:0 5px 0 5px}:host #root-container #top-bar gc-widget-toolbar{width:auto;margin:0 5px}:host #root-container #top-bar gc-widget-toolbar gc-widget-toolbar-action{margin:0;padding:0 2px 0 2px}';const p=new s("gc-widget-disassembly-view");let v=class{constructor(i){t(this,i);this.cssPropertyChanged=e(this,"css-property-changed",7);this.dasmViewportStartRow=-1;this.addresses=[];this.addressBarDisabled=true;this.mixedMode=false;this.showSymbols=true;this.toolbarActionIconSize="m";this.contextMenuActionIconSize="m";this.onDasmDataChanged=()=>{this.dasmGridEl.refresh()};this.onGridViewportChanged=async({detail:t})=>{var e;const{startRow:i,visibleRows:o,reason:s}=t;this.dasmViewportStartRow=i;const r=await((e=this.dataProvider)===null||e===void 0?void 0:e.onViewportChanged(i,o,s));if(r!==0){this.dasmGridEl.scrollRowsBy(-this.dasmViewportStartRow+r)}};this.onAnnotationClick=({detail:t})=>{var e,i,o,s;const r={type:t.type,location:t.dasmInstruction.location};const n=t.dasmInstruction;r.label=((e=n.labels)===null||e===void 0?void 0:e.length)>0?(i=n.labels)===null||i===void 0?void 0:i[0].replace("()",""):"";r.source=n.source?{line:(o=n.source)===null||o===void 0?void 0:o.line,path:n.source.path}:undefined;r.location=n.location;(s=this.dataProvider)===null||s===void 0?void 0:s.toggleBreakpoint(r)};this.onAddressHdlr=t=>{var e;const i=(e=t.detail.value)===null||e===void 0?void 0:e.trim();if(i&&i.length>0){const t=this.addresses.indexOf(i);if(t<0){const t=[i,...this.addresses];if(t.length>10){t.splice(t.length-1,1)}this.addresses=t}if(i===this.selectedAddress){this.onSelectedAddressChanged(i)}else{this.selectedAddress=i}this.currentLocation=i}};this._refresh=0;this.hidden=false}render(){return[i("div",{id:"root-container"},i("div",{id:"top-bar",part:"top-bar"},i("gc-widget-select",{part:"location",ref:t=>this.addressEl=t,disabled:this.addressBarDisabled,type:"filter",class:"no-margin",autoOpen:true,placeholder:"Enter location here...",labels:this.addresses.join(","),selectedLabel:this.selectedAddress,"onFilter-text-committed":this.onAddressHdlr}),i("gc-widget-toolbar",{part:"toolbar"},i("gc-widget-toolbar-separator",{part:"toolbar-separator"}),i("gc-widget-toolbar-action",{part:"toolbar-action refresh",actionId:"dasm-refresh",iconSize:this.toolbarActionIconSize,iconFolderPath:this.actionRefreshIcon?this.actionIconFolderPath:undefined,icon:this.actionRefreshIcon||"navigation:refresh",tooltip:"Refresh view"}),i("gc-widget-toolbar-action",{part:"toolbar-action goto-pc",actionId:"dasm-goto-pc",iconSize:this.toolbarActionIconSize,iconFolderPath:this.actionGotoPcIcon?this.actionIconFolderPath:undefined,icon:this.actionGotoPcIcon||"content:low_priority",tooltip:"Goto current PC location"}),i("gc-widget-toolbar-separator",{part:"toolbar-separator"}),i("gc-widget-toolbar-action",{part:"toolbar-action step-in",actionId:"dasm-step-in",iconSize:this.toolbarActionIconSize,iconFolderPath:this.actionStepInIcon?this.actionIconFolderPath:undefined,icon:this.actionStepInIcon||"navigation:arrow_downward",tooltip:"Assembly Step-into"}),i("gc-widget-toolbar-action",{part:"toolbar-action step-over",actionId:"dasm-step-over",iconSize:this.toolbarActionIconSize,iconFolderPath:this.actionStepOverIcon?this.actionIconFolderPath:undefined,icon:this.actionStepOverIcon||"content:redo",tooltip:"Assembly Step-over"}))),i("gc-widget-grid",{part:"grid",id:"dasm-grid",class:"no-margin",virtual:true,hideHeading:true,ref:t=>this.dasmGridEl=t,"onViewport-changed":this.onGridViewportChanged},i("gc-widget-disassembly-view-annotation-column",{name:`${a}`,heading:"Annotation","onAnnotation-click":this.onAnnotationClick}),i("gc-widget-grid-data-column",{id:"address-col",heading:"Address",hideMinimizeAction:true,readonly:true,name:`${c}`}),i("gc-widget-grid-data-column",{id:"text-col",heading:"Text",hideMinimizeAction:true,readonly:true,name:`${l}`}))),i("gc-widget-context-menu",{part:"contextmenu",anchorId:"dasm-grid"},i("gc-widget-menuaction",{part:"contextmenu-action resume-at-line","action-id":"dasm-resume-at-line",iconSize:this.contextMenuActionIconSize,iconFolderPath:this.actionResumeAtLineIcon?this.actionIconFolderPath:undefined,icon:this.actionResumeAtLineIcon||"av:play_arrow",label:"Resume at line"}),i("gc-widget-menuaction",{part:"contextmenu-action run-to-line","action-id":"dasm-run-to-line",iconSize:this.contextMenuActionIconSize,iconFolderPath:this.actionRunToLineIcon?this.actionIconFolderPath:undefined,icon:this.actionRunToLineIcon||"av:skip_next",label:"Run to line"}),i("gc-widget-menuaction",{part:"contextmenu-action move-to-line","action-id":"dasm-move-to-line",iconSize:this.contextMenuActionIconSize,iconFolderPath:this.actionMoveToLineIcon?this.actionIconFolderPath:undefined,icon:this.actionMoveToLineIcon||"editor:wrap_text",label:"Move to line"}),i("gc-widget-menuseparator",{part:"contextmenu-separator"}),i("gc-widget-menuaction",{part:"contextmenu-action show-source","action-id":"dasm-show-source",iconSize:this.contextMenuActionIconSize,iconFolderPath:this.actionSourceIcon?this.actionIconFolderPath:undefined,icon:this.actionSourceIcon||"action:code",label:"Show source"}),i("gc-widget-menuaction",{part:"contextmenu-action show-symbols","action-id":"dasm-show-symbols",iconSize:this.contextMenuActionIconSize,iconFolderPath:this.actionSymbolsIcon?this.actionIconFolderPath:undefined,icon:this.actionSymbolsIcon||"content:tag",label:"Show symbols"}))]}componentWillLoad(){this.dataProvider=new u(this,500,p);this.el.addEventListener("dasm-data-changed",this.onDasmDataChanged)}componentDidLoad(){this.el.addEventListener("contextmenu",(t=>t.preventDefault()))}connectedCallback(){this.registerActions()}disconnectedCallback(){this.unregisterActions()}componentDidRender(){var t;this.addressEl.setFilterFunction((t=>t));if(this.sourceStylesheet){const e=(t=this.dasmGridEl)===null||t===void 0?void 0:t.shadowRoot;if(!e.querySelector("style[is-disassembly-view-style")){e.appendChild(this.sourceStylesheet)}}this.updateActions()}updateActions(){this.addressBarDisabled=!this.hasDebugContext();const t=this.el.shadowRoot.querySelectorAll("gc-widget-toolbar-action");t.forEach((t=>t.updateStates()))}async setTargetAdapter(t){u.targetAdapter=t;await this.gotoLocation(undefined)}async setSourceStylesheet(t){this.sourceStylesheet=document.createElement("style");this.sourceStylesheet.setAttribute("is-disassembly-view-style","");this.sourceStylesheet.innerHTML=t}async gotoLocation(t,e="reload"){this.currentLocation=t===null||t===void 0?void 0:t.toString();try{if(this.dasmGridEl){if((t===null||t===void 0?void 0:t.length)>0){const i=await this.dataProvider.disassemble(t,this.mixedMode,this.showSymbols,e);await this.dasmGridEl.setDataProvider(this.dataProvider);await this.dasmGridEl.scrollRowsBy(i)}else{this.dataProvider.clearGridRows();await this.dasmGridEl.setDataProvider(n)}}}catch(t){p.error(t)}this.updateActions()}async breakpointChanged(){var t;await this.dataProvider.updateBreakpoints();await((t=this.dasmGridEl)===null||t===void 0?void 0:t.refresh())}reload(){return this.gotoLocation(this.currentLocation)}async onSelectedAddressChanged(t){let e=t;try{e="0x"+parseInt(t).toString(16)}catch(t){}p.debug(`address changed to ${e}`);this.gotoLocation(t)}hasDebugContext(){return this.currentLocation&&!!u.targetAdapter}unregisterActions(){r.unregisterAction("dasm-refresh");r.unregisterAction("dasm-goto-pc");r.unregisterAction("dasm-step-in");r.unregisterAction("dasm-step-over");r.unregisterAction("dasm-run-to-line");r.unregisterAction("dasm-move-to-line");r.unregisterAction("dasm-resume-at-line");r.unregisterAction("dasm-show-source");r.unregisterAction("dasm-show-symbols")}registerActions(){r.registerAction("dasm-refresh",{run:async()=>{var t;p.debug("Refresh");await((t=u.targetAdapter)===null||t===void 0?void 0:t.refresh());const e=this.dataProvider.getRowInfo(this.dasmViewportStartRow).dasmInstruction.location;return this.gotoLocation(e,"refresh")},isEnabled:()=>this.hasDebugContext()});r.registerAction("dasm-goto-pc",{run:async()=>{var t;const e=await((t=u.targetAdapter)===null||t===void 0?void 0:t.getPcLocation());p.debug(`Goto PC at ${e}`);this.gotoLocation(e)},isEnabled:()=>this.hasDebugContext()});r.registerAction("dasm-step-in",{run:async()=>{p.debug("Assembly step in");await u.targetAdapter.asmStepIn()},isEnabled:()=>this.hasDebugContext()});r.registerAction("dasm-step-over",{run:async()=>{p.debug("Assembly step over");await u.targetAdapter.asmStepOver()},isEnabled:()=>this.hasDebugContext()});r.registerAction("dasm-run-to-line",{run:()=>{var t,e;const{location:i,addressText:o}=this.dataProvider.getValue((t=this.dasmGridEl)===null||t===void 0?void 0:t.selectedRow,h);p.debug(`Run to line at 0x${o}`);(e=u.targetAdapter)===null||e===void 0?void 0:e.runToLine(i)},isEnabled:()=>this.hasDebugContext()});r.registerAction("dasm-move-to-line",{run:()=>{var t,e;const{location:i,addressText:o}=this.dataProvider.getValue((t=this.dasmGridEl)===null||t===void 0?void 0:t.selectedRow,h);p.debug(`Move to line at 0x${o}`);(e=u.targetAdapter)===null||e===void 0?void 0:e.moveToLine(i)},isEnabled:()=>this.hasDebugContext()});r.registerAction("dasm-resume-at-line",{run:()=>{var t,e;const{location:i,addressText:o}=this.dataProvider.getValue((t=this.dasmGridEl)===null||t===void 0?void 0:t.selectedRow,h);p.debug(`Resume at line at 0x${o}`);(e=u.targetAdapter)===null||e===void 0?void 0:e.resumeAtLine(i)},isEnabled:()=>this.hasDebugContext()});r.registerAction("dasm-show-source",{run:()=>{p.debug(`Switch mixed mode to ${!this.mixedMode?"on":"off"}`);this.mixedMode=!this.mixedMode;this.reload()},isChecked:()=>this.mixedMode});r.registerAction("dasm-show-symbols",{run:()=>{p.debug(`Show symbols set to ${!this.showSymbols?"on":"off"}`);this.showSymbols=!this.showSymbols;this.reload()},isChecked:()=>this.showSymbols})}async setCSSProperty(t,e){e=e.trim();if(await this.getCSSProperty(t)!==e){this.el.style.setProperty(t,e);this.cssPropertyChanged.emit({name:t,value:e})}}async getCSSProperty(t){return getComputedStyle(this.el).getPropertyValue(t).trim()}async refresh(){this._refresh++}get el(){return o(this)}static get watchers(){return{selectedAddress:["onSelectedAddressChanged"]}}};v.style=m;const f="";class b{constructor(t,e,i){this.dasmAnnotationColumn=t;this.callback=e;this.clickEvent=i}renderCell(t,e,o,s,r){const n=e.getValue(a);const c=i("div",{part:"annotation-cell",onClick:t=>this.onClickHandler(t,n)},this.renderPC(n),this.renderBreakpoint(n));return{element:c,focusable:false}}renderPC(t){var e;const o=(e=t===null||t===void 0?void 0:t.dasmInstruction)===null||e===void 0?void 0:e.hasPC;if(o){if(t.dasmInstruction.customPCIcon){return i("div",{class:t.dasmInstruction.customPCIcon.class,style:t.dasmInstruction.customPCIcon.style})}else{return i("gc-widget-icon",{icon:"ti:top_stack_frame",size:"s",appearance:"custom",part:"annotation-pc"})}}else{return undefined}}renderBreakpoint(t){var e;const o=(t===null||t===void 0?void 0:t.breakpoints)?t.breakpoints.length>0:false;if(o){const s=t.breakpoints[0];const r=o&&!!s.enabled;const n=t.dasmInstruction.hasPC;if(s.customIcon){const o=s.customIcon.style;if((e=t.dasmInstruction)===null||e===void 0?void 0:e.hasPC){o.fontSize="10px"}return i("div",{class:s.customIcon.class,style:o})}else{return o?i("gc-widget-icon",{icon:"filled:ti:breakpoint",size:n?"xs":"s",appearance:"custom",part:`annotation-bp${!r?"-disabled":""}`}):undefined}}else{return undefined}}onClickHandler(t,e){t.preventDefault();t.stopPropagation();this.clickEvent.emit(e)}}let w=class{constructor(i){t(this,i);this.annotationClickEvent=e(this,"annotation-click",7);this.minimizedChanged=e(this,"minimized-changed",7);this.cssPropertyChanged=e(this,"css-property-changed",7);this.hideMinimizeAction=false;this.minimized=false;this._refresh=0;this.hidden=false}async createCellRenderer(t){return new b(this,t,this.annotationClickEvent)}async setCSSProperty(t,e){e=e.trim();if(await this.getCSSProperty(t)!==e){this.el.style.setProperty(t,e);this.cssPropertyChanged.emit({name:t,value:e})}}async getCSSProperty(t){return getComputedStyle(this.el).getPropertyValue(t).trim()}async refresh(){this._refresh++}get el(){return o(this)}};w.style=f;const x=':host::-webkit-scrollbar,::-webkit-scrollbar{width:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px));height:var(--gc-scrollbar-width, var(--theme-scrollbar-width, 8px))}:host::-webkit-scrollbar-track,::-webkit-scrollbar-track{background:var(--gc-scrollbar-track-background-color, var(--theme-scroll-track-color, rgba(35, 31, 32, 0.2)))}:host::-webkit-scrollbar-thumb,::-webkit-scrollbar-thumb{background:var(--gc-scrollbar-thumb-background-color, var(--theme-scroll-thumb-color, rgba(35, 31, 32, 0.65)))}:host::-webkit-scrollbar-thumb:hover,::-webkit-scrollbar-thumb:hover{background:var(--gc-scrollbar-thumb-background-color-hover, var(--theme-scroll-thumb-color-hover, rgba(35, 31, 32, 0.8)))}:host::-webkit-scrollbar-corner,::-webkit-scrollbar-corner{background:rgba(0, 0, 0, 0)}:host(:focus),:host *:focus{outline:none}:host{-webkit-user-select:none;-khtml-user-select:none;-moz-user-select:none;-ms-user-select:none;-o-user-select:none;user-select:none;font-family:var(--gc-font-family, var(--theme-font-family, "Roboto", "Open Sans", "Segoe UI", "Tahoma", "sans-serif"));font-size:var(--gc-font-size, var(--theme-font-size, 14px));font-weight:400;color:var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555)));margin:var(--gc-margin, var(--theme-margin, 5px));display:inline-block;box-sizing:border-box}:host .user-select{-webkit-user-select:text;-khtml-user-select:text;-moz-user-select:text;-ms-user-select:text;-o-user-select:text;user-select:text}:host .text-link{color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-color:var(--gc-link-color, var(--gc-link-color, var(--theme-link-color, #333333)));--gc-text-decoration-hover:underline;--gc-cursor-hover:pointer}:host .text-link:not([disabled]):hover{text-decoration:underline;cursor:pointer}:host([hidden]){display:none !important}:host([readonly]) *{pointer-events:none}:host([disabled]) *{cursor:not-allowed}:host([caption]:not([caption=""])){margin-top:calc(var(--gc-margin, var(--theme-margin, 5px)) + var(--gc-caption-font-size, var(--theme-caption-font-size, 14px)) + 8px)}:host([caption]:not([caption=""])),:host([info-text]:not([info-text=""])){overflow:visible;position:relative}:host([caption=""][info-text]:not([info-text=""])),:host([info-text]:not([info-text=""]):not([caption])){margin-right:calc(var(--gc-margin, var(--theme-margin, 5px)) + 22px)}#elementWrapper{box-sizing:content-box;height:100%;width:100%;display:flex;align-items:center;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container{position:relative;display:flex;flex-direction:column;width:100%;height:100%;min-height:inherit;max-height:inherit;min-width:inherit;max-width:inherit}.root-container .header-container.top{top:var(--gc-header-container-top, calc(0px - 8px - var(--gc-caption-font-size, var(--theme-caption-font-size, 14px))));flex-direction:row}.root-container .header-container.side{right:-22px;flex-direction:column;height:inherit}.root-container .header-container{position:absolute;display:flex;align-items:center}.root-container .header-container .icon,.root-container .header-container gc-widget-icon{cursor:default;margin:auto;height:18px;width:18px;display:block;--gc-color:var(--gc-caption-info-color, var(--theme-caption-info-color, #98999b))}.root-container .header-container .caption{flex:1;cursor:default;white-space:nowrap;margin-right:2px;font-weight:var(--gc-caption-font-weight, var(--theme-caption-font-weight, 400));font-size:var(--gc-caption-font-size, var(--theme-caption-font-size, 14px));color:var(--gc-caption-font-color, var(--theme-caption-font-color, #999999))}.invisible{visibility:hidden}gc-widget-grid-tree-column{--gc-column-width:1fr}gc-widget-grid-data-column{--gc-text-align:end}:host{border:2px solid var(--gc-border-color, var(--gc-border-color, var(--theme-border-color, #e5e5e5)))}#grid{width:100%;height:100%;margin:0px;border:none}#grid::part(open){font-style:italic}#grid::part(branch){font-weight:500;font-size:93%}#grid::part(leaf){font-size:86%}#grid::part(focused){outline:1px dotted var(--gc-outline-color-focus, var(--gc-font-color, var(--gc-font-color, var(--theme-font-color, #555555))));outline-offset:-3px}';const y=25;class k{constructor(t,e){this.data=t;this.total=e;this.requested=t.length}get available(){return this.data.length}appendMoreData(t,e){this.data=this.data.concat(t);this.total=e}}const z=new class{constructor(){this.rowCount=0}setValue(){}getValue(){return undefined}};class S{constructor(t,e,i,o){this.groupId=t;this.parent=o;this.registers=new k(e.registers,e.total);this.subgroups=new k(i.groups,i.total)}get rowCount(){return this.registers.total+this.subgroups.total}setVisibility(t,e){if(t<this.registers.available){const i=this.registers.data[t];if(e&&i.visible!==true){this.parent.doReadValue(i)}i.visible=e}}getValue(t,e){if(t<this.registers.total){this.setVisibility(t,true);if(t<this.registers.available){return this.registers.data[t][e]}if(t>=this.registers.requested){const e=Math.max(t-this.registers.requested,y);this.parent.context.getRegisters(e,this.registers.requested,this.groupId).then((t=>{this.registers.appendMoreData(t.registers,t.total);this.parent.redraw()}));this.registers.requested+=e}}else{t-=this.registers.total;if(t<this.subgroups.available){return this.subgroups.data[t][e]}if(t>=this.subgroups.requested){const e=Math.max(t-this.subgroups.requested,y);this.parent.context.getGroups(e,this.subgroups.requested,this.groupId).then((t=>{this.subgroups.appendMoreData(t.groups,t.total);this.parent.redraw()})).catch((t=>{s.error("DsLiteRegisterDataProvider",t.message||t.toString())})).finally((()=>{s.log("DsLiteRegisterDataProvider","fetched more groups")}));this.subgroups.requested+=e}}return e==="name"?"...":undefined}setValue(t,e,i){if(t<this.registers.available){this.parent.doWriteValue(this.registers.data[t],i)}}isReadonly(t){if(t<this.registers.available){const e=this.registers.data[t];return e.readable&&!e.writable}return true}isWriteOnly(t){if(t<this.registers.available){const e=this.registers.data[t];return e.writable&&!e.readable}return false}lookupRowByName(t){let e=this.registers.data.findIndex((e=>e.name===t));if(e<0){e=this.subgroups.data.findIndex((e=>e.name===t))}return e}isExpandable(t){return t>=this.registers.total&&t-this.registers.total<this.subgroups.available}getChildDataProvider(t){const e=this.subgroups.data[t-this.registers.total];if(e){if(!e.provider){e.provider=(async()=>{const t=this.parent.context.getGroups(y,0,e.id);const i=this.parent.context.getRegisters(y,0,e.id);return new S(e.id,await i,await t,this.parent)})()}return e.provider}return z}}class C extends S{constructor(t,e,i){super(undefined,{registers:[],total:0},e,undefined);this.context=t;this.grid=i;this.registerReadCache=new Set;this.parent=this}static async create(t,e){return new C(t,await t.getGroups(y,0),e)}async doReadValue(t){if(t.stale===false){return}this.registerReadCache.add(t);t.stale=false;const e=await this.context.read(t.id);if(t.value!==e.value){t.value=e.value;this.grid.redrawGrid()}}async doWriteValue(t,e){try{const i=this.context.write(t.id,e);t.stale=true;const o=this.doReadValue(t);await i;await o}catch(t){s.error("DsLiteRegisterDataProvider",t.message||t.toString())}}refreshAllRegisterValues(){const t=this.registerReadCache;this.registerReadCache=new Set;t.forEach((t=>{t.stale=true;if(t.visible){this.doReadValue(t)}}))}redraw(){this.grid.redrawGrid()}}let R=class{constructor(i){t(this,i);this.cssPropertyChanged=e(this,"css-property-changed",7);this.fontSize=R.REFERENCE_FONT_SIZE;this.debugCores=new Map;this.hideLocationColumn=false;this.hideHeading=false;this.onCSSPropertyChanged=()=>{this.redrawGrid()};this._refresh=0;this.hidden=false;this.readonly=false}componentWillRender(){const t=Number.parseFloat(getComputedStyle(this.el).getPropertyValue("font-size"));if(!isNaN(t)){this.fontSize=t}}render(){const t=Math.ceil((16+2)*10*this.fontSize/R.REFERENCE_FONT_SIZE);return i("gc-widget-grid",{id:"grid",part:"grid",ref:t=>this.grid=t,virtual:true,filterText:this.filterText,readonly:this.readonly,hideHeading:this.hideHeading},i("gc-widget-grid-tree-column",{heading:"Register",hideMinimizeAction:true},i("slot",null)),this.hideLocationColumn?null:i("gc-widget-grid-data-column",{key:"address",heading:"Location",name:"location",readonly:true,format:"text"}),i("gc-widget-grid-data-column",{key:"value",heading:"Value",name:"value",format:"text",hideMinimizeAction:true,style:{"--gc-column-width":`${t}px`}}))}async setFilterMethod(t){var e;(e=this.grid)===null||e===void 0?void 0:e.setFilterMethod(t)}async redrawGrid(){var t;(t=this.grid)===null||t===void 0?void 0:t.refresh()}async setRegisters(t,e="default"){let i=false;if(this.activeCoreName===e){return}this.activeCoreName=e;let o=this.debugCores.get(e);if(!o){o=C.create(t,this);this.debugCores.set(e,o);i=true}const s=await o;if(this.activeCoreName===e&&this.grid){this.grid.setDataProvider(s,0,e);if(i){this.grid.toggleOpen(0)}}}async clear(){this.debugCores.clear();this.activeCoreName=undefined;this.grid.setDataProvider(z)}async update(){this.debugCores.forEach((async t=>{const e=await t;e.refreshAllRegisterValues()}))}connectedCallback(){this.el.addEventListener("css-property-changed",this.onCSSPropertyChanged)}disconnectedCallBack(){this.el.removeEventListener("css-property-changed",this.onCSSPropertyChanged)}async setCSSProperty(t,e){e=e.trim();if(await this.getCSSProperty(t)!==e){this.el.style.setProperty(t,e);this.cssPropertyChanged.emit({name:t,value:e})}}async getCSSProperty(t){return getComputedStyle(this.el).getPropertyValue(t).trim()}async refresh(){this._refresh++}get el(){return o(this)}};R.REFERENCE_FONT_SIZE=14;R.style=x;export{v as gc_widget_disassembly_view,w as gc_widget_disassembly_view_annotation_column,R as gc_widget_xds_register_view};
//# sourceMappingURL=p-8be7b491.entry.js.map