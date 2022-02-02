#include<iostream>
using namespace std;
#include"AnkclassNode.cpp"

int main(){
	//Statically
	Node n1(10);
	Node *head = &n1;
	Node n2(20);
	
	n1.next = &n2;
	
	cout<<n1.data<<" "<<n2.data<<endl;
	cout<<(*head).data<<endl;
	cout<<head->data<<endl;
	cout<<sizeof(head)<<" "<<sizeof(n1.data)<<" "<<sizeof(n1.next)<<endl;        // 8 bytes size of head pointer, data part of n1 has size 4 bytes and next part of n1 which is a pointer has size 8 bytes
	cout<<head->next->data<<endl;
	cout<<head->next<<endl;
	cout<<&n2<<endl;
	cout<<head->next->next<<endl;

}
