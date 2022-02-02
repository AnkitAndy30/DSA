//stack using template or generic stack

template<typename T>

class stack{
	T *data;
	int nextindex;
	int capacity;
	
	public:
		stack(){
			data = new T[4];
			nextindex = 0;
			capacity = 4;
		}
		
		int size(){
			return nextindex;
		}
		
		bool isempty(){
			return nextindex == 0;
		}
		
		void push(T element){
			if(nextindex == capacity){
				T *newdata = new T[2 * capacity];
				for(int i = 0; i < capacity; i++){
					newdata[i] = data[i];
				}
				delete [] data;
				data = newdata;
				capacity *= 2;
			}
			data[nextindex++] = element;
		}
		
		T pop(){
			if(isempty()){
				cout<<"Stack Underflow !!"<<endl;
				return 0;
			}
			//nextindex--;
			return data[--nextindex];
		}
		
		T top(){
			if(isempty()){
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			return data[nextindex-1];
		}
};
