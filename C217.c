#include<stdio.h>
int main()
{
    char l;
    int n;
    scanf("%c%d",&l,&n);
    if (l%2==n%2)
    {
        printf("black");
    }
    else
    {
        printf("white");
    }
}