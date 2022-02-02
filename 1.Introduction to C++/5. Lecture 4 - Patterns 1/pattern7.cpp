#include<iostream>
using namespace std;

int main()
{
	int n,i=1;
	cout<<"Enter number of rows";
	cin>>n;
	while(i<=n)
	{
		int j=1;
		char pr = 'A' + n - i;  
		while(j<=i)
		{
			cout<<pr;
			pr++;
			j++;
		}
		cout<<endl;
		i++;
	}
}
