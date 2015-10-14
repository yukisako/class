void setup(){
  //1～8番ピンを　デジタル出力へセット
  for (int i=1; i<=8; i++){
    pinMode(i,OUTPUT);
  }
}

//LEDレイアウトを定義
//0,1,2,3,4,5,6,7,8,9,0,.　の順。
int Num_Array[11][8]={
  {0,0,0,1,0,0,0,1},{1,1,0,1,0,1,1,1},{0,0,1,1,0,0,1,0},{1,0,0,1,0,0,1,0},
  {1,1,0,1,0,1,0,0},{1,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{1,1,0,1,0,0,0,1},
  {0,0,0,1,0,0,0,0},{1,0,0,1,0,0,0,0},{1,1,1,0,1,1,1,1}
};

//LED表示関数を定義
void print_segment(int num){
  for (int w=0; w<=7; w++){
  digitalWrite(w+1,Num_Array[num][w]);
  }
}

void loop(){
  for(int t=0;t<=10;t++){
  print_segment(t);
  delay(500);
  }
}
