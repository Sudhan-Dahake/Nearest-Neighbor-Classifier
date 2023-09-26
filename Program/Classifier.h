#pragma once

/// @file Classifier.h
/// @brief Classifier header file library
/// @details The methods have presented different characteristics and behaviours of Classifier
/// @author Sudhan Dahake
/// @date 15/4/2023

#include "Point.h"

#include <string>

/// <summary>
/// @class Classifier Classifier.h "Classifier.h"
/// @brief this is an abstract class. Other classes would implement this
/// @details This class Classifier is an abstract class. It contains functions like train, and two predict functions
/// @author Sudhan Dahake
/// @date 15/4/2023
/// </summary>

class classifier:public Point {
	// this is an abstract class, classes like NNClassifier, DummyClassifier and KNNClassifier would inherit this class

	/// <summary>
	/// @fn virtual void train(std::string) = 0
	/// @brief a pure virtual void function
	/// @details train() function which is a pure virtual void function
	/// @param takes a string as parameter.
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	virtual void train(std::string) = 0;

	/// <summary>
	/// @fn virtual void predict(std::string) = 0
	/// @brief a pure virtual void function
	/// @details predict() function which is a pure virtual void function
	/// @param takes a string as parameter.
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	virtual void predict(std::string) = 0;


	
	/// <summary>
	/// @fn virtual void predict(std::string) = 0
	/// @brief a pure virtual void function
	/// @details predict() function which is a pure virtual void function
	/// @param x this is the x coordinate of type double
	/// @param y this is the y coordinate of type double
	/// @param z this is the z coordinate of type double
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	virtual void predict(double x, double y, double z) = 0;
}; 