RemoteAssistance()
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

	web_reg_find("Text= Remote Assistance","SaveCount=Text_count",LAST);
	
	lr_start_transaction("FP19_RemoteAssistance_01_doc");

	web_url("remoteconnection", 
		"URL=https://{p_Host}/{p_locale}/remoteconnection", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP19_RemoteAssistance_01_doc", LR_AUTO);


	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP19_RemoteAssistance_02_api_termbaseAgentRemote");

	web_url("agentRemote", 
		"URL=https://{p_Host}/wcc-services/termbase/{p_locale}/agentRemote", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/remoteconnection", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP19_RemoteAssistance_02_api_termbaseAgentRemote", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP19_RemoteAssistance_03_api_region");

	web_url("region", 
		"URL=https://{p_Host}/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/remoteconnection", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP19_RemoteAssistance_03_api_region", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP19_RemoteAssistance_04_api_wcc-servicesAgentRemote");

	web_url("agentRemote_2",
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/agentRemote", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/remoteconnection", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP19_RemoteAssistance_04_api_wcc-servicesAgentRemote", LR_AUTO);
	lr_think_time(1);
	
	web_add_header("Origin", 
		"https://{p_Host}");
	
	lr_start_transaction("FP19_RemoteAssistance_05_api_href");

	web_custom_request("href", 
		"URL=https://{p_Host}/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/remoteconnection", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"RemoteAssistance\",\"path\":\"/remoteconnection\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	lr_end_transaction("FP19_RemoteAssistance_05_api_href", LR_AUTO);
	lr_think_time(1);
	
/*	web_add_auto_header("User-Agent","googlebot");

	lr_start_transaction("FP19_RemoteAssistance_06_SEO");
	
	web_url("ProductCategory", 
		"URL=https://{p_Host}/{p_locale}/remoteconnection", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Host}/{p_locale}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP19_RemoteAssistance_06_SEO);
	
	web_revert_auto_header("User-Agent");*/

	return 0;
}