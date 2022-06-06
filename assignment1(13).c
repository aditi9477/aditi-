#include<stdio.h>
#include<ctype.h>
int main()
{
    char c,result;
    printf("Enter any capital character:");
    scanf("%c",&c);
    result=tolower(c);
    printf("result=%c",result);
    return 0;
}
