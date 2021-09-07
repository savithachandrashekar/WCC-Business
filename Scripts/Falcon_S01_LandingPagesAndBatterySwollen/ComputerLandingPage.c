ComputerLandingPage()
{
	lr_start_transaction("FP03_ComputerLanding_01_doc");
		
	web_url("computer", 
		"URL=https://{BaseUrl}/{p_locale}/computer", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP03_ComputerLanding_01_doc",LR_AUTO);
	
	lr_start_transaction("FP03_ComputerLanding_02_api_href");
	web_url("web_url",
		"URL=https://{BaseUrl}/wcc-services/sitemap/href",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Mode=HTML",
		LAST);
	
	lr_end_transaction("FP03_ComputerLanding_02_api_href",LR_AUTO);
	
	
	lr_start_transaction("FP03_ComputerLanding_03_api_termbase-computerLanding");
		
	web_url("computerLanding", 
		"URL=https://{BaseUrl}/wcc-services/termbase/{p_locale}/computerLanding", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/computer", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP03_ComputerLanding_03_api_termbase-computerLanding",LR_AUTO);
	
	
	
	lr_start_transaction("FP03_ComputerLanding_04_api_region");
	web_url("web_url",
		"URL=https://{BaseUrl}/wcc-services/sitemap/href",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Mode=HTML",
		LAST);
	
	lr_end_transaction("FP03_ComputerLanding_04_api_region",LR_AUTO);
		
	lr_start_transaction("FP03_ComputerLanding_05_api_ssc-computerLanding");
		
	web_url("printerLanding", 
		"URL=https://{BaseUrl}/wcc-services/ssc/config/{p_locale}/computerLanding", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP03_ComputerLanding_05_api_ssc-computerLanding",LR_AUTO);
	

	lr_start_transaction("FP03_ComputerLanding_06_api_wcc_second_Nav");
	
	web_url("wcc_second_Nav_2", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}/computer", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP03_ComputerLanding_06_api_wcc_second_Nav",LR_AUTO);
	

	lr_start_transaction("FP03_ComputerLanding_07_api_wcc_sitehome_alerts");
	
		web_url("wcc_sitehome_alerts", 
		//"URL=https://{BaseUrl}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"URL=https://{BaseUrl}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"Resource=0",
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/computer", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP03_ComputerLanding_07_api_wcc_sitehome_alerts",LR_AUTO);
		
	
	lr_start_transaction("FP03_ComputerLanding_08_api_wcc_sitehome_producticons");
	
	web_url("wcc_sitehome_producticons", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_producticons", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/computer", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP03_ComputerLanding_08_api_wcc_sitehome_producticons",LR_AUTO);
	
	
	lr_start_transaction("FP03_ComputerLanding_09_api_wcc_land_comp_primaryoptions");
	
	web_url("wcc_land_comp_primaryoptions", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_land_comp_primaryoptions", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/computer", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP03_ComputerLanding_09_api_wcc_land_comp_primaryoptions",LR_AUTO);
	
	
	lr_start_transaction("FP03_ComputerLanding_10_api_wcc_pfinder_common");
	
	web_url("wcc_sitehome_producticons_2", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=Computer_Landing_New", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/computer", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);
	 
	lr_end_transaction("FP03_ComputerLanding_10_api_wcc_pfinder_common",LR_AUTO);
	  
	
	lr_start_transaction("FP03_ComputerLanding_11_api_wcc_land_comp_carousel");
	
	web_url("wcc_land_comp_carousel", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_land_comp_carousel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/computer", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);
	  
	lr_end_transaction("FP03_ComputerLanding_11_api_wcc_land_comp_carousel",LR_AUTO);
	
	
	lr_start_transaction("FP03_ComputerLanding_12_api_wcc_land_comp_banner");
	  
	web_url("wcc_land_comp_banner", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_land_comp_banner", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/computer", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP03_ComputerLanding_12_api_wcc_land_comp_banner",LR_AUTO);

	
	lr_start_transaction("FP03_ComputerLanding_13_api_wcc_land_comp_topicoptions");
		
	web_url("wcc_land_comp_topicoptions", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_land_comp_topicoptions", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/computer", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP03_ComputerLanding_13_api_wcc_land_comp_topicoptions",LR_AUTO);


	return 0;
}
