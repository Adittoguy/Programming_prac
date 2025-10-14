# include <stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    int iValue1=12, iValue2=13, iAns=0;

    iAns = Addition(iValue1, iValue2);

    printf("Addition is : %d",iAns);

    return 0;
}