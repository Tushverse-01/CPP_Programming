#include<iostream>

using namespace std;

void Display(int iNum)
{

    static char cCh = 'A';

    int iLimit = 65 + iNum;   // using Ascii value of A 

    if( cCh < iLimit )
    {

        cout<< cCh << " \t " ;

        cCh++;

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