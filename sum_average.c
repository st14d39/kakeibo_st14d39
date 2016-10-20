#include<stdio.h>
#include"average.h"
#include"sum.h"

int main(void){
	int payments[] = {100, 150, 360, 50, 1};
	int a, b;
	a = sum(payments);
	b = average(payments);
	printf("sum: %d\naverage: %d\n", a, b);
	
	return 0;
}
