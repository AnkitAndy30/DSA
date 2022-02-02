#include<iostream>
using namespace std;
#include"commonclass.cpp"

Node *takeinput(){
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
}

void alternatenode(Node *head,int count,Node* &headtemp1, Node* &headtemp2,Node* &tailtemp1,Node* &tailtemp2,int length){
	if(head == NULL){
		return;
	}
	count++;
	alternatenode(head->next,count,headtemp1,headtemp2,tailtemp1,tailtemp2,length);
	if(count % 2 == 0){
		if(count == length && length%2 == 0){
			headtemp2 = head;
			tailtemp2 = head;
		}
		else if(count == length-1){
			headtemp2 = head;
			tailtemp2 = head;
		}
		else{
			if(count == 2){
				tailtemp2->next = head;
				tailtemp2 = head;
				tailtemp2->next = NULL;
			}
			else{
				tailtemp2->next = head;
				tailtemp2 = head;
			}
		}
	} 
	else{
		if(count == length -1 && length%2 == 0){
			headtemp1 = head;
			tailtemp1 = head;
		}
		else if(count == length){
			headtemp1 = head;
			tailtemp1 = head;
		}
		else{
			if(count == 1){
				tailtemp1->next = head;
				tailtemp1 = head;
				tailtemp1->next = NULL;
			}
			else{
				tailtemp1->next = head;
				tailtemp1 = head;
			}
		}
	}
}

int lengthll(Node* head){
	int length = 0;
	while(head != NULL){
		length++;
		head = head->next;
	}
	return length;
}

int main(){
	Node *head = takeinput();
	Node *headtemp1 = NULL;
	Node *headtemp2 = NULL;
	Node *tailtemp1 = NULL;
	Node *tailtemp2 = NULL;
	int count = 0;
	
	Node *temp = head;
	int length = lengthll(temp);
	cout<<length<<endl;
	
	alternatenode(head,count,headtemp1,headtemp2,tailtemp1,tailtemp2,length);
	print(headtemp1);
	cout<<endl;
	print(headtemp2);
}
