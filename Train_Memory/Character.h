#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Character
{
	Character();
	//~Character();

	void PrintHealth();

	string Name;
	float Health;
};