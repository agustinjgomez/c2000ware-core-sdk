import{r as t}from"./p-5bb37414.js";import{connectionManager as o}from"../gc-target-connection-manager/lib/ConnectionManager";import{GcPromise as e}from"../gc-core-assets/lib/GcPromise";import{GcUtils as r}from"../gc-core-assets/lib/GcUtils";import{ActionRegistry as i}from"../gc-widget-menu/lib/ActionRegistry";async function n(t){try{const r=document.querySelectorAll("gc-target-configuration");const i=[];for(let t=0;t<r.length;t++){i.push(o.whenConfigurationReady(r[t].id||"default"))}if(t){i.push(o.whenConfigurationReady(t))}await e.timeout(Promise.all(i),5e3,"")}catch(t){}if(r.isCCS){o.connectToCCS().catch((()=>{}))}else{o.connect().catch((()=>{}))}o.allowAutoConnectOnDeviceDetection=true}let a=class{constructor(o){t(this,o);this.autoConnect=false}activeConfigurationChanged(){const t=this.activeConfiguration||"default";e.timeout(o.whenConfigurationReady(t),5e3,"").finally((()=>{o.setActiveConfiguration(t)}))}componentDidLoad(){this.activeConfigurationChanged();i.registerAction("cmd_open_program_loader_dialog",new class{run(){const t=document.querySelector("gc-target-program-loader");if(t){t.loadProgram()}}isVisible(){const t=document.querySelector("gc-target-program-loader");return!!t}isEnabled(){return!r.isInDesigner}});if(!r.isInDesigner&&(this.autoConnect||r.isCCS)){if(this.activeConfiguration){n(this.activeConfiguration)}}}static get watchers(){return{activeConfiguration:["activeConfigurationChanged"]}}};export{a as gc_target_connection_manager};
//# sourceMappingURL=p-71691b09.entry.js.map