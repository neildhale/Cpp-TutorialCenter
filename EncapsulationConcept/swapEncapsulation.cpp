#include<iostream>
using namespace std;

class Base{
	public:
	int i=5;

	protected:
	int j=6;
};

class Derived:private Base{
	public:

	void setValue(){       //encapsulation
		int tmp;
		tmp=i;
		i=j;
		j=tmp;
	}

	void show(){
		cout<<"I="<<i<<endl;
		cout<<"J="<<j<<endl;
	}

	int getIvalue(){
		return i;
	}

	int getJvalue(){
		return j;
	}
};

int main(){
	Derived D1;
	D1.setValue();
	D1.show();

	return(0);
}
