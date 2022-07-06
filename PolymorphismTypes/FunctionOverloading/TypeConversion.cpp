#include<iostream>
using namespace std;

class Student{
	
	public:
	void Insert(double id){
		cout<<"Insert Id="<<id<<endl;
	}

};

int main(){
	int a=2;
	float b=2.5;
	char c=3;
	
	Student S1,S2,S3;
	S1.Insert(a);
	S2.Insert(b);
	S3.Insert(c);
}
