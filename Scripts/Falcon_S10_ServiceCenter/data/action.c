Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=91", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("NID=219=Jbg-xHwZdK1sK1ZIQO4Cadlg-SnuTCeFMxSyds-jA7w3qRSu7YxYu6DruM-pYl2ebULzkygAcSyvdzViNP01lpCGlnaAQok-jv61kU5LY0qTxaP6O34PC_79R2N3TvC6mdT8Zt5UDK_Oh2h8r7NkVNOHWa5jYPkQeCVubk4Mxik; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_add_cookie("OptanonConsent=consentId=a15be3fe-bef6-43a9-8c73-d6747d12e998&datestamp=Fri+Jul+16+2021+04%3A42%3A49+GMT%2B0000+(Greenwich+Mean+Time)&version=6.19.0&interactionCount=0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

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

	web_url("service-center", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("latin-e-bold-woff.woff", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/fonts/hps/latin-e-bold-woff.woff", 
		"Resource=1", 
		"RecContentType=application/font-woff", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("latin-e-regular-woff.woff", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/fonts/hps/latin-e-regular-woff.woff", 
		"Resource=1", 
		"RecContentType=application/font-woff", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("latin-e-light-woff.woff", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/fonts/hps/latin-e-light-woff.woff", 
		"Resource=1", 
		"RecContentType=application/font-woff", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("latin-e-regular-italic-woff.woff", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/fonts/hps/latin-e-regular-italic-woff.woff", 
		"Resource=1", 
		"RecContentType=application/font-woff", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("latin-e-bold-italic-woff.woff", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/fonts/hps/latin-e-bold-italic-woff.woff", 
		"Resource=1", 
		"RecContentType=application/font-woff", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t8.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_url("fullHashes_find", 
		"URL=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINOTEuMC40NDcyLjEyNBIbCg0IBRAGGAEiAzAwMTABEKTlCxoCGAgk70uNEhsKDQgBEAYYASIDMDAxMAEQrpQJGgIYCISFLbASGwoNCAMQBhgBIgMwMDEwARCh8ggaAhgIKnV0UhIbCg0IBxAGGAEiAzAwMTABEJLSCRoCGAij2grAEhkKDQgBEAYYASIDMDAxMAMQFBoCGAix55AtEhoKDQgBEAgYASIDMDAxMAQQsyEaAhgIiO_q5RIZCg0ICRAGGAEiAzAwMTAGEAMaAhgIeaM2dBIaCg0IDxAGGAEiAzAwMTABEOhvGgIYCGG2tb4SGQoNCAoQCBgBIgMwMDEwARAHGgIYCJU1itMSGQoNCAkQBhgBIgMwMDEwARAfGgIYCGuJ5QQSGgoNCAgQBhgBIgMwMDEwARDBDBoCGAiAR5pPEhsKDQgNEAYYASIDMDAxMAEQ-pwBGgIYCMd9s38SGwoNCA4QBh"
		"gBIgMwMDEwARCZ7gUaAhgICQ9MghIaCg0IEBAGGAEiAzAwMTABENoLGgIYCElGtv0aLAgBCAMIBQgGCAcICAgJCAoIDQgOCA8IEBABEAgaBgoEP6RNZCABIAMgBCAG&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t9.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("hp_icomoon.woff", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/fonts/hps/hp_icomoon.woff", 
		"Resource=1", 
		"RecContentType=application/font-woff", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("hp_support_controls.woff", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/fonts/hps/hp_support_controls.woff", 
		"Resource=1", 
		"RecContentType=application/font-woff", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("glyphicons-halflings-regular.woff", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/fonts/glyphicons-halflings-regular.woff", 
		"Resource=1", 
		"RecContentType=application/font-woff", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("latin-e-light-italic-woff.woff", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/fonts/hps/latin-e-light-italic-woff.woff", 
		"Resource=1", 
		"RecContentType=application/font-woff", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t13.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("ruxitagentjs_ICA2SVfqru_10219210628133341.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/ruxitagentjs_ICA2SVfqru_10219210628133341.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t14.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("Bootstrap.js", 
		"URL=https://nexus.ensighten.com/hp/support_stage/Bootstrap.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("19578177762.js", 
		"URL=https://cdn.optimizely.com/js/19578177762.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t16.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("font-awesome.min.css", 
		"URL=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t17.inf", 
		LAST);

	web_add_cookie("rxVisitor=1626411769336VLQ8R3CPRCSHQK88B6DUQIVVO90549OU; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtLatC=1165; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1626413569356|1626411769347; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$411769328_933h1vSQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18825%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("jqueryv1_10_2.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/js/jqueryv1_10_2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("get_to_know_win.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/hp-support-common-portlets/resources/v1/js/get_to_know_win.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("ContactSecondaryNavigation.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/hp-support-common-portlets/resources/v1/js/ContactSecondaryNavigation.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("ra_collection", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/contenthandler/pps/!ut/p/digest!3JKaotSk_gMd0aUfF0xN-w/mashup/ra_collection?themeID=ZJ_3054ICK0K8VR40ACSBJACA0001&locale=en&mime-type=text%2Fjavascript&lm=1622771916000&entry=wp_client_main__0.0%3Ahead_js&entry=wp_client_ext__0.0%3Ahead_js&entry=hpStyleR2__1.0%3Ahead_js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("mashup_ra_collection", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/contenthandler/pps/!ut/p/digest!Gu1JQ18jiCIB-gUpmFgFTw/sp/mashup_ra_collection?soffset=0&eoffset=21&themeID=ZJ_3054ICK0K8VR40ACSBJACA0001&locale=en&mime-type=text%2Fcss&lm=1622771920000&entry=wp_one_ui_30__0.0%3Ahead_css&entry=wp_one_ui_dijit_30__0.0%3Ahead_css&entry=wp_portlet_css__0.0%3Ahead_css&entry=wp_status_bar__0.0%3Ahead_css&entry=hpStyleR2__1.0%3Ahead_css&entry=wp_legacy_layouts__0.0%3Ahead_css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("e.gif", 
		"URL=https://nexus.ensighten.com/error/e.gif?msg=%22TypeError%3A%20Cannot%20read%20property%20%27triggerPromiseWithTimeout%27%20of%20undefined%22%20error%20caught%20in%20Data%20Definition%20trigger%3A%20support_language_code%2C%20ID%3A9913.%20Using%20bottom%20of%20body%20trigger.&lnn=-1&fn=&cid=217&client=hp&publishPath=support_stage&rid=-1&did=-1&errorName=DataDefinitionException", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("csrf.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/hp-support-common-portlets/resources/v1/js/csrf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("serviceLocator.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/hp-support-contact-portlets/resources/v1/js/serviceLocator.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("serviceLocatorMap.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/hp-support-contact-portlets/resources/v1/js/serviceLocatorMap.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("serverComponent.php", 
		"URL=https://nexus.ensighten.com/hp/support_stage/serverComponent.php?namespace=Bootstrapper&staticJsPath=nexus.ensighten.com/hp/support_stage/code/&publishedOn=Wed%20Jul%2014%2007:28:17%20GMT%202021&ClientID=217&PageID=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("contentsquare.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/js/contentsquare.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t28.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("hp-logo-modal.gif", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/images/hp-logo-modal.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t29.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("qualtricsLoader.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/portal/pps/Home/service-locator/!ut/p/z1/04_Sj9CPykssy0xPLMnMz0vMAfIjo8zifQ08DYy83A28LbyMTQ0CDQwcnQPDXI0NDAz1w8EKnN0dPUzMfQwM3ANNnAw8zX39vV2DLIwNPM30o4jRb4ADOBoQpx-Pgij8xofrR4GV4PMBITMKckNDIwwyHQEJdD2h/hp/js/qualtricsLoader.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t30.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("loadingHp.gif", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/images/loadingHp.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t31.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.4.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=5E34123F5245B2CD0A490D45%40AdobeOrg&d_nsid=0&ts=1626411769433", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_cookie("OptanonConsent=consentId=a15be3fe-bef6-43a9-8c73-d6747d12e998&datestamp=Fri+Jul+16+2021+04%3A42%3A49+GMT%2B0000+(Greenwich+Mean+Time)&version=6.19.0&interactionCount=0; DOMAIN=ssl.www8.hp.com");

	web_add_cookie("rxVisitor=1626411769336VLQ8R3CPRCSHQK88B6DUQIVVO90549OU; DOMAIN=ssl.www8.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=ssl.www8.hp.com");

	web_add_cookie("dtLatC=1165; DOMAIN=ssl.www8.hp.com");

	web_add_cookie("rxvt=1626413569356|1626411769347; DOMAIN=ssl.www8.hp.com");

	web_add_cookie("dtPC=1$411769328_933h1vSQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0e1; DOMAIN=ssl.www8.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18825%7CvVersion%7C4.4.0; DOMAIN=ssl.www8.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("can.jquery.js", 
		"URL=https://ssl.www8.hp.com/us/en/scripts/framework/jquery/v-1-8/can.jquery.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t33.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("ra_collection_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/contenthandler/pps/!ut/p/digest!3JKaotSk_gMd0aUfF0xN-w/mashup/ra_collection?themeID=ZJ_3054ICK0K8VR40ACSBJACA0001&locale=en&mime-type=text%2Fjavascript&lm=1622771916000&entry=wp_theme_edit__0.0%3Aconfig_js&entry=wp_one_ui_30__0.0%3Aconfig_js&entry=wp_theme_skin_region__0.0%3Aconfig_js&entry=wp_status_bar__0.0%3Aconfig_js&entry=wp_theme_menus__0.0%3Aconfig_js&entry=hpStyleR2__1.0%3Aconfig_js&entry=wp_theme_high_contrast__0.0%3Aconfig_js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t34.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("blank.gif", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/themeModules/themes/html/dynamicSpots/icons/blank.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("session_timeout.png", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/images/session_timeout.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("close_white.png", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/images/close_white.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("toronto_Avatar.png", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/images/toronto_Avatar.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t38.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("3ce08cf7c65e410fd9cf20d6115a04e1.js", 
		"URL=https://nexus.ensighten.com/hp/support_stage/code/3ce08cf7c65e410fd9cf20d6115a04e1.js?conditionId0=285030", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("c0518ade78e95e05809767e6b5816485.js", 
		"URL=https://nexus.ensighten.com/hp/support_stage/code/c0518ade78e95e05809767e6b5816485.js?conditionId0=422765", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("embed.js", 
		"URL=https://nebula-cdn.kampyle.com/wu/474882/onsite/embed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t41.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("ra_collection_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wps/contenthandler/pps/!ut/p/digest!nAHmxwT-K1ischyBWmt1ig/mashup/ra_collection?themeID=ZJ_3054ICK0K8VR40ACSBJACA0001&locale=en&mime-type=text%2Fjavascript&lm=1624561464783&entry=wp_portal__0.0%3Aconfig_config_static&entry=mm_enabler__0.0%3Aconfig_config_static", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t42.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("realtime", 
		"URL=https://safebrowsing.google.com/safebrowsing/clientreport/realtime", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\nVhttps://hp.demdex.net/dest5.html?d_nsid=0#https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com\\x10\\x01\\x1A\\x0C\\x08\\x03\\x10\\x00(\\x030\\x008\\x00@\\x000\\x028\\x07B{\n)https://hp.demdex.net/dest5.html?d_nsid=0\\x10\\x01\"\\x00*;https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center0\\x019\\x00\\xA0\\x05\"\\xDB\\xAAwBP\\x02X\\x00B]\n;https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center\\x10\\x04\\x1A\\x0B15.72.22.19\"\\x000\\x009\\x00p\\x80!\\xDB\\xAAwBP\\x01X\\x01", 
		LAST);

	web_add_cookie("OptanonConsent=consentId=a15be3fe-bef6-43a9-8c73-d6747d12e998&datestamp=Fri+Jul+16+2021+04%3A42%3A49+GMT%2B0000+(Greenwich+Mean+Time)&version=6.19.0&interactionCount=0; DOMAIN=met2.hp.com");

	web_add_cookie("rxVisitor=1626411769336VLQ8R3CPRCSHQK88B6DUQIVVO90549OU; DOMAIN=met2.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=met2.hp.com");

	web_add_cookie("dtLatC=1165; DOMAIN=met2.hp.com");

	web_add_cookie("rxvt=1626413569356|1626411769347; DOMAIN=met2.hp.com");

	web_add_cookie("dtPC=1$411769328_933h1vSQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0e1; DOMAIN=met2.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=met2.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18825%7CMCMID%7C01799298897441612632860320128804029375%7CMCAAMLH-1627016569%7C9%7CMCAAMB-1627016569%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1626418969s%7CNONE%7CvVersion%7C4.4.0; DOMAIN=met2.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("id_2", 
		"URL=https://met2.hp.com/id?d_visid_ver=4.4.0&d_fieldgroup=A&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&mid=01799298897441612632860320128804029375&ts=1626411769956", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t44.inf", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("dest5.html", 
		"URL=https://hp.demdex.net/dest5.html?d_nsid=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("dd", 
		"URL=https://cm.everesttech.net/cm/dd?d_uuid=07193148158108801073185555988220201019", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t46.inf", 
		LAST);

	web_add_cookie("OptanonConsent=consentId=a15be3fe-bef6-43a9-8c73-d6747d12e998&datestamp=Fri+Jul+16+2021+04%3A42%3A49+GMT%2B0000+(Greenwich+Mean+Time)&version=6.19.0&interactionCount=0; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("rxVisitor=1626411769336VLQ8R3CPRCSHQK88B6DUQIVVO90549OU; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("dtLatC=1165; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("rxvt=1626413569356|1626411769347; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("dtPC=1$411769328_933h1vSQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0e1; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18825%7CvVersion%7C4.4.0; DOMAIN=itg-live.www8.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("latest.r", 
		"URL=https://itg-live.www8.hp.com/caas/header-footer/us/en/default/latest.r?contentType=js&hide_search=true&show_shopping_cart=true&hide_country_selector=true", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t47.inf", 
		LAST);

	web_add_cookie("dpm=07193148158108801073185555988220201019; DOMAIN=dpm.demdex.net");

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933; DOMAIN=dpm.demdex.net");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("g.pixel", 
		"URL=https://aa.agkn.com/adscores/g.pixel?sid=9211132908&aam=07193148158108801073185555988220201019", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("img", 
		"URL=https://sync.mathtag.com/sync/img?mt_exid=10004&mt_exuid=07193148158108801073185555988220201019&redir=https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D269%26dpuuid%3D[MM_UUID]%26ddsuuid%3d07193148158108801073185555988220201019", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t49.inf", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190; DOMAIN=dpm.demdex.net");

	web_url("https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D375%26dpuuid%3DPARTNER_UUID", 
		"URL=https://r.turn.com/r/du/id/L2NzaWQvMS9zcGlkLzU/url/https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D375%26dpuuid%3DPARTNER_UUID", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("365868.gif", 
		"URL=https://idsync.rlcdn.com/365868.gif?partner_uid=07193148158108801073185555988220201019", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t51.inf", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190|601-1-1626411772299; DOMAIN=dpm.demdex.net");

	web_url("ping_match.gif", 
		"URL=https://pm.w55c.net/ping_match.gif?st=dmx&rurl=https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D359%26dpuuid%3D_wfivefivec_", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t52.inf", 
		LAST);

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18825%7CMCMID%7C01799298897441612632860320128804029375%7CMCAAMLH-1627016569%7C9%7CMCAAMB-1627016569%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1626418971s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18832%7CvVersion%7C4.4.0; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("rxvt=1626413572424|1626411769347; DOMAIN=itg-live.www8.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("clientlib-hf-fontface.66657a0f54463d4948168672625f6fe1.css", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.66657a0f54463d4948168672625f6fe1.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("clientlib-hpi-hf-r-css.66657a0f54463d4948168672625f6fe1.css", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.66657a0f54463d4948168672625f6fe1.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t54.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("X-HTTP-Method-Override", 
		"POST");

	web_url("fullHashes_find_2", 
		"URL=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINOTEuMC40NDcyLjEyNBIbCg0IBRAGGAEiAzAwMTABEKTlCxoCGAgk70uNEhsKDQgBEAYYASIDMDAxMAEQrpQJGgIYCISFLbASGwoNCAMQBhgBIgMwMDEwARCh8ggaAhgIKnV0UhIbCg0IBxAGGAEiAzAwMTABEJLSCRoCGAij2grAEhkKDQgBEAYYASIDMDAxMAMQFBoCGAix55AtEhoKDQgBEAgYASIDMDAxMAQQsyEaAhgIiO_q5RIZCg0ICRAGGAEiAzAwMTAGEAMaAhgIeaM2dBIaCg0IDxAGGAEiAzAwMTABEOhvGgIYCGG2tb4SGQoNCAoQCBgBIgMwMDEwARAHGgIYCJU1itMSGQoNCAkQBhgBIgMwMDEwARAfGgIYCGuJ5QQSGgoNCAgQBhgBIgMwMDEwARDBDBoCGAiAR5pPEhsKDQgNEAYYASIDMDAxMAEQ-pwBGgIYCMd9s38SGwoNCA4QBh"
		"gBIgMwMDEwARCZ7gUaAhgICQ9MghIaCg0IEBAGGAEiAzAwMTABENoLGgIYCElGtv0aLAgBCAMIBQgGCAcICAgJCAoIDQgOCA8IEBABEAgaBgoE2cKkQCABIAMgBCAG&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("fullHashes_find_3", 
		"URL=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINOTEuMC40NDcyLjEyNBIbCg0IBRAGGAEiAzAwMTABEKTlCxoCGAgk70uNEhsKDQgBEAYYASIDMDAxMAEQrpQJGgIYCISFLbASGwoNCAMQBhgBIgMwMDEwARCh8ggaAhgIKnV0UhIbCg0IBxAGGAEiAzAwMTABEJLSCRoCGAij2grAEhkKDQgBEAYYASIDMDAxMAMQFBoCGAix55AtEhoKDQgBEAgYASIDMDAxMAQQsyEaAhgIiO_q5RIZCg0ICRAGGAEiAzAwMTAGEAMaAhgIeaM2dBIaCg0IDxAGGAEiAzAwMTABEOhvGgIYCGG2tb4SGQoNCAoQCBgBIgMwMDEwARAHGgIYCJU1itMSGQoNCAkQBhgBIgMwMDEwARAfGgIYCGuJ5QQSGgoNCAgQBhgBIgMwMDEwARDBDBoCGAiAR5pPEhsKDQgNEAYYASIDMDAxMAEQ-pwBGgIYCMd9s38SGwoNCA4QBh"
		"gBIgMwMDEwARCZ7gUaAhgICQ9MghIaCg0IEBAGGAEiAzAwMTABENoLGgIYCElGtv0aLAgBCAMIBQgGCAcICAgJCAoIDQgOCA8IEBABEAgaBgoE2cKkQCABIAMgBCAG&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t56.inf", 
		LAST);

	web_revert_auto_header("X-HTTP-Method-Override");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("clientlib-hf-js.82f1b202f0609f34c1d045d2ae2697f4.js", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hf-js.82f1b202f0609f34c1d045d2ae2697f4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t57.inf", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190|601-1-1626411772299|771-1-1626411772425|992-1-1626411772598; DOMAIN=dpm.demdex.net");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D470%26dpuuid%3D%24!%7BTURN_UUID%7D", 
		"URL=https://d.turn.com/r/dd/id/L2NzaWQvMS9jaWQvMjM2NTYzMjkvdC8y/url/https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D470%26dpuuid%3D%24!%7BTURN_UUID%7D", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t58.inf", 
		LAST);

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18825%7CMCMID%7C01799298897441612632860320128804029375%7CMCAAMLH-1627016569%7C9%7CMCAAMB-1627016569%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1626418971s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18832%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1626413572424|1626411769347; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("blank.gif_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/hp-portal-theme-dynamic/themes/html/dynamicSpots/icons/blank.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t59.inf", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190|601-1-1626411772299|771-1-1626411772425|992-1-1626411772598|1123-1-1626411772742; DOMAIN=dpm.demdex.net");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("ps", 
		"URL=https://dp2.33across.com/ps/?pid=897&random=1244195325", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t60.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("filters", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/external/service/scl/filters", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"UseCase\":\"WSP\",\"CountryCd\":\"us\",\"Language\":\"en-US\",\"FilterCdGroup\":\"\",\"ProductLine\":null}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"URL=https://t.contentsquare.net/uxa/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("gtm.js", 
		"URL=https://www.googletagmanager.com/gtm.js?id=GTM-PDHM2PK", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t63.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Client-Data", 
		"CKC1yQEIiLbJAQijtskBCMO2yQEIqZ3KAQjD8coBCNCaywEIoKDLAQis8ssBCN3yywEI7/LLAQi0+MsBCJX5ywEInvnLAQj0+csBCK/6ywEYjp7LARi68ssB");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_url("ChRDaHJvbWUvOTEuMC40NDcyLjEyNBIXCfkmn76S7-UbEgUNt3GaKBIFDVYhJbASLAkD3ob4wW9TNBIFDZ8si0QSBQ2fLItEEgUN3tK-WRIFDWB8RQMSBQ2Vl6UV", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTEuMC40NDcyLjEyNBIXCfkmn76S7-UbEgUNt3GaKBIFDVYhJbASLAkD3ob4wW9TNBIFDZ8si0QSBQ2fLItEEgUN3tK-WRIFDWB8RQMSBQ2Vl6UV?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t64.inf", 
		LAST);

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

	web_custom_request("countries", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/external/service/scl/countries", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t65.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"UseCase\":\"WSP\",\"CountryCd\":\"us\",\"Language\":\"en-US\",\"FilterCdGroup\":\"\",\"ProductLine\":null}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("adsct", 
		"URL=https://analytics.twitter.com/i/adsct?p_user_id=07193148158108801073185555988220201019&p_id=38594", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190|601-1-1626411772299|771-1-1626411772425|992-1-1626411772598|1123-1-1626411772742|903-1-1626411772953|1957-1-1626411773074|3047-1-1626411773186|22052-1-1626411773377|28645-1-1626411773491; DOMAIN=dpm.demdex.net");

	web_add_header("X-Client-Data", 
		"CKC1yQEIiLbJAQijtskBCMO2yQEIqZ3KAQigoMsBCKzyywEI3fLLAQjv8ssBCLT4ywEInvnLAQj0+csBGI6eywE=");

	web_url("pixel", 
		"URL=https://cm.g.doubleclick.net/pixel?google_nid=adobe_dmp&google_cm&gdpr=0&gdpr_consent=&google_hm=MDcxOTMxNDgxNTgxMDg4MDEwNzMxODU1NTU5ODgyMjAyMDEwMTk=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t67.inf", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190|601-1-1626411772299|771-1-1626411772425|992-1-1626411772598|1123-1-1626411772742|903-1-1626411772953|1957-1-1626411773074|3047-1-1626411773186|22052-1-1626411773377|28645-1-1626411773491|30064-1-1626411773721; DOMAIN=dpm.demdex.net");

	web_url("hbpix", 
		"URL=https://idpix.media6degrees.com/orbserv/hbpix?pixId=16873&pcv=70&ptid=66&tpuv=01&tpu=07193148158108801073185555988220201019", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t68.inf", 
		LAST);

	web_add_cookie("OptanonConsent=consentId=a15be3fe-bef6-43a9-8c73-d6747d12e998&datestamp=Fri+Jul+16+2021+04%3A42%3A49+GMT%2B0000+(Greenwich+Mean+Time)&version=6.19.0&interactionCount=0; DOMAIN=www.hp.com");

	web_add_cookie("rxVisitor=1626411769336VLQ8R3CPRCSHQK88B6DUQIVVO90549OU; DOMAIN=www.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=www.hp.com");

	web_add_cookie("dtLatC=1165; DOMAIN=www.hp.com");

	web_add_cookie("dtPC=1$411769328_933h1vSQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0e1; DOMAIN=www.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=www.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18825%7CMCMID%7C01799298897441612632860320128804029375%7CMCAAMLH-1627016569%7C9%7CMCAAMB-1627016569%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1626418971s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18832%7CvVersion%7C4.4.0; DOMAIN=www.hp.com");

	web_add_cookie("rxvt=1626413572424|1626411769347; DOMAIN=www.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("privacy-banner-test.js", 
		"URL=https://www.hp.com/cma/ng/lib/exceptions/privacy-banner-test.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t69.inf", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190|601-1-1626411772299|771-1-1626411772425|992-1-1626411772598|1123-1-1626411772742|903-1-1626411772953|1957-1-1626411773074|3047-1-1626411773186|22052-1-1626411773377|28645-1-1626411773491|30064-1-1626411773721|30646-1-1626411773832; DOMAIN=dpm.demdex.net");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("generic", 
		"URL=https://match.adsrvr.org/track/cmf/generic?ttd_pid=aam&gdpr=0&gdpr_consent=&ttd_tpi=1", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t70.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_url("footericons.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/footericons.woff", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.66657a0f54463d4948168672625f6fe1.css", 
		"Snapshot=t71.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("c.gif", 
		"URL=https://c.bing.com/c.gif?uid=07193148158108801073185555988220201019&Red3=MSAdobe_pd&gdpr=0&gdpr_consent=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("map", 
		"URL=https://servedby.flashtalking.com/map/?key=a74thHgsfK627J6Ftt8sj5ks52bKe&gdpr=0&gdpr_consent=&url=https://dpm.demdex.net/ibs:dpid=3047&dpuuid=[%FT_GUID%]&gdpr=0&gdpr_consent=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t73.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("newhplogo.ttf", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/newhplogo.ttf", 
		"Resource=1", 
		"RecContentType=application/x-font-ttf", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.66657a0f54463d4948168672625f6fe1.css", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("HPSimplifiedRegular.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/clientlib-hf-fontface-core/resources/fonts/HPSimplifiedRegular.woff", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.66657a0f54463d4948168672625f6fe1.css", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("fonts_header_icons.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/fonts_header_icons.woff", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.66657a0f54463d4948168672625f6fe1.css", 
		"Snapshot=t76.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("realtime_2", 
		"URL=https://safebrowsing.google.com/safebrowsing/clientreport/realtime", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t77.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\nvhttps://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex\\x10\\x01\\x1A\\x0C\\x08\\x03\\x10\\x00(\\x030\\x008\\x00@\\x000\\x028\\x07B\\xC8\\x01\nvhttps://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex\\x10\\x01\"\\x00*;https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center0\\x019\\x000\"#\\xDB\\xAAwBP\\x02X\\x00B]\n;https://ppssupport-itgllbh7.inc.hp.com/"
		"us-en/service-center\\x10\\x04\\x1A\\x0B15.72.22.19\"\\x000\\x009\\x00p\\x80!\\xDB\\xAAwBP\\x01X\\x01", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190|601-1-1626411772299|771-1-1626411772425|992-1-1626411772598|1123-1-1626411772742|903-1-1626411772953|1957-1-1626411773074|3047-1-1626411773186|22052-1-1626411773377|28645-1-1626411773491|30064-1-1626411773721|30646-1-1626411773832|73426-1-1626411773944|75557-1-1626411774057|79908-1-1626411774338|121998-1-1626411774462; DOMAIN=dpm.demdex.net");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("utsync.ashx", 
		"URL=https://ml314.com/utsync.ashx?eid=50112&et=0&0&gdpr_consent=&return=https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D22052%26dpuuid%3D[PersonID]", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t78.inf", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190|601-1-1626411772299|771-1-1626411772425|992-1-1626411772598|1123-1-1626411772742|903-1-1626411772953|1957-1-1626411773074|3047-1-1626411773186|22052-1-1626411773377|28645-1-1626411773491|30064-1-1626411773721|30646-1-1626411773832|73426-1-1626411773944|75557-1-1626411774057|79908-1-1626411774338|121998-1-1626411774462|144230-1-1626411774666; "
		"DOMAIN=dpm.demdex.net");

	web_url("sync", 
		"URL=https://gum.criteo.com/sync?c=8&r=1&a=1&u=https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D28645%26dpuuid%3D%40USERID%40%26gdpr%3D0%26gdpr_consent%3D&gdpr=0&gdpr_consent=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("match", 
		"URL=https://ps.eyeota.net/match?bid=6j5b2cv&uid=07193148158108801073185555988220201019&r=https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D30064%26dpuuid%3D%7BUUID_6j5b2cv%7D", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t80.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("fontawesome-webfont.woff", 
		"URL=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/fonts/fontawesome-webfont.woff?v=4.1.0", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css", 
		"Snapshot=t81.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_5D929ECB22E801F546875A5C6C802190_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=SQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0&modifiedSince=1625632737861&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&app=ea7c4b59f27d43eb&crc=4072917464&end=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t82.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1626411754169%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C2%7C2%7CInvalid%20or%20unexpected%20token%7C_error_%7C-%7C1626411772014%7C1626411772014%7Cdn%7C-1%2C3%7C3%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center%5Ep277%5Ep26%7C_location_%7C-%7C1626411772080%7C1626411772080%7Cdn%7C-1%2C3%7C4%7CSyntaxError%3A%20Invalid%20or%20unexpected%20token%7C_stack_%7C-%7C1626411772083%7C1626411772083%7Cdn%7C-1%2C3%7C5%7C2686%7C_ts_%7C-%7C162641177208"
		"5%7C1626411772085%7Cdn%7C-1%2C2%7C6%7CinsertChatBotIframe%20is%20not%20defined%7C_error_%7C-%7C1626411772317%7C1626411772317%7Cdn%7C-1%2C3%7C7%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center%5Ep1794%5Ep96%7C_location_%7C-%7C1626411772319%7C1626411772319%7Cdn%7C-1%2C3%7C8%7CReferenceError%3A%20insertChatBotIframe%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLIFrameElement.onload%20%28https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center%3A1794%3A96%29%7C_stack"
		"_%7C-%7C1626411772321%7C1626411772321%7Cdn%7C-1%2C3%7C9%7C2985%7C_ts_%7C-%7C1626411772322%7C1626411772322%7Cdn%7C-1$PV=1$rId=RID_-114610098$rpId=1365439421$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center$title=HP%20Service%20Center%20Locator%20-%20United%20States%20%7C%20HP%C2%AE%20Customer%20Support$latC=1165$app=ea7c4b59f27d43eb$visitID=SQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0$vs=2$fId=411769328_933$v=10219210628133341$time=1626411774750", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("xdframe-single-domain-1.1.0.html", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t83.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("sn.ashx", 
		"URL=https://abp.mxptint.net/sn.ashx", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("cms", 
		"URL=https://cms.analytics.yahoo.com/cms?partner_id=ADOBE&_hosted_id=07193148158108801073185555988220201019&gdpr=0&gdpr_consent=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t85.inf", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190|601-1-1626411772299|771-1-1626411772425|992-1-1626411772598|1123-1-1626411772742|903-1-1626411772953|1957-1-1626411773074|3047-1-1626411773186|22052-1-1626411773377|28645-1-1626411773491|30064-1-1626411773721|30646-1-1626411773832|73426-1-1626411773944|75557-1-1626411774057|79908-1-1626411774338|121998-1-1626411774462|144230-1-1626411774666|"
		"144231-1-1626411774879; DOMAIN=dpm.demdex.net");

	web_url("pixel.gif", 
		"URL=https://aorta.clickagy.com/pixel.gif?ch=124&cm=07193148158108801073185555988220201019&redir=https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D79908%26dpuuid%3D%7Bvisitor_id%7D", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t86.inf", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190|601-1-1626411772299|771-1-1626411772425|992-1-1626411772598|1123-1-1626411772742|903-1-1626411772953|1957-1-1626411773074|3047-1-1626411773186|22052-1-1626411773377|28645-1-1626411773491|30064-1-1626411773721|30646-1-1626411773832|73426-1-1626411773944|75557-1-1626411774057|79908-1-1626411774338|121998-1-1626411774462|144230-1-1626411774666|"
		"144231-1-1626411774879|144232-1-1626411775087; DOMAIN=dpm.demdex.net");

	web_url("p", 
		"URL=https://ads.scorecardresearch.com/p?c1=9&c2=6034944&c3=2&cs_xi=07193148158108801073185555988220201019&rn=1626411769870&r=https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D73426%26dpuuid%3D07193148158108801073185555988220201019", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t87.inf", 
		LAST);

	web_url("tpid=07193148158108801073185555988220201019", 
		"URL=https://sync.crwdcntrl.net/map/c=9828/tp=ADBE/tpid=07193148158108801073185555988220201019?https%3A%2F%2Fdpm.demdex.net%2Fibs%3Adpid%3D121998%26dpuuid%3D${profile_id}", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t88.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("otSDKStub.js", 
		"URL=https://cdn.cookielaw.org/scripttemplates/otSDKStub.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t89.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("btu4jd3a", 
		"URL=https://sync-tm.everesttech.net/upi/pid/btu4jd3a?redir=https%3A%2F%2Fpixel.rubiconproject.com%2Ftap.php%3Fv%3D7941%26nid%3D2243%26put%3D%24%7BUSER_ID%7D%26expires%3D90", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t90.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("e0a0fc2a-044d-41af-bd55-2f56dd8162df.json", 
		"URL=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e0a0fc2a-044d-41af-bd55-2f56dd8162df.json", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t91.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_revert_auto_header("Origin");

	web_url("9d25aca9-e352-4895-bbbd-ccebc9786c07.js_2", 
		"URL=https://ct.contentsquare.net/ptc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t92.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("ny75r2x0", 
		"URL=https://sync-tm.everesttech.net/upi/pid/ny75r2x0?redir=https%3A%2F%2Fus-u.openx.net%2Fw%2F1.0%2Fsd%3Fid%3D537148856%26val%3D%24%7BTM_USER_ID%7D", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t93.inf", 
		LAST);

	web_url("ZMAwryCI", 
		"URL=https://sync-tm.everesttech.net/upi/pid/ZMAwryCI?redir=https%3A%2F%2Fdsum-sec.casalemedia.com%2Frum%3Fcm_dsp_id%3D88%26external_user_id%3D%24%7BTM_USER_ID%7D", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t94.inf", 
		LAST);

	web_url("b9pj45k4", 
		"URL=https://sync-tm.everesttech.net/upi/pid/b9pj45k4?redir=https%3A%2F%2Fimage2.pubmatic.com%2FAdServer%2FPug%3Fvcode%3Dbz0yJnR5cGU9MSZqcz0xJmNvZGU9MjE5MSZ0bD0yNTkyMDA%3D%26piggybackCookie%3D%24%7BUSER_ID%7D", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("UH6TUt9n", 
		"URL=https://sync-tm.everesttech.net/upi/pid/UH6TUt9n?redir=https%3A%2F%2Fib.adnxs.com%2Fsetuid%3Fentity%3D158%26code%3D%24%7BTM_USER_ID%7D", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t96.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("9d25aca9-e352-4895-bbbd-ccebc9786c07.js_3", 
		"URL=https://ct.contentsquare.net/pcc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js?DeploymentConfigName=Release_20210618&Version=1", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t97.inf", 
		LAST);

	web_url("latest-WR110.js", 
		"URL=https://ct.contentsquare.net/www/latest-WR110.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t98.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("h0r58thg", 
		"URL=https://sync-tm.everesttech.net/upi/pid/h0r58thg?redir=https%3A%2F%2Fsync.search.spotxchange.com%2Fpartner%3Fadv_id%3D6409%26uid%3D%24%7BUSER_ID%7D%26img%3D1", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t99.inf", 
		LAST);

	web_add_cookie("dextp=21-1-1626411771436|269-1-1626411771589|375-1-1626411771704|359-1-1626411771816|60-1-1626411771933|470-1-1626411772078|477-1-1626411772190|601-1-1626411772299|771-1-1626411772425|992-1-1626411772598|1123-1-1626411772742|903-1-1626411772953|1957-1-1626411773074|3047-1-1626411773186|22052-1-1626411773377|28645-1-1626411773491|30064-1-1626411773721|30646-1-1626411773832|73426-1-1626411773944|75557-1-1626411774057|79908-1-1626411774338|121998-1-1626411774462|144230-1-1626411774666|"
		"144231-1-1626411774879|144232-1-1626411775087|144233-1-1626411775199|144234-1-1626411775364|144235-1-1626411775523|144236-1-1626411775650|144237-1-1626411775763|129099-1-1626411775896|139200-1-1626411776010; DOMAIN=dpm.demdex.net");

	web_url("bct", 
		"URL=https://mid.rkdms.com/bct?pid=8bc436aa-e0fc-4baa-9c9a-06fbeca87826&puid=07193148158108801073185555988220201019&_ct=img", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t100.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("location", 
		"URL=https://geolocation.onetrust.com/cookieconsentpub/v1/geo/location", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("otBannerSdk.js", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.18.0/otBannerSdk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t102.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_url("en-us.json", 
		"URL=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e688e508-0267-4c09-a64b-7c03f7e759ce/en-us.json", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t103.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("generic1626109104205.js", 
		"URL=https://nebula-cdn.kampyle.com/us/wu/474882/onsite/generic1626109104205.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t104.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("r7ifn0SL", 
		"URL=https://sync-tm.everesttech.net/upi/pid/r7ifn0SL?redir=https%3A%2F%2Fwww.facebook.com%2Ffr%2Fb.php%3Fp%3D1531105787105294%26e%3D%24%7BTM_USER_ID%7D%26t%3D2592000%26o%3D0", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t105.inf", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ServiceLocator%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("rxvt=1626413576723|1626411769347; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dtPC=1$411769328_933h-vSQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0e1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("favicon.ico", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/hp-portal-theme-static/themes/Portal8.0/images/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t106.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("dcm", 
		"URL=https://s.amazon-adsystem.com/dcm?pid=5c420d2b-f139-4fee-b0c0-89a7b8ce9433", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t107.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("cool-2.1.15.min.js", 
		"URL=https://nebula-cdn.kampyle.com/resources/onsite/js/cool-2.1.15.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t108.inf", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("otPcTab.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.18.0/assets/v2/otPcTab.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("rxvt=1626413572086|1626411769347; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/hp-pps-services/webcontent/secondarynavigation/country/us/language/en", 
		"Resource=1", 
		"RecContentType=application/xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t110.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("__cool.gif", 
		"URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTI4MHg3MjAiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTEuMC40NDcyLjEyNCBTYWZhcmkvNTM3LjM2Iiwic2Vzc2lvbl9wbGF0Zm9ybSI6ICJXaW4zMiIsInRyYWNrZXJfdHlwZSI6ICJqYXZhc2NyaXB0IiwidHJhY2tlcl92ZXJzaW9uIjogIjIuMS4xNSIsImV2ZW50X25hbWUiOiAibmVidWxhX3BhZ2VfdmlldyIsImV2ZW50X3RpbWVzdGFtcF9lcG9jaCI6ICIxNjI2NDExNzc3MTg4IiwiZXZlbnRfdGltZXpvbmVfb2Zmc2V0IjogMCwidXNlcl"
		"9pZCI6ICIxN2FhZGIyM2NhMjlkNy0wMDY3ZTk3MjYyNjY5Zi02MzczMjY0LWUxMDAwLTE3YWFkYjIzY2EzYjk3IiwiZW52aXJvbWVudCI6ICJwcm9kVXNPcmVnb24iLCJhY2NvdW50SWQiOiAzOTM5NzgsInVybCI6ICJodHRwczovL3Bwc3N1cHBvcnQtaXRnbGxiaDcuaW5jLmhwLmNvbS91cy1lbi9zZXJ2aWNlLWNlbnRlciIsIndlYnNpdGVJZCI6IDQ3NDg4MiwiZm9ybUlkIjogbnVsbCwiZm9ybVRyaWdnZXJUeXBlIjogbnVsbCwia2FtcHlsZV9kYXRhIjogeyJMQVNUX0lOVklUQVRJT05fVklFVyI6ICIiLCJERUNMSU5FRF9EQVRFIjogIiIsImthbXB5bGVJbnZpdGVQcmVzZW50ZWQiOiAiIiwia2FtcHlsZV91c2VyaWQiOiAiYmRmNS03Y2RlLTJiMTAtZjU0ZC1j"
		"ZTFiLWY2OTYtZTE3Yy03NDExIiwia2FtcHlsZVVzZXJTZXNzaW9uIjogIjE2MjY0MTE3NzcxNTQiLCJrYW1weWxlVXNlclBlcmNlbnRpbGUiOiAiIiwiU1VCTUlUVEVEX0RBVEUiOiAiIn0sImNvb2tpZV9zaXplIjogMTY0MSwia2FtcHlsZV92ZXJzaW9uIjogIjIuMzkuMCIsIm9uc2l0ZV92ZXJzaW9uIjogIjIuMzkuMCIsImhpc3RvcnlfbGVuZ3RoIjogMSwiZXZlbnRfbG9jYWxfdGltZXN0YW1wIjogMTYyNjQxMTc3NzE1NywicG9zaXRpb24iOiBudWxsLCJpc1VzZXJJZGVudGlmaWVkIjogZmFsc2UsImZlZWRiYWNrX2NvcnJlbGF0aW9uX3V1aWQiOiBudWxsfQpdfQ==", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t111.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("otCenterRounded.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.18.0/assets/otCenterRounded.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("auth", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&1781443618&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"20e105ec-d9fc-a9a0-9287-3e510f579ab7\",\"sessionNumber\":1,\"pageNumber\":1},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("pageview", 
		"URL=https://c.contentsquare.net/pageview?pid=1255&uu=20e105ec-d9fc-a9a0-9287-3e510f579ab7&sn=1&lv=1626411777&lhd=1626411777&hd=1626411777&pn=1&re=1&dw=1579&dh=1453&ww=1600&wh=762&sw=1280&sh=720&dr=&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&uc=1&la=en-US&cvars=%7B%221%22%3A%5B%22Template%22%2C%22ServiceLocator%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&cvarp="
		"%7B%221%22%3A%5B%22Template%22%2C%22ServiceLocator%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&v=10.14.2&r=241596", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("pageEvent", 
		"URL=https://c.contentsquare.net/pageEvent?value=MIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgNlIA4gAA&isETR=false&v=10.14.2&pid=1255&uu=20e105ec-d9fc-a9a0-9287-3e510f579ab7&sn=1&pn=1&r=434564", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("A353853-8e85-4786-9645-fac6b773cd071.js", 
		"URL=https://d.impactradius-event.com/A353853-8e85-4786-9645-fac6b773cd071.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t116.inf", 
		LAST);

	web_url("pixel.js", 
		"URL=https://www.redditstatic.com/ads/pixel.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t117.inf", 
		LAST);

	web_add_header("X-Client-Data", 
		"CKC1yQEIiLbJAQijtskBCMO2yQEIqZ3KAQigoMsBCKzyywEI3fLLAQjv8ssBCLT4ywEInvnLAQj0+csBGI6eywE=");

	web_url("conversion_async.js", 
		"URL=https://www.googleadservices.com/pagead/conversion_async.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("bat.js", 
		"URL=https://bat.bing.com/bat.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("7kxod6.js", 
		"URL=https://px.owneriq.net/stas/s/7kxod6.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("gtm.js_2", 
		"URL=https://www.googletagmanager.com/gtm.js?id=GTM-MQML682", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t121.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("tr", 
		"URL=https://www.facebook.com/tr?id=1688171794549438&ev=PageView&noscript=1&gtmcb=1347560731", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t122.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_url("WR1113b.js", 
		"URL=https://ct.contentsquare.net/www/WR1113b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t123.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("realtime_3", 
		"URL=https://safebrowsing.google.com/safebrowsing/clientreport/realtime", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\nNhttps://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6796981781591098788J&l=true\\x10\\x01\\x1A\\x0C\\x08\\x03\\x10\\x00(\\x030\\x008\\x00@\\x000\\x028\\x07B\\xAB\\x01\nNhttps://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6796981781591098788J&l=true\\x10\\x01\"\\x0Babout:blank*;https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center0\\x019\\x00  $\\xDB\\xAAwBP\\x02X\\x00B\\x9A\\x01\n\\x0Babout:blank\\x10\\x04\"\\x00*;https://ppssupport-itgllbh7.inc.hp.com/us-en/"
		"service-center0\\x009\\x00\\xC0\\x1F$\\xDB\\xAAwBJ;https://ppssupport-itgllbh7.inc.hp.com/us-en/service-centerP\\x02X\\x00B]\n;https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center\\x10\\x04\\x1A\\x0B15.72.22.19\"\\x000\\x009\\x00p\\x80!\\xDB\\xAAwBP\\x01X\\x01", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("j", 
		"URL=https://px.owneriq.net/j/?ref=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center&pt=7kxod6&t=f%7C%22HP%2520Service%2520Center%2520Locator%2520-%2520United%2520States%2520%257C%2520HP%25C2%25AE%2520Customer%2520Support%22&s=6ka7", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("13015798.js", 
		"URL=https://bat.bing.com/p/action/13015798.js", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t126.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("eps", 
		"URL=https://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6796981781591098788J&l=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("0", 
		"URL=https://bat.bing.com/action/0?ti=13015798&tm=gtm001&Ver=2&mid=e4783f81-0ea9-4460-a944-41125e7558b2&sid=16b55e90e5f311ebb9eef100f3db9988&vid=16b5d2b0e5f311eb8339adb5272b3607&vids=1&pi=1200101525&lg=en-US&sw=1280&sh=720&sc=24&tl=HP%20Service%20Center%20Locator%20-%20United%20States%20%7C%20HP%C2%AE%20Customer%20Support&kw=HP%20Service%20Center,%20HP%20Service%20Locator,%20HP%20Authorized%20Service%20Provider&p=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&r=&lt=22566&evt="
		"pageLoad&msclkid=N&sv=1&rn=619642", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sd", 
		"URL=https://us-u.openx.net/w/1.0/sd?id=537073059&val=Q6796981781591098788J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("379208.gif", 
		"URL=https://idsync.rlcdn.com/379208.gif?partner_uid=Q6796981781591098788J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t130.inf", 
		LAST);

	web_url("setuid", 
		"URL=https://ib.adnxs.com/setuid?entity=13&code=Q6796981781591098788J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t131.inf", 
		LAST);

	web_url("ibs_dpid=53196&dpuuid=Q6796981781591098788J", 
		"URL=https://dpm.demdex.net/ibs_dpid=53196&dpuuid=Q6796981781591098788J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t132.inf", 
		LAST);

	web_url("tap.php", 
		"URL=https://pixel.rubiconproject.com/tap.php?v=11581&nid=2395&put=Q6796981781591098788J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t133.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("ytc.js", 
		"URL=https://s.yimg.com/wi/ytc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t134.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("v3", 
		"URL=https://ct.pinterest.com/v3/?event=init&tid=2613604734453&noscript=1&gtmcb=1760007710", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t135.inf", 
		LAST);

	web_add_cookie("l; DOMAIN=px.owneriq.net");

	web_url("ep", 
		"URL=https://px.owneriq.net/ep?sid%5B%5D=14558759877&sid%5B%5D=14558759882&sid%5B%5D=14558759887&sid%5B%5D=8460259172&sid%5B%5D=8460259192&pt=7kxod6&uid=Q6796981781591098788J&jcs=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("X-Client-Data", 
		"CKC1yQEIiLbJAQijtskBCMO2yQEIqZ3KAQigoMsBCKzyywEI3fLLAQjv8ssBCLT4ywEInvnLAQj0+csBGI6eywE=");

	web_url("687393200", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/687393200/?random=1626411778748&cv=9&fst=1626411778748&num=1&userId=null&guid=ON&resp=GooglemKTybQhCsO&u_h=720&u_w=1280&u_ah=680&u_aw=1280&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg7e0&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&tiba=HP%20Service%20Center%20Locator%20-%20United%20States%20%7C%20HP%C2%AE%20Customer%20Support&hn=www.googleadservices.com&async=1&"
		"rfmt=3&fmt=4", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("854101013", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/854101013/?random=1626411778760&cv=9&fst=1626411778760&num=1&guid=ON&resp=GooglemKTybQhCsO&u_h=720&u_w=1280&u_ah=680&u_aw=1280&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg7e0&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&tiba=HP%20Service%20Center%20Locator%20-%20United%20States%20%7C%20HP%C2%AE%20Customer%20Support&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t138.inf", 
		LAST);

	web_revert_auto_header("X-Client-Data");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("rum", 
		"URL=https://dsum.casalemedia.com/rum?cm_dsp_id=31&external_user_id=Q6796981781591098788J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("1", 
		"URL=https://tapestry.tapad.com/tapestry/1?ta_partner_id=916&ta_partner_did=Q6796981781591098788J&ta_format=png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("Pug", 
		"URL=https://simage2.pubmatic.com/AdServer/Pug?vcode=bz0yJnR5cGU9MSZjb2RlPTI2NDYmdGw9MTI5NjAw&piggybackCookie=Q6796981781591098788J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t141.inf", 
		LAST);

	web_add_cookie("rxVisitor=1626411769336VLQ8R3CPRCSHQK88B6DUQIVVO90549OU; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtSa=-; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtLatC=1165; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18825%7CMCMID%7C01799298897441612632860320128804029375%7CMCAAMLH-1627016569%7C9%7CMCAAMB-1627016569%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1626418971s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18832%7CvVersion%7C4.4.0; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_c=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ServiceLocator%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("rxvt=1626413576723|1626411769347; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dtPC=1$411769328_933h-vSQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0e1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_id=20e105ec-d9fc-a9a0-9287-3e510f579ab7.1626411777.1.1626411777.1626411777.1589380098.1660575777574.None.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_s=1.1.0.1626413577588; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("OptanonConsent=consentId=a15be3fe-bef6-43a9-8c73-d6747d12e998&datestamp=Fri+Jul+16+2021+05%3A02%3A57+GMT%2B0000+(Greenwich+Mean+Time)&version=6.18.0&interactionCount=0&isGpcEnabled=0&isIABGlobal=false&hosts=&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dcm_s=1626411777857.1500548035; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_gcl_au=1.1.1983044494.1626411778; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_prefs=100000; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_answ=0; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("WRUID=3380697139446167; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_rdt_uuid=1626411778486.7b760338-8444-4260-8f8a-4c932f58677f; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_uetsid=16b55e90e5f311ebb9eef100f3db9988; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_uetvid=16b5d2b0e5f311eb8339adb5272b3607; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_5105=1626411778766%7C365159%7C1626411778766%7C%7C; DOMAIN=linkto.ext.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("5105", 
		"URL=https://linkto.ext.hp.com/xc/365159/342132/5105", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=srcref=&landurl=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&&_ir=U368%7C%7C1626411778766", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("wr", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/wr/?3380697139446167&325&11&0&0&0&8&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body=Khttps://ppssupport-itgllbh7.inc.hp.com/us-en/service-center&Az9EicPconsole.info('DeploymentConfigName%3DRelease_20210618%26Version%3D1')%3B&87YoConfig: Release_20210618&AbSL6ZASL6ZACYrWECYrL6A8Cyw8NeaCh91&Win32&SLQUAAYXqtseK5&0&SL6ZASL6ZAF/1en-us&AAAAAAAAAAAARNBBCYrL6AAMBBBB8aCXAtECBeverything&&CXBtEAQAlwAAtEEBlogin-modal&&BCCtEAQBtEAAtEBAtEAAlmAA&AA&BXDtEAQAlwAAtEFBheader&&BCEtEBQDsOAAtEAAtEAAtEBAtEAAlmAFsearchHP&searchHP&&AA&BXFtEFBonetrust-consent-sdk&&DCGtECRonetrust-banner-sdk&F&"
		"CGMBMCDVMg&BQGA", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("p_2", 
		"URL=https://www.ojrq.net/p/?return=&cid=5105&tpsync=no", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t144.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("10044594.json", 
		"URL=https://s.yimg.com/wi/config/10044594.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("wr_2", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/wr/?3380697139446167&325&11&1&0&1&8&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body=qisMobile&false&9GIRWB+C8hR8BCOBHZQ{\"type\":\"jsupload\",\"encoding\":\"UTF-8\",\"length\":772177}&A", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("getuid", 
		"URL=https://secure.adnxs.com/getuid?https%3A%2F%2Fpx.owneriq.net%2Feucm%2Fp%2Fapndmp%3Foi%3D1%26tid%3D$UID", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t147.inf", 
		LAST);

	web_url("5w3jqr4k", 
		"URL=https://sync-tm.everesttech.net/upi/pid/5w3jqr4k?redir=https%3A%2F%2Fcm.g.doubleclick.net%2Fpixel%3Fgoogle_nid%3Dg8f47s39e399f3fe%26google_push%26google_sc%26google_hm%3D%24%7BTM_USER_ID_BASE64ENC_URLENC%7D", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://hp.demdex.net/", 
		"Snapshot=t148.inf", 
		LAST);

	web_add_header("X-Client-Data", 
		"CKC1yQEIiLbJAQijtskBCMO2yQEIqZ3KAQigoMsBCKzyywEI3fLLAQjv8ssBCLT4ywEInvnLAQj0+csBGI6eywE=");

	web_url("pixel_2", 
		"URL=https://cm.g.doubleclick.net/pixel?google_nid=owneriq1&google_cm&google_sc&google_ula=1174&google_hm=UTY3OTY5ODE3ODE1OTEwOTg3ODhK&esi=1", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t149.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("wr_3", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/wr/?3380697139446167&325&11&2&1&0&105&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		"EncType=", 
		body_variable_1, 
		LAST);

	web_add_cookie("NID=219=Jbg-xHwZdK1sK1ZIQO4Cadlg-SnuTCeFMxSyds-jA7w3qRSu7YxYu6DruM-pYl2ebULzkygAcSyvdzViNP01lpCGlnaAQok-jv61kU5LY0qTxaP6O34PC_79R2N3TvC6mdT8Zt5UDK_Oh2h8r7NkVNOHWa5jYPkQeCVubk4Mxik; DOMAIN=www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("X-Client-Data", 
		"CKC1yQEIiLbJAQijtskBCMO2yQEIqZ3KAQigoMsBCKzyywEI3fLLAQjv8ssBCLT4ywEInvnLAQj0+csBGI6eywE=");

	web_url("849111477", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/849111477/?guid=ON&script=0&userId=null&gtmcb=1720203923", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t151.inf", 
		LAST);

	web_url("783157761", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/783157761/?guid=ON&script=0&userId=null&gtmcb=1659059172", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t152.inf", 
		LAST);

	web_url("854101013_2", 
		"URL=https://www.google.com/pagead/1p-user-list/854101013/?random=1626411778760&cv=9&fst=1626411600000&num=1&guid=ON&u_h=720&u_w=1280&u_ah=680&u_aw=1280&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg7e0&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&tiba=HP%20Service%20Center%20Locator%20-%20United%20States%20%7C%20HP%C2%AE%20Customer%20Support&async=1&fmt=3&is_vtc=1&random=235393414&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t153.inf", 
		LAST);

	web_url("687393200_2", 
		"URL=https://www.google.com/pagead/1p-user-list/687393200/?random=1626411778748&cv=9&fst=1626411600000&num=1&userId=null&guid=ON&u_h=720&u_w=1280&u_ah=680&u_aw=1280&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg7e0&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&tiba=HP%20Service%20Center%20Locator%20-%20United%20States%20%7C%20HP%C2%AE%20Customer%20Support&async=1&fmt=3&is_vtc=1&random=1243630770&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t154.inf", 
		LAST);

	web_revert_auto_header("X-Client-Data");

	web_url("sp.pl", 
		"URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&d=Fri%2C%2016%20Jul%202021%2005%3A03%3A01%20GMT&n=0&b=HP%20Service%20Center%20Locator%20-%20United%20States%20%7C%20HP%C2%AE%20Customer%20Support&.yp=10044594&f=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&enc=UTF-8&yv=1.10.1&tagmgr=gtm%2Censighten", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t155.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("X-Client-Data", 
		"CKC1yQEIiLbJAQijtskBCMO2yQEIqZ3KAQjD8coBCNCaywEIoKDLAQis8ssBCN3yywEI7/LLAQi0+MsBCJX5ywEInvnLAQj0+csBCK/6ywEYjp7LARi68ssB");

	web_add_auto_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_auto_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_url("ChRDaHJvbWUvOTEuMC40NDcyLjEyNBIzCUN5HxPjSdbkEgUNnyyLRBIFDZ8si0QSBQ0Ci2uwEgUN3tK-WRIFDWB8RQMSBQ2Vl6UV", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTEuMC40NDcyLjEyNBIzCUN5HxPjSdbkEgUNnyyLRBIFDZ8si0QSBQ0Ci2uwEgUN3tK-WRIFDWB8RQMSBQ2Vl6UV?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t156.inf", 
		LAST);

	web_url("ChRDaHJvbWUvOTEuMC40NDcyLjEyNBI6CcORbJ4wij6fEgUNnyyLRBIFDZ8si0QSBQ0Ci2uwEgUN3tK-WRIFDWB8RQMSBQ2Vl6UVEgUNpZM2JA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTEuMC40NDcyLjEyNBI6CcORbJ4wij6fEgUNnyyLRBIFDZ8si0QSBQ0Ci2uwEgUN3tK-WRIFDWB8RQMSBQ2Vl6UVEgUNpZM2JA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t157.inf", 
		LAST);

	web_revert_auto_header("X-Client-Data");

	web_revert_auto_header("X-Goog-Api-Key");

	web_revert_auto_header("X-Goog-Encode-Response-If-Executable");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_url("collect", 
		"URL=https://px.ads.linkedin.com/collect/?pid=40922&fmt=gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t158.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("consentreceipts", 
		"URL=https://privacyportaluat.onetrust.com/request/v1/consentreceipts", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,fbgcedjacmlbgleddnoacbnijgmiolem,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,hnkcfpcejkafcihlgbojoidoihckciin,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-91.0.4472.124");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:3116232486&cup2hreq=4d8c1a26f2180886bb22ae28f4f686499e7b3250e8b3f853d38d977461297ccb", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{221b2da4-fc6b-48b4-9b03-2bb33a8aecbd}\",\"rd\":5309},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{bcf10186-f3fc-493f-ab7d-845b225f7fdf}\",\"rd\":5309},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{49b27383-e7db-4828-b325-f8c913cddbf2}\",\"rd\":5309},\"updatecheck\":{"
		"},\"version\":\"14.5\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{4ed43149-9283-4072-a130-9ac55132c396}\",\"rd\":5309},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"fbgcedjacmlbgleddnoacbnijgmiolem\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\""
		"packages\":{\"package\":[{\"fp\":\"1.c564aa8894768ab480d997d923c48118a3e5d3add652b34f59b11fe0e96a89cb\"}]},\"ping\":{\"ping_freshness\":\"{85cc99c0-5e3f-45cd-af77-08c4879d5445}\",\"rd\":5309},\"updatecheck\":{},\"version\":\"2.3\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{3c033145-dec1-421d-b7c1-9bef3ac460f7}\",\"rd\":5309},\""
		"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.d116fa8d8ee309f01340fb6f3d2ad314a7b7c8bdf22dd9b6af4c22b1a6923461\"}]},\"ping\":{\"ping_freshness\":\"{a9eaafdf-44e7-4ab5-91c4-0e239472a1e0}\",\"rd\":5309},\"updatecheck\":{},\"version\":\"1.31.0\"},{\"appid\":\"hnkcfpcejkafcihlgbojoidoihckciin\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.35\"}]},\"ping\":{\"ping_freshness\":\"{99d00d00-363b-4d8f-ac75-6f38cbefdb7f}\",\"rd\":5309},\"updatecheck\":{},\"version\":\"1.35\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.81e3a4d43a73699e1b7781723f56b8717175c536685c5450122b30789464ad82\"}]},\"ping\":{\"ping_freshness\":\""
		"{f1e0db72-0acb-47e6-bc29-8e3d7a880117}\",\"rd\":5309},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.7f4e382d1c6724a5f173f3617e35d5ad74c28ffce9a918f00b48c88f978dc34e\"}]},\"ping\":{\"ping_freshness\":\"{4a548a34-322d-4d2e-841f-f1ac4179443a}\",\"rd\":5309},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\""
		"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.3bba8f43f392ecbc35b582986edcbf7c6591081b63f3f0214f8eed1d239b0f60\"}]},\"ping\":{\"ping_freshness\":\"{9f0f4a10-474c-4669-b92a-12717b59926c}\",\"rd\":5309},\"updatecheck\":{},\"version\":\"9121.329.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch"
		"\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.14393.4402\"},\"prodversion\":\"91.0.4472.124\",\"protocol\":\"3.1\",\"requestid\":\"{6a39d4e9-93be-4266-adda-e31670ebfc50}\",\"sessionid\":\"{40f8ecd0-bef8-4172-a744-56178f005368}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.92\"},\"updaterversion\":\"91.0.4472.124\"}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("consentreceipts_2", 
		"URL=https://privacyportaluat.onetrust.com/request/v1/consentreceipts", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"requestInformation\":\""
		"eyJhbGciOiJSUzUxMiJ9.eyJvdEp3dFZlcnNpb24iOjEsInByb2Nlc3NJZCI6ImNjZGQxZWQzLTY2NDQtNDhiNy1hM2EyLWYyMjZjZWJiNThkZiIsInByb2Nlc3NWZXJzaW9uIjo3OCwiaWF0IjoiMjAyMC0wNi0yNFQxNzoyMDoxOC4zIiwibW9jIjoiQ09PS0lFIiwic3ViIjoiQ29va2llIFVuaXF1ZSBJZCIsImlzcyI6bnVsbCwidGVuYW50SWQiOiI3M2FmNzhjNS02MjQ1LTQyYjktYWNhZS1lYmQ1NTNhZWI0NTciLCJkZXNjcmlwdGlvbiI6IlRoaXMgY29sbGVjdGlvbiBwb2ludCBjYXB0dXJlcyB0aGUgY3VycmVudCBzaXRlIHZpc2l0b3IgY29uc2VudCBwcmVmZXJlbmNlcyBmb3IgdGhlIGRvbWFpbjogaHAuY29tLWVuIHNwZWNpZmllZC4iLCJjb25zZW50VHlwZ"
		"SI6IkNPT0tJRUJBTk5FUiIsImRvdWJsZU9wdEluIjpmYWxzZSwicmVjb25maXJtQWN0aXZlUHVycG9zZSI6ZmFsc2UsImR5bmFtaWNDb2xsZWN0aW9uUG9pbnQiOmZhbHNlLCJhdXRoZW50aWNhdGlvblJlcXVpcmVkIjpmYWxzZSwicG9saWN5X3VyaSI6ImhwLmNvbSIsImFsbG93Tm90R2l2ZW5Db25zZW50cyI6ZmFsc2UsInB1cnBvc2VzIjpbeyJpZCI6ImU0YzhiYjlkLTdjMDUtNGJkNy1hMWE5LTBiZDFiOGZjMDg5NSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImM2ZjY5NDkzLTA5ODUtNDhhOC1iZDllLTk2ZjgyYzg1MzYyMCIsInZlcnNpb24iOjE4LCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI"
		"6W119LHsiaWQiOiI1NGRiYThlYS0xNzgyLTRiOWUtYmVmNC03ZThhMjQyMjI3OTciLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJjNGYzNWFmZi01YmUyLTQxZGItODcwNS03YmQ2NDM4NWMwOTgiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiIzMDllYzcxOC02NGQzLTQ2ZDItYTAwZC01YWU0NmNhNGZhMTEiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiI1NDM0MmI4Zi1lNjg1LTQ0YzAtYTgwMS03YTkzMjNiZGVmMTMiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119L"
		"HsiaWQiOiJmZDhjZDU0NC1lMzMyLTRmYWMtODZkYS04MDQyOWNjZWVkYmEiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiI1NzU2NjlmZi1lOTUwLTQ1OWEtYmY4NS1lNWQ3ZmE5N2FjMDYiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiIyMWJiMzJhNi02ZWYzLTRlYmEtOTdhYy0zODYzMDM5YTE3NzIiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJhNWQ0MWIwZi1hM2NlLTQ3NDgtYjFhMC1mMGM0NTExNzIxN2EiLCJ2ZXJzaW9uIjozNiwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7Iml"
		"kIjoiZDIwYTRlMWItMzUzYy00NTdmLTllNGEtYWJmNTYyNzkzYWRmIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiYTg1ZjY3ZWUtYWEwNS00NmEzLWFlMDctY2Q3Mjc4N2IxMWZkIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiMTU5YjMzNTYtOTQwYS00ODc4LThjZWMtY2E2NzgyM2EyNWM3IiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiYWE3ZmFiODEtNGFlNS00ZDJkLTkyNGItOWNkZDU3YTFlZDUxIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiM"
		"DYzYWZlZDktZDcxNC00MTc2LTliMDQtYWUyYWY3ZDEwZTQyIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiNTkwZmYxMDUtMjUxMi00NzIzLWFhMTMtN2YzMjM0OGQxNTlkIiwidmVyc2lvbiI6MTgsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImMyOGU4ZGMzLWY0ZWMtNGViOC1iOTUwLWI2MzA5ZDZkN2I4MSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImEzMzEwZmFkLTI4MTctNDIxMy1iMzliLTkzMTM0YjRlNDk3MCIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImFmZGE"
		"wZGFmLTFmYmEtNDQ5Zi04ODY2LTkwMzkzMTE0ZGVlMyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjQyZTVjNDQ5LTljZDQtNDU5NC1iMGY5LTIyNDMxMjM2OTRkYyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImMzMzcxYzhjLTg1ZDEtNDMwNC05OWM5LWQ3OGI3NzMyYzg1ZiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImZmZmU4NDFjLTRhZTYtNDkwOC05NGVmLTk4YzcwNGFkZGQwOCIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjViMTU2N2M0L"
		"Tk5OGEtNGQ4OS1iMjk5LTZlNWQ3YWU2NjAxMyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImVkZWZhZjRmLWE0NGItNDQyNi04M2MyLTg5NjcyNGIwYjI0NSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjRjNzYzYzUzLTgyZWUtNDliNS1iMTI5LTFjZTkzMGZiNWFjNiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImRmZDJjYjk5LTM4MzYtNDhkMC04ZGQxLTVjM2VjNzBlMzFhZiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImY5ZGJkNDc1LWM0NDE"
		"tNGVkMi1hMDE1LWZkNTUzNzI2MjE3MiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImZiZjBjZjcxLWRmNjEtNDU4YS05NDk0LTUxMjAyNzk4YzM2YyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImJjZGZlYTVlLWYyZDUtNDgyZC04MzlmLTZmMGI1Y2UyZGU3OSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImMzZWVlZThjLTg5MDQtNGRhZi1iZmI3LWIxZjZjMGQwOWU0YSIsInZlcnNpb24iOjM1LCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119XSwibm90aWNlcyI6W10sImRzRGF0YUVsZ"
		"W1lbnRzIjpbIlVzZXJBZ2VudCIsIkNvdW50cnkiLCJJbnRlcmFjdGlvblR5cGUiXX0.UGDgAg-OTUbShlooQiV5u_5eHc75E5vDFShz3b6cHz3gMmsJx56Wt6NFfK2JQJSOeaxkO8pSrFVoU12KeckZK0OZ6v6kUz0Ud8D9pRtN_GMJZtnzM8JIqGlWsK47iDwp7djUfuWeOsZWQdgocy3dlhxTnpYqK8M3s5RJIfVPPedkBGOpIXjgMHHdsD5l5lz5qK_TmE_OCm7rfm3lSetKlGD9IWSPc4czeYCWMs4pL5OVaXtjHIkCjX5-vVITj1KguVYJ-o1teBCfeY9DVFYUQvmgeZuJ86iz-OGWduZug75mZ_F-761bibM2s2JiqFfeDjxYbWFg8L62b7EFQgOa7ab1ob7SL6GnLSIMg0SES3rV8IUj8fkseWITKhxpTK9O9-4NzTJQFsFA2ikL7x7M6jk8Vrgt7Kv1AETmSl4rHXfK3AJ_-o7"
		"uegt0OYs45V4p1wn_tQaKMNOS3tqbafA5a8yGtRG_y0rzrv_IiLzLnoGy1kRinIwKlEP5b_DK4rx1dHhhtkfJpU_oHRMVu_1YDSS792nCMKkc9MLW_mPTIVrDFiJW_-vUW4Buu1GV4TNTIPGCjUVtGDQ76FvJA67NY_-VetRmGNXEKhWAyt5KWV_0aZa4WwZdcsXKalAPYQvIF3_oBnwLBFYyVmISMc9ImF2OwhUdnSFuoZzuxaHG6Bk\",\"identifier\":\"a15be3fe-bef6-43a9-8c73-d6747d12e998\",\"customPayload\":{\"Interaction\":1,\"AddDefaultInteraction\":false},\"isAnonymous\":true,\"test\":false,\"purposes\":[{\"Id\":\"A85F67EE-AA05-46A3-AE07-CD72787B11FD\",\"TransactionType\":\""
		"NO_CHOICE\"},{\"Id\":\"590FF105-2512-4723-AA13-7F32348D159D\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"C6F69493-0985-48A8-BD9E-96F82C853620\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"FFFE841C-4AE6-4908-94EF-98C704ADDD08\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"C3EEEE8C-8904-4DAF-BFB7-B1F6C0D09E4A\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"A5D41B0F-A3CE-4748-B1A0-F0C45117217A\",\"TransactionType\":\"CONFIRMED\"}],\"dsDataElements\":{\"InteractionType\":\"Banner - Close\",\""
		"Country\":\"US\",\"UserAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.124 Safari/537.36\"}}", 
		LAST);

	web_custom_request("wr_4", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/wr/?3380697139446167&325&11&3&0&2&8&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body=qcm_buffer_timing_fix&25184&9GJgP_"
		"(%5B%7B%22type%22%3A0%2C%22addedNodes%22%3A%5B%7B%22nodeType%22%3A1%2C%22id%22%3A%22IMG20%22%2C%22type%22%3A1%2C%22parentNode%22%3A%22BODY1%22%2C%22tagName%22%3A%22IMG%22%2C%22attributes%22%3A%7B%22border%22%3A%220%22%2C%22alt%22%3A%22%22%2C%22aria-hidden%22%3A%22true%22%2C%22src%22%3A%22https%3A%2F%2Fidsync.rlcdn.com%2F455679.gif%3Fpartner_uid%3D18064665-e5f3-11eb-bce2-51f00b79700c%22%2C%22width%22%3A%220%22%2C%22height%22%3A%220%22%2C%22style%22%3A%22position%3A%20absolute%3B%20visibility%3A%20h"
		"idden%3B%20width%3A%200px%3B%20height%3A%200px%3B%20border%3A%200px%3B%22%7D%7D%5D%2C%22removedNodes%22%3A%5B%5D%7D%2C%7B%22type%22%3A0%2C%22addedNodes%22%3A%5B%7B%22nodeType%22%3A1%2C%22id%22%3A%22IMG21%22%2C%22type%22%3A1%2C%22parentNode%22%3A%22BODY1%22%2C%22tagName%22%3A%22IMG%22%2C%22attributes%22%3A%7B%22border%22%3A%220%22%2C%22alt%22%3A%22%22%2C%22aria-hidden%22%3A%22true%22%2C%22src%22%3A%22https%3A%2F%2Fwww.ojrq.net%2Fp%2F%3Freturn%3D%26cid%3D5105%26tpsync%3Dno%22%2C%22width%22%3A%220%22"
		"%2C%22height%22%3A%220%22%2C%22style%22%3A%22position%3A%20absolute%3B%20visibility%3A%20hidden%3B%20width%3A%200px%3B%20height%3A%200px%3B%20border%3A%200px%3B%22%7D%7D%5D%2C%22removedNodes%22%3A%5B%5D%7D%5D)&8W1P_"
		"(%5B%7B%22type%22%3A0%2C%22addedNodes%22%3A%5B%7B%22nodeType%22%3A1%2C%22id%22%3A%22IMG22%22%2C%22type%22%3A1%2C%22parentNode%22%3A%22BODY1%22%2C%22tagName%22%3A%22IMG%22%2C%22attributes%22%3A%7B%22class%22%3A%22ywa-10000%22%2C%22src%22%3A%22https%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%3Fa%3D10000%26d%3DFri%252C%252016%2520Jul%25202021%252005%253A03%253A01%2520GMT%26n%3D0%26b%3DHP%2520Service%2520Center%2520Locator%2520-%2520United%2520States%2520%257C%2520HP%25C2%25AE%2520Customer%2520Support%26."
		"yp%3D10044594%26f%3Dhttps%253A%252F%252Fppssupport-itgllbh7.inc.hp.com%252Fus-en%252Fservice-center%26enc%3DUTF-8%26yv%3D1.10.1%26tagmgr%3Dgtm%252Censighten%22%2C%22alt%22%3A%22dot%20image%20pixel%22%2C%22style%22%3A%22display%3A%20none%3B%22%7D%7D%5D%2C%22removedNodes%22%3A%5B%5D%7D%5D)&8GsP_([{\"type\":1,\"attribute\":{\"attributeName\":\"style\",\"attributeValue\":\"z-index: auto;\",\"id\":\"DIV757\"}}])&8asP_([{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue\":\""
		"wpr-search-container\",\"id\":\"DIV378\"}}])&8DeP_([{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue\":\"ot-pc-scrollbar ot-sdk-row\",\"id\":\"DIV794\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue\":\"ot-hide ot-enbl-chr\",\"id\":\"SECTION5\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"style\",\"attributeValue\":\"visibility: hidden; opacity: 0; transition: visibility 0s ease 400ms, opacity 400ms linear 0s;\",\"id\":\"DIV869\"}},{\"type\":0,"
		"\"addedNodes\":[{\"nodeType\":3,\"id\":\"#text4080\",\"type\":1,\"parentNode\":\"SPAN253\",\"textContent\":\"Your Privacy [`dialog closed`]\"}],\"removedNodes\":[]},{\"type\":1,\"attribute\":{\"attributeName\":\"style\",\"attributeValue\":\"visibility: hidden; opacity: 0; transition: visibility 0s ease 400ms, opacity 400ms linear 0s;\",\"id\":\"DIV788\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"style\",\"attributeValue\":\"visibility: hidden; opacity: 0; transition: visibility 0s ease 400ms"
		", opacity 400ms linear 0s;\",\"id\":\"DIV789\"}}])&8ChP_([{\"type\":0,\"addedNodes\":[],\"removedNodes\":[{\"id\":\"#text1772\"}]},{\"type\":0,\"addedNodes\":[],\"removedNodes\":[{\"id\":\"#text1840\"}]},{\"type\":1,\"attribute\":{\"attributeName\":\"style\",\"attributeValue\":\"display: none;\",\"id\":\"DIV381\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"style\",\"attributeValue\":\"display: none;\",\"id\":\"DIV396\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue"
		"\":\"search-bar link_metrics\",\"id\":\"INPUT16\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue\":\"search_trigger_onenter search-bar tab-search link_metrics\",\"id\":\"INPUT17\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue\":\"wpr-search-bar\",\"id\":\"DIV379\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"style\",\"attributeValue\":\"display: none;\",\"id\":\"UL48\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\""
		"attributeValue\":\"hide\",\"id\":\"LI238\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue\":\"icon-dwn secnav-dropdown-carrot\",\"id\":\"SPAN93\"}}])&XP_([{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue\":\"main-nav customDropdown\",\"id\":\"DIV656\"}}])&VP_([{\"type\":1,\"attribute\":{\"attributeName\":\"style\",\"attributeValue\":\"visibility: hidden; opacity: 0; transition: visibility 0s ease 400ms, opacity 400ms linear 0s; display: none;\",\""
		"id\":\"DIV869\"}}])&8FWP_([{\"type\":1,\"attribute\":{\"attributeName\":\"style\",\"attributeValue\":\"visibility: hidden; opacity: 0; transition: visibility 0s ease 400ms, opacity 400ms linear 0s; display: none;\",\"id\":\"DIV788\"}}])&DP_([{\"type\":1,\"attribute\":{\"attributeName\":\"style\",\"attributeValue\":\"visibility: hidden; opacity: 0; transition: visibility 0s ease 400ms, opacity 400ms linear 0s; display: none;\",\"id\":\"DIV789\"}}])&Bqcm_buffer_timing_fix&29559&F", 
		LAST);

	web_add_cookie("s_p_cnt=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv1_prefs=null; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("mdLogger=false; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyle_userid=bdf5-7cde-2b10-f54d-ce1b-f696-e17c-7411; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1626411777154; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleSessionPageCounter=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("cd_user_id=17aadb23ca29d7-0067e97262669f-6373264-e1000-17aadb23ca3b97; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=20e105ec-d9fc-a9a0-9287-3e510f579ab7.1626411777.1.1626411777.1626411777.1589380098.1660575777574.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=1.1.0.1626413577588; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dcm_s=1626411777857.1500548035; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_gcl_au=1.1.1983044494.1626411778; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("WRUID=3380697139446167; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_rdt_uuid=1626411778486.7b760338-8444-4260-8f8a-4c932f58677f; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetsid=16b55e90e5f311ebb9eef100f3db9988; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetvid=16b5d2b0e5f311eb8339adb5272b3607; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_5105=1626411778766%7C365159%7C1626411778766%7C%7C; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1&rpv_325_www11=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_PI=18064665-e5f3-11eb-bce2-51f00b79700c%7C1626498178766; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-07-16T05:03:03.310Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=consentId=a15be3fe-bef6-43a9-8c73-d6747d12e998&datestamp=Fri+Jul+16+2021+05%3A03%3A03+GMT%2B0000+(Greenwich+Mean+Time)&version=6.18.0&interactionCount=1&isGpcEnabled=0&isIABGlobal=false&hosts=&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=no%20value; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=%5B%5BB%5D%5D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=https%253A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center%2C52%2C52%2C762%2C1600%2C762%2C1280%2C720%2C1.2%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_5D929ECB22E801F546875A5C6C802190_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=SQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0&modifiedSince=1625632737861&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&app=ea7c4b59f27d43eb&crc=181338277&end=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1626411754169%7C1626411776735%7Cdn%7C2334%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C2%7CInvalid%20or%20unexpected%20token%7C_error_%7C-%7C1626411772014%7C1626411772014%7Cdn%7C-1%2C3%7C3%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center%5Ep277%5Ep26%7C_location_%7C-%7C1626411772080%7C1626411772080%7Cdn%7C-1%2C3%7C4%7CSyntaxError%3A%20Invalid%20or%20unexpected%20token%7C_stack_%7C-%7C1626411772083%7C1626411772083%7"
		"Cdn%7C-1%2C3%7C5%7C2686%7C_ts_%7C-%7C1626411772085%7C1626411772085%7Cdn%7C-1%2C2%7C6%7CinsertChatBotIframe%20is%20not%20defined%7C_error_%7C-%7C1626411772317%7C1626411772317%7Cdn%7C-1%2C3%7C7%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center%5Ep1794%5Ep96%7C_location_%7C-%7C1626411772319%7C1626411772319%7Cdn%7C-1%2C3%7C8%7CReferenceError%3A%20insertChatBotIframe%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLIFrameElement.onload%20%28https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com"
		"%2Fus-en%2Fservice-center%3A1794%3A96%29%7C_stack_%7C-%7C1626411772321%7C1626411772321%7Cdn%7C-1%2C3%7C9%7C2985%7C_ts_%7C-%7C1626411772322%7C1626411772322%7Cdn%7C-1%2C2%7C10%7C_onload_%7C_load_%7C-%7C1626411776724%7C1626411776735%7Cdn%7C2334%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$PV=1$rId=RID_-114610098$rpId=1365439421$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center$title="
		"HP%20Service%20Center%20Locator%20-%20United%20States%20%7C%20HP%C2%AE%20Customer%20Support$latC=1165$app=ea7c4b59f27d43eb$visitID=SQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0$vs=2$fId=411769328_933$v=10219210628133341$time=1626411787606", 
		LAST);

	web_add_cookie("NID=219=Jbg-xHwZdK1sK1ZIQO4Cadlg-SnuTCeFMxSyds-jA7w3qRSu7YxYu6DruM-pYl2ebULzkygAcSyvdzViNP01lpCGlnaAQok-jv61kU5LY0qTxaP6O34PC_79R2N3TvC6mdT8Zt5UDK_Oh2h8r7NkVNOHWa5jYPkQeCVubk4Mxik; DOMAIN=adservice.google.com");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("X-Client-Data", 
		"CKC1yQEIiLbJAQijtskBCMO2yQEIqZ3KAQigoMsBCKzyywEI3fLLAQjv8ssBCLT4ywEInvnLAQj0+csBGI6eywE=");

	web_url("activity;src=9848580;type=irid;cat=irid;ord=.1626411778766", 
		"URL=https://ad.doubleclick.net/activity;src=9848580;type=irid;cat=irid;ord=.1626411778766?", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t164.inf", 
		LAST);

	web_revert_auto_header("X-Client-Data");

	web_url("activity;src=2305757;type=marke0;cat=hp_na0;ord=1626411777857.1500548035;gtm=2wg7e0;auiddc=1983044494.1626411778;u42=ppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center", 
		"URL=https://ad.doubleclick.net/activity;src=2305757;type=marke0;cat=hp_na0;ord=1626411777857.1500548035;gtm=2wg7e0;auiddc=1983044494.1626411778;u42=ppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center?", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t165.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("wr_5", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/wr/?3380697139446167&325&11&4&0&3&8&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body=qcm_buffer_timing_fix&29564&9HN8P_([{\"type\":0,\"addedNodes\":[],\"removedNodes\":[{\"id\":\"IFRAME6\"}]}])&9BLnP_([{\"type\":0,\"addedNodes\":[],\"removedNodes\":[{\"id\":\"SCRIPT77\"}]}])&Aqcm_buffer_timing_fix&34408&F", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("455679.gif", 
		"URL=https://idsync.rlcdn.com/455679.gif?partner_uid=18064665-e5f3-11eb-bce2-51f00b79700c", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t167.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_5D929ECB22E801F546875A5C6C802190_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=SQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0&modifiedSince=1625632737861&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&app=ea7c4b59f27d43eb&crc=907516114&end=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1626411754169%7C1626411777817%7Cdn%7C2334%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C11%7C_event_%7C1626411754169%7C_vc_%7CV%7C23648%5Epc%7CVCD%7C14507%7CVCDS%7C18%7CVCS%7C22747%7CVCO%7C26395%7CVCI%7C0%7CVE%7C0%5Ep0%5Ep468%5Eps%5Esp%3Afirst-child%3Ea%3Anth-child%282%29%7CS%7C18271%2C2%7C12%7C_event_%7C1626411754169%7C_wv_%7ClcpE%7CH1%7ClcpSel%7C%23hpProductContextPageTitle%7ClcpS%7C16600%7ClcpT%7C18137%7ClcpU%7C-%7Cfcp%7C18137%7Cfp%7C1"
		"8110%7Ccls%7C0.1091%7Clt%7C4455%7CfIS%7C28772%7CfID%7C2%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C2%7CInvalid%20or%20unexpected%20token%7C_error_%7C-%7C1626411772014%7C1626411772014%7Cdn%7C-1%2C3%7C3%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center%5Ep277%5Ep26%7C_location_%7C-%7C1626411772080%7C1626411772080%7Cdn%7C-1%2C3%7C4%7CSyntaxError%3A%20Invalid%20or%20unexpected%20token%7C_stack_%7C-%7C1626411772083%7C1626411772083%7Cdn%7C-1%2C3%7C5%7C2686%7C_ts_%7C-%7C1626411772085%"
		"7C1626411772085%7Cdn%7C-1%2C2%7C6%7CinsertChatBotIframe%20is%20not%20defined%7C_error_%7C-%7C1626411772317%7C1626411772317%7Cdn%7C-1%2C3%7C7%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center%5Ep1794%5Ep96%7C_location_%7C-%7C1626411772319%7C1626411772319%7Cdn%7C-1%2C3%7C8%7CReferenceError%3A%20insertChatBotIframe%20is%20not%20defined%5Ep%20%20%20%20at%20HTMLIFrameElement.onload%20%28https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center%3A1794%3A96%29%7C_stack_%"
		"7C-%7C1626411772321%7C1626411772321%7Cdn%7C-1%2C3%7C9%7C2985%7C_ts_%7C-%7C1626411772322%7C1626411772322%7Cdn%7C-1%2C2%7C10%7C_onload_%7C_load_%7C-%7C1626411776724%7C1626411776735%7Cdn%7C2334%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C13%7C_event_%7C1626411754169%7C_view_%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-114610098$rpId=1365439421$domR=1626411776721$tvn=%2Fus-en%2Fservice-center$tvt=1626411754169$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1600$h=762$sw=1280$sh=720$nt="
		"a0b1626411754169e90f1733g1737h1737i2330j1877k2330l13643m13647o18290p18290q18588r22552s22555t22566u23982v22699w94824M1365439421$ni=4g|10$fd=j1.10.2^sg1.5.6^sb11-50^scontentsquare$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center$title=HP%20Service%20Center%20Locator%20-%20United%20States%20%7C%20HP%C2%AE%20Customer%20Support$latC=1165$app=ea7c4b59f27d43eb$visitID=SQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0$vs=2$fId=411769328_933$v=10219210628133341$vID="
		"1626411769336VLQ8R3CPRCSHQK88B6DUQIVVO90549OU$nV=1$nVAT=1$time=1626411791462", 
		LAST);

	web_add_cookie("dtLatC=3; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("rb_935c74cb-e05b-4251-b9be-19dec14df8b7_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/rb_935c74cb-e05b-4251-b9be-19dec14df8b7?type=js&session=v_4_srv_1_sn_5D929ECB22E801F546875A5C6C802190_perc_100000_ol_0_mul_1_app-3Aea7c4b59f27d43eb_1&svrid=1&flavor=post&visitID=SQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0&modifiedSince=1625632737861&referer=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center&app=ea7c4b59f27d43eb&crc=1417495975&end=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/service-center", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fus-en%2Fservice-center$tvt=1626411754169$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|10$3p="
		"1-1626411754169%3Bppssupport-itgllbh7.inc.hp.com%7Cm%7C8%7C0%7C0%7C0%7C0%7C8%7C%7C0%7C0%7C0%7C13667_15835_18588_18698_22865_22915%7C1617%7C50%7C2161%7C8%7C0%7C0%7C0%7C0%7C8%7C%7C0%7C0%7C0%7C13667_15770%7C1987%7C1870%7C2102%7C19%7C0%7C0%7C0%7C13663_16146_18110_23273%7C1367%7C122%7C5162%3Bcdn.optimizely.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C13664_15271%7C1606%7C1606%7C1606%3Bnetdna.bootstrapcdn.com%7Co%7C1%7C0%7C0%7C0%7C13665_15299%7C1634%7C1634%7C1634%7C1%7C0%7C0%7C0%7C19905_20935%7C1030"
		"%7C1030%7C1030%3Bnexus.ensighten.com%7Cm%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C15305_15648%7C343%7C343%7C343%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C13667_15238_15707_15840%7C612%7C129%7C1571%7C1%7C0%7C0%7C0%7C15310_15695%7C385%7C385%7C385%3Bssl.www8.hp.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C13667_15774%7C2107%7C2107%7C2107%3Bitg-live.www8.hp.com%7Cs%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C18325_18677%7C352%7C352%7C352%7C2%7C0%7C0%7C0%7C18315_18564%7C189%7C128%7C249%7C5%7C0%7C0%7C0%"
		"7C13668_17818_18829_20174%7C1779%7C1003%7C4151%3Bnebula-cdn.kampyle.com%7C4%7C3%7C0%7C0%7C0%7C0%7C3%7C%7C0%7C0%7C0%7C13668_16008_22565_22885_22975_23003%7C897%7C28%7C2341%3Bdpm.demdex.net%7Cg%7C1%7C0%7C0%7C0%7C15265_15766%7C501%7C501%7C501%3Bhp.demdex.net%7Cg%7C1%7C0%7C0%7C0%7C15785_17196%7C1411%7C1411%7C1411%3Bmet2.hp.com%7Cg%7C1%7C0%7C0%7C0%7C15788_17163%7C1375%7C1375%7C1375%3Bcm.everesttech.net%7Cg%7C1%7C0%7C0%7C0%7C17184_17270%7C86%7C86%7C86%3Bt.contentsquare.net%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C"
		"%7C0%7C0%7C0%7C18290_19555%7C1266%7C1266%7C1266%3Bwww.googletagmanager.com%7C4%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C18349_19561_23800_24393%7C902%7C593%7C1211%3Bwww.hp.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C18818_19769%7C951%7C951%7C951%3Bcsxd.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C20338_20933%7C596%7C596%7C596%3Bcdn.cookielaw.org%7Ck%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C20961_21254_22438_22536%7C196%7C98%7C293%7C4%7C0%7C0%7C0%7C21562_21869_22552_22903_22953_23411%7C315%7C142%7C"
		"458%3Bct.contentsquare.net%7C4%7C4%7C0%7C0%7C0%7C0%7C4%7C%7C0%7C0%7C0%7C21356_22012_22021_22225_24005_24400%7C341%7C108%7C656%3Bgeolocation.onetrust.com%7Cg%7C1%7C0%7C0%7C0%7C21882_22435%7C553%7C553%7C553%3Bzn_0pxrmhobblncaad-hpsupport.siteintercept.qualtrics.com%7Cg%7C2%7C0%7C0%7C0%7C22557_22746%7C98%7C13%7C182%3Budc-neb.kampyle.com%7C2%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C23035_23321%7C287%7C287%7C287%3Bwr-us.contentsquare.net%7Cg%7C1%7C0%7C0%7C0%7C23430_24001%7C571%7C571%7C571%3Bc.contentsq"
		"uare.net%7Cg%7C2%7C0%7C0%7C0%7C23431_24264%7C701%7C571%7C830%3Bd.impactradius-event.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C23684_24276%7C592%7C592%7C592%3Bbat.bing.com%7Ck%7C2%7C0%7C0%7C0%7C0%7C2%7C%7C0%7C0%7C0%7C23685_24297_24395_24562%7C390%7C167%7C613%7C0%7C1%7C0%7C0%7C24562_24633%7C71%7C71%7C71%3Bwww.redditstatic.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C23685_24277%7C592%7C592%7C592%3Bwww.googleadservices.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C23686_24277%7C592%7C59"
		"2%7C592%3Bs.yimg.com%7C4%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C23800_25039%7C1239%7C1239%7C1239%3Bpx.owneriq.net%7Ck%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C23801_24297%7C496%7C496%7C496%7C2%7C0%7C0%7C0%7C24387_24629%7C208%7C175%7C241%3Bwww.facebook.com%7Cg%7C1%7C0%7C0%7C0%7C23802_24336%7C534%7C534%7C534%3Bct.pinterest.com%7Cg%7C1%7C0%7C0%7C0%7C23802_25077%7C1276%7C1276%7C1276%3Bad.doubleclick.net%7Cg%7C1%7C0%7C0%7C0%7C23802_33566%7C9764%7C9764%7C9764%3Bgoogleads.g.doubleclick.net%7Cg%7C4%7C0%"
		"7C0%7C0%7C23802_27418%7C2779%7C2016%7C3616%3Balb.reddit.com%7C2%7C1%7C0%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C24324_26390%7C2066%7C2066%7C2066%3Bidsync.rlcdn.com%7C2%7C0%7C1%7C0%7C0%7C0%7C1%7C%7C0%7C0%7C0%7C26739_26739%7C0%7C0%7C0$rt="
		"1-1626411754169%3Bhttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Ffonts%2Fhps%2Flatin-e-regular-woff.woff%7Cb13663e0f0g0h0i0j0k22l88m171u45362v44944w44944I11M2079192335%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Ffonts%2Fhps%2Flatin-e-bold-woff.woff%7Cb13663e0f0g0h0i0j0k25l87m122u42638v42220w42220I11M-891190948%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-port"
		"al-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Ffonts%2Fhps%2Flatin-e-light-woff.woff%7Cb13663e0f0g0h0i0j0k125l171m253u54978v54560w54560I11M1228916786%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Ffonts%2Fhps%2Flatin-e-regular-italic-woff.woff%7Cb13663e0f88g88h88i122j88k133l171m253u51243v50824w50824I11M-1140185827%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Ffonts%2Fhps%2Flati"
		"n-e-bold-italic-woff.woff%7Cb13663e0f0g0h0i0j0k171l248m425u49517v49100w49100I11M844424575%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Ffonts%2Fhps%2Flatin-e-light-italic-woff.woff%7Cb13664e0f133g133h133i249j133k252l425m434u52575v52156w52156I11M-1327428489%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Ffonts%2Fhps%2Fhp_5Fsupport_5Fcontrols.woff%7Cb13664e0f173g173h173i249j173"
		"k252l424m432u19742v19324w19324I11M1737310789%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Ffonts%2Fhps%2Fhp_5Ficomoon.woff%7Cb13664e0f0g0h0i0j0k253l424m432u23030v22612w22612I11M1767174633%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Ffonts%2Fglyphicons-halflings-regular.woff%7Cb13664e0f0g0h0i0j0k253l424m433u23710v23292w23292I11M-219818877%7Chttps%3A%2F%2Fcdn.optimizely.com%"
		"2Fjs%2F19578177762.js%7Cb13664e0f249g259h259i514j318k514l1604m1606u1168v91w87K1I11%7Chttps%3A%2F%2Fnetdna.bootstrapcdn.com%2Ffont-awesome%2F4.1.0%2Fcss%2Ffont-awesome.min.css%7Cb13665e0f250g387h387i1581j422k1581l1625m1634u5761v4650w20766K1I11%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2FBootstrap.js%7Cb13667e0m1571K1I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Fimages%2Fhp-logo-modal.gif%7Cb13667e0f0g0h0i0j0k2036l20"
		"95m2102u3737v3386w3386N3O70P70I7M1512410040%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Fimages%2FloadingHp.gif%7Cb13667e0f0g0h0i0j0k2042l2095m2104u1827v1475w1475N3O60P60I7M-1487638008%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Fjs%2Fjqueryv1_5F10_5F2.js%7Cb13667e0f0g0h0i0j0k1742l1814m1875u38557v38145w93107K1I12M1368016574%7Chttps%3A%2F%2Fssl.www8.hp.com%2Fus%2Fen%2Fscri"
		"pts%2Fframework%2Fjquery%2Fv-1-8%2Fcan.jquery.js%7Cb13667e0m2107K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fcaas%2Fheader-footer%2Fus%2Fen%2Fdefault%2Flatest.r%3FcontentType%3Djs%26hide_5Fsearch%3Dtrue%26show_5Fshopping_5Fcart%3Dtrue%26hide_5Fcountry_5Fselector%3Dtrue%7Cb13668e0m4151K1I12%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fwu%2F474882%2Fonsite%2Fembed.js%7Cb13668e0m2341I12%7Cppssupport-itgllbh7.inc.hp.com%2F..%2FqualtricsLoader.js%7Cb13668c0d1986e2023f2023g2023h2023i2023j2023k2030l2094m2102"
		"u2142v737w1318K1I12M-1748593881%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwps%2Fcontenthandler%2Fpps%2F%21ut%2Fp%2Fdigest%21Gu1JQ18jiCIB-gUpmFgFTw%2Fsp%2Fmashup%3Ara%3Acollection%7Cb13668e0f0g0h0i0j0k1752l1874m2031u184596v183305w1152385K1I11M-816735738%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwps%2Fcontenthandler%2Fpps%2F%21ut%2Fp%2Fdigest%213JKaotSk_5FgMd0aUfF0xN-w%2Fmashup%2Fra%3Acollection%7Cb13668e0f0g0h0i0j0k1755l1873m2033u284176v282483w1119974K1I12M-2063060252%7Chttps%3A%2F%2F"
		"ppssupport-itgllbh7.inc.hp.com%2Fwps%2FthemeModules%2Fthemes%2Fhtml%2FdynamicSpots%2Ficons%2Fblank.gif%7Cb13668e0f0g0h0i0j0k2098l2119m2122u607v64w43N3O1P1I7M1884099740%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwps%2Fhp-support-common-portlets%2Fresources%2Fv1%2Fjs%2Fget_5Fto_5Fknow_5Fwin.js%7Cb13668e0f0g0h0i0j0k1758l1813m1870u847v441w971K1I12M6316395%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwps%2Fhp-support-common-portlets%2Fresources%2Fv1%2Fjs%2FContactSecondaryNavigation.js%7Cb136"
		"68e0f0g0h0i0j0k1813l1873m1985u9441v9029w30314K1I12M-1797109725%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwps%2Fhp-support-common-portlets%2Fresources%2Fv1%2Fjs%2Fcsrf.js%7Cb13668e0f0g0h0i0j0k1988l2006m2007u892v483w959K1I12M-823829138%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fgme-hp%7Cb13674c0d2159e2165f2165g2165h2165i2165j2165k2171l2405m2472u1054v18446744073709552000I12M-1721731210%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwps%2Fhp-support-contact-portlets%2Fresources%2Fv1%2Fjs%2Fservi"
		"ceLocator.js%7Cb13674e0f0g0h0i0j0k1987l2010m2011u3454v3045w9032K1I12M715431032%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwps%2Fhp-support-contact-portlets%2Fresources%2Fv1%2Fjs%2FserviceLocatorMap.js%7Cb13674e0f0g0h0i0j0k1990l2010m2012u4888v4478w16894K1I12M673201362%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Fimages%2Ftoronto_5FAvatar.png%7Cb13674e0f0g0h0i0j0k2103l2133m2161u12623v12271w12271E1F1225O35P35Q251R251I7M714077162%7C"
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Fimages%2Fclose_5Fwhite.png%7Cb13674e0f0g0h0i0j0k2106l2133m2160u937v587w587N3O64P63I7M1166185135%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Fimages%2Fsession_5Ftimeout.png%7Cb13674e0f0g0h0i0j0k2106l2121m2122u7249v6897w6897N3O116P116I7M1318222023%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwps%2Fcontenthandler%2Fpps%2F%21ut%2"
		"Fp%2Fdigest%21nAHmxwT-K1ischyBWmt1ig%2Fmashup%2Fra%3Acollection%7Cb13674e0f0g0h0i0j0k2003l2404m2408u3087v1949w4974K1I12M-1031534650%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fwps%2Fcontenthandler%2Fpps%2F%21ut%2Fp%2Fdigest%213JKaotSk_5FgMd0aUfF0xN-w%2Fmashup%2Fra%3Acollection%7Cb13675e0f0g0h0i0j0k2013l2090m2102u99558v97375w396697K1I12M1193866765%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fstatic%2Fhp-portal-theme-static%2Fthemes%2FPortal8.0%2Fhp%2Fjs%2Fcontentsquare.js%7Cb13675e0f0g0h0i"
		"0j0k2014l2033m2035u1120v713w1795K1I12M95706353%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_5Fvisid_5Fver%3D4.4.0%26d_5Ffieldgroup%3DMC%26d_5Frtbd%3Djson%26d_5Fver%3D2%26d_5Forgid%3D5E34123F5245B2CD0A490D45_2540AdobeOrg%26d_5Fnsid%3D0%26ts%3D1626411769433%7Cb15265e0m501z1I1%7Chttps%3A%2F%2Fnexus.ensighten.com%2Ferror%2Fe.gif%7Cb15305e0m343I7%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2FserverComponent.php%7Cb15310e0m385K1I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fc"
		"ode%2Fc0518ade78e95e05809767e6b5816485.js%3FconditionId0%3D422765%7Cb15707e0m134I12%7Chttps%3A%2F%2Fnexus.ensighten.com%2Fhp%2Fsupport_5Fstage%2Fcode%2F3ce08cf7c65e410fd9cf20d6115a04e1.js%3FconditionId0%3D285030%7Cb15707e0m129I12%7Chttps%3A%2F%2Fhp.demdex.net%2Fdest5.html%3Fd_5Fnsid%3D0%23https_253A_252F_252Fppssupport-itgllbh7.inc.hp.com%7Cb15785e0m1411Bi0I4%7Chttps%3A%2F%2Fmet2.hp.com%2Fid%3Fd_5Fvisid_5Fver%3D4.4.0%26d_5Ffieldgroup%3DA%26mcorgid%3D5E34123F5245B2CD0A490D45_2540AdobeOrg%26mid%3D01"
		"799298897441612632860320128804029375%26ts%3D1626411769956%7Cb15788e0m1375z1I1%7Chttps%3A%2F%2Fcm.everesttech.net%2Fcm%2Fdd%3Fd_5Fuuid%3D07193148158108801073185555988220201019%7Cb17184e0m86I7%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fhp-pps-services%2Fwebcontent%2Fsecondarynavigation%2Fcountry%2Fus%2Flanguage%2Fen%7Cb18110e0f0g0h0i0j0k4l5161m5162u3881v601w1868z1I1M-1222963365%7Cppssupport-itgllbh7.inc.hp.com%2F..%2Fgme-hp%7Cb18135c0d8e130f130g130h130i130j130k133l172m557u419v18446744073709552"
		"000I12M654743403%7Chttps%3A%2F%2Ft.contentsquare.net%2Fuxa%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%7Cb18290e0m1266I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlibs-fonts%2Fus%2Fen%2Fclientlib-hf-fontface.66657a0f54463d4948168672625f6fe1.css%7Cb18315e0m128K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-r-css.66657a0f54463d4948168672625f6fe1.css%7Cb18315e0m249"
		"K1I11%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hf-js.82f1b202f0609f34c1d045d2ae2697f4.js%7Cb18325e0m352K1I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtm.js%3Fid%3DGTM-PDHM2PK%7Cb18349e0m1211I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fexternal%2Fservice%2Fscl%2Ffilters%7Cb18388e0f0g0h0i0j0k178l925m929u881v447w1303z1I1M581049244%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fexternal%2Fservice%2Fscl%2Fcountries%7Cb183"
		"89e0f0g0h0i0j0k179l1164m1166u1658v1224w5572z1I1M294939944%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fhp-pps-services%2Fwebcontent%2Fimage%2Furl%3Fsitearea%3Dall-pages_252Fchat-bot%26component%3Dimage-component%7Cb18562e0f0g0h0i0j0k93l4130m4181u475v125w106z1I1M876652241%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fhp-portal-theme-dynamic%2Fthemes%2Fhtml%2FdynamicSpots%2Ficons%2Fblank.gif%7Cb18588e0f0g0h0i0j0k85l109m111u390v43w43I9M482265894%7Chttps%3A%2F%2Fwww.hp.com%2Fcma%2Fng%2Flib%2Fex"
		"ceptions%2Fprivacy-banner-test.js%7Cb18818e0m951K1I12%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Ffootericons.woff%7Cb18829e0m1003I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Fnewhplogo.ttf%7Cb18829e0m1057I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globaln"
		"av%2Fclientlibs-fonts%2Fclientlib-hf-fontface-core%2Fresources%2Ffonts%2FHPSimplifiedRegular.woff%7Cb18830e0m1341I9%7Chttps%3A%2F%2Fitg-live.www8.hp.com%2Fetc.clientlibs%2FHPIT-AEM-GLOBALNAV%2Fclientlibs-globalnav%2Fclientlib-hpi-hf-css%2Fresources%2Ffonts%2Ffonts_5Fheader_5Ficons.woff%7Cb18830e0m1345I9%7Chttps%3A%2F%2Fnetdna.bootstrapcdn.com%2Ffont-awesome%2F4.1.0%2Ffonts%2Ffontawesome-webfont.woff%3Fv%3D4.1.0%7Cb19905e0f607g607h607i817j617k819l874m1030u84838v83760w83760I9%7Chttps%3A%2F%2Fcsxd.co"
		"ntentsquare.net%2Fuxa%2Fxdframe-single-domain-1.1.0.html%3Fpid%3D1255%26cookieNames%3D_5Fcs_5Fid%5Ec_5Fcs_5Fs%5Ec_5Fcs_5Fcvars%5Ec_5Fcs_5Fex%7Cb20338e0m596Bi3I4%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2FotSDKStub.js%7Cb20961e0m293K1I12%7Chttps%3A%2F%2Fct.contentsquare.net%2Fptc%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%7Cb21356e0m656I12%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df%2Fe0a0fc2a-044d-41af-bd55-2f56dd8162df.json%7Cb21562e0m307z1I1%7Chtt"
		"ps%3A%2F%2Fgeolocation.onetrust.com%2Fcookieconsentpub%2Fv1%2Fgeo%2Flocation%7Cb21882e0m553I12%7Chttps%3A%2F%2Fct.contentsquare.net%2Fpcc%2F9d25aca9-e352-4895-bbbd-ccebc9786c07.js%3FDeploymentConfigName%3DRelease_5F20210618%26Version%3D1%7Cb22021e0m108I12%7Chttps%3A%2F%2Fct.contentsquare.net%2Fwww%2Flatest-WR110.js%7Cb22021e0m204I12%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.18.0%2FotBannerSdk.js%7Cb22438e0m98I12%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fconsent%2Fe0a0fc2a-044d-41af-bd55-2f"
		"56dd8162df%2Fe688e508-0267-4c09-a64b-7c03f7e759ce%2Fen-us.json%7Cb22552e0m351z1I2%7Chttps%3A%2F%2Fzn_5F0pxrmhobblncaad-hpsupport.siteintercept.qualtrics.com%2FWRSiteInterceptEngine%2F%7Cb22557e0m13K1I12%7Chttps%3A%2F%2Fzn_5F0pxrmhobblncaad-hpsupport.siteintercept.qualtrics.com%2FWRSiteInterceptEngine%2F%7Cb22564e0m182K1I12%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fus%2Fwu%2F474882%2Fonsite%2Fgeneric1626109104205.js%7Cb22565e0m320I12%7Chttps%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fhp-portal-theme-s"
		"tatic%2Fthemes%2FPortal8.0%2Fimages%2Ffavicon.ico%7Cb22865e0f0g0h0i0j0k29l50m50u1504v1150w1150I22M1928620915%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.18.0%2Fassets%2FotCenterRounded.json%7Cb22953e0m458z1I2%7Chttps%3A%2F%2Fcdn.cookielaw.org%2Fscripttemplates%2F6.18.0%2Fassets%2Fv2%2FotPcTab.json%7Cb22953e0m142z1I2%7Chttps%3A%2F%2Fnebula-cdn.kampyle.com%2Fresources%2Fonsite%2Fjs%2Fcool-2.1.15.min.js%7Cb22975e0m28I12%7Chttps%3A%2F%2Fudc-neb.kampyle.com%2Fegw%2F5%2Fqceuv8449dzg58ptt1bhd"
		"a9g8ue19c7s%2Ftrack%2F_5F_5Fcool.gif%7Cb23035e0m287I7%7Chttps%3A%2F%2Fwr-us.contentsquare.net%2Fctn_5Fv2%2Fauth%2F%3Fpid%3D325%26as%3D1%261781443618%26subsid%3D232897%26msgsize%3D120%7Cb23430e0m571z1I1%7Chttps%3A%2F%2Fc.contentsquare.net%2Fpageview%7Cb23431e0f28g104h104i357j157k357l570m571u474I7%7Chttps%3A%2F%2Fc.contentsquare.net%2FpageEvent%3Fvalue%3DMIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgNlIA4gAA%26isETR%3Dfalse%26v%3D10.14.2%26pid%3D1255%26uu%3D20e105ec-d9fc-a9a0-9287-3e510f579ab7%26sn%3D1%26"
		"pn%3D1%26r%3D434564%7Cb23434e0f24g154h154i566j196k566l828m830u474I7%7Chttps%3A%2F%2Fd.impactradius-event.com%2FA353853-8e85-4786-9645-fac6b773cd071.js%7Cb23684e0m592I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb23685e0m613I12%7Chttps%3A%2F%2Fwww.redditstatic.com%2Fads%2Fpixel.js%7Cb23685e0m592I12%7Chttps%3A%2F%2Fwww.googleadservices.com%2Fpagead%2Fconversion_5Fasync.js%7Cb23686e0f11g15h15i388j24k388l577m592u14783v13901w36559I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb23800e0m1239I12%7Chttps%3A%"
		"2F%2Fwww.googletagmanager.com%2Fgtm.js%3Fid%3DGTM-MQML682%7Cb23800e0m593I12%7Chttps%3A%2F%2Fpx.owneriq.net%2Fstas%2Fs%2F7kxod6.js%7Cb23801e0m496I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%3Fid%3D1688171794549438%26ev%3DPageView%26noscript%3D1%26gtmcb%3D1347560731%7Cb23802e0m534I7%7Chttps%3A%2F%2Fct.pinterest.com%2Fv3%2F%3Fevent%3Dinit%26tid%3D2613604734453%26noscript%3D1%26gtmcb%3D1760007710%7Cb23802e0m1276I7%7Cad.doubleclick.net%2F..%2F..src%3D2305757%5Estype%3Dmarke0%5Escat%3Dhp_5Fna0%5Esord%3D162"
		"6411777857.1500548035%5Esgtm%3D2wg7e0%5Esauiddc%3D1983044494.1626411778%5Esu42%3Dppssupport-itgllbh7.inc.hp.com_252Fus-en_252Fservice-center%3F%7Cb23802c0d8990e8995f8995g8995h8995i8995j8995k9705l9763m9764u695v42w42I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F849111477%2F%3Fguid%3DON%26script%3D0%26userId%3Dnull%26gtmcb%3D1720203923%7Cb23802c0d2584e2593f3197g3197h3197i3358j3209k3385l3462m3463u768v42w42I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fvie"
		"wthroughconversion%2F783157761%2F%3Fguid%3DON%26script%3D0%26userId%3Dnull%26gtmcb%3D1659059172%7Cb23802c0d2583e2589f2589g2589h2589i2589j2589k3463l3614m3616u768v42w42I7%7Chttps%3A%2F%2Fct.contentsquare.net%2Fwww%2FWR1113b.js%7Cb24005e0m395I12%7Chttps%3A%2F%2Falb.reddit.com%2Frp.gif%7Cb24324e0m2066I7%7Chttps%3A%2F%2Fpx.owneriq.net%2Feps%3Fpt%3D7kxod6%26pid%3D8088%26uid%3DQ6796981781591098788J%26l%3Dtrue%7Cb24387e0m241BiI4%7Chttps%3A%2F%2Fpx.owneriq.net%2Fj%2F%7Cb24388e0m175I12%7Chttps%3A%2F%2Fbat.b"
		"ing.com%2Fp%2Faction%2F13015798.js%7Cb24395e0m167I12%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb24562e0m71A1N3I7%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F687393200%2F%7Cb24590e0f4g4h4i1794j15k1796l2009m2019u2097v1047w1687K1I12%7Chttps%3A%2F%2Fgoogleads.g.doubleclick.net%2Fpagead%2Fviewthroughconversion%2F854101013%2F%7Cb24592e0f15g15h15i1793j33k1794l2011m2016u1929v1039w1668K1I12%7Chttps%3A%2F%2Fidsync.rlcdn.com%2F455679.gif%3Fpartner_5Fuid%3D18064665-e5f3-11"
		"eb-bce2-51f00b79700c%7Cb26739m0A1N3S10497I0$url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fservice-center$title=HP%20Service%20Center%20Locator%20-%20United%20States%20%7C%20HP%C2%AE%20Customer%20Support$latC=3$app=ea7c4b59f27d43eb$visitID=SQVKTHPHCEHFVFRIRGLVPTHIWHUMCAEP-0$vs=2$fId=411769328_933$v=10219210628133341$vID=1626411769336VLQ8R3CPRCSHQK88B6DUQIVVO90549OU$time=1626411793567", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	lr_think_time(16);

	web_custom_request("events", 
		"URL=https://c.contentsquare.net/events?v=10.14.2&str=11321&di=15959&dc=20222&fl=20236&sr=52&mdh=1413&pn=1&re=1&uu=20e105ec-d9fc-a9a0-9287-3e510f579ab7&sn=1&lv=1626411777&lhd=1626411777&hd=1626411777&pid=1255&eu=%5B%5B0%2C6%2C1600%2C762%5D%2C%5B6%2C4055%2C1151%2C82%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C4111%2C1160%2C82%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C19995%2C-240%5D%2C%5B2%2C4489%2C1177%2C107%2C0%2C%22%22%2C45315%2C36995%5D%2C%5B2%2C4891%2C1173%2C108%2C0%2C%22%22%2C39358%2C38485%5D%2C%5B3%2C5350%2C1173%2C108%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B4%2C5572%2C1173%2C108%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C5708%2C1173%2C108%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C%22%22%5D%2C%5B7%2C6138%2C1173%2C108%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%5D%2C%5B2%2C10207%2C1168%2C117%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C52142%2C56934%5D%2C%5B2%2C10615%2C1137%2C202%2C0%2C%22div%23layoutContainers%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Esection%3Aeq(0)%3Ediv%3Aeq(1)%3Ediv%3Aeq(2)%22%2C56240%2C44763%5D%5D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	return 0;
}