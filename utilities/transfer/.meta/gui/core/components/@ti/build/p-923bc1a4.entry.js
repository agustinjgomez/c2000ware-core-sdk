import{r as e,g as t}from"./p-84e39b72.js";import{DelimitedTextCodec as s}from"../gc-codec-delimited-text/lib/DelimitedTextCodec";import{JsonCodec as c}from"../gc-codec-json/lib/JsonCodec";import{c as i}from"./p-0c6e1a4c.js";import{MessagePackCodec as n}from"../gc-codec-message-pack/lib/MessagePackCodec";import{StreamingDataModel as o}from"../gc-model-streaming/lib/StreamingDataModel";let a=class{constructor(t){e(this,t);this.impl=undefined;this.delimiter=undefined;this.escapeChar=undefined;this.optional=false}connectedCallback(){this.impl=new s(this.el)}disconnectedCallback(){this.impl.dispose()}get el(){return t(this)}};let l=class{constructor(t){e(this,t);this.impl=undefined;this.optional=false}connectedCallback(){this.impl=new c(this.el)}disconnectedCallback(){this.impl.dispose()}get el(){return t(this)}};let d=class{constructor(t){e(this,t);this.optional=false}connectedCallback(){this.impl=new n(i(this.el))}disconnectedCallback(){this.impl.dispose()}get el(){return t(this)}};let r=class{constructor(t){e(this,t);this.impl=undefined;this.channelName=undefined;this.timeout=6e5;this.optional=false}connectedCallback(){this.impl=new o(this.el)}disconnectedCallback(){this.impl.dispose()}get el(){return t(this)}};export{a as gc_codec_delimited_text,l as gc_codec_json,d as gc_codec_message_pack,r as gc_model_streaming};
//# sourceMappingURL=p-923bc1a4.entry.js.map