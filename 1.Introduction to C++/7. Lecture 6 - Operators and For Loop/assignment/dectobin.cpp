#include<iostream>
using namespace std;

int main()
{
	long int n,l=0,bin,k=1;
	cout<<"Enter n"<<endl;
	cin>>n;
	while(n>0)
	{
		bin = n%2;
		n = n/2;
		l = l + bin*k;
		k=k*10;
	}
	cout<<l;
}
