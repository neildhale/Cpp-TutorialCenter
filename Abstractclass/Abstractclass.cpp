#include<iostream>
using namespace std;

class Base{
	public:
	virtual int sum(int a,int b)=0;  /*pure virtual function*/
	                       /*A Class in which pure virtual function is
				  present is called as Abstract Class*/
};                          /*Abstract class is use for data abstraction or data				 hiding and to provide appropriate base class
			      	    from which other classes can inherit*/

class Derived:public Base{
	
	public:
	int sum(int a,int b){
		cout<<"Addition="<<a+b<<endl;
		return(a+b);
	}
};

int main(){
//	Base obj;          	/*Abstract class does not create object*/
	Derived obj1;
	obj1.sum(3,4);
	return(0);
}
