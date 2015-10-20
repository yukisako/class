int i = 1;
int on = 0;
int val = 0;
int val_before = 0;
int count = 0;
void setup(){
  //1～7番ピン　デジタル出力へセット
  while(i < 8){
    pinMode(i,OUTPUT);
    i++;
  }  
  pinMode(8, INPUT);
}

void loop(){
  
  val = digitalRead(8);  

  if( val != val_before){
    if (val){
      on += 1;
      count++;
    }
  }
  
  val_before = val;
  //Serial.print(count);
  switch(count%10){
   case 0:
     print_0();
     break;
   case 1:
     print_1();
     break;
   case 2:
     print_2();
     break;
   case 3:
     print_3();
     break;
   case 4:
     print_4();
     break;
   case 5:
     print_5();
     break;
   case 6:
     print_6();
     break;
   case 7:
     print_7();
     break;
   case 8:
     print_8();
     break;
   case 9:
     print_9();
     break;
  }
  //count++;
  delay(10);
}

void clear(){
  i = 1;
  while(i < 8){
    digitalWrite(i, LOW);
    i++;
  }
}

void print_1(){
  clear();
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
}

void print_2(){
  clear();
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
}

void print_3(){
  clear();
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
}
  
void print_4(){
  clear();
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
}

void print_5(){
  clear();
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
}

void print_6(){
  clear();
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
}

void print_7(){
  clear();
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
}

void print_8(){
  i = 1;
  while(i < 8){
    digitalWrite(i, HIGH);
    i++;
  }
}

void print_9(){
  i = 1;
  while(i < 8){
    digitalWrite(i, HIGH);
    i++;
  }
  digitalWrite(1, LOW);
}


void print_0(){
  i = 1;
  while(i < 8){
    digitalWrite(i, HIGH);
    i++;
  }
  digitalWrite(7, LOW);
}

