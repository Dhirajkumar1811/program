#include<stdio.h>
#include<stdlib.h>
void pyramid(int n)
{
    int i,j;
    for(i=n;i>=1;i--)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf(" * ");
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