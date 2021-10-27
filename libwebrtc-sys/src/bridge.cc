#include "libwebrtc-sys/bridge.h"
#include <cstdio>

extern "C++" {
    void hello_world();
}

namespace bridge {
    void bridge_hello_world() {
        printf("This is CPP bridge, calling to libwebrtc now:\r\n");
        hello_world();
    }
}
