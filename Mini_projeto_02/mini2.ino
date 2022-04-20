void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12,INPUT_PULLUP);
  pinMode(4,OUTPUT);
}
int cont=0;
int x=1;
char coisaRecebida;
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    coisaRecebida = Serial.read();
  }
  if(coisaRecebida=='R'||coisaRecebida=='r'){
    digitalWrite(4,HIGH);
    delay(1000);
    digitalWrite(4,LOW);
    cont=0;
    delay(100);
  }
  if(digitalRead(12)==LOW && x==1){
    cont++;
    Serial.println(cont);
    x=2;
    delay(100);
  }
  if(digitalRead(12)==LOW && x==2){
    x=3;
    delay(100);
  }
  if(digitalRead(12)==HIGH && x==3){
    x=4;
    delay(100);
  }
  if(digitalRead(12)==HIGH && x==4){
    x=1;
    delay(100);
  }
 
  
}
