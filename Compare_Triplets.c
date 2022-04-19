#include<stdio.h>
int main()
{
    int n=3,i,a[50],b[50],alice=0,bob=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        alice++;
        else if(a[i]<b[i])
        bob++;
    }
    printf("%d %d",alice,bob);
}
