#pragma once

/// @file Menu.h
/// @brief Menu header file library
/// @details The methods have presented different characteristics and behaviours of Menu
/// @author Sudhan Dahake
/// @date 15/4/2023

#include <iostream>
#include <string>

#define EMPTYSTRING ""
#define NULLCHARACTER '\0'


/// <summary>
/// @class Menu Menu.h "Menu.h"
/// @brief this class contains the methods related to Menu
/// @details This class contains the methods for the Menu. It basically is used for user input and for getting visuals from the user
/// @author Sudhan Dahake
/// @date 15/4/2023
/// </summary>
class Menu {

private:

	/// @brief a string named input is a attribute for this class
	std::string input;

public:

	/// <summary>
	/// @fn Menu()
	/// @brief a constructor for the class
	/// @details this is the default constructor for Menu class
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	Menu();

	/// <summary>
	/// @fn void getClassFromUser(bool)
	/// @brief getClassFromUser function is defined here
	/// @details This function asks the user which class or algorithm would they would like to choose
	/// @param takes a bool as parameter.
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void getClassFromUser(bool);

	/// <summary>
	/// @fn void getCoordinatesFromUser()
	/// @brief getCoordinatesFromUser() function is defined here
	/// @details getCoordinatesFromUser() function is used to get coordinates or user input from the user
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void getCoordinatesFromUser();

	/// <summary>
	/// @fn void getFileName()
	/// @brief getFileName() function is defined here
	/// @details getFileName() function asks the user to input a file's name
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void getFileName();

	/// <summary>
	/// @fn void cleanString()
	/// @brief cleanString() function is defined here
	/// @details cleanString() function cleans our attribute which is a string
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void cleanString();

	/// <summary>
	/// @fn std::string getUserInput()
	/// @brief getUserInput() function is defined here
	/// @details getUserInput() function is defined here which takes input from the user
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	std::string getUserInput();

	/// <summary>
	/// @fn void getNNClassifierInputFromUser()
	/// @brief getNNClassifierInputFromUser() function is defined here
	/// @details getNNClassifierInputFromUser() function takes input related specifically to the NNClassifier class from the user
	/// @return void (nothing)
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void getNNClassifierInputFromUser();
};