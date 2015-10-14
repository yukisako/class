#define LED 13
#define BUTTON 7
int val = 0;
int on = 0;
int val_before = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON);
  

  if( val != val_before){
    
    if (val){
      on += 1;
    } else {
      //なにもしない
    }
    if (on % 2 == 1){
      digitalWrite(LED, HIGH);
    } else {
      digitalWrite(LED, LOW);
    }
  }
  
  val_before = val;
  delay(10);
}

