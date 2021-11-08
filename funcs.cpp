#include <iostream>
#include <cmath>

#include "funcs.h"
#include "coord3d.h"
// add functions here

/*
@param *p - address of a Coord3D pointer

@returns the length of the vector
*/
double length(Coord3D *p) {
	double x_val = p->x;
	double y_val = p->y;
	double z_val = p->z;

	double distance = sqrt((x_val*x_val) + (y_val*y_val) + (z_val*z_val));

	return distance;
}

/*
@param *p1 - address of a Coord3D pointer
@param *p1 - address of a Coord3D pointer

@returns the pointer to the Coord3D object that is further from
the origin
*/
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
	Coord3D * ans;
	if (length(p1) > length(p2)) {
		ans = p1;
	} else {
		ans = p2;
	}

	return ans;
}


/*
@param *ppos - Coord3D pointer of an objects position 
@param *pvel - Coord3D pointer of an objects velocity
@param dt - elasped time

Updates the ppos pointer with the new position coordinates
*/
void move(Coord3D *ppos, Coord3D *pvel, double dt) {
	ppos->x = (ppos->x + (pvel->x * dt));
	ppos->y = (ppos->y + (pvel->y * dt));
	ppos->z = (ppos->z + (pvel->z * dt));

	return;
}

int main(int argc, char const *argv[])
{
	// Coord3D pointP = {10, 20, 30};
 	// Coord3D pointQ = {-20, 21, -22};
 	// std::cout << "tests for length\n";
	// std::cout << "Coord P: " << length(&pointP) << '\n';
	// std::cout << "Coord Q: " << length(&pointQ) << '\n' << '\n';

 	// std::cout << "tests for fartherFromOrigin\n";
	// std::cout << "Address of P: " << &pointP << std::endl;
 	// std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;

 	// Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
 	// std::cout << "ans = " << ans << std::endl; 

 	std::cout << "tests for move\n";
	Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    std::cout << pos.x << " " << pos.y << " " << pos.z << '\n';
    // prints: 2 -10 100.4

	return 0;
}