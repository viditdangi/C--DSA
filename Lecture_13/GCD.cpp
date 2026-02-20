#include <iostream>
using namespace std;

int gcd(int a,int b){
	if (a==0){
		return b;
	}
	return gcd(b%a,a);
}
int lcm(int a,int b){
	return(a*b)/(gcd(a,b));
}
int main(){
	int a;
	cin>>a;
	int b;
	cin>>b;
	cout<<lcm(a,b);
	 
}