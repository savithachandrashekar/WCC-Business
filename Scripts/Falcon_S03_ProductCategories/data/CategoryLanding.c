CategoryLanding()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=90", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

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

	web_custom_request("products", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		"Body= ", 
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
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("latin-e-regular-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-regular-ttf.woff2", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t4.inf", 
		LAST);

	web_custom_request("latin-e-bold-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-bold-ttf.woff2", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t5.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("can.jquery.js", 
		"URL=https://ssl.www8.hp.com/us/en/scripts/framework/jquery/v-1-8/can.jquery.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("font-awesome.min.css", 
		"URL=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("fontawesome-webfont.woff", 
		"URL=https://netdna.bootstrapcdn.com/font-awesome/4.1.0/fonts/fontawesome-webfont.woff?v=4.1.0", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_custom_request("bootstrap.min.css", 
		"URL=https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t9.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("latin-e-light-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-light-ttf.woff2", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t10.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("jquery.min.js", 
		"URL=https://cdnjs.cloudflare.com/ajax/libs/jquery/2.2.4/jquery.min.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("hp_support_controls.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/hp_support_controls.woff2", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t12.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_custom_request("styles.cdc54c9d1a6d17da607e.css", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/styles.cdc54c9d1a6d17da607e.css", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t13.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("latin-e-regular-italic-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-regular-italic-ttf.woff2", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t14.inf", 
		LAST);

	web_custom_request("latin-e-bold-italic-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-bold-italic-ttf.woff2", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t15.inf", 
		LAST);

	web_custom_request("latin-e-light-italic-ttf.woff2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/fonts/latin-e-light-italic-ttf.woff2", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t16.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("runtime.9e457cc8784dad4b61c4.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/runtime.9e457cc8784dad4b61c4.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t17.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("sprite-country-flags.png", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/sprite-country-flags.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t18.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"URL=https://t.contentsquare.net/uxa/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("main.ad82e25c31bf62fad499.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/main.ad82e25c31bf62fad499.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t20.inf", 
		LAST);

	web_custom_request("polyfills.d301623517a574834b52.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/polyfills.d301623517a574834b52.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t21.inf", 
		LAST);

	web_custom_request("scripts.204dec66716e86a3ab29.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/scripts.204dec66716e86a3ab29.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("xdframe-single-domain-1.1.0.html", 
		"URL=https://csxd.contentsquare.net/uxa/xdframe-single-domain-1.1.0.html?pid=1255&cookieNames=_cs_id,_cs_s,_cs_cvars,_cs_ex", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("9d25aca9-e352-4895-bbbd-ccebc9786c07.js_2", 
		"URL=https://ct.contentsquare.net/ptc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t24.inf", 
		LAST);

	web_custom_request("9d25aca9-e352-4895-bbbd-ccebc9786c07.js_3", 
		"URL=https://ct.contentsquare.net/pcc/9d25aca9-e352-4895-bbbd-ccebc9786c07.js?DeploymentConfigName=Release_20210426&Version=5", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t25.inf", 
		LAST);

	web_custom_request("latest-WR110.js", 
		"URL=https://ct.contentsquare.net/www/latest-WR110.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("pages-product-landing-product-landing-module-ngfactory.35bb287853cd1fe894a8.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/pages-product-landing-product-landing-module-ngfactory.35bb287853cd1fe894a8.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("contact-hp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/us-en/contact-hp", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("productLanding", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/config/us-en/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("third_party_lib.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/libs/scripts/third_party_lib.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t30.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("region", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/ssc/region", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("medallia.js", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/libs/scripts/medallia.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t32.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("productLanding_2", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/termbase/us-en/productLanding", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("printer-signIn.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/printer-signIn.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t34.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("country-selector.json", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/data/country-selector.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("wcc_second_Nav", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_second_Nav", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("wcc_pfinder_common", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/contexual/us-en/wcc_pfinder_common?pageTemplate=SiteHome_New", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("wcc_sitehome_alerts", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v1/us-en/wcc_sitehome_alerts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("icons.png", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/icons.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t39.inf", 
		LAST);

	web_custom_request("virtual_assistant.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/virtual_assistant.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t40.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("wcc_products_banner", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_products_banner", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("wcc_products_category", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/cms-v2/us-en/wcc_products_category", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

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

	web_custom_request("ChNDaHJvbWUvOTAuMC40NDMwLjkzEhAJ7r7eFPUeaysSBQ3YJStn", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChNDaHJvbWUvOTAuMC40NDMwLjkzEhAJ7r7eFPUeaysSBQ3YJStn?alt=proto", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t43.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("18956663993.js", 
		"URL=https://cdn.optimizely.com/js/18956663993.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t44.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("30-p-finder-printer.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/30-p-finder-printer.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t45.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("embed.js", 
		"URL=https://nebula-cdn.kampyle.com/wu/541318/onsite/embed.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t46.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("p-finder-icon-30-p-finder-printer-blue.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/p-finder-icon-30-p-finder-printer-blue.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t47.inf", 
		LAST);

	web_custom_request("flag_us.gif", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/flags/flag_us.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t48.inf", 
		LAST);

	web_custom_request("icons-30-p-finder-laptop.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/icons-30-p-finder-laptop.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t49.inf", 
		LAST);

	web_custom_request("icons-30-p-finder-desktop.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/icons-30-p-finder-desktop.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t50.inf", 
		LAST);

	web_custom_request("icons-30-p-finder-other.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/icons-30-p-finder-other.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t51.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("active-products", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/prodcategory/us-en/active-products", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("productLandingBanner.webp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/product-page-assets/productLandingBanner.webp", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t53.inf", 
		LAST);

	web_add_cookie("optimizelyEndUserId=oeu1620386134588r0.6070503245592556; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("p-finder-icon-30-p-finder-other-blue.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/p-finder-icon-30-p-finder-other-blue.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t54.inf", 
		LAST);

	web_custom_request("p-finder-icon-30-p-finder-laptop-blue.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/p-finder-icon-30-p-finder-laptop-blue.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t55.inf", 
		LAST);

	web_custom_request("p-finder-icon-30-p-finder-desktop-blue.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/p-finder/p-finder-icon-30-p-finder-desktop-blue.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t56.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("a2129670914.html", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("268161584258236861743175748903686.webp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/product-page-assets/268161584258236861743175748903686.webp", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t58.inf", 
		LAST);

	web_custom_request("719254703884098331533022801657151.webp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/product-page-assets/719254703884098331533022801657151.webp", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t59.inf", 
		LAST);

	web_custom_request("218999353636529622426797829401137.webp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/product-page-assets/218999353636529622426797829401137.webp", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t60.inf", 
		LAST);

	web_custom_request("19539216537429048012118866320194.webp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/product-page-assets/19539216537429048012118866320194.webp", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t61.inf", 
		LAST);

	web_custom_request("71375055315931533544259938739985.webp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/product-page-assets/71375055315931533544259938739985.webp", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t62.inf", 
		LAST);

	web_custom_request("53508054580644926849424661912282.webp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/product-page-assets/53508054580644926849424661912282.webp", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t63.inf", 
		LAST);

	web_custom_request("hideProducts.png", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/product-page-assets/hideProducts.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t64.inf", 
		LAST);

	web_custom_request("170344554655180774753456568179350.webp", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/content/dam/hp-wcc/headless-assets/images/product-page-assets/170344554655180774753456568179350.webp", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t65.inf", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com; DOMAIN=itg-live.www8.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("latest.r", 
		"URL=https://itg-live.www8.hp.com/caas/header-footer/us/en/default/latest.r?contentType=js&hide_search=true&show_shopping_cart=true&hide_country_selector=true", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_cookie("optimizelyEndUserId=oeu1620386134588r0.6070503245592556; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryLanding%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386135.1620386135.1589380098.1654550135183.None.1; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=itg-live.www8.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=itg-live.www8.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_custom_request("clientlib-hf-fontface.css", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t67.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("Bootstrap.js", 
		"URL=https://nexus.ensighten.com/hp/support_stage/Bootstrap.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t68.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("clientlib-hpi-hf-r-css.css", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t69.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("clientlib-hf-js.js", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hf-js.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t70.inf", 
		LAST);

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryLanding%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386135.1620386135.1589380098.1654550135183.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("tms-fallback.png", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/tms-fallback.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t71.inf", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("auth", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/auth/?pid=325&as=1&580589803&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t72.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body={\"csSessionData\":{\"projectId\":1255,\"userId\":\"bb21ee13-1ad2-a67a-9f7b-226261c3a378\",\"sessionNumber\":1,\"pageNumber\":1},\"location\":\"https://ppssupport-itgllbh7.inc.hp.com/us-en/products\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("pageview", 
		"URL=https://c.contentsquare.net/pageview?pid=1255&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&lv=1620386135&lhd=1620386135&hd=1620386135&pn=1&re=1&dw=1459&dh=1526&ww=1463&wh=713&sw=1463&sh=823&dr=&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&uc=1&la=en-US&cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryLanding%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&cvarp="
		"%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryLanding%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&v=10.8.6&r=424478", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t73.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("e.gif", 
		"URL=https://nexus.ensighten.com/error/e.gif?msg=%22TypeError%3A%20Cannot%20read%20property%20%27triggerPromiseWithTimeout%27%20of%20undefined%22%20error%20caught%20in%20Data%20Definition%20trigger%3A%20support_language_code%2C%20ID%3A9913.%20Using%20bottom%20of%20body%20trigger.&lnn=-1&fn=&cid=217&client=hp&publishPath=support_stage&rid=-1&did=-1&errorName=DataDefinitionException", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t74.inf", 
		LAST);

	web_custom_request("pageEvent", 
		"URL=https://c.contentsquare.net/pageEvent?value=MIewdgZglg5gXAAgEoFMA2KCGBnFB9AJgAYCBGIgFgIDYgAA&isETR=false&v=10.8.6&pid=1255&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&pn=1&r=185104", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t75.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("gtm.js", 
		"URL=https://www.googletagmanager.com/gtm.js?id=GTM-PDHM2PK", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t76.inf", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=www.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1620386134588r0.6070503245592556; DOMAIN=www.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryLanding%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=www.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386135.1620386135.1589380098.1654550135183.None.1; DOMAIN=www.hp.com");

	web_add_cookie("_cs_s=1.1; DOMAIN=www.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=www.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18755%7CvVersion%7C4.4.0; DOMAIN=www.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=www.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("privacy-banner-test.js", 
		"URL=https://www.hp.com/cma/ng/lib/exceptions/privacy-banner-test.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t77.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.4.0&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=5E34123F5245B2CD0A490D45%40AdobeOrg&d_nsid=0&ts=1620386135615", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t78.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("serverComponent.php", 
		"URL=https://nexus.ensighten.com/hp/support_stage/serverComponent.php?r=696.4281611655798&namespace=Bootstrapper&staticJsPath=nexus.ensighten.com/hp/support_stage/code/&publishedOn=Tue%20May%2004%2007:24:28%20GMT%202021&ClientID=217&PageID=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts%3Fgdl_template%3DProductCategoryLanding", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t79.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("HPSimplifiedRegular.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/clientlib-hf-fontface-core/resources/fonts/HPSimplifiedRegular.woff", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", 
		"Snapshot=t80.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_custom_request("ChNDaHJvbWUvOTAuMC40NDMwLjkzEh4JWmFhyoBHVaESBQ2fLItEEgUNnyyLRBIFDdglK2c=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChNDaHJvbWUvOTAuMC40NDMwLjkzEh4JWmFhyoBHVaESBQ2fLItEEgUNnyyLRBIFDdglK2c=?alt=proto", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t81.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("footericons.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/footericons.woff", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", 
		"Snapshot=t82.inf", 
		LAST);

	web_custom_request("HpSimplifiedLight.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/clientlib-hf-fontface-core/resources/fonts/HpSimplifiedLight.woff", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlibs-fonts/us/en/clientlib-hf-fontface.css", 
		"Snapshot=t83.inf", 
		LAST);

	web_custom_request("newhplogo.ttf", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/newhplogo.ttf", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-font-ttf", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", 
		"Snapshot=t84.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("events", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t85.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.165.0\",\"enrich_decisions\":true,\"project_id\":\"18956663993\",\"revision\":\"773\",\"visitors\":[{\"visitor_id\":\"oeu1620386134588r0.6070503245592556\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\"t"
		"\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"direct\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1620386134612}],\"snapshots\":[{\"activationTimestamp\":1620386134586,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"74e9e60b-d6e4-4dbf-b939-9ddff99cff28\",\"t\":1620386134613}]}]}]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("events_2", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=47&mdh=713&pn=1&re=1&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&lv=1620386135&lhd=1620386135&hd=1620386135&pid=1255&e=NrAMBoEYGYoFgGywOwwLpqAA&r=397574", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t86.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("fonts_header_icons.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/fonts_header_icons.woff", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", 
		"Snapshot=t87.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("pageview_2", 
		"URL=https://c.contentsquare.net/pageview?pid=1255&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&lv=1620386135&lhd=1620386135&hd=1620386136&pn=2&re=1&dw=1459&dh=2136&ww=1463&wh=713&sw=1463&sh=823&dr=&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&uc=1&la=en-US&cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryLanding%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&cvarp="
		"%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryLanding%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D&v=10.8.6&r=033443", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("8eb6e0d6c0d367083fff5b64b61a4441.js", 
		"URL=https://nexus.ensighten.com/hp/support_stage/code/8eb6e0d6c0d367083fff5b64b61a4441.js?conditionId0=422765", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t89.inf", 
		LAST);

	web_custom_request("b9b0fc01116e2374d7e92bc6cb675f3e.js", 
		"URL=https://nexus.ensighten.com/hp/support_stage/code/b9b0fc01116e2374d7e92bc6cb675f3e.js?conditionId0=4880989", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t90.inf", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=met2.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1620386134588r0.6070503245592556; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryLanding%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=met2.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=met2.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386136.1620386135.1589380098.1654550135183.None.1; DOMAIN=met2.hp.com");

	web_add_cookie("_cs_s=2.1; DOMAIN=met2.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=met2.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18755%7CMCMID%7C87931844697006436903700237078780896084%7CMCAAMLH-1620990936%7C9%7CMCAAMB-1620990936%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1620393336s%7CNONE%7CvVersion%7C4.4.0; DOMAIN=met2.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("id_2", 
		"URL=https://met2.hp.com/id?d_visid_ver=4.4.0&d_fieldgroup=A&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&mid=87931844697006436903700237078780896084&ts=1620386136172", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t91.inf", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("3ce08cf7c65e410fd9cf20d6115a04e1.js", 
		"URL=https://nexus.ensighten.com/hp/support_stage/code/3ce08cf7c65e410fd9cf20d6115a04e1.js?conditionId0=285030", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t92.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("dest5.html", 
		"URL=https://hp.demdex.net/dest5.html?d_nsid=0", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("dd", 
		"URL=https://cm.everesttech.net/cm/dd?d_uuid=81794021202448386384097530532362889424", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t94.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("otSDKStub.js", 
		"URL=https://cdn.cookielaw.org/scripttemplates/otSDKStub.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t95.inf", 
		LAST);

	web_custom_request("generic1620052275102.js", 
		"URL=https://nebula-cdn.kampyle.com/us/wu/541318/onsite/generic1620052275102.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t96.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("e0a0fc2a-044d-41af-bd55-2f56dd8162df.json", 
		"URL=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e0a0fc2a-044d-41af-bd55-2f56dd8162df.json", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t97.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("client_model_v5_ext_variation_8.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_8.pb", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t98.inf", 
		LAST);

	web_add_cookie("WRIgnore=true; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386136.1620386135.1589380098.1654550135183.None.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("_cs_s=2.1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18755%7CMCMID%7C87931844697006436903700237078780896084%7CMCAAMLH-1620990936%7C9%7CMCAAMB-1620990936%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1620393336s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18762%7CvVersion%7C4.4.0; DOMAIN=ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("favicon.ico", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/favicon.ico", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t99.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("cool-2.1.15.min.js", 
		"URL=https://nebula-cdn.kampyle.com/resources/onsite/js/cool-2.1.15.min.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t100.inf", 
		LAST);

	web_custom_request("location", 
		"URL=https://geolocation.onetrust.com/cookieconsentpub/v1/geo/location", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t101.inf", 
		LAST);

	web_custom_request("otBannerSdk.js", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/otBannerSdk.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t102.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("en-ie.json", 
		"URL=https://cdn.cookielaw.org/consent/e0a0fc2a-044d-41af-bd55-2f56dd8162df/e688e508-0267-4c09-a64b-7c03f7e759ce/en-ie.json", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t103.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("__cool.gif", 
		"URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjkzIFNhZmFyaS81MzcuMzYiLCJzZXNzaW9uX3BsYXRmb3JtIjogIldpbjMyIiwidHJhY2tlcl90eXBlIjogImphdmFzY3JpcHQiLCJ0cmFja2VyX3ZlcnNpb24iOiAiMi4xLjE1IiwiZXZlbnRfbmFtZSI6ICJjcmVhdGVTZXNzaW9uIiwiZXZlbnRfdGltZXN0YW1wX2Vwb2NoIjogIjE2MjAzODYxMzg1MDEiLCJldmVudF90aW1lem9uZV9vZmZzZXQiOiAwLCJ1c2VyX2lkIj"
		"ogIjE3OTQ2OGE0OTgzMmJhLTAxNDk5OTBlMjQ3ZGU4LWQ3ZTE3MzktMTI1ZjUxLTE3OTQ2OGE0OTg0YjQwIiwidXJsIjogImh0dHBzOi8vcHBzc3VwcG9ydC1pdGdsbGJoNy5pbmMuaHAuY29tL3VzLWVuL3Byb2R1Y3RzIiwiZm9ybUlkIjogbnVsbCwiZm9ybVRyaWdnZXJUeXBlIjogbnVsbCwia2FtcHlsZV9kYXRhIjogeyJMQVNUX0lOVklUQVRJT05fVklFVyI6ICIiLCJERUNMSU5FRF9EQVRFIjogIiIsImthbXB5bGVJbnZpdGVQcmVzZW50ZWQiOiAiIiwia2FtcHlsZV91c2VyaWQiOiAiN2U0ZS05NjU3LWZlMTItNjg5YS1mOGQwLWNlYTctMjk0Yy00Y2Y2Iiwia2FtcHlsZVVzZXJTZXNzaW9uIjogIiIsImthbXB5bGVVc2VyUGVyY2VudGlsZSI6ICIiLCJTVUJN"
		"SVRURURfREFURSI6ICIiLCJhZGRpdGlvbmFsRGF0YSI6IHsidXNlcl9zZXNzaW9uIjogIiIsImRpcmVjdF9uYXZpZ2F0aW9uIjogdHJ1ZSwiZGlmZnJlbnRfcmVmZXJyZXIiOiB0cnVlfX0sImNvb2tpZV9zaXplIjogMTE3NSwia2FtcHlsZV92ZXJzaW9uIjogIjIuMzcuMSIsIm9uc2l0ZV92ZXJzaW9uIjogIjIuMzcuMSIsImhpc3RvcnlfbGVuZ3RoIjogMSwiZXZlbnRfbG9jYWxfdGltZXN0YW1wIjogMTYyMDM4NjEzODM2OSwicG9zaXRpb24iOiBudWxsLCJpc1VzZXJJZGVudGlmaWVkIjogZmFsc2UsImZlZWRiYWNrX2NvcnJlbGF0aW9uX3V1aWQiOiBudWxsfQpdfQ==", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t104.inf", 
		LAST);

	web_custom_request("__cool.gif_2", 
		"URL=https://udc-neb.kampyle.com/egw/5/qceuv8449dzg58ptt1bhda9g8ue19c7s/track/__cool.gif?data="
		"eyJldmVudHMiOiBbCiAgICB7InNlc3Npb25fc2NyZWVuX3NpemUiOiAiMTQ2M3g4MjMiLCJzZXNzaW9uX2R1YSI6ICJNb3ppbGxhLzUuMCAoV2luZG93cyBOVCAxMC4wOyBXaW42NDsgeDY0KSBBcHBsZVdlYktpdC81MzcuMzYgKEtIVE1MLCBsaWtlIEdlY2tvKSBDaHJvbWUvOTAuMC40NDMwLjkzIFNhZmFyaS81MzcuMzYiLCJzZXNzaW9uX3BsYXRmb3JtIjogIldpbjMyIiwidHJhY2tlcl90eXBlIjogImphdmFzY3JpcHQiLCJ0cmFja2VyX3ZlcnNpb24iOiAiMi4xLjE1IiwiZXZlbnRfbmFtZSI6ICJuZWJ1bGFfcGFnZV92aWV3IiwiZXZlbnRfdGltZXN0YW1wX2Vwb2NoIjogIjE2MjAzODYxMzg1MTEiLCJldmVudF90aW1lem9uZV9vZmZzZXQiOiAwLCJ1c2VyX2"
		"lkIjogIjE3OTQ2OGE0OTgzMmJhLTAxNDk5OTBlMjQ3ZGU4LWQ3ZTE3MzktMTI1ZjUxLTE3OTQ2OGE0OTg0YjQwIiwiZW52aXJvbWVudCI6ICJwcm9kVXNPcmVnb24iLCJhY2NvdW50SWQiOiA1NDExMTQsInVybCI6ICJodHRwczovL3Bwc3N1cHBvcnQtaXRnbGxiaDcuaW5jLmhwLmNvbS91cy1lbi9wcm9kdWN0cyIsIndlYnNpdGVJZCI6IDU0MTMxOCwiZm9ybUlkIjogbnVsbCwiZm9ybVRyaWdnZXJUeXBlIjogbnVsbCwia2FtcHlsZV9kYXRhIjogeyJMQVNUX0lOVklUQVRJT05fVklFVyI6ICIiLCJERUNMSU5FRF9EQVRFIjogIiIsImthbXB5bGVJbnZpdGVQcmVzZW50ZWQiOiAiIiwia2FtcHlsZV91c2VyaWQiOiAiN2U0ZS05NjU3LWZlMTItNjg5YS1mOGQwLWNl"
		"YTctMjk0Yy00Y2Y2Iiwia2FtcHlsZVVzZXJTZXNzaW9uIjogIjE2MjAzODYxMzgzNjkiLCJrYW1weWxlVXNlclBlcmNlbnRpbGUiOiAiIiwiU1VCTUlUVEVEX0RBVEUiOiAiIn0sImNvb2tpZV9zaXplIjogMTI4NCwia2FtcHlsZV92ZXJzaW9uIjogIjIuMzcuMSIsIm9uc2l0ZV92ZXJzaW9uIjogIjIuMzcuMSIsImhpc3RvcnlfbGVuZ3RoIjogMSwiZXZlbnRfbG9jYWxfdGltZXN0YW1wIjogMTYyMDM4NjEzODM3NSwicG9zaXRpb24iOiBudWxsLCJpc1VzZXJJZGVudGlmaWVkIjogZmFsc2UsImZlZWRiYWNrX2NvcnJlbGF0aW9uX3V1aWQiOiBudWxsfQpdfQ==", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t105.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("otCenterRounded.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/otCenterRounded.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("otPcTab.json", 
		"URL=https://cdn.cookielaw.org/scripttemplates/6.17.0/assets/v2/otPcTab.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("gtm.js_2", 
		"URL=https://www.googletagmanager.com/gtm.js?id=GTM-MQML682", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t108.inf", 
		LAST);

	web_custom_request("A353853-8e85-4786-9645-fac6b773cd071.js", 
		"URL=https://d.impactradius-event.com/A353853-8e85-4786-9645-fac6b773cd071.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t109.inf", 
		LAST);

	web_custom_request("pixel.js", 
		"URL=https://www.redditstatic.com/ads/pixel.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t110.inf", 
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

	web_custom_request("ChNDaHJvbWUvOTAuMC40NDMwLjkzEiUJzT58OOkSd94SBQ2fLItEEgUNnyyLRBIFDdglK2cSBQ2lkzYk", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChNDaHJvbWUvOTAuMC40NDMwLjkzEiUJzT58OOkSd94SBQ2fLItEEgUNnyyLRBIFDdglK2cSBQ2lkzYk?alt=proto", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t111.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("conversion_async.js", 
		"URL=https://www.googleadservices.com/pagead/conversion_async.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t112.inf", 
		LAST);

	web_custom_request("7kxod6.js", 
		"URL=https://px.owneriq.net/stas/s/7kxod6.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t113.inf", 
		LAST);

	web_custom_request("ytc.js", 
		"URL=https://s.yimg.com/wi/ytc.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t114.inf", 
		LAST);

	web_custom_request("bat.js", 
		"URL=https://bat.bing.com/bat.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t115.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("collect", 
		"URL=https://px.ads.linkedin.com/collect/?pid=40922&fmt=gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t116.inf", 
		LAST);

	web_custom_request("tr", 
		"URL=https://www.facebook.com/tr?id=1688171794549438&ev=PageView&noscript=1&gtmcb=417651012", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t117.inf", 
		LAST);

	web_custom_request("v3", 
		"URL=https://ct.pinterest.com/v3/?event=init&tid=2613604734453&noscript=1&gtmcb=1958375292", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t118.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("eps", 
		"URL=https://px.owneriq.net/eps?pt=7kxod6&pid=8088&uid=Q6736725401658928190J&l=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("10044594.json", 
		"URL=https://s.yimg.com/wi/config/10044594.json", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("j", 
		"URL=https://px.owneriq.net/j/?ref=https://ppssupport-itgllbh7.inc.hp.com/us-en/products&pt=7kxod6&t=f%7C%22HP%2520Customer%2520Support%2520for%2520Printers%252C%2520Laptops%252C%2520Desktops%2520and%2520More%2520%257C%2520HP%25C2%25AE%2520Support%22&s=6ka7", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t121.inf", 
		LAST);

	web_custom_request("687393200", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/687393200/?random=1620386140471&cv=9&fst=1620386140471&num=1&userId=null&guid=ON&resp=GooglemKTybQhCsO&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&tiba=HP%20Customer%20Support%20for%20Printers%2C%20Laptops%2C%20Desktops%20and%20More%20%7C%20HP%C2%AE%20Support&hn="
		"www.googleadservices.com&async=1&rfmt=3&fmt=4", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t122.inf", 
		LAST);

	web_custom_request("854101013", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/854101013/?random=1620386140484&cv=9&fst=1620386140484&num=1&guid=ON&resp=GooglemKTybQhCsO&eid=2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&ig=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&tiba=HP%20Customer%20Support%20for%20Printers%2C%20Laptops%2C%20Desktops%20and%20More%20%7C%20HP%C2%AE%20Support&hn="
		"www.googleadservices.com&async=1&rfmt=3&fmt=4", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t123.inf", 
		LAST);

	web_custom_request("13015798", 
		"URL=https://bat.bing.com/p/action/13015798", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("0", 
		"URL=https://bat.bing.com/action/0?ti=13015798&tm=gtm001&Ver=2&mid=7866688a-96e8-44ea-8cac-6a89dcb035ac&sid=8e9bd960af2511ebbdd36f7f88591a92&vid=8e9c5480af2511eba0ad0b02c6d30fc1&vids=1&pi=1200101525&lg=en-US&sw=1463&sh=823&sc=24&tl=HP%20Customer%20Support%20for%20Printers,%20Laptops,%20Desktops%20and%20More%20%7C%20HP%C2%AE%20Support&kw=HP%20Customer%20Support,%20hp%20products,%20hp%20consumer%20support,%20hp%20printers,%20hp%20tablets,%20hp%20computers,%20hp%20desktops,%20hp%20monitors,"
		"%20hp%20printer%20support,%20hp%20pc%20support&p=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&r=&lt=10071&evt=pageLoad&msclkid=N&sv=1&rn=973724", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("ibs_dpid=53196&dpuuid=Q6736725401658928190J", 
		"URL=https://dpm.demdex.net/ibs_dpid=53196&dpuuid=Q6736725401658928190J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t126.inf", 
		LAST);

	web_add_cookie("_cs_c=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("optimizelyEndUserId=oeu1620386134588r0.6070503245592556; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_cvars=%7B%221%22%3A%5B%22Template%22%2C%22ProductCategoryLanding%22%5D%2C%226%22%3A%5B%22Locale%22%2C%22us-en%22%5D%7D; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("__CT_Data=gpv=1&ckp=tld&dm=hp.com&apv_325_www11=1&cpv_325_www11=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("WRIgnore=true; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_id=bb21ee13-1ad2-a67a-9f7b-226261c3a378.1620386135.1.1620386136.1620386135.1589380098.1654550135183.None.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_cs_s=2.1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCVS_5E34123F5245B2CD0A490D45%40AdobeOrg=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18755%7CMCMID%7C87931844697006436903700237078780896084%7CMCAAMLH-1620990936%7C9%7CMCAAMB-1620990936%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1620393336s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18762%7CvVersion%7C4.4.0; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Fri+May+07+2021+11%3A15%3A39+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=2e9f3572-f42b-431d-bc1d-845ecee709da&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/products; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("_rdt_uuid=1620386140381.af09b4f0-60eb-43d1-9219-2841ff3e4b12; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=linkto.ext.hp.com");

	web_add_cookie("IR_5105=1620386140398%7C365159%7C1620386140398%7C%7C; DOMAIN=linkto.ext.hp.com");

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
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=srcref=&landurl=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&&_ir=U364%7C%7C1620386140398", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("379208.gif", 
		"URL=https://idsync.rlcdn.com/379208.gif?partner_uid=Q6736725401658928190J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t128.inf", 
		LAST);

	web_custom_request("849111477", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/849111477/?guid=ON&script=0&userId=null&gtmcb=1449355892", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t129.inf", 
		LAST);

	web_custom_request("783157761", 
		"URL=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/783157761/?guid=ON&script=0&userId=null&gtmcb=1768584599", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t130.inf", 
		LAST);

	web_custom_request("1", 
		"URL=https://tapestry.tapad.com/tapestry/1?ta_partner_id=916&ta_partner_did=Q6736725401658928190J&ta_format=png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t131.inf", 
		LAST);

	web_add_cookie("AMCV_5E34123F5245B2CD0A490D45%40AdobeOrg=1585540135%7CMCIDTS%7C18755%7CMCMID%7C87931844697006436903700237078780896084%7CMCAAMLH-1620990936%7C9%7CMCAAMB-1620990936%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1620393336s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18762%7CvVersion%7C4.4.0; DOMAIN=met2.hp.com");

	web_add_cookie("OptanonConsent=isIABGlobal=false&datestamp=Fri+May+07+2021+11%3A15%3A39+GMT%2B0000+(Greenwich+Mean+Time)&version=6.17.0&hosts=&consentId=2e9f3572-f42b-431d-bc1d-845ecee709da&interactionCount=0&landingPath=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&groups=1%3A1%2C2%3A1%2C3%3A1%2C4%3A1%2C5%3A1%2C6%3A1; DOMAIN=met2.hp.com");

	web_add_cookie("hpeuck_prefs=111111; DOMAIN=met2.hp.com");

	web_add_cookie("hpeuck_answ=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_vnum=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisit=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_invisitc=1; DOMAIN=met2.hp.com");

	web_add_cookie("s_previousUrl=https%3A//ppssupport-itgllbh7.inc.hp.com/us-en/products; DOMAIN=met2.hp.com");

	web_add_cookie("_rdt_uuid=1620386140381.af09b4f0-60eb-43d1-9219-2841ff3e4b12; DOMAIN=met2.hp.com");

	web_add_cookie("IR_gbd=hp.com; DOMAIN=met2.hp.com");

	web_add_cookie("IR_5105=1620386140398%7C365159%7C1620386140398%7C%7C; DOMAIN=met2.hp.com");

	web_add_cookie("_uetsid=8e9bd960af2511ebbdd36f7f88591a92; DOMAIN=met2.hp.com");

	web_add_cookie("_uetvid=8e9c5480af2511eba0ad0b02c6d30fc1; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppn=D%3Dv55; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppvl=%5B%5BB%5D%5D; DOMAIN=met2.hp.com");

	web_add_cookie("s_ppv=D%253Dv55%2C33%2C33%2C713%2C1463%2C713%2C1463%2C823%2C1.75%2CP; DOMAIN=met2.hp.com");

	web_add_cookie("s_cc=true; DOMAIN=met2.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("s55462600262997", 
		"URL=https://met2.hp.com/b/ss/hphqglobal,hphq-ces-global-stage-temp,hphq-ces-na-stage-temp/1/JS-2.15.0/s55462600262997?AQB=1&ndh=1&pf=1&t=7%2F4%2F2021%2011%3A15%3A40%205%200&mid=87931844697006436903700237078780896084&aamlh=9&ce=UTF-8&ns=hpcorp&pageName=D%3Dv55&g=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&ch=pps&server=ppssupport-itgllbh7.inc.hp.com&events=event46%2Cevent45%3D125%2Cevent11&aamb=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&c1=us-en&v2=us&c3="
		"ProductCategoryLanding&v3=en&c7=us&c8=en&c9=cs%3Aconsumer.home&c12=R11839&v12=Anonymous&c15=55&c26=D%3Dv12&c31=null&v32=null&v33=null&v34=null&v35=null&c43=null&v46=D%3Dc3&c49=D%3Dg&c50=D%3Dg&c51=hpexpnontridion%3Aihfcaas.5.r&c55=null&v55=pps-ces%7Cproductcategorylanding&c56=null&c57=null&c58=null&c59=null&c61=0001%3A0001%3A00&c63=Initial&c66=87931844697006436903700237078780896084&v90=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&v92="
		"ens%7Csupport_stage%7C04-May-2021%2007%3A24%3A28&v93=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&v94=ppssupport-itgllbh7.inc.hp.com&v95=ppssupport-itgllbh7.inc.hp.com%3AUnknown%7CUnknown%7CAMS%7Cus%3Aen%7CUSD&v99=13&s=1463x823&c=24&j=1.6&v=N&k=Y&bw=1463&bh=713&mcorgid=5E34123F5245B2CD0A490D45%40AdobeOrg&AQE=1", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t132.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("Pug", 
		"URL=https://simage2.pubmatic.com/AdServer/Pug?vcode=bz0yJnR5cGU9MSZjb2RlPTI2NDYmdGw9MTI5NjAw&piggybackCookie=Q6736725401658928190J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t133.inf", 
		LAST);

	web_custom_request("rum", 
		"URL=https://dsum.casalemedia.com/rum?cm_dsp_id=31&external_user_id=Q6736725401658928190J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t134.inf", 
		LAST);

	web_custom_request("tap.php", 
		"URL=https://pixel.rubiconproject.com/tap.php?v=11581&nid=2395&put=Q6736725401658928190J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t135.inf", 
		LAST);

	web_custom_request("dvar", 
		"URL=https://c.contentsquare.net/dvar?v=10.8.6&pid=1255&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&pn=2&dv=N4IgpgaghgTgjAJhALhAQQHYHsME8C2WArgM4gA0IADjFlQMwogAKtAJkQMYAuAwlNzABzLDFwAZKBjYBLDEIrVaVOE1IBaMBhABfIAA&r=651698", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("ep", 
		"URL=https://px.owneriq.net/ep?sid%5B%5D=14563139067&sid%5B%5D=14563139072&sid%5B%5D=14563139077&sid%5B%5D=8460259172&sid%5B%5D=8460259192&pt=7kxod6&uid=Q6736725401658928190J&jcs=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("687393200_2", 
		"URL=https://www.google.com/pagead/1p-user-list/687393200/?random=1620386140471&cv=9&fst=1620385200000&num=1&userId=null&guid=ON&eid=2505059651&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&tiba=HP%20Customer%20Support%20for%20Printers%2C%20Laptops%2C%20Desktops%20and%20More%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=917153820&resp=GooglemKTybQhCsO"
		"&rmt_tld=0&ipr=y", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t138.inf", 
		LAST);

	web_custom_request("854101013_2", 
		"URL=https://www.google.com/pagead/1p-user-list/854101013/?random=1620386140484&cv=9&fst=1620385200000&num=1&guid=ON&eid=2505059650&u_h=823&u_w=1463&u_ah=783&u_aw=1463&u_cd=24&u_his=1&u_tz=0&u_java=false&u_nplug=3&u_nmime=4&gtm=2wg4s0&sendb=1&frm=0&url=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&tiba=HP%20Customer%20Support%20for%20Printers%2C%20Laptops%2C%20Desktops%20and%20More%20%7C%20HP%C2%AE%20Support&async=1&fmt=3&is_vtc=1&random=3654800330&resp=GooglemKTybQhCsO&rmt_tld=0&"
		"ipr=y", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t139.inf", 
		LAST);

	web_custom_request("sd", 
		"URL=https://us-u.openx.net/w/1.0/sd?id=537073059&val=Q6736725401658928190J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t140.inf", 
		LAST);

	web_custom_request("pixel", 
		"URL=https://cm.g.doubleclick.net/pixel?google_nid=owneriq1&google_cm&google_sc&google_ula=1174&google_hm=UTY3MzY3MjU0MDE2NTg5MjgxOTBK&esi=1", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t141.inf", 
		LAST);

	web_custom_request("p", 
		"URL=https://www.ojrq.net/p/?return=&cid=5105&tpsync=no", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t142.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("sp.pl", 
		"URL=https://sp.analytics.yahoo.com/sp.pl?a=10000&d=Fri%2C%2007%20May%202021%2011%3A15%3A41%20GMT&n=0&b=HP%20Customer%20Support%20for%20Printers%2C%20Laptops%2C%20Desktops%20and%20More%20%7C%20HP%C2%AE%20Support&.yp=10044594&f=https%3A%2F%2Fppssupport-itgllbh7.inc.hp.com%2Fus-en%2Fproducts&enc=UTF-8&tagmgr=gtm%2Censighten", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t143.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("setuid", 
		"URL=https://ib.adnxs.com/setuid?entity=13&code=Q6736725401658928190J", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t144.inf", 
		LAST);

	web_custom_request("activity;src=9848580;type=irid;cat=irid;ord=.1620386140398", 
		"URL=https://ad.doubleclick.net/activity;src=9848580;type=irid;cat=irid;ord=.1620386140398?", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t145.inf", 
		LAST);

	web_custom_request("getuid", 
		"URL=https://secure.adnxs.com/getuid?https%3A%2F%2Fpx.owneriq.net%2Feucm%2Fp%2Fapndmp%3Foi%3D1%26tid%3D$UID", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://px.owneriq.net/", 
		"Snapshot=t146.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_custom_request("fullHashes_find", 
		"URL=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMOTAuMC40NDMwLjkzEhsKDQgFEAYYASIDMDAxMAEQ2ZgLGgIYCGsI5TESGwoNCAEQBhgBIgMwMDEwARCh6ggaAhgIgVdzVBIbCg0IAxAGGAEiAzAwMTABEIrbCBoCGAgclZj3EhsKDQgHEAYYASIDMDAxMAEQwKUJGgIYCABNGeQSGQoNCAEQBhgBIgMwMDEwAxAUGgIYCLHnkC0SGgoNCAEQCBgBIgMwMDEwBBD6HxoCGAjjCf69EhkKDQgJEAYYASIDMDAxMAYQAxoCGAh5ozZ0EhoKDQgPEAYYASIDMDAxMAEQlWUaAhgIbDUBHBIZCg0IChAIGAEiAzAwMTABEAYaAhgI7SZg5RIZCg0ICRAGGAEiAzAwMTABEB8aAhgIa4nlBBIaCg0ICBAGGAEiAzAwMTABEIkMGgIYCIDUUD4SGwoNCA0QBhgBIgMwMDEwARDUiAEaAhgIsc6yGRIbCg0IDhAGGA"
		"EiAzAwMTABEIC-BRoCGAjnq0HqEhoKDQgQEAYYASIDMDAxMAEQxwoaAhgIvcJZ5hosCAEIAwgFCAYIBwgICAkICggNCA4IDwgQEAEQCBoGCgRUjWsqIAEgAyAEIAY=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t147.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("455679.gif", 
		"URL=https://idsync.rlcdn.com/455679.gif?partner_uid=8f093cdb-af25-11eb-9a1c-42010a246c50", 
		"Method=GET", 
		"Resource=1", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t148.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"font");

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_custom_request("latest_icons.woff", 
		"URL=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-css/resources/fonts/latest_icons.woff", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=https://itg-live.www8.hp.com/etc.clientlibs/HPIT-AEM-GLOBALNAV/clientlibs-globalnav/clientlib-hpi-hf-r-css.css", 
		"Snapshot=t149.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,fbgcedjacmlbgleddnoacbnijgmiolem,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-90.0.4430.93");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:2780527055&cup2hreq=70d440c09852824b98c3420661abf0688c8bffcf336261f7db65bed550a2b9ab", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{260a58cd-b378-4cea-b77d-05f87972bd07}\",\"rd\":5240},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{f06c1212-0c2a-421e-b05b-5f18d07c1c83}\",\"rd\":5240},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.5\"}]},\"ping\":{\"ping_freshness\":\"{402439c7-75f8-4610-870d-9f0a01f54ec0}\",\"rd\":5240},\"updatecheck\":{"
		"},\"version\":\"14.5\"},{\"appid\":\"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{0a4a1cbe-3de9-44f4-b99c-8917a0dcd8ba}\",\"rd\":5240},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"fbgcedjacmlbgleddnoacbnijgmiolem\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"disabled\":[{\"reason\":1}],\"enabled\":false,\"installedby\":\"internal\",\""
		"packages\":{\"package\":[{\"fp\":\"1.c564aa8894768ab480d997d923c48118a3e5d3add652b34f59b11fe0e96a89cb\"}]},\"ping\":{\"ping_freshness\":\"{7814140b-b5fe-455c-994d-1174229d0659}\",\"rd\":5240},\"updatecheck\":{},\"version\":\"2.3\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{032cb612-2145-4195-8fd1-875527deac40}\",\"rd\":5240},\""
		"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.df7a7c5ea41023e17cc38e18f1b5f12a73c1552ac6570f0740b4f37f0bd72a7f\"}]},\"ping\":{\"ping_freshness\":\"{68e1dbb0-7442-4c9f-86e1-df82530dcb14}\",\"rd\":5240},\"updatecheck\":{},\"version\":\"1.28.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.81e3a4d43a73699e1b7781723f56b8717175c536685c5450122b30789464ad82\"}]},\"ping\":{\"ping_freshness\":\"{db38c586-07fd-46cb-bbbd-02b5246bb9fd}\",\"rd\":5240},\"updatecheck\":{},\"version\":\"1.0.0.6\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\""
		"1.7f4e382d1c6724a5f173f3617e35d5ad74c28ffce9a918f00b48c88f978dc34e\"}]},\"ping\":{\"ping_freshness\":\"{c70bbdab-819f-4592-9cd9-c19cb1cbdaed}\",\"rd\":5240},\"updatecheck\":{},\"version\":\"8.3\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"cohort\":\"1::\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.05bc4a6e12744e61576e531c7602778bf2316598236e1bb2b87a664fd2aee8c5\"}]},\"ping\":{\"ping_freshness\":\""
		"{c668c523-47d7-4d34-aa22-039aaecef5ad}\",\"rd\":5240},\"updatecheck\":{},\"version\":\"9021.222.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"physmemory\":96},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.14393.4283\"},\"prodversion\":\"90.0.4430.93\",\"protocol\":\"3.1\",\"requestid\":\"{4e9775e8-0198-4586-b479-63a977d7e971}\",\"sessionid\":\"{5b599939-ff02-4ada-b98d-946806ca8e69}\",\"updater\":{\""
		"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.82\"},\"updaterversion\":\"90.0.4430.93\"}}", 
		LAST);

	web_add_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(11);

	web_custom_request("events_3", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=33&mdh=713&pn=2&re=1&uu=bb21ee13-1ad2-a67a-9f7b-226261c3a378&sn=1&lv=1620386135&lhd=1620386135&hd=1620386136&pid=1255&str=1035&di=1790&dc=7692&fl=7697&eu=%5B%5B5%2C8521%2C0%2C0%2C%22a%23closeAlert%22%2C%22%22%5D%2C%5B2%2C11616%2C459%2C69%2C0%2C%22div%23menuitemThree_tab%22%2C42075%2C17613%5D%2C%5B2%2C12010%2C465%2C67%2C0%2C%22%22%2C48004%2C15974%5D%2C%5B2%2C12411%2C508%2C65%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq"
		"(0)%22%2C21431%2C14336%5D%2C%5B2%2C12812%2C559%2C136%2C0%2C%22p%23onetrust-policy-text%3Ep%3Aeq(0)%22%2C17054%2C11901%5D%2C%5B2%2C13588%2C568%2C135%2C0%2C%22%22%2C17851%2C10844%5D%2C%5B2%2C13990%2C1152%2C221%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-product-landing%3Aeq(0)%3Eproduct-landing-hero-banner%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C55504%2C3820%5D%2C%5B3%2C14171%2C1152%2C221%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-product-landing%3Aeq(0)"
		"%3Eproduct-landing-hero-banner%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Eimg%3Aeq(0)%22%2C%22%22%5D%2C%5B4%2C14363%2C1152%2C221%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-product-landing%3Aeq(0)%3Eproduct-landing-hero-banner%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Eimg%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C14366%2C1152%2C221%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-product-landing%3Aeq(0)%3Eproduct-landing-hero-banner%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(1)%3Eimg%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C14427%2C1152%2C221%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-product-landing%3Aeq(0)%3Eproduct-landing-hero-banner%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(1)%3Eimg%3Aeq(0)%22%2C53313%2C-214%5D%2C%5B6%2C14711%2C1096%2C98%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C14772%2C1084%2C79%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%5D%2C%5B2%2C14826%2C1074%2C67%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C50409%2C15974%5D%2C%5B2%2C15228%2C1041%2C79%2C0%2C%22div%23onetrust-group-container%22%2C57718%2C4026%5D%2C%5B6%2C15583%2C1100%2C113%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C15628%2C1099%2C111%2C0%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%2C18724%2C50175%5D%2C%5B2%2C16030%2C1101%2C95%2C0%2C%22%22%2C21703%2C26344%5D%2C%5B3%2C16159%2C1101%2C95%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B4%2C16378%2C1101%2C95%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C16383%2C1101%2C95%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C16671%2C1101%2C95%2C%22div%23onetrust-close-btn-container%3Ebutton%3Aeq(0)"
		"%22%5D%2C%5B2%2C17271%2C1096%2C92%2C0%2C%22div%23header%3Ediv%3Aeq(1)%3Enav%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C51536%2C36454%5D%2C%5B2%2C17672%2C972%2C2%2C0%2C%22div%23welcomeHeader%22%2C43660%2C2621%5D%5D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/products", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	return 0;
}
