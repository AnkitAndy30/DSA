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

/*Node *midpoint(Node *head){
	if(head == NULL){
		return head;
	}
	int length = 0;
	Node *tlen = head;
	while(tlen != NULL){
		tlen = tlen->next;
		length++;
	}
	int lengt = length/2;
	if(length%2 == 0){
		for(int i = 1; i < lengt; i++){
			head = head->next;
		}
	}
	else{
		for(int i = 0; i < lengt; i++){
			head = head->next;
		}
	}
	return head;
}*/

Node *midpoint(Node *head){
	if(head == NULL){
		return head;
	}
	Node *fast = head->next;
	Node *slow = head;
	while(fast != NULL && fast->next != NULL){
		fast = fast->next->next;
		slow = slow->next;
		cout<<slow->data<<" check"<<endl;
	}
	return slow;
}

int main(){
	Node *head = takeinput();
	head = midpoint(head);
	if(head == NULL){
		cout<<" "<<endl;
	}
	else{
		cout<<head->data<<endl;
	}
}
