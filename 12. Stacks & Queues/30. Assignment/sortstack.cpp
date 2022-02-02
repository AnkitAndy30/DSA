#include<iostream>
using namespace std;
#include<stack>

int main(){
	stack<int> s;
	cout << "Enter size of stack" << endl;
	int siz;
	cin >> siz;
	cout << "Enter the elements" << endl;
	int elements;
	for(int i = 0; i < siz; i++){
		cin >> elements;
		s.push(elements);
	}
	stack<int> temps;
	while(!s.empty()){
		int var = s.top();
		s.pop();
		while(!temps.empty() && temps.top() > var){
			s.push(temps.top());
			temps.pop();
		}
		temps.push(var);
	}
	
	while(!temps.empty()){
		s.push(temps.top());
		temps.pop();
	}
	
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
}
