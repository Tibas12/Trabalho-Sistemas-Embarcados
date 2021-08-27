// C++ code
//

int sensorValue = 0;
int mappedValue;

void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT); // Photoresistor pin
  pinMode(8,OUTPUT); // Buzzer pin
 
}

void loop()
{
  // Leio o valor do sensor
  sensorValue = analogRead(A0);
  // Printo o que retorna para saber seu 'range'
  
  // Serial.println(sensorValue);
  
  // Sabendo o 'range' é possivel fazer o mapeamento para um número mais agradável
  mappedValue = map((analogRead(A0)), 54, 974, 0, 100);
  Serial.println(mappedValue);
  if(mappedValue<95)
  {
    digitalWrite(8,HIGH);
  }
  else
  {
    digitalWrite(8,LOW);
  }
  
  // tone(8, 440, 5000);
  delay(100);
}