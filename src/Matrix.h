#include <nan.h>

class Matrix : public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT(Init);
        // static NAN_METHOD(setSize);
        // static NAN_METHOD(getMatrix);
        // static NAN_METHOD(getRow);
        // static NAN_METHOD(getColumn);
        
    private:
        float ** matrix;
        Matrix();
        ~Matrix();
        Matrix(int rows, int columns);
        static NAN_METHOD(New);
        static Nan::Persistent<v8::FunctionTemplate> constructor;
}