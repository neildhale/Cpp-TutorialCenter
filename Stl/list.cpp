#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> l;

	l.push_back(1);
	l.push_front(2);
	for(int i:l){
		cout<<i<<" ";
	}cout<<endl;

	l.erase(l.begin());
	for(int i:l){
		cout<<i<<" ";
	}cout<<endl;

	cout<<"Size of the list l="<<l.size()<<endl;

	list<int> n(5,100);
	for(int i:n){
		cout<<i<<" ";
	}cout<<endl;

	cout<<"Size of the list n="<<n.size()<<endl;

}
