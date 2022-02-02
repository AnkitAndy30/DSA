#include<iostream>
using namespace std;

void print2Darray(int str[][8], int m, int n){
	//taking input
	cout<<"Enter the elements of 2d array"<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>str[i][j];
		}
	}
	
	//print 2d array
	for(int i=0; i<m; i++){
		for(int j=i; j<n; j++){
			for(int k=0; k<n; k++){
				cout<<str[i][k]<<" ";
			}
			cout<<endl;
		}
	}
}

int main(){
	int str[20][8];
	int m,n;
	cout<<"Enter number of rows and columns"<<endl;
	cin>>m>>n;
	print2Darray(str,m,n);
}
