double randparam = 0.0;
int i = 0;
int numberOfIterations = 50;
char* c =  NULL;

Action()
{    
	c =  (char*)(malloc(sizeof(char)*100));
    for(i=0 ; i<numberOfIterations ; i++){
		itoa (i,c,10);
		lr_start_transaction(c);        
        
        randparam = atoi(lr_eval_string("{randp}"));
        lr_user_data_point("mic_recv", randparam);
        
        randparam = atoi(lr_eval_string("{randp}"))/100;
        lr_user_data_point("HTTP_200", randparam);
        
        
        lr_error_message("this is an error message");
        randparam = atoi(lr_eval_string("{oneToFive}"));
        lr_think_time(randparam);
        lr_end_transaction(c,LR_AUTO);
    }
    
	free(c);
    
    return 0;
}
