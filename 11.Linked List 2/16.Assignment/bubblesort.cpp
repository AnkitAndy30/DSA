#include<iostream>
using namespace std;
#include"commonclassn.cpp"
#include<climits>

node *takeinput(){
	int data;
	cout<<"Enter an integer"<<endl;
	cin>>data;
	node *head = NULL;
	node *tail = NULL;
	while(data != -1){
		node *n = new node(data);
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

void print(node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int lenll(node *head){
	int length = 0;
	while(head != NULL){
		length++;
		head = head->next;
	}
	return length;
}

node *bubblesort(node *head, int length){
	if(head == NULL){
		return head;
	}
	node *small = NULL;
	node *traverse = head;
	int smallest = INT_MAX;
	while(traverse != NULL){
		if(traverse->data < smallest){
			small = traverse;
			smallest = traverse->data;
		}
		traverse = traverse->next;
	}
	traverse = head;
	while(traverse->next != small){
		traverse = traverse->next;
	}
	traverse->next = small->next;
	small->next = head;
	head = small;
	//bubble sort
	
	int count = 0;
	while(count != length){
		node *temp = head->next;
		node *tempprev = head;
		while(temp->next != NULL){
			if(temp->data > temp->next->data){
				node *t = temp->next;
				temp->next = t->next;
				t->next = temp;
				tempprev->next = t;
			}
			else{
				temp = temp->next;
			}
			tempprev = tempprev->next;
		}
		count++;
	}
	return head;
}

int main(){
	node *head = takeinput();
	int length = lenll(head);
	head = bubblesort(head,length);
	if(head != NULL){
		print(head);
	}
	else{
		cout<<" "<<endl;
	}
}
