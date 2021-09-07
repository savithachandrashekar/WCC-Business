Computer_New()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI42m5ANsl1twl8vxEt7z8irNsM_5_nTP8XzVj5I1y9GpF1VxHtNDwwOjwfkVEGGrqMubs8mVLl9IUQO3s363PFVDyyPjK_sM9HpWYoyj2ZKrrZVmhViGb9cXFnc9nNsn9wBFDSj4cG74lzWIO8vtZMrDyGukA; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIgZIB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:tgK2TorHlKUYoDQ2s9tvn3BjwboE7iIBi73imNsajYwgu4Is49rnWrhYNrj5CSY0z0MAZujruKo6lvOdd_bUi3pdMQcVqg:oVTuJX4rac9JGiVp; DOMAIN=accounts.google.com");

	web_add_cookie("NID=215=RW6TWRz5PzQoF4NAP3qiyjQRJ8CoZQxdOBE4s9JuiPM0WJI2k-DYGh4RzZe1J1Wx8rpSZEmL6o_lKVQ7b0uckCCHhwlS0Z7ANxCgU49cjr-gQ5LsqNao_voP1iJgJwIGjytJN-G7XIo73Ax74fMcN4ddtsY_5HQuWQcvoiKQLOloy6bld8OkJc1PR9edFi8rgAg; DOMAIN=accounts.google.com");

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
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"Body= ", 
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

	web_url("computer", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("xdframe-single-domain-1.1.0.html", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("computerLanding", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/termbase/us-en/computerLanding", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_url("region", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_url("computerLanding_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/config/us-en/computerLanding", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_producticons", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_sitehome_producticons", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_land_comp_banner", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_land_comp_banner", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_land_comp_carousel", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_land_comp_carousel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_land_comp_primaryoptions", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_land_comp_primaryoptions", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_url("wcc_land_comp_topicoptions", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_land_comp_topicoptions", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("wcc_second_Nav", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t85.inf", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"Computer_Landing_New\",\"path\":\"/computer\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	web_url("country-selector.json", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/data/country-selector.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_pfinder_common", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/contexual/us-en/wcc_pfinder_common?pageTemplate=Computer_Landing_New", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_alerts", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/us-en/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.4.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=5E34123F5245B2CD0A490D45%40AdobeOrg&d_nsid=0&ts=1621436505827", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_cookie("ApplicationGatewayAffinityCORS=6e930695b3ddc82f56c7619ce500f8c7; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("ApplicationGatewayAffinity=6e930695b3ddc82f56c7619ce500f8c7; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Computer_Landing_New%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621436506064r0.5331771002304457; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("products", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("contact-hp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/contact-hp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("auth", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&678570930&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"941587d7-c17f-ac26-c707-f1fa3c415617\",\"sessionNumber\":1,\"pageNumber\":1},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/us-en/computer\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("events", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"18956663993\",\"revision\":\"867\",\"visitors\":[{\"visitor_id\":\"oeu1621436506064r0.5331771002304457\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t"
		"\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1621436506090}],\"snapshots\":[{\"activationTimestamp\":1621436506063,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"5ac4efbb-5755-4842-8100-4a765bcc29c5\",\"t\":1621436506086}]},{\"activationTimestamp\":1621436506063,\"decisions\":[{\"c\":\"20273602566\",\"x\":null,\"v\":null,\"h\":false}],\"events\":[{\""
		"e\":\"20273602566\",\"y\":\"campaign_activated\",\"u\":\"0efc8d7c-1b7e-425c-aa9b-662f3676417b\",\"t\":1621436506645},{\"e\":\"20279272547\",\"k\":\"18956663993_new_signin_promo_animation__page\",\"t\":1621436506649,\"u\":\"fd1b95a3-5b30-4245-8b31-02a548bc2c5d\",\"y\":\"view_activated\",\"a\":{}}]}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("getOffer", 
		"URL=https://mastiff-itg.ext.hp.com/gw/hpit/cs/mastiff.itg/1.0/MastiffService-1/getOffer", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body="
		"%7B%22requestId%22%3A%221621436507413OrOhpBi%22%2C%22offerLocations%22%3A%22primary%22%2C%22offerName%22%3A%22%22%2C%22acceptanceLevel%22%3A%22%22%2C%22product%22%3A%7B%22modelNumber%22%3A%22%22%2C%22serialNumber%22%3A%22%22%2C%22partNumber%22%3A%22%22%2C%22productRegion%22%3A%22%22%2C%22productEndOfLifeCycle%22%3A%22%22%2C%22productEndOfSupportCycle%22%3A%22%22%2C%22productType%22%3A%22%22%2C%22productLine%22%3A%22%22%2C%22productSegment%22%3A%22%22%2C%22productCategory%22%3A%22%22%2C%22productSu"
		"bCategory%22%3A%22%22%2C%22productSeries%22%3A%22%22%2C%22productSeriesOid%22%3A%22%22%2C%22productSupportCategoryName%22%3A%22%22%2C%22productReleasedate%22%3A%22%22%2C%22platform%22%3A%22%22%2C%22includeHTML%22%3A%22%22%2C%22carePackEligible%22%3A%22%22%2C%22currentActiveCarePack%22%3A%22%22%2C%22instantInkEligible%22%3A%22%22%2C%22instantInkCapability%22%3A%22%22%2C%22inkLevel%22%3A%22%22%2C%22instantInkSubscriptionStatus%22%3A%22%22%2C%22loi%22%3A%22%22%2C%22warranty%22%3A%7B%22warrantyState%2"
		"2%3A%22%22%2C%22warrantyStatus%22%3A%22%22%2C%22warrantyStatusDetail%22%3A%22%22%2C%22warrantyStatusCode%22%3A%22%22%2C%22warrantyCaption%22%3A%22%22%7D%7D%2C%22user%22%3A%7B%22callerId%22%3A%22supportweb%22%2C%22sessionId%22%3A%22413OrOhpBi%22%2C%22pageId%22%3A%22home_computer%22%2C%22HPID%22%3A%22%22%2C%22intent%22%3A%22%22%2C%22locale%22%3A%22us-en%22%2C%22countryCode%22%3A%22us%22%2C%22language%22%3A%22en%22%2C%22deviceType%22%3A%22%22%2C%22activeHealth%22%3A%22%22%2C%22isNewCustomer%22%3A%22%"
		"22%2C%22emailOffers%22%3A%22%22%2C%22gender%22%3A%22%22%2C%22smartFriend%22%3A%22%22%2C%22customerType%22%3A%22%22%7D%7D", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("otCenterRounded.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/otCenterRounded.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("otPcTab.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/v2/otPcTab.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("10044594.json", 
		"URL=https://s.yimg.com/wi/config/10044594.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Computer_Landing_New%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621436506064r0.5331771002304457; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_id=941587d7-c17f-ac26-c707-f1fa3c415617.1621436507.1.1621436507.1621436507.1589380098.1655600507109.None.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CMCMID%7C26978512947346841431428697071916097882%7CMCAAMLH-1622041306%7C9%7CMCAAMB-1622041306%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621443707s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18774%7CvVersion%7C4.4.0; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+May+19+2021+15%3A01%3A50+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=db2384f4-6387-483f-a57a-649344fc576c&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fcomputer&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dcm_s=1621436510544.967374764; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_gcl_au=1.1.305048406.1621436511; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_rdt_uuid=1621436511039.b4c0f8a4-92ea-47d5-888f-79a9d1ef5e95; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_5105=1621436511066%7C365159%7C1621436511066%7C%7C; DOMAIN=linkto.ext.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("5105", 
		"URL=https://linkto.ext.hp.com/xc/365159/342132/5105", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=srcref=&landurl=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fcomputer&&_ir=U364%7C%7C1621436511066", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("eps", 
		"URL=https://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6747229111460827268J&l=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("ep", 
		"URL=https://px.owneriq.net/ep?sid%5B%5D=14558733782&sid%5B%5D=14558733787&sid%5B%5D=14558733792&sid%5B%5D=8460259172&sid%5B%5D=8460259192&pt=7kxod6&uid=Q6747229111460827268J&jcs=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("events_2", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=0&mdh=13&pn=1&re=1&uu=941587d7-c17f-ac26-c707-f1fa3c415617&sn=1&lv=1621436507&lhd=1621436507&hd=1621436507&pid=1255&str=1220&di=1698&dc=7320&fl=7323&eu=%5B%5B0%2C38%2C557%2C13%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t104.inf", 
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
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:692001789&cup2hreq=511f2ec06fe8c5e11a8dd4796eb3674e66834cfa78e1d35c8a35ef5901c1ff0d", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{936513be-48f5-49d8-8322-f2905adc986b}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{ad60ad0b-0b68-4c08-b02a-fbcf85d3031b}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{b7b54d05-d7ac-4db2-90c9-e0a065b75121}\",\"rd\":5252},\"updatecheck\":{"
		"},\"version\":\"14.5\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{5622816b-7747-4b9d-969d-568609ad6824}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\""
		"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{9f6451c1-ae37-4cf0-9176-4179c9f74f04}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.37a9146e17a5ffa3b7f05fce240a2a6cc67c07be3f6309d2d600d0310de696a9\"}]},\"ping\":{\"ping_freshness\":\"{8207de76-8b3f-435e-933e-233506770b82}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.29.0"
		"\"},{\"appid\":\"idgpnmonknjnojddfkpgkljpfnnfcklj\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.20\"}]},\"ping\":{\"ping_freshness\":\"{aac56fa1-3e02-4809-afbf-e27615ddec80}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"3.1.20\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\""
		"ping\":{\"ping_freshness\":\"{67670070-2362-4adc-9fe7-ea635900c80c}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.3\"}]},\"ping\":{\"ping_freshness\":\"{7a50297e-2ed1-4d00-9ff7-7cbb4d801efb}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.05bc4a6e12744e61576e531c7602778bf2316598236e1bb2b87a664fd2aee8c5\"}]},\"ping\":{\"ping_freshness\":\"{2be447d8-f245-4778-9cd3-ed03552d5850}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"9021.222.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.212\",\"protocol\":\"3.1\",\"requestid\":\"{8d5c61db-ffa3-4c76-8a50-dd0046ca35cb}\",\"sessionid\":\"{4d10e7f4-5fd3-41d9-9889-66597d5165ed}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.212\"}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("consentreceipts", 
		"URL=https://privacyportaluat.onetrust.com/request/v1/consentreceipts", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("consentreceipts_2", 
		"URL=https://privacyportaluat.onetrust.com/request/v1/consentreceipts", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t107.inf", 
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
		"_HarCEO3696XpF7UVRPjrRSMeRi6MrZTc8_qpVXD_VntxOde7mPjRgDpdmFUw6730G7lFWiJhLCFwRdL9NJTO-EiedrwvLebRY4ZgT0zhIoT4f3orAcTvNIBTc1EizAcktO36JrtYCmYwA-4s8qKCQ8F-sa4Weq8ju0ZzvmNX5vmqcZcfw8bGYcauHoL85xR-N1_1rNcGSUVw50I_C78z5ZqfVvhR34lRsMDk67M77NLNAbQnlqYijrQ\",\"identifier\":\"db2384f4-6387-483f-a57a-649344fc576c\",\"customPayload\":{\"Interaction\":1,\"AddDefaultInteraction\":false},\"isAnonymous\":true,\"test\":false,\"purposes\":[{\"Id\":\"A85F67EE-AA05-46A3-AE07-CD72787B11FD\",\"TransactionType\":\""
		"NO_CHOICE\"},{\"Id\":\"590FF105-2512-4723-AA13-7F32348D159D\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"C6F69493-0985-48A8-BD9E-96F82C853620\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"FFFE841C-4AE6-4908-94EF-98C704ADDD08\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"C3EEEE8C-8904-4DAF-BFB7-B1F6C0D09E4A\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"A5D41B0F-A3CE-4748-B1A0-F0C45117217A\",\"TransactionType\":\"CONFIRMED\"}],\"dsDataElements\":{\"InteractionType\":\"Banner - Allow All\",\""
		"Country\":\"US\",\"UserAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.212 Safari/537.36\"}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("consentreceipts_3", 
		"URL=https://privacyportaluat.onetrust.com/request/v1/consentreceipts", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t108.inf", 
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
		"_HarCEO3696XpF7UVRPjrRSMeRi6MrZTc8_qpVXD_VntxOde7mPjRgDpdmFUw6730G7lFWiJhLCFwRdL9NJTO-EiedrwvLebRY4ZgT0zhIoT4f3orAcTvNIBTc1EizAcktO36JrtYCmYwA-4s8qKCQ8F-sa4Weq8ju0ZzvmNX5vmqcZcfw8bGYcauHoL85xR-N1_1rNcGSUVw50I_C78z5ZqfVvhR34lRsMDk67M77NLNAbQnlqYijrQ\",\"identifier\":\"db2384f4-6387-483f-a57a-649344fc576c\",\"customPayload\":{\"Interaction\":2,\"AddDefaultInteraction\":false},\"isAnonymous\":true,\"test\":false,\"purposes\":[{\"Id\":\"A85F67EE-AA05-46A3-AE07-CD72787B11FD\",\"TransactionType\":\""
		"NO_CHOICE\"},{\"Id\":\"590FF105-2512-4723-AA13-7F32348D159D\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"C6F69493-0985-48A8-BD9E-96F82C853620\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"FFFE841C-4AE6-4908-94EF-98C704ADDD08\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"C3EEEE8C-8904-4DAF-BFB7-B1F6C0D09E4A\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"A5D41B0F-A3CE-4748-B1A0-F0C45117217A\",\"TransactionType\":\"CONFIRMED\"}],\"dsDataElements\":{\"InteractionType\":\"Banner - Close\",\""
		"Country\":\"US\",\"UserAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.212 Safari/537.36\"}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(6);

	web_custom_request("events_3", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=0&mdh=13&pn=1&re=1&uu=941587d7-c17f-ac26-c707-f1fa3c415617&sn=1&lv=1621436507&lhd=1621436507&hd=1621436507&pid=1255&str=1220&di=1698&dc=7320&fl=7323&eu="
		"%5B%5B5%2C9536%2C0%2C0%2C%22a%23closeAlert%22%2C%22%22%5D%2C%5B2%2C9773%2C496%2C0%2C0%2C%22div%23onetrust-group-container%22%2C61479%2C-163%5D%2C%5B2%2C11009%2C1337%2C43%2C0%2C%22div%23welcomeHeader%22%2C54034%2C56360%5D%2C%5B0%2C11239%2C1626%2C792%2C208%5D%2C%5B2%2C12578%2C1337%2C43%2C0%2C%22%22%2C54034%2C56360%5D%2C%5B2%2C12978%2C1213%2C99%2C0%2C%22div%23onetrust-group-container%22%2C65143%2C10254%5D%2C%5B6%2C13008%2C1198%2C104%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B2%2C13379%2C1183%2C108%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C22658%2C33902%5D%2C%5B3%2C13602%2C1183%2C108%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B4%2C13836%2C1183%2C108%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C13838%2C1183%2C108%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B7%2C14091%2C1183%2C108%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%5D%2C%5B2%2C17517%2C1180%2C112%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C51671%2C52829%5D%2C%5B6%2C17562%2C1161%2C143%2C%22a%23sec-nav-business-support%22%2C%22%22%5D%2C%5B7%2C17662%2C1156%2C172%2C%22a%23sec-nav-business-support%22%5D%2C%5B2%2C17918%2C1157%2C163%2C0%2C%22a%23sec-nav-business-support%22%2C60739%2C60648%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/computer", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	return 0;
}