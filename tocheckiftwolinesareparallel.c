//Author : Shashank 
//c program to display if two lines are parellel to each other
#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,m1,m2,s;
    printf("Enter the co-ordinates of the first line:");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    printf("Enter the co-ordinates of the second line:");
    scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
    m1=(y2-y1)/(x2-x1);
    m2=(y4-y3)/(x4-x3);
    s=m1==m2;
    printf("Are the lines parallel? 1 for yes , 0 for no: %d",s);
return 0;
}