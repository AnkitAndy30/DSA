#include<iostream>
using namespace std;
#include"commonclass.cpp"

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

Node *reviterative(Node *head){
	Node *prev = NULL;
	Node *curr = head;
	Node *next = NULL;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	} 
	head = prev;
	return head;
}

int main(){
	Node *head = takeinput();
	head = reviterative(head);
	print(head);
}
