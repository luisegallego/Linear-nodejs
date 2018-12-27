#include "linear.h"

Nan::Persistent<v8::FunctionTemplate> Linear::constructor;

NAN_MODULE_INIT(Linear::Init) {
    v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(Linear::New);
    constructor.Reset(ctor);
    ctor->InstanceTemplate()->SetInternalFieldCount(1);
    ctor->SetClassName(Nan::New("Linear").ToLocalChecked());

    Nan::SetPrototypeMethod(ctor, "information", Information);

    target->Set(Nan::New("Linear").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(Linear::New) {
    // create a new instance and wrap our javascript instance
    Linear* linear = new Linear();
    linear->Wrap(info.Holder());

    // return the wrapped javascript instance
    info.GetReturnValue().Set(info.Holder());
}

NAN_METHOD(Linear::Information) {
    info.GetReturnValue().Set(Nan::New("Linear Algebra library for nodejs").ToLocalChecked());
}
