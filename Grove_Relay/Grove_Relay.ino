// A demo for Starter Kit V2.0 - Grove - Relay
// As a button is pressed, relay will be switched on

// Circuit:
// Grove-Button is connected to digital pin 3
// Grove-Relay is connected to digital pin 9

// by victor at 03/30/2016
// www.seeedstudio.com



const int buttonPin = 3;     // the Grove-Button is connected to digital pin 3
const int relayPin =  9;     // the Grove-Relay is connected to digital pin 9
int buttonState = 0;

void setup()
{
    pinMode(relayPin, OUTPUT);
    pinMode(buttonPin, INPUT);
}

void loop()
{
    // read the state of the button:
    buttonState = digitalRead(buttonPin);
    
    if (buttonState == 1)   
    {
        digitalWrite(relayPin, HIGH);
    }
    else   
    {
        digitalWrite(relayPin, LOW);
    }
    delay(10);
}

