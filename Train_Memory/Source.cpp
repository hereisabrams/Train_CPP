#include "Character.h"
#include "Weapon.h"


int main() {
	Character* ptrToChar = new Character(); // stored in heap instead of on the stack
	// It will allocate memory in run time

	delete ptrToChar; //it eliminates memory leaks.
	ptrToChar = nullptr;



	for (size_t i = 0; i < 5; i++)
	{
		Character* ptrToChar = new Character(); // stored in heap instead of on the stack

		//ptrToChar->Name = { "I am the one who knocks " + to_string(i) + " times." };

		cout << ptrToChar->Name << endl;

		// if the following lines are not added the old objects are not deleted from memory
		delete ptrToChar;
		ptrToChar = { nullptr };
	}

	for (size_t i = 0; i < 5; i++)
	{
		Weapon* ptrToWpn = new Weapon(); // stored in heap instead of on the stack

		// if the following lines are not added the old objects are not deleted from memory
		delete ptrToWpn;
		ptrToWpn = { nullptr };
	}
	

	system("pause");
}