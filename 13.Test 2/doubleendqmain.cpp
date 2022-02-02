#include<iostream>
using namespace std;
#include"doubleendedq.cpp"

int main(){
	deq<int> q(10);
	
	q.insertfront(1);
	q.insertfront(2);
	q.insertfront(3);
	q.insertrear(4);
	q.insertrear(5);
	q.insertrear(6);
	
	cout << q.getsize() << endl;
	
	cout << q.deletefront() << endl;
	cout << q.deletefront() << endl;
	cout << q.deletefront() << endl;
	cout << q.deletefront() << endl;
	cout << q.deletefront() << endl;
	cout << q.deletefront() << endl;


	q.insertrear(4);
	q.insertrear(5);
	q.insertrear(6);
	q.insertfront(1);
	q.insertfront(2);
	q.insertfront(3);
	
	cout << q.getFront() << endl;
	cout << q.getrear() << endl;
	
	cout << q.getsize() << endl;
	
	cout << q.deleterear() << endl;
	cout << q.deleterear() << endl;
	cout << q.deleterear() << endl;
	cout << q.deleterear() << endl;
	cout << q.deleterear() << endl;
	cout << q.deleterear() << endl;
}
