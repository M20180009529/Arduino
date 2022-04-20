unsigned long time;
void setup() {
  Serial.begin (9600);
  pinMode(3, INPUT);
}
int x=0;
float vel = 0;
float temp1 = 0;
float temp2 = 0;
float deltat = 0;
void loop() {

  if (x==0 && digitalRead(3)==0){
      temp2 = millis();
      deltat = (temp2-temp1);
      vel = (2*3.14/(deltat*0.001 ))*0.05; // raio de 0,01 metros 
      vel = vel * 3.6; // Km/h;
      x++;
      Serial.print("vel= ");
      Serial.println(vel);
      Serial.print("temp2= ");
      Serial.println(temp2);
      Serial.print("temp1= ");
      Serial.print(temp1);
      Serial.println(" ");
      temp1 = temp2;

    }
   if(x==1 && digitalRead (3) == 1){
      x=0;
      Serial.println(2);
      
    }
  
 
}
