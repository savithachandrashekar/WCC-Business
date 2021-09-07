Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI42m5ANsl1twl8vxEt7z8irNsM_5_nTP8XzVj5I1y9GpF1VxHtNDwwOjwfkVEGGrqMubs8mVLl9IUQO3s363PFVDyyPjK_sM9HpWYoyj2ZKrrZVmhViGb9cXFnc9nNsn9wBFDSj4cG74lzWIO8vtZMrDyGukA; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIgZIB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:tgK2TorHlKUYoDQ2s9tvn3BjwboE7iIBi73imNsajYwgu4Is49rnWrhYNrj5CSY0z0MAZujruKo6lvOdd_bUi3pdMQcVqg:oVTuJX4rac9JGiVp; DOMAIN=accounts.google.com");

	web_add_cookie("NID=215=RW6TWRz5PzQoF4NAP3qiyjQRJ8CoZQxdOBE4s9JuiPM0WJI2k-DYGh4RzZe1J1Wx8rpSZEmL6o_lKVQ7b0uckCCHhwlS0Z7ANxCgU49cjr-gQ5LsqNao_voP1iJgJwIGjytJN-G7XIo73Ax74fMcN4ddtsY_5HQuWQcvoiKQLOloy6bld8OkJc1PR9edFi8rgAg; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2021-05-12-13; DOMAIN=accounts.google.com");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"Body= ", 
		EXTRARES, 
		"Url=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=90", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_cookie("_cs_c=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18766%7CvVersion%7C4.4.0; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=www.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18766%7CvVersion%7C4.4.0; DOMAIN=www.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621332409894r0.8397193635277462; DOMAIN=www.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22samsung_conversion%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=www.hp.com");

	web_add_cookie("_cs_id=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01.1621332409.1.1621332409.1621332409.1589380098.1655496409985.None.1; DOMAIN=www.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=www.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=www.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=met2.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621332409894r0.8397193635277462; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22samsung_conversion%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_id=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01.1621332409.1.1621332409.1621332409.1589380098.1655496409985.None.1; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=met2.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=met2.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=met2.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18766%7CMCMID%7C55395109790894675412081278595344671814%7CMCAAMLH-1621937210%7C9%7CMCAAMB-1621937210%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621339610s%7CNONE%7CvVersion%7C4.4.0; DOMAIN=met2.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621332409894r0.8397193635277462; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22samsung_conversion%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01.1621332409.1.1621332409.1621332409.1589380098.1655496409985.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18766%7CMCMID%7C55395109790894675412081278595344671814%7CMCAAMLH-1621937210%7C9%7CMCAAMB-1621937210%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621339611s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18773%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=met2.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18766%7CMCMID%7C55395109790894675412081278595344671814%7CMCAAMLH-1621937210%7C9%7CMCAAMB-1621937210%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621339611s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18773%7CvVersion%7C4.4.0; DOMAIN=met2.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Tue+May+18+2021+10%3A06%3A52+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=345fe138-d857-4ba1-bed3-443426338d96&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=met2.hp.com");

	web_add_cookie("dcm_s=1621332412083.757415533; DOMAIN=met2.hp.com");

	web_add_cookie("_gcl_au=1.1.2052257427.1621332412; DOMAIN=met2.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=met2.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=met2.hp.com");

	web_add_cookie("_rdt_uuid=1621332412647.c2379a3c-f876-4914-b3f0-a4bc34642349; DOMAIN=met2.hp.com");

	web_add_cookie("_uetsid=c4b9d460b7c011eba181bf440e9d7103; DOMAIN=met2.hp.com");

	web_add_cookie("_uetvid=c4bc9520b7c011eb95abf33918a73573; DOMAIN=met2.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=met2.hp.com");

	web_add_cookie("IR_5105=1621332412772%7C365159%7C1621332412772%7C%7C; DOMAIN=met2.hp.com");

	web_add_cookie("IR_PI=c501deb6-b7c0-11eb-9a1c-42010a246c50%7C1621418812772; DOMAIN=met2.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/conversion; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppvl=%5B%5BB%5D%5D; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C50%2C50%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=met2.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=met2.hp.com");

	web_url("conversion", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css", ENDITEM, 
		"Url=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-regular-ttf.woff2", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-bold-ttf.woff2", ENDITEM, 
		"Url=../wcc-assets/styles.838e01c665aec10d3c17.css", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-light-ttf.woff2", ENDITEM, 
		"Url=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/fonts/fontawesome-webfont.woff?v=4.1.0", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-regular-italic-ttf.woff2", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-bold-italic-ttf.woff2", ENDITEM, 
		"Url=../wcc-assets/fonts/hp_support_controls.woff2", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-light-italic-ttf.woff2", ENDITEM, 
		"Url=../wcc-assets/runtime.f3b002e782d421c423a1.js", ENDITEM, 
		"Url=../wcc-assets/polyfills.d301623517a574834b52.js", ENDITEM, 
		"Url=https://t.contentsquare.net/uxa/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", ENDITEM, 
		"Url=../wcc-assets/images/sprite-country-flags.png", ENDITEM, 
		"Url=../wcc-assets/main.0ef4e42f2d259caa7e85.js", ENDITEM, 
		"Url=../wcc-assets/scripts.204dec66716e86a3ab29.js", ENDITEM, 
		"Url=https://ct.contentsquare.net/ptc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", ENDITEM, 
		"Url=https://ct.contentsquare.net/pcc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js?DeploymentConfigName=Release_20210426&Version=5", ENDITEM, 
		"Url=https://ct.contentsquare.net/www/latest-WR110.js", ENDITEM, 
		"Url=../wcc-assets/pages-conversion-conversions-module-ngfactory.6400df9e785e8b510196.js", ENDITEM, 
		"Url=../wcc-assets/content/dam/hp-wcc/libs/scripts/medallia.js", ENDITEM, 
		"Url=../wcc-assets/content/dam/hp-wcc/libs/scripts/third_party_lib.js", ENDITEM, 
		"Url=../wcc-assets/images/question-circle.svg", ENDITEM, 
		"Url=https://nebula-cdn.kampyle.com/wu/541318/onsite/embed.js", ENDITEM, 
		"Url=../wcc-assets/images/flags/flag_us.gif", ENDITEM, 
		"Url=../wcc-assets/images/icons.png", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/Bootstrap.js", ENDITEM, 
		"Url=https://cdn.optimizely.com/js/18956663993.js", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/caas/header-footer/us/en/default/latest.r?contentType=js&hide_search=true&show_shopping_cart=true&hide_country_selector=true", ENDITEM, 
		"Url=https://nexus.ensighten.com/error/e.gif?msg=%22TypeError%3A%20Cannot%20read%20property%20%27triggerPromiseWithTimeout%27%20of%20undefined%22%20error%20caught%20in%20Data%20Definition%20trigger%3A%20support_language_code%2C%20ID%3A9913.%20Using%20bottom%20of%20body%20trigger.&lnn=-1&fn=&cid=217&client=hp&publishPath=support_stage&rid=-1&did=-1&errorName=DataDefinitionException", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hf-js.js", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/serverComponent.php?r=9.606167359766511&namespace=Bootstrapper&staticJsPath=nexus.ensighten.com/hp/support_stage/code/&publishedOn=Tue%20May%2004%2007:24:28%20GMT%202021&ClientID=217&PageID=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion%3Fgdl_template%3Dsamsung_conversion", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-PDHM2PK", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/code/8eb6e0d6c0d367083fff5b64b61a4441.js?conditionId0=422765", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/code/b9b0fc01116e2374d7e92bc6cb675f3e.js?conditionId0=4880989", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/code/3ce08cf7c65e410fd9cf20d6115a04e1.js?conditionId0=285030", ENDITEM, 
		"Url=https://www.hp.com/cma/ng/lib/exceptions/privacy-banner-test.js", ENDITEM, 
		"Url=https://met2.hp.com/id?d_visid_ver=4.4.0&d_fieldgroup=A&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&mid=55395109790894675412081278595344671814&ts=1621332410454", ENDITEM, 
		"Url=https://cdn.cookielaw.org/scripttemplates/otSDKStub.js", ENDITEM, 
		"Url=https://dpm.demdex.net/demconf.jpg?et:ibs%7cdata:dpid=411&dpuuid=YKORuwAAAHKIs3Ds", ENDITEM, 
		"Url=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e0a0fc2a-044d-41af-bd55-2f56dd8162df.json", ENDITEM, 
		"Url=https://nebula-cdn.kampyle.com/us/wu/541318/onsite/generic1621248806636.js", ENDITEM, 
		"Url=https://nebula-cdn.kampyle.com/resources/onsite/js/cool-2.1.15.min.js", ENDITEM, 
		"Url=https://geolocation.onetrust.com/cookieconsentpub/v1/geo/location", ENDITEM, 
		"Url=../wcc-assets/images/favicon.ico", ENDITEM, 
		"Url=https://cdn.cookielaw.org/scripttemplates/6.17.0/otBannerSdk.js", ENDITEM, 
		"Url=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e688e508-0267-4c09-a64b-7c03f7e759ce/en-ie.json", ENDITEM, 
		"Url=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjIxMiBTYWZhcmkvNTM3LjM2Iiwic2Vzc2lvbl9wbGF0Zm9ybSI6ICJXaW4zMiIsInRyYWNrZXJfdHlwZSI6ICJqYXZhc2NyaXB0IiwidHJhY2tlcl92ZXJzaW9uIjogIjIuMS4xNSIsImV2ZW50X25hbWUiOiAiY3JlYXRlU2Vzc2lvbiIsImV2ZW50X3RpbWVzdGFtcF9lcG9jaCI6ICIxNjIxMzMyNDExNjEwIiwiZXZlbnRfdGltZXpvbmVfb2Zmc2V0IjogMCwidXNlcl9pZC"
		"I6ICIxNzk3ZWYxNDRkOGNhNi0wOTQzYzA2Y2M4NTJlZC0yMzYzMTYzLTEyNWY1MS0xNzk3ZWYxNDRkOWI5MyIsInVybCI6ICJodHRwczovL3Bwc3N1cHBvcnQtaXRnbGxiaDcuaW5jLmhwLmNvbS91cy1lbi9jb252ZXJzaW9uIiwiZm9ybUlkIjogbnVsbCwiZm9ybVRyaWdnZXJUeXBlIjogbnVsbCwia2FtcHlsZV9kYXRhIjogeyJMQVNUX0lOVklUQVRJT05fVklFVyI6ICIiLCJERUNMSU5FRF9EQVRFIjogIiIsImthbXB5bGVJbnZpdGVQcmVzZW50ZWQiOiAiIiwia2FtcHlsZV91c2VyaWQiOiAiZjM1ZC02YWFjLTdlNjUtNjkyNS00MjgxLWJjNGEtZmQ1Yy0wZjIyIiwia2FtcHlsZVVzZXJTZXNzaW9uIjogIiIsImthbXB5bGVVc2VyUGVyY2VudGlsZSI6ICIiLCJT"
		"VUJNSVRURURfREFURSI6ICIiLCJhZGRpdGlvbmFsRGF0YSI6IHsidXNlcl9zZXNzaW9uIjogIiIsImRpcmVjdF9uYXZpZ2F0aW9uIjogdHJ1ZSwiZGlmZnJlbnRfcmVmZXJyZXIiOiB0cnVlfX0sImNvb2tpZV9zaXplIjogMTI4MSwia2FtcHlsZV92ZXJzaW9uIjogIjIuMzguMCIsIm9uc2l0ZV92ZXJzaW9uIjogIjIuMzguMCIsImhpc3RvcnlfbGVuZ3RoIjogMSwiZXZlbnRfbG9jYWxfdGltZXN0YW1wIjogMTYyMTMzMjQxMTUwOSwicG9zaXRpb24iOiBudWxsLCJpc1VzZXJJZGVudGlmaWVkIjogZmFsc2UsImZlZWRiYWNrX2NvcnJlbGF0aW9uX3V1aWQiOiBudWxsfQpdfQ==", ENDITEM, 
		"Url=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjIxMiBTYWZhcmkvNTM3LjM2Iiwic2Vzc2lvbl9wbGF0Zm9ybSI6ICJXaW4zMiIsInRyYWNrZXJfdHlwZSI6ICJqYXZhc2NyaXB0IiwidHJhY2tlcl92ZXJzaW9uIjogIjIuMS4xNSIsImV2ZW50X25hbWUiOiAibmVidWxhX3BhZ2VfdmlldyIsImV2ZW50X3RpbWVzdGFtcF9lcG9jaCI6ICIxNjIxMzMyNDExNjIzIiwiZXZlbnRfdGltZXpvbmVfb2Zmc2V0IjogMCwidXNlcl"
		"9pZCI6ICIxNzk3ZWYxNDRkOGNhNi0wOTQzYzA2Y2M4NTJlZC0yMzYzMTYzLTEyNWY1MS0xNzk3ZWYxNDRkOWI5MyIsImVudmlyb21lbnQiOiAicHJvZFVzT3JlZ29uIiwiYWNjb3VudElkIjogNTQxMTE0LCJ1cmwiOiAiaHR0cHM6Ly9wcHNzdXBwb3J0LWl0Z2xsYmg3LmluYy5ocC5jb20vdXMtZW4vY29udmVyc2lvbiIsIndlYnNpdGVJZCI6IDU0MTMxOCwiZm9ybUlkIjogbnVsbCwiZm9ybVRyaWdnZXJUeXBlIjogbnVsbCwia2FtcHlsZV9kYXRhIjogeyJMQVNUX0lOVklUQVRJT05fVklFVyI6ICIiLCJERUNMSU5FRF9EQVRFIjogIiIsImthbXB5bGVJbnZpdGVQcmVzZW50ZWQiOiAiIiwia2FtcHlsZV91c2VyaWQiOiAiZjM1ZC02YWFjLTdlNjUtNjkyNS00Mjgx"
		"LWJjNGEtZmQ1Yy0wZjIyIiwia2FtcHlsZVVzZXJTZXNzaW9uIjogIjE2MjEzMzI0MTE1MDkiLCJrYW1weWxlVXNlclBlcmNlbnRpbGUiOiAiIiwiU1VCTUlUVEVEX0RBVEUiOiAiIn0sImNvb2tpZV9zaXplIjogMTM5MCwia2FtcHlsZV92ZXJzaW9uIjogIjIuMzguMCIsIm9uc2l0ZV92ZXJzaW9uIjogIjIuMzguMCIsImhpc3RvcnlfbGVuZ3RoIjogMSwiZXZlbnRfbG9jYWxfdGltZXN0YW1wIjogMTYyMTMzMjQxMTUxMiwicG9zaXRpb24iOiBudWxsLCJpc1VzZXJJZGVudGlmaWVkIjogZmFsc2UsImZlZWRiYWNrX2NvcnJlbGF0aW9uX3V1aWQiOiBudWxsfQpdfQ==", ENDITEM, 
		"Url=https://www.redditstatic.com/ads/pixel.js", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-MQML682", ENDITEM, 
		"Url=https://bat.bing.com/bat.js", ENDITEM, 
		"Url=https://d.impactradius-event.com/A353853-8e85-4786-9645-fac6b773cd071.js", ENDITEM, 
		"Url=https://s.yimg.com/wi/ytc.js", ENDITEM, 
		"Url=https://www.facebook.com/tr?id=1688171794549438&ev=PageView&noscript=1&gtmcb=1423271252", ENDITEM, 
		"Url=https://px.owneriq.net/stas/s/7kxod6.js", ENDITEM, 
		"Url=https://www.googleadservices.com/pagead/conversion_async.js", ENDITEM, 
		"Url=https://ct.pinterest.com/v3/?event=init&tid=2613604734453&noscript=1&gtmcb=1326400088", ENDITEM, 
		"Url=https://px.ads.linkedin.com/collect?pid=40922&fmt=gif&cookiesTest=true", ENDITEM, 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/854101013/?random=1621332412984&cv=9&fst=1621332412984&num=1&guid=ON&resp=GooglemKTybQhCsO&eid=2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&tiba=Samsung%20HP%20Conversion%20%7C%20HP%C2%AE%20Support&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", ENDITEM, 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/687393200/?random=1621332412992&cv=9&fst=1621332412992&num=1&userId=null&guid=ON&resp=GooglemKTybQhCsO&eid=376635470%2C2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&tiba=Samsung%20HP%20Conversion%20%7C%20HP%C2%AE%20Support&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", ENDITEM, 
		"Url=https://px.owneriq.net/j/?ref=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion&pt=7kxod6&t=f%7C%22Samsung%2520HP%2520Conversion%2520%257C%2520HP%25C2%25AE%2520Support%22&s=6ka7", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/849111477/?guid=ON&script=0&userId=null&is_vtc=1&random=1379282204", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/783157761/?guid=ON&script=0&userId=null&is_vtc=1&random=2143143383", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/854101013/?random=1621332412984&cv=9&fst=1621332000000&num=1&guid=ON&eid=2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&tiba=Samsung%20HP%20Conversion%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=312484294&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/687393200/?random=1621332412992&cv=9&fst=1621332000000&num=1&userId=null&guid=ON&eid=376635470%2C2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&tiba=Samsung%20HP%20Conversion%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=4169307193&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", ENDITEM, 
		"Url=https://www.ojrq.net/p/?return=&cid=5105&tpsync=no", ENDITEM, 
		"Url=https://sp.analytics.yahoo.com/sp.pl?a=10000&d=Tue%2C%2018%20May%202021%2010%3A06%3A53%20GMT&n=0&b=Samsung%20HP%20Conversion%20%7C%20HP%C2%AE%20Support&.yp=10044594&f=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&enc=UTF-8&tagmgr=gtm%2Censighten", ENDITEM, 
		"Url=https://met2.hp.com/b/ss/hphqglobal,hphq-ces-global-stage-temp,hphq-ces-na-stage-temp/1/JS-2.15.0/s33131956088095?AQB=1&ndh=1&pf=1&t=18%2F4%2F2021%2010%3A6%3A54%202%200&mid=55395109790894675412081278595344671814&aamlh=9&ce=UTF-8&ns=hpcorp&pageName=D%3Dv55&g=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&ch=pps&server=ppssupport-itgllbh7.inc.hp.com&events=event46%2Cevent45%3D162%2Cevent11&aamb=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1=us-en&v2=us&c3="
		"samsung_conversion&v3=en&c7=us&c8=en&c9=cs%3Aconsumer.home&c12=R11839&v12=Anonymous&c15=92&c26=D%3Dv12&c31=null&v32=null&v33=null&v34=null&v35=null&c43=null&v46=D%3Dc3&c49=D%3Dg&c50=D%3Dg&c51=hpexpnontridion%3Aihfcaas.5.r&c55=null&v55=pps-ces%7Csamsung_conversion&c56=null&c57=null&c58=null&c59=null&c61=0001%3A0001%3A00&c63=Initial&c66=55395109790894675412081278595344671814&v90=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&v92=ens%7Csupport_stage%7C04-May-2021%2007%3A24%3A28&v93"
		"=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&v94=ppssupport-itgllbh7.inc.hp.com&v95=ppssupport-itgllbh7.inc.hp.com%3AUnknown%7CUnknown%7CAMS%7Cus%3Aen%7CUSD&v99=16&s=1463x823&c=24&j=1.6&v=N&k=Y&bw=1626&bh=792&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&AQE=1", ENDITEM, 
		"Url=https://tag.apxlv.com/tag/partner/222?c_i=2&jid=c5fdc19cb7c011ebbb1dc296f981cbf3&ld=2&pixel_mode=pixel", ENDITEM, 
		"Url=https://www.facebook.com/tr?id=1524986591042566&ev=ConsumerEngagement&noscript=1&gtmcb=1762635109", ENDITEM, 
		"Url=../wcc-assets/images/conversion-arrow.svg", ENDITEM, 
		"Url=https://www.facebook.com/tr?id=1282296701803562&ev=ConsumerEngagement&noscript=1&gtmcb=1600329819", ENDITEM, 
		"Url=https://www.facebook.com/tr?id=1688171794549438&ev=ConsumerEngagement&noscript=1&gtmcb=75986368", ENDITEM, 
		"Url=https://adservice.google.com/ddm/fls/p/dc_pre=COzgosn-0vACFUZNYgodycwKZw;src=4898302;type=emeae00;cat=hp_em0;ord=1621332412083.757415533;gtm=2wg5c1;auiddc=2052257427.1621332412;u42=ppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion;~oref=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", ENDITEM, 
		"Url=../wcc-assets/images/hp-logo-modal.gif", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_url("xdframe-single-domain-1.1.0.html", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_8.pb", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("region", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("conversion_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/termbase/us-en/conversion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("href", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"samsung_conversion\",\"path\":\"/conversion\",\"seriesoid\":\"0\",\"modeloid\":\"0\"}", 
		LAST);

	web_url("wcc_second_Nav", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_alerts", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/us-en/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("country-selector.json", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/data/country-selector.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIlCdrf4D67KmmeEgUNNPT_BxIFDQgsY0wSBQ0r0XTqEgUNpbnmMA==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_url("conversion_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/config/us-en/conversion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_pfinder_common", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/contexual/us-en/wcc_pfinder_common?pageTemplate=samsung_conversion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("contact-hp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/contact-hp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.4.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=5E34123F5245B2CD0A490D45%40AdobeOrg&d_nsid=0&ts=1621332409704", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/clientlib-hf-fontface-core/resources/fonts/HPSimplifiedRegular.woff", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", ENDITEM, 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("auth", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&552788770&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"1b2e2d2d-c17f-a751-ab02-ff84a9f00d01\",\"sessionNumber\":1,\"pageNumber\":1},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("pageview", 
		"URL=https://c.contentsquare.net/pageview?pid=1255&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pn=1&re=1&dw=1621&dh=963&ww=1626&wh=792&sw=1463&sh=823&dr=&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&uc=1&la=en-US&cvars=%7B%221%22%3A%5B%22Template%22%2C%22samsung_conversion%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&cvarp="
		"%7B%221%22%3A%5B%22Template%22%2C%22samsung_conversion%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&v=10.8.6&r=218537", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIzCb5XF91e8glpEgUNnyyLRBIFDZ8si0QSBQ009P8HEgUNCCxjTBIFDSvRdOoSBQ2lueYw?alt=proto", "Referer=", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/footericons.woff", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", ENDITEM, 
		LAST);

	web_url("pageEvent", 
		"URL=https://c.contentsquare.net/pageEvent?value=MIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA&isETR=false&v=10.8.6&pid=1255&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&pn=1&r=844615", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/newhplogo.ttf", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/fonts_header_icons.woff", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("dest5.html", 
		"URL=https://hp.demdex.net/dest5.html?d_nsid=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("events", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"18956663993\",\"revision\":\"845\",\"visitors\":[{\"visitor_id\":\"oeu1621332409894r0.8397193635277462\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t"
		"\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1621332409918}],\"snapshots\":[{\"activationTimestamp\":1621332409890,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"a0ba4500-0bfa-4bb2-b50d-da257c2c0d78\",\"t\":1621332409919}]}]}]}", 
		LAST);

	web_url("otCenterRounded.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/otCenterRounded.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("otPcTab.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/v2/otPcTab.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhI6CRdG3_xkZNesEgUNnyyLRBIFDZ8si0QSBQ009P8HEgUNCCxjTBIFDSvRdOoSBQ2lueYwEgUNpZM2JA==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("13015798", 
		"URL=https://bat.bing.com/p/action/13015798", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("0", 
		"URL=https://bat.bing.com/action/0?ti=13015798&tm=gtm001&Ver=2&mid=01da3c56-3a33-41aa-812f-b1cba4cd64e8&sid=c4b9d460b7c011eba181bf440e9d7103&vid=c4bc9520b7c011eb95abf33918a73573&vids=1&pi=1200101525&lg=en-US&sw=1463&sh=823&sc=24&tl=Samsung%20HP%20Conversion%20%7C%20HP%C2%AE%20Support&p=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&r=&lt=13428&evt=pageLoad&msclkid=N&sv=1&rn=73540", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_url("10044594.json", 
		"URL=https://s.yimg.com/wi/config/10044594.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("eps", 
		"URL=https://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6746188122007829119J&l=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621332409894r0.8397193635277462; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22samsung_conversion%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_id=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01.1621332409.1.1621332409.1621332409.1589380098.1655496409985.None.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18766%7CMCMID%7C55395109790894675412081278595344671814%7CMCAAMLH-1621937210%7C9%7CMCAAMB-1621937210%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621339611s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18773%7CvVersion%7C4.4.0; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Tue+May+18+2021+10%3A06%3A52+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=345fe138-d857-4ba1-bed3-443426338d96&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dcm_s=1621332412083.757415533; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_gcl_au=1.1.2052257427.1621332412; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_rdt_uuid=1621332412647.c2379a3c-f876-4914-b3f0-a4bc34642349; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_uetsid=c4b9d460b7c011eba181bf440e9d7103; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_uetvid=c4bc9520b7c011eb95abf33918a73573; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_5105=1621332412772%7C365159%7C1621332412772%7C%7C; DOMAIN=linkto.ext.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("5105", 
		"URL=https://linkto.ext.hp.com/xc/365159/342132/5105", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=srcref=&landurl=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fconversion&&_ir=U364%7C%7C1621332412772", 
		EXTRARES, 
		"Url=https://tapestry.tapad.com/tapestry/1?ta_partner_id=916&ta_partner_did=Q6746188122007829119J&ta_format=png", "Referer=https://px.owneriq.net/", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("ep", 
		"URL=https://px.owneriq.net/ep?sid%5B%5D=8460259172&sid%5B%5D=8460259192&pt=7kxod6&uid=Q6746188122007829119J&jcs=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://idsync.rlcdn.com/379208.gif?partner_uid=Q6746188122007829119J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://us-u.openx.net/w/1.0/sd?cc=1&id=537073059&val=Q6746188122007829119J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://dpm.demdex.net/demconf.jpg?et:ibs%7cdata:dpid=53196&dpuuid=Q6746188122007829119J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://dsum.casalemedia.com/rum?cm_dsp_id=31&external_user_id=Q6746188122007829119J&C=1", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://simage2.pubmatic.com/AdServer/Pug?vcode=bz0yJnR5cGU9MSZjb2RlPTI2NDYmdGw9MTI5NjAw&piggybackCookie=Q6746188122007829119J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://pixel.rubiconproject.com/tap.php?v=11581&nid=2395&put=Q6746188122007829119J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=/cm?id=&esi=1&google_error=3", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://ib.adnxs.com/bounce?%2Fsetuid%3Fentity%3D13%26code%3DQ6746188122007829119J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=/fr/epx.gif", "Referer=https://px.owneriq.net/", ENDITEM, 
		LAST);

	web_url("dvar", 
		"URL=https://c.contentsquare.net/dvar?v=10.8.6&pid=1255&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&pn=1&dv=N4IgpgaghgTgjAJhALhAQQHYHsME8C2WArgM4gA0IADjFlQMwoglT4lEYDmA%2BgMY4A3MDBIBLHBWq0qcJqQC0YDCAC%2BQAA%3D%3D&r=662757", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("events_2", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=76&mdh=792&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B0%2C20%2C1626%2C792%5D%2C%5B2%2C4210%2C103%2C173%2C0%2C%22div%23directionTracker%22%2C4163%2C7240%5D%2C%5B2%2C5448%2C116%2C170%2C0%2C%22%22%2C4688%2C7114%5D%2C%5B2%2C5840%2C476%2C252%2C0%2C%22div%23onetrust-button-group%22%2C2499%2C35541%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,idgpnmonknjnojddfkpgkljpfnnfcklj,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-90.0.4430.212");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:25956738&cup2hreq=00769843544715c3386f96d29242c2ffdfe4c85af7ca1ef1056efac4bea9f1d0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{3d1f1137-6ec8-4366-800f-61bbc7eadc32}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{a552e3f1-e9be-457b-af1c-19c56c46ac50}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{8b4dc877-ef22-4e24-a43d-233c79dbd1fa}\",\"rd\":5247},\"updatecheck\":{"
		"},\"version\":\"14.5\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{0b4ea1cc-64ed-4a43-86cd-84139cb8087e}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\""
		"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{f7e60adf-e12e-43e2-bba6-8007a9ba1bae}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.37a9146e17a5ffa3b7f05fce240a2a6cc67c07be3f6309d2d600d0310de696a9\"}]},\"ping\":{\"ping_freshness\":\"{ac8ff26d-c9f5-4664-824f-7e0bee4f0834}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"1.29.0"
		"\"},{\"appid\":\"idgpnmonknjnojddfkpgkljpfnnfcklj\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.20\"}]},\"ping\":{\"ping_freshness\":\"{b62b9b9b-f60b-44f9-ad3f-ba411a051a8b}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"3.1.20\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\""
		"ping\":{\"ping_freshness\":\"{2b22a49b-e6e6-49ad-8eab-6d212e40516e}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.3\"}]},\"ping\":{\"ping_freshness\":\"{d6f1ac94-0c75-4dbd-b4c7-bff1d21de9a8}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.05bc4a6e12744e61576e531c7602778bf2316598236e1bb2b87a664fd2aee8c5\"}]},\"ping\":{\"ping_freshness\":\"{fe05cd09-3250-4a1c-83c2-3e5a700f4002}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"9021.222.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.212\",\"protocol\":\"3.1\",\"requestid\":\"{09805e7c-121c-471a-b13b-37068eda81a1}\",\"sessionid\":\"{62031fe8-2423-4a36-a096-506ff96b5d73}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.212\"}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(13);

	web_custom_request("events_3", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=76&mdh=792&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B2%2C7475%2C1079%2C228%2C0%2C%22div%23onetrust-button-group%3Ediv%3Aeq(0)"
		"%22%2C46265%2C8423%5D%2C%5B2%2C8484%2C1083%2C219%2C0%2C%22div%23onetrust-button-group-parent%22%2C54493%2C10033%5D%2C%5B2%2C8885%2C1230%2C47%2C0%2C%22div%23welcomeHeader%22%2C49709%2C61603%5D%2C%5B6%2C9176%2C1197%2C87%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C9285%2C1193%2C92%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C37552%2C10071%5D%2C%5B2%2C9685%2C1189%2C107%2C0%2C%22%22%2C31594%2C32413%5D%2C%5B3%2C9789%2C1189%2C107%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C9946%2C0%2C0%2C%22a%23closeAlert%22%2C%22%22%5D%2C%5B4%2C10000%2C1189%2C107%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C10002%2C1189%2C107%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B2%2C13588%2C1176%2C115%2C0%2C%22%22%2C12232%2C44328%5D%2C%5B7%2C13613%2C1132%2C141%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%5D%2C%5B6%2C13693%2C944%2C239%2C%22button%23onetrust-accept-btn-handler%22%2C%22%22%5D%2C%5B7%2C13910%2C920%2C208%2C%22button%23onetrust-accept-btn-handler%22%5D%2C%5B2%2C13990%2C1020%2C146%2C0%2C%22p%23onetrust-policy-text%3Ep%3Aeq(0)"
		"%22%2C50675%2C13826%5D%2C%5B6%2C14375%2C1172%2C113%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C14391%2C1172%2C113%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C6274%2C41349%5D%2C%5B2%2C14791%2C1193%2C111%2C0%2C%22%22%2C37552%2C38371%5D%2C%5B3%2C15098%2C1193%2C111%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B4%2C15317%2C1193%2C111%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B5%2C15320%2C1193%2C111%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C15639%2C1193%2C111%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%5D%2C%5B2%2C17368%2C1193%2C110%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C52336%2C51191%5D%2C%5B2%2C17768%2C1193%2C108%2C0%2C%22%22%2C52336%2C49553%5D%2C%5B2%2C18169%2C1189%2C107%2C0%2C%22%22%2C52131%2C48734%5D%2C%5B2%2C19994%2C1215%2C106%2C0%2C%22%22%2C53463%2C47914%5D%2C%5B2%2C20394%2C1267%2C159%2C0%2C%22div%23nav-secondary%3Eul%3Aeq(0)%22%2C64568%2C54079%5D%2C%5B2%2C20796%2C1278%2C163%2C0%2C%22%22%2C65339%2C60633%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_think_time(17);

	lr_start_transaction("Sam_serialnum");

	web_custom_request("events_4", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=76&mdh=792&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B2%2C31345%2C1061%2C225%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh1%3Aeq(0)%22%2C46219%2C60007%5D%2C%5B2%2C31745%2C468%2C353%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(0)"
		"%22%2C13874%2C17150%5D%2C%5B2%2C32144%2C443%2C381%2C0%2C%22label%23samsungSerialNumLabel%22%2C37903%2C52681%5D%2C%5B6%2C32172%2C401%2C419%2C%22input%23samsungSerialNum%22%2C%22%22%5D%2C%5B2%2C32545%2C398%2C409%2C0%2C%22input%23samsungSerialNum%22%2C42382%2C31215%5D%2C%5B3%2C32982%2C398%2C409%2C%22input%23samsungSerialNum%22%2C%22%22%5D%2C%5B11%2C32992%2C%22input%23samsungSerialNum%22%5D%2C%5B4%2C33189%2C398%2C409%2C%22input%23samsungSerialNum%22%2C%22%22%5D%2C%5B5%2C33199%2C398%2C409%2C%22input%23"
		"samsungSerialNum%22%2C%22%22%5D%2C%5B2%2C35033%2C408%2C409%2C0%2C%22%22%2C44714%2C31215%5D%2C%5B7%2C35240%2C509%2C403%2C%22input%23samsungSerialNum%22%5D%2C%5B6%2C35392%2C530%2C403%2C%22button%23samsungSerialBtn%22%2C%22%22%5D%2C%5B2%2C35435%2C533%2C403%2C0%2C%22button%23samsungSerialBtn%22%2C4669%2C19296%5D%2C%5B2%2C35837%2C551%2C405%2C0%2C%22%22%2C19314%2C23267%5D%2C%5B3%2C35849%2C551%2C405%2C%22button%23samsungSerialBtn%22%2C%22%22%5D%2C%5B10%2C35865%2C%22input%23samsungSerialNum%22%2Cfalse%5D%"
		"2C%5B12%2C35870%2C%22input%23samsungSerialNum%22%5D%2C%5B4%2C36060%2C551%2C405%2C%22button%23samsungSerialBtn%22%2C%22%22%5D%2C%5B5%2C36063%2C551%2C405%2C%22button%23samsungSerialBtn%22%2C%22%22%5D%2C%5B11%2C36137%2C%22input%23samsungSerialNum%22%5D%2C%5B7%2C36142%2C551%2C405%2C%22button%23samsungSerialBtn%22%5D%2C%5B2%2C37791%2C546%2C415%2C0%2C%22div%23directionTracker%3Eapp-loader%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C704%2C34323%5D%2C%5B2%2C38191%2C435%2C770%2C0%2C%22%22%2C17580%2C1384%5D%2C%5B2%2C38592%2C448%2C784%2C0%2C%22%22%2C18106%2C64842%5D%2C%5B12%2C38972%2C%22input%23samsungSerialNum%22%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("kampyle_userid=f35d-6aac-7e65-6925-4281-bc4a-fd5c-0f22; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1621332411509; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleSessionPageCounter=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("cd_user_id=1797ef144d8ca6-0943c06cc852ed-2363163-125f51-1797ef144d9b93; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv1_prefs=null; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dcm_s=1621332412083.757415533; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_gcl_au=1.1.2052257427.1621332412; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_rdt_uuid=1621332412647.c2379a3c-f876-4914-b3f0-a4bc34642349; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetsid=c4b9d460b7c011eba181bf440e9d7103; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetvid=c4bc9520b7c011eb95abf33918a73573; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_5105=1621332412772%7C365159%7C1621332412772%7C%7C; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_PI=c501deb6-b7c0-11eb-9a1c-42010a246c50%7C1621418812772; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/conversion; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=pps-ces%7Csamsung_conversion; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-05-18T10:06:59.991Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C50%2C50%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=pps-ces%257Csamsung_conversion%2C50%2C50%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Tue+May+18+2021+10%3A07%3A05+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=345fe138-d857-4ba1-bed3-443426338d96&interactionCount=3&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("serialnumber", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/samsungconversion/serialnumber", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"serialNumber\":\"ZEL6BJDJA00015A\",\"captchaToken\":\"\",\"cc\":\"us\",\"lc\":\"en\"}", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhJBCe7ataUJGlIQEgUNnyyLRBIFDZ8si0QSBQ009P8HEgUNF4BEjhIFDQgsY0wSBQ0r0XTqEgUNpbnmMBIFDaWTNiQ=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hnimpnehoodheedghdeeijklkeaacbdc,cmahhnpholdijhjokonmfdjbfmklppij,lmelglejhemejginpboagddgdfbepgmp,giekcmmlnklenlaomppkphknjmnnpneh,llkgjffcdpffmhiakmfcdcblohccpfmo,khaoiebndkojlmppeemjhbpbandiljpe,aemomkdncapdnfajjbbcbdebjljbpmpj,gkmgaooipdjhmangpemjhigmamcehddo,ehgidpndbllacpjalkiimkbadgjfnnmc,obedbbhbpmojnkanicioggnmelmoomoc,ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,"
		"pdafiollngonhoadbmdoemagnfpdphbe,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jflookgnkcckhobaglndicnbbgbonegd,hfnkpimlhhgieaddgfemjhofmfblmnib,eeigpngbgcognadeebkilcpcaedhellh");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-90.0.4430.212");

	lr_think_time(9);

	web_custom_request("json_2", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=10:1400466567&cup2hreq=22fbe2e5c5f8354b897cb020e5cf111517581b6db6fe551da6cb7f131ecf5d2c", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{0518a9b6-885a-4f01-aec3-89d364ea66e2}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{7e1fdce5-8f91-4916-b075-3384a8b21aa1"
		"}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"4.10.2209.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEU\",\"cohort\":\"1:bm1:zvx@0.01\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.4dcc255c0d82123c9c4251bb453165672ea0458f0379f3a7a534dc2a666d7c6d\"}]},\"ping\":{\"ping_freshness\":\"{bd3d8f86-8483-4cf3-9e65-c727fb0254c5}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"9.22.0\"},{\"appid\":\""
		"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{b498f3e0-9edd-4829-bdf7-bd665042de59}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GCEU\",\"cohort\":\"1:wr3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{"
		"\"package\":[{\"fp\":\"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7\"}]},\"ping\":{\"ping_freshness\":\"{77860c8f-c628-42d7-a728-983186b10fb4}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"1.0.6\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GCEU\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b5bd77d503ff9e74de53b867efb0a2277eb98c6f25304988fd8672688d43bdb1\"}]},\"ping\":{\""
		"ping_freshness\":\"{91ebc49c-8491-4b57-8ef6-37faddfeab5a}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"279\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{1bb28052-26c7-488a-aa72-44d96ea2b140}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"7\"},{\""
		"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.d730fdd6875bfda19ae43c639e89fe6c24e48b53ec4f466b1d7de2001f97e03c\"}]},\"ping\":{\"ping_freshness\":\"{e9b401ae-a4f5-4272-8e80-b3741ab70749}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"packages\":{\"package\":[{\"fp\":\"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4\"}]},\"ping\":{\"ping_freshness\":\"{0ce4858d-a777-4c78-b639-bdc08644ac1a}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"43\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{0ab4a383-0ee2-4694-baf5-c5ec3a4a432c}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\""
		"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.7bb76b42a74f34d32b1a3a43540efa36c58288d8331fc944381c05b746cb487f\"}]},\"ping\":{\"ping_freshness\":\"{c7a1d2dc-7d91-44af-9546-d2a0e0f8ca32}\",\"rd\":5247},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"90.261.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\"cohort\":\"1:ofl:\",\""
		"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{2c456608-17c4-4ab6-a728-4b5dc6533413}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"accept_locale\":\"ENUS\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GCEU\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"packages\":{\"package\":[{\"fp\":\"1.51ad0ba60f8d94fdf96628bd0bc20b28199ccabce5f4c84546885445676b2d7a\"}]},\"ping\":{\"ping_freshness\":\"{0c80c87b-cfeb-4131-ba01-554071622300}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"20210506.372668613\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:ztr@0.01\",\"cohorthint\":\"M80ToM99\",\"cohortname\":\"M80ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.7ccd3093d8e1fcfca5051bf7bac1332816cbff1254a52902d64b5e0adea2e84a\"}]},\"ping\":{\"ping_freshness\":\"{3ccb3f9c-709a-43ac-86c7-ebcaab7e4916}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"2021.5.3.1141\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GCEU\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b9f9f7e9042f8d756bff6ac159b49b5bc3f87ce2edca54bbdaa83a31dd74f398\"}]},\"ping\":{\"ping_freshness\":\""
		"{73b38e52-c15a-4990-9e86-0e40080aaec3}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"92.0.4505.0\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"GCEU\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.baeb7c645c7704139756b02bf2741430d94ea3835fb1de77fef1057d8c844655\"}]},\"ping\":{\"ping_freshness\":\"{025c58e4-d137-4162-b0e3-d9bdd2eff6bf}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"2021.2.22.1142\"},"
		"{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GCEU\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{c440b710-2314-48a9-a357-b85f7750e01e}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.59ee61f06488383860fc946a29e5928734edada70585e71217963b6b4cac4734\"}]},\"ping\":{\"ping_freshness\":\"{420006b1-64d5-4246-a1f6-06a4c827c17e}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"2631\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.b1f80b560ef36fa898083f5f5c5752092464b4eb7b96c7c13a8c4fc9512e4ff7\"}]},\"ping\":{\"ping_freshness\":\"{4b2a7e4b-2eaa-4158-8ce3-612c8dd2e3dd}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"6605\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GCEU\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\""
		"{219d0dd6-7df2-42ee-88b6-899a77761adb}\",\"rd\":5247},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.212\",\"protocol\":\"3.1\",\"requestid\":\"{b9c6260c-eaa8-4eb9-bad7-7066ac2b71ea}\",\"sessionid\":\"{9097521d-2af1-4257-88cb-525ef7e968d2}\",\"updater\":"
		"{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.212\"}}", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("plugins_win.json", 
		"URL=https://www.gstatic.com/chrome/config/plugins_3/plugins_win.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("events_5", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=76&mdh=792&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B2%2C40163%2C421%2C756%2C0%2C%22label%23hpSerialNumLabel%22%2C34225%2C17477%5D%2C%5B2%2C40564%2C374%2C677%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Eh3%3Aeq(0)"
		"%22%2C8693%2C26983%5D%2C%5B2%2C47006%2C668%2C65%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C25457%2C14328%5D%2C%5B11%2C47010%2C%22input%23samsungSerialNum%22%5D%2C%5B2%2C47749%2C721%2C56%2C0%2C%22%22%2C28170%2C6955%5D%2C%5B2%2C48150%2C1468%2C165%2C0%2C%22div%23drop-down%3Ediv%3Aeq(0)%22%2C59328%2C62378%5D%2C%5B12%2C49129%2C%22input%23samsungSerialNum%22%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("Sam_serialnum",LR_AUTO);

	lr_start_transaction("Sam_productnum");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(17);

	web_custom_request("productnumber", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/samsungconversion/productnumber", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"productNumber\":\"CLP-315/XAA\",\"captchaToken\":\"\",\"cc\":\"us\",\"lc\":\"en\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_custom_request("upload", 
		"URL=https://google.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":63196,\"request_elapsed_ms\":674,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://adservice.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":62425,\"request_elapsed_ms\":112,"
		"\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://adservice.google.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_custom_request("upload_2", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"http_response_code\":302,\"network_changed\":false,\"protocol\":\"HTTPS\",\"request_age_ms\":62734,\"request_elapsed_ms\":307,\"sample_rate\":0.05,\"server_ip\":\"142.250.113.149:443\",\"status\":\"ok\",\"url\":\"https://ad.doubleclick.net/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhJICZb9Th_sWaZCEgUNnyyLRBIFDZ8si0QSBQ009P8HEgUNF4BEjhIFDQgsY0wSBQ26X0nqEgUNK9F06hIFDaW55jASBQ2lkzYk?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("events_6", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=76&mdh=792&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B2%2C50149%2C1417%2C218%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh1%3Aeq(0)%22%2C65358%2C50247%5D%2C%5B2%2C50841%2C1436%2C235%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C58035%2C4409%5D%2C%5B2%2C51569%2C1433%2C232%2C0%2C%22%22%2C57913%2C4160%5D%2C%5B2%2C51969%2C1422%2C220%2C0%2C%22%22%2C57469%2C3162%5D%2C%5B2%2C61870%2C1258%2C224%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C56074%2C3494%5D%2C%5B6%2C61950%2C586%2C420%2C%22button%23samsungSerialClearBtn%22%2C%22%22%5D%2C%5B7%2C61980%2C501%2C479%2C%22button%23samsungSerialClearBtn%22%5D%2C%5B2%2C62271%2C466%2C517%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)"
		"%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C41749%2C19416%5D%2C%5B6%2C62344%2C450%2C523%2C%22input%23samsungProductNum%22%2C%22%22%5D%2C%5B2%2C62672%2C419%2C538%2C0%2C%22input%23samsungProductNum%22%2C47280%2C27751%5D%2C%5B2%2C63075%2C418%2C538%2C0%2C%22%22%2C47047%2C27751%5D%2C%5B11%2C63310%2C%22input%23samsungSerialNum%22%5D%2C%5B3%2C63311%2C418%2C538%2C%22input%23samsungProductNum%22%2C%22%22%5D%2C%5B12%2C63318%2C%22input%23samsungSerialNum%22%5D%2C%5B11%2C63319%2C%22input%23samsungProductNum%22%5D%2C%5B4%2C63518%2C418%2C538%2C%22i"
		"nput%23samsungProductNum%22%2C%22%22%5D%2C%5B5%2C63519%2C418%2C538%2C%22input%23samsungProductNum%22%2C%22%22%5D%2C%5B2%2C65323%2C421%2C538%2C0%2C%22%22%2C47746%2C27751%5D%2C%5B7%2C65471%2C508%2C533%2C%22input%23samsungProductNum%22%5D%2C%5B6%2C65533%2C526%2C535%2C%22button%23samsungProductBtn%22%2C%22%22%5D%2C%5B2%2C65724%2C554%2C536%2C0%2C%22button%23samsungProductBtn%22%2C21755%2C23776%5D%2C%5B3%2C65958%2C554%2C537%2C%22button%23samsungProductBtn%22%2C%22%22%5D%2C%5B10%2C65969%2C%22input%23sams"
		"ungProductNum%22%2Cfalse%5D%2C%5B12%2C65971%2C%22input%23samsungProductNum%22%5D%2C%5B2%2C66124%2C554%2C537%2C0%2C%22%22%2C21755%2C25762%5D%2C%5B4%2C66166%2C554%2C537%2C%22button%23samsungProductBtn%22%2C%22%22%5D%2C%5B5%2C66167%2C554%2C537%2C%22button%23samsungProductBtn%22%2C%22%22%5D%2C%5B11%2C66180%2C%22input%23samsungProductNum%22%5D%2C%5B7%2C66188%2C554%2C537%2C%22button%23samsungProductBtn%22%5D%2C%5B6%2C66425%2C554%2C537%2C%22button%23samsungProductClearBtn%22%2C%22%22%5D%2C%5B2%2C68188%2C"
		"554%2C543%2C0%2C%22button%23samsungProductClearBtn%22%2C25584%2C37682%5D%2C%5B7%2C68198%2C550%2C560%2C%22button%23samsungProductClearBtn%22%5D%2C%5B6%2C68451%2C493%2C783%2C%22input%23hpSerialNum%22%2C%22%22%5D%2C%5B7%2C68499%2C490%2C793%2C%22input%23hpSerialNum%22%5D%2C%5B2%2C68588%2C491%2C790%2C0%2C%22input%23hpSerialNum%22%2C64072%2C14325%5D%2C%5B12%2C69238%2C%22input%23samsungProductNum%22%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	lr_think_time(10);

	web_url("ping", 
		"URL=https://clients1.google.com/tools/pso/ping?as=chrome&brand=GCEU&pid=&hl=en&rep=2&rlz=C1:1C1GCEU_enUS939US939,C2:1C2GCEU_enUS939,C7:1C7GCEU_enUS939", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("events_7", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=76&mdh=792&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B2%2C70473%2C385%2C690%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Eh3%3Aeq(0)%22%2C9299%2C50009%5D%2C%5B2%2C79522%2C671%2C61%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C25610%2C11051%5D%2C%5B11%2C79524%2C%22input%23samsungProductNum%22%5D%2C%5B2%2C80118%2C684%2C59%2C0%2C%22%22%2C26276%2C9413%5D%2C%5B2%2C80518%2C1416%2C230%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C64458%2C3993%5D%2C%5B2%2C80919%2C1418%2C217%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh1%3Aeq(0)"
		"%22%2C65412%2C48852%5D%2C%5B12%2C81222%2C%22input%23samsungProductNum%22%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("Sam_productnum",LR_AUTO);

	lr_start_transaction("HP_serialnum");

	web_add_cookie("s_ppv=pps-ces%257Csamsung_conversion%2C64%2C50%2C1014.2222290039062%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	lr_think_time(23);

	web_custom_request("serialnumber_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/samsungconversion/serialnumber", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"serialNumber\":\"CNB0K8Y214\",\"captchaToken\":\"\",\"cc\":\"us\",\"lc\":\"en\"}", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhJPCSn_6CM7R-MhEgUNnyyLRBIFDZ8si0QSBQ009P8HEgUNF4BEjhIFDQgsY0wSBQ26X0nqEgUNK9F06hIFDQYKi5ISBQ2lueYwEgUNpZM2JA==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("events_8", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=64&mdh=1586&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B2%2C82364%2C1429%2C218%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C57752%2C2996%5D%2C%5B2%2C83039%2C1453%2C242%2C0%2C%22%22%2C58722%2C4991%5D%2C%5B2%2C83863%2C1451%2C242%2C0%2C%22%22%2C58641%2C4991%5D%2C%5B2%2C84264%2C1418%2C219%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh1%3Aeq(0)%22%2C65412%2C51641%5D%2C%5B2%2C94239%2C1422%2C246%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C57469%2C5323%5D%2C%5B2%2C94639%2C1544%2C472%2C0%2C%22%22%2C62399%2C24111%5D%2C%5B2%2C95040%2C1579%2C643%2C0%2C%22%22%2C63814%2C38326%5D%2C%5B2%2C95440%2C906%2C685%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Eh3%3Aeq(0)%22%2C38015%2C41153%5D%2C%5B2%2C95841%2C998%2C703%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)"
		"%22%2C43086%2C8759%5D%2C%5B11%2C96220%2C%22input%23samsungProductNum%22%5D%2C%5B3%2C96221%2C1014%2C723%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ep%3Aeq(0)%22%2C%22%22%5D%2C%5B12%2C96240%2C%22input%23samsungProductNum%22%5D%2C%5B2%2C96246%2C1014%2C723%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ep%3Aeq(0)"
		"%22%2C43968%2C49328%5D%2C%5B4%2C96427%2C1014%2C723%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ep%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C96428%2C1014%2C723%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ep%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B1%2C96791%2C0%2C44.4444465637207%2C151%5D%2C%5B1%2C97001%2C0%2C88.8888931274414%2C151%5D%2C%5B1%2C97200%2C0%2C133.33334350585938%2C150%5D%2C%5B1%2C97396%2C0%2C177.7777862548828%2C151%5D%2C%5B1%2C97767%2C0%2C222.22222900390625%2C150%5D%2C%5B2%2C98199%2C1001%2C946%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(1)"
		"%22%2C43251%2C47859%5D%2C%5B6%2C98408%2C363%2C812%2C%22input%23hpSerialNum%22%2C%22%22%5D%2C%5B2%2C98599%2C299%2C798%2C0%2C%22input%23hpSerialNum%22%2C19293%2C30214%5D%2C%5B3%2C99326%2C299%2C798%2C%22input%23hpSerialNum%22%2C%22%22%5D%2C%5B11%2C99337%2C%22input%23hpSerialNum%22%5D%2C%5B4%2C99538%2C299%2C798%2C%22input%23hpSerialNum%22%2C%22%22%5D%2C%5B5%2C99540%2C299%2C798%2C%22input%23hpSerialNum%22%2C%22%22%5D%2C%5B2%2C101260%2C347%2C786%2C0%2C%22%22%2C30488%2C6380%5D%2C%5B7%2C101300%2C396%2C779"
		"%2C%22input%23hpSerialNum%22%5D%2C%5B6%2C101606%2C540%2C783%2C%22button%23hpSerialBtn%22%2C%22%22%5D%2C%5B2%2C101660%2C541%2C784%2C0%2C%22button%23hpSerialBtn%22%2C11178%2C2407%5D%2C%5B2%2C102061%2C560%2C796%2C0%2C%22%22%2C26637%2C26238%5D%2C%5B3%2C102080%2C560%2C796%2C%22button%23hpSerialBtn%22%2C%22%22%5D%2C%5B10%2C102093%2C%22input%23hpSerialNum%22%2Cfalse%5D%2C%5B12%2C102098%2C%22input%23hpSerialNum%22%5D%2C%5B4%2C102289%2C560%2C796%2C%22button%23hpSerialBtn%22%2C%22%22%5D%2C%5B5%2C102290%2C56"
		"0%2C796%2C%22button%23hpSerialBtn%22%2C%22%22%5D%2C%5B11%2C102297%2C%22input%23hpSerialNum%22%5D%2C%5B7%2C102303%2C560%2C796%2C%22button%23hpSerialBtn%22%5D%2C%5B6%2C104554%2C560%2C796%2C%22button%23hpSerialClearBtn%22%2C%22%22%5D%2C%5B7%2C105895%2C579%2C773%2C%22button%23hpSerialClearBtn%22%5D%2C%5B2%2C105896%2C579%2C773%2C0%2C%22label%23hpSerialNumLabel%22%2C62555%2C58740%5D%2C%5B2%2C106298%2C1340%2C445%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C60363%2C61721%5D%2C%5B2%2C106699%2C1344%2C443%2C0%2C%22%22%2C60578%2C60281%5D%2C%5B12%2C107046%2C%22input%23hpSerialNum%22%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("HP_serialnum",LR_AUTO);

	lr_start_transaction("HP_productnum");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(26);

	web_custom_request("productnumber_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/samsungconversion/productnumber", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"productNumber\":\"253510-B21\",\"captchaToken\":\"\",\"cc\":\"us\",\"lc\":\"en\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_custom_request("upload_3", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTP\",\"request_age_ms\":67808,\"request_elapsed_ms\":181,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gcp.gvt2.com/domainreliability/upload\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_custom_request("upload_4", 
		"URL=https://google.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTP\",\"request_age_ms\":67808,\"request_elapsed_ms\":174,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://google.com/domainreliability/upload\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhJWCf2TKBKyBXsgEgUNnyyLRBIFDZ8si0QSBQ009P8HEgUNF4BEjhIFDQgsY0wSBQ26X0nqEgUNK9F06hIFDQYKi5ISBQ2lueYwEgUNIfhqkxIFDaWTNiQ=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("events_9", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=64&mdh=1586&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B2%2C108719%2C1437%2C468%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)%22%2C58075%2C23778%5D%2C%5B2%2C109278%2C1435%2C467%2C0%2C%22%22%2C57994%2C23695%5D%2C%5B2%2C109679%2C1408%2C441%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)"
		"%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%22%2C64034%2C15842%5D%2C%5B2%2C119258%2C1351%2C444%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C60954%2C61001%5D%2C%5B2%2C119660%2C646%2C865%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%22%2C23083%2C43169%5D%2C%5B6%2C119951%2C514%2C1007%2C%22div%23clc-selector%3Ea%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B7%2C120008%2C506%2C1011%2C%22div%23clc-selector%3Ea%3Aeq(0)%22%5D%2C%5B6%2C120009%2C506%2C1011%2C%22div%23clc-selector%3Ea%3Aeq(0)%3Espan%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C120009%2C504%2C1014%2C%22div%23clc-selector%3Ea%3Aeq(0)%3Espan%3Aeq(0)%22%5D%2C%5B2%2C120060%2C506%2C1011%2C0%2C%22div%23clc-selector%3Ea%3Aeq(0)%3Espan%3Aeq(0)"
		"%22%2C60756%2C3312%5D%2C%5B2%2C121856%2C469%2C984%2C0%2C%22div%23directionTracker%22%2C18954%2C41179%5D%2C%5B6%2C121876%2C467%2C922%2C%22input%23hpProductNum%22%2C%22%22%5D%2C%5B7%2C121887%2C443%2C835%2C%22input%23hpProductNum%22%5D%2C%5B2%2C122256%2C467%2C922%2C0%2C%22input%23hpProductNum%22%2C58475%2C16819%5D%2C%5B2%2C125577%2C834%2C437%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C33182%2C55960%5D%2C%5B2%2C125978%2C1043%2C435%2C0%2C%22%22%2C44409%2C54520%5D%2C%5B2%2C126378%2C834%2C407%2C0%2C%22%22%2C33182%2C34355%5D%2C%5B2%2C127405%2C672%2C285%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh3%3Aeq(0)"
		"%22%2C25118%2C22562%5D%2C%5B11%2C127408%2C%22input%23hpSerialNum%22%5D%2C%5B2%2C127957%2C669%2C296%2C0%2C%22%22%2C24953%2C42045%5D%2C%5B2%2C128357%2C539%2C755%2C0%2C%22label%23hpSerialNumLabel%22%2C55657%2C15050%5D%2C%5B2%2C128758%2C380%2C912%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C27371%2C23374%5D%2C%5B6%2C128758%2C375%2C915%2C%22input%23hpProductNum%22%2C%22%22%5D%2C%5B2%2C129157%2C366%2C925%2C0%2C%22input%23hpProductNum%22%2C34919%2C22778%5D%2C%5B3%2C130094%2C366%2C925%2C%22input%23hpProductNum%22%2C%22%22%5D%2C%5B12%2C130108%2C%22input%23hpSerialNum%22%5D%2C%5B11%2C130108%2C%22input%23hpProductNum%22%5D%2C%5B4%2C130337%2C366%2C925%2C%22input%23hpProductNum%22%2C%22%22%5D%2C%5B5%2C130339%2C366%2C925%2C%22input%23hpProductNum%22%2C%22%22%5D%2C%5B2%2C132222%2C371%2C92"
		"5%2C0%2C%22%22%2C36085%2C22778%5D%2C%5B7%2C132421%2C497%2C936%2C%22input%23hpProductNum%22%5D%2C%5B6%2C132577%2C527%2C936%2C%22button%23hpProductBtn%22%2C%22%22%5D%2C%5B2%2C132624%2C531%2C934%2C0%2C%22button%23hpProductBtn%22%2C3041%2C40648%5D%2C%5B2%2C133024%2C551%2C930%2C0%2C%22%22%2C19314%2C32704%5D%2C%5B2%2C133424%2C552%2C932%2C0%2C%22%22%2C20128%2C36676%5D%2C%5B3%2C133609%2C552%2C932%2C%22button%23hpProductBtn%22%2C%22%22%5D%2C%5B10%2C133623%2C%22input%23hpProductNum%22%2Cfalse%5D%2C%5B12%2C1"
		"33625%2C%22input%23hpProductNum%22%5D%2C%5B4%2C133816%2C552%2C932%2C%22button%23hpProductBtn%22%2C%22%22%5D%2C%5B5%2C133819%2C552%2C932%2C%22button%23hpProductBtn%22%2C%22%22%5D%2C%5B11%2C133891%2C%22input%23hpProductNum%22%5D%2C%5B7%2C133897%2C552%2C932%2C%22button%23hpProductBtn%22%5D%2C%5B6%2C134258%2C552%2C932%2C%22button%23hpProductClearBtn%22%2C%22%22%5D%2C%5B2%2C135288%2C565%2C918%2C0%2C%22button%23hpProductClearBtn%22%2C36109%2C8875%5D%2C%5B7%2C135315%2C650%2C840%2C%22button%23hpProductCle"
		"arBtn%22%5D%2C%5B2%2C135688%2C1483%2C443%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)%22%2C59934%2C21700%5D%2C%5B2%2C136088%2C1484%2C440%2C0%2C%22%22%2C59975%2C21451%5D%2C%5B12%2C137698%2C%22input%23hpProductNum%22%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("HP_productnum",LR_AUTO);

	lr_think_time(13);

	web_custom_request("events_10", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=64&mdh=1586&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B2%2C139889%2C1446%2C460%2C0%2C%22%22%2C58439%2C23113%5D%2C%5B2%2C140840%2C1453%2C464%2C0%2C%22%22%2C58722%2C23446%5D%2C%5B2%2C141241%2C1595%2C664%2C0%2C%22%22%2C64460%2C40072%5D%2C%5B2%2C141642%2C1617%2C696%2C0%2C%22%22%2C65350%2C42732%5D%2C%5B2%2C142042%2C1621%2C703%2C0%2C%22html%3Aeq(0"
		")%22%2C65511%2C29049%5D%2C%5B2%2C142505%2C1622%2C705%2C0%2C%22%22%2C65552%2C29131%5D%2C%5B2%2C142906%2C1623%2C705%2C0%2C%22%22%2C65592%2C29131%5D%2C%5B11%2C143099%2C%22input%23hpProductNum%22%5D%2C%5B3%2C143100%2C1624%2C706%2C%22html%3Aeq(0)%22%2C%22%22%5D%2C%5B1%2C143571%2C0%2C0%2C273%5D%2C%5B4%2C144292%2C1620%2C200%2C%22html%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C144294%2C1620%2C200%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C65471%2C1499%5D%2C%5B2%2C144696%2C1591%2C203%2C0%2C%22%22%2C64299%2C1749%5D%2C%5B2%2C145096%2C1029%2C347%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C43657%2C15875%5D%2C%5B2%2C145497%2C1280%2C220%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh1%3Aeq(0)%22%2C57993%2C53036%5D%2C%5B12%2C151361%2C%22input%23hpProductNum%22%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINOTAuMC40NDMwLjIxMhopCAUQARobCg0IBRAGGAEiAzAwMTABELSgCxoCGAkAVVhlIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARD67QgaAhgJ0M-4NiIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQp90IGgIYCTtyDmUiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEI2pCRoCGAlbpOp7IgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYCcxdPEUiBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEI4gGgIYCcufPVgiBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgJB12pKSIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQimYaAhgJjWFPqCIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBhoCGAkD4XB1IgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAfGgIYCSeXu5EiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEI8MGgIYCaxsrvkiBCABIAIoARopCA0QARobCg0IDRAGGAEiAzAwMTABEPyIARoCGAkHxlvfIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARDHwgUaAhgJfBszYSIEIAEgAigBGigIEBABGhoKDQgQEAYYASIDMDAxMAEQ1woaAhgJbj9SJSIEIAEgAigBIgIIAQ==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/clientlib-hf-fontface-core/resources/fonts/HpSimplifiedLight.woff", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", ENDITEM, 
		LAST);

	lr_start_transaction("ClickOnBatchBulkConversion");

	web_add_cookie("s_ppv=pps-ces%257Csamsung_conversion%2C64%2C50%2C1014%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("conversion_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/config/us-en/conversion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIQCWChZDxYFvIJEgUN3Dt_LRIeCVnSsJONpYLrEgUNnyyLRBIFDZ8si0QSBQ2lkzYk?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	lr_think_time(5);

	web_custom_request("events_11", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=64&mdh=1586&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B2%2C178947%2C914%2C203%2C0%2C%22%22%2C38316%2C29331%5D%2C%5B2%2C179347%2C495%2C289%2C0%2C%22div%23tab1%3Ediv%3Aeq(0)%3Eapp-single-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh3%3Aeq(0)"
		"%22%2C15362%2C29647%5D%2C%5B6%2C179615%2C449%2C263%2C%22a%23samsungSerialNoShowBulkPageBtn%22%2C%22%22%5D%2C%5B2%2C179749%2C443%2C259%2C0%2C%22a%23samsungSerialNoShowBulkPageBtn%22%2C50638%2C52997%5D%2C%5B2%2C180150%2C438%2C256%2C0%2C%22%22%2C49591%2C47751%5D%2C%5B2%2C180551%2C433%2C247%2C0%2C%22%22%2C48543%2C32015%5D%2C%5B11%2C180781%2C%22input%23hpProductNum%22%5D%2C%5B3%2C180782%2C433%2C247%2C%22a%23samsungSerialNoShowBulkPageBtn%22%2C%22%22%5D%2C%5B12%2C180800%2C%22input%23hpProductNum%22%5D%2"
		"C%5B4%2C180986%2C433%2C247%2C%22a%23samsungSerialNoShowBulkPageBtn%22%2C%22%22%5D%2C%5B5%2C180995%2C433%2C247%2C%22a%23samsungSerialNoShowBulkPageBtn%22%2C%22%22%5D%2C%5B6%2C181386%2C433%2C247%2C%22a%23samsungSerialNoShowSinglePageBtn%22%2C%22%22%5D%2C%5B2%2C183337%2C457%2C237%2C0%2C%22a%23samsungSerialNoShowSinglePageBtn%22%2C63259%2C14529%5D%2C%5B7%2C183351%2C518%2C226%2C%22a%23samsungSerialNoShowSinglePageBtn%22%5D%2C%5B2%2C183737%2C759%2C414%2C0%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)"
		"%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%22%2C29913%2C14952%5D%2C%5B2%2C184137%2C772%2C412%2C0%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ep%3Aeq(0)%22%2C30630%2C64721%5D%2C%5B2%2C184538%2C1183%2C301%2C0%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh2%3Aeq(0)%22%2C53283%2C42045%5D%2C%5B2%2C184939%2C1458%2C164%2C0%2C%22div%23drop-down%3Ediv%3Aeq(0)%22%2C58924%2C60779%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	/* Click on choose file */

	lr_think_time(16);

	web_custom_request("events_12", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=64&mdh=1586&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B2%2C201571%2C1582%2C207%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C63935%2C3454%5D%2C%5B2%2C201971%2C1582%2C268%2C0%2C%22%22%2C63935%2C11869%5D%2C%5B2%2C202759%2C1434%2C268%2C0%2C%22%22%2C57954%2C11869%5D%2C%5B2%2C203538%2C1356%2C289%2C0%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh2%3Aeq(0)%22%2C62818%2C20791%5D%2C%5B2%2C203938%2C803%2C544%2C0%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Eform%3Aeq(0)"
		"%22%2C32338%2C4701%5D%2C%5B6%2C204069%2C729%2C567%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Eform%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C204259%2C718%2C570%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Eform%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%22%5D%2C%5B6%2C204260%2C718%2C570%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Eform%3Aeq(0)"
		"%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Espan%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C204338%2C709%2C572%2C0%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Eform%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Espan%3Aeq(0)%22%2C53469%2C15503%5D%2C%5B3%2C204610%2C705%2C572%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Eform%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Espan%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B2%2C204739%2C705%2C572%2C0%2C%22%22%2C49982%2C15503%5D%2C%5B4%2C204802%2C705%2C572%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Eform%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Espan%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C204805%2C705%2C572%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Eform%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Espan%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B5%2C204815%2C0%2C0%2C%22input%23uploadedFile%22%2C%22%22%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_think_time(29);

	web_custom_request("events_13", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=64&mdh=1586&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu=%5B%5B10%2C230415%2C%22input%23uploadedFile%22%5D%2C%5B7%2C231565%2C556%2C423%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Eform%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Espan%3Aeq(0)"
		"%22%5D%2C%5B2%2C231566%2C556%2C423%2C0%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%22%2C18724%2C20291%5D%2C%5B6%2C231763%2C360%2C563%2C%22input%23fileNameHolder%22%2C%22%22%5D%2C%5B7%2C231876%2C304%2C596%2C%22input%23fileNameHolder%22%5D%2C%5B2%2C231967%2C293%2C603%2C0%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Eform%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C12992%2C63978%5D%2C%5B2%2C232368%2C1052%2C384%2C0%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C46062%2C18408%5D%2C%5B2%2C232768%2C1354%2C320%2C0%2C%22%22%2C62708%2C7371%5D%2C%5B2%2C233169%2C1424%2C223%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)%22%2C57550%2C5661%5D%2C%5B2%2C233571%2C1427%2C219%2C0%2C%22%22%2C57671%2C5109%5D%2C%5B2%2C233971%2C1428%2C217%2C0%2C%22%22%2C57711%2C4834%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIQCWChZDxYFvIJEgUN3Dt_LQ==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	/* click on submit button */

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_submit_data("bulk", 
		"Action=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/samsungconversion/bulk?cc=us&lc=en", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=file", "Value=Bulk_SN_PN_Conversion.xlsx", "File=Yes", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	lr_think_time(6);

	web_custom_request("events_14", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=64&mdh=1586&pn=1&re=1&uu=1b2e2d2d-c17f-a751-ab02-ff84a9f00d01&sn=1&lv=1621332409&lhd=1621332409&hd=1621332409&pid=1255&str=6217&di=6686&dc=10753&fl=10756&eu="
		"%5B%5B2%2C244897%2C1572%2C243%2C0%2C%22%22%2C63531%2C8420%5D%2C%5B2%2C245297%2C1481%2C336%2C0%2C%22%22%2C59853%2C21251%5D%2C%5B2%2C246200%2C1410%2C266%2C0%2C%22div%23tab2%22%2C64982%2C4254%5D%2C%5B2%2C246866%2C1400%2C266%2C0%2C%22%22%2C64444%2C4254%5D%2C%5B2%2C247266%2C801%2C350%2C0%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C32228%2C37517%5D%2C%5B2%2C247667%2C465%2C527%2C0%2C%22div%23tab2%3Eapp-bulk-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C13709%2C43070%5D%2C%5B6%2C247817%2C383%2C569%2C%22input%23fileNameHolder%22%2C%22%22%5D%2C%5B7%2C247887%2C343%2C603%2C%22input%23fileNameHolder%22%5D%2C%5B6%2C248034%2C288%2C650%2C%22button%23bulkSubmitButton%22%2C%22%22%5D%2C%5B2%2C248068%2C279%2C656%2C0%2C%22button%23bulkSubmitButton%22%2C55133%2C63553%5D%2C%5B2%2C248469%2C258%2C643%2C0%2C%22%22%2C36673%2C37736%5D%2C%5B3%2C248635%2C258%2C643%2C%22button%23bulkSubmitButton%22%2C%22%22%5D%2C%5B4%2C248836%2C258%2C643%2C%22button%23bulkSubmitB"
		"utton%22%2C%22%22%5D%2C%5B5%2C248838%2C258%2C643%2C%22button%23bulkSubmitButton%22%2C%22%22%5D%2C%5B7%2C248971%2C258%2C643%2C%22button%23bulkSubmitButton%22%5D%2C%5B6%2C252264%2C258%2C643%2C%22div%23id_1%3Eul%3Aeq(0)%3Eli%3Aeq(7)%3Ea%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C256318%2C317%2C589%2C%22div%23id_1%3Eul%3Aeq(0)%3Eli%3Aeq(7)%3Ea%3Aeq(0)%22%5D%2C%5B2%2C256319%2C317%2C589%2C0%2C%22div%23id_1%3Eul%3Aeq(0)%3Eli%3Aeq(5)"
		"%22%2C33953%2C5457%5D%2C%5B2%2C256719%2C846%2C403%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Eapp-country-locator%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C35146%2C17559%5D%2C%5B2%2C257119%2C1323%2C239%2C0%2C%22div%23tab2%22%2C60305%2C83%5D%2C%5B2%2C257521%2C1406%2C221%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-conversion%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh1%3Aeq(0)"
		"%22%2C64767%2C54430%5D%2C%5B2%2C257921%2C1406%2C219%2C0%2C%22%22%2C64767%2C51641%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/conversion", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("ClickOnBatchBulkConversion",LR_AUTO);

	return 0;
}