#include<stdio.h>
#include<math.h>
int decimaltobinary(int num)
{
	int sum=0;
	int p=0;
	while(num>0)
	{
		int d=num%2;
		num=num/2;
		sum=sum+d*pow(10,p);
		p++;
	}
	return sum;
}
int main()
{
	int num=0;
	printf("Enter number: ");
	scanf("%d", &num);
	int res= decimaltobinary(num);
	printf("Binary equivalent: %d", res);
}
