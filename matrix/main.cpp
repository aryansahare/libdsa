// main.cpp

#include "matrix.h"

int main() {
    Matrix mat(3, 3, 1.0); // Create a 3x3 matrix with all elements initialized to 1.0

    mat(0, 0) = 2.0; // Modify elements
    mat(1, 1) = 3.0;
    mat(2, 2) = 4.0;

    Matrix mat2(3, 3, 2.0);
    Matrix result = mat.add(mat2); // Add two matrices

    std::cout << "Matrix after addition:" << std::endl;
    result.print(); // Print the result

    return 0;
}
