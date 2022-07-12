#include<stdio.h>
int main()
{
    int po,c,C,D,U,Z,V;
    printf("\nPress 1: For Lens");
    printf("\npress 2: For mirror");
    printf("\n1/2: ");
    scanf("%d",&c);
    if(c==1)
    {
        printf("\nIt is a lens ");
        printf("\nPress 1: If it is a Convex lens");
        printf("\nPress 2: If it is a Concave lens");
        printf("\n1/2: ");
        scanf("%d",&C);
        if(C==1)
        {
            printf("It is a convex lens");
            printf("\nPress 1: If object is at infinity ");
            printf("\nPress 2: If object is beyond center of curvature C1");
            printf("\nPress 3: If object is at center of curvature C1");
            printf("\nPress 4: If object is between F1 and C1 ");
            printf("\nPress 5: If object is at focus F1");
            printf("\nPress 6: If object is focus F1 and lens");
            printf("\nEnter he value:");
            scanf("%d",&U);
            if(U==1)
            {
                printf("\nPosition of object is at infinity");
                printf("\nPosition of image is at focus F2 ");
                printf("\nSize of image is highly diminished");
                printf("\nNature of image is Real and inverted");

            }
            else if(U==2)
            {
                printf("\nPosition of object is beyond center of curvature C1");
                printf("\nPosition of image is between focus F2 and Center of curvature C2");
                printf("\nSize of image is diminished");
                printf("\nNature of image is Real and inverted");

            }
            else if(U==3)
            {
                printf("\nPosition of object is at center of curvature C1");
                printf("\nPosition of image is at Center of curvature C2");
                printf("\nSize of image is same");
                printf("\nNature of image is Real and inverted");

            }
            else if(U==4)
            {
                printf("\nPosition of object is between Focus F1 and center of curvature C1");
                printf("\nPosition of image is beyond Center of curvature C2");
                printf("\nSize of image is magnified");
                printf("\nNature of image is Real and inverted");

            }
            else if(U==5)
            {
                printf("\nPosition of object is at Focus F1");
                printf("\nPosition of image is at infinity");
                printf("\nSize of image is highly magnified");
                printf("\nNature of image is Real and inverted");

            }
            else if(U==6)
            {
                printf("\nPosition of object is Focus F1 and lens");
                printf("\nPosition of image is at same side of the object");
                printf("\nSize of image is magnified");
                printf("\nNature of image is Real and erect");
            }
            else
            printf("\nInvlaid entry");
        }
        else if(C==2)
        {
            printf("\nIt is a concave lens");
            printf("\nPress 1: If position of object is at infinity");
            printf("\nPress 2: If position of object is at distance D from the optical center");
            printf("\nEnter the value: ");
            scanf("%d",&D);
            if(D==1)
            {
                printf("\nObject is at infinity");
                printf("\nImage formed at Focus F1");
                printf("\nImage will be highly diminished");
                printf("Image formed will be virtual and erect");                
            }
            else if(D==2)
            {
                printf("\nObject is at distance D from the optical center");
                printf("\nImage will be formed at the same side of the object");
                printf("\nImage will be diminished");
                printf("\nImage will be virtual and erect");
            }
            else
            printf("Invalid entry");
        }
        else
        printf("invalid entry");

    }
    else if(c==2)
    {
        printf("\nIt is a mirror");
        printf("\nPress 1: If it is a Convex mirror");
        printf("\nPress 2: If it is a Concave mirror");
        printf("\nEnter the value 1/2: ");
        scanf("%d",&Z);
        if(Z==1)
        {
            printf("It is a convex mirror");
            printf("\nPress 1: If object is at infinity");
            printf("\nPress 2: If object is at distance d from pole");
            printf("\nEnter the value : ");
            scanf("%d",&V);
            if(V==1)
            {
                printf("\nObject is at infinity");
                printf("\nImage of object is at behind the mirror at focus F");
                printf("\nImage will be highly diminished");
                printf("\nImage will be virtual and erect");               
            }
            else if(V==2)
            {
                printf("\nObject is at distance d from the pole");
                printf("\nImage will be formed between pole P and Focus F behind the mirror");
                printf("\nImage will be diminished");
                printf("\nImage will be virtual and erect");
            }
            else
            printf("Invalid entry");
        }
        else if(Z==2)
        {
            printf("\nIt is a concave mirror");
            printf("\nPress 1: If object is at infinity ");
            printf("\nPress 2: If object is beyond center of curvature ");
            printf("\nPress 3: If object is at center of curvature ");
            printf("\nPress 4: If object is between F and C ");
            printf("\nPress 5: If object is at focus F ");
            printf("\nEnter the value: ");
            scanf("%d", &po);
            if(po==1)
            {
                printf("\nPosition of object is at infinity");
                printf("\nPosition of image is at focus F ");
                printf("\nSize of image is highly diminished");
            }
            else if(po==2)
            {
                printf("\nPosition of object is beyond the center of curvature");
                printf("\nPosition of image is between F and C ");
                printf("\nSize of image is diminished");
            }
            else if(po==3)
            {
                printf("\nPosition of object is at center of curvature");
                printf("\nPosition of image is at C ");
                printf("\nSize of image is same");
            }
            else if(po==4)
            {
                printf("\nPosition of object is beyond the center of curvature");
                printf("\nPosition of image is between F and C ");
                printf("\nSize of image is diminished");
            }
            else if(po==5)
            {
                printf("\nPosition of object is at focus F");
                printf("\nPosition of image is at infinity");
                printf("\nSize of image is highly enlarged");
            }
            else            
                printf("\ninvalid entry");           
            
        }
        else
            printf("Invalid entry");     


    }
    else
        printf("Invalid entry");  

    
    return 0;
}