#include <stdio.h>
void main() 
{
	int a;
	printf("Enter the Number : ");
	scanf("%d",&a);
	if(a<0)
	{
	printf(" %d is a negative number",a);
	}
	else if(a=0)
	{
	printf("%d is a Zero",a);
	}
	else 
	{
	printf("%d is a Positive number",a);
	}
	return 0;
}
