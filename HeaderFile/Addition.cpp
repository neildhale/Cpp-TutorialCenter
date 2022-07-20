#include"Addition.hpp"

class B:public A{
	public:
	int sum(int a,int b){
		cout<<"Sum="<<a+b<<endl;
		return a+b;
	}
};

int main(){
	B B1;
	B1.sum(3,4);
	return (0);
}	
