#include "DataR&W.h"

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void Data::ReadFile(double& x, double& y, double& z, std::string& label, std::ifstream& fin) {

	std::string line;

	std::getline(fin, line);

	std::istringstream issline(line);



	std::string x_InString;

	getline(issline, x_InString, ',');

	x = std::stod(x_InString);



	std::string y_InString;

	getline(issline, y_InString, ',');

	y = std::stod(y_InString);



	std::string z_InString;

	getline(issline, z_InString, ',');

	z = std::stod(z_InString);




	getline(issline, label);
}