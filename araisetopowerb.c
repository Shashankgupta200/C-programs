//WAP to find power of a raise to b
#include<stdio.h>
#include<math.h>
void main()
{
    int a, b, res;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    res=pow(a,b);

    printf("Result: %d", res);
    
}

