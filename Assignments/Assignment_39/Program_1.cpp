#include<iostream>

using namespace std;

void Display()
{

    static int iCnt = 1;    // Used static storage class to preserve value at each itteration

    if( iCnt <= 5 )
    {

        cout<< " * \t" ;

        iCnt++;

        Display();

    }

}

int main()
{

    Display();


    return 0;

}