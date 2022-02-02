template<typename T>

class node{
	public:
		T data;
		node<T> *next;
		
		node(T data){
			this->data = data;
			next = NULL;
		}
};

template<typename T>

class queue{
	node<T> *head;
	node<T> *tail;
	int size;
	
	public:
		queue(){
			head = NULL;
			tail = NULL;
			size = 0;
		}
		
		int getsize(){
			return size;
		}
		
		bool isempty(){
			return size == 0;
		}
		
		void enqueue(T element){
			node<T> *newnode = new node<T> (element);
			if(head == NULL){
				head = newnode;
				tail = newnode;
			}
			tail->next = newnode;
			tail = newnode;
			size++;
		}
		
		T front(){
			if(isempty()){
				cout << "Queue is empty" << endl;
				return 0;
			}
			return head->data;
		}
		
		T dequeue(){
			if(isempty()){
				cout << "Queue is empty" << endl;
				return 0;
			}
			node<T> *temp = head;
			T var = temp->data;
			head = head->next;
			delete temp;
			size--;
			return var;
		}
};
