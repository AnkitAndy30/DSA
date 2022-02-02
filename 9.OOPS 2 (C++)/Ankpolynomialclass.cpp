class polynomial{
	int *poly;
	int size;
	
	public:
		polynomial(){
			poly = new int[5];
			size = 5;
			for(int i = 0; i < size; i++){
				poly[i] = 0;
			}
		}
		
		polynomial(polynomial const &p){
			this->poly = new int[p.size];
			for(int i = 0; i < p.size; i++){
				this->poly[i] = p.poly[i];
			}
			this->size = p.size;
		}
		
		void adjust(){
			int *newpoly = new int[2*size];
			for(int i = 0; i < size; i++){
				newpoly[i] = poly[i];
			}
			for(int j = size; j < 2*size; j++){
				newpoly[j] = 0;
			}
			delete [] poly;
			poly = newpoly;
			size *= 2;
		}
		
		void setCofficient(int coefficient, int degree){
			if(degree >= size){
				adjust();
			}
			poly[degree] = coefficient;
		}
		
		polynomial operator+(polynomial const &p){
			polynomial pnew;
			int maxsize = max(this->size,p.size);
			int minsize = min(this->size,p.size);
			while(pnew.size < maxsize){
				pnew.adjust();
			}
			
			if(p.size == this->size){
				for(int i = 0; i < size; i++){
					pnew.poly[i] = this->poly[i] + p.poly[i];
				}
			}
			else if(p.size > this->size){
				for(int i = 0; i < minsize; i++){
					pnew.poly[i] = this->poly[i] + p.poly[i];
				}
				
				for(int i = minsize; i < maxsize; i++){
					pnew.poly[i] = p.poly[i];
				}
			}
			else{
				for(int i = 0; i < minsize; i++){
					pnew.poly[i] = this->poly[i] + p.poly[i];
				}
				
				for(int i = minsize; i < maxsize; i++){
					pnew.poly[i] = this->poly[i];
				}
			}
			
			return pnew;
		}
		
		polynomial operator-(polynomial const &p){
			polynomial pnew;
			int maxsize = max(this->size,p.size);
			int minsize = min(this->size,p.size);
			while(pnew.size < maxsize){
				pnew.adjust();
			}
			
			if(p.size == this->size){
				for(int i = 0; i < size; i++){
					pnew.poly[i] = this->poly[i] - p.poly[i];
				}
			}
			else if(p.size > this->size){
				for(int i = 0; i < minsize; i++){
					pnew.poly[i] = this->poly[i] - p.poly[i];
				}
				
				for(int i = minsize; i < maxsize; i++){
					pnew.poly[i] = p.poly[i];
				}
			}
			else{
				for(int i = 0; i < minsize; i++){
					pnew.poly[i] = this->poly[i] - p.poly[i];
				}
				
				for(int i = minsize; i < maxsize; i++){
					pnew.poly[i] = this->poly[i];
				}
			}
			return pnew;
		}
		
		polynomial operator*(polynomial const &p){
			polynomial pnew;
			while(pnew.size < p.size + this->size){
				pnew.adjust();
			}
			
			for(int i = 0; i < p.size; i++){
				if(p.poly[i] != 0){
					for(int j = 0; j < this->size; j++){
						if(this->poly[j] != 0){
							pnew.poly[i+j] = p.poly[i]*this->poly[j] + pnew.poly[i+j];
						}
					}
				}
			}
			
			return pnew;
		}
		
		void operator=(polynomial const &p){
			while(p.size > size){
				adjust();
			}
			for(int i = 0; i < p.size; i++){
				poly[i] = p.poly[i];
			}
		}
		
		void print(){
			for(int i = 0; i < size; i++){
				if(poly[i] != 0){
					cout<<poly[i]<<"x"<<i<<" ";
				}
			}
			cout<<endl;
		}
};
