#include<stdio.h>
int binarytodecimal(int binary)
{
	if(binary==0)
	{
		return 0;
	}
	int decimal=binarytodecimal(binary/10);
	int lastdigit= binary%10;
	decimal=decimal*2+lastdigit;
	return decimal;
}
int main()
{
	int binary;
	printf("Enter a binary number: ");
	scanf("%d", &binary);
	int decimal= binarytodecimal(binary);
	printf("Decimal equivalent: %d\n", decimal);
	return 0;
}
