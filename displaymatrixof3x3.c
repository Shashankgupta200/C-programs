//WAP to display a matrix of order 3 x 3 
#include<stdio.h>
int main()
{
    int i,j,std[3][3];
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            printf("Data for row no %d and column no %d: ",i,j);
            scanf("%d", &std[i][j]);

        }
    }
    printf("matrix is: \n");
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {    
            printf("%d\t", std[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}