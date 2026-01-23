#include<iostream>
using namespace std;

int sumOfDigits(int n){
	// base case
	if(n==0)
	   return 0;
	   
    //recursive relation
    return (n%10)+ sumOfDigits(n/10);
}

int main(){
	int n; 
	cout<< "Enter a number: ";
	cin>> n;
	
	cout<< "Sum of Digits = "<< sumOfDigits(n);
	return 0;
}
