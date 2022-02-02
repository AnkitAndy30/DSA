#include<iostream>
using namespace std;
#include"evenafteroddclass.cpp"

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}


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
	//print(head);
	return head;
}

int countodd(Node *head){
	int count = 0;
	while(head != NULL){
		if(head->data%2 != 0){
			count++;
		}
		head = head->next;
	}
	return count;
}

Node* evenafterodd(Node* head){
	int count = countodd(head);
	for(int i = 0; i < count; i++){
		Node *checkeven = head;
		Node *pevenptr = head;
		bool lag1 = false;
		while(checkeven->data%2 != 0){
			checkeven = checkeven->next;
			if(lag1){
				pevenptr = pevenptr->next;
			}
			lag1 = true;
		}
		if(head->data%2 == 0){
			Node* findodd = checkeven->next;
			Node *poddptr = checkeven;
			while(findodd->data%2 == 0){
				if(findodd->next == NULL){         //important line i missed 
					return head;
				}
				findodd = findodd->next;
				poddptr = poddptr->next;
			}
			poddptr->next = findodd->next;
			findodd->next = checkeven;
			head = findodd;
			//print(head);
		}
		else{
			Node* findodd = checkeven->next;
			Node *poddptr = checkeven;
			while(findodd->data%2 == 0){
				if(findodd->next == NULL){      //included after test case failure
					return head;
				}
				findodd = findodd->next;
				poddptr = poddptr->next;
			}
			poddptr->next = findodd->next;
			findodd->next = checkeven;
			pevenptr->next = findodd;
		}
	}
	//print(head);
	return head;
}

int main(){
	Node *head = takeinput();
	//print(head);
	head  = evenafterodd(head);
	print(head);
}
