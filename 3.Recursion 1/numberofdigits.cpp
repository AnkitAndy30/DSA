#include<iostream>
using namespace std;

int numofdigits(int n){
	if(n<10){
		return 1;
	}
	int out = numofdigits(n/10);
	return ++out;
}

int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int out = numofdigits(n);
	cout<<out;
}
