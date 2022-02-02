#include<iostream>
using namespace std;

int main()
{
	int n,i=1;
	cout<<"Enter number of rows";
	cin>>n;
	
	if(n<=50)
	{
		while(i<=n)
		{
			int k = 1;
			while(k<=n-i)
			{
				cout<<" ";
				k++;
			}
			int j = 1;
			while(j<=i)
			{
				cout<<j;
				j++;
			}
			cout<<endl;
			i++;
		}
	}
}
