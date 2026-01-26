#include<iostream>
using namespace std;

int josephus(int n, int k){
	//base case
	if(n==1)
	   return 0;
	   
    //recursive relation
    return(josephus(n-1, k)+k)%n;
}

int main(){
	int n, k;
	cout<< "Enter number of people(n): ";
	cin>> n;
	cout<< "Enter step(k): ";
	cin>> k;
	
	//+1 to convert from 0-based to 1-based indexing
	cout<< "Survivor position: "<< josephus(n,k)+1;
	return 0;
}
