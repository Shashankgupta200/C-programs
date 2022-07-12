/*WAP to show
    1
   222
  33333
   222
    1
*/
#include <stdio.h>
void main()
{
    int i,j,n;
    printf("enter the no of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("%d",i+1);
        for(j=0;j<n-i-1;j++)
        printf(" ");
        for(j=0;j<n-i-1;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("%d",i+1);
        printf("\n");
    }
    for(i=n-1;i>0;i--)
    {
        for(j=0;j<n-i;j++)
        printf(" ");
        for(j=0;j<2*i-1;j++)
        printf("%d",i);
        for(j=0;j<n-i;j++)
        printf(" ");
        for(j=0;j<n-i;j++)
        printf(" ");
        for(j=0;j<2*i-1;j++)
        printf("%d",i);
        printf("\n");
    }

}