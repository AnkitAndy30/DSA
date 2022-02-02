#include<iostream>
using namespace std;

int main()
{
	int n,i=1,j,k,l=1;
	cout<<"Enter n"<<endl;
	cin>>n;
	while(i<=n)
	{
		cin>>j;
		if(i==1)
		{
			k=j;
			i++;
			continue;
		}
		else if(k<j)
		{
			k=j;
			l=2;
			i++;
		}
		else
		{
			if(l==2)
			{
				l=3;
				break;
			}
			else if(k==j)
			{
				l=4;
				break;
			}
			else
			{
				k=j;
				i++;
				l=5;
			}
		}
	}
	if(l==3 || l==4)
	{
		cout<<"false";
	}
	else if(l==2 || l==5)
	{
		cout<<"true";
	}
}
