AddDevice()
{


	web_set_max_html_param_len("600000");
	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP24_AddDevice_01_doc");
	
	web_custom_request("web_custom_request",
		"URL=https://{BaseURL}/{p_locale}/add-device",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Mode=HTML",
		"Body=",
		LAST);
	lr_end_transaction("FP24_AddDevice_01_doc", LR_AUTO);
	
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	
	web_url("region", 
		"URL=https://{BaseURL}/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/add-device", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("FP24_AddDevice_02_api_ssc-global");
			
	web_url("addDevice", 
		"URL=https://{BaseURL}/wcc-services/ssc/config/{p_locale}/global", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/add-device", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP24_AddDevice_02_api_ssc-global", LR_AUTO);
	
	lr_start_transaction("FP24_AddDevice_03_api_ssc-addDevice");
			
	web_url("addDevice", 
		"URL=https://{BaseURL}/wcc-services/ssc/config/{p_locale}/addDevice", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/add-device", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP24_AddDevice_03_api_ssc-addDevice", LR_AUTO);
	
	lr_start_transaction("FP24_AddDevice_04_api_wcc_dashboard_adddevice_banner");
	
	web_url("wcc_dashboard_adddevice_banner", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_dashboard_adddevice_banner", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/add-device", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP24_AddDevice_04_api_wcc_dashboard_adddevice_banner", LR_AUTO);
	
	lr_start_transaction("FP24_AddDevice_05_api_devices-all");
	
	web_url("all", 
		"URL=https://{BaseURL}/wcc-services/profile/devices/all?login=false&cc={p_Region}&lc={p_lc}&limit=20&startIndex=0&offset=P0530&isMobile=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/add-device", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP24_AddDevice_05_api_devices-all", LR_AUTO);
	
	lr_start_transaction("FP24_AddDevice_07_api_wcc_second_Nav");
	
	web_url("wcc_second_Nav", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}/add-device", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP24_AddDevice_07_api_wcc_second_Nav", LR_AUTO);
	
	lr_start_transaction("FP24_AddDevice_08_api_termbase-addDevice");
	
	web_url("addDevice_2", 
		"URL=https://{BaseURL}/wcc-services/termbase/{p_locale}/addDevice", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/add-device", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP24_AddDevice_08_api_termbase-addDevice", LR_AUTO);
		
	web_add_header("Origin", 
		"https://{BaseURL}");

	lr_start_transaction("FP24_AddDevice_09_api_href");
	
	web_custom_request("href", 
		"URL=https://{BaseURL}/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/add-device", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"AddDevice_new\",\"path\":\"/add-device\",\"seriesoid\":\"0\",\"modeloid\":\"0\"}", 
		LAST);

	lr_end_transaction("FP24_AddDevice_09_api_href", LR_AUTO);
		
	lr_start_transaction("FP24_AddDevice_10_api_wcc_sitehome_alerts");
	
	web_url("wcc_sitehome_alerts", 
		"URL=https://{BaseURL}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/add-device", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP24_AddDevice_10_api_wcc_sitehome_alerts", LR_AUTO);
	
	lr_start_transaction("FP24_AddDevice_11_api_wcc_pfinder_common");
	
	web_url("wcc_pfinder_common", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=AddDevice_new", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/add-device", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP24_AddDevice_11_api_wcc_pfinder_common", LR_AUTO);
	
	
	
	
/*	web_custom_request("528073", 
		"URL=https://{BaseURL}/wcc-services/profile/devices/528073?offset=P0530&isMobile=false", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard/device", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"oid\":\"7815296\",\"sku\":\"W4R30UC\",\"serialNumber\":\"{p_SerialNumber}\",\"offset\":\"P0530\",\"isMobile\":false}", 
		LAST);

	web_url("wcc_second_Nav_3", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard/device", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_alerts_3", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard/device", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_dashboard_spoc_carousel", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/contexual/{p_locale}/wcc_dashboard_spoc_carousel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard/device", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_dashboard_quickactions", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_dashboard_quickactions", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard/device", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);*/
		
	return 0;
}