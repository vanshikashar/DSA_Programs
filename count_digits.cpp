#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int n){
	if(n==0)
	return 1;
	return floor(log10(abs(n)))+ 1;
}

int main(){
	int n;
	cout<< "Enter a number: ";
	cin >> n;
	
	cout << "Number of digits: "<< countDigits(n);
	return 0;
}
