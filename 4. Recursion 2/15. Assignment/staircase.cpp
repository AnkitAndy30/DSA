#include<iostream>
using namespace std;

int stair(int stair_n){
	if(stair_n == 1){
		return 1;
	}
	else if(stair_n == 2){
		return 2;
	}
	else if(stair_n == 3){
		return 4;
	}
	else if(stair_n <= 0){
		return 0;
	}
	int count1 = stair(stair_n - 1);
	int count2 = stair(stair_n - 2);
	int count3 = stair(stair_n - 3);
	return (count1 + count2 + count3);
}

int main(){
	int stair_n;
	cout<<"Enter the number of stairs"<<endl;
	cin>>stair_n;
	cout<<stair(stair_n);
}
