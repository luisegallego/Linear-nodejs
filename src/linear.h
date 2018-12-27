#include <nan.h>

class Linear : public Nan::ObjectWrap {
public:
    static NAN_MODULE_INIT(Init);
    static NAN_METHOD(New);
    static NAN_METHOD(Information);
    static Nan::Persistent<v8::FunctionTemplate> constructor;
};
