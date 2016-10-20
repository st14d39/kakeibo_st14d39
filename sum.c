#include<stdio.h>
#include"sum.h"
int sum(int payments[])
{
	int i,n;
	n=0;
	for(i=0;i<5;i++)
	{
		n=n+payments[i];
	}
	return n;
}
