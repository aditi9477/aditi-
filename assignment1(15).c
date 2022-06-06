#include<stdio.h>
int main()
{
    char a;
    printf("Enter the uppercase character:");
    scanf("%c",&a);
    a=a+32;
    printf("Lowercase character is %c",a);
    return 0;
}
