#include<stdio.h>
int main()
{
   int a,b,c,sum;
   float avg;
   printf("Give Three Number:");
   scanf("%d%d%d",&a,&b,&c);
   sum=a+b+c;
   avg=(float)sum/3;
   printf("The Avg is:%f\n",avg);
   return 0;
}
