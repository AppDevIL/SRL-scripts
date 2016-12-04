Action()
{

	lr_start_transaction("firstPage");
	web_url("index.html",
		"URL=http://15.125.127.151:81/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	
	lr_end_transaction("firstPage", LR_AUTO);
	
	web_set_sockets_option("SSL_VERSION", "TLS");

	web_url("secondPage.html", 
		"URL=http://15.125.127.151:81/secondPage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("index.html_2", 
		"URL=http://15.125.127.151:81/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}