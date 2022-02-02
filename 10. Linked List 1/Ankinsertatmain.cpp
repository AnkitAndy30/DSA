#include<iostream>
using namespace std;
#include"Ankinsertnodeclass.cpp"

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
			tail = tail->next;
		}
		cin>>data;
	}
	return head;
}

Node *insertat(Node *head, int data, int i){
	Node *temp = head;
	if(i == 0){
		Node *n = new Node(data);
		n->next = head;
		head = n;
		return head;
	}
	int count = 0;
	while(count < i-1 && temp->next != NULL){
		temp = temp->next;
		count++;
	}
	if(temp->next != NULL){
		Node *n = new Node(data);
		//Method 1
		/*
		Node *a = temp->next;
		temp->next = n;
		n->next = a;
		*/
		//Method 2
	 	n->next = temp->next;
	 	temp->next = n;
	 	return head;
	}
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
	print(head);
	head = insertat(head,99,0);
	print(head);
}
