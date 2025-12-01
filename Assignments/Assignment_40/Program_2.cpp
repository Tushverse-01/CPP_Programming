#include<iostream>

using namespace std;

void Display(int iNum)
{

    static int iCnt = 1;    // using Static storage class

    if( iCnt <= iNum )
    {

        cout<< iCnt <<" \t ";

        iCnt++;

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