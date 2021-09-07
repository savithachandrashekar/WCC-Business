Windows10()
{

	lr_start_transaction("Support_Center");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(22);

	web_custom_request("events_3", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&sr=54&mdh=713&pn=1&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154152&pid=1255&str=898&di=1579&dc=15619&fl=15628&eu=%5B%5B2%2C71394%2C946%2C0%2C0%2C%22%22%2C42492%2C0%5D%2C%5B2%2C83612%2C778%2C2%2C0%2C%22%22%2C34946%2C2427%5D%2C%5B2%2C84011%2C561%2C1%2C0%2C%22%22%2C25199%2C1214%5D%2C%5B2%2C84412%2C557%2C1%2C0%2C%22%22%2C25019%2C1214%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t93.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22SiteHome_New%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=043914a9-66f2-a204-aae8-602dabefbba4.1614154152.1.1614154152.1614154152.1589380098.1648318152979.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18683%7CMCMID%7C81985764575280497874326169134775780778%7CMCAAMLH-1614758954%7C9%7CMCAAMB-1614758954%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1614161355s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18690%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyle_userid=0fa2-8287-ac37-c131-7211-0f8b-dc57-4f68; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1614154163300; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleSessionPageCounter=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("cd_user_id=177d315e4cc6ff-0d95dd1e07baf3-73e356b-125f51-177d315e4cdba8; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("aam_uuid=88100365568027719674002886033651371566; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=pps-ces%7Csitehome_new; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-02-24T08:09:28.335Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+Feb+24+2021+08%3A09%3A28+GMT%2B0000+(Greenwich+Mean+Time)&version=6.7.0&hosts=&consentId=ae60e8e9-c073-467c-8c65-49cd695fda50&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C37%2C37%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=pps-ces%257Csitehome_new%2C37%2C37%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_prefs=1111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("windows-10-support-center", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_custom_request("upload", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTPS\",\"request_age_ms\":79522,\"request_elapsed_ms\":218,\"sample_rate\":0.05,\"server_ip\":\"142.250.185.136:443\",\"status\":\"ok\",\"url\":\"https://www.googletagmanager.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("a2129670914.html", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("xdframe-single-domain-1.1.0.html_2", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("optimizelyEndUserId=oeu1614154248702r0.741615021054205; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/hp-pps-services/videos/playlist/NaN/cc/us/lc/en", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("products_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("events_4", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.162.0\",\"enrich_decisions\":true,\"project_id\":\"19424703111\",\"revision\":\"89\",\"visitors\":[{\"visitor_id\":\"oeu1614154248702r0.741615021054205\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t\""
		":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1614154248781}],\"snapshots\":[{\"activationTimestamp\":1614154248701,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"f8f1fa57-62d4-4db6-883a-f70955797317\",\"t\":1614154248781}]}]}]}", 
		LAST);

	web_custom_request("auth_2", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&2099675671&skiprnd=1&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"043914a9-66f2-a204-aae8-602dabefbba4\",\"sessionNumber\":1,\"pageNumber\":2}}", 
		LAST);

	web_url("otCenterRounded.json_2", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.14.0/assets/otCenterRounded.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_url("otPcTab.json_2", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.14.0/assets/v2/otPcTab.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(7);

	web_custom_request("events_5", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&sr=49&mdh=1470&pn=2&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154251&pid=1255&str=447&di=6772&dc=10187&fl=10193&eu=%5B%5B0%2C15%2C1463%2C713%5D%2C%5B2%2C6421%2C737%2C145%2C0%2C%22div%23layoutContainers%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Esection%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(3)"
		"%22%2C39102%2C-1635%5D%2C%5B2%2C6824%2C764%2C121%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C34845%2C60210%5D%2C%5B2%2C7209%2C908%2C0%2C0%2C%22div%23welcomeHeader%22%2C41124%2C0%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t104.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("Support_Center",LR_AUTO);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	lr_think_time(5);

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"event\":[{\"download_time_ms\":60371,\"downloaded\":24190,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"6446\",\"previousversion\":\"6445\",\"total\":24190,\"url\":\"http://redirector.gvt1.com/edgedl/release2/chrome_component/aSOa_5l5v3Zp8TbROaVBjw_6446/AKGwdYy7YiSwADe4PnFdyy8\"},{\"eventresult\":1,\"eventtype\":3,\""
		"nextfp\":\"1.d5071596fb13aafb40e986c7e8833ae999380bcc158342b6ca835cf6effc59e8\",\"nextversion\":\"6446\",\"previousfp\":\"1.b47f9da24ca3f9c112792c7563e11aea1a2eb9dc819558ed207a1e4f1c6c4e41\",\"previousversion\":\"6445\"}],\"version\":\"6446\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.14393.4169\"},\"prodversion\":\"88.0.4324.182\",\"protocol\":\"3.1\",\""
		"requestid\":\"{19593037-9177-461b-aca1-3c601c7c194a}\",\"sessionid\":\"{db328187-4b21-48b8-9150-6c63050d9d7f}\",\"updaterversion\":\"88.0.4324.182\"}}", 
		LAST);

	lr_start_transaction("windows-10-support-center-computing");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(17);

	web_custom_request("events_6", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&sr=49&mdh=1470&pn=2&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154251&pid=1255&str=447&di=6772&dc=10187&fl=10193&eu=%5B%5B2%2C31440%2C769%2C22%2C0%2C%22div%23welcomeHeader%3Ediv%3Aeq(0)"
		"%22%2C34887%2C26810%5D%2C%5B2%2C31827%2C927%2C23%2C0%2C%22%22%2C42246%2C29789%5D%2C%5B2%2C32686%2C932%2C4%2C0%2C%22div%23welcomeHeader%22%2C42211%2C5243%5D%2C%5B2%2C33390%2C814%2C0%2C0%2C%22%22%2C36866%2C0%5D%2C%5B2%2C33792%2C626%2C0%2C0%2C%22%22%2C28352%2C0%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t106.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_think_time(5);

	web_custom_request("events_7", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&sr=49&mdh=1470&pn=2&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154251&pid=1255&str=447&di=6772&dc=10187&fl=10193&eu=%5B%5B2%2C38541%2C556%2C125%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C24195%2C63487%5D%2C%5B6%2C38602%2C510%2C407%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ea%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C38627%2C504%2C533%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ea%3Aeq(0)%22%5D%2C%5B2%2C38940%2C453%2C633%2C0%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq"
		"(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C21734%2C2050%5D%2C%5B2%2C39341%2C348%2C711%2C0%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ep%3Aeq(0)%22%2C10050%2C46281%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t107.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("_gcl_au=1.1.293799341.1614154250; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_rdt_uuid=1614154251490.d6fe9ae3-b806-46b8-8a9e-172d74d5b4f9; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetsid=cf3ffaa0767711ebb517998d2b2b3af4; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetvid=cf406a10767711ebb57f7d9638a58500; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Microsite-win10_learning_landing%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=043914a9-66f2-a204-aae8-602dabefbba4.1614154152.1.1614154251.1614154152.1589380098.1648318152979.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=2.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=2&ckp=tld&dm=hp.com&apv_325_www11=2&cpv_325_www11=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-02-24T08:10:52.191Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+Feb+24+2021+08%3A10%3A52+GMT%2B0000+(Greenwich+Mean+Time)&version=6.14.0&hosts=&consentId=ae60e8e9-c073-467c-8c65-49cd695fda50&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1614154252542; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv1_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=pps-ces%257Csitehome_new%2C37%2C37%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C49%2C49%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("windows-10-support-center-computing", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-computing", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("0", 
		"URL=https://bat.bing.com/actionp/0?ti=13015798&Ver=2&mid=aa5bd7f6-cb7a-45fd-aa11-6c419e9a8cdc&sid=cf3ffaa0767711ebb517998d2b2b3af4&vid=cf406a10767711ebb57f7d9638a58500&vids=1&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("events_8", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&sr=49&mdh=1470&pn=2&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154251&pid=1255&str=447&di=6772&dc=10187&fl=10193&eu=%5B%5B2%2C42551%2C862%2C139%2C0%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%22%2C39040%2C13966%5D%2C%5B2%2C42951%2C861%2C140%2C0%2C%22%22%2C38995%2C15041%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center", 
		"Snapshot=t110.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html_2", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-computing", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("en_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/hp-pps-services/videos/playlist/NaN/cc/us/lc/en", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-computing", 
		"Snapshot=t112.inf", 
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

	web_url("xdframe-single-domain-1.1.0.html_3", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-computing", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("events_9", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-computing", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.162.0\",\"enrich_decisions\":true,\"project_id\":\"19424703111\",\"revision\":\"89\",\"visitors\":[{\"visitor_id\":\"oeu1614154248702r0.741615021054205\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t\""
		":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1614154296517}],\"snapshots\":[{\"activationTimestamp\":1614154296488,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"d46cc907-7519-40f8-9406-fe379fc782f6\",\"t\":1614154296517}]}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("products_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-computing", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("auth_3", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&1763731639&skiprnd=1&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-computing", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"043914a9-66f2-a204-aae8-602dabefbba4\",\"sessionNumber\":1,\"pageNumber\":3}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("events_10", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&sr=19&mdh=3830&pn=3&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154299&pid=1255&str=6268&di=7426&dc=10081&fl=10090&eu=%5B%5B0%2C11%2C1463%2C713%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-computing", 
		"Snapshot=t117.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("windows-10-support-center-computing",LR_AUTO);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_custom_request("upload_2", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":66734,\"request_elapsed_ms\":1451,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gcp.gvt2.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":4583,\"request_elapsed_ms\":1269,\"sample_rate\":1.0,\"server_ip\":\"\",\""
		"status\":\"aborted\",\"url\":\"https://beacons.gcp.gvt2.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	lr_start_transaction("windows-10-support-center-printing");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(11);

	web_custom_request("events_11", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&sr=19&mdh=3830&pn=3&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154299&pid=1255&str=6268&di=7426&dc=10081&fl=10090&eu=%5B%5B2%2C16049%2C920%2C0%2C0%2C%22div%23welcomeHeader%22%2C41667%2C0%5D%2C%5B2%2C16456%2C823%2C0%2C0%2C%22%22%2C37274%2C0%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-computing", 
		"Snapshot=t119.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+Feb+24+2021+08%3A11%3A38+GMT%2B0000+(Greenwich+Mean+Time)&version=6.14.0&hosts=&consentId=ae60e8e9-c073-467c-8c65-49cd695fda50&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-02-24T08:11:38.642Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22windows-10-support-center-computing%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=043914a9-66f2-a204-aae8-602dabefbba4.1614154152.1.1614154299.1614154152.1589380098.1648318152979.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=3.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=3&ckp=tld&dm=hp.com&apv_325_www11=3&cpv_325_www11=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1614154300054; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv2_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=2; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-computing; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C49%2C49%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C19%2C19%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(4);

	web_url("windows-10-support-center-printing", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_custom_request("upload_3", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":79875,\"request_elapsed_ms\":574,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gvt2.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTP\",\"request_age_ms\":78916,\"request_elapsed_ms\":1774,\"sample_rate\":1.0,"
		"\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons2.gvt2.com/domainreliability/upload\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":19472,\"request_elapsed_ms\":2305,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gvt2.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\""
		"network_changed\":false,\"protocol\":\"HTTP\",\"request_age_ms\":16281,\"request_elapsed_ms\":23,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons2.gvt2.com/domainreliability/upload\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":4978,\"request_elapsed_ms\":1409,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gvt2.com/\",\""
		"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("0_2", 
		"URL=https://bat.bing.com/actionp/0?ti=13015798&Ver=2&mid=bb283ff5-d085-4f75-b696-627545fe1101&sid=cf3ffaa0767711ebb517998d2b2b3af4&vid=cf406a10767711ebb57f7d9638a58500&vids=0&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-computing", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html_3", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/hp-pps-services/videos/playlist/5700627822001/cc/us/lc/en", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t124.inf", 
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

	web_url("xdframe-single-domain-1.1.0.html_4", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("products_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("events_12", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.162.0\",\"enrich_decisions\":true,\"project_id\":\"19424703111\",\"revision\":\"89\",\"visitors\":[{\"visitor_id\":\"oeu1614154248702r0.741615021054205\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t\""
		":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1614154322673}],\"snapshots\":[{\"activationTimestamp\":1614154322637,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"6f72a572-4370-475f-bd23-d65d581b7430\",\"t\":1614154322674}]}]}]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("auth_4", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&1709171263&skiprnd=1&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"043914a9-66f2-a204-aae8-602dabefbba4\",\"sessionNumber\":1,\"pageNumber\":4}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("events_13", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=325&di=796&dc=2111&fl=2116&sr=23&mdh=2870&pn=4&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154325&pid=1255&eu=%5B%5B0%2C15%2C1463%2C713%5D%2C%5B2%2C1914%2C770%2C32%2C0%2C%22div%23welcomeHeader%3Ediv%3Aeq(0)%22%2C34933%2C56598%5D%2C%5B2%2C2327%2C860%2C5%2C0%2C%22div%23welcomeHeader%22%2C38950%2C6553%5D%2C%5B2%2C2713%2C874%2C1%2C0%2C%22%22%2C39584%2C1311%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t129.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("windows-10-support-center-printing",LR_AUTO);

	lr_think_time(6);

	web_custom_request("events_14", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=325&di=796&dc=2111&fl=2116&sr=23&mdh=2870&pn=4&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154325&pid=1255&eu=%5B%5B2%2C6115%2C861%2C1%2C0%2C%22%22%2C38995%2C1311%5D%2C%5B2%2C9063%2C840%2C19%2C0%2C%22div%23welcomeHeader%3Ediv%3Aeq(0)"
		"%22%2C38194%2C17873%5D%2C%5B6%2C9363%2C685%2C161%2C%22a%23sec-nav-diag%22%2C%22%22%5D%2C%5B7%2C9421%2C649%2C195%2C%22a%23sec-nav-diag%22%5D%2C%5B2%2C9454%2C617%2C232%2C0%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ep%3Aeq(0)%22%2C52787%2C12781%5D%2C%5B6%2C9513%2C533%2C349%2C%22div%23micrositeWrapper%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)"
		"%3Eli%3Aeq(0)%3Ea%3Aeq(0)%3Ediv%3Aeq(0)%3Espan%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C9545%2C436%2C540%2C%22div%23micrositeWrapper%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(0)%3Ea%3Aeq(0)%3Ediv%3Aeq(0)%3Espan%3Aeq(0)%22%5D%2C%5B2%2C9856%2C398%2C657%2C0%2C%22div%23issuesContent%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(4)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh3%3Aeq(0)"
		"%22%2C17398%2C17910%5D%2C%5B2%2C10256%2C358%2C699%2C0%2C%22div%23issuesContent%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(4)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C12584%2C6572%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t130.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_think_time(5);

	web_custom_request("events_15", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=325&di=796&dc=2111&fl=2116&sr=23&mdh=2870&pn=4&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154325&pid=1255&eu=%5B%5B2%2C14444%2C345%2C668%2C0%2C%22div%23issuesContent%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(4)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eh3%3Aeq(0)"
		"%22%2C11020%2C33582%5D%2C%5B2%2C14845%2C841%2C11%2C0%2C%22div%23welcomeHeader%22%2C38089%2C14418%5D%2C%5B2%2C15246%2C845%2C5%2C0%2C%22%22%2C38270%2C6553%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t131.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	return 0;
}
