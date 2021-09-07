SEO_PrinterLandingPage()
{
	
	
	web_add_auto_header("User-Agent","googlebot");
	
	lr_start_transaction("FP04_PrinterLanding_13_seo");

	web_url("PrinterLandingPageSeoCall", 
		"URL=https://{BaseUrl}/{p_locale}/printer", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP04_PrinterLanding_13_seo",LR_AUTO);
	web_revert_auto_header("User-Agent");

	lr_think_time(1);
	return 0;
}
