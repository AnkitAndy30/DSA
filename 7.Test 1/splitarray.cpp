#include<iostream>
using namespace std;

bool splitarray(int array[],int si,int ei){
	if(si > ei){
		return false;
	}
	splitarray(array,si+1,ei);
	for(int i = 0; i < ei+1; i++){
		for(int j = 0; j < ei+1; j++){
				if((3 + array[i]) == (5 + array[j])){
					//cout<<"Check";
					return true;
				}
			}
		}
	return false;
}

int main(){
	int array[100];
	cout<<"Enter the size of array"<<endl;
	int size;
	cin>>size;
	cout<<"Enter the elements of array"<<endl;
	for(int i = 0; i < size; i++){
		cin>>array[i];
	}
	int si = 0, ei = size-1;
	cout<<splitarray(array,si,ei)<<endl;
}
