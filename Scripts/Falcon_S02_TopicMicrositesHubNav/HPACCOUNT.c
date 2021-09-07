HPACCOUNT()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	web_add_auto_header("Sec-Fetch-Site", 
		"none");
	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("FP08_Microsites_09_HpAccount_doc");
	web_url("hp-account", 
		"URL=https://{p_Host}/{p_locale}/help/hp-account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en_7",
		"URL=https://{p_Host}/hp-pps-services/videos/playlist/NaN/cc/{p_Region}/lc/{p_lc}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/help/hp-account", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP08_Microsites_09_HpAccount_doc",LR_AUTO);
	lr_think_time(1);
	
	return 0;
}