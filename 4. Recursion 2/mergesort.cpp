#include<iostream>
using namespace std;

void mergesort(int array[], int startindex, int endindex){
	if(startindex >=  endindex){
		return;
	}
	int midindex = (startindex + endindex)/2;
	mergesort(array,startindex,midindex);
	mergesort(array,midindex+1,endindex);
	int array3[20] , i=0 , k , l, m;
	k = midindex;
	l = startindex;
	m = startindex;
	for(;startindex < k+1 && midindex+1 < endindex+1; i++){
		if(array[startindex] < array[midindex+1]){
			array3[i] = array[startindex++];
		}
		else{
			array3[i] = array[midindex++ +1];
		}
	}
	for(;i <= endindex - m; i++){      // is line mein galti hui thi
		if(startindex < k+1){
			array3[i] = array[startindex++]; 
		}
		else if(midindex+1<endindex+1){
			array3[i] = array[midindex++ +1];
		}
	}
	/*for(int b=0; b <= endindex-m; b++){
		cout<<"Check: ";
		cout<<array3[b]<<" ";
	}
	cout<<endl;*/
	for(int j = 0; j <= endindex - m; j++){             // is line mein galti hui thi
		array[l++] = array3[j];
	}
	return;
}

int main(){
	int array[20];
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	cout<<"Enter elements of array"<<endl;
	for(int i = 0; i < size; i++){
		cin>>array[i];
	}
	int startindex = 0, endindex = size-1;
	mergesort(array,startindex,endindex);
	for(int i = 0; i < size; i++){
		cout<<array[i]<<" ";
	}
}
