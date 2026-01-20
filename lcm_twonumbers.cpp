#include<iostream>
using namespace std;

int gcd(int a, int b){
	while(b!=0){
		int rem= a%b;
		a= b;
		b= rem;
	}
	return a;
}

long long lcm(int a, int b){
	return (long long)a* b/gcd(a,b);
}

int main(){
	int a, b;
	cout<< "Enter two numbers: ";
	cin>> a>> b;
	
	cout<< "LCM= "<< lcm(a,b);
	return 0;
}
