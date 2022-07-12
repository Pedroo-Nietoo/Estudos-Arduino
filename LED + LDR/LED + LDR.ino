int led = 10;
int ldr = A0;
int valorldr = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ldr, OUTPUT);
}

void loop() {
  valorldr = analogRead(ldr);
  Serial.println(valorldr);

  if((valorldr) > 100){
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);}

  else{
    digitalWrite(led, LOW);}
}
