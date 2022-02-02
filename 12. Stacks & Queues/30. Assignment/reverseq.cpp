#include<iostream>
using namespace std;
#include<queue>

queue<int> revkq(queue<int> q, int n,int k){
	queue<int> temp;
	int arr[k];
	for(int i = 0; i < k; i++){
		arr[i] = q.front();
		q.pop();
	}
	
	for(int i = k-1; i > -1; i--){
		temp.push(arr[i]);
	}
	
	for(int i = k; i < n; i++){
		temp.push(q.front());
		q.pop();
	}
	
	for(int i = 0; i < n; i++){
		q.push(temp.front());
		temp.pop();
	}
	
	return q;
}

int main(){
	cout << "Enter the number of elements in the queue" << endl;
	int n;
	cin >> n;
	
	queue<int> q;
	cout << "Enter the elements in the queue" << endl;
	int elements;
	for(int i = 0; i < n; i++){
		cin >> elements;
		q.push(elements);
	}
	
	cout << "Enter the number of elements you want to reverse" << endl;
	int k;
	cin >> k;
	
	q = revkq(q,n,k);
	for(int i = 0; i < n; i++){
		cout << q.front() << " ";
		q.pop();
	}
}
