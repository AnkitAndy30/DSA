#include<iostream>
using namespace std;

int main()
{
	int x,n,power=1,i=1;
	cout<<"Enter the numbers";
	cin>>x>>n;
	while(i<=n)
	{
		power = power*x;
		i = i+1;
	}
	cout<<"The power is"<<power;
}
