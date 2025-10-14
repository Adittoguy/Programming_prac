#include <stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    int iValue1, iValue2, iAns;

    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    iAns = Addition(iValue1, iValue2);
    printf("Addition is : %d",iAns);

    return 0;
} 