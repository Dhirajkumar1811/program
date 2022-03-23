#include<stdio.h>
#include<stdlib.h>
char charcter(char ch);
void ascii(char ch);
int main()
{
    char ch;

    ch=charcter(ch);

    ascii(ch);

    return 0;
}
char charcter(char ch)
{
    //char ch;
    printf("\n\t Enter ch : ");
    scanf("%s",&ch);
    return ch;
}
void ascii(char ch)
{
    printf("\n\t %d",ch);
}