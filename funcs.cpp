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

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
	Coord3D * ans;
	if (length(p1) > length(p2)) {
		ans = p1;
	} else {
		ans = p2;
	}

	return ans;
}

int main(int argc, char const *argv[])
{
	Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
    std::cout << "tests for length\n";
	std::cout << "Coord P: " << length(&pointP) << '\n';
	std::cout << "Coord Q: " << length(&pointQ) << '\n' << '\n';

    std::cout << "tests for fartherFromOrigin\n";
	std::cout << "Address of P: " << &pointP << std::endl;
    std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    std::cout << "ans = " << ans << std::endl; 

	return 0;
}