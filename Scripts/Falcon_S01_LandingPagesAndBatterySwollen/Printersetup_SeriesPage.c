Printersetup_SeriesPage()
{
	
		
	web_set_max_html_param_len("666666");
	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("FP06_PrinterSetupSeries_01_doc");
	
	web_url("{p_SeriesOid}", 
		"URL=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP06_PrinterSetupSeries_01_doc", LR_AUTO);
	
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP06_PrinterSetupSeries_02_api_region");
	
	web_url("region", 
		"URL=https://{BaseUrl}/wcc-services/ssc/region", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP06_PrinterSetupSeries_02_api_region", LR_AUTO);
	
	lr_start_transaction("FP06_PrinterSetupSeries_03_api_termbase-printerSetup");
	web_url("printerSetup", 
		"URL=https://{BaseUrl}/wcc-services/termbase/{p_locale}/printerSetup", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP06_PrinterSetupSeries_03_api_termbase-printerSetup", LR_AUTO);
	
	web_add_header("Origin", 
		"https://{BaseUrl}");

	lr_start_transaction("FP06_PrinterSetupSeries_04_api_productdata");
	
	web_custom_request("productdata", 
		"URL=https://{BaseUrl}/wcc-services/productdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cc\":\"au\",\"lc\":\"{p_lc}\",\"seriesoid\":\"{p_SeriesOid}\",\"modeloid\":null,\"isMobile\":false}", 
		LAST);
	lr_end_transaction("FP06_PrinterSetupSeries_04_api_productdata", LR_AUTO);
	
	lr_start_transaction("FP06_PrinterSetupSeries_05_api_ssc-printerSetup");

	
	web_url("printerSetup_2", 
		"URL=https://{BaseUrl}/wcc-services/ssc/config/{p_locale}/printerSetup", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP06_PrinterSetupSeries_05_api_ssc-printerSetup", LR_AUTO);
	
	web_add_header("Origin", 
		"https://{BaseUrl}");

	lr_start_transaction("FP06_PrinterSetupSeries_06_api_href");
	
	web_custom_request("href", 
		"URL=https://{BaseUrl}/wcc-services/sitemap/href", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"PrintSetup_Series\",\"path\":\"/printer-setup/{p_printerSeries}/{p_SeriesOid}\",\"seriesoid\":\"{p_SeriesOid}\",\"modeloid\":null}", 
		LAST);

	lr_end_transaction("FP06_PrinterSetupSeries_06_api_href", LR_AUTO);
	
	lr_start_transaction("FP06_PrinterSetupSeries_07_api_wcc_second_Nav");
	
	web_url("wcc_second_Nav", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP06_PrinterSetupSeries_07_api_wcc_second_Nav", LR_AUTO);
	
	lr_start_transaction("FP06_PrinterSetupSeries_08_api_wcc_sitehome_alerts");
	
	web_url("wcc_sitehome_alerts", 
		"URL=https://{BaseUrl}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP06_PrinterSetupSeries_08_api_wcc_sitehome_alerts", LR_AUTO);
	
	web_add_header("Origin", 
		"https://{BaseUrl}");
	
	web_reg_save_param("cp_stepsBody", "LB=null,\"data\":", "RB=}", "ORD=1", LAST);	
	
		
	web_custom_request("productdata_2", 
		"URL=https://{BaseUrl}/wcc-services/productdata", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cc\":\"au\",\"lc\":\"{p_lc}\",\"seriesoid\":\"{p_SeriesOid}\",\"modeloid\":null,\"isMobile\":false}", 
		LAST);
		
	lr_start_transaction("FP06_PrinterSetupSeries_09_api_ssr");
	web_url("{p_locale}", 
		//"URL=https://{BaseUrl}/wcc-services/printsetup/ssr/{p_locale}?oid={p_SeriesOid}&os=Windows%20NT%2010.0;%20Win64;%20x64&osbit=64&customOids=268161584258236861743175748903686,254133427475504699376875279529023,896860184511388392552387080656597,8954253", 
		"URL=https://{BaseUrl}/wcc-services/printsetup/ssr/{p_locale}?oid={p_SeriesOid}&os=Windows%20NT%2010.0;%20Win64;%20x64&osbit=64&userType=Anonymous&standardOids=18972,238445,1142650,8954252,8954253,11262035",
		"Resource=0",
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP06_PrinterSetupSeries_09_api_ssr", LR_AUTO);
	
	
	lr_start_transaction("FP06_PrinterSetupSeries_10_api_spos");
	
	web_url("{p_locale}_2", 
		//"URL=https://{BaseUrl}/wcc-services/printsetup/spos/{p_locale}?oid={p_SeriesOid}&os=Windows%20NT%2010.0;%20Win64;%20x64&osbit=64&customOids=268161584258236861743175748903686,254133427475504699376875279529023,896860184511388392552387080656597,8954253", 
		"URL=https://{BaseUrl}/wcc-services/printsetup/spos/{p_locale}?oid={p_SeriesOid}&os=Windows%20NT%2010.0;%20Win64;%20x64&osbit=64&userType=Anonymous&standardOids=18972,238445,1142650,8954252,8954253,11262035",
		"Resource=0",
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP06_PrinterSetupSeries_10_api_spos", LR_AUTO);
	
	web_add_auto_header("Origin", 
		"https://{BaseUrl}");

	lr_start_transaction("FP06_PrinterSetupSeries_11_api_steps");
	
	web_custom_request("steps", 
		"URL=https://{BaseUrl}/wcc-services/printsetup/steps", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cc\":\"au\",\"lc\":\"{p_lc}\",\"os\":\"Windows NT 10.0; Win64; x64\",\"selectedOs\":null,\"osbit\":\"64\",\"osTmsId\":null,\"osParentTmsId\":null,\"metaData\":{cp_stepsBody}},\"userType\":\"Anonymous\"}",
		LAST);

	lr_end_transaction("FP06_PrinterSetupSeries_11_api_steps", LR_AUTO);
	
	lr_start_transaction("FP06_PrinterSetupSeries_12_api_resources");
	
	web_custom_request("resources", 
		"URL=https://{BaseUrl}/wcc-services/printsetup/resources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cc\":\"au\",\"lc\":\"{p_lc}\",\"os\":\"Windows NT 10.0; Win64; x64\",\"selectedOs\":null,\"osbit\":\"64\",\"osTmsId\":null,\"osParentTmsId\":null,\"metaData\":{cp_stepsBody}},\"userType\":\"Anonymous\"}",
		LAST);

	lr_end_transaction("FP06_PrinterSetupSeries_12_api_resources", LR_AUTO);

			
	return 0;
}
