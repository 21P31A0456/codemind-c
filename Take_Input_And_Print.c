#include<stdio.h>
int main()
{
    char name[1000];
    scanf("%[^
]",name);
    printf("%s",name);
    return 0;
}