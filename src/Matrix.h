#include <vector>

class Matrix {
    public:
        Matrix();
        Matrix(int size);
        Matrix(int rows, int columns);
        ~Matrix();
        void printMatrix();
    
    private:
        // TODO: Can we create our own "type"?
        // so it can read something like:
        // TheMatrix _data;
        std::vector<std::vector<double>> _data;

        void init(int size);
        void init(int rows, int columns);
};
