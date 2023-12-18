#include <iostream>
#include "functions.h"


using namespace std;


bool isEven(int n) { return (n % 2 == 0); } 

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
            
            // system("clear");
    }

    return palin ;
}


void dec2Bin(int n) 
{ 
    // array to store binary number 
    int binNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        cout << binNum[j]; 
} 