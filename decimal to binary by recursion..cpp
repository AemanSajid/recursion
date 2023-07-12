#include<stdio.h>
#include<math.h>
int changetobinary(int num)
{
    if (num==0)
    return 0;
    else
    {
    	return (num%2)+10*changetobinary(num/2);
	}
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
    int dec= changetobinary(num);
	printf("%d", dec);
}

