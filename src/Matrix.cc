#include "Matrix.h"

Matrix::Matrix() {
    for(int i = 0; i < 3; i++){
        std::vector<double> row;
        for(int j = 0; j < 3; j++){
            row.push_back(0.0);
        }

        _matrix.push_back(row);
    }
};

Matrix::~Matrix(){};
