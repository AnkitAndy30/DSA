#include<iostream>
#include<cstring>
using namespace std;

void compresstring(char str[]){
	int len = strlen(str),index=0;
	for(int i=0; i<len; i++){
		if(str[i+1] == str[i]){
			char count = '0';
			int j=i;
			for(; j<len; j++){
				if(str[j] == str[i]){
					count++;
					continue;
				}
				break;
			}
			str[index++] = str[i];
			str[index++] = count;
			i = j-1;
		}
		else{
			str[index++] = str[i];
		}
	}
	str[index] = '\0';
}

int main(){
	char str[20];
	cout<<"Enter the string"<<endl;
	cin>>str;
	compresstring(str);
	cout<<str;
}
