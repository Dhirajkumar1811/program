#include<stdio.h>
int main()
{
    short a;
    int b;
    long c;
    float d;
    double e;
    long double f;
    char g;
    char h[30];
      

    printf("\n\t Enter the value of short: ");
    scanf("%hd",&a);
    printf("\n\t a=%hd",a);

    printf("\n\t Enter the value of interger: ");
    scanf("%d",&b);
    printf("\n\t b=%d",b);

    printf("\n\t Enter the value of long: ");
    scanf("%ld",&c);
    printf("\n\t c=%ld",c);

    printf("\n\t Enter the value of float: ");
    scanf("%f",&d);
    printf("\n\t d=%f",d);

    printf("\n\t Enter the value of double: ");
    scanf("%lf",&e);
    printf("\n\t e=%lf",e);

     printf("\n\t Enter the value of long double: ");
    scanf("%Lf",&f);
    printf("\n\t f=%hd",f);

    printf("\n\t Enter char value: ");
    scanf("%s",&g);
    printf("\n\t g=%hd",g);

    printf("\n\t Enter string: ");
    scanf("%s",&h);
    printf("\n\t h=%s",h);

    printf("\n\t Enter number: ");
    scanf("%d",&b);
    printf("\n\t b=%o",b);

    printf("\n\t Enter number: ");
    scanf("%d",&b);
    printf("\n\t b=%x",b);

     

    return 0;
}
    
