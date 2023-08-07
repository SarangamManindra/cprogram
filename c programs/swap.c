#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter any two numbers: ");
	scanf("%d%d",&num1,&num2);
	num1= num1^num2;
	num2= num1^num2;
	num1= num1^num2;
	printf("value of num1=%d and num2=%d after swap",num1,num2);
	return 0;
}

