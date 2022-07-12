#define BUZZER 8

void setup(){
  pinMode(BUZZER, OUTPUT);
}

void loop(){
  tone(BUZZER, 261);
  delay(200);
  noTone(BUZZER);
  delay(200);
  
  tone(BUZZER, 293);
  delay(200);
  noTone(BUZZER);
  delay(200);
  
  tone(BUZZER, 329);
  delay(200);
  noTone(BUZZER);
  delay(200);
}
