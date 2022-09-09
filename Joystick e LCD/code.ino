int xValue = 0 ;
int yValue = 0 ; 
int bValue = 0 ;

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define col  16
#define lin   2
#define ende  0x27 

LiquidCrystal_I2C lcd(ende, col, lin);

void setup() {	
	Serial.begin(9600) ;
	pinMode(8,INPUT); 
	digitalWrite(8,HIGH);
	
	lcd.init();
  lcd.clear();
  lcd.backlight();

  lcd.setCursor(3, 0);
  lcd.print("Mexa!");
}	

void loop() {	
	xValue = analogRead(A0);	
	yValue = analogRead(A1);	
	bValue = digitalRead(8);	
	Serial.print(xValue,DEC);
	Serial.print(",");
	Serial.print(yValue,DEC);
	Serial.print(",");
	Serial.print(!bValue);
	Serial.print("\n");
	delay(100);
	
	
	if(xValue >= 1020 && yValue >= 500){
    lcd.clear();
    lcd.setCursor(4, 1);
    lcd.print("BAIXO");
  }
  else if(xValue <= 10 && yValue >= 500){
    lcd.clear();
    lcd.setCursor(4, 1);
    lcd.print("BAIXO");
  }
  else if(xValue <= 512 && yValue >= <= 10){
    lcd.clear();
    lcd.setCursor(4, 0);
    lcd.print("ESQUERDA");
  }
  else if(xValue <= 512 && yValue >= 1020){
    lcd.clear();
    lcd.setCursor(9, 0);
    lcd.print("DIREITA");
  }
  else if(bValue == 1){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("PRESSIONADO");
  }
  else{
    lcd.setCursor(3, 0);
  lcd.print("Mexa!");
  }
}
