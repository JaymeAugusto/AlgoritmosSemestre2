#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i;
	time_t start,end;
			
	start = time(NULL);
	for(i=0;i<200;i++) printf("----\n");
	end = time(NULL);
	
	exit(0);
	printf("\n\n\n\n\n The time difference was %f seconds", difftime(end,start));
}
