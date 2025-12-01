#include<iostream>

using namespace std;

void Display(int iNum)
{

    static char cCh = 'a';

    int iLimit = 97 + iNum;  // using Ascii value of a 

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