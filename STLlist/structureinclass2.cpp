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


 string updateStaffName(int Id,string Name){

        string name;
        list<Staff>::iterator I;

        for(I=listofStaff.begin();I!=listofStaff.end();I++){
             int id=I->id;
             if(Id==id){
              I->name=Name;
	      cout<<"Name="<<Name<<endl;
                break;
              }

        }
           return Name;
 }


 int updateStaffId(int Id,string Name){
        int id;
        list<Staff>::iterator i;

        for(i=listofStaff.begin();i!=listofStaff.end();i++){
                string name=i->name;
                if(Name==name){
                i->id=Id;
		cout<<"Id="<<Id<<endl;
                break;
                }
        }
        return Id;
 }


};

int main(){

	Employee objEmployee;
	objEmployee.setStaffDetail(101,"Nilesh");
	objEmployee.setStaffDetail(102,"Chetan");
	objEmployee.setStaffDetail(103,"Rohit");
	objEmployee.setStaffDetail(104,"Rahul");
	objEmployee.getStaffDetails();
	cout<<"Name="<<objEmployee.getStaffName(103)<<endl;
	cout<<"ID="<<objEmployee.getStaffId("Rahul")<<endl;
	objEmployee.updateStaffName(104,"Virat");
	objEmployee.getStaffDetails();
	objEmployee.updateStaffId(105,"Virat");
	objEmployee.getStaffDetails();

}
