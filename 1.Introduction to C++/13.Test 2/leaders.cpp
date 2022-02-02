#include<iostream>
#include<climits>
using namespace std;

void leaders(int str[],int s){
	//taking input
	cout<<"Enter the elements of string"<<endl;
	for(int i=0; i<s; i++){
		cin>>str[i];
	}
	
	int count = 0;
	for(int i=0; i<s; i++){
		bool check = true;
		for(int j=i+1; j<s; j++){
			if(str[i] < str[j]){
				check = false;
				break;
			}
		}
		if(check){
			str[count++] = str[i];
		}
	}
	/*if(str[s-1]<0){
		str[count++] = str[s-1];
	}*/
	str[count] = INT_MAX;
}

int main(){
	int str[20];
	cout<<"Enter size of array"<<endl;
	int size;
	cin>>size;
	leaders(str,size);
	for(int i=0; str[i] != INT_MAX; i++){
		cout<<str[i]<<" ";
	}
}
