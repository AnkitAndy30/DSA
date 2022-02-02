#include<iostream>
using namespace std;
#include<cstring>
#include"AnkStudent4.cpp"

int main(){
	char array[] = "Ankitt";
	Student s1(23,array);
	s1.display();
	
	Student s2(s1);
	s2.name[5] = 'e';
	
	s1.display();
	s2.display();
}
