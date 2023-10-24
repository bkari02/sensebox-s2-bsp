// int analogVal = 0;
// int analogmV = 0;

// void setup(){
//     //Enable IO and Vout
//     pinMode(PIN_IO_ENABLE,OUTPUT);
//     digitalWrite(PIN_IO_ENABLE,LOW);

//     pinMode(6,INPUT);
//     Serial.begin(115200);
//     analogSetAttenuation(ADC_11db);
// }

// void loop(){
//     analogVal = analogRead(6);
//     Serial.println("RAW Value: " + String(analogVal));
//     analogmV = analogReadMilliVolts(6);
//     Serial.println("Millivolts: " + String(analogmV));
//     delay(1);
// }



/*
  Analog Input

  Turns a LED on and off for the amount of time depending on the value obtained
  by analogRead().
*/

int sensorPin = 6;        // analog input pin 2-7
int ledPin = LED_BUILTIN; // LED pin, on-board LED 1

// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin as an output
    pinMode(PIN_IO_ENABLE,OUTPUT);
    digitalWrite(PIN_IO_ENABLE,LOW);

    pinMode(ledPin, OUTPUT);

    // init serial library
    Serial.begin(115200);
    analogSetAttenuation(ADC_11db);
}

// the loop function runs over and over again forever
void loop()
{
  int sensorValue; // variable to store the value from the sensor

  // read the value from the sensor
  sensorValue = analogRead(sensorPin); // 0-1023
  // show value on serial monitor
  Serial.println(sensorValue, DEC);
  // turn on the ledPin
  digitalWrite(ledPin, HIGH);
  // wait for <sensorValue> milliseconds
  delay(sensorValue);
  // turn off the ledPin off
  digitalWrite(ledPin, LOW);
  // wait for <sensorValue> milliseconds
  delay(sensorValue);
}
