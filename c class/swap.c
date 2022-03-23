#include<stdio.h>
int main()
{
    int a,b,c;
    system("clear");
    printf("\n\t Enter the value of a And b: ");
    scanf("%d%d",&a,&b);
    printf("\n\t Before swaping a=%d b=%d ",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n\t Before swaping a=%d b=%d",a,b);
    return 0;
}