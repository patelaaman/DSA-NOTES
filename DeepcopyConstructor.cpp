#include<iostream>
using namespace std;
class top{
	int a;
	int *p;
	public :
		top(){
			a = 0;
			p = new int;
			p = 0;
		}
		
		top(top &obj){
			a = obj.a;
			p= new int ;
			*p = *(obj.p);
		}
		top(int a1,int p1){
			a = a1;
			p = &p1;
		}
		void update(){
			a = a+1;
			*p = *p+1;
		}
		void show(){
			cout<<" a = "<<a;
			cout<< " p = "<<*p;
		}
};

int main(){
	top t1(10,20);
	t1.show();
	top t2(t1);
	t2.update();
	t2.show();
	t1.show();
}
