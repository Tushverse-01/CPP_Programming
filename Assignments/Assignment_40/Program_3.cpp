#include<iostream>

using namespace std;

void Display(int iNum)
{

    static int iCnt = iNum;    // using static storage class

    if( iCnt >= 1 )
    {

        cout<< iCnt <<" \t ";

        iCnt--;

        Display(iNum);
    }

}

int main()
{

    int iNumber = 0;

    cout<< "Enter the Number : \t";

    cin>> iNumber;

    Display(iNumber);

    return 0;

}