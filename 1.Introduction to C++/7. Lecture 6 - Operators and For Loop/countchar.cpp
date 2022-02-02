#include<iostream>
using namespace std;

int main()
{
	char c;
	cout<<"Enter the characters"<<endl;
	c = cin.get();
	int count1 = 0, count2 = 0, count3 = 0;
	while(c!='$')
	{
		int i = c;
		if(i>=97 && i<=122)
		{
			count1++;
		}
		else if(i>=48 && i<=57)
		{
			count2++;
		}
		else
		{
			count3++;
		}
		c = cin.get();
	}
	cout<<count1<<" "<<count2<<" "<<count3<<endl;
}
