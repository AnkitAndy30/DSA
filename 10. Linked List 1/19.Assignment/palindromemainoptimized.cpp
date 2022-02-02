#include<iostream>
using namespace std;
#include"palindromenodeclass.cpp"

Node* takeinput(){
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

int lengthll(Node *head){
	int length = 0;
	while(head != NULL){
		head = head->next;
		length++;
	}
	return length;
}

bool palindrome(Node *head){
	if(head == NULL){
		return true;
	}
	int length = lengthll(head);
	int mid = length/2;
	Node *head1 = head;
	Node *head2 = head;
	Node *temp = head2;
	for(int i = 0; i < mid; i++){
		head2 = head2->next;
		if(i != 0){
			temp = temp->next;	
		}
	}
	temp->next = NULL;
	Node *prev = NULL;
	Node *current = head2;
	Node *forward = NULL;
	while(current != NULL){
		forward = current->next;
		current->next = prev;
		prev = current;
		current = forward;
	}
	head2 = prev;
	
	while(head1 != NULL && head2 != NULL){
		if(head1->data != head2->data){
			return false;
		}
		head1 = head1->next;
		head2 = head2->next;
	}
	return true;
}

int main(){
	Node *head = takeinput();
	if(palindrome(head)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
}
