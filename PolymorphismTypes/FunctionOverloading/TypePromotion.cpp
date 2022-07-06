#include<iostream>
using namespace std;

class Student{
	
	public:
	void Insert(int id){
		cout<<"First insert Id="<<id<<endl;
	}

	void Insert(double rollno){
		cout<<"Second insert RollNo.="<<rollno<<endl;
	}

	void Insert(char* name){
		cout<<"Name="<<name;
	}

};

int main(){
	char a=2;
	float b=2.5;
	
	Student S1;
	S1.Insert(a);
	S1.Insert(b);
	S1.Insert("sachet");

}
