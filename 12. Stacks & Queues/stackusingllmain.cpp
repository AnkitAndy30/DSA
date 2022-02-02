#include<iostream>
using namespace std;
#include"stackusingllclass.cpp"

int main(){
	stack<char> s;
	s.push('t');
	s.push('i');
	s.push('k');
	s.push('n');
	s.push('a');
	
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.getsize() <<endl;
	cout << s.isempty() <<endl;
}
