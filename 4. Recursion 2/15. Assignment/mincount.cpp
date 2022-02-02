#include<iostream>
using namespace std;

int mincount(int n,int count,int temp){
	if(n == 1){
		return 1;
	}
	if(n == 0){
		return 0;
	}
	for(int i = 1; i <= n; i++){
		if(n > i*i){
			int count = 1 + mincount(n - i*i,count,temp);
			if(count > temp){
				count = temp;
			}
		}
		temp = count;
	}
	return count;
}

int main(){
	int number;
	cout<<"Enter a number"<<endl;
	cin>>number;
	int count = 0;
	int temp = 0;
	cout<<mincount(number,count,temp);
}
