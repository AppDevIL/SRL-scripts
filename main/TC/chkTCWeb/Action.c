//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Transaction 1");
	truclient_step("1", "Navigate to 'http://54.160.66.111:3000/'", "snapshot=Action_1.inf");
	truclient_step("2", "Register", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Click on Name textbox", "snapshot=Action_2.1.inf");
		truclient_step("2.2", "Type roy in Name textbox", "snapshot=Action_2.2.inf");
		truclient_step("2.3", "Type b in Last name textbox", "snapshot=Action_2.3.inf");
		truclient_step("2.4", "Type royb@t.com in Email textbox", "snapshot=Action_2.4.inf");
		truclient_step("2.5", "Type *** in Password passwordbox", "snapshot=Action_2.5.inf");
		truclient_step("2.6", "Type *** in Confirm Password passwordbox", "snapshot=Action_2.6.inf");
		truclient_step("2.7", "Click on Register button", "snapshot=Action_2.7.inf");
	}
	truclient_step("3", "Click on Set default measurement link", "snapshot=Action_3.inf");
	truclient_step("4", "Click on get log details link", "snapshot=Action_4.inf");
	truclient_step("5", "Go back a page", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Show Measurement link", "snapshot=Action_6.inf");
	truclient_step("7", "Go back a page", "snapshot=Action_7.inf");
	truclient_step("8", "Click on Show Parameter Data link", "snapshot=Action_8.inf");
	truclient_step("9", "Go back a page", "snapshot=Action_9.inf");
	lr_end_transaction("Transaction 1",0);
	lr_start_transaction("Transaction 2");
	truclient_step("10", "Navigate to '54.160.66.111'", "snapshot=Action_10.inf");
	truclient_step("11", "Click on Go to second page button", "snapshot=Action_11.inf");
	truclient_step("12", "Click on Back to home button", "snapshot=Action_12.inf");
	lr_end_transaction("Transaction 2",0);

	return 0;
}
