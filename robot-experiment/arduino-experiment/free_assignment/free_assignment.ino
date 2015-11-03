#include <LiquidCrystal.h>
int beat = 500;  // 音の長さを指定
#define SPEAKER 12   // 圧電スピーカを接続したピン番号
#define MOIST A1
#define CDS A2
#define RED 5 
#define YEL 6
#define BLU 7
#define TMP A0

void setup(){
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(YEL, OUTPUT);
  pinMode(BLU, OUTPUT);
}
 
void loop(){
  int ans , temp , moi, brightness;
  moi = analogRead(A1);
  Serial.println("-----------------------------");
  Serial.println("<Plannt information>");
  brightness = analogRead(CDS);
  delay(100);
  light_led(brightness);
  int bri = map(brightness, 600, 0, 0, 100);
  if (bri<0) bri = 0;
  if (bri>100) bri=100; 

  Serial.print("  Brightness: ");
  Serial.println(bri);
  
  temp = analogRead(TMP);
  float tempreture = (temp/1024.0) * 5.0;
  tempreture = (tempreture - .5) * 100;
  Serial.print("  Tempreture: ");
  Serial.println(tempreture, 1);
  Serial.print("  Moisture  : ");
  moi = map(moi, 650, 820, 0, 100);
  if (moi<0) moi = 0;
  if (moi>100) moi = 100;
  Serial.println(moi);  
  
  if(moi<50 && moi != 0){
      Serial.println("Soil is dry!!");
      frog();
  } else if (moi == 0){
      Serial.println("Sensor is not connected");
  } else {
      Serial.println("Soil is wet!!");
  } 
  
  delay(1000);
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

void light_led(int brightness){
    if(brightness < 150){
    digitalWrite(YEL ,LOW);
    digitalWrite(RED ,LOW);
    digitalWrite(BLU, HIGH);
  } else if(brightness >=150 && brightness<400){ 
    digitalWrite(YEL ,HIGH);
    digitalWrite(RED ,LOW);
    digitalWrite(BLU ,LOW);
  } else {
    digitalWrite(RED, HIGH);
    digitalWrite(YEL ,LOW);
    digitalWrite(BLU ,LOW);
  }
}

