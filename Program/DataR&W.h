#pragma once

/// @file DataR&W.h
/// @brief DataR&W header file library
/// @details The methods have presented different characteristics and behaviours of Data
/// @author Sudhan Dahake
/// @date 15/4/2023

#include "Orientation.h"
#include "NNClassifier.h"

#include <iostream>
#include <string>

#define EMPTYSTRING ""

/// <summary>
/// @class Data DataR&W.h "DataR&W.h"
/// @brief this class is used to read data from a file.
/// @details This class is used to read data from a file. Other classes will use this class for file reading requirements
/// @author Sudhan Dahake
/// @date 15/4/2023
/// </summary>

class Data {

public:

	/// <summary>
	/// @fn void ReadFile(double&, double&, double&, std::string&, std::ifstream&)
	/// @brief this funciton is used to read data from a file
	/// @details The ReadFile() function reads data from a file and stores it in the appropriate parameters
	/// @param  first parameter is a reference to a double which is the x coordinate
	/// @param  second parameter is a reference to a double which is the y coordinate
	/// @param  third parameter is a reference to a double which is the z coordinate
	/// @param  fourth parameter is a reference to a string which is the label (orientation)
	/// @param  fifth parameter is a stream for files
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary>
	void ReadFile(double&, double&, double&, std::string&, std::ifstream&);
};