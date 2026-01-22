#include<iostream>
using namespace std;

void findTwoOddOccurring(int arr[], int n){
	int xorAll= 0;
	
	//Step 1: XOR all elements
	for(int i=0; i<n; i++){
		xorAll ^= arr[i];
	}
	
	//Step 2: Find rightmost set bit
	int rightMostSetBit= xorAll & (-xorAll);
	
	int x= 0, y= 0;
	
	//Step 3: Divide into two groups
	for(int i=0; i<n; i++){
		if(arr[i]& rightMostSetBit)
		   x^= arr[i];
        else
           y^= arr[i];
	}
	
	cout<< "Two odd occurring numbers are: "<< x<< " and "<< y;
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
	
	findTwoOddOccurring(arr, n);
	return 0;
}
