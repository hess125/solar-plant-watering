// Declaring Variables
const int LEDr = 12;
const int LEDg = 11;
const int MoistSensor = A0;
const int Waterpump = 13;

void setup(){
  pinMode(Waterpump, OUTPUT);
  pinMode(LEDr, OUTPUT);
  pinMode(LEDg, OUTPUT);
  
  Serial.begin(9600); // initialize serial command at 9600 bps
}

void loop(){
  int Sensor = analogRead(MoistSensor); //Read the values from sensor
  int mappedVal = map(Sensor, 0, 876, 0, 99); // Map the values to range 0 - 99

  //-- Code to control LEDs & Water pump based on sensor readings.
  if (mappedVal < 50){
  	digitalWrite(Waterpump, HIGH); // Turn ON
  	digitalWrite(LEDg, HIGH);	   // Turn ON 
  	digitalWrite(LEDr, LOW);	   // Turn OFF
  }
  else{
    digitalWrite(Waterpump, LOW);
    digitalWrite(LEDg, LOW);
    digitalWrite(LEDr, HIGH);
  }
}



    
  
  
  
