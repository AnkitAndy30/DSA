#include<iostream>
using namespace std;
#include"palindromenodeclass.cpp"

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

bool palindrome(Node *head){
	int length = 0;
	Node *temp = head;
	while(temp != NULL){
		temp = temp->next;
		length++;
	}
	int mid = length/2;
	
	Node *temp1 = head;
	
	if(mid%2 == 0){
		for(int i = length; i > mid; i--){
			temp = head;
			for(int j = 0; j < i-1; j++){					// 1	2	3	4
				temp = temp->next;
			}
			if(temp1->data != temp->data){
				return false;
			}
			temp1 = temp1->next;
		}
	}
	else{
		for(int i = length; i > mid; i--){
			temp = head;									// 1	2	1
			for(int j = 0; j < i-1; j++){					// 1	2	3	2	1
				temp = temp->next;
			}
			if(temp1->data != temp->data){
				return false;
			}
			temp1 = temp1->next;
		}
	}
	return true;
}

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}

int main(){
	int nchoices;
	cout<<"Enter number of queries"<<endl;
	cin>>nchoices;
	for(int i = 0; i < nchoices; i++){
		Node *head = takeinput();
		bool check = palindrome(head);
		if(check){
			cout<<"True"<<endl;
		}
		else{
			cout<<"False"<<endl;
		}
	}
}
