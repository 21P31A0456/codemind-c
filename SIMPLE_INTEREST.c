#include<stdio.h>
int main ()
{
    int P,T,R,Simpleinterest;
    scanf("%d%d%d",&P,&T,&R);
    Simpleinterest=P*T*R/100;
    printf("%.2d",Simpleinterest);
}