#include<stdio.h>
int main()
{
    int n,temp,r=0,d,k;
    scanf("%d",&n);
    temp=n*n;
    while(n)
    {
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    k=r*r;
    r=0;
    while(k)
    {
        d=k%10;
        r=(r*10)+d;
        k=k/10;
    }
    if(temp==r)
    {
        printf("True");
        return 0;
    }
    else
    {
        printf("False");
    }
}


