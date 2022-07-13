#include<iostream>
using namespace std;

class Base{
	public:
	Base(){
	cout<<"Object Created"<<endl;
	}

	virtual int sum(int a,int b)=0;  /*pure virtual function*/     		
		
/*A Class in which pure virtual function is present is called Abstract class*/

};

class Derived:public Base{
	
	public:
	int sum(int a,int b){
		cout<<"Addition="<<a+b<<endl;
		return(a+b);
	}
};

int main(){
//	Base objBase;          	/*Abstract class does not create object*/
	Derived objDerived;
	objDerived.sum(3,4);
	return(0);
}
