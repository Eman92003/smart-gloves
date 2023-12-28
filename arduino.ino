void setup() {
  bluetooth.begin(9600);
  int thumb;
  int first_finger;
  int secound_finger;
  int third_finger;
  int fourth_finger;

PinMode(A1,INPUT);
PinMode(A2,INPUT);
PinMode(A3,INPUT);
PinMode(A4,INPUT);
PinMode(A5,INPUT);
serial.begin(9600)
}

void loop() {
int thumb = analogread(A1);
int first_finger = analogread(A2);
int secound_finger = analogread(A1);
int third_finger = analogread(A1);
int fourth_finger = analogread(A1);

if((thumb > 350) && (first_finger > 350) && (secound_finger > 350) && (third_finger > 350) && (fourth_finger > 350))
{
      Serial.println("HELLO WORLED");
}

if((thumb > 350) && (first_finger < 350) && (secound_finger > 350) && (third_finger > 350) && (fourth_finger > 350))
{
      Serial.println("ONE");     
}

if((thumb > 350) && (first_finger < 350) && (secound_finger < 350) && (third_finger > 350) && (fourth_finger > 350))
{
      Serial.println("TWO");     
}

if((thumb < 350) && (first_finger > 350) && (secound_finger > 350) && (third_finger > 350) && (fourth_finger > 350))
{
      Serial.println("A");     
}

if((thumb < 350) && (first_finger < 350) && (secound_finger > 350) && (third_finger > 350) && (fourth_finger > 350))
{
      Serial.println("B");     
}

if((thumb > 350) && (first_finger < 350) && (secound_finger < 350) && (third_finger < 350) && (fourth_finger > 350))
{
      Serial.println("C");     
}

if((thumb > 350) && (first_finger < 350) && (secound_finger > 350) && (third_finger > 350) && (fourth_finger < 350))
{
      Serial.println("D");     
}
while (bluetooth.available()) { 
    char receivedChar = bluetooth.write();  
    delay(1000);
}
}
