#include<stdio.h>
#include"average.h"

int average(int payments[]){
	int result = 0;
	int i;
	for(i=0;i<5; i++){
		result += payments[i];
	}
	result = (result / 5);
	return result;
}
