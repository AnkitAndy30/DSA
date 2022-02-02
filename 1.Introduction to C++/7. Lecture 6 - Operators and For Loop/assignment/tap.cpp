#include<iostream>
using namespace std;

int main()
{
	int x,i=1,j=1;
	cout<<"Enter the number of terms you want"<<endl;
	cin>>x;
	while(i<=x)                                                  
	{
		int k;
		k = (3*j)+2;
		if(k%4!=0)
		{
			i++;
			j++;
			cout<<k<<" ";
		}
		else
		{
			j++;
		}
	}
}/* x=4
    (3n+2)%4!=0
n=1   5  y   i=1
n=2   8  n   i=1
n=3   11 y   i=2
n=4   14 y   i=3
n=5   17 y   i=4
*/

