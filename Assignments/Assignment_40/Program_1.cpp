#include<iostream>

using namespace std;

void Display( int iNum)
{

    static int iCnt = 1;

    if( iCnt <= iNum )
    {

        cout<< " * \t" ;

        iCnt++;

        Display( iNum );

    }

}

int main()
{

    int iNumber = 0;

    cout<< " Enter the number : \t " ;
    cin>> iNumber ;

    Display( iNumber );

    return 0;

}