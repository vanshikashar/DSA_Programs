#include<iostream>
using namespace std;

void primeFactors(int n){
	if (n<=1)
	   return;
	   
    //COunt factor 2
    while(n%2== 0){
    	cout<< 2<< " ";
    	n/=2;
	}
	
	//check odd factors
	for(int i= 3; i*i<= n; i+=2){
		while(n%i== 0){
			cout<< i<< " ";
			n/=i;
		}
	}
	
	//remaining prime
	if(n>1)
      cout<< n;
}

int main(){
	int n;
	cout<< "Enter a number: ";
	cin>> n;
	
	cout<< "Prime factors: ";
	primeFactors(n);
	
	return 0;
}
