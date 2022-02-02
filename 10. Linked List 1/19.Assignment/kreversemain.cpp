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

/*Node *kreversal(Node* head,int k){
	int mid = k/2;
	Node *temp1 = head;
	Node *tempi = head;
	for(int i = 0; i < mid; i++){
		Node* tempj = head;
		Node *temp2 = head;
		for(int j = 0; j < k-i-1; j++){
			tempj = tempj->next;
			if(j != 0){
				temp2 = temp2->next;
			}
		}
		
		if(i == 0){
			Node *temp = tempj->next;
			tempj->next = tempi->next;
			tempi->next = temp;
			temp2->next = tempi;
			head = tempj;
			temp1 = head;
		}
		else{
			Node *temp = tempj->next;
			temp1->next = tempj;
			temp2->next = tempi;
			tempj->next = temp2;
			tempi->next = temp;
			temp1 = temp1->next;
			/*Node *temp = tempj->next;     ***********bad idea don't change the target node next first rather change previous of the terget nodes first*************** 
			tempj->next = tempi->next;
			tempi->next = temp;
			temp2->next = tempi;
			temp1->next = tempj;
			temp1 = temp1->next;* /
			
		}
		tempi = temp1->next;
		print(head);
		cout<<endl;
	}
	return head;
}*/

int lengthll(Node *head){
	int length = 0;
	while(head != NULL){
		head = head->next;
		length++;
	}
	return length;
}

Node *kreversal(Node* head,int k){
	int mid = k/2;
	int length = lengthll(head);
	Node *temp1 = head;
	Node *tempi = head;
	int l = 0; 
	while((k <= (length - l*k) && k != 0)){
		if(l == 0){
		for(int i = 0; i < mid; i++){
		Node* tempj = head;
		Node *temp2 = head;
		for(int j = 0; j < k-i-1; j++){
			tempj = tempj->next;
			if(j != 0){
				temp2 = temp2->next;
			}
		}
		
		if(i == 0){
			Node *temp = tempj->next;
			tempj->next = tempi->next;
			tempi->next = temp;
			temp2->next = tempi;
			head = tempj;
			temp1 = head;
		}
		else{
			Node *temp = tempj->next;
			temp1->next = tempj;
			temp2->next = tempi;
			tempj->next = temp2;
			tempi->next = temp;
			temp1 = temp1->next;
		}
		tempi = temp1->next;
		}
	}
	
	else{
		Node *nextptr = head;
		Node *pptr = head;
		for(int i = 0; i < l*k; i++){
			nextptr = nextptr->next;
			if(i != 0){
				pptr = pptr->next;
			}
		}
		temp1 = nextptr;
		tempi = nextptr;
		for(int i = 0; i < mid; i++){
			Node *temp2 = nextptr;
			Node *tempj = nextptr;
			for(int j = 0; j < k-i-1; j++){
				tempj = tempj->next;
				if(j != 0){
					temp2 = temp2->next;
				}
			}
			
			if(i == 0){
				Node *temp = tempj->next;
				pptr->next = tempj;
				temp2->next = tempi;
				tempj->next = temp1->next;
				tempi->next = temp;
				temp1 = tempj;
				nextptr = tempj;
			}
			else{
				Node *temp = tempj->next;
				temp1->next = tempj;
				temp2->next = tempi;
				tempj->next = tempi->next;
				tempi->next = temp;
				temp1 = tempj;
				nextptr = pptr->next;
				temp1 = temp1->next;
			}
			tempi = temp1->next;
		}
	}
		l++;
}
if((length - l*k) != 0){
	while(k%(length - l*k) == 0 && (length - l*k) > 0 && k != 0 ){
		Node *nextptr = head;
		Node *pptr = head;
		int le = length - l*k;
		int middle = le/2;
		for(int i = 0; i < l*k; i++){
			nextptr = nextptr->next;
			if(i != 0){
				pptr = pptr->next;
			}
		}
		Node *temp1 = nextptr;
		Node *tempi = nextptr;
		for(int m = 0; m < middle; m++){
			Node *tempj = nextptr;
			Node *temp2 = nextptr;
			for(int i = 0; i < le-m-1; i++){
				tempj = tempj->next;
				if(i != 0){
					temp2 = temp2->next;
				}
			}
			if(m == 0){
				Node *tem = tempj->next;
				temp2->next = tempi;
				pptr->next = tempj;
				tempj->next = tempi->next;
				tempi->next = tem;
				temp1 = tempj;
				nextptr = tempj;
			}
			else{
				Node *tem = tempj->next;
				temp2->next = tempi;
				temp1->next = tempj;
				tempj->next = tempi->next;
				tempi->next = tem;
				temp1 = tempj;
				temp1 = temp1->next;
				nextptr = pptr->next;
			}
			tempi = temp1->next;
		}
		l++;
	}
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
