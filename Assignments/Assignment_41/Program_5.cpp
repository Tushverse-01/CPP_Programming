#include<iostream>

using namespace std;

int CalculatePrOfDig(int iNum)
{
    static int iProduct = 1 , iDigit = 0;

    if ( iNum != 0 )
    {

        iDigit = iNum % 10;
        iProduct = iProduct * iDigit;
        iNum = iNum / 10;

        CalculatePrOfDig(iNum);

    }

    return iProduct;

}

int main()
{

    int iNumber = 0 , iRet=0;

    cout<< "Enter the number to get the product of digit's :\t" ;
    cin>> iNumber;

    iRet = CalculatePrOfDig( iNumber );

    cout<< " The product of digit's of the number is : " << iRet << " \n ";

    return 0;

}