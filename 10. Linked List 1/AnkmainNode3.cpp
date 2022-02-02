#include<iostream>
using namespace std;
#include"AnkclassNode3.cpp"

void print(Node *head){
	Node *temphead = head;
	while(temphead != NULL){
		cout<<temphead->data<<" ";
		temphead = temphead->next;
	}
	cout<<endl;
}


int main(){
	//Statically
	Node n1(10);
	Node *head1 = &n1;
	Node n2(20);
	Node n3(30);
	Node n4(40);
	Node n5(50);
	Node n6(60);
	
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	n5.next = &n6;
	
	print(head1);
	
	print(&n3);
	
	//Dynamically Allocated
	Node *n7 = new Node(70);
	Node *n8 = new Node(80);
	Node *n9 = new Node(90);
	Node *n10 = new Node(100);
	
	n7->next = n8; //or
	// (*n7).next = n8;     both are same
	
	(*n8).next = n9;
	n9->next = n10;
	
	Node *head2 = n7;
	
	print(head2);
	print(n7);
	print(n9);
	
	
	/*Node *n1 = new Node(10);
	Node *n2 = new Node(20);
	Node *n3 = new Node(20);
	Node *n4 = new Node(20);
	
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	
	print(n2);
	*/
}
