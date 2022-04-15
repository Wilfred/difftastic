git submodule update --init
cd tree-sitter
./script/build-wasm
cargo build --release
