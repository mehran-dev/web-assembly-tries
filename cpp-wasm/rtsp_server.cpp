#include <iostream>
#include <cstdio>
#include <cstdlib>

int main() {

    const char* rtsp =
        "rtsp://192.168.33.66:8020/0cd2a7dd-107b-4567-a8ab-5077e3ead75f";

    std::string cmd =
        "ffmpeg "
        "-rtsp_transport tcp "
        "-i \"" + std::string(rtsp) + "\" "
        "-f mpegts "
        "-codec:v mpeg1video "
        "-s 1280x720 "
        "-b:v 1500k "
        "-r 30 "
        "http://localhost:8081/feed";

    std::cout << "Starting RTSP relay...\n";

    system(cmd.c_str());

    return 0;
}