#include<iostream>
#include"Abstract.h"

int main() {
	Factory* factory = new CharacterFactory;
	vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());
	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
		cout << characters[i];
		delete characters[i];
	}
}