MyDashboard()
{
	lr_start_transaction("FP22_Dashboard_01_doc");
	 
	web_url("dashboard", 
		"URL=https://{BaseURL}/{p_locale}/dashboard", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);
	 
	lr_end_transaction("FP22_Dashboard_01_doc",LR_AUTO);
	
	lr_start_transaction("FP22_Dashboard_02_api_region");
	
		web_url("region", 
		"URL=https://{BaseURL}/wcc-services/ssc/region", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP22_Dashboard_02_api_region",LR_AUTO);
	
	lr_start_transaction("FP22_Dashboard_03_api_termbase-dashboard");
	  
	web_url("dashboard", 
		"URL=https://{BaseURL}/wcc-services/termbase/{p_locale}/dashboard", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	  
	  lr_end_transaction("FP22_Dashboard_03_api_termbase-dashboard",LR_AUTO);
	  
	  lr_start_transaction("FP22_Dashboard_04_api_wcc_second_Nav");
	
	web_url("wcc_second_Nav_3", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		LAST);
	  
	lr_end_transaction("FP22_Dashboard_04_api_wcc_second_Nav",LR_AUTO);

	lr_start_transaction("FP22_Dashboard_05_api_wcc_Dashboard_ssr_options");
	  
	web_url("wcc_dashboard_ssr_options", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/contexual/{p_locale}/wcc_dashboard_ssr_options", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP22_Dashboard_05_api_wcc_Dashboard_ssr_options",LR_AUTO);
	
	  lr_start_transaction("FP22_Dashboard_06_api_wcc_sitehome_alerts");
	  
	web_url("wcc_sitehome_alerts_3", 
		"URL=https://{BaseURL}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t214.inf", 
		"Mode=HTML", 
		LAST);
	  
	lr_end_transaction("FP22_Dashboard_06_api_wcc_sitehome_alerts",LR_AUTO);

	lr_start_transaction("FP22_Dashboard_07_api_userlogin");
	 
	web_url("user", 
		"URL=https://{BaseURL}/wcc-services/profile/user?login=false&isMobile=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t216.inf", 
		"Mode=HTML", 
		LAST);
		
	lr_end_transaction("FP22_Dashboard_07_api_userlogin",LR_AUTO);
		
	lr_start_transaction("FP22_Dashboard_08_api_wcc_Dashboard_navmenu");

	web_url("wcc_dashboard_navmenu", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_dashboard_navmenu", 
		"Resource=0",
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t217.inf", 
		"Mode=HTML", 
		LAST);
	    
	lr_end_transaction("FP22_Dashboard_08_api_wcc_Dashboard_navmenu",LR_AUTO);
	
/*	web_reg_save_param("cp_SerialNumber", "LB=serialNumber\":\"", "RB=\"", "ORD=ALL", LAST);
	web_reg_save_param("cp_productNameOID", "LB=productNameOID\":\"", "RB=\"", "ORD=ALL", LAST);
	web_reg_save_param("cp_productNumber", "LB=productNumber\":\"", "RB=\"", "ORD=ALL", LAST);
	web_reg_save_param("cp_deviceId", "LB=deviceId\":\"", "RB=\"", "ORD=ALL", LAST);
	web_reg_save_param("cp_productSeriesName", "LB=productSeriesName\":\"", "RB=\"", "ORD=ALL", LAST);
	web_reg_save_param("cp_productSeriesOID", "LB=productSeriesOID\":\"", "RB=\"", "ORD=ALL", LAST);*/
		
	lr_start_transaction("FP22_Dashboard_09_api_devices-all");
	
	web_url("all",
		"URL=https://{BaseURL}/wcc-services/profile/devices/all?login=false&cc={p_Region}&lc={p_lc}&offset=P0530&isMobile=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP22_Dashboard_09_api_devices-all",LR_AUTO);
	
	lr_start_transaction("FP22_Dashboard_10_api_href");
	
	web_custom_request("href", 
		"URL=https://{BaseURL}/wcc-services/sitemap/href", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json",
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"Dashboard_New\",\"path\":\"/dashboard\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);
	
	lr_end_transaction("FP22_Dashboard_10_api_href",LR_AUTO);
	
	return 0;
}
