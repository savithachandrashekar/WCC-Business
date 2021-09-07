Home_MastiffCalls()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_url("us-en", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI42m5ANsl1twl8vxEt7z8irNsM_5_nTP8XzVj5I1y9GpF1VxHtNDwwOjwfkVEGGrqMubs8mVLl9IUQO3s363PFVDyyPjK_sM9HpWYoyj2ZKrrZVmhViGb9cXFnc9nNsn9wBFDSj4cG74lzWIO8vtZMrDyGukA; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIgZIB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:tgK2TorHlKUYoDQ2s9tvn3BjwboE7iIBi73imNsajYwgu4Is49rnWrhYNrj5CSY0z0MAZujruKo6lvOdd_bUi3pdMQcVqg:oVTuJX4rac9JGiVp; DOMAIN=accounts.google.com");

	web_add_cookie("NID=215=RW6TWRz5PzQoF4NAP3qiyjQRJ8CoZQxdOBE4s9JuiPM0WJI2k-DYGh4RzZe1J1Wx8rpSZEmL6o_lKVQ7b0uckCCHhwlS0Z7ANxCgU49cjr-gQ5LsqNao_voP1iJgJwIGjytJN-G7XIo73Ax74fMcN4ddtsY_5HQuWQcvoiKQLOloy6bld8OkJc1PR9edFi8rgAg; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2021-05-19-06; DOMAIN=accounts.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_revert_auto_header("Origin");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"Body= ", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("rxVisitor=16214295540026F3H5FAE1FA4I8JGEV563LCLTA2N3MLA; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtLatC=783; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1621431354015|1621429554008; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$229553996_83h1vHCRHQJVFTDKUKQOPMKWSJNWWMAVRIMWM-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t45.inf", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"SiteHome_New\",\"path\":\"/\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	web_url("siteHome", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/termbase/us-en/siteHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_carousel", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_sitehome_carousel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_tiles", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_sitehome_tiles", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("siteHome_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/config/us-en/siteHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_rowicons", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_sitehome_rowicons", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_supportresources", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_sitehome_supportresources", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_second_Nav", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_alerts", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/us-en/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("country-selector.json", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/data/country-selector.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("wcc_pfinder_common", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/contexual/us-en/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t56.inf", 
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

	web_url("a2129670914.html", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("windows_image", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/wcm/connect/pps/mlcontent_en/us-en/images/windows_image", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_url("contact-hp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/contact-hp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.4.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=5E34123F5245B2CD0A490D45%40AdobeOrg&d_nsid=0&ts=1621429556406", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Origin");

	web_custom_request("auth", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&862652453&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"d5846919-c17f-a178-d364-b932e4718d74\",\"sessionNumber\":1,\"pageNumber\":1},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/us-en\"}", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("events", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"18956663993\",\"revision\":\"854\",\"visitors\":[{\"visitor_id\":\"oeu1621429556189r0.15984883296938834\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\""
		"t\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1621429556211}],\"snapshots\":[{\"activationTimestamp\":1621429556186,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"cc393a81-9b9e-4571-b96b-f542788f9043\",\"t\":1621429556211}]}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_revert_auto_header("Origin");

	web_custom_request("getOffer", 
		"URL=https://mastiff-itg.ext.hp.com/gw/hpit/cs/mastiff.itg/1.0/MastiffService-1/getOffer", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body="
		"%7B%22requestId%22%3A%221621429557072GKgq8Xj%22%2C%22offerLocations%22%3A%22primary%22%2C%22offerName%22%3A%22%22%2C%22acceptanceLevel%22%3A%22%22%2C%22product%22%3A%7B%22modelNumber%22%3A%22%22%2C%22serialNumber%22%3A%22%22%2C%22partNumber%22%3A%22%22%2C%22productRegion%22%3A%22%22%2C%22productEndOfLifeCycle%22%3A%22%22%2C%22productEndOfSupportCycle%22%3A%22%22%2C%22productType%22%3A%22%22%2C%22productLine%22%3A%22%22%2C%22productSegment%22%3A%22%22%2C%22productCategory%22%3A%22%22%2C%22productSu"
		"bCategory%22%3A%22%22%2C%22productSeries%22%3A%22%22%2C%22productSeriesOid%22%3A%22%22%2C%22productSupportCategoryName%22%3A%22%22%2C%22productReleasedate%22%3A%22%22%2C%22platform%22%3A%22%22%2C%22includeHTML%22%3A%22%22%2C%22carePackEligible%22%3A%22%22%2C%22currentActiveCarePack%22%3A%22%22%2C%22instantInkEligible%22%3A%22%22%2C%22instantInkCapability%22%3A%22%22%2C%22inkLevel%22%3A%22%22%2C%22instantInkSubscriptionStatus%22%3A%22%22%2C%22loi%22%3A%22%22%2C%22warranty%22%3A%7B%22warrantyState%2"
		"2%3A%22%22%2C%22warrantyStatus%22%3A%22%22%2C%22warrantyStatusDetail%22%3A%22%22%2C%22warrantyStatusCode%22%3A%22%22%2C%22warrantyCaption%22%3A%22%22%7D%7D%2C%22user%22%3A%7B%22callerId%22%3A%22supportweb%22%2C%22sessionId%22%3A%22072GKgq8Xj%22%2C%22pageId%22%3A%22home%22%2C%22HPID%22%3A%22%22%2C%22intent%22%3A%22%22%2C%22locale%22%3A%22us-en%22%2C%22countryCode%22%3A%22us%22%2C%22language%22%3A%22en%22%2C%22deviceType%22%3A%22%22%2C%22activeHealth%22%3A%22%22%2C%22isNewCustomer%22%3A%22%22%2C%22e"
		"mailOffers%22%3A%22%22%2C%22gender%22%3A%22%22%2C%22smartFriend%22%3A%22%22%2C%22customerType%22%3A%22%22%7D%7D", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("otCenterRounded.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/otCenterRounded.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("otPcTab.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/v2/otPcTab.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22SiteHome_New%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621429556189r0.15984883296938834; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=d5846919-c17f-a178-d364-b932e4718d74.1621429556.1.1621429556.1621429556.1589380098.1655593556750.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CMCMID%7C33219701190469227413564768267111358918%7CMCAAMLH-1622034357%7C9%7CMCAAMB-1622034357%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621436757s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18774%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1621431358720|1621429554008; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$229553996_83h-vHCRHQJVFTDKUKQOPMKWSJNWWMAVRIMWM-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyle_userid=1c91-c3f0-8e18-528f-7f76-f857-6621-c456; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1621429559088; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleSessionPageCounter=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv1_prefs=null; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+May+19+2021+13%3A05%3A59+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=6d3bba46-380a-465c-b9f0-c071795a383b&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dcm_s=1621429559271.2061061975; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_gcl_au=1.1.1578177065.1621429559; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("cd_user_id=17984bba0af257-082cb3cabea3c7-2363163-125f51-17984bba0b0350; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=%5B%5BB%5D%5D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C40%2C40%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_3D1DAEF993357F64085F96D269B49CE0_perc_100000_ol_0_mul_1&svrid=1&flavor=post&visitID=HCRHQJVFTDKUKQOPMKWSJNWWMAVRIMWM-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en&app=ea7c4b59f27d43eb&crc=4218258791&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1621429551026%7C1621429558724%7Cdn%7C1846%2C2%7C2%7C_onload_%7C_load_%7C-%7C1621429558722%7C1621429558724%7Cdn%7C1846$PV=1$rId=RID_-2074709640$rpId=-733752955$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en$title=Official%20HP%C2%AE%20Support$latC=783$app=ea7c4b59f27d43eb$visitID=HCRHQJVFTDKUKQOPMKWSJNWWMAVRIMWM-0$vs=2$fId=229553996_83$v=10215210506134512$time=1621429561218", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_3D1DAEF993357F64085F96D269B49CE0_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=HCRHQJVFTDKUKQOPMKWSJNWWMAVRIMWM-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en&app=ea7c4b59f27d43eb&crc=803111352&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1621429551026%7C1621429559245%7Cdn%7C1846%2C2%7C3%7C_event_%7C1621429551026%7C_vc_%7CV%7C8219%5Epc%7CVCD%7C2349%7CVCDS%7C6%7CVCS%7C7859%7CVCO%7C9845%7CVCI%7C0%7CVE%7C1018%5Ep176%5Ep450%5Eps%5Esp%3Afirst-child%3Ea%3Anth-child%282%29%7CS%7C4625%2C2%7C4%7C_event_%7C1621429551026%7C_wv_%7ClcpE%7CIMG%7ClcpSel%7C...img.promo-bg%7ClcpS%7C55121%7ClcpT%7C5838%7ClcpU%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%"
		"2Fimage%2FPrinter_5Fnew.jpg%7Cfcp%7C4351%7Cfp%7C4031%7Ccls%7C0.4393%7Clt%7C2730%2C2%7C2%7C_onload_%7C_load_%7C-%7C1621429558722%7C1621429558724%7Cdn%7C1846%2C1%7C5%7C_event_%7C1621429551026%7C_view_$rId=RID_-2074709640$rpId=-733752955$domR=1621429558719$tvn=%2Fus-en$tvt=1621429551026$w=1626$h=792$sw=1463$sh=823$nt=a0b1621429551026e87f973g1099h1099i1567j1117k1567l2463m2466o3031p3974q3982r7693s7696t7698u3001v1882w6079M-733752955$ni=4g|4$fd=j2.2.4^sg8.2.3^sb6-10^scontentsquare$url="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en$title=Official%20HP%C2%AE%20Support$latC=783$app=ea7c4b59f27d43eb$visitID=HCRHQJVFTDKUKQOPMKWSJNWWMAVRIMWM-0$vs=2$fId=229553996_83$v=10215210506134512$vID=16214295540026F3H5FAE1FA4I8JGEV563LCLTA2N3MLA$nV=1$nVAT=1$time=1621429561255", 
		LAST);

	web_add_cookie("dtLatC=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=pps-ces%7Csitehome_new; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-05-19T13:06:03.177Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+May+19+2021+13%3A06%3A03+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=6d3bba46-380a-465c-b9f0-c071795a383b&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C40%2C40%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=pps-ces%257Csitehome_new%2C40%2C40%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_3D1DAEF993357F64085F96D269B49CE0_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=HCRHQJVFTDKUKQOPMKWSJNWWMAVRIMWM-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en&app=ea7c4b59f27d43eb&crc=804493444&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1621429562897%7C_wv_%7CAAI%7C1%7CfIS%7C11869%7CfID%7C2$rId=RID_-2074709640$rpId=-733752955$domR=1621429558719$tvn=%2Fus-en$tvt=1621429551026$ni=4g|4$fd=b51-100$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en$title=Official%20HP%C2%AE%20Support$latC=1$app=ea7c4b59f27d43eb$visitID=HCRHQJVFTDKUKQOPMKWSJNWWMAVRIMWM-0$vs=2$fId=229553996_83$v=10215210506134512$vID=16214295540026F3H5FAE1FA4I8JGEV563LCLTA2N3MLA$nV=1$time=1621429563260", 
		LAST);

	web_add_cookie("dtLatC=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_3D1DAEF993357F64085F96D269B49CE0_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=HCRHQJVFTDKUKQOPMKWSJNWWMAVRIMWM-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en&app=ea7c4b59f27d43eb&crc=3230791932&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fus-en$tvt=1621429551026$ni=4g|4$3p="
		"1-1621429551026%3Bmaxcdn.bootstrapcdn.com%7C8%7C1%7C0%7C0%7C0%7C2481_2738%7C258%7C258%7C258%3Bnetdna.bootstrapcdn.com%7Co%7C1%7C0%7C0%7C0%7C2481_2684%7C203%7C203%7C203%7C2%7C0%7C0%7C0%7C3027_3166_4252_4354%7C121%7C102%7C140%3Bppssupport-itgllbh7.inc.hp.com%7Cu%7C32%7C0%7C0%7C0%7C0%7C32%7C%7C0%7C0%7C0%7C3027_3372_4251_7681_7733_8040%7C1531%7C307%7C2444%7C7%7C0%7C0%7C0%7C0%7C7%7C%7C0%7C0%7C0%7C2485_3465_3973_4177_4197_4695%7C645%7C204%7C981%7C1%7C0%7C0%7C0%7C2484_2860%7C376%7C376%7C376%7C21%7C0%7C0%"
		"7C0%7C2481_3116_4216_5903%7C576%7C193%7C1686%3Bcdnjs.cloudflare.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C2484_2948%7C464%7C464%7C464%3Bssl.www8.hp.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C2484_2934%7C450%7C450%7C450%3Bt.contentsquare.net%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C3031_3290%7C259%7C259%7C259%3Bcsxd.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C3327_4008%7C681%7C681%7C681%3Bct.contentsquare.net%7C4%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C4057_4360_4383_4430%7C126%7C29%7"
		"C303%3Bmastiff-itg.ext.hp.com%7Ck%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C4218_5595%7C1377%7C1377%7C1377%7C1%7C0%7C0%7C0%7C6048_7354%7C1307%7C1307%7C1307%3Bnexus.ensighten.com%7Cm%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C5403_5594%7C192%7C192%7C192%7C4%7C0%7C0%7C0%7C0%7C4%7C%7C0%7C0%7C0%7C4711_5145_6080_6886%7C666%7C434%7C806%7C1%7C0%7C0%7C0%7C5692_5753%7C61%7C61%7C61%3Bcdn.optimizely.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C4711_4929%7C218%7C218%7C218%3Bitg-live.www8.hp.com%7Cs%7C1%7C0%7"
		"C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C4950_5164%7C214%7C214%7C214%7C2%7C0%7C0%7C0%7C4928_5138%7C208%7C205%7C210%7C6%7C0%7C0%7C0%7C4711_4881_5243_5752%7C318%7C170%7C400%3Bnebula-cdn.kampyle.com%7C4%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C4712_4887_7696_7850_7975_8016%7C124%7C41%7C176%3Bwww.googletagmanager.com%7C4%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C4975_5360_8396_8576%7C283%7C181%7C384%3Ba2129670914.cdn.optimizely.com%7Cg%7C1%7C0%7C0%7C0%7C5212_5376%7C164%7C164%7C164%3Bdpm.demdex.net%7Cg%7C1%7C0%7"
		"C0%7C0%7C5381_6147%7C767%7C767%7C767%3Bwww.hp.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C5405_6148%7C743%7C743%7C743%3Bwr-us.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C5759_6696%7C937%7C937%7C937%3Bc.contentsquare.net%7Cg%7C2%7C0%7C0%7C0%7C5759_6698%7C866%7C793%7C938%3Bhp.demdex.net%7Cg%7C1%7C0%7C0%7C0%7C6528_7151%7C623%7C623%7C623%3Bmet2.hp.com%7Cg%7C1%7C0%7C0%7C0%7C6535_6948%7C414%7C414%7C414%3Blogx.optimizely.com%7Cg%7C1%7C0%7C0%7C0%7C6553_7304%7C751%7C751%7C751%3Bcdn.cookielaw.org%7Ck%7C2%7"
		"C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C6714_7230_7425_7679%7C385%7C254%7C516%7C4%7C0%7C0%7C0%7C7235_7259_7693_7855_7927_8016%7C79%7C24%7C162%3Bgeolocation.onetrust.com%7Cg%7C1%7C0%7C0%7C0%7C7267_7423%7C156%7C156%7C156%3Bcm.everesttech.net%7Cg%7C1%7C0%7C0%7C0%7C7307_7394%7C87%7C87%7C87%3Bwww.googleadservices.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8243_8708%7C465%7C465%7C465%3Bad.doubleclick.net%7Cg%7C1%7C0%7C0%7C0%7C8397_10226%7C1829%7C1829%7C1829%3Bgoogleads.g.doubleclick.net%7Cg%7C3%7C0%7C"
		"0%7C0%7C8397_9003%7C393%7C56%7C606%3Budc-neb.kampyle.com%7C2%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C8603_8912%7C308%7C307%7C308%3Bwww.google.com%7Cg%7C1%7C0%7C0%7C0%7C8910_9004%7C94%7C94%7C94$rt="
		"1-1621429551026%3Bhttps%3A%2F%2Fmaxcdn.bootstrapcdn.com%2Fbootstrap%2F4.0.0%2Fcss%2Fbootstrap.min.css%7Cb2481e0f3g32h32i167j57k167l212m258u19666v18527w144877K1I11%7Chttps%3A%2F%2Fnetdna.bootstrapcdn.com%2Ffont-awesome%2F4.1.0%2Fcss%2Ffont-awesome.min.css%7Cb2481e0f3g18h18i150j31k162l196m203u5518v4403w20766K1I11%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-regular-ttf.woff2%7Cb2481e0f0g0h0i0j0k5l242m258u35242v34348w34348I11M-1958065100%7Chttps%3A%2F%2Fppssupport-itg"
		"llbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-bold-ttf.woff2%7Cb2482e0f57g57h57i131j69k131l385m387u34053v33160w33160I11M1866957002%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-light-ttf.woff2%7Cb2482e0f86g86h86i166j99k166l433m453u43214v42320w42320I11M-1817392509%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-bold-italic-ttf.woff2%7Cb2482e0f99g99h99i220j114k227l472m476u40033v39140w39140I11M-683847175%7Chttps%3A%2F%2Fppssupport-itgllb"
		"h7.inc.hp.com%2Fwcc-assets%2Ffonts%2Fhp_5Fsupport_5Fcontrols.woff2%7Cb2482e0f114g114h114i257j130k258l451m465u9332v8440w8440I11M-826391414%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-regular-italic-ttf.woff2%7Cb2483e0f0g0h0i0j0k258l485m493u41038v40144w40144I11M-1053746268%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Ffonts%2Flatin-e-light-italic-ttf.woff2%7Cb2483e0f0g0h0i0j0k377l629m633u42581v41688w41688I11M1664575352%7Chttps%3A%2F%2Fcdnjs.cloudflar"
		"e.com%2Fajax%2Flibs%2Fjquery%2F2.2.4%2Fjquery.min.js%7Cb2484e0f132g148h148i320j159k320l394m464u28087v26909w85578K1I12%7Chttps%3A%2F%2Fssl.www8.hp.com%2Fus%2Fen%2Fscripts%2Fframework%2Fjquery%2Fv-1-8%2Fcan.jquery.js%7Cb2484e0m450K1I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fstyles.b1ba3e4435944121b1d7.css%7Cb2484e0f67g67h67i132j83k132l369m376u22091v21207w140123K1I11M1638998892%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fruntime.9eb1e837f7a9f421fb99.js%7Cb2485"
		"e0f0g0h0i0j0k551l734m735u2620v1725w3652I12M2092008682%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fpolyfills.d301623517a574834b52.js%7Cb2485e0f0g0h0i0j0k551l781m806u35293v34395w105933I12M1153774168%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fscripts.204dec66716e86a3ab29.js%7Cb2485e0f0g0h0i0j0k557l798m807u30843v29944w84920I12M-2016289523%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fmain.d51ea4ffa4730172bdfd.js%7Cb2485e0f0g0h0i0j0k559l802m981u59165"
		"7v590166w2833313I12M-1628938840%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Fsprite-country-flags.png%7Cb3027e0f0g0h0i0j0k21l261m346u108965v108100w108100I11M-616939098%7Chttps%3A%2F%2Fnetdna.bootstrapcdn.com%2Ffont-awesome%2F4.1.0%2Ffonts%2Ffontawesome-webfont.woff%3Fv%3D4.1.0%7Cb3027e0f0g0h0i0j0k21l83m140u84865v83760w83760I11%7Chttps%3A%2F%2Ft.contentsquare.net%2Fuxa%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%7Cb3031e0m259I12%7Chttps%3A%2F%2Fcsxd.contentsquare.net%2Fuxa%2"
		"Fxdframe-single-domain-1.1.0.html%3Fpid%3D1255%26cookieNames%3D_5Fcs_5Fid%5Ec_5Fcs_5Fs%5Ec_5Fcs_5Fcvars%5Ec_5Fcs_5Fex%7Cb3327e0m681Bi1I4%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fpages-home-home-module-ngfactory.bae7f61991f11746855c.js%7Cb3973e0f0g0h0i0j0k3l202m204u1915v1019w2891K1I12M-1491762854%7Chttps%3A%2F%2Fct.contentsquare.net%2Fptc%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%7Cb4057e0m303I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-w"
		"cc%2Flibs%2Fscripts%2Fthird_5Fparty_5Flib.js%7Cb4197e0f0g0h0i0j0k4l486m487u2050v1098w3582K1I12M1023943009%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Flibs%2Fscripts%2Fmedallia.js%7Cb4197e0f0g0h0i0j0k4l498m498u1361v409w1237K1I12M-1310771106%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fssc%2Fregion%7Cb4216e0f0g0h0i0j0k3l195m196u1352v749w4665z1I1M654119933%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fcontact-hp%7Cb4218e0f0g0h0i"
		"0j0k7l1376m1686u42142v40993w214053z1I1M976068855%7Chttps%3A%2F%2Fmastiff-itg.ext.hp.com%2Fgw%2Fhpit%2Fcs%2Fmastiff.itg%2F1.0%2Fcontent%2Fjs%2Fsupportweb%2FHP_5Fscraper.js%7Cb4218e0m1377I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Ftermbase%2Fus-en%2FsiteHome%7Cb4219e0f0g0h0i0j0k8l204m205u4474v3870w16194z1I1M1086304550%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fsitemap%2Fhref%7Cb4220e0f0g0h0i0j0k9l191m193u1391v763w5849z1I1M1711601251%7Chttps%3A%2F%2Fppssup"
		"port-itgllbh7.inc.hp.com%2Fwcc-services%2Fcms-v2%2Fus-en%2Fwcc_5Fsitehome_5Ftiles%7Cb4220e0f0g0h0i0j0k193l396m397u953v348w1073z1I1M-2085509454%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fcms-v2%2Fus-en%2Fwcc_5Fsitehome_5Fcarousel%7Cb4221e0f0g0h0i0j0k194l383m385u1452v847w2480z1I1M-1734756362%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fssc%2Fconfig%2Fus-en%2FsiteHome%7Cb4222e0f0g0h0i0j0k202l409m410u2394v1791w5669z1I1M560961298%7Chttps%3A%2F%2Fppssupport-itgllb"
		"h7.inc.hp.com%2Fwcc-services%2Fcms-v2%2Fus-en%2Fwcc_5Fsitehome_5Frowicons%7Cb4222e0f0g0h0i0j0k384l622m623u1009v406w1414z1I1M455283371%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fcms-v2%2Fus-en%2Fwcc_5Fsitehome_5Fsupportresources%7Cb4222e0f0g0h0i0j0k396l622m624u938v334w566z1I1M1318066759%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fcms-v2%2Fus-en%2Fwcc_5Fsecond_5FNav%7Cb4223e0f0g0h0i0j0k409l622m625u1475v872w4203z1I1M882638950%7Chttps%3A%2F%2Fppssupport-itgllbh"
		"7.inc.hp.com%2Fwcc-services%2Fcms-v1%2Fus-en%2Fwcc_5Fsitehome_5Falerts%7Cb4223e0f0g0h0i0j0k461l640m645u890v286w372z1I1M-184577209%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fdata%2Fcountry-selector.json%7Cb4225e0f0g0h0i0j0k470l662m663u2644v1730w15625z1I1M-1452909266%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwps%2Fwcm%2Fconnect%2Fpps%2Fmlcontent_5Fen%2Fus-en%2Fimages%2Fwindows_5Fimage%7Cb4229e0f0g0h0i0j0k619l1364m1369u943v255w289z1I1M1049295832%7Chttps%3A%2F%2Fppssupport-it"
		"gllbh7.inc.hp.com%2Fwcc-services%2Fcms-v2%2Fcontexual%2Fus-en%2Fwcc_5Fpfinder_5Fcommon%3FpageTemplate%3DSiteHome_5FNew%7Cb4232e0f0g0h0i0j0k616l899m906u2539v1935w11384z1I1M1258096571%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Fidentify_5Fproduct_5Fall.svg%7Cb4251e0f0g0h0i0j0k599l881m887u2760v1872w5821I9M-1561965774%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Fprinter-signIn.svg%7Cb4251e0f0g0h0i0j0k617l880m886u1441v554w1191N3O425P40Q23R23I9M-15698"
		"42533%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Ficons.png%7Cb4252e0f0g0h0i0j0k637l880m887u42979v42139w42139I9M-1445657497%7Chttps%3A%2F%2Fnetdna.bootstrapcdn.com%2Ffont-awesome%2F4.1.0%2Ffonts%2Ffontawesome-webfont.woff%3Fv%3D4.1.0%7Cb4252e0f0g0h0i0j0k101l101m102v83760w83760I9%7Chttps%3A%2F%2Fct.contentsquare.net%2Fpcc%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%3FDeploymentConfigName%3DRelease_5F20210426%26Version%3D5%7Cb4383e0m29I12%7Chttps%3A%2F%2Fct.contentsquare.net"
		"%2Fwww%2Flatest-WR110.js%7Cb4384e0m46I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Farrow_5Ficon-01.svg%7Cb4666e0f0g0h0i0j0k478l658m709u1192v307w517N2O55P55Q150R150I7M823365251%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fimage%2FSWD_5FTile.jpg%7Cb4666e0f0g0h0i0j0k473l693m711u1872v996w996E1F67830O323P210Q150R150I7M1970483905%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2F"
		"hp-wcc%2Fheadless-assets%2Fimages%2Fimage%2FPrinter_5Fnew.jpg%7Cb4666e0f0g0h0i0j0k473l926m931u25307v24428w24428E1F67830O323P210Q330I7M-516617371%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fimage%2Fcomputer_5Fnew.jpg%7Cb4666e0f0g0h0i0j0k475l1080m1235u46369v45489w45489E1F67830O323P210Q320I7M-1304656953%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fcarousel-image%2"
		"F20_5F10_5F18_5Fhero_5FHolidaysGiftguide970170--28002-29.jpg%7Cb4666e0f0g0h0i0j0k940l1566m1865u52865v51985w51985N3O970P190I7M-1901701426%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fcarousel-image%2FDashboard_5FVideo_5FBanner.jpg%7Cb4667e0f0g0h0i0j0k1242l1565m1860u50439v49749w49749N3O970P190R191I7M-907211451%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fcarousel-"
		"image%2FHP-Sustainability.jpg%7Cb4667e0f0g0h0i0j0k1242l1565m1865u167915v167222w167222N3O970P190I7M-1787183851%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fcarousel-image%2FPremium-services.jpg%7Cb4667e0f0g0h0i0j0k1247l1860m2028u56426v55547w55547N3O970P190I7M1830998310%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fcarousel-image%2FHPSA_5FCarousel.jpg%7Cb4667e0f0g0"
		"h0i0j0k1487l2140m2219u38176v37297w37297N3O970P190I7M1624215452%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Ffe-assets%2Fimages%2Fsrch_5Ficon.svg%7Cb4667e0f0g0h0i0j0k1868l2212m2218u1466v482w735N3O25P25Q150R150I7M-136404951%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Farrow_5Ficon_5Fnocircle.svg%7Cb4685e0f0g0h0i0j0k1850l2138m2200u1188v303w430N3O15P190Q65R150I9M398863110%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2FBo"
		"otstrap.js%7Cb4711e0m434I12%7Chttps%3A%2F%2Fcdn.optimizely.com%2Fjs%2F18956663993.js%7Cb4711e0f3g14h14i153j29k155l204m218u129588v128507w448951I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fcaas%2Fheader-footer%2Fus%2Fen%2Fdefault%2Flatest.r%3FcontentType%3Djs%26hide_5Fsearch%3Dtrue%26show_5Fshopping_5Fcart%3Dtrue%26hide_5Fcountry_5Fselector%3Dtrue%7Cb4711e0m170I12%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fwu%2F541318%2Fonsite%2Fembed.js%7Cb4712e0m176K1I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%"
		"2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fimage%2FContent_5Fdiag.svg%7Cb4861e0f0g0h0i0j0k514l1041m1044u1691v893w1727E1F6400O80P80Q150R150I7M1196247598%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fimage%2FContent_5Fdiag_5Fhover.svg%7Cb4862e0f0g0h0i0j0k1675l2019m2024u1864v870w1653N3O150P150I7M-1897341762%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2"
		"Fimages%2Fimage%2FContent_5Fcheckwarranty.svg%7Cb4862e0f0g0h0i0j0k516l732m736u1710v715w1544E1F6400O80P80Q150R150I7M117170673%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fimage%2FContent_5Fcheckwarranty_5Fhover.svg%7Cb4862e0f0g0h0i0j0k1837l2060m2060u1677v675w1241N3O150P150I7M1393903963%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fimage%2FContent_5Fcontact.svg%7Cb"
		"4862e0f0g0h0i0j0k737l1040m1042u1790v801w1473I7M144322474%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fimage%2FContent_5Fcontact_5Fhover.svg%7Cb4862e0f0g0h0i0j0k1841l2334m2335u1569v763w1377E1F6400O80P80Q150R150I7M103010107%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Fflags%2Fflag_5Fus.gif%7Cb4917e0f0g0h0i0j0k1973l2162m2163u1431v595w595N3O16P11I7M1105393131%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.client"
		"libs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fus%2Fen%2Fclientlib-hf-fontface.css%7Cb4928e0m205K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-r-css.css%7Cb4928e0m210K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hf-js.js%7Cb4950e0m214K1I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtm.js%3Fid%3DGTM-PDHM2PK%7Cb4975e0m384I12%7Chttps"
		"%3A%2F%2Fa2129670914.cdn.optimizely.com%2Fclient_5Fstorage%2Fa2129670914.html%7Cb5212e0m164Bi2I4%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fp-finder%2F30-p-finder-printer.svg%7Cb5235e0f0g0h0i0j0k363l794m915u1305v500w917N3O30P30I7M2014115624%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fp-finder%2Fp-finder-icon-30-p-finder-printer-blue.svg%7Cb5236e0f0g0h0i0j0k16"
		"55l2067m2070u1551v538w1052N3O30P30I7M-486220188%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fp-finder%2Ficons-30-p-finder-laptop.svg%7Cb5236e0f0g0h0i0j0k1660l2178m2181u1373v374w574N3O30P30I7M-226075017%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fp-finder%2Fp-finder-icon-30-p-finder-laptop-blue.svg%7Cb5236e0f0g0h0i0j0k1660l2179m2182u1426v414w715N3O30P30I7M140058"
		"1178%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fp-finder%2Ficons-30-p-finder-desktop.svg%7Cb5236e0f0g0h0i0j0k1687l1898m1898u1302v491w880N3O30P30R31I7M2144867040%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fp-finder%2Fp-finder-icon-30-p-finder-desktop-blue.svg%7Cb5236e0f0g0h0i0j0k1845l2067m2070u1363v539w1031N3O30P30R31I7M-786280943%7Chttps%3A%2F%2Fppssupport-it"
		"gllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fp-finder%2Ficons-30-p-finder-other.svg%7Cb5236e0f0g0h0i0j0k1899l2443m2444u1312v314w468N3O30P30R31I7M1509591778%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fcontent%2Fdam%2Fhp-wcc%2Fheadless-assets%2Fimages%2Fp-finder%2Fp-finder-icon-30-p-finder-other-blue.svg%7Cb5236e0f0g0h0i0j0k1962l2179m2182u1175v353w615N3O30P30R31I7M1630809768%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLO"
		"BALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fclientlib-hf-fontface-core%2Fresources%2Ffonts%2FHpSimplifiedLight.woff%7Cb5243e0m400I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fclientlib-hf-fontface-core%2Fresources%2Ffonts%2FHPSimplifiedRegular.woff%7Cb5245e0m397I9%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_5Fvisid_5Fver%3D4.4.0%26d_5Ffieldgroup%3DMC%26d_5Frtbd%3Djson%26d_5Fver%3D2%26d_5Forgid%3D5E34123F5245B2CD0A490D45"
		"_2540AdobeOrg%26d_5Fnsid%3D0%26ts%3D1621429556406%7Cb5381e0m767z1I1%7Chttps%3A%2F%2Fnexus.ensighten.com%2Ferror%2Fe.gif%7Cb5403e0m192I7%7Chttps%3A%2F%2Fwww.hp.com%2Fcma%2Fng%2Flib%2Fexceptions%2Fprivacy-banner-test.js%7Cb5405e0m743K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Ffootericons.woff%7Cb5417e0m305I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-g"
		"lobalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Fnewhplogo.ttf%7Cb5417e0m305I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Ffonts_5Fheader_5Ficons.woff%7Cb5418e0m334I9%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2FserverComponent.php%7Cb5692e0m61K1I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwps%2Fwcm%2Fconnect%2Fpps%2F7254c179-4145-4964-9f4a-2099552f1eba%2FWin10_5FAug2018_"
		"5FMDA_5FEnglish2.jpg%7Cb5695e0f0g0h0i0j0k208l278m456u4311v3797w4207E1F5400O200P27I7M-1619868056%7Chttps%3A%2F%2Fwr-us.contentsquare.net%2Fctn_5Fv2%2Fauth%2F%3Fpid%3D325%26as%3D1%26862652453%26subsid%3D232897%26msgsize%3D120%7Cb5759e0m937z1I1%7Chttps%3A%2F%2Fc.contentsquare.net%2Fpageview%7Cb5759e0f1g18h18i741j65k768l935m938u474I7%7Chttps%3A%2F%2Fc.contentsquare.net%2FpageEvent%3Fvalue%3DMIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA%26isETR%3Dfalse%26v%3D10.8.6%26pid%3D1255%26uu%3Dd5846919-c17f-"
		"a178-d364-b932e4718d74%26sn%3D1%26pn%3D1%26r%3D711062%7Cb5905e0f20g20h20i621j67k626l790m793u474I7%7Chttps%3A%2F%2Fmastiff-itg.ext.hp.com%2Fgw%2Fhpit%2Fcs%2Fmastiff.itg%2F1.0%2FMastiffService-1%2FgetOffer%7Cb6048e0m1307z1I1%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2F8eb6e0d6c0d367083fff5b64b61a4441.js%3FconditionId0%3D422765%7Cb6080e0m618I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2Fb9b0fc01116e2374d7e92bc6cb675f3e.js%3FconditionId0%3D4880989%7Cb60"
		"81e0m806I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2F3ce08cf7c65e410fd9cf20d6115a04e1.js%3FconditionId0%3D285030%7Cb6081e0m805I12%7Chttps%3A%2F%2Fhp.demdex.net%2Fdest5.html%3Fd_5Fnsid%3D0%23https_253A_252F_252Fppssupport-itgllbh7.inc.hp.com%7Cb6528e0m623Bi3I4%7Chttps%3A%2F%2Fmet2.hp.com%2Fid%3Fd_5Fvisid_5Fver%3D4.4.0%26d_5Ffieldgroup%3DA%26mcorgid%3D5E34123F5245B2CD0A490D45_2540AdobeOrg%26mid%3D33219701190469227413564768267111358918%26ts%3D1621429557560%7Cb6535e0m414z1I1"
		"%7Chttps%3A%2F%2Flogx.optimizely.com%2Fv1%2Fevents%7Cb6553e0f150g270h270i676j325k677l749m751u375z1I1%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2FotSDKStub.js%7Cb6714e0m516K1I12%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df.json%7Cb7235e0m24z1I1%7Chttps%3A%2F%2Fgeolocation.onetrust.com%2Fcookieconsentpub%2Fv1%2Fgeo%2Flocation%7Cb7267e0m156I12%7Chttps%3A%2F%2Fcm.everesttech.net%2Fcm%2Fdd%3Fd_5Fuuid%3D27108090266764"
		"765294250309057660430914%7Cb7307e0m87I7%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2FotBannerSdk.js%7Cb7425e0m254I12%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df%2Fe688e508-0267-4c09-a64b-7c03f7e759ce%2Fen-ie.json%7Cb7693e0m162z1I2%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fus%2Fwu%2F541318%2Fonsite%2Fgeneric1621354891461.js%7Cb7696e0m154I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-assets%2Fimages%2Ffavicon.ico%7Cb7733e0f0g0h0i0j0k1"
		"18l306m307u1403v518w1150I22M1458307168%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2Fassets%2FotCenterRounded.json%7Cb7927e0m40z1I2%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2Fassets%2Fv2%2FotPcTab.json%7Cb7927e0m89z1I2%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fresources%2Fonsite%2Fjs%2Fcool-2.1.15.min.js%7Cb7975e0m41I12%7Chttps%3A%2F%2Fwww.googleadservices.com%2Fpagead%2Fconversion_5Fasync.js%7Cb8243e0f2g15h15i343j116k343l442m465u14868v14016w36885I12%7Chttps%3A%"
		"2F%2Fwww.googletagmanager.com%2Fgtm.js%3Fid%3DGTM-MQML682%7Cb8396e0m181I12%7Chttps%3A%2F%2Fad.doubleclick.net%2Factivity%5Essrc%3D4898302%5Estype%3Demeae0%5Escat%3Dhp_5Fem0%5Esord%3D1621429559271.2061061975%5Esgtm%3D2wg5c1%5Esauiddc%3D1578177065.1621429559%5Esu42%3Dppssupport-itgllbh7.inc.hp.com_252Fus-en%3F%7Cb8397c0d517e521f521g532h532i1654j605k1654l1822m1829u673v42w42I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F849111477%2F%3Fguid%3DON%26script%3D0%26userId%"
		"3Dnull%26gtmcb%3D1430172650%7Cb8397c0d269e310f312g322h322i462j398k462l511m516u746v42w42I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F783157761%2F%3Fguid%3DON%26script%3D0%26userId%3Dnull%26gtmcb%3D1050777442%7Cb8397c0d290e310f312g398h398i512j409k512l605m606u746v42w42I7%7Chttps%3A%2F%2Fudc-neb.kampyle.com%2Fegw%2F5%2Fqceuv8449dzg58ptt1bhda9g8ue19c7s%2Ftrack%2F_5F_5Fcool.gif%7Cb8603e0m307I7%7Chttps%3A%2F%2Fudc-neb.kampyle.com%2Fegw%2F5%2Fqceuv8449dzg58ptt1bhda9g8u"
		"e19c7s%2Ftrack%2F_5F_5Fcool.gif%7Cb8604e0m308I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F687393200%2F%7Cb8843e0f0g0h0i0j0k12l43m56u2027v1028w1640K1I12%7Chttps%3A%2F%2Fwww.google.com%2Fpagead%2F1p-user-list%2F687393200%2F%7Cb8910e0f0g0h0i0j0k7l92m94u746v42w42I7$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en$title=Official%20HP%C2%AE%20Support$latC=2$app=ea7c4b59f27d43eb$visitID=HCRHQJVFTDKUKQOPMKWSJNWWMAVRIMWM-0$vs=2$fId=229553996_83$v="
		"10215210506134512$vID=16214295540026F3H5FAE1FA4I8JGEV563LCLTA2N3MLA$time=1621429563350", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("events_2", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=40&mdh=792&pn=1&re=1&uu=d5846919-c17f-a178-d364-b932e4718d74&sn=1&lv=1621429556&lhd=1621429556&hd=1621429556&pid=1255&str=907&di=1465&dc=6127&fl=6132&eu=%5B%5B0%2C82%2C1626%2C792%5D%2C%5B6%2C336%2C920%2C597%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-home%3Aeq(0)%3Ediv%3Aeq(1)%3Eapp-support-resources%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ea%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B7%2C4626%2C923%2C510%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-home%3Aeq(0)%3Ediv%3Aeq(1)%3Eapp-support-resources%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ea%3Aeq(0)%22%5D%2C%5B2%2C5030%2C1121%2C153%2C0%2C%22p%23onetrust-policy-text%3Ep%3Aeq(0)%22%2C59620%2C21108%5D%2C%5B6%2C5181%2C1168%2C115%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B2%2C5431%2C1195%2C89%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C40531%2C5603%5D%2C%5B2%2C5832%2C1195%2C103%2C0%2C%22%22%2C40531%2C26455%5D%2C%5B3%2C6117%2C1194%2C105%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C6234%2C1194%2C105%2C0%2C%22%22%2C39041%2C29434%5D%2C%5B4%2C6315%2C1194%2C105%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B5%2C6319%2C1194%2C105%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C6820%2C1194%2C105%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%5D%2C%5B2%2C7415%2C1209%2C105%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-home%3Aeq(0)%3Eapp-notification-icons%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C3194%2C52034%5D%2C%5B2%2C7815%2C1596%2C253%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-home%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C64501%2C17897%5D%2C%5B2%2C8216%2C1538%2C297%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-home%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Eapp-promo-tiles%3Aeq(0)%22%2C62157%2C7841%5D%2C%5B2%2C8616%2C1133%2C471%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-home%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Eapp-promo-tiles%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%22%2C32544%2C62141%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

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
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:831000655&cup2hreq=f50bc084e12db1c9a7ffe6389de5e97c0a1f6d1e846ff58fff7bdbb6d76fdcd3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{c3949b89-9cc8-46b0-a0a0-620af77a24fd}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{4236185b-69bf-4755-b176-579adadddba0}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{06d79246-8fbc-4765-84c3-ea50c5c23869}\",\"rd\":5252},\"updatecheck\":{"
		"},\"version\":\"14.5\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{9d764b1f-5075-4522-b543-3ca03376a3cf}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\""
		"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{be80fc22-fd98-4492-be07-1fae6a21bab3}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.37a9146e17a5ffa3b7f05fce240a2a6cc67c07be3f6309d2d600d0310de696a9\"}]},\"ping\":{\"ping_freshness\":\"{52dac304-a3a3-4373-b5fc-ff255f93bd33}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.29.0"
		"\"},{\"appid\":\"idgpnmonknjnojddfkpgkljpfnnfcklj\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.20\"}]},\"ping\":{\"ping_freshness\":\"{ecc4888b-864b-4eb2-b52e-948e6136c43f}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"3.1.20\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\""
		"ping\":{\"ping_freshness\":\"{35b9125c-69a2-4150-a86e-7ab8aa1b2669}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.3\"}]},\"ping\":{\"ping_freshness\":\"{f57d9ec9-1ef9-4707-9adf-b69efb2b5a14}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.05bc4a6e12744e61576e531c7602778bf2316598236e1bb2b87a664fd2aee8c5\"}]},\"ping\":{\"ping_freshness\":\"{b3013294-e55a-4b0e-9e5d-97e0635e2722}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"9021.222.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.212\",\"protocol\":\"3.1\",\"requestid\":\"{18ca1dff-6304-4da2-9df6-8e75fcc1bc6c}\",\"sessionid\":\"{2c26ddd3-0f69-4ed9-b9f6-06ea7c546545}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.212\"}}", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(6);

	web_custom_request("events_3", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=95&mdh=2004&pn=1&re=1&uu=d5846919-c17f-a178-d364-b932e4718d74&sn=1&lv=1621429556&lhd=1621429556&hd=1621429556&pid=1255&str=907&di=1465&dc=6127&fl=6132&eu=%5B%5B2%2C9382%2C867%2C483%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-home%3Aeq(0)%22%2C35039%2C15929%5D%2C%5B5%2C9462%2C0%2C0%2C%22a%23closeAlert%22%2C%22%22%5D%2C%5B2%2C10256%2C1103%2C383%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-home%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(1)%3Eapp-promo-tiles%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%22%2C26463%2C34679%5D%2C%5B6%2C10274%2C1229%2C356%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-home%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Eapp-promo-tiles%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ea%3Aeq(0)%3Eh2%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C10334%2C1595%2C340%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-home%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(1)%3Eapp-promo-tiles%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ea%3Aeq(0)%3Eh2%3Aeq(0)%22%5D%2C%5B2%2C10656%2C1624%2C361%2C0%2C%22html%3Aeq(0)%22%2C65633%2C11804%5D%2C%5B2%2C11056%2C1624%2C295%2C0%2C%22%22%2C65633%2C9646%5D%2C%5B2%2C11457%2C1624%2C294%2C0%2C%22%22%2C65633%2C9613%5D%2C%5B3%2C11854%2C1624%2C293%2C%22html%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B1%2C13176%2C0%2C1116.1905517578125%2C1075%5D%2C%5B1%2C14047%2C0%2C0%2C555%5D%2C%5B4%2C15034%2C1618%2C-78%2C%22html%3Aeq(0)%22%2C%22%22%5D%2C%5B6%2C15405%2C1520%2C19%2C%22a%23signInHeaderLink%22%2C%22%22%5D%2C%5B2%2C15406%2C1520%2C19%2C0%2C%22a%23signInHeaderLink%22%2C57181%2C14280%5D%2C%5B7%2C15435%2C1420%2C111%2C%22a%23signInHeaderLink%22%5D%2C%5B2%2C15821%2C1189%2C218%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-home%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh1%3Aeq(0)%22%2C58320%2C41284%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	return 0;
}