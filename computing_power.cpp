#include<iostream>
using namespace std;

long long power(long long a, long long b){
	long long result= 1;
	
	while(b>0){
		if(b&1)
          result*= a;
        a*= a;
        b>>= 1;
	}
	return result;
}

int main(){
	long long a, b;
	cout<< "Enter base and exponent: ";
	cin>> a>> b;
	
	cout<< "Result: "<< power(a,b);
	return 0;
}
