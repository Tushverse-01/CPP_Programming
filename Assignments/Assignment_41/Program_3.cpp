#include<iostream>

using namespace std;

int CountCharacters( char *Brr )
{
    static int iCount = 0 , iCnt = 0;

    if ( Brr[iCnt] != '\0' )
    {

        iCount++;
        iCnt++;
        CountCharacters( Brr );

    }

    return iCount;

}

int main()
{
    int iRet = 0;

    char Arr[20];

    cout<< "Enter the string to get the count of the letters in it : \n";
    cin>> Arr;

    iRet = CountCharacters(Arr);

    cout<< "There are " << iRet <<" characters avaliable in the string. ";

    return 0;

}