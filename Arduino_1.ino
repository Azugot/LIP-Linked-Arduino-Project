// C++ code
//
int otherArduinoState = 0;
int thisButtonState = 0;

void setup()
{
  pinMode(7, INPUT); //Other arduino signal input
  pinMode(4, OUTPUT); //THIS arduino signal Output
  pinMode(11, OUTPUT); //LED OUTPUT
  pinMode(9, INPUT); //Button signal Input

  
}

void loop()
{
  otherArduinoState = digitalRead(7); //State of the other arduino signal
  if (otherArduinoState == HIGH) {    //if signal recieved
    digitalWrite(11, HIGH);           //Send signal to THIS LED
  } 
  else {
    digitalWrite(11, LOW);            //Deactivate LED
  }
  
//=================================================================

  thisButtonState = digitalRead(9); // ButtonState = THIS button signal
  if (thisButtonState == HIGH) {    // If button is pressed
    digitalWrite(4, HIGH);          //Send signal to other arduino
    digitalWrite(11, HIGH);         //Send signal to THIS LED

  }
  else{
    digitalWrite(4, LOW);           //Deactivate both signals
    digitalWrite(11, LOW);          //
  }

}
