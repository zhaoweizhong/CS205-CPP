#ifndef MATRIX_HPP
#define MATRIX_HPP

#define MAXROWS 2
#define MAXCOLS 3

#include <iostream>

template <class T>
class Matrix {
private:
    T matrix[MAXROWS][MAXCOLS];
    int rows;
    int cols;
public:
    //Constructor
    Matrix(); //Set rows to MAXROWS and cols to MAXCOLS
    //Initialize all the values of matrix to zero
    //print Functions
    void printMatrix();
    //Setter Functions
    void setMatrix(T array[][MAXCOLS]); //set the doubleArray to what is sent
    void addMatrix(T otherArray[][MAXCOLS]); //add an array to matrix
    void addMatrix(Matrix otherMatrix);
    //No destructor needed
};

using namespace std;

template <typename M_type>
Matrix<M_type>::Matrix() {
    cols = MAXCOLS;
    rows = MAXROWS;
}

template <typename M_type>
void Matrix<M_type>::printMatrix() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

template <typename M_type>
void Matrix<M_type>::setMatrix(M_type array[][MAXCOLS]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = array[i][j];
        }
    }
}

template <typename M_type>
void Matrix<M_type>::addMatrix(M_type otherArray[][MAXCOLS]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] += otherArray[i][j];
        }
    }
}

template <typename M_type>
void Matrix<M_type>::addMatrix(Matrix otherMatrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] += otherMatrix[i][j];
        }
    }
}

#endif // MATRIX_HPP