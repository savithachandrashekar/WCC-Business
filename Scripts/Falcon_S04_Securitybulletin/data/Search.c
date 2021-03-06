Search()
{

	lr_start_transaction("search");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(19);

	web_custom_request("search-light-white.svg", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-assets/images/search-light-white.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/security-bulletins", 
		"Snapshot=t168.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("wr_25", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/wr/?3281977870172919&325&11&24&0&16&264&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/security-bulletins", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body=qcm_buffer_timing_fix&95401&9XSpP_([{\"type\":1,\"attribute\":{\"attributeName\":\"title\",\"attributeValue\":\"Search HP.com\",\"id\":\"INPUT3\"}}])&9E1RP_([{\"type\":1,\"attribute\":{\"attributeName\":\"placeholder\",\"attributeValue\":\"\",\"id\":\"INPUT7\"}}])&VP_([{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue\":\"close-icon\",\"id\":\"A201\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue\":\"form-control search-input ng-untouched "
		"ng-valid ng-dirty\",\"id\":\"INPUT7\"}},{\"type\":1,\"attribute\":{\"attributeName\":\"disabled\",\"attributeValue\":null,\"id\":\"BUTTON1\"}}])&8WFqcm_buffer_timing_fix&116633&F", 
		LAST);

	lr_think_time(6);

	web_custom_request("wr_26", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/wr/?3281977870172919&325&11&25&0&17&264&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/security-bulletins", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body=ClB1AQZBMFAABABsec-nav-business-support&&COqB+KoCU&9V8gllAfSQeCaACmB1AQZBMFAB1AABMAAABABsec-nav-create-case&&COqCmK1D6&UlmAfJ52ACnB1AQZBMFAB1AABMBAABABsec-nav-view-update-case&&COqDbK1D6&elnAfJdaACoB1AQZBMFAB1AABMCAABABsec-nav-manage-contracts-and-warranties&&COqEQK1D6&UloAfJppAXTBMBQc&jlTAfJhfAlcWfJLLAlEgfJYhAfJGJcfJDCgXpABARExportCSV&h&hCqCTAQp&CS1FxKVB1&AlqAfJGKAfJBEefJFGgfJEEblhpfJIIAliYfJCBAlEdfJGFAfJCCffJDDefJDCffJEDgfJBCjfJCCbfJBBffJDDfCrtEBQEEUAAJUAACUAABUEAABAA&CTLGiKVBd&"
		"jlrAfJCCAfJBBcCsBlAQr&CUhGnBOI&glsAfJCFAfJBCffBCdfBBdfBB8FLQjEhIAOQrDfA8CcjIAqnscHrjavascript:void(0)&Dlq8nQft09AlONftfjAlMOftkyAlAefu7BiAlFffu0BYAlGgftg7AftLRfftJQKmAR8VZlG9EZcfxDZWAlFffxBHvAlAYfyDRCDAlUgfxBHsAlMRfxBFmAlcifxBGfAlOdfpZKAfpCB5fpCC8EUfpDBPfpBCZfpEDffpDBglEefpFHAfpBCgfpCEffpCDffBBffBCgfpBBfXPtEAQdhpADFindMyBulletin&b&glPBfpDGAfpCFdfBEffBDafBBffBCgfBCdfBBgQr8LVhIAPQPRjIA8DMnPXtgQ8RUtgB7/MBMugB8BCuAQytAB8TMMAAuABptAg8rRMAAuAg7+"
		"tgQ8TWtgB8DjMAAugB8BquAQEtAB8CsMAAuAB8B6tAB8BrMABuAB8CCtAB8C+MAAuAB8BK", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(4);

	web_custom_request("security-bulletins_7", 
		"URL=https://ppssupport-itgllbh7.inc.hp.com/wcc-services/search/us-en/security-bulletins?query=Hp%20LaserJet&sortBy=bulletinUpdateDate&sortOrder=asc", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/security-bulletins", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ppssupport-itgllbh7.inc.hp.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("wr_27", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/wr/?3281977870172919&325&11&26&9&0&105&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/security-bulletins", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		"EncType=", 
		"BodyBinary=\\xED]k\\x8F\\xDB6\\x16\\xFD+\\x82\\xF7K\n\\xD8[I|\\x89\\xF96;\\x93\\xA2i\\x9B\\xD4\\x88\\x8Bt\\x81\"(4\\x1E\\xCDD\\x88\\xC7\\x9A\\x95\\xE5i\\x83 \\xFF})\\xBF\\xE4\\x87\\xF8\\xBA\\x96Hw\\xBB\\x1F\\x12\\x8Cm\\x89\\xBA\\x94\\x0E\\xEF\\xE1\\xB9\\xBC\\xBA\\xFC\\xFD\\xC5o_\\x06\\xD5\\xE7\\xA7l\\xF02\\x1C\\x0E\\xD2\\xBB\\xBB\\xEC\\xEEmq\\x97-\\x06/\\x7F\\xFB0\\x1C\\x94\\xD9c\\xF1\\xDC|\\xF3e\\x90\\xDF\r^\\x0En^\\xBFg1\\x1E|\\xFD\\xF0u(;\\xF7\\xCB`.\\xFE\\xFAe\\xF5[4\\\\\\x9F\\xF6\\xCB;"
		"\\x1A\\xB3\\xC1ps\\x86\\xF8v\\x9E\\xFDYM\\xF2\\xDBY>\\x7FX\\xFDL\\xC2\\xB8\\xFE9}x\\x9B>f\\xABo\\xC4\\xC7\\xB4\\xAA\\xCA\\xFCvY\\xD5\\xCD~\\x19\\xFC>\\x7F\\x98\\x16\\xF3*\\x9BW\\xA3\\xF4\\xE9iT\\x16E5\\x9Abq\\xEC\\xE0\\xEBp0\\xFD\\x98\\xCF\\xD4\\x16\\xDC\\xA0(\\xA6\\x87\\xD7\\xB8\\xB1\\xB8\\x86\\xB8\\xC4,]\\x88\\x83\\x06\\x1Fs\\xD1\\xDB\\xF9\\xE8\\xB1\\xB8\\xCDg\\x99\\xD1\\xB5'\\xE3\\xAB\\xB7\\x11J\\xC2\\x83\\xAB\\xD7_\\x82\\xAE\\xBF\\xC8\\x9E\\xB32\\xAF"
		">\\x0F\\xBE\\xD6\\xCF\\xA0\\xB9\\x1A\\xDA\\\\\\xED\\x1F\\x95\\xB8\\xB7\\x84\\xF3\\xD5\\xFD\\x16\\x7F^\\xAF\\x1B\\x14\\xBF\\x8CF\\xA3\\xCD\\x93\\x93\\xDC\\x1F\\x06\\xBF?\\xAA\\xFB\\x90l-\\x9B\\x16\\x8F\\x8F\\xE2\\xDC8\\xC1tphF\\xCB!l\\xD0n\\xE9U\\x92$\\x07v^Y\\xDD\\xC6*-\\x1F\\xB2\\xFAn\\xFC~;K\\xE7\\x9F\\xC47\\x1F\\xCB\\xEC^|\\xFEv\\xB9\\x18e\\xF3o\\xEF\\x8A\\xE9\\xB2\\xB6\\xE0\\xDBiH8\\xE6(^\\x013\\xAFf\\xF5\\xA5\\xBE\\x1FO\\xFE5~\\x1D\"\\x92\\x84A\\x99=\\xFF3\\x88\\x83Qp]\\x16\\x8BE0\\xC9\\xAB,"
		"x\\x97\\xFDg\\x99-\\xAA\\xE0\\xBBB\\\\\\xA4\\xFC\\x1C\\xBC_\\xCE\\xE6Y\\x99\n\\xA4\\x88\\x07\\x16\\xDC\\x17ep\\x9D\\x95U\\x9A\\xCF\\x83\\xEF\\xC7\\xC1+aa\\xF9T\\xE6\\x8B,H\\xE7w\\xC18}\\xC8~\\xCD\\xEF\\xB2`\\\\\\xE6\\xF5/\\x0B\\xE5==~\\xDA\\xC9\\xC9\\xD3vl\\xEB\\x07%\\xB2\\x12\\xB7#\\xAF\\x05N\\x89\\x04N\\x9B\\xC1\\x19u58\\xA7\\xCBzp\\x8En\\x97\\xB3YV\\xE5\\xF3\\xD1\\xBC\\x18]\\xBF\\x7Fe\\xF5,\\xF9\\xC9\\xB3\\x9CdY\\xB0m:\\xD86}2\\x96[z\\xCD\\xD5\\x03\\x9E\\xBB},"
		"\\x07\\x1D\\xA5a\\x18\\x9Et\\xF4MZ\\x06q8\\x14\\xFF\\xA2Di:\n\\xFB\\xF1U\\xC7&F-\\xCF\\xE2)\\x88\\xE2\\x95\\x89|\r\\xFBS\\xB6\\x04\\xD0c\\xE2\\x9D\\x1EQ\\xE4\\x95\\x1Ec\\x87\\xF4(\\x1EllM\\x8F(vE\\x8F$\\xD4\\xD2#\\x89\\xE4\\xF4\\xC8\\xDD\\xD0#%\\x11\\xE2b2xJ\\x8F\\x14\\xA35\\xE5D5\\xE5\\xB4\\xB2\\xC8\\x968Vt\\xF2\\xE6\\xBBq\\xF0T\\x16w\\xCBi\\xB5\\x10g\\x8C\\x8B\\xDA\\xB6<\\x9D\\x05\\xF9|Qm\\x19\\xA9\\xB8\\x0F\\x16\\xC5lY\\xE5\\xC5\\xDCj\\x04#)3\\xF6o\\xA6\\x92\\x14\\x11\\xF2M\\x8A$V\\x93\""
		"\\xBA\\x14R\\x14\\x8F\\x11wF\\x8A\\x04\\xA9\\x879\\xF6K\\x8A\\xE4\\xA4\\xA3o\\x8B\\xE7 \\xA6\r\\xE3\\xC8M'nH\\x91jM\\xEC\\x88\\x14\\xB9\\x7FR\\xF4\\xAB\\x19\\xB1[R\\xB4\\xD7\\x8C\\xC8\\x99f$XO\\x8ADJ\\x8A<tD\\x8A\\x11\\xE5\\x18\\xB5\\x91\"\\xE1\\xB4\\xD1a\\x82e~J\\x17Y\\xF9CV\\xED\\xD1\\xCD\\xB0\\xFE~\\xA7\\xAD\\x8E\\xBE\\xDF\\x1D\\xFF&\\x9D\\x8BC\\xEE\\x86+N\\x12?\\xFC|\\x7F\\x9FO\\xB3\\xC3\\x96v\\xC45\\x0C^\\xFD)|dMG55]\\x95\\xB7yU\\xA6B\\xEE]\\x8B\\x9Bd5\\xE8\\x15\n\\xF3\\x12{\\xA6\\xA6^"
		"\\xEFz\\x94\\x1CG@\\x8E\\x06>\\xB9 \\xEA\\xEDN\\x8F\\x12\\xA6v&~\\xF5ht\\xAAG\\x7F\\x9EVAD\\x0C\\xF4(v\\xA3G\\xA3S=\\xDA\\x0F\\xF5\\xAE\\xF5\\xB5W\\xEA\\xC5~\\xF5(uJ\\xBD\\x91\\xBD\\x1E\\xC5\\xEE\\xF4\\xE8q\\xF0\\xAC\\xE5\\x10.\\xA7\\xDE\\xC8\\x11\\xF5\\xC6\\x94`\\xD2\\xAAG\\xA3\\xB0\\x11z\\xED\\x04\\xB5G+"
		"\\xEDLux\\xC01e\\x1D\\xFE\\xEA\\x86\\x91#\\x85\\xB2\\xFD\\x0BuXI\\xD4\\xD8\\xBBF\\xA6\\xC7\\xB1\\x98#7\\xC1.\\x87\\xA8\\xA3\\xEE42\\x8D\\xD4\\xAE\\xC7\\xAFF\\x8EN5r\\x1D8\\x8E\\xB0\\x81F\\xC6n4r\\xE4J#\\xAF\\xA3\\xB6~\\x89\\xDA\\xAFFN\\xDC\\x12\\xB5\\xBDF\\xC6\\xCE42=\\x0E\\xE8\\xB5\\x1C\\x82\\xE4D\\x1D;\"jDh\\xFB\\xBA*\\x8D\\xF8\\xDEZe\\x13\\x91\\xDD\\xB1\\xCF\\xB8,v\\xA1\\xD8\\x86_\\xDE,"
		"gU\\xFE4\\xCB\\xF6B\\xB2\\x93\\xAD\\xD3\\xDB_\\xD6\\xCC3\\x8BEUZO\\xF9\\xE5\\x04\\xDB\\xBF\\xA1jb\\xF4\\xAE`\\xE9q<\\xE6hX\\xF2\\x0B\"\\xC6\\xEE\\x14,%\\xEA\\xA1\\xEEW\\xC1\\xC6m+\\xAA\\x9F\\x83\\xD8\\x84\\x18\\x89\\x1B\\x05\\x1B;S\\xB0\\xB1wb$^\\x15,w\\x99p$\\x1E\\xAC\\xBD\\x82%\\xCE\\x14,\\xD5'\\x1CQy\\xC2\\x11G\\x8E\\x88\\x11c\\xC689%F\\x01f\\xD6\\x08:\\x85\\x9CZ\\xE5\\xED\\xEC\\xF1\\xD0p\\xA7\\xEC\\x86\\xAD\"m\\x1Dj\\x95\\x8A;\\xAB\\x81-\\x95\\xA3\\xFE\\xACWR"
		"(\\xF1\\xAF-\\xD5II\\xFCb\\x92\\x92\\xC4\\xD3\\xEDP[jx\\xC8\\xAF\\xB6\\x8CO\\xB5\\xE5q\\xC6\\x8F\\xDCt7\\xDA2v\\xA6-\\x91\\x7F\n\\xF5\\xAA-\\xB9\\xDB\\xA4\\xA4\\xD8^[\\x12g\\xDA\\x92\\xE9\\x93\\x92\\x98<)\\x89cG\\x14J0\\xC2\\xA8U[\\xE2\\xF5*\\xA5<\\xD9g?\\xBF\\xE7e\\xF0j\\x96=\\xA7[\\x9E\\x12\\x94\\xF2,\\xA0\\xF3`\\xE7J\\x14\\xFA\\xB1#c\\xD4\\x04\\xE7]#2u\\x82\\x11\\xBF\\xA0\\x04\\xA3\\xB8;\\x8D\\xC8\\xD4\tF\\xC4\\xAFFD\\xA7\\x1A\\xF1\\x87t\\x1E\\xC4+\\x82\\x13\\x02Re:u\\xA3\\x11\\xD1\\xA9F"
		"<6\\xB1#\\x82\\xC3\\xDE\t\\x8E\\xFA\\xD5\\x88n\\x13\\x8C\\x90\\xBDF\\xA4\\xCE4\"\\xD3'\\x181E\\x82\\x11qFp\\xE2>\\xB6g\\xDD&\\x07\\x8B~-Kq\\x07Y\\xAB\\xEF\\xB2\\xBB\\xBC\\xCC\\xA6+V\\xA9u\\xD6\\xFA\\xE5\\x90\\xD1\\xEA\\xE5\\x90\\xC9\\xB4\\xCC\\x9F\\x84\\xB7{\\x08\\xAE\\xEE\\xC5\\x89\\xC1\\xF5,\\x9F~\\xAA?\\xFE\\xF21/\\xEFF\\xE3\\xB4\\x14.\\xF1M*\\xBE\\xCD\\x8B\\xE5\"\\xF8)\\x17F\\xDB\\x0CpUR\\xAE\\xE7^()\\x95z\\xD7\\x8CL\\x9D8\\xC4/(q\\x08u\\xA7\\x19\\x99"
		":q\\x88\\xFA\\xD5\\x8C\\xE8T3\\xAE\\xF8\\x8A\\x99P\\xAA\\x1B\\xCD\\x88N5cm\"\n;\\xA7T\\xE2\\x9FR\\xFDjF\\xB7\\x89C\\xC8^3Rw\\x9AQ\\x9F8\\xC4\\x14\\x89C\\xD4\\x15\\xA5&\\x94\\xAF=\\xFB1\\xA5\\x12\\xD4\\x9EG3)\\xEE\\xAB?\\xD2RP\\xCC\\xE6]\\x0F\\x89B;~\\x8Fro}\\xD0>\\xC2\\x8A\\x14z\\xD2\\x81\\xA1jb\\xF4\\xAE5\\x13u\\xA2\\x0E\\xBF\\xA0D\\x1D\\xD4\\x9D\\xD6L\\xD4\\x89"
		":\\xD4\\xAF\\xD6\\xC4\\xEDox\\x86\\xC4\\x80\\x18\\x99\\x1B\\xAD\\x89O\\xB5\\xE6\\xB1\\x89\\x1D\\x11#\\xF5N\\x8C\\xCC\\xAF\\xD6t\\x9B\\xA8\\x83\\xED\\xB5&s\\xA65\\x13}\\xA2N\\xA2H\\xD4a\\x8E\\x88\\x91\\xE2p\\x93\\xD2pL\\x8Ct\\xF3\\xCA\\x07:\\x0C`\\xD6\\xEBq\\x93\\xF4q\\xB1\\x9C?\\x8CnK\\xF1i\\xBB\\x1CW'\\xC4l_\\x9C|\\x9BU\\x7F\\x14\\xE5\\xA7`R\\xA5\\xD3O{R\\xEE\\x8CT\\x1D\\xAC\\x10\\x94NLU\\x92#\\xF3\\xAE\\x1A\\x13u\\xB2\\x0E\\xBF\\xA0d\\x1D\\xDC\\x9DjL\\xD4\\xC9:\\xCC\\xAFj\\xC4-\\xAAq9\\x0F\""
		"jB\\x8EnT#nQ\\x8D\\xCBY\\x80\\xA2\\xCE\\xC9\\xD1\\x7Fu \\xE6S5\\xE2\\xD0m\\xB2\\x0E\\xB6W\\x8D\\xCC\\x99jL\\xF4\\xC9:\\x89\"Y\\xC7Uu\\xA0\\x84\\xD1\\x18\\xB7\\xBE\\xE9\\xC9p\\x93\\x1C\\xFA\\xEB\\xF8jX\\xFF\\x17\\x07?f\\x9F\\x83w\\xD9\\xAAV\\xC0l\\xB6V`WU\\xCD+\\x8B\\xE0\\xC5\\x8F\\xEF\\xAE\\xAE\\x7F\\x0C\\xD2\\xF5\\xC7o\\x0E\\xC2\\x9B\\x8F\\xE2\\xEF\\xE0&_Lg\\xC5b)\\x84\\x9CPm\\xAF\\xE7B\\xAD=\\xAE\\x9Ax\\xA9.\\\\pR\\xB7`\\xB8\\x7F\\xFCq\\x19\\x9F\\xBD\\x8C\\xD5\\xED\\xD1\\xE2(\\xA1\\x02\\xD7"
		"!\\xD6\\xE0j:\\xCD\\x16\\x8B\\xA2\\xFC\\xBC;\\xC0\\xCA\\x99(\\xDE \\xFD;\\xDD1\\xF5T\\xC1\\xBF\\x8EV&%\\xE1\\xF0\\x82\\x92\\x92p\\x87:Z\\x9D\\xD9\\xC3\\xFC\\xEAh\\xD2\\xBEf\\xBBIJR\\xBF\\x99\\x9A\\xB8\\xD1\\xD1\\xE4TG_-\\x1F\\x82\\x88w>U\\xF0_))\\xF1\\xA9\\xA3q\\xE86)\\x89\\xD8\\xEB\\xE8\\xC4\\x99\\x8E\\xE6\\xFA\\xA4$\\xAEHJrT)\\x890!P\\xD7\\x11\\xD2\\xE3\\xA9\\x82\\x10\\xA7\\xEF\\xB2\\xE7\\x956\\x15\\xC4q\\x93-\\xF2\\x87\\xF9*\\xF3u\\x97\\xEF:lM\\x87\\x1D\\x7F,\\xAAb\\xF1\\x98\\x96\\x95\\xD9"
		"{\\x96AQ\\x8A\\xD6\\xE75A\\x8A\\xDF&Y\\xF9,Z\\xB7\\x1A\\xDFr\\x85\\xED\\xBB\\x13JBM\\xBCko\\xAEL\\x82\\xC2\\xE1\\x05%A\\x91\\xEE\\xB47W'A%~\\xB57\\x91d\\xF9\\xAE\\xD8*R/6'n\\xB479\\xD5\\xDE\\xB5\\x89a\\xF7\\x84\\xEA\\xBF\\xCAR\\xE2W{\\xBBM\\x82\"\\xF6\\xDA;q\\xA6\\xBD\\xB9>\t\\x8AK\\x93\\xA0x\\xE8\\xAA\\xCA\\x12\\x0Fy\\x8CZ\\x03\\xD3\t\\xD5\\xD5\\xF4\\xEB:\\xCD\\x97(\\x96e\\xBB\\xB2FMq\\xDE5#W&%\\xE1\\xF0\\x82\\x92\\x92Hw\\x9A\\x91kx\\xC2\\xAFf\\xA4\\xA7\\x9AqEq&"
		"k\\xAF\\xDC\\x8Df\\xA4\\x92\\xEA\\xBA\\x9D\\xAF\\xBDb\\xFF\\xD5\\x8C\\xB8_\\xCD\\xE86)\\x89\\xDAkF\\xEEN3\\xEA\\x93\\x92\\xB84)\\x89\\x87\\xAE\\xAA\\x19\\xF1(\\xDA\\x94u?\\xA1\\xB8\\xA4\\x95Td\\x01\\xCCm\\xD9\\xF7\\xE3\\x9C\\xD8\\x17\\xFF\\x9EL\\xBE\\xB1\\x1A\\xAE\\x8AE\\xD6nmR\\xD2\\x1D\\xF7\\xAD\\xE8\\xEAi\\x8E\\x92\\xEE.(\\xD5\\x88v\\xA6\\xE8j\\xE4+\\x1F\\x8B_EG%\\x8A\\xCE$\\x07\\x97\\xBBQt\\xB4]\\xD1\\xED\\x9B\\xD8\\x11\\xDD\\xF9\\xAF\t\\xC4\\xFD*:\\xB7\\xA9F\\xD4^"
		"\\xD1qW\\x8A\\x8E\\x87\\xDAT#\\x1EJS\\x8D\\xF8\\x11V\\xFAUt\\xED\\xC5\\xFB\\x12\\xD6\\x9A\\xBFs\\x9C\\xA1z\\xB2\\x14\\xB7\\xFAB\\x1Cp\\xB3^\\x8A[\\xE7\\xF6\\xD4ACq\\xEC^\\x8A\\xCF\\xDE\\xD2\\xE0\\xDE\\xA2\\xA1\\xD5\\xB8V\t@?\\xC6\\xAB\t\\xD4\\xB7^\\xE4\\xA12\\x1D\t\\x87\\x17\\x94\\x8ED;\\xD3\\x8B<T\\xA7#q\\xBFz\\x91\\xC1\\xF5b\\x1C\\xBA\\xD1\\x8B\\xAC\\xBDvP\\x84:'P\\xEF\\xB5\\x83\\xE2\\xD0\\xAB^\\x8C\\xDC\\xA6#1k\\xBD\\x18\\x1F?\\x83\\x1E\tT\\x9B\\x8E\\xC4Ci:\\x12\\x0F]"
		"\\xD5\\x0E\\xE2\\xC2\\xD0\\xB6\\xDAA\\x88\\x85\\xBCU\\x9B\\x19%\\xC0\\xBE\\x1E?\\xD3\\xA3,\\xD8\\x83\\x8D\\xC2\\xAC\\x86\\xAF\\\\?\\xF6l\\xA3\\x8A\\x0E\\xE3\\xD0\\xBF\\x9ET\\xA7\\xDCD\\x17\\x94r\\xC3:\\xD4\\x93\\xCA\\x94\\x9B8\\xF4\\xAB'\\xD9\\xA9\\x9E\\xBC\\xC9\\xA6F\\xEFt\\xC6\\xA1\\x1B=\\xC9N\\xF5\\xE4w\\xD9m\\x10\\xAE\\xB3s#\\x03:\\x8C\\xF6\\xEC\\xAA\\xCD\\xDA}\\xD8X\\xBE\\xBE\\x8B{\\x07\\xBDOg\\xCBl\\xDF\\xAF\\x1F\\xA4\\x91\\xD7\\xAF`\\xA9\\xB8v\\x93v\\x914\\x19"
		"<\\xE2\\x98\\xA7\\xB4\\x14\\xB6\\xD7\\x07m\\xE6Aq\\x1DV\\xB7#\\xF1}\\x1B\\xA2\\xFD\\xC6\\x0F\\xA9\\xFBhc\\xBCs\\xEE\\xCC\\xCA\\x0F\\xB7\\xDC\\x18\\xD5.\\x92M\\xF7\\xBF\\x9A_h\\xED\\xCD[\\xAE\\xE4v\\x7FG\\x89\\xF5q\\x8D\\xD6\\xB4L\\xA7\\xE2\\xA0\\x9B\\xB4J\\xEB\\x1E4\\x10\\xBD\\x84})-l5\\x9E\\xE9[\\xB4)\\x89\\x0C\\x98\\xB6`\\xB0I\\xA2ES\\xBA\\xCD\\x0C\\xFBs\\x0C\\xB1\\x99c\\xE0J\\xC7\\x80\\xE2\\xB3\\x1C\\x032q\\x0C\\xAB\\xCD\\xC1\\xDC8\\x86f\\xFF\\xBC\\xA6\\xFB]"
		":\\x86\\xDE\\xB7\\xB7\\x93\\x18\\xAE\\x85\\xA1\\xCF\\x1D\\xF9,\\xCC4\\x9E\\xE9X\\xB4)\\xD19\\x16-\\xE8\\xB6\\x87\\xB3hJWF\\xB0?w\\x80\\x8D\\xDC\\x01\\x0F\\xD5\\xEE\\xE0\\xBCy\\x021r\\x07\\xBAkt\\xE8\\x0Ev;\\x875\\xDD\\xEFt\\x9Ep\\x81\\xBBtI\\xFA\\xAAE\\xEE_l/2\\x8B\\x9Eu>\\x07\\x91\\xEF\\xEAg\\xDE\\x82vc,\\x8B\\xA6t\\xE5\\xBF\\xFBs:\\xD4\\xCC\\xE9DJ\\xA7\\x83\\xCF\\x9B\\x830\\x13\\xA7\\xB3\\xDA|\\xC5\\x91\\xD3\\xD9\\xED\\x99\\xD4t\\xBF\\xD39\\xC8_g#\"\\xC9-\\xD0\\x02\\xFA\\x7Fc\\x17&"
		"\\x8B\\x0E\\xF70/\\x92\\xED~f\\xD1\\x82nK \\x8B\\xA6\\xFC\\xCD\\x8B\\x123\\x17\\x15\\xAB]\\xD4y\\xF3\"n\\xE4\\xA2\\x88;\\x17\\xB5\\xDB-\\xA6\\xE9~\\xB7.\\xAA\\xF7\\xAD\\\\$\\xA6k\\x81\\xE8w\\xFF\\x19\\x0BC{\\x98\\xB5\\xC8\\xF6Y2oA\\xBB\\x19\\x8AES\\xDEf-\\xDC,\\xA4\\xCA\\x91\\xD2%\\x90\\xB3f-\\xDC(\\xA4J\\xDD\\x85T\\x9B}2\\x9A\\xEEw\\xE8\\x12\\xBC\\xEDW!\\xE9\\x8F\\x16\\x9D\\x17\\xB8\\xF3\\x86\\x85\\xF5=\\xCC'd{\\xD1X\\xB4\\xA0\\xDB\\x06\\xC2\\xA2)o\\xF3\tn\\x16v\\xE5X\\xED<\\xCE\\x9AOp\\xA3\\xB0+"
		"s\\x19v\\xDD\\xEE\\x10\\xD0t\\xBF\\xDB\\xB0k'\\xA5\\xFD%\\xE6i\\xC1\\xD6\\xFF\\x9E\\x03\\x16\\xC6\\xF40/\\x90\\xED\\x91a\\xDE\\x82\\xB6\\x00\\xBEES\\xBAB\\xF5\\xFD\rm\\xC3\\x10*Q\\x0Emz\\xDE\\xBC\\xC0(\\x84\\xCA\\x1C\\x86Pw\\xB5\\xD1\\x9B\\xEEw;\\xB4\\xFD\\xD6&\\x97\\xF4K\\x8B\\xD2\\x0B\\xAE\\xB6n\\xD1\\x8B\\x1E\\xE6\t\\xB2\\xFD\\x08,Z\\xD0\\x95\\xFE\\xB6hJW\\xA2\\xBB?gb\\x18\\x1A\\xA5jgr\\xDE<\\xC1(4\\x9A8\\x0C\\x8D\\xEE\\xAAB7\\xDD\\xEF\\xD4\\x99\\xF4_\\xB2Yb\\xBA\\x16\\x88~\\xEBL"
		"[\\x18\\xDA\\xC3\\xFCBVO\\xDD\\xBC\\x05m\\xD1c\\x8B\\xA6t\\xC5\\x89\\xFBs\t\\x86\\xA1H\\xA6t\t\\xEC\\xBC\\xF9\\x85Q(2q\\x18\\x8A\\xDC\\xD5\\xC3m\\xBA\\xDF\\xA9KpQ\\xAAVb\\xBC\\x16\\x8A\\xBE+\\xECZ\\x98\\xDA\\xC3LAVM\\xDA\\xA2\\x05]\\xB9W\\x8B\\xA6teY\\xFBr\\x0Bu\\x99R#\\xB7\\xA0\\xCE\\xF0\\xD4J\\x02\\x95[\\xD8T \\xD4\\xBA\\x05\\x87\\x19\\x9E\\xBBJ\\xA0M\\xF7;\\xCD\\xDC\\xF8\\x1BU\\xC7\\x94\\xDCC\\xED\\x88\\xF8\\x7Fm\\xD1UmQ\\x8B;\\xD6\\xC3\\xDCIVU\\xD8\\xBC\\x05m\\xA1K\\x8B\\xA6t\\x05)"
		"\\xFBs\\x92\\x86aWu\\xB6kr\\xCE\\xDCiSUN\\xE7$\\xB9\\xBB\\xB0kS\\x03\\xB1\\xE9~\\xA7N\\xD2o\\x11BI\\xB7\\xB4 \\xBD\\xDC\\xAA\\x8A\\x16\\x9D\\xE8a\\xBE%\\xAB:j\\xD1\\x82\\xAE\\xC4\\x9FES\\xBAR|\\xFD\\xB9\\x12\\xA30\\xEF\\xA6\\xEE\\x9A\\xDC\\x95\\x9C7\\xDF2\n\\xF3r\\x87a\\xDE]\\xF5\\xB7\\xA6\\xFB\\x9D\\xCA\\xB0\\x8E\\xAA\\xB6I\\xEC\\xD3\\xA2\\xCDA=9\\x0Bkz\\x98'\\xC8* \\x9A\\xB7\\xA0-nf\\xD1\\x94\\xAE\\x08Y\\x7F\\x83\\xDB(\\xEC\\xCACuF*?o\\x9E`\\x12v]\\x97\\xFEq5\\xB8\\xB7u\\xAF\\x9A\\xEEw;"
		"\\xB8\\xBB\\xACT%\\xB1R\\x8B9g\\x95\\xB4,l\\xEA\\x81\\xC5eu\\xE0,Z\\xD0\\x95u\\xB2hJW~\\xA9\\xBF\\x81n\\x14L\\xDD\\xD4\\xDA\\x91\\x0F\\xF4\\xF3X\\xDC$\\x98\\xBA.Q\\xE2\\x90\\xC5\\xF7R\\xCFy\\xD8q^\\xA7\\x9F\\xD2;\\x92\\xEEh\\xC1yy5\\x84,\\x8C\\xEFa\\x8E \\xAB\\xA9e\\xDE\\x82\\xB6\\xA0\\x8DES\\xBA\\xC23\\xBD\\xB9\\x8E\\xC8(\\xE0\\xCACe\\xFEg],\\xE5\\x0C\\xD7\\x11\\x99\\x04\\\\\\xD7\\xE5\\x1C\\\\\\xB9\\x8Em\\xAD\\x93\\xA6\\xFB]\\xBA\\x8E~\\xAB\\x91H\\xAC\\xD6b\\xD0[\\xF5\\x14\\x0B\\x1B"
		"{\\x98C\\xC8j\\x03Y\\xB4\\xA0+\\xE5a\\xD1\\x94\\xAE\\xE4\\x86|H\\x9D\\x8E\\x8DM\\xD3\\xEB\\x82R_\\x15\\xA3Qy*\\x82\\x9F\\x8A\\xE1\\xA7\\x12\\xF8\\xA9\\x14~*\\x83\\x9F\\x9A\\xC0O\\xE5\\xE0S\\xA3\\x10~j\\x04?\\x15\\x8E\\xA6\\x08\\x8E\\xA6\\x08\\x8E\\xA6\\x08\\x8E\\xA6\\x08\\x8E\\xA6\\x08\\x8E\\xA6\\x08\\x8E\\xA6\\x08\\x8E\\xA6\\x18\\x8E\\xA6\\x18\\x8E\\xA6\\x18\\x8E\\xA6\\x18\\x8E\\xA6\\x18\\x8E\\xA6\\x18\\x8E\\xA6\\x18\\x8E\\xA6\\x18\\x8E\\xA6\\x18\\x8E\\xA6\\x18\\x8E&\\x04G\\x13\\x82\\xA3\t"
		"\\xC1\\xD1\\x84\\xE0hBp4!8\\x9A\\x10\\x1CM\\x08\\x8E&\\x04G\\x13\\x82\\xA3\t\\xC3\\xD1\\x84\\xE1h\\xC2p4a8\\x9A0\\x1CM\\x18\\x8E&\\x0CG\\x13\\x86\\xA3\t\\xC3\\xD1\\x84\\xE1h\"p4\\x118\\x9A\\x08\\x1CM\\x04\\x8E&\\x02G\\x13\\x81\\xA3\\x89\\xC0\\xD1D\\xE0h\"p4\\x118\\x9A(\\x1CM\\x14\\x8E&\nG\\x13\\x85\\xA3\\x89\\xC2\\xD1D\\xE1h\\xA2p4Q8\\x9A(\\x1CM\\x14\\x8E&\\x06G\\x13\\x83\\xA3\\x89\\xC1\\xD1\\xC4\\xE0hbp418\\x9A\\x18\\x1CM\\x0C\\x8E&\\x06G\\x13\\x83\\xA3)\\x81\\xA3)\\x81\\xA3)\\x81\\xA3)\\x81\\xA3"
		")\\x81\\xA3)\\x81\\xA3)\\x81\\xA3)\\x81\\xA3)\\x81\\xA3)\\x81\\xA3\\x89\\xC3\\xD1\\xC4\\xE1h\\xE2p4q8\\x9A8\\x1CM\\x1C\\x8E&\\x0EG\\x13\\x87\\xA3\\x89\\xC3\\xD1\\xC4\\xC1h\\xA2!\\x18M4\\x04\\xA3\\x89\\xC2c\\xE1\\x14\\x1E\\x0B\\xA7\\xF0X8\\x85\\xC7\\xC2)<\\x16N\\xE1\\xB1p\n\\x8F\\x85Sx,\\x9C\\xC2c\\xE1\\x14\\x1E\\x0B\\xA7\\xF0X8\\x85\\xC7\\xC2)<\\x16N\\xE1\\xB1p\n\\x8F\\x85Sx,\\x9C\\xC2c\\xE1\\x14\\x1E\\x0B\\xA7\\xF0X8\\x85\\xC7\\xC2)<\\x16N\\xE1\\xB1p\n\\x8F\\x85Sx,\\x9C\\xAEc\\xE1\\x1F\\xBE\\xF9/", 
		LAST);

	web_custom_request("wr_28", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/wr/?3281977870172919&325&11&27&0&18&264&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/security-bulletins", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body=qcm_buffer_timing_fix&116638&9ceeP_([{\"type\":1,\"attribute\":{\"attributeName\":\"title\",\"attributeValue\":\"Search HP.com\",\"id\":\"INPUT3\"}}])&9Cw7P_([{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue\":\"form-control search-input ng-valid ng-dirty ng-touched\",\"id\":\"INPUT7\"}}])&OP_([{\"type\":1,\"attribute\":{\"attributeName\":\"placeholder\",\"attributeValue\":\"search security bulletins\",\"id\":\"INPUT7\"}}])&CP_([{\"type\":0,\"addedNodes\":[{\"nodeType\""
		":1,\"id\":\"DIV724\",\"type\":1,\"parentNode\":\"APP-LOADER1\",\"tagName\":\"DIV\",\"attributes\":{\"_ngcontent-app-root-c1\":\"\",\"class\":\"loading-screen-wrapper\"},\"childNodes\":[{\"nodeType\":1,\"id\":\"DIV725\",\"tagName\":\"DIV\",\"attributes\":{\"_ngcontent-app-root-c1\":\"\",\"class\":\"loading-screen-icon ltr\"},\"childNodes\":[{\"nodeType\":1,\"id\":\"DIV726\",\"tagName\":\"DIV\",\"attributes\":{\"_ngcontent-app-root-c1\":\"\",\"class\":\"loader\"},\"childNodes\":[{\"nodeType\":3,\""
		"id\":\"#text5995\",\"textContent\":\"Loading...\"}]},{\"nodeType\":1,\"id\":\"H16\",\"tagName\":\"H1\",\"attributes\":{\"_ngcontent-app-root-c1\":\"\",\"class\":\"loading-text\"},\"childNodes\":[{\"nodeType\":3,\"id\":\"#text5996\",\"textContent\":\"\"}]}]}]}],\"removedNodes\":[]},{\"type\":1,\"attribute\":{\"attributeName\":\"class\",\"attributeValue\":\"loading-screen-icon ltr\",\"id\":\"DIV725\"}},{\"type\":2,\"characterData\":{\"id\":\"#text5996\",\"textContent\":\"\"}}])&"
		"8DvZOJ8HkWJ9NQnAqcm_buffer_timing_fix&128705&F", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("events_7", 
		"URL=https://c.contentsquare.net/events?v=10.8.6&sr=12&mdh=725&pn=1&re=1&uu=2dc25ae1-1ad2-a848-f307-79a2d1bae172&sn=1&lv=1620386430&lhd=1620386430&hd=1620386430&pid=1255&str=913&di=1544&dc=7784&fl=7792&eu=%5B%5B2%2C106907%2C816%2C29%2C0%2C%22%22%2C36653%2C38010%5D%2C%5B2%2C107308%2C299%2C331%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Eul%3Aeq(0)%3Eli%3Aeq(2)"
		"%22%2C8983%2C30550%5D%2C%5B2%2C107708%2C276%2C359%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%22%2C8330%2C1691%5D%2C%5B6%2C107759%2C272%2C366%2C%22input%23FindMyBulletin%22%2C%22%22%5D%2C%5B2%2C108108%2C270%2C384%2C0%2C%22input%23FindMyBulletin%22%2C14837%2C35746%5D%2C%5B3%2C108699%2C270%2C384%2C%22input%23FindMyBulletin%22%2C%22%22%5D%2C%5B11%2C108733%2C%22input%23FindMyBulletin%22%5D%2C%5B4%2C108932%2C270%2C384%2C%22input%23FindMyBulletin%22%2C%22%22%5D%2C%5B5%2C108935%2C270%2C384%2C%22input%23FindMyBulletin%22%2C%22%22%5D%2C%5B2%2C119813%2C313%2C372%2C0%2C%22%22%2C19613%2C11915%5D%2C%5"
		"B7%2C119998%2C582%2C403%2C%22input%23FindMyBulletin%22%5D%2C%5B2%2C120213%2C664%2C400%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%22%2C29241%2C2162%5D%2C%5B6%2C120270%2C682%2C395%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ea%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C120332%2C694%2C392%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)"
		"%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ea%3Aeq(0)%22%5D%2C%5B6%2C120332%2C694%2C392%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C120455%2C707%2C388%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%22%5D%2C%5B6%2C120455%2C707%2C388%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Eem%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C120620%2C710%2C387%2C0%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Eem%3Aeq(0)"
		"%22%2C35442%2C56173%5D%2C%5B3%2C121460%2C710%2C387%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Eem%3Aeq(0)%22%2C%22%22%5D%2C%5B10%2C121482%2C%22input%23FindMyBulletin%22%2Cfalse%5D%2C%5B12%2C121493%2C%22input%23FindMyBulletin%22%5D%2C%5B4%2C121652%2C710%2C387%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Eem%3Aeq(0)%22%2C%22%22%5D%2C%5B5%2C121655%2C710%2C387%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Eem%3Aeq(0)%22%2C%22%22%5D%2C%5B7%2C121744%2C710%2C387%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ebutton%3Aeq(0)%3Eem%3Aeq(0)%22%5D%2C%5B6%2C122224%2C710%2C387%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ebutton%3Aeq(0)%3Eem%3Aeq(0)%22%2C%22%22%5D%2C%5B2%2C125342%2C713%2C377%2C0%2C%22%22%2C49486%2C9362%5D%2C%5B7%2C125372%2C748%2C281%2C%22div%23directionTracker%3Eapp-layout%3Aeq(0)%3Eapp-security-bulletin%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)%3Ediv%3Aeq(0)"
		"%3Ebutton%3Aeq(0)%3Eem%3Aeq(0)%22%5D%2C%5B2%2C125743%2C886%2C1%2C0%2C%22div%23welcomeHeader%22%2C39797%2C1311%5D%5D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/security-bulletins", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("search",LR_AUTO);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	lr_think_time(4);

	web_custom_request("wr_29", 
		"URL=https://wr-us.contentsquare.net/ctn_v2/wr/?3281977870172919&325&11&28&0&19&264&subsid=232897&msgsize=120", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ppssupport-itgllbh7.inc.hp.com/us-en/security-bulletins", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body=qcm_buffer_timing_fix&128710&9fbGP_([{\"type\":1,\"attribute\":{\"attributeName\":\"title\",\"attributeValue\":\"Search HP.com\",\"id\":\"INPUT3\"}}])&8/nqcm_buffer_timing_fix&132786&F", 
		LAST);

	return 0;
}
