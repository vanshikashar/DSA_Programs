#include<iostream>
using namespace std;

bool isPalindrome(string &s, int left, int right){
	//base case: crossed or single character
	if(left>= right)
	   return true;
	   
    //if mismatched found
    if(s[left]!= s[right])
       return false;
       
    //recursive call
    return isPalindrome(s,left+1, right-1);
}

int main(){
	string s;
	cout<< "Enter string: ";
	cin>> s;
	
	if(isPalindrome(s, 0, s.length()-1))
	   cout<< "Palindrome";
    else
       cout<< "Not a Palindrome.";
       
    return 0;
}
