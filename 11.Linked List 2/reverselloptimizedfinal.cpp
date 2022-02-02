#include<iostream>
using namespace std;
#include"commonclass.cpp"

Node *takeinput(){
	int data;
	cout<<"Enter an integer"<<endl;
	cin>>data;
	Node* head = NULL;
	Node* tail = NULL;
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

Node *reversellopti(Node *head){
	if(head == NULL || head->next == NULL){
		return head;
	}
	
	Node *nnode = reversellopti(head->next);
	Node *tail = head->next;
	tail->next = head;
	head->next = NULL;
	return nnode;
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
	head = reversellopti(head);
	print(head);
}
