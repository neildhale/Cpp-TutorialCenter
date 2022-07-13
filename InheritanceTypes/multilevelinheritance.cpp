#include<iostream>
using namespace std;

class student{
	int id;
	string name;
	
	public:
	student(){
                cout<<"student Base object created"<<endl;
        }

        ~student(){
                cout<<"student Base Object Destroyed"<<endl;
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

class person:public student{
	int fee;
	string course;
	
	public:
	person(){
                cout<<"person Derived1 object created"<<endl;
        }

        ~person(){
                cout<<"person Derived1 Object Destroyed"<<endl;
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

class Institute:public person{
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


