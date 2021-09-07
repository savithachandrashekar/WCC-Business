ProductCategoryPrinter_L0()
{

	web_add_header("Sec-Fetch-Site", 
		"none");
	web_add_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	

	lr_start_transaction("FP13_ProductCategoryL0_01_doc");

	web_custom_request("{p_ProductCategory_L0}", 
		"URL=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP13_ProductCategoryL0_01_doc", LR_AUTO);
	lr_think_time(1);
	
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP13_ProductCategoryL0_02_api_region");

	web_custom_request("region_2", 
		"URL=https://{p_Host}/wcc-services/ssc/region", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP13_ProductCategoryL0_02_api_region", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP13_ProductCategoryL0_03_api_termbase");

	web_custom_request("productLanding_3", 
		"URL=https://{p_Host}/wcc-services/termbase/{p_locale}/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP13_ProductCategoryL0_03_api_termbase", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP13_ProductCategoryL0_04_api_wcc-service-ssc");

	web_custom_request("productLanding_4", 
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP13_ProductCategoryL0_04_api_wcc-service-ssc", LR_AUTO);
	lr_think_time(1);
	
	
	lr_start_transaction("FP13_ProductCategoryL0_05_api_wcc_second_Nav");

	web_custom_request("wcc_second_Nav_2", 
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP13_ProductCategoryL0_05_api_wcc_second_Nav", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP13_ProductCategoryL0_06_api_wcc_sitehome_alerts");

	web_custom_request("wcc_sitehome_alerts_2", 
		"URL=https://{p_Host}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP13_ProductCategoryL0_06_api_wcc_sitehome_alerts", LR_AUTO);
	lr_think_time(1);

	
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP13_ProductCategoryL0_07_api_wcc_pfinder_common");

	web_custom_request("wcc_pfinder_common_2", 
		"URL=https://{p_Host}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP13_ProductCategoryL0_07_api_wcc_pfinder_common", LR_AUTO);
	lr_think_time(1);
	
	web_add_header("Origin", 
		"https://{p_Host}");
	
	lr_start_transaction("FP13_ProductCategoryL0_08_api_getProductCategoriesBySeoName");

	web_custom_request("getProductCategoriesBySeoName", 
		"URL=https://{p_Host}/wcc-services/prodcategory/getProductCategoriesBySeoName", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"callForRetiredProduct\":false,\"bookMarkURL\":\"{p_ProductCategory_L0}\",\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\"}", 
		LAST);
	lr_end_transaction("FP13_ProductCategoryL0_08_api_getProductCategoriesBySeoName", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP13_ProductCategoryL0_09_api_wcc_products_banner");

	web_custom_request("wcc_products_banner_2", 
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_products_banner", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP13_ProductCategoryL0_09_api_wcc_products_banner", LR_AUTO);
	lr_think_time(1);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://{p_Host}");
	
	lr_start_transaction("FP13_ProductCategoryL0_10_api_href");

	web_custom_request("href", 
		"URL=https://{p_Host}/wcc-services/sitemap/href", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"template\":\"ProductCategoryL0\",\"path\":\"/products/{p_ProductCategory_L0}\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	lr_end_transaction("FP13_ProductCategoryL0_10_api_href", LR_AUTO);
	lr_think_time(1);
	
	web_add_auto_header("User-Agent","googlebot");

	lr_start_transaction("FP13_ProductCategoryL0_11_seo");
	
	web_url("SEO_ProductCategoryL0", 
		"URL=https://{p_Host}/{p_locale}/products/{p_ProductCategory_L0}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Host}/{p_locale}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP13_ProductCategoryL0_11_seo",LR_AUTO);
	
	web_revert_auto_header("User-Agent");

	return 0;
}
