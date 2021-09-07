SEO_Printersetup_SeriesPage()
{
	
	web_add_auto_header("User-Agent","googlebot");
	
	lr_start_transaction("FP06_PrinterSetupSeries_13_seo");
	
	web_url("{p_SeriesOid}", 
		"URL=https://{BaseUrl}/{p_locale}/printer-setup/{p_printerSeries}/{p_SeriesOid}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("FP06_PrinterSetupSeries_13_seo", LR_AUTO);
	
	web_revert_auto_header("User-Agent");
	
	return 0;
}