#include<iostream>
#include<list>
#include<string>
using namespace std;

class Employee{
	public:
	int id;
	string name;
	unsigned long int contactno;

	Employee(int Id,string Name,unsigned long int Contactno){
		id=Id;
		name=Name;
		contactno=Contactno;
	};
	
};
int main(){
	list<Employee> listofEmployee;

	Employee objEmployee1(1,"Chetan",9823403896);
	listofEmployee.push_front(objEmployee1);
	Employee objEmployee2(2,"Nilesh",8999139430);
	listofEmployee.push_back(objEmployee2);

	list<Employee>::iterator it;
	for(it=listofEmployee.begin();it!=listofEmployee.end();it++){
		int id=it->id;
		string name=it->name;
		unsigned long int contactno=it->contactno;
		cout<<"Id="<<id<<" "<<"Name="<<name<<" "<<"Mobile No.="<<contactno<<endl;
	}

	cout<<"Size of the listofEmployee="<<listofEmployee.size()<<endl;
}
