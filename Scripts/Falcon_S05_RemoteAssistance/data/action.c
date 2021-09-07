Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=90", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_cookie("rxVisitor=16206341814607QIG03HBLPELC2STIJ60FEQ7D6H5CSMC; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtLatC=742; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1620635981491|1620634181483; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$34181427_872h1vHJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxVisitor=16206341814607QIG03HBLPELC2STIJ60FEQ7D6H5CSMC; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("dtLatC=742; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("rxvt=1620635981491|1620634181483; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("dtPC=1$34181427_872h1vHJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0e1; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("rxVisitor=16206341814607QIG03HBLPELC2STIJ60FEQ7D6H5CSMC; DOMAIN=web-customer-care-dev.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=web-customer-care-dev.hp.com");

	web_add_cookie("dtLatC=742; DOMAIN=web-customer-care-dev.hp.com");

	web_add_cookie("rxvt=1620635981491|1620634181483; DOMAIN=web-customer-care-dev.hp.com");

	web_add_cookie("dtPC=1$34181427_872h1vHJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0e1; DOMAIN=web-customer-care-dev.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=web-customer-care-dev.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22RemoteAssistance%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("rxVisitor=16206341814607QIG03HBLPELC2STIJ60FEQ7D6H5CSMC; DOMAIN=www.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=www.hp.com");

	web_add_cookie("dtLatC=742; DOMAIN=www.hp.com");

	web_add_cookie("rxvt=1620635981491|1620634181483; DOMAIN=www.hp.com");

	web_add_cookie("dtPC=1$34181427_872h1vHJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0e1; DOMAIN=www.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=www.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=www.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22RemoteAssistance%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=www.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18758%7CvVersion%7C4.4.0; DOMAIN=www.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1620634183792r0.8716843583332419; DOMAIN=www.hp.com");

	web_add_cookie("rxVisitor=16206341814607QIG03HBLPELC2STIJ60FEQ7D6H5CSMC; DOMAIN=met2.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=met2.hp.com");

	web_add_cookie("dtLatC=742; DOMAIN=met2.hp.com");

	web_add_cookie("rxvt=1620635981491|1620634181483; DOMAIN=met2.hp.com");

	web_add_cookie("dtPC=1$34181427_872h1vHJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0e1; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=met2.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22RemoteAssistance%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=met2.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1620634183792r0.8716843583332419; DOMAIN=met2.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=met2.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18758%7CMCMID%7C61511361850924733830835272769521751448%7CMCAAMLH-1621238984%7C9%7CMCAAMB-1621238984%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1620641384s%7CNONE%7CvVersion%7C4.4.0; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_id=cc0fb094-1ad2-ac10-e2ee-e502e2140acd.1620634184.1.1620634184.1620634184.1589380098.1654798184601.None.1; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=met2.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=met2.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=met2.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18758%7CMCMID%7C61511361850924733830835272769521751448%7CMCAAMLH-1621238984%7C9%7CMCAAMB-1621238984%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1620641384s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18765%7CvVersion%7C4.4.0; DOMAIN=met2.hp.com");

	web_add_cookie("rxvt=1620635986121|1620634181483; DOMAIN=met2.hp.com");

	web_add_cookie("dtPC=1$34181427_872h-vHJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0e1; DOMAIN=met2.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Mon+May+10+2021+08%3A09%3A46+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=b7fd2f8f-61a9-4917-8e71-f6c6acb46e8b&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=met2.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=met2.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=met2.hp.com");

	web_add_cookie("_rdt_uuid=1620634187198.2f717c9f-be72-4822-b6e7-1e4179c21f79; DOMAIN=met2.hp.com");

	web_add_cookie("_uetsid=15e87e90b16711eb9df74b80966735cb; DOMAIN=met2.hp.com");

	web_add_cookie("_uetvid=15eaa5e0b16711eb899bdf0bb7d0b27e; DOMAIN=met2.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=met2.hp.com");

	web_add_cookie("IR_5105=1620634187269%7C365159%7C1620634187269%7C%7C; DOMAIN=met2.hp.com");

	web_add_cookie("IR_PI=1615621b-b167-11eb-9a1c-42010a246c50%7C1620720587269; DOMAIN=met2.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppvl=%5B%5BB%5D%5D; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C59%2C59%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=met2.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=met2.hp.com");

	web_url("remoteconnection", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css", ENDITEM, 
		"Url=https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-regular-ttf.woff2", ENDITEM, 
		"Url=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/fonts/fontawesome-webfont.woff?v=4.1.0", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-bold-ttf.woff2", ENDITEM, 
		"Url=../wcc-assets/styles.cdc54c9d1a6d17da607e.css", ENDITEM, 
		"Url=../wcc-assets/fonts/hp_support_controls.woff2", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-light-ttf.woff2", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-bold-italic-ttf.woff2", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-regular-italic-ttf.woff2", ENDITEM, 
		"Url=../wcc-assets/fonts/latin-e-light-italic-ttf.woff2", ENDITEM, 
		"Url=../wcc-assets/runtime.9e457cc8784dad4b61c4.js", ENDITEM, 
		"Url=../wcc-assets/images/sprite-country-flags.png", ENDITEM, 
		"Url=https://t.contentsquare.net/uxa/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", ENDITEM, 
		"Url=../wcc-assets/polyfills.d301623517a574834b52.js", ENDITEM, 
		"Url=../wcc-assets/scripts.204dec66716e86a3ab29.js", ENDITEM, 
		"Url=../wcc-assets/main.ad82e25c31bf62fad499.js", ENDITEM, 
		"Url=../wcc-assets/pages-agent-remote-agent-remote-module-ngfactory.8f028b9578e5b6320110.js", ENDITEM, 
		"Url=../wcc-assets/content/dam/hp-wcc/libs/scripts/medallia.js", ENDITEM, 
		"Url=../wcc-assets/content/dam/hp-wcc/libs/scripts/third_party_lib.js", ENDITEM, 
		"Url=https://ct.contentsquare.net/ptc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", ENDITEM, 
		"Url=https://ct.contentsquare.net/pcc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js?DeploymentConfigName=Release_20210426&Version=5", ENDITEM, 
		"Url=../wcc-assets/images/icons.png", ENDITEM, 
		"Url=https://ct.contentsquare.net/www/latest-WR110.js", ENDITEM, 
		"Url=https://nebula-cdn.kampyle.com/wu/541318/onsite/embed.js", ENDITEM, 
		"Url=../wcc-assets/images/flags/flag_us.gif", ENDITEM, 
		"Url=https://cdn.optimizely.com/js/18956663993.js", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/caas/header-footer/us/en/default/latest.r?contentType=js&hide_search=true&show_shopping_cart=true&hide_country_selector=true", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/Bootstrap.js", ENDITEM, 
		"Url=https://web-customer-care-dev.hp.com/content/dam/hp-wcc/headless-assets/images/product-page-assets/English_get_it_from_MS.png", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hf-js.js", ENDITEM, 
		"Url=https://nexus.ensighten.com/error/e.gif?msg=%22TypeError%3A%20Cannot%20read%20property%20%27triggerPromiseWithTimeout%27%20of%20undefined%22%20error%20caught%20in%20Data%20Definition%20trigger%3A%20support_language_code%2C%20ID%3A9913.%20Using%20bottom%20of%20body%20trigger.&lnn=-1&fn=&cid=217&client=hp&publishPath=support_stage&rid=-1&did=-1&errorName=DataDefinitionException", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-PDHM2PK", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/serverComponent.php?r=652.7624766700011&namespace=Bootstrapper&staticJsPath=nexus.ensighten.com/hp/support_stage/code/&publishedOn=Tue%20May%2004%2007:24:28%20GMT%202021&ClientID=217&PageID=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection%3Fgdl_template%3DRemoteAssistance", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/code/8eb6e0d6c0d367083fff5b64b61a4441.js?conditionId0=422765", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/code/b9b0fc01116e2374d7e92bc6cb675f3e.js?conditionId0=4880989", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/code/3ce08cf7c65e410fd9cf20d6115a04e1.js?conditionId0=285030", ENDITEM, 
		"Url=https://www.hp.com/cma/ng/lib/exceptions/privacy-banner-test.js", ENDITEM, 
		"Url=https://met2.hp.com/id?d_visid_ver=4.4.0&d_fieldgroup=A&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&mid=61511361850924733830835272769521751448&ts=1620634184330", ENDITEM, 
		"Url=https://dpm.demdex.net/demconf.jpg?et:ibs%7cdata:dpid=411&dpuuid=YJjqSAAAAJxG-g3Y", ENDITEM, 
		"Url=https://cdn.cookielaw.org/scripttemplates/otSDKStub.js", ENDITEM, 
		"Url=https://nebula-cdn.kampyle.com/us/wu/541318/onsite/generic1620052275102.js", ENDITEM, 
		"Url=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e0a0fc2a-044d-41af-bd55-2f56dd8162df.json", ENDITEM, 
		"Url=https://nebula-cdn.kampyle.com/resources/onsite/js/cool-2.1.15.min.js", ENDITEM, 
		"Url=https://geolocation.onetrust.com/cookieconsentpub/v1/geo/location", ENDITEM, 
		"Url=https://cdn.cookielaw.org/scripttemplates/6.17.0/otBannerSdk.js", ENDITEM, 
		"Url=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e688e508-0267-4c09-a64b-7c03f7e759ce/en-ie.json", ENDITEM, 
		"Url=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjkzIFNhZmFyaS81MzcuMzYiLCJzZXNzaW9uX3BsYXRmb3JtIjogIldpbjMyIiwidHJhY2tlcl90eXBlIjogImphdmFzY3JpcHQiLCJ0cmFja2VyX3ZlcnNpb24iOiAiMi4xLjE1IiwiZXZlbnRfbmFtZSI6ICJjcmVhdGVTZXNzaW9uIiwiZXZlbnRfdGltZXN0YW1wX2Vwb2NoIjogIjE2MjA2MzQxODY1NTEiLCJldmVudF90aW1lem9uZV9vZmZzZXQiOiAwLCJ1c2VyX2lkIj"
		"ogIjE3OTU1NTMzMzM1NjAxLTBjNmRmYTczYmJjNWU3LWQ3ZTE3MzktMTI1ZjUxLTE3OTU1NTMzMzM2YzQxIiwidXJsIjogImh0dHBzOi8vcHBzc3VwcG9ydC1pdGdsbGJoNy5pbmMuaHAuY29tL3VzLWVuL3JlbW90ZWNvbm5lY3Rpb24iLCJmb3JtSWQiOiBudWxsLCJmb3JtVHJpZ2dlclR5cGUiOiBudWxsLCJrYW1weWxlX2RhdGEiOiB7IkxBU1RfSU5WSVRBVElPTl9WSUVXIjogIiIsIkRFQ0xJTkVEX0RBVEUiOiAiIiwia2FtcHlsZUludml0ZVByZXNlbnRlZCI6ICIiLCJrYW1weWxlX3VzZXJpZCI6ICI2YmRhLTQzOTUtMjkxMC1lYjU4LTVhMzgtOGRmOS1kMDU3LThiNTYiLCJrYW1weWxlVXNlclNlc3Npb24iOiAiIiwia2FtcHlsZVVzZXJQZXJjZW50aWxlIjog"
		"IiIsIlNVQk1JVFRFRF9EQVRFIjogIiIsImFkZGl0aW9uYWxEYXRhIjogeyJ1c2VyX3Nlc3Npb24iOiAiIiwiZGlyZWN0X25hdmlnYXRpb24iOiB0cnVlLCJkaWZmcmVudF9yZWZlcnJlciI6IHRydWV9fSwiY29va2llX3NpemUiOiAxNDU5LCJrYW1weWxlX3ZlcnNpb24iOiAiMi4zNy4xIiwib25zaXRlX3ZlcnNpb24iOiAiMi4zNy4xIiwiaGlzdG9yeV9sZW5ndGgiOiAxLCJldmVudF9sb2NhbF90aW1lc3RhbXAiOiAxNjIwNjM0MTg2NDQxLCJwb3NpdGlvbiI6IG51bGwsImlzVXNlcklkZW50aWZpZWQiOiBmYWxzZSwiZmVlZGJhY2tfY29ycmVsYXRpb25fdXVpZCI6IG51bGx9Cl19", ENDITEM, 
		"Url=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjkzIFNhZmFyaS81MzcuMzYiLCJzZXNzaW9uX3BsYXRmb3JtIjogIldpbjMyIiwidHJhY2tlcl90eXBlIjogImphdmFzY3JpcHQiLCJ0cmFja2VyX3ZlcnNpb24iOiAiMi4xLjE1IiwiZXZlbnRfbmFtZSI6ICJuZWJ1bGFfcGFnZV92aWV3IiwiZXZlbnRfdGltZXN0YW1wX2Vwb2NoIjogIjE2MjA2MzQxODY1NjMiLCJldmVudF90aW1lem9uZV9vZmZzZXQiOiAwLCJ1c2VyX2"
		"lkIjogIjE3OTU1NTMzMzM1NjAxLTBjNmRmYTczYmJjNWU3LWQ3ZTE3MzktMTI1ZjUxLTE3OTU1NTMzMzM2YzQxIiwiZW52aXJvbWVudCI6ICJwcm9kVXNPcmVnb24iLCJhY2NvdW50SWQiOiA1NDExMTQsInVybCI6ICJodHRwczovL3Bwc3N1cHBvcnQtaXRnbGxiaDcuaW5jLmhwLmNvbS91cy1lbi9yZW1vdGVjb25uZWN0aW9uIiwid2Vic2l0ZUlkIjogNTQxMzE4LCJmb3JtSWQiOiBudWxsLCJmb3JtVHJpZ2dlclR5cGUiOiBudWxsLCJrYW1weWxlX2RhdGEiOiB7IkxBU1RfSU5WSVRBVElPTl9WSUVXIjogIiIsIkRFQ0xJTkVEX0RBVEUiOiAiIiwia2FtcHlsZUludml0ZVByZXNlbnRlZCI6ICIiLCJrYW1weWxlX3VzZXJpZCI6ICI2YmRhLTQzOTUtMjkxMC1lYjU4"
		"LTVhMzgtOGRmOS1kMDU3LThiNTYiLCJrYW1weWxlVXNlclNlc3Npb24iOiAiMTYyMDYzNDE4NjQ0MSIsImthbXB5bGVVc2VyUGVyY2VudGlsZSI6ICIiLCJTVUJNSVRURURfREFURSI6ICIifSwiY29va2llX3NpemUiOiAxNTY4LCJrYW1weWxlX3ZlcnNpb24iOiAiMi4zNy4xIiwib25zaXRlX3ZlcnNpb24iOiAiMi4zNy4xIiwiaGlzdG9yeV9sZW5ndGgiOiAxLCJldmVudF9sb2NhbF90aW1lc3RhbXAiOiAxNjIwNjM0MTg2NDQ1LCJwb3NpdGlvbiI6IG51bGwsImlzVXNlcklkZW50aWZpZWQiOiBmYWxzZSwiZmVlZGJhY2tfY29ycmVsYXRpb25fdXVpZCI6IG51bGx9Cl19", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-MQML682", ENDITEM, 
		"Url=https://www.redditstatic.com/ads/pixel.js", ENDITEM, 
		"Url=https://d.impactradius-event.com/A353853-8e85-4786-9645-fac6b773cd071.js", ENDITEM, 
		"Url=https://bat.bing.com/bat.js", ENDITEM, 
		"Url=https://www.googleadservices.com/pagead/conversion_async.js", ENDITEM, 
		"Url=https://www.facebook.com/tr?id=1688171794549438&ev=PageView&noscript=1&gtmcb=75804990", ENDITEM, 
		"Url=https://px.owneriq.net/stas/s/7kxod6.js", ENDITEM, 
		"Url=https://s.yimg.com/wi/ytc.js", ENDITEM, 
		"Url=https://px.ads.linkedin.com/collect?pid=40922&fmt=gif&cookiesTest=true", ENDITEM, 
		"Url=https://ct.pinterest.com/v3/?event=init&tid=2613604734453&noscript=1&gtmcb=665822192", ENDITEM, 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/854101013/?random=1620634187331&cv=9&fst=1620634187331&num=1&guid=ON&resp=GooglemKTybQhCsO&eid=376635470%2C2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&tiba=Remote%20Assistance%20for%20our%20valued%20customers%20%7C%20HP%C2%AE%20Support&hn=www.googleadservices.com&"
		"async=1&rfmt=3&fmt=4", ENDITEM, 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/687393200/?random=1620634187341&cv=9&fst=1620634187341&num=1&userId=null&guid=ON&resp=GooglemKTybQhCsO&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&tiba=Remote%20Assistance%20for%20our%20valued%20customers%20%7C%20HP%C2%AE%20Support&hn=www.googleadservices.com&"
		"async=1&rfmt=3&fmt=4", ENDITEM, 
		"Url=https://px.owneriq.net/j/?ref=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection&pt=7kxod6&t=f%7C%22Remote%2520Assistance%2520for%2520our%2520valued%2520customers%2520%257C%2520HP%25C2%25AE%2520Support%22&s=6ka7", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/849111477/?guid=ON&script=0&userId=null&is_vtc=1&random=3849164933", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/783157761/?guid=ON&script=0&userId=null&is_vtc=1&random=832701532", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/854101013/?random=1620634187331&cv=9&fst=1620633600000&num=1&guid=ON&eid=376635470%2C2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&tiba=Remote%20Assistance%20for%20our%20valued%20customers%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=15509356&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/687393200/?random=1620634187341&cv=9&fst=1620633600000&num=1&userId=null&guid=ON&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&tiba=Remote%20Assistance%20for%20our%20valued%20customers%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=2047867921&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", ENDITEM, 
		"Url=https://www.ojrq.net/p/?return=&cid=5105&tpsync=no", ENDITEM, 
		"Url=https://sp.analytics.yahoo.com/sp.pl?a=10000&d=Mon%2C%2010%20May%202021%2008%3A09%3A47%20GMT&n=0&b=Remote%20Assistance%20for%20our%20valued%20customers%20%7C%20HP%C2%AE%20Support&.yp=10044594&f=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&enc=UTF-8&tagmgr=gtm%2Censighten", ENDITEM, 
		"Url=https://met2.hp.com/b/ss/hphqglobal,hphq-ces-global-stage-temp,hphq-ces-na-stage-temp/1/JS-2.15.0/s83348636339223?AQB=1&ndh=1&pf=1&t=10%2F4%2F2021%208%3A9%3A48%201%200&mid=61511361850924733830835272769521751448&aamlh=9&ce=UTF-8&ns=hpcorp&pageName=D%3Dv55&g=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&ch=pps&server=ppssupport-itgllbh7.inc.hp.com&events=event46%2Cevent45%3D93%2Cevent11&aamb=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1=us-en&v2=us&c3="
		"RemoteAssistance&v3=en&c7=us&c8=en&c9=cs%3Aconsumer.home&c12=R11839&v12=Anonymous&c15=36&c26=D%3Dv12&c31=null&v32=null&v33=null&v34=null&v35=null&c43=null&v46=D%3Dc3&c49=D%3Dg&c50=D%3Dg&c51=hpexpnontridion%3Aihfcaas.5.r&c55=null&v55=pps-ces%7Cremoteassistance&c56=null&c57=null&c58=null&c59=null&c61=0001%3A0001%3A00&c63=Initial&c66=61511361850924733830835272769521751448&v90=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&v92=ens%7Csupport_stage%7C04-May-2021%2007%3A24%3A28&"
		"v93=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&v94=ppssupport-itgllbh7.inc.hp.com&v95=ppssupport-itgllbh7.inc.hp.com%3AUnknown%7CUnknown%7CAMS%7Cus%3Aen%7CUSD&v99=9.3&s=1463x823&c=24&j=1.6&v=N&k=Y&bw=1626&bh=792&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&AQE=1", ENDITEM, 
		"Url=https://adservice.google.com/ddm/fls/p/dc_pre=CIbew-jUvvACFekGwQodZmYEKQ;src=9848580;type=irid;cat=irid;ord=.1620634187269;~oref=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", ENDITEM, 
		"Url=https://tag.apxlv.com/tag/partner/222?c_i=2&jid=170767f6b16711ebae3982700eebd4b0&ld=2&pixel_mode=pixel", ENDITEM, 
		LAST);

	web_add_cookie("HSID=A5mNZHHHiw2yVbkbU; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=ArZgm8cnWuoCed0Ot; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=FXohWvkNYc2G3x-e/A00Nv-TxHoOp_o-L-; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=yvPbVmHMF34q78P_/Ae-dIBPfbbUlp9PW9; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=yvPbVmHMF34q78P_/Ae-dIBPfbbUlp9PW9; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI42m5ANsl1twl8vxEt7z8irNsM_5_nTP8XzVj5I1y9GpF1VxHtNDwwOjwfkVEGGrqMubs8mVLl9IUQO3s363PFVDyyPjK_sM9HpWYoyj2ZKrrZVmhViGb9cXFnc9nNsn9wBFDSj4cG74lzWIO8vtZMrDyGukA; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:0u4JaMbLo_RNFoQ7c4eB__vuMvU-U6ACBct5vX1mGTBCBp18B29Y5LN7UcjEjo_AVKNGCeq6cZZDEWq4pagv7QSY8cYcEQ:7784YQA2NrYjhSB5; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIgZIB; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=s.IN|s.youtube:9AcSaxy1iX0hCCG-7GXQNHueHqmjCXRgDfVRBVVIQY1ZDx7UVZ6Brlx9xnd_6hHJWsRo-Q.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=s.IN|s.youtube:9AcSaxy1iX0hCCG-7GXQNHueHqmjCXRgDfVRBVVIQY1ZDx7U0zjxBgWw5c5VGxl7OBXOHw.; DOMAIN=accounts.google.com");

	web_add_cookie("SID=9AcSa-FXb_WBQB4CXODQhwg8y3EA1tZaXy25h2yC4zxr25aZUl4dx2pzFHkQyJNEC_8AJg.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=9AcSa-FXb_WBQB4CXODQhwg8y3EA1tZaXy25h2yC4zxr25aZEGHObWjX7dJSAyURxrnwGQ.; DOMAIN=accounts.google.com");

	web_add_cookie("NID=215=VMbPnw2O7EHsmXFONkBLaxjmkckqfoGYKS2hqF6FWGBVQOOskwUDbitmky9yCvmd3TKsaVX98EoybWuO6dRvEd5Hd2hiMW06v5f19Dudtf5erU0PjsaQkJWfQzm-U1hp44wNZz6INLLbc3-RrwDKPndCSjIH71qeG_2IOSnYfmZDKQ2Lo0kgZbb7anj8QTB9i8ocz9qld-lh5pph6W6uqt9toFZKCFAc62eO07DnC7b78YmCE47A; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2021-05-07-06; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AJi4QfF3dvaa0rftfk3Wrgy7mgc7_ymcBWHy1mTg8nVFdw5sG16UDDvMPsWcvU7VQENypjyAMA; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=AJi4QfENqlWYFb2amtuFkpXIDQHxiGPBsmpYiRGHG5Z5MTa1B8Xf6OO7HgzPXQpuAmReDfNg9Q; DOMAIN=accounts.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0fbPhsR97e20YCgYIARAAGA8SNwF-L9IrZ0AuzQbzB4VTR6_8TtELj6y0AVfrgbzaEIZT7HF_QtoaBlCDRkIJ1paQUq0YcTLZoTM", 
		LAST);

	web_custom_request("issuetoken", 
		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"Body=force=false&response_type=token&scope=https://www.googleapis.com/auth/calendar.readonly+https://www.googleapis.com/auth/hangouts+https://www.googleapis.com/auth/hangouts.readonly+https://www.googleapis.com/auth/meetings+https://www.googleapis.com/auth/userinfo.email&enable_granular_permissions=false&client_id=919648714761-55j965o0km033psv3i9qls5mo3qtdrb0.apps.googleusercontent.com&origin=pkedcjkdefgpdelpbcmbmeomcjbeemfm&lib_ver=90.0.4430.93&release_channel=stable&device_id="
		"fbc15c75-4e8c-4844-a83c-704d67e96013&device_type=chrome", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("xdframe-single-domain-1.1.0.html", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("agentRemote", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/termbase/us-en/agentRemote", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_url("region", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);

	web_url("agentRemote_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/config/us-en/agentRemote", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	web_url("country-selector.json", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/data/country-selector.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t68.inf", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"RemoteAssistance\",\"path\":\"/remoteconnection\",\"seriesoid\":0,\"modeloid\":0}", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChNDaHJvbWUvOTAuMC40NDMwLjkzEhAJpBxSC_n2-AMSBQ2Q-q9j?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChNDaHJvbWUvOTAuMC40NDMwLjkzEhcJnBS-qhytOokSBQ2fLItEEgUNnyyLRA==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.4.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=5E34123F5245B2CD0A490D45%40AdobeOrg&d_nsid=0&ts=1620634183641", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		EXTRARES, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/clientlib-hf-fontface-core/resources/fonts/HPSimplifiedRegular.woff", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/clientlib-hf-fontface-core/resources/fonts/HpSimplifiedLight.woff", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/footericons.woff", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", ENDITEM, 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("auth", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&1510145498&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"cc0fb094-1ad2-ac10-e2ee-e502e2140acd\",\"sessionNumber\":1,\"pageNumber\":1},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("pageview", 
		"URL=https://c.contentsquare.net/pageview?pid=1255&uu=cc0fb094-1ad2-ac10-e2ee-e502e2140acd&sn=1&lv=1620634184&lhd=1620634184&hd=1620634184&pn=1&re=1&dw=1621&dh=1331&ww=1626&wh=792&sw=1463&sh=823&dr=&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&uc=1&la=en-US&cvars=%7B%221%22%3A%5B%22Template%22%2C%22RemoteAssistance%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&cvarp="
		"%7B%221%22%3A%5B%22Template%22%2C%22RemoteAssistance%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&v=10.8.6&r=474708", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_url("pageEvent", 
		"URL=https://c.contentsquare.net/pageEvent?value=MIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA&isETR=false&v=10.8.6&pid=1255&uu=cc0fb094-1ad2-ac10-e2ee-e502e2140acd&sn=1&pn=1&r=915681", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t75.inf", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"18956663993\",\"revision\":\"773\",\"visitors\":[{\"visitor_id\":\"oeu1620634183792r0.8716843583332419\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t"
		"\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1620634183815}],\"snapshots\":[{\"activationTimestamp\":1620634183791,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"39df3e24-ba69-4c79-80d7-d27c46dc0559\",\"t\":1620634183815}]}]}]}", 
		LAST);

	web_url("otCenterRounded.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/otCenterRounded.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_url("otPcTab.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/v2/otPcTab.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChNDaHJvbWUvOTAuMC40NDMwLjkzEh4JWdKwk42lgusSBQ2fLItEEgUNnyyLRBIFDaWTNiQ=?alt=proto", "Referer=", ENDITEM, 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("0", 
		"URL=https://bat.bing.com/action/0?ti=13015798&tm=gtm001&Ver=2&mid=66a7684d-f446-4535-a4a6-106c74c85bde&sid=15e87e90b16711eb9df74b80966735cb&vid=15eaa5e0b16711eb899bdf0bb7d0b27e&vids=1&pi=1200101525&lg=en-US&sw=1463&sh=823&sc=24&tl=Remote%20Assistance%20for%20our%20valued%20customers%20%7C%20HP%C2%AE%20Support&p=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&r=&lt=7579&evt=pageLoad&msclkid=N&sv=1&rn=156709", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("rxVisitor=16206341814607QIG03HBLPELC2STIJ60FEQ7D6H5CSMC; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtLatC=742; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22RemoteAssistance%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1620634183792r0.8716843583332419; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_id=cc0fb094-1ad2-ac10-e2ee-e502e2140acd.1620634184.1.1620634184.1620634184.1589380098.1654798184601.None.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18758%7CMCMID%7C61511361850924733830835272769521751448%7CMCAAMLH-1621238984%7C9%7CMCAAMB-1621238984%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1620641384s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18765%7CvVersion%7C4.4.0; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("rxvt=1620635986121|1620634181483; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtPC=1$34181427_872h-vHJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0e1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Mon+May+10+2021+08%3A09%3A46+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=b7fd2f8f-61a9-4917-8e71-f6c6acb46e8b&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_rdt_uuid=1620634187198.2f717c9f-be72-4822-b6e7-1e4179c21f79; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_uetsid=15e87e90b16711eb9df74b80966735cb; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_uetvid=15eaa5e0b16711eb899bdf0bb7d0b27e; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_5105=1620634187269%7C365159%7C1620634187269%7C%7C; DOMAIN=linkto.ext.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("5105", 
		"URL=https://linkto.ext.hp.com/xc/365159/342132/5105", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=srcref=&landurl=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&&_ir=U364%7C%7C1620634187269", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("10044594.json", 
		"URL=https://s.yimg.com/wi/config/10044594.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("eps", 
		"URL=https://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6739205871752990971J&l=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("ep", 
		"URL=https://px.owneriq.net/ep?sid%5B%5D=14574697177&sid%5B%5D=14574697182&sid%5B%5D=14574697187&sid%5B%5D=8460259172&sid%5B%5D=8460259192&pt=7kxod6&uid=Q6739205871752990971J&jcs=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://idsync.rlcdn.com/379208.gif?partner_uid=Q6739205871752990971J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://dpm.demdex.net/demconf.jpg?et:ibs%7cdata:dpid=53196&dpuuid=Q6739205871752990971J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://tapestry.tapad.com/tapestry/1?ta_partner_id=916&ta_partner_did=Q6739205871752990971J&ta_format=png", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://us-u.openx.net/w/1.0/sd?cc=1&id=537073059&val=Q6739205871752990971J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://simage2.pubmatic.com/AdServer/Pug?vcode=bz0yJnR5cGU9MSZjb2RlPTI2NDYmdGw9MTI5NjAw&piggybackCookie=Q6739205871752990971J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=/cm?id=&esi=1&google_error=3", "Referer=https://px.owneriq.net/", ENDITEM, 
		LAST);

	web_url("dvar", 
		"URL=https://c.contentsquare.net/dvar?v=10.8.6&pid=1255&uu=cc0fb094-1ad2-ac10-e2ee-e502e2140acd&sn=1&pn=1&dv=N4IgpgaghgTgjAJhALhAQQHYHsME8C2WArgM4gA0IADjFlQMwogBKYhALmGiSQJYnsoGAMZgK1WlThNSAWjAYQAXyAA%3D&r=521445", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dsum.casalemedia.com/rum?cm_dsp_id=31&external_user_id=Q6739205871752990971J&C=1", "Referer=https://px.owneriq.net/", ENDITEM, 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0fbPhsR97e20YCgYIARAAGA8SNwF-L9IrZ0AuzQbzB4VTR6_8TtELj6y0AVfrgbzaEIZT7HF_QtoaBlCDRkIJ1paQUq0YcTLZoTM&scope=https://www.googleapis.com/auth/chromesync", 
		EXTRARES, 
		"Url=https://ib.adnxs.com/bounce?%2Fsetuid%3Fentity%3D13%26code%3DQ6739205871752990971J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://pixel.rubiconproject.com/tap.php?v=11581&nid=2395&put=Q6739205871752990971J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://px.owneriq.net/fr/epx.gif", "Referer=https://px.owneriq.net/", ENDITEM, 
		LAST);

	web_add_header("X-Client-Data", 
		"CJO2yQEIo7bJAQjBtskBCKmdygEI+MfKAQjikssBCOOcywEIqJ3LAQikoMsBCN3yywE=");

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=xHQLU%2FXyytkV%2F%2Brd2yRc0Q%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t87.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x15savithatc03@gmail.com\\x10Z\\x18\\x02*8\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122!\\x08\\x81\\xF5\\x02\\x12\\x1B \\x00H\\x9D\\x8C\\xC0\\xAA\\x95/p\\x9D\\x8C\\xC0\\xAA\\x95/\\x88\\x01\\xCF\\xEF\\xBB\\xD7\\xBE\\xCF\\xAD\\xB4\\x01@\\x00H\\x07\\xC0>\\x01:%z00000161-080e-e08f-0000-00005a604558R\\x12\n\\x02\\x08\t\n\\x02\\x08\n\n\\x02\\x08\\x05\\x10\\x01\\x18\\x00 \\x00Z\\x7F\n}\\x12{Chrome WIN 90.0.4430.93 (4df112c29cfe9a2c69b14195c0275faed4e997a7-refs/"
		"branch-heads/4430@{#1348}) channel(stable),gzip(gfe)b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00r\\x0BcNHqOHWB-w8", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_8.pb", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22RemoteAssistance%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1620634183792r0.8716843583332419; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=cc0fb094-1ad2-ac10-e2ee-e502e2140acd.1620634184.1.1620634184.1620634184.1589380098.1654798184601.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18758%7CMCMID%7C61511361850924733830835272769521751448%7CMCAAMLH-1621238984%7C9%7CMCAAMB-1621238984%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1620641384s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18765%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1620635986121|1620634181483; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$34181427_872h-vHJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyle_userid=6bda-4395-2910-eb58-5a38-8df9-d057-8b56; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1620634186441; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleSessionPageCounter=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("cd_user_id=17955533335601-0c6dfa73bbc5e7-d7e1739-125f51-17955533336c41; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv1_prefs=null; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Mon+May+10+2021+08%3A09%3A46+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=b7fd2f8f-61a9-4917-8e71-f6c6acb46e8b&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_rdt_uuid=1620634187198.2f717c9f-be72-4822-b6e7-1e4179c21f79; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetsid=15e87e90b16711eb9df74b80966735cb; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetvid=15eaa5e0b16711eb899bdf0bb7d0b27e; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_5105=1620634187269%7C365159%7C1620634187269%7C%7C; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_PI=1615621b-b167-11eb-9a1c-42010a246c50%7C1620720587269; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=%5B%5BB%5D%5D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C59%2C59%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_6AEC1986185DBD3D93BC6A33719381E6_perc_100000_ol_0_mul_1&svrid=1&flavor=post&visitID=HJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0&modifiedSince=1620621559276&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&app=ea7c4b59f27d43eb&crc=1827231488&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1620634178547%7C1620634186126%7Cdn%7C1448%2C2%7C2%7C_onload_%7C_load_%7C-%7C1620634186122%7C1620634186126%7Cdn%7C1448$PV=1$rId=RID_1238039415$rpId=-1332426244$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection$title=Remote%20Assistance%20for%20our%20valued%20customers%20%7C%20HP%C2%AE%20Support$latC=742$app=ea7c4b59f27d43eb$visitID=HJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0$vs=2$fId=34181427_872$v=10215210506134512$time=1620634188632", 
		LAST);

	web_add_cookie("dtCookie=v_4_srv_1_sn_6AEC1986185DBD3D93BC6A33719381E6_perc_100000_ol_0_mul_1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_url("contact-hp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/contact-hp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("events_2", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=60&mdh=792&pn=1&re=1&uu=cc0fb094-1ad2-ac10-e2ee-e502e2140acd&sn=1&lv=1620634184&lhd=1620634184&hd=1620634184&pid=1255&str=836&di=1507&dc=6088&fl=6095&eu=%5B%5B0%2C8%2C1626%2C792%5D%2C%5B2%2C4983%2C1132%2C283%2C0%2C%22div%23onetrust-button-group-parent%22%2C58507%2C57794%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_6AEC1986185DBD3D93BC6A33719381E6_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=HJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0&modifiedSince=1620621559276&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&app=ea7c4b59f27d43eb&crc=1009428586&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1620634178547%7C1620634186893%7Cdn%7C1448%2C2%7C3%7C_event_%7C1620634178547%7C_vc_%7CV%7C8346%5Epc%7CVCD%7C6656%7CVCDS%7C2%7CVCS%7C7725%7CVCO%7C10168%7CVCI%7C0%7CVE%7C1018%5Ep176%5Ep450%5Eps%5Esp%3Afirst-child%3Ea%3Anth-child%282%29%7CS%7C4404%2C2%7C4%7C_event_%7C1620634178547%7C_wv_%7ClcpE%7CP%7ClcpSel%7Cp.intro-heading%7ClcpS%7C34514%7ClcpT%7C4495%7ClcpU%7C-%7Cfcp%7C4242%7Cfp%7C4003%7Ccls%7C0.0711%7Clt%7C2030%2C2%7C2%7C_onload_%7C_load_%7C-%7C1620634186122%7C1620634"
		"186126%7Cdn%7C1448%2C1%7C5%7C_event_%7C1620634178547%7C_view_$rId=RID_1238039415$rpId=-1332426244$domR=1620634186119$tvn=%2Fus-en%2Fremoteconnection$tvt=1620634178547$w=1626$h=792$sw=1463$sh=823$nt=a0b1620634178547e94f965g967h967i1484j986k1484l2303m2305o2991p3944q3952r7573s7575t7579u2990v1870w6044M-1332426244$ni=4g|4.25$fd=j2.2.4^sg8.2.3^sb6-10^scontentsquare$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection$title="
		"Remote%20Assistance%20for%20our%20valued%20customers%20%7C%20HP%C2%AE%20Support$latC=742$app=ea7c4b59f27d43eb$visitID=HJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0$vs=2$fId=34181427_872$v=10215210506134512$vID=16206341814607QIG03HBLPELC2STIJ60FEQ7D6H5CSMC$nV=1$nVAT=1$time=1620634192944", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-90.0.4430.93");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:354222555&cup2hreq=7dc507c5d21081f58a1a72d165140b02a4a31350a62d8dd56dcfe692b883be89", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{24a5c52b-7265-4e36-ae8f-f26a1d1100df}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{8d37d054-15e8-4d4c-a34b-527c2287c02f}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{96e0b55f-7486-4f40-98dd-55680555cc59}\",\"rd\":5243},\"updatecheck\":{"
		"},\"version\":\"14.5\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{ae0d4e3a-4a6f-410c-92be-ffed7c047b42}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\""
		"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{79039dab-3ab9-464f-808c-f15bc70d13e0}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.df7a7c5ea41023e17cc38e18f1b5f12a73c1552ac6570f0740b4f37f0bd72a7f\"}]},\"ping\":{\"ping_freshness\":\"{a84eb8d9-a65a-486f-a47a-5c911ec9bb21}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"1.28.0"
		"\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{1c23ea29-909e-4f8d-af23-0f0518829d10}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.3\"}]},\"ping\""
		":{\"ping_freshness\":\"{457dacb1-c56a-4695-a81a-0fa27ecf7aef}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.05bc4a6e12744e61576e531c7602778bf2316598236e1bb2b87a664fd2aee8c5\"}]},\"ping\":{\"ping_freshness\":\"{24f24d33-2796-44ce-a635-8e051f0d2103}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"9021.222.0.0\"}],\"arch\":\""
		"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.93\",\"protocol\":\"3.1\",\"requestid\":\"{c80d24ef-9b70-4907-866c-5af798641806}\",\"sessionid\":\"{357bf149-e250-4a3b-b251-f7bffbee3122}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\""
		"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.93\"}}", 
		LAST);

	web_add_cookie("dtLatC=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=pps-ces%7Cremoteassistance; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-05-10T08:09:54.397Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Mon+May+10+2021+08%3A09%3A54+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=b7fd2f8f-61a9-4917-8e71-f6c6acb46e8b&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C59%2C59%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=pps-ces%257Cremoteassistance%2C59%2C59%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_6AEC1986185DBD3D93BC6A33719381E6_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=HJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0&modifiedSince=1620621559276&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&app=ea7c4b59f27d43eb&crc=1305763308&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1620634194096%7C_wv_%7CAAI%7C1%7CfIS%7C15547%7CfID%7C2$rId=RID_1238039415$rpId=-1332426244$domR=1620634186119$tvn=%2Fus-en%2Fremoteconnection$tvt=1620634178547$ni=4g|4.25$fd=b51-100$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection$title=Remote%20Assistance%20for%20our%20valued%20customers%20%7C%20HP%C2%AE%20Support$latC=1$app=ea7c4b59f27d43eb$visitID=HJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0$vs=2$fId=34181427_872$v=10215210506134512$vID="
		"16206341814607QIG03HBLPELC2STIJ60FEQ7D6H5CSMC$nV=1$time=1620634194953", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("consentreceipts", 
		"URL=https://privacyportaluat.onetrust.com/request/v1/consentreceipts", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_6AEC1986185DBD3D93BC6A33719381E6_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=HJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0&modifiedSince=1620621559276&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&app=ea7c4b59f27d43eb&crc=2023287293&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fus-en%2Fremoteconnection$tvt=1620634178547$ni=4g|4.25$3p="
		"1-1620634178547%3Bmaxcdn.bootstrapcdn.com%7C8%7C1%7C0%7C0%7C0%7C2331_2631%7C300%7C300%7C300%3Bnetdna.bootstrapcdn.com%7Co%7C1%7C0%7C0%7C0%7C2331_2582%7C251%7C251%7C251%7C1%7C0%7C0%7C0%7C2332_2775%7C443%7C443%7C443%3Bppssupport-itgllbh7.inc.hp.com%7Cu%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C2332_3264_4185_4840%7C530%7C207%7C931%7C7%7C0%7C0%7C0%7C0%7C7%7C%7C0%7C0%7C0%7C2334_3429_3943_4145_4161_4405%7C640%7C202%7C1096%7C1%7C0%7C0%7C0%7C2334_2768%7C435%7C435%7C435%7C13%7C0%7C0%7C0%7C2331_3026_4172_10"
		"514%7C866%7C227%7C6341%3Bcdnjs.cloudflare.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C2333_2908%7C575%7C575%7C575%3Bssl.www8.hp.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C2333_2804%7C470%7C470%7C470%3Bt.contentsquare.net%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C2991_3224%7C233%7C233%7C233%3Bcsxd.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C3269_3420%7C152%7C152%7C152%3Bct.contentsquare.net%7C4%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C3977_4408_4424_4639%7C280%7C196%7C430%3Bweb-customer-c"
		"are-dev.hp.com%7C2%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C4417_4976%7C559%7C559%7C559%3Bnebula-cdn.kampyle.com%7C4%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C4418_4653_7576_7737_7808_7828%7C139%7C20%7C235%3Bnexus.ensighten.com%7Cm%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C5116_5262%7C145%7C145%7C145%7C4%7C0%7C0%7C0%7C0%7C4%7C%7C0%7C0%7C0%7C4422_4982_5457_5649%7C250%7C100%7C559%7C1%7C0%7C0%7C0%7C5332_5391%7C59%7C59%7C59%3Bcdn.optimizely.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C4423_4982%7C55"
		"9%7C559%7C559%3Bitg-live.www8.hp.com%7Cs%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C5026_5106%7C80%7C80%7C80%7C2%7C0%7C0%7C0%7C4999_5040%7C30%7C18%7C41%7C6%7C0%7C0%7C0%7C4423_4980_5312_5588_5624_6068%7C403%7C274%7C557%3Bwww.googletagmanager.com%7C4%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C5058_5400_8442_8551%7C226%7C109%7C342%3Bdpm.demdex.net%7Cg%7C1%7C0%7C0%7C0%7C5095_5512%7C417%7C417%7C417%3Ba2129670914.cdn.optimizely.com%7Cg%7C1%7C0%7C0%7C0%7C5294_5443%7C149%7C149%7C149%3Bwww.hp.com%7C4%7C1%7C0%7"
		"C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C5616_6049%7C433%7C433%7C433%3Bhp.demdex.net%7Cg%7C1%7C0%7C0%7C0%7C5779_6412%7C632%7C632%7C632%3Bmet2.hp.com%7Cg%7C1%7C0%7C0%7C0%7C5784_6412%7C628%7C628%7C628%3Bwr-us.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C6077_6490%7C413%7C413%7C413%3Bc.contentsquare.net%7Cg%7C2%7C0%7C0%7C0%7C6077_7560%7C1479%7C1477%7C1481%3Bcdn.cookielaw.org%7Ck%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C6325_7559_8000_8109%7C671%7C108%7C1234%7C4%7C0%7C0%7C0%7C7569_7611_8116_8192_8239_8289%7C48%7C23"
		"%7C76%3Blogx.optimizely.com%7Cg%7C1%7C0%7C0%7C0%7C6328_7564%7C1236%7C1236%7C1236%3Bcm.everesttech.net%7Cg%7C1%7C0%7C0%7C0%7C6434_6508%7C74%7C74%7C74%3Bgeolocation.onetrust.com%7Cg%7C1%7C0%7C0%7C0%7C7647_7836%7C189%7C189%7C189%3Budc-neb.kampyle.com%7C2%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C8029_8228%7C196%7C192%7C199%3Bd.impactradius-event.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8370_8620%7C249%7C249%7C249%3Bbat.bing.com%7Ck%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8371_8627%7C256%7C256"
		"%7C256%7C1%7C1%7C0%7C0%7C8673_8769%7C60%7C45%7C75%3Bwww.redditstatic.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8371_8571%7C200%7C200%7C200%3Bwww.googleadservices.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8372_8673%7C301%7C301%7C301%3Bs.yimg.com%7Ck%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8442_8754%7C312%7C312%7C312%7C1%7C0%7C0%7C0%7C8943_9154%7C211%7C211%7C211%3Bpx.owneriq.net%7Ck%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8443_8718%7C275%7C275%7C275%7C3%7C0%7C0%7C0%7C8939_9251%7C178%"
		"7C83%7C237%3Bwww.facebook.com%7Cg%7C1%7C0%7C0%7C0%7C8444_8712%7C268%7C268%7C268%3Bct.pinterest.com%7Cg%7C1%7C0%7C0%7C0%7C8444_8919%7C475%7C475%7C475%3Bgoogleads.g.doubleclick.net%7Cg%7C4%7C0%7C0%7C0%7C8444_9255%7C534%7C256%7C811%3Balb.reddit.com%7C2%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8659_8927%7C268%7C268%7C268%3Bpx.ads.linkedin.com%7Cg%7C1%7C0%7C0%7C0%7C8707_8754%7C47%7C47%7C47%3Blinkto.ext.hp.com%7Cg%7C1%7C0%7C0%7C0%7C8770_9062%7C293%7C293%7C293%3Bad.doubleclick.net%7Cg%7C1%7C0%7C0%7C0%7C8"
		"770_9926%7C1156%7C1156%7C1156%3Bwww.ojrq.net%7Cg%7C1%7C0%7C0%7C0%7C9072_9529%7C457%7C457%7C457%3Bwww.google.com%7Cg%7C2%7C0%7C0%7C0%7C9073_9529%7C319%7C182%7C455%3Bsp.analytics.yahoo.com%7Cg%7C1%7C0%7C0%7C0%7C9166_9724%7C558%7C558%7C558%3Bidsync.rlcdn.com%7C2%7C0%7C1%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C10183_10183%7C0%7C0%7C0$rt="
		"1-1620634178547%3Bhttps%3A%2F%2Fmaxcdn.bootstrapcdn.com%2Fbootstrap%2F4.0.0%2Fcss%2Fbootstrap.min.css%7Cb2331e0f1g11h11i189j21k194l230m300u19827v18527w144877K1I11%7Chttps%3A%2F%2Fnetdna.bootstrapcdn.com%2Ffont-awesome%2F4.1.0%2Fcss%2Ffont-awesome.min.css%7Cb2331e0f3g23h23i171j32k189l216m251u5679v4403w20766K1I11%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-regular-ttf.woff2%7Cb2331e0f0g0h0i0j0k33l296m317u35240v34348w34348I11M321172450%7Chttps%3A%2F%2Fppssupport-itgl"
		"lbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-bold-ttf.woff2%7Cb2331e0f33g33h33i128j47k129l394m420u34053v33160w33160I11M2005782154%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-light-ttf.woff2%7Cb2331e0f61g61h61i169j76k188l442m446u43213v42320w42320I11M1693541362%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-bold-italic-ttf.woff2%7Cb2332e0f76g76h76i188j93k191l443m446u40032v39140w39140I11M-96676281%7Chttps%3A%2F%2Fppssupport-itgllbh7.i"
		"nc.hp.com%2Fwcc-assets%2Ffonts%2Fhp_5Fsupport_5Fcontrols.woff2%7Cb2332e0f94g94h94i197j110k198l418m437u9331v8440w8440I11M306711571%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-regular-italic-ttf.woff2%7Cb2332e0f0g0h0i0j0k323l560m570u41037v40144w40144I11M1204012024%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-light-italic-ttf.woff2%7Cb2332e0f0g0h0i0j0k437l692m693u42580v41688w41688I11M197796616%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.h"
		"p.com%2Fwcc-assets%2Fimages%2Fsprite-country-flags.png%7Cb2332e0f0g0h0i0j0k626l866m931u108942v108100w108100I11M-1263725604%7Chttps%3A%2F%2Fnetdna.bootstrapcdn.com%2Ffont-awesome%2F4.1.0%2Ffonts%2Ffontawesome-webfont.woff%3Fv%3D4.1.0%7Cb2332e0f0g0h0i0j0k261l310m443u85027v83760w83760I11%7Chttps%3A%2F%2Fcdnjs.cloudflare.com%2Fajax%2Flibs%2Fjquery%2F2.2.4%2Fjquery.min.js%7Cb2333e0f124g147h147i452j166k452l485m575u28089v26909w85578K1I12%7Chttps%3A%2F%2Fssl.www8.hp.com%2Fus%2Fen%2Fscripts%2Fframework%2Fj"
		"query%2Fv-1-8%2Fcan.jquery.js%7Cb2333e0m470K1I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fstyles.cdc54c9d1a6d17da607e.css%7Cb2334e0f92g92h92i126j92k127l403m435u22071v21188w140233K1I11M444840696%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fruntime.9e457cc8784dad4b61c4.js%7Cb2334e0f0g0h0i0j0k658l864m865u2621v1726w3652I12M-105510395%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fpolyfills.d301623517a574834b52.js%7Cb2334e0f0g0h0i0j0k659l907m918u3529"
		"2v34395w105933I12M253502027%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fscripts.204dec66716e86a3ab29.js%7Cb2334e0f0g0h0i0j0k661l914m919u30842v29944w84920I12M-896559623%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fmain.ad82e25c31bf62fad499.js%7Cb2334e0f0g0h0i0j0k663l915m1096u591603v590208w2833421I12M1252987196%7Chttps%3A%2F%2Ft.contentsquare.net%2Fuxa%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%7Cb2991e0m233I12%7Chttps%3A%2F%2Fcsxd.contentsquare.net%2Fuxa%2Fxdframe-"
		"single-domain-1.1.0.html%3Fpid%3D1255%26cookieNames%3D_5Fcs_5Fid%5Ec_5Fcs_5Fs%5Ec_5Fcs_5Fcvars%5Ec_5Fcs_5Fex%7Cb3269e0m152Bi1I4%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fpages-agent-remote-agent-remote-module-ngfactory.8f028b9578e5b6320110.js%7Cb3943e0f0g0h0i0j0k2l201m202u1388v494w892K1I12M645240577%7Chttps%3A%2F%2Fct.contentsquare.net%2Fptc%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%7Cb3977e0m430I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fh"
		"p-wcc%2Flibs%2Fscripts%2Fthird_5Fparty_5Flib.js%7Cb4161e0f0g0h0i0j0k2l240m244u2051v1098w3582K1I12M-1489247858%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Flibs%2Fscripts%2Fmedallia.js%7Cb4161e0f0g0h0i0j0k2l233m241u1361v409w1237K1I12M-1198934811%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fssc%2Fregion%7Cb4172e0f0g0h0i0j0k1l228m232u1345v742w4661z1I1M645065010%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fcontact-hp%7Cb4173e0f0g"
		"0h0i0j0k1l6100m6341u42099v40973w213960z1I1M1039871113%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Ftermbase%2Fus-en%2FagentRemote%7Cb4173e0f0g0h0i0j0k2l213m227u1781v1177w3275z1I1M1178436330%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fssc%2Fconfig%2Fus-en%2FagentRemote%7Cb4174e0f0g0h0i0j0k3l227m230u1444v841w1862z1I1M-29394315%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fsitemap%2Fhref%7Cb4175e0f0g0h0i0j0k231l443m444u717v90w71z1I1M-326200479%"
		"7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fdata%2Fcountry-selector.json%7Cb4177e0f0g0h0i0j0k230l440m442u2644v1730w15625z1I1M-1176669186%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Ficons.png%7Cb4185e0f0g0h0i0j0k223l443m453u42977v42139w42139I9M540651756%7Chttps%3A%2F%2Fweb-customer-care-dev.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fproduct-page-assets%2FEnglish_5Fget_5Fit_5Ffrom_5FMS.png%7Cb4417e0m559E1F3952O104P38I7%7Chttps%3A%2F%2Fne"
		"bula-cdn.kampyle.com%2Fwu%2F541318%2Fonsite%2Fembed.js%7Cb4418e0m235K1I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2FBootstrap.js%7Cb4422e0m559I12%7Chttps%3A%2F%2Fcdn.optimizely.com%2Fjs%2F18956663993.js%7Cb4423e0f135g147h147i395j173k395l426m559u127220v126138w439047I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fcaas%2Fheader-footer%2Fus%2Fen%2Fdefault%2Flatest.r%3FcontentType%3Djs%26hide_5Fsearch%3Dtrue%26show_5Fshopping_5Fcart%3Dtrue%26hide_5Fcountry_5Fselector%3Dtrue%7Cb4423e0m557I"
		"12%7Chttps%3A%2F%2Fct.contentsquare.net%2Fpcc%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%3FDeploymentConfigName%3DRelease_5F20210426%26Version%3D5%7Cb4424e0m196I12%7Chttps%3A%2F%2Fct.contentsquare.net%2Fwww%2Flatest-WR110.js%7Cb4424e0m215I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Fflags%2Fflag_5Fus.gif%7Cb4633e0f0g0h0i0j0k6l206m207u1432v595w595E1F176O16P11I7M-1919845215%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2"
		"Fclientlibs-fonts%2Fus%2Fen%2Fclientlib-hf-fontface.css%7Cb4999e0m18K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-r-css.css%7Cb4999e0m41K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hf-js.js%7Cb5026e0m80K1I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtm.js%3Fid%3DGTM-PDHM2PK%7Cb5058e0m342I12%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_5Fvisid_5Fver%3D4.4."
		"0%26d_5Ffieldgroup%3DMC%26d_5Frtbd%3Djson%26d_5Fver%3D2%26d_5Forgid%3D5E34123F5245B2CD0A490D45_2540AdobeOrg%26d_5Fnsid%3D0%26ts%3D1620634183641%7Cb5095e0m417z1I1%7Chttps%3A%2F%2Fnexus.ensighten.com%2Ferror%2Fe.gif%7Cb5116e0m145I7%7Chttps%3A%2F%2Fa2129670914.cdn.optimizely.com%2Fclient_5Fstorage%2Fa2129670914.html%7Cb5294e0m149Bi2I4%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fclientlib-hf-fontface-core%2Fresources%2Ffonts%2F"
		"HPSimplifiedRegular.woff%7Cb5312e0m274I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fclientlib-hf-fontface-core%2Fresources%2Ffonts%2FHpSimplifiedLight.woff%7Cb5314e0m275I9%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2FserverComponent.php%7Cb5332e0m59K1I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2F8eb6e0d6c0d367083fff5b64b61a4441.js%3FconditionId0%3D422765%7Cb5457e0m100I12%7Chttps%3A"
		"%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2Fb9b0fc01116e2374d7e92bc6cb675f3e.js%3FconditionId0%3D4880989%7Cb5457e0m147I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2F3ce08cf7c65e410fd9cf20d6115a04e1.js%3FconditionId0%3D285030%7Cb5458e0m191I12%7Chttps%3A%2F%2Fwww.hp.com%2Fcma%2Fng%2Flib%2Fexceptions%2Fprivacy-banner-test.js%7Cb5616e0m433K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css"
		"%2Fresources%2Ffonts%2Ffootericons.woff%7Cb5624e0m425I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Fnewhplogo.ttf%7Cb5625e0m443I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Ffonts_5Fheader_5Ficons.woff%7Cb5625e0m444I9%7Chttps%3A%2F%2Fhp.demdex.net%2Fdest5.html%3Fd_5Fnsid%3D0%23https_253A_252F_252Fppssup"
		"port-itgllbh7.inc.hp.com%7Cb5779e0m632Bi3I4%7Chttps%3A%2F%2Fmet2.hp.com%2Fid%3Fd_5Fvisid_5Fver%3D4.4.0%26d_5Ffieldgroup%3DA%26mcorgid%3D5E34123F5245B2CD0A490D45_2540AdobeOrg%26mid%3D61511361850924733830835272769521751448%26ts%3D1620634184330%7Cb5784e0m628z1I1%7Chttps%3A%2F%2Fwr-us.contentsquare.net%2Fctn_5Fv2%2Fauth%2F%3Fpid%3D325%26as%3D1%261510145498%26subsid%3D232897%26msgsize%3D120%7Cb6077e0m413z1I1%7Chttps%3A%2F%2Fc.contentsquare.net%2Fpageview%7Cb6077e0f28g108h108i431j176k431l1481m1481u474I7"
		"%7Chttps%3A%2F%2Fc.contentsquare.net%2FpageEvent%3Fvalue%3DMIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA%26isETR%3Dfalse%26v%3D10.8.6%26pid%3D1255%26uu%3Dcc0fb094-1ad2-ac10-e2ee-e502e2140acd%26sn%3D1%26pn%3D1%26r%3D915681%7Cb6083e0f25g171h171i473j222k473l1477m1477u474I7%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2FotSDKStub.js%7Cb6325e0m1234K1I12%7Chttps%3A%2F%2Flogx.optimizely.com%2Fv1%2Fevents%7Cb6328e0f1g21h21i337j80k337l1235m1236u375z1I1%7Chttps%3A%2F%2Fcm.everesttech.net%2Fcm%2Fdd"
		"%3Fd_5Fuuid%3D68346363592450564190005563954195521052%7Cb6434e0m74I7%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df.json%7Cb7569e0m41z1I1%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fus%2Fwu%2F541318%2Fonsite%2Fgeneric1620052275102.js%7Cb7576e0m161I12%7Chttps%3A%2F%2Fgeolocation.onetrust.com%2Fcookieconsentpub%2Fv1%2Fgeo%2Flocation%7Cb7647e0m189I12%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fresources%2Fonsite%2Fjs%2Fcool-2.1.15.mi"
		"n.js%7Cb7808e0m20I12%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2FotBannerSdk.js%7Cb8000e0m108I12%7Chttps%3A%2F%2Fudc-neb.kampyle.com%2Fegw%2F5%2Fqceuv8449dzg58ptt1bhda9g8ue19c7s%2Ftrack%2F_5F_5Fcool.gif%7Cb8029e0m192I7%7Chttps%3A%2F%2Fudc-neb.kampyle.com%2Fegw%2F5%2Fqceuv8449dzg58ptt1bhda9g8ue19c7s%2Ftrack%2F_5F_5Fcool.gif%7Cb8029e0m199I7%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df%2Fe688e508-0267-4c09-a64b-7c03f7e759ce%2Fen-ie.json%7Cb8116"
		"e0m76z1I2%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2Fassets%2FotCenterRounded.json%7Cb8239e0m23z1I2%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2Fassets%2Fv2%2FotPcTab.json%7Cb8240e0m49z1I2%7Chttps%3A%2F%2Fd.impactradius-event.com%2FA353853-8e85-4786-9645-fac6b773cd071.js%7Cb8370e0m249I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb8371e0m256I12%7Chttps%3A%2F%2Fwww.redditstatic.com%2Fads%2Fpixel.js%7Cb8371e0m200I12%7Chttps%3A%2F%2Fwww.googleadservices.com%2Fpagead"
		"%2Fconversion_5Fasync.js%7Cb8372e0f2g16h16i203j26k228l267m301u14819v13944w36666I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb8442e0m312I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtm.js%3Fid%3DGTM-MQML682%7Cb8442e0m109I12%7Chttps%3A%2F%2Fpx.owneriq.net%2Fstas%2Fs%2F7kxod6.js%7Cb8443e0m275I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%3Fid%3D1688171794549438%26ev%3DPageView%26noscript%3D1%26gtmcb%3D75804990%7Cb8444e0m268I7%7Chttps%3A%2F%2Fct.pinterest.com%2Fv3%2F%3Fevent%3Dinit%26tid%3D261360473445"
		"3%26noscript%3D1%26gtmcb%3D665822192%7Cb8444e0m475I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F849111477%2F%3Fguid%3DON%26script%3D0%26userId%3Dnull%26gtmcb%3D61101121%7Cb8444c0d320e483f483g503h503i718j591k718l808m811u746v42w42I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F783157761%2F%3Fguid%3DON%26script%3D0%26userId%3Dnull%26gtmcb%3D1419419873%7Cb8444c0d325e483f484g591h591i718j602k718l808m811u746v42w42I7%7Chttps%3A%2F%2Falb"
		".reddit.com%2Frp.gif%7Cb8659e0m268I7%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F13015798%7Cb8673e0m45I12%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb8694e0m75A1N3I7%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%2F%3Fpid%3D40922%26fmt%3Dgif%7Cb8707e0m47I7%7Chttps%3A%2F%2Flinkto.ext.hp.com%2Fxc%2F365159%2F342132%2F5105%7Cb8770e0m293z1I1%7Chttps%3A%2F%2Fad.doubleclick.net%2Factivity%5Essrc%3D9848580%5Estype%3Dirid%5Escat%3Dirid%5Esord%3D.1620634187269%3F%7Cb8770c0d481e762f763g839h839i1120j857k1120l"
		"1156m1156u673v42w42N3O1P1I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F854101013%2F%7Cb8792e0f0g0h0i0j0k127l255m258u2199v1060w1690K1I12%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F687393200%2F%7Cb8795e0f0g0h0i0j0k125l253m256u2138v1056w1698K1I12%7Chttps%3A%2F%2Fpx.owneriq.net%2Feps%3Fpt%3D7kxod6%26pid%3D8088%26uid%3DQ6739205871752990971J%26l%3Dtrue%7Cb8939e0m237Bi5I4%7Chttps%3A%2F%2Fpx.owneriq.net%2Fj%2F%7Cb8940e0m215I12%7Chttps"
		"%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10044594.json%7Cb8943e0m211z1I1%7Chttps%3A%2F%2Fwww.ojrq.net%2Fp%2F%3Freturn%3D%26cid%3D5105%26tpsync%3Dno%7Cb9072e0m457N3Q1R1I7%7Chttps%3A%2F%2Fwww.google.com%2Fpagead%2F1p-user-list%2F854101013%2F%7Cb9073e0f1g1h1i89j9k93l180m182u746v42w42I7%7Chttps%3A%2F%2Fwww.google.com%2Fpagead%2F1p-user-list%2F687393200%2F%7Cb9074e0f0g0h0i0j0k183l453m455u746v42w42I7%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb9166e0m558I12%7Chttps%3A%2F%2Fpx.owneriq.net%2Fep%3Fsid_255"
		"B_255D%3D14574697177%26sid_255B_255D%3D14574697182%26sid_255B_255D%3D14574697187%26sid_255B_255D%3D8460259172%26sid_255B_255D%3D8460259192%26pt%3D7kxod6%26uid%3DQ6739205871752990971J%26jcs%3D1%7Cb9168e0m83I7%7Chttps%3A%2F%2Fidsync.rlcdn.com%2F455679.gif%3Fpartner_5Fuid%3D1615621b-b167-11eb-9a1c-42010a246c50%7Cb10183m0A1N3S4186I0$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection$title=Remote%20Assistance%20for%20our%20valued%20customers%20%7C%20HP%C2%AE%20Support$latC="
		"1$app=ea7c4b59f27d43eb$visitID=HJHUFTOMLTJTKHNBHRMPMPACUMCMKMUA-0$vs=2$fId=34181427_872$v=10215210506134512$vID=16206341814607QIG03HBLPELC2STIJ60FEQ7D6H5CSMC$time=1620634195037", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("consentreceipts_2", 
		"URL=https://privacyportaluat.onetrust.com/request/v1/consentreceipts", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"requestInformation\":\""
		"eyJhbGciOiJSUzUxMiJ9.eyJvdEp3dFZlcnNpb24iOjEsInByb2Nlc3NJZCI6ImNjZGQxZWQzLTY2NDQtNDhiNy1hM2EyLWYyMjZjZWJiNThkZiIsInByb2Nlc3NWZXJzaW9uIjo3NCwiaWF0IjoiMjAyMC0wNi0yNFQxNzoyMDoxOC4zIiwibW9jIjoiQ09PS0lFIiwic3ViIjoiQ29va2llIFVuaXF1ZSBJZCIsImlzcyI6bnVsbCwidGVuYW50SWQiOiI3M2FmNzhjNS02MjQ1LTQyYjktYWNhZS1lYmQ1NTNhZWI0NTciLCJkZXNjcmlwdGlvbiI6IlRoaXMgY29sbGVjdGlvbiBwb2ludCBjYXB0dXJlcyB0aGUgY3VycmVudCBzaXRlIHZpc2l0b3IgY29uc2VudCBwcmVmZXJlbmNlcyBmb3IgdGhlIGRvbWFpbjogaHAuY29tLWVuIHNwZWNpZmllZC4iLCJjb25zZW50VHlwZ"
		"SI6IkNPT0tJRUJBTk5FUiIsImRvdWJsZU9wdEluIjpmYWxzZSwicmVjb25maXJtQWN0aXZlUHVycG9zZSI6ZmFsc2UsImR5bmFtaWNDb2xsZWN0aW9uUG9pbnQiOmZhbHNlLCJhdXRoZW50aWNhdGlvblJlcXVpcmVkIjpmYWxzZSwicG9saWN5X3VyaSI6ImhwLmNvbSIsImFsbG93Tm90R2l2ZW5Db25zZW50cyI6ZmFsc2UsInB1cnBvc2VzIjpbeyJpZCI6ImU0YzhiYjlkLTdjMDUtNGJkNy1hMWE5LTBiZDFiOGZjMDg5NSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImM2ZjY5NDkzLTA5ODUtNDhhOC1iZDllLTk2ZjgyYzg1MzYyMCIsInZlcnNpb24iOjE4LCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI"
		"6W119LHsiaWQiOiI1NGRiYThlYS0xNzgyLTRiOWUtYmVmNC03ZThhMjQyMjI3OTciLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJjNGYzNWFmZi01YmUyLTQxZGItODcwNS03YmQ2NDM4NWMwOTgiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiIzMDllYzcxOC02NGQzLTQ2ZDItYTAwZC01YWU0NmNhNGZhMTEiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiI1NDM0MmI4Zi1lNjg1LTQ0YzAtYTgwMS03YTkzMjNiZGVmMTMiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119L"
		"HsiaWQiOiJmZDhjZDU0NC1lMzMyLTRmYWMtODZkYS04MDQyOWNjZWVkYmEiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiI1NzU2NjlmZi1lOTUwLTQ1OWEtYmY4NS1lNWQ3ZmE5N2FjMDYiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiIyMWJiMzJhNi02ZWYzLTRlYmEtOTdhYy0zODYzMDM5YTE3NzIiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJhNWQ0MWIwZi1hM2NlLTQ3NDgtYjFhMC1mMGM0NTExNzIxN2EiLCJ2ZXJzaW9uIjozNiwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7Iml"
		"kIjoiZDIwYTRlMWItMzUzYy00NTdmLTllNGEtYWJmNTYyNzkzYWRmIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiYTg1ZjY3ZWUtYWEwNS00NmEzLWFlMDctY2Q3Mjc4N2IxMWZkIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiMTU5YjMzNTYtOTQwYS00ODc4LThjZWMtY2E2NzgyM2EyNWM3IiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiYWE3ZmFiODEtNGFlNS00ZDJkLTkyNGItOWNkZDU3YTFlZDUxIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiM"
		"DYzYWZlZDktZDcxNC00MTc2LTliMDQtYWUyYWY3ZDEwZTQyIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiNTkwZmYxMDUtMjUxMi00NzIzLWFhMTMtN2YzMjM0OGQxNTlkIiwidmVyc2lvbiI6MTgsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImMyOGU4ZGMzLWY0ZWMtNGViOC1iOTUwLWI2MzA5ZDZkN2I4MSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImEzMzEwZmFkLTI4MTctNDIxMy1iMzliLTkzMTM0YjRlNDk3MCIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImFmZGE"
		"wZGFmLTFmYmEtNDQ5Zi04ODY2LTkwMzkzMTE0ZGVlMyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjQyZTVjNDQ5LTljZDQtNDU5NC1iMGY5LTIyNDMxMjM2OTRkYyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImMzMzcxYzhjLTg1ZDEtNDMwNC05OWM5LWQ3OGI3NzMyYzg1ZiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImZmZmU4NDFjLTRhZTYtNDkwOC05NGVmLTk4YzcwNGFkZGQwOCIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjViMTU2N2M0L"
		"Tk5OGEtNGQ4OS1iMjk5LTZlNWQ3YWU2NjAxMyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImVkZWZhZjRmLWE0NGItNDQyNi04M2MyLTg5NjcyNGIwYjI0NSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjRjNzYzYzUzLTgyZWUtNDliNS1iMTI5LTFjZTkzMGZiNWFjNiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImRmZDJjYjk5LTM4MzYtNDhkMC04ZGQxLTVjM2VjNzBlMzFhZiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImY5ZGJkNDc1LWM0NDE"
		"tNGVkMi1hMDE1LWZkNTUzNzI2MjE3MiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImZiZjBjZjcxLWRmNjEtNDU4YS05NDk0LTUxMjAyNzk4YzM2YyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImJjZGZlYTVlLWYyZDUtNDgyZC04MzlmLTZmMGI1Y2UyZGU3OSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImMzZWVlZThjLTg5MDQtNGRhZi1iZmI3LWIxZjZjMGQwOWU0YSIsInZlcnNpb24iOjM1LCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119XSwibm90aWNlcyI6W10sImRzRGF0YUVsZ"
		"W1lbnRzIjpbIlVzZXJBZ2VudCIsIkNvdW50cnkiLCJJbnRlcmFjdGlvblR5cGUiXX0.lS5tTjTHaDp-Ir9fDTFXJ4Wa2092cq9ZZ7Ld6DgWveaayBQXWTD6xqLVRPvY7Y2rvofq8O8WdwYPpAKFHxoqyQDEqCrY-cuE5VbHhekpyYaYOH3eo7CTkLtUYalPpq-rNQViq6ARFYGV6Kxl0oZjAEQF_aS-uxco5sR09Fk3byheduMswdXNocCS33tnyP8UDunD3P8zNKMUTsNW9GamiSsZuWm4JxmimFh3EF8LxCa3O6Ofb6Z8Cf24xjHqoMwiUKgv5Q3sh8ZxMi67IcqVJsB23l2AM2ixKYGg0qTJ3kayP-_tsgrJ9D4Gg6kKxYBctEuNTeiCATxe71F8SfRRum3PI6MX7hKjlFAN9NL5dVUMifIxQCbLtVvSjh2VzbOUI9II75W4QqgcUhAP66tzjyHT_u84JUZs6vrAe8xulmXEWfQLrGy"
		"_HarCEO3696XpF7UVRPjrRSMeRi6MrZTc8_qpVXD_VntxOde7mPjRgDpdmFUw6730G7lFWiJhLCFwRdL9NJTO-EiedrwvLebRY4ZgT0zhIoT4f3orAcTvNIBTc1EizAcktO36JrtYCmYwA-4s8qKCQ8F-sa4Weq8ju0ZzvmNX5vmqcZcfw8bGYcauHoL85xR-N1_1rNcGSUVw50I_C78z5ZqfVvhR34lRsMDk67M77NLNAbQnlqYijrQ\",\"identifier\":\"b7fd2f8f-61a9-4917-8e71-f6c6acb46e8b\",\"customPayload\":{\"Interaction\":1,\"AddDefaultInteraction\":false},\"isAnonymous\":true,\"test\":false,\"purposes\":[{\"Id\":\"A85F67EE-AA05-46A3-AE07-CD72787B11FD\",\"TransactionType\":\""
		"NO_CHOICE\"},{\"Id\":\"590FF105-2512-4723-AA13-7F32348D159D\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"C6F69493-0985-48A8-BD9E-96F82C853620\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"FFFE841C-4AE6-4908-94EF-98C704ADDD08\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"C3EEEE8C-8904-4DAF-BFB7-B1F6C0D09E4A\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"A5D41B0F-A3CE-4748-B1A0-F0C45117217A\",\"TransactionType\":\"CONFIRMED\"}],\"dsDataElements\":{\"InteractionType\":\"Banner - Close\",\""
		"Country\":\"US\",\"UserAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.93 Safari/537.36\"}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(5);

	web_custom_request("events_3", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=60&mdh=792&pn=1&re=1&uu=cc0fb094-1ad2-ac10-e2ee-e502e2140acd&sn=1&lv=1620634184&lhd=1620634184&hd=1620634184&pid=1255&str=836&di=1507&dc=6088&fl=6095&eu=%5B%5B2%2C5841%2C876%2C473%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-agent-remote%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C37516%2C45226%5D%2C%5B2%2C8328%2C896%2C433%2C0%2C%22form%23lmiForm%3Ediv%3Aeq(0)"
		"%22%2C38972%2C46129%5D%2C%5B2%2C8729%2C1241%2C58%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C54794%2C8593%5D%2C%5B6%2C8872%2C1204%2C90%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C9132%2C1185%2C110%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C25637%2C36881%5D%2C%5B3%2C9478%2C1185%2C110%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B2%2C9548%2C1185%2C110%2C0%2C%22%22%2C25637%2C36881%5D%2C%5B4%2C9691%2C1185%2C110%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C9716%2C1185%2C110%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C10199%2C1185%2C110%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%5D%2C%5B2%2C14671%2C1193%2C115%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C52336%2C55287%5D%2C%5B2%2C15072%2C1368%2C217%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-agent-remote%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%22%2C55286%2C411%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	/* Enter Pincode */

	lr_think_time(12);

	web_custom_request("events_4", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=60&mdh=792&pn=1&re=1&uu=cc0fb094-1ad2-ac10-e2ee-e502e2140acd&sn=1&lv=1620634184&lhd=1620634184&hd=1620634184&pid=1255&str=836&di=1507&dc=6088&fl=6095&eu="
		"%5B%5B2%2C23098%2C1476%2C344%2C0%2C%22%22%2C59651%2C23051%5D%2C%5B2%2C23498%2C1455%2C343%2C0%2C%22%22%2C58803%2C22873%5D%2C%5B2%2C24146%2C1438%2C279%2C0%2C%22%22%2C58115%2C11464%5D%2C%5B2%2C24861%2C1424%2C279%2C0%2C%22%22%2C57550%2C11464%5D%2C%5B2%2C25263%2C669%2C419%2C0%2C%22form%23lmiForm%3Ediv%3Aeq(0)"
		"%22%2C22443%2C18326%5D%2C%5B6%2C25306%2C642%2C421%2C%22input%23digitCode%22%2C%22%22%5D%2C%5B2%2C25663%2C591%2C419%2C0%2C%22input%23digitCode%22%2C53310%2C18328%5D%2C%5B2%2C26271%2C590%2C419%2C0%2C%22%22%2C53079%2C18328%5D%2C%5B3%2C26598%2C590%2C419%2C%22input%23digitCode%22%2C%22%22%5D%2C%5B11%2C26622%2C%22input%23digitCode%22%5D%2C%5B4%2C26801%2C590%2C419%2C%22input%23digitCode%22%2C%22%22%5D%2C%5B5%2C26830%2C590%2C419%2C%22input%23digitCode%22%2C%22%22%5D%2C%5B7%2C27431%2C598%2C402%2C%22input%2"
		"3digitCode%22%5D%2C%5B2%2C27432%2C598%2C402%2C0%2C%22form%23lmiForm%22%2C17273%2C22384%5D%2C%5B2%2C27832%2C867%2C2%2C0%2C%22div%23welcomeHeader%22%2C35039%2C2621%5D%2C%5B12%2C28821%2C%22input%23digitCode%22%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_think_time(13);

	web_custom_request("events_5", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=60&mdh=792&pn=1&re=1&uu=cc0fb094-1ad2-ac10-e2ee-e502e2140acd&sn=1&lv=1620634184&lhd=1620634184&hd=1620634184&pid=1255&str=836&di=1507&dc=6088&fl=6095&eu=%5B%5B11%2C30763%2C%22input%23digitCode%22%5D%2C%5B2%2C37294%2C1000%2C720%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-agent-remote%3Aeq(0)%3Ediv%3Aeq(0)%22%2C40414%2C59890%5D%2C%5B2%2C37695%2C1357%2C350%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-agent-remote%3Aeq(0)"
		"%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%22%2C54842%2C24121%5D%2C%5B2%2C38518%2C1362%2C332%2C0%2C%22%22%2C55044%2C20912%5D%2C%5B2%2C38919%2C1363%2C219%2C0%2C%22%22%2C55084%2C768%5D%2C%5B10%2C42245%2C%22input%23digitCode%22%2Cfalse%5D%2C%5B12%2C42249%2C%22input%23digitCode%22%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	/* click connect */

	lr_start_transaction("1_transaction");

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,obedbbhbpmojnkanicioggnmelmoomoc,lmelglejhemejginpboagddgdfbepgmp,hnimpnehoodheedghdeeijklkeaacbdc,cmahhnpholdijhjokonmfdjbfmklppij,giekcmmlnklenlaomppkphknjmnnpneh,aemomkdncapdnfajjbbcbdebjljbpmpj,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,gkmgaooipdjhmangpemjhigmamcehddo,ehgidpndbllacpjalkiimkbadgjfnnmc,hfnkpimlhhgieaddgfemjhofmfblmnib,ggkkehgbnfjpeggfpleeakpidbkibbmn,"
		"jamhcnnkihinmdlkakkaopbjbbcngflc,jflookgnkcckhobaglndicnbbgbonegd,ojhpjlocmbogdgmfpkhlaaeamibhnphh,pdafiollngonhoadbmdoemagnfpdphbe,eeigpngbgcognadeebkilcpcaedhellh");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-90.0.4430.93");

	lr_think_time(13);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:645854580&cup2hreq=bd7ef1098fd3bd4118b7ba6500f583b5e628f2eff20e15e5398383b55c8d9266", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{8d2523ba-150e-467d-a40f-25817c1d1632}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{fe9f4ace-cc1f-477e-a5be-6f202df0b6cd"
		"}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"4.10.2209.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEU\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.4dcc255c0d82123c9c4251bb453165672ea0458f0379f3a7a534dc2a666d7c6d\"}]},\"ping\":{\"ping_freshness\":\"{540ffd19-9d0c-48c0-a752-471ccc751793}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"9.22.0\"},{\"accept_locale\":\"ENUS\",\"appid\""
		":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GCEU\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.8e893bc04c6c1028c48f511cab814d56e5d9b8c839c16474aaaab3d929fe065b\"}]},\"ping\":{\"ping_freshness\":\"{1ca53d80-e5e1-4bbd-9c15-a93382059f87}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"20210420.370253383\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GCEU\",\"cohort\":\"1:lwl:\",\"cohorthint\":\""
		"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3ae530493ec546967f832261fbf67a74db7c1c16b9cce1899b04ac8cee57e4fe\"}]},\"ping\":{\"ping_freshness\":\"{b853f2dd-bf6c-46a3-824d-1ccb0835b51e}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"278\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\""
		":{\"ping_freshness\":\"{17174ea4-c761-477d-b2d6-29b0d2e6b69c}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GCEU\",\"cohort\":\"1:wr3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7\"}]},\"ping\":{\"ping_freshness\":\"{ec4a10b2-3be4-470b-8170-6ddb12aabe23}\",\"rd\":5243},\"updatecheck\":{},\""
		"version\":\"1.0.6\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{62980566-842c-4083-a8ca-8d3289672ffa}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"ping\":{\"ping_freshness\":\"{be20977a-6d20-4172-b4c6-a327edd0da0b}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4\"}]},\"ping\":{\"ping_freshness\":\"{072a0d69-9c28-48cc-90f7-d4b99a1979a9}\",\"rd\":5243},\""
		"updatecheck\":{},\"version\":\"43\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.d730fdd6875bfda19ae43c639e89fe6c24e48b53ec4f466b1d7de2001f97e03c\"}]},\"ping\":{\"ping_freshness\":\"{894e1f65-f073-4e26-b752-ccfc349bd873}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\""
		"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.7bb76b42a74f34d32b1a3a43540efa36c58288d8331fc944381c05b746cb487f\"}]},\"ping\":{\"ping_freshness\":\"{5c93618c-e5e6-4203-b59e-81e24baf3a11}\",\"rd\":5243},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"90.261.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\""
		":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{81037e4c-e7f9-487d-a187-42aad2827705}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.671da07e0614c7683a173c744308bcb233d74cbbf58eed6633e7770728ec045c\"}]},\"ping\":{\"ping_freshness\":\""
		"{b842e99a-a381-4637-906f-7bc919a204d7}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"6597\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:zr9@0.01\",\"cohorthint\":\"M80ToM99\",\"cohortname\":\"M80ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.1f2c1b01f5f8279f0b0acd2ee595877a0e3011fb0b50aa49a3873836cdb008c9\"}]},\"ping\":{\"ping_freshness\":\"{fb8812f8-d043-4b7b-b80c-8313eb28b6bd}\",\"rd\":5243},\"updatecheck\":{},\"version\":\""
		"2021.4.26.1142\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GCEU\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ad52b9c4775bcf148dffb024c89f63d783dcd4e82cf09215c5dc612b48f6c2ae\"}]},\"ping\":{\"ping_freshness\":\"{96a50a48-5241-4626-9992-7c314aa19174}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"92.0.4503.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\""
		",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.932274d0ca4e72069f100eb38780d61068f814cda93fcc5b9f7f437b09501859\"}]},\"ping\":{\"ping_freshness\":\"{0aa336a4-83a2-4b7d-821f-928d5642ad94}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"2629\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GCEU\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{6d6d5ede-8b03-4ffa-86fa-83a59b763d6f}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"GCEU\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.baeb7c645c7704139756b02bf2741430d94ea3835fb1de77fef1057d8c844655\"}]},\"ping\":{\"ping_freshness\":\""
		"{cd9437e4-b78d-4b42-bf17-42c605e5576b}\",\"rd\":5243},\"updatecheck\":{},\"version\":\"2021.2.22.1142\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GCEU\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{c95defaf-e424-458d-99c8-3f97823f24d7}\",\"rd\":5243},\"updatecheck\":{},\"version\":\""
		"2020.11.2.164946\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.93\",\"protocol\":\"3.1\",\"requestid\":\"{2f5dbf0c-327f-49a1-92ac-acb8849ffecc}\",\"sessionid\":\"{15c324ce-cea1-42f0-9a0e-ab5a317d40ed}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,"
		"\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.93\"}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_submit_data("Code.aspx", 
		"Action=https://beta.logmeinrescue.com/Customer/Code.aspx", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Code", "Value=452720", ENDITEM, 
		"Name=language", "Value=en", ENDITEM, 
		"Name=hostederrorhandling", "Value=1", ENDITEM, 
		"Name=companyvalidation", "Value=21CA8F867197752F5ED74286F71EB52081D657DC2E939306E0AC2A70443E43F8", ENDITEM, 
		EXTRARES, 
		"Url=../Images/rescuelogo.png", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("events_6", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=60&mdh=792&pn=1&re=1&uu=cc0fb094-1ad2-ac10-e2ee-e502e2140acd&sn=1&lv=1620634184&lhd=1620634184&hd=1620634184&pid=1255&str=836&di=1507&dc=6088&fl=6095&eu="
		"%5B%5B2%2C48912%2C1592%2C231%2C0%2C%22%22%2C64339%2C2907%5D%2C%5B2%2C49322%2C1483%2C381%2C0%2C%22%22%2C59934%2C29647%5D%2C%5B2%2C49714%2C1380%2C332%2C0%2C%22%22%2C55771%2C20912%5D%2C%5B2%2C50325%2C1431%2C272%2C0%2C%22%22%2C57833%2C10216%5D%2C%5B2%2C51211%2C1430%2C270%2C0%2C%22%22%2C57792%2C9860%5D%2C%5B2%2C51612%2C1390%2C218%2C0%2C%22%22%2C56176%2C590%5D%2C%5B2%2C53486%2C1411%2C240%2C0%2C%22%22%2C57024%2C4512%5D%2C%5B2%2C54201%2C1403%2C240%2C0%2C%22%22%2C56701%2C4512%5D%2C%5B2%2C54605%2C896%2C338%"
		"2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-agent-remote%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ep%3Aeq(1)"
		"%22%2C38972%2C61234%5D%2C%5B6%2C54806%2C744%2C419%2C%22button%23AssistanceCode%22%2C%22%22%5D%2C%5B2%2C55005%2C718%2C430%2C0%2C%22button%23AssistanceCode%22%2C34896%2C40171%5D%2C%5B11%2C55245%2C%22input%23digitCode%22%5D%2C%5B3%2C55246%2C718%2C430%2C%22button%23AssistanceCode%22%2C%22%22%5D%2C%5B12%2C55261%2C%22input%23digitCode%22%5D%2C%5B4%2C55440%2C718%2C430%2C%22button%23AssistanceCode%22%2C%22%22%5D%2C%5B5%2C55518%2C718%2C430%2C%22button%23AssistanceCode%22%2C%22%22%5D%2C%5B7%2C57076%2C717%2C"
		"430%2C%22button%23AssistanceCode%22%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("0_2", 
		"URL=https://bat.bing.com/actionp/0?ti=13015798&tm=gtm001&Ver=2&mid=66a7684d-f446-4535-a4a6-106c74c85bde&sid=15e87e90b16711eb9df74b80966735cb&vid=15eaa5e0b16711eb899bdf0bb7d0b27e&vids=1&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/remoteconnection", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		EXTRARES, 
		"Url=https://beta.logmeinrescue.com/Images/site/DownloadApplet/download_v2.png", "Referer=https://beta.logmeinrescue.com/Content/Site/Download/Download.css?v=20210420151946", ENDITEM, 
		"Url=https://beta.logmeinrescue.com/Images/site/DownloadApplet/run_v2.png", "Referer=https://beta.logmeinrescue.com/Content/Site/Download/Download.css?v=20210420151946", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("get", 
		"URL=https://beta.logmeinrescue.com/header/api/get", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://beta.logmeinrescue.com/Customer/Code.aspx", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Images/sprite.png", "Referer=https://beta.logmeinrescue.com/Content/Site/CommonUiHeader/style.css?v=1", ENDITEM, 
		"Url=https://www.pages04.net/WTS/event.jpeg?accesskey=7a6aedb9-132cf8e659f-4f4749e15ce6d7a21b02ab08b9b7921c&v=1.31&isNewSession=1&type=pageview&isNewVisitor=1&sessionGUID=23eb57a1-c135-035c-319d-a8c216e569e7&webSyncID=20371a87-0d2b-35c4-2318-c5d593ed071a&url=https%3A%2F%2Fbeta.logmeinrescue.com%2FCustomer%2FCode.aspx&newSiteVisit=1&referringURL=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fremoteconnection&hostname=beta.logmeinrescue.com&pathname=%2FCustomer%2FCode.aspx&newPageVisit=1&"
		"eventKey=d64d8484-0ecd-9ecc-5042-49b6ac617e20", "Referer=https://beta.logmeinrescue.com/", ENDITEM, 
		LAST);

	web_add_cookie("com.silverpop.iMAWebCookie=20371a87-0d2b-35c4-2318-c5d593ed071a; DOMAIN=beta.logmeinrescue.com");

	web_add_cookie("com.silverpop.iMA.session=23eb57a1-c135-035c-319d-a8c216e569e7; DOMAIN=beta.logmeinrescue.com");

	web_add_cookie("com.silverpop.iMA.page_visit=-51158375:; DOMAIN=beta.logmeinrescue.com");

	web_add_header("Origin", 
		"https://beta.logmeinrescue.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("Entry.aspx", 
		"Action=https://beta.logmeinrescue.com/Customer/Entry.aspx", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/octet-stream", 
		"Referer=https://beta.logmeinrescue.com/Customer/Code.aspx", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=EntryID", "Value=", ENDITEM, 
		"Name=PrivateCode", "Value=452720", ENDITEM, 
		"Name=CompanyID", "Value=1918079", ENDITEM, 
		"Name=name", "Value=", ENDITEM, 
		"Name=comment1", "Value=", ENDITEM, 
		"Name=comment2", "Value=", ENDITEM, 
		"Name=comment3", "Value=", ENDITEM, 
		"Name=comment4", "Value=", ENDITEM, 
		"Name=comment5", "Value=", ENDITEM, 
		"Name=tracking0", "Value=", ENDITEM, 
		"Name=language", "Value=en", ENDITEM, 
		"Name=hostederrorhandling", "Value=1", ENDITEM, 
		"Name=URLReferrer", "Value=https%3a%2f%2fppssupport-itgllbh7.inc.hp.com%2fus-en%2fremoteconnection", ENDITEM, 
		LAST);

	lr_end_transaction("1_transaction",LR_AUTO);

	/* Open Download document */

	lr_start_transaction("2_transaction");

	/* Run file */

	/* click ok */

	lr_end_transaction("2_transaction",LR_AUTO);

	lr_start_transaction("close connection");

	/* click on into symbol to close connection with agent */

	/* click yes to close session
	*/

	lr_end_transaction("close connection",LR_AUTO);

	return 0;
}