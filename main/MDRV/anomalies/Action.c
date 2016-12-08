Action()
{
	
	lr_message ("Now is: [%ld]", time(&currenttime)); 
	timediff = currenttime-starttime;	
    lr_message ("Timediff is: [%ld]", timediff); 
    
    if (timediff > delay) my_time = extra;
    	
	lr_start_transaction("dummy");

	// web page download simulation

	lr_user_data_point("tcp_connect", 6);			// new connections
	lr_user_data_point("tcp_connection_count", 4);	// currently open connections
	lr_user_data_point("mic_recv", 4896000);		// downloaded bytes (throughput);
	lr_user_data_point("HTTP_200", 24);				// successful responses
	lr_user_data_point("HTTP_304", 2);				// not modified responses
	lr_user_data_point("HTTP_404", 0);				// error responses
	lr_user_data_point("HTTP_302", 1);				// redirection responses
	lr_user_data_point("tcp_shutdown", 2);			// closed connections

	// -------------------------------------------------------------------------------
	
	sleep(stime);
//	lr_message("sleep [%d]",stime);

// extra time	
	sleep(my_time);
//	lr_message("sleep [%d]",my_time);
	
	lr_user_data_point("tcp_connect", 2);			// new connections
	lr_user_data_point("tcp_connection_count", -4);	// currently open connections
	lr_user_data_point("mic_recv", 123600);			// downloaded bytes (throughput);
	lr_user_data_point("HTTP_200", 10);				// successful responses
	lr_user_data_point("HTTP_304", 5);				// not modified responses
	lr_user_data_point("HTTP_404", 1);				// error responses
	lr_user_data_point("tcp_shutdown", 6);			// closed connections

	lr_end_transaction("dummy",LR_PASS);
	
	return 0;
}
