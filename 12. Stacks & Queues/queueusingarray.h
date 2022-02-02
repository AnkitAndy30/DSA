template<typename T>

class queueusingarray{
	T *data;
	int nextindex;
	int firstindex;
	int size;
	int capacity;
	
	public:
		queueusingarray(int s){
			data = new T[s];
			size = 0;
			firstindex = -1;
			nextindex = 0;
			capacity = s;
		}
		
		int getsize(){
			return size;
		}
		
		bool isempty(){
			return size == 0;
		}
		
		void enqueue(T element){
			if(size == capacity){
				cout << "Queue Full" << endl;
				return;
			}
			data[nextindex] = element;
			nextindex = (nextindex + 1) % capacity;
			if(firstindex == -1){
				firstindex = 0;
			}
			size++;
		}
		
		T front(){
			if(isempty()){
				cout << "Queue is Empty" << endl;
				return 0;
			}
			return data[firstindex];
		}
		
		T dequeue(){
			if(isempty()){
				cout << "Queue is empty" << endl;
				return 0;
			}
			T var = data[firstindex];
			firstindex = (firstindex + 1) % capacity;
			size--;
			if(size == 0){
				firstindex = -1;
				nextindex = 0;
			}
			return var;
		}
};
