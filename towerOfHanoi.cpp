#include<iostream>
using namespace std;

void TOH(int n, char sour, char aux, char dest){
	//base case
	if(n==0)
	   return;
	   
    //moving n-1 disks from source to auxiliary
    TOH(n-1, sour, dest, aux);
    
    //moving nth disk from source to destination
    cout<< "Move disk "<< n<< " from "<< sour<< " to "<< dest<< endl;
    
    //moving n-1 disks from auxiliary to destination
    TOH(n-1, aux, sour, dest);
}

int main(){
	int n;
	cout<< "Enter number of disks: ";
	cin>> n;
	
	TOH(n, 'A', 'B', 'C');
	return 0;
}
