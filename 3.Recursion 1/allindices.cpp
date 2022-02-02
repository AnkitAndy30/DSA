#include<iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]){

 if(size==0)
      return 0;
    int ans=allIndexes(input, size-1, x , output );
    if(input[size-1]==x)
    {
        output[ans]=size-1;
       return ans+1; 
    }
    return ans;
}

/*int ar[10],globe=0,count=0;

int allindices(int arr[],int size,int check){
	if(size==1){
		if(*arr==check){
			ar[globe++] = count;
		}
		return 0;
	}
	if(*arr == check){
		ar[globe++] =  count;
	}
	count++;
	allindices(arr+1,size-1,check);
}*/

int main(){
	int array[10],output[10];
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	cout<<"Enter the elements of array"<<endl;
	for(int i=0; i<size; i++){
		cin>>array[i];
	}
	cout<<"Enter the number you want to find the index for"<<endl;
	int check;
	cin>>check;
    int siz=allIndexes(array,size,check,output);
	cout<<"The indices are ";
	/*for(int j=0; j<globe; j++){
		cout<<ar[j]<<" ";
	}
	if(globe==0){
		cout<<"not present for the given input number"<<endl;
	}*/
	for(int i=0; i<siz; i++){
		cout<<output[i]<<" ";
	}
}
