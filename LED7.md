# Arduino

## ④波のコード

[動画はこちら](https://vimeo.com/manage/videos/1091385713/131c013f34)

### コード


```
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

byte frames[14][8][12] = {
  {
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0}
  },
  {
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1}
  },
  {
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1}
  },
  {
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1}
  },
  {
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1}
  },
  {
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1}
  },
  {
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1}
  },

  {
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1,1,1,1,1}
  },
  {
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1},
  {1,1,1,1,1,0,0,1,1,1,1,1}
  },
  {
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1},
  {1,1,1,1,0,0,0,0,1,1,1,1}
  },
  {
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1},
  {1,1,1,0,0,0,0,0,0,1,1,1}
  },
  {
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,0,0,1,1}
  },
  {
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,1}
  },
  {
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0}
  },
};

void setup() {
  matrix.begin();  // LEDマトリクス初期化
}

void loop() {
  for (int i = 0; i < 14; i++) {
    matrix.renderBitmap(frames[i], 8, 12);  // 各フレーム表示
    delay(100);  // 表示時間（ミリ秒）
  }
}

```

[⇦ホームへ戻る](README.md)

