// Svampbob.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void crustyCrab(){
	std::cout << "Welcome to the Crusty Crab!" << std::endl;
	std::cout << "***Menu***" << std::endl;
	std::cout << "1. Crab burgers" << std::endl;
	std::cout << "2. Crab fries" << std::endl;
	std::cout << "3. Crab cola" << std::endl << std::endl;

	int order;
	std::cout << "Please make your order!" << std::endl;
	std::cin >> order;

	std::string nameOfOrder;
	switch (order) {
	case 1: nameOfOrder = "Crab burgers"; break;
	case 2: nameOfOrder = "Crab fries"; break;
	case 3: nameOfOrder = "Crab cola"; break;
	default: nameOfOrder = ""; break;
	}
	if (nameOfOrder.length() > 0)
		std::cout << "One " << nameOfOrder << " coming up!" << std::endl;
	else
		std::cout << "No crabs for you!" << std::endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Hello Bikinibotten!" << std::endl;
	
	//Don't let trespassers in	
	bool askForName = true;
	while (askForName){
		//Ask for name
		std::cout << "What's your name?" << std::endl;

		std::string name;
        std::string address;
		std::getline(std::cin, name);

		if (name.compare("Spongebob") == 0 || name.compare("Patrik") == 0 || name.compare("Squidward") == 0 || name.compare("Crab") == 0){
			std::cout << "Welcome " << name << "!" << std::endl;
			askForName = false;
		}
		else {
			std::cout << "You are not a citizen of Bikinibotten!" << std::endl;
		}
        if (!askForName)
        {
            std::cout << "Your address sir:" << std::endl;
            std::getline(std::cin, address);
            std::cout << "Thanks" << std::endl;
        }
	}
	
	crustyCrab();
	
	return 0;
}

