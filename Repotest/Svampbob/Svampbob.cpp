// Svampbob.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

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
	

	

	return 0;
}

