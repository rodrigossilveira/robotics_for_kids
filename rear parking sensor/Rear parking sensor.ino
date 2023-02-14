#define trig 5
#define echo 4
#define buzzer 3
float time;
float distance;
void setup(){
  pinMode(trig, OUTPUT); //trigger that emits the ultrassonic wave
  pinMode(echo, INPUT); //echo of the reflected ultrassonic wave
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  //Calculating the distance in cm
  digitalWrite(trig,LOW);
  delayMicroseconds(5); 
  digitalWrite(trig, HIGH);
  delayMicroseconds(10); // espera um tempo em microssegundos
  digitalWrite(trig, LOW);
  time=pulseIn(echo,HIGH); 
  distance = time/58;
  
  //Wrinting the detected distance on the screen
  Serial.print ("Distance = ");
  Serial.print (distance);         
  Serial.println (" cm");         
  
  
  //Generating the proximity alarm. The closer the faster
  if(distance>=50&&distancia<100){ 
    tone(buzzer, 600);
    delay(200);
    noTone(buzzer);
    delay(200);
  }
  else if(distance>=100&&distance<=150){
    tone(buzzer, 2750);
    delay(300);
    noTone(buzzer);
    delay(300);
  }
  else if(distance>=150&&distance<=200){
    tone(buzzer, 2750);
    delay(400);
    noTone(buzzer);
    delay(400);
  }
}
