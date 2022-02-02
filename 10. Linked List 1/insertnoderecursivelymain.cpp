#include<iostream>
using namespace std;
#include"insertnoderecursively.cpp"

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

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

Node *insertnode(Node *head, int data, int pos){
	if(pos == 0){
		Node *n = new Node(data);
		n->next = head;
		head = n;
		return head;
	}
	else if(pos == 1){
		Node *n = new Node(data);
		n->next = head->next;
		head->next = n;
		//return head;
	}
	pos--;
	insertnode(head->next,data,pos);
	return head;
}

int main(){
	int choices;
	cout<<"Enter number of queries to be run"<<endl;
	cin >> choices;
	for(int i = 0; i < choices; i++){
		Node *head = takeinput();
		cout<<"Enter the data you want to insert"<<endl;
		int d;
		cin>>d;
		cout<<"Enter the position at which you want to insert"<<endl;
		int pos;
		cin>>pos;
		head = insertnode(head,d,pos);
		print(head);
	}
}
