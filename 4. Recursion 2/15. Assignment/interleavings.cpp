#include<iostream>
using namespace std;

void interleavings(string s1,string s2, string s3){
	if(s1.length() == 0 && s2.length() == 0){
		cout<<s3<<endl;;
		return;
	}
	if(s1.length() >=1){
		interleavings(s1.substr(1),s2,s3 + s1[0]);
	}
	if(s2.length() >= 1){
		interleavings(s1,s2.substr(1),s3 + s2[0]);
	}
	return;
}

int main(){
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	string s3;
	s3 = "";
	interleavings(s1,s2,s3);
}
