Action()
{

	static int i = 0;
	
	lr_start_transaction("Sample_Transaction");
	
	web_url("hp",
		"URL=http://anyiconproject.com/hp/", 
		LAST);
	
	lr_think_time(3);
	
	if (i>100){
		lr_think_time(3);
	}

	lr_end_transaction("Sample_Transaction", LR_AUTO);
	
	lr_think_time(3);
	
	i++;

	return 0;
}