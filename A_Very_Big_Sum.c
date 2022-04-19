#include<stdio.h>
int main()
{
    long int n,i,s=0,a[50];
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%ld",s);
}
