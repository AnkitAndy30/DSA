#include<iostream>
using namespace std;

int multiply(int a,int b){
	if(a==0){
		return 0;
	}
	int mul = multiply(a-1,b);
	return mul+b;
}

int main(){
	int x,y;
	cout<<"Enter the numbers you want to multiply"<<endl;
	cin>>x>>y;
	cout<<multiply(x,y)<<endl;
}
