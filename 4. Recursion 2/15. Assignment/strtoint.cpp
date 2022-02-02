#include<iostream>
using namespace std;

int strtoint(string input){
	if(input.length() == 0){
		return 0;
	}
	//cout<<input[0]<<"check 3"<<endl;
	int out = strtoint(input.substr(1));
	//cout<<out<<"check 2"<<endl;
	//cout<<input[0]<<"check 4"<<endl;
	int temp = input[0] - '0';                 //converting string to integer
	//cout<<temp<<"check"<<endl;
	for(int i = 1; i < input.length(); i++){
		temp = temp*10;
	}
	return (out+temp);
}

int main(){
	string input;
	cout<<"Enter the string"<<endl;
	cin>>input;
	cout<<strtoint(input)<<endl;
}
