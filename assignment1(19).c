#include<stdio.h>
int main()
{
  int a,b,c,sq1,sq2;
  printf("Type three digit number:");
  scanf("%d",&a);
  b=a/100;
  c=a%10;
  sq1=b*b;
  sq2=c*c;
  printf("The first digit square=%d\n",sq1);
  printf("The last digit square=%d\n",sq2);


return 0;
}
