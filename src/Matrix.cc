#include "Matrix.h"
#include <iostream>


Matrix::Matrix() {
    Matrix::init(3, 3);
};

Matrix::Matrix(unsigned int size) {
    Matrix::init(size, size);
};

Matrix::Matrix(unsigned int rows,unsigned  int columns){
    Matrix::init(rows, columns);
};

Matrix::~Matrix(){};

void Matrix::printMatrix(){
    for(unsigned int row = 0; row < _data.size(); row++){
        for(unsigned int column = 0; column < _data[row].size(); column++){
            std::cout << _data[row][column] << " ";
        }
        std::cout << std::endl;
    }
};

void Matrix::init(unsigned int rows, unsigned int columns){
    for(unsigned int i = 0; i < rows; i++){
        std::vector<double> row;
        for(unsigned int j = 0; j < columns; j++){
            row.push_back(1.1);
        }
        _data.push_back(row);
    }
};
