#include<iostream>
using namespace std;

void removeduplicate(char str[]){
	if(str[0] == '\0'){
		return;
	}
	if(str[0] == str[1]){
		int i = 1;
		for(; str[i] !='\0'; i++){
			str[i-1] = str[i];
		}
		str[i-1] = '\0';
		removeduplicate(str);
	}
	removeduplicate(str+1);
}

int main(){
	char str[20];
	cout<<"Enter the string"<<endl;
	cin>>str;
	removeduplicate(str);
	cout<<str;
}
