#include<stdio.h>
int main()
{
    int n,digit;
    system("clear");
    printf("\n\t Enter the integer n: ");
    scanf("%d",&n);
    
    while(n>0)
    {
        digit=n%10;
        printf("\n\t %d ",digit);
        n=n/10;
    }
    
    return 0;
}