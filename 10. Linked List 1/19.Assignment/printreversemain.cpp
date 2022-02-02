#include<iostream>
using namespace std;
#include"printreverseclass.cpp"

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
	return head;
}

void printreverse(Node *head){
	Node *temp = head;
	int length = 0;
	while(temp != NULL){
		temp = temp->next;
		length++;
	}
	for(int i = 0; i < length; i++){
		temp = head;
		for(int j = 0; j < length-i-1; j++){
			temp = temp->next;
		}
		cout<<temp->data<<" ";
	}
	cout<<endl;
} 

int main(){
	int nqueries;
	cout<<"Enter number of queries to be run"<<endl;
	cin>>nqueries;
	for(int i = 0; i < nqueries; i++){
		Node *head = takeinput();
		printreverse(head);
	}
}
