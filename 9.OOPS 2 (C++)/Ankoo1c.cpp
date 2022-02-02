class Fraction{
	int numerator;
	int denominator;
	public:
	Fraction(int numerator, int denominator){
		this->numerator = numerator;
		this->denominator = denominator;
	}
	
	void simplify(){
		int temp = min(this->numerator,this->denominator);                        //this keyword
		int gcd = 1;
		for(int i = 1; i <= temp; i++){
			if((this->numerator%i == 0) && (this->denominator%i == 0)){           //this keyword
				gcd = i;
			}
		}
		this-> numerator = (this->numerator/gcd);
		this-> denominator = (this->denominator/gcd);
	}
	
	Fraction operator+(Fraction const &f){
		int num = ((this->numerator)*f.denominator) + ((this->denominator)*f.numerator);
		int den = (this->denominator)*f.denominator;
		
		Fraction fnew(num,den);
		fnew.simplify(); 
		return fnew;                     //return mistake
	}
	
	Fraction operator*(Fraction const &f){
		int num = (this->numerator)*f.numerator;
		int den = (this->denominator)*f.denominator;
		
		Fraction fnew(num,den);
		fnew.simplify();
		return fnew;                    //return mistake
	}
	
	void display(){
		cout<<this->numerator<<"/"<<this->denominator<<endl;
	}
};
