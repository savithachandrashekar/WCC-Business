Login()
{

	web_cache_cleanup();
	web_cleanup_cookies();
	web_set_sockets_option("SSL_VERSION","TLS1.2");
	web_set_max_html_param_len("666666");
	
	lr_start_transaction("FP00_Login_01_ProductsPage");
	web_url("{p_locale}", 
		"URL=https://{BaseURL}/{p_locale}/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
		
	lr_end_transaction("FP00_Login_01_ProductsPage",LR_AUTO);
	
	
	
	web_reg_save_param("cp_auth1","LB=v1/authentication/login/","RB=&country",LAST);

	lr_start_transaction("FP00_Login_02_ClickOnSigninButton");
	
	web_url("login", 
		//"URL=https://{BaseURL}/hp-pps-services/auth/login?cc={p_Region}&lc={p_lc}&pageurl=https://{BaseURL}/{p_locale}", 
		"URL=https://{BaseURL}/hp-pps-services/auth/login?cc={p_Region}&lc={p_lc}&pageurl=https://{BaseURL}/{p_locale}", 
		"TargetFrame=",
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP00_Login_02_ClickOnSigninButton", LR_AUTO);
     
     
     
    web_reg_save_param("cp_auth2","LB=v1/authentication/login/","RB=\"},\"followUp",LAST);
     
    web_reg_save_param("cp_auth3","LB=v1/oauth/authorize/","RB=\"},\"client",LAST);

	web_reg_save_param("cp_flowhandler","LB=Recovery%20Flow%20Handler/","RB=\"}",LAST);
		
	web_reg_save_param("cp_captchaKey","LB=captchaKey\":\"","RB=\"",LAST);
	
	web_reg_save_param("cp_recaptchaKey","LB=recaptchaKey\":\"","RB=\",\"status",LAST);
	
	web_reg_save_param("cp_captchaImage","LB=captchaImage\":\"","RB=\",\"required",LAST);

	lr_start_transaction("FP00_Login_03_EnterCredentialsClickSignin");
	
	web_url("AWc7nCRAeesaa3d7C6NSzroEywK1AAAAAAAAAADo4w0eYLbe13ARNBQn2HMo8tvrKxQDK9CfKGovc77XKYrEP933Sl8fPfjW2KoMgg3_uOTOGbKb8IdVxl7Z-IX7ZW69gRaSnbshhqzRxMLV2cWp_XSsnqx98awe7roV3dR69tD0KJFY3Perj9whSUBAbEX3qfYj3Y1mQt73HkGasVq8E9auoI9apdlR6zm2-9FqqjRQWBUlyNS-dQ3Zs_GzasTu",
		"URL=https://directory.stg.cd.id.hp.com/directory/v1/authentication/login/"
		"{cp_auth1}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://login.stg.cd.id.hp.com/login-ui?flow=https://directory.stg.cd.id.hp.com/directory/v1/authentication/login/"
		"{cp_auth1}"
		"NXoOjR&country=US", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("AWc7nCRAeesaa3d7C6NSzroEywK1AAAAAAAAAADo4w0eYLbe13ARNBQn2HMo8tvrKxQDK9CfKGovc77XKSuCYAeeKw5lCRKJro5DeVz_uOTOGbKb8IdVxl7Z-IX7ZW69gRaSnbshhqzRxMLV2cWp_XSsnqx98awe7roV3dR69tD0KJFY3Perj9whSUBAbEX3qfYj3Y1mQt73HkGasVq8E9auoI9apdlR6zm2-9FqqjRQWBUlyNS-dQ3Zs_GzasTu", 
		"URL=https://directory.stg.cd.id.hp.com/directory/v1/authentication/login/"
		"{cp_auth2}", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://login.stg.cd.id.hp.com/login-ui?flow=https://directory.stg.cd.id.hp.com/directory/v1/authentication/login/"
		"{cp_auth1}"
		"&country=US", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Content-Type","application/json;charset=UTF-8");

	web_custom_request("AWc7nCRAeesaa3d7C6NSzroEywK1AAAAAAAAAADo4w0eYLbe13ARNBQn2HMo8tvrKxQDK9CfKGovc77XKSuCYAeeKw5lCRKJro5DeVz_uOTOGbKb8IdVxl7Z-IX7ZW69gRaSnbshhqzRxMLV2cWp_XSsnqx98awe7roV3dR69tD0KJFY3Perj9whSUBAbEX3qfYj3Y1mQt73HkGasVq8E9auoI9apdlR6zm2-9FqqjRQWBUlyNS-dQ3Zs_GzasTu_2", 
		"URL=https://directory.stg.cd.id.hp.com/directory/v1/authentication/login/"
		"{cp_auth2}", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://login.stg.cd.id.hp.com/login-ui?flow=https://directory.stg.cd.id.hp.com/directory/v1/authentication/login/"
		"{cp_auth1}"
		"&country=US", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"Body={\"schemas\":[\"urn:pingidentity:scim:api:messages:2.0:AuthenticationRequest\"],\"meta\":{\"resourceType\":\"login\",\"location\":\"https://directory.stg.cd.id.hp.com/directory/v1/authentication/login/"
		"{cp_auth2}"
		"\"},\"followUp\":{\"type\":\"authorize\",\"$ref\":\"https://directory.stg.cd.id.hp.com/directory/v1/oauth/authorize/"
		"{cp_auth3}\"},\"client\":"
		"{\"name\":\"ukq8qyitdyrocn7dhe3f4jzkms6cgtwo\",\"description\":\"{\\\"enabled\\\":true,\\\"displayName\\\":\\\"HP Customer Support Staging\\\",\\\"domain\\\":\\\"hpid\\\",\\\"extendedMeta\\\":{\\\"createdByClient\\\":\\\"ykjGgOYi6FOELp3ClAznUkQcB3nOTX7p\\\",\\\"lastModifiedByClient\\\":\\\"ykjGgOYi6FOELp3ClAznUkQcB3nOTX7p\\\"},\\\"legalZone\\\":\\\"GLOBAL\\\",\\\"origination\\\":\\\"apigee\\\",\\\"supportEmailName\\\":\\\"NA\\\",\\\"validateEmailAfter\\\":-1}\",\"url\":\"NA\",\"emailAddress\":\""
		"raj.arali@hp.com\"},\"urn:hpid:governance:authenticator:client:1.0\":{\"status\":\"ready\"},\"urn:pingidentity:scim:api:messages:2.0:ExternalIdentityAuthenticationRequest\":{\"providers\":[],\"status\":\"ready\"},\"urn:hpid:governance:authenticator:marketingConsents:1.0\":{\"status\":\"ready\"},\"urn:pingidentity:scim:api:messages:2.0:RegistrationAuthenticationRequest\":{\"registrableAttributes\":[\"countryResidence\",\"domain\",\"emails\",\"enabled\",\"identityProvider\",\"legalZone\",\"locale\","
		"\"marketingConsents\",\"name\",\"password\",\"termsAndConditions\",\"type\",\"userName\"],\"passwordRequirements\":[{\"type\":\"regularExpression\",\"description\":\"The password must contain three of the following:  English uppercase characters (A through Z);  English lowercase characters (a through z);  Numerals (0 through 9);  Non-alphabetic characters (such as !, $, #, %).\",\"matchBehavior\":\"require-match\",\"matchPattern\":\"(?=.{8,})((?=.*\\\\d)(?=.*[a-z])(?=.*[A-Z])|(?=.*\\\\d)(?=.*"
		"[a-zA-Z])(?=.*[\\\\W_])|(?=.*[a-z])(?=.*[A-Z])(?=.*[\\\\W_])).*\"}],\"status\":\"ready\"},\"urn:hpid:governance:authenticator:checkUsername:1.0\":{\"status\":\"ready\",\"userName\":\"{BP_17UserName}\"},\"urn:hpid:governance:authenticator:termsAndConditions:1.0\":{\"status\":\"ready\"},\"urn:pingidentity:scim:api:messages:2.0:UsernamePasswordAuthenticationRequest\":{\"passwordExpiring\":false,\"usernameRecovery\":{\"type\":\"HPID Username Recovery Flow Handler\",\"$ref\":\"https://"
		"directory.stg.cd.id.hp.com/directory/v1/authentication/account/HPID%20Username%20Recovery%20Flow%20Handler/"
		"{cp_flowhandler}\"},\"passwordRecovery\":{\"type\":\"HPID Password Recovery Flow Handler\",\"$ref\":\"https://directory.stg.cd.id.hp.com/directory/v1/authentication/account/HPID%20Password%20Recovery%20Flow%20Handler/"
		"{cp_flowhandler}\"},\"status\":\"ready\"},\"urn:hpid:governance:authenticator:customCaptcha:1.0\":{\"captchaKey\":\"{cp_captchaKey}\",\"captchaImage\":\"{cp_captchaImage}\",\"required\":true,\"recaptchaKey\":\""
		"{cp_recaptchaKey}\",\"status\":\"ready\"},\"urn:hpid:governance:authenticator:checkPasswordAge:1.0\":{\"status\":\"ready\"}}", 
		LAST);
	web_add_header("Content-Type","application/json;charset=UTF-8");
	web_reg_save_param("cp_oauthURL","LB=authorize\",\"$ref\":\"","RB=\"}",LAST);

	web_custom_request("AWc7nCRAeesaa3d7C6NSzroEywK1AAAAAAAAAADo4w0eYLbe13ARNBQn2HMo8tvrKxQDK9CfKGovc77XKSuCYAeeKw5lCRKJro5DeVz_uOTOGbKb8IdVxl7Z-IX7ZW69gRaSnbshhqzRxMLV2cWp_XSsnqx98awe7roV3dR69tD0KJFY3Perj9whSUBAbEX3qfYj3Y1mQt73HkGasVq8E9auoI9apdlR6zm2-9FqqjRQWBUlyNS-dQ3Zs_GzasTu_3", 
		"URL=https://directory.stg.cd.id.hp.com/directory/v1/authentication/login/"
		"{cp_auth2}", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://login.stg.cd.id.hp.com/login-ui/password", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"Body={\"schemas\":[\"urn:pingidentity:scim:api:messages:2.0:AuthenticationRequest\"],\"meta\":{\"resourceType\":\"login\",\"location\":\"https://directory.stg.cd.id.hp.com/directory/v1/authentication/login/"
		"{cp_auth2}"
		"\"},\"followUp\":{\"type\":\"authorize\",\"$ref\":\"https://directory.stg.cd.id.hp.com/directory/v1/oauth/authorize/"
		"{cp_auth3}\"},\"client\":"
		"{\"name\":\"ukq8qyitdyrocn7dhe3f4jzkms6cgtwo\",\"description\":\"{\\\"enabled\\\":true,\\\"displayName\\\":\\\"HP Customer Support Staging\\\",\\\"domain\\\":\\\"hpid\\\",\\\"extendedMeta\\\":{\\\"createdByClient\\\":\\\"ykjGgOYi6FOELp3ClAznUkQcB3nOTX7p\\\",\\\"lastModifiedByClient\\\":\\\"ykjGgOYi6FOELp3ClAznUkQcB3nOTX7p\\\"},\\\"legalZone\\\":\\\"GLOBAL\\\",\\\"origination\\\":\\\"apigee\\\",\\\"supportEmailName\\\":\\\"NA\\\",\\\"validateEmailAfter\\\":-1}\",\"url\":\"NA\",\"emailAddress\":\""
		"raj.arali@hp.com\"},\"urn:hpid:governance:authenticator:client:1.0\":{\"status\":\"ready\"},\"urn:pingidentity:scim:api:messages:2.0:ExternalIdentityAuthenticationRequest\":{\"providers\":[],\"status\":\"ready\"},\"urn:hpid:governance:authenticator:marketingConsents:1.0\":{\"status\":\"ready\"},\"urn:pingidentity:scim:api:messages:2.0:RegistrationAuthenticationRequest\":{\"registrableAttributes\":[\"countryResidence\",\"domain\",\"emails\",\"enabled\",\"identityProvider\",\"legalZone\",\"locale\","
		"\"marketingConsents\",\"name\",\"password\",\"termsAndConditions\",\"type\",\"userName\"],\"passwordRequirements\":[{\"type\":\"regularExpression\",\"description\":\"The password must contain three of the following:  English uppercase characters (A through Z);  English lowercase characters (a through z);  Numerals (0 through 9);  Non-alphabetic characters (such as !, $, #, %).\",\"matchBehavior\":\"require-match\",\"matchPattern\":\"(?=.{8,})((?=.*\\\\d)(?=.*[a-z])(?=.*[A-Z])|(?=.*\\\\d)(?=.*"
		"[a-zA-Z])(?=.*[\\\\W_])|(?=.*[a-z])(?=.*[A-Z])(?=.*[\\\\W_])).*\"}],\"status\":\"ready\"},\"urn:hpid:governance:authenticator:checkUsername:1.0\":{\"identities\":[{\"idpProvider\":\"hpid\",\"locale\":\"en_US\"},{\"idpProvider\":\"onehp\",\"locale\":\"en_US\"}],\"discoveryIDP\":\"onehp\",\"status\":\"success\"},\"urn:hpid:governance:authenticator:termsAndConditions:1.0\":{\"status\":\"ready\"},\"urn:pingidentity:scim:api:messages:2.0:UsernamePasswordAuthenticationRequest\":{\"passwordExpiring\""
		":false,\"usernameRecovery\":{\"type\":\"HPID Username Recovery Flow Handler\",\"$ref\":\"https://directory.stg.cd.id.hp.com/directory/v1/authentication/account/HPID%20Username%20Recovery%20Flow%20Handler/"
		"{cp_flowhandler}\"},\"passwordRecovery\":{\"type\":\"HPID Password Recovery Flow Handler\",\"$ref\":\"https://directory.stg.cd.id.hp.com/directory/v1/authentication/account/HPID%20Password%20Recovery%20Flow%20Handler/"
		"{cp_flowhandler}\"},\"status\":\"ready\",\"username\":\"{p_Username}@hpid\",\"password\":\"{p_Password}\"},\"urn:hpid:governance:authenticator:customCaptcha:1.0\":{\"captchaKey\":\"{cp_captchaKey}\",\"captchaImage\":\"{cp_captchaImage}\",\"required\":true,\"recaptchaKey\":\""
		"{cp_recaptchaKey}\",\"status\":\"ready\"},\"urn:hpid:governance:authenticator:checkPasswordAge:1.0\":{\"userName\":\"{BP_17UserName}\",\"clientName\":\"ukq8qyitdyrocn7dhe3f4jzkms6cgtwo\"}}", 
		LAST);
	

	
	web_reg_save_param("cp_finalstateURL","LB=continue_redirect_uri\":\"","RB=\"}",LAST);

	web_url("AWc7nCRAeesaa3d7C6NSzroEywK1AAAAAAAAAABscIXk-c2U_7buzIyNkw_blRCh7FP-F86rRx25c4qK-pQj3LE0lOd4PnO_ikV5dl3xi4JAlbkjDVuf9E10u-ggisnBnGnGpeOw1Lm4LxMbBVpZuVqhjMDICnOUsuDS9zklV9IsH-R5URkQQaWvdtaOSuFLFjshKzM-uitkF6sXti-Y29RqxsWogYt_ZcR8EGW-IZKhRU7cD3pAC7je8PbKz-tv", 
		"URL={cp_oauthURL}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://login.stg.cd.id.hp.com/login-ui/password", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	
	web_url("authorize", 
		"URL={cp_finalstateURL}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://login.stg.cd.id.hp.com/login-ui/password", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);
	
	 lr_end_transaction("FP00_Login_03_EnterCredentialsClickSignin", LR_AUTO);
	 
	return 0;
}
