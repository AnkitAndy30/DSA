#include<iostream>
using namespace std;

class Node {
	public :
	int data;
	Node *next;

	Node(int data) {
		this -> data = data;
		next = NULL;
	}
};

Node* takeinput() {
	int data;
	cout<<"Enter an integer"<<endl;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail -> next = newNode;
			tail = tail -> next;
		}

		cin >> data;
	}
	return head;
}

void print(Node* head){
	Node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int lengthll(Node *head){
	int length = 0;
	while(head != NULL){
		head = head->next;
		length++;
	}
	return length;
}

Node *removeduplicate(Node *head){
	if(head == NULL){
		return head;
	}
	Node *temp = head;
	Node *newhead = head;
	Node *tail = head;
	while(temp->next != NULL){
		if(temp->data == temp->next->data){
			temp = temp->next;
		}
		else{
			Node *n = new Node(temp->next->data);
			tail->next = n;
			tail = n;
			temp = temp->next;
		}
	}
	return newhead;
}

int main(){
	Node *head = takeinput();
	head = removeduplicate(head);
	if(head == NULL){
		cout << " " <<endl;
	}
	else{
		print(head);
	}
}
