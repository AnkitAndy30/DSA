#include<iostream>
using namespace std;

int main()
{
	int x,n,power=1,i=1;
	cout<<"Enter the numbers";
	cin>>x>>n;
	if((x<=8) && (n<=9))
	{
		while(i<=n)
		{
			power = power*x;
			i = i+1;
		}
		cout<<power;
	}
	else{
		cout<<"Invalid input";
	}
}

