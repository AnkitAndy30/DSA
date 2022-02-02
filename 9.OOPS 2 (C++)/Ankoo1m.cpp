#include<iostream>
using namespace std;
#include"Ankoo1c.cpp"

int main(){
	Fraction f1(3,2);
	Fraction f2(4,7);
	
	Fraction f3 = f1+f2;
	f3.display();
	Fraction f4 = f1*f2;
	f4.display();
}
