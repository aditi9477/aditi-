#include<stdio.h>
int main()
{
  int a,b,c,sum;
  printf("Type Three Digit Number:");
  scanf("%d",&a);
  b=a/100;
  c=a%10;
  sum=b+c;
  printf("The sum is=%d\n",sum);

return 0;
}
