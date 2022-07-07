#include<iostream>
using namespace std;

class A{
	public:
	void f1(){
		cout<<"Base class calling"<<endl;
	}
	virtual void f2(){
		cout<<"Base class calling"<<endl;
	}
};

class B:public A{

	public:

	void f1(){
		cout<<"Derived class calling"<<endl;
	}
	void f2(){
		cout<<"Derived class calling"<<endl;
	}
};

int main(){

	A *p;      /* p is A type pointer */
	B o2;
	p=&o2;     /* p stores o2 address */
	p->f1();   /*EB-Compiler find pointer type*/
	p->f2();   /*LB-Compiler find pointer address*/
	return(0);
}
	
