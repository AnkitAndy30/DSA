#include<iostream>
using namespace std;

void trimspace(char a[])
{
	for(int k = 0; a[k]!='\0'; k++)
	{
		if(a[k] == 32)
		{
			for(int j=k; ; j++)
			{
				if(a[j+1] == 0)
				{
					break;
				}
				else
				{
					int temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
	}
}

int main()
{
	char input[20];
	cout<<"Enter the string"<<endl;
	cin.getline(input,20);
	trimspace(input);
	cout<<input;
}
