#include<iostream>
using namespace std;

class Student{
	private:
	int rollno;
	string name;

	public:
	Student(){
		cout<<"Student Base object created"<<endl;
	}

	~Student(){
		cout<<"Student Base Object Destroyed"<<endl;
	}
	void Insert(){
		cout<<"Enter Student Roll No.:";
		cin>>rollno;
		cin.ignore();
		cout<<"Enter Student Name:";
		getline(cin,name);
	}

	void Display(){
		cout<<"Student Roll No.="<<rollno<<endl;
		cout<<"Student Name="<<name<<endl;
	}
};


class Staff{
	private:
	int id;
	string Name;

	public:

	Staff(){
		cout<<"Staff Derived1 object created"<<endl;
	}

	~Staff(){
		cout<<"Staff Derived1 Object Destroyed"<<endl;
	}
	void Entry(){
		cout<<"Enter Staff Id:";
		cin>>id;
		cin.ignore();
		cout<<"Enter Staff Name:";
		getline(cin,Name);
	}

	void display(){
		cout<<"Staff Id="<<id<<endl;
		cout<<"Staff Name="<<Name<<endl;
	}
};


class Institute:public Staff,public Student{
	/*constructor order==> 1.Staff 2.Student 3.Institute*/
	
//if/*class Institute:public Student,public Staff*/
//then/*constructor order==> 1.Student 2.Staff 3.Institute*/

	/*Destructor order will be reverse of that Constructor order*/

	private:
	string college;
	
	public:
	Institute(){
		cout<<"Institute Derived2 object created"<<endl;
	}

	~Institute(){
		cout<<"Institute Derived2 Object Destroyed"<<endl;
	}
	void College(){
		Insert();
		Entry();
		cout<<"Enter College Name:";
		getline(cin,college);
	}

	void Execute(){
		cout<<"College Name="<<college<<endl;
		display();
		Display();
	}
};

int main(){
	Institute I1Derived2;
	I1Derived2.College();
	I1Derived2.Execute();
	return(0);
}

