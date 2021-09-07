PrinterSetup_ModelPage()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	web_set_max_html_param_len("999999");
	
	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_start_transaction("FP07_PrintSetupModel_01_doc");

		web_url("11262035", 
		"URL=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP07_PrintSetupModel_01_doc", LR_AUTO);


	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP07_PrintSetupModel_02_api_region");

	web_url("region", 
		"URL=https://{BaseUrl}/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP07_PrintSetupModel_02_api_region", LR_AUTO);

	lr_start_transaction("FP07_PrintSetupModel_03_api_termbase");

	web_url("printerSetup", 
		"URL=https://{BaseUrl}/wcc-services/termbase/{p_locale}/printerSetup", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP07_PrintSetupModel_03_api_termbase", LR_AUTO);


	lr_start_transaction("FP07_PrintSetupModel_04_api_wcc-services-ssc");

	web_url("printerSetup_2", 
		"URL=https://{BaseUrl}/wcc-services/ssc/config/{p_locale}/printerSetup", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP07_PrintSetupModel_04_api_wcc-services-ssc", LR_AUTO);

	web_add_header("Origin", 
		"https://{BaseUrl}");
	
	lr_start_transaction("FP07_PrintSetupModel_05_api_href");


	web_custom_request("href", 
		"URL=https://{BaseUrl}/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"PrintSetup_Model\",\"path\":\"/printer-setup/hp-deskjet-3700-all-in-one-printer-series/8954253/model/11262035\",\"seriesoid\":\"8954253\",\"modeloid\":\"11262035\"}", 
		LAST);
	
	lr_end_transaction("FP07_PrintSetupModel_05_api_href", LR_AUTO);

	lr_start_transaction("FP07_PrintSetupModel_06_api_spos");

	web_url("{p_locale}", 
		"URL=https://{BaseUrl}/wcc-services/printsetup/spos/{p_locale}?oid=11262035&os=Windows%20NT%2010.0;%20Win64;%20x64&osbit=64", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP07_PrintSetupModel_06_api_spos", LR_AUTO);

	lr_start_transaction("FP07_PrintSetupModel_07_api_wcc_second_Nav");

	web_url("wcc_second_Nav", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP07_PrintSetupModel_07_api_wcc_second_Nav", LR_AUTO);

	web_url("country-selector.json", 
		"URL=https://{BaseUrl}/wcc-assets/data/country-selector.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("FP07_PrintSetupModel_08_api_wcc_sitehome_alerts");

	web_url("wcc_sitehome_alerts", 
		"URL=https://{BaseUrl}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP07_PrintSetupModel_08_api_wcc_sitehome_alerts", LR_AUTO);

	web_add_header("Origin", 
		"https://{BaseUrl}");

	
	web_reg_save_param("cp_stepsBody1","LB=statusMessage\":null,\"data\":","RB=]}",LAST);
	lr_start_transaction("FP07_PrintSetupModel_09_api_productdata");

	web_custom_request("productdata", 
		"URL=https://{BaseUrl}/wcc-services/productdata", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"seriesoid\":\"8954253\",\"modeloid\":\"11262035\",\"isMobile\":false,\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\"}", 
		LAST);
	lr_end_transaction("FP07_PrintSetupModel_09_api_productdata", LR_AUTO);


	lr_start_transaction("FP07_PrintSetupModel_10_api_ssr");


	web_url("{p_locale}_2", 
		"URL=https://{BaseUrl}/wcc-services/printsetup/ssr/{p_locale}?oid=11262035&os=Windows%20NT%2010.0;%20Win64;%20x64&osbit=64&standardOids=18972,238445,1142650,8954252,8954253,11262035", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP07_PrintSetupModel_10_api_ssr", LR_AUTO);


	web_add_auto_header("Origin", 
		"https://{BaseUrl}");
	
	lr_start_transaction("FP07_PrintSetupModel_11_api_resources");


	web_custom_request("resources", 
		"URL=https://{BaseUrl}/wcc-services/printsetup/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"os\":\"Windows NT 10.0; Win64; x64\",\"selectedOs\":null,\"osbit\":\"64\",\"osTmsId\":null,\"osParentTmsId\":null,\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\",\"metaData\":{cp_stepsBody1}},\"userType\":\"Anonymous\"}", 
		LAST);

	lr_end_transaction("FP07_PrintSetupModel_11_api_resources", LR_AUTO);
	
	lr_start_transaction("FP07_PrintSetupModel_12_api_steps");


	web_custom_request("steps", 
		"URL=https://{BaseUrl}/wcc-services/printsetup/steps", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"os\":\"Windows NT 10.0; Win64; x64\",\"selectedOs\":null,\"osbit\":\"64\",\"osTmsId\":null,\"osParentTmsId\":null,\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\",\"metaData\":{cp_stepsBody1}},\"userType\":\"Anonymous\"}", 
		LAST);
	
//		web_custom_request("steps", 
//		"URL=https://{BaseUrl}/wcc-services/printsetup/steps", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
//		"Snapshot=t36.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body={\"os\":\"Windows NT 10.0; Win64; x64\",\"selectedOs\":null,\"osbit\":\"64\",\"osTmsId\":null,\"osParentTmsId\":null,\"cc\":\"us\",\"lc\":\"en\",\"metaData\":{\"imageUri\":\"https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c05553372.png\",\"thumbnailUri\":null,\"supportSubcategoryOid\":1142650,\"productNumberOid\":11262037,\"productLineCode\":\"2N\",\"audience\":\"HHO\",\"productNumber\":\"J9V90A\",\"productNameOid\":{p_ModelNum},\"productName\":\"HP DeskJet 3755 All-in-One "
//		"Printer\",\"productSeriesOid\":8954253,\"productBigSeriesOid\":8954252,\"serialNumber\":null,\"productPlatform\":\"Lhasa\",\"productSeriesName\":\"HP DeskJet 3700 All-in-One Printer series\",\"productSeriesSEOName\":\"hp-deskjet-3700-all-in-one-printer-series\",\"seriesLevelAudienceFlag\":\"Consumer\",\"seriesLevelActiveWebSupport\":true,\"seriesLevelHistorical\":false,\"modelLevelAudienceFlag\":\"HHO\",\"modelLevelActiveWebSupport\":true,\"modelLevelHistorical\":false,\"nonSerializedFlag\":null,"
//		"\"printSetupEligible\":true,\"seriesContext\":false,\"modelContext\":true,\"chatbot\":true,\"customHierarchySet\":[\"268161584258236861743175748903686\",\"254133427475504699376875279529023\",\"896860184511388392552387080656597\",\"8954253\"],\"redirectUrl\":null,\"customResourceOids\":[11262035,8954253],\"standardHierarchySet\":[18972,238445,1142650,8954252,8954253,11262035]},\"userType\":\"Anonymous\"}", 
//		LAST);

	lr_end_transaction("FP07_PrintSetupModel_12_api_steps", LR_AUTO);
	

	return 0;
}