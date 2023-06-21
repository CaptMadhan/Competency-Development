#include "Header.h"

using namespace std;

int main() {

	cout << "\n--------------------------------------------------------------" << endl;
	cout << "-------------------------Assignment 1-------------------------\n" << endl;
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

	cout << "\n--------------------------------------------------------------" << endl;
	cout << "-------------------------Assignment 2-------------------------\n" << endl;

	Car Benz("Benz",1960);
	Car Random;

	cout << "\n--------------------------------------------------------------" << endl;
	cout << "-------------------------Assignment 3-------------------------\n" << endl;

	Car honda("Honda", 1978);
	honda.accelerate();
	honda.accelerate();

	//Calling the overloaded function
	honda.display(honda.get_customerName());

	cout << "\n--------------------------------------------------------------" << endl;
	cout << "-------------------------Assignment 4-------------------------\n" << endl;

	Car gac("GAC", 1998);
	gac.display();

	//Setting volume 
	gac.currentVolume = 3;

	//Incrementing volume twice and decrementing once
	gac.volumeInc();
	gac.volumeInc();
	gac.volumeDec();
	gac.display_currentVolume();

	//Setting the temperature values 
	gac.currentTemp = 20;
	gac.extTemp = 19;
	cout << "Current Temperature: " << gac.currentTemp << "\tExternal Temperature: " << gac.extTemp << endl;
	//Check HighTempWarn()
	gac.highTempWarn();

	cout << "The type of inheritance used in Multiple Inheritance since the derived class \"Car\" class has 2 base classes i.e. \"SoundSystem\" and \"TempMonitor\"\n" << endl;


	cout << "\n--------------------------------------------------------------" << endl;
	cout << "-------------------------The End-------------------------\n" << endl;

	return 0;
}