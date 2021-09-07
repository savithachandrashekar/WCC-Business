SCLService()
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
		"URL=https://{p_Url}/{p_locale}/service-center", 
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
		"https://{p_Url}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	lr_start_transaction("FP26_ServiceCenter_02_Filters");


	web_custom_request("filters", 
		"URL=https://{p_Url}/external/service/scl/filters", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Url}/{p_locale}/service-center", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"UseCase\":\"WSP\",\"CountryCd\":\"{p_Region}\",\"Language\":\"{p_Langauge}\",\"FilterCdGroup\":\"\",\"ProductLine\":null}", 
		LAST);

	lr_end_transaction("FP26_ServiceCenter_02_Filters", LR_AUTO);

	web_revert_auto_header("Origin");
	web_revert_auto_header("X-Requested-With");
	web_add_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");
	web_add_header("sec-ch-ua-mobile", 
		"?0");

	lr_start_transaction("FP26_ServiceCenter_03_countries");

	web_custom_request("countries", 
		"URL=https://{p_Url}/external/service/scl/countries", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Url}/{p_locale}/service-center", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"UseCase\":\"WSP\",\"CountryCd\":\"{p_Region}\",\"Language\":\"{p_Langauge}\",\"FilterCdGroup\":\"\",\"ProductLine\":null}", 
		LAST);

	lr_end_transaction("FP26_ServiceCenter_03_countries", LR_AUTO);


	return 0;
}