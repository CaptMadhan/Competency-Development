#include "Header.h"

using namespace std;

int main() {

	cout << "--------------------------------------------------------------" << endl;
	cout << "-------------------------Assignment 1-------------------------" << endl;
	//Creating an object of Car class
	Car ferrari;

	//setting car name and release year
	ferrari.customer = "Ferrari";
	ferrari.releaseYear = 2000;
	cout << "Car customer name: " << ferrari.get_customerName() << "\nRelease year: " << ferrari.get_ReleaseYear() << endl;

	//Task
	cout << "Car inital speed: " << ferrari.get_speed() << "KmpH" << endl;

	ferrari.accelerate();
	ferrari.accelerate();
	ferrari.accelerate();
	ferrari.accelerate();
	ferrari.accelerate();
	cout << "Car speed after accelerating 5 times: " << ferrari.get_speed() << "KmpH" << endl;

	ferrari.brake();
	ferrari.brake();
	ferrari.brake();
	ferrari.brake();
	ferrari.brake();
	cout << "Car speed after braking 5 times: " << ferrari.get_speed() << "KmpH" << endl;

	cout << "--------------------------------------------------------------" << endl;
	cout << "-------------------------Assignment 2-------------------------" << endl;

	Car Benz("Benz",1960);
	Car Random;

	return 0;
}