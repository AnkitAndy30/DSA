#include<iostream>
using namespace std;

int main()
{
	int i=1,N,sum=0;
	cout<<"Enter a number"<<endl;
	cin>>N;
	while(i<=N)
	{
		if(i%2==0)
		{
			sum = sum+i;
			i= i+1;
		}
		else
		{
			i = i+1;
		}
	}
	cout<<"The sum is"<<endl;
	cout<<sum;
}
