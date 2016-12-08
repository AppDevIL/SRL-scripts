//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("TC_PCOE_TX");
	truclient_step("17", "Navigate to 'http://15.125.124.109:81'", "snapshot=Action_17.inf");
	truclient_step("18", "Click on Go to second page button", "snapshot=Action_18.inf");
	truclient_step("19", "Click on Back to home button", "snapshot=Action_19.inf");
	truclient_step("20", "Click on Go to third page button", "snapshot=Action_20.inf");
	lr_end_transaction("TC_PCOE_TX",0);
	truclient_step("21", "Wait 120 seconds", "snapshot=Action_21.inf");

	return 0;
}
