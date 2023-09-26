#pragma once

/// @file NNClassifier.h
/// @brief NNClassifier header file library
/// @details The methods have presented different characteristics and behaviours of NNClassifier
/// @author Sudhan Dahake
/// @date 15/4/2023

#include "Classifier.h"
#include "Orientation.h"
#include "DataR&W.h"

#include <iostream>
#include <string>
#include <cmath>


/// <summary>
/// @class NNClassifier NNClassifier.h "NNClassifier.h"
/// @brief this class inherits the Classifier class.
/// @details This class defines the functions of the Classifier class. It uses the algorithm nearest neighbour
/// @author Sudhan Dahake
/// @date 15/4/2023
/// </summary>
class NNClassifier:public classifier {

private:

	/// @brief this pointer points to the head node
	ORIENTATION* ptrToHead;

public:

	/// <summary>
	/// @fn NNClassifier()
	/// @brief a constructor for the class
	/// @details this is the default constructor for NNClassifier class
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	NNClassifier();
	
	/// <summary>
	/// @fn std::string decideOrientationName(int)
	/// @brief decideOrientationName() function is defined here
	/// @details decideOrientationName() function which is inherited from classifier is defined here. It just defines the orientation based on the label
	/// @param takes an integer as parameter.
	/// @return std::string
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	std::string decideOrientationName(int);

	/// <summary>
	/// @fn void train(std::string)
	/// @brief train() function is defined here
	/// @details train() function which is inherited from classifier is defined here. This is used to train our program
	/// @param takes a string as parameter.
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void train(std::string);

	/// <summary>
	/// @fn void predict(std::string)
	/// @brief predict() function is defined here
	/// @details predict() function which is inherited from classifier is defined here. This is used to predict the data based on the training it received
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
	/// @details predict() function which is inherited from classifier is defined here. This predicts the result based on the user data it received
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void predict(double x, double y, double z);

	/// <summary>
	/// @fn double nearestNeighbour(ORIENTATION*)
	/// @brief nearestNeighbour() function is defined here
	/// @details nearestNeighbour() function determines the distance between the neighbours or points 
	/// @param takes a pointer to a custom datatype named ORIENTATION.
	/// @return double
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	double nearestNeighbour(ORIENTATION*);

	/// <summary>
	/// @fn ORIENTATION* getPtrToHead()
	/// @brief getPtrToHead() function is defined here
	/// @details getPtrToHead() function gets the ptrToHead attribute for us 
	/// @return pointer of type ORIENTATION
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	ORIENTATION* getPtrToHead();

	/// @brief destructor is used to clean dynamically allocated memory
	~NNClassifier();
};