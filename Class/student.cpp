#include<iostream>
#include<cstring>
using namespace std;

class Student{
	public:
		int id;
		string name;

	public:
	Student(){                      /*Default Constructor*/
		id=1;
		name="Nilesh";
	}

	Student(int Id,string N){       /*Parameterized Constructor*/
//	cout<<"name"<<N;
		id=Id;
		name=N;
	}

	~Student(){                     /*Destructor*/
		cout<<"Object Destroy"<<endl;
	}
	
	void display(){
		cout<<"student Id is:"<<id<<endl;
		cout<<"student Name is:"<<name<<endl;
	}
};

int main(){

	Student s1;
	s1.display();
	Student s2(2,"Chetan");
	s2.display();

}


	








