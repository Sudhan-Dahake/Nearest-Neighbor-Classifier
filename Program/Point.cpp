#include "Point.h"

double Point::getX() {

	return this->x;
}

double Point::getY() {

	return this->y;
}

double Point::getZ() {

	return this->z;
}

int Point::getLabel() {

	return this->label;
}

void Point::setX(double x) {

	this->x = x;
}

void Point::setY(double y) {

	this->y = y;
}

void Point::setZ(double z) {

	this->z = z;
}

void Point::setLabel(int label) {

	this->label = label;
}