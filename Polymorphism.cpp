/*
 Polymorphism ->
          it is derives from lattin words  poly + morphism 
          
                  PolyMorphism 
                /               \
   ( compile time poly.)        ( Runtime poly.)
function overloading               function Overriding
  Normal Object                    - virtual function
    (static)                       - Abstract class 
                                   - pointer Object 
                                   - Normal obj
                                   (Dynamic)
     
	 compile time(Early binding) ka example mai hum passbook ka use karte hai only jis bank ka hai wahi jama ...
	 Runtime poly.(late binding) ka example mai ATM ki help se kahi se bhi paisa nikal sakte                             

        jis class ke ander virtual function hota hai wahi base(Super class) kahlati hai
        
        virtualfunction banate haito chahe wo function banaye ya na banaye child class main
 */
 
 
 /*
#include<iostream>
using namespace std;
class RBI{
	public :
		virtual void loan(){    // super class
			cout<<"RBI\n";
		}
};
class axis: public RBI{
	public :
		void loan(){
			cout<<"axis customer\n";
		}
};
class sbi:public RBI{
	public :
		void loan(){
			cout<<"sbi customer\n";
		}
};
class unb :public RBI{
	public :
		void loan(){
			cout<<"Union customer";
		}
};
int main(){
    RBI *r;
    RBI r1;
    r1->loan(); 
    axis a;
    r = &a;
    r->loan();
     
}

*/


//   pure virtual fucntion
// jab bhi pure vir. function banate hai to child class ko funtion() banana hi padega jise
// virtual banaya hai\
// eshme pure virtual fucntion jish naam se hai wo ushi naam ke function bas ko call karega
// parent obj or pure v. f. obj

// non virtual function ko call nahi kar sakta
#include<iostream>
using namespace std;
class RBI{
	public :
		virtual void loan()=0;  // pure virtual function or abstract class
			void msg(){
			cout<<"msg axis \n";
		}
};
class axis: public RBI{
	public :
		void loan(){
			cout<<"axis customer\n";
		}
		void msg(){
			cout<<"msg axis \n";
		}
};
class sbi:public RBI{
	public :
		void loan(){
			cout<<"sbi customer\n";
		}
};
class unb :public RBI{
	public :
		void loan(){
			cout<<"Union customer";
		}
};
int main(){
    RBI *r;
 //   RBI r1;         // ishka normal object nahi bana sakte hai 
     r->msg();
    axis a;
    r = &a;
    r->loan();
 //    r->msg();  //  this is wrong
     a.msg();     // this is write
     
}


