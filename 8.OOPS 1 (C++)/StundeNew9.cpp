#include <iostream>
using namespace std;
#include "Student9.cpp"

int main() {
	Student s1;

	Student *s2 = new Student;

	s1.setAge(20,101,123);
	s2 -> setAge(24,102,123);

	s1.display();
	s2 -> display();
}

