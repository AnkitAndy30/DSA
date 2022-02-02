class DynamicArray{
	int *data;
	int nextIndex;
	int size;
	
	public:
		DynamicArray(){
			data = new int[5];
			nextIndex = 0;
			size = 5;
		}
		
		void insert(int element){
			if(nextIndex == size){
				int *newdata = new int[2*size];
				for(int i = 0; i < size; i++){
					newdata[i] = data[i];
				}
				delete [] data;
				data = newdata;
				size *=2;
			}
			data[nextIndex] = element;
			nextIndex++;
		}
		
		DynamicArray(DynamicArray const &d){
			//this->data = d.data;  Shallow Copy
			this->data = new int[d.size];
			for(int i = 0; i < d.size; i++){
				this->data[i] = d.data[i];
			}
			this->nextIndex = d.nextIndex;
			this->size = d.size;
		}
		
		void operator=(DynamicArray const &d){
			//this->data = d.data;  Shallow Copy
			this->data = new int[d.size];
			for(int i = 0; i < d.size; i++){
				this->data[i] = d.data[i];
			}
			this->nextIndex = d.nextIndex;
			this->size = d.size;
		}
		
		void insert_at_specific_loc(int element,int index){
			if(index < nextIndex){
				data[index] = element;
			}
			else if(index == nextIndex){
				insert(element);
			}
			else{
				return;
			}
		}
		
		void print(){
			for(int i = 0; i < nextIndex; i++){
				cout<<data[i]<<" ";
			}
			cout<<endl;
		}
};
