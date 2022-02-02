#include<iostream>
using namespace std;

void replacecharacter(char s[],char c1,char c2){
	if(s[0] == '\0'){
		return;
	}
	if(s[0] == c1){
		s[0] = c2;
	}
	replacecharacter(s+1,c1,c2);
}

int main(){
	char s[20];
	cout<<"Enter the string"<<endl;
	cin>>s;
	cout<<"Enter the characters you want to replace with"<<endl;
	char c1,c2;
	cin>>c1>>c2;
	replacecharacter(s,c1,c2);
	cout<<s<<endl;
}
