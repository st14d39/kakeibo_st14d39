#include<stdio.h>
#include"average.h"
int average(int payments[]);

int main(void){
	int payments[] = {4, 4, 4, 4};
	printf("average = %d\n", average(payments));
	
	return 0;
}
