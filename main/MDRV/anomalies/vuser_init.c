vuser_init()
{
    os = (char *) getenv("OS");
    if (os != NULL) {
        // Windows
        scale = 1;
        }
    else {
        // UNIX
        scale = 1000;
    }

    stime = stime/scale;   
    extra = extra/scale;
    
	lr_message ("Started at: [%ld]", time(&starttime)); 

	delay=lr_get_attrib_long("delay");

	if ( delay <= 0 ) delay = 300;
	lr_message ("Delay is: [%ld]", delay); 

return 0;
}
