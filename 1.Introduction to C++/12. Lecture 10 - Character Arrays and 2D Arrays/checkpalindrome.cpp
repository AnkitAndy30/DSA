#include<iostream>
using namespace std;

void palindrome(char a[])
{
	int len = 0,c=1;
	for(int i=0; a[i]!='\0'; i++)
	{
		len++;
	}
	if(len%2 != 0)
	{
		for(int i=0; i<(len/2); i++){
			if(a[i] != a[len-i-1]){
				c=2;
				cout<<"false"<<endl;
				break;
			}
		}
	}
	else
	{
		for(int i=0; i<(len/2); i++)
		{
			if(a[i] != a[len-i-1]){
				c=2;
				cout<<"false"<<endl;
				break;
			}
		}
	}
	if(c==1)
	{
		cout<<"true"<<endl;
	}
}

int main()
{
	char arr[10];
	cout<<"Enter the string to check palindrome"<<endl;
	cin>>arr;
	palindrome(arr);
}
