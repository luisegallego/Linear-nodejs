#include <vector>

class Matrix {
    public:
        Matrix();
        Matrix(unsigned int size);
        Matrix(unsigned int rows, unsigned int columns);
        ~Matrix();
        void printMatrix();
    
    private:
        // TODO: Can we create our own "type"?
        // so it can read something like:
        // TheMatrix _data;
        std::vector<std::vector<double>> _data;

        void init(unsigned int rows, unsigned int columns);
};
