#include<iostream>
using namespace std;

int main(){
	int n, k;
	
	cout<< "Enter number: ";
	cin>> n;
	
	cout<< "Enter bit position (0-based index): ";
	cin>> k;
	
	if(n&(1<<k))
	   cout<< "k-th bit is SET";
    else
       cout<< "k-th bit is NOT SET";
       
    return 0;
}
