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

node *mergesort(node *head){
	if(head == NULL || head->next == NULL){
		return head;
	}
	node *fast = head->next;
	node *slow = head;
	while(fast != NULL && fast->next != NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	node *breaker = slow->next;
	slow->next = NULL;
	head = mergesort(head);
	breaker = mergesort(breaker);
	node *list1 = head;
	node *list2 = breaker;
	bool first = true;
	node *joiner = NULL;
	while(list1 != NULL && list2 != NULL){
		if(first){
			if(list1->data < list2->data){
				joiner = list1;
				list1 = list1->next;
				head = joiner;
			}
			else{
				joiner = list2;
				list2 = list2->next;
				head = joiner;
			}
			first = false;
		}
		else{
			if(list1->data < list2->data){
				joiner->next = list1;
				list1 = list1->next;
				joiner = joiner->next;
			}
			else{
				joiner->next = list2;
				list2 = list2->next;
				joiner = joiner->next;
			}
		}
	}
	if(list1 != NULL){
		joiner->next = list1;
	}
	else{
		joiner->next = list2;
	}
	return head;
}

int main(){
	node *head = takeinput();
	head = mergesort(head);
	if(head != NULL){
		print(head);
	}
	else{
		cout<<" "<<endl;
	}
}
