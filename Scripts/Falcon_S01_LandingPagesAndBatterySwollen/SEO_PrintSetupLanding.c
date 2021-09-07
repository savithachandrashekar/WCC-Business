SEO_PrintSetupLanding()
{
	
	web_add_auto_header("User-Agent","googlebot");
	lr_start_transaction("FP05_PrinterSetupLanding_11_seo");
	
	web_url("printer-setup", 
		"URL=https://{BaseUrl}/{p_locale}/printer-setup", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP05_PrinterSetupLanding_11_seo", LR_AUTO);
	web_revert_auto_header("User-Agent");
	
	return 0;
}
