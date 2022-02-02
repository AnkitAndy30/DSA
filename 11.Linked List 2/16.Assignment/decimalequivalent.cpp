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
	return head;
}

int decimalequi(Node *head){
	Node *next = NULL;
	Node *curr = head;
	Node *prev = NULL;
	int len = 0;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		len++;
	}
	head = prev;
	int decimal = 0;
	for(int i = 0; i < len; i++){
		int t = 1;
		for(int j = 0; j < i; j++){
			t = t*2;
		}
		decimal = decimal + head->data*t;
		head = head->next;
	}
	return decimal;
}

int main(){
	Node *head = takeinput();
	int decimal = decimalequi(head);
	cout<<decimal<<endl;
}
