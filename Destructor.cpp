#include<iostream>
using namespace std;
class top{
	public :
		void show (){
			cout<<"Example of Destructor\n";
		}
		top(){
			cout<<"Memory ALlocated : \n";
		}
		~top(){
			cout<<"Memory Released \n";
		}
};

int main(){
	top t;
	t.show();
}
