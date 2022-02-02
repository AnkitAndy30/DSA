#include<climits>

class stackusingarray{
	int *data;
	int nextindex;
	int capacity;
	
	public:
		stackusingarray(int totalsize){
			data = new int[totalsize];
			nextindex = 0;
			capacity = totalsize;
		}
		
		int size(){
			return nextindex;
		}
		
		bool isempty(){
			return nextindex == 0;
			
			/*if(nextindex == 0){
				return true;
			}
			else{
				return false;
			}*/
		}
		
		void push(int element){
			if(nextindex == capacity){
				cout<<"Stack Overflow!!"<<endl;
				return;
			}
			data[nextindex] = element;
			nextindex++;
		}
		
		int top(){
			if(isempty()){
				return INT_MIN;
			}
			return data[nextindex-1];
		}
		
		int pop(){
			if(isempty()){
				cout<<"Stack Underflow"<<endl;
				return INT_MIN;
			}
			nextindex = nextindex - 1;
			return data[nextindex];
		}
		
};
