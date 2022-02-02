#include<iostream>
using namespace std;

/*int print(int n){
	if(n==1){
		return 1;
	}
	int out = print(n-1);
	cout<<out<<" ";
	return out+1;
}*/

void print(int n){
	if(n==1){
		cout<<n<<" ";
		return;
	}
	print(n-1);
	cout<<n<<" ";
}

int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	print(n);
}
