#include<iostream>]
using namespace std;
class First{
	int a=0;
	public :
		void operator ++(){
			a= a+1;
			cout<<a<<"\n";
		}
		void operator --(){
			a = a-1;
			cout<<a<<endl;
		}
};
int main(){
	First f1;
	++f1;
	--f1;
}
