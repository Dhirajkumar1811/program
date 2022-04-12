#include<stdio.h>
#include<stdio.h>
long double reverse(int n)
{
    long double rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;

}
/*int count()
{
    int n,c;
    c=0;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    return c;
}*/
int read()
{
    int n;
    printf("\n\t Enter the no.: ");
    scanf("%d",&n);
    return n;

}
void display()
{
    int n=read();
    for(int i=1;i<=n;i++)
    {
        long double rev;
        rev=reverse(i);
       // count();
        printf("\n\t %d \t\t  %Lg",i,rev);
    }

}
int main()
{
    display();
    return 0;
}
