#include<iostream>
#include<map>
using namespace std;

int main(){
	multimap<int,string> M;

	M.insert(make_pair(10,"Nilesh"));
	M.insert(make_pair(20,"Chetan"));
	M.insert(make_pair(30,"Rahul"));
	M.insert(make_pair(30,"jimmy"));

	M.insert(pair<int,string>(40,"Rohit"));

	multimap<int,string> ::iterator it=M.begin();
	for(it;it != M.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}

	for(auto i : M){
	cout<<"new for loop "<<i.first<<" second value ::"<<i.second<<endl;
	}

	cout<<"Size="<<M.count(30)<<endl;
	cout<<"Size="<<M.size()<<endl;

	M.erase(30);

	multimap<int,string> ::iterator i=M.begin();
	for(i;i != M.end();i++){
		cout<<i->first<<" "<<i->second<<endl;
	}
}
