#include<iostream>
#include<string>
#include<list>
using namespace std;

class Employee{
	public:
	int id;
	string name;
	long int contactno;

	void InsertEmployeeDetail(int Id,string Name,long int Contactno){
		id=Id;
		name=Name;
		contactno=Contactno;
	}

};

int main(){
list<Employee> listofEmployee;

        Employee objEmployee1;
	objEmployee1.InsertEmployeeDetail(1,"Chetan",9823403896);
        listofEmployee.push_front(objEmployee1);

        Employee objEmployee2;
	objEmployee2.InsertEmployeeDetail(2,"Nilesh",8999139430);
        listofEmployee.push_back(objEmployee2);


	list<Employee>::iterator it;

        for(it=listofEmployee.begin();it!=listofEmployee.end();it++){
                int id=it->id;
                string name=it->name;
                long int contactno=it->contactno;
                cout<<"Id="<<id<<" "<<"Name="<<name<<" "<<"Mobile No.="<<contactno<<endl;
        }

        cout<<"Size of the listofEmployee="<<listofEmployee.size()<<endl;
}
	

