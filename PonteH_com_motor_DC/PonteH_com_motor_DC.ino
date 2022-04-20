int R1=5;
int R2=8;
int Co=9;
void setup() {
  Serial.begin(9600);
  pinMode (A0, INPUT_PULLUP); 
  pinMode (R1, OUTPUT);
  pinMode (R2, OUTPUT);
  pinMode (A1, INPUT); 
  pinMode (Co, OUTPUT);
}
int x=1;

void loop() {
  // put your main code here, to run repeatedly:
   analogWrite(Co,map(analogRead(A1),0,1023,0,255));
   if (digitalRead(A0)== LOW && x==1 ){
           digitalWrite (R1, HIGH);    
           digitalWrite (R2, LOW);          
           x++;
           delay (100);
   }
   if (digitalRead(A0)== LOW && x==2){
            x++;
            delay (100);
   }
   
   if (digitalRead(A0)== HIGH && x==3){
            x++;
            delay (100);
   }
   if (digitalRead(A0)== HIGH && x==4){
              x++;
              delay (100);
            }
   if (digitalRead(A0)== LOW && x==5){
            digitalWrite (R1, LOW);    
            digitalWrite (R2, LOW);     
            x++;
            delay (100);
   }
   if (digitalRead(A0)== LOW && x==6){
              x++;
              delay (100);
            }
   if (digitalRead(A0)== HIGH && x==7){
            x++;
            delay (100);
   }
   if (digitalRead(A0)== HIGH && x==8){
              x++;
            }
   if (digitalRead(A0)== LOW && x==9){
            digitalWrite (R1, LOW);    
            digitalWrite (R2, HIGH);  
            x++;
            delay (100);
   }
   if (digitalRead(A0)== HIGH && x==10){
              x++;
              delay (100);
            }
    if (digitalRead(A0)== LOW && x==11){
            digitalWrite (R1, HIGH);    
            digitalWrite (R2, HIGH);  
            x++;
            delay (100);
   }
   if (digitalRead(A0)== HIGH && x==12){
              x=1;
              delay (100);
            }
   
}
