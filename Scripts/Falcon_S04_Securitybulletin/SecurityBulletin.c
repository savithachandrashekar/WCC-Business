SecurityBulletin()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	
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

	

	lr_start_transaction("FP16_SecurityBulletin_01_doc");

	
	web_custom_request("security-bulletins", 
		"URL=https://{p_Host}/{p_locale}/security-bulletins", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP16_SecurityBulletin_01_doc", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP16_SecurityBulletin_02_api_termbase");

	web_custom_request("securityBulletin", 
		"URL=https://{p_Host}/wcc-services/termbase/{p_locale}/securityBulletin", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletins", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		LAST);
	
	lr_end_transaction("FP16_SecurityBulletin_02_api_termbase", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP16_SecurityBulletin_03_api_region");

	web_custom_request("region", 
		"URL=https://{p_Host}/wcc-services/ssc/region", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletins", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP16_SecurityBulletin_03_api_region", LR_AUTO);
	lr_think_time(1);
	

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	lr_start_transaction("FP16_SecurityBulletin_04_api_wcc-service-ssc");

	web_custom_request("securityBulletin_2", 
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/securityBulletin", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletins", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP16_SecurityBulletin_04_api_wcc-service-ssc", LR_AUTO);
	lr_think_time(1);
	
	web_revert_auto_header("Origin");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP16_SecurityBulletin_05_api_wcc_second_Nav");

	web_custom_request("wcc_second_Nav", 
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletins", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP16_SecurityBulletin_05_api_wcc_second_Nav", LR_AUTO);
	lr_think_time(1);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_start_transaction("FP16_SecurityBulletin_06_api_wcc-services-search");

	web_custom_request("security-bulletins_2", 
		"URL=https://{p_Host}/wcc-services/search/{p_locale}/security-bulletins?query=*&sortBy=bulletinUpdateDate&sortOrder=desc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletins", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP16_SecurityBulletin_06_api_wcc-services-search", LR_AUTO);
	lr_think_time(1);
	
	web_revert_auto_header("Origin");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	
	lr_start_transaction("FP16_SecurityBulletin_07_SortOnHeadears");

	web_custom_request("security-bulletins_3", 
		"URL=https://{p_Host}/wcc-services/search/{p_locale}/security-bulletins?query=*&sortBy={p_SortBy}&sortOrder={p_SortOrder}", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletins", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP16_SecurityBulletin_07_SortOnHeadears",LR_AUTO);
	lr_think_time(1);
		
	web_revert_auto_header("Origin");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP16_SecurityBulletin_08_SearchProduct");
	
	web_custom_request("security-bulletins_7", 
		"URL=https://{p_Host}/wcc-services/search/{p_locale}/security-bulletins?query={p_SearchBulletinProduct}&sortBy=bulletinUpdateDate&sortOrder=asc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletins", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP16_SecurityBulletin_08_SearchProduct",LR_AUTO);
	lr_think_time(1);
	
/*	web_add_auto_header("User-Agent","googlebot");

	lr_start_transaction("FP16_SecurityBulletin_10_SEO");
	
	web_url("ProductCategory", 
		"URL=https://{p_Host}/{p_locale}/security-bulletins", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Host}/{p_locale}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP16_SecurityBulletin_10_SEO",LR_AUTO);
	web_revert_auto_header("User-Agent");*/


	return 0;
}
