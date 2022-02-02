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
	cout<<endl;
}

/*Node *mergell(Node* head1, Node* head2){
	Node *head = NULL;
	Node *ktrack = NULL;
	bool first = true;
	while(head1 != NULL && head2 != NULL){
		if(first){
			if(head1->data < head2->data){
				//cout<<head1->data<<"H-1"<<endl;
				Node *temp = new Node(head1->data);
				head = temp;
				head1 = head1->next;
			}
			else{
				//cout<<head2->data<<"H--2"<<endl;
				Node *temp = new Node(head2->data);
				head = temp;
				head2 = head2->next;
			}
			first = false;
			ktrack = head;
		}
		else{
			if(head1->data < head2->data){
				//cout<<head1->data<<"H'--1"<<endl;
				Node *temp = new Node(head1->data);
				ktrack->next = temp;
				ktrack = temp;
				head1 = head1->next;
			}
			else{
				//cout<<head2->data<<"H'--2"<<endl;
				Node *temp = new Node(head2->data);
				ktrack->next = temp;
				ktrack = temp;
				head2 = head2->next;
			}
		}	
	}
	if(head1 != NULL){
		while(head1 != NULL){
			//cout<<head1->data<<"H''--1"<<endl;
			Node *temp = new Node(head1->data);
			ktrack->next = temp;
			head1 = head1->next;
			ktrack = ktrack->next;
		}
	}
	else{
		while(head2 != NULL){
			//cout<<head2->data<<"H''--1"<<endl;
			Node *temp = new Node(head2->data);
			ktrack->next = temp;
			head2 = head2->next;
			ktrack = ktrack->next;
		}
	}
	return head;
}*/

Node *mergell(Node* head1, Node* head2){
	Node *fhead = NULL;
	Node *btail = NULL;
	bool first = true;
	while(head1 != NULL && head2 != NULL){
		if(first){
			if(head1->data < head2->data){
				//cout<<head1->data<<"H-1"<<endl;
				fhead = head1;
				btail = head1;
				head1 = head1->next;
			}
			else{
				//cout<<head2->data<<"H--2"<<endl;
				fhead = head2;
				btail = head2;
				head2 = head2->next;
			}
			first = false;
		}
		else{
			if(head1->data < head2->data){
				//cout<<head1->data<<"H'--1"<<endl;
				btail->next = head1;
				btail = head1;
				head1 = head1->next;
			}
			else{
				//cout<<head2->data<<"H'--2"<<endl;
				btail->next = head2;
				btail = head2;
				head2 = head2->next;
			}
		}	
	}
	if(head1 != NULL){
		btail->next = head1;
	}
	else{
		btail->next = head2;
	}
	return fhead;
}


int main(){
	int choices;
	cout<<"Enter number of choices"<<endl;
	cin>>choices;
	for(int i = 0; i < choices; i++){
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head = mergell(head1,head2);
		print(head);
	}
}
