#include<iostream>

using namespace std;

void Display()
{

    static char cCh = 'a';

    if( cCh <= 'f' )
    {

        cout<< cCh << " \t " ;

        cCh++;

        Display();
    }

}

int main()
{

    Display();

    return 0;
    
}