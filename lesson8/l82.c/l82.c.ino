#include <Adafruit_NeoPixel.h>  //包含头文件
#define PIN 1
Adafruit_NeoPixel strip = Adafruit_NeoPixel(16, PIN, NEO_GRB + NEO_KHZ800);
uint8_t rb[7][3] = { {255, 0, 0}, {255, 125, 0}, {255, 255, 0},
{0, 255, 0}, {0, 155, 255}, {0, 0, 255}, {139, 0, 255}
};  //设置头文件的颜色
void setup() {
strip.begin();
strip.setBrightness(50);
}
void loop() {
for (uint8_t j = 0; j < 16; j++) {
for (uint8_t k = 0; k < 16; k++)
strip.setPixelColor(k, 0);
for (int8_t i = 0; i <= j; i++)
strip.setPixelColor(i, strip.Color(rb[(j-i) % 7][0], rb[(j-i) % 7][1], rb[(j-i) % 7][2]));
strip.show();
delay(20);
}
delay(5000);
}
