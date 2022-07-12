//to find velocity and distance covered by the stone
#include<stdio.h>
#define g 9.8
int main()
{
    int u, t;
    float v, s;
    printf("Give the initial velocity: ");
    scanf("%d", &u);
    t = 1;
    v = u + g*t;
    s = u * t + g * t * t/2;
    printf("\nfinal velocity = %fm/s and distance covered = %fm after 1sec", v, s);
    t++;
    v = u + g*t;
    s = u * t + g * t * t/2;
    printf("\nfinal velocity = %fm/s and distance covered = %fm after 2sec", v, s);
    t++;
    v = u + g*t;
    s = u * t + g * t * t/2;
    printf("\nfinal velocity = %fm/s and distance covered = %fm after 3sec", v, s);
    t++;
    v = u + g*t;
    s = u * t + g * t * t/2;
    printf("\nfinal velocity = %fm/s and distance covered = %fm after 4sec", v, s);
    t++;
    v = u + g*t;
    s = u * t + g * t * t/2;
    printf("\nfinal velocity = %fm/s and distance covered = %fm after 5sec", v, s);
    return 0;
    
}