# Arduino

## 顔のコード

<a href="README.md">
  <img src="a1-2.jpg" alt="顔の画像" width="70%">
</a>

```
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

byte frame[8][12] = {
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,1,1,0,0,1,1,1,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,1,1,1,1,1,0},
{0,1,0,0,0,0,0,0,0,0,1,0},
{0,1,1,1,1,1,1,1,1,1,1,0}
};

void setup() {
  matrix.begin();
  matrix.renderBitmap(frame, 8, 12);
}

void loop() {

}

```

![](a1-1.png)

[⇦ホームへ戻る](README.md)