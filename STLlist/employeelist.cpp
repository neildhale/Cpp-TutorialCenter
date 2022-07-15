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
	list<Employee> l1;

	Employee E1(1,"Chetan",9823403896);
	l1.push_front(E1);
	Employee E2(2,"Nilesh",8999139430);
	l1.push_back(E2);

	list<Employee>::iterator it;
	for(it=l1.begin();it!=l1.end();it++){
		int id=it->id;
		string name=it->name;
		unsigned long int contactno=it->contactno;
		cout<<"Id="<<id<<" "<<"Name="<<name<<" "<<"Mobile No.="<<contactno<<endl;
	}

	cout<<"Size of the list l1="<<l1.size()<<endl;
}
