// C++ code
//
/*
  Button
  Turns on and off a light emitting diode(LED)
  connected to digital  pin 13, when pressing a
  pushbutton attached to pin 2.

   The circuit:
  * LED attached from pin 13 to ground
  * pushbutton attached to pin 2 from +5V
  * 10K resistor attached to pin 2 from ground
  * Note: on most Arduinos there is already an LED
  on the board  attached to pin 13.

  created 2005  by DojoDave <http://www.0j0.org>

  modified 30 Aug 2011  by Tom Igoe

  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/Button
*/

int otherArduinoState = 0;
int thisButtonState = 0;

void setup()
{
  pinMode(2, INPUT);  // Button signal Input
  pinMode(13, INPUT); //Other arduino signal input
  pinMode(7, OUTPUT); //THIS arduino signal Output
  pinMode(11, OUTPUT);//LED OUTPUT
}

void loop()
{
  otherArduinoState = digitalRead(13); //State of the other arduino signal
  if (otherArduinoState == HIGH) {     //if signal recieved            
    digitalWrite(11, HIGH);            //Send signal to THIS LED
  } 
  else {
    digitalWrite(11, LOW);             //Deactivate LED
  }

//=================================================================

  thisButtonState = digitalRead(2); // ButtonState = THIS button signal
  if (thisButtonState == HIGH) {    // If button is pressed
    digitalWrite(7, HIGH);          //Send signal to other arduino       
    digitalWrite(11, HIGH);         //Send signal to THIS LED
  } else {
    // turn LED off
    digitalWrite(7, LOW);           //Deactivate both signals
    digitalWrite(11, LOW);          //
  }
}
