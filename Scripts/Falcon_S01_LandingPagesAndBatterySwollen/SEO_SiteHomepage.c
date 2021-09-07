SEO_SiteHomepage()
{
	web_add_auto_header("User-Agent","googlebot");
	lr_start_transaction("FP01_SiteHome_13_seo");
	web_url("{p_locale}", 
		"URL=https://{BaseUrl}/{p_locale}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP01_SiteHome_13_seo",LR_AUTO);
	
	web_revert_auto_header("User-Agent");
	
	return 0;
}
