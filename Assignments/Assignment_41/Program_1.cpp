#include<iostream>

using namespace std;

void Display(int iNum)
{

    static int iCnt = iNum;

    if ( iCnt >= 1 )
    {

        cout<< iCnt << " \t " << " * " <<" \t " ;
        
        iCnt--;

        Display(iNum);

    }

}

int main()
{

    int iNumber=0;

    cout<< "Enter the number : \t" ;
    cin>> iNumber;

    Display( iNumber );


    return 0;

}