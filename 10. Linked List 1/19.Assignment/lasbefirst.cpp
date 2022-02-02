#include<iostream>
using namespace std;
#include"commonclass.cpp"

Node *takeinput(){
	int data;
	cout<<"Enter an integer"<<endl;
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
	tail = NULL;
	return head;
}

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

Node *lastbefirst(Node *head){
	Node *current = head;
	Node *prev = NULL;
	while(current->next != NULL){
		prev = current;
		current = current->next;
	}
	prev->next = NULL;
	current->next = head;
	head = current;
	return head;
}

int main(){
	Node *head = takeinput();
	print(head);
	head = lastbefirst(head);
	print(head);
}
