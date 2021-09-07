SecurityBulletinArchive()
{

	web_revert_auto_header("Origin");
	web_add_auto_header("Sec-Fetch-Site", 
		"none");
	web_add_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("FP17_SecurityBulletinArchive_01_doc");
	
	web_custom_request("security-bulletin-archive", 
		"URL=https://{p_Host}/{p_locale}/security-bulletin-archive", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP17_SecurityBulletinArchive_01_doc", LR_AUTO);
	lr_think_time(1);
	
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP17_SecurityBulletinArchive_02_api_region");

	web_custom_request("region_2", 
		"URL=https://{p_Host}/wcc-services/ssc/region", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletin-archive", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP17_SecurityBulletinArchive_02_api_region", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP17_SecurityBulletinArchive_03_api_wcc-services-ssc");

	web_custom_request("securityBulletin_3", 
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/securityBulletin", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletin-archive", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP17_SecurityBulletinArchive_03_api_wcc-services-ssc", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP17_SecurityBulletinArchive_04_api_termbase");

	web_custom_request("securityBulletin_4", 
		"URL=https://{p_Host}/wcc-services/termbase/{p_locale}/securityBulletin", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletin-archive", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP17_SecurityBulletinArchive_04_api_termbase", LR_AUTO);
	lr_think_time(1);

	lr_start_transaction("FP17_SecurityBulletinArchive_05_api_wcc_second_Nav");

	web_custom_request("wcc_second_Nav_2", 
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletin-archive", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP17_SecurityBulletinArchive_05_api_wcc_second_Nav", LR_AUTO);
	lr_think_time(1);
	
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_start_transaction("FP17_SecurityBulletinArchive_06_api_wcc-services-search");

	web_custom_request("security-bulletin-archive_2", 
		"URL=https://{p_Host}/wcc-services/search/{p_locale}/security-bulletin-archive?query=*&sortBy=bulletinUpdateDate&sortOrder=asc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletin-archive", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP17_SecurityBulletinArchive_06_api_wcc-services-search", LR_AUTO);
	lr_think_time(1);
	
	web_revert_auto_header("Origin");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	
	lr_start_transaction("FP17_SecurityBulletinArchive_07_SortOnHeadears");
	web_custom_request("security-bulletin-archive_3", 
		"URL=https://{p_Host}/wcc-services/search/{p_locale}/security-bulletin-archive?query=*&sortBy={p_SortBy}&sortOrder={p_SortOrder}", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletin-archive", 
		"Snapshot=t240.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP17_SecurityBulletinArchive_07_SortOnHeadears",LR_AUTO);
	lr_think_time(1);
	
	web_revert_auto_header("Origin");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	
	lr_start_transaction("FP17_SecurityBulletinArchive_08_SearchProduct");
	web_custom_request("security-bulletin-archive_7", 
		"URL=https://{p_Host}/wcc-services/search/{p_locale}/security-bulletin-archive?query={p_SearchArchiveProduct}&sortBy=bulletinUpdateDate&sortOrder=desc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/security-bulletin-archive", 
		"Snapshot=t265.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP17_SecurityBulletinArchive_08_SearchProduct",LR_AUTO);
	lr_think_time(1);
	
	/*web_add_auto_header("User-Agent","googlebot");

	lr_start_transaction("FP17_SecurityBulletinArchive_10_SEO");
	
	web_url("ProductCategory", 
		"URL=https://{p_Host}/{p_locale}/security-bulletin-archive", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Host}/{p_locale}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP17_SecurityBulletinArchive_10_SEO",LR_AUTO);
	
	web_revert_auto_header("User-Agent");*/

	return 0;
}