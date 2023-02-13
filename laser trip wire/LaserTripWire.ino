void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  //if the LDR sensor detects someone trespassing
  if(analogRead(A0)>500){
    //play the frquency of the c4 note (262Hz) on the buzzer on pin 3
    tone(3, 262)
    //let it play for 0.25 seconds
    delay(250);
    //stop it
    noTone(3);
  }
  delay(200);
}
