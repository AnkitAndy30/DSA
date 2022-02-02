class Fraction{
	int numerator;
	int denominator;
	
	public:
		Fraction(int numerator,int denominator){
			this->numerator = numerator;
			this->denominator = denominator;
		}
		
		void print() const{
			cout<<numerator<<"/"<<denominator<<endl;
		}
		
		/*
		void operator++(){
			this->numerator = numerator + denominator;
		}
		-------- @1
		*/  
		
		/*
		Fraction operator++(){
			this->numerator = numerator + denominator;
			//or numerator = numerator + denominator;
			return *this;
		}
		---------@2
		*/
		
		Fraction& operator++(){
			numerator = numerator + denominator;
			// or this->numerator = numerator + denominator;
			return *this;
		} 
};
