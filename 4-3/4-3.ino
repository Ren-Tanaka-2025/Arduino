
// Blinking LED

const int LED = 13;  // LEDはデジタルピン13に接続

const int BUTTON = 7; // プッシュボタンが接続されているピン

int val = 0; // 入力ピンの状態がこの変数（val）に記憶される
int state = 0;



void setup()
{
pinMode(LED,OUTPUT); //デジタルピンを出力に設定*
pinMode(BUTTON, INPUT); //デジタルピンを出力に設定*
}
void loop()
{
    val = digitalRead(BUTTON); // 入力を読み取りvalに格納
if (val == HIGH) {
    state = 1 - state;
}

if (state == 1) {

digitalWrite(LED,HIGH);  //LEDを点ける
} else {
    digitalWrite(LED, LOW);  //LEDを消す
    }
}







