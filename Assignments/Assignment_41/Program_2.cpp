#include<iostream>

using namespace std;

int SumOfDigits(int iNum)
{
    static int iSum = 0 , iDigit = 0;

    if ( iNum != 0 )
    {

        iDigit = iNum % 10;
        iSum = iSum + iDigit;
        iNum = iNum / 10;

        SumOfDigits(iNum);

    }

    return iSum;

}

int main()
{

    int iNumber = 0 , iRet = 0;

    cout<< "Enter the number to get the sum of digit's : \t";
    cin>> iNumber;

    iRet=SumOfDigits(iNumber);

    cout<< " The sum of the digit's is : " << iRet << " \n ";

    return 0;

}