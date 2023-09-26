#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "NNClassifier.h"

NNClassifier::NNClassifier() {

	this->ptrToHead = new ORIENTATION;

	ptrToHead->x = 0;
	ptrToHead->y = 0;
	ptrToHead->z = 0;
	ptrToHead->Label = 0;

	ptrToHead->next = NULL;
}

ORIENTATION* NNClassifier::getPtrToHead() {

	return this->ptrToHead;
}

std::string NNClassifier::decideOrientationName(int nearestLabel)
{

	switch (nearestLabel)
	{
	case 1:
		return "Face Up";
		break;

	case 2:
		return "Face Down";
		break;

	case 3:
		return "Portrait";
		break;

	case 4:
		return "Portrait Upside Down";
		break;

	case 5:
		return "Landscape Left";
		break;

	case 6:
		return "Landscape right";
		break;

	default:
		return "Unknown Orientation";
		break;
	}
}

void NNClassifier::train(std::string fileName) {

	Data d;

	std::ifstream fin;

	double x = this->getX();
	double y = this->getY();
	double z = this->getZ();

	std::string label;

	fin.open(fileName);

	if (fin.is_open()) {

		for (int i = 0; !fin.eof(); i++) {

			d.ReadFile(x, y, z, label, fin);

			this->setX(x);
			this->setY(y);
			this->setZ(z);

			this->setLabel(stoi(label));

			ORIENTATION* temp = NULL;

			temp = new ORIENTATION;

			temp->x = this->getX();
			temp->y = this->getY();
			temp->z = this->getZ();
			temp->Label = this->getLabel();

			temp->next = NULL;

			ORIENTATION* temp2 = NULL;

			if (i == 0) {

				this->ptrToHead = temp;
			}
			else {
				temp2 = this->ptrToHead;

				for (int j = 0; j < (i - 1); j++) {

					temp2 = temp2->next;
				}
				temp2->next = temp;
			}
		}

		fin.close();
	}
}

double NNClassifier::nearestNeighbour(ORIENTATION* n) {

	double nearestNeighbour = sqrt(pow((this->getX() - n->x), 2) + pow((this->getY() - n->y), 2) + pow((this->getZ() - n->z), 2));

	return nearestNeighbour;
}

void NNClassifier::predict(double x, double y, double z) {

	if (x < -1 || x > 1 ||
		y < -1 || y > 1 ||
		z < -1 || z > 1)
	{
		std::cout << std::endl << std::endl << "This Data is Invalid (i.e. Noise)..." << std::endl << std::endl;
		return;
	}

	this->setX(x);

	this->setY(y);

	this->setZ(z);

	ORIENTATION* temp = this->ptrToHead;

	float nearestDistance = 0;
	int nearestLabel = 0;

	nearestDistance = nearestNeighbour(temp);

	while (temp != nullptr)
	{
		if ((nearestNeighbour(temp)) < nearestDistance)
		{
			nearestDistance = nearestNeighbour(temp);
			nearestLabel = temp->Label;
		}

		temp = temp->next;
	}

	std::cout << std::endl << std::endl << "Predicted label:" << nearestLabel << "," << decideOrientationName(nearestLabel) << std::endl << std::endl;
}

void NNClassifier::predict(std::string fileName) {

	double nearestDistance = 0;
	int nearestLabel = 0;

	std::ifstream fin;
	fin.open(fileName);

	Data d;

	double x = this->getX();
	double y = this->getY();
	double z = this->getZ();

	std::string label;

	if (fin.is_open()) {

		std::ofstream fout;
		fout.open("Results.txt");

		if (fout.is_open()) {

			while (!fin.eof()) {

				d.ReadFile(x, y, z, label, fin);

				this->setX(x);
				this->setY(y);
				this->setZ(z);

				if ((getX() > 1 || getX() < -1) ||
					(getY() > 1 || getY() < -1) ||
					(getZ() > 1 || getZ() < -1)) {

					setLabel(12);
				}

				if (getLabel() == 12) {

					std::cout << "Noise Spotted" << std::endl;
				}

				ORIENTATION* temp = getPtrToHead();

				nearestDistance = nearestNeighbour(temp);

				while (temp != NULL) {

					if (nearestDistance > nearestNeighbour(temp)) {

						nearestDistance = nearestNeighbour(temp);

						nearestLabel = temp->Label;	
					}
					temp = temp->next;
				}

				fout << getX() << "," << getY() << "," << getZ() << "," << nearestLabel << "," << decideOrientationName(nearestLabel) << std::endl << std::endl;
			}

			fout.close();
		}

		fin.close();
	}
	else {

		std::cout << "Can't open file: " << fileName << std::endl;
	}
}

NNClassifier::~NNClassifier() {

	delete this->getPtrToHead();
}