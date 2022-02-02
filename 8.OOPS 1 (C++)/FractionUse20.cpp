#include <iostream>
using namespace std;
#include "Fraction20.cpp"

int main() {
	Fraction f1(1, 2);
	Fraction f2(3, 4);

	f1.add(f2);
	f1.multiply(f2);

	f1.print();
	f2.print();
}

