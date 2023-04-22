#include "sportscar.h"

int main()
{
	Car yourCar(100, 4, "yourcar");
	yourCar.display();
	yourCar.whereAmI();
	yourCar.gear = 5;
	yourCar.display();
	yourCar.changeGear(3);
	yourCar.display();

	SportsCar mycar;
	mycar.setTurbo(false);
	mycar.speedUp();
	mycar.display();
	mycar.whereAmI();


	return 0;
}