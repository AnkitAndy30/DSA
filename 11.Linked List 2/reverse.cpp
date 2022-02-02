#include<iostream>
using namespace std;
#include"commonclass.cpp"

Node *takeinput(){
	int data;
	cout<<"enter an integer"<<endl;
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

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

Node *reversell(Node* head){
	if(head == NULL || head->next == NULL){
		return head;
	}
	
	Node *newhead = reversell(head->next);
	
	Node *temp = newhead;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = head;
	head->next = NULL;
	return newhead;
}

int main(){
	Node *head = takeinput();
	head = reversell(head);
	print(head);
}
