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

void unionofll(Node *head1,Node *head2){
	Node *thead1 = head1;
	Node *thead2 = head2;
	int len1 = 0;
	while(thead1->next != NULL){
		thead1 = thead1->next;
		len1++;
	}
	while(thead2 != NULL){
		Node *theadu = head1;
		bool check = true;
		int i = 0;
		while(theadu != NULL && i <= len1){
			if(thead2->data == theadu->data){
				check = false;
				break;
			}
			theadu = theadu->next;
			i++;
		}
		if(check){
			thead1->next = thead2;
			thead1 = thead2;
			thead2 = thead2->next;
			thead1->next = NULL;
		}
		else{
			thead2 = thead2->next;
		}
	}
}

int main(){
	Node *head1 = takeinput();
	Node *head2 = takeinput();
	unionofll(head1,head2);
	print(head1);
}
