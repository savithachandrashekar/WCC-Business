Pagination()
{


	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("FP23_Pagination_01_dashboard");
		
	web_url("dashboard", 
		"URL=https://{BaseURL}/{p_locale}/dashboard", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP23_Pagination_01_dashboard", LR_AUTO);
		
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	lr_start_transaction("FP23_Pagination_02_api_region");
	
	web_url("region", 
		"URL=https://{BaseURL}/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP23_Pagination_02_api_region", LR_AUTO);
	
	lr_start_transaction("FP23_Pagination_03_api_ssc-global");
	
	web_url("global", 
		"URL=https://{BaseURL}/wcc-services/ssc/config/{p_locale}/global", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP23_Pagination_03_api_ssc-global", LR_AUTO);
	
	lr_start_transaction("FP23_Pagination_04_api_user");
	
	web_url("user", 
		"URL=https://{BaseURL}/wcc-services/profile/user?login=false&isMobile=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP23_Pagination_04_api_user", LR_AUTO);
	
	lr_start_transaction("FP23_Pagination_05_api_termbase-dashboard");
		
	web_url("dashboard_2", 
		"URL=https://{BaseURL}/wcc-services/termbase/{p_locale}/dashboard", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP23_Pagination_05_api_termbase-dashboard", LR_AUTO);
	
	lr_start_transaction("FP23_Pagination_06_api_wcc_second_Nav");
	
	web_url("wcc_second_Nav", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP23_Pagination_06_api_wcc_second_Nav", LR_AUTO);
		
	lr_start_transaction("FP23_Pagination_07_api_wcc_sitehome_alerts");
		
	web_url("wcc_sitehome_alerts", 
		"URL=https://{BaseURL}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP23_Pagination_07_api_wcc_sitehome_alerts", LR_AUTO);
		

	lr_start_transaction("FP23_Pagination_08_api_wcc_FP02_Dashboard_navmenu");
		
	web_url("wcc_dashboard_navmenu", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_dashboard_navmenu", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP23_Pagination_08_api_wcc_FP02_Dashboard_navmenu", LR_AUTO);
	
	lr_start_transaction("FP23_Pagination_09_api_devices-all_1");
		
	web_url("all", 
		"URL=https://{BaseURL}/wcc-services/profile/devices/all?login=false&cc={p_Region}&lc={p_lc}&limit=20&startIndex=0&offset=P0530&isMobile=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP23_Pagination_09_api_devices-all_1", LR_AUTO);
	
	lr_start_transaction("FP23_Pagination_10_api_devices-all_2");
		
	web_url("all_2", 
		"URL=https://{BaseURL}/wcc-services/profile/devices/all?login=false&cc={p_Region}&lc={p_lc}&limit=20&startIndex=20&offset=P0530&isMobile=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP23_Pagination_10_api_devices-all_2", LR_AUTO);
		
	web_add_header("Origin", 
		"https://{BaseURL}");

	lr_start_transaction("FP23_Pagination_11_api_href");
		
	web_custom_request("href", 
		"URL=https://{BaseURL}/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"Dashboard_New\",\"path\":\"/dashboard\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	lr_end_transaction("FP23_Pagination_11_api_href", LR_AUTO);
		
	return 0;
}