//WAP to display pattern with $$$

#include<stdio.h>
int main()
{
    int i,j,n=5;
    

    for(i=0;i<n;i++)
    {
        for(j=0;j<2*i+1;j++)
        printf("$");
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("$");
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("$");
        printf("\n");
    }    
    for(i=0;i<n;i++)
    {
        for(j=0;j<7-2*i;j++)
        printf("$");
        for(j=0;j<i+1;j++)
        printf(" ");
        for(j=0;j<i+1;j++)
        printf(" ");
        for(j=0;j<7-2*i;j++)
        printf("$");
        for(j=0;j<i+1;j++)
        printf(" ");
        for(j=0;j<i+1;j++)
        printf(" ");
        for(j=0;j<7-2*i;j++)
        printf("$");
        printf("\n");
    }
    return 0;
}