#include<iostream>
using namespace std;

int maxprofit(int array[],int si,int ei){
	if(si > ei){
		return 0;
	}
	int max = maxprofit(array,si+1,ei);
	int temp = 0;
	for(int i = 0; i < ei+1; i++){
		if(array[si] <= array[i]){
			temp++;
		}
	}
	if(max <= array[si]*temp){
		return array[si]*temp;
	}
	return max;
}

int main(){
	int array[100];
	cout<<"Enter the length of array"<<endl;
	int size;
	cin>>size;
	cout<<"Enter elements of array"<<endl;
	for(int i = 0; i < size; i++){
		cin>>array[i];
	}
	int si = 0, ei = size-1;
	cout<<maxprofit(array,si,ei);
}
