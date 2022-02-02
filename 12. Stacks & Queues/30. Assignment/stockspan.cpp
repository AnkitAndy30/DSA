#include<iostream>
using namespace std;
#include<stack>

int* stspan(stack<int> s, int days){
	int *stockspan = new int[days];
	stack<int> ts;
	
	int i = 0;
	while(!s.empty()){
		int var = s.top();
		s.pop();
		bool first = true;
		int count = 1;
		while(!s.empty()){
			if(var > s.top() && first){
				count++;
			}
			else{
				first = false;
			}
			ts.push(s.top());
			s.pop();
		}
		stockspan[i++] = count;
		while(!ts.empty()){
			s.push(ts.top());
			ts.pop();
		}
	}
	for(int k = 0, j = days-1; k < j; k++,j--){
		int temp = stockspan[k];
		stockspan[k] = stockspan[j];
		stockspan[j] = temp;
	}
	
	/*for(int p = 0; p < days; p++){
		cout << stockspan[p] << " ";
	}*/
	
	return stockspan;
}

int main(){
	cout << "Enter total number of days" << endl;
	int days;
	cin >> days;
	
	stack<int> s;
	cout << "Enter elements" << endl;
	for(int i = 0; i < days; i++){
		int elements;
		cin >> elements;
		s.push(elements);
	}
	
	int *stockspan = NULL;
	stockspan = stspan(s,days);
	
	for(int j = 0; j < days; j++){
		cout << stockspan[j] << " ";
	}
}
