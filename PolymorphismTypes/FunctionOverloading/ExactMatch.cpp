#include<iostream>
using namespace std;

class Student{
	
	public:
	void Insert(int id){
		cout<<"First insert Id="<<id;
	}
	 			/*Same function name and different argument in
		  		 same class is called as Function Overloading*/
	void Insert(double rollno){
		cout<<"Second insert RollNo.="<<rollno;
	}

};

int main(){
	int a=5;
	
	Student S1;
	S1.Insert(a);
}
