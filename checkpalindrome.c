//WAP to check palindrome numbers using while
#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("Enter the number : ");
	scanf("%d",&a);
	b=a;
	while (a>0)
    {
		c=c*10+a%10;
		a=a/10;
	}
	if(c==b)
    {
		printf("It is a palindrome");
	}
	else
	printf("Not a Palindrome");
return 0;
}