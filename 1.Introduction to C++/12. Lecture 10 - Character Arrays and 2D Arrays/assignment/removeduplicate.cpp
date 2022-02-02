#include<iostream>
#include<cstring>
using namespace std;

void removeduplicate(char str[]){
	int count =0;
	int len = strlen(str);
	for(int i=0; i<len; i++){
		if(str[i] == str[i+1]){
			str[count] = str[i];
			continue;
		}
		else if((str[i] != str[i-1]) && (str[i] != str[i+1])){
			str[count] = str[i];
		}
		count++;
	}
	str[count] = '\0';
}

int main(){
	char str[30];
	cout<<"Enter string"<<endl;
	cin>>str;
	removeduplicate(str);
	cout<<str;
}
