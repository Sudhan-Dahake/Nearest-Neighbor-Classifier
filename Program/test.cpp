#include "test.h"

#include <iostream>
#include <fstream>
#include <sstream>

void testPhoneOrientation::test(std::string fileName, NNClassifier& p, ORIENTATION* head) {

	std::ifstream fin;

	fin.open(fileName);
	if (fin.is_open())
	{
		float nearestDistance;
		int nearestLabel = 0;
		while (!fin.eof())
		{

			std::string x_String = EMPTYSTRING;
			std::string y_String = EMPTYSTRING;
			std::string z_String = EMPTYSTRING;

			std::string label_String = EMPTYSTRING;

			std::string line;

			getline(fin, line);

			std::istringstream issline(line);




			getline(issline, x_String, ',');

			p.setX(std::stod(x_String));




			getline(issline, y_String, ',');

			p.setY(std::stod(y_String));




			getline(issline, z_String, ',');

			p.setZ(std::stod(z_String));




			getline(issline, label_String, ',');
			p.setLabel(std::stoi(label_String));




			if ((p.getX() > 1 || p.getX() < -1) ||
				(p.getY() > 1 || p.getY() < -1) ||
				(p.getZ() > 1 || p.getZ() < -1)) {

				p.setLabel(12);
			}

			if (p.getLabel() == 12) {

				std::cout << "Noise Spotted" << std::endl;
				
				return;
			}

			ORIENTATION* temp = head;

			nearestDistance = p.nearestNeighbour(temp);

			while (temp != nullptr)
			{
				if ((p.nearestNeighbour(temp)) < nearestDistance)
				{
					nearestDistance = p.nearestNeighbour(temp);
					nearestLabel = temp->Label;
				}

				temp = temp->next;
			}

			if (p.getLabel() == nearestLabel)
				std::cout << "Matched! - testLabel: " << nearestLabel << ", nearest label: " << p.getLabel() << std::endl;
			else
				std::cout << "Not Matched... - testLabel: " << nearestLabel << ", nearest label: " << p.getLabel() << std::endl;


		}
		fin.close();
	}
	else
	{
		std::cout << "can't open file:" << fileName << std::endl;
	}
}