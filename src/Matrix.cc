#include "Matrix.h"
#include <iostream>


Matrix::Matrix() {
    Matrix::init(3, 3);
};

Matrix::Matrix(int size) {
    Matrix::init(size, size);
};

Matrix::Matrix(int rows, int columns){
    Matrix::init(rows, columns);
};

Matrix::~Matrix(){};

void Matrix::printMatrix(){
    for(int row = 0; row < _data.size(); row++){
        for(int column = 0; column < _data[row].size(); column++){
            std::cout << _data[row][column] << " ";
        }
        std::cout << std::endl;
    }
};

void Matrix::init(int rows, int columns){
    for(int i = 0; i < rows; i++){
        std::vector<double> row;
        for(int j = 0; j < columns; j++){
            row.push_back(1.1);
        }
        _data.push_back(row);
    }
};
