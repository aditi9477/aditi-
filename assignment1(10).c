#include<stdio.h>
int main()
{
   int a,b;
   int quotient,remainder;
   printf("Enter the value of a and b:");
   scanf("%d%d",&a,&b);
   quotient=a/b;
   printf("%d=quotient\n",quotient);
   remainder=a%b;
   printf("%d=remainder",remainder);
   return 0;
}
