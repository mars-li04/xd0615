int a=4;//定义数字接口7 连接a 段数码管
int b=5;// 定义数字接口6 连接b 段数码管
int c=6;// 定义数字接口5 连接c 段数码管
int d=7;// 定义数字接口11 连接d 段数码管
int e=8;// 定义数字接口10 连接e 段数码管
int f=9;// 定义数字接口8 连接f 段数码管
int g=10;// 定义数字接口9 连接g 段数码管

#include <MsTimer2.h>

void digital_1() //显示数字1
{

digitalWrite(c,HIGH);//给数字接口5 引脚高电平，点亮c 段
digitalWrite(b,HIGH);//点亮b 段
digitalWrite(a,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);//熄灭小数点DP 段
digitalWrite(f,LOW);
digitalWrite(g,LOW);
}
void digital_2() //显示数字2
{

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);
digitalWrite(e,HIGH);
digitalWrite(d,HIGH);
digitalWrite(f,LOW);
digitalWrite(c,LOW);
}
void digital_3() //显示数字3
{

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(f,LOW);
digitalWrite(e,LOW);
}
void digital_4() //显示数字4
{
digitalWrite(c,HIGH);
digitalWrite(b,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(a,LOW);
digitalWrite(e,LOW);
digitalWrite(d,LOW);
}
void digital_5() //显示数字5
{
digitalWrite(c,HIGH);
digitalWrite(b,LOW);
digitalWrite(a,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
}
void digital_6() //显示数字6
{
digitalWrite(c,HIGH);
digitalWrite(b,LOW);
digitalWrite(a,LOW);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
}
void digital_7() //显示数字7
{
digitalWrite(c,HIGH);
digitalWrite(b,HIGH);
digitalWrite(a,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
}
void digital_8() //显示数字8
{
digitalWrite(c,HIGH);//给数字接口5 引脚高电平，点亮c 段
digitalWrite(b,HIGH);//点亮b 段
digitalWrite(a,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);//熄灭小数点DP 段
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
}
void digital_9() //显示数字8
{
digitalWrite(c,HIGH);//给数字接口5 引脚高电平，点亮c 段
digitalWrite(b,HIGH);//点亮b 段
digitalWrite(a,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);//熄灭小数点DP 段
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
}
int i=1;
void digitalNumber()
{
 
 if(i==1)
 {
   digital_1();
   i++;
 }
   if(i==2)
 {
   digital_2();
   i++;
 }
   if(i==3)
 {
   digital_3();
   i++;
 }
   if(i==4)
 {
   digital_4();
   i++;
 }
   if(i==5)
 {
   digital_5();
   i++;
 }
   if(i==6)
 {
   digital_6();
   i++;
 }
   if(i==7)
 {
   digital_7();
   i++;
 }
   if(i==8)
 {
   digital_8();
   i++;
 }
   if(i==9)
 {
   digital_9();
   i++;
 }
  if(i>9)
  {
    i=i-9;
  }
}
  
   
    
  
void setup()
{
int j;
for(j=4;j<=10;j++)
pinMode(i,OUTPUT);
MsTimer2::set(1000,digitalNumber);
MsTimer2::start(); 
  
}
void loop()
{
}
