#include<iostream>
using namespace std;

int main()
{
	int n,i=2;
	cout<<"Enter n";
	cin>>n;
	while(i<n)
	{
		int j=2,k=1;
		//bool divided = false;
		while(j<i)
		{
			if(i%j==0)
			{
				k=2;
				//divided = true;
				break;
			}
			else
			{
				j++;
			}
			
		}
		if(k==2)
		{
			
		}
		else
		{
			cout<<i;
			cout<<endl;
		}
		i++;
		
	}
}
