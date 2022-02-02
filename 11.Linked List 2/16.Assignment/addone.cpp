#include<iostream>
using namespace std;
#include"commonclassn.cpp"

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

node *add1(node *head){
	node *prev = NULL;
	node *curr = head;
	node *next = NULL;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	node *addone = head;
	int quo = 1, rem = 0, i = 0; 
	while(addone != NULL){
		if(head->data < 9 && i == 0){
			addone->data = addone->data + 1;
			addone = NULL;
		}
		else{
			if(addone->next == NULL && quo == 1 && addone->data == 9){
				addone->data = addone->data + quo;
				quo = addone->data/10;
				rem = addone->data%10;
				addone->data = rem;
				node *temp = new node(quo);
				addone->next = temp;
				addone = addone->next;
			}
			else{
				addone->data = addone->data + quo;
				quo = addone->data/10;
				rem = addone->data%10;
				addone->data = rem;
			}
			addone = addone->next;
		}
		i++;
	}
	prev = NULL;
	curr = head;
	next = NULL;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	return head;
}

int main(){
	node *head = takeinput();
	head = add1(head);
	print(head);
}
