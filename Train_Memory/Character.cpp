#include "Character.h"

Character::Character() {
	Name = new string{ "Default" };
	Health = new float{ 100.f };
	Age = new int{ 15 };
}

void Character::PrintHealth() {
	cout << "Health = " << Health << endl;

	delete Name;
	delete Health;
	delete Age;
}