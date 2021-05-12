#include<stdio.h>
int main(){
	int i;
	for(i=0; i<128; i++){
		printf("i=%d, char= '%c'\n",i,i);
	}
	for(i=0; i<10; i++){
		printf("\a");
	}
	
	return 0;
}
