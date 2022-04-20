
void setup() {
Serial.begin(9600);
pinMode(12,INPUT_PULLUP);
}

int est=0;
int T;
int i = 0;
int temp=0;
String valor;

void loop() {

  //LER BUTÃO
 
      if(est==0 && digitalRead (12)== LOW){
          temp = millis();
          est=1; 
      }
       if((est==1 && digitalRead(12) == HIGH)){
           T=(millis()-temp);
         
          if(T>=0 && T<200){ 
            valor.concat('c');
            i++;
            est=0;
            Serial.println("Curto");
            
          }
          if(T>=250 && T<=1000){ 
            valor.concat('l');
            i++;
            est=0;
            Serial.println("LONGO");
          }
          if(T>1000){ 
            valor = "";
            i=0;
            est=0;
            Serial.println("invalido");
          }
         Serial.println(valor);
      }
  
      // verificar os pulsos 

      if (valor[0]=='c'&& valor[1]=='l'&& valor[2]=='c'){
         Serial.println("R");
         valor = "";
        }
      if (valor[0]=='l'&& valor[1]=='l'&& valor[2]=='l'){
         Serial.println("O");
         valor = "";
        }
      if (valor[0]=='c'&& valor[1]=='c'&& valor[2]=='c'){
         Serial.println("S");
         valor = "";
        }
      if (valor[0]=='c'&& valor[1]=='c'&& valor[2]=='l'){
         Serial.println("U");
         valor = "";
        }
      
}
