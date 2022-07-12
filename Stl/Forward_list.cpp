#include<iostream>
#include<forward_list>
#include<string>

int main(){

	/* this is c++ 11 feature; 
	 * forward list keeps track of the next element
	 * forward list can not be iterated backward
	 * list keep track for forward and reverse element but not the forward list
	 * it takes constant time to insertion and removal element*/
	std::forward_list<int> nameStringList;

   	nameStringList.assign({1,2,3}); //assgn values using assign function

   	for (auto name: nameStringList){
   	std::cout<<"name from the forward_iist: "<<name<<std::endl;
   	}

   	std::forward_list<std::string> name;

   	name.assign({"nilesh"});
	name.push_front("rahul"); // insert element at front 
   	
	for(auto nameString : name){
	std::cout<<"name from forward_list ==>"<<nameString<<std::endl;
   	}
	name.pop_front();   // remove element from the front
	for(auto nameString : name){
	std::cout<<"name from forward_list ==>"<<nameString<<std::endl;
   	}
	
   

   return 0;

}
