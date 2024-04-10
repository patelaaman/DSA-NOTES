// Shallow Copy Constructor
#include<iostream>
using namespace std ;

class top{
	int a, b;
	public :
		top(int a ,int b){
			/*
			a  = a;
			b = b;
			giving a garbage value
			*/
			this->a = a;
			this->b = b;
		}
	top(){
		a = 90;
	}
	void show(){
			cout<<"value of a ="<<a<<"\n";
			cout<<"value of b ="<<b<<"\n";
		}
	void display(){
		cout<<"a ="<<a;
	}
		
};

int main(){
	top t(3,4);
	top t2(t);// top t2=t;  //calling copy constructor Explicitly
	
	t2.show();
	top n1;
	top n2;
	n2=n1;              // Implicitly Assignment copy constructor
	n2.display();
}
