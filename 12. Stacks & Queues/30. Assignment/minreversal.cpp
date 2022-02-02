#include<iostream>
using namespace std;
#include<stack>
#include<string>

int minrev(string input){
	int len = 0;
	for(int i = 0; input[i]; i++){
		len++;
	}
	if(len % 2 != 0){
		return len;
	}
	
	stack<char> s;
	int count = 0;
	
	for(int i = 0; input[i]; i++){
		if(input[i] == '{'){
			s.push(input[i]);
		}
		else if((input[i] == '}') && (s.top() == '{')){
			s.pop();
		}
		else{
			s.push(input[i]);
		}
	}
	
	while(!s.empty()){
		char c1 = s.top();
		s.pop();
		char c2 = s.top();
		s.pop();
		if(c1 == c2){
			count++;
		}
		else{
			count = count + 2;
		}
	}
	
	return count;
}

int main(){
	string input;
	cout << "Enter the given expression" << endl;
	cin >> input;
	
	int out = minrev(input);
	cout << out;
}
