#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

void minlengthword(char str[]){
	int len = strlen(str),count=0,wordlen=INT_MAX,capture = 0;
	for(int i=0; i<len; i++){
		if(str[i] == ' '){
			if(count<wordlen){
				wordlen = count;
				capture = i-count;
			}
			count = 0;
			continue;
		}
		count++;
		if(str[i+1] == '\0'){
			if(count<wordlen){
				wordlen = count;
				capture = len - count; 
			}
		}
	}
	int j=0;
	for(; j<wordlen; j++){
		str[j] = str[capture++];
	}
	str[j] = '\0';
}

int main(){
	char str[50];
	cout<<"Enter the string"<<endl;
	cin.getline(str,50);
	minlengthword(str);
	cout<<str;
}
