import{r as e,g as i}from"./p-ce1dc307.js";import{ServicesRegistry as t}from"../gc-core-services/lib/ServicesRegistry";import{targetConfigServiceType as c}from"../gc-service-target-config/lib/TargetConfigService";import{createPropertyAutoFill as s}from"../gc-core-assets/lib/GcDesigner";const r=t.getService(c);let a=class{constructor(i){e(this,i);this.propertyAutoFill=undefined;this.sram=false}connectedCallback(){this.propertyAutoFill=s(this.el);this.propertyAutoFill.register("deviceName",(async()=>(await r.getDevices()).map((e=>e.id))))}disconnectedCallback(){this.propertyAutoFill.unregister("deviceName")}get el(){return i(this)}};export{a as gc_target_device_programmable};
//# sourceMappingURL=p-1ef554d2.entry.js.map