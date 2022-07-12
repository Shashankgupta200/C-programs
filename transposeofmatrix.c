//WAP to find transpose of the matrix 
#include<stdio.h>
int main()
{
    int i,j,std[3][3],t;
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            printf("Data for row no %d and column no %d: ",i,j);
            scanf("%d", &std[i][j]);

        }
    }
    printf("transpose of the given matrix\n");
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {    
            printf("%d\t", std[i][j]);
            
        }
        printf("\n");
    }
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            t=std[i][j];
            std[i][j]=std[j][i];
            std[j][i]=t;
        }
    }    
    printf("is: \n");
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {    
            printf("%d\t", std[j][i]);
            
        }
        printf("\n");
    }

}