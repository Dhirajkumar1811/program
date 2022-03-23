#include<stdio.h>
int main()
{
    int n,digit,sum;
    system("clear");
    printf("\n\t Enter n: ");
    scanf("%d",&n);
    sum=0;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("\n\t sum is %d",sum);
    return 0;
}