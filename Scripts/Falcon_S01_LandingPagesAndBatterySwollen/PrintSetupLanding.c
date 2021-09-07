PrintSetupLanding()
{

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_start_transaction("FP05_PrinterSetupLanding_01_doc");
	
	web_url("printer-setup", 
		"URL=https://{BaseUrl}/{p_locale}/printer-setup", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP05_PrinterSetupLanding_01_doc", LR_AUTO);
	
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP05_PrinterSetupLanding_02_api_ssc-printerSetup");
	
	web_url("printerSetup", 
		"URL=https://{BaseUrl}/wcc-services/ssc/config/{p_locale}/printerSetup", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP05_PrinterSetupLanding_02_api_ssc-printerSetup", LR_AUTO);
	
	web_add_header("Origin", 
		"https://{BaseUrl}");

	lr_start_transaction("FP05_PrinterSetupLanding_03_api_href");
	
	web_custom_request("href", 
		"URL=https://{BaseUrl}/wcc-services/sitemap/href", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"PrintSetup_Landing\",\"path\":\"/printer-setup\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	lr_end_transaction("FP05_PrinterSetupLanding_03_api_href", LR_AUTO);
	
	lr_start_transaction("FP05_PrinterSetupLanding_04_api_region");
	
	web_url("region",
		"URL=https://{BaseUrl}/wcc-services/ssc/region", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP05_PrinterSetupLanding_04_api_region", LR_AUTO);
	
	lr_start_transaction("FP05_PrinterSetupLanding_05_api_termbase-printerSetupLanding");
	
	web_url("printerSetupLanding", 
		"URL=https://{BaseUrl}/wcc-services/termbase/{p_locale}/printerSetupLanding", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP05_PrinterSetupLanding_05_api_termbase-printerSetupLanding", LR_AUTO);
	
	lr_start_transaction("FP05_PrinterSetupLanding_06_api_wcc_second_Nav");
		
	web_url("wcc_second_Nav", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP05_PrinterSetupLanding_06_api_wcc_second_Nav", LR_AUTO);

	lr_start_transaction("FP05_PrinterSetupLanding_07_api_wcc_sitehome_alerts");
	
	web_url("wcc_sitehome_alerts", 
		"URL=https://{BaseUrl}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP05_PrinterSetupLanding_07_api_wcc_sitehome_alerts", LR_AUTO);
	
	lr_start_transaction("FP05_PrinterSetupLanding_08_api_wcc_printersetup_landing_carousel");
	
	web_url("wcc_printersetup_landing_carousel", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_printersetup_landing_carousel", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP05_PrinterSetupLanding_08_api_wcc_printersetup_landing_carousel", LR_AUTO);

	lr_start_transaction("FP05_PrinterSetupLanding_09_api_wcc_printersetup_landing_banner");
		
	web_url("wcc_printersetup_landing_banner", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_printersetup_landing_banner", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP05_PrinterSetupLanding_09_api_wcc_printersetup_landing_banner", LR_AUTO);
		
	web_add_header("Origin", 
		"https://{BaseUrl}");

	lr_start_transaction("FP05_PrinterSetupLanding_10_api_searchresult");
	
	web_custom_request("dashboard", 
		//"URL=https://{BaseUrl}/wcc-services/searchresult/{p_locale}?q=dashboard", 
		"URL=https://{BaseUrl}/wcc-services/searchresult/{p_locale}?q=deskjet&context=pdp"
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup", 
		"Snapshot=t11.inf", 
		LAST);

	lr_end_transaction("FP05_PrinterSetupLanding_10_api_searchresult", LR_AUTO);
	
		return 0;
}
