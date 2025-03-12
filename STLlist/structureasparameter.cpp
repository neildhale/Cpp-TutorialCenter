#include<iostream>
#include<string>
using namespace std;

struct Staff{
	int id;
	string name;
};

void DisplayStaffDetail(struct Staff S){
	cout<<"Staff Id="<<S.id<<endl;
	cout<<"Staff Name="<<S.name<<endl;
}

int main(){
	struct Staff S1={1,"chetan"};
	DisplayStaffDetail(S1);
	return(0);
}


