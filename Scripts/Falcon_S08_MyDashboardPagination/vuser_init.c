vuser_init()
{
	web_cache_cleanup();
	web_cleanup_cookies();
	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	web_set_max_html_param_len("999999");
	
	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");
	
	lr_start_transaction("FP00_Login_01_LaunchURL");


	web_url("{BaseURL}", 
		"URL=https://{BaseURL}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	
//	web_revert_auto_header("Upgrade-Insecure-Requests");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_url("c05061199", 
//		"URL=https://{BaseURL}/{p_locale}/document/c05061199", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t5.inf", 
//		"Mode=HTML", 
//		LAST);

	web_url("siteHome", 
		"URL=https://{BaseURL}/wcc-services/termbase/{p_locale}/siteHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://{BaseURL}");

	web_custom_request("href", 
		"URL=https://{BaseURL}/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"SiteHome_New\",\"path\":\"/\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	web_url("region", 
		"URL=https://{BaseURL}/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user", 
		"URL=https://{BaseURL}/wcc-services/profile/user?login=false&isMobile=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("windows_image", 
		"URL=https://{BaseURL}/wps/wcm/connect/pps/mlcontent_en/{p_locale}/images/windows_image", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_carousel", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_carousel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_tiles", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_tiles", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("siteHome_2", 
		"URL=https://{BaseURL}/wcc-services/ssc/config/{p_locale}/siteHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_supportresources", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_supportresources", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_rowicons", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_rowicons", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_pfinder_common", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_alerts", 
		"URL=https://{BaseURL}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_second_Nav", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("allRegions", 
		"URL=https://{BaseURL}/wcc-services/clc/allRegions", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

//	web_revert_auto_header("sec-ch-ua");
//
//	web_revert_auto_header("sec-ch-ua-mobile");
//
//	web_add_header("Access-Control-Request-Headers", 
//		"content-type");
//
//	web_add_header("Access-Control-Request-Method", 
//		"GET");
//
//	web_add_auto_header("Origin", 
//		"https://{BaseURL}");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-site");
//
//	web_custom_request("sso_check", 
//		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
//		"Method=OPTIONS", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t20.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_add_auto_header("sec-ch-ua", 
//		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");
//
//	web_add_auto_header("sec-ch-ua-mobile", 
//		"?0");
//
//	web_custom_request("sso_check_2", 
//		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
//		"Method=GET", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t21.inf", 
//		"Mode=HTML", 
//		LAST);
//
//
//
//	web_add_auto_header("Origin", 
//		"https://{BaseURL}");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-site");
//
//	web_custom_request("sso_check_3", 
//		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
//		"Method=GET", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t28.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_custom_request("sso_check_4", 
//		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
//		"Method=GET", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t29.inf", 
//		"Mode=HTML", 
//		LAST);

	lr_end_transaction("FP00_Login_01_LaunchURL", LR_AUTO);
	lr_think_time(1);
	
	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	//irectory/v1/authentication/login/AWc7nCRAeesaa3d7C6NSzroEywK1AAAAAAAAAAAVjE6QYzd2nq4l0qwt9wAGNJV5ji-Qa77DmeTmlDsTDF_BIGxRCrNATElMvKColVdUY_v8AAUMXCH1F8dcheGYNDmVw8ActJgykLDozwfWEz1AEe-KlxukvXz6iornCYR4vTdfNhXFOKPDw-z6qeXOXgOIFekiGpNgr-2UxXIbjGJMO7KkvTuxbUBuMPblFRD_ciE0ZeHlJ86L-AgeuEV4FvnIbGtoMwRHJJ3-q-GBgeREaLm3TRrrGtjacLgbMe170EelrWR_6l1UU6j7K43XTCOo6SxdS3L_VfkyPomwTdALFNg7D_ENVvgzpx2TRu2-QtBgBBfdiKYGsETf5HmA7o04nKx3FAMEFsguGC8dTny7T_PJ_BARfC6ldRhZ5tnCZp7rvtfH86b4UAIPFA5QFVlZzvoGaDsuuph1NudBBPbjsa_0ImKHVdGGjJUcBYVg6HuIQ3AzcN0uOdqDOB7Vf4ZdSw8XAHDnZXDI3hDRmoR4JF030g3aylgdYf3G5aerMmmdLyP_2tLuTLYWp5Kk
	web_reg_save_param("cp_Auth","LB=v1/authentication/login/","RB=\r\n",LAST);
	
	lr_start_transaction("FP00_Login_02_ClickOnPreSigninButton");
	
	web_url("login", 
		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/login?final_redirect_url=https%3A%2F%2F{BaseURL}%2F{p_locale}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);

	
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_url("common.json", 
//		"URL=https://login3.stg.cd.id.hp.com/login3/locales/en_US/common.json?v=3.0.0", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t70.inf", 
//		"Mode=HTML", 
//		LAST);
//
//		web_url("countries.json", 
//		"URL=https://login3.stg.cd.id.hp.com/login3/locales/en_US/countries.json?v=3.0.0", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t71.inf", 
//		"Mode=HTML", 
//		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://login3.stg.cd.id.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("session", 
		"URL=https://ui-backend.stg.cd.id.hp.com/bff/v1/auth/session", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");
	
	//csrfToken":"o28Lz6uJ-JpplP1GrDMvfUbHCN_EQwRO8yIo","c
	web_reg_save_param("cp_csrfToken","LB=csrfToken\":\"","RB=\",",LAST);

	web_custom_request("session_2", 
		"URL=https://ui-backend.stg.cd.id.hp.com/bff/v1/auth/session", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"flow\":\"https://directory.stg.cd.id.hp.com/directory/v1/authentication/login/"
		"{cp_Auth}\"}", 
		LAST);

	web_url("country", 
		"URL=https://static.stg.cd.id.hp.com/login3/country", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("Access-Control-Request-Headers", 
		"csrf-token");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_custom_request("supported-countries", 
		"URL=https://ui-backend.us-east-1.stg.cd.id.hp.com/bff/v1/session/sms/supported-countries", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("CSRF-TOKEN", 
		"{cp_csrfToken}");

	web_add_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_url("supported-countries_2", 
		"URL=https://ui-backend.us-east-1.stg.cd.id.hp.com/bff/v1/session/sms/supported-countries", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP00_Login_02_ClickOnPreSigninButton",LR_AUTO);

	
	web_add_header("Access-Control-Request-Headers", 
		"content-type,csrf-token");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://login3.stg.cd.id.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	lr_start_transaction("FP00_Login_03_EnterUsernameAndClickOnNext");

	web_custom_request("check-username", 
		"URL=https://ui-backend.us-east-1.stg.cd.id.hp.com/bff/v1/session/check-username", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("CSRF-TOKEN", 
		"{cp_csrfToken}");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("check-username_2", 
		"URL=https://ui-backend.us-east-1.stg.cd.id.hp.com/bff/v1/session/check-username", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"username\":\"{p_Username}\"}", 
		LAST);

	

	lr_end_transaction("FP00_Login_03_EnterUsernameAndClickOnNext",LR_AUTO);

	

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("Access-Control-Request-Headers", 
		"content-type,csrf-token");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	
	lr_start_transaction("FP00_Login_04_EnterPassword");

	web_custom_request("username-password", 
		"URL=https://ui-backend.us-east-1.stg.cd.id.hp.com/bff/v1/session/username-password", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("CSRF-TOKEN", 
		"{cp_csrfToken}");

	web_add_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	//callback?code=AWc7nCRAeesaa3d7C6NSzroEywK1AAAAAAAAAABeJT-xoIEMHnW2Jevo0Q16PItdP5Y7hDUfS5T6liXJGsKtS64oix5J3ZDDrDGburJmP0z3iPw8kFjGB_ivTCXjL70c_uRCx3czgedjjOczYw&state=aHR0cHM6Ly9wcHNzdXBwb3J0LWl0Z2xsYmg3LmluYy5ocC5jb20vdXMtZW4sdW5rbm93bg%3D%3D"}
	web_reg_save_param("cp_CallBackCode","LB=callback?code=","RB=\"}",LAST);
	
	web_custom_request("username-password_2",
		"URL=https://ui-backend.us-east-1.stg.cd.id.hp.com/bff/v1/session/username-password", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"username\":\"{p_Username}@hpid\",\"password\":\"{p_Password}\"}", 
		LAST);

	lr_end_transaction("FP00_Login_04_EnterPassword",LR_AUTO);
	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	lr_start_transaction("FP00_Login_05_GlobalNavSignin");


	web_url("login_callback", 
		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/login_callback?code={cp_CallBackCode}", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
	LAST);

	
//	web_add_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("sec-ch-ua", 
//		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");
//
//	web_add_auto_header("sec-ch-ua-mobile", 
//		"?0");
//
//	web_url("c05061199_3", 
//		"URL=https://{BaseURL}/{p_locale}/document/c05061199", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t88.inf", 
//		"Mode=HTML", 
//		LAST);

	
	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://{BaseURL}");

	web_custom_request("href_2", 
		"URL=https://{BaseURL}/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"SiteHome_New\",\"path\":\"/\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);


	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("region_2", 
		"URL=https://{BaseURL}/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_carousel_2", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_carousel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		LAST);

	web_url("siteHome_3", 
		"URL=https://{BaseURL}/wcc-services/termbase/{p_locale}/siteHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_url("windows_image_2", 
		"URL=https://{BaseURL}/wps/wcm/connect/pps/mlcontent_en/{p_locale}/images/windows_image", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user_2", 
		"URL=https://{BaseURL}/wcc-services/profile/user?login=false&isMobile=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_tiles_2", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_tiles", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_url("siteHome_4", 
		"URL=https://{BaseURL}/wcc-services/ssc/config/{p_locale}/siteHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_rowicons_2", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_rowicons", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_supportresources_2", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_supportresources", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		LAST);

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("c05061199_4", 
//		"URL=https://{BaseURL}/{p_locale}/document/c05061199", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t101.inf", 
//		"Mode=HTML", 
//		LAST);

	web_url("wcc_pfinder_common_2", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_second_Nav_2", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("allRegions_2", 
		"URL=https://{BaseURL}/wcc-services/clc/allRegions", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_alerts_2", 
		"URL=https://{BaseURL}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		LAST);

//	web_add_auto_header("Origin", 
//		"https://{BaseURL}");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-site");
//
//	web_custom_request("sso_check_5", 
//		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
//		"Method=GET", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t107.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_custom_request("sso_check_6", 
//		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
//		"Method=GET", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t108.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_custom_request("sso_check_7", 
//		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
//		"Method=GET", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t109.inf", 
//		"Mode=HTML", 
//		LAST);

	lr_end_transaction("FP00_Login_05_GlobalNavSignin", LR_AUTO);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("FP00_Login_06_FalconSignIn");


	web_url("login_2", 
		"URL=https://{BaseURL}/hp-pps-services/auth/login?cc={p_Region}&lc={p_lc}&silentCheck=true&pageurl=https://{BaseURL}/{p_locale}", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);

	
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_url("c05061199_5", 
//		"URL=https://{BaseURL}/{p_locale}/document/c05061199", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t125.inf", 
//		"Mode=HTML", 
//		LAST);

	
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("siteHome_5", 
		"URL=https://{BaseURL}/wcc-services/termbase/{p_locale}/siteHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_tiles_3", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_tiles", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_carousel_3", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_carousel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://{BaseURL}");

	web_custom_request("href_3", 
		"URL=https://{BaseURL}/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"SiteHome_New\",\"path\":\"/\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	web_url("region_3", 
		"URL=https://{BaseURL}/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		LAST);

	web_url("siteHome_6", 
		"URL=https://{BaseURL}/wcc-services/ssc/config/{p_locale}/siteHome", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_url("windows_image_3", 
		"URL=https://{BaseURL}/wps/wcm/connect/pps/mlcontent_en/{p_locale}/images/windows_image", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_rowicons_3", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_rowicons", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_supportresources_3", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_sitehome_supportresources", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_pfinder_common_3", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_second_Nav_3", 
		"URL=https://{BaseURL}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		LAST);

	web_url("wcc_sitehome_alerts_3", 
		"URL=https://{BaseURL}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		LAST);

	web_url("allRegions_3", 
		"URL=https://{BaseURL}/wcc-services/clc/allRegions", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		LAST);

	

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("c05061199_6", 
//		"URL=https://{BaseURL}/{p_locale}/document/c05061199", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t141.inf", 
//		"Mode=HTML", 
//		LAST);

//	web_add_auto_header("Origin", 
//		"https://{BaseURL}");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-site");
//
//	web_custom_request("sso_check_8", 
//		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
//		"Method=GET", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t143.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	
//
//	web_custom_request("sso_check_9", 
//		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
//		"Method=GET", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t144.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_custom_request("sso_check_10", 
//		"URL=https://global-navbar-backend.stg.cd.id.hp.com/api/v1/session/sso_check", 
//		"Method=GET", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://{BaseURL}/{p_locale}", 
//		"Snapshot=t145.inf", 
//		"Mode=HTML", 
//		LAST);

	
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("user_3", 
		"URL=https://{BaseURL}/wcc-services/profile/user?login=false&isMobile=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP00_Login_06_FalconSignIn", LR_AUTO);


	
	lr_think_time(1);
	return 0;
}
