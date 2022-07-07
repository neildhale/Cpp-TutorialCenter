#include<iostream>
using namespace std;

class Student{
	
	public:				/*There are only Two type Promotion*/
	void Insert(int id){		/*char convert into int*/
		cout<<"First insert Id="<<id<<endl;
	}

	void Insert(double rollno){     /*float convert into double*/
		cout<<"Second insert RollNo.="<<rollno<<endl;
	}


};

int main(){
	char a=2;
	float b=2.5;
	
	Student S1;
	S1.Insert(a);
	S1.Insert(b);

}
