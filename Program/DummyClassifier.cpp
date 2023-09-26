#include "DummyClassifier.h"

#include <iostream>

DummyClassifier::DummyClassifier() {

	std::cout << std::endl << "This class has not been implemented yet... /o\\" << std::endl << std::endl;
	std::cout << "---------------------------------------" << std::endl << std::endl;
}

void DummyClassifier::train(std::string fileName) {
	std::cout << "DummyClassifier's train() function is called!!" << std::endl;
}

void DummyClassifier::predict(std::string fileName) {
	std::cout << "DummyClassifier's predict() function (fileName) is called!!" << std::endl;
}

void DummyClassifier::predict(double x, double y, double z) {
	std::cout << "DummyClassifier's predict() function (user input) is called!!" << std::endl;
}