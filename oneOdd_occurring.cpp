#include<iostream>
using namespace std;

int findOddOccurring(int arr[], int n){
	int res= 0;
	
	for(int i=0; i<n; i++){
		res= res^arr[i];
	}
	return res;
}

int main(){
	int n;
	cout<< "Enter number of elements: ";
	cin>> n;
	
	int arr[n];
	cout<< "Enter elements: ";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	cout<< "Odd occurring element: "<< findOddOccurring(arr, n);
	return 0;
}
