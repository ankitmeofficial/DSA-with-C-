#include <iostream>
#include <string>
using namespace std ;

        bool isPalindrome(string s) {
            int start=0;
            int len=s.length();
            int end = len-1;
            if(len<=1) return true;
            while (start < end ){

// isalnum() returns true if the character is a letter (A-Z, a-z) or digit (0-9).
// !isalnum() will be true if it's a space, punctuation, or any special character.
// Actually, isalnum() in C++ does not check only numbers—it checks for both alphabetic characters (A-Z, a-z) and numeric digits (0-9)

            while (start <end && !isalnum(s[start])) start++;
            while (start <end && !isalnum(s[end])) end--;
            if (start<end && tolower(s[start])!=tolower(s[end])) return false ;
            start ++;
            end --;
            }
            return true ;
            
        }
   int main (){
    // string check_string="A man, a plan, a canal: Panama";
    // string check_string="race a car";
    string check_string=" ";

    bool result =isPalindrome(check_string);
    if ( result){
        cout<< "A palindrome ";
    }
    else{
        cout << "not palindrome";
    }
    return 0;
   }