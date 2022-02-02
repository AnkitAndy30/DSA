#include<iostream>
using namespace std;
#include"deletenoderecursively.cpp"

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

Node *deletenode(Node *head,int pos){
	if(pos == 0){
		Node *n = head;
		head = n->next;
		delete n;
		return head;
	}
	else if(pos == 1){
		Node *n = head->next;
		head->next = n->next;
		delete n;                                          
		return head;
	}
	pos--;
	deletenode(head->next,pos);								
	return head;
}

int main(){
	int choices;
	cout<<"Enter number of queries to be run"<<endl;
	cin>>choices;
	for(int i = 0; i < choices; i++){
		Node *head = takeinput();
		cout<<"Enter the position at which you want to delete"<<endl;
		int pos;
		cin >> pos;
		head = deletenode(head,pos);
		print(head);
	}
}
