#include<stdio.h>
int main ()
{
int n,diagonal_of_polygon;
scanf("%d",&n);
diagonal_of_polygon=n*(n-3)/2;
printf("%d",diagonal_of_polygon);
}