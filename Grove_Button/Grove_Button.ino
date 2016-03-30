// demo of Grove - Starter V2.0
// Loovee  2013-3-10
// this demo will show you how to use Grove - Button to control a LED
// when the button was pressed, the LED will light on 
// otherwise LED will be remain off state
// Grove - Button connect to D3
// Grove - LED connect to D7

const int pinButton = 3;                        // pin of button define here
const int pinLed    = 7;                        // pin of LED define here

void setup()
{
    pinMode(pinButton, INPUT);                  // set button INPUT
    pinMode(pinLed, OUTPUT);                    // set LED OUTPUT
}

void loop()
{
    if(digitalRead(pinButton))                     // when button is pressed
    {
        digitalWrite(pinLed, HIGH);               // LED on
    }
    else
    {
        digitalWrite(pinLed, LOW);              //LED off
    }
    
    delay(10);
}
