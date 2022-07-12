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

	Base *pBase,objBase;      /* pBase is Base Class type pointer */
	pBase=&objBase;           /* pBase stores objBase address */
	pBase->function1();   /*EB(Early Binding)-Compiler find pointer type*/
	pBase->function2();  /*LB(Late Binding)-Compiler find pointer address*/
	return(0);
}
	
