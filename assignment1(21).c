#include<stdio.h>
int main()
{
  int a,b,remainder;
  float quotient;
  print("enter two numbers:");

  scanf("%d%d",&a,&b);
  quotient=(float)a/b;
  remainder=a-(quotient)*b;
  printf("quotient=%f\n",qoutient);
  while(a>=b)
  {
      a=a-b;
  }
  remainder=a;
  printf("remainder=%d\n",remainder);
  return 0;
}
