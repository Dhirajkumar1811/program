#include<stdio.h>
#include<stdlib.h>
void pyramid(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf(" 1 ");
        }
        }
}
int read()
{
   int n;
   printf("\n\t Enter the No.: ");
   scanf("%d",&n);
   return n;
}
int main()
{
    int n;
    n=read();
    pyramid(n);
}