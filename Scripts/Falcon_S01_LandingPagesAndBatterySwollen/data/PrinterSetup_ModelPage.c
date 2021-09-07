PrinterSetup_ModelPage()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI42m5ANsl1twl8vxEt7z8irNsM_5_nTP8XzVj5I1y9GpF1VxHtNDwwOjwfkVEGGrqMubs8mVLl9IUQO3s363PFVDyyPjK_sM9HpWYoyj2ZKrrZVmhViGb9cXFnc9nNsn9wBFDSj4cG74lzWIO8vtZMrDyGukA; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIgZIB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:tgK2TorHlKUYoDQ2s9tvn3BjwboE7iIBi73imNsajYwgu4Is49rnWrhYNrj5CSY0z0MAZujruKo6lvOdd_bUi3pdMQcVqg:oVTuJX4rac9JGiVp; DOMAIN=accounts.google.com");

	web_add_cookie("NID=215=RW6TWRz5PzQoF4NAP3qiyjQRJ8CoZQxdOBE4s9JuiPM0WJI2k-DYGh4RzZe1J1Wx8rpSZEmL6o_lKVQ7b0uckCCHhwlS0Z7ANxCgU49cjr-gQ5LsqNao_voP1iJgJwIGjytJN-G7XIo73Ax74fMcN4ddtsY_5HQuWQcvoiKQLOloy6bld8OkJc1PR9edFi8rgAg; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2021-05-19-06; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

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
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=90", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_cookie("rxVisitor=16214263826695U74C6Q5UFSMTJV43R0EF1G1IPD3KHIG; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtLatC=1187; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1621428182687|1621426382676; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$226382660_629h1vPDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_cookie("_cs_c=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxVisitor=16214263826695U74C6Q5UFSMTJV43R0EF1G1IPD3KHIG; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("dtLatC=1187; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("rxvt=1621428182687|1621426382676; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("dtPC=1$226382660_629h1vPDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0e1; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22PrintSetup_Model%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22PrintSetup_Model%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CvVersion%7C4.4.0; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("ApplicationGatewayAffinityCORS=f9912c0c523e2917a0d0af2f71050920; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("ApplicationGatewayAffinity=f9912c0c523e2917a0d0af2f71050920; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621426385002r0.18154452102609198; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxVisitor=16214263826695U74C6Q5UFSMTJV43R0EF1G1IPD3KHIG; DOMAIN=www.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=www.hp.com");

	web_add_cookie("dtLatC=1187; DOMAIN=www.hp.com");

	web_add_cookie("rxvt=1621428182687|1621426382676; DOMAIN=www.hp.com");

	web_add_cookie("dtPC=1$226382660_629h1vPDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0e1; DOMAIN=www.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=www.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=www.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22PrintSetup_Model%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=www.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CvVersion%7C4.4.0; DOMAIN=www.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621426385002r0.18154452102609198; DOMAIN=www.hp.com");

	web_add_cookie("rxVisitor=16214263826695U74C6Q5UFSMTJV43R0EF1G1IPD3KHIG; DOMAIN=met2.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=met2.hp.com");

	web_add_cookie("dtLatC=1187; DOMAIN=met2.hp.com");

	web_add_cookie("rxvt=1621428182687|1621426382676; DOMAIN=met2.hp.com");

	web_add_cookie("dtPC=1$226382660_629h1vPDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0e1; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=met2.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22PrintSetup_Model%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=met2.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621426385002r0.18154452102609198; DOMAIN=met2.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=met2.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CMCMID%7C08591924630434647791908474614756096862%7CMCAAMLH-1622031185%7C9%7CMCAAMB-1622031185%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621433585s%7CNONE%7CvVersion%7C4.4.0; DOMAIN=met2.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Printer_Product_Details%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=900fde78-c17f-aa79-df29-25bdb0937a7d.1621426385.1.1621426385.1621426385.1589380098.1655590385747.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CMCMID%7C08591924630434647791908474614756096862%7CMCAAMLH-1622031185%7C9%7CMCAAMB-1622031185%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621433586s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18774%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1621428186501|1621426382676; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$226382660_629h-vPDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Printer_Product_Details%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_id=900fde78-c17f-aa79-df29-25bdb0937a7d.1621426385.1.1621426385.1621426385.1589380098.1655590385747.None.1; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=met2.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=met2.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=met2.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CMCMID%7C08591924630434647791908474614756096862%7CMCAAMLH-1622031185%7C9%7CMCAAMB-1622031185%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621433586s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18774%7CvVersion%7C4.4.0; DOMAIN=met2.hp.com");

	web_add_cookie("rxvt=1621428186501|1621426382676; DOMAIN=met2.hp.com");

	web_add_cookie("dtPC=1$226382660_629h-vPDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0e1; DOMAIN=met2.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+May+19+2021+12%3A13%3A07+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=9d5489c5-763c-4983-bc9d-d544ff118051&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=met2.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=met2.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=met2.hp.com");

	web_add_cookie("dcm_s=1621426387511.1789366942; DOMAIN=met2.hp.com");

	web_add_cookie("_gcl_au=1.1.223435945.1621426388; DOMAIN=met2.hp.com");

	web_add_cookie("_rdt_uuid=1621426388021.1edaea6a-f114-43af-b437-c6983288c314; DOMAIN=met2.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=met2.hp.com");

	web_add_cookie("IR_5105=1621426388034%7C365159%7C1621426388034%7C%7C; DOMAIN=met2.hp.com");

	web_add_cookie("_uetsid=926ae1d0b89b11ebb03b0fc70ab12b42; DOMAIN=met2.hp.com");

	web_add_cookie("_uetvid=926b34b0b89b11eba623f71c6f9f6279; DOMAIN=met2.hp.com");

	web_add_cookie("IR_PI=93210b0d-b89b-11eb-9a1c-42010a246c50%7C1621512788034; DOMAIN=met2.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppvl=%5B%5BB%5D%5D; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C46%2C46%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=met2.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=met2.hp.com");

	web_add_cookie("ApplicationGatewayAffinityCORS=05244d103c26dd85f4d3575ba8d66f85; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("ApplicationGatewayAffinity=05244d103c26dd85f4d3575ba8d66f85; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_url("11262035", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css", ENDITEM, 
		"Url=/wcc-assets/fonts/latin-e-regular-ttf.woff2", ENDITEM, 
		"Url=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css", ENDITEM, 
		"Url=/wcc-assets/fonts/latin-e-bold-ttf.woff2", ENDITEM, 
		"Url=/wcc-assets/fonts/latin-e-light-ttf.woff2", ENDITEM, 
		"Url=/wcc-assets/styles.b1ba3e4435944121b1d7.css", ENDITEM, 
		"Url=/wcc-assets/fonts/hp_support_controls.woff2", ENDITEM, 
		"Url=/wcc-assets/fonts/latin-e-bold-italic-ttf.woff2", ENDITEM, 
		"Url=/wcc-assets/fonts/latin-e-regular-italic-ttf.woff2", ENDITEM, 
		"Url=/wcc-assets/fonts/latin-e-light-italic-ttf.woff2", ENDITEM, 
		"Url=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/fonts/fontawesome-webfont.woff?v=4.1.0", ENDITEM, 
		"Url=/wcc-assets/runtime.9eb1e837f7a9f421fb99.js", ENDITEM, 
		"Url=https://t.contentsquare.net/uxa/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", ENDITEM, 
		"Url=/wcc-assets/polyfills.d301623517a574834b52.js", ENDITEM, 
		"Url=/wcc-assets/images/sprite-country-flags.png", ENDITEM, 
		"Url=/wcc-assets/scripts.204dec66716e86a3ab29.js", ENDITEM, 
		"Url=/wcc-assets/main.d51ea4ffa4730172bdfd.js", ENDITEM, 
		"Url=/wcc-assets/pages-printer-setup-printer-setup-module-ngfactory.8f7f8b6bbdbcd678c125.js", ENDITEM, 
		"Url=/wcc-assets/content/dam/hp-wcc/libs/scripts/medallia.js", ENDITEM, 
		"Url=/wcc-assets/content/dam/hp-wcc/libs/scripts/third_party_lib.js", ENDITEM, 
		"Url=https://ct.contentsquare.net/ptc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", ENDITEM, 
		"Url=https://ct.contentsquare.net/pcc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js?DeploymentConfigName=Release_20210426&Version=5", ENDITEM, 
		"Url=https://ct.contentsquare.net/www/latest-WR110.js", ENDITEM, 
		"Url=https://nebula-cdn.kampyle.com/wu/541318/onsite/embed.js", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/Bootstrap.js", ENDITEM, 
		"Url=https://cdn.optimizely.com/js/18956663993.js", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/caas/header-footer/us/en/default/latest.r?contentType=js&hide_search=true&show_shopping_cart=true&hide_country_selector=true", ENDITEM, 
		"Url=/wcc-assets/images/icons.png", ENDITEM, 
		"Url=/wcc-assets/images/flags/flag_us.gif", ENDITEM, 
		"Url=https://nexus.ensighten.com/error/e.gif?msg=%22TypeError%3A%20Cannot%20read%20property%20%27triggerPromiseWithTimeout%27%20of%20undefined%22%20error%20caught%20in%20Data%20Definition%20trigger%3A%20support_language_code%2C%20ID%3A9913.%20Using%20bottom%20of%20body%20trigger.&lnn=-1&fn=&cid=217&client=hp&publishPath=support_stage&rid=-1&did=-1&errorName=DataDefinitionException", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hf-js.js", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/serverComponent.php?r=60668.17065347559&namespace=Bootstrapper&staticJsPath=nexus.ensighten.com/hp/support_stage/code/&publishedOn=Tue%20May%2004%2007:24:28%20GMT%202021&ClientID=217&PageID=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035%3Fgdl_template%3DPrintSetup_Model", ENDITEM, 
		"Url=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c05553372.png", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/code/8eb6e0d6c0d367083fff5b64b61a4441.js?conditionId0=422765", ENDITEM, 
		"Url=/wcc-assets/content/dam/hp-wcc/fe-assets/images/srch_icon.svg", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/code/b9b0fc01116e2374d7e92bc6cb675f3e.js?conditionId0=4880989", ENDITEM, 
		"Url=/wcc-assets/content/dam/hp-wcc/headless-assets/images/image/Video_RGB_blue_60px.svg", ENDITEM, 
		"Url=/wcc-assets/content/dam/hp-wcc/headless-assets/images/image/virtual_assistant--281-29.svg", ENDITEM, 
		"Url=/wcc-assets/content/dam/hp-wcc/headless-assets/images/image/Print_and_scan_doctor_RGB_blue_60px.svg", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-PDHM2PK", ENDITEM, 
		"Url=https://nexus.ensighten.com/hp/support_stage/code/3ce08cf7c65e410fd9cf20d6115a04e1.js?conditionId0=285030", ENDITEM, 
		"Url=/wcc-assets/content/dam/hp-wcc/headless-assets/images/image/HP_Support_Community_RGB_Blue_60px--281-29.svg", ENDITEM, 
		"Url=https://www.hp.com/cma/ng/lib/exceptions/privacy-banner-test.js", ENDITEM, 
		"Url=https://met2.hp.com/id?d_visid_ver=4.4.0&d_fieldgroup=A&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&mid=08591924630434647791908474614756096862&ts=1621426385473", ENDITEM, 
		"Url=https://dpm.demdex.net/demconf.jpg?et:ibs%7cdata:dpid=411&dpuuid=YKUA0gAAAD4fMjYz", ENDITEM, 
		"Url=https://cdn.cookielaw.org/scripttemplates/otSDKStub.js", ENDITEM, 
		"Url=https://nebula-cdn.kampyle.com/us/wu/541318/onsite/generic1621354891461.js", ENDITEM, 
		"Url=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e0a0fc2a-044d-41af-bd55-2f56dd8162df.json", ENDITEM, 
		"Url=https://nebula-cdn.kampyle.com/resources/onsite/js/cool-2.1.15.min.js", ENDITEM, 
		"Url=/wcc-assets/images/favicon.ico", ENDITEM, 
		"Url=https://geolocation.onetrust.com/cookieconsentpub/v1/geo/location", ENDITEM, 
		"Url=https://cdn.cookielaw.org/scripttemplates/6.17.0/otBannerSdk.js", ENDITEM, 
		"Url=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjIxMiBTYWZhcmkvNTM3LjM2Iiwic2Vzc2lvbl9wbGF0Zm9ybSI6ICJXaW4zMiIsInRyYWNrZXJfdHlwZSI6ICJqYXZhc2NyaXB0IiwidHJhY2tlcl92ZXJzaW9uIjogIjIuMS4xNSIsImV2ZW50X25hbWUiOiAiY3JlYXRlU2Vzc2lvbiIsImV2ZW50X3RpbWVzdGFtcF9lcG9jaCI6ICIxNjIxNDI2Mzg3MDU2IiwiZXZlbnRfdGltZXpvbmVfb2Zmc2V0IjogMCwidXNlcl9pZC"
		"I6ICIxNzk4NDhiMzg2ZTg4YS0wMjc0ZWJlMTEyMzcxYy0yMzYzMTYzLTEyNWY1MS0xNzk4NDhiMzg2ZmJkOCIsInVybCI6ICJodHRwczovL3Bwc3N1cHBvcnQtaXRnbGxiaDcuaW5jLmhwLmNvbS91cy1lbi9wcmludGVyLXNldHVwL2hwLWRlc2tqZXQtMzcwMC1hbGwtaW4tb25lLXByaW50ZXItc2VyaWVzLzg5NTQyNTMvbW9kZWwvMTEyNjIwMzUiLCJmb3JtSWQiOiBudWxsLCJmb3JtVHJpZ2dlclR5cGUiOiBudWxsLCJrYW1weWxlX2RhdGEiOiB7IkxBU1RfSU5WSVRBVElPTl9WSUVXIjogIiIsIkRFQ0xJTkVEX0RBVEUiOiAiIiwia2FtcHlsZUludml0ZVByZXNlbnRlZCI6ICIiLCJrYW1weWxlX3VzZXJpZCI6ICI5NjUwLTliN2QtYzdiOC1lZDFmLTk2N2MtNmZj"
		"NS0zNmJiLTE5NjQiLCJrYW1weWxlVXNlclNlc3Npb24iOiAiIiwia2FtcHlsZVVzZXJQZXJjZW50aWxlIjogIiIsIlNVQk1JVFRFRF9EQVRFIjogIiIsImFkZGl0aW9uYWxEYXRhIjogeyJ1c2VyX3Nlc3Npb24iOiAiIiwiZGlyZWN0X25hdmlnYXRpb24iOiB0cnVlLCJkaWZmcmVudF9yZWZlcnJlciI6IHRydWV9fSwiY29va2llX3NpemUiOiAxNDY5LCJrYW1weWxlX3ZlcnNpb24iOiAiMi4zOC4wIiwib25zaXRlX3ZlcnNpb24iOiAiMi4zOC4wIiwiaGlzdG9yeV9sZW5ndGgiOiAxLCJldmVudF9sb2NhbF90aW1lc3RhbXAiOiAxNjIxNDI2Mzg2OTUxLCJwb3NpdGlvbiI6IG51bGwsImlzVXNlcklkZW50aWZpZWQiOiBmYWxzZSwiZmVlZGJhY2tfY29ycmVsYXRpb2"
		"5fdXVpZCI6IG51bGx9Cl19", ENDITEM, 
		"Url=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjIxMiBTYWZhcmkvNTM3LjM2Iiwic2Vzc2lvbl9wbGF0Zm9ybSI6ICJXaW4zMiIsInRyYWNrZXJfdHlwZSI6ICJqYXZhc2NyaXB0IiwidHJhY2tlcl92ZXJzaW9uIjogIjIuMS4xNSIsImV2ZW50X25hbWUiOiAibmVidWxhX3BhZ2VfdmlldyIsImV2ZW50X3RpbWVzdGFtcF9lcG9jaCI6ICIxNjIxNDI2Mzg3MDY1IiwiZXZlbnRfdGltZXpvbmVfb2Zmc2V0IjogMCwidXNlcl"
		"9pZCI6ICIxNzk4NDhiMzg2ZTg4YS0wMjc0ZWJlMTEyMzcxYy0yMzYzMTYzLTEyNWY1MS0xNzk4NDhiMzg2ZmJkOCIsImVudmlyb21lbnQiOiAicHJvZFVzT3JlZ29uIiwiYWNjb3VudElkIjogNTQxMTE0LCJ1cmwiOiAiaHR0cHM6Ly9wcHNzdXBwb3J0LWl0Z2xsYmg3LmluYy5ocC5jb20vdXMtZW4vcHJpbnRlci1zZXR1cC9ocC1kZXNramV0LTM3MDAtYWxsLWluLW9uZS1wcmludGVyLXNlcmllcy84OTU0MjUzL21vZGVsLzExMjYyMDM1Iiwid2Vic2l0ZUlkIjogNTQxMzE4LCJmb3JtSWQiOiBudWxsLCJmb3JtVHJpZ2dlclR5cGUiOiBudWxsLCJrYW1weWxlX2RhdGEiOiB7IkxBU1RfSU5WSVRBVElPTl9WSUVXIjogIiIsIkRFQ0xJTkVEX0RBVEUiOiAiIiwia2Ft"
		"cHlsZUludml0ZVByZXNlbnRlZCI6ICIiLCJrYW1weWxlX3VzZXJpZCI6ICI5NjUwLTliN2QtYzdiOC1lZDFmLTk2N2MtNmZjNS0zNmJiLTE5NjQiLCJrYW1weWxlVXNlclNlc3Npb24iOiAiMTYyMTQyNjM4Njk1MSIsImthbXB5bGVVc2VyUGVyY2VudGlsZSI6ICIiLCJTVUJNSVRURURfREFURSI6ICIifSwiY29va2llX3NpemUiOiAxNTc4LCJrYW1weWxlX3ZlcnNpb24iOiAiMi4zOC4wIiwib25zaXRlX3ZlcnNpb24iOiAiMi4zOC4wIiwiaGlzdG9yeV9sZW5ndGgiOiAxLCJldmVudF9sb2NhbF90aW1lc3RhbXAiOiAxNjIxNDI2Mzg2OTU0LCJwb3NpdGlvbiI6IG51bGwsImlzVXNlcklkZW50aWZpZWQiOiBmYWxzZSwiZmVlZGJhY2tfY29ycmVsYXRpb25fdXVpZC"
		"I6IG51bGx9Cl19", ENDITEM, 
		"Url=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e688e508-0267-4c09-a64b-7c03f7e759ce/en-ie.json", ENDITEM, 
		"Url=https://d.impactradius-event.com/A353853-8e85-4786-9645-fac6b773cd071.js", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-MQML682", ENDITEM, 
		"Url=https://www.redditstatic.com/ads/pixel.js", ENDITEM, 
		"Url=https://bat.bing.com/bat.js", ENDITEM, 
		"Url=https://s.yimg.com/wi/ytc.js", ENDITEM, 
		"Url=https://www.googleadservices.com/pagead/conversion_async.js", ENDITEM, 
		"Url=https://px.owneriq.net/stas/s/7kxod6.js", ENDITEM, 
		"Url=https://www.facebook.com/tr?id=1688171794549438&ev=PageView&noscript=1&gtmcb=267844442", ENDITEM, 
		"Url=https://ct.pinterest.com/v3/?event=init&tid=2613604734453&noscript=1&gtmcb=708601687", ENDITEM, 
		"Url=https://px.ads.linkedin.com/collect?pid=40922&fmt=gif&cookiesTest=true", ENDITEM, 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/687393200/?random=1621426388281&cv=9&fst=1621426388281&num=1&userId=null&guid=ON&resp=GooglemKTybQhCsO&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&tiba="
		"HP%20DeskJet%203755%20All-in-One%20Printer%20Setup%20%7C%20HP%C2%AE%20Support&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", ENDITEM, 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/854101013/?random=1621426388293&cv=9&fst=1621426388293&num=1&guid=ON&resp=GooglemKTybQhCsO&eid=2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&tiba="
		"HP%20DeskJet%203755%20All-in-One%20Printer%20Setup%20%7C%20HP%C2%AE%20Support&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", ENDITEM, 
		"Url=https://px.owneriq.net/j/?ref=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035&pt=7kxod6&t=f%7C%22HP%2520DeskJet%25203755%2520All-in-One%2520Printer%2520Setup%2520%257C%2520HP%25C2%25AE%2520Support%22&s=6ka7", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/849111477/?guid=ON&script=0&userId=null&is_vtc=1&random=2706217828", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/783157761/?guid=ON&script=0&userId=null&is_vtc=1&random=1423797529", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/687393200/?random=1621426388281&cv=9&fst=1621425600000&num=1&userId=null&guid=ON&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&tiba=HP%20DeskJet%203755%20All-in-One%20Printer%20Setup%20%7C%20HP%C2%AE%20Support&async=1&fmt=3"
		"&is_vtc=1&random=854872174&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", ENDITEM, 
		"Url=https://www.google.com/pagead/1p-user-list/854101013/?random=1621426388293&cv=9&fst=1621425600000&num=1&guid=ON&eid=2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&tiba=HP%20DeskJet%203755%20All-in-One%20Printer%20Setup%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&"
		"random=2316680945&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", ENDITEM, 
		"Url=https://sp.analytics.yahoo.com/sp.pl?a=10000&d=Wed%2C%2019%20May%202021%2012%3A13%3A09%20GMT&n=0&b=HP%20DeskJet%203755%20All-in-One%20Printer%20Setup%20%7C%20HP%C2%AE%20Support&.yp=10044594&f=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&enc=UTF-8&yv=1.9.2&tagmgr=gtm%2Censighten", ENDITEM, 
		"Url=https://www.ojrq.net/p/?return=&cid=5105&tpsync=no", ENDITEM, 
		"Url=https://met2.hp.com/b/ss/hphqglobal,hphq-ces-global-stage-temp,hphq-ces-na-stage-temp/1/JS-2.15.0/s2505653468122?AQB=1&ndh=1&pf=1&t=19%2F4%2F2021%2012%3A13%3A10%203%200&mid=08591924630434647791908474614756096862&aamlh=9&ce=UTF-8&ns=hpcorp&pageName=D%3Dv55&g=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&ch=pps&server=ppssupport-itgllbh7.inc.hp.com&events=event46%2Cevent45%3D113%2Cevent11&aamb="
		"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1=us-en&v2=us&c3=Printer_Product_Details&v3=en&c7=us&c8=en&c9=cs%3Aconsumer.home&c12=R11839&v12=Anonymous&c15=39&c26=D%3Dv12&c31=null&v32=null&v33=null&v34=null&v35=null&c43=null&v46=D%3Dc3&c49=D%3Dg&c50=D%3Dg&c51=hpexpnontridion%3Aihfcaas.5.r&c55=null&v55=pps-ces%7Cprinter_product_details&c56=null&c57=null&c58=null&c59=null&c61=0001%3A0001%3A00&c63=Initial&c66=08591924630434647791908474614756096862&v90="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&v92=ens%7Csupport_stage%7C04-May-2021%2007%3A24%3A28&v93=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series&v94=ppssupport-itgllbh7.inc.hp.com&v95=ppssupport-itgllbh7.inc.hp.com%3AUnknown%7CUnknown%7CAMS%7Cus%3Aen%7CUSD&v99=11&s=1463x823&c=24&j=1.6&v=N&k=Y&bw=1626&bh=792&mcorgid="
		"5E34123F5245B2CD0A490D45%40AdobeOrg&AQE=1", ENDITEM, 
		"Url=/wcc-assets/content/dam/hp-wcc/headless-assets/images/print-steps/step1.svg", ENDITEM, 
		"Url=/wcc-assets/images/play-btn-thumb-light.svg", ENDITEM, 
		"Url=/wcc-assets/content/dam/hp-wcc/headless-assets/images/print-steps/step2.svg", ENDITEM, 
		"Url=https://img.youtube.com/vi/tg2BHRfT2a4/hqdefault.jpg", ENDITEM, 
		"Url=https://img.youtube.com/vi/POOPv1DNqMc/hqdefault.jpg", ENDITEM, 
		"Url=https://img.youtube.com/vi/RAGcWMj7uX4/hqdefault.jpg", ENDITEM, 
		"Url=https://img.youtube.com/vi/i6RWoZjynIo/hqdefault.jpg", ENDITEM, 
		"Url=https://img.youtube.com/vi/h6gYJ-Dkk_U/hqdefault.jpg", ENDITEM, 
		"Url=/wcc-assets/content/dam/hp-wcc/headless-assets/images/print-steps/step-3.svg", ENDITEM, 
		"Url=/wcc-assets/content/dam/hp-wcc/headless-assets/images/os-images/windows.png", ENDITEM, 
		"Url=/wcc-assets/images/arrow-dark-right.svg", ENDITEM, 
		"Url=/wps/wcm/connect/pps/b8dfa379-5b57-48f0-be3d-f3a88e26edb2/windows.svg?MOD=AJPERES&ContentCache=NONE&CACHE=NONE", ENDITEM, 
		"Url=https://img.youtube.com/vi/4yc1HKqkNC4/hqdefault.jpg", ENDITEM, 
		"Url=https://img.youtube.com/vi/zOUZFbOj7Jg/hqdefault.jpg", ENDITEM, 
		"Url=https://img.youtube.com/vi/6WE23PI5q6o/hqdefault.jpg", ENDITEM, 
		"Url=https://tag.apxlv.com/tag/partner/222?c_i=2&jid=948d9958b89b11eb883dc396f981cbf3&ld=2&pixel_mode=pixel", ENDITEM, 
		"Url=https://www.facebook.com/tr?id=1688171794549438&ev=ConsumerEngagement&noscript=1&gtmcb=775135854", ENDITEM, 
		"Url=https://www.facebook.com/tr?id=1282296701803562&ev=ConsumerEngagement&noscript=1&gtmcb=703910661", ENDITEM, 
		"Url=https://www.facebook.com/tr?id=1524986591042566&ev=ConsumerEngagement&noscript=1&gtmcb=265602576", ENDITEM, 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("printerSetup", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/termbase/us-en/printerSetup", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("printerSetup_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/config/us-en/printerSetup", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t7.inf", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"PrintSetup_Model\",\"path\":\"/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035\",\"seriesoid\":\"8954253\",\"modeloid\":\"11262035\"}", 
		LAST);

	web_url("us-en", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/printsetup/spos/us-en?oid=11262035&os=Windows%20NT%2010.0;%20Win64;%20x64&osbit=64", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_second_Nav", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("country-selector.json", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/data/country-selector.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_alerts", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/us-en/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("productdata", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/productdata", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"seriesoid\":\"8954253\",\"modeloid\":\"11262035\",\"isMobile\":false,\"cc\":\"us\",\"lc\":\"en\"}", 
		LAST);

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_url("us-en_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/printsetup/ssr/us-en?oid=11262035&os=Windows%20NT%2010.0;%20Win64;%20x64&osbit=64&standardOids=18972,238445,1142650,8954252,8954253,11262035", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.4.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=5E34123F5245B2CD0A490D45%40AdobeOrg&d_nsid=0&ts=1621426384785", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIeCQm5IDdCfdi5EgUNnyyLRBIFDZ8si0QSBQ1g__SLGK6pygE=?alt=proto", "Referer=", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/clientlib-hf-fontface-core/resources/fonts/HPSimplifiedRegular.woff", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/clientlib-hf-fontface-core/resources/fonts/HpSimplifiedLight.woff", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/footericons.woff", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/newhplogo.ttf", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", ENDITEM, 
		"Url=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/fonts_header_icons.woff", "Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", ENDITEM, 
		LAST);

	web_url("dest5.html", 
		"URL=https://hp.demdex.net/dest5.html?d_nsid=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("pageview", 
		"URL=https://c.contentsquare.net/pageview?pid=1255&uu=900fde78-c17f-aa79-df29-25bdb0937a7d&sn=1&lv=1621426385&lhd=1621426385&hd=1621426385&pn=1&re=1&dw=48029&dh=1710&ww=1626&wh=792&sw=1463&sh=823&dr=&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&uc=1&la=en-US&cvars=%7B%221%22%3A%5B%22Template%22%2C%22Printer_Product_Details%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&cvarp="
		"%7B%221%22%3A%5B%22Template%22%2C%22Printer_Product_Details%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&v=10.8.6&r=272187", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("pageEvent", 
		"URL=https://c.contentsquare.net/pageEvent?value=MIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA&isETR=false&v=10.8.6&pid=1255&uu=900fde78-c17f-aa79-df29-25bdb0937a7d&sn=1&pn=1&r=691676", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("auth", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&1839455458&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"900fde78-c17f-aa79-df29-25bdb0937a7d\",\"sessionNumber\":1,\"pageNumber\":1},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035\"}", 
		LAST);

	web_custom_request("events", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"18956663993\",\"revision\":\"854\",\"visitors\":[{\"visitor_id\":\"oeu1621426385002r0.18154452102609198\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\""
		"t\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1621426385048}],\"snapshots\":[{\"activationTimestamp\":1621426384998,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"c24c3745-d32d-4600-964d-c98cbf160826\",\"t\":1621426385026}]},{\"activationTimestamp\":1621426384998,\"decisions\":[{\"c\":\"19196990151\",\"x\":\"19193020337\",\"v\":\"19192010016\",\"h\""
		":false}],\"events\":[{\"e\":\"19196990151\",\"y\":\"campaign_activated\",\"u\":\"c7735ff8-5240-4a3d-89f9-107eb0c0e14c\",\"t\":1621426385051},{\"e\":\"19181870067\",\"k\":\"18956663993_url_targeting_for_rdr294_hide_give_feedback_option_o\",\"t\":1621426385052,\"u\":\"a4bf52b9-189b-4aac-ac55-ac0f23298e9b\",\"y\":\"view_activated\",\"a\":{}}]}]}]}", 
		LAST);

	web_url("otCenterRounded.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/otCenterRounded.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("otPcTab.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/v2/otPcTab.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIlCSRB9BKDV159EgUNnyyLRBIFDZ8si0QSBQ1g__SLEgUNpZM2JBiuqcoB?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_url("10044594.json", 
		"URL=https://s.yimg.com/wi/config/10044594.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("0", 
		"URL=https://bat.bing.com/action/0?ti=13015798&tm=gtm001&Ver=2&mid=d0961df2-7b2d-4bc6-b120-0524d339433f&sid=926ae1d0b89b11ebb03b0fc70ab12b42&vid=926b34b0b89b11eba623f71c6f9f6279&vids=1&pi=1200101525&lg=en-US&sw=1463&sh=823&sc=24&tl=HP%20DeskJet%203755%20All-in-One%20Printer%20Setup%20%7C%20HP%C2%AE%20Support&kw=hp%20deskjet%203755%20all-in-one%20printer%20setup,hp%20deskjet%203755%20all-in-one%20printer%20set%20up&p="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&r=&lt=7952&evt=pageLoad&msclkid=N&sv=1&rn=847755", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("rxVisitor=16214263826695U74C6Q5UFSMTJV43R0EF1G1IPD3KHIG; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtLatC=1187; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621426385002r0.18154452102609198; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Printer_Product_Details%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_id=900fde78-c17f-aa79-df29-25bdb0937a7d.1621426385.1.1621426385.1621426385.1589380098.1655590385747.None.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CMCMID%7C08591924630434647791908474614756096862%7CMCAAMLH-1622031185%7C9%7CMCAAMB-1622031185%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621433586s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18774%7CvVersion%7C4.4.0; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("rxvt=1621428186501|1621426382676; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtPC=1$226382660_629h-vPDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0e1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+May+19+2021+12%3A13%3A07+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=9d5489c5-763c-4983-bc9d-d544ff118051&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dcm_s=1621426387511.1789366942; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_gcl_au=1.1.223435945.1621426388; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_rdt_uuid=1621426388021.1edaea6a-f114-43af-b437-c6983288c314; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_5105=1621426388034%7C365159%7C1621426388034%7C%7C; DOMAIN=linkto.ext.hp.com");

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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=srcref=&landurl=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&&_ir=U364%7C%7C1621426388034", 
		LAST);

	web_add_cookie("kampyle_userid=9650-9b7d-c7b8-ed1f-967c-6fc5-36bb-1964; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1621426386951; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleSessionPageCounter=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("cd_user_id=179848b386e88a-0274ebe112371c-2363163-125f51-179848b386fbd8; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv1_prefs=null; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+May+19+2021+12%3A13%3A07+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=9d5489c5-763c-4983-bc9d-d544ff118051&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dcm_s=1621426387511.1789366942; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_gcl_au=1.1.223435945.1621426388; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_rdt_uuid=1621426388021.1edaea6a-f114-43af-b437-c6983288c314; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_5105=1621426388034%7C365159%7C1621426388034%7C%7C; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetsid=926ae1d0b89b11ebb03b0fc70ab12b42; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetvid=926b34b0b89b11eba623f71c6f9f6279; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_8A7EF750D27317B56569EB8961AA4E2D_perc_100000_ol_0_mul_1&svrid=1&flavor=post&visitID=PDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&app=ea7c4b59f27d43eb&crc=2471354566&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1621426378555%7C1621426386507%7Cdn%7C1623%2C2%7C2%7C_onload_%7C_load_%7C-%7C1621426386504%7C1621426386507%7Cdn%7C1623$PV=1$rId=RID_-1200270252$rpId=-1503926396$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035$title=HP%20DeskJet%203755%20All-in-One%20Printer%20Setup%20%7C%20HP%C2%AE%20Support$latC=1187$app=ea7c4b59f27d43eb$visitID="
		"PDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0$vs=2$fId=226382660_629$v=10215210506134512$time=1621426389258", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,idgpnmonknjnojddfkpgkljpfnnfcklj,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-90.0.4430.212");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:75385308&cup2hreq=1a1e09f1b7e14552653a9d08bda0ec8b80aefd6988254844b9eb0eb59a1ae216", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{3673ff2d-fb3e-4cd9-bab0-1da4e1713757}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{da3d16fb-5b18-4cdd-a876-3fc4d24e5106}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{5a375edb-fc6e-457d-ba84-fdc4f6da9a66}\",\"rd\":5252},\"updatecheck\":{"
		"},\"version\":\"14.5\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{95b0d171-e3d8-4122-99da-7f708489fdae}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\""
		"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{475ef766-619c-4aba-aeac-bb4a508003d2}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.37a9146e17a5ffa3b7f05fce240a2a6cc67c07be3f6309d2d600d0310de696a9\"}]},\"ping\":{\"ping_freshness\":\"{5afd423b-8551-47c2-a278-83ad94f0e52e}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.29.0"
		"\"},{\"appid\":\"idgpnmonknjnojddfkpgkljpfnnfcklj\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.20\"}]},\"ping\":{\"ping_freshness\":\"{3e401d83-a598-4ac4-bcd1-f1477057d113}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"3.1.20\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\""
		"ping\":{\"ping_freshness\":\"{7edebb25-702b-4460-b812-7abe64d6c434}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.3\"}]},\"ping\":{\"ping_freshness\":\"{fabcb8be-cf34-40b8-91a1-5c882f15c1a6}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.05bc4a6e12744e61576e531c7602778bf2316598236e1bb2b87a664fd2aee8c5\"}]},\"ping\":{\"ping_freshness\":\"{84c7ed60-3f95-49f2-90ef-eebae83fa6c5}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"9021.222.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.212\",\"protocol\":\"3.1\",\"requestid\":\"{c6d19489-0cbf-4c26-ba63-9bd37abbf3da}\",\"sessionid\":\"{5c5be78a-7d2a-411c-9cf3-9126c5cd518a}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.212\"}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("eps", 
		"URL=https://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6747127892022519543J&l=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_8.pb", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("ep", 
		"URL=https://px.owneriq.net/ep?sid%5B%5D=14558757392&sid%5B%5D=14558757397&sid%5B%5D=14558757402&sid%5B%5D=8460259172&sid%5B%5D=8460259192&pt=7kxod6&uid=Q6747127892022519543J&jcs=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://idsync.rlcdn.com/379208.gif?partner_uid=Q6747127892022519543J", "Referer=https://px.owneriq.net/", ENDITEM, 
		LAST);

	web_add_cookie("dtCookie=v_4_srv_1_sn_8A7EF750D27317B56569EB8961AA4E2D_perc_100000_ol_0_mul_1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("contact-hp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/contact-hp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://tapestry.tapad.com/tapestry/1?ta_partner_id=916&ta_partner_did=Q6747127892022519543J&ta_format=png", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://dpm.demdex.net/demconf.jpg?et:ibs%7cdata:dpid=53196&dpuuid=Q6747127892022519543J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://simage2.pubmatic.com/AdServer/Pug?vcode=bz0yJnR5cGU9MSZjb2RlPTI2NDYmdGw9MTI5NjAw&piggybackCookie=Q6747127892022519543J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://pixel.rubiconproject.com/tap.php?v=11581&nid=2395&put=Q6747127892022519543J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://us-u.openx.net/w/1.0/sd?cc=1&id=537073059&val=Q6747127892022519543J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://px.owneriq.net/cm?id=&esi=1&google_error=3", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://dsum.casalemedia.com/rum?cm_dsp_id=31&external_user_id=Q6747127892022519543J&C=1", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://ib.adnxs.com/bounce?%2Fsetuid%3Fentity%3D13%26code%3DQ6747127892022519543J", "Referer=https://px.owneriq.net/", ENDITEM, 
		"Url=https://px.owneriq.net/fr/epx.gif", "Referer=https://px.owneriq.net/", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("dvar", 
		"URL=https://c.contentsquare.net/dvar?v=10.8.6&pid=1255&uu=900fde78-c17f-aa79-df29-25bdb0937a7d&sn=1&pn=1&dv=N4IgpgaghgTgjAJhALhAQQHYHsME8C2WArgM4gA0IADjFlQMwogAKMAlhgC5gwD6rWACZEAxp14ARMJyhsANmUo06cJqQC0YDCAC%2BQAA&r=088136", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("IR_PI=93210b0d-b89b-11eb-9a1c-42010a246c50%7C1621512788034; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=%5B%5BB%5D%5D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C46%2C46%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("us-en_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/printsetup/ssr/us-en?oid=11262035&os=Windows%20NT%2010.0;%20Win64;%20x64&osbit=64&standardOids=18972,238445,1142650,8954252,8954253,11262035&userType=Anonymous", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("resources", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/printsetup/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"os\":\"Windows NT 10.0; Win64; x64\",\"selectedOs\":null,\"osbit\":\"64\",\"osTmsId\":null,\"osParentTmsId\":null,\"cc\":\"us\",\"lc\":\"en\",\"metaData\":{\"imageUri\":\"https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c05553372.png\",\"thumbnailUri\":null,\"supportSubcategoryOid\":1142650,\"productNumberOid\":11262037,\"productLineCode\":\"2N\",\"audience\":\"HHO\",\"productNumber\":\"J9V90A\",\"productNameOid\":11262035,\"productName\":\"HP DeskJet 3755 All-in-One "
		"Printer\",\"productSeriesOid\":8954253,\"productBigSeriesOid\":8954252,\"serialNumber\":null,\"productPlatform\":\"Lhasa\",\"productSeriesName\":\"HP DeskJet 3700 All-in-One Printer series\",\"productSeriesSEOName\":\"hp-deskjet-3700-all-in-one-printer-series\",\"seriesLevelAudienceFlag\":\"Consumer\",\"seriesLevelActiveWebSupport\":true,\"seriesLevelHistorical\":false,\"modelLevelAudienceFlag\":\"HHO\",\"modelLevelActiveWebSupport\":true,\"modelLevelHistorical\":false,\"nonSerializedFlag\":null,"
		"\"printSetupEligible\":true,\"seriesContext\":false,\"modelContext\":true,\"chatbot\":true,\"customHierarchySet\":[\"268161584258236861743175748903686\",\"254133427475504699376875279529023\",\"896860184511388392552387080656597\",\"8954253\"],\"redirectUrl\":null,\"customResourceOids\":[11262035,8954253],\"standardHierarchySet\":[18972,238445,1142650,8954252,8954253,11262035]},\"userType\":\"Anonymous\"}", 
		LAST);

	web_custom_request("steps", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/printsetup/steps", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"os\":\"Windows NT 10.0; Win64; x64\",\"selectedOs\":null,\"osbit\":\"64\",\"osTmsId\":null,\"osParentTmsId\":null,\"cc\":\"us\",\"lc\":\"en\",\"metaData\":{\"imageUri\":\"https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c05553372.png\",\"thumbnailUri\":null,\"supportSubcategoryOid\":1142650,\"productNumberOid\":11262037,\"productLineCode\":\"2N\",\"audience\":\"HHO\",\"productNumber\":\"J9V90A\",\"productNameOid\":11262035,\"productName\":\"HP DeskJet 3755 All-in-One "
		"Printer\",\"productSeriesOid\":8954253,\"productBigSeriesOid\":8954252,\"serialNumber\":null,\"productPlatform\":\"Lhasa\",\"productSeriesName\":\"HP DeskJet 3700 All-in-One Printer series\",\"productSeriesSEOName\":\"hp-deskjet-3700-all-in-one-printer-series\",\"seriesLevelAudienceFlag\":\"Consumer\",\"seriesLevelActiveWebSupport\":true,\"seriesLevelHistorical\":false,\"modelLevelAudienceFlag\":\"HHO\",\"modelLevelActiveWebSupport\":true,\"modelLevelHistorical\":false,\"nonSerializedFlag\":null,"
		"\"printSetupEligible\":true,\"seriesContext\":false,\"modelContext\":true,\"chatbot\":true,\"customHierarchySet\":[\"268161584258236861743175748903686\",\"254133427475504699376875279529023\",\"896860184511388392552387080656597\",\"8954253\"],\"redirectUrl\":null,\"customResourceOids\":[11262035,8954253],\"standardHierarchySet\":[18972,238445,1142650,8954252,8954253,11262035]},\"userType\":\"Anonymous\"}", 
		LAST);

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_8A7EF750D27317B56569EB8961AA4E2D_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=PDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&app=ea7c4b59f27d43eb&crc=3346967634&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1621426378555%7C1621426387482%7Cdn%7C1623%2C2%7C3%7C_event_%7C1621426378555%7C_vc_%7CV%7C8927%5Epc%7CVCD%7C6359%7CVCDS%7C5%7CVCS%7C8198%7CVCO%7C11947%7CVCI%7C0%7CVE%7C1018%5Ep176%5Ep450%5Eps%5Esp%3Afirst-child%3Ea%3Anth-child%282%29%7CS%7C5898%2C2%7C4%7C_event_%7C1621426378555%7C_wv_%7ClcpE%7CH3%7ClcpSel%7Ch3%3Anth-of-type%281%29%7ClcpS%7C22619%7ClcpT%7C6671%7ClcpU%7C-%7Cfcp%7C5556%7Cfp%7C5223%7Ccls%7C0.0911%7Clt%7C2226%2C2%7C2%7C_onload_%7C_load_%7C-%7C1621426386504%"
		"7C1621426386507%7Cdn%7C1623%2C1%7C5%7C_event_%7C1621426378555%7C_view_$rId=RID_-1200270252$rpId=-1503926396$domR=1621426386499$tvn=%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035$tvt=1621426378555$w=1626$h=792$sw=1463$sh=823$nt=a0b1621426378555e92f1275g1278h1278i2374j1296k2375l3530m3532o4176p5159q5166r7944s7949t7952u3004v1884w6080M-1503926396$ni=4g|3.6$fd=j2.2.4^sg8.2.3^sb6-10^scontentsquare$url="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035$title=HP%20DeskJet%203755%20All-in-One%20Printer%20Setup%20%7C%20HP%C2%AE%20Support$latC=1187$app=ea7c4b59f27d43eb$visitID=PDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0$vs=2$fId=226382660_629$v=10215210506134512$vID=16214263826695U74C6Q5UFSMTJV43R0EF1G1IPD3KHIG$nV=1$nVAT=1$time=1621426393129", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("events_2", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=4&mdh=792&pn=1&re=1&uu=900fde78-c17f-aa79-df29-25bdb0937a7d&sn=1&lv=1621426385&lhd=1621426385&hd=1621426385&pid=1255&str=1174&di=1802&dc=5570&fl=5578&eu=%5B%5B0%2C17%2C1626%2C792%5D%2C%5B2%2C7019%2C892%2C510%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-printer-setup-steps-page%3Aeq(0)%3Eapp-printer-setup-step%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ep%3Aeq(0)%22%2C63510%2C16806%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("dtLatC=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=pps-ces%7Cprinter_product_details; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-05-19T12:13:15.167Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+May+19+2021+12%3A13%3A15+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=9d5489c5-763c-4983-bc9d-d544ff118051&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C46%2C46%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=pps-ces%257Cprinter_product_details%2C30%2C30%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_8A7EF750D27317B56569EB8961AA4E2D_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=PDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&app=ea7c4b59f27d43eb&crc=3743809608&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1621426395068%7C_wv_%7CAAI%7C1%7CfIS%7C16513%7CfID%7C0$rId=RID_-1200270252$rpId=-1503926396$domR=1621426386499$tvn=%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035$tvt=1621426378555$ni=4g|3.6$fd=b11-50$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035$title="
		"HP%20DeskJet%203755%20All-in-One%20Printer%20Setup%20%7C%20HP%C2%AE%20Support$latC=2$app=ea7c4b59f27d43eb$visitID=PDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0$vs=2$fId=226382660_629$v=10215210506134512$vID=16214263826695U74C6Q5UFSMTJV43R0EF1G1IPD3KHIG$nV=1$time=1621426395232", 
		LAST);

	web_add_cookie("dtLatC=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_8A7EF750D27317B56569EB8961AA4E2D_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=PDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035&app=ea7c4b59f27d43eb&crc=218111865&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035$tvt=1621426378555$ni=4g|3.6$3p="
		"1-1621426378555%3Bmaxcdn.bootstrapcdn.com%7C8%7C1%7C0%7C0%7C0%7C3560_3830%7C271%7C271%7C271%3Bnetdna.bootstrapcdn.com%7Co%7C1%7C0%7C0%7C0%7C3560_3825%7C266%7C266%7C266%7C2%7C0%7C0%7C0%7C4171_4302_5464_5467%7C68%7C3%7C132%3Bppssupport-itgllbh7.inc.hp.com%7Cu%7C9%7C0%7C0%7C0%7C0%7C9%7C%7C0%7C0%7C0%7C4171_4523_5464_6220_6271_7182_8063_8376%7C406%7C259%7C756%7C7%7C0%7C0%7C0%7C0%7C7%7C%7C0%7C0%7C0%7C3562_4630_5158_5395_5416_5685%7C622%7C210%7C1068%7C1%7C0%7C0%7C0%7C3562_4022%7C460%7C460%7C460%7C18%7C0%"
		"7C0%7C0%7C3560_4131_5431_12417%7C764%7C204%7C6985%3Bcdnjs.cloudflare.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C3562_4098%7C537%7C537%7C537%3Bssl.www8.hp.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C3562_3917%7C355%7C355%7C355%3Bt.contentsquare.net%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C4176_4406%7C230%7C230%7C230%3Bcsxd.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C4466_5191%7C725%7C725%7C725%3Bct.contentsquare.net%7C4%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C5245_5686_5699_5864%7C242%7"
		"C121%7C441%3Bnebula-cdn.kampyle.com%7C4%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C5629_5866_7949_8192_8312_8345%7C171%7C32%7C243%3Bnexus.ensighten.com%7Cm%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C6251_6406%7C156%7C156%7C156%7C4%7C0%7C0%7C0%7C0%7C4%7C%7C0%7C0%7C0%7C5697_6060_6596_6896%7C272%7C211%7C363%7C1%7C0%7C0%7C0%7C6305_6454%7C149%7C149%7C149%3Bcdn.optimizely.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C5698_6222%7C525%7C525%7C525%3Bitg-live.www8.hp.com%7Cs%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C"
		"0%7C0%7C6328_6449%7C121%7C121%7C121%7C2%7C0%7C0%7C0%7C6312_6429%7C106%7C94%7C117%7C6%7C0%7C0%7C0%7C5698_6221_6575_7309%7C632%7C523%7C687%3Bdpm.demdex.net%7Cg%7C1%7C0%7C0%7C0%7C6231_6602%7C371%7C371%7C371%3Bssl-product-images.www8-hp.com%7C2%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C6276_6682%7C407%7C407%7C407%3Bwww.googletagmanager.com%7C4%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C6355_7180_9166_9438%7C549%7C272%7C825%3Ba2129670914.cdn.optimizely.com%7Cg%7C1%7C0%7C0%7C0%7C6510_6829%7C319%7C319%7C319"
		"%3Bwww.hp.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C6611_7300%7C688%7C688%7C688%3Bhp.demdex.net%7Cg%7C1%7C0%7C0%7C0%7C6889_7458%7C569%7C569%7C569%3Bmet2.hp.com%7Cg%7C1%7C0%7C0%7C0%7C6919_7654%7C736%7C736%7C736%3Bwr-us.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C7312_7749%7C437%7C437%7C437%3Bc.contentsquare.net%7Cg%7C2%7C0%7C0%7C0%7C7312_7702%7C294%7C244%7C343%3Blogx.optimizely.com%7Cg%7C1%7C0%7C0%7C0%7C7589_8026%7C437%7C437%7C437%3Bcdn.cookielaw.org%7Ck%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C"
		"7740_7933_8610_8715%7C150%7C105%7C194%7C4%7C0%7C0%7C0%7C7944_7994_8728_8775_8824_8876%7C43%7C25%7C52%3Bcm.everesttech.net%7Cg%7C1%7C0%7C0%7C0%7C7822_7892%7C71%7C71%7C71%3Bgeolocation.onetrust.com%7Cg%7C1%7C0%7C0%7C0%7C8034_8608%7C574%7C574%7C574%3Budc-neb.kampyle.com%7C2%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C8523_8727%7C197%7C191%7C203%3Bd.impactradius-event.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8950_9435%7C485%7C485%7C485%3Bbat.bing.com%7Ck%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8"
		"951_9436%7C485%7C485%7C485%7C1%7C1%7C0%7C0%7C9525_10813%7C1206%7C1132%7C1279%3Bwww.redditstatic.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8951_9435%7C484%7C484%7C484%3Bwww.googleadservices.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8952_9688%7C736%7C736%7C736%3Bs.yimg.com%7Ck%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C9165_9686%7C520%7C520%7C520%7C1%7C0%7C0%7C0%7C9714_10657%7C943%7C943%7C943%3Bpx.owneriq.net%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C9166_9690%7C523%7C523%7C523%3Bwww."
		"facebook.com%7Cg%7C1%7C0%7C0%7C0%7C9168_9690%7C523%7C523%7C523%3Bct.pinterest.com%7Cg%7C1%7C0%7C0%7C0%7C9168_10656%7C1488%7C1488%7C1488%3Bad.doubleclick.net%7Cg%7C1%7C1%7C0%7C0%7C9168_12068%7C2626%7C2545%7C2707%3Bgoogleads.g.doubleclick.net%7Cg%7C4%7C0%7C0%7C0%7C9168_11271%7C1562%7C964%7C2103%3Balb.reddit.com%7C2%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C9475_9741%7C266%7C266%7C266%3Blinkto.ext.hp.com%7Cg%7C1%7C0%7C0%7C0%7C9522_10816%7C1295%7C1295%7C1295%3Bpx.ads.linkedin.com%7Cg%7C1%7C0%7C0%7C0%7C"
		"9729_10657%7C927%7C927%7C927%3Bidsync.rlcdn.com%7C2%7C0%7C1%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C11970_11970%7C0%7C0%7C0$rt="
		"1-1621426378555%3Bhttps%3A%2F%2Fmaxcdn.bootstrapcdn.com%2Fbootstrap%2F4.0.0%2Fcss%2Fbootstrap.min.css%7Cb3560e0f9g26h26i199j46k199l228m271u19666v18527w144877K1I11%7Chttps%3A%2F%2Fnetdna.bootstrapcdn.com%2Ffont-awesome%2F4.1.0%2Fcss%2Ffont-awesome.min.css%7Cb3560e0f8g46h46i204j78k204l241m266u5518v4403w20766K1I11%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-regular-ttf.woff2%7Cb3560e0f0g0h0i0j0k8l233m266u35241v34348w34348I11M-633164423%7Chttps%3A%2F%2Fppssupport-itgl"
		"lbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-bold-ttf.woff2%7Cb3560e0f8g8h8i79j25k79l338m348u34054v33160w33160I11M-1395931749%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-light-ttf.woff2%7Cb3560e0f102g102h102i198j119k198l444m456u43213v42320w42320I11M2045446289%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-bold-italic-ttf.woff2%7Cb3561e0f120g120h120i256j138k265l507m521u40031v39140w39140I11M24118389%7Chttps%3A%2F%2Fppssupport-itgllbh"
		"7.inc.hp.com%2Fwcc-assets%2Ffonts%2Fhp_5Fsupport_5Fcontrols.woff2%7Cb3561e0f0g0h0i0j0k270l456m459u9333v8440w8440I11M-1175749481%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-regular-italic-ttf.woff2%7Cb3561e0f139g139h139i278j147k278l555m560u41037v40144w40144I11M1777252203%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-light-italic-ttf.woff2%7Cb3561e0f0g0h0i0j0k348l568m570u42581v41688w41688I11M1595990399%7Chttps%3A%2F%2Fcdnjs.cloudflare"
		".com%2Fajax%2Flibs%2Fjquery%2F2.2.4%2Fjquery.min.js%7Cb3562e0f147g164h164i356j194k356l489m537u28091v26909w85578K1I12%7Chttps%3A%2F%2Fssl.www8.hp.com%2Fus%2Fen%2Fscripts%2Fframework%2Fjquery%2Fv-1-8%2Fcan.jquery.js%7Cb3562e0m355K1I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fstyles.b1ba3e4435944121b1d7.css%7Cb3562e0f78g78h78i194j100k197l454m460u22089v21207w140123K1I11M43170405%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fruntime.9eb1e837f7a9f421fb99.js%7Cb3562e0"
		"f0g0h0i0j0k617l800m801u2620v1725w3652I12M1222811552%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fpolyfills.d301623517a574834b52.js%7Cb3562e0f0g0h0i0j0k618l860m884u35294v34395w105933I12M-1804400638%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fscripts.204dec66716e86a3ab29.js%7Cb3562e0f0g0h0i0j0k621l883m888u30842v29944w84920I12M1286509175%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fmain.d51ea4ffa4730172bdfd.js%7Cb3562e0f0g0h0i0j0k623l885m1068u591634"
		"v590166w2833313I12M-1120747116%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Fsprite-country-flags.png%7Cb4171e0f0g0h0i0j0k17l264m352u108966v108100w108100I11M-2143324522%7Chttps%3A%2F%2Fnetdna.bootstrapcdn.com%2Ffont-awesome%2F4.1.0%2Ffonts%2Ffontawesome-webfont.woff%3Fv%3D4.1.0%7Cb4171e0f0g0h0i0j0k22l67m132u84865v83760w83760I11%7Chttps%3A%2F%2Ft.contentsquare.net%2Fuxa%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%7Cb4176e0m230I12%7Chttps%3A%2F%2Fcsxd.contentsquare.net%2Fuxa%2"
		"Fxdframe-single-domain-1.1.0.html%3Fpid%3D1255%26cookieNames%3D_5Fcs_5Fid%5Ec_5Fcs_5Fs%5Ec_5Fcs_5Fcvars%5Ec_5Fcs_5Fex%7Cb4466e0m725Bi1I4%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fpages-printer-setup-printer-setup-module-ngfactory.8f7f8b6bbdbcd678c125.js%7Cb5158e0f0g0h0i0j0k3l233m237u28100v27203w147945K1I12M850879641%7Chttps%3A%2F%2Fct.contentsquare.net%2Fptc%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%7Cb5245e0m441I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2F"
		"content%2Fdam%2Fhp-wcc%2Flibs%2Fscripts%2Fthird_5Fparty_5Flib.js%7Cb5416e0f0g0h0i0j0k3l265m268u2050v1098w3582K1I12M1507030931%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Flibs%2Fscripts%2Fmedallia.js%7Cb5417e0f0g0h0i0j0k3l208m210u1360v409w1237K1I12M-775534489%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fssc%2Fregion%7Cb5431e0f0g0h0i0j0k4l204m204u1352v749w4665z1I1M655363903%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fcontact-"
		"hp%7Cb5432e0f0g0h0i0j0k4l6510m6985u42134v40985w214053z1I1M460281086%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fssc%2Fconfig%2Fus-en%2FprinterSetup%7Cb5433e0f0g0h0i0j0k7l248m252u2015v1411w4471z1I1M1955180680%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Ftermbase%2Fus-en%2FprinterSetup%7Cb5434e0f0g0h0i0j0k7l247m249u3152v2548w8136z1I1M1758330178%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fprintsetup%2Fspos%2Fus-en%3Foid%3D11262035%26os%3DWind"
		"ows_2520NT_252010.0%5Es_2520Win64%5Es_2520x64%26osbit%3D64%7Cb5451e0f0g0h0i0j0k176l405m407u696v93w77z1I1M1014719375%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fsitemap%2Fhref%7Cb5453e0f0g0h0i0j0k183l384m385u1029v400w4321z1I1M-1162432184%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fcms-v2%2Fus-en%2Fwcc_5Fsecond_5FNav%7Cb5454e0f0g0h0i0j0k232l423m423u1477v873w4203z1I1M1668969991%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fcms-v1%2Fus-en%2Fwcc"
		"_5Fsitehome_5Falerts%7Cb5454e0f0g0h0i0j0k232l433m434u889v286w372z1I1M461706426%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fdata%2Fcountry-selector.json%7Cb5455e0f0g0h0i0j0k234l429m430u2643v1730w15625z1I1M2133472199%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Ficons.png%7Cb5464e0f0g0h0i0j0k375l612m756u42979v42139w42139I9M-1099219191%7Chttps%3A%2F%2Fnetdna.bootstrapcdn.com%2Ffont-awesome%2F4.1.0%2Ffonts%2Ffontawesome-webfont.woff%3Fv%3D4.1.0%7Cb5464e0f0g0h"
		"0i0j0k2l2m3v83760w83760I9%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fwu%2F541318%2Fonsite%2Fembed.js%7Cb5629e0m238K1I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fproductdata%7Cb5694e0f0g0h0i0j0k170l450m523u1249v620w1193z1I1M-1228089085%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2FBootstrap.js%7Cb5697e0m363I12%7Chttps%3A%2F%2Fcdn.optimizely.com%2Fjs%2F18956663993.js%7Cb5698e0f2g78h78i231j93k231l360m525u129588v128507w448951I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%"
		"2Fcaas%2Fheader-footer%2Fus%2Fen%2Fdefault%2Flatest.r%3FcontentType%3Djs%26hide_5Fsearch%3Dtrue%26show_5Fshopping_5Fcart%3Dtrue%26hide_5Fcountry_5Fselector%3Dtrue%7Cb5698e0m523I12%7Chttps%3A%2F%2Fct.contentsquare.net%2Fpcc%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%3FDeploymentConfigName%3DRelease_5F20210426%26Version%3D5%7Cb5699e0m121I12%7Chttps%3A%2F%2Fct.contentsquare.net%2Fwww%2Flatest-WR110.js%7Cb5700e0m165I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Fflags%2Fflag_"
		"5Fus.gif%7Cb5912e0f0g0h0i0j0k2l178m305u1430v595w595N3O16P11I7M807578593%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_5Fvisid_5Fver%3D4.4.0%26d_5Ffieldgroup%3DMC%26d_5Frtbd%3Djson%26d_5Fver%3D2%26d_5Forgid%3D5E34123F5245B2CD0A490D45_2540AdobeOrg%26d_5Fnsid%3D0%26ts%3D1621426384785%7Cb6231e0m371z1I1%7Chttps%3A%2F%2Fnexus.ensighten.com%2Ferror%2Fe.gif%7Cb6251e0m156I7%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fus-en%3Foid%3D11262035%26os%3DWindows_2520NT_252010.0%5Es_2520Win64%5Es_2520x64%26osbit%3D64%26stand"
		"ardOids%3D18972%5Ec238445%5Ec1142650%5Ec8954252%5Ec8954253%5Ec11262035%7Cb6255e0f0g0h0i0j0k70l281m281u1454v850w2299z1I1M-122225874%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Ffe-assets%2Fimages%2Fsrch_5Ficon.svg%7Cb6271e0f0g0h0i0j0k56l480m536u1467v482w735N3O25P25Q150R150I7M-1202861701%7Chttps%3A%2F%2Fssl-product-images.www8-hp.com%2Fdigmedialib%2Fprodimg%2Flowres%2Fc05553372.png%7Cb6276e0m407I9%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2F"
		"serverComponent.php%7Cb6305e0m149K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fus%2Fen%2Fclientlib-hf-fontface.css%7Cb6312e0m94K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-r-css.css%7Cb6313e0m117K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hf-js.js%7Cb6328e0m121K1I12%7Chttp"
		"s%3A%2F%2Fwww.googletagmanager.com%2Fgtm.js%3Fid%3DGTM-PDHM2PK%7Cb6355e0m825I12%7Chttps%3A%2F%2Fa2129670914.cdn.optimizely.com%2Fclient_5Fstorage%2Fa2129670914.html%7Cb6510e0m319Bi2I4%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fimage%2Fvirtual_5Fassistant--281-29.svg%7Cb6569e0f0g0h0i0j0k4l207m261u4754v3943w10118E1F178O60P60Q70R70I7M845944179%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fh"
		"eadless-assets%2Fimages%2Fimage%2FPrint_5Fand_5Fscan_5Fdoctor_5FRGB_5Fblue_5F60px.svg%7Cb6569e0f0g0h0i0j0k4l228m260u1335v514w922E1F178O60P49Q184R150I7M-683438885%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fimage%2FVideo_5FRGB_5Fblue_5F60px.svg%7Cb6569e0f0g0h0i0j0k6l206m259u1173v367w576E1F178O60P34Q263R150I7M-1786450188%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages"
		"%2Fimage%2FHP_5FSupport_5FCommunity_5FRGB_5FBlue_5F60px--281-29.svg%7Cb6570e0f0g0h0i0j0k9l609m612u2240v1223w2905E1F178O60P60Q136R150I7M-759946635%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fclientlib-hf-fontface-core%2Fresources%2Ffonts%2FHPSimplifiedRegular.woff%7Cb6575e0m618I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fclientlib-hf-fontface-core%2"
		"Fresources%2Ffonts%2FHpSimplifiedLight.woff%7Cb6584e0m609I9%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2F8eb6e0d6c0d367083fff5b64b61a4441.js%3FconditionId0%3D422765%7Cb6596e0m211I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2Fb9b0fc01116e2374d7e92bc6cb675f3e.js%3FconditionId0%3D4880989%7Cb6596e0m212I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2F3ce08cf7c65e410fd9cf20d6115a04e1.js%3FconditionId0%3D285030%7Cb6597e0m300I12%7Chttp"
		"s%3A%2F%2Fwww.hp.com%2Fcma%2Fng%2Flib%2Fexceptions%2Fprivacy-banner-test.js%7Cb6611e0m688K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Ffootericons.woff%7Cb6622e0m677I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Fnewhplogo.ttf%7Cb6622e0m677I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHP"
		"IT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Ffonts_5Fheader_5Ficons.woff%7Cb6622e0m687I9%7Chttps%3A%2F%2Fhp.demdex.net%2Fdest5.html%3Fd_5Fnsid%3D0%23https_253A_252F_252Fppssupport-itgllbh7.inc.hp.com%7Cb6889e0m569Bi3I4%7Chttps%3A%2F%2Fmet2.hp.com%2Fid%3Fd_5Fvisid_5Fver%3D4.4.0%26d_5Ffieldgroup%3DA%26mcorgid%3D5E34123F5245B2CD0A490D45_2540AdobeOrg%26mid%3D08591924630434647791908474614756096862%26ts%3D1621426385473%7Cb6919e0m736z1I1%7Chttps%3A%2F%2Fwr-us.conte"
		"ntsquare.net%2Fctn_5Fv2%2Fauth%2F%3Fpid%3D325%26as%3D1%261839455458%26subsid%3D232897%26msgsize%3D120%7Cb7312e0m437z1I1%7Chttps%3A%2F%2Fc.contentsquare.net%2Fpageview%7Cb7312e0f1g14h14i259j72k259l342m343u474I7%7Chttps%3A%2F%2Fc.contentsquare.net%2FpageEvent%3Fvalue%3DMIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA%26isETR%3Dfalse%26v%3D10.8.6%26pid%3D1255%26uu%3D900fde78-c17f-aa79-df29-25bdb0937a7d%26sn%3D1%26pn%3D1%26r%3D691676%7Cb7458e0f0g0h0i0j0k197l243m244u474I7%7Chttps%3A%2F%2Flogx.optimizel"
		"y.com%2Fv1%2Fevents%7Cb7589e0f2g12h12i241j65k241l436m437u375z1I1%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2FotSDKStub.js%7Cb7740e0m194K1I12%7Chttps%3A%2F%2Fcm.everesttech.net%2Fcm%2Fdd%3Fd_5Fuuid%3D00295006774135536151295061726996951258%7Cb7822e0m71I7%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df.json%7Cb7944e0m49z1I1%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fus%2Fwu%2F541318%2Fonsite%2Fgeneric1621354891461.js%7C"
		"b7949e0m243I12%7Chttps%3A%2F%2Fgeolocation.onetrust.com%2Fcookieconsentpub%2Fv1%2Fgeo%2Flocation%7Cb8034e0m574I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Ffavicon.ico%7Cb8063e0f0g0h0i0j0k134l312m313u1403v518w1150I22M1605129769%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fresources%2Fonsite%2Fjs%2Fcool-2.1.15.min.js%7Cb8312e0m32I12%7Chttps%3A%2F%2Fudc-neb.kampyle.com%2Fegw%2F5%2Fqceuv8449dzg58ptt1bhda9g8ue19c7s%2Ftrack%2F_5F_5Fcool.gif%7Cb8523e0m191I7%7Chttps%3A%2F%2Fudc-n"
		"eb.kampyle.com%2Fegw%2F5%2Fqceuv8449dzg58ptt1bhda9g8ue19c7s%2Ftrack%2F_5F_5Fcool.gif%7Cb8523e0m203I7%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2FotBannerSdk.js%7Cb8610e0m105I12%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df%2Fe688e508-0267-4c09-a64b-7c03f7e759ce%2Fen-ie.json%7Cb8728e0m47z1I2%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2Fassets%2FotCenterRounded.json%7Cb8824e0m25z1I2%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscriptte"
		"mplates%2F6.17.0%2Fassets%2Fv2%2FotPcTab.json%7Cb8824e0m52z1I2%7Chttps%3A%2F%2Fd.impactradius-event.com%2FA353853-8e85-4786-9645-fac6b773cd071.js%7Cb8950e0m485I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb8951e0m485I12%7Chttps%3A%2F%2Fwww.redditstatic.com%2Fads%2Fpixel.js%7Cb8951e0m484I12%7Chttps%3A%2F%2Fwww.googleadservices.com%2Fpagead%2Fconversion_5Fasync.js%7Cb8952e0f5g113h113i506j197k506l733m736u14849v14016w36885I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb9165e0m520I12%7Chttps%3A%2F%2Fwww."
		"googletagmanager.com%2Fgtm.js%3Fid%3DGTM-MQML682%7Cb9166e0m272I12%7Chttps%3A%2F%2Fpx.owneriq.net%2Fstas%2Fs%2F7kxod6.js%7Cb9166e0m523I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%3Fid%3D1688171794549438%26ev%3DPageView%26noscript%3D1%26gtmcb%3D267844442%7Cb9168e0m523I7%7Chttps%3A%2F%2Fct.pinterest.com%2Fv3%2F%3Fevent%3Dinit%26tid%3D2613604734453%26noscript%3D1%26gtmcb%3D708601687%7Cb9168e0m1488I7%7Cad.doubleclick.net%2F..%2F..c1%5Esauiddc%3D223435945.1621426388%5Esu42%3Dppssupport-itgllbh7.inc.hp.com_"
		"252Fus-en_252Fprinter-setup_252Fhp-deskjet-3700-all-in-one-printer-series_252F8954253_252Fmodel_252F11262035%7Cb9168m2707I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F849111477%2F%3Fguid%3DON%26script%3D0%26userId%3Dnull%26gtmcb%3D456126689%7Cb9168c0d1481e1666f1667g1679h1679i1877j1778k1909l2096m2103u746v42w42I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F783157761%2F%3Fguid%3DON%26script%3D0%26userId%3Dnull%26gtmcb%3D75054652%7"
		"Cb9168c0d1481e1667f1667g1778h1778i1907j1786k1914l2096m2103u746v42w42I7%7Chttps%3A%2F%2Falb.reddit.com%2Frp.gif%7Cb9475e0m266I7%7Chttps%3A%2F%2Flinkto.ext.hp.com%2Fxc%2F365159%2F342132%2F5105%7Cb9522e0m1295z1I1%7Chttps%3A%2F%2Fad.doubleclick.net%2Factivity%5Essrc%3D9848580%5Estype%3Dirid%5Escat%3Dirid%5Esord%3D.1621426388034%3F%7Cb9523m2545A1N3O1P1I7%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F13015798%7Cb9525e0m1132I12%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb9534e0m1279A1N3I7%7Chttps%3A%2F%2F"
		"s.yimg.com%2Fwi%2Fconfig%2F10044594.json%7Cb9714e0m943z1I1%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%2F%3Fpid%3D40922%26fmt%3Dgif%7Cb9729e0m927I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F687393200%2F%7Cb9736e0f0g0h0i0j0k920l960m964u2127v1097w1765K1I12%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F854101013%2F%7Cb9739e0f0g0h0i0j0k950l1073m1078u2078v1089w1748K1I12%7Chttps%3A%2F%2Fidsync.rlcdn.com%2F455679.gif%3Fpartner_5Fuid%"
		"3D93210b0d-b89b-11eb-9a1c-42010a246c50%7Cb11970m0A1N3S2573I0$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fprinter-setup%2Fhp-deskjet-3700-all-in-one-printer-series%2F8954253%2Fmodel%2F11262035$title=HP%20DeskJet%203755%20All-in-One%20Printer%20Setup%20%7C%20HP%C2%AE%20Support$latC=1$app=ea7c4b59f27d43eb$visitID=PDLKMTHAUVNACPEFBKCNJMMSGKDMGNBQ-0$vs=2$fId=226382660_629$v=10215210506134512$vID=16214263826695U74C6Q5UFSMTJV43R0EF1G1IPD3KHIG$time=1621426395310", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	lr_think_time(4);

	web_custom_request("events_3", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=76&mdh=2674&pn=1&re=1&uu=900fde78-c17f-aa79-df29-25bdb0937a7d&sn=1&lv=1621426385&lhd=1621426385&hd=1621426385&pid=1255&str=1174&di=1802&dc=5570&fl=5578&eu=%5B%5B2%2C8458%2C876%2C483%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-printer-setup-steps-page%3Aeq(0)%3Eapp-printer-setup-step%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C63463%2C54448%5D%2C%5B5%2C9206%2C0%2C0%2C%22a%23closeAlert%22%2C%22%22%5D%2C%5B2%2C9729%2C891%2C444%2C0%2C%22div%23directionTracker%22%2C36009%2C10966%5D%2C%5B6%2C9791%2C1027%2C177%2C%22p%23onetrust-policy-text%3Ep%3Aeq(0)%3Ea%3Aeq(1)%22%2C%22%22%5D%2C%5B7%2C9819%2C1060%2C132%2C%22p%23onetrust-policy-text%3Ep%3Aeq(0)%3Ea%3Aeq(1)%22%5D%2C%5B2%2C10130%2C1187%2C35%2C0%2C%22div%23welcomeHeader%22%2C47972%2C45875%5D%2C%5B6%2C10259%2C1189%2C86%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq"
		"(0)%22%2C%22%22%5D%2C%5B2%2C10533%2C1189%2C99%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C31594%2C20497%5D%2C%5B2%2C10933%2C1189%2C104%2C0%2C%22%22%2C31594%2C27945%5D%2C%5B3%2C11050%2C1189%2C104%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B4%2C11258%2C1189%2C104%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C11262%2C1189%2C104%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B7%2C11338%2C1189%2C104%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%5D%2C%5B2%2C13058%2C1224%2C85%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C53923%2C30711%5D%2C%5B2%2C13459%2C1624%2C144%2C0%2C%22html%3Aeq(0)%22%2C65633%2C3529%5D%2C%5B2%2C13859%2C1624%2C144%2C0%2C%22%22%2C65633%2C3529%5D%2C%5B2%2C14260%2C1620%2C162%2C0%2C%22div%23drop-down%3Ediv%3Aeq(0)"
		"%22%2C65471%2C57581%5D%2C%5B2%2C14661%2C1620%2C182%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-printer-setup-steps-page%3Aeq(0)%3Ediv%3Aeq(0)%3Eapp-product-ribbon%3Aeq(0)%22%2C65471%2C4494%5D%2C%5B2%2C15060%2C1624%2C191%2C0%2C%22html%3Aeq(0)%22%2C65633%2C4681%5D%2C%5B3%2C15346%2C1624%2C191%2C%22html%3Aeq(0)%22%2C%22%22%5D%2C%5B1%2C16627%2C0%2C1228.571533203125%2C1056%5D%2C%5B1%2C17892%2C0%2C0%2C565%5D%2C%5B4%2C18767%2C1619%2C-78%2C%22html%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B2%2C19243%2C1492%2C10%2C0%2C%22div%23welcomeHeader%3Ediv%3Aeq(0)%22%2C10435%2C22%5D%2C%5B2%2C19646%2C1201%2C150%2C0%2C%22div%23nav-secondary%3Eul%3Aeq(0)%22%2C59942%2C39334%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	return 0;
}