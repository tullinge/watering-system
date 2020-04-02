#include <Arduino.h>

const int soilRead = A0;
int soilMoisture = 0;
//Constants
//Hygrometer sensor analog pin output at pin A0 of Arduino
//Variables
int value;

void setup()
{

  Serial.begin(9600);
  pinMode(soilRead, INPUT);
}

void loop()
{

  // When the plant is watered well the sensor will read a value 380~400, I will keep the 400
  soilMoisture = analogRead(soilRead);
  //Map value : 400 will be 100 and 1023 will be 0

  /* 
Serial.print(soilMoisture);
Serial.print(" "); */
  Serial.println(soilMoisture);

  if (soilMoisture > 660)
  {
    digitalWrite(13, HIGH);
  } else
  {
    digitalWrite(13, LOW);
  }

  delay(2000);
}
