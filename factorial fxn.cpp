#include<stdio.h>
int factorialcalc(int n1)
{
	int f=1;
	for(int i=n1;i>=1;i--)
	{
		f=f*i;
	}
	return f;
}
int main ()
{
	int fact, num;
	printf("Enter the number: ");
	scanf("%d", &num);
	fact= factorialcalc(num);
	printf("The factorial of %d is %d.", num,fact);
}
