#include<iostream>
using namespace std;

int main()
{
	int n,i=1,k,sum=0,l=1;
	cout<<"Enter n"<<endl;
	cin>>n;
	while(n>1)
	{
		int j=1;
		k=n%10;
		n=n/10;
		while(j<i)
		{
			k=k*2;
			j++;
		}
		sum=sum+k;
		i++;
	}
	while(l<i)
	{
		n=n*2;
		l++;
	}
	sum = sum+n;
	cout<<sum;
}
