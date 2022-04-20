int estado = 0;
int temp=0;
char valor[100];
int i = 0;

void setup() {
Serial.begin(9600);
pinMode(12, OUTPUT);
for(int i = 0; i < 100; i++){
  valor[i] = '0';
}
}


void loop() {
  
  if(Serial.available() > 1){
    valor[i] = Serial.read();
    estado=0;
    i++;
  }
  //Serial.println(valor[i]);
    if (estado == 0){
       i++;
      }
 
    if(valor[i] == 'a' || valor[i] == 'A'){
          if(estado==0){
              temp = millis();
              estado=1;
              digitalWrite (12, HIGH);        
          }
          int T=(millis()-temp);
        
          if((estado==1 && T>100)){
              estado=2;
              digitalWrite (12,LOW); 
          }
           if((estado==2 && T>200)){
              estado=3;
              digitalWrite (12,HIGH); 
          }
          if((estado==3 && T>500)){
              estado=4;
              digitalWrite (12,LOW); 
          }
          if((estado==4 && T>1000)){
              estado=0;
          }
    } 
     if(valor[i] == 'e' || valor[i] == 'E'){
          if(estado==0){
              temp = millis();
              estado=1;
              digitalWrite (12, HIGH);        
          }
          int T=(millis()-temp);
          
          if((estado==1 && T>100)){
              estado=2;
              digitalWrite (12,LOW); 
          }
          if((estado==2 && T>600)){
              estado=0;
          }
    } 
    if(valor[i] == 'i' || valor[i] == 'I'){
          if(estado==0){
              temp = millis();
              estado=1;
              digitalWrite (12, HIGH);        
          }
          int T=(millis()-temp);
         
          if((estado==1 && T>100)){
              estado=2;
              digitalWrite (12,LOW); 
          }
           if((estado==2 && T>200)){
              estado=3;
              digitalWrite (12,HIGH); 
          }
          if((estado==3 && T>300)){
              estado=4;
              digitalWrite (12,LOW); 
          }
          if((estado==4 && T>800)){
              estado=0;
          }
    } 
    if(valor[i] == 'o' || valor[i] == 'O'){
          if(estado==0){
              temp = millis();
              estado=1;
              digitalWrite (12, HIGH);        
          }
          int T=(millis()-temp);
          
          if((estado==1 && T>300)){
              estado=2;
              digitalWrite (12,LOW); 
          }
           if((estado==2 && T>400)){
              estado=3;
              digitalWrite (12,HIGH); 
          }
          if((estado==3 && T>700)){
              estado=4;
              digitalWrite (12,LOW); 
          }
           if((estado==4 && T>800)){
              estado=5;
              digitalWrite (12,HIGH); 
          }
          if((estado==5 && T>1100)){
              estado=6;
              digitalWrite (12,LOW); 
          }
          if((estado==6 && T>1600)){
              estado=0;
          }
    } 
    if(valor == 'u' || valor == 'U'){
          if(estado==0){
              temp = millis();
              estado=1;
              digitalWrite (12, HIGH);        
          }
          int T=(millis()-temp);
          
          if((estado==1 && T>100)){
              estado=2;
              digitalWrite (12,LOW); 
          }
           if((estado==2 && T>200)){
              estado=3;
              digitalWrite (12,HIGH); 
          }
          if((estado==3 && T>300)){
              estado=4;
              digitalWrite (12,LOW); 
          }
           if((estado==4 && T>400)){
              estado=5;
              digitalWrite (12,HIGH); 
          }
          if((estado==5 && T>700)){
              estado=6;
              digitalWrite (12,LOW); 
          }
          if((estado==6 && T>1200)){
              estado=0;
          }
    } 
    
}
