//#include<iostream>
//using namespace std;
//class Student{
//	string name;
//    
//	int marks[5];
//	int total =0;
//	int tmax ;
//	public :
//	 void assign(){
//	 	cout<<"Enter name : ";
//	 	cin>>name;
//	 	cout<<"\n How Many number you want to Enter : ";
//	 
//	 	cout<<"\n Enter Number :";
//	 	for(int i=0;i<5;i++){
//	 		cin>>marks[i];
//	 		
//		 }
//		for(int i=0;i<5;i++){
//			total= marks[i]+total;
//		}
//		cout<<"\n Marks Total : "<<total;
//	 }
//	void compute(){
//		assign();
//		cout<<"\n Total Average : "<<total/5;
//		tmax = marks[0];
//		for(int i=0;i<5;i++){
//			if(marks[i]>tmax){	
//			tmax= marks[i];
//	      	}
//		}
//		cout<<"\n After Total Maximum is = "<<tmax;
//	}
//	void display(){
//		cout<<"\n \n Your Name is "<<name;
//		cout<<"\n Total marks is  "<<total;
//		cout<<"\n Your average marks is "<<total/5;
//		cout<<"\n The maximum marks is "<<tmax;
//	}
//};
//
//int main(){
//	Student t;
//	t.compute();
//	t.display();
//}
//

#include<iostream>
using namespace std;
class fav{
	int  a=1;
	int b=0;
		int num;
		 
	 
	 public:
	 	fav(int n){
	 	  num=n;	
		 };
		 void display(){
		 
		 	for(int i=1;i<num;i++){
		 	   int c = a+b;
		 	   a=b;
		 	   b = c;
		 	   cout<<c<<" ";
			 }
			 
		 }
	 	
		 
};

int main(){
	fav f(10);
	f.display();
}




//// Exception handling
//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[5] = {3,5,6,7,5};
//	int size = sizeof(arr)/sizeof(arr[0]);
//	int b;
//	cin>>b;
//	try{
//		if(b>5){
//		    throw b;
//		}
//		cout<<arr[b];
//	}
//	catch(int e){
//		cout<<"number should be less &=  5 ";
//	}
//	cout<<"\n Index number is ="<<b;
//}
//
//














//#include<iostream>
//using namespace std;
//
//int main(){
//
//	int arr[5] = {2,3,6,5,7};
//		int b;
//		cin>>b;
//	try{
//		if(b>5){
//			throw b ;
//		}
//	
//	}
//	catch(int e){
//		cout<<"\n Array should be length 5 \n";
//	}
//	cout<<arr[b];
//}



//#include<iostream>
//using namespace std;
//
//int main(){
//	int a,b;
//	cout<<"Enter 2 Number :\n";
//	cin>>a;
//	cin>>b;
//	try{
//		if(b==0){
//			throw b;
//		}
//		cout<<" division is : "<<a/b<<endl;
//	}
//	catch(int e){
//		cout<<"\n Denominator should not be  zero \n";
//	}
//	cout<<"ok";
//}
