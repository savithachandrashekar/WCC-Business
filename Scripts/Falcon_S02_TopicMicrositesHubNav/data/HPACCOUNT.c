HPACCOUNT()
{

	lr_start_transaction("HpAccount");

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

	lr_think_time(29);

	web_custom_request("events_28", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=490&di=1234&dc=2417&fl=2423&sr=31&mdh=2275&pn=7&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154450&pid=1255&eu=%5B%5B6%2C3924%2C913%2C153%2C%22a%23sec-nav-contact-support%22%2C%22%22%5D%2C%5B7%2C3964%2C938%2C131%2C%22a%23sec-nav-contact-support%22%5D%2C%5B2%2C4327%2C1012%2C73%2C0%2C%22ul%23psf%3Eli%3Aeq(1)%3Ediv%3Aeq(0)"
		"%22%2C1006%2C1394%5D%2C%5B2%2C4727%2C946%2C5%2C0%2C%22div%23welcomeHeader%22%2C42845%2C6553%5D%2C%5B2%2C17828%2C823%2C59%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C37865%2C9421%5D%2C%5B2%2C23567%2C709%2C104%2C0%2C%22%22%2C32029%2C46284%5D%2C%5B2%2C23958%2C862%2C4%2C0%2C%22div%23welcomeHeader%22%2C39040%2C5243%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-scanning-problems", 
		"Snapshot=t171.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+Feb+24+2021+08%3A14%3A10+GMT%2B0000+(Greenwich+Mean+Time)&version=6.14.0&hosts=&consentId=ae60e8e9-c073-467c-8c65-49cd695fda50&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-02-24T08:14:10.156Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1614154450371; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=7; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=6; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22printscandoctor-scanning-problems%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=043914a9-66f2-a204-aae8-602dabefbba4.1614154152.1.1614154450.1614154152.1589380098.1648318152979.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=7.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=7&ckp=tld&dm=hp.com&apv_325_www11=7&cpv_325_www11=7; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=6; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=6; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-scanning-problems; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C28%2C28%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C31%2C31%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

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

	lr_think_time(4);

	web_url("hp-account", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/hp-account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("0_6", 
		"URL=https://bat.bing.com/actionp/0?ti=13015798&Ver=2&mid=2b0cf6d9-92cb-4d06-9de6-bb63146d1f84&sid=cf3ffaa0767711ebb517998d2b2b3af4&vid=cf406a10767711ebb57f7d9638a58500&vids=0&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-scanning-problems", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html_7", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/hp-account", 
		"Snapshot=t174.inf", 
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

	web_url("en_7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/hp-pps-services/videos/playlist/NaN/cc/us/lc/en", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/hp-account", 
		"Snapshot=t175.inf", 
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

	web_url("xdframe-single-domain-1.1.0.html_8", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/hp-account", 
		"Snapshot=t176.inf", 
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

	web_url("products_8", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/hp-account", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("events_29", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/hp-account", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.162.0\",\"enrich_decisions\":true,\"project_id\":\"19424703111\",\"revision\":\"89\",\"visitors\":[{\"visitor_id\":\"oeu1614154248702r0.741615021054205\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t\""
		":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1614154487418}],\"snapshots\":[{\"activationTimestamp\":1614154487388,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"7b8d5614-412b-4dcb-a668-dcfd6fc90e41\",\"t\":1614154487418}]}]}]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("auth_8", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&960369355&skiprnd=1&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/hp-account", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"043914a9-66f2-a204-aae8-602dabefbba4\",\"sessionNumber\":1,\"pageNumber\":8}}", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("events_30", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=1307&di=1827&dc=3029&fl=3037&sr=19&mdh=3672&pn=8&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154489&pid=1255&eu=%5B%5B0%2C21%2C1463%2C713%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/hp-account", 
		"Snapshot=t180.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("HpAccount",LR_AUTO);

	return 0;
}