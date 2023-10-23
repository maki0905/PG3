#include <stdio.h>

#include "Vehicle.h"
#include "Car.h"
#include "Ship.h"
#include "Airplane.h"

int main() {
	Vehicle* vehicle[3];

	// ê∂ê¨
	vehicle[0] = new Car();
	vehicle[1] = new Ship();
	vehicle[2] = new Airplane();

	// çsìÆ
	for (int i = 0; i < 3; i++) {
		vehicle[i]->Move();
	}

	for (int i = 0; i < 3; i++) {
		delete vehicle[i];
	}

	return 0;
}