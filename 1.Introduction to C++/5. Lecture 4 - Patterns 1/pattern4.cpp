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
			int j=1;
			int k = i;
			while(j<=i)
			{
				cout<<k;
				k--;
				j++;
			}
			cout<<endl;
			i++;
		}
	}
}
