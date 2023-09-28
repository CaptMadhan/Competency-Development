#pragma once
#include<string>
#include<stdio.h>
#include<iostream>
#include <chrono>
#include <thread>

using namespace std;

class RGBColor {
public:
	int red;
	int green;
	int blue;
	
	// Default constructor
	RGBColor() : red(0), green(0), blue(0) {}

	// Constructor with parameters
	RGBColor(int r, int g, int b) : red(r), green(g), blue(b) {}
};

class Assignment6 {
public:
	// Function to create and initialize an RGB matrix
	static RGBColor** createRGBMatrix(int rows, int columns) {

		// Allocate memory for the matrix of RGBColor objects
		RGBColor** matrix = new RGBColor * [rows];
		for (int i = 0; i < rows; i++) {
			matrix[i] = new RGBColor[columns];
		}

		// Seed the random number generator using high precision time
		std::srand(static_cast<unsigned int>(std::chrono::high_resolution_clock::now().time_since_epoch().count()));

		// Initialize the matrix with random RGB values
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				matrix[i][j] = RGBColor(std::rand() % 256, std::rand() % 256, std::rand() % 256);
			}
		}
		return matrix;
	}


	// Function to add two RGB matrices
	static RGBColor** addRGBMatrices(RGBColor** matrix1, RGBColor** matrix2, int rows, int columns) {

		// Allocate memory for the resulting matrix
		RGBColor** resultMatrix = new RGBColor * [rows];
		for (int i = 0; i < rows; i++) {
			resultMatrix[i] = new RGBColor[columns];
		}

		// Perform matrix addition for the RGB color channels
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				resultMatrix[i][j].red = matrix1[i][j].red + matrix2[i][j].red;
				resultMatrix[i][j].green = matrix1[i][j].green + matrix2[i][j].green;
				resultMatrix[i][j].blue = matrix1[i][j].blue + matrix2[i][j].blue;
			}
		}

		return resultMatrix;
	}

	// Function to print the given matrix
	static void printRGBMatrix(RGBColor** matrix, int rows, int columns) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				std::cout << "(" << matrix[i][j].red << ",\t" << matrix[i][j].green << ",\t" << matrix[i][j].blue << ")\t";
			}
			std::cout << "\n";
		}
	}

	// Function to free memory allocated for an RGB matrix
	static void freeRGBMatrix(RGBColor** matrix, int rows) {
		for (int i = 0; i < rows; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
	}
};
