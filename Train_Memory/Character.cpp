#include "Character.h"

Character::Character() {
	Name = { "Default" };
	Health = { 100.f };
}

void Character::PrintHealth() {
	cout << "Health = " << Health << endl;
}