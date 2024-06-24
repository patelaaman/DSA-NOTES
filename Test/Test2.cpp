/*
@ 1
There is a array of marks of n student .
marks[6]={23,44,55,36,38,45}
WAP to find out the maximum and the minimum
  marks of the  students.
*/
/*
#include <iostream> 
using namespace std;

int main() {
    int marks[] = {23, 44, 55, 36, 38, 45};
    int n = sizeof(marks) / sizeof(marks[0]);

    int max_mark = marks[0];
    int min_mark = marks[0];

    for (int i = 1; i < n; ++i) {
        if (marks[i] > max_mark) {
            max_mark = marks[i];
        }
        if (marks[i] < min_mark) {
            min_mark = marks[i];
        }
    }

    std::cout << "Maximum mark: " << max_mark << endl;
    std::cout << "Minimum mark: " << min_mark << endl;

    return 0;
}

*/


/*
@ 2
WAP to create a class  BanK .
#data member: int accountNumber,balance;
#member function: parameterized_constructor(),void withdraw() 
,void deposite(), void currentbalance().
# first user intitailized data members with input values.
# deposite can add balance
# withdrawn can deduct balance

*/



/*

#include<iostream>
using namespace std;

class Bank
{
        int acc_no;
        float Balance;  
   public:
        Bank(int acc, float Bal)  
        {
                acc_no=acc;
                Balance=Bal;
        }
        void deposit();
        void withdraw();
        void Show();
};
void Bank::deposit()  
{
        int DepA;
        cout<<" Enter Deposit Amount = "<<endl;
        cin>>DepA;
        Balance+=DepA;
}
void Bank::withdraw()  
{
        int WithdrawAmmount1;
        cout<<" Enter Withdraw Amount = "<<endl;
        cin>>WithdrawAmmount1;
        if(WithdrawAmmount1>Balance)
                cout<<" Cannot Withdraw Amount"<<endl;
        Balance-=WithdrawAmmount1;
}
void Bank::Show()  
{
        cout<<" *************"<<endl;
        cout<<" Accout No. : "<<acc_no;
        cout<<" Balance : "<<Balance;  
}
int main()
{
        int acc_no;
        
        float Balance;
        cout<<" Enter Details: "<<endl;
        cout<<"***********"<<endl;
        cout<<" Accout No. "<<endl;
        cin>>acc_no;
        cout<<" Balance : "<<endl;
        cin>>Balance;
  
        Bank b1(acc_no, Balance);  
        b1.deposit(); 
        b1.withdraw();
        b1.Show(); 
        return 0;
}

*/



/*
@3
Create a class named Message.Use function overloading and create a function mymessage()
with no parameter and with string parameter, if nothing is passed to it,
then the message "I love programming languages" should be printed.
If some String is passed to it as a parameter, then in place of "programming languages"
the name of that String variable should be printed.
For example, if we pass "cpp", then "I love cpp" should be printed.

*/

/*
#include<iostream>
#include<string>
using namespace std;
 
 class Message{
 	public :
 	 void mymessage(){
 	 	cout<<"I Love Programming language :\n";
	  }
	 
	 void mymessage(string name){
	 	cout<<" I Love "<<name;
	 }
 };

int main(){
	Message msg;
	msg.mymessage();
	cout<<"\n";
	msg.mymessage("C++");
	return 0;
}

*/

/*
@ 4
Create a hierarchy inheritance of class Shapes (e.g., Circle, Square, Triangle) using inheritance. 
Implement a virtual function calculateArea() in the base class, 
and override it in each derived class. 

*/

/*
#include<iostream>
using namespace std;
class Shape{
	public :
	virtual void calculateArea() =0;
};
class Circle : public Shape{
	private :
		 float radius;
    public :
    	Circle(float r){
    		radius  = r;
		}
		void calculateArea() override{
			cout<<" Area of circle is = "<<3.14*radius*radius;
		}
};
class  Square : public Shape{
	private :
		int s;
    public :
    	 Square(int sq){
    	 	s = sq;
		 }
		 void calculateArea(){
		 	cout<<"\n Square = "<<s*s;
		 }
};
class  Triangle : public Shape{
	private :
		float base ,height;
	public :
		Triangle(float b, float h){
			base = b;
			height = h;
		}
		void calculateArea(){
			cout<<"\n Area of Trangle = "<<0.5*base*height;
		}
};

int main(){
	Circle cir(5);
	cir.calculateArea();
	Square sq(5);
	sq.calculateArea();
	Triangle tr(3,5);
	tr.calculateArea();
}

*/




/*
@ 5
WAP to create a Abstract class named System having pure virtual fun() process() ,input(), output().
create child class desktop and laptop and create some instance.
*/

/*
#include<iostream>
using namespace std;

class System{
	public :
	virtual void process() = 0;
	virtual void input() =0;
	virtual void output() = 0;
	
};

class Desktop :public System {
	public :
		void process(){
			cout<<" Desktop process :"<<endl;
		}
		void input(){
				cout<<" Desktop input :"<<endl;
		}
		void output(){
				cout<<" Desktop output :"<<endl;
		}
};

class  Laptop :public System {
	public:
	    void process(){
			cout<<" Laptop process :"<<endl;
		}
		void input(){
				cout<<" Input input :"<<endl;
		}
		void output(){
				cout<<" Output output :"<<endl;
		}
};
int main(){
	Desktop d;
	d.process();
	d.input();
	d.output();

    Laptop L ;
    L.process();
    L.input();
    L.output();
}
*/



