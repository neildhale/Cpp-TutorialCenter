#include<iostream>
using namespace std;

class Counter{
	public:                   
	static int instanceCount;     

	Counter(){
		instanceCount++;
	}

	void GetInstanceCount(){
		cout<<"No. of objects created="<<instanceCount<<endl;
	}
	
};

int Counter::instanceCount;

int main(){

	Counter C,C1,C2,C3,C4;
	C.GetInstanceCount();
	return(0);
}

