Action()
{
	
	lr_message ("Now is: [%ld]", time(&currenttime)); 
	timediff = currenttime-starttime;	
    lr_message ("Timediff is: [%ld]", timediff); 
    
    if (timediff > delay) my_time = extra;
    	
	lr_start_transaction("dummy");

	// web page download simulation

	lr_user_data_point("mic_recv", 1);		// downloaded bytes (throughput);
	lr_user_data_point("HTTP_200", 1);				// redirection responses
		
	
	//after 5 minutes
	if(timediff > delay)
		lr_user_data_point("HTTP_200", 1000);				// redirection responses
	
	
	//after 7 minutes
	if(timediff > (delay + 120))
		lr_user_data_point("mic_recv", 30);
	
	// -------------------------------------------------------------------------------
	
	sleep(stime);
//	lr_message("sleep [%d]",stime);

// extra time	
	sleep(my_time);
//	lr_message("sleep [%d]",my_time);
	
	
	lr_end_transaction("dummy",LR_PASS);
	
	return 0;
}
