#include<iostream>
using namespace std;
class A{
	public :
		void f1(){
			cout<<"class A";
		}
};
class B:public A{
	public :
		void f2(){
			cout<<"class B";
		}
};
class C:public A{
	public :
		void f3(){
			cout<<"class C";
		}
};
class E :public B,public C{
	public :
		void f4(){
			cout<<"class E";
		}
};
int main(){
	E obj;
	obj.f4();
	obj.f3();
	obj.f2();
}
