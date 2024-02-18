// Must USE ATMega328P (OLD bootloader)!!!!!


const int InfraredSensorPin = 7;//Connect the signal pin to the digital pin 7
const int LedDisp = 9;

void setup()
{
  Serial.begin(57600);
  Serial.println("Start!");
  pinMode(InfraredSensorPin,INPUT);
  pinMode(LedDisp,OUTPUT);
  digitalWrite(LedDisp,LOW);
}

void loop()
{
 if (digitalRead(InfraredSensorPin) == LOW)
     {
      digitalWrite(LedDisp,HIGH);
     }

    else
    {
      digitalWrite(LedDisp,LOW);
}   
//Serial.println("");
}
