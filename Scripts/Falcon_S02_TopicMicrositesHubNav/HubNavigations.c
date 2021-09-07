HubNavigations()
{
	web_set_sockets_option("SSL_VERSION","TLS1.2");
	
	web_add_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");
	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_reg_find("Text=Troubleshooting", "SaveCount=Text_count", LAST);

	lr_start_transaction("FP18_HUBNavigation_01_doc");

	web_custom_request("navigation",
		"URL=https://{p_Host}/hp-pps-services/hub/navigation?h_product={p_product}&h_client=S-A-10020-1&h_lang={p_lc}&h_cc={p_Region}&h_pagetype={p_Pagetype}", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{p_Host}/", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP18_HUBNavigation_01_doc", LR_AUTO);
	lr_think_time(1);
	
/*	web_add_auto_header("User-Agent","googlebot");
	lr_start_transaction("FP18_HUBNavigation_02_SEO");

	web_custom_request("navigation",
		"URL=https://{p_Host}/hp-pps-services/hub/navigation?h_product={p_product}&h_client=S-A-10020-1&h_lang=en&h_cc=us&h_pagetype={p_Pagetype}", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{p_Host}/", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP18_HUBNavigation_02_SEO", LR_AUTO);
	web_revert_auto_header("User-Agent");*/
	return 0;
}
