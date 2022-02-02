 #include<iostream>
using namespace std;

//my code
/*int partition(int array[], int si, int ei){
	int count = 0;
	for(int i = si + 1; i < ei + 1; i++){
		if(array[si] >= array[i]){          //when I put >= here--- otherwise--
			count++;
		}
	}
	int temp = array[si];
	array[si] = array[count + si];
	array[count + si] = temp;
	for(int i = si, j = ei; i < si + count && j > si + count;){
		if(array[i] < array[si + count]){
			i++;
		}
		else if(array[j] > array[si + count]){
			j--;
		}
		else{
			int temp1 = array[i];
			array[i] = array[j];
			array[j] = temp1;
		}
		if(array[i] > array[si + count]){     // ---then this is working --otherwise this one is mine not perfectly working !!
			int temp1 = array[i];
			array[i] = array[j];
			array[j] = temp1;
			j--;
		}
		else{
			i++;
		}
	}
	return (si + count);
}*/

int partition(int array[], int si, int ei){
	int count = 0;
	for(int i = si + 1; i < ei + 1; i++){
		if(array[si] >= array[i]){
			count++;
		}
	}
	int temp = array[si];
	array[si] = array[count + si];
	array[count + si] = temp;
	for(int i = si, j = ei; i < si + count && j > si + count;){
		if(array[i] <= array[si + count]){
			i++;
		}
		else if(array[j] > array[si + count]){
			j--;
		}
		else{
			int temp1 = array[i];
			array[i] = array[j];
			array[j] = temp1;
		}
	}
	return (si + count);
}

void quicksort(int array[], int si, int ei){
	if(si >= ei){
		return;
	}
	int c = partition(array,si,ei);
	quicksort(array,si,c-1);
	quicksort(array,c+1,ei);
	return;
}

int main(){
	int array[200];
	int size;
	cout<<"Enter the the size of array"<<endl;
	cin>>size;
	cout<<"Enter the elements of array"<<endl;
	for(int i = 0; i < size; i++){
		cin>>array[i];
	}
	int si = 0;
	int ei = size - 1;
	quicksort(array, si, ei);
	for(int i = 0; i < size; i++){
		cout<<array[i]<<" ";
	}
}
