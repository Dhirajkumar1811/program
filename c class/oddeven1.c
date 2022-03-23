#include<stdio.h>
int main()
{
    int x;
    system("clear");
    printf("\n\t Enter the number x: ");
    scanf("%d",&x);
    x=x&1;
    if(x==0)
    {
        printf("\n\t Even");
    }

    else
    {
        printf("\n\t Odd");
    }
    return 0;
}