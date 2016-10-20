#include<stdio.h>
#include"average.h"
int average(int payments[]);

int main(void){
	int payments[] = {4, 4, 4, 4, 4};
	printf("4+4+4+4の平均: ");
	if(average(payments)==4){
		printf("テスト成功\n");
	}else{
		printf("テスト失敗\n");
	}
	
	int payments2[] = {6, 6, 6, 18 , 0};
	printf("6+6+6+18の平均: ");
	if(average(payments2)==(6+6+6+18)/5){
		printf("テスト成功\n");	
	}else{
		printf("テスト失敗\n");
	}
	return 0;
}
