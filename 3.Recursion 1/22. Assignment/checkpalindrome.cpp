#include<iostream>
#include<cstring>
using namespace std;

bool checkpalindrome(char str[],int start, int end){
	if(start>=end){
		return true;
	}
	if(str[start] != str[end]){
		return false;
	}
	bool check = checkpalindrome(str,start+1,end-1);
	return check;
}

int main(){
	char str[20];
	cout<<"Enter the string"<<endl;
	cin>>str;
	int len = strlen(str);
	int startindex = 0,endindex = len-1;
	cout<<checkpalindrome(str,startindex,endindex);
}
