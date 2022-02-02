#include<iostream>
using namespace std;

int main()
{
	int n,sum_of_even = 0,sum_of_odd = 0,i,j;
	cout<<"Enter the integer";
	cin>>n;
	while(n>10)
	{
		i = n%10;
		n = n/10;
		if(i%2==0)
		{
			sum_of_even = sum_of_even + i;
		}
		else
		{
			sum_of_odd = sum_of_odd + i;
		}
	}
	if(n%2==0)
	{
		sum_of_even = sum_of_even + n;
	}
	else
	{
		sum_of_odd = sum_of_odd + n;
	}
	cout<<sum_of_even<<" "<<sum_of_odd;
}
