#include<iostream>
using namespace std;
#include"Anktakeinputclass.cpp"

Node* takeinput_better(){
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
			tail = tail->next;
		}
		cout<<"Enter another number"<<endl;
		cin>>data;
	}
	return head;
}

int length_ll(Node *head){
	Node *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

int main(){
	
	int nchoices;
	cout<<"Enter number of queries"<<endl;
	cin>>nchoices;
	for(int i = 0; i < nchoices; i++){
		Node* head = takeinput_better();
		cout<<length_ll(head)<<endl;
	}
}
