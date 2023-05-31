#pragma once
#include<string>
#include<stdio.h>
#include<iostream>

using namespace std;

class Car {
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
};