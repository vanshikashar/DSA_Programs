#include <iostream>
#include <vector>
using namespace std;

int maxPieces(int n, int a, int b, int c, vector<int> &dp){
	//base cases
	if(n==0)
	   return 0;
    if(n<0)
       return -1;
       
    //memoized result
    if(dp[n]!= -2)
       return dp[n];
       
    int resA= maxPieces(n-a, a, b, c, dp);
    int resB= maxPieces(n-b, a, b, c, dp);
    int resC= maxPieces(n-c, a, b, c, dp);
    
    int res= max(resA, max(resB, resC));
    
    if(res== -1)
       dp[n]= -1;
    else
       dp[n]= res+1;
       
    return dp[n];
} 

int main(){
	int n, a, b, c;
	cout<< "Enter n, a, b, c: ";
	cin>> n>> a>> b>> c;
	
	vector<int> dp(n+1, -2);    //-2 means uncomputed
	
	cout<< "Maximum pieces: "<< maxPieces(n, a, b, c, dp);
	return 0;
}
