#pragma once

/// @file Point.h
/// @brief Point header file library
/// @details The methods have presented different characteristics and behaviours of Point
/// @author Sudhan Dahake
/// @date 15/4/2023


/// <summary>
/// @class Point Point.h "Point.h"
/// @brief this point class contains all the attributes and getters and setters
/// @details This class have all the attributes and methods that the classifier classes need.
/// @author Sudhan Dahake
/// @date 15/4/2023
/// </summary>

class Point {

private:

	/// @brief x coordinate of type double
	double x;

	/// @brief y coordinate of type double
	double y;

	/// @brief z coordinate of type double
	double z;

	/// @brief label (orientation) of type integer
	int label;

public:

	/// <summary>
	/// @fn double getX();
	/// @brief a getter function for X coordinate
	/// @details this functions gets the X attributes value.
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	double getX();


	/// <summary>
	/// @fn double getY();
	/// @brief a getter function for Y coordinate
	/// @details this functions gets the Y attributes value.
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	double getY();


	/// <summary>
	/// @fn double getX();
	/// @brief a getter function for Z coordinate
	/// @details this functions gets the Z attributes value.
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	double getZ();


	/// <summary>
	/// @fn int getLabel();
	/// @brief a getter function for Label coordinate
	/// @details this functions gets the label attributes value.
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	int getLabel();


	/// <summary>
	/// @fn void setX(double);
	/// @brief a setter function for X coordinate
	/// @details this functions sets the value of the X attributes.
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void setX(double);


	/// <summary>
	/// @fn void setY(double)
	/// @brief a setter function for Y coordinate
	/// @details this functions sets the value of the Y attributes.
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void setY(double);


	/// <summary>
	/// @fn void setZ(double)
	/// @brief a setter function for Z coordinate
	/// @details this functions sets the value of the Z attributes.
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void setZ(double);


	/// <summary>
	/// @fn void setLabel(double)
	/// @brief a setter function for label coordinate
	/// @details this functions sets the value of the label attributes.
	/// @author Sudhan Dahake
	/// @date 15/4/2023
	/// </summary> 
	void setLabel(int);
};