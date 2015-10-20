int beat = 500;  // 音の長さを指定
#define SPEAKER 12   // 圧電スピーカを接続したピン番号

void setup() {
}
void loop() {
  frog();
}

void doo(){
     tone(SPEAKER,262,beat) ;  // ド
     delay(beat) ;
}

void le(){
     tone(SPEAKER,294,beat) ;  // レ
     delay(beat) ;
}
void me(){
     tone(SPEAKER,330,beat) ;  // ミ
     delay(beat) ;
}

void fa(){
     tone(SPEAKER,349,beat) ;  // ファ
     delay(beat) ;
}
void so(){
     tone(SPEAKER,392,beat) ;  // ソ
     delay(beat) ;
}

void la(){
     tone(SPEAKER,440,beat) ;  // ラ
     delay(beat) ;
}

void si(){
     tone(SPEAKER,494,beat) ;  // シ
     delay(beat) ;
}

void frog(){
  doo();
  le();
  me();
  fa();
  me();
  le();
  doo();
  delay(500);
  me();
  fa();
  so();
  la();
  so();
  fa();
  me();
  delay(500);
  doo();
  delay(500);
  doo();
  delay(500);
  doo();
  delay(500);
  doo();
  delay(500);
  beat = 250;
  doo();
  doo();
  le();
  le();
  me();
  me();
  fa();
  fa();
  beat = 500;
  me();
  le();
  doo();
  delay(1000);
}

