#include<stdio.h>
int main()
{
   int a,b,temp;
   printf("Enter the value of a and b:");
   scanf("%d%d",&a,&b);
   printf("before swapping a=%d\n b=%d\n",a,b);
   temp=a;
   a=b;
   b=temp;
   printf("after swapping a=%d\n b=%d\n",a,b);
   return 0;
}
