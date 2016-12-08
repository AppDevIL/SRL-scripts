vuser_init()
{
    lr_start_transaction("init");
	lr_error_message("This is the init message");
	lr_think_time(60);
	lr_end_transaction("init",LR_PASS);

	return 0;
}
