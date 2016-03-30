// A demo for Starter kit V2.0 - Grove - Light Sensor.

// Additional material required:
// Grove - LED × 1 pc

// When the value of light sensor is lower than a threshold,
// LED will light on.
// You can set a specific light condition by modifying threshold to a appropriate value.
// For example, the luminance for reading approximately range from 326-355 lux. You can modify 
// threshold to 326, as luminance is luminance is less than 326 lux, the LED will light on. 

// circuit:
// Connect Grove-Light Sensor to analog pin A0.
// Connect Grove - LED to digital port D7.

const int pinLight = A0;                // Connect Grove-Light Sensor to analog pin A0;
const int pinLed   = 7;                 // Connect Grove - LED to digital port D7

int thresholdvalue = 400;                 //the threshold to turn on or off the LED

void setup()
{
    pinMode(pinLed, OUTPUT);             //set the LED on Digital 6 as an OUTPUT
}

void loop()
{
    int sensorValue = analogRead(pinLight);    //the light sensor is attached to analog 0
    if(sensorValue<thresholdvalue)
    {
        digitalWrite(pinLed, HIGH);
    }
    else
    {
        digitalWrite(pinLed, LOW);
    }
}
