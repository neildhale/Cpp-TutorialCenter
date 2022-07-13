#include<iostream>
using namespace std;

class Student{
	private:
	int id;
	string name;
	
	public:
	Student(){
		cout<<"Student Base Object Created"<<endl;
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
		cout<<"Person Derived Object Created"<<endl;
	}

	~Person(){
		cout<<"Person Derived Object Destroyed"<<endl;
	}

	void detail(){
		insert();
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

int main(){
	Person P1Derived;
	P1Derived.detail();
	P1Derived.display();
	return(0);
}


