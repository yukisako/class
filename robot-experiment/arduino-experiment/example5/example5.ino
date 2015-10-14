const int in1Pin = 9;
const int in2Pin = 10;

void forward(int value){
  analogWrite(in1Pin, value);
  analogWrite(in2Pin, 0);
  Serial.println("Forward");
}

void reverse(int value){
  analogWrite(in1Pin, 0);
  analogWrite(in2Pin, value);
  Serial.println("Reverse");
}

void despin(boolean userBrake = true){
  if (userBrake) {
    digitalWrite(in1Pin, HIGH);
    digitalWrite(in2Pin, HIGH);
  } else {
    digitalWrite(in1Pin, LOW);
    digitalWrite(in2Pin, LOW);
  }
}

void setup() {
  pinMode(in1Pin, OUTPUT);
  pinMode(in1Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  forward(255);
  delay(500);
  
  despin(true);
  Serial.println("Despin (with brake)");
  delay(1000);
  
  reverse(255);
  delay(500);
  
  despin(false);
  Serial.println("Despin (without brake)");
  delay(1000);
}
