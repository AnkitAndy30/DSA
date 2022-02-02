#include<iostream>
using namespace std;
#include<stack>
#include<string>


bool balancedpar(string input, int len){
	stack<char> s;
	for(int i = 0; i < len; i++){
		if((input[i] == '(') || (input[i] == '[') || (input[i] == '{') || (input[i] == ')') || (input[i] == ']') || (input[i] == '}')){
			if((input[i] == '(') || (input[i] == '{') || (input[i] == '[')){
				s.push(input[i]);
			}
			else if((s.top() == '(' && input[i] == ')') || (s.top() == '{' && input[i] == '}') || (s.top() == '[' && input[i] == ']')){
				s.pop();
			}
			else{
				return false;
			}
		}
	}
	return s.empty();
}

int main(){
	string input;
	cin >> input;
	
	//int len = strlen(input);        not working
	int len = 0;
	
	for(int i = 0; input[i]; i++){
		len++;
	}
	cout << len << endl;
	
	/*stack<char> s;
	for(int i = 0; i < len; i++){
		if(input[i] == '('){
			s.push(input[i]);
		}
		else{
			s.pop();
		}
	}*/
	
	//cout << s.empty() << endl;
	
	bool out = balancedpar(input,len);
	cout << out << endl;
}
