//Polymorphishm

#include<iostream>
using namespace std;

class RBI{
	public :
		virtual void loan()=0;
		void mesg(){
			cout<<"Welcome To RBI \n";
		}
};
class SBI : public RBI {
	public :
		void loan(){
			cout<<"SBI 8.5% \n";
		}
};
class AXIS :public RBI{
	public :
		void loan(){
			cout<<"AXIS is 7.5% \n";
			
		}
};
int main(){
	RBI *R;
	SBI s;
	R = &s;
	R->loan();
	AXIS a;
	R = &a;
	R->loan();
}
