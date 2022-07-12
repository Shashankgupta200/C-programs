//WAP for array of structures 
#include<stdio.h>
#include<string.h>

struct book {
char name[20] ;
float price ;
int pages ;
};
int main()
{
struct book *ptr, b[5];
int i, n;
ptr = b;
printf("Enter the number:");
scanf("%d", &n);
for (i=0; i<n; i++) 
{
printf ( "\nEnter next book name, price and pages ");
scanf ( "%s %f %d", (ptr+i)->name, &(ptr+i)->price, &(ptr+i)->pages );
}
for ( i = 0 ; i < n ; i++ )
printf ( "\n%s %f %d", (ptr+i)->name, (ptr+i)->price, (ptr+i)->pages ) ;
}