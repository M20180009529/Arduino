
int led = 10;
int botao = 11;
int pot = A5;
void setup(){
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  pinMode(pot, INPUT);
  Serial.begin(9600);

}
int x;
int y = 0;
void loop(){
  if(map(analogRead(pot),y,1023,0,255) > 0){
     x = map(analogRead(pot),y,1023,0,255);
  }
  else{
     x=0;
  }
  analogWrite(led, x);
  Serial.println(x);
  if(digitalRead(botao) == LOW){
    y = analogRead(pot);
    delay(100);
  }
  
}
