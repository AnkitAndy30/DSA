class Fraction{
	int numerator;
	int denominator;
	
	public:
		Fraction(int numerator, int denominator){
			this->numerator = numerator;
			this->denominator = denominator;
		}
		
		void print(){
			cout<<this->numerator<<"/"<<this->denominator<<endl;
		}
		
		void simplify(){
			int gcd = 1;
			int temp = min(numerator,denominator);
			for(int i = 1; i < temp; i++){
				if(numerator%i == 0 && denominator%i == 0){
					gcd = i;
				}
			}
			numerator = numerator/gcd;
			denominator = denominator/gcd;
		}
		
		Fraction operator++(int){
			Fraction fnew(numerator,denominator);
			fnew.simplify();
			numerator = numerator + denominator;
			simplify();
			return fnew;
		}
		
		Fraction& operator+=(Fraction const &f2){
			int lcm = denominator*f2.denominator;
			int x = lcm/denominator;
			int y = lcm/f2.denominator;
			
			int num = x*numerator + y*(f2.numerator);
			numerator = num;
			denominator = lcm;
			simplify();
			return *this;
		}
		
};
