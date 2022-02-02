#include<iostream>
using namespace std;
#include"kreverseclass.cpp"

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

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int lengthll(Node *head){
	int length = 0;
	while(head != NULL){
		head = head->next;
		length++;
	}
	return length;
}

Node *kreversal(Node* head, int k){
	if(k == 0){
		return head;
	}
	int length = lengthll(head);
	int l = 0;
	Node *prev = NULL;
	Node *current = head;
	Node *forward = NULL;
	Node *linker = head;
	while(k <= (length - k*l)){
		if(l == 0){
			int i = 0;
			while(i < k){
				forward = current->next;
				current->next = prev;
				prev = current;
				current = forward;
				i++;
			}
			head = prev;
			prev = NULL;
		}
		//print(head);
		else{
			int i = 0;
			while(i < k){
				forward = current->next;
				current->next = prev;
				prev = current;
				current = forward;
				i++;
			}
			linker->next = prev;
			while(linker->next != NULL){
				linker = linker->next;
			}
			prev = NULL;
			
		}
		l++;
	}
	while((length > l*k) && k % (length - l*k) == 0){
		int i = 0;
		while(i < length - l*k){
			forward = current->next;
			current->next = prev;
			prev = current;
			current = forward;
			i++;
		}
		linker->next = prev;
		l++;
	}
	return head;
}

int main(){
	int nchoices;
	cout<<"Enter number of choices"<<endl;
	cin>>nchoices;
	for(int i = 0; i < nchoices; i++){
		Node *head = takeinput();
		print(head);
		cout<<"Enter number of nodes you want to reverse"<<endl;
		int k;
		cin>>k;
		head = kreversal(head,k);
		print(head);
	}
}
