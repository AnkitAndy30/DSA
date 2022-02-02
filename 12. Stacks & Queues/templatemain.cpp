#include<iostream>
using namespace std;
#include"templateclass.cpp"

int main(){
	Pair<Pair<int, int>, int> p1;
	p1.sety(30);
	Pair<int, int> p2;
	p2.setx(10);
	p2.sety(20);
	p1.setx(p2);
	
	cout << p1.getx().getx() << " " << p1.getx().gety() << " " << p1.gety() <<endl;
	
	
	
	
	/*Pair<int,int> p1;
	p1.setx(10);
	p1.sety(20);
	
	cout << p1.getx() << " " << p1.gety() << endl;
	
	Pair<int, double> p2;
	p2.setx(14);
	p2.sety(21.22);
	
	cout << p2.getx() << " " << p2.gety() << endl;
	
	Pair<int> p;
	p.setx(10);
	p.setY(20);
	
	cout << p.getX() << " " << p.getY() <<endl;
	*/
}
