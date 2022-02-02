#include<iostream>
using namespace std;
#include"lllengthrecursively.cpp"

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

int lengthll(Node *head){
	if(head == NULL){
		return 0;
	}
	//head = head->next;
	int l = lengthll(head->next);
	l++;
	return l;
}

int main(){
	int nchoices;
	cout<<"Enter number of queries you want to run"<<endl;
	cin>>nchoices;
	for(int i = 0; i < nchoices; i++){
		Node *head = takeinput();
		int l = lengthll(head);
		cout<<l<<endl;
	}
}
