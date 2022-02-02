template<typename T, typename U>

class Pair{
	T x;
	U y;
	
	public:
		void setx(T x){
			this->x = x; 
		}
		
		T getx(){
			return x;
		}
		
		void sety(U y){
			this->y = y;
		}
		
		U gety(){
			return y;
		}
};
