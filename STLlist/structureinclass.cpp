#include<iostream>
#include<string>
#include<list>
using namespace std;

class Employee{
	public:
	struct Staff{
		int id;
		string name;

	}S1,S2;

	list<Staff> listofStaff;

	void InsertStaffDetail(){
		S1.id=1;
		S1.name="Chetan";
		listofStaff.push_front(S1);
		S2.id=2;
		S2.name="Nilesh";
		listofStaff.push_back(S2);
	}


	void DisplayStaffDetail(){
		cout<<"listcount="<<listofStaff.size()<<endl;
		list<Staff>::iterator it;
		
        	for(it=listofStaff.begin();it!=listofStaff.end();it++){
                	int id=it->id;
               		 string name=it->name;
               		 cout<<"Id="<<id<<" "<<"Name="<<name<<endl;
        	}
	}
};


int main(){
	Employee objEmployee;
	objEmployee.InsertStaffDetail();
	objEmployee.DisplayStaffDetail();
}
