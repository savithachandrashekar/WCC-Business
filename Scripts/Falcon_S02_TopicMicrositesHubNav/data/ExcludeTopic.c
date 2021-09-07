ExcludeTopic()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI42m5ANsl1twl8vxEt7z8irNsM_5_nTP8XzVj5I1y9GpF1VxHtNDwwOjwfkVEGGrqMubs8mVLl9IUQO3s363PFVDyyPjK_sM9HpWYoyj2ZKrrZVmhViGb9cXFnc9nNsn9wBFDSj4cG74lzWIO8vtZMrDyGukA; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIgZIB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:tgK2TorHlKUYoDQ2s9tvn3BjwboE7iIBi73imNsajYwgu4Is49rnWrhYNrj5CSY0z0MAZujruKo6lvOdd_bUi3pdMQcVqg:oVTuJX4rac9JGiVp; DOMAIN=accounts.google.com");

	web_add_cookie("NID=216=NWgiQgF-nHpudWr4BfbX0Hl_732pqo5uU8sa1f2GcKxMAWG1Yohgw9IRvmR63BcbCCmd4hj4xbyFEtZE641l3a7dLdwWGZJL-dzFlElz9AvMbn7KrTKQtRY1wgVo-71B2O-7lV2oqkKozdEhDP6obGfeCGAKVEQt_fu8lY3TS_z_b_hGz8xYXGJgSmQB0MMaqpQ; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2021-05-20-13; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t234.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=90", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t235.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("audio", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t236.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("font-awesome.min.css", 
		"URL=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t237.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_url("latin-e-regular-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-regular-ttf.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t238.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("bootstrap.min.css", 
		"URL=https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t239.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("latin-e-bold-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-bold-ttf.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t240.inf", 
		LAST);

	web_url("latin-e-light-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-light-ttf.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t241.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("styles.b548cb1a8d8de58eba2f.css", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/styles.b548cb1a8d8de58eba2f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t242.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("can.jquery.js", 
		"URL=https://ssl.www8.hp.com/us/en/scripts/framework/jquery/v-1-8/can.jquery.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t243.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("jquery.min.js", 
		"URL=https://cdnjs.cloudflare.com/ajax/libs/jquery/2.2.4/jquery.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t244.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("hp_support_controls.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/hp_support_controls.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t245.inf", 
		LAST);

	web_url("latin-e-bold-italic-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-bold-italic-ttf.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t246.inf", 
		LAST);

	web_url("latin-e-regular-italic-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-regular-italic-ttf.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t247.inf", 
		LAST);

	web_url("latin-e-light-italic-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-light-italic-ttf.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t248.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Purpose", 
		"prefetch");

	web_url("fontawesome-webfont.woff", 
		"URL=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/fonts/fontawesome-webfont.woff?v=4.1.0", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t249.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("runtime.c8d6bdb17a8aa6ed848e.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/runtime.c8d6bdb17a8aa6ed848e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t250.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"URL=https://t.contentsquare.net/uxa/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t251.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("scripts.204dec66716e86a3ab29.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/scripts.204dec66716e86a3ab29.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t252.inf", 
		LAST);

	web_url("polyfills.d301623517a574834b52.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/polyfills.d301623517a574834b52.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t253.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_header("Purpose", 
		"prefetch");

	web_url("sprite-country-flags.png", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/sprite-country-flags.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t254.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("main.a03c0443e9f8c1af996a.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/main.a03c0443e9f8c1af996a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t255.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("xdframe-single-domain-1.1.0.html", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t256.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("pages-solution-template-topic-solution-template-module-ngfactory.f89cbb4c10dc603c2a69.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/pages-solution-template-topic-solution-template-module-ngfactory.f89cbb4c10dc603c2a69.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t257.inf", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("topicPage", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/termbase/us-en/topicPage", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t258.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("third_party_lib.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/libs/scripts/third_party_lib.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t259.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("region", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/region", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t260.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("9d25aca9-e352-4895-bbbd-ccebc9786c07.js_2", 
		"URL=https://ct.contentsquare.net/ptc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t261.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("medallia.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/libs/scripts/medallia.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t262.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("9d25aca9-e352-4895-bbbd-ccebc9786c07.js_3", 
		"URL=https://ct.contentsquare.net/pcc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js?DeploymentConfigName=Release_20210426&Version=5", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t263.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("wcc_second_Nav", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_second_Nav", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t264.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topicPage_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/config/us-en/topicPage", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t265.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("href", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/sitemap/href", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t266.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"template\":\"Solutions_New\",\"path\":\"/topic/audio\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	web_custom_request("audio_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/solution/topics/audio", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t267.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"os\":{\"isSelected\":false,\"osDetected\":\"Windows NT 10.0; Win64; x64\",\"osbit\":\"64\",\"selectedOs\":\"\",\"osTmsId\":null,\"osParentTmsId\":null}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("latest-WR110.js", 
		"URL=https://ct.contentsquare.net/www/latest-WR110.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t268.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("smartcontent_solution.css", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/libs/styles/smartcontent_solution.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t269.inf", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=itg-live.www8.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("latest.r", 
		"URL=https://itg-live.www8.hp.com/caas/header-footer/us/en/default/latest.r?contentType=js&hide_search=true&show_shopping_cart=true&hide_country_selector=true", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t270.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("embed.js", 
		"URL=https://nebula-cdn.kampyle.com/wu/541318/onsite/embed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t271.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("wcc_sitehome_alerts", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/us-en/wcc_sitehome_alerts", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t272.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("18956663993.js", 
		"URL=https://cdn.optimizely.com/js/18956663993.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t273.inf", 
		LAST);

	web_add_cookie("ApplicationGatewayAffinityCORS=6e930695b3ddc82f56c7619ce500f8c7; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("ApplicationGatewayAffinity=6e930695b3ddc82f56c7619ce500f8c7; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("srch_icon.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/fe-assets/images/srch_icon.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t274.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("Bootstrap.js", 
		"URL=https://nexus.ensighten.com/hp/support_stage/Bootstrap.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t275.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("wcc_solutions_xhtml", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t276.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"113563413184771141312128041451512103158105112\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_custom_request("wcc_solutions_xhtml_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t277.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"11191414029990013455311913403915107063491\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_custom_request("wcc_solutions_xhtml_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t278.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"11301561113101232074159011113130011139089151429\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Solution_Audio%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=itg-live.www8.hp.com");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("clientlib-hf-fontface.css", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t279.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("css2", 
		"URL=https://fonts.googleapis.com/css2?family=Ubuntu+Condensed&display=swap", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/libs/styles/smartcontent_solution.css", 
		"Snapshot=t280.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("wcc_solutions_xhtml_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t281.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"114515624107211374414121010148911125123510011106\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("clientlib-hpi-hf-r-css.css", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t282.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("wcc_solutions_xhtml_5", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t283.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"1102103415159814142411181071221541514118107421312\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_custom_request("wcc_solutions_xhtml_6", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t284.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"1636814313712631341310887812712412663132015\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_url("ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIXCZE9y8O0HBWCEgUN2CUrZxIFDWD_9IsYrqnKAQ==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIXCZE9y8O0HBWCEgUN2CUrZxIFDWD_9IsYrqnKAQ==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t285.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("clientlib-hf-js.js", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hf-js.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t286.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("wcc_solutions_xhtml_7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t287.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"155121476810874414998013101159149975156614\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_custom_request("wcc_solutions_xhtml_8", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t288.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"1101511031012142991044131211313414215102314058\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_custom_request("wcc_solutions_xhtml_9", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t289.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"1158118141614131334715780471012910146101112254\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_url("ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIlCeq0gYqc5lntEgUNnyyLRBIFDZ8si0QSBQ3YJStnEgUNYP_0ixiuqcoB", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIlCeq0gYqc5lntEgUNnyyLRBIFDZ8si0QSBQ3YJStnEgUNYP_0ixiuqcoB?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t290.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("gtm.js", 
		"URL=https://www.googletagmanager.com/gtm.js?id=GTM-PDHM2PK", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t291.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t292.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("e.gif", 
		"URL=https://nexus.ensighten.com/error/e.gif?msg=%22TypeError%3A%20Cannot%20read%20property%20%27triggerPromiseWithTimeout%27%20of%20undefined%22%20error%20caught%20in%20Data%20Definition%20trigger%3A%20support_language_code%2C%20ID%3A9913.%20Using%20bottom%20of%20body%20trigger.&lnn=-1&fn=&cid=217&client=hp&publishPath=support_stage&rid=-1&did=-1&errorName=DataDefinitionException", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t293.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("wcc_solutions_ssr", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contextual-filtered/us-en/wcc_solutions_ssr?topicTmsId=131110122151214122745101211113451218912315713106", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("wcc_solutions_xhtml_10", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t295.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"1101012111211941308441148111010651451436411103613\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("serverComponent.php", 
		"URL=https://nexus.ensighten.com/hp/support_stage/serverComponent.php?r=78437609.73584878&namespace=Bootstrapper&staticJsPath=nexus.ensighten.com/hp/support_stage/code/&publishedOn=Tue%20May%2004%2007:24:28%20GMT%202021&ClientID=217&PageID=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio%3Fgdl_template%3DSolution_Audio", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t296.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("HPSimplifiedRegular.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/clientlib-hf-fontface-core/resources/fonts/HPSimplifiedRegular.woff", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", 
		"Snapshot=t297.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("wcc_solutions_spoc", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contextual-filtered/us-en/wcc_solutions_spoc?topicTmsId=131110122151214122745101211113451218912315713106", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t298.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("wcc_pfinder_common", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/contexual/us-en/wcc_pfinder_common?pageTemplate=Computer_Landing_New", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t299.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("us-en", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=CID4403597156001,CID203666e8-059e-4e88-8fc9-22b4d050273c,CID51ff02ad-5e83-4068-a549-dc257f443743,CID3260773970001,CIDbc40f9a4-be88-422c-9a65-348f7b3d4379&udpFlag=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t300.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_url("HpSimplifiedLight.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/clientlib-hf-fontface-core/resources/fonts/HpSimplifiedLight.woff", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", 
		"Snapshot=t301.inf", 
		LAST);

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Solution_Audio%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621520827753r0.3639911420698405; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18768%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("loadingHp.gif", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/static/hp-portal-theme-static/themes/Portal8.0/hp/images/loadingHp.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t302.inf", 
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
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.4.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=5E34123F5245B2CD0A490D45%40AdobeOrg&d_nsid=0&ts=1621520827859", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t303.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("printer-signIn.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/printer-signIn.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t304.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("footericons.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/footericons.woff", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", 
		"Snapshot=t305.inf", 
		LAST);

	web_url("newhplogo.ttf", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/newhplogo.ttf", 
		"Resource=1", 
		"RecContentType=application/x-font-ttf", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", 
		"Snapshot=t306.inf", 
		LAST);

	web_url("fonts_header_icons.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/fonts_header_icons.woff", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", 
		"Snapshot=t307.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("topicBanner.jpg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/solution-page/topicBanner.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t308.inf", 
		LAST);

	web_add_cookie("ApplicationGatewayAffinityCORS=05244d103c26dd85f4d3575ba8d66f85; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("ApplicationGatewayAffinity=05244d103c26dd85f4d3575ba8d66f85; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("us-en_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=oI4d2DV7eVs&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t309.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("us-en_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=O-Ak18JwOW0&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t310.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=www.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=www.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Solution_Audio%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=www.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621520827753r0.3639911420698405; DOMAIN=www.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18768%7CvVersion%7C4.4.0; DOMAIN=www.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("privacy-banner-test.js", 
		"URL=https://www.hp.com/cma/ng/lib/exceptions/privacy-banner-test.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t311.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("us-en_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=vVBC7kjQoXg&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t312.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("us-en_5", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=7AAHBMx1UWI&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t313.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("us-en_6", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=6_WmBjQ_Ga8&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t314.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("pc_settings.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/solution-page/pc_settings.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t315.inf", 
		LAST);

	web_url("pc_audiodriver.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/solution-page/pc_audiodriver.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t316.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_url("fullHashes_find", 
		"URL=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINOTAuMC40NDMwLjIxMhIbCg0IBRAGGAEiAzAwMTABEPamCxoCGAkzabTDEhsKDQgBEAYYASIDMDAxMAEQgvEIGgIYCe0rqekSGwoNCAMQBhgBIgMwMDEwARCk3wgaAhgJ-GkTDRIbCg0IBxAGGAEiAzAwMTABELKsCRoCGAnEjBWCEhkKDQgBEAYYASIDMDAxMAMQFBoCGAnMXTxFEhoKDQgBEAgYASIDMDAxMAQQniAaAhgJ5q6XURIZCg0ICRAGGAEiAzAwMTAGEAMaAhgJB12pKRIaCg0IDxAGGAEiAzAwMTABEORnGgIYCVOz730SGQoNCAoQCBgBIgMwMDEwARAHGgIYCez1IIwSGQoNCAkQBhgBIgMwMDEwARAfGgIYCSeXu5ESGgoNCAgQBhgBIgMwMDEwARCTDBoCGAkazczoEhsKDQgNEAYYASIDMDAxMAEQgI0BGgIYCdBEB-0SGwoNCA4QBh"
		"gBIgMwMDEwARDBxgUaAhgJAy8pxRIaCg0IEBAGGAEiAzAwMTABEOQKGgIYCaqSsGYaLAgBCAMIBQgGCAcICAgJCAoIDQgOCA8IEBABEAgaBgoEsXiYTiABIAMgBCAG&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t317.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("hqdefault.jpg", 
		"URL=https://i.ytimg.com/vi/7AAHBMx1UWI/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t318.inf", 
		LAST);

	web_url("hqdefault.jpg_2", 
		"URL=https://i.ytimg.com/vi/6_WmBjQ_Ga8/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t319.inf", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=met2.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Solution_Audio%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=met2.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621520827753r0.3639911420698405; DOMAIN=met2.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=met2.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18768%7CMCMID%7C69249558432307637593801535037065829284%7CMCAAMLH-1622125628%7C9%7CMCAAMB-1622125628%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621528028s%7CNONE%7CvVersion%7C4.4.0; DOMAIN=met2.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("id_2", 
		"URL=https://met2.hp.com/id?d_visid_ver=4.4.0&d_fieldgroup=A&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&mid=69249558432307637593801535037065829284&ts=1621520828443", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t320.inf", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("us-en_7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=O-Ak18JwOW0&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t321.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("hqdefault.jpg_3", 
		"URL=https://i.ytimg.com/vi/O-Ak18JwOW0/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t322.inf", 
		LAST);

	web_url("hqdefault.jpg_4", 
		"URL=https://i.ytimg.com/vi/oI4d2DV7eVs/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t323.inf", 
		LAST);

	web_url("hqdefault.jpg_5", 
		"URL=https://i.ytimg.com/vi/NZg_avkqLqM/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t324.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("pc_upgradeos.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/solution-page/pc_upgradeos.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t325.inf", 
		LAST);

	web_url("pc_nosound.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/solution-page/pc_nosound.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t326.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("us-en_8", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=O-Ak18JwOW0&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t327.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("8eb6e0d6c0d367083fff5b64b61a4441.js", 
		"URL=https://nexus.ensighten.com/hp/support_stage/code/8eb6e0d6c0d367083fff5b64b61a4441.js?conditionId0=422765", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t328.inf", 
		LAST);

	web_url("b9b0fc01116e2374d7e92bc6cb675f3e.js", 
		"URL=https://nexus.ensighten.com/hp/support_stage/code/b9b0fc01116e2374d7e92bc6cb675f3e.js?conditionId0=4880989", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t329.inf", 
		LAST);

	web_url("3ce08cf7c65e410fd9cf20d6115a04e1.js", 
		"URL=https://nexus.ensighten.com/hp/support_stage/code/3ce08cf7c65e410fd9cf20d6115a04e1.js?conditionId0=285030", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t330.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("pageview", 
		"URL=https://c.contentsquare.net/pageview?pid=1255&uu=d28b5070-c17f-aeda-fbd7-9d12dc72308d&sn=1&lv=1621520828&lhd=1621520828&hd=1621520828&pn=1&re=1&dw=1621&dh=2733&ww=1626&wh=792&sw=1463&sh=823&dr=&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&uc=1&la=en-US&cvars=%7B%221%22%3A%5B%22Template%22%2C%22Solution_Audio%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&cvarp="
		"%7B%221%22%3A%5B%22Template%22%2C%22Solution_Audio%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&v=10.8.6&r=842709", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t331.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("dest5.html", 
		"URL=https://hp.demdex.net/dest5.html?d_nsid=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t332.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("us-en_9", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=O-Ak18JwOW0&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t333.inf", 
		"Mode=HTTP", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("auth", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&341608186&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t334.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"d28b5070-c17f-aeda-fbd7-9d12dc72308d\",\"sessionNumber\":1,\"pageNumber\":1},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("hqdefault.jpg_6", 
		"URL=https://img.youtube.com/vi/oI4d2DV7eVs/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t335.inf", 
		LAST);

	web_url("hqdefault.jpg_7", 
		"URL=https://img.youtube.com/vi/O-Ak18JwOW0/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t336.inf", 
		LAST);

	web_url("hqdefault.jpg_8", 
		"URL=https://img.youtube.com/vi/vVBC7kjQoXg/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t337.inf", 
		LAST);

	web_url("hqdefault.jpg_9", 
		"URL=https://img.youtube.com/vi/7AAHBMx1UWI/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t338.inf", 
		LAST);

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=d28b5070-c17f-aeda-fbd7-9d12dc72308d.1621520828.1.1621520828.1621520828.1589380098.1655684828829.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18768%7CMCMID%7C69249558432307637593801535037065829284%7CMCAAMLH-1622125628%7C9%7CMCAAMB-1622125628%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621528029s%7CNONE%7CMCAID%7CNONE%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("p-finder-icon-30-p-finder-laptop-blue.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/p-finder-icon-30-p-finder-laptop-blue.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t339.inf", 
		LAST);

	web_url("icons-30-p-finder-laptop.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/icons-30-p-finder-laptop.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t340.inf", 
		LAST);

	web_url("icons-30-p-finder-desktop.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/icons-30-p-finder-desktop.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t341.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("pageEvent", 
		"URL=https://c.contentsquare.net/pageEvent?value=MIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA&isETR=false&v=10.8.6&pid=1255&uu=d28b5070-c17f-aeda-fbd7-9d12dc72308d&sn=1&pn=1&r=458840", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t342.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("events", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t343.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"18956663993\",\"revision\":\"900\",\"visitors\":[{\"visitor_id\":\"oeu1621520827753r0.3639911420698405\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t"
		"\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1621520827777}],\"snapshots\":[{\"activationTimestamp\":1621520827752,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"21561dd2-ba68-4ffc-9302-febff74650eb\",\"t\":1621520827777}]}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("hqdefault.jpg_10", 
		"URL=https://img.youtube.com/vi/6_WmBjQ_Ga8/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t344.inf", 
		LAST);

	web_add_cookie("WRIgnore=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("arrow_icon_nocircle.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/arrow_icon_nocircle.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t345.inf", 
		LAST);

	web_url("play-btn-thumb-light.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/play-btn-thumb-light.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t346.inf", 
		LAST);

	web_url("arrow_icon_nocircle-blue.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/arrow_icon_nocircle-blue.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t347.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("dd", 
		"URL=https://cm.everesttech.net/cm/dd?d_uuid=77548763231374052914559186202371739680", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t348.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("otSDKStub.js", 
		"URL=https://cdn.cookielaw.org/scripttemplates/otSDKStub.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t349.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_url("e0a0fc2a-044d-41af-bd55-2f56dd8162df.json", 
		"URL=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e0a0fc2a-044d-41af-bd55-2f56dd8162df.json", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t350.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("p-finder-icon-30-p-finder-desktop-blue.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/p-finder-icon-30-p-finder-desktop-blue.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t351.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("c05061199", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/document/c05061199", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t352.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("location", 
		"URL=https://geolocation.onetrust.com/cookieconsentpub/v1/geo/location", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t353.inf", 
		LAST);

	web_url("otBannerSdk.js", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/otBannerSdk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t354.inf", 
		LAST);

	web_url("generic1621444731359.js", 
		"URL=https://nebula-cdn.kampyle.com/us/wu/541318/onsite/generic1621444731359.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t355.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("en-ie.json", 
		"URL=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e688e508-0267-4c09-a64b-7c03f7e759ce/en-ie.json", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t356.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("client_model_v5_variation_8.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_8.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t357.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("otCenterRounded.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/otCenterRounded.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t358.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("cool-2.1.15.min.js", 
		"URL=https://nebula-cdn.kampyle.com/resources/onsite/js/cool-2.1.15.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t359.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_url("otPcTab.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/v2/otPcTab.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t360.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("A353853-8e85-4786-9645-fac6b773cd071.js", 
		"URL=https://d.impactradius-event.com/A353853-8e85-4786-9645-fac6b773cd071.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t361.inf", 
		LAST);

	web_url("gtm.js_2", 
		"URL=https://www.googletagmanager.com/gtm.js?id=GTM-MQML682", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t362.inf", 
		LAST);

	web_url("pixel.js", 
		"URL=https://www.redditstatic.com/ads/pixel.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t363.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_url("ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIsCUv9LestSSkVEgUNnyyLRBIFDZ8si0QSBQ3YJStnEgUNYP_0ixIFDaWTNiQYrqnKAQ==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIsCUv9LestSSkVEgUNnyyLRBIFDZ8si0QSBQ3YJStnEgUNYP_0ixIFDaWTNiQYrqnKAQ==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t364.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("ytc.js", 
		"URL=https://s.yimg.com/wi/ytc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t365.inf", 
		LAST);

	web_url("bat.js", 
		"URL=https://bat.bing.com/bat.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t366.inf", 
		LAST);

	web_url("conversion_async.js", 
		"URL=https://www.googleadservices.com/pagead/conversion_async.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t367.inf", 
		LAST);

	web_url("7kxod6.js", 
		"URL=https://px.owneriq.net/stas/s/7kxod6.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t368.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("tr", 
		"URL=https://www.facebook.com/tr?id=1688171794549438&ev=PageView&noscript=1&gtmcb=1000849610", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t369.inf", 
		LAST);

	web_url("v3", 
		"URL=https://ct.pinterest.com/v3/?event=init&tid=2613604734453&noscript=1&gtmcb=790436221", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t370.inf", 
		LAST);

	web_url("collect", 
		"URL=https://px.ads.linkedin.com/collect/?pid=40922&fmt=gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t371.inf", 
		LAST);

	web_url("__cool.gif", 
		"URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjIxMiBTYWZhcmkvNTM3LjM2Iiwic2Vzc2lvbl9wbGF0Zm9ybSI6ICJXaW4zMiIsInRyYWNrZXJfdHlwZSI6ICJqYXZhc2NyaXB0IiwidHJhY2tlcl92ZXJzaW9uIjogIjIuMS4xNSIsImV2ZW50X25hbWUiOiAiY3JlYXRlU2Vzc2lvbiIsImV2ZW50X3RpbWVzdGFtcF9lcG9jaCI6ICIxNjIxNTIwODMyNjQ1IiwiZXZlbnRfdGltZXpvbmVfb2Zmc2V0IjogMCwidXNlcl9pZC"
		"I6ICIxNzk4YTJjNTg4MzFkYS0wM2RkNTIxYjQyNzAxOS0yMzYzMTYzLTEyNWY1MS0xNzk4YTJjNTg4NGQxOSIsInVybCI6ICJodHRwczovL3Bwc3N1cHBvcnQtaXRnbGxiaDcuaW5jLmhwLmNvbS91cy1lbi90b3BpYy9hdWRpbyIsImZvcm1JZCI6IG51bGwsImZvcm1UcmlnZ2VyVHlwZSI6IG51bGwsImthbXB5bGVfZGF0YSI6IHsiTEFTVF9JTlZJVEFUSU9OX1ZJRVciOiAiIiwiREVDTElORURfREFURSI6ICIiLCJrYW1weWxlSW52aXRlUHJlc2VudGVkIjogIiIsImthbXB5bGVfdXNlcmlkIjogIjgzZTQtNzMwOS01MjhlLWM5YWEtNjFlMS02NmI0LWU5ZGUtNTQzMiIsImthbXB5bGVVc2VyU2Vzc2lvbiI6ICIiLCJrYW1weWxlVXNlclBlcmNlbnRpbGUiOiAiIiwi"
		"U1VCTUlUVEVEX0RBVEUiOiAiIiwiYWRkaXRpb25hbERhdGEiOiB7InVzZXJfc2Vzc2lvbiI6ICIiLCJkaXJlY3RfbmF2aWdhdGlvbiI6IHRydWUsImRpZmZyZW50X3JlZmVycmVyIjogdHJ1ZX19LCJjb29raWVfc2l6ZSI6IDE2MTgsImthbXB5bGVfdmVyc2lvbiI6ICIyLjM4LjAiLCJvbnNpdGVfdmVyc2lvbiI6ICIyLjM4LjAiLCJoaXN0b3J5X2xlbmd0aCI6IDEsImV2ZW50X2xvY2FsX3RpbWVzdGFtcCI6IDE2MjE1MjA4MzIxODEsInBvc2l0aW9uIjogbnVsbCwiaXNVc2VySWRlbnRpZmllZCI6IGZhbHNlLCJmZWVkYmFja19jb3JyZWxhdGlvbl91dWlkIjogbnVsbH0KXX0=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t372.inf", 
		LAST);

	web_url("__cool.gif_2", 
		"URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjIxMiBTYWZhcmkvNTM3LjM2Iiwic2Vzc2lvbl9wbGF0Zm9ybSI6ICJXaW4zMiIsInRyYWNrZXJfdHlwZSI6ICJqYXZhc2NyaXB0IiwidHJhY2tlcl92ZXJzaW9uIjogIjIuMS4xNSIsImV2ZW50X25hbWUiOiAibmVidWxhX3BhZ2VfdmlldyIsImV2ZW50X3RpbWVzdGFtcF9lcG9jaCI6ICIxNjIxNTIwODMyNjU0IiwiZXZlbnRfdGltZXpvbmVfb2Zmc2V0IjogMCwidXNlcl"
		"9pZCI6ICIxNzk4YTJjNTg4MzFkYS0wM2RkNTIxYjQyNzAxOS0yMzYzMTYzLTEyNWY1MS0xNzk4YTJjNTg4NGQxOSIsImVudmlyb21lbnQiOiAicHJvZFVzT3JlZ29uIiwiYWNjb3VudElkIjogNTQxMTE0LCJ1cmwiOiAiaHR0cHM6Ly9wcHNzdXBwb3J0LWl0Z2xsYmg3LmluYy5ocC5jb20vdXMtZW4vdG9waWMvYXVkaW8iLCJ3ZWJzaXRlSWQiOiA1NDEzMTgsImZvcm1JZCI6IG51bGwsImZvcm1UcmlnZ2VyVHlwZSI6IG51bGwsImthbXB5bGVfZGF0YSI6IHsiTEFTVF9JTlZJVEFUSU9OX1ZJRVciOiAiIiwiREVDTElORURfREFURSI6ICIiLCJrYW1weWxlSW52aXRlUHJlc2VudGVkIjogIiIsImthbXB5bGVfdXNlcmlkIjogIjgzZTQtNzMwOS01MjhlLWM5YWEtNjFl"
		"MS02NmI0LWU5ZGUtNTQzMiIsImthbXB5bGVVc2VyU2Vzc2lvbiI6ICIxNjIxNTIwODMyMTgxIiwia2FtcHlsZVVzZXJQZXJjZW50aWxlIjogIiIsIlNVQk1JVFRFRF9EQVRFIjogIiJ9LCJjb29raWVfc2l6ZSI6IDE3MjcsImthbXB5bGVfdmVyc2lvbiI6ICIyLjM4LjAiLCJvbnNpdGVfdmVyc2lvbiI6ICIyLjM4LjAiLCJoaXN0b3J5X2xlbmd0aCI6IDEsImV2ZW50X2xvY2FsX3RpbWVzdGFtcCI6IDE2MjE1MjA4MzIxODcsInBvc2l0aW9uIjogbnVsbCwiaXNVc2VySWRlbnRpZmllZCI6IGZhbHNlLCJmZWVkYmFja19jb3JyZWxhdGlvbl91dWlkIjogbnVsbH0KXX0=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t373.inf", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Solution_Audio%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1621520827753r0.3639911420698405; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_id=d28b5070-c17f-aeda-fbd7-9d12dc72308d.1621520828.1.1621520828.1621520828.1589380098.1655684828829.None.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18768%7CMCMID%7C69249558432307637593801535037065829284%7CMCAAMLH-1622125628%7C9%7CMCAAMB-1622125628%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621528029s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18775%7CvVersion%7C4.4.0; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Thu+May+20+2021+14%3A27%3A12+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=37cc8b08-d8ae-4c45-a3b7-e2e4ca2ccc00&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("dcm_s=1621520832422.1132107695; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_gcl_au=1.1.593636137.1621520833; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_rdt_uuid=1621520833062.67d0cb19-0e4b-499c-95e4-8395b48da376; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_5105=1621520833230%7C365159%7C1621520833230%7C%7C; DOMAIN=linkto.ext.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("5105", 
		"URL=https://linkto.ext.hp.com/xc/365159/342132/5105", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t374.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=srcref=&landurl=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&&_ir=U364%7C%7C1621520833230", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("13015798", 
		"URL=https://bat.bing.com/p/action/13015798", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t375.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("0", 
		"URL=https://bat.bing.com/action/0?ti=13015798&tm=gtm001&Ver=2&mid=30f43ad1-7e5e-47bd-acf0-1ee229e17ce5&sid=7839a640b97711eba26e81467d883212&vid=7839f110b97711eb93f171af8a60c899&vids=1&pi=1200101525&lg=en-US&sw=1463&sh=823&sc=24&tl=Fix%20your%20PC%20Sound%20or%20Audio%20Issues%20%7C%20HP%C2%AE%20Support&kw=hp%20audio,%20audio%20drivers,%20sound%20not%20working,%20microphone%20not%20working&p=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&r=&lt=10153&evt=pageLoad&msclkid=N&sv=1"
		"&rn=999259", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t376.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("j", 
		"URL=https://px.owneriq.net/j/?ref=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio&pt=7kxod6&t=f%7C%22Fix%2520your%2520PC%2520Sound%2520or%2520Audio%2520Issues%2520%257C%2520HP%25C2%25AE%2520Support%22&s=6ka7", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t377.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_url("10044594.json", 
		"URL=https://s.yimg.com/wi/config/10044594.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t378.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("687393200", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/687393200/?random=1621520833455&cv=9&fst=1621520833455&num=1&userId=null&guid=ON&resp=GooglemKTybQhCsO&eid=376635470%2C2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&tiba=Fix%20your%20PC%20Sound%20or%20Audio%20Issues%20%7C%20HP%C2%AE%20Support&hn=www.googleadservices.com&"
		"async=1&rfmt=3&fmt=4", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t379.inf", 
		LAST);

	web_url("854101013", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/854101013/?random=1621520833463&cv=9&fst=1621520833463&num=1&guid=ON&resp=GooglemKTybQhCsO&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&tiba=Fix%20your%20PC%20Sound%20or%20Audio%20Issues%20%7C%20HP%C2%AE%20Support&hn=www.googleadservices.com&async=1&rfmt=3&fmt=4", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t380.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("eps", 
		"URL=https://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6748072332105018810J&l=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t381.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("849111477", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/849111477/?guid=ON&script=0&userId=null&gtmcb=449516269", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t382.inf", 
		LAST);

	web_url("783157761", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/783157761/?guid=ON&script=0&userId=null&gtmcb=1764260793", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t383.inf", 
		LAST);

	web_add_cookie("_cs_id=d28b5070-c17f-aeda-fbd7-9d12dc72308d.1621520828.1.1621520828.1621520828.1589380098.1655684828829.None.1; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=met2.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=met2.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=met2.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18768%7CMCMID%7C69249558432307637593801535037065829284%7CMCAAMLH-1622125628%7C9%7CMCAAMB-1622125628%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621528029s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18775%7CvVersion%7C4.4.0; DOMAIN=met2.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Thu+May+20+2021+14%3A27%3A12+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=37cc8b08-d8ae-4c45-a3b7-e2e4ca2ccc00&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=met2.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=met2.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=met2.hp.com");

	web_add_cookie("dcm_s=1621520832422.1132107695; DOMAIN=met2.hp.com");

	web_add_cookie("_gcl_au=1.1.593636137.1621520833; DOMAIN=met2.hp.com");

	web_add_cookie("_rdt_uuid=1621520833062.67d0cb19-0e4b-499c-95e4-8395b48da376; DOMAIN=met2.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=met2.hp.com");

	web_add_cookie("IR_5105=1621520833230%7C365159%7C1621520833230%7C%7C; DOMAIN=met2.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio; DOMAIN=met2.hp.com");

	web_add_cookie("_uetsid=7839a640b97711eba26e81467d883212; DOMAIN=met2.hp.com");

	web_add_cookie("_uetvid=7839f110b97711eb93f171af8a60c899; DOMAIN=met2.hp.com");

	web_add_cookie("IR_PI=783ef2d6-b977-11eb-9a1c-42010a246c50%7C1621607233230; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppvl=%5B%5BB%5D%5D; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C24%2C24%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=met2.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=met2.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("s07371675981002", 
		"URL=https://met2.hp.com/b/ss/hphqglobal,hphq-ces-global-stage-temp,hphq-ces-na-stage-temp/1/JS-2.15.0/s07371675981002?AQB=1&ndh=1&pf=1&t=20%2F4%2F2021%2014%3A27%3A13%204%200&mid=69249558432307637593801535037065829284&aamlh=9&ce=UTF-8&ns=hpcorp&pageName=D%3Dv55&g=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&ch=pps&server=ppssupport-itgllbh7.inc.hp.com&events=event46%2Cevent45%3D120%2Cevent11&aamb=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1=us-en&v2=us&c3="
		"Solution_Audio&v3=en&c7=us&c8=en&c9=cs%3Aconsumer.home&c12=R11839&v12=Anonymous&c15=42&c26=D%3Dv12&c31=null&v32=null&v33=null&v34=null&v35=null&c43=null&v46=D%3Dc3&c49=D%3Dg&c50=D%3Dg&c51=hpexpnontridion%3Aihfcaas.5.r&c55=null&v55=pps-ces%7Csolution_audio&c56=null&c57=null&c58=null&c59=null&c61=0001%3A0001%3A00&c63=Initial&c66=69249558432307637593801535037065829284&v90=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&v92=ens%7Csupport_stage%7C04-May-2021%2007%3A24%3A28&v93="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&v94=ppssupport-itgllbh7.inc.hp.com&v95=ppssupport-itgllbh7.inc.hp.com%3AUnknown%7CUnknown%7CAMS%7Cus%3Aen%7CUSD&v99=12&s=1463x823&c=24&j=1.6&v=N&k=Y&bw=1626&bh=792&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&AQE=1", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t384.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("379208.gif", 
		"URL=https://idsync.rlcdn.com/379208.gif?partner_uid=Q6748072332105018810J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t385.inf", 
		LAST);

	web_url("p", 
		"URL=https://www.ojrq.net/p/?return=&cid=5105&tpsync=no", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t386.inf", 
		LAST);

	web_url("dvar", 
		"URL=https://c.contentsquare.net/dvar?v=10.8.6&pid=1255&uu=d28b5070-c17f-aeda-fbd7-9d12dc72308d&sn=1&pn=1&dv=N4IgpgaghgTgjAJhALhAQQHYHsME8C2WArgM4gA0IADjFlQMwogDKWANkQC4CWOA%2BmiIATXhWq0qcJqQC0YDCAC%2BQAA%3D&r=155467", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t387.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("1", 
		"URL=https://tapestry.tapad.com/tapestry/1?ta_partner_id=916&ta_partner_did=Q6748072332105018810J&ta_format=png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t388.inf", 
		LAST);

	web_url("ep", 
		"URL=https://px.owneriq.net/ep?sid%5B%5D=14634664807&sid%5B%5D=14634664812&sid%5B%5D=14634664817&sid%5B%5D=8460259172&sid%5B%5D=8460259192&pt=7kxod6&uid=Q6748072332105018810J&jcs=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t389.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ibs_dpid=53196&dpuuid=Q6748072332105018810J", 
		"URL=https://dpm.demdex.net/ibs_dpid=53196&dpuuid=Q6748072332105018810J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t390.inf", 
		LAST);

	web_url("687393200_2", 
		"URL=https://www.google.com/pagead/1p-user-list/687393200/?random=1621520833455&cv=9&fst=1621519200000&num=1&userId=null&guid=ON&eid=376635470%2C2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&tiba=Fix%20your%20PC%20Sound%20or%20Audio%20Issues%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=2485480523&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t391.inf", 
		LAST);

	web_url("854101013_2", 
		"URL=https://www.google.com/pagead/1p-user-list/854101013/?random=1621520833463&cv=9&fst=1621519200000&num=1&guid=ON&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&tiba=Fix%20your%20PC%20Sound%20or%20Audio%20Issues%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=1738120973&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t392.inf", 
		LAST);

	web_url("Pug", 
		"URL=https://simage2.pubmatic.com/AdServer/Pug?vcode=bz0yJnR5cGU9MSZjb2RlPTI2NDYmdGw9MTI5NjAw&piggybackCookie=Q6748072332105018810J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t393.inf", 
		LAST);

	web_url("sd", 
		"URL=https://us-u.openx.net/w/1.0/sd?id=537073059&val=Q6748072332105018810J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t394.inf", 
		LAST);

	web_url("setuid", 
		"URL=https://ib.adnxs.com/setuid?entity=13&code=Q6748072332105018810J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t395.inf", 
		LAST);

	web_url("pixel", 
		"URL=https://cm.g.doubleclick.net/pixel?google_nid=owneriq1&google_cm&google_sc&google_ula=1174&google_hm=UTY3NDgwNzIzMzIxMDUwMTg4MTBK&esi=1", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t396.inf", 
		LAST);

	web_url("rum", 
		"URL=https://dsum.casalemedia.com/rum?cm_dsp_id=31&external_user_id=Q6748072332105018810J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t397.inf", 
		LAST);

	web_url("tap.php", 
		"URL=https://pixel.rubiconproject.com/tap.php?v=11581&nid=2395&put=Q6748072332105018810J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t398.inf", 
		LAST);

	web_url("sp.pl", 
		"URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&d=Thu%2C%2020%20May%202021%2014%3A27%3A13%20GMT&n=0&b=Fix%20your%20PC%20Sound%20or%20Audio%20Issues%20%7C%20HP%C2%AE%20Support&.yp=10044594&f=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Faudio&enc=UTF-8&yv=1.9.2&tagmgr=gtm%2Censighten", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t399.inf", 
		LAST);

	web_url("getuid", 
		"URL=https://secure.adnxs.com/getuid?https%3A%2F%2Fpx.owneriq.net%2Feucm%2Fp%2Fapndmp%3Foi%3D1%26tid%3D$UID", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t400.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("consentreceipts", 
		"URL=https://privacyportaluat.onetrust.com/request/v1/consentreceipts", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t401.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("tr_2", 
		"URL=https://www.facebook.com/tr?id=1688171794549438&ev=ConsumerEngagement&noscript=1&gtmcb=1798742336", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t402.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("consentreceipts_2", 
		"URL=https://privacyportaluat.onetrust.com/request/v1/consentreceipts", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t403.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"requestInformation\":\""
		"eyJhbGciOiJSUzUxMiJ9.eyJvdEp3dFZlcnNpb24iOjEsInByb2Nlc3NJZCI6ImNjZGQxZWQzLTY2NDQtNDhiNy1hM2EyLWYyMjZjZWJiNThkZiIsInByb2Nlc3NWZXJzaW9uIjo3NCwiaWF0IjoiMjAyMC0wNi0yNFQxNzoyMDoxOC4zIiwibW9jIjoiQ09PS0lFIiwic3ViIjoiQ29va2llIFVuaXF1ZSBJZCIsImlzcyI6bnVsbCwidGVuYW50SWQiOiI3M2FmNzhjNS02MjQ1LTQyYjktYWNhZS1lYmQ1NTNhZWI0NTciLCJkZXNjcmlwdGlvbiI6IlRoaXMgY29sbGVjdGlvbiBwb2ludCBjYXB0dXJlcyB0aGUgY3VycmVudCBzaXRlIHZpc2l0b3IgY29uc2VudCBwcmVmZXJlbmNlcyBmb3IgdGhlIGRvbWFpbjogaHAuY29tLWVuIHNwZWNpZmllZC4iLCJjb25zZW50VHlwZ"
		"SI6IkNPT0tJRUJBTk5FUiIsImRvdWJsZU9wdEluIjpmYWxzZSwicmVjb25maXJtQWN0aXZlUHVycG9zZSI6ZmFsc2UsImR5bmFtaWNDb2xsZWN0aW9uUG9pbnQiOmZhbHNlLCJhdXRoZW50aWNhdGlvblJlcXVpcmVkIjpmYWxzZSwicG9saWN5X3VyaSI6ImhwLmNvbSIsImFsbG93Tm90R2l2ZW5Db25zZW50cyI6ZmFsc2UsInB1cnBvc2VzIjpbeyJpZCI6ImU0YzhiYjlkLTdjMDUtNGJkNy1hMWE5LTBiZDFiOGZjMDg5NSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImM2ZjY5NDkzLTA5ODUtNDhhOC1iZDllLTk2ZjgyYzg1MzYyMCIsInZlcnNpb24iOjE4LCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI"
		"6W119LHsiaWQiOiI1NGRiYThlYS0xNzgyLTRiOWUtYmVmNC03ZThhMjQyMjI3OTciLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJjNGYzNWFmZi01YmUyLTQxZGItODcwNS03YmQ2NDM4NWMwOTgiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiIzMDllYzcxOC02NGQzLTQ2ZDItYTAwZC01YWU0NmNhNGZhMTEiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiI1NDM0MmI4Zi1lNjg1LTQ0YzAtYTgwMS03YTkzMjNiZGVmMTMiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119L"
		"HsiaWQiOiJmZDhjZDU0NC1lMzMyLTRmYWMtODZkYS04MDQyOWNjZWVkYmEiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiI1NzU2NjlmZi1lOTUwLTQ1OWEtYmY4NS1lNWQ3ZmE5N2FjMDYiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiIyMWJiMzJhNi02ZWYzLTRlYmEtOTdhYy0zODYzMDM5YTE3NzIiLCJ2ZXJzaW9uIjoxLCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119LHsiaWQiOiJhNWQ0MWIwZi1hM2NlLTQ3NDgtYjFhMC1mMGM0NTExNzIxN2EiLCJ2ZXJzaW9uIjozNiwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7Iml"
		"kIjoiZDIwYTRlMWItMzUzYy00NTdmLTllNGEtYWJmNTYyNzkzYWRmIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiYTg1ZjY3ZWUtYWEwNS00NmEzLWFlMDctY2Q3Mjc4N2IxMWZkIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiMTU5YjMzNTYtOTQwYS00ODc4LThjZWMtY2E2NzgyM2EyNWM3IiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiYWE3ZmFiODEtNGFlNS00ZDJkLTkyNGItOWNkZDU3YTFlZDUxIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiM"
		"DYzYWZlZDktZDcxNC00MTc2LTliMDQtYWUyYWY3ZDEwZTQyIiwidmVyc2lvbiI6MSwidG9waWNzIjpbXSwiY3VzdG9tUHJlZmVyZW5jZXMiOltdfSx7ImlkIjoiNTkwZmYxMDUtMjUxMi00NzIzLWFhMTMtN2YzMjM0OGQxNTlkIiwidmVyc2lvbiI6MTgsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImMyOGU4ZGMzLWY0ZWMtNGViOC1iOTUwLWI2MzA5ZDZkN2I4MSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImEzMzEwZmFkLTI4MTctNDIxMy1iMzliLTkzMTM0YjRlNDk3MCIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImFmZGE"
		"wZGFmLTFmYmEtNDQ5Zi04ODY2LTkwMzkzMTE0ZGVlMyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjQyZTVjNDQ5LTljZDQtNDU5NC1iMGY5LTIyNDMxMjM2OTRkYyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImMzMzcxYzhjLTg1ZDEtNDMwNC05OWM5LWQ3OGI3NzMyYzg1ZiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImZmZmU4NDFjLTRhZTYtNDkwOC05NGVmLTk4YzcwNGFkZGQwOCIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjViMTU2N2M0L"
		"Tk5OGEtNGQ4OS1iMjk5LTZlNWQ3YWU2NjAxMyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImVkZWZhZjRmLWE0NGItNDQyNi04M2MyLTg5NjcyNGIwYjI0NSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6IjRjNzYzYzUzLTgyZWUtNDliNS1iMTI5LTFjZTkzMGZiNWFjNiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImRmZDJjYjk5LTM4MzYtNDhkMC04ZGQxLTVjM2VjNzBlMzFhZiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImY5ZGJkNDc1LWM0NDE"
		"tNGVkMi1hMDE1LWZkNTUzNzI2MjE3MiIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImZiZjBjZjcxLWRmNjEtNDU4YS05NDk0LTUxMjAyNzk4YzM2YyIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImJjZGZlYTVlLWYyZDUtNDgyZC04MzlmLTZmMGI1Y2UyZGU3OSIsInZlcnNpb24iOjEsInRvcGljcyI6W10sImN1c3RvbVByZWZlcmVuY2VzIjpbXX0seyJpZCI6ImMzZWVlZThjLTg5MDQtNGRhZi1iZmI3LWIxZjZjMGQwOWU0YSIsInZlcnNpb24iOjM1LCJ0b3BpY3MiOltdLCJjdXN0b21QcmVmZXJlbmNlcyI6W119XSwibm90aWNlcyI6W10sImRzRGF0YUVsZ"
		"W1lbnRzIjpbIlVzZXJBZ2VudCIsIkNvdW50cnkiLCJJbnRlcmFjdGlvblR5cGUiXX0.lS5tTjTHaDp-Ir9fDTFXJ4Wa2092cq9ZZ7Ld6DgWveaayBQXWTD6xqLVRPvY7Y2rvofq8O8WdwYPpAKFHxoqyQDEqCrY-cuE5VbHhekpyYaYOH3eo7CTkLtUYalPpq-rNQViq6ARFYGV6Kxl0oZjAEQF_aS-uxco5sR09Fk3byheduMswdXNocCS33tnyP8UDunD3P8zNKMUTsNW9GamiSsZuWm4JxmimFh3EF8LxCa3O6Ofb6Z8Cf24xjHqoMwiUKgv5Q3sh8ZxMi67IcqVJsB23l2AM2ixKYGg0qTJ3kayP-_tsgrJ9D4Gg6kKxYBctEuNTeiCATxe71F8SfRRum3PI6MX7hKjlFAN9NL5dVUMifIxQCbLtVvSjh2VzbOUI9II75W4QqgcUhAP66tzjyHT_u84JUZs6vrAe8xulmXEWfQLrGy"
		"_HarCEO3696XpF7UVRPjrRSMeRi6MrZTc8_qpVXD_VntxOde7mPjRgDpdmFUw6730G7lFWiJhLCFwRdL9NJTO-EiedrwvLebRY4ZgT0zhIoT4f3orAcTvNIBTc1EizAcktO36JrtYCmYwA-4s8qKCQ8F-sa4Weq8ju0ZzvmNX5vmqcZcfw8bGYcauHoL85xR-N1_1rNcGSUVw50I_C78z5ZqfVvhR34lRsMDk67M77NLNAbQnlqYijrQ\",\"identifier\":\"37cc8b08-d8ae-4c45-a3b7-e2e4ca2ccc00\",\"customPayload\":{\"Interaction\":1,\"AddDefaultInteraction\":false},\"isAnonymous\":true,\"test\":false,\"purposes\":[{\"Id\":\"A85F67EE-AA05-46A3-AE07-CD72787B11FD\",\"TransactionType\":\""
		"NO_CHOICE\"},{\"Id\":\"590FF105-2512-4723-AA13-7F32348D159D\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"C6F69493-0985-48A8-BD9E-96F82C853620\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"FFFE841C-4AE6-4908-94EF-98C704ADDD08\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"C3EEEE8C-8904-4DAF-BFB7-B1F6C0D09E4A\",\"TransactionType\":\"CONFIRMED\"},{\"Id\":\"A5D41B0F-A3CE-4748-B1A0-F0C45117217A\",\"TransactionType\":\"CONFIRMED\"}],\"dsDataElements\":{\"InteractionType\":\"Banner - Close\",\""
		"Country\":\"US\",\"UserAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.212 Safari/537.36\"}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("tr_3", 
		"URL=https://www.facebook.com/tr?id=1282296701803562&ev=ConsumerEngagement&noscript=1&gtmcb=2063783354", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t404.inf", 
		LAST);

	web_url("tr_4", 
		"URL=https://www.facebook.com/tr?id=1524986591042566&ev=ConsumerEngagement&noscript=1&gtmcb=1878111743", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t405.inf", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("events_2", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=25&mdh=792&pn=1&re=1&uu=d28b5070-c17f-aeda-fbd7-9d12dc72308d&sn=1&lv=1621520828&lhd=1621520828&hd=1621520828&pid=1255&str=1237&di=1791&dc=7883&fl=7886&eu=%5B%5B0%2C442%2C1626%2C792%5D%2C%5B6%2C5799%2C1176%2C101%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C5888%2C1176%2C101%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C12232%2C23476%5D%2C%5B2%2C6279%2C1189%2C101%2C0%2C%22%22%2C31594%2C23476%5D%2C%5B3%2C7454%2C1189%2C101%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B4%2C7661%2C1189%2C101%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C7681%2C1189%2C101%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C8175%2C1189%2C101%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%5D%2C%5B2%2C8205%2C1184%2C105%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-solution-template%3Aeq(0)%3Eapp-notification-icons%3Aeq(0)%3Ediv%3Aeq(0)%22%2C722%2C14242%5D%2C%5B6%2C8266%2C1155%2C133%2C%22a%23sec-nav-business-support%22%2C%22%22%5D%2C%5B7%2C8298%2C1143%2C146%2C%22a%23sec-nav-business-support%22%5D%2C%5B6%2C8298%2C1143%2C146%2C%22a%23sec-nav-business-support%3Espan%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C8329%2C1130%2C163%2C%22a%23sec-nav-business-support%3Espan%3Aeq(0)"
		"%22%5D%2C%5B6%2C8329%2C1130%2C163%2C%22a%23sec-nav-business-support%22%2C%22%22%5D%2C%5B7%2C8361%2C1123%2C171%2C%22a%23sec-nav-business-support%22%5D%2C%5B2%2C8607%2C1130%2C163%2C0%2C%22a%23sec-nav-business-support%22%2C48783%2C60648%5D%2C%5B5%2C8958%2C0%2C0%2C%22a%23closeAlert%22%2C%22%22%5D%5D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t406.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,idgpnmonknjnojddfkpgkljpfnnfcklj,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-90.0.4430.212");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:359170995&cup2hreq=b754a09aa54271773056e7018403399bf253e18b054ae374e2b89c813e83450c", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t407.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{6e620e54-8bbe-40b0-b706-021a03d47a22}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{0ae05ff4-e053-4e88-ac15-1dc4d6fcfec0}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{53862132-f4b4-44aa-bf52-a16142fe7671}\",\"rd\":5253},\"updatecheck\":{"
		"},\"version\":\"14.5\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{389dcb4f-b59b-4e3b-af8e-ab9d07d36d36}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\""
		"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{a1341a54-4891-4ee8-be3e-d57296b2046b}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.37a9146e17a5ffa3b7f05fce240a2a6cc67c07be3f6309d2d600d0310de696a9\"}]},\"ping\":{\"ping_freshness\":\"{3f3c1e6e-d297-4aa8-ad81-cdc065769b8a}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"1.29.0"
		"\"},{\"appid\":\"idgpnmonknjnojddfkpgkljpfnnfcklj\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.20\"}]},\"ping\":{\"ping_freshness\":\"{74aa1b76-f9c1-4af4-ad5f-f712a1ffcedd}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"3.1.20\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\""
		"ping\":{\"ping_freshness\":\"{b8d0b674-e241-4fcc-8e1d-4cc8afe3c8ac}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.3\"}]},\"ping\":{\"ping_freshness\":\"{66517f73-93be-4e7b-857d-19e1266d83fc}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\""
		"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.05bc4a6e12744e61576e531c7602778bf2316598236e1bb2b87a664fd2aee8c5\"}]},\"ping\":{\"ping_freshness\":\"{4aa43669-2f99-48dd-a888-a7bc14d0698c}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"9021.222.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.212\",\"protocol\":\"3.1\",\"requestid\":\"{6719a667-cbe6-49ae-bcb9-52d86600d641}\",\"sessionid\":\"{57daeaf1-b660-4752-b5f4-093e03c94e42}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.212\"}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("events_3", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=25&mdh=792&pn=1&re=1&uu=d28b5070-c17f-aeda-fbd7-9d12dc72308d&sn=1&lv=1621520828&lhd=1621520828&hd=1621520828&pid=1255&str=1237&di=1791&dc=7883&fl=7886&eu=%5B%5B2%2C10268%2C1081%2C224%2C0%2C%22div%23solution-container%3Eapp-solution-banner%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eimg%3Aeq(0)"
		"%22%2C43688%2C1384%5D%2C%5B2%2C12442%2C1092%2C224%2C0%2C%22%22%2C44132%2C1384%5D%2C%5B2%2C12842%2C1467%2C233%2C0%2C%22%22%2C59287%2C3491%5D%2C%5B2%2C13242%2C1429%2C217%2C0%2C%22%22%2C57752%2C-254%5D%5D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t408.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	/* wireless */

	lr_think_time(20);

	lr_start_transaction("wireless");

	web_custom_request("events_4", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=25&mdh=792&pn=1&re=1&uu=d28b5070-c17f-aeda-fbd7-9d12dc72308d&sn=1&lv=1621520828&lhd=1621520828&hd=1621520828&pid=1255&str=1237&di=1791&dc=7883&fl=7886&eu="
		"%5B%5B2%2C20505%2C1494%2C245%2C0%2C%22%22%2C60379%2C6299%5D%2C%5B2%2C21151%2C1494%2C241%2C0%2C%22%22%2C60379%2C5363%5D%2C%5B2%2C21553%2C1494%2C218%2C0%2C%22%22%2C60379%2C-20%5D%2C%5B2%2C26271%2C1569%2C252%2C0%2C%22%22%2C63410%2C7938%5D%2C%5B2%2C26671%2C1570%2C294%2C0%2C%22%22%2C63450%2C17768%5D%2C%5B2%2C27287%2C1432%2C268%2C0%2C%22%22%2C57873%2C11683%5D%2C%5B2%2C28370%2C1387%2C239%2C0%2C%22%22%2C56054%2C4895%5D%2C%5B2%2C28770%2C855%2C12%2C0%2C%22div%23welcomeHeader%22%2C34554%2C15728%5D%2C%5B2%2C2"
		"9171%2C819%2C5%2C0%2C%22%22%2C33099%2C6554%5D%2C%5B2%2C30251%2C1020%2C32%2C0%2C%22%22%2C41222%2C41942%5D%2C%5B2%2C30652%2C1299%2C160%2C0%2C%22div%23drop-down%3Ediv%3Aeq(0)%22%2C52498%2C54382%5D%2C%5B2%2C36645%2C1280%2C162%2C0%2C%22div%23nav-secondary%3Eul%3Aeq(0)%22%2C65479%2C58994%5D%2C%5B2%2C37046%2C906%2C52%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C37642%2C3678%5D%2C%5B2%2C37447%2C855%2C0%2C0%2C%22div%23welcomeHeader%22%2C34554%2C0%5D%5D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t409.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18768%7CMCMID%7C69249558432307637593801535037065829284%7CMCAAMLH-1622125628%7C9%7CMCAAMB-1622125628%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1621528029s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18775%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyle_userid=83e4-7309-528e-c9aa-61e1-66b4-e9de-5432; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSession=1621520832181; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleUserSessionsCount=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("kampyleSessionPageCounter=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_p_cnt=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hp_pv1_prefs=null; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("dcm_s=1621520832422.1132107695; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_gcl_au=1.1.593636137.1621520833; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("cd_user_id=1798a2c58831da-03dd521b427019-2363163-125f51-1798a2c5884d19; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_rdt_uuid=1621520833062.67d0cb19-0e4b-499c-95e4-8395b48da376; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_5105=1621520833230%7C365159%7C1621520833230%7C%7C; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetsid=7839a640b97711eba26e81467d883212; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_uetvid=7839f110b97711eb93f171af8a60c899; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("IR_PI=783ef2d6-b977-11eb-9a1c-42010a246c50%7C1621607233230; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppn=pps-ces%7Csolution_audio; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-05-20T14:27:16.605Z; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Thu+May+20+2021+14%3A27%3A16+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=37cc8b08-d8ae-4c45-a3b7-e2e4ca2ccc00&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C24%2C24%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("s_ppv=pps-ces%257Csolution_audio%2C24%2C24%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_revert_auto_header("Origin");

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

	lr_think_time(4);

	web_url("wireless-printing", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t410.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("0_2", 
		"URL=https://bat.bing.com/actionp/0?ti=13015798&tm=gtm001&Ver=2&mid=30f43ad1-7e5e-47bd-acf0-1ee229e17ce5&sid=7839a640b97711eba26e81467d883212&vid=7839f110b97711eb93f171af8a60c899&vids=1&evt=pageHide", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio", 
		"Snapshot=t411.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("9d25aca9-e352-4895-bbbd-ccebc9786c07.js_4", 
		"URL=https://t.contentsquare.net/uxa/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t412.inf", 
		LAST);

	web_url("embed.js_2", 
		"URL=https://nebula-cdn.kampyle.com/wu/541318/onsite/embed.js", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t413.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("xdframe-single-domain-1.1.0.html_2", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t414.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("region_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/region", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t415.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("c05061199_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/document/c05061199", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t416.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topicPage_3", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/termbase/us-en/topicPage", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t417.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topicPage_4", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/config/us-en/topicPage", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t418.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("href_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/sitemap/href", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t419.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"template\":\"Solutions_New\",\"path\":\"/topic/wireless-printing\",\"seriesoid\":0,\"modeloid\":0}", 
		LAST);

	web_custom_request("wireless-printing_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/solution/topics/wireless-printing", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t420.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"os\":{\"isSelected\":false,\"osDetected\":\"Windows NT 10.0; Win64; x64\",\"osbit\":\"64\",\"selectedOs\":\"\",\"osTmsId\":null,\"osParentTmsId\":null}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("a2129670914.html_2", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t421.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("wcc_second_Nav_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_second_Nav", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t422.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("e.gif_2", 
		"URL=https://nexus.ensighten.com/error/e.gif?msg=%22TypeError%3A%20Cannot%20read%20property%20%27triggerPromiseWithTimeout%27%20of%20undefined%22%20error%20caught%20in%20Data%20Definition%20trigger%3A%20support_language_code%2C%20ID%3A9913.%20Using%20bottom%20of%20body%20trigger.&lnn=-1&fn=&cid=217&client=hp&publishPath=support_stage&rid=-1&did=-1&errorName=DataDefinitionException", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t423.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_url("ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIXCZwUvqocrTqJEgUNnyyLRBIFDZ8si0QYrqnKAQ==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvOTAuMC40NDMwLjIxMhIXCZwUvqocrTqJEgUNnyyLRBIFDZ8si0QYrqnKAQ==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t424.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("wcc_sitehome_alerts_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/us-en/wcc_sitehome_alerts", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t425.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("serverComponent.php_2", 
		"URL=https://nexus.ensighten.com/hp/support_stage/serverComponent.php?r=2708.7635917564667&namespace=Bootstrapper&staticJsPath=nexus.ensighten.com/hp/support_stage/code/&publishedOn=Tue%20May%2004%2007:24:28%20GMT%202021&ClientID=217&PageID=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing%3Fgdl_template%3DSolution_Audio", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t426.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("wcc_solutions_xhtml_11", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t427.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"151421312111172811949141510110014750612961268\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_custom_request("wcc_solutions_xhtml_12", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t428.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"121311516781225241154118446132146297313513\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_custom_request("wcc_solutions_xhtml_13", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t429.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"1141470141171772548231141313111141513884144140\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_custom_request("wcc_solutions_xhtml_14", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t430.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"191531130157141214104161291315013914310818144211\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_custom_request("wcc_solutions_xhtml_15", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t431.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"114122214274091184414586900335151211011670\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_custom_request("wcc_solutions_xhtml_16", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t432.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"12126010811475513413101211161191113321487106010\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("us-en_10", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=CID4403597156001,CID874fd177-baaa-4d02-ac2c-2faf3e9372b6,CID1245172379001&udpFlag=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t433.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("wcc_pfinder_common_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/contexual/us-en/wcc_pfinder_common?pageTemplate=Printer_Landing_New", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t434.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("wcc_solutions_xhtml_17", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t435.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"190431002101014341512390933155842931510513\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_url("wcc_solutions_ssr_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contextual-filtered/us-en/wcc_solutions_ssr?topicTmsId=111510910374111315431114913157710711273002112", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t436.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("wcc_solutions_spoc_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contextual-filtered/us-en/wcc_solutions_spoc?topicTmsId=111510910374111315431114913157710711273002112", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t437.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("wcc_solutions_xhtml_18", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/contexual-solution/wcc_solutions_xhtml", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t438.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"cc\":\"us\",\"lc\":\"en\",\"intentTmsId\":\"1206121415101397111541312489731015106501111121206\",\"osTmsId\":\"184651403277425843090532942361795\",\"osParentTmsId\":\"NA\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("hqdefault.jpg_11", 
		"URL=https://i.ytimg.com/vi/rmWuV1gXkfg/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t439.inf", 
		LAST);

	web_url("hqdefault.jpg_12", 
		"URL=https://i.ytimg.com/vi/YIjghaR5E-o/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t440.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("topicbanner_print.jpg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/solution-page/topicbanner_print.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t441.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("7kxod6.js_2", 
		"URL=https://px.owneriq.net/stas/s/7kxod6.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t442.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("tr_5", 
		"URL=https://www.facebook.com/tr?id=1688171794549438&ev=PageView&noscript=1&gtmcb=1060975872", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t443.inf", 
		LAST);

	web_url("v3_2", 
		"URL=https://ct.pinterest.com/v3/?event=init&tid=2613604734453&noscript=1&gtmcb=1187469498", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t444.inf", 
		LAST);

	web_url("collect_2", 
		"URL=https://px.ads.linkedin.com/collect/?pid=40922&fmt=gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t445.inf", 
		LAST);

	web_url("849111477_2", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/849111477/?guid=ON&script=0&userId=null&gtmcb=1217133471", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t446.inf", 
		LAST);

	web_url("783157761_2", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/783157761/?guid=ON&script=0&userId=null&gtmcb=1889266675", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t447.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("us-en_11", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=y50CCKk0kPs,rmWuV1gXkfg,YIjghaR5E-o&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t448.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("us-en_12", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=O-Ak18JwOW0,Z9_O6vHfBQI&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t449.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("us-en_13", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=YbLYfMCQ3WM&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t450.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("print_router.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/solution-page/print_router.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t451.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("us-en_14", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=0U8icI1rncs&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t452.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("us-en_15", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/content/videoDetails/us-en?videoIds=y50CCKk0kPs&udpFlag=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t453.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("j_2", 
		"URL=https://px.owneriq.net/j/?ref=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing&pt=7kxod6&t=f%7C%22Wireless%2520Print%2520Support%2520%2526%2520Troubleshooting%2520%257C%2520HP%25C2%25AE%2520Support%22&s=6ka7", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t454.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("0_3", 
		"URL=https://bat.bing.com/action/0?ti=13015798&tm=gtm001&Ver=2&mid=7f912eda-6e81-40fe-b166-8599e68b2914&sid=7839a640b97711eba26e81467d883212&vid=7839f110b97711eb93f171af8a60c899&vids=0&pi=1200101525&lg=en-US&sw=1463&sh=823&sc=24&tl=Wireless%20Print%20Support%20%26%20Troubleshooting%20%7C%20HP%C2%AE%20Support&kw=wireless%20printer%20problems,%20wireless%20print%20troubleshooting&p=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing&r=&lt=2368&evt=pageLoad&msclkid=N&sv=1&"
		"rn=70459", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t455.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("events_5", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t456.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"18956663993\",\"revision\":\"900\",\"visitors\":[{\"visitor_id\":\"oeu1621520827753r0.3639911420698405\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t"
		"\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1621520872312}],\"snapshots\":[{\"activationTimestamp\":1621520872282,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"a79c9f37-9284-44bc-ab75-35614b353b06\",\"t\":1621520872313}]}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("eps_2", 
		"URL=https://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6748072731033965800J&l=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t457.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("s_vnum=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/topic/audio; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_ppn=pps-ces%7Csolution_audio; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("OptanonAlertBoxClosed=2021-05-20T14:27:16.605Z; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Thu+May+20+2021+14%3A27%3A16+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=37cc8b08-d8ae-4c45-a3b7-e2e4ca2ccc00&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_ppvl=D%253Dv55%2C24%2C24%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_ppv=pps-ces%257Csolution_audio%2C24%2C24%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("__CT_Data=gpv=2&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Solution_WirelessPrint%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_uetsid=7839a640b97711eba26e81467d883212; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_uetvid=7839f110b97711eb93f171af8a60c899; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_5105=1621520873908%7C365159%7C1621520873908%7C%7C; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_PI=783ef2d6-b977-11eb-9a1c-42010a246c50%7C1621607273908; DOMAIN=linkto.ext.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("5105_2", 
		"URL=https://linkto.ext.hp.com/bc/365159/342132/5105", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t458.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=srcref=&landurl=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing&&_ir=U364%7C783ef2d6-b977-11eb-9a1c-42010a246c50%7C1621520873908", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("1_2", 
		"URL=https://tapestry.tapad.com/tapestry/1?ta_partner_id=916&ta_partner_did=Q6748072731033965800J&ta_format=png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t459.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("print_upgradeos.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/solution-page/print_upgradeos.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t460.inf", 
		LAST);

	web_url("print_wirelesssetup.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/solution-page/print_wirelesssetup.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t461.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("379208.gif_2", 
		"URL=https://idsync.rlcdn.com/379208.gif?partner_uid=Q6748072731033965800J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t462.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("854101013_3", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/854101013/?random=1621520873954&cv=9&fst=1621520873954&num=1&guid=ON&resp=GooglemKTybQhCsO&eid=2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=2&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing&tiba=Wireless%20Print%20Support%20%26%20Troubleshooting%20%7C%20HP%C2%AE%20Support&hn=www.googleadservices.com&async=1&"
		"rfmt=3&fmt=4", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t463.inf", 
		LAST);

	web_url("687393200_3", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/687393200/?random=1621520873946&cv=9&fst=1621520873946&num=1&userId=null&guid=ON&resp=GooglemKTybQhCsO&eid=376635471%2C2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=2&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing&tiba=Wireless%20Print%20Support%20%26%20Troubleshooting%20%7C%20HP%C2%AE%20Support&hn="
		"www.googleadservices.com&async=1&rfmt=3&fmt=4", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t464.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("sd_2", 
		"URL=https://us-u.openx.net/w/1.0/sd?id=537073059&val=Q6748072731033965800J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t465.inf", 
		LAST);

	web_url("Pug_2", 
		"URL=https://simage2.pubmatic.com/AdServer/Pug?vcode=bz0yJnR5cGU9MSZjb2RlPTI2NDYmdGw9MTI5NjAw&piggybackCookie=Q6748072731033965800J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t466.inf", 
		LAST);

	web_url("hqdefault.jpg_13", 
		"URL=https://img.youtube.com/vi/y50CCKk0kPs/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t467.inf", 
		LAST);

	web_url("hqdefault.jpg_14", 
		"URL=https://img.youtube.com/vi/rmWuV1gXkfg/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t468.inf", 
		LAST);

	web_url("ibs_dpid=53196&dpuuid=Q6748072731033965800J", 
		"URL=https://dpm.demdex.net/ibs_dpid=53196&dpuuid=Q6748072731033965800J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t469.inf", 
		LAST);

	web_url("hqdefault.jpg_15", 
		"URL=https://img.youtube.com/vi/YIjghaR5E-o/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t470.inf", 
		LAST);

	web_url("rum_2", 
		"URL=https://dsum.casalemedia.com/rum?cm_dsp_id=31&external_user_id=Q6748072731033965800J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t471.inf", 
		LAST);

	web_url("hqdefault.jpg_16", 
		"URL=https://img.youtube.com/vi/Z9_O6vHfBQI/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t472.inf", 
		LAST);

	web_url("hqdefault.jpg_17", 
		"URL=https://img.youtube.com/vi/YbLYfMCQ3WM/hqdefault.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t473.inf", 
		LAST);

	web_url("pageview_2", 
		"URL=https://c.contentsquare.net/pageview?pid=1255&uu=d28b5070-c17f-aeda-fbd7-9d12dc72308d&sn=1&lv=1621520828&lhd=1621520828&hd=1621520876&pn=2&re=1&dw=1621&dh=3307&ww=1626&wh=792&sw=1463&sh=823&dr=&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing&uc=1&la=en-US&cvars=%7B%221%22%3A%5B%22Template%22%2C%22Solution_WirelessPrint%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&cvarp="
		"%7B%221%22%3A%5B%22Template%22%2C%22Solution_WirelessPrint%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&v=10.8.6&r=742714", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t474.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("setuid_2", 
		"URL=https://ib.adnxs.com/setuid?entity=13&code=Q6748072731033965800J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t475.inf", 
		LAST);

	web_url("sp.pl_2", 
		"URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&d=Thu%2C%2020%20May%202021%2014%3A27%3A56%20GMT&n=0&b=Wireless%20Print%20Support%20%26%20Troubleshooting%20%7C%20HP%C2%AE%20Support&.yp=10044594&f=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing&enc=UTF-8&yv=1.9.2&tagmgr=gtm%2Censighten", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t476.inf", 
		LAST);

	web_url("tap.php_2", 
		"URL=https://pixel.rubiconproject.com/tap.php?v=11581&nid=2395&put=Q6748072731033965800J", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t477.inf", 
		LAST);

	web_url("ep_2", 
		"URL=https://px.owneriq.net/ep?sid%5B%5D=8460259172&sid%5B%5D=8460259192&pt=7kxod6&uid=Q6748072731033965800J&jcs=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t478.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("location_2", 
		"URL=https://geolocation.onetrust.com/cookieconsentpub/v1/geo/location", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t479.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("pageEvent_2", 
		"URL=https://c.contentsquare.net/pageEvent?value=MIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA&isETR=false&v=10.8.6&pid=1255&uu=d28b5070-c17f-aeda-fbd7-9d12dc72308d&sn=1&pn=2&r=002443", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t480.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("854101013_4", 
		"URL=https://www.google.com/pagead/1p-user-list/854101013/?random=1621520873954&cv=9&fst=1621519200000&num=1&guid=ON&eid=2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=2&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing&tiba=Wireless%20Print%20Support%20%26%20Troubleshooting%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=4293063052&resp=GooglemKTybQhCsO&rmt_tld=0&ipr=y", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t481.inf", 
		LAST);

	web_url("687393200_4", 
		"URL=https://www.google.com/pagead/1p-user-list/687393200/?random=1621520873946&cv=9&fst=1621519200000&num=1&userId=null&guid=ON&eid=376635471%2C2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=2&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg5c1&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing&tiba=Wireless%20Print%20Support%20%26%20Troubleshooting%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=3202381296&resp=GooglemKTybQhCsO"
		"&rmt_tld=0&ipr=y", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t482.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("otBannerSdk.js_2", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/otBannerSdk.js", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t483.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_url("otPcTab.json_2", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/v2/otPcTab.json", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t484.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("pixel_2", 
		"URL=https://bid.g.doubleclick.net/xbbe/pixel?d=KAE", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t485.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("__cool.gif_3", 
		"URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjIxMiBTYWZhcmkvNTM3LjM2Iiwic2Vzc2lvbl9wbGF0Zm9ybSI6ICJXaW4zMiIsInRyYWNrZXJfdHlwZSI6ICJqYXZhc2NyaXB0IiwidHJhY2tlcl92ZXJzaW9uIjogIjIuMS4xNSIsImV2ZW50X25hbWUiOiAiY3JlYXRlU2Vzc2lvbiIsImV2ZW50X3RpbWVzdGFtcF9lcG9jaCI6ICIxNjIxNTIwODc3MTIzIiwiZXZlbnRfdGltZXpvbmVfb2Zmc2V0IjogMCwidXNlcl9pZC"
		"I6ICIxNzk4YTJjNTg4MzFkYS0wM2RkNTIxYjQyNzAxOS0yMzYzMTYzLTEyNWY1MS0xNzk4YTJjNTg4NGQxOSIsInVybCI6ICJodHRwczovL3Bwc3N1cHBvcnQtaXRnbGxiaDcuaW5jLmhwLmNvbS91cy1lbi90b3BpYy93aXJlbGVzcy1wcmludGluZyIsImZvcm1JZCI6IG51bGwsImZvcm1UcmlnZ2VyVHlwZSI6IG51bGwsImthbXB5bGVfZGF0YSI6IHsiTEFTVF9JTlZJVEFUSU9OX1ZJRVciOiAiIiwiREVDTElORURfREFURSI6ICIiLCJrYW1weWxlSW52aXRlUHJlc2VudGVkIjogIiIsImthbXB5bGVfdXNlcmlkIjogIjgzZTQtNzMwOS01MjhlLWM5YWEtNjFlMS02NmI0LWU5ZGUtNTQzMiIsImthbXB5bGVVc2VyU2Vzc2lvbiI6ICIxNjIxNTIwODMyMTgxIiwia2Ft"
		"cHlsZVVzZXJQZXJjZW50aWxlIjogIiIsIlNVQk1JVFRFRF9EQVRFIjogIiIsImFkZGl0aW9uYWxEYXRhIjogeyJ1c2VyX3Nlc3Npb24iOiAiMTYyMTUyMDgzMjE4MSIsImRpcmVjdF9uYXZpZ2F0aW9uIjogdHJ1ZSwiZGlmZnJlbnRfcmVmZXJyZXIiOiB0cnVlfX0sImNvb2tpZV9zaXplIjogMjg0MSwia2FtcHlsZV92ZXJzaW9uIjogIjIuMzguMCIsIm9uc2l0ZV92ZXJzaW9uIjogIjIuMzguMCIsImhpc3RvcnlfbGVuZ3RoIjogMiwiZXZlbnRfbG9jYWxfdGltZXN0YW1wIjogMTYyMTUyMDg3NzAyMCwicG9zaXRpb24iOiBudWxsLCJpc1VzZXJJZGVudGlmaWVkIjogZmFsc2UsImZlZWRiYWNrX2NvcnJlbGF0aW9uX3V1aWQiOiBudWxsfQpdfQ==", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t486.inf", 
		LAST);

	web_url("__cool.gif_4", 
		"URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjIxMiBTYWZhcmkvNTM3LjM2Iiwic2Vzc2lvbl9wbGF0Zm9ybSI6ICJXaW4zMiIsInRyYWNrZXJfdHlwZSI6ICJqYXZhc2NyaXB0IiwidHJhY2tlcl92ZXJzaW9uIjogIjIuMS4xNSIsImV2ZW50X25hbWUiOiAibmVidWxhX3BhZ2VfdmlldyIsImV2ZW50X3RpbWVzdGFtcF9lcG9jaCI6ICIxNjIxNTIwODc3MTMxIiwiZXZlbnRfdGltZXpvbmVfb2Zmc2V0IjogMCwidXNlcl"
		"9pZCI6ICIxNzk4YTJjNTg4MzFkYS0wM2RkNTIxYjQyNzAxOS0yMzYzMTYzLTEyNWY1MS0xNzk4YTJjNTg4NGQxOSIsImVudmlyb21lbnQiOiAicHJvZFVzT3JlZ29uIiwiYWNjb3VudElkIjogNTQxMTE0LCJ1cmwiOiAiaHR0cHM6Ly9wcHNzdXBwb3J0LWl0Z2xsYmg3LmluYy5ocC5jb20vdXMtZW4vdG9waWMvd2lyZWxlc3MtcHJpbnRpbmciLCJ3ZWJzaXRlSWQiOiA1NDEzMTgsImZvcm1JZCI6IG51bGwsImZvcm1UcmlnZ2VyVHlwZSI6IG51bGwsImthbXB5bGVfZGF0YSI6IHsiTEFTVF9JTlZJVEFUSU9OX1ZJRVciOiAiIiwiREVDTElORURfREFURSI6ICIiLCJrYW1weWxlSW52aXRlUHJlc2VudGVkIjogIiIsImthbXB5bGVfdXNlcmlkIjogIjgzZTQtNzMwOS01"
		"MjhlLWM5YWEtNjFlMS02NmI0LWU5ZGUtNTQzMiIsImthbXB5bGVVc2VyU2Vzc2lvbiI6ICIxNjIxNTIwODc3MDIwIiwia2FtcHlsZVVzZXJQZXJjZW50aWxlIjogIiIsIlNVQk1JVFRFRF9EQVRFIjogIiJ9LCJjb29raWVfc2l6ZSI6IDI4NDEsImthbXB5bGVfdmVyc2lvbiI6ICIyLjM4LjAiLCJvbnNpdGVfdmVyc2lvbiI6ICIyLjM4LjAiLCJoaXN0b3J5X2xlbmd0aCI6IDIsImV2ZW50X2xvY2FsX3RpbWVzdGFtcCI6IDE2MjE1MjA4NzcwMjMsInBvc2l0aW9uIjogbnVsbCwiaXNVc2VySWRlbnRpZmllZCI6IGZhbHNlLCJmZWVkYmFja19jb3JyZWxhdGlvbl91dWlkIjogbnVsbH0KXX0=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t487.inf", 
		LAST);

	web_url("dvar_2", 
		"URL=https://c.contentsquare.net/dvar?v=10.8.6&pid=1255&uu=d28b5070-c17f-aeda-fbd7-9d12dc72308d&sn=1&pn=2&dv=N4IgpgaghgTgjAJhALhAQQHYHsME8C2WArgM4gA0IADjFlQMwogDKWANkQC4CWOA%2BgHVuMMGzAkSABRjcMnCtVpU4TUgFowGEAF8gA%3D%3D&r=135693", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t488.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("OptanonAlertBoxClosed=2021-05-20T14:27:16.605Z; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22Solution_WirelessPrint%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=met2.hp.com");

	web_add_cookie("IR_5105=1621520873908%7C365159%7C1621520873908%7C%7C; DOMAIN=met2.hp.com");

	web_add_cookie("IR_PI=783ef2d6-b977-11eb-9a1c-42010a246c50%7C1621607273908; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_id=d28b5070-c17f-aeda-fbd7-9d12dc72308d.1621520828.1.1621520876.1621520828.1589380098.1655684828829.None.1; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_s=2.1; DOMAIN=met2.hp.com");

	web_add_cookie("__CT_Data=gpv=2&ckp=tld&dm=hp.com&apv_325_www11=2&cpv_325_www11=2; DOMAIN=met2.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Thu+May+20+2021+14%3A27%3A56+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=37cc8b08-d8ae-4c45-a3b7-e2e4ca2ccc00&interactionCount=1&landingPath=NotLandingPage&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1&geolocation=US%3BOR&AwaitingReconsent=false; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisit=2; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisitc=2; DOMAIN=met2.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppvl=pps-ces%257Csolution_audio%2C24%2C24%2C792%2C1626%2C792%2C1463%2C823%2C1.57%2CP; DOMAIN=met2.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("s02784716174020", 
		"URL=https://met2.hp.com/b/ss/hphqglobal,hphq-ces-global-stage-temp,hphq-ces-na-stage-temp/1/JS-2.15.0/s02784716174020?AQB=1&ndh=1&pf=1&t=20%2F4%2F2021%2014%3A27%3A57%204%200&mid=69249558432307637593801535037065829284&aamlh=9&ce=UTF-8&ns=hpcorp&pageName=D%3Dv55&g=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing&ch=pps&server=ppssupport-itgllbh7.inc.hp.com&events=event46%2Cevent45%3D77%2Cevent92%2Cevent93&aamb=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1="
		"us-en&v2=us&c3=Solution_WirelessPrint&v3=en&c7=us&c8=en&c9=cs%3Aconsumer.home&c12=R11839&v12=Anonymous&c15=22&c26=D%3Dv12&c30=pps-ces%7Csolution_audio&c31=null&v32=null&v33=null&v34=null&v35=null&c43=null&v46=D%3Dc3&c49=D%3Dg&c50=D%3Dg&c51=hpexpnontridion%3Aihfcaas.5.r&c55=null&v55=pps-ces%7Csolution_wirelessprint&c56=null&c57=null&c58=null&c59=null&c60=24&c61=0001%3A0002%3A00&c63=Engaged&c66=69249558432307637593801535037065829284&c73=pps-ces%7Csolution_audio&v90="
		"https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing&v92=ens%7Csupport_stage%7C04-May-2021%2007%3A24%3A28&v93=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Ftopic%2Fwireless-printing&v94=ppssupport-itgllbh7.inc.hp.com&v95=ppssupport-itgllbh7.inc.hp.com%3AUnknown%7CUnknown%7CAMS%7Cus%3Aen%7CUSD&v99=7.7&s=1463x823&c=24&j=1.6&v=N&k=Y&bw=1626&bh=792&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&AQE=1", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t489.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("events_6", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=24&mdh=792&pn=2&re=1&uu=d28b5070-c17f-aeda-fbd7-9d12dc72308d&sn=1&lv=1621520828&lhd=1621520828&hd=1621520876&pid=1255&str=1139&di=1200&dc=6920&fl=6924&eu=%5B%5B0%2C170%2C1626%2C792%5D%2C%5B2%2C3383%2C1463%2C233%2C0%2C%22div%23solution-container%3Eapp-solution-banner%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eimg%3Aeq(0)"
		"%22%2C59126%2C3515%5D%2C%5B2%2C3789%2C1435%2C228%2C0%2C%22%22%2C57994%2C2337%5D%2C%5B2%2C4177%2C1430%2C217%2C0%2C%22%22%2C57792%2C-256%5D%5D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/topic/wireless-printing", 
		"Snapshot=t490.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,cmahhnpholdijhjokonmfdjbfmklppij,gcmjkmgdlgnkkcocmoeiminaijmmjnii,obedbbhbpmojnkanicioggnmelmoomoc,hnimpnehoodheedghdeeijklkeaacbdc,lmelglejhemejginpboagddgdfbepgmp,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,aemomkdncapdnfajjbbcbdebjljbpmpj,hfnkpimlhhgieaddgfemjhofmfblmnib,giekcmmlnklenlaomppkphknjmnnpneh,gkmgaooipdjhmangpemjhigmamcehddo,jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,"
		"ehgidpndbllacpjalkiimkbadgjfnnmc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,pdafiollngonhoadbmdoemagnfpdphbe,jamhcnnkihinmdlkakkaopbjbbcngflc,eeigpngbgcognadeebkilcpcaedhellh");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-90.0.4430.212");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:4284206588&cup2hreq=77dfc6f40cec58ee2c001217312d0c1f73e344081abfd77a895d7097eba753f5", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t491.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{9ea89364-1574-45fe-9323-03e76214ca62}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{f43eea35-19d4-4c87-b133-fa7382b82398"
		"}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"4.10.2209.0\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GCEU\",\"cohort\":\"1:wr3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7\"}]},\"ping\":{\"ping_freshness\":\"{2bae8c45-0785-4316-bb1e-c13082a486ef}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"1.0.6\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\""
		",\"brand\":\"GCEU\",\"cohort\":\"1:bm1:zx9@0.1,zvx@0.01\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.4dcc255c0d82123c9c4251bb453165672ea0458f0379f3a7a534dc2a666d7c6d\"}]},\"ping\":{\"ping_freshness\":\"{212d3a44-fd88-4d8e-8d79-99b6c3ed2b4d}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"9.22.0\"},{\"accept_locale\":\"ENUS\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GCEU\",\"cohort\":\"1:s6f:\",\"cohorthint\":\""
		"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.51ad0ba60f8d94fdf96628bd0bc20b28199ccabce5f4c84546885445676b2d7a\"}]},\"ping\":{\"ping_freshness\":\"{3dafb47c-ac4b-4aa9-9bb1-4fef4fb04e36}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"20210506.372668613\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{ef0f90bf-76ca-4917-adb5-3b0455bc13de}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GCEU\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.237dcc7327ac96be04088bb4e69d5aa8e30b886c323f586eb3573b64bc4d8d45\"}]},\"ping\":{\"ping_freshness\":\""
		"{e00430b5-99c5-41aa-ab88-b98dbccaa898}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"280\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4\"}]},\"ping\":{\"ping_freshness\":\"{eb2f2d0c-c1cc-4a2f-b3ce-280e77d8490b}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"43\"},{\"appid\":\""
		"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.d730fdd6875bfda19ae43c639e89fe6c24e48b53ec4f466b1d7de2001f97e03c\"}]},\"ping\":{\"ping_freshness\":\"{61bf8480-ac6b-40db-b0b9-14c7a7f15f32}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{87e82fc6-d2a6-4708-ab8d-2613f8265f1d}\""
		",\"rd\":5253},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.1ade61542af3db66e4e7071df7a401513ac53801260e0e8a055bb0f98d711768\"}]},\"ping\":{\"ping_freshness\":\"{586078c7-4b52-4fb7-bb92-a72f0c81b066}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"6617\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\""
		"brand\":\"GCEU\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{627cf5c4-89ae-447a-ab3e-f9581fa370f9}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\""
		"packages\":{\"package\":[{\"fp\":\"1.48b7cd9a9a4134d608effe24870c91e3bfc6a097c1472878a0c6d8b61f87d0fe\"}]},\"ping\":{\"ping_freshness\":\"{c236e432-5450-4179-b61a-fa3bb2e84000}\",\"rd\":5253},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"90.262.200\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.ec9ed6fde8736024fb892648e296dfba47fed6d6ce7e79ac420f36fcd8fdde26\"}]},\"ping\":{\"ping_freshness\":\"{5685e3a2-7473-4112-ab6f-500337acad9b}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"2634\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:zx3@0.01\",\"cohorthint\":\"M80ToM99\",\"cohortname\":\"M80ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.308bfa586b3108c72b6ad89a0869f3074fa43eef5924710ad092293b0506bbfc\"}]},\"ping\":{\""
		"ping_freshness\":\"{86562339-e9c2-4a00-b0f2-fc1a18e9c25d}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"2021.5.9.1142\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{e6367a3c-3388-441a-b41a-8db8fa045db3}\",\"rd\":5253},\"updatecheck\":{},\""
		"version\":\"2018.8.8.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GCEU\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{db5bdb50-a439-4b69-95d7-99f953b1c629}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"GCEU\",\"cohort\":\"1:vz3:\","
		"\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.baeb7c645c7704139756b02bf2741430d94ea3835fb1de77fef1057d8c844655\"}]},\"ping\":{\"ping_freshness\":\"{0fd50693-9c7e-41fd-ba8d-1ecd6744e1d9}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"2021.2.22.1142\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GCEU\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.6e0282acd8a1cac7466e17d3b06cb1e8668cd1d9d03412a591febc9e3f07017f\"}]},\"ping\":{\"ping_freshness\":\"{2fbb6f66-35b0-4fea-aaa1-8f72d370b574}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"92.0.4514.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GCEU\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\""
		"{a8c59ef3-adbe-4ee3-a075-fa98af1b410f}\",\"rd\":5253},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.212\",\"protocol\":\"3.1\",\"requestid\":\"{b0218b42-bd44-48dc-a264-9e58d69ffe77}\",\"sessionid\":\"{b5e6db7f-23e7-43ac-b85c-ab125d51436e}\",\"updater\":"
		"{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.212\"}}", 
		LAST);

	lr_end_transaction("wireless",LR_AUTO);

	return 0;
}