//WAP to find the prime factors of a number
#include <stdio.h>
void check(int num,int p)
{
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            p=1;
            for(int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    p=0;
                    break;
                }
            }
            if(p==1)
            {
                printf("%d\t", i);
            }
        }
    }
    
}
void main()
{
    int num,p;
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);
    printf("All Prime Factors of %d are: \n", num);
    check(num,p);
}