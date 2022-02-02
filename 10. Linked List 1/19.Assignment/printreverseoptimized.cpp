#include<iostream>
using namespace std;
#include"printreverseclass.cpp"

void printreverse(Node *head){
	if(head == NULL){
		return;
	}
	printreverse(head->next);
	cout<<head->data<<" ";
}

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

int main(){
	Node *head = takeinput();
	printreverse(head);
}
