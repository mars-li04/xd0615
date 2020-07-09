#include <Adafruit_NeoPixel.h>       //把NeoPixel的 头文件包含进来
#define PIN 1  //定义LED所对应的管脚
Adafruit_NeoPixel strip = Adafruit_NeoPixel(16, PIXELPIN, NEO_GRB + NEO_KHZ800);
/*
 声明一个NeoPixel对象strip，然后通过该对象控制彩带上的LED。 括号中有三个参数：
彩带上LED的数目，每个LED也称为一个像素;
首个LED连接单片机的引脚号;
全彩LED的型号和参数;
*/
void setup()
{
strip.begin();
strip.show(); 
}
//在setup()函数中，调用begin()方法准备输出数据
strip.setPixelColor(n, red, green, blue);
strip.setPixelColor(n, red, green, blue, white);
/*
 设置彩带中各像素的颜色：
第一个参数n是彩带中LED的编号，最接近单片机引脚的编号为0；
接下来的三个参数描述像素颜色，分别表示红色、绿色和蓝色的亮度级别，0为最暗，255是最大亮度；
最后一个white是可选参数，只适用于带独立正白光的全彩LED，即RGBW型LED。
*/
