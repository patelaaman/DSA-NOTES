// Multiple inheritence is in we use the more then two class 
 // and inherits the all of class;
 /*
       [ A ]    [ B ]
          \  [c] /
*/
/*
In  Multiple inheritence we also create  more then two class  but child class inherit the property
of   multiple class  at a time
*/

//  Ambiguity problem  (Dimand problem multiple inh. mai  hoti hai)
// there may be a diamand  problem in a multiple inhe. if a only if the signature of the functio 
//   are saying for multiple class for which will be inherited by it
/*

#include<iostream>
using namespace std;
class A{
	public :
		 void result(){
		 	cout<<("Result 10 ");
		 }
};
class B{
	public :
		 void result(){
		 	cout<<("Result 12 ");
		 }
};
class C: public A,public B{
     	public :
		 void results(){
		 	cout<<("Result 12 ");
		 }
	 
};

int main(){
	C c;
	c.result();
	c.result();
}
*/


#include<iostream>
using namespace std;
class A{
	public :
		 A(){
		 	cout<<("A Constructor \n");
		 }
		 ~A(){
		 	cout<<"A Distructor\n";
		 }
};
class B{
	public :
		  B(){
		 	cout<<("B Constructor\n ");
		 }
		 ~B(){
		 	cout<<"B Distructor\n";
		 }
};
class C: public A,public B{
     	public :
		  C(){
		 	cout<<("c Constructor \n");
		 }
		 ~C(){
		 	cout<<"C Distructor\n";
		 }
	 
};

int main(){
	C c;

}
