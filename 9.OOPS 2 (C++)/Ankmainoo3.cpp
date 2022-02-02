#include<iostream>
using namespace std;
#include"Ankclassoo3.cpp"

int main(){
	Fraction f1(2,5);
	Fraction f2(3,7);
	
	f1.print();
	f2.print();
	
	cout<<endl;
	
	Fraction f3 = f1++;
	f1.print();
	f3.print();
	
	cout<<endl;
	
	Fraction f4 = f2++;
	f2.print();
	f4.print();
	
	cout<<endl;
	
	(f1 += f2) += f3;
	f1.print();
	f2.print();
	f3.print();
}
