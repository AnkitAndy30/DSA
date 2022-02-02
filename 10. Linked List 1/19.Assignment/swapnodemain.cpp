#include<iostream>
using namespace std;
#include"swapnodeclass.cpp"

Node* takeinput(){
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

Node *swapnodes(Node *head,int i, int j){
	
	if(i == 0 || j == 0){
		Node *temp1 = head;
		Node *temp2 = head;
	
		for(int k = 0; k < i-1; k++){
			temp1 = temp1->next;
		}
		Node *tempi = temp1->next;
	
		for(int k = 0; k < j-1; k++){
			temp2 = temp2->next;
		}
		Node *tempj = temp2->next;
		
		if(i == 0 && j == 0){
			return head;
		}
	
		else if(i == 0){
			temp2->next = head;
			Node *temp = tempj->next;
			tempi = head;
			tempj->next = tempi->next;
			tempi->next = temp;
			head = tempj;
			return head;
		}
		else{
			temp1->next = head;
			Node *temp = tempi->next;
			tempj = head;
			tempi->next = tempj->next;
			tempj->next = temp;
			head = tempi;
			return head;
		}
		
	}
	
	Node *temp1 = head;
	Node *temp2 = head;
	
	for(int k = 0; k < i-1; k++){
		temp1 = temp1->next;
	}
	Node *tempi = temp1->next;
	
	for(int k = 0; k < j-1; k++){
		temp2 = temp2->next;
	}
	Node *tempj = temp2->next;
	
	temp1->next = tempj;
	temp2->next = tempi;
	
	Node *temp = tempi->next;
	tempi->next = tempj->next;
	tempj->next = temp;
	
	return head;
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
	cout<<"Enter number of queries"<<endl;
	cin>>nchoices;
	for(int k = 0; k < nchoices; k++){
		Node *head = takeinput();
		cout<<"Enter the positions of node you want to swap"<<endl;
		int i,j;
		cin>>i>>j;
		head = swapnodes(head,i,j);
		print(head);
	}
}
