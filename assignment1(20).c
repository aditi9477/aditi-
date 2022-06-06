#include<stdio.h>
int main()
{
  int a,remainder=0;
  printf("Type two digit numbers:");
  scanf("%d",&a);
  while(a!=0)
  {
      remainder=(remainder*10)+a%10;
      a=a/10;
  }
  printf("The reverse number=%d\n",remainder);

  return 0;
}
