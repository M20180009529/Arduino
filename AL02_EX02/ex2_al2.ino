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
  if(coisaRecebida=='A'||coisaRecebida=='a'){
    digitalWrite(4,HIGH);
    Serial.println("Aceso");
    delay(100);
  }
  if(coisaRecebida=='p'||coisaRecebida=='P'){
    digitalWrite(4,LOW);
    Serial.println("Apagado");
    delay(100);
  }
  
}
