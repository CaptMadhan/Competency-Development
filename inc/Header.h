#pragma once
#include<string>
#include<stdio.h>
#include<iostream>

using namespace std;

class Car {
private: 
	//speed -> An integer that holds the car's current speed
	int speed = 0;

public:
	//Customer -> A string that holds the maker of the car
	string customer;

	//releaseYear -> An integer that holds the car's year of release
	int releaseYear;

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