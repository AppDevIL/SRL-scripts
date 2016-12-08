Action()
{
	//this will attempt to allocate UP TO 1GB of memory, you can use a counter if you want to make sure you allocate 1GB
	void *ptr;
    int i;
    unsigned int block_size = 1024;
    
    for (i = 0; i < 1024 * 1024; ++i) {
        while ((ptr = (void *)malloc(block_size)) == NULL) {
            block_size >>= 2;
            --i;
        }
    	memset(ptr,0,block_size);
    }

    lr_think_time(20);
    
	return 0;
}
