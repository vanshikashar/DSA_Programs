#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<< "Enter a number: ";
	cin>> n;
	
	int twosComplement= (~n)+ 1;
	
	cout<< "2's Complement: "<< twosComplement<< endl;
	
	return 0;
}
