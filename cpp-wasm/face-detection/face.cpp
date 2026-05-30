#include <vector>

extern "C" {

// خیلی ساده: dummy face detector
// (فعلاً الگوریتم fake برای تست pipeline)

struct Box {
    int x;
    int y;
    int w;
    int h;
};

Box faceBox;

Box* detect(unsigned char* data, int width, int height) {

    // اینجا بعداً الگوریتم واقعی می‌ذاریم
    // فعلاً یک box وسط تصویر

    faceBox.x = width / 3;
    faceBox.y = height / 3;
    faceBox.w = width / 3;
    faceBox.h = height / 3;

    return &faceBox;
}

}