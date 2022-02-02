#include<iostream>
using namespace std;

void revwordwise(char array[])
{
	char arr[30]; 
	int len = 0;
	for(int i=0; array[i]!='\0'; i++)
	{
		len++;
	}
	int mem = len;
	for(int j=len; j>=0; j--)
	{
		if(j==0)
		{
			for(int k=j,l=0; k<=mem; k++,l++)
			{
				arr[l] = array[k];
				cout<<arr[l];
			}
		}
		if(array[j]==32)
		{
			int catch1 = mem;
			mem = j;
			for(int k=j+1,l=0; k<=catch1; k++,l++)
			{
				/*if(k==(catch1-1))
				{
					arr[l] = 32;
				}*/
				arr[l] = array[k];
				cout<<arr[l];
			}
			
		}
	}
}

int main()
{
	char array[30];
	cout<<"Enter the string"<<endl;
	cin.getline(array,30);
	revwordwise(array);
	//cout<<array;
}
