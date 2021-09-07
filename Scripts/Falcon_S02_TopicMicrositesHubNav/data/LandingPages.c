LandingPages()
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
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_url("us-en", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("1P_JAR=2021-02-23-06; DOMAIN=accounts.google.com");

	web_add_cookie("NID=209=TBKbGeiwLOhn7vwqWy1l7S37p8mj2AEePa-uvKzCYv-UFahpFAyypw0w4wLhTYkRoDgct-yam-SRw0_VoqZR9T6B3zjy7l2lfGgbHnJrwz7TxEW443nzmDESr_A8dBNl4nywbW-pixfLoVXRFJeb5_V00B9FOjKsVBg-w6hR8qA; DOMAIN=accounts.google.com");

	web_add_auto_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_revert_auto_header("Origin");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t67.inf", 
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
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("xdframe-single-domain-1.1.0.html", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("region", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t69.inf", 
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
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"SiteHome_New\",\"path\":\"/\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	web_url("wcc_sitehome_supportresources", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_sitehome_supportresources", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_rowicons", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_sitehome_rowicons", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_url("siteHome", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/termbase/us-en/siteHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_second_Nav", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_url("country-selector.json", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/data/country-selector.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_tiles", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_sitehome_tiles", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_carousel", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_sitehome_carousel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("wcc_pfinder_common", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/contexual/us-en/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("auth", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&1315118384&subsid=232897&msgsize=120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"043914a9-66f2-a204-aae8-602dabefbba4\",\"sessionNumber\":1,\"pageNumber\":1}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.4.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=5E34123F5245B2CD0A490D45%40AdobeOrg&d_nsid=0&ts=1614154153344", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
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
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("windows_image", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/wcm/connect/pps/mlcontent_en/us-en/images/windows_image", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("otCenterRounded.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.7.0/assets/otCenterRounded.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("otPcTab.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.7.0/assets/v2/otPcTab.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("event", 
		"URL=https://hp.demdex.net/event?_ts=1614154164086", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"Body=d_mid=81985764575280497874326169134775780778&d_nsid=0&d_ld=_ts%3D1614154164085&d_rtbd=json&d_jsonv=1&d_dst=1&c_id=e34123f5245b2cd0a490d45%40adobeorg%3D1585540135%7Cmcidts%7C18683%7Cmcmid%7C81985764575280497874326169134775780778%7Cmcaamlh-1614758954%7C9%7Cmcaamb-1614758954%7C6g1ynyclpuiqxyzrsz_pkqflg9ymxbpb2zx5dvjdyqjzpximdj0y%7Cmcoptout-1614161355s%7Cnone%7Cmcaid%7Cnone%7Cvversion%7C4.4.0&c_secondary_id=null&c_customer_id=null&c_eloqua_id=null&c_company_id=null&c_user_profile=null&c_user_type"
		"=null&c_job_function=null&c_job_seniority=null&c_s_vnum=null&c_privacy_consent_button=null&c_preferredLang=en-US&c_languages=en-US&c_dnt=null&c_platform=Win32&c_memory=8&c_cores=24&c_renderer=Google%20SwiftShader&c_rendererEngine=Google%20Inc.&c_batteryCharging=true&c_batteryLevel=100&c_chargingTime=0&c_dischargingTime=Infinity&c_hp_print_motivation=null&c_hp_print_per_month=null&c_onetrust=null&c_userAgent=Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20"
		"(KHTML%2C%20like%20Gecko)%20Chrome%2F88.0.4324.182%20Safari%2F537.36&c_region=null&c_country=us&c_language=en&c_lifecycle=null&c_segment=Consumer.Home&c_web_section_id=r11839&c_site=ppssupport-itgllbh7&c_site_id=null&c_timeonsite=null&c_datetime=1614154155540&c_pagename=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en&c_pageurl=ppssupport-itgllbh7.inc.hp.com%2Fus-en&c_prev_pagename=null&c_timeon_prevpage=null&c_business_unit=null&c_section=null&c_subsection=null&c_category=null&c_category_name"
		"=null&c_product=null&c_product_id=null&c_description=find%20support%20and%20customer%20service%20options%20to%20help%20with%20your%20hp%20products%20including%20the%20latest%20drivers%20and%20troubleshooting%20articles.&c_referrer=null&c_se=null&c_st=null&c_hp_pv1_prefs=null&c_hp_pv2_prefs=null&c_hp_pv3_prefs=null&c_s_p_cnt=1&c_popup_hpeuck_prefs=null&c_optanonPresent=No&c_bannerDisplayed=null&c_acceptCookies=null&c_cookieSettings=null&c_saveSettings=null&c_acceptAll=null&c_event_name="
		"optanonPresent&c_event_object=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en&c_event_section=null&c_event_attr0=null&c_event_attr1=null&c_event_attr2=null&c_event_attr3=null&c_event_attr4=null&c_company_name=null&c_company_size=null&c_company_revenue=null&c_company_country=null&c_company_state=null&c_industry_vertical=null&c_b2b_segment=null&c_sic_code=null&c_version=1.2-SUPPORT", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,fbgcedjacmlbgleddnoacbnijgmiolem,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-88.0.4324.182");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:2524615925&cup2hreq=d1027b71ab0fd4cfcd72a599e6244dc2d3a5bab3c05929e13b56e4202b5753a5", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{88c92ead-ec79-4c97-9665-00b0ae04333b}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{9f255921-792b-484c-9b14-13011cab9ed9}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{0d258cd8-ecc8-440b-91e6-5b6ca08a7f2e}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"14.5\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{3dce9c0e-e5fd-4daf-8149-9b6d4ceccea5}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"fbgcedjacmlbgleddnoacbnijgmiolem\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.2.1\"}]},\"ping\":{\"ping_freshness\":\""
		"{1c315576-8690-41a3-9407-695c3f704094}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"2.1\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{a7f08eb6-1dbe-43c2-ade6-68c9f2697e8d}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"external\",\""
		"packages\":{\"package\":[{\"fp\":\"1.2efb05ac54de9cb374eaf236f5d4a95fd553be6a6b92c154f0f51c7f6b261877\"}]},\"ping\":{\"ping_freshness\":\"{4e0a60a8-a55a-42e7-b940-0aae8f183ee6}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"1.21.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.81e3a4d43a73699e1b7781723f56b8717175c536685c5450122b30789464ad82\"}]},\"ping\":{\"ping_freshness\":\""
		"{59365e97-6d65-4f9d-b433-932f8ed0e3ea}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.7f4e382d1c6724a5f173f3617e35d5ad74c28ffce9a918f00b48c88f978dc34e\"}]},\"ping\":{\"ping_freshness\":\"{ded61caf-8d5f-4d37-b017-b406ab050361}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\""
		":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.8fdcd9381791669caafc8142957dc288ab410a05010331f0f0b037322b531f44\"}]},\"ping\":{\"ping_freshness\":\"{eb03a3c4-ec04-4554-8475-fd29f48f4015}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"8820.1109.0.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.14393.4169\"},\"prodversion\":\"88.0.4324.182\",\"protocol\":\"3.1\",\"requestid\":\"{13495a62-7bec-4787-9bf9-a27d2e483183}\",\"sessionid\":\"{93a207d3-863d-4093-9725-e8b9ca6ffbd8}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.72\"},\"updaterversion\":\"88.0.4324.182\"}}", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	lr_think_time(5);

	web_custom_request("consentreceipts", 
		"URL=https://privacyportal.onetrust.com/request/v1/consentreceipts", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("consentreceipts_2", 
		"URL=https://privacyportal.onetrust.com/request/v1/consentreceipts", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"requestInformation\":\""
		"eyJhbGciOiJSUzUxMiJ9.eyJvdEp3dFZlcnNpb24iOjEsInByb2Nlc3NJZCI6ImU5NDAxZGRlLWRhZDctNDU4YS1hMmQ3LTdlNjUxNjEyZDZlYyIsInByb2Nlc3NWZXJzaW9uIjo2LCJpYXQiOiIyMDIwLTEwLTAxVDE3OjM1OjQwLjc4IiwibW9jIjoiQ09PS0lFIiwic3ViIjoiQ29va2llIFVuaXF1ZSBJZCIsImlzcyI6bnVsbCwidGVuYW50SWQiOiI0YWJiMjJlZi0wZTIwLTQ1OGUtYmU5My1lMzUxYWQyMWM0NjUiLCJkZXNjcmlwdGlvbiI6IlRoaXMgY29sbGVjdGlvbiBwb2ludCBjYXB0dXJlcyB0aGUgY3VycmVudCBzaXRlIHZpc2l0b3IgY29uc2VudCBwcmVmZXJlbmNlcyBmb3IgdGhlIGRvbWFpbjogaHAuY29tLWVuIHNwZWNpZmllZC4iLCJjb25zZW50VHlwZ"
		"SI6IkNPT0tJRUJBTk5FUiIsImRvdWJsZU9wdEluIjpmYWxzZSwicmVjb25maXJtQWN0aXZlUHVycG9zZSI6ZmFsc2UsImF1dGhlbnRpY2F0aW9uUmVxdWlyZWQiOmZhbHNlLCJwb2xpY3lfdXJpIjoiaHAuY29tIiwiYWxsb3dOb3RHaXZlbkNvbnNlbnRzIjpmYWxzZSwicHVycG9zZXMiOlt7ImlkIjoiNDkyYTY4ZjMtYjMzMi00NzE4LTkyOTQtMWU3ZDE2ZmY2MWM3IiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiYzA3Mzk1ZTMtMjk5Mi00OGIxLTgyYmYtMmI4NTY2YmYyYjAxIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiMGUzMTU4MjUtM2U0Ni00MTgxLWJ"
		"mYjUtMmRlMTlkYWYxYzUwIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiNDg4MWJkNDMtZjAyMS00Y2ZkLTg3M2ItM2Q0MzdkNTk0OTE0IiwidmVyc2lvbiI6MTYsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjZiNTJmNTI0LWQ0NTUtNDdlZC1iMjlkLTRiZTZjMjJjNjg0MSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjA1ODg5YzJlLTVlNTItNGQ5My1hNzllLTViNWMzMjUwZGU4YyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImUxOTJhNmY0LWNlNmEtNDgyMC05MDRjL"
		"TZjYzkwZGNkZmJhYSIsInZlcnNpb24iOjYsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjI0N2M5NjkyLWM3NzMtNDAzZS05MmFlLTcwMTlmZGIzNmE3OSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImVhMTRjZWQ0LTg0MGEtNGZhNS1iOTZmLTc4MjYzYjE2NGI0MSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjFmZTU0ZGRjLWM5YjQtNDRhNS1hYTc5LTgyYTcwOTA1OTVkYiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImQzMmI5NWExLWRjMzYtNDVmMS1iNjk0LThmMWM"
		"5MjMxYTg5YiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImE0ZGE0MGVkLTI0ZDItNGIwOS1iMWViLTlhYmQxZGVlZTg4ZSIsInZlcnNpb24iOjQsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImM5ZmViNzI2LWJlOTUtNDIxZi1hYjBkLTljYWVmMWE0MGE4NiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImMxNzk3ZjI2LWRmZDMtNGFkZi1iNGEzLTljZjU3YzM5MDgyOSIsInZlcnNpb24iOjE4LCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJlNTMwN2Q4Yy05Mzg5LTRhNDgtOTRjNi1hMWZhOWEwZ"
		"jczYjEiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiIzMWJhZDA4My04OTNhLTRhZDQtYjI2Ni1iMWZhZTczYzQ3MzMiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJmYTY1ZDEyNC03MjdjLTQ5ZTktOGY2OS1iNmJjMTViZGYzYWQiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJhMTE0MDUwMi01MWI1LTRkNGUtYmQ5MC1iZTAxMTdjYzAwMTAiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJiZDRiOWFjYy00NjJlLTRjOWEtYWEzYy1jYTc5MTBkNjRiNTQ"
		"iLCJ2ZXJzaW9uIjozLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiI4MzJmMmFlMy0wYWFiLTQwOTktYmIxOC1jY2EzNTE4ZWMzNmYiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiI2ZTg1NmM5OC0xMDEzLTRkZGItODczMi1kNTY2NzVhM2Q3ZDMiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJiYjNhYWIyNi1mYmIzLTQ1YTQtODRlZS1kNWE2NmI0Njc4ZGYiLCJ2ZXJzaW9uIjo0LCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiIxYmFmMjlmNC1mZTQ4LTQzNmYtYjczYS1kNzZiNTVjNWI2NmYiLCJ2Z"
		"XJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiIyNzRhMDNlMy1lOGE5LTRjOGQtYjZhZi1kY2M5ZTM4NjdlMTkiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiIyNTZlNWNiYS03YmFjLTRiN2MtYmU1Mi1kZTgzOTRlNWM4Y2IiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiI0NmRhYzZhNS04ZTg0LTQzZmItOWZkYi1mM2I2OWEwNWQxZTciLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJlMGIxY2YxNS00MWM0LTRjMGQtOTA4OS1mNDQ0YmVhYTJmNDUiLCJ2ZXJzaW9"
		"uIjo0LCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiIyMWQxYTM5MS1hNTBlLTQ4YWEtYTk0OS1mNjM5NzU0NTA4MDkiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJiOTE0ZWU3NS1hMTU5LTQ1NTQtYTc1YS1mODM3M2I5NjNjYjgiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJiYzVjNTdkZi01YmMwLTQ1MjktYWQ2OS1mYjQzMWI0MTRkY2YiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119XSwibm90aWNlcyI6W10sImRzRGF0YUVsZW1lbnRzIjpbIlVzZXJBZ2VudCIsIkNvdW50cnkiLCJJb"
		"nRlcmFjdGlvblR5cGUiXX0.ZsWtWcnAxAF8mpnAH5Nalg9Gu5maNMdaivVFQQPCc74ygD3jOyY-4p2NdxQ_DU--1pK7xEzPSkUKrZHPbTxq8PfQuyfusMsrl1qCWUWVB_yggePTMjUdXB4hX3qr_QgJavuxCgaLdPMlrAqHSc-O9epupuxxgNv9XN1gxopu2T4_ggswC4MTnFWcfjgfGIOTt9ZcfQm3J-VbQ3Vh-Ygwou6cAIQFl98v9o87DMGI9-h7XoO72HYcIA8-AxIoHC3Ms-V5U2jhNjnIY7K3gZs26-zSwH45iEB7DKz7QBog5zSJCQSy4FkViUOr5q81-xys3F3qZ-hHlfOncxAIqEEWUqXlFpIVOPx7eu6jGb7GJDgHf3-BXnRA-xD_aN4PPVqgvrn-1YWLWr3wShXvcd9c7_p2UvsUJWwc1Lu4MQ0rAbjhZJ1wYXIE6ftKsNyYIaaV1SRdcCv2bAFJbMVf1RcXibBo5L3Q4Ub"
		"TGKfFtlOOnx7MnPyeLgJeIlcI7YW91xDTgVRG0WGzbl0SwyEUuc5LbbM-8q2fDzPzeGfRgqoalFp47D3MvOQxPbyejq5Ol0XDcSi_CgNL1udffzdI244AIoE1HHKXE8nWhM9oQ-ivdx9D1-ubIMROzVBhwi4xV9RHtyw8378zNDozYcQtjVKQOMsEPIIenEKS2O4gctHxpY8\",\"identifier\":\"ae60e8e9-c073-467c-8c65-49cd695fda50\",\"customPayload\":{\"Interaction\":1,\"AddDefaultInteraction\":false},\"isAnonymous\":true,\"purposes\":[{\"Id\":\"A4DA40ED-24D2-4B09-B1EB-9ABD1DEEE88E\",\"TransactionType\":\"NO_CHOICE\"},{\"Id\":\"C1797F26-DFD3-4ADF-B4A3-9CF57C390829\","
		"\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"4881BD43-F021-4CFD-873B-3D437D594914\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"E192A6F4-CE6A-4820-904C-6CC90DCDFBAA\",\"TransactionType\":\"CONFIRMED\"}],\"dsDataElements\":{\"InteractionType\":\"Banner - Close\",\"Country\":\"US\",\"UserAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.182 Safari/537.36\"},\"test\":false}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(6);

	web_custom_request("events", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&sr=54&mdh=713&pn=1&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154152&pid=1255&str=898&di=1579&dc=15619&fl=15628&eu=%5B%5B0%2C5%2C1463%2C713%5D%2C%5B2%2C3463%2C869%2C181%2C0%2C%22div%23directionTracker%3Eapp-loader%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C39034%2C16633%5D%2C%5B6%2C13102%2C865%2C249%2C%22button%23onetrust-accept-btn-handler%22%2C%22%22%5D%2C%5B2%2C13103%2C865%2C249%2C0%2C%22button%23onetrust-accept-btn-handler%22%2C62414%2C58487%5D%2C%5B7%2C13109%2C871%2C252%2C%22button%23onetrust-accept-btn-handler%22%5D%2C%5B6%2C13296%2C948%2C179%2C%22p%23onetrust-policy-text%3Ep%3Aeq(0)%3Ea%3Aeq(1)%22%2C%22%22%5D%2C%5B7%2C13332%2C963%2C166%2C%22p%23onetrust-policy-text%3Ep%3Aeq(0)%3Ea%3Aeq(1)"
		"%22%5D%2C%5B2%2C13504%2C1032%2C128%2C0%2C%22p%23onetrust-policy-text%3Ep%3Aeq(0)%22%2C58944%2C2841%5D%2C%5B2%2C13903%2C1081%2C104%2C0%2C%22div%23onetrust-group-container%22%2C60994%2C17001%5D%2C%5B6%2C14034%2C1109%2C95%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C14128%2C1117%2C95%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%5D%2C%5B2%2C14305%2C1117%2C95%2C0%2C%22%22%2C63943%2C12320%5D%2C%5B6%2C14551%2C1115%2C95%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C14706%2C1114%2C96%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C49732%2C17066%5D%2C%5B3%2C15049%2C1112%2C96%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B2%2C15106%2C1112%2C96%2C0%2C%22%22%2C36718%2C17066%5D%2C%5B4%2C15263%2C1112%2C96%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C15270%2C1112%2C96%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C15731%2C1112%2C96%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%5D%2C%5B2%2C17092%2C959%2C171%2C0%2C%22div%23directionTracker%3Eapp-loader%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C43076%2C15714%5D%2C%5B2%2C17494%2C633%2C167%2C0%2C%22%22%2C28433%2C15347%5D%2C%5B2%2C17894%2C635%2C157%2C0%2C%22%22%2C28523%2C14428%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t89.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("products", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hnimpnehoodheedghdeeijklkeaacbdc,cmahhnpholdijhjokonmfdjbfmklppij,aemomkdncapdnfajjbbcbdebjljbpmpj,khaoiebndkojlmppeemjhbpbandiljpe,obedbbhbpmojnkanicioggnmelmoomoc,gkmgaooipdjhmangpemjhigmamcehddo,hfnkpimlhhgieaddgfemjhofmfblmnib,giekcmmlnklenlaomppkphknjmnnpneh,bklopemakmnopmghhmccadeonafabnal,ggkkehgbnfjpeggfpleeakpidbkibbmn,ehgidpndbllacpjalkiimkbadgjfnnmc,llkgjffcdpffmhiakmfcdcblohccpfmo,"
		"jflookgnkcckhobaglndicnbbgbonegd,ojhpjlocmbogdgmfpkhlaaeamibhnphh,eeigpngbgcognadeebkilcpcaedhellh,jamhcnnkihinmdlkakkaopbjbbcngflc");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-88.0.4324.182");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:2225357410&cup2hreq=402b2731f5d59140895b8125bc92a078afb2f110debaeb5121778eaca6a52e14", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{b588aef9-2df0-48bb-9c63-d4cd81c4ff15}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{064664be-aaf6-4bc5-96b9-197d5f61ef81}\",\"rd\":5167},\"updatecheck\":{},\""
		"version\":\"4.10.1679.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEU\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.869f6197c3fdd474910319ff37ee13b73f8fb8ceeaaa62517e2d056b6a03ff54\"}]},\"ping\":{\"ping_freshness\":\"{56e112be-5d4f-4c89-a861-ceccbb09b58e}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"9.19.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\""
		"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{393a8663-a673-496c-b6a7-1d085a4406f0}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GCEU\",\"cohort\":\"1:wr3:x23@0.01\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{98cfa5f1-651e-4560-9036-494a8ba1af82}\",\"rd\""
		":5167},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{1b17064b-de17-4e41-ac47-360531e489d9}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4\"}]},\"ping\":{\"ping_freshness\":\"{27401e63-ba25-4b83-a9fa-39d6a365d191}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"43\"},{\"accept_locale\":\"ENUS\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GCEU\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.8ed57acce60a22c84e5cacad561acaeecc59cbb25e940176f9faa2b7e7fe5bb4\"}]},\"ping\":{\""
		"ping_freshness\":\"{bc5f9504-ba67-4b62-b673-56fa1711c580}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"20210201.356396038\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.78572f8178a695ecbf22a4e10a52e81cf0ae95a5a9f79ead6b8c58339178f02e\"}]},\"ping\":{\"ping_freshness\":\"{7ef6664d-1a1e-49db-9384-7533a1c9d195}\",\"rd\":5167},\"tag\":\"eset_exp_b\""
		",\"updatecheck\":{},\"version\":\"88.253.200\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b47f9da24ca3f9c112792c7563e11aea1a2eb9dc819558ed207a1e4f1c6c4e41\"}]},\"ping\":{\"ping_freshness\":\"{f86ff706-7a99-443d-b9a2-a4ecb48dc431}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"6445\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU"
		"\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{eeb07994-aae1-44bf-9f98-6c0f33ca166a}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GCEU\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":"
		"[{\"fp\":\"1.70497f45af368f6d591eb9b93a097b7b56821b0770ee00f04b2f5901487a0421\"}]},\"ping\":{\"ping_freshness\":\"{fff6d14b-6fb7-45aa-b278-e2695810ed90}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"4\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM99\",\"cohortname\":\"M80ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6d8e181250235f5a64e27f021a3d68ab6e9a32906a221f8922f51a179da4b6\"}]},\"ping\":{\""
		"ping_freshness\":\"{66a407fd-f3a8-4a92-8581-1567bec09c5c}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"2021.2.15.1201\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{b4809837-6d00-4e05-a23b-991f77d89a32}\",\"rd\":5167},\"updatecheck\":{},\""
		"version\":\"2018.8.8.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.d730fdd6875bfda19ae43c639e89fe6c24e48b53ec4f466b1d7de2001f97e03c\"}]},\"ping\":{\"ping_freshness\":\"{8312838e-7f71-4510-a41b-2a017140686f}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,"
		"\"packages\":{\"package\":[{\"fp\":\"1.39010146f86c539e0d689946fc1a5b59fb27548b5602257e4705711f7d986b03\"}]},\"ping\":{\"ping_freshness\":\"{62cafc1b-58ad-4927-bf07-48bc4268f333}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"2571\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GCEU\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\""
		"ping\":{\"ping_freshness\":\"{cb3eaf65-d341-462e-9b50-e305f6cde20e}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GCEU\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{d4a6c205-1d62-4c3e-80fe-ca500174d84e}\",\"rd\":5167},\"updatecheck\":{},\"version\":\""
		"2020.11.2.164946\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GCEU\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.456192e77563c9ad1905c74d48773d0fc02d3c597110047bd31865fd003627ca\"}]},\"ping\":{\"ping_freshness\":\"{8050e0f9-15c4-4438-b766-27d1eeb28908}\",\"rd\":5167},\"updatecheck\":{},\"version\":\"90.0.4427.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\""
		"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.14393.4169\"},\"prodversion\":\"88.0.4324.182\",\"protocol\":\"3.1\",\"requestid\":\"{56aad982-a150-48d7-b458-3284e44ee713}\",\"sessionid\":\"{db328187-4b21-48b8-9150-6c63050d9d7f}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.72\"},\"updaterversion\":\"88.0.4324.182\"}}", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("events_2", 
		"URL=https://c.contentsquare.net/events?v=10.4.0&sr=54&mdh=713&pn=1&re=1&uu=043914a9-66f2-a204-aae8-602dabefbba4&sn=1&lv=1614154152&lhd=1614154152&hd=1614154152&pid=1255&str=898&di=1579&dc=15619&fl=15628&eu="
		"%5B%5B2%2C28633%2C871%2C251%2C0%2C%22%22%2C39123%2C23066%5D%2C%5B2%2C29034%2C858%2C283%2C0%2C%22%22%2C38539%2C26007%5D%2C%5B2%2C32994%2C736%2C152%2C0%2C%22%22%2C33059%2C13968%5D%2C%5B6%2C59343%2C736%2C152%2C%22a%23sec-nav-diag%22%2C%22%22%5D%2C%5B7%2C61192%2C768%2C81%2C%22a%23sec-nav-diag%22%5D%2C%5B2%2C61200%2C768%2C81%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C34742%2C27443%5D%2C%5B2%2C61599%2C812%2C20%2C0%2C%22div%23welcomeHeader%22%2C36473%2C24272%5D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en", 
		"Snapshot=t92.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	return 0;
}
