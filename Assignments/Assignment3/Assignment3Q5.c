/*Input : E  Output : True
Input : d    Output : False*/
#include<stdio.h>
typedef int BOOL;
BOOL ChkVowel(char cValue)
{
    if(cValue =='a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A'|| cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return 1;

    }
    else
    {
        return 0;
    }
}
int main()
{
    char cValue ='\0';
    BOOL bRet = 0;

    printf("Enter character\n");

    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == 1)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}