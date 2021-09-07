PrinterLandingPage()
{
	lr_start_transaction("FP04_PrinterLanding_01_doc");

	web_url("printer", 
		"URL=https://{BaseUrl}/{p_locale}/printer", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP04_PrinterLanding_01_doc",LR_AUTO);


	lr_start_transaction("FP04_PrinterLanding_02_api_ssc-printerLanding");  
	
	web_url("printerLanding", 
		"URL=https://{BaseUrl}/wcc-services/ssc/config/{p_locale}/printerLanding", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
 
	lr_end_transaction("FP04_PrinterLanding_02_api_ssc-printerLanding",LR_AUTO);
	 
	 //"statusCode":200,"statusMessage":null,"data":{"imageUri":"https://ssl-product-images.www8-hp.com/digmedialib/prodimg/lowres/c05553372.png","thumbnailUri":null,"supportSubcategoryOid":1142650,"productNumberOid":11262037,"productLineCode":"2N","audience":"HHO","productNumber":"J9V90A","productNameOid":11262035,"productName":"HP DeskJet 3755 All-in-One Printer","productSeriesOid":8954253,"productBigSeriesOid":8954252,"serialNumber":null,"productPlatform":"Lhasa","productSeriesName":"HP DeskJet 3700 All-in-One Printer series","productSeriesSEOName":"hp-deskjet-3700-all-in-one-printer-series","seriesLevelAudienceFlag":"Consumer","seriesLevelActiveWebSupport":true,"seriesLevelHistorical":false,"modelLevelAudienceFlag":"HHO","modelLevelActiveWebSupport":true,"modelLevelHistorical":false,"nonSerializedFlag":null,"printSetupEligible":true,"seriesContext":false,"modelContext":true,"chatbot":true,"customHierarchySet":["268161584258236861743175748903686","254133427475504699376875279529023","896860184511388392552387080656597","8954253"],"redirectUrl":null,"customResourceOids":[11262035,8954253],"standardHierarchySet":[18972,238445,1142650,8954252,8954253,11262035]}}
	
	lr_start_transaction("FP04_PrinterLanding_03_api_termbase-printerLanding");  
	
	web_url("printerLanding_2", 
		"URL=https://{BaseUrl}/wcc-services/termbase/{p_locale}/printerLanding", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
 
	lr_end_transaction("FP04_PrinterLanding_03_api_termbase-printerLanding",LR_AUTO);
	
	 
	lr_start_transaction("FP04_PrinterLanding_04_api_wcc_second_Nav");
	 
	web_url("wcc_second_Nav_3", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseUrl}/{p_locale}/printer", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP04_PrinterLanding_04_api_wcc_second_Nav",LR_AUTO);
	 
	 
	
	lr_start_transaction("FP04_PrinterLanding_05_api_wcc_land_print_primaryoptions");
	
	web_url("wcc_land_print_primaryoptions", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_land_print_primaryoptions", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);
	 
	lr_end_transaction("FP04_PrinterLanding_05_api_wcc_land_print_primaryoptions",LR_AUTO);
	 
	
	lr_start_transaction("FP04_PrinterLanding_06_api_wcc_sitehome_producticons");
	
	web_url("wcc_sitehome_producticons_3", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_producticons", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP04_PrinterLanding_06_api_wcc_sitehome_producticons",LR_AUTO);
	
	

	lr_start_transaction("FP04_PrinterLanding_07_api_wcc_land_print_carousel");
	
	web_url("wcc_land_print_carousel", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_land_print_carousel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP04_PrinterLanding_07_api_wcc_land_print_carousel",LR_AUTO);
 
 
	
	lr_start_transaction("FP04_PrinterLanding_08_api_wcc_land_print_banner");

	web_url("wcc_land_print_banner", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_land_print_banner", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP04_PrinterLanding_08_api_wcc_land_print_banner",LR_AUTO);
	
	
	
	lr_start_transaction("FP04_PrinterLanding_09_api_wcc_land_print_topicoptions");
	
	web_url("wcc_land_print_topicoptions", 
		"URL=https://{BaseUrl}/wcc-services/cms-v2/{p_locale}/wcc_land_print_topicoptions", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP04_PrinterLanding_09_api_wcc_land_print_topicoptions",LR_AUTO);
	
	
	
	lr_start_transaction("FP04_PrinterLanding_10_api_wcc_sitehome_alerts");
	
		web_url("wcc_sitehome_alerts", 
		//"URL=https://{BaseUrl}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts",
		"URL=https://{BaseUrl}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts",		
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}/printer", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP04_PrinterLanding_10_api_wcc_sitehome_alerts",LR_AUTO);
	
	
	lr_start_transaction("FP04_PrinterLanding_11_api_region");

	web_url("region", 
		"URL=https://{BaseUrl}/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP04_PrinterLanding_11_api_region",LR_AUTO);
	
	lr_start_transaction("FP04_PrinterLanding_12_api_href");

	web_url("href", 
		"URL=https://{BaseUrl}/wcc-services/sitemap/href", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseUrl}/{p_locale}", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP04_PrinterLanding_12_api_href",LR_AUTO);

	
	return 0;
}
