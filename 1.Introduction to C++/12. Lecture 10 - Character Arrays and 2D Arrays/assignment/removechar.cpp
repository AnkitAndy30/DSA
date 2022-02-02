#include<iostream>
#include<cstring>
using namespace std;

void removecharacter(char str[]){
	cout<<"Enter the character you want to remove"<<endl;
	char input;
	cin>>input;
	int count = 0;
	int len = strlen(str);
	for(int i=0; i<len; i++){
		if(str[i] != input){
			str[count] = str[i];
			count++;
		}
	}
	str[count] = '\0';
	cout<<endl;
}

int main(){
	char str[20];
	cout<<"Enter the string"<<endl;
	cin>>str;
	removecharacter(str);
	cout<<str;
}
