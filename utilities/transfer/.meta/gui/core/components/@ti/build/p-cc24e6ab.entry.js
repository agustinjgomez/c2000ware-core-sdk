import{r as s,g as c}from"./p-84e39b72.js";import{Usb2anyCodec as t}from"../gc-codec-usb2any/lib/Usb2anyCodec";import{c as e}from"./p-0c6e1a4c.js";let a=class{constructor(c){s(this,c);this.connectTimeout=250;this.maxConsecutiveErrors=2;this.optional=false}connectedCallback(){this.impl=new t(e(this.el))}disconnectedCallback(){this.impl.dispose()}get el(){return c(this)}};export{a as gc_codec_usb2any};
//# sourceMappingURL=p-cc24e6ab.entry.js.map