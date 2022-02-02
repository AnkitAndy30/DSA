#include<iostream>
using namespace std;
#include"Anktakeinputclass.cpp"

Node* takeinput(){
	char choice;
	cout<<"Enter C for continue to take input"<<endl;
	cin>>choice;
	int data;
	cout<<"Enter value"<<endl;
	cin>>data;
	Node *head = NULL;
	while(choice == 'C'){
		Node *n = new Node(data);
		if(head == NULL){
			head = n;
		}
		else{
			Node *temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = n;
		}
		cin>>data;
		cout<<"Enter C for continue to take input"<<endl;
		cin>>choice;
	}
	return head;
}

void print(Node* head){
	Node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main(){
	Node *head = takeinput();
	print(head);
}
