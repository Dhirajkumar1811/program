#include<stdio.h>
int main()
{
    int n,digit,sum,x;
    system("clear");
    printf("\n\t Enter n: ");
    scanf("%d",&n);
    sum=0;
    x=n;
    while(x>0)
    {
        digit=x%10;
        sum=sum+(digit*digit*digit);
        x=x/10;
    }

    if(sum==n)
    {
        printf("\n\t Amstrong");
    }
    else
    {
        printf("\n\t Not amstrong");
    }
    return 0;
}