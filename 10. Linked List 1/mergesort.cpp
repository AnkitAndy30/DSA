#include<iostream>
using namespace std;

void mergesort(int arr[],int si,int ei){
	if(si >= ei){
		return;
	}
	int c = (si+ei)/2;
	mergesort(arr,si,c);					//.4,5	4,4 r       
	mergesort(arr,c+1,ei);          // 4,6   	           5,5.  6,6
	
	int temp[9];                     // yahan par pehle maine size ei-si+1 kar ke find kiya tha jo ki aisi galti mere jaisa chutiya hi kar sakta hai kyunki index could be greater than ei-si+1 
	int tem = c+1;                  // aur jab array ki size hi index se choti hogi toh blunder yaa disaster ho jaayega
	int d = si;
	int k = si;
	while(d <= c && tem <= ei){
		if(arr[d] > arr[tem]){
			temp[k++] = arr[tem++];
		}
		else if(arr[d] < arr[tem]){           // 2	3	6	8		1	4	5			1	2	3	4	5	6	
			temp[k++] = arr[d++];
		}
	}
	
	if(d < c+1){
		for(;k <= ei;k++){
			temp[k] = arr[d++];
		}
	}
	else if(tem <= ei){
		for(;k <= ei;k++){
			temp[k] = arr[tem++];
		}
	}

	for(int i = si; i <= ei; i++){
		arr[i] = temp[i];
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int a[9] = {2,6,3,8,5,1,4,9,7};
	mergesort(a,0,8);
	for(int i = 0; i < 9; i++){
		cout<<a[i]<<" ";
	}
}
