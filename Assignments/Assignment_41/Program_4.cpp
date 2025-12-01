#include<iostream>

using namespace std;

int CalculateFactorial(int iNum)
{

    static int iFact = 1 , iCnt = 1;

    if ( iCnt <= iNum )
    {

        iFact = iFact * iCnt;

        iCnt++;

        CalculateFactorial(iNum);

    }

    return iFact;

}

int main()
{

    int iNumber = 0 , iRet=0;

    cout<< "Enter the number : \t";
    cin>> iNumber;

    iRet=CalculateFactorial(iNumber);

    cout<< "The factotial of the number is : " << iRet << " \n " ;

    return 0;

}