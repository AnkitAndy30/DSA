#include<iostream>
using namespace std;
#include"complexclass.cpp"

int main(){
	int real1,imaginary1,real2,imaginary2;
	
	cout << "Enter first complex number" << endl;
	cin >> real1 >> imaginary1;
	complecx c1(real1,imaginary1);
	
	cout << "Enter second complex number" << endl;
	cin >> real2 >> imaginary2;
	complecx c2(real2,imaginary2);
	
	
	cout << "Enter your choice of operation" << endl;
	int choice;
	cin>>choice;
	if(choice == 1){
		c1.add(c2);
		c1.print();
	}
	else if(choice == 2){
		c1.multiply(c2);
		c1.print();
	}
}
