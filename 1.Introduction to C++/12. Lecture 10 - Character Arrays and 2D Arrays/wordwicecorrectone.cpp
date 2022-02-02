#include<iostream>
using namespace std;

void revwordwise(char array[])
{
	int len = 0,mem=0,count =0,count1;
	for(int i=0; array[i]!='\0'; i++)
	{
		len++;
	}
	for(int i=0,j=len-1; i<j; i++,j--)
	{
		char temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
	//cout<<array;
	for(int i=0; i<len; i++)
	{
		if(array[i] == 32)
		{
			for(int j=i-1; j>=mem; j--)
			{
				char temp = array[i-1];
				for(int k = i-2; k>=count; k--)
				{
					array[k+1] = array[k];
				}
				array[count] = temp;
				count++;
			}
			//cout<<array;
			mem = i+1;
			count = mem;
		}
		else if(i == len-1)
		{
			count1 = mem;
			for(int p = i; p>=mem; p--)
			{
				char temp1 = array[i];
				for(int q = i-1; q>=count1; q--)
				{
					array[q+1] = array[q];
				}
				array[count1] = temp1;
				count1++;
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
	cout<<array;
}
