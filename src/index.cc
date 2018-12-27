#include <nan.h>
#include "linear.h"

NAN_MODULE_INIT(LinearModule) {
    Linear::Init(target);
}

NODE_MODULE(linear, LinearModule)