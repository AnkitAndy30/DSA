#include<iostream>
#include<cstring>
using namespace std;

void maxfreq(char str[]){
	int len = strlen(str),count_p = 0, capture;
	for(int i=0; i<len; i++){
		int count_l = 0;
		for(int j=i+1; j<len; j++){
			if(str[j]==str[i]){
				count_l++;
			}
		}
		if(count_l>count_p){
			count_p = count_l;
			capture = i;
		}
	}
	str[0] = str[capture];
	str[1] = '\0';
}

int main(){
	char str[30];
	cout<<"Enter the string"<<endl;
	cin>>str;
	maxfreq(str);
	cout<<str;
}
