#include<iostream>
using namespace std;
#include"printithnode.cpp"

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

void printinode(Node *head,int i){
	Node *temp = head;
	int count = 0;
	while(i != count){
		temp = temp->next;
		count++;
	}
	cout<<temp->data<<endl;
}

int main(){
	int nchoices;
	cout<<"Enter the number of queries"<<endl;
	cin>>nchoices;
	for(int i = 0; i < nchoices; i++){
		Node *head = takeinput();
		int index;
		cout<<"Enter the position you want to print"<<endl;
		cin>>index;
		printinode(head,index);
		cout<<endl;
	}
}
