#include<iostream>
using namespace std;
#include"Ankdynamicclass.cpp"

int main(){
	DynamicArray d1;
	d1.insert(10);
	d1.insert(20);
	d1.insert(30);
	d1.insert(40);
	d1.insert(50);
	d1.insert(60);
	
	d1.print();
	
	DynamicArray d2(d1);
	d1.insert_at_specific_loc(69,1);
	d2.print();
	d1.print();
	
	DynamicArray d3;
	d3 = d1;
	d1.insert_at_specific_loc(69,4);
	d3.print();
	d1.print();
}
