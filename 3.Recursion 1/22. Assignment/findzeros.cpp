#include<iostream>
using namespace std;

int findzeros(int num){
	if(num==0){
		return 0;
	}
	int zeros = findzeros(num/10);
	if(num%10 == 0){
		zeros = zeros+1;
	}
	return zeros;
}

int main(){
	int number;
	cout<<"Enter a number"<<endl;
	cin>>number;
	cout<<findzeros(number)<<endl;
}
