#include<iostream>
using namespace std;

void spiral(int array[][8], int m, int n)
{
	cout<<"Enter elements of 2d array"<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>array[i][j];
		}
	}
	
	//spiral printing
	int i=0, j=0,arrex_n = n, arrex_m = m,a=0,b=0;
	for(int count =0; ; i++,j++){
		a++;
		for(; j<arrex_n; j++){
			cout<<array[i][j]<<" ";
			count++;
			if(count == n*m){
				break;
			}
		}
		if(count == n*m){
			break;
		}
		j--;
		i++;
		arrex_n--;
		for(;i<arrex_m; i++){         // j = 2, i=1
			cout<<array[i][j]<<" ";
			count++;
			if(count == n*m){
				break;
			}
		}
		if(count == n*m){
			break;
		}
		i--;
		j--;
		arrex_m--;
		for(;j>=b; j--){             // i=2, j=1
			cout<<array[i][j]<<" ";
			count++;
			if(count == n*m){
				break;
			}
		}
		if(count == n*m){
			break;
		}
		j++;
		i--;
		for(;i>=a; i--){        // j=0, i=1
			cout<<array[i][j]<<" ";
			count++;
			if(count == n*m){
				break;
			}
		}
		b++;
		if(count == n*m){
			break;
		}
	}
}

int main()
{
	int array[8][8];
	int q;
	cout<<"Enter number of queries"<<endl;
	cin>>q;
	for(int i=0; i<q; i++){
		int m,n;
		cout<<"Enter size of 2d array"<<endl;
		cin>>m>>n;
		spiral(array,m,n);
	}
}
