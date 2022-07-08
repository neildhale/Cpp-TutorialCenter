#include<iostream>
using namespace std;

class A{
	public:
	virtual int sum(int a,int b)=0;  /*pure virtual function*/
	                       /*A Class in which pure virtual function is
				  present is called as Abstract Class*/
};

class B:public A{
	
	public:
	int sum(int a,int b){
		cout<<"Addition="<<a+b<<endl;
		return(a+b);
	}
};

int main(){
//	A obj;          	/*Abstract class does not create object*/
	B obj1;
	obj1.sum(3,4);
	return(0);
}
