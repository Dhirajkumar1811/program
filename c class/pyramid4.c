#include<stdio.h>
#include<stdlib.h>
void pyramid(int n)
{
    int i,j,k=0;
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("%d",i);
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