Print_Scan_Fax()
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
		"Snapshot=t192.inf", 
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

	web_url("how-to-print-scan-fax", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.4.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=5E34123F5245B2CD0A490D45%40AdobeOrg&d_nsid=0&ts=1621430327366", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t195.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_url("dest5.html", 
		"URL=https://hp.demdex.net/dest5.html?d_nsid=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		LAST);

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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("rxVisitor=1621430326779AHTGGLVU9J0NAQGP8MNU1IU4ES7U4MLC; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtLatC=1141; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1621432126793|1621430326786; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$230326759_263h1vPCUWHVGCPBOUCRHWGNRPPMFUVRRWBEFG-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621430327525r0.2582738706908927; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CMCMID%7C13790362871653355333284321254210531716%7CMCAAMLH-1622035127%7C9%7CMCAAMB-1622035127%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621437527s%7CNONE%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("wcc_sitehome_alerts", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms/us-en/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("events", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"19424703111\",\"revision\":\"91\",\"visitors\":[{\"visitor_id\":\"oeu1621430327525r0.2582738706908927\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t\""
		":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1621430327547}],\"snapshots\":[{\"activationTimestamp\":1621430327517,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"8af0cec1-e2c3-4cb2-a8aa-c96aa6d38ba0\",\"t\":1621430327548}]}]}]}", 
		LAST);

	web_url("otCenterRounded.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/otCenterRounded.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_url("otPcTab.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/v2/otPcTab.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_custom_request("auth", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&51091299&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"9a15a774-c17f-afb5-999a-c0921212bae7\",\"sessionNumber\":1,\"pageNumber\":1},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax\"}", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("10044594.json", 
		"URL=https://s.yimg.com/wi/config/10044594.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("eps", 
		"URL=https://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6747167312048892642J&l=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("rxVisitor=1621430326779AHTGGLVU9J0NAQGP8MNU1IU4ES7U4MLC; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtLatC=1141; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621430327525r0.2582738706908927; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CMCMID%7C13790362871653355333284321254210531716%7CMCAAMLH-1622035127%7C9%7CMCAAMB-1622035127%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621437528s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18774%7CvVersion%7C4.4.0; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22printscandoctor%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("rxvt=1621432130179|1621430326786; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtPC=1$230326759_263h-vPCUWHVGCPBOUCRHWGNRPPMFUVRRWBEFG-0e1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+May+19+2021+13%3A18%3A50+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=5dfecc1a-4281-4e77-b3c6-218ffb4a0bc7&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_id=9a15a774-c17f-afb5-999a-c0921212bae7.1621430330.1.1621430330.1621430330.1589380098.1655594330499.None.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_rdt_uuid=1621430331289.cd7fcb48-6656-468e-9fe1-fdebdfbac425; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_5105=1621430331484%7C365159%7C1621430331484%7C%7C; DOMAIN=linkto.ext.hp.com");

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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=srcref=&landurl=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax&&_ir=U364%7C%7C1621430331484", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("ep", 
		"URL=https://px.owneriq.net/ep?sid%5B%5D=14558743317&sid%5B%5D=14558743322&sid%5B%5D=14558743327&sid%5B%5D=8460259172&sid%5B%5D=8460259192&pt=7kxod6&uid=Q6747167312048892642J&jcs=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18767%7CMCMID%7C13790362871653355333284321254210531716%7CMCAAMLH-1622035127%7C9%7CMCAAMB-1622035127%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621437528s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18774%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22printscandoctor%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1621432130179|1621430326786; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$230326759_263h-vPCUWHVGCPBOUCRHWGNRPPMFUVRRWBEFG-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+May+19+2021+13%3A18%3A50+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=5dfecc1a-4281-4e77-b3c6-218ffb4a0bc7&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=9a15a774-c17f-afb5-999a-c0921212bae7.1621430330.1.1621430330.1621430330.1589380098.1655594330499.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv1_prefs=null; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyle_userid=ad52-d993-b50c-7603-ebe6-39af-c10a-99ca; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1621430331038; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleSessionPageCounter=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_rdt_uuid=1621430331289.cd7fcb48-6656-468e-9fe1-fdebdfbac425; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_5105=1621430331484%7C365159%7C1621430331484%7C%7C; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetsid=c0f43570b8a411ebab644b4723b727ec; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetvid=c0f4bf50b8a411ebb77861ff4d3c9069; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("cd_user_id=17984c76a0730-0ab6a5da0fcbd8-2363163-125f51-17984c76a08347; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_PI=c0fec035-b8a4-11eb-9a1c-42010a246c50%7C1621516731484; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=%5B%5BB%5D%5D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C31%2C31%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_47133A35F6EEEB9ED8E3FC1426D2F9B8_perc_100000_ol_0_mul_1&svrid=1&flavor=post&visitID=PCUWHVGCPBOUCRHWGNRPPMFUVRRWBEFG-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax&app=ea7c4b59f27d43eb&crc=282767714&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1621430322544%7C1621430330193%7Cdn%7C2320%2C2%7C2%7C_onload_%7C_load_%7C-%7C1621430330180%7C1621430330193%7Cdn%7C2320$PV=1$rId=RID_464993447$rpId=-773681409$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax$title=How%20to%20Print%2C%20Scan%20or%20Fax%20on%20your%20HP%20Printer$latC=1141$app=ea7c4b59f27d43eb$visitID=PCUWHVGCPBOUCRHWGNRPPMFUVRRWBEFG-0$vs=2$fId=230326759_263$v=10215210506134512$time=1621430333127", 
		LAST);

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
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:3683277274&cup2hreq=5959286ca467fb910f6e31dda9f51b812d2df9ce0959934bdba5de2e8a15423f", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t208.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{a3967936-10be-4ce8-9a66-9f5887845063}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{ff24b7b7-c475-4b50-9f49-846a89c3a0f0}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{5b10c0e7-546c-4d11-9552-d04ff8dc4ff2}\",\"rd\":5252},\"updatecheck\":{"
		"},\"version\":\"14.5\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{06c63d59-e9a6-488f-9c02-09867e3929ec}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\""
		"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{6fe3573b-466d-4a42-8797-16476fec1637}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.37a9146e17a5ffa3b7f05fce240a2a6cc67c07be3f6309d2d600d0310de696a9\"}]},\"ping\":{\"ping_freshness\":\"{b7ad8ae1-7edf-47ee-8030-5ac464a6b179}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.29.0"
		"\"},{\"appid\":\"idgpnmonknjnojddfkpgkljpfnnfcklj\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.20\"}]},\"ping\":{\"ping_freshness\":\"{90e4ec3b-a915-42ae-94cd-67d50dbfccf7}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"3.1.20\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\""
		"ping\":{\"ping_freshness\":\"{942913d6-5a52-406b-9620-4849a210cfc0}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.3\"}]},\"ping\":{\"ping_freshness\":\"{6a928b3b-7480-472b-a704-876faecaa68b}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.05bc4a6e12744e61576e531c7602778bf2316598236e1bb2b87a664fd2aee8c5\"}]},\"ping\":{\"ping_freshness\":\"{b95bf540-70bb-42ce-8aa9-cb3b9a3b2f2d}\",\"rd\":5252},\"updatecheck\":{},\"version\":\"9021.222.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.212\",\"protocol\":\"3.1\",\"requestid\":\"{3f09211c-325f-484b-aa22-a3f76bb7d6ed}\",\"sessionid\":\"{102870e3-fd18-4e51-82ec-96e0349b33db}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.212\"}}", 
		LAST);

	web_add_cookie("dtCookie=v_4_srv_1_sn_47133A35F6EEEB9ED8E3FC1426D2F9B8_perc_100000_ol_0_mul_1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("contact-hp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/contact-hp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_47133A35F6EEEB9ED8E3FC1426D2F9B8_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=PCUWHVGCPBOUCRHWGNRPPMFUVRRWBEFG-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax&app=ea7c4b59f27d43eb&crc=3896522051&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t210.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1621430322544%7C1621430330484%7Cdn%7C2320%2C2%7C3%7C_event_%7C1621430322544%7C_vc_%7CV%7C7940%5Epc%7CVCD%7C9701%7CVCDS%7C7%7CVCS%7C7945%7CVCO%7C10589%7CVCI%7C0%7CVE%7C411%5Ep80%5Ep174400%5Eps%5Es%23onetrust-banner-sdk%7CS%7C5227%2C2%7C4%7C_event_%7C1621430322544%7C_wv_%7ClcpE%7CIMG%7ClcpSel%7C...img.cmp-image__image%20hp-microsite-image%7ClcpS%7C50386%7ClcpT%7C6493%7ClcpU%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fu1223.png%7Cfcp%7C5249%7Cfp%7C5100%7Ccls%7C0.1577%7Clt%7C"
		"1286%2C2%7C2%7C_onload_%7C_load_%7C-%7C1621430330180%7C1621430330193%7Cdn%7C2320%2C1%7C5%7C_event_%7C1621430322544%7C_view_$rId=RID_464993447$rpId=-773681409$domR=1621430330178$tvn=%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax$tvt=1621430322544$w=1626$h=792$sw=1463$sh=823$nt=a0b1621430322544e69f1164g1168h1168i2282j1185k2282l3884m3889o5780p5780q6007r7634s7636t7649u29480v28270w313734M-773681409$ni=4g|5.15$fd=j1.12.4^sb11-50^scontentsquare$url="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax$title=How%20to%20Print%2C%20Scan%20or%20Fax%20on%20your%20HP%20Printer$latC=1141$app=ea7c4b59f27d43eb$visitID=PCUWHVGCPBOUCRHWGNRPPMFUVRRWBEFG-0$vs=2$fId=230326759_263$v=10215210506134512$vID=1621430326779AHTGGLVU9J0NAQGP8MNU1IU4ES7U4MLC$nV=1$nVAT=1$time=1621430340212", 
		LAST);

	web_add_cookie("dtLatC=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_47133A35F6EEEB9ED8E3FC1426D2F9B8_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=PCUWHVGCPBOUCRHWGNRPPMFUVRRWBEFG-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax&app=ea7c4b59f27d43eb&crc=2514674246&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t211.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax$tvt=1621430322544$ni=4g|5.15$3p="
		"1-1621430322544%3Bcdn.optimizely.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C3912_4236%7C323%7C323%7C323%3Bppssupport-itgllbh7.inc.hp.com%7Cu%7C22%7C0%7C0%7C0%7C0%7C22%7C%7C0%7C0%7C0%7C3921_7500_7715_7897%7C2337%7C181%7C3577%7C5%7C0%7C0%7C0%7C0%7C5%7C%7C0%7C0%7C0%7C3919_5681%7C1287%7C826%7C1757%7C3%7C0%7C0%7C0%7C3915_5296%7C914%7C487%7C1374%7C3%7C0%7C0%7C0%7C5211_5784_5936_15161%7C3404%7C415%7C9225%3Bnexus.ensighten.com%7Cm%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C4844_5242%7C398%7C398%7C398%"
		"7C4%7C0%7C0%7C0%7C0%7C4%7C%7C0%7C0%7C0%7C3915_4378_5396_5755%7C367%7C289%7C463%7C1%7C0%7C0%7C0%7C5092_5308%7C216%7C216%7C216%3Bnebula-cdn.kampyle.com%7C4%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C3915_4236_7638_7941_8400_8584%7C269%7C184%7C321%3Bitg-live.www8.hp.com%7Cs%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C3915_4423%7C482%7C470%7C507%7C2%7C0%7C0%7C0%7C3916_4382%7C465%7C464%7C466%7C6%7C0%7C0%7C0%7C5082_5757_5830_6324%7C495%7C410%7C671%3Bdpm.demdex.net%7Cg%7C1%7C0%7C0%7C0%7C4822_5306%7C484%7C484%"
		"7C484%3Bsupport.hp.com%7C8%7C1%7C0%7C0%7C0%7C4944_5227%7C282%7C282%7C282%3Bwww.googletagmanager.com%7C4%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C5054_5376_8240_8336%7C208%7C95%7C321%3Bt.contentsquare.net%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C5093_5691%7C598%7C598%7C598%3Ba2129670914.cdn.optimizely.com%7Cg%7C1%7C0%7C0%7C0%7C5157_5754%7C597%7C597%7C597%3Bhp.demdex.net%7Cg%7C1%7C0%7C0%7C0%7C5380_5822%7C442%7C442%7C442%3Bmet2.hp.com%7Cg%7C1%7C0%7C0%7C0%7C5390_6127%7C737%7C737%7C737%3Bwww.hp.com"
		"%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C5833_6187%7C354%7C354%7C354%3Bcsxd.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C6179_6342%7C163%7C163%7C163%3Blogx.optimizely.com%7Cg%7C1%7C0%7C0%7C0%7C6323_6641%7C318%7C318%7C318%3Bct.contentsquare.net%7C4%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C6502_6619_6643_6684%7C59%7C19%7C116%3Bcm.everesttech.net%7Cg%7C1%7C0%7C0%7C0%7C6524_6617%7C93%7C93%7C93%3Bcdn.cookielaw.org%7Ck%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C6566_6794_7254_7371%7C173%7C117%7C228%7C4%7C"
		"0%7C0%7C0%7C6805_6832_7390_7455_7598_7664%7C47%7C27%7C66%3Bgeolocation.onetrust.com%7Cg%7C1%7C0%7C0%7C0%7C6843_7242%7C399%7C399%7C399%3Bwr-us.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C7972_8335%7C362%7C362%7C362%3Bc.contentsquare.net%7Cg%7C2%7C0%7C0%7C0%7C7973_8584%7C383%7C251%7C515%3Bd.impactradius-event.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8160_8395%7C235%7C235%7C235%3Bbat.bing.com%7Ck%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8162_8492%7C331%7C331%7C331%7C0%7C1%7C0%7C0%7C10760_10760%7C"
		"0%7C0%7C0%3Bwww.redditstatic.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8165_8491%7C326%7C326%7C326%3Bwww.googleadservices.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8166_8586%7C420%7C420%7C420%3Bs.yimg.com%7Ck%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8239_8585%7C345%7C345%7C345%7C1%7C0%7C0%7C0%7C8748_8941%7C193%7C193%7C193%3Bpx.owneriq.net%7Ck%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8241_8586%7C345%7C345%7C345%7C2%7C0%7C0%7C0%7C8752_9088%7C278%7C219%7C337%3Bwww.facebook.com%7Cg%7C1%7"
		"C0%7C0%7C0%7C8243_8940%7C697%7C697%7C697%3Bct.pinterest.com%7Cg%7C1%7C0%7C0%7C0%7C8243_8942%7C699%7C699%7C699%3Bgoogleads.g.doubleclick.net%7Cg%7C2%7C0%7C0%7C0%7C8243_10025%7C1599%7C1417%7C1781%3Bpx.ads.linkedin.com%7Cg%7C1%7C0%7C0%7C0%7C8721_8941%7C220%7C220%7C220%3Balb.reddit.com%7C2%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C8747_9114%7C367%7C367%7C367%3Bidsync.rlcdn.com%7C2%7C0%7C1%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C10682_10682%7C0%7C0%7C0$rt="
		"1-1621430322544%3Bhttps%3A%2F%2Fcdn.optimizely.com%2Fjs%2F19424703111.js%7Cb3912e0f3g8h8i283j32k284l303m323u88266v87185w283339K1I11%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fclientlibs%2Fclientlib-base.d695f694afecb2b9f6a2458a20493077.css%7Cb3915e0f32g32h32i219j49k242l830m880u64805v63990w471960K1I11M350906295%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2FBootstrap.js%7Cb3915e0m463K1I12%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fwu%2F541318%2Fonsite%2Fe"
		"mbed.js%7Cb3915e0m321K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fus%2Fen%2Fscripts%2Fframework%2Fjquery%2Fv-1-8%2Fjquery.js%7Cb3915e0m470K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fus%2Fen%2Fscripts%2Fframework%2Fjquery%2Fv-1-8%2Fcan.jquery.js%7Cb3916e0m470K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fus%2Fen%2Fclientlib-hf-fontface.css%7Cb3916e0m464K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AE"
		"M-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-r-css.css%7Cb3916e0m466K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hf-js.js%7Cb3916e0m507K1I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.0811b5e7037ada110b591bbd86240386.js%7Cb3919e0f51g51h51i215j74k238l912m1009u88944v88082w294733K1I12M1753871876%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2F"
		"clientlibs%2Fclientlib-base.beb50919ff5cf8689c3f11ca869aa906.js%7Cb3919e0f0g0h0i0j0k488l775m826u57373v56405w314600K1I12M537080469%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fcomponents%2Fcontent%2Fossniffnavtabs%2Fclientlib.799c18f5880d4cfe78800c38b33b25fe.css%7Cb3920e0f0g0h0i0j0k278l486m487u1307v356w743K1I11M-220703678%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fcomponents%2Fcontent%2Fossniffnavtabs%2Fclientlib.7958d9992dbab9cc88d59fd5"
		"54048390.js%7Cb3920e0f214g214h214i503j236k503l1396m1450u2000v1223w4523K1I12M797902080%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fu1223.png%7Cb3921e0f0g0h0i0j0k1153l2056m2181u148418v147537w147537E1F62116O293P212Q449R325I7M-1558345848%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fprint-scan-fax%2Fu1261.png%7Cb3921e0f0g0h0i0j0k1159l1383m1399u7481v6792w6792N3O80P77Q425R409I7M-1031601280%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%"
		"2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fprint-scan-fax%2Fu1259.png%7Cb3921e0f0g0h0i0j0k1451l1698m1765u5856v5168w5168N3O80P99Q385R475I7M-152999168%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fprint-scan-fax%2Fu1840.png%7Cb3921e0f0g0h0i0j0k1456l1697m1764u5996v5309w5309N3O80P64Q179R144I7M271172969%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fprint-scan-fax%2Fu1290.png%7Cb3921e0f0g0h0i0j0k1"
		"457l1698m1765u5815v5127w5127N3O80P120Q192R288I7M-950884091%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fprint-scan-fax%2Fu1292.png%7Cb3921e0f0g0h0i0j0k1777l2018m2019u9605v8729w8729N3O80P52Q488R316I7M177344468%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fprint-scan-fax%2Fu1864.png%7Cb3921e0f0g0h0i0j0k1824l2236m2238u7845v7157w7157N3O80P65Q179R145I7M1751085023%7Cppssupport-itgllbh7.inc.hp"
		".com%2F..%2Fu1538.png%7Cb3921e0f0g0h0i0j0k1826l2396m2496u60392v59653w59653N3O337P164I7M-1143161026%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fprint-error.png%7Cb3922e0f0g0h0i0j0k1827l2114m2209u76367v75434w75434N3O288P156Q450R244I7M653186914%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fcomponents%2Fcontent%2Fchatnow%2Fclientlib.b57ba4930334458d91bb8427b734e383.css%7Cb3922e0f0g0h0i0j0k1143l1359m1374u1397v634w2724K1I11M-2048758799%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp."
		"com%2Fetc.clientlibs%2Fhp-wcc%2Fcomponents%2Fcontent%2Fchatnow%2Fclientlib.6c362a2a42f838ea539ac9b8fbe281dd.js%7Cb3922e0f0g0h0i0j0k1145l1380m1394u1465v689w3378K1I12M-955208487%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fu1623.png%7Cb3922e0f0g0h0i0j0k1866l2496m2602u141711v140972w140972N3O449P337I7M944570476%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fms-psf-scan-step3.png%7Cb3922e0f0g0h0i0j0k2214l2814m2818u30844v30095w30095N3O250P163I7M365469331%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fms-psf-scan-step3a.pn"
		"g%7Cb3922e0f0g0h0i0j0k2241l2871m2874u35790v34851w34851N3O200P122I7M915497587%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fu1867.png%7Cb3922e0f0g0h0i0j0k2499l2758m2866u197513v196773w196773N3O449P519I7M-211495595%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fms-psf-scan-step3.png%7Cb3922e0f0g0h0i0j0k2500l2748m2760u30845v30095w30095N3O250P163I7M-797610774%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fms-psf-scan-step3a.png%7Cb3922e0f0g0h0i0j0k2602l2865m2873u35602v34851w34851N3O200P122I7M-430621061%7Cppssupport-itgllb"
		"h7.inc.hp.com%2F..%2Fprint-error.png%7Cb3922e0f0g0h0i0j0k2762l3277m3325u76368v75434w75434N3O450P244I7M1476611825%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fu2169.png%7Cb3922e0f0g0h0i0j0k2820l3452m3577u145978v145049w145049N3O449P384I7M1282234338%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fwindows-10%2Fflag%2Fflag_5Fus.gif%7Cb3924e0f0g0h0i0j0k2873l3379m3395u1471v595w595N3O16P11I7M-1808192299%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fconte"
		"nt%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fwindows-10%2Fhp-logo-modal.gif%7Cb3924e0f0g0h0i0j0k2876l3076m3078u4261v3386w3386N3O70P70I7M424175988%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fcomponents%2Fstructure%2Fsidealert%2Fclientlibs.71130019a3be7fc03f854a1c388daea8.js%7Cb3924e0f0g0h0i0j0k1147l1694m1757u2288v1322w4035K1I12M1232478132%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_5Fvisid_5Fver%3D4.4.0%26d_5Ffieldgroup%3DMC%26d_5Frtbd%3Djson%26d_5Fver%3D2%26d_5Forgid%"
		"3D5E34123F5245B2CD0A490D45_2540AdobeOrg%26d_5Fnsid%3D0%26ts%3D1621430327366%7Cb4822e0m484z1I1%7Chttps%3A%2F%2Fnexus.ensighten.com%2Ferror%2Fe.gif%7Cb4844e0m398I7%7Chttps%3A%2F%2Fsupport.hp.com%2Fwps%2Fwcm%2Fconnect%2Fpps%2Fef3403c7-8af8-494d-8bde-8992eeecc9f4%2FaemWebsphere.css%3FMOD%3DAJPERES%7Cb4944e0m282I11%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtm.js%3Fid%3DGTM-PDHM2PK%7Cb5054e0m321I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclie"
		"ntlibs-fonts%2Fclientlib-hf-fontface-core%2Fresources%2Ffonts%2FHPSimplifiedRegular.woff%7Cb5082e0m671I9%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2FserverComponent.php%7Cb5092e0m216K1I12%7Chttps%3A%2F%2Ft.contentsquare.net%2Fuxa%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%7Cb5093e0m598I12%7Chttps%3A%2F%2Fa2129670914.cdn.optimizely.com%2Fclient_5Fstorage%2Fa2129670914.html%7Cb5157e0m597Bi0I4%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-glob"
		"alnav%2Fclientlibs-fonts%2Fclientlib-hf-fontface-core%2Fresources%2Ffonts%2FHPSimplifiedBold.woff%7Cb5211e0m546I9%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fetc.clientlibs%2Fhp-wcc%2Fclientlibs%2Fclientlib-base%2Fresources%2Ffonts%2Fhp_5Fsupport_5Fcontrols.woff%7Cb5211e0f0g0h0i0j0k96l571m573u10718v9712w19324I9M252547045%7Chttps%3A%2F%2Fhp.demdex.net%2Fdest5.html%3Fd_5Fnsid%3D0%23https_253A_252F_252Fppssupport-itgllbh7.inc.hp.com%7Cb5380e0m442Bi1I4%7Chttps%3A%2F%2Fmet2.hp.com%2Fid%3Fd_5Fvisid"
		"_5Fver%3D4.4.0%26d_5Ffieldgroup%3DA%26mcorgid%3D5E34123F5245B2CD0A490D45_2540AdobeOrg%26mid%3D13790362871653355333284321254210531716%26ts%3D1621430327934%7Cb5390e0m737z1I1%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2F8eb6e0d6c0d367083fff5b64b61a4441.js%3FconditionId0%3D422765%7Cb5396e0m289I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2Fb9b0fc01116e2374d7e92bc6cb675f3e.js%3FconditionId0%3D4880989%7Cb5396e0m359I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fh"
		"p%2Fsupport_5Fstage%2Fcode%2F3ce08cf7c65e410fd9cf20d6115a04e1.js%3FconditionId0%3D285030%7Cb5397e0m359I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fwindows-10%2Ficons.png%7Cb5775e0f0g0h0i0j0k1025l1641m1681u47117v46427w46427N3O17P6Q500R500I9M-1279947248%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fcontent%2Fdam%2Fhp-wcc%2Fmicrosite-assets%2Fimages%2Fwindows-10%2Fsprite-country-flags.png%7Cb5829e0f0g0h0i0j0k1174l1458m1538u113845v113155w"
		"113155N3Q495R560I7M371396098%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fclientlib-hf-fontface-core%2Fresources%2Ffonts%2FHpSimplifiedLight.woff%7Cb5830e0m439I9%7Chttps%3A%2F%2Fwww.hp.com%2Fcma%2Fng%2Flib%2Fexceptions%2Fprivacy-banner-test.js%7Cb5833e0m354K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Ffootericons.woff%7Cb58"
		"47e0m410I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Fnewhplogo.ttf%7Cb5848e0m427I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Ffonts_5Fheader_5Ficons.woff%7Cb5848e0m476I9%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fcontact-hp%7Cb5935e0f0g0h0i0j0k5l8723m9225u42141v40986w214054z1I1M15143102"
		"82%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwcc-services%2Fcms%2Fus-en%2Fwcc_5Fsitehome_5Falerts%7Cb6005e0f0g0h0i0j0k157l413m415u890v286w372z1I1M-534870479%7Chttps%3A%2F%2Fcsxd.contentsquare.net%2Fuxa%2Fxdframe-single-domain-1.1.0.html%3Fpid%3D1255%26cookieNames%3D_5Fcs_5Fid%5Ec_5Fcs_5Fs%5Ec_5Fcs_5Fcvars%5Ec_5Fcs_5Fex%7Cb6179e0m163Bi3I4%7Chttps%3A%2F%2Flogx.optimizely.com%2Fv1%2Fevents%7Cb6323e0f4g22h22i224j94k224l317m318u375z1I1%7Chttps%3A%2F%2Fct.contentsquare.net%2Fptc%2F9d25aca9-e352-4"
		"895-bbbd-ccebc9786c07.js%7Cb6502e0m116I12%7Chttps%3A%2F%2Fcm.everesttech.net%2Fcm%2Fdd%3Fd_5Fuuid%3D17766463870634097692742965453545781760%7Cb6524e0m93I7%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2FotSDKStub.js%7Cb6566e0m228K1I12%7Chttps%3A%2F%2Fct.contentsquare.net%2Fpcc%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%3FDeploymentConfigName%3DRelease_5F20210426%26Version%3D5%7Cb6643e0m19I12%7Chttps%3A%2F%2Fct.contentsquare.net%2Fwww%2Flatest-WR110.js%7Cb6643e0m41I12%7Chttps%3A%2F%2Fcdn.cookie"
		"law.org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df.json%7Cb6805e0m27z1I1%7Chttps%3A%2F%2Fgeolocation.onetrust.com%2Fcookieconsentpub%2Fv1%2Fgeo%2Flocation%7Cb6843e0m399I12%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2FotBannerSdk.js%7Cb7254e0m117I12%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df%2Fe688e508-0267-4c09-a64b-7c03f7e759ce%2Fen-us.json%7Cb7390e0m65z1I2%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fsc"
		"ripttemplates%2F6.17.0%2Fassets%2FotCenterRounded.json%7Cb7598e0m27z1I2%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.17.0%2Fassets%2Fv2%2FotPcTab.json%7Cb7598e0m66z1I2%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fus%2Fwu%2F541318%2Fonsite%2Fgeneric1621354891461.js%7Cb7638e0m303I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fimages%2Ffavicon.ico%7Cb7715e0f0g0h0i0j0k8l176m181u1504v1150w1150I22M-536612769%7Chttps%3A%2F%2Fwr-us.contentsquare.ne"
		"t%2Fctn_5Fv2%2Fauth%2F%3Fpid%3D325%26as%3D1%2651091299%26subsid%3D232897%26msgsize%3D120%7Cb7972e0m362z1I1%7Chttps%3A%2F%2Fc.contentsquare.net%2Fpageview%7Cb7973e0f4g74h74i382j150k382l513m515u474I7%7Chttps%3A%2F%2Fd.impactradius-event.com%2FA353853-8e85-4786-9645-fac6b773cd071.js%7Cb8160e0m235I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb8162e0m331I12%7Chttps%3A%2F%2Fwww.redditstatic.com%2Fads%2Fpixel.js%7Cb8165e0m326I12%7Chttps%3A%2F%2Fwww.googleadservices.com%2Fpagead%2Fconversion_5Fasync.js%7Cb8"
		"166e0f3g53h53i322j62k324l398m420u14959v14016w36885I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb8239e0m345I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtm.js%3Fid%3DGTM-MQML682%7Cb8240e0m95I12%7Chttps%3A%2F%2Fpx.owneriq.net%2Fstas%2Fs%2F7kxod6.js%7Cb8241e0m345I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%3Fid%3D1688171794549438%26ev%3DPageView%26noscript%3D1%26gtmcb%3D407663534%7Cb8243e0m697I7%7Chttps%3A%2F%2Fct.pinterest.com%2Fv3%2F%3Fevent%3Dinit%26tid%3D2613604734453%26noscript%3D1%26gtmcb%3D28"
		"3951383%7Cb8243e0m699I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F849111477%2F%3Fguid%3DON%26script%3D0%26userId%3Dnull%26gtmcb%3D1268260742%7Cb8243c0d695e868f871g939h939i1305j1013k1311l1414m1417u746v42w42I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F783157761%2F%3Fguid%3DON%26script%3D0%26userId%3Dnull%26gtmcb%3D43294643%7Cb8244c0d695e869f1179g1179h1179i1417j1188k1418l1471m1781u746v42w42I7%7Chttps%3A%2F%2Fc.contentsquare.net"
		"%2FpageEvent%3Fvalue%3DMIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA%26isETR%3Dfalse%26v%3D10.8.6%26pid%3D1255%26uu%3D9a15a774-c17f-afb5-999a-c0921212bae7%26sn%3D1%26pn%3D1%26r%3D902717%7Cb8334e0f0g0h0i0j0k172l240m251u474I7%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fresources%2Fonsite%2Fjs%2Fcool-2.1.15.min.js%7Cb8400e0m184I12%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%2F%3Fpid%3D40922%26fmt%3Dgif%7Cb8721e0m220I7%7Chttps%3A%2F%2Falb.reddit.com%2Frp.gif%7Cb8747e0m367I7%7Chttps%3A%2F%2Fs.yimg.co"
		"m%2Fwi%2Fconfig%2F10044594.json%7Cb8748e0m193z1I1%7Chttps%3A%2F%2Fpx.owneriq.net%2Feps%3Fpt%3D7kxod6%26pid%3D8088%26uid%3DQ6747167312048892642J%26l%3Dtrue%7Cb8752e0m337Bi5I4%7Chttps%3A%2F%2Fpx.owneriq.net%2Fj%2F%7Cb8752e0m219I12%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb10760m0A1N3I0%7Chttps%3A%2F%2Fidsync.rlcdn.com%2F455679.gif%3Fpartner_5Fuid%3Dc0fec035-b8a4-11eb-9a1c-42010a246c50%7Cb10682m0A1N3S6960I0$url="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax$title=How%20to%20Print%2C%20Scan%20or%20Fax%20on%20your%20HP%20Printer$latC=2$app=ea7c4b59f27d43eb$visitID=PCUWHVGCPBOUCRHWGNRPPMFUVRRWBEFG-0$vs=2$fId=230326759_263$v=10215210506134512$vID=1621430326779AHTGGLVU9J0NAQGP8MNU1IU4ES7U4MLC$time=1621430342276", 
		LAST);

	web_add_cookie("s_ppn=pps-ces%7Cprintscandoctor; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-05-19T13:19:07.180Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+May+19+2021+13%3A19%3A07+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=5dfecc1a-4281-4e77-b3c6-218ffb4a0bc7&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C31%2C31%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=pps-ces%257Cprintscandoctor%2C31%2C31%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	lr_think_time(6);

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_47133A35F6EEEB9ED8E3FC1426D2F9B8_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=PCUWHVGCPBOUCRHWGNRPPMFUVRRWBEFG-0&modifiedSince=1621390044572&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax&app=ea7c4b59f27d43eb&crc=1999195304&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C6%7C_event_%7C1621430346902%7C_wv_%7CAAI%7C1%7CfIS%7C24354%7CfID%7C4$rId=RID_464993447$rpId=-773681409$domR=1621430330178$tvn=%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax$tvt=1621430322544$ni=4g|5.15$fd=b51-100$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fhelp%2Fhow-to-print-scan-fax$title=How%20to%20Print%2C%20Scan%20or%20Fax%20on%20your%20HP%20Printer$latC=2$app=ea7c4b59f27d43eb$visitID=PCUWHVGCPBOUCRHWGNRPPMFUVRRWBEFG-0$vs=2$fId=230326759_263$v=10215210506134512$vID="
		"1621430326779AHTGGLVU9J0NAQGP8MNU1IU4ES7U4MLC$nV=1$time=1621430348916", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("events_2", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&str=1620&di=3497&dc=5352&fl=5367&sr=31&mdh=4196&pn=1&re=1&uu=9a15a774-c17f-afb5-999a-c0921212bae7&sn=1&lv=1621430330&lhd=1621430330&hd=1621430330&pid=1255&eu=%5B%5B0%2C282%2C1626%2C792%5D%2C%5B2%2C12715%2C670%2C750%2C0%2C%22div%23howToPrint%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eol%3Aeq(0)%3Eli%3Aeq(4)"
		"%22%2C-230%2C19305%5D%2C%5B2%2C13167%2C669%2C741%2C0%2C%22%22%2C-339%2C5644%5D%2C%5B2%2C13553%2C840%2C511%2C0%2C%22div%23howToPrint%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C19434%2C15839%5D%2C%5B2%2C13953%2C844%2C508%2C0%2C%22%22%2C19859%2C15360%5D%2C%5B2%2C14355%2C862%2C483%2C0%2C%22div%23howToPrint%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ep%3Aeq(0)"
		"%22%2C21772%2C44866%5D%2C%5B2%2C15269%2C871%2C456%2C0%2C%22%22%2C22729%2C3882%5D%2C%5B2%2C15670%2C1129%2C120%2C0%2C%22h3%23onetrust-policy-title%22%2C63604%2C35827%5D%2C%5B6%2C15770%2C1167%2C120%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C16074%2C1184%2C111%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C34549%2C38371%5D%2C%5B3%2C16391%2C1184%2C109%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B2%2C16475%2C1184%2C109%2C0%2C%22%22%2C34549%2C35392%5D%2C%5B4%2C16581%2C1184%2C109%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C16604%2C1184%2C109%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C17089%2C1184%2C109%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%5D%2C%5B2%2C20853%2C1179%2C116%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C51977%2C56106%5D%2C%5B6%2C20932%2C1144%2C165%2C%22a%23sec-nav-business-support%22%2C%22%22%5D%2C%5B7%2C20962%2C1142%2C169%2C%22a%23sec-nav-business-support%22%5D%2C%5B2%2C21254%2C1144%2C165%2C0%2C%22a%23sec-nav-business-support%22%2C45956%2C27342%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/how-to-print-scan-fax", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	return 0;
}