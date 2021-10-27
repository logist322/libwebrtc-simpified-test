build.clib:
	cd webrtc && \
	clang -c webrtc.cc -o webrtc.obj && \
	lib webrtc.obj

run: build.clib
	cargo run
