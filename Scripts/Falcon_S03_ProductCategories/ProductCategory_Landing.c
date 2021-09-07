ProductCategory_Landing()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	web_add_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");
	web_add_header("sec-ch-ua-mobile", 
		"?0");
	

	lr_start_transaction("FP12_ProductCategoryLanding_01_doc");

	web_custom_request("products", 
		"URL=https://{p_Host}/{p_locale}/products", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP12_ProductCategoryLanding_01_doc", LR_AUTO);
	lr_think_time(1);

	lr_start_transaction("FP12_ProductCategoryLanding_02_api_wcc-service-ssc");

	web_custom_request("productLanding", 
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP12_ProductCategoryLanding_02_api_wcc-service-ssc", LR_AUTO);
	lr_think_time(1);
	
	web_add_auto_header("Sec-Fetch-Mode",
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	
	lr_start_transaction("FP12_ProductCategoryLanding_03_api_region");

	web_custom_request("region", 
		"URL=https://{p_Host}/wcc-services/ssc/region", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);
	lr_end_transaction("FP12_ProductCategoryLanding_03_api_region", LR_AUTO);
	lr_think_time(1);
	
	web_add_auto_header("Sec-Fetch-Mode",
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	
	lr_start_transaction("FP12_ProductCategoryLanding_04_api_Termbase");


	web_custom_request("productLanding_2", 
		"URL=https://{p_Host}/wcc-services/termbase/{p_locale}/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP12_ProductCategoryLanding_04_api_Termbase", LR_AUTO);
	lr_think_time(1);

	lr_start_transaction("FP12_ProductCategoryLanding_05_api_wcc_second_Nav");

	web_custom_request("wcc_second_Nav", 
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		LAST);
	
	lr_end_transaction("FP12_ProductCategoryLanding_05_api_wcc_second_Nav", LR_AUTO);
	lr_think_time(1);

	lr_start_transaction("FP12_ProductCategoryLanding_06_api_wcc_pfinder_common");

	web_custom_request("wcc_pfinder_common", 
		"URL=https://{p_Host}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);
	
	lr_end_transaction("FP12_ProductCategoryLanding_06_api_wcc_pfinder_common", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP12_ProductCategoryLanding_07_api_wcc_sitehome_alerts");

	web_custom_request("wcc_sitehome_alerts", 
		"URL=https://{p_Host}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		LAST);
	
	lr_end_transaction("FP12_ProductCategoryLanding_07_api_wcc_sitehome_alerts", LR_AUTO);
	lr_think_time(1);

	
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	lr_start_transaction("FP12_ProductCategoryLanding_08_api_wcc_products_banner");

	web_custom_request("wcc_products_banner", 
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_products_banner", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP12_ProductCategoryLanding_08_api_wcc_products_banner", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP12_ProductCategoryLanding_09_api_wcc_products_category");


	web_custom_request("wcc_products_category", 
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_products_category", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP12_ProductCategoryLanding_09_api_wcc_products_category", LR_AUTO);
	lr_think_time(1);
	
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_start_transaction("FP12_ProductCategoryLanding_10_api_active-products");

	web_custom_request("active-products", 
		"URL=https://{p_Host}/wcc-services/prodcategory/{p_locale}/active-products", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/products", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FP12_ProductCategoryLanding_10_api_active-products", LR_AUTO);
	lr_think_time(1);
	
/*	web_add_auto_header("User-Agent","googlebot");

	lr_start_transaction("FP12_ProductCategory_11_seo");
	
	web_url("SEO_ProductCategory", 
		"URL=https://{p_Host}/{p_locale}/products", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Host}/{p_locale}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP12_ProductCategory_11_seo",LR_AUTO);
	
	web_revert_auto_header("User-Agent");
	lr_think_time(1);*/
	
	

	return 0;
}
