#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char input[20];
    cout << "Enter a string" << endl;
    cin.getline(input, 100);
	cout << input << endl;
	cout << input[0] << endl;
}
