#include<iostream>
using namespace std;
#include"commonclass.cpp"


class Pair{
	public:
		Node *head;
		Node *tail;
};

Pair reversell_op(Node *head){
	if(head == NULL || head->next == NULL){
		Pair newnodes;
		newnodes.head = head;
		newnodes.tail = head;
		return newnodes;
	}
	
	Pair opnodes = reversell_op(head->next);
	opnodes.tail->next = head;
	head->next = NULL;
	Pair update;
	update.head = opnodes.head;
	update.tail = head;
	return update;
}

Node *reversell(Node *head){
	return reversell_op(head).head;
}

Node *takeinput(){
	int data;
	cout<<"enter an integer"<<endl;
	cin>>data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1){
		Node *n = new Node(data);
		if(head == NULL){
			head = n;
			tail = n;
		}
		else{
			tail->next = n;
			tail = n;
		}
		cin>>data;
	}
	return head;
}

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int main(){
	Node *head = takeinput();
	head = reversell(head);
	print(head);
}
