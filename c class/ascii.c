#include<stdio.h>
char Ascii(char ch)
{
   printf("\n\t Enter the character :");
   scanf("%s",&ch); 
   return ch;
}
int main()
{
    char ch;
    ch=Ascii(ch);
    printf("%d",ch);
    return 0;
}