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

	A *p,o1;   /* p is A type pointer */
	p=&o1;     /* p stores o1 address */
	p->f1();   /*EB-Compiler find pointer type*/
	p->f2();   /*LB-Compiler find pointer address*/
	return(0);
}
	
