AEM_MicrositePages()
{
	//All AEM URL are included
	//HPCareSupport_PrintScanFax new URL's added to this AEM scripts after May 15th Run its included
	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	web_add_auto_header("Sec-Fetch-Site", 
		"none");
	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_start_transaction("FP08_Microsites_01_WindowsSupportCenter_doc");
	web_url("windows-10-support-center", 
		"URL=https://{p_Host}/{p_locale}/help/windows-10-support-center", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en", 
		"URL=https://{p_Host}/hp-pps-services/videos/playlist/NaN/cc/{p_Region}/lc/{p_lc}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/help/windows-10-support-center", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		LAST);

	
	lr_end_transaction("FP08_Microsites_01_WindowsSupportCenter_doc",LR_AUTO);
	lr_think_time(1);
	
	web_revert_auto_header("Origin");
	web_add_auto_header("Sec-Fetch-Site", 
		"none");
	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_start_transaction("FP08_Microsites_02_WindowsSupportCenterComputing_doc");
	web_url("windows-10-support-center-computing", 
		"URL=https://{p_Host}/{p_locale}/help/windows-10-support-center-computing", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP08_Microsites_02_WindowsSupportCenterComputing_doc",LR_AUTO);
	lr_think_time(1);
	
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_start_transaction("FP08_Microsites_03_WindowsSupportCenterPrinting_doc");
	web_url("windows-10-support-center-printing", 
		"URL=https://{p_Host}/{p_locale}/help/windows-10-support-center-printing", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		LAST);
		
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en_3", 
		"URL=https://{p_Host}/hp-pps-services/videos/playlist/5700627822001/cc/{p_Region}/lc/{p_lc}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/help/windows-10-support-center-printing", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP08_Microsites_03_WindowsSupportCenterPrinting_doc",LR_AUTO);
	lr_think_time(1);

	
	web_add_auto_header("Sec-Fetch-Site", 
		"none");
	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");
	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");


	lr_start_transaction("FP08_Microsites_04_PrintingProblems_doc");
	web_url("printscandoctor-printing-problems", 
			"URL=https://{p_Host}/{p_locale}/help/printscandoctor-printing-problems", 
			"TargetFrame=", 
			"Resource=0", 
			"RecContentType=text/html", 
			"Referer=", 
			"Snapshot=t148.inf", 
			"Mode=HTML", 
			LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en_5", 
		"URL=https://{p_Host}/hp-pps-services/videos/playlist/NaN/cc/{p_Region}/lc/{p_lc}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/help/printscandoctor-printing-problems", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP08_Microsites_04_PrintingProblems_doc",LR_AUTO);
	lr_think_time(1);
	
	web_revert_auto_header("Origin");
	web_revert_auto_header("Sec-Fetch-Dest");
	web_add_header("Sec-Fetch-Dest", 
		"document");
	web_revert_auto_header("Sec-Fetch-Mode");
	web_add_header("Sec-Fetch-Mode", 
		"navigate");
	web_revert_auto_header("Sec-Fetch-Site");
	web_add_header("Sec-Fetch-Site", 
		"none");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_start_transaction("FP08_Microsites_05_PrintScanDoctor_doc");
	web_url("printscandoctor", 
		"URL=https://{p_Host}/{p_locale}/help/printscandoctor", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site",
		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en_4", 
		"URL=https://{p_Host}/hp-pps-services/videos/playlist/NaN/cc/{p_Region}/lc/{p_lc}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/help/printscandoctor", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP08_Microsites_05_PrintScanDoctor_doc",LR_AUTO);
	lr_think_time(1);
	
	web_add_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_header("Sec-Fetch-Site", 
		"none");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");
	web_add_header("sec-ch-ua-mobile", 
		"?0");
	
	lr_start_transaction("FP08_Microsites_06_ScaningProblems");
	web_url("printscandoctor-scanning-problems", 
		"URL=https://{p_Host}/{p_locale}/help/printscandoctor-scanning-problems", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);


	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en_6", 
		"URL=https://{p_Host}/hp-pps-services/videos/playlist/NaN/cc/{p_Region}/lc/{p_lc}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/help/printscandoctor-scanning-problems", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP08_Microsites_06_ScaningProblems",LR_AUTO);
	lr_think_time(1);
	
	
	
	//HPCareSupport and PrintScanFax new URL's added to this Microsites scripts after May 15th Run its included
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	//HP Care Support Options Flow
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

	lr_start_transaction("FP08_Microsites_07_HPCareSupportOptions_doc");
	web_url("hpcare-support-options", 
		"URL=https://{p_Host}/au-en/help/hpcare-support-options", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t215.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("wcc_sitehome_alerts", 
		"URL=https://{p_Host}/wcc-services/cms/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Host}/au-en/help/hpcare-support-options", 
		"Snapshot=t220.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP08_Microsites_07_HPCareSupportOptions_doc", LR_AUTO);
	lr_think_time(1);
		
	//Print Scan Fax Flow
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

	lr_start_transaction("FP08_Microsites_08_PrintScanFax_doc");
	web_url("how-to-print-scan-fax", 
		"URL=https://{p_Host}/{p_locale}/help/how-to-print-scan-fax", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_url("wcc_sitehome_alerts", 
		"URL=https://{p_Host}/wcc-services/cms/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Host}/{p_locale}/help/how-to-print-scan-fax", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP08_Microsites_08_PrintScanFax_doc", LR_AUTO);
	lr_think_time(1);
	
	return 0;
}
