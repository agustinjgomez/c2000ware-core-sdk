import{r as s,g as t}from"./p-5bb37414.js";import{UsbTransport as e}from"../gc-transport-usb/lib/UsbTransport";import{c as i}from"./p-0c6e1a4c.js";import{ServicesRegistry as r}from"../gc-core-services/lib/ServicesRegistry";import{targetConfigServiceType as c}from"../gc-service-target-config/lib/TargetConfigService";import{createPropertyAutoFill as o}from"../gc-core-assets/lib/GcDesigner";const a=r.getService(c);let n=class{constructor(t){s(this,t);this.impl=undefined;this.propertyAutoFill=undefined;this.usb=false;this.hid=false;this.defaultBaudRate=9600;this.optional=false}connectedCallback(){this.impl=new e(i(this.el));this.propertyAutoFill=o(this.el);this.propertyAutoFill.register("deviceName",(async()=>(await a.getDevices()).map((s=>s.id))))}disconnectedCallback(){this.propertyAutoFill.unregister("deviceName");this.impl.dispose()}get el(){return t(this)}};export{n as gc_transport_usb};
//# sourceMappingURL=p-eb773e62.entry.js.map