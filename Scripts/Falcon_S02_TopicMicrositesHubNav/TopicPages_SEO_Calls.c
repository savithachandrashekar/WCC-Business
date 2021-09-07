TopicPages_SEO_Calls()
{
	
	//Topic Landing Pages seo call
	web_add_auto_header("User-Agent","googlebot");
	lr_start_transaction("FP09_TopicLanding_10_seo");	
	web_url("{p_locale}", 
		"URL=https://{p_Host}/{p_locale}/topic", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);	
	lr_end_transaction("FP09_TopicLanding_10_seo", LR_AUTO);
	web_revert_auto_header("User-Agent");
	
	//AudioPage seo call
	web_add_auto_header("User-Agent","googlebot");
	lr_start_transaction("FP10_TopicAudioPages_13_seo");	
	web_url("{p_locale}", 
		"URL=https://{p_Host}/{p_locale}/topic/audio", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);	
	lr_end_transaction("FP10_TopicAudioPages_13_seo", LR_AUTO);
	web_revert_auto_header("User-Agent");
	
	
	//WifiPage seo call
	web_add_auto_header("User-Agent","googlebot");
	lr_start_transaction("FP11_TopicWirelessPages_13_seo");	
	web_url("{p_locale}", 
		"URL=https://{p_Host}/{p_locale}/topic/wireless-printing", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);	
	lr_end_transaction("FP11_TopicWirelessPages_13_seo", LR_AUTO);
	web_revert_auto_header("User-Agent");
		
	return 0;
}
