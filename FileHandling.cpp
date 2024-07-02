
/*

#include<iostream>
using namespace std;
void cybrom(int c){
	
	 try{
	 	   if(c==1){
	 	   	throw 1;
			}
			else if(c==-1){
				throw 2.5;
			}
			else if(c==0){
				throw 'c';
			}
			cout<<"Welcome";
	 }
	 catch(float c){
	 	cout<<"caught float \n";
	 }
	  catch(int c){
	 	cout<<"caught int \n";
	 }
	 catch(char c){
	 	cout<<"caught char \n";
	 }
	  catch(double c){
	 	cout<<"caught double \n";
	 }
}

int main(){
	cybrom(1);
	cybrom(-1);
	cybrom(0);
	cybrom(30);
}

*/

//it will handle any type of exception but git only common message 

#include<iostream>
using namespace std;

int main(){
	try{
	
   int a , b;
   cout<<"Enter N1\n";
   cin>>a;
   cout<<"Enter n2\n";
   cin>>b;
   if(b==0){
   	throw b;
   }
   cout<<a/b;
}
   catch(...){
   	cout<<"There is System Error\n";
   }
   cout<<"\nDone";
}

