#include <iostream>
#include "functions.h"

using namespace std ;


int main()
{

    bool palin = Ispalindrome("ehdffd");

    cout << "palindrome ? :  " <<  palin << endl;

    cout << "is even ?:  " <<  isEven(4) << endl;

    dec2Bin(10) ;

    return 0 ;
}


