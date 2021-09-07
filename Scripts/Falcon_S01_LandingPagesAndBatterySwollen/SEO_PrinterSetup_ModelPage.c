SEO_PrinterSetup_ModelPage()
{
	
	web_add_auto_header("User-Agent","googlebot");
	lr_start_transaction("Falcon_BP25_PrintSetupModelPage_13_doc_seo");

	web_url("ModelPageSEOCall", 
		"URL=https://{BaseUrl}/{p_locale}/printer-setup/{p_PrintersetupModel}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("Falcon_BP25_PrintSetupModelPage_13_doc_seo", LR_AUTO);
	web_revert_auto_header("User-Agent");
	
		
	return 0;
}

