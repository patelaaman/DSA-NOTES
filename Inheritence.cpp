//  Inheruiteance is use to inherits(aquare) the property of Parent class 
//  we can use different types of inheritence and atleast  two classes should be in any inheritense 
//  their are  5 type of inheritence 
 /*   1- single inh.  
    2- multiple inheritence
    3- multilevel inheritence
    4- Hierarchical inheritence
    5-  hybrid inheritence
*/
/*
 1- single inh.  => In a single inhe.  we use only two classes , where the 
  first class is called parent and the second  class is called child class . we create an object  of 
child class and access the data member and member function child class as well as parent class\
                         
                        Note -
    In inheritence we can use public ,private and protected modifire
    
    > In a single inhe. we use only two classes where the first class is called parent class 
    and the second class is to called child class and we an object of child class
     and inherit the property of by using public keyword
*/

/*

#include<iostream>
using namespace std;
class Parent{
	public :
		void display(){
			cout<<"parent class";
		}
	
};
class Child:public Parent{
	public :
		void show(){
			cout<<"child class";
		}
};
int main(){
	Child c;
	c.display();
	c.show();
	
	
}

*/

/*
   assign memory of parent class
   assign memory of child class
    
   child class 
   parent class 
   
   release  memory of child class
   release memory  of parent class

*/


#include<iostream>
using namespace std;
class Parent{
	public : Parent(){
		cout<<"assign memory of parent class\n";
	}
	~Parent(){
		cout<<"Release memory of parent class\n";
	}
	public :
		void display(){
			cout<<"parent class\n";
		}
	
};
class Child:public Parent{
		public : Child(){
		cout<<"assign memory of Child class\n";
	}
	~Child(){
		cout<<"Release memory of Child class\n";
	}
	public :
		void show(){
			cout<<"child class\n";
		}
};
int main(){
	Child c;
	c.display();
	c.show();
	
	
}



