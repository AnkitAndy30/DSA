#include<iostream>
using namespace std;

int index(int arr[],int size,int ind){
	if(*arr==ind){
		return 0;
	}
	if(size==1){
		return -1;
	}
	int inde = index(arr+1,size-1,ind);
	if(inde == -1){
		return -1;
	}
	return ++inde;
}

int main(){
	int array[20];
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<size; i++){
		cin>>array[i];
	}
	cout<<"Enter the element you want to find the index"<<endl;
	int ind;
	cin>>ind;
	cout<<index(array,size,ind);
}
