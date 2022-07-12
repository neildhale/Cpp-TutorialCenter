#include<iostream>
using namespace std;

class Base{
	public:
	void function1(){
		cout<<"Base class calling"<<endl;
	}
	virtual void function2(){
		cout<<"Base class calling"<<endl;
	}
};

class Derived:public Base{

	public:

	void function1(){
		cout<<"Derived class calling"<<endl;
	}
	void function2(){
		cout<<"Derived class calling"<<endl;
	}
};

int main(){

	Base *pBase;      /* pBase is Base class type pointer */
	Derived objDerived;
	pBase=&objDerived;     /* pBase stores objDerived address */
	pBase->function1();   /*EB-Compiler find pointer type*/
	pBase->function2();   /*LB-Compiler find pointer address*/
	return(0);
}
	
