ProductCategoryPrinter_L1()
{
	
	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");
	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");
		
	lr_start_transaction("FP14_ProductCategoryL1_01_doc");
	web_custom_request("{p_ProductCategory_L1}", 
		"URL=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L1}", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP14_ProductCategoryL1_01_doc", LR_AUTO);
	lr_think_time(1);
	
	web_add_auto_header("Sec-Fetch-Dest",
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP14_ProductCategoryL1_02_api_wcc-service-ssc");

	web_custom_request("productLanding_5", 
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}/{p_ProductCategory_L1}", 
		"Snapshot=t234.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP14_ProductCategoryL1_02_api_wcc-service-ssc", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP14_ProductCategoryL1_03_api_wcc_second_Nav");


	web_custom_request("wcc_second_Nav_3", 
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}/{p_ProductCategory_L1}", 
		"Snapshot=t235.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP14_ProductCategoryL1_03_api_wcc_second_Nav", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP14_ProductCategoryL1_04_api_region");

	web_custom_request("region_3", 
		"URL=https://{p_Host}/wcc-services/ssc/region", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}/{p_ProductCategory_L1}", 
		"Snapshot=t236.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP14_ProductCategoryL1_04_api_region", LR_AUTO);
	lr_think_time(1);

	lr_start_transaction("FP14_ProductCategoryL1_05_api_wcc_sitehome_alerts");

	web_custom_request("wcc_sitehome_alerts_3", 
		"URL=https://{p_Host}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}/{p_ProductCategory_L1}", 
		"Snapshot=t237.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP14_ProductCategoryL1_05_api_wcc_sitehome_alerts", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP14_ProductCategoryL1_06_api_termbase");

	web_custom_request("productLanding_6", 
		"URL=https://{p_Host}/wcc-services/termbase/{p_locale}/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}/{p_ProductCategory_L1}", 
		"Snapshot=t238.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP14_ProductCategoryL1_06_api_termbase", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP14_ProductCategoryL1_07_api_wcc_pfinder_common");

	web_custom_request("wcc_pfinder_common_3", 
		"URL=https://{p_Host}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}/{p_ProductCategory_L1}", 
		"Snapshot=t241.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP14_ProductCategoryL1_07_api_wcc_pfinder_common", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP14_ProductCategoryL1_08_api_wcc_products_banner");

	web_custom_request("wcc_products_banner_3", 
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_products_banner", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}/{p_ProductCategory_L1}", 
		"Snapshot=t242.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP14_ProductCategoryL1_08_api_wcc_products_banner", LR_AUTO);
	lr_think_time(1);

	web_add_auto_header("Origin", 
		"https://{p_Host}");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	
	lr_start_transaction("FP14_ProductCategoryL1_09_api_getProductCategoriesBySeoName");


	web_custom_request("getProductCategoriesBySeoName_2", 
		"URL=https://{p_Host}/wcc-services/prodcategory/getProductCategoriesBySeoName", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}/{p_ProductCategory_L1}", 
		"Snapshot=t244.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"callForRetiredProduct\":false,\"bookMarkURL\":\"{p_ProductCategory_L0}/{p_ProductCategory_L1}\",\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\"}", 
		LAST);
	
	lr_end_transaction("FP14_ProductCategoryL1_09_api_getProductCategoriesBySeoName", LR_AUTO);
	lr_think_time(1);
		
	lr_start_transaction("FP14_ProductCategoryL1_10_api_href");

	web_custom_request("href_2", 
		"URL=https://{p_Host}/wcc-services/sitemap/href", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}/{p_ProductCategory_L1}", 
		"Snapshot=t245.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"template\":\"ProductCategoryL1\",\"path\":\"/products/{p_ProductCategory_L0}/{p_ProductCategory_L1}\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	lr_end_transaction("FP14_ProductCategoryL1_10_api_href", LR_AUTO);
	lr_think_time(1);

	web_add_auto_header("User-Agent","googlebot");

	lr_start_transaction("FP14_ProductCategoryL1_11_seo");
	
	web_url("SEO_ProductCategoryL1", 
		"URL=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L1}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Host}/{p_locale}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP14_ProductCategoryL1_11_seo",LR_AUTO);
	
	web_revert_auto_header("User-Agent");

	return 0;
}
