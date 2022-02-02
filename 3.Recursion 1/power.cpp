#include<iostream>
using namespace std;

int power(int x, int n){           // 3) n ke liye bata dunga
	if(n==0){
		return 1;
	}
	int output = power(x,n-1);  // 1) output mera n-1 ke liye mil jaaye...
	return x*output;           //  2) ... toh mai...
}

int main(){
	int x,n;
	cout<<"Enter the number and the exponent"<<endl;
	cin>>x>>n;
	int out = power(x,n);
	cout<<"Output is: "<<out<<endl;
}
