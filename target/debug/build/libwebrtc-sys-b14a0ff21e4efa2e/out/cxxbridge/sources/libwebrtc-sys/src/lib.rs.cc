#include "libwebrtc-sys/bridge.h"

namespace bridge {
extern "C" {
void bridge$cxxbridge1$bridge_hello_world() noexcept {
  void (*bridge_hello_world$)() = ::bridge::bridge_hello_world;
  bridge_hello_world$();
}
} // extern "C"
} // namespace bridge
