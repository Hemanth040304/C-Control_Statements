#include<stdio.h>
void main()
{
	int number1,number2;
	printf("Enter two numbers.\n");
	scanf("%d%d",&number1,&number2);
	while(number1<=number2)
	{
		if (number1%2!=0)
		{
			printf("%d ",number1);
		}
		number1++;
	}
}
