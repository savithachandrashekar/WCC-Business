HPCareSupportOptions()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI42m5ANsl1twl8vxEt7z8irNsM_5_nTP8XzVj5I1y9GpF1VxHtNDwwOjwfkVEGGrqMubs8mVLl9IUQO3s363PFVDyyPjK_sM9HpWYoyj2ZKrrZVmhViGb9cXFnc9nNsn9wBFDSj4cG74lzWIO8vtZMrDyGukA; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIgZIB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:tgK2TorHlKUYoDQ2s9tvn3BjwboE7iIBi73imNsajYwgu4Is49rnWrhYNrj5CSY0z0MAZujruKo6lvOdd_bUi3pdMQcVqg:oVTuJX4rac9JGiVp; DOMAIN=accounts.google.com");

	web_add_cookie("NID=215=RW6TWRz5PzQoF4NAP3qiyjQRJ8CoZQxdOBE4s9JuiPM0WJI2k-DYGh4RzZe1J1Wx8rpSZEmL6o_lKVQ7b0uckCCHhwlS0Z7ANxCgU49cjr-gQ5LsqNao_voP1iJgJwIGjytJN-G7XIo73Ax74fMcN4ddtsY_5HQuWQcvoiKQLOloy6bld8OkJc1PR9edFi8rgAg; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2021-05-19-06; DOMAIN=accounts.google.com");

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
		"Snapshot=t214.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

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

	web_url("hpcare-support-options", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t215.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.4.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=5E34123F5245B2CD0A490D45%40AdobeOrg&d_nsid=0&ts=1621430554610", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t216.inf", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t217.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("rxVisitor=1621430553932I0CGBVAMPEA7M3QI9SLV6CIJ7O2P4ENK; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtLatC=1166; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1621432353949|1621430553939; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$230553924_380h1vWULFSCSGAURMLDHHWVFMKTLKRCGGFQHB-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("ApplicationGatewayAffinityCORS=f9912c0c523e2917a0d0af2f71050920; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("ApplicationGatewayAffinity=f9912c0c523e2917a0d0af2f71050920; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621430554821r0.8101532323794884; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("hpcare-support-options_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t218.inf", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t219.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CMCMID%7C37469457880317974561372894459276955620%7CMCAAMLH-1622035355%7C9%7CMCAAMB-1622035355%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621437755s%7CNONE%7CMCAID%7CNONE%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("wcc_sitehome_alerts", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms/au-en/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t220.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("events", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t221.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"19424703111\",\"revision\":\"91\",\"visitors\":[{\"visitor_id\":\"oeu1621430554821r0.8101532323794884\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t\""
		":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1621430554842}],\"snapshots\":[{\"activationTimestamp\":1621430554820,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"6da9b7e9-d9b6-4f8c-9b9b-c2b6bef42608\",\"t\":1621430554843}]}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("xdframe-single-domain-1.1.0.html", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t222.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ApplicationGatewayAffinityCORS=05244d103c26dd85f4d3575ba8d66f85; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("ApplicationGatewayAffinity=05244d103c26dd85f4d3575ba8d66f85; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("contact-hp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/au-en/contact-hp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t223.inf", 
		"Mode=HTML", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t224.inf", 
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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t225.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("auth", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&1085944807&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t226.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"197ea349-c17f-a6fc-a2b1-0819c3776133\",\"sessionNumber\":1,\"pageNumber\":1},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options\"}", 
		LAST);

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CMCMID%7C37469457880317974561372894459276955620%7CMCAAMLH-1622035355%7C9%7CMCAAMB-1622035355%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621437755s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18774%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Microsite-hpcare-support-options%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22au-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1621432357769|1621430553939; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$230553924_380h-vWULFSCSGAURMLDHHWVFMKTLKRCGGFQHB-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv1_prefs=null; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyle_userid=f45a-16de-8dbd-c4e6-47e1-a865-14ed-7d1a; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1621430558168; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleSessionPageCounter=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+May+19+2021+13%3A22%3A38+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=8d283bee-eb34-4e69-83ca-4a147db0f195&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fau-en%2Fhelp%2Fhpcare-support-options&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("cd_user_id=17984cadea1d4e-007b6dcdc83d09-2363163-125f51-17984cadea2bea; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=197ea349-c17f-a6fc-a2b1-0819c3776133.1621430558.1.1621430558.1621430558.1589380098.1655594558769.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=%5B%5BB%5D%5D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C60%2C60%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_revert_auto_header("Origin");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_30BC2BA08911D5AB82A6625461555850_perc_100000_ol_0_mul_1&svrid=1&flavor=post&visitID=WULFSCSGAURMLDHHWVFMKTLKRCGGFQHB-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fau-en%2Fhelp%2Fhpcare-support-options&app=ea7c4b59f27d43eb&crc=2789211999&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t227.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1621430549683%7C1621430557776%7Cdn%7C1757%2C2%7C2%7C_onload_%7C_load_%7C-%7C1621430557771%7C1621430557776%7Cdn%7C1757$PV=1$rId=RID_-710379005$rpId=1999894202$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fau-en%2Fhelp%2Fhpcare-support-options$title=HPCare%20support%20options$latC=1166$app=ea7c4b59f27d43eb$visitID=WULFSCSGAURMLDHHWVFMKTLKRCGGFQHB-0$vs=2$fId=230553924_380$v=10215210506134512$time=1621430560028", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_30BC2BA08911D5AB82A6625461555850_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=WULFSCSGAURMLDHHWVFMKTLKRCGGFQHB-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fau-en%2Fhelp%2Fhpcare-support-options&app=ea7c4b59f27d43eb&crc=3713255111&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t228.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1621430549683%7C1621430558367%7Cdn%7C1757%2C2%7C3%7C_event_%7C1621430549683%7C_vc_%7CV%7C8684%5Epc%7CVCD%7C2456%7CVCDS%7C11%7CVCS%7C8326%7CVCO%7C10352%7CVCI%7C0%7CVE%7C411%5Ep80%5Ep174400%5Eps%5Es%23onetrust-banner-sdk%7CS%7C5334%2C2%7C4%7C_event_%7C1621430549683%7C_wv_%7ClcpE%7CIMG%7ClcpSel%7Cimg.cmp-image__image.hp-microsite-image%7ClcpS%7C110595%7ClcpT%7C5949%7ClcpU%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fhero-anz.png%7Cfcp%7C5356%7Cfp%7C5279%7Ccls%7C0.0058%7Clt%7C"
		"1006%2C2%7C2%7C_onload_%7C_load_%7C-%7C1621430557771%7C1621430557776%7Cdn%7C1757%2C1%7C5%7C_event_%7C1621430549683%7C_view_$rId=RID_-710379005$rpId=1999894202$domR=1621430557767$tvn=%2Fau-en%2Fhelp%2Fhpcare-support-options$tvt=1621430549683$w=1626$h=792$sw=1463$sh=823$nt=a0b1621430549683e72f1214g1219h1219i2333j1237k2333l3929m3933o5719p5720q5894r8084s8088t8093u22536v21326w250421M1999894202$ni=4g|10$fd=j1.12.4^sb6-10^scontentsquare$url="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fau-en%2Fhelp%2Fhpcare-support-options$title=HPCare%20support%20options$latC=1166$app=ea7c4b59f27d43eb$visitID=WULFSCSGAURMLDHHWVFMKTLKRCGGFQHB-0$vs=2$fId=230553924_380$v=10215210506134512$vID=1621430553932I0CGBVAMPEA7M3QI9SLV6CIJ7O2P4ENK$nV=1$nVAT=1$time=1621430560492", 
		LAST);

	web_add_cookie("dtLatC=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_30BC2BA08911D5AB82A6625461555850_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=WULFSCSGAURMLDHHWVFMKTLKRCGGFQHB-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fau-en%2Fhelp%2Fhpcare-support-options&app=ea7c4b59f27d43eb&crc=2222598860&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t229.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fau-en%2Fhelp%2Fhpcare-support-options$tvt=1621430549683$ni=4g|10$3p="
		"1-1621430549683%3Bcdn.optimizely.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C3961_5033%7C1073%7C1073%7C1073%3Bppssupport-itgllbh7.inc.hp.com%7Cu%7C11%7C0%7C0%7C0%7C0%7C11%7C%7C0%7C0%7C0%7C3970_6977_8175_8206%7C1774%7C31%7C2583%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C3969_5701%7C1291%7C919%7C1729%7C3%7C0%7C0%7C0%7C3965_5268%7C1090%7C907%7C1299%7C4%7C0%7C0%7C0%7C5312_7872%7C799%7C244%7C2006%3Bnexus.ensighten.com%7Cm%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C4954_6204%7C1250%7C1250%7C1250%7C4%7C"
		"0%7C0%7C0%7C0%7C4%7C%7C0%7C0%7C0%7C3965_4873_6287_6963%7C707%7C593%7C908%7C1%7C0%7C0%7C0%7C4986_6284%7C1298%7C1298%7C1298%3Bnebula-cdn.kampyle.com%7C4%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C3965_4860_8091_8211_8395_8420%7C347%7C25%7C895%3Bitg-live.www8.hp.com%7Cs%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C3965_4873%7C906%7C903%7C907%7C2%7C0%7C0%7C0%7C3966_4868%7C899%7C896%7C902%7C5%7C0%7C0%7C0%7C5244_7128%7C1522%7C1321%7C1828%3Bsupport.hp.com%7C8%7C2%7C0%7C0%7C0%7C3971_5546%7C880%7C185%7C1575%3Bdp"
		"m.demdex.net%7Cg%7C1%7C0%7C0%7C0%7C4928_5350%7C422%7C422%7C422%3Bwww.googletagmanager.com%7C4%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C5218_6730_8779_9069%7C901%7C290%7C1512%3Bt.contentsquare.net%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C5288_6814%7C1526%7C1526%7C1526%3Ba2129670914.cdn.optimizely.com%7Cg%7C1%7C0%7C0%7C0%7C5290_5568%7C278%7C278%7C278%3Bhp.demdex.net%7Cg%7C1%7C0%7C0%7C0%7C5371_5903%7C532%7C532%7C532%3Bmet2.hp.com%7Cg%7C1%7C0%7C0%7C0%7C5377_5700%7C323%7C323%7C323%3Bwww.hp.com%7C4%"
		"7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C5765_6998%7C1234%7C1234%7C1234%3Blogx.optimizely.com%7Cg%7C1%7C0%7C0%7C0%7C6165_6606%7C441%7C441%7C441%3Bcsxd.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C7022_7250%7C228%7C228%7C228%3Bcdn.cookielaw.org%7Ck%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C7083_7265_7901_8016%7C148%7C115%7C181%7C4%7C0%7C0%7C0%7C7271_7295_8040_8111_8294_8350%7C44%7C23%7C70%3Bcm.everesttech.net%7Cg%7C1%7C0%7C0%7C0%7C7141_7214%7C73%7C73%7C73%3Bct.contentsquare.net%7C4%7C3%7C0%7C0%7C0%7C0%7C"
		"3%7C%7C0%7C0%7C0%7C7296_7956_8019_8048%7C234%7C14%7C659%3Bgeolocation.onetrust.com%7Cg%7C1%7C0%7C0%7C0%7C7304_7878%7C574%7C574%7C574%3Budc-neb.kampyle.com%7C2%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C8707_9069%7C361%7C361%7C361%3Bwww.googleadservices.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8770_9261%7C491%7C491%7C491%3Bgoogleads.g.doubleclick.net%7Cg%7C3%7C0%7C0%7C0%7C8779_10171%7C942%7C45%7C1391%3Bwr-us.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C9101_9528%7C428%7C428%7C428%3Bc.contentsquare"
		".net%7Cg%7C2%7C0%7C0%7C0%7C9101_9479%7C341%7C331%7C350%3Bwww.google.com%7Cg%7C1%7C0%7C0%7C0%7C9393_10171%7C778%7C778%7C778$rt="
		"1-1621430549683%3Bhttps%3A%2F%2Fcdn.optimizely.com%2Fjs%2F19424703111.js%7Cb3961e0f2g7h7i276j48k277l988m1073u88265v87185w283339K1I11%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fclientlibs%2Fclientlib-base.d695f694afecb2b9f6a2458a20493077.css%7Cb3965e0f50g50h50i190j81k200l771m907u64806v63990w471960K1I11M-928913927%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2FBootstrap.js%7Cb3965e0m908K1I12%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fwu%2F541318%2Fonsite%2"
		"Fembed.js%7Cb3965e0m895K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fau%2Fen%2Fscripts%2Fframework%2Fjquery%2Fv-1-8%2Fjquery.js%7Cb3965e0m907K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fau%2Fen%2Fscripts%2Fframework%2Fjquery%2Fv-1-8%2Fcan.jquery.js%7Cb3966e0m903K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fau%2Fen%2Fclientlib-hf-fontface.css%7Cb3966e0m896K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-"
		"AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-r-css.css%7Cb3966e0m902K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hf-js.js%7Cb3966e0m907K1I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.0811b5e7037ada110b591bbd86240386.js%7Cb3969e0f0g0h0i0j0k224l893m919u88943v88082w294733K1I12M219289240%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fclient"
		"libs%2Fclientlib-base.beb50919ff5cf8689c3f11ca869aa906.js%7Cb3969e0f241g241h241i897j255k901l1182m1225u57375v56405w314600K1I12M-1689023066%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fcomponents%2Fcontent%2FtwoColBackgroundColor%2Fclientlib.e6d0efc8c2f3213d142cccc20a7dd928.css%7Cb3969e0f223g223h223i359j240k359l1060m1063u1371v420w1028K1I11M1143967501%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fhero-anz.png%7Cb3970e0f0g0h0i0j0k1329l1590m1763u360184v359441w359441E1F136518O372"
		"P366Q600R590I7M-396316674%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fcomponents%2Fcontent%2Fsmsivrbutton%2Fclientlib.541c56899c7494483fe04a82a0796004.css%7Cb3970e0f0g0h0i0j0k1081l1298m1299u1184v422w871K1I11M-920982377%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fsms-ivr%2Ficon-wa.png%7Cb3970e0f0g0h0i0j0k1331l1918m1924u36750v35872w35872E1F3600O50P50Q496R497I7M1696451068%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.h"
		"p.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fsms-ivr%2Ficon-laptop.svg%7Cb3970e0f0g0h0i0j0k1334l1734m1736u1322v337w500E1F2880O50P38Q196R150I7M427191906%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fsms-ivr%2Fpdt_5FPrinter_5F60.svg%7Cb3970e0f0g0h0i0j0k1732l2156m2168u1682v692w1970E1F3600O50P50Q60R60I7M-2128556664%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fsms-ivr%2Ficon-"
		"compass.png%7Cb3971e0f0g0h0i0j0k1735l2155m2167u13910v13031w13031E1F3600O50P50Q472R468I7M-2034358671%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fsms-ivr%2Ficon-faq.png%7Cb3971e0f0g0h0i0j0k1701l2178m2179u2045v1168w1168E1F3600O50P50Q56R56I7M-1396424783%7Chttps%3A%2F%2Fsupport.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fcustomlib%2Fms-smsivr-custom.css%7Cb3971e0m1575K1I11%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2"
		"Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fwindows-10%2Fhp-logo-modal.gif%7Cb3972e0f0g0h0i0j0k2169l2582m2583u4073v3386w3386N3O70P70I7M1755750953%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fwindows-10%2Fflag%2Fflag_5Fau.gif%7Cb3972e0f0g0h0i0j0k2171l2391m2392u1472v597w597N3O16P11I7M1003345957%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fcomponents%2Fstructure%2Fsidealert%2Fclientlibs.71130019a3be7fc03f854a1c388daea8.j"
		"s%7Cb3972e0f0g0h0i0j0k1297l1727m1729u2288v1322w4035K1I12M-182192407%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_5Fvisid_5Fver%3D4.4.0%26d_5Ffieldgroup%3DMC%26d_5Frtbd%3Djson%26d_5Fver%3D2%26d_5Forgid%3D5E34123F5245B2CD0A490D45_2540AdobeOrg%26d_5Fnsid%3D0%26ts%3D1621430554610%7Cb4928e0m422z1I1%7Chttps%3A%2F%2Fnexus.ensighten.com%2Ferror%2Fe.gif%7Cb4954e0m1250I7%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2FserverComponent.php%7Cb4986e0m1298K1I12%7Chttps%3A%2F%2Fsupport.hp.com%2Fwps%2Fwcm"
		"%2Fconnect%2Fpps%2Fef3403c7-8af8-494d-8bde-8992eeecc9f4%2FaemWebsphere.css%3FMOD%3DAJPERES%7Cb5111e0m185I11%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtm.js%3Fid%3DGTM-PDHM2PK%7Cb5218e0m1512I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fclientlib-hf-fontface-core%2Fresources%2Ffonts%2FHPSimplifiedRegular.woff%7Cb5244e0m1828I9%7Chttps%3A%2F%2Ft.contentsquare.net%2Fuxa%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%7Cb5288e0m152"
		"6I12%7Chttps%3A%2F%2Fa2129670914.cdn.optimizely.com%2Fclient_5Fstorage%2Fa2129670914.html%7Cb5290e0m278Bi0I4%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fau-en%2Fhelp%2Fhpcare-support-options%7Cb5312e0f38g38h38i218j53k218l511m588u65536v65536w65536I9M1965245663%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fclientlib-hf-fontface-core%2Fresources%2Ffonts%2FHpSimplifiedLight.woff%7Cb5313e0m1790I9%7Chttps%3A%2F%2Fppssupport-it"
		"gllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fclientlibs%2Fclientlib-base%2Fresources%2Ffonts%2Fhp_5Fsupport_5Fcontrols.woff%7Cb5313e0f36g36h36i72j36k72l357m358u10529v9712w19324I9M748733224%7Chttps%3A%2F%2Fhp.demdex.net%2Fdest5.html%3Fd_5Fnsid%3D0%23https_253A_252F_252Fppssupport-itgllbh7.inc.hp.com%7Cb5371e0m532Bi1I4%7Chttps%3A%2F%2Fmet2.hp.com%2Fid%3Fd_5Fvisid_5Fver%3D4.4.0%26d_5Ffieldgroup%3DA%26mcorgid%3D5E34123F5245B2CD0A490D45_2540AdobeOrg%26mid%3D37469457880317974561372894459276955620%26ts%"
		"3D1621430555060%7Cb5377e0m323z1I1%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fwindows-10%2Ficons.png%7Cb5576e0f0g0h0i0j0k1044l1304m1337u47117v46427w46427N3O17P6Q500R500I9M-1689714583%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fwindows-10%2Fsprite-country-flags.png%7Cb5762e0f0g0h0i0j0k861l1128m1215u113845v113155w113155N3Q495R560I7M757477973%7Chttps%3A%2F%2Fwww.hp.com%2Fcma%2Fng%2Flib%"
		"2Fexceptions%2Fprivacy-banner-test.js%7Cb5765e0m1234K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Ffootericons.woff%7Cb5780e0m1322I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Fnewhplogo.ttf%7Cb5781e0m1321I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globa"
		"lnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Ffonts_5Fheader_5Ficons.woff%7Cb5781e0m1347I9%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fau-en%2Fcontact-hp%7Cb5867e0f0g0h0i0j0k2l1963m2006u42161v41007w214091z1I1M662524407%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fcms%2Fau-en%2Fwcc_5Fsitehome_5Falerts%7Cb5892e0f0g0h0i0j0k9l221m244u1016v412w766z1I1M1175783022%7Chttps%3A%2F%2Flogx.optimizely.com%2Fv1%2Fevents%7Cb6165e0f41g58h58i321j116k321l439m441u375z1I1%7Chttps%3A%2F%2Fn"
		"exus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2F8eb6e0d6c0d367083fff5b64b61a4441.js%3FconditionId0%3D422765%7Cb6287e0m593I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2Fb9b0fc01116e2374d7e92bc6cb675f3e.js%3FconditionId0%3D4880989%7Cb6288e0m648I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2F3ce08cf7c65e410fd9cf20d6115a04e1.js%3FconditionId0%3D285030%7Cb6288e0m675I12%7Chttps%3A%2F%2Fcsxd.contentsquare.net%2Fuxa%2Fxdframe-single-domain-1.1.0.html%3Fp"
		"id%3D1255%26cookieNames%3D_5Fcs_5Fid%5Ec_5Fcs_5Fs%5Ec_5Fcs_5Fcvars%5Ec_5Fcs_5Fex%7Cb7022e0m228Bi3I4%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2FotSDKStub.js%7Cb7083e0m181K1I12%7Chttps%3A%2F%2Fcm.everesttech.net%2Fcm%2Fdd%3Fd_5Fuuid%3D40699644566139216201768006412941018208%7Cb7141e0m73I7%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df.json%7Cb7271e0m23z1I1%7Chttps%3A%2F%2Fct.contentsquare.net%2Fptc%2F9d25aca9-e352-4"
		"895-bbbd-ccebc9786c07.js%7Cb7296e0m659I12%7Chttps%3A%2F%2Fgeolocation.onetrust.com%2Fcookieconsentpub%2Fv1%2Fgeo%2Flocation%7Cb7304e0m574I12%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2FotBannerSdk.js%7Cb7901e0m115I12%7Chttps%3A%2F%2Fct.contentsquare.net%2Fpcc%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%3FDeploymentConfigName%3DRelease_5F20210426%26Version%3D5%7Cb8019e0m14I12%7Chttps%3A%2F%2Fct.contentsquare.net%2Fwww%2Flatest-WR110.js%7Cb8020e0m28I12%7Chttps%3A%2F%2Fcdn.cookielaw."
		"org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df%2Fe688e508-0267-4c09-a64b-7c03f7e759ce%2Fen-us.json%7Cb8040e0m70z1I2%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fus%2Fwu%2F541318%2Fonsite%2Fgeneric1621354891461.js%7Cb8091e0m121I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fimages%2Ffavicon.ico%7Cb8175e0f0g0h0i0j0k3l26m31u1504v1150w1150I22M1913684802%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2Fassets%2FotCenterRounded.json%7Cb8"
		"294e0m26z1I2%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2Fassets%2Fv2%2FotPcTab.json%7Cb8294e0m55z1I2%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fresources%2Fonsite%2Fjs%2Fcool-2.1.15.min.js%7Cb8395e0m25I12%7Chttps%3A%2F%2Fudc-neb.kampyle.com%2Fegw%2F5%2Fqceuv8449dzg58ptt1bhda9g8ue19c7s%2Ftrack%2F_5F_5Fcool.gif%7Cb8707e0m361I7%7Chttps%3A%2F%2Fudc-neb.kampyle.com%2Fegw%2F5%2Fqceuv8449dzg58ptt1bhda9g8ue19c7s%2Ftrack%2F_5F_5Fcool.gif%7Cb8708e0m361I7%7Chttps%3A%2F%2Fwww.googleadservices"
		".com%2Fpagead%2Fconversion_5Fasync.js%7Cb8770e0f3g8h8i292j19k295l333m491u14998v14016w36885I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtm.js%3Fid%3DGTM-MQML682%7Cb8779e0m290I12%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F849111477%2F%3Fguid%3DON%26script%3D0%26userId%3Dnull%26gtmcb%3D1475527637%7Cb8779c0d482e537f538g565h565i801j574k801l1389m1391u746v42w42I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F783157761%2F%3Fguid%3DON%"
		"26script%3D0%26userId%3Dnull%26gtmcb%3D156948154%7Cb8780c0d481e535f536g550h550i800j565k800l1383m1390u746v42w42I7%7Chttps%3A%2F%2Fwr-us.contentsquare.net%2Fctn_5Fv2%2Fauth%2F%3Fpid%3D325%26as%3D1%261085944807%26subsid%3D232897%26msgsize%3D120%7Cb9101e0m428z1I1%7Chttps%3A%2F%2Fc.contentsquare.net%2Fpageview%7Cb9101e0f3g31h31i281j95k281l330m331u474I7%7Chttps%3A%2F%2Fc.contentsquare.net%2FpageEvent%3Fvalue%3DMIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA%26isETR%3Dfalse%26v%3D10.8.6%26pid%3D1255%26u"
		"u%3D197ea349-c17f-a6fc-a2b1-0819c3776133%26sn%3D1%26pn%3D1%26r%3D222164%7Cb9129e0f0g0h0i0j0k305l349m350u474I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F687393200%2F%7Cb9347e0f0g0h0i0j0k10l39m45u2093v1027w1658K1I12%7Chttps%3A%2F%2Fwww.google.com%2Fpagead%2F1p-user-list%2F687393200%2F%7Cb9393e0f2g2h2i191j10k191l775m778u746v42w42I7$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fau-en%2Fhelp%2Fhpcare-support-options$title=HPCare%20support%20options$latC=2$app="
		"ea7c4b59f27d43eb$visitID=WULFSCSGAURMLDHHWVFMKTLKRCGGFQHB-0$vs=2$fId=230553924_380$v=10215210506134512$vID=1621430553932I0CGBVAMPEA7M3QI9SLV6CIJ7O2P4ENK$time=1621430562586", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,idgpnmonknjnojddfkpgkljpfnnfcklj,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-90.0.4430.212");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");

	lr_think_time(5);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:807119427&cup2hreq=ec5ebf040349d91aa4adfa3d7e1f79471de07aa1e78f19a61c2014e0c9ddbb17", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t230.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{3ef41e7c-b902-4b14-a493-c5df5c456cd7}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{ca0f5d40-9f20-4ddb-a34a-dd9447ff36ab}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{e90fbd8d-bbc2-40d6-8973-759db22168b6}\",\"rd\":5252},\"updatecheck\":{"
		"},\"version\":\"14.5\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{9e6bf3ec-c1bd-4283-ab8f-4de6e882d3fd}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\""
		"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{ad8bd440-c4fd-455f-aec1-0d601926db96}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.37a9146e17a5ffa3b7f05fce240a2a6cc67c07be3f6309d2d600d0310de696a9\"}]},\"ping\":{\"ping_freshness\":\"{3f5a0866-090b-4a67-8750-d0f9514b5b98}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.29.0"
		"\"},{\"appid\":\"idgpnmonknjnojddfkpgkljpfnnfcklj\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.20\"}]},\"ping\":{\"ping_freshness\":\"{126599d7-ea45-4f32-973f-69a5aed4ab4f}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"3.1.20\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\""
		"ping\":{\"ping_freshness\":\"{af6a5154-837b-4c15-a7b8-ee98bbb7de17}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.3\"}]},\"ping\":{\"ping_freshness\":\"{c25ba3ba-ea08-4343-888f-d78e15db8bfd}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.05bc4a6e12744e61576e531c7602778bf2316598236e1bb2b87a664fd2aee8c5\"}]},\"ping\":{\"ping_freshness\":\"{5073710d-43f4-4753-a95d-d1a94d043a35}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"9021.222.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.212\",\"protocol\":\"3.1\",\"requestid\":\"{0611b169-4eb9-4296-8461-7ebd71c3e807}\",\"sessionid\":\"{9e0e7eb9-7636-4d8d-9940-1be6156a04f2}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.212\"}}", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,cmahhnpholdijhjokonmfdjbfmklppij,obedbbhbpmojnkanicioggnmelmoomoc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,llkgjffcdpffmhiakmfcdcblohccpfmo,giekcmmlnklenlaomppkphknjmnnpneh,hfnkpimlhhgieaddgfemjhofmfblmnib,aemomkdncapdnfajjbbcbdebjljbpmpj,khaoiebndkojlmppeemjhbpbandiljpe,lmelglejhemejginpboagddgdfbepgmp,gkmgaooipdjhmangpemjhigmamcehddo,ehgidpndbllacpjalkiimkbadgjfnnmc,ggkkehgbnfjpeggfpleeakpidbkibbmn,"
		"jflookgnkcckhobaglndicnbbgbonegd,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,pdafiollngonhoadbmdoemagnfpdphbe,eeigpngbgcognadeebkilcpcaedhellh");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-90.0.4430.212");

	lr_think_time(43);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:2203922223&cup2hreq=b663511ad6bfac9c920333f3a19b1f55424404aad6f03123cf8e9b4b71360b10", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t231.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{1ce04f14-289d-4dda-a167-f9846d9e7c55}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GCEU\",\"cohort\":\"1:wr3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7\"}]},\"ping\":{\"ping_freshness\":\"{08fe84c9-d6ea-4c03-a85b-eddde038e0ce}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.0.6\"},{\"accept_locale\":\"ENUS\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GCEU\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.51ad0ba60f8d94fdf96628bd0bc20b28199ccabce5f4c84546885445676b2d7a\"}]},\"ping\":{\"ping_freshness\":\"{3eec0613-d8c0-4e97-b93d-1bae273218e8}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"20210506.372668613\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEU\",\"cohort\":\"1:bm1:zx9@0.1,zvx@0.01\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.4dcc255c0d82123c9c4251bb453165672ea0458f0379f3a7a534dc2a666d7c6d\"}]},\""
		"ping\":{\"ping_freshness\":\"{05e2ba70-f7f8-4ea3-be3c-9fb2d55b5728}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"9.22.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{6f6b68d4-e4a4-4848-af80-80c0e03633b2}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"4.10.2209.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{1b63d262-dcfd-4351-aa99-43c971acadeb}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.d730fdd6875bfda19ae43c639e89fe6c24e48b53ec4f466b1d7de2001f97e03c\"}]},\"ping\":{\"ping_freshness\":\"{c4365474-3861-46ee-8ca0-1e9389d51826}\",\"rd\":5252}"
		",\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{a2082a7c-7bfc-494d-abee-61fc1c2d7547}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\""
		"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b90f72a2b33a132e7071289bd327620855bf165cd954681ff7f7c9b0940bda89\"}]},\"ping\":{\"ping_freshness\":\"{3c84eba5-5b61-4b49-ba4c-9ce1beb242cf}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"6615\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{82846257-dc68-4271-abb3-70f6158e6e61}\",\"rd\""
		":5252},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4\"}]},\"ping\":{\"ping_freshness\":\"{08600591-1eba-40fa-8faf-4be188325220}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"43\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\""
		"GCEU\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.237dcc7327ac96be04088bb4e69d5aa8e30b886c323f586eb3573b64bc4d8d45\"}]},\"ping\":{\"ping_freshness\":\"{17c1fcc2-206c-417b-9e9b-b086d13914c8}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"280\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.48b7cd9a9a4134d608effe24870c91e3bfc6a097c1472878a0c6d8b61f87d0fe\"}]},\"ping\":{\"ping_freshness\":\"{9edc63a6-476c-44e2-b248-a1b134208725}\",\"rd\":5252},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"90.262.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{61bbe9de-0546-4407-a98e-6f9f0b38ff45}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:zx3@0.01\",\"cohorthint\":\"M80ToM99\",\"cohortname\":\"M80ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.308bfa586b3108c72b6ad89a0869f3074fa43eef5924710ad092293b0506bbfc\"}]},\"ping\":{\""
		"ping_freshness\":\"{dcd0812f-df04-46cf-a09e-56c53699e2a1}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"2021.5.9.1142\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.afbb1849414c1810f36961d3e125b9d6f737bdcdad0a6954d0c37fd17da36cf7\"}]},\"ping\":{\"ping_freshness\":\"{fc6052a6-4d78-486b-a330-8871e9f9003d}\",\"rd\":5252},\"updatecheck\":{},\"version\""
		":\"2633\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GCEU\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.7df2a29ba02289fa80241e59194feaacfb56f1003f28143168f95880ce3389d3\"}]},\"ping\":{\"ping_freshness\":\"{f1979b23-9e0a-45bf-8834-4bca14550d83}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"92.0.4512.1\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GCEU\",\"cohort\":\"1:w0x:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{85fcbace-cc2d-4c9b-acfc-67455162eca6}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"GCEU\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.baeb7c645c7704139756b02bf2741430d94ea3835fb1de77fef1057d8c844655\"}]},\"ping\":{\"ping_freshness\":\"{b5895131-40cd-4638-80f9-e5291190e86d}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"2021.2.22.1142\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GCEU\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\""
		"{ff4fc563-cbd6-4b29-a43e-404ac57b8323}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.212\",\"protocol\":\"3.1\",\"requestid\":\"{979c782f-acee-41ad-8b42-6d8e18e2cc49}\",\"sessionid\":\"{89e1c624-b0f0-46b8-a5c4-d56d28da01f4}\",\"updater\":"
		"{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.212\"}}", 
		LAST);

	web_revert_auto_header("X-Goog-Update-Interactivity");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(29);

	web_custom_request("events_2", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&str=1616&di=3386&dc=5751&fl=5760&sr=60&mdh=1321&pn=1&re=1&uu=197ea349-c17f-a6fc-a2b1-0819c3776133&sn=1&lv=1621430558&lhd=1621430558&hd=1621430558&pid=1255&eu=%5B%5B0%2C14%2C1626%2C792%5D%2C%5B2%2C74524%2C728%2C687%2C0%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%22%2C205%2C53450%5D%2C%5B6%2C74738%2C773%2C346%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq"
		"(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ea%3Aeq(0)%3Eimg%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C74756%2C789%2C306%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ea%3Aeq(0)%3Eimg%3Aeq(0)"
		"%22%5D%2C%5B6%2C74790%2C826%2C248%2C%22button%23onetrust-accept-btn-handler%22%2C%22%22%5D%2C%5B2%2C74919%2C842%2C228%2C0%2C%22button%23onetrust-accept-btn-handler%22%2C15145%2C4714%5D%2C%5B2%2C75328%2C840%2C227%2C0%2C%22%22%2C14174%2C3148%5D%2C%5B7%2C75353%2C840%2C219%2C%22button%23onetrust-accept-btn-handler%22%5D%2C%5B2%2C75730%2C1241%2C73%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C55151%2C20881%5D%2C%5B6%2C75851%2C1203%2C110%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C76132%2C1180%2C113%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C28592%2C41349%5D%2C%5B3%2C76478%2C1180%2C110%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C76534%2C1180%2C110%2C0%2C%22%22%2C28592%2C36881%5D%2C%5B4%2C76663%2C1180%2C110%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B5%2C76688%2C1180%2C110%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C77138%2C1177%2C110%2C0%2C%22%22%2C24123%2C36881%5D%2C%5B7%2C77168%2C1163%2C115%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%5D%2C%5B6%2C77511%2C1104%2C152%2C%22a%23sec-nav-business-support%22%2C%22%22%5D%2C%5B2%2C77538%2C1104%2C152%2C0%2C%22a%23sec-nav-business-support%22%2C28540%2C-2220%5D%2C%5B7%2C77616%2C1120%2C167%2C%22a%23sec-nav-business-support%22%5D%2C%5B2%2C77942%2C1055%2C207%2C0%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C43007%2C1945%5D%2C%5B2%2C78343%2C1067%2C210%2C0%2C%22%22%2C43497%2C2237%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t232.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("events_3", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&str=1616&di=3386&dc=5751&fl=5760&sr=60&mdh=1321&pn=1&re=1&uu=197ea349-c17f-a6fc-a2b1-0819c3776133&sn=1&lv=1621430558&lhd=1621430558&hd=1621430558&pid=1255&eu=%5B%5B2%2C80830%2C1078%2C224%2C0%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C50737%2C751%5D%2C%5B2%2C81369%2C1080%2C224%2C0%2C%22%22%2C50868%2C751%5D%2C%5B2%2C81771%2C1097%2C217%2C0%2C%22%22%2C51982%2C5%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/au-en/help/hpcare-support-options", 
		"Snapshot=t233.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	return 0;
}