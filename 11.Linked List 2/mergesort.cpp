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

Node *mergesort(Node *head){
	if(head->next == NULL){
		return head;
	}
	Node *fast = head->next;
	Node *slow = head;
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	Node *breaker = slow->next;
	slow->next = NULL;
	head = mergesort(head);
	//cout<<"k"<<endl;
	//cout<<head->data<<" c7"<<endl;
	breaker = mergesort(breaker);
	//cout<<"g"<<endl;
	Node *fhead = NULL;
	Node *btail = NULL;
	bool check = true;
	while(head != NULL && breaker != NULL){
		if(check){
			if(head->data < breaker->data){
				fhead = head;
				btail = head;
				head = head->next;
				/*cout<<btail->data<<" C1"<<endl;
				cout<<btail->next<<endl;*/
			}
			else{
				fhead = breaker;
				btail = breaker;
				breaker = breaker->next;
				/*cout<<btail->data<<" C2"<<endl;
				cout<<head->data<<" C2(1)"<<endl;
				cout<<"b"<<endl;*/
			}
			check = false;
			//cout<<"a"<<endl;
		}
		else{
			if(head->data < breaker->data){
				btail->next = head;
				btail = head;
				head = head->next;
				/*cout<<btail->data<<" C1'"<<endl;
				cout<<"c"<<endl;*/
			}
			else{
				btail->next = breaker;
				btail = breaker;
				breaker = breaker->next;
				/*cout<<btail->data<<" C2'"<<endl;
				cout<<"d"<<endl;*/
			}
		}
		//cout<<"e"<<endl;
	}
	//cout<<"f"<<endl;
	if(head != NULL){
		//cout<<"h"<<endl;
		btail->next = head;
		/*cout<<fhead->data<<" C1''"<<endl;
		cout<<fhead->next->data<<" C1''(1)"<<endl;*/
	}
	else{
		//cout<<"i"<<endl;
		btail->next = breaker;
		/*cout<<btail->data<<" C3"<<endl;
		cout<<btail->next->data<<" c4"<<endl;
		cout<<fhead->data<<" c5"<<endl;
		cout<<fhead->next->data<<" c6"<<endl;
		//cout<<head->data<<" C2''"<<endl;
		cout<<breaker->data<<"C2''(1)"<<endl;
		*/
	}
	//cout<<"l"<<endl;
	return fhead;
}

int main(){
	Node *head = takeinput();
	if(head == NULL){
		cout<<" "<<endl;
	}
	else{
		head = mergesort(head);
		print(head);
	}
}
