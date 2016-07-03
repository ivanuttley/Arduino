

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5,4,3,2);
int sensorValue;

void setup() {
  //Serial.begin(9600);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 1);
  // Print a message to the LCD.
  lcd.print("5V Voltage Meter!");
  lcd.display();
  delay(5000);
}

void loop() {
  // Turn off the display:
  lcd.noDisplay();
  lcd.clear();
  delay(50);
  lcd.print(analogRead(A0));
  lcd.display();
  delay(500);
  lcd.clear();
  sensorValue = analogRead(A0);
  lcd.print(sensorValue);
  lcd.display();
  delay(500);
}

