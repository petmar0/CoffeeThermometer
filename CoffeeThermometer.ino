/*
  A thermometer for your coffee or tea, to keep your tounge from being burned.
  This is designed for the LilyPad, a LilyThermometer, and an RGB LED.
  If connecting to a LilyTiny, sub in pin 0 for 9 and pin 1 for 10.
  The thermometer is attached to A1 and VCC, while the LED's R pin is attached to pin 10 and the B pin to pin 9.
  CC2014 Pete Marchetto, petmar@gmail.com
  Standard beerware license applies.
*/

int Threshold=230;  //Set the temperature threshold in LSBs so we don't have to waste time computing temperature; should be around 200-230

void setup() {
  pinMode(0, OUTPUT);  //Set pin 9 as an output
  pinMode(1, OUTPUT);  //Set pin 10 as an output
//  Serial.begin(9600);  //If you want to monitor the temperature via serial to check that you have your threshold set right, leave this in; otherwise comment it out
}

void loop() {
  int T=analogRead(A1);  //Read the temperature into an integer called T
  if(T>Threshold){  //If T is greater than the threshold,
    digitalWrite(0, LOW);  //turn off the blue,
    digitalWrite(1, HIGH);  //and turn on the red
  }
  else{  //Otherwise,
    digitalWrite(1, LOW);  //turn off the red,
    digitalWrite(0, HIGH);  //and turn on the blue
  }
//  Serial.print(millis());  //Send the time since boot in msec,
//  Serial.print(",");  //a comma,
//  Serial.println(T);  //and the temperature to the serial terminal; again, comment this out if you're done debugging
}

