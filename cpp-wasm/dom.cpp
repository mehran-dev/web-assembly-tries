#include <emscripten/emscripten.h>

extern "C" {

EMSCRIPTEN_KEEPALIVE
void changeText() {

    EM_ASM({
        document.getElementById("title").innerText =
            "🔥 Changed from C++ WASM!";
    });

}

}
