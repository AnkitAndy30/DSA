#include<iostream>
using namespace std;
#include"Ankclassoo2.cpp"

int main(){
	Fraction f1(1,2);
	f1.print();
	cout<<"Check point 1"<<endl;
	(++f1).print();  //important **********************************************
	cout<<"Check point 1 end"<<endl;
	f1.print();
	
	//Fraction f2 = ++f1; jab humne apne pre increment operator ko overload kiya toh buffer memory mein ++f1 ke liye memory allocate hui jisme void type return hua uss void ko hum kehenge agar ki Fraction
	//f2 mein copy kar do toh copy nahi karega error aa jaaye ga
	//++(++f1);  same case here agar hum pehle ++f1 call karenge tab buffer yaa temporary memory create hogi ++f1 ke liye toh vo f1 ki value change karega par return mein since void hai toh void return 
	//hoga temporary memory mein aur fir hum ussi temporary meomory mein jisme void return hokar aaya hai uspar hum ++ overloaded operator fir call kar rahe hai joki bahut galat hai toh error aa jaayega  
	// ye tab hai jab return type void hai dono above cases mein overloaded operator mein  ---- @1
	
	
	/*
	Important
	Yahan par humne pehle ++f1 overloaded operator call kiya jisse hua yeh ki temporary memory mein yaa buffer memory mein ++f1 ke liye memory allocate hui aur f1 increment hokar 5/2 ho gaya aur fir humne
	ussi instant par yaa ussi temporary yaa allocated buffer memory par hi ++ overloaded operator again call kar diya aur iss moment par ab fir ek dusri/new temporary yaa buffer memory allocate hogi joki 
	++(previous temporary memory) ke jaise treat hogi jisse abki baar change f1 mein naa hokar uss previous buffer memory yaa temporary memory mein change hoga i.e. jo -----@2 mein ++ overlpaded operator
	hain vahan par jo numerator hai vo numerator bhi ab f1 ka nahi uss previous temprary memory kaa hoga uss previous temporary memory mein change ho jaane ke baad jo return *this statement hai vo hamari
	ussi previous temporary memory ke content ko return karega uss previous temporary memory ke content ko store ab hamari new temporary memory karegi aur fir copy constructor call kar ke 
	f3 = new temporary memory execute hoga toh hume f1 ke liye sirf 5/2 and f3 ke liye 7/2 print hoga
	
	Fraction f3 = ++(++f1);
	cout<<"Check point 2"<<endl;
	f1.print();
	cout<<"Check point 2 end"<<endl;
	f3.print();
	
	*/
	
	Fraction f2 = ++(++f1);
	f1.print();
	f2.print();    //now perfect   iska explanation notes mein hai
}
