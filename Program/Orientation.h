#pragma once

#include <iostream>

typedef struct Orientation {

	double x;
	double y;
	double z;
	int Label;

	struct Orientation* next;
} ORIENTATION;