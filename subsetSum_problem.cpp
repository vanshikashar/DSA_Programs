#include<iostream>
using namespace std;

bool subsetSum(int arr[], int n, int sum){
	//base cases
	if(sum== 0)
	   return true;   //subset found
	   
    if(n==0)
       return false;     //no elements left
       
    //if current element is greater than sum, skip it
    if(arr[n-1]>sum)
       return subsetSum(arr, n-1, sum);
       
    //include or exclude the current element
    return subsetSum(arr, n-1, sum) || subsetSum(arr, n-1, sum-arr[n-1]);
}

int main(){
	int n, sum;
	cout<< "Enter number of elements: ";
	cin>> n;
	
	int arr[n];
	cout<< "Enter elements: ";
	for(int i=0; i<n; i++)
	   cin>> arr[i];
	   
    cout<< "Enter target sum: ";
    cin>> sum;
    
    if(subsetSum(arr, n, sum))\
       cout<< "YES, subset exists";
    else
       cout<< "NO, subset does not exist";
       
    return 0;
}
