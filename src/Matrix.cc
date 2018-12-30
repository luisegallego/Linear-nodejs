#include "Matrix.h"


Matrix::Matrix(int rows, int colums) {
    matrix = new float *[rows];
    for(int row = 0; row < rows; row++){
        matrix[row] = new float[columns];
    }
}

Matrix::~Matrix(){
    for(int row = 0; row < matrix.length; row++){
        delete matrix[row];
    }
    delete matrix;
}





Nan::Persistent<v8::FunctionTemplate> Matrix::constructor;

NAN_MODULE_INIT(Matrix::Init) {
    v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(Matrix::New);
    constructor.Reset(ctor);
    ctor->InstanceTemplate()->SetInternalFieldCount(1);
    ctor->SetClassName(Nan::New("Matrix").ToLocalChecked());

    // Nan::SetPrototypeMethod(ctor, "setSize", setSize);
    // Nan::SetPrototypeMethod(ctor, "getMatrix", getMatrix);
    // Nan::SetPrototypeMethod(ctor, "getRow", getRow);
    // Nan::SetPrototypeMethod(ctor, "getColumn", getColumn);

    target->Set(Nan::New("Matrix").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(Matrix::New) {

    // set the default size for rows or columns to 0 if not specified
    int rows = info[0]->IsUndefined() ? 0 : info[0]->NumberValue();
    int columns = info[1]->IsUndefined() ? 0 : info[1]->NumberValue();



    // create a new instance and wrap our javascript instance
    Matrix* matrix = new Matrix(rows, columns);



    Matrix->Wrap(info.Holder());

    // return the wrapped javascript instance
    info.GetReturnValue().Set(info.Holder());
}
