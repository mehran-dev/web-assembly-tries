const Stream = require("node-rtsp-stream");

new Stream({
  name: "camera",
  streamUrl: "rtsp://192.168.33.66:8020/0cd2a7dd-107b-4567-a8ab-5077e3ead75f",
  wsPort: 9999,
  ffmpegOptions: {
    "-rtsp_transport": "tcp",
    "-r": 30,
  },
});

console.log("RTSP to WebSocket running on ws://localhost:9999");
