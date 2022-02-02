#include<iostream>
using namespace std;

int lastindex(int arr[],int size,int check){
	if(size==0){
		return -1;
	}
	int last_index = lastindex(arr,size-1,check);
	if(arr[size-1]==check){
		last_index = size-1;
	}
	if(last_index==-1){
		return last_index;
	}
	return last_index;
}

int main(){
	int array[10];
	cout<<"Enter size of array"<<endl;
	int size;
	cin>>size;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<size; i++){
		cin>>array[i];
	}
	cout<<"Enter the element you want to find the index for"<<endl;
	int check;
	cin>>check;
	cout<<lastindex(array,size,check)<<endl;
}
