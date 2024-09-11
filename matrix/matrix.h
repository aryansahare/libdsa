// matrix.h

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {
public:
    // Constructors and Destructor
    Matrix(int rows, int cols, double initialValue = 0.0);
    Matrix(const Matrix& other);
    ~Matrix();
    Matrix& operator=(const Matrix& other);

    // Accessors
    int getRows() const;
    int getCols() const;

    // Matrix operations
    Matrix add(const Matrix& other) const;
    Matrix subtract(const Matrix& other) const;
    Matrix multiply(const Matrix& other) const;
    Matrix transpose() const;
    Matrix scalarMultiply(double scalar) const;
    Matrix inverse() const;
    void fill(double value);
    void print() const;

    // Element access
    double& operator() (int row, int col);
    double operator() (int row, int col) const;

    // Determinant
    double determinant() const;

private:
    int rows_;
    int cols_;
    double** data_;

    void allocateMemory();
    void deallocateMemory();
    void copyData(const Matrix& other);
};

#endif // MATRIX_H
