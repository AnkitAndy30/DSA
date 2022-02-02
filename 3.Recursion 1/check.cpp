#include<iostream>
using namespace std;

bool checknumber(int arr[],int size,int check){
	if(size==0){
		return false;
	}
	bool checknum = checknumber(arr+1,size-1,check);
	if(*arr==check){
		return true;
	}
	return checknum;
}
/*
bool checknumber(int arr[],int size,int check){
	if(*arr==check){
		return true;
	}
	
	if(size==1){
		return false;
	}
	bool checknum = checknumber(arr+1,size-1,check);
	return checknum;
}*/

int main(){
	int array[15];
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<size; i++){
		cin>>array[i];
	}
	cout<<"Enter the number you want to find"<<endl;
	int num;
	cin>>num;
	cout<<checknumber(array,size,num);
}
