#include "Header_Assignment6.h"



int main() {

    int rows = 3;
    int columns = 4;

    // Create and print two RGB matrices
    RGBColor** matrix1 = Assignment6::createRGBMatrix(rows, columns);
    std::cout << "RGB matrix1 with random values:" << std::endl;
    Assignment6::printRGBMatrix(matrix1, rows, columns);
    std::cout << endl;

    RGBColor** matrix2 = Assignment6::createRGBMatrix(rows, columns);
    std::cout << "RGB matrix2 with random values:" << std::endl;
    Assignment6::printRGBMatrix(matrix2, rows, columns);
    std::cout << endl;

    // Add the matrices
    RGBColor** resultMatrix = Assignment6::addRGBMatrices(matrix1, matrix2, rows, columns);

    // Print RGB values in the result matrix
    std::cout << "Result RGB matrix after addition of matrix1 and matrix2:" << std::endl;
    Assignment6::printRGBMatrix(resultMatrix, rows, columns);

    // Free the allocated memory
    Assignment6::freeRGBMatrix(matrix1, rows);
    Assignment6::freeRGBMatrix(matrix2, rows);
    Assignment6::freeRGBMatrix(resultMatrix, rows);

    return 0;
}