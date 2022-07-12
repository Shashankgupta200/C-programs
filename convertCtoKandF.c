//WAP to convert C To K and F

#include <stdio.h>
#define nf 1.8
#define f 237.15
void main()
{
	float c;
    printf("enter the value of c: ");
    scanf("%f", &c);
	printf("\n20 f in c=%f",((nf*c)+32));
	printf("\t20 f in k=%f",(((nf*c)+32)+f));
	c=c+20;
	printf("\n40 f in c=%f",(nf*c)+32);
	printf("\t40 f in k=%f",(((nf*c)+32)+f));
	c=c+20;
	printf("\n60 f in c=%f",(nf*c)+32);
	printf("\t60 f in k=%f",(((nf*c)+3)+f));
	c=c+20;
	printf("\n80 f in c=%f",(nf*c)+32);
	printf("\t80 f in k=%f",(((nf*c)+32)+f));
	c=c+20;
	printf("\n100 f in c=%f",(nf*c)+32);
	printf("\t100 f in k=%f",(((nf*c)+32)+f));
	c=c+20;
}