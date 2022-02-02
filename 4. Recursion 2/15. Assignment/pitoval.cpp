#include<iostream>
using namespace std;

string pitov(string input){
	if(input.length() == 0){
		return"";
	}
	string temp = pitov(input.substr(1));
	if(input[0] == 'p' && temp[0] == 'i'){
		temp = temp.substr(1);
		temp = "3.14" + temp;
	}
	else{
		temp = input[0] + temp;
	}
	return temp;
}

int main(){
	string input;
	cout<<"Enter string"<<endl;
	cin>>input;
	cout<<pitov(input)<<endl;
	//cout<<output<<" check 3"<<endl;
}
