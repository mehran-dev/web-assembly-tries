#include <emscripten/emscripten.h>

extern "C" {

EMSCRIPTEN_KEEPALIVE
void init() {

    EM_ASM({
        document.body.innerHTML += "<h1>Rendered by WASM</h1>";
    });

}

}