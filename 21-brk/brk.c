#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	char *ptr1 = sbrk(0);
	char *ptr2;
	sleep(1);

	brk(ptr1 + 512);
	sleep(1);

	ptr2 = (char*)malloc(512);
	sleep(1);

	free(ptr2);
	sleep(1);
	//free(ptr1);
	pause();
}
