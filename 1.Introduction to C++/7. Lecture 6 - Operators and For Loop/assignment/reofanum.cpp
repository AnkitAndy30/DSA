#include<iostream>
using namespace std;

int main()
{
	long int n,k;
	cout<<"Enter n"<<endl;
	cin>>n;
	while(n%10==0)
	{
		n=n/10;
	}
	cout<<n<<endl;
	while(n>9)
	{
		k=n%10;
		n=n/10;
		cout<<k;
	}
	cout<<n;
}
