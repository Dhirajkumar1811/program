#include<stdio.h>
int main()
{
    int a,b;
    system("clear");
    printf("\n\t Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    printf("\n\t Before swaping a=%d b=%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n\t After swaping a=%d b=%d",a,b);
    return 0;
}