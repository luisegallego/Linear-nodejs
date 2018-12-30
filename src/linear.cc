#include "linear.h"
#include <iostream>


Nan::Persistent<v8::FunctionTemplate> Linear::constructor;

NAN_MODULE_INIT(Linear::Init) {
    v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(Linear::New);
    constructor.Reset(ctor);
    ctor->InstanceTemplate()->SetInternalFieldCount(1);
    ctor->SetClassName(Nan::New("Linear").ToLocalChecked());

    // set prototype methods
    Nan::SetPrototypeMethod(ctor, "information", Information);
    Nan::SetPrototypeMethod(ctor, "getMatrix", getMatrix);

    target->Set(Nan::New("Linear").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(Linear::New) {
    // create a new instance and wrap our javascript instance
    Linear* linear = new Linear();
    Matrix * matrix = new Matrix();
    linear->matrix = matrix;
    linear->Wrap(info.Holder());

    // return the wrapped javascript instance
    info.GetReturnValue().Set(info.Holder());
}

NAN_METHOD(Linear::Information) {
    info.GetReturnValue().Set(Nan::New("Linear Algebra library for nodejs").ToLocalChecked());
}

NAN_METHOD(Linear::getMatrix) {  
    
    // unwrap Linear object
    Linear * self = Nan::ObjectWrap::Unwrap<Linear>(info.This());
    self->matrix->printMatrix();
}
