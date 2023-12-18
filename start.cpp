#include <iostream>
using namespace std ;

bool Ispalindrome(string word);


int main()
{

    bool palin = Ispalindrome("teretet");

    cout << "palindrome ?  :  " <<  palin << endl;

    return 0 ;
}



bool Ispalindrome(string word)
{
    int i, j, n ;
    n = word.length();
    
    bool palin ;
   
        for(i = 0; i < (n/2); i++)
        {
            
            if ( word[i] != word[n-(i+1)])
            {
                cout << "Not a palindrome: " << endl;

                palin = false ;

                break;

            }

            if ( (i == (n/2)-1) && (word[i] == word[n-(i+1)]) )
            {
                cout << "it's a palindrome: " << endl;

                palin = true ; 
            }
            
    }

    return palin ;
}