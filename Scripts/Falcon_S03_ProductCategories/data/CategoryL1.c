CategoryL1()
{

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

	lr_think_time(17);

	web_custom_request("events_7", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=63&mdh=713&pn=3&re=1&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&lv=1620386135&lhd=1620386135&hd=1620386185&pid=1255&str=1147&di=1206&dc=7386&fl=7397&eu=%5B%5B0%2C192%2C1463%2C713%5D%5D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers", 
		"Snapshot=t227.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t228.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"event\":[{\"download_time_ms\":20239,\"downloaded\":4621,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"6591\",\"previousversion\":\"6590\",\"total\":4621,\"url\":\"https://storage.googleapis.com/update-delta/hfnkpimlhhgieaddgfemjhofmfblmnib/6591/6590/ac216e35909340fe272d1cc0f4e09c1374d5533421337937dfc7f7a2ae41b84c.crxd\""
		"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.155f7cd46f2c1b55579a6134687cab8bb29cc375f6b5c8a742dfb75fedef1f31\",\"nextversion\":\"6591\",\"previousfp\":\"1.9a7734eddca3cacd38d8847fd366317d8bf23c391dfc5f67ed627b9ea9cc0f2f\",\"previousversion\":\"6590\"}],\"version\":\"6591\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.14393.4283\"},\""
		"prodversion\":\"90.0.4430.93\",\"protocol\":\"3.1\",\"requestid\":\"{c137f0c8-c97d-4ae3-8461-c60d047ffa53}\",\"sessionid\":\"{318eb11b-f710-48b1-a9ad-5a0a8ccf15a3}\",\"updaterversion\":\"90.0.4430.93\"}}", 
		LAST);

	web_add_cookie("_gcl_au=1.1.1687605942.1620386184; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryL0%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_5105=1620386184280%7C365159%7C1620386184280%7C%7C; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_PI=8f093cdb-af25-11eb-9a1c-42010a246c50%7C1620472584280; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=3.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386185.1620386135.1589380098.1654550135183.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=2&ckp=tld&dm=hp.com&apv_325_www11=2&cpv_325_www11=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Fri+May+07+2021+11%3A16%3A26+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=2e9f3572-f42b-431d-bc1d-845ecee709da&interactionCount=2&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1620386188214; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv2_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/products/printers; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=pps-ces%257Cproductcategorylanding%2C33%2C33%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C63%2C63%2C1579.8571166992188%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("officejet-printers", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("0_4", 
		"URL=https://bat.bing.com/actionp/0?ti=13015798&tm=gtm001&Ver=2&mid=821232ee-37a8-4ff6-80f8-f5830e83e9a1&sid=8e9bd960af2511ebbdd36f7f88591a92&vid=8e9c5480af2511eba0ad0b02c6d30fc1&vids=0&evt=pageHide", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers", 
		"Snapshot=t230.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("9d25aca9-e352-4895-bbbd-ccebc9786c07.js_5", 
		"URL=https://t.contentsquare.net/uxa/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t231.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("contact-hp_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/contact-hp", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t232.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("xdframe-single-domain-1.1.0.html_3", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t233.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("productLanding_5", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/config/us-en/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t234.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("wcc_second_Nav_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_second_Nav", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t235.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("region_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/region", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t236.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("wcc_sitehome_alerts_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/us-en/wcc_sitehome_alerts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t237.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("productLanding_6", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/termbase/us-en/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t238.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("embed.js_3", 
		"URL=https://nebula-cdn.kampyle.com/wu/541318/onsite/embed.js", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t239.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("country-selector.json_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/data/country-selector.json", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t240.inf", 
		LAST);

	web_custom_request("wcc_pfinder_common_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/contexual/us-en/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t241.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("wcc_products_banner_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_products_banner", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t242.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("a2129670914.html_3", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t243.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("getProductCategoriesBySeoName_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/prodcategory/getProductCategoriesBySeoName", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t244.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"callForRetiredProduct\":false,\"bookMarkURL\":\"printers/officejet-printers\",\"cc\":\"us\",\"lc\":\"en\"}", 
		LAST);

	web_custom_request("href_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/sitemap/href", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t245.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"template\":\"ProductCategoryL1\",\"path\":\"/products/printers/officejet-printers\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("pixel.js_2", 
		"URL=https://www.redditstatic.com/ads/pixel.js", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t246.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("e.gif_3", 
		"URL=https://nexus.ensighten.com/error/e.gif?msg=%22TypeError%3A%20Cannot%20read%20property%20%27triggerPromiseWithTimeout%27%20of%20undefined%22%20error%20caught%20in%20Data%20Definition%20trigger%3A%20support_language_code%2C%20ID%3A9913.%20Using%20bottom%20of%20body%20trigger.&lnn=-1&fn=&cid=217&client=hp&publishPath=support_stage&rid=-1&did=-1&errorName=DataDefinitionException", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t247.inf", 
		LAST);

	web_custom_request("tr_3", 
		"URL=https://www.facebook.com/tr?id=1688171794549438&ev=PageView&noscript=1&gtmcb=1645753608", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t248.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("serverComponent.php_3", 
		"URL=https://nexus.ensighten.com/hp/support_stage/serverComponent.php?r=4564.7116535787745&namespace=Bootstrapper&staticJsPath=nexus.ensighten.com/hp/support_stage/code/&publishedOn=Tue%20May%2004%2007:24:28%20GMT%202021&ClientID=217&PageID=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%3Fgdl_template%3Dunknown", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t249.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("v3_3", 
		"URL=https://ct.pinterest.com/v3/?event=init&tid=2613604734453&noscript=1&gtmcb=1538175431", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t250.inf", 
		LAST);

	web_custom_request("activity;src=2964791;type=hhore983;cat=hphom0;ord=7091574434783;gtm=2wg4s0;auiddc=1687605942.1620386184", 
		"URL=https://ad.doubleclick.net/activity;src=2964791;type=hhore983;cat=hphom0;ord=7091574434783;gtm=2wg4s0;auiddc=1687605942.1620386184?", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t251.inf", 
		LAST);

	web_custom_request("collect_3", 
		"URL=https://px.ads.linkedin.com/collect/?pid=40922&fmt=gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t252.inf", 
		LAST);

	web_custom_request("849111477_3", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/849111477/?guid=ON&script=0&userId=null&gtmcb=834332944", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t253.inf", 
		LAST);

	web_custom_request("783157761_3", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/783157761/?guid=ON&script=0&userId=null&gtmcb=243575497", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t254.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("7kxod6.js_3", 
		"URL=https://px.owneriq.net/stas/s/7kxod6.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t255.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("0_5", 
		"URL=https://bat.bing.com/action/0?ti=13015798&tm=gtm001&Ver=2&mid=9a265fa4-7f61-4a38-86f3-1f17bbbb428a&sid=8e9bd960af2511ebbdd36f7f88591a92&vid=8e9c5480af2511eba0ad0b02c6d30fc1&vids=0&pi=1200101525&lg=en-US&sw=1463&sh=823&sc=24&tl=HP%20Officejet%20Printers%20%7C%20HP%C2%AE%20Support&kw=HP%20Customer%20Support,%20HP%20Officejet%20Printers,%20HP%20Customer%20Support,%20HP%20Officejet%20Printers%20support&p="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers&r=&lt=941&evt=pageLoad&msclkid=N&sv=1&rn=796068", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t256.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("687393200_5", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/687393200/?random=1620386213496&cv=9&fst=1620386213496&num=1&userId=null&guid=ON&resp=GooglemKTybQhCsO&eid=2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=3&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers&tiba=HP%20Officejet%20Printers%20%7C%20HP%C2%AE%20Support&hn=www.googleadservices.com&async=1"
		"&rfmt=3&fmt=4", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t257.inf", 
		LAST);

	web_custom_request("otBannerSdk.js_3", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/otBannerSdk.js", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t258.inf", 
		LAST);

	web_custom_request("854101013_5", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/854101013/?random=1620386213505&cv=9&fst=1620386213505&num=1&guid=ON&resp=GooglemKTybQhCsO&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=3&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers&tiba=HP%20Officejet%20Printers%20%7C%20HP%C2%AE%20Support&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t259.inf", 
		LAST);

	web_add_cookie("_cs_s=3.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386185.1620386135.1589380098.1654550135183.None.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Fri+May+07+2021+11%3A16%3A26+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=2e9f3572-f42b-431d-bc1d-845ecee709da&interactionCount=2&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_invisit=2; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_invisitc=2; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/products/printers; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_ppvl=pps-ces%257Cproductcategorylanding%2C33%2C33%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C63%2C63%2C1579.8571166992188%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("__CT_Data=gpv=3&ckp=tld&dm=hp.com&apv_325_www11=2&cpv_325_www11=2; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryL1%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_5105=1620386213575%7C365159%7C1620386213575%7C%7C; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_PI=8f093cdb-af25-11eb-9a1c-42010a246c50%7C1620472613575; DOMAIN=linkto.ext.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("5105_3", 
		"URL=https://linkto.ext.hp.com/bc/365159/342132/5105", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t260.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=srcref=&landurl=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers&&_ir=U364%7C8f093cdb-af25-11eb-9a1c-42010a246c50%7C1620386213575", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("sp.pl_3", 
		"URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&d=Fri%2C%2007%20May%202021%2011%3A16%3A53%20GMT&n=0&b=HP%20Officejet%20Printers%20%7C%20HP%C2%AE%20Support&.yp=10044594&f=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers&enc=UTF-8&tagmgr=gtm%2Censighten", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t261.inf", 
		LAST);

	web_custom_request("j_3", 
		"URL=https://px.owneriq.net/j/?ref=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers&pt=7kxod6&t=f%7C%22HP%2520Officejet%2520Printers%2520%257C%2520HP%25C2%25AE%2520Support%22&s=6ka7", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t262.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("854101013_6", 
		"URL=https://www.google.com/pagead/1p-user-list/854101013/?random=1620386213505&cv=9&fst=1620385200000&num=1&guid=ON&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=3&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers&tiba=HP%20Officejet%20Printers%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=2091804729&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t263.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("eps_3", 
		"URL=https://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6736726131078901504J&l=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t264.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("687393200_6", 
		"URL=https://www.google.com/pagead/1p-user-list/687393200/?random=1620386213496&cv=9&fst=1620385200000&num=1&userId=null&guid=ON&eid=2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=3&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers&tiba=HP%20Officejet%20Printers%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=2639782496&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t265.inf", 
		LAST);

	web_custom_request("activity;src=9848580;type=irid;cat=irid;ord=8f093cdb-af25-11eb-9a1c-42010a246c50.1620386213575", 
		"URL=https://ad.doubleclick.net/activity;src=9848580;type=irid;cat=irid;ord=8f093cdb-af25-11eb-9a1c-42010a246c50.1620386213575?", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t266.inf", 
		LAST);

	web_custom_request("1_3", 
		"URL=https://tapestry.tapad.com/tapestry/1?ta_partner_id=916&ta_partner_did=Q6736726131078901504J&ta_format=png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t267.inf", 
		LAST);

	web_custom_request("379208.gif_3", 
		"URL=https://idsync.rlcdn.com/379208.gif?partner_uid=Q6736726131078901504J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t268.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("events_8", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t269.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"18956663993\",\"revision\":\"773\",\"visitors\":[{\"visitor_id\":\"oeu1620386134588r0.6070503245592556\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t"
		"\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1620386212612}],\"snapshots\":[{\"activationTimestamp\":1620386212581,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"dad6787e-964e-477b-94b7-cc679466ee7f\",\"t\":1620386212612}]}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("Pug_3", 
		"URL=https://simage2.pubmatic.com/AdServer/Pug?vcode=bz0yJnR5cGU9MSZjb2RlPTI2NDYmdGw9MTI5NjAw&piggybackCookie=Q6736726131078901504J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t270.inf", 
		LAST);

	web_custom_request("sd_3", 
		"URL=https://us-u.openx.net/w/1.0/sd?id=537073059&val=Q6736726131078901504J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t271.inf", 
		LAST);

	web_custom_request("ep_3", 
		"URL=https://px.owneriq.net/ep?sid%5B%5D=8460259172&sid%5B%5D=8460259192&pt=7kxod6&uid=Q6736726131078901504J&jcs=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t272.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("rum_3", 
		"URL=https://dsum.casalemedia.com/rum?cm_dsp_id=31&external_user_id=Q6736726131078901504J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t273.inf", 
		LAST);

	web_custom_request("ibs_dpid=53196&dpuuid=Q6736726131078901504J", 
		"URL=https://dpm.demdex.net/ibs_dpid=53196&dpuuid=Q6736726131078901504J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t274.inf", 
		LAST);

	web_custom_request("tap.php_3", 
		"URL=https://pixel.rubiconproject.com/tap.php?v=11581&nid=2395&put=Q6736726131078901504J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t275.inf", 
		LAST);

	web_custom_request("setuid_3", 
		"URL=https://ib.adnxs.com/setuid?entity=13&code=Q6736726131078901504J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t276.inf", 
		LAST);

	web_custom_request("pageview_4", 
		"URL=https://c.contentsquare.net/pageview?pid=1255&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&lv=1620386135&lhd=1620386135&hd=1620386214&pn=4&re=1&dw=1459&dh=2262&ww=1463&wh=713&sw=1463&sh=823&dr=&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers&uc=1&la=en-US&cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryL1%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&cvarp="
		"%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryL1%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&v=10.8.6&r=982245", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t277.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("auth_3", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&1107737237&skiprnd=1&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t278.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"bb21ee13-1ad2-a67a-9f7b-226261c3a378\",\"sessionNumber\":1,\"pageNumber\":4},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("pageEvent_3", 
		"URL=https://c.contentsquare.net/pageEvent?value=MIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA&isETR=false&v=10.8.6&pid=1255&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&pn=4&r=881787", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t279.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("__cool.gif_5", 
		"URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjkzIFNhZmFyaS81MzcuMzYiLCJzZXNzaW9uX3BsYXRmb3JtIjogIldpbjMyIiwidHJhY2tlcl90eXBlIjogImphdmFzY3JpcHQiLCJ0cmFja2VyX3ZlcnNpb24iOiAiMi4xLjE1IiwiZXZlbnRfbmFtZSI6ICJjcmVhdGVTZXNzaW9uIiwiZXZlbnRfdGltZXN0YW1wX2Vwb2NoIjogIjE2MjAzODYyMTQ5NDUiLCJldmVudF90aW1lem9uZV9vZmZzZXQiOiAwLCJ1c2VyX2lkIj"
		"ogIjE3OTQ2OGE0OTgzMmJhLTAxNDk5OTBlMjQ3ZGU4LWQ3ZTE3MzktMTI1ZjUxLTE3OTQ2OGE0OTg0YjQwIiwidXJsIjogImh0dHBzOi8vcHBzc3VwcG9ydC1pdGdsbGJoNy5pbmMuaHAuY29tL3VzLWVuL3Byb2R1Y3RzL3ByaW50ZXJzL29mZmljZWpldC1wcmludGVycyIsImZvcm1JZCI6IG51bGwsImZvcm1UcmlnZ2VyVHlwZSI6IG51bGwsImthbXB5bGVfZGF0YSI6IHsiTEFTVF9JTlZJVEFUSU9OX1ZJRVciOiAiIiwiREVDTElORURfREFURSI6ICIiLCJrYW1weWxlSW52aXRlUHJlc2VudGVkIjogIiIsImthbXB5bGVfdXNlcmlkIjogIjdlNGUtOTY1Ny1mZTEyLTY4OWEtZjhkMC1jZWE3LTI5NGMtNGNmNiIsImthbXB5bGVVc2VyU2Vzc2lvbiI6ICIxNjIwMzg2"
		"MTg4MjE0Iiwia2FtcHlsZVVzZXJQZXJjZW50aWxlIjogIiIsIlNVQk1JVFRFRF9EQVRFIjogIiIsImFkZGl0aW9uYWxEYXRhIjogeyJ1c2VyX3Nlc3Npb24iOiAiMTYyMDM4NjE4ODIxNCIsImRpcmVjdF9uYXZpZ2F0aW9uIjogdHJ1ZSwiZGlmZnJlbnRfcmVmZXJyZXIiOiB0cnVlfX0sImNvb2tpZV9zaXplIjogMjcyOCwia2FtcHlsZV92ZXJzaW9uIjogIjIuMzcuMSIsIm9uc2l0ZV92ZXJzaW9uIjogIjIuMzcuMSIsImhpc3RvcnlfbGVuZ3RoIjogMywiZXZlbnRfbG9jYWxfdGltZXN0YW1wIjogMTYyMDM4NjIxNDc5MiwicG9zaXRpb24iOiBudWxsLCJpc1VzZXJJZGVudGlmaWVkIjogZmFsc2UsImZlZWRiYWNrX2NvcnJlbGF0aW9uX3V1aWQiOiBudWxsfQpdfQ"
		"==", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t280.inf", 
		LAST);

	web_custom_request("__cool.gif_6", 
		"URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjkzIFNhZmFyaS81MzcuMzYiLCJzZXNzaW9uX3BsYXRmb3JtIjogIldpbjMyIiwidHJhY2tlcl90eXBlIjogImphdmFzY3JpcHQiLCJ0cmFja2VyX3ZlcnNpb24iOiAiMi4xLjE1IiwiZXZlbnRfbmFtZSI6ICJuZWJ1bGFfcGFnZV92aWV3IiwiZXZlbnRfdGltZXN0YW1wX2Vwb2NoIjogIjE2MjAzODYyMTQ5NTMiLCJldmVudF90aW1lem9uZV9vZmZzZXQiOiAwLCJ1c2VyX2"
		"lkIjogIjE3OTQ2OGE0OTgzMmJhLTAxNDk5OTBlMjQ3ZGU4LWQ3ZTE3MzktMTI1ZjUxLTE3OTQ2OGE0OTg0YjQwIiwiZW52aXJvbWVudCI6ICJwcm9kVXNPcmVnb24iLCJhY2NvdW50SWQiOiA1NDExMTQsInVybCI6ICJodHRwczovL3Bwc3N1cHBvcnQtaXRnbGxiaDcuaW5jLmhwLmNvbS91cy1lbi9wcm9kdWN0cy9wcmludGVycy9vZmZpY2VqZXQtcHJpbnRlcnMiLCJ3ZWJzaXRlSWQiOiA1NDEzMTgsImZvcm1JZCI6IG51bGwsImZvcm1UcmlnZ2VyVHlwZSI6IG51bGwsImthbXB5bGVfZGF0YSI6IHsiTEFTVF9JTlZJVEFUSU9OX1ZJRVciOiAiIiwiREVDTElORURfREFURSI6ICIiLCJrYW1weWxlSW52aXRlUHJlc2VudGVkIjogIiIsImthbXB5bGVfdXNlcmlkIjog"
		"IjdlNGUtOTY1Ny1mZTEyLTY4OWEtZjhkMC1jZWE3LTI5NGMtNGNmNiIsImthbXB5bGVVc2VyU2Vzc2lvbiI6ICIxNjIwMzg2MjE0NzkzIiwia2FtcHlsZVVzZXJQZXJjZW50aWxlIjogIiIsIlNVQk1JVFRFRF9EQVRFIjogIiJ9LCJjb29raWVfc2l6ZSI6IDI3MjgsImthbXB5bGVfdmVyc2lvbiI6ICIyLjM3LjEiLCJvbnNpdGVfdmVyc2lvbiI6ICIyLjM3LjEiLCJoaXN0b3J5X2xlbmd0aCI6IDMsImV2ZW50X2xvY2FsX3RpbWVzdGFtcCI6IDE2MjAzODYyMTQ3OTgsInBvc2l0aW9uIjogbnVsbCwiaXNVc2VySWRlbnRpZmllZCI6IGZhbHNlLCJmZWVkYmFja19jb3JyZWxhdGlvbl91dWlkIjogbnVsbH0KXX0=", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t281.inf", 
		LAST);

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryL1%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=met2.hp.com");

	web_add_cookie("IR_5105=1620386213575%7C365159%7C1620386213575%7C%7C; DOMAIN=met2.hp.com");

	web_add_cookie("IR_PI=8f093cdb-af25-11eb-9a1c-42010a246c50%7C1620472613575; DOMAIN=met2.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Fri+May+07+2021+11%3A16%3A54+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=2e9f3572-f42b-431d-bc1d-845ecee709da&interactionCount=2&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386214.1620386135.1589380098.1654550135183.None.1; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_s=4.1; DOMAIN=met2.hp.com");

	web_add_cookie("__CT_Data=gpv=3&ckp=tld&dm=hp.com&apv_325_www11=3&cpv_325_www11=3; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisit=3; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisitc=3; DOMAIN=met2.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C63%2C63%2C1579.8571166992188%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C70%2C70%2C1579.8571166992188%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=met2.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("s56239607021930", 
		"URL=https://met2.hp.com/b/ss/hphqglobal,hphq-ces-global-stage-temp,hphq-ces-na-stage-temp/1/JS-2.15.0/s56239607021930?AQB=1&ndh=1&pf=1&t=7%2F4%2F2021%2011%3A16%3A57%205%200&mid=87931844697006436903700237078780896084&aamlh=9&ce=UTF-8&ns=hpcorp&pageName=D%3Dv55&g=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers&ch=pps&server=ppssupport-itgllbh7.inc.hp.com&events=event46%2Cevent45%3D59&aamb=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1=us-en&v2"
		"=us&c3=ProductCategoryL1&v3=en&c7=us&c8=en&c9=cs%3Aconsumer.home&c12=R11839&v12=Anonymous&c15=13&c26=D%3Dv12&c30=D%3Dv55&c31=null&v32=null&v33=null&v34=null&v35=null&c43=null&v46=D%3Dc3&c49=D%3Dg&c50=D%3Dg&c51=hpexpnontridion%3Aihfcaas.5.r&c55=null&v55=pps-ces%7Cproductcategoryl1&c56=null&c57=null&c58=null&c59=null&c60=63&c61=0001%3A0003%3A00&c63=Engaged&c66=87931844697006436903700237078780896084&c73=D%3Dv55&v90="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers&v92=ens%7Csupport_stage%7C04-May-2021%2007%3A24%3A28&v93=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers&v94=ppssupport-itgllbh7.inc.hp.com&v95=ppssupport-itgllbh7.inc.hp.com%3AUnknown%7CUnknown%7CAMS%7Cus%3Aen%7CUSD&v99=5.9&s=1463x823&c=24&j=1.6&v=N&k=Y&bw=1463&bh=713&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&AQE=1", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t282.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("dvar_3", 
		"URL=https://c.contentsquare.net/dvar?v=10.8.6&pid=1255&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&pn=4&dv=N4IgpgaghgTgjAJhALhAQQHYHsME8C2WArgM4gA0IADjFlQMwogAKtAJkQMYAuAwlNzABzLDFwAZOBWq0qU1KQC0YDCAC%2BQA&r=161807", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t283.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
