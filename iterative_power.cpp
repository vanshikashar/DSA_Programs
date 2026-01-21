#include<iostream>
using namespace std;

long long power(long long a, long long b){
	long long result= 1;
	
	for(long long i=1; i<=b; i++){
		result*= a;
	}
	return result;
}

int main(){
	long long a, b;
	cout<< "Enter base and exponent: ";
	cin>> a >>b;
	
	cout<< "Result: "<< power(a, b);
	return 0;
}
