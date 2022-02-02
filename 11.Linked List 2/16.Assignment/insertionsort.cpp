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

node *insertionsort(node *head,int length){
	int smallest = INT_MAX;
	node *small = NULL;
	node *traverse = head;
	while(traverse != NULL){
		if(traverse->data < smallest){
			smallest = traverse->data;
			small = traverse;
		}
		traverse = traverse->next;
	}
	cout<<"check 2"<<endl;
	traverse = head;
	while(traverse != small && traverse->next != small){
		traverse = traverse->next;
	}
	
	cout<<"check 3"<<endl;
	traverse->next = small->next;
	if(traverse != small){
		small->next = head;
	}
	head = small;
	
	//insertionsort
	int ite = 0;
	node *forward = head->next->next;
	node *prev = head->next;
	int index = 2;
	while(ite < length-2){
		node *rtempp = NULL;
		node *rtempf = NULL;
		bool check = false;
		for(int i = 0; i < index; i++){
			node *tempp = NULL;
			node *tempf = head;
			for(int j = 0; j < index-i-1; j++){
				tempp = tempf;
				tempf = tempf->next;
			}
			if(forward->data < tempf->data){
				rtempp = tempp;
				rtempf = tempf;
				check = true;
			}
			else{
				break;
			}
		}
		if(check){
			prev->next = forward->next;
			forward->next = rtempf;
			rtempp->next = forward;
			forward = prev->next;
		}
		else{
			forward = forward->next;
			prev = prev->next;
		}
		ite++;
		index++;
	}
	return head;
}

int lengthll(node *head){
	int length = 0;
	while(head != NULL){
		length++;
		head = head->next;
	}
	return length;
}

int main(){
	node *head = takeinput();
	int length = lengthll(head);
	head = insertionsort(head,length);
	cout<<"check 1"<<endl;
	print(head);
}
