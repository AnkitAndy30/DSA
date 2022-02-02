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

int findnode(Node *head, int number){
	int index = 0;
	while(head != NULL){
		if(head->data == number){
			return index;
		}
		index++;
		head = head->next;
	}
	return -1;
}

int main(){
	Node *head = takeinput();
	cout<<"Enter the number you want to find"<<endl;
	int number;
	cin>>number;
	int index = findnode(head,number);
	if(index == -1){
		cout<<" "<<endl;
	}
	else{
		cout<<index<<endl;
	}
}
