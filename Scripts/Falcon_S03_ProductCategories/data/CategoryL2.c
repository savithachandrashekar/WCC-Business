CategoryL2()
{

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(15);

	web_custom_request("events_9", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=70&mdh=713&pn=4&re=1&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&lv=1620386135&lhd=1620386135&hd=1620386214&pid=1255&str=197&di=264&dc=3632&fl=3639&eu=%5B%5B0%2C19%2C1463%2C713%5D%2C%5B6%2C25%2C572%2C1380%2C%22li%23pDrillLevel2_Product25%3Ea%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C35%2C652%2C1334%2C%22li%23pDrillLevel2_Product25%3Ea%3Aeq(0)%22%5D%2C%5B2%2C452%2C572%2C1380%2C0%2C%22li%23pDrillLevel2_Product25%3Ea%3Aeq(0)%22%2C26396%2C38552%5D%5D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t284.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryL1%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_5105=1620386213575%7C365159%7C1620386213575%7C%7C; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_PI=8f093cdb-af25-11eb-9a1c-42010a246c50%7C1620472613575; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Fri+May+07+2021+11%3A16%3A54+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=2e9f3572-f42b-431d-bc1d-845ecee709da&interactionCount=2&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386214.1620386135.1589380098.1654550135183.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=4.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=3&ckp=tld&dm=hp.com&apv_325_www11=3&cpv_325_www11=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1620386214793; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv3_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C63%2C63%2C1579.8571166992188%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C70%2C70%2C1579.8571166992188%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("officejet-4000", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t285.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("0_6", 
		"URL=https://bat.bing.com/actionp/0?ti=13015798&tm=gtm001&Ver=2&mid=9a265fa4-7f61-4a38-86f3-1f17bbbb428a&sid=8e9bd960af2511ebbdd36f7f88591a92&vid=8e9c5480af2511eba0ad0b02c6d30fc1&vids=0&evt=pageHide", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers", 
		"Snapshot=t286.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("9d25aca9-e352-4895-bbbd-ccebc9786c07.js_6", 
		"URL=https://t.contentsquare.net/uxa/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t287.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("contact-hp_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/contact-hp", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t288.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("xdframe-single-domain-1.1.0.html_4", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t289.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("embed.js_4", 
		"URL=https://nebula-cdn.kampyle.com/wu/541318/onsite/embed.js", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t290.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("region_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/region", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t291.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("productLanding_7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/config/us-en/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t292.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("productLanding_8", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/termbase/us-en/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t293.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("wcc_sitehome_alerts_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/us-en/wcc_sitehome_alerts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("wcc_second_Nav_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_second_Nav", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t295.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("country-selector.json_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/data/country-selector.json", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t296.inf", 
		LAST);

	web_custom_request("wcc_pfinder_common_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/contexual/us-en/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t297.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("a2129670914.html_4", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t298.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("e.gif_4", 
		"URL=https://nexus.ensighten.com/error/e.gif?msg=%22TypeError%3A%20Cannot%20read%20property%20%27triggerPromiseWithTimeout%27%20of%20undefined%22%20error%20caught%20in%20Data%20Definition%20trigger%3A%20support_language_code%2C%20ID%3A9913.%20Using%20bottom%20of%20body%20trigger.&lnn=-1&fn=&cid=217&client=hp&publishPath=support_stage&rid=-1&did=-1&errorName=DataDefinitionException", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t299.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("serverComponent.php_4", 
		"URL=https://nexus.ensighten.com/hp/support_stage/serverComponent.php?r=200157744.8152847&namespace=Bootstrapper&staticJsPath=nexus.ensighten.com/hp/support_stage/code/&publishedOn=Tue%20May%2004%2007:24:28%20GMT%202021&ClientID=217&PageID=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000%3Fgdl_template%3Dunknown", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t300.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("wcc_products_banner_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_products_banner", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("otBannerSdk.js_4", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/otBannerSdk.js", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t302.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("activity;src=2964791;type=hhore983;cat=hphom0;ord=6508601989288;gtm=2wg4s0;auiddc=1687605942.1620386184", 
		"URL=https://ad.doubleclick.net/activity;src=2964791;type=hhore983;cat=hphom0;ord=6508601989288;gtm=2wg4s0;auiddc=1687605942.1620386184?", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t303.inf", 
		LAST);

	web_custom_request("tr_4", 
		"URL=https://www.facebook.com/tr?id=1688171794549438&ev=PageView&noscript=1&gtmcb=1049393017", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t304.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("7kxod6.js_4", 
		"URL=https://px.owneriq.net/stas/s/7kxod6.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t305.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("v3_4", 
		"URL=https://ct.pinterest.com/v3/?event=init&tid=2613604734453&noscript=1&gtmcb=2046322981", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t306.inf", 
		LAST);

	web_custom_request("0_7", 
		"URL=https://bat.bing.com/action/0?ti=13015798&tm=gtm001&Ver=2&mid=b729c439-ddb7-4828-b4b4-1113eb96226c&sid=8e9bd960af2511ebbdd36f7f88591a92&vid=8e9c5480af2511eba0ad0b02c6d30fc1&vids=0&pi=1200101525&lg=en-US&sw=1463&sh=823&sc=24&p=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000&r=&lt=969&evt=pageLoad&msclkid=N&sv=1&rn=465722", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t307.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("collect_4", 
		"URL=https://px.ads.linkedin.com/collect/?pid=40922&fmt=gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t308.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("687393200_7", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/687393200/?random=1620386237660&cv=9&fst=1620386237660&num=1&userId=null&guid=ON&resp=GooglemKTybQhCsO&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=4&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t309.inf", 
		LAST);

	web_custom_request("854101013_7", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/854101013/?random=1620386237669&cv=9&fst=1620386237669&num=1&guid=ON&resp=GooglemKTybQhCsO&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=4&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t310.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("849111477_4", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/849111477/?guid=ON&script=0&userId=null&gtmcb=1388628779", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t311.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("getProductCategoriesBySeoName_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/prodcategory/getProductCategoriesBySeoName", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t312.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"callForRetiredProduct\":false,\"bookMarkURL\":\"printers/officejet-printers/officejet-4000\",\"cc\":\"us\",\"lc\":\"en\"}", 
		LAST);

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Fri+May+07+2021+11%3A16%3A54+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=2e9f3572-f42b-431d-bc1d-845ecee709da&interactionCount=2&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386214.1620386135.1589380098.1654550135183.None.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_s=4.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_invisit=3; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_invisitc=3; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C70%2C70%2C1579.8571166992188%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C63%2C63%2C1579.8571166992188%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("__CT_Data=gpv=4&ckp=tld&dm=hp.com&apv_325_www11=3&cpv_325_www11=3; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_5105=1620386237690%7C365159%7C1620386237690%7C%7C; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_PI=8f093cdb-af25-11eb-9a1c-42010a246c50%7C1620472637690; DOMAIN=linkto.ext.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("5105_4", 
		"URL=https://linkto.ext.hp.com/bc/365159/342132/5105", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t313.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=srcref=&landurl=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000&&_ir=U364%7C8f093cdb-af25-11eb-9a1c-42010a246c50%7C1620386237690", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("783157761_4", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/783157761/?guid=ON&script=0&userId=null&gtmcb=70119262", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t314.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("sp.pl_4", 
		"URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&d=Fri%2C%2007%20May%202021%2011%3A17%3A17%20GMT&n=0&.yp=10044594&f=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000&enc=UTF-8&tagmgr=gtm%2Censighten", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t315.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("c00596521.jpg", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c00596521.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t316.inf", 
		LAST);

	web_custom_request("c00696573.jpg", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c00696573.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t317.inf", 
		LAST);

	web_custom_request("c02208905.jpg", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c02208905.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t318.inf", 
		LAST);

	web_custom_request("c03119856.jpg", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c03119856.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t319.inf", 
		LAST);

	web_custom_request("c03109218.jpg", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c03109218.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t320.inf", 
		LAST);

	web_custom_request("c03788282.jpg", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c03788282.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t321.inf", 
		LAST);

	web_custom_request("c02070736.jpg", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c02070736.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t322.inf", 
		LAST);

	web_add_cookie("__CT_Data=gpv=4&ckp=tld&dm=hp.com&apv_325_www11=3&cpv_325_www11=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_5105=1620386237690%7C365159%7C1620386237690%7C%7C; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_PI=8f093cdb-af25-11eb-9a1c-42010a246c50%7C1620472637690; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("href_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/sitemap/href", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t323.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"template\":\"ProductCategoryL2\",\"path\":\"/products/printers/officejet-printers/officejet-4000\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("pic18896.gif", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/pic18896.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t324.inf", 
		LAST);

	web_custom_request("c01937473.jpg", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c01937473.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t325.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("events_10", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t326.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"18956663993\",\"revision\":\"773\",\"visitors\":[{\"visitor_id\":\"oeu1620386134588r0.6070503245592556\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t"
		"\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1620386236895}],\"snapshots\":[{\"activationTimestamp\":1620386236868,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"6ec5bd99-67c5-4458-9886-686eb2a959cd\",\"t\":1620386236896}]}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("eps_4", 
		"URL=https://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6736726381487503457J&l=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t327.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("chevron-left-arrow-grey.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/chevron-left-arrow-grey.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/styles.cdc54c9d1a6d17da607e.css", 
		"Snapshot=t328.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("c02185409.jpg", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c02185409.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t329.inf", 
		LAST);

	web_custom_request("c06257985.jpg", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c06257985.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t330.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("j_4", 
		"URL=https://px.owneriq.net/j/?ref=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000&pt=7kxod6&t=f%7C%22HP%2520Officejet%25204000%2520%257C%2520HP%25C2%25AE%2520Support%22&s=6ka7", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t331.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("687393200_8", 
		"URL=https://www.google.com/pagead/1p-user-list/687393200/?random=1620386237660&cv=9&fst=1620385200000&num=1&userId=null&guid=ON&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=4&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000&async=1&fmt=3&is_vtc=1&random=3531683326&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t332.inf", 
		LAST);

	web_custom_request("854101013_8", 
		"URL=https://www.google.com/pagead/1p-user-list/854101013/?random=1620386237669&cv=9&fst=1620385200000&num=1&guid=ON&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=4&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000&async=1&fmt=3&is_vtc=1&random=1530438894&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t333.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("chevron-right-arrow-white.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/chevron-right-arrow-white.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/styles.cdc54c9d1a6d17da607e.css", 
		"Snapshot=t334.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("1_4", 
		"URL=https://tapestry.tapad.com/tapestry/1?ta_partner_id=916&ta_partner_did=Q6736726381487503457J&ta_format=png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t335.inf", 
		LAST);

	web_custom_request("activity;src=9848580;type=irid;cat=irid;ord=8f093cdb-af25-11eb-9a1c-42010a246c50.1620386237690", 
		"URL=https://ad.doubleclick.net/activity;src=9848580;type=irid;cat=irid;ord=8f093cdb-af25-11eb-9a1c-42010a246c50.1620386237690?", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t336.inf", 
		LAST);

	web_custom_request("379208.gif_4", 
		"URL=https://idsync.rlcdn.com/379208.gif?partner_uid=Q6736726381487503457J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t337.inf", 
		LAST);

	web_custom_request("Pug_4", 
		"URL=https://simage2.pubmatic.com/AdServer/Pug?vcode=bz0yJnR5cGU9MSZjb2RlPTI2NDYmdGw9MTI5NjAw&piggybackCookie=Q6736726381487503457J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t338.inf", 
		LAST);

	web_custom_request("sd_4", 
		"URL=https://us-u.openx.net/w/1.0/sd?id=537073059&val=Q6736726381487503457J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t339.inf", 
		LAST);

	web_custom_request("ep_4", 
		"URL=https://px.owneriq.net/ep?sid%5B%5D=8460259172&sid%5B%5D=8460259192&pt=7kxod6&uid=Q6736726381487503457J&jcs=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t340.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("tap.php_4", 
		"URL=https://pixel.rubiconproject.com/tap.php?v=11581&nid=2395&put=Q6736726381487503457J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t341.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("auth_4", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&198400471&skiprnd=1&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t342.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"bb21ee13-1ad2-a67a-9f7b-226261c3a378\",\"sessionNumber\":1,\"pageNumber\":5},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("rum_4", 
		"URL=https://dsum.casalemedia.com/rum?cm_dsp_id=31&external_user_id=Q6736726381487503457J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t343.inf", 
		LAST);

	web_custom_request("pageview_5", 
		"URL=https://c.contentsquare.net/pageview?pid=1255&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&lv=1620386135&lhd=1620386135&hd=1620386238&pn=5&re=1&dw=1459&dh=2331&ww=1463&wh=713&sw=1463&sh=823&dr=&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000&uc=1&la=en-US&cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryL2%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&cvarp="
		"%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryL2%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&v=10.8.6&r=675475", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t344.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("pageEvent_4", 
		"URL=https://c.contentsquare.net/pageEvent?value=MIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA&isETR=false&v=10.8.6&pid=1255&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&pn=5&r=831252", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t345.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("ibs_dpid=53196&dpuuid=Q6736726381487503457J", 
		"URL=https://dpm.demdex.net/ibs_dpid=53196&dpuuid=Q6736726381487503457J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t346.inf", 
		LAST);

	web_custom_request("setuid_4", 
		"URL=https://ib.adnxs.com/setuid?entity=13&code=Q6736726381487503457J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t347.inf", 
		LAST);

	web_custom_request("c00596552.gif", 
		"URL=https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c00596552.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t348.inf", 
		LAST);

	web_custom_request("__cool.gif_7", 
		"URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjkzIFNhZmFyaS81MzcuMzYiLCJzZXNzaW9uX3BsYXRmb3JtIjogIldpbjMyIiwidHJhY2tlcl90eXBlIjogImphdmFzY3JpcHQiLCJ0cmFja2VyX3ZlcnNpb24iOiAiMi4xLjE1IiwiZXZlbnRfbmFtZSI6ICJjcmVhdGVTZXNzaW9uIiwiZXZlbnRfdGltZXN0YW1wX2Vwb2NoIjogIjE2MjAzODYyNDIyMzIiLCJldmVudF90aW1lem9uZV9vZmZzZXQiOiAwLCJ1c2VyX2lkIj"
		"ogIjE3OTQ2OGE0OTgzMmJhLTAxNDk5OTBlMjQ3ZGU4LWQ3ZTE3MzktMTI1ZjUxLTE3OTQ2OGE0OTg0YjQwIiwidXJsIjogImh0dHBzOi8vcHBzc3VwcG9ydC1pdGdsbGJoNy5pbmMuaHAuY29tL3VzLWVuL3Byb2R1Y3RzL3ByaW50ZXJzL29mZmljZWpldC1wcmludGVycy9vZmZpY2VqZXQtNDAwMCIsImZvcm1JZCI6IG51bGwsImZvcm1UcmlnZ2VyVHlwZSI6IG51bGwsImthbXB5bGVfZGF0YSI6IHsiTEFTVF9JTlZJVEFUSU9OX1ZJRVciOiAiIiwiREVDTElORURfREFURSI6ICIiLCJrYW1weWxlSW52aXRlUHJlc2VudGVkIjogIiIsImthbXB5bGVfdXNlcmlkIjogIjdlNGUtOTY1Ny1mZTEyLTY4OWEtZjhkMC1jZWE3LTI5NGMtNGNmNiIsImthbXB5bGVVc2VyU2Vz"
		"c2lvbiI6ICIxNjIwMzg2MjE0NzkzIiwia2FtcHlsZVVzZXJQZXJjZW50aWxlIjogIiIsIlNVQk1JVFRFRF9EQVRFIjogIiIsImFkZGl0aW9uYWxEYXRhIjogeyJ1c2VyX3Nlc3Npb24iOiAiMTYyMDM4NjIxNDc5MyIsImRpcmVjdF9uYXZpZ2F0aW9uIjogdHJ1ZSwiZGlmZnJlbnRfcmVmZXJyZXIiOiB0cnVlfX0sImNvb2tpZV9zaXplIjogMjc2Niwia2FtcHlsZV92ZXJzaW9uIjogIjIuMzcuMSIsIm9uc2l0ZV92ZXJzaW9uIjogIjIuMzcuMSIsImhpc3RvcnlfbGVuZ3RoIjogNCwiZXZlbnRfbG9jYWxfdGltZXN0YW1wIjogMTYyMDM4NjI0MjAzNiwicG9zaXRpb24iOiBudWxsLCJpc1VzZXJJZGVudGlmaWVkIjogZmFsc2UsImZlZWRiYWNrX2NvcnJlbGF0aW9uX3"
		"V1aWQiOiBudWxsfQpdfQ==", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t349.inf", 
		LAST);

	web_custom_request("__cool.gif_8", 
		"URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjkzIFNhZmFyaS81MzcuMzYiLCJzZXNzaW9uX3BsYXRmb3JtIjogIldpbjMyIiwidHJhY2tlcl90eXBlIjogImphdmFzY3JpcHQiLCJ0cmFja2VyX3ZlcnNpb24iOiAiMi4xLjE1IiwiZXZlbnRfbmFtZSI6ICJuZWJ1bGFfcGFnZV92aWV3IiwiZXZlbnRfdGltZXN0YW1wX2Vwb2NoIjogIjE2MjAzODYyNDIyNDIiLCJldmVudF90aW1lem9uZV9vZmZzZXQiOiAwLCJ1c2VyX2"
		"lkIjogIjE3OTQ2OGE0OTgzMmJhLTAxNDk5OTBlMjQ3ZGU4LWQ3ZTE3MzktMTI1ZjUxLTE3OTQ2OGE0OTg0YjQwIiwiZW52aXJvbWVudCI6ICJwcm9kVXNPcmVnb24iLCJhY2NvdW50SWQiOiA1NDExMTQsInVybCI6ICJodHRwczovL3Bwc3N1cHBvcnQtaXRnbGxiaDcuaW5jLmhwLmNvbS91cy1lbi9wcm9kdWN0cy9wcmludGVycy9vZmZpY2VqZXQtcHJpbnRlcnMvb2ZmaWNlamV0LTQwMDAiLCJ3ZWJzaXRlSWQiOiA1NDEzMTgsImZvcm1JZCI6IG51bGwsImZvcm1UcmlnZ2VyVHlwZSI6IG51bGwsImthbXB5bGVfZGF0YSI6IHsiTEFTVF9JTlZJVEFUSU9OX1ZJRVciOiAiIiwiREVDTElORURfREFURSI6ICIiLCJrYW1weWxlSW52aXRlUHJlc2VudGVkIjogIiIsImth"
		"bXB5bGVfdXNlcmlkIjogIjdlNGUtOTY1Ny1mZTEyLTY4OWEtZjhkMC1jZWE3LTI5NGMtNGNmNiIsImthbXB5bGVVc2VyU2Vzc2lvbiI6ICIxNjIwMzg2MjQyMDM2Iiwia2FtcHlsZVVzZXJQZXJjZW50aWxlIjogIiIsIlNVQk1JVFRFRF9EQVRFIjogIiJ9LCJjb29raWVfc2l6ZSI6IDI3NjYsImthbXB5bGVfdmVyc2lvbiI6ICIyLjM3LjEiLCJvbnNpdGVfdmVyc2lvbiI6ICIyLjM3LjEiLCJoaXN0b3J5X2xlbmd0aCI6IDQsImV2ZW50X2xvY2FsX3RpbWVzdGFtcCI6IDE2MjAzODYyNDIwNDEsInBvc2l0aW9uIjogbnVsbCwiaXNVc2VySWRlbnRpZmllZCI6IGZhbHNlLCJmZWVkYmFja19jb3JyZWxhdGlvbl91dWlkIjogbnVsbH0KXX0=", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t350.inf", 
		LAST);

	web_add_cookie("IR_5105=1620386237690%7C365159%7C1620386237690%7C%7C; DOMAIN=met2.hp.com");

	web_add_cookie("IR_PI=8f093cdb-af25-11eb-9a1c-42010a246c50%7C1620472637690; DOMAIN=met2.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Fri+May+07+2021+11%3A17%3A18+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=2e9f3572-f42b-431d-bc1d-845ecee709da&interactionCount=2&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryL2%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386238.1620386135.1589380098.1654550135183.None.1; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_s=5.1; DOMAIN=met2.hp.com");

	web_add_cookie("__CT_Data=gpv=4&ckp=tld&dm=hp.com&apv_325_www11=4&cpv_325_www11=4; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisit=4; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisitc=4; DOMAIN=met2.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C70%2C70%2C1579.8571166992188%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C68%2C68%2C1579.8571166992188%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=met2.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("s59179315613346", 
		"URL=https://met2.hp.com/b/ss/hphqglobal,hphq-ces-global-stage-temp,hphq-ces-na-stage-temp/1/JS-2.15.0/s59179315613346?AQB=1&ndh=1&pf=1&t=7%2F4%2F2021%2011%3A17%3A22%205%200&mid=87931844697006436903700237078780896084&aamlh=9&ce=UTF-8&ns=hpcorp&pageName=D%3Dv55&g=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000&ch=pps&server=ppssupport-itgllbh7.inc.hp.com&events=event46%2Cevent45%3D68&aamb="
		"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1=us-en&v2=us&c3=ProductCategoryL2&v3=en&c7=us&c8=en&c9=cs%3Aconsumer.home&c12=R11839&v12=Anonymous&c15=12&c26=D%3Dv12&c30=D%3Dv55&c31=null&v32=null&v33=null&v34=null&v35=null&c43=null&v46=D%3Dc3&c49=D%3Dg&c50=D%3Dg&c51=hpexpnontridion%3Aihfcaas.5.r&c55=null&v55=pps-ces%7Cproductcategoryl2&c56=null&c57=null&c58=null&c59=null&c60=70&c61=0001%3A0004%3A00&c63=Engaged&c66=87931844697006436903700237078780896084&c73=D%3Dv55&v90="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000&v92=ens%7Csupport_stage%7C04-May-2021%2007%3A24%3A28&v93=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%2Fprinters%2Fofficejet-printers%2Fofficejet-4000&v94=ppssupport-itgllbh7.inc.hp.com&v95=ppssupport-itgllbh7.inc.hp.com%3AUnknown%7CUnknown%7CAMS%7Cus%3Aen%7CUSD&v99=6.8&s=1463x823&c=24&j=1.6&v=N&k=Y&bw=1463&bh=713&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&AQE=1", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t351.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("dvar_4", 
		"URL=https://c.contentsquare.net/dvar?v=10.8.6&pid=1255&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&pn=5&dv=N4IgpgaghgTgjAJhALhAQQHYHsME8C2WArgM4gA0IADjFlQMwogAKtAJkQMYAuAwlNzABzLDFwAZJJRp04TUgFowGEAF8gAA&r=319593", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t352.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_think_time(5);

	web_custom_request("events_11", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=68&mdh=713&pn=5&re=1&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&lv=1620386135&lhd=1620386135&hd=1620386238&pid=1255&str=329&di=387&dc=6433&fl=6443&eu=%5B%5B0%2C14%2C1463%2C713%5D%2C%5B6%2C643%2C507%2C1466%2C%22li%23pDrillLevel3_Product6%3Espan%3Aeq(0)%3Ea%3Aeq(0)%3Ediv%3Aeq(0)%3Eimg%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C682%2C586%2C1455%2C%22li%23pDrillLevel3_Product6%3Espan%3Aeq(0)%3Ea%3Aeq(0)%3Ediv%3Aeq(0)%3Eimg%3Aeq(0)"
		"%22%5D%2C%5B2%2C1015%2C531%2C1461%2C0%2C%22li%23pDrillLevel3_Product6%3Espan%3Aeq(0)%3Ea%3Aeq(0)%3Ediv%3Aeq(0)%3Eimg%3Aeq(0)%22%2C59017%2C55044%5D%2C%5B2%2C3933%2C993%2C873%2C0%2C%22div%23pCategoryLevelThreeDiv%3Ediv%3Aeq(0)%22%2C46949%2C9376%5D%5D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products/printers/officejet-printers/officejet-4000", 
		"Snapshot=t353.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	return 0;
}