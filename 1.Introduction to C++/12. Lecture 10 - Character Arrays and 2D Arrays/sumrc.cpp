#include<iostream>
using namespace std;

void print(int array[][8], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
}

void maxsumrowcol(int array[][8], int m, int n)
{
	int sum =0;
	int sumr=0,capturer=0,sumc=0,capturec=0;
	//taking input from the user
	cout<<"Enter elements of 2d array"<<endl;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>array[i][j];
		}
	}
	
	//finding maximum sum in row
	
	for(int i=0; i<m; i++)
	{
		sum = 0;
		for(int j=0; j<n; j++)
		{
			sum = sum + array[i][j];
		}
		if(sum>sumr)
		{
			sumr = sum;
			capturer = i;
		}
	}
	
	//finding maximum sum in column
	
	for(int i=0; i<n; i++)
	{
		sum = 0;
		for(int j=0; j<m; j++)
		{
			sum = sum + array[j][i]; 
		}
		if(sum>sumr)
		{
			sumc = sum;
			capturec = i;
		}
	}
	
	//printing 
	if(sumr>=sumc)
	{
		cout<<"row"<<" "<<capturer<<" "<<sumr;
	}
	else
	{
		cout<<"column"<<" "<<capturec<<" "<<sumc;
	}
	cout<<endl;
	//print(array,m,n);
}

int main()
{
	int array[8][8];
	cout<<"Enter number of test cases"<<endl;
	int q;
	cin>>q;
	for(int i=0; i<q; i++)
	{
		int m,n;
		cout<<"Enter size of 2d array"<<endl;
		cin>>m>>n;
		maxsumrowcol(array,m,n);
	}
}
