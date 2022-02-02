#include<iostream>
using namespace std;

bool scontaint(string s,int si, int ei, string t){
	for(;;){
		if(t.length() == 1){
			if(t[0] == s[si]){
				return true;
			}
			else if(si >= ei){
				return false;
			}
			si++;
			continue;
		}
		if(si >= ei){
			return false;
		}
		if(t[0] == s[si]){
			break;
		}
		si++;
	}
	bool check = scontaint(s,si+1,ei,t.substr(1));
	return check;
}

int main(){
	string s,t;
	cout<<"Enter the string for s"<<endl;
	cin>>s;
	int si = 0, ei = s.length() - 1;
	cout<<"Enter the string for t"<<endl;
	cin>>t;
	cout<<scontaint(s,si,ei,t)<<endl;
}


/*#include <iostream>
 
using namespace std;
bool checkSequence(string a, string b)
{
      // if length of the b = 0
      // then we return true
      if(b.size() == 0)
        return true;
   
      // if length of a = 0
      // that means b is not present in
      // a so we return false
    if(a.size() == 0)
        return false;
 
    if(a[0] == b[0])
        return checkSequence(a.substr(1), b.substr(1));
    else
        return checkSequence(a.substr(1), b);
}
 
int main()
{
    string s1 = "abchjsgsuohhdhyrikkknddg", s2 = "coding";
 
    if (checkSequence(s1, s2))
        cout << "Yes";
    else
        cout << "No";
}*/
