#include<iostream>
using namespace std;
class student{

		int id;
		char name[20];

	public:
	student(){
		id=1;
		char name[20]="Nilesh";
	}

	student(int Id,char Name[20]){
		id=Id;
		char name[20]="Name";
	}

	~student(){
		cout<<"Object Destroy"<<endl;
	}

	public:
	void insert(){
		cout<<"Enter id:"<<endl;
		cin>>id;
		cout<<"Enter name:"<<endl;
		cin>>name;
	}
	

	void display(){
		cout<<"student id is:"<<id<<endl;
		cout<<"student name is:"<<name<<endl;
	}

};

int main(){

	student s1;
	student s2(2,"chetan");
	s1.display();
	s2.display();

	return(0);
}


	








