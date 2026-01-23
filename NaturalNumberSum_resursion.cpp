#include<iostream>
using namespace std;

int sumNatural(int n){
	if(n==0)
	   return 0;  //base case
	   
    return n+ sumNatural(n-1);
}

int main(){
	int n;
	cout<< "Enter N: ";
	cin>> n;
	
	cout<< "Sum= "<< sumNatural(n);
	return 0;
}
