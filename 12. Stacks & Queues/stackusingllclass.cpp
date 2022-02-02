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

class stack{
	node<T> *head;
	int size;
	
	public:
		stack(){
			head = NULL;
			size = 0;
		}
		
		int getsize(){
			return size;
		}
		
		bool isempty(){
			return size == 0;
		}
		
		void push(T element){
			node<T> *n = new node<T>(element);
			n->next = head;
			head = n;
			size++;
		}
		
		T pop(){
			if(isempty()){
				cout<<"Stack Underflow";
				return 0;
			}
			size--;
			node<T> *temp = head;
			head = head->next;
			T var = temp->data;
			delete temp;
			return var;
		}
		
		T top(){
			if(isempty()){
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			return head->data;
		}
};
