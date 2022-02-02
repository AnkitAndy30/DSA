#include<iostream>
#include<cstring>
using namespace std;

void printallsubstrings(char input[])
{
	int len = strlen(input);
	for(int i=0; i<len ; i++)
	{
		for(int j=i; j<len ; j++)
		{
			cout<<input[i];
			for(int k = i+1; k<=j; k++)
			{
				cout<<input[k];
			}
			cout<<endl;
		}
	}
}

int main()
{
	char array[10];
	cout<<"Enter the string"<<endl;
	cin>>array;
	printallsubstrings(array);
}
