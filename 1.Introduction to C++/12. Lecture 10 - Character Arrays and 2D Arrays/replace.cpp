#include<iostream>
using namespace std;

void replace(char a[])
{
	char c1,c2;
	cout<<"Enter the character you want to replace with"<<endl;
	cin>>c1>>c2;
	for(int i=0; a[i]!='\0'; i++){
		if(a[i] == c1)
		{
			a[i] = c2;
		}
	}
	//printing array
	cout<<a;
}

int main()
{
	char arr[10];
	cout<<"Enter the string"<<endl;
	cin>>arr;
	replace(arr);
}
