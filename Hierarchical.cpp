//Hierarchical inheritance    =>
/* in a hierachical inhe. there are a multiple class  and each class inherit the root class 
  it mean to say each and every child class having  coman class
   exple- RBI has many branch
   
         
*/
#include<iostream>
using namespace  std;
class rgpv{
		public : 
	void boss(){
		cout<<"University";
	}
};
class tit:public rgpv{
	public : 
	void student(){
		cout<<"\ntit student";
	}
};
class oist: public rgpv{
		public : 
	void student(){
		cout<<"\noist student";
	}
};
class lnct: public rgpv {
		public : 
	void student(){
		cout<<"\nlnct student";
	}
};
int main(){
	oist o1;
	o1.student();
	o1.student();
	
	lnct l1;
	l1.student();
	l1.student();
}
