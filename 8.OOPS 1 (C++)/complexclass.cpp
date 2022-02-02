class complecx{
	int real;
	int imaginary;
	public:
		complecx(int a,int b){
			real = a;
			imaginary = b;
		}
		
		void print(){
			cout<<real<<' '<<'+'<<' '<<'i'<<imaginary<<endl;
		}
		
		void add(complecx const &c){
			real = real + c.real;
			imaginary = imaginary + c.imaginary;
		}
		
		void multiply(complecx const &c){
			int temp = real*c.real - imaginary*c.imaginary;                            
			imaginary = real*c.imaginary + imaginary*c.real;
			real = temp;
		}
};
