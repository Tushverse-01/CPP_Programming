#include<iostream>

using namespace std;

void Display()
{

    static char cCh = 'A';

    if ( cCh <= 'F')
    {

        cout<< cCh << " \t ";
        
        cCh++;

        Display();

    }

}

int main()
{

    Display();

    return 0;

}