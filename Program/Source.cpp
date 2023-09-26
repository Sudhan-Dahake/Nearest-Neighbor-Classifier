#include <iostream>

#include "Menu.h"
#include "NNClassifier.h"
#include "Menu.h"
#include "test.h"
#include "DummyClassifier.h"
#include "KNNClassifier.h"

int main(void) {

	NNClassifier phoneOrientation;

	phoneOrientation.train("trainingData.txt");

	/*Testing Implemented*/
	/**************************************************************************************/

	/*testPhoneOrientation test;

	test.test("testingData.txt", phoneOrientation, phoneOrientation.getPtrToHead());*/

	/**************************************************************************************/

	bool mainMenuContinue = true;

	std::cout << "***********************************" << std::endl;
	std::cout << "MY First Machine Learning Program!!" << std::endl;
	std::cout << "***********************************" << std::endl << std::endl;

	Menu m1;

	Menu m2;

	while (mainMenuContinue) {

		m1.getClassFromUser(mainMenuContinue);

		if (m1.getUserInput() == "1") {

			m2.getNNClassifierInputFromUser();

			switch (stoi(m2.getUserInput()))
			{
			case 0:

				break;

			case 1:
				double x;
				double y;
				double z;

				std::cout << std::endl << "Please enter the x value:";
				std::cin >> x;

				std::cout << std::endl << "Please enter the y value:";
				std::cin >> y;

				std::cout << std::endl << "Please enter the z value:";
				std::cin >> z;

				phoneOrientation.predict(x, y, z);
				break;

			case 2:
				std::string fileName;

				std::cout << std::endl << "Please enter the file name (eg. 'samplefile.txt') :";
				std::cin >> fileName;

				phoneOrientation.predict(fileName);

				std::cout << std::endl << std::endl << "Results file created!" << std::endl << std::endl;

				break;
			}
		}
		else if (m1.getUserInput() == "0") {

			mainMenuContinue = false;
		}
		else if (m1.getUserInput() == "2") {

			KNNClassifier k;
		}
		else if (m1.getUserInput() == "3") {

			DummyClassifier d;
		}
	}

	std::cout << std::endl << "Thank you for using my program!" << std::endl;

	return 0;
}