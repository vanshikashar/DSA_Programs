#include<iostream>
using namespace std;

void printDivisors(int n){
	for(int i= 1; i*i<=n; i++){
		if(n%i== 0){
			cout<< i<< " ";
			if(i!= n/i)
			   cout<< n/i<< " ";
		}
	}
}

int main(){
	int n;
	cout<< "Enter a number: ";
	cin>> n;
	
	cout<< "Divisors are: ";
	printDivisors(n);
	
	return 0;
}
