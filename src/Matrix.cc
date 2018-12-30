#include "Matrix.h"
#include <vector>
#include <iostream>

Matrix::Matrix() {
    for(int i = 0; i < 3; i++){
        std::vector<double> row;
        for(int j = 0; j < 3; j++){
            row.push_back(0.0);
        }

        _data.push_back(row);
    }
};

Matrix::~Matrix(){};

void Matrix::printMatrix(){
    for(int row = 0; row < _data.size(); row++){
        for(int column = 0; column < _data[row].size(); column++){
            std::cout << _data[row][column];
        }
        std::cout << std::endl;
    }
}
