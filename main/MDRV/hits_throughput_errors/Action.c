Action()
{
	
	lr_start_transaction("trans_1");

	lr_user_data_point("mic_recv", 1000);
	lr_user_data_point("HTTP_200", 5);
	lr_error_message("this is error message");
	lr_think_time(5);
	
	lr_end_transaction("trans_1",LR_AUTO);

	
	return 0;
}
