
// Blinking LED

const int LED = 13;  // LEDはデジタルピン13に接続

void setup()
{
pinMode(LED,OUTPUT); //デジタルピンを出力に設定*
}
void loop()
{
digitalWrite(LED,HIGH);  //LEDを点ける
delay(10);  //1秒待つ
digitalWrite(LED, LOW);  //LEDを消す
delay(50000000000000000000000);  //秒待つ
}

