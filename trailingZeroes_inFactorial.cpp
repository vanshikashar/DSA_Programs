#include<iostream>
using namespace std;

int trailingZeroes(int n){
	int count= 0;
	while(n>0){
		n= n/5;
		count+= n;
	}
	return count;
}

int main(){
	int n;
	cout<< "Enter a number: ";
	cin>> n;
	
	cout<< "Trailing zeroes in "<< n<< "!= "<< trailingZeroes(n);
	return 0;
}
