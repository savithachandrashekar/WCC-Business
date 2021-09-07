Cases()
{
	
	
	int res1;
	int jMax;
	int jdx;
	srand(time(NULL));
	
	lr_start_transaction("FP22_Dashboard_11_Device_api_summary");
		web_url("all", 
		"URL=https://{BaseURL}/wcc-services/profile/devices/all?login=false&cc={p_Region}&lc={p_lc}&offset=P0530&isMobile=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		LAST);
		
	lr_end_transaction("FP22_Dashboard_11_Device_api_summary",LR_AUTO);
	
		
	web_reg_save_param("cp_CaseID", "LB=caseId\":\"", "RB=\"", "ORD=1", "NotFound=Warning", LAST);
	

	web_reg_find("Search=All",
		"SaveCount=SuccessCount",
		"Text=Success",
		LAST);

	
	lr_start_transaction("FP22_Dashboard_12_Cases_api_cases-all");

	web_url("all_2", 
		"URL=https://{BaseURL}/wcc-services/profile/cases/all?offset=P0000", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard/cases", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("FP22_Dashboard_12_Cases_api_cases-all",LR_AUTO);
	

	lr_save_string(lr_eval_string("{cp_CaseID}"), "cp_CaseID_Select");
	
	lr_start_transaction("FP22_Dashboard_13_Device_api_device_casedetails");
	
	web_url("{cp_CaseID_Select}", 
		"URL=https://{BaseURL}/wcc-services/profile/cases/{cp_CaseID_Select}?offset=P0000", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{BaseURL}/{p_locale}/dashboard/cases", 
		"Snapshot=t920.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP22_Dashboard_13_Device_api_device_casedetails",LR_AUTO);

	
	return 0;
}
