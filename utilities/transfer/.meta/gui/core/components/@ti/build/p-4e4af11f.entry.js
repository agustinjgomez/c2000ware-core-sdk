import{r as s,g as t}from"./p-5bb37414.js";import{Usb2anyI2cCodec as c}from"../gc-codec-usb2any-i2c/lib/Usb2anyI2cCodec";import{c as i}from"./p-0c6e1a4c.js";let e=class{constructor(t){s(this,t);this.addressBits=7;this.speed=10;this.readWithAddress=false;this.internalAddressBits=8;this.sequentialRead=false;this.blockWriteBlockRead=false;this.pullup=false;this.dataEndian="big";this.optional=false}connectedCallback(){this.impl=new c(i(this.el))}disconnectedCallback(){this.impl.dispose()}get el(){return t(this)}};export{e as gc_codec_usb2any_i2c};
//# sourceMappingURL=p-4e4af11f.entry.js.map