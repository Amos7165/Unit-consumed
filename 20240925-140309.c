#include<stdio.h>
#include<math.h>
int main(){

    float p,r,t,si;
    printf("enter principle /n");
    scanf("f",p);
    printf(" enter rate value:");
    scanf("%",r);
    printf(" enter time in years:");
    scanf("%",&t);
    si=(p*r*t)/100;
    printf("si=%f",si);
    return 0;
    }
    