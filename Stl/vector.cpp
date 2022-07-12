#include<iostream>
#include<vector>
using namespace std;

int main(){

	vector<int> v;

	cout<<"Capacity="<<v.capacity()<<endl;

	v.push_back(1);
	cout<<"Capacity="<<v.capacity()<<endl;
	
	v.push_back(2);
	cout<<"Capacity="<<v.capacity()<<endl;

	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	
	v.push_back(8);
	v.push_back(7);
	v.push_back(9);
	cout<<"Capacity="<<v.capacity()<<endl;
	cout<<"Size="<<v.size()<<endl;

	cout<<"Element at 2nd Index="<<v.at(2)<<endl;

	cout<<"First Element="<<v.front()<<endl;
	cout<<"Last Element="<<v.back()<<endl;

	v.pop_back();
	for(int i:v){
		cout<<i<<" "<<endl;
	}	
	cout<<"Capacity="<<v.capacity()<<endl;
	cout<<"Size="<<v.size()<<endl;

	v.clear();
	cout<<"Size="<<v.size()<<endl;

	vector<int> a(6,3);
	for(int i:a){
		cout<<i<<" ";
	}	
	cout<<endl;
}
