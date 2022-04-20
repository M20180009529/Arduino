int estado = 0;
int temp=0;
String valor;
int i = 0;

void setup() {
Serial.begin(9600);
pinMode(12, OUTPUT);

}


void loop() {

  if(Serial.available() > 0){
    valor = Serial.readString();
    estado=0;
    i=0;
  }
   Serial.println(valor[i]);
  
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
                              i++;
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
                              i++;
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
                              i++;
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
                              i++;
                          }
                    } 
                    if(valor[i] == 'u' || valor[i] == 'U'){
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
                              i++;
                          }
                    } 
    
    

}
