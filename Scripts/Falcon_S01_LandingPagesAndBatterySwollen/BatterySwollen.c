BatterySwollen()
{
	web_cache_cleanup();
	web_cleanup_cookies();
	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	web_set_max_html_param_len("9999");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");
	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");
	
	
	lr_start_transaction("FP25_BatterySwollen_01_doc");


	web_url("swollen-battery", 
		"URL=https://{BaseUrl}/{p_locale}/help/swollen-battery", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP25_BatterySwollen_01_doc", LR_AUTO);

	
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_start_transaction("FP25_BatterySwollen_02_api_alerts");

	web_url("wcc_sitehome_alerts", 
		"URL=https://{BaseUrl}/wcc-services/cms/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/help/swollen-battery", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP25_BatterySwollen_02_api_alerts", LR_AUTO);

	web_revert_auto_header("X-Requested-With");

	lr_start_transaction("FP25_BatterySwollen_03_api_videoIds");

	web_custom_request("{p_locale}", 
		"URL=https://{BaseUrl}/wcc-services/content/videoDetails/{p_locale}?videoIds=dAs3-SisVas", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/help/swollen-battery", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);
	lr_end_transaction("FP25_BatterySwollen_03_api_videoIds", LR_AUTO);


//	web_revert_auto_header("sec-ch-ua");
//	web_revert_auto_header("sec-ch-ua-mobile");
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("c05061199", 
//		"URL=https://{BaseUrl}/{p_locale}/document/c05061199", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{BaseUrl}/{p_locale}/help/swollen-battery", 
//		"Snapshot=t79.inf", 
//		"Mode=HTML", 
//		LAST);
	
	
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_header("Access-Control-Allow-Origin", 
		"*");
	web_add_header("Origin", 
		"https://{BaseUrl}");
	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");
	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");
	
	
	web_reg_find("Text=serialNumber", "SaveCount=Text_count", LAST);
	
	lr_start_transaction("FP25_BatterySwollen_04_api_check");


	web_custom_request("check", 
		"URL=https://{BaseUrl}/wcc-services/replace-battery/check", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/help/swollen-battery", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"utcOffset\":\"P0000\",\"serialNumber\":\"{p_SerialNum}\",\"productNumber\":\"\"}", 
		LAST);

	if(strcmp(lr_eval_string("{Text_count}"),"0")==0)
	{
		lr_end_transaction("FP25_BatterySwollen_04_api_check", LR_FAIL);

	}
	else
	{
		lr_end_transaction("FP25_BatterySwollen_04_api_check", LR_PASS);

	}
	
	//lr_end_transaction("FP25_BatterySwollen_02_EnterSerialNumAndClickOnSubmit",LR_AUTO);
	
//	web_revert_auto_header("X-Requested-With");
//	web_revert_auto_header("sec-ch-ua");
//	web_revert_auto_header("sec-ch-ua-mobile");
//
//	web_url("c05061199_2", 
//		"URL=https://{BaseUrl}/{p_locale}/document/c05061199", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{BaseUrl}/{p_locale}/help/swollen-battery", 
//		"Snapshot=t101.inf", 
//		"Mode=HTML", 
//		LAST);
	
	
	
//	web_add_auto_header("User-Agent","googlebot");
//	lr_start_transaction("FP25_BatterySwollen_05_seo");
//
//	web_url("swollen-battery",
//		"URL=https://{BaseUrl}/{p_locale}/help/swollen-battery", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=", 
//		"Snapshot=t72.inf", 
//		"Mode=HTML", 
//		LAST);
//	
//	lr_end_transaction("FP25_BatterySwollen_05_seo", LR_AUTO);
//		
//	web_revert_auto_header("User-Agent");
	
	return 0;
}
