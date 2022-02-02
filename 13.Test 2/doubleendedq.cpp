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

class deq{
	node<T> *head;
	node<T> *tail;
	int size;
	int capacity;
	
	public:
		
		deq(int capacity){
			head = NULL;
			tail = NULL;
			size = 0;
			this->capacity = capacity;
		}	
		
		int getsize(){
			return size;
		}
		
		
		void insertfront(T data){
			if(size == capacity){
				return;
			}
			node<T> *n = new node<T>(data);
			if(head == NULL){
				head = n;
				tail = n;
			}
			else{
				n->next = head;
				head = n;
			}
			size++;
		}
		
		void insertrear(T data){
			if(size == capacity){
				return;
			}
			node<T> *n = new node<T>(data);
			if(head == NULL){
				head = n;
				tail = n;
			}
			else{
				tail->next = n;
				tail = n;
			}
			size++;
		}
		
		T deletefront(){
			if(size == 0){
				return -1;
			}
			else{
				node<T> *temp = head;
				T var = temp->data;
				if(head == tail){
					tail = tail->next;
				}
				head = head->next;
				delete temp;
				size--;
				return var;
			}
		}
		
		T deleterear(){
			if(size == 0){
				return -1;
			}
			
			else if(head == tail){
				T var = head->data;
				node<T> *tem = head;
				delete tem;
				head = NULL;
				tail = NULL;
				return var;
			}
			
			else{
				node<T> *temp = head;
				while(temp->next != tail){
					temp = temp->next;
				}
				T var = tail->data;
				node<T> *temps = tail;
				tail = temp;
				tail->next = NULL;
				delete temps;
				size--;
				return var;
			}
		}
		
		T getFront(){
			if(size == 0){
				return -1;
			}
			else{
				return head->data;
			}
		}
		
		T getrear(){
			if(size == 0){
				return -1;
			}
			else{
				return tail->data;
			}
		}
};
