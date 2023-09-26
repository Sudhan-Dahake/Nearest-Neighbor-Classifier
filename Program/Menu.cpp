#include "Menu.h"

#include <iostream>
#include <string>

Menu::Menu() {

	this->input = EMPTYSTRING;
}

void Menu::getClassFromUser(bool isContinue) {

	if (isContinue) {

		std::cout << "***********************************" << std::endl;
		std::cout << "0. Exit" << std::endl;
		std::cout << "1. NNClassifier" << std::endl;
		std::cout << "2. KNNClassifier" << std::endl;
		std::cout << "3. DummyClassifier" << std::endl;
		std::cout << "***********************************" << std::endl << std::endl;
		std::cout << "Please pick an classifier to use: ";

		std::cin >> this->input;

		std::cout << std::endl;
	}
}

void Menu::getCoordinatesFromUser() {

	std::cout << "Please enter the coordinates separated by comma (eg: -0.9, 0.4, 0.3): ";

	std::cin >> this->input;
}

void Menu::getFileName() {

	std::cout << "Please enter the File Name: ";

	std::cin >> this->input;
}

std::string Menu::getUserInput() {

	return this->input;
}

void Menu::getNNClassifierInputFromUser() {

	std::cout << "****************************" << std::endl;
	std::cout << "0. Go Back!" << std::endl;
	std::cout << "1. Give User Input Data" << std::endl;
	std::cout << "2. Give File Data" << std::endl;
	std::cout << "****************************" << std::endl << std::endl;

	std::cout << "Please pick an classifier to use: ";

	std::cin >> this->input;
}

void Menu::cleanString() {

	this->input = EMPTYSTRING;
}