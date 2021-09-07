SiteMapPage()
{

	lr_start_transaction("FP02_Sitemap_01_api_landing-xml");
	
	web_url("landing.xml", 
		"URL=https://{BaseUrl}/sitemapindex/landing.xml", 
		"Resource=0", 
		"RecContentType=application/xhtml+xml", 
		"Referer=", 
		"Snapshot=t73.inf", 
		LAST);
	
	lr_end_transaction("FP02_Sitemap_01_api_landing-xml", LR_AUTO);
	
	lr_start_transaction("FP02_Sitemap_02_api_home-0-xml");
	
	web_url("home-0.xml", 
		"URL=https://{BaseUrl}/sitemap/landing/home-0.xml", 
		"Resource=0", 
		"RecContentType=application/xhtml+xml", 
		"Referer=", 
		"Snapshot=t74.inf", 
		LAST);

	lr_end_transaction("FP02_Sitemap_02_api_home-0-xml", LR_AUTO);
	
	lr_start_transaction("FP02_Sitemap_03_api_computersupport-0-xml");
	
	web_url("computersupport-0.xml", 
		"URL=https://{BaseUrl}/sitemap/landing/computersupport-0.xml", 
		"Resource=0", 
		"RecContentType=application/xhtml+xml", 
		"Referer=", 
		"Snapshot=t75.inf", 
		LAST);

	lr_end_transaction("FP02_Sitemap_03_api_computersupport-0-xml", LR_AUTO);
	
	lr_start_transaction("FP02_Sitemap_04_api_printsupport-0-xml");
	
	web_url("printsupport-0.xml", 
		"URL=https://{BaseUrl}/sitemap/landing/printsupport-0.xml", 
		"Resource=0", 
		"RecContentType=application/xhtml+xml", 
		"Referer=", 
		"Snapshot=t76.inf", 
		LAST);

	lr_end_transaction("FP02_Sitemap_04_api_printsupport-0-xml", LR_AUTO);
	
	lr_start_transaction("FP02_Sitemap_05_api_printsetup-0-xml");
	
	web_url("printsetup-0.xml", 
		"URL=https://{BaseUrl}/sitemap/landing/printsetup-0.xml", 
		"Resource=0", 
		"RecContentType=application/xhtml+xml", 
		"Referer=", 
		"Snapshot=t77.inf", 
		LAST);

	lr_end_transaction("FP02_Sitemap_05_api_printsetup-0-xml", LR_AUTO);
	
	lr_start_transaction("FP02_Sitemap_06_api_contextual-xml");
	
	web_url("contextual.xml", 
		"URL=https://{BaseUrl}/sitemapindex/contextual.xml", 
		"Resource=0", 
		"RecContentType=application/xhtml+xml", 
		"Referer=", 
		"Snapshot=t78.inf", 
		LAST);

	lr_end_transaction("FP02_Sitemap_06_api_contextual-xml", LR_AUTO);
	
	lr_start_transaction("FP02_Sitemap_07_api_contextual-printsetup-0-xml");
	
	web_url("printsetup-0.xml_2", 
		"URL=https://{BaseUrl}/sitemap/contextual/printsetup-0.xml", 
		"Resource=0", 
		"RecContentType=application/xhtml+xml", 
		"Referer=", 
		"Snapshot=t79.inf", 
		LAST);

	lr_end_transaction("FP02_Sitemap_07_api_contextual-printsetup-0-xml", LR_AUTO);

	return 0;
}

