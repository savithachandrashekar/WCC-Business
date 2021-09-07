ServiceCenter()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");
	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_start_transaction("FP26_ServiceCenter_01_doc");

	web_url("service-center", 
		"URL=https://{p_Host}/{p_locale}/service-center", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP26_ServiceCenter_01_doc", LR_AUTO);


	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_revert_auto_header("sec-ch-ua");
	web_revert_auto_header("sec-ch-ua-mobile");
	web_add_auto_header("Origin", 
		"https://{p_Host}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	lr_start_transaction("FP26_ServiceCenter_02_api_Filters");


	web_custom_request("filters", 
		"URL=https://{p_Host}/external/service/scl/filters", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/service-center", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"UseCase\":\"WSP\",\"CountryCd\":\"us\",\"Language\":\"en-US\",\"FilterCdGroup\":\"\",\"ProductLine\":null}", 
		LAST);

	lr_end_transaction("FP26_ServiceCenter_02_api_Filters", LR_AUTO);

	web_revert_auto_header("Origin");
	web_revert_auto_header("X-Requested-With");
	web_add_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");
	web_add_header("sec-ch-ua-mobile", 
		"?0");

	lr_start_transaction("FP26_ServiceCenter_03_api_countries");

	web_custom_request("countries", 
		"URL=https://{p_Host}/external/service/scl/countries", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/service-center", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"UseCase\":\"WSP\",\"CountryCd\":\"us\",\"Language\":\"en-US\",\"FilterCdGroup\":\"\",\"ProductLine\":null}", 
		LAST);

	lr_end_transaction("FP26_ServiceCenter_03_api_countries", LR_AUTO);
	
	
	
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_start_transaction("FP26_ServiceCenter_04_api_centers");
	web_custom_request("centers", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/external/service/scl/centers", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t255.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"UseCase\":\"WSP\",\"DateTime\":\"\",\"Offset\":\"\",\"UseRequestTime\":0,\"PrevSeq\":0,\"CountryCd\":\"IN\",\"Language\":\"en\",\"ProductNameOID\":0,\"Name\":null,\"Address\":\"560084\",\"Latitude\":0,\"Longitude\":0,\"FilterValueCdgroup\":\"BPC\",\"NbMax\":\"50\",\"Radius\":\"50\"}", 
		LAST);
	lr_end_transaction("FP26_ServiceCenter_04_api_centers", LR_AUTO);

	
	return 0;
}
