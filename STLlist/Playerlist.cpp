#include<iostream>
#include<string>
#include<list>
using namespace std;

struct Player{
	int id;
	string name;

	Player(int playerId,string playerName) : id(playerId),name(playerName){}
};

int main(){

	list<Player> listofPlayers{Player(11,"Rahul"),Player(22,"Rohit")};

	list<Player>::iterator it;
	for(it=listofPlayers.begin();it!=listofPlayers.end();it++){
		int id=it->id;
		string name=it->name;
		cout<<id<<" "<<name<<endl;
	}
}
