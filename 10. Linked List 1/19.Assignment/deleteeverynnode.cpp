#include<iostream>
using namespace std;
#include"commonclass.cpp"

Node* takeinput(){
	int data;
	cout<<"Enter an integer"<<endl;
	cin>>data;
	Node* head = NULL;
	Node* tail = NULL;
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

Node *delevnnode(Node *head,int retain,int delet){
	if(retain == 0){
		head = NULL;
		return head;
	}
	if(head == NULL){
		return head;
	}
	Node *curr = head;
	Node *prev = NULL;
	for(int i = 0; i < retain; i++){
		prev = curr;
		curr = curr->next;
	}
	for(int i = 0; i < delet && curr != NULL; i++){
		curr = curr->next;
	}
	prev->next = curr;
	delevnnode(curr,retain,delet);
	return head;
}

int main(){
	Node *head = takeinput();
	cout<<"Enter number of node you want to retain and number of nodes you want to delete"<<endl;
	int retain,delet;
	cin>>retain>>delet;
	head = delevnnode(head,retain,delet);
	print(head);
}
