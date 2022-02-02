#include<iostream>
using namespace std;
#include"Ankdeletenodeclass.cpp"

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
			tail = tail->next;
			//or tail = n;
		}
		cin>>data;
	}
	return head;
}

Node *deleteNode(Node *head,int i){
	Node *temp = head;
	if(i == 0){
		head = head->next;
		delete temp;
		return head;
	}
	else{
		int count = 0;
		while(count < i-1 && temp->next != NULL){
			temp = temp->next;
			count++;
		}
		if(temp->next != NULL){
			Node *k = temp->next;
			temp->next = k->next;
			delete k;
		}
		return head;
	}
}

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int main(){
	int nchoices;
	cout<<"Enter the number of queries"<<endl;
	cin>>nchoices;
	for(int i = 0; i < nchoices; i++){
		Node *head = takeinput();
		cout<<"Enter the position of node you want to delete"<<endl;
		int index;
		cin>>index;
		head = deleteNode(head,index);
		print(head);
	}
}
