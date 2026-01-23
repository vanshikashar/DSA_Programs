#include<iostream>
using namespace std;

void print1toN(int n){
	if(n==0)
	   return;  //base case
	
	print1toN(n-1);  //recursive call
	cout<< n<< " ";  //print while returning
}

int main(){
	int n;
	cout<< "Enter N: ";
	cin>> n;
	
	print1toN(n);
	return 0;
}
