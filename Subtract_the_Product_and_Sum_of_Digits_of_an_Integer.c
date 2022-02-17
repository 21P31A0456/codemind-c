#include<stdio.h>
int main ()
{
    int n,sum=0,product=1,reminder,m;
    scanf("%d",&n);
    while(n!=0)
    {
        reminder=n%10;
        sum=sum+reminder;
        product=product*reminder;
        n=n/10;
        
    }
    m=product-sum;
    printf("%d",m);
}