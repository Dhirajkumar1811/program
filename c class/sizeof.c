#include<stdio.h>
int main()
{
    system("clear");
    printf("\n\t SHORT=%ld bytes",sizeof (short));
    printf("\n\t INT=%ld bytes",sizeof (int));
    printf("\n\t LONG=%ld bytes",sizeof (long));
    printf("\n\t FLOAT=%ld bytes",sizeof (float));
    printf("\n\t DOUBLE=%ld bytes",sizeof (double));
    printf("\n\t LONG DOUBLE=%ld bytes",sizeof (long double));
    printf("\n\t CHAR=%ld byte",sizeof (char));
    printf("\n\t VOID=%ld byte",sizeof (void));
   // printf("\n\t INT=%ld bytes",sizeof (int));

   //int x;
   //printf("\n\t x=%d bytes",sizeof(x));

   return 0;
}