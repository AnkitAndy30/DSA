#include<iostream>
using namespace std;
#include<stack>
#include<string>

void inftoposfix(string input){
	stack<char> s;
	string newinput = "";
	for(int i = 0; input[i]; i++){
		if((input[i] == '+') || (input[i] == '-') || (input[i] == '*') || (input[i] == '/') || (input[i] == '^')){
			s.push(input[i]);
		}
		else{
			newinput = newinput + input[i];
		}
	}
	while(!s.empty()){
		newinput = newinput + s.top();
		s.pop();
	}
	input = newinput;
	cout << input <<endl;
	for(int i = 0; input[i]; i++){
		if((input[i] == '+') || (input[i] == '-') || (input[i] == '*') || (input[i] == '/')){
			int t1 = s.top() - '0';
			s.pop();
			int t2 = s.top() - '0';
			s.pop();
			int t3 = t1 + t2;
			char t4 = t3 + '0';
			s.push(t4);
		}
		else{
			s.push(input[i]);
		}
	}
	while(!s.empty()){
		cout << s.top() - '0';
		s.pop();
	}
}

int main(){
	string input;
	cout << "Enter the infix expression" << endl;
	cin >> input;
	
	inftoposfix(input);
}
