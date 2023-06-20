#pragma once
#include<string>
#include<stdio.h>
#include<iostream>

using namespace std;

class SoundSystem {
public:

	//Integer variable having the current value of sound system volume
	int currentVolume = 0;

	//Function to increment the currentVolume value by 1
	void volumeInc() {
		this->currentVolume += 1;
		return;
	}

	//Function to decrement the currentVolume value by 1
	void volumeDec() {
		this->currentVolume -= 1;
		return;
	}

	//Function to display currentVolume
	void display_currentVolume() {
		cout << "Current Volume: " << this->currentVolume << endl;
		return;
	}

};

class TempMonitor {
public:
	//Integer variable having the current temperature inside the car in Celsius
	int currentTemp = 0;

	//Integer variable having the external temperature of the environment in Celsius
	int extTemp = 0;

	//Function which sends out a warning when currentTemp >= extTemp
	void highTempWarn() {
		if (this->currentTemp >= extTemp)
			cout << "Warning! Current Temperature is greater than external temperature\n" << endl;
	}
};

class Car :public SoundSystem, public TempMonitor {
private: 
	//speed -> An integer that holds the car's current speed
	int speed;

public:


	//Customer -> A string that holds the maker of the car
	string customer;

	//releaseYear -> An integer that holds the car's year of release
	int releaseYear;

	//Default Constructor
	Car() {
		cout << "Default constructor is called" << endl;
		customer = "Random Customer";
		releaseYear = 2000;
		speed = 0;
	}

	//Parameterized constructor
	Car(string customer, int releaseYear) {
		cout << "Parameterized constructor is called" << endl;
		this->customer = customer;
		this->releaseYear = releaseYear;
		this->speed = 0;
	}

	//Destructor
	~Car() {
		cout << "Destructor is Called" << endl;
	}

	//Getter functions to get the values of releaseYear, cusotmer and speed respectively
	int get_ReleaseYear() {
		return releaseYear;
	}

	string get_customerName() {
		return customer;
	}

	int get_speed() {
		return speed;
	}

	//Function to increase speed value by 10
	void accelerate() {
		speed += 10;
	}

	//Function to decrease speed value by 10
	void brake() {
		speed -= 10;
	}

	//Function to Display class members
	void display() {
		cout << "Customer Name: " << get_customerName() << "\nRelease Year: " << get_ReleaseYear() << "\nCurrent Speed: " << get_speed() << endl;
	}
	//Overloaded Display function
	void display(string s) {
		if(s == "Honda")
		cout << "Customer Name: Honda Motor Company" << "\nRelease Year: " << get_ReleaseYear() << "\nCurrent Speed: " << get_speed() << endl;
	}

};

