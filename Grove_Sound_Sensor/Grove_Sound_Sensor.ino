// A demo for Starter Kit V2.0 - Grove Sound Sensor
// when sound larger than a certain value, led will on
// 
// Circuit:
// Connect Grove Sound Sensor to analog port A0;
// Connect Grove-LED to digital port D7
// 
// by victor at 3/30/2016
// www.seeedstudio.com 


const int pinSound = A0;               // port connected to Sound Sensor
const int pinLed   = 7;                // port connected to LED

int threshold= 50;                 // the threshold to switch LED on and off

void setup()
{
    pinMode(pinLed, OUTPUT);            //set the LED on Digital 7 as an OUTPUT
}

void loop()
{
    int sensorValue = analogRead(pinSound);   //read the sensorValue on Analog port A0
    if(sensorValue > thresholdValue)
    digitalWrite(pinLed,HIGH);
    delay(200);
    digitalWrite(pinLed,LOW);
}
