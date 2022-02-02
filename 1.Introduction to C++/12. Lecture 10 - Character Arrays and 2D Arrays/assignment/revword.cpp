#include<iostream>
#include<cstring>
using namespace std;

void revword(char str[]){
	int len = strlen(str);
	int cap = 0,count;
	for(int i=0; i<len; i++){
		if(str[i]==32){
		    count = cap;
			cap = i+1;
			for(;count<i-1;){
				char arr = str[i-1];
				for(int j=i-2; j>=count; j--){
					str[j+1] = str[j];
				}
				str[count] = arr;
				count++;
			}
		}
		else if(i == len-1){
			count = cap;
			for(;count<i;){
				char arr = str[i];
				for(int j=i; j>=count; j--){
					str[j] = str[j-1];
				}
				str[count] = arr;
				count++;
			}
		}
	}
	cout<<endl;
}

int main(){
	char str[100];
	cout<<"Enter the string"<<endl;
	cin.getline(str,100);
	revword(str);
	cout<<str;
}
