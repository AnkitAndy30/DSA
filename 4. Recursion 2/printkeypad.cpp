#include<iostream>
using namespace std;

string map(int num){
	if(num == 2){
		return "abc";
	}
	if(num == 3){
		return "def";
	}
	if(num == 4){
		return "ghi";
	}
	if(num == 5){
		return "jkl";
	}
	if(num == 6){
		return "mno";
	}
	if(num == 7){
		return "pqrs";
	}
	if(num == 8){
		return "tuv";
	}
	if(num == 9){
		return "wxyz";
	}
}

void print_keypad(int input, string output){
	if(input == 0){
		cout<<output<<endl;
		return;
	}
	string temp = map(input%10);
	if(input%10 == 7 || input%10 == 9){
		print_keypad(input/10,output + temp[0]);
		print_keypad(input/10,output + temp[1]);
		print_keypad(input/10,output + temp[2]);
		print_keypad(input/10,output + temp[3]);
	}
	else{
		print_keypad(input/10,output + temp[0]);
		print_keypad(input/10,output + temp[1]);
		print_keypad(input/10,output + temp[2]);
	}
}

int main(){
	int input;
	cout<<"Enter the number"<<endl;
	cin>>input;
	string output = "";
	print_keypad(input,output);
}
