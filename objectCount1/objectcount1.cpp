#include<iostream>
using namespace std;

class COUNT{
	public:
	static int count;

	public:
	COUNT(){
		count++;
	}
	
	public:
	COUNT(int a,int b){
		count++;
	}
};

int COUNT::count;

int main(){
	COUNT C1,C2,C3,C4,C5;
	COUNT C6(1,2);
	cout<<"No. of objects created="<<COUNT::count<<endl;
}

