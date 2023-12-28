const int lcdRsPin = 2;     
const int lcdEnPin = 3;     
const int lcdD4Pin = 4;     
const int lcdD5Pin = 5;     
const int lcdD6Pin = 6;     
const int lcdD7Pin = 7;     

LiquidCrystal lcd(lcdRsPin, lcdEnPin, lcdD4Pin, lcdD5Pin, lcdD6Pin, lcdD7Pin);

SoftwareSerial bluetooth(10, 11);  

void setup() {
  lcd.begin(16, 2);  
  lcd.backlight();
  serial.begin(9600);
void loop() {
 while (bluetooth.available()) { 
    char receivedChar = bluetooth.read();  
    delay(10);
    lcd.setCursor(0, 1);  
    lcd.print(receivedChar);  
}
if(char.length() >0){
  lcd.clear();
}
}
