//Author : Shashank 
//to check if given sides are sides of a triangle and find the sum of sides if they are sides of a triangle
#include<stdio.h>
int main()
{
    int a, b, c, t, s;
    printf("Give the value of side A: ");
    scanf("%d", &a);
    printf("Give the value of side B: ");
    scanf("%d", &b);
    printf("Give the value of side C: ");
    scanf("%d", &c);
    t=((a+b)>c)&&((b+c)>a)&&((c+a)>b);
    s=(t*(a+b+c));
    printf("\nDo they satisfy triangle property?");
    printf("\nDisplay: 0 for no, Sum of all sides for Yes: %d", s);
return 0;
}