#include<stdio.h>
#include<stdlib.h>
int main(){
   int x=10;
   int *ptr;
   ptr = &x;
   printf("\n\t value of x = %d",x);
   printf("\n\t value of x = %d",*&x);
   printf("\n\t value of x = %d",*ptr);
   
   printf("\n\t Address of x at = %u",ptr);
   printf("\n\t Address of x at = %u",&x);
}