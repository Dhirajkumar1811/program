#include<stdio.h>
int main()
{
    int n,digit,count;
    system("clear");
    printf("\n\t Enter n: ");
    scanf("%d",&n);
    count=0;
    while(n>0)
    {
        digit=n%10;
        count=count+1;
        n=n/10;
    }
    printf("\n\t count is %d",count);
    return 0;
}