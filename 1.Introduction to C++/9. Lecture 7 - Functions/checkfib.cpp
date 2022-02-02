#include<iostream>
using namespace std;

bool Fib(int k)
{
	int a = 0, b = 1, c;
	while(k>=a)
	{
		if(k == a)
		{
			return true;
		}
		c = a+b;
		a = b;
		b = c;
	}
	return false;
}

int main()
{
	int  n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	bool out = Fib(n);
	cout<<out;
}
