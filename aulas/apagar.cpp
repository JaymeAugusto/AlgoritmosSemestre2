#include<stdio.h> 
int q= 1; 
int *b = &q;
int main(){
	printf("\t%d\n",q);
	printf("\t%d\n",&q);	
	printf("\t%d\n",&b);
	printf("\t%d\n",*b);

	return 0;
	
}
