#include<iostream>
using namespace std;

void permute(int arr[], int l, int r){
	//base case= one permutation ready
	if(l==r){
		for(int i=0; i<=r; i++)
		   cout<< arr[i]<< " ";
        cout<< endl;
        return;
	}
	
	for(int i=l; i<=r; i++){
		//include
		int temp= arr[l];
		arr[l]= arr[i];
		arr[i]= temp;
		
		permute(arr, l+1, r);
		
		//backtrack
		temp= arr[l];
		arr[l]= arr[i];
		arr[i]= temp;
	}
}

int main(){
	int n;
	cout<< "Enter number of elements: ";
	cin>> n;
	
	int arr[n];
	cout<< "Enter elements: ";
	for(int i=0; i<n; i++)
	   cin>> arr[i];
	   
    cout<< "Permutations:\n";
    permute(arr, 0, n-1);
    
    return 0;
}
