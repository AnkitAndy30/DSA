#include<iostream>
using namespace std;

int main()
{
	int n,c,i=1,sum=0,product=1;
	cout<<"Enter the number and choice"<<endl;
	cin>>n>>c;
	while(i<=n)
	{
		if(c==1)
		{
			sum = sum +i;
		}
		else if(c==2)
		{
			product=product*i;
		}
		else
		{
			cout<<"-1";
			break;
		}
		i++;
	}
	if(c==1)
	{
		cout<<sum;
	}
	else if(c==2)
	{
		cout<<product;
	}
}
