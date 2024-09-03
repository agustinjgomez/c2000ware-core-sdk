import{r as t,g as s}from"./p-ce1dc307.js";import{AevmCodec as e}from"../gc-codec-aevm/lib/AevmCodec";import{c as i}from"./p-0c6e1a4c.js";import{AevmGpioCodec as c}from"../gc-codec-aevm-gpio/lib/AevmGpioCodec";import{AevmI2cCodec as h}from"../gc-codec-aevm-i2c/lib/AevmI2cCodec";import{AevmSpiCodec as a}from"../gc-codec-aevm-spi/lib/AevmSpiCodec";import{AevmUartCodec as o}from"../gc-codec-aevm-uart/lib/AevmUartCodec";let l=class{constructor(s){t(this,s);this.openDrain=false}get el(){return s(this)}};let r=class{constructor(s){t(this,s);this.resetControllerOnConnect=false;this.connectTimeout=250;this.optional=false}connectedCallback(){this.impl=new e(i(this.el))}disconnectedCallback(){this.impl.dispose()}get el(){return s(this)}};let n=class{constructor(s){t(this,s);this.refereshInterval=100;this.optional=false}connectedCallback(){this.impl=new c(new Proxy(i(this.el),{get:function(t,s){if(s==="pins"){return t.children}return t[s]}}))}disconnectedCallback(){this.impl.dispose()}get el(){return s(this)}};let d=class{constructor(s){t(this,s);this.speed=100;this.unit=2;this.registerAddressBits=8;this.registerAddressEndian="big";this.readRegisterAddressOpcodeFormat="separated";this.readRegisterAddressBitShift=0;this.writeRegisterAddressOpcodeFormat="separated";this.writeRegisterAddressBitShift=0;this.pullup=false;this.dataEndian="big";this.optional=false}connectedCallback(){this.impl=new h(i(this.el))}disconnectedCallback(){this.impl.dispose()}get el(){return s(this)}};let m=class{constructor(s){t(this,s);this.bitRate=1;this.mode="moto_mode_0";this.dataWidth=8;this.chipSelectActive="high";this.chipSelectChange=false;this.unit=2;this.dataEndian="big";this.addressBits=6;this.addressBitsOffset=8;this.dataBits=8;this.dataBitsOffset=0;this.parityBitsOffset=0;this.optional=false}connectedCallback(){this.impl=new a(i(this.el))}disconnectedCallback(){this.impl.dispose()}get el(){return s(this)}};let g=class{constructor(s){t(this,s);this.parity="none";this.characterLength=8;this.unit=6;this.baudRate=9600;this.stopBits=1;this.optional=false}connectedCallback(){this.impl=new o(i(this.el))}disconnectedCallback(){this.impl.dispose()}get el(){return s(this)}};export{l as gc_aevm_gpio_pin,r as gc_codec_aevm,n as gc_codec_aevm_gpio,d as gc_codec_aevm_i2c,m as gc_codec_aevm_spi,g as gc_codec_aevm_uart};
//# sourceMappingURL=p-5dbcb510.entry.js.map