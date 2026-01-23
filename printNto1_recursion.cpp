#include<iostream>
using namespace std;

void printNto1(int n){
	if(n==0)
	   return;    //base case
	   
    cout<< n<< " "; //work
    printNto1(n-1); //tail resursive call
}

int main(){
	int n;
	cout<< "Enter N: ";
	cin>> n;
	
	printNto1(n);
	return 0;
}
