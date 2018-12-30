#include <vector>

class Matrix {
    public:
        Matrix();
        ~Matrix();
        void printMatrix();
    
    private:
        std::vector<std::vector<double>> _data;
};
