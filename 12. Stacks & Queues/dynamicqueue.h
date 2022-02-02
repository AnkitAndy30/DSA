template<typename T>

class queue{
	T *data;
	int size;
	int nextindex;
	int firstindex;
	int capacity;
	
	public:
		queue(int s){
			data = new T[s];
			nextindex = 0;
			size = 0;
			firstindex = -1;
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
				T *newdata = new T[2 * capacity];
				int j = 0;
				for(int i = firstindex; i < capacity; i++){
					newdata[j] = data[i];
					j++; 
				}
				for(int i = 0; i < firstindex; i++){
					newdata[j] = data[i];
					j++; 
				}
				delete [] data;
				data = newdata;
				firstindex = 0;
				nextindex = capacity;
				capacity *= 2;
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
			return var;
		}
};
