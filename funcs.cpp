#include <iostream>
#include <cmath>

#include "funcs.h"
#include "coord3d.h"
// add functions here

double length(Coord3D *p) {
	double x_val = p->x;
	double y_val = p->y;
	double z_val = p->z;

	double distance = sqrt((x_val*x_val) + (y_val*y_val) + (z_val*z_val));

	return distance;
}

// int main(int argc, char const *argv[])
// {
// 	Coord3D pointP = {10, 20, 30};
// 	std::cout << length(&pointP) << '\n';
	
// 	return 0;
// }