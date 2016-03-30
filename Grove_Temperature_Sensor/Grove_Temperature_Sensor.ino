// A demo for Starter Kit V2.0 - Grove Temperature Sensor
// 
// Circuit:
// Connect Grove Temperature Sensor to analog port A0;
// 
// Modified victor at 3/30/2016
// www.seeedstudio.com 


const int pinTemp = A0;      // pin of temperature sensor

float temperature;
int B=3975;                  //  B constant of the thermistor, read more at https://en.wikipedia.org/wiki/Temperature_coefficient#Negative_temperature_coefficient and http://www.seeedstudio.com/wiki/Grove_-_Temperature_Sensor_V1.2
float resistance;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int val = analogRead(pinTemp);                               // get analog value

    resistance=(float)(1023-val)/val;                        // Calculate resistance
    resistance = resistance * 10000;
    temperature=1/(log(resistance/10000)/B+1/298.15)-273.15;     // calculate temperature
    Serial.println(temperature);
    
    delay(1000);          // delay 1 second
}
