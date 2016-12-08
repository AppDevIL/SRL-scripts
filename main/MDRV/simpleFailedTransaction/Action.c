Action()
{
	
	
	lr_start_transaction("firstTrans");
	lr_user_data_point("mic_recv", 100000);			
	lr_user_data_point("HTTP_200", 5);				
	lr_think_time(2);
	lr_end_transaction("firstTrans",LR_FAIL);
	
	return 0;
}
