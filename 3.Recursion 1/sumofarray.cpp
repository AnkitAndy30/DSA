#include<iostream>
using namespace std;

int sumofarray(int arr[], int size){
	if(size == 1){
		return arr[0];
	}
	int sum = sumofarray(arr+1,size-1);
	return sum + *(arr);
}

/*int sumofarray(int arr[], int size){
	if(size == 1){
		return arr[0];
	}
	int sum = sumofarray(arr+size-2,size-1);
	return sum + *(arr+size-1);
}*/

int main(){
	int array[10];
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	for(int i=0; i<size; i++){
		cin>>array[i];
	}
	int sum = sumofarray(array,size);
	cout<<"Sum of array is "<<sum<<endl;
}
