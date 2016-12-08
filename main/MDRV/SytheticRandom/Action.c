double randparam = 0.0;

Action()
{
	
	lr_start_transaction("transaction_1");
	lr_user_data_point("mic_recv", 1000);
	lr_user_data_point("HTTP_200", 5);
	lr_error_message("this is an error message");
	lr_think_time(1);	
	lr_end_transaction("transaction_1",LR_AUTO);		
	
	
	lr_start_transaction("transaction_2");
	
	randparam = atoi(lr_eval_string("{randp}"));
	lr_user_data_point("mic_recv", randparam);
	
	randparam = atoi(lr_eval_string("{randp}"))/100;
	lr_user_data_point("HTTP_200", randparam);
	
	
	lr_error_message("this is an error message");
	randparam = atoi(lr_eval_string("{oneToFive}"));
	lr_think_time(randparam);
	lr_end_transaction("transaction_2",LR_AUTO);
	
	
	return 0;
}
