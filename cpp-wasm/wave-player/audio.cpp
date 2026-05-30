extern "C" {

float getPeak(float* samples, int length) {

    float peak = 0.0f;

    for (int i = 0; i < length; i++) {

        float v = samples[i];

        if (v < 0)
            v = -v;

        if (v > peak)
            peak = v;
    }

    return peak;
}

}