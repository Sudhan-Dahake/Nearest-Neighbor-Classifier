#pragma once

/// @file test.h
/// @brief test header file library
/// @details The methods have presented different characteristics and behaviours of test
/// @author Sudhan Dahake
/// @date 15/4/2023

#include "Orientation.h"
#include "NNClassifier.h"

#include <string>

/// <summary>
/// @class testPhoneOrientation test.h "test.h"
/// @brief this class is used to test our code
/// @details This class tests our code and checks whether it's properly trained or not
/// @author Sudhan Dahake
/// @date 15/4/2023
/// </summary>
class testPhoneOrientation {

public:

	/// <summary>
	/// @fn void test(std::string, NNClassifier&, ORIENTATION*)
	/// @brief test() function is defined here
	/// @details test() function is used here to test our code which checks if our program is trained properly or not
	/// @param first parameter is a string
	/// @param second parameter is a referenced to object NNClassifier
	/// @param third parameter is a pointer of type ORIENTATION
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	
	void test(std::string, NNClassifier&, ORIENTATION*);
};      