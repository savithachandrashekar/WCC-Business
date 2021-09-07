TopicAudioWirelessPages()
{
	
	//All Topiclanding pages, Audio pages and wireless(wifi) printer pages are included here
	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	//lr_start_transaction("TopicLangingPage");

	lr_start_transaction("FP09_TopicLanding_01_doc");

	web_url("topic", 
		"URL=https://{p_Host}/{p_locale}/topic", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP09_TopicLanding_01_doc", LR_AUTO);
	lr_think_time(1);

	lr_start_transaction("FP09_TopicLanding_02_api_ssc_global");
	web_url("global", 
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/global", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP09_TopicLanding_02_api_ssc_global", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP09_TopicLanding_03_api_solution-topics-us-en");
	web_url("{p_locale}", 
		"URL=https://{p_Host}/wcc-services/solution/topics/{p_locale}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP09_TopicLanding_03_api_solution-topics-us-en", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP09_TopicLanding_04_api_termbase_topicLandingPage");
	web_url("topicLandingPage", 
		"URL=https://{p_Host}/wcc-services/termbase/{p_locale}/topicLandingPage", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP09_TopicLanding_04_api_termbase_topicLandingPage", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP09_TopicLanding_05_api_wcc_second_Nav");
	web_url("wcc_second_Nav", 
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP09_TopicLanding_05_api_wcc_second_Nav", LR_AUTO);
	lr_think_time(1);

	web_add_header("Origin", 
		"https://{p_Host}");

	lr_start_transaction("FP09_TopicLanding_06_api_href");
	web_custom_request("href", 
		"URL=https://{p_Host}/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"TopicLanding_New\",\"path\":\"/topic\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);
	lr_end_transaction("FP09_TopicLanding_06_api_href", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP09_TopicLanding_07_api_ssc_topicLandingPage");
	web_url("topicLandingPage_2", 
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/topicLandingPage", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP09_TopicLanding_07_api_ssc_topicLandingPage", LR_AUTO);
	lr_think_time(1);

	lr_start_transaction("FP09_TopicLanding_08_api_wcc_sitehome_alerts");
	web_url("wcc_sitehome_alerts", 
		"URL=https://{p_Host}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Host}/{p_locale}/topic", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP09_TopicLanding_08_api_wcc_sitehome_alerts", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP09_TopicLanding_09_api_wcc_pfinder_common");
	web_url("wcc_pfinder_common", 
		"URL=https://{p_Host}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP09_TopicLanding_09_api_wcc_pfinder_common", LR_AUTO);
	lr_think_time(1);

/*	web_add_auto_header("User-Agent","googlebot");
	lr_start_transaction("FP09_TopicLanding_10_seo");	
	web_url("{p_locale}", 
		"URL=https://{p_Host}/{p_locale}/topic", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);	
	lr_end_transaction("FP09_TopicLanding_10_seo", LR_AUTO);
	web_revert_auto_header("User-Agent");*/
	
		//Audio Flow

	lr_start_transaction("FP10_TopicAudioPages_01_doc");
	web_url("audio",
		"URL=https://{p_Host}/{p_locale}/topic/audio",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t23.inf",
		"Mode=HTML",
		LAST);
	lr_end_transaction("FP10_TopicAudioPages_01_doc", LR_AUTO);
	lr_think_time(1);

	web_revert_auto_header("Upgrade-Insecure-Requests");
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	
	lr_start_transaction("FP10_TopicAudioPages_02_api_region");
	web_url("region", 
		"URL=https://{p_Host}/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/audio", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP10_TopicAudioPages_02_api_region", LR_AUTO);
	lr_think_time(1);

	web_add_auto_header("Origin", 
		"https://{p_Host}");

	
	lr_start_transaction("FP10_TopicAudioPages_03_api_solution_topics_audio");
	web_custom_request("audio_2", 
		"URL=https://{p_Host}/wcc-services/solution/topics/audio", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/audio", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\",\"os\":{\"isSelected\":false,\"osDetected\":\"Windows NT 10.0; Win64; x64\",\"osbit\":\"64\",\"selectedOs\":\"\",\"osTmsId\":null,\"osParentTmsId\":null}}", 
		LAST);
	lr_end_transaction("FP10_TopicAudioPages_03_api_solution_topics_audio", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP10_TopicAudioPages_04_api_href");
	web_custom_request("href_2", 
		"URL=https://{p_Host}/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/audio", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"Solutions_New\",\"path\":\"/topic/audio\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);
	lr_end_transaction("FP10_TopicAudioPages_04_api_href", LR_AUTO);
	lr_think_time(1);

	web_revert_auto_header("Origin");

	lr_start_transaction("FP10_TopicAudioPages_05_api_ssc_global");
 	web_url("global_2",
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/global",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{p_Host}/{p_locale}/topic/audio",
		"Snapshot=t29.inf",
		"Mode=HTML",
		LAST); 
	lr_end_transaction("FP10_TopicAudioPages_05_api_ssc_global", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP10_TopicAudioPages_06_api_ssc_topicPage");
	web_url("topicPage", 
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/topicPage", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/audio", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP10_TopicAudioPages_06_api_ssc_topicPage", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP10_TopicAudioPages_07_api_wcc_second_Nav");
	 	web_url("wcc_second_Nav_2",
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{p_Host}/{p_locale}/topic/audio",
		"Snapshot=t31.inf",
		"Mode=HTML",
		LAST); 
	lr_end_transaction("FP10_TopicAudioPages_07_api_wcc_second_Nav", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP10_TopicAudioPages_08_api_termbase_topicPage");
	web_url("topicPage_2", 
		"URL=https://{p_Host}/wcc-services/termbase/{p_locale}/topicPage", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/audio", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP10_TopicAudioPages_08_api_termbase_topicPage", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP10_TopicAudioPages_09_api_wcc_sitehome_alerts");
	 web_url("wcc_sitehome_alerts_2",
		"URL=https://{p_Host}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Host}/{p_locale}/topic/audio",
		"Snapshot=t33.inf",
		"Mode=HTML",
		LAST); 
	lr_end_transaction("FP10_TopicAudioPages_09_api_wcc_sitehome_alerts", LR_AUTO);
	lr_think_time(1);
	
	web_add_auto_header("Origin", 
		"https://{p_Host}");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP10_TopicAudioPages_10_api_wcc_solutions_xhtml");
	web_custom_request("wcc_solutions_xhtml", 
		"URL=https://{p_Host}/wcc-services/cms-v2/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Host}/{p_locale}/topic/audio", 
		"Snapshot=t276.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\",\"intentTmsId\":\"113563413184771141312128041451512103158105112\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);
	lr_end_transaction("FP10_TopicAudioPages_10_api_wcc_solutions_xhtml", LR_AUTO);
	lr_think_time(1);
		
	lr_start_transaction("FP10_TopicAudioPages_11_api_wcc_pfinder_common");
	web_url("wcc_pfinder_common_2", 
		"URL=https://{p_Host}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=Computer_Landing_New", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/audio", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP10_TopicAudioPages_11_api_wcc_pfinder_common", LR_AUTO);
	lr_think_time(1);
	
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP10_TopicAudioPages_12_api_videoDetails");
	web_url("{p_locale}_2", 
		"URL=https://{p_Host}/wcc-services/content/videoDetails/{p_locale}?videoIds=CID4403597156001,CID203666e8-059e-4e88-8fc9-22b4d050273c,CID51ff02ad-5e83-4068-a549-dc257f443743,CID3260773970001,CIDbc40f9a4-be88-422c-9a65-348f7b3d4379&udpFlag=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/audio", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP10_TopicAudioPages_12_api_videoDetails", LR_AUTO);
	lr_think_time(1);
	
/*	web_add_auto_header("User-Agent","googlebot");
	lr_start_transaction("FP10_TopicAudioPages_13_seo");	
	web_url("{p_locale}", 
		"URL=https://{p_Host}/{p_locale}/topic/audio", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);	
	lr_end_transaction("FP10_TopicAudioPages_13_seo", LR_AUTO);
	web_revert_auto_header("User-Agent");*/
	
		//Wireless(WIFI) printer flow

	lr_start_transaction("FP11_TopicWirelessPages_01_doc");
	web_url("wireless-printing",
		"URL=https://{p_Host}/{p_locale}/topic/wireless-printing",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t46.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("FP11_TopicWirelessPages_01_doc", LR_AUTO);
	lr_think_time(1);


	lr_start_transaction("FP11_TopicWirelessPages_02_api_ssc_global");
	 web_url("global_3",
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/global",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{p_Host}/{p_locale}/topic/wireless-printing",
		"Snapshot=t49.inf",
		"Mode=HTML",
		LAST); 
	lr_end_transaction("FP11_TopicWirelessPages_02_api_ssc_global", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP11_TopicWirelessPages_03_api_ssc_topicPage");
	web_url("topicPage_3", 
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/topicPage", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/wireless-printing", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP11_TopicWirelessPages_03_api_ssc_topicPage", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP11_TopicWirelessPages_04_api_wcc_second_Nav");
 	web_url("wcc_second_Nav_3",
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://{p_Host}/{p_locale}/topic/wireless-printing",
		"Snapshot=t51.inf",
		"Mode=HTML",
		LAST); 
	lr_end_transaction("FP11_TopicWirelessPages_04_api_wcc_second_Nav", LR_AUTO);
	lr_think_time(1);

	lr_start_transaction("FP11_TopicWirelessPages_05_api_termbase_topicPage");
	web_url("topicPage_4", 
		"URL=https://{p_Host}/wcc-services/termbase/{p_locale}/topicPage", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/wireless-printing", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP11_TopicWirelessPages_05_api_termbase_topicPage", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP11_TopicWirelessPages_06_api_wcc_sitehome_alerts");
	web_url("wcc_sitehome_alerts_3",
		"URL=https://{p_Host}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Host}/{p_locale}/topic/wireless-printing",
		"Snapshot=t53.inf",
		"Mode=HTML",
		LAST); 
	lr_end_transaction("FP11_TopicWirelessPages_06_api_wcc_sitehome_alerts", LR_AUTO);
	lr_think_time(1);
	
//	web_add_auto_header("Origin", 
//		"https://{p_Host}");
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//	
//	lr_start_transaction("FP11_TopicWirelessPages_07_api_wcc_solutions_xhtml");
//	web_custom_request("wcc_solutions_xhtml_11", 
//		"URL=https://{p_Host}/wcc-services/cms-v2/contexual-solution/wcc_solutions_xhtml", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{p_Host}/{p_locale}/topic/wireless-printing", 
//		"Snapshot=t427.inf", 
//		"Mode=HTTP", 
//		"EncType=application/json", 
//		"Body={\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\",\"intentTmsId\":\"151421312111172811949141510110014750612961268\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
//		LAST);
//	lr_end_transaction("FP11_TopicWirelessPages_07_api_wcc_solutions_xhtml", LR_AUTO);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("FP11_TopicWirelessPages_08_api_region");
	web_url("region_2", 
		"URL=https://{p_Host}/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/wireless-printing", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP11_TopicWirelessPages_08_api_region", LR_AUTO);
	lr_think_time(1);
	
	web_add_auto_header("Origin", 
		"https://{p_Host}");
	
	lr_start_transaction("FP11_TopicWirelessPages_09_api_href");
	web_custom_request("href_3", 
		"URL=https://{p_Host}/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/wireless-printing", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"Solutions_New\",\"path\":\"/topic/wireless-printing\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);
	lr_end_transaction("FP11_TopicWirelessPages_09_api_href", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP11_TopicWirelessPages_10_api_solution-topics-wireless-printing");
	web_custom_request("wireless-printing_2", 
		"URL=https://{p_Host}/wcc-services/solution/topics/wireless-printing", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/wireless-printing", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\",\"os\":{\"isSelected\":false,\"osDetected\":\"Windows NT 10.0; Win64; x64\",\"osbit\":\"64\",\"selectedOs\":\"\",\"osTmsId\":null,\"osParentTmsId\":null}}", 
		LAST);
	lr_end_transaction("FP11_TopicWirelessPages_10_api_solution-topics-wireless-printing", LR_AUTO);
	lr_think_time(1);

	web_revert_auto_header("Origin");
	
	lr_start_transaction("FP11_TopicWirelessPages_11_api_wcc_pfinder_common");
	web_url("wcc_pfinder_common_3", 
		"URL=https://{p_Host}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=Printer_Landing_New", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/wireless-printing", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP11_TopicWirelessPages_11_api_wcc_pfinder_common", LR_AUTO);
	lr_think_time(1);
	
	lr_start_transaction("FP11_TopicWirelessPages_12_api_videoDetails");
	web_url("{p_locale}_3", 
		"URL=https://{p_Host}/wcc-services/content/videoDetails/{p_locale}?videoIds=CID4403597156001,CID874fd177-baaa-4d02-ac2c-2faf3e9372b6,CID1245172379001&udpFlag=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/topic/wireless-printing", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("FP11_TopicWirelessPages_12_api_videoDetails", LR_AUTO);
	lr_think_time(1);
	
	/*web_add_auto_header("User-Agent","googlebot");
	lr_start_transaction("FP11_TopicWirelessPages_13_seo");	
	web_url("{p_locale}", 
		"URL=https://{p_Host}/{p_locale}/topic/wireless-printing", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);	
	lr_end_transaction("FP11_TopicWirelessPages_13_seo", LR_AUTO);
	web_revert_auto_header("User-Agent");*/
	
	return 0;
}
