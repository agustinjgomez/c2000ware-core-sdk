import{r as t,h as i,g as e}from"./p-ce1dc307.js";const s=':host .ti-phone-input-country-select{appearance:none;display:inline-block;min-width:4rem;max-width:6rem;height:32px;padding:0 calc(0.5rem + 28px) 0 0.5rem;line-height:30px;font-family:inherit;font-size:14px;border:1px solid #cccccc;background-image:url("https://www.ti.com/assets/icons/ti_icons-objects/chevron-down.svg");background-position:right 6px top 7px;background-size:18px;background-repeat:no-repeat;background-color:#ffffff;border-radius:0;color:#555555;cursor:pointer}:host .ti-phone-input-country-select::-ms-expand{display:none}:host .ti-phone-input-country-select[disabled]{background-color:#e8e8e8;cursor:not-allowed}@media all and (-ms-high-contrast: none), (-ms-high-contrast: active){:host .ti-phone-input-country-select{height:30px}}:host .ti-phone-input-container{max-width:100%;display:flex;flex-direction:row}:host .ti-phone-input-number{width:100%}:host .ti-phone-input-ext{max-width:4rem}:host input{display:inline-block;box-sizing:border-box;margin-bottom:0;width:auto;height:32px;padding:0 8px;border:1px solid #cccccc;color:#555555;font-family:inherit;font-size:14px;margin-left:8px}:host input[disabled]{background-color:#e8e8e8;cursor:not-allowed}:host input[readonly]{cursor:not-allowed}:host ti-input{margin-left:8px}';let n=class{constructor(i){t(this,i);this.countryCode="1";this.disableCountrySelect=false;this.extension="";this.isMobile=false;this.isValid=false;this.showExtension=false}handleCountryCodeChange(t,i){if(t!==i){this._setCountryCodeDisplay();this._selectElement.value=t;this._onCountryCodeChange();this._setCountryCodeSelectedDisplay()}}componentWillLoad(){this.countryCodes=this.countryCodesJson?JSON.parse(this.countryCodesJson):[{id:233,countryId:"US",countryName:"United States",areaCode:"1"},{id:48,countryId:"CN",countryName:"China (简体中文)",areaCode:"86"},{id:114,countryId:"JP",countryName:"Japan (日本語)",areaCode:"81"}];this._headerElement=document.getElementsByTagName("head")[0];this._loadPhoneUtilScript().then((()=>{this._phoneUtil=window["PhoneUtil"];let t=0;const i=setInterval((()=>{if(this._inputElement&&this._selectElement){this._inputElement.value=window["PhoneUtil"].parsePhoneNumberFromString(this.countryCode.toString(),this.areaCode+this.phoneNumber);this._inputElement.maxLength=this._phoneUtil.getMaxLength(this.countryCode,this._inputElement.value);this._updatePhoneNumber();const t=this._selectElement.options;let e=0;while(e<t.length){if(t[e].value===this.countryCode){this._selectElement.value=t[e].value;this._onCountryCodeChange();this._setCountryCodeSelectedDisplay();break}e++}clearInterval(i)}if(t===10){clearInterval(i)}t++}),1e3)}))}_getCountry(){const t=this._selectElement===undefined?this.hostElement.getElementsByTagName("select")[0]:this._selectElement;if(t.selectedIndex<0){return 1}return t.options[t.selectedIndex].value}async _loadPhoneUtilScript(){return new Promise(((t,i)=>{if(!document.querySelector("script.phone-util-script")){const e=document.createElement("script");e.setAttribute("charset","utf-8");e.setAttribute("defer","true");e.classList.add("phone-util-script");e.onload=()=>{t(true)};e.onerror=t=>{i(t)};e.setAttribute("src","/assets/phoneutilall.min.js");this._headerElement.appendChild(e)}else{let e=0;const s=setInterval((()=>{if(window["PhoneUtil"]){clearInterval(s);t(true)}if(e===10){clearInterval(s);i("Failed to find phoneutilall.min.js script")}e++}),1e3)}}))}_onCountryCodeChange(){this.countryCode=this._selectElement.value;this._phoneUtil.handleCountryChange(this._inputElement,this._getCountry(),this.isMobile);this._inputElement.maxLength=this._phoneUtil.getMaxLength(this.countryCode,this._inputElement.value);this._updatePhoneNumber();this._selectElement.blur()}_onExtensionChange(t){this.extension=t.target.value}_onPhoneNumberBlur(){this._inputElement.value=this._phoneUtil.parsePhoneNumberFromString(this.countryCode.toString(),this._inputElement.value)}_setCountryCodeDisplay(){this._selectElement[this._selectElement.selectedIndex].textContent=this._selectElement[this._selectElement.selectedIndex].getAttribute("data-display")}_setCountryCodeSelectedDisplay(){this._selectElement[this._selectElement.selectedIndex].textContent=this._selectElement[this._selectElement.selectedIndex].getAttribute("data-label")}_updatePhoneNumber(t){if(t!==undefined&&t.code!=="Backspace"&&t.code!=="Delete"){this._inputElement.value=this._phoneUtil.formatNumberInput(this.countryCode.toString(),this._inputElement.value,false)}this.isValid=this._phoneUtil.isValid(this._getCountry(),this._inputElement.value,this.isMobile);const i=this._phoneUtil.splitPhoneNumberString(this._inputElement.value);this.areaCode=i[0];this.phoneNumber=i[1]}render(){return i("div",{class:"ti-phone-input-container"},i("select",{ref:t=>this._selectElement=t,class:"ti-phone-input-country-select",disabled:this.disableCountrySelect,onBlur:()=>this._setCountryCodeSelectedDisplay(),onChange:()=>this._onCountryCodeChange(),onFocus:()=>this._setCountryCodeDisplay()},this.countryCodes.map((t=>i("option",{value:t.areaCode,"data-label":"+"+t.areaCode,"data-display":t.areaCode==="0"?t.countryName:t.countryName+" +("+t.areaCode+")",disabled:t.areaCode==="0"},t.areaCode==="0"?t.countryName:t.countryName+" +("+t.areaCode+")")))),i("input",{ref:t=>this._inputElement=t,onBlur:()=>this._onPhoneNumberBlur(),onKeyUp:t=>this._updatePhoneNumber(t),type:"tel",class:"ti-phone-input-number"}),this.showExtension&&i("input",{class:"ti-phone-input-ext",type:"number",value:isNaN(Number(this.extension))?"":this.extension,onInput:t=>this._onExtensionChange(t),maxlength:4,placeholder:"Ext."}))}get hostElement(){return e(this)}static get watchers(){return{countryCode:["handleCountryCodeChange"]}}};n.style=s;export{n as ti_phone_input};
//# sourceMappingURL=p-537dc91f.entry.js.map