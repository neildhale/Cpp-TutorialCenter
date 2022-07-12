#include<iostream>
#include<map>
using namespace std;

int main(){
	map<int,string> m;

	m[1]="Nilesh";
	m[5]="Chetan";
	m[2]="Rahul";

	for(auto i:m){
		cout<<i.first<<endl;
	}

	m.insert( {4,"Rohit"});

	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}

	cout<<"finding 5="<<m.count(5)<<endl;

	m.erase(2);

	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	
	auto it=m.find(5);

	for(auto i=it;i!=m.end();i++){
		cout<<i->first<<" "<<i->second<<endl;
	}
}
