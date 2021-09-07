SSOChecks()
{
	lr_start_transaction("FP01_SSOChecks_01_Get");
	web_custom_request("sso_check_2", 
		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);
	
	
	lr_end_transaction("FP01_SSOChecks_01_Get", LR_AUTO);
	
	lr_start_transaction("FP01_SSOChecks_02_Options");
	
	web_custom_request("sso_check", 
		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP01_SSOChecks_02_Options", LR_AUTO);
	
	return 0;
}
