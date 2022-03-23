#include<stdio.h>
int main()
{
    int x;
    //system("clear");
    printf("\n\t Enter the number x:");
    scanf("%d",&x);
    x=x % 2;
    if(x==0)
    {
        printf("\n\t Given number is even");
    }
    else
    {
        printf("\n\t Given number is odd");
    }
    return 0;
}