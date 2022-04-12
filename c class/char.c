#include<stdio.h>
char ascii(char ch);
int main()
{
    char ch;

    ch=ascii(ch);
    printf("%d",ch);
    return 0;

}
char ascii(char ch)
{
    //char ch;
    printf("Enter charcter : ");
    scanf("%s",&ch);
    return ch;
}