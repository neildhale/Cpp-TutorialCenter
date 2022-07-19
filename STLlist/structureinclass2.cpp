#include<iostream>
#include<string>
#include<list>
using namespace std;

class Employee{
	private:
	struct Staff{
		int id;
		string name;
	};

	public:
	list<Staff> listofStaff;


	void setStaffDetail(int id,string name){
		Staff newStaff;
		newStaff.id=id;
		newStaff.name=name;
		listofStaff.push_back(newStaff);
	}


	void getStaffDetails(){
		list<Staff>::iterator it;

        	for(it=listofStaff.begin();it!=listofStaff.end();it++){
                	int id=it->id;
                	string name=it->name;
                	cout<<"Id="<<id<<" "<<"Name="<<name<<endl;
       		}
	}


 string getStaffName(int Id){

	string name;
	list<Staff>::iterator It;

	for(It=listofStaff.begin();It!=listofStaff.end();It++){
             int id=It->id;
	     if(Id==id){
	      name=It->name;
        	break;
	      }

	}    
	   return name;
 }



 int getStaffId(string Name){
	int id;
        list<Staff>::iterator IT;

        for(IT=listofStaff.begin();IT!=listofStaff.end();IT++){
                string name=IT->name;
                if(Name==name){
                id=IT->id;
        	break;
                }
        }
	return id;
 }


};

int main(){

	Employee objEmployee;
	objEmployee.setStaffDetail(101,"Nilesh");
	objEmployee.setStaffDetail(102,"Chetan");
	objEmployee.setStaffDetail(103,"Rohit");
	objEmployee.setStaffDetail(104,"Rahul");
	objEmployee.getStaffDetails();
	objEmployee.getStaffName(101);
	cout<<"Name="<<objEmployee.getStaffName(103)<<endl;
	objEmployee.getStaffId("Chetan");
	cout<<"ID="<<objEmployee.getStaffId("Rahul")<<endl;
}
