/*WAP to print A in pattern
AAAAAAAAAAAAAAA
AAAA AAAA AAAA
AAA  AAA  AAA
AA   AA   AA
A    A    A
*/
#include <stdio.h>

int main(){
    int i,j,n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        printf("A");
        for(j=0;j<i;j++)
        printf(" ");
        for(j=0;j<n-i;j++)
        printf("A");
        for(j=0;j<i;j++)
        printf(" ");
        for(j=0;j<n-i;j++)
        printf("A");
        printf("\n");
    }
    return 0;
}