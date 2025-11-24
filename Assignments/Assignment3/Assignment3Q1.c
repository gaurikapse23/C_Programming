/*Input : 7
Output : 2 4 6 8 10 12 14
*/

#include<stdio.h>
void PrintEven(int iNo)
{
    int iRet = 0;
    if(iNo <=0)
    {

        return;
    }
    for(iRet = 2; iRet <= iNo*2; iRet = iRet + 2)
    {
        printf("%d",iRet);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}