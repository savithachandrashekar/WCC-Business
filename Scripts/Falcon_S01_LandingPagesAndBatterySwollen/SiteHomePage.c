SiteHomePage()
{
	lr_start_transaction("FP01_SiteHome_01_doc");
	
	web_url("{p_locale}", 
		"URL=https://{BaseUrl}/{p_locale}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP01_SiteHome_01_doc",LR_AUTO);
	
	lr_start_transaction("FP01_SiteHome_02_api_wcc_sitehome_supportresources");
	
	web_url("wcc_sitehome_supportresources", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_supportresources", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
		
	lr_end_transaction("FP01_SiteHome_02_api_wcc_sitehome_supportresources",LR_AUTO);

	lr_start_transaction("FP01_SiteHome_03_api_wcc_second_Nav");
	
	web_url("wcc_second_Nav", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP01_SiteHome_03_api_wcc_second_Nav",LR_AUTO);
	
	lr_start_transaction("FP01_SiteHome_04_api_wcc_sitehome_rowicons");
	
	web_url("wcc_sitehome_rowicons", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_rowicons", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP01_SiteHome_04_api_wcc_sitehome_rowicons",LR_AUTO);
	
	
	lr_start_transaction("FP01_SiteHome_05_api_wcc_sitehome_producticons");
	
	web_url("wcc_sitehome_producticons", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_producticons", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP01_SiteHome_05_api_wcc_sitehome_producticons",LR_AUTO);
	
	lr_start_transaction("FP01_SiteHome_06_api_wcc_sitehome_carousel");
	
	web_url("wcc_sitehome_carousel",
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_carousel", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP01_SiteHome_06_api_wcc_sitehome_carousel",LR_AUTO);

	lr_start_transaction("FP01_SiteHome_07_api_region");
   
	web_custom_request("region", 
		"URL=https://{BaseUrl}/wcc-services/ssc/region", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	lr_end_transaction("FP01_SiteHome_07_api_region",LR_AUTO);
	
	lr_start_transaction("FP01_SiteHome_08_api_ssc-siteHome");

	web_url("siteHome", 
		"URL=https://{BaseUrl}/wcc-services/ssc/config/{p_locale}/siteHome", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP01_SiteHome_08_api_ssc-siteHome",LR_AUTO);
	
	lr_start_transaction("FP01_SiteHome_09_api_wcc_sitehome_tiles");

	web_url("wcc_sitehome_tiles", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_tiles", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP01_SiteHome_09_api_wcc_sitehome_tiles",LR_AUTO);
	
	lr_start_transaction("FP01_SiteHome_10_api_wcc_sitehome_alerts");

	web_url("wcc_sitehome_alerts", 
		"URL=https://{BaseUrl}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP01_SiteHome_10_api_wcc_sitehome_alerts",LR_AUTO);
	
	lr_start_transaction("FP01_SiteHome_11_New_api_href");

	web_url("siteHome_2", 
		"URL=https://{BaseUrl}/wcc-services/sitemap/href", 
		"Resource=0", 
		"RecContentType=application/json", 
		//"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP01_SiteHome_11_New_api_href",LR_AUTO);	
	
	lr_start_transaction("FP01_SiteHome_12_api_termbase-siteHome");

	web_url("siteHome_2", 
		"URL=https://{BaseUrl}/wcc-services/termbase/{p_locale}/siteHome", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP01_SiteHome_12_api_termbase-siteHome",LR_AUTO);

	
	return 0;
}
