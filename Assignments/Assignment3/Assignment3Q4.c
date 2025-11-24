/*Input : a   Output :A
Input : D     Output :d*/
#include<stdio.h>

char DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        char uppercase = CValue - ('a' - 'A');
        printf("%c\n",uppercase);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        char lowercase = CValue + ('a' - 'A');
        printf("%c\n", lowercase);
    }
    else
    {
        printf("unchanged");
    }
}
int main()
{
    char cValue ='\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}