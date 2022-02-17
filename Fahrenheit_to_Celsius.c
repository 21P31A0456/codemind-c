#include<stdio.h>
int main ()
{
    float farenheit,celsius;
    scanf("%f",&farenheit);
    celsius=(farenheit-32)*5/9;
    printf("%.2f",celsius);
    
}