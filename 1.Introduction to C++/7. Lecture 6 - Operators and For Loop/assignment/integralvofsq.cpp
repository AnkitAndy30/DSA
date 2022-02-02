#include<iostream>
using namespace std;

int main()
{
	int n,i=1,k=1,l;
	cout<<"Enter n"<<endl;
	cin>>n;
	while(n>=k)
	{
		l=i*i;
		if(l<=n)
		{
			k=i;
			i++;
		}
		else
		{
			break;
		}
	}
	cout<<k;
	
}
