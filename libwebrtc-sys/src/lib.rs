#[cxx::bridge(namespace = "bridge")]
mod ffi {
    // C++ types and signatures exposed to Rust.
    unsafe extern "C++" {
        include!("libwebrtc-sys/bridge.h");

        pub fn bridge_hello_world();
    }
}

pub fn run() {
    ffi::bridge_hello_world();
}
