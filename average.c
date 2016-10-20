#include<stdio.h>
#include"average.h"

int average(int payments[]){
	int result = 0;
	int i;
	for(i=0;i<sizeof(payments)/sizeof(int); i++){
		result += payments[i];
	}
	result = result / (sizeof(payments) / sizeof(int));
	return result;
}
