#include<stdio.h>
int main()
{
    int a,b,c;
    system("clear");
    printf("\n\t Enter the value of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("\n\t Before swaping a=%d b=%d c=%d",a,b,c);
    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=b+c;
    printf("\n\t After swaping a=%d b=%d c=%d",a,b,c);
    return 0;
}