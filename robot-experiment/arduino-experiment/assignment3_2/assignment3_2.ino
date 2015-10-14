#define LED1 13
#define LED2 12
#define LED3 11
#define BUTTON 7
int val = 0;
int on = 0;
int val_before = 0;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
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
    if (on % 3 == 0){
      digitalWrite(LED3, LOW);
      digitalWrite(LED1, HIGH);
    } else if (on % 3 == 1) {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
    } else {
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
    }
  }
  val_before = val;
  delay(10);
}
