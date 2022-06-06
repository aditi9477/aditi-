#include<stdio.h>
#include<ctype.h>
int main()
{
    char a,result;
    printf("Enter a small character:");
    scanf("%c",&a);
    result=toupper(a);
    printf("result=%c",result);
    return 0;
}
