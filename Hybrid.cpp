// Hybrid inheritance
#include<iostream>
using namespace  std;
class A{
		public : 
	void boss(){
		cout<<"University";
	}
};
class B:public A{
	public : 
	void student(){
		cout<<"\ntit student";
	}
};
class C{
		public : 
	void student(){
		cout<<"\noist student";
	}
};
class D: public C{
		public : 
	void student(){
		cout<<"\nlnct student";
	}
};
class E: public D{
		public : 
	void student(){
		cout<<"\nlnct student";
	}
};
class F: public B, public E{
		public : 
	void student(){
		cout<<"\nlnct student";
	}
};
int main(){
	
	
	F  f1;
     f1.boss();
     f1.student();
}
