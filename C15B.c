#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    printf("%d",(a-'A'+1)%32);
}