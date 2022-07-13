#include<iostream>
using namespace std;

class Student{
	private:
	int id;
	string name;
	
	public:
	Student(){
                cout<<"Student Base object created"<<endl;
        }

        ~Student(){
                cout<<"Student Base Object Destroyed"<<endl;
        }

	void insert(){
		cout<<"Enter Student Id:";
		cin>>id;
		cin.ignore();
		cout<<"Enter Student Name:";
		getline(cin,name);
	}

	void show(){
		cout<<"Student Id="<<id<<endl;
		cout<<"Student Name="<<name<<endl;
	}
};

class Person:public Student{
	private:
	int fee;
	string course;
	
	public:
	Person(){
                cout<<"Person Derived1 object created"<<endl;
        }

        ~Person(){
                cout<<"Person Derived1 Object Destroyed"<<endl;
        }

	void detail(){
		cout<<"Enter Fee:";
		cin>>fee;
		cin.ignore();
		cout<<"Enter Course Name:";
		getline(cin,course);
	}

	void display(){
		show();
		cout<<"Student Course="<<course<<endl;
		cout<<"Student Fee="<<fee<<endl;
	}
};

class Institute:public Person{
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

		insert();
		detail();
		cout<<"Enter College Name:";
		getline(cin,college);
	}

	void execute(){
		display();
		cout<<"Student Institute Name:"<<college<<endl;
	}
};

int main(){
	Institute I1Derived2;
	I1Derived2.College();
	I1Derived2.execute();
	return(0);
}


