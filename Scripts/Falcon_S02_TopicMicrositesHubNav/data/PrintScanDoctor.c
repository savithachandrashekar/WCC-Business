PrintScanDoctor()
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
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(11);

	web_custom_request("events_16", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=325&di=796&dc=2111&fl=2116&sr=23&mdh=2870&pn=4&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154325&pid=1255&eu="
		"%5B%5B2%2C25462%2C829%2C3%2C0%2C%22%22%2C37546%2C3932%5D%2C%5B6%2C25612%2C681%2C247%2C%22a%23sec-nav-diag-computer%22%2C%22%22%5D%2C%5B7%2C25656%2C657%2C292%2C%22a%23sec-nav-diag-computer%22%5D%2C%5B6%2C25657%2C657%2C292%2C%22a%23sec-nav-diag-win10%22%2C%22%22%5D%2C%5B2%2C25864%2C657%2C292%2C0%2C%22a%23sec-nav-diag-win10%22%2C1552%2C0%5D%2C%5B7%2C26262%2C641%2C312%2C%22a%23sec-nav-diag-win10%22%5D%2C%5B2%2C26266%2C641%2C312%2C0%2C%22div%23micrositeWrapper%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(1)%22%2C15904%2C3641%5D%2C%5B6%2C26289%2C624%2C333%2C%22div%23micrositeWrapper%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(1)%3Ea%3Aeq(0)%3Ediv%3Aeq(0)%3Eimg%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C26306%2C567%2C408%2C%22div%23micrositeWrapper%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(1)%3Ea%3Aeq(0)%3Ediv%3Aeq(0)%3Eimg%3Aeq(0)%22%5D%2C%5B6%2C26340%2C508%2C491%2C%22div%23issuesContent%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ep%3Aeq(0)%3Espan%3Aeq(0)%3Ea%3Aeq(3)%3Espan%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C26367%2C463%2C558%2C%22div%23issuesContent%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ep%3Aeq(0)%3Espan%3Aeq(0)%3Ea%3Aeq(3)%3Espan%3Aeq(0)%22%5D%2C%5B2%2C26665%2C365%2C689%2C0%2C%22div%23issuesContent%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(4)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C13427%2C5368%5D%2C%5B2%2C27067%2C353%2C704%2C0%2C%22div%23issuesContent%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(4)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ep%3Aeq(0)%22%2C11982%2C1725%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t132.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("json_4", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"event\":[{\"download_time_ms\":84052,\"downloaded\":818380,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"90.0.4427.2\",\"previousversion\":\"90.0.4427.0\",\"total\":818380,\"url\":\"http://edgedl.gvt1.com/edgedl/release2/chrome_component/AKv2R8vhiOfWDwH_NMpFDaw_90.0.4427.2/AOEtWi0Hv_JJAOwejLMXGMs\"},{\"eventresult\":1,\""
		"eventtype\":3,\"nextfp\":\"1.cb00a5a6bd7848baf7d6d0d8fff9c40bc432bff193a6935d1a2e39777dd70809\",\"nextversion\":\"90.0.4427.2\",\"previousfp\":\"1.456192e77563c9ad1905c74d48773d0fc02d3c597110047bd31865fd003627ca\",\"previousversion\":\"90.0.4427.0\"}],\"version\":\"90.0.4427.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.14393.4169\"},\"prodversion\":\""
		"88.0.4324.182\",\"protocol\":\"3.1\",\"requestid\":\"{b19712cf-3b6a-4e3a-867d-8f530d876037}\",\"sessionid\":\"{db328187-4b21-48b8-9150-6c63050d9d7f}\",\"updaterversion\":\"88.0.4324.182\"}}", 
		LAST);

	lr_start_transaction("PrintScanDoctor");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(20);

	web_custom_request("events_17", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=325&di=796&dc=2111&fl=2116&sr=23&mdh=2870&pn=4&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154325&pid=1255&eu=%5B%5B2%2C30913%2C125%2C429%2C0%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C5630%2C4134%5D%2C%5B2%2C31314%2C125%2C403%2C0%2C%22%22%2C5630%2C3253%5D%2C%5B2%2C34343%2C514%2C121%2C0%2C%22div%23header%3Ediv%3Aeq(1)"
		"%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C22045%2C60210%5D%2C%5B2%2C34744%2C832%2C10%2C0%2C%22div%23welcomeHeader%22%2C37681%2C13107%5D%2C%5B2%2C47693%2C645%2C0%2C0%2C%22%22%2C29212%2C0%5D%2C%5B2%2C48095%2C632%2C0%2C0%2C%22%22%2C28623%2C0%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t134.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_think_time(5);

	web_custom_request("events_18", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=325&di=796&dc=2111&fl=2116&sr=23&mdh=2870&pn=4&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154325&pid=1255&eu=%5B%5B2%2C52807%2C551%2C35%2C0%2C%22%22%2C24955%2C45874%5D%2C%5B6%2C52829%2C497%2C176%2C%22a%23sec-nav-software-and-drivers%22%2C%22%22%5D%2C%5B7%2C52862%2C453%2C333%2C%22a%23sec-nav-software-and-drivers%22%5D%2C%5B6%2C52864%2C453%2C333%2C%22div%23micrositeWrapper%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(0)%3Ea%3Aeq(0)%3Ediv%3Aeq(0)%3Espan%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C52893%2C438%2C395%2C%22div%23micrositeWrapper%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(0)%3Ea%3Aeq(0)%3Ediv%3Aeq(0)%3Espan%3Aeq(0)%22%5D%2C%5B6%2C52893%2C438%2C395%2C%22div%23micrositeWrapper%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(0)%3Ea%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B7%2C52921%2C428%2C479%2C%22div%23micrositeWrapper%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(0)%3Ea%3Aeq(0)%3Ediv%3Aeq(0)%22%5D%2C%5B6%2C52922%2C428%2C479%2C%22div%23issuesContent%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ep%3Aeq(0)%3Espan%3Aeq(0)%3Ea%3Aeq(3)%3Espan%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C53168%2C402%2C517%2C%22div%23issuesContent%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ep%3Aeq(0)%3Espan%3Aeq(0)"
		"%3Ea%3Aeq(3)%3Espan%3Aeq(0)%22%5D%2C%5B2%2C53208%2C365%2C571%2C0%2C%22div%23issuesContent%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Eh2%3Aeq(0)%3Espan%3Aeq(0)%22%2C8551%2C55204%5D%2C%5B2%2C53609%2C292%2C709%2C0%2C%22div%23issuesContent%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(4)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ep%3Aeq(0)%22%2C4642%2C9270%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t135.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+Feb+24+2021+08%3A12%3A04+GMT%2B0000+(Greenwich+Mean+Time)&version=6.14.0&hosts=&consentId=ae60e8e9-c073-467c-8c65-49cd695fda50&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-02-24T08:12:04.191Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1614154324394; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=4; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv3_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22windows-10-support-center-printing%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=043914a9-66f2-a204-aae8-602dabefbba4.1614154152.1.1614154325.1614154152.1589380098.1648318152979.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=4.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=4&ckp=tld&dm=hp.com&apv_325_www11=4&cpv_325_www11=4; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C19%2C19%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C23%2C23%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("printscandoctor", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_custom_request("upload_4", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTPS\",\"request_age_ms\":87703,\"request_elapsed_ms\":883,\"sample_rate\":0.05,\"server_ip\":\"142.250.185.174:443\",\"status\":\"ok\",\"url\":\"https://img.youtube.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("0_3", 
		"URL=https://bat.bing.com/actionp/0?ti=13015798&Ver=2&mid=8df1a25a-6557-43bd-b2c7-1965d8dffcf6&sid=cf3ffaa0767711ebb517998d2b2b3af4&vid=cf406a10767711ebb57f7d9638a58500&vids=0&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("events_19", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=325&di=796&dc=2111&fl=2116&sr=23&mdh=2870&pn=4&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154325&pid=1255&eu=%5B%5B2%2C56163%2C125%2C458%2C0%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C5630%2C5116%5D%2C%5B2%2C56564%2C124%2C411%2C0%2C%22%22%2C5585%2C3524%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/windows-10-support-center-printing", 
		"Snapshot=t139.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html_4", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor", 
		"Snapshot=t140.inf", 
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

	web_url("en_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/hp-pps-services/videos/playlist/NaN/cc/us/lc/en", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor", 
		"Snapshot=t141.inf", 
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

	web_url("xdframe-single-domain-1.1.0.html_5", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor", 
		"Snapshot=t142.inf", 
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

	web_url("products_5", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("events_20", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.162.0\",\"enrich_decisions\":true,\"project_id\":\"19424703111\",\"revision\":\"89\",\"visitors\":[{\"visitor_id\":\"oeu1614154248702r0.741615021054205\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t\""
		":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1614154384849}],\"snapshots\":[{\"activationTimestamp\":1614154384814,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"cc00e1ca-f1e0-4334-a6fa-80a2963576c4\",\"t\":1614154384849}]}]}]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("auth_5", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&30460574&skiprnd=1&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"043914a9-66f2-a204-aae8-602dabefbba4\",\"sessionNumber\":1,\"pageNumber\":5}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(8);

	web_custom_request("events_21", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=6456&di=7132&dc=8256&fl=8262&sr=34&mdh=2090&pn=5&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154387&pid=1255&eu=%5B%5B0%2C12%2C1463%2C713%5D%2C%5B2%2C5186%2C888%2C0%2C0%2C%22div%23welcomeHeader%22%2C40218%2C0%5D%2C%5B2%2C9377%2C880%2C41%2C0%2C%22%22%2C39855%2C53739%5D%2C%5B2%2C9768%2C838%2C118%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C38633%2C57753%5D%2C%5B2%2C10721%2C734%2C148%2C0%2C%22div%23layoutContainers%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Esection%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(3)%22%2C37737%2C3271%5D%2C%5B2%2C11121%2C830%2C80%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C38224%2C26624%5D%2C%5B2%2C11523%2C902%2C2%2C0%2C%22div%23welcomeHeader%22%2C40852%2C2621%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor", 
		"Snapshot=t146.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("PrintScanDoctor",LR_AUTO);

	lr_start_transaction("PrintingProblems");

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	lr_think_time(15);

	web_custom_request("events_22", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=6456&di=7132&dc=8256&fl=8262&sr=34&mdh=2090&pn=5&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154387&pid=1255&eu=%5B%5B2%2C26882%2C746%2C2%2C0%2C%22%22%2C33787%2C2621%5D%2C%5B2%2C27283%2C713%2C1%2C0%2C%22%22%2C32292%2C1311%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor", 
		"Snapshot=t147.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+Feb+24+2021+08%3A13%3A06+GMT%2B0000+(Greenwich+Mean+Time)&version=6.14.0&hosts=&consentId=ae60e8e9-c073-467c-8c65-49cd695fda50&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-02-24T08:13:06.317Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1614154386650; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=5; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=4; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22printscandoctor%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=043914a9-66f2-a204-aae8-602dabefbba4.1614154152.1.1614154387.1614154152.1589380098.1648318152979.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=5.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=5&ckp=tld&dm=hp.com&apv_325_www11=5&cpv_325_www11=5; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=4; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=4; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C23%2C23%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C34%2C34%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

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

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(4);

	web_url("printscandoctor-printing-problems", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-printing-problems", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("0_4", 
		"URL=https://bat.bing.com/actionp/0?ti=13015798&Ver=2&mid=4c213fe4-5c6b-4d1c-ba16-b05f13765b09&sid=cf3ffaa0767711ebb517998d2b2b3af4&vid=cf406a10767711ebb57f7d9638a58500&vids=0&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html_5", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-printing-problems", 
		"Snapshot=t150.inf", 
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

	web_url("en_5", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/hp-pps-services/videos/playlist/NaN/cc/us/lc/en", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-printing-problems", 
		"Snapshot=t151.inf", 
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

	web_url("xdframe-single-domain-1.1.0.html_6", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-printing-problems", 
		"Snapshot=t152.inf", 
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

	web_url("products_6", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-printing-problems", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("events_23", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-printing-problems", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.162.0\",\"enrich_decisions\":true,\"project_id\":\"19424703111\",\"revision\":\"89\",\"visitors\":[{\"visitor_id\":\"oeu1614154248702r0.741615021054205\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t\""
		":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1614154420235}],\"snapshots\":[{\"activationTimestamp\":1614154420205,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"54a15b1e-cd0b-4621-88c7-ab22773608fb\",\"t\":1614154420236}]}]}]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("auth_6", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&621250691&skiprnd=1&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-printing-problems", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"043914a9-66f2-a204-aae8-602dabefbba4\",\"sessionNumber\":1,\"pageNumber\":6}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("events_24", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=1301&di=1906&dc=3175&fl=3184&sr=28&mdh=2520&pn=6&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154422&pid=1255&eu=%5B%5B0%2C47%2C1463%2C713%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-printing-problems", 
		"Snapshot=t156.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("PrintingProblems",LR_AUTO);

	lr_think_time(20);

	lr_start_transaction("ScaningProblems");

	web_custom_request("events_25", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=1301&di=1906&dc=3175&fl=3184&sr=28&mdh=2520&pn=6&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154422&pid=1255&eu=%5B%5B6%2C4334%2C314%2C607%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(0)%3Ea%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C4348%2C298%2C661%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2"
		")%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(0)%3Ea%3Aeq(0)%22%5D%2C%5B2%2C4591%2C296%2C666%2C0%2C%22div%23content%3Ediv%3Aeq(3)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(2)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C3830%2C3239%5D%2C%5B2%2C4991%2C285%2C703%2C0%2C%22div%23fixPrintingTab_box%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ep%3Aeq(0)"
		"%22%2C4474%2C3018%5D%2C%5B2%2C12592%2C665%2C119%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C29776%2C58572%5D%2C%5B2%2C12993%2C829%2C30%2C0%2C%22div%23welcomeHeader%3Ediv%3Aeq(0)%22%2C37681%2C50641%5D%2C%5B2%2C21662%2C716%2C4%2C0%2C%22div%23welcomeHeader%22%2C32428%2C5243%5D%2C%5B2%2C22063%2C557%2C1%2C0%2C%22%22%2C25227%2C1311%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-printing-problems", 
		"Snapshot=t157.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://beacons2.gvt2.com");

	web_custom_request("upload-nel", 
		"URL=https://beacons4.gvt2.com/domainreliability/upload-nel", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("upload-nel_2", 
		"URL=https://beacons4.gvt2.com/domainreliability/upload-nel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":60001,\"body\":{\"elapsed_time\":24,\"method\":\"POST\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":0.25,\"server_ip\":\"172.217.12.35\",\"status_code\":200,\"type\":\"ok\"},\"type\":\"network-error\",\"url\":\"https://beacons2.gvt2.com/domainreliability/upload\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.182 Safari/537.36\"}]", 
		LAST);

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Wed+Feb+24+2021+08%3A13%3A41+GMT%2B0000+(Greenwich+Mean+Time)&version=6.14.0&hosts=&consentId=ae60e8e9-c073-467c-8c65-49cd695fda50&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-02-24T08:13:41.676Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=5; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1614154422555; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=6; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22printscandoctor-printing-problems%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=043914a9-66f2-a204-aae8-602dabefbba4.1614154152.1.1614154422.1614154152.1589380098.1648318152979.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=6.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=6&ckp=tld&dm=hp.com&apv_325_www11=6&cpv_325_www11=6; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=5; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=5; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-printing-problems; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C34%2C34%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C28%2C28%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

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

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_url("printscandoctor-scanning-problems", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-scanning-problems", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("upload_5", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":142232,\"request_elapsed_ms\":404,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gcp.gvt2.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":74756,\"request_elapsed_ms\":417,\"sample_rate\":1.0,\"server_ip\":\"\",\""
		"status\":\"aborted\",\"url\":\"https://beacons.gcp.gvt2.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":2972,\"request_elapsed_ms\":535,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gcp.gvt2.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":2971,\""
		"request_elapsed_ms\":2198,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gcp.gvt2.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("0_5", 
		"URL=https://bat.bing.com/actionp/0?ti=13015798&Ver=2&mid=1e528ec3-1569-4303-a7ce-2ffae2fafe8b&sid=cf3ffaa0767711ebb517998d2b2b3af4&vid=cf406a10767711ebb57f7d9638a58500&vids=0&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-printing-problems", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Site");

	web_custom_request("upload_6", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTP\",\"request_age_ms\":126492,\"request_elapsed_ms\":25,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons2.gvt2.com/domainreliability/upload\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":69715,\"request_elapsed_ms\""
		":1415,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gvt2.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTP\",\"request_age_ms\":64516,\"request_elapsed_ms\":24,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons2.gvt2.com/domainreliability/upload\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net"
		"::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":2358,\"request_elapsed_ms\":1495,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gvt2.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTP\",\"request_age_ms\":672,\"request_elapsed_ms\":22,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://"
		"beacons2.gvt2.com/domainreliability/upload\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":805,\"request_elapsed_ms\":425,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gvt2.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
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
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("a2129670914.html_6", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-scanning-problems", 
		"Snapshot=t164.inf", 
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

	web_url("en_6", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/hp-pps-services/videos/playlist/NaN/cc/us/lc/en", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-scanning-problems", 
		"Snapshot=t165.inf", 
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

	web_url("xdframe-single-domain-1.1.0.html_7", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-scanning-problems", 
		"Snapshot=t166.inf", 
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

	web_url("products_7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-scanning-problems", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("events_26", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-scanning-problems", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.162.0\",\"enrich_decisions\":true,\"project_id\":\"19424703111\",\"revision\":\"89\",\"visitors\":[{\"visitor_id\":\"oeu1614154248702r0.741615021054205\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t\""
		":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1614154448466}],\"snapshots\":[{\"activationTimestamp\":1614154448437,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"78e23d07-8212-4ef2-bbab-b4eaad907115\",\"t\":1614154448467}]}]}]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("auth_7", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&2091593191&skiprnd=1&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-scanning-problems", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"043914a9-66f2-a204-aae8-602dabefbba4\",\"sessionNumber\":1,\"pageNumber\":7}}", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("events_27", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&str=490&di=1234&dc=2417&fl=2423&sr=31&mdh=2275&pn=7&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154450&pid=1255&eu=%5B%5B0%2C14%2C1463%2C713%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/help/printscandoctor-scanning-problems", 
		"Snapshot=t170.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("ScaningProblems",LR_AUTO);

	return 0;
}
