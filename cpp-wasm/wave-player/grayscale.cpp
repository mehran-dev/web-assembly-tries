extern "C" {

unsigned char clamp(int v) {
    if (v < 0) return 0;
    if (v > 255) return 255;
    return (unsigned char)v;
}

void grayscale(unsigned char* data, int length) {

    for (int i = 0; i < length; i += 4) {

        unsigned char r = data[i];
        unsigned char g = data[i + 1];
        unsigned char b = data[i + 2];

        unsigned char gray =
            (r + g + b) / 3;

        data[i]     = gray;
        data[i + 1] = gray;
        data[i + 2] = gray;
    }
}

}