
void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT) ;
pinMode (A0, INPUT_PULLUP); 
pinMode (8, OUTPUT);
pinMode (9, OUTPUT);
}
int x=1;
int ver=9;
int ama=8;
void loop() {
  // put your main code here, to run repeatedly:
   if (digitalRead(A0)!= HIGH && x==1 ){
           digitalWrite (ver, HIGH);         
           x++;
           delay (100);
   }
   if (digitalRead(A0)!= LOW && x==2){
            x++;
   }
   
   if (digitalRead(A0)!= HIGH && x==3){
           digitalWrite (ver, LOW);
            digitalWrite (ama, HIGH);
            x++;
            delay (100);
   }
   if (digitalRead(A0)== HIGH && x==4){
              x++;
            }
   if (digitalRead(A0)!= HIGH && x==5){
           digitalWrite (ama, LOW);
            x++;
            delay (100);
   }
   if (digitalRead(A0)== HIGH && x==6){
              x++;
            }
   if (digitalRead(A0)!= HIGH && x==7){
           digitalWrite (ama,HIGH);
           digitalWrite (ver,HIGH);
            x++;
            delay (100);
   }
   if (digitalRead(A0)== HIGH && x==8){
              x++;
            }
   if (digitalRead(A0)!= HIGH && x==9){
           digitalWrite (ama,LOW);
           digitalWrite (ver,LOW);
            x++;
            delay (100);
   }
   if (digitalRead(A0)== HIGH && x==10){
              x=1;
            }
   
}
