#pragma once

/// @file DummyClassifier.h
/// @brief DummyClassifier header file library
/// @details The methods have presented different characteristics and behaviours of DummyClassifier
/// @author Sudhan Dahake
/// @date 15/4/2023

#include "Classifier.h"


/// <summary>
/// @class DummyClassifier DummyClassifier.h "DummyClassifier.h"
/// @brief this class inherits the Classifier class.
/// @details This class defines the functions of the Classifier class. It is basically an algorithm like nearest neighbour
/// @author Sudhan Dahake
/// @date 15/4/2023
/// </summary>
class DummyClassifier :public classifier {

public:

	/// <summary>
	/// @fn DummyClassifier()
	/// @brief a constructor for the class
	/// @details this is the default constructor for DummyClassifier class
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	DummyClassifier();

	/// <summary>
	/// @fn void train(std::string)
	/// @brief train() function is defined here
	/// @details train() function which is inherited from classifier is defined here. But since this class is not implemented the function is not implemented as well
	/// @param takes a string as parameter.
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void train(std::string);


	/// <summary>
	/// @fn void predict(std::string)
	/// @brief predict() function is defined here
	/// @details predict() function which is inherited from classifier is defined here. But since this class is not implemented the function is not implemented as well
	/// @param takes a string as parameter.
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void predict(std::string);


	/// <summary>
	/// @fn void predict(double, double, double)
	/// @brief predict() function is defined here
	/// @param the first parameter is double which is the x coordinate
	/// @param the second parameter is double which is the y coordinate
	/// @param the third parameter is double which is the z coordinate
	/// @details predict() function which is inherited from classifier is defined here. But since this class is not implemented the function is not implemented as well
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	
	void predict(double, double, double);
};