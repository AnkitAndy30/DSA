#include<iostream>
using namespace std;

int sumofdig(int num){
	if(num<10){
		return num;
	}
	int sum = sumofdig(num/10);
	num = num%10;
	return sum+num;
}

int main(){
	int number;
	cout<<"Enter an integer you want the sum of"<<endl;
	cin>>number;
	cout<<sumofdig(number)<<endl;
}
