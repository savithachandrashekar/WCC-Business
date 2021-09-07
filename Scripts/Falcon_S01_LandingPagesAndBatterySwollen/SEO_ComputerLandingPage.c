SEO_ComputerLandingPage()
{
	
	
	web_add_auto_header("User-Agent","googlebot");

	lr_start_transaction("FP03_ComputerLanding_14_seo");
	
	web_url("ComputerLandingPageSeoCall", 
		"URL=https://{BaseUrl}/{p_locale}/computer", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP03_ComputerLanding_14_seo",LR_AUTO);
	web_revert_auto_header("User-Agent");
	
	lr_think_time(1);
	return 0;
}