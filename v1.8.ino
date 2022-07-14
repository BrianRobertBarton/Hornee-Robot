/*
 Hornee Robot
 by Brian Robert Barton KC2FQN

 This Program Plays 5 Horns In A Consecutive Pattern.

 Simply connect 5 5v Power Relays to the five outputs labled below
 and circuit board gnd. Then add 5 Junyard Horns, one to each of
 the Power Relays switched output and all five to chassis ground.
 Using fused 12v from car battery, daisey chain one side of each
 the Power Relays switched output. A Push Button activates the
 program by going from +5v from the board to a digital input labled
 below and operates as a typical Horn Button would on a car
 steering wheel.

*/

const int button = 13;    // select the input pin for the 5v button
int buttonState = 0;      // button is normally open, but the state may change
const int horn1 = 2;      // select the pins for the horns
const int horn2 = 4;
const int horn3 = 7;
const int horn4 = 8;
const int horn5 = 12;


void setup() 
{
  // declare the horns as an OUTPUT:
  pinMode(horn1, OUTPUT);
  pinMode(horn2, OUTPUT);
  pinMode(horn3, OUTPUT);
  pinMode(horn4, OUTPUT);
  pinMode(horn5, OUTPUT);
  //declare the button as an INPUT:
  pinMode(button, INPUT);
}


void BlowTheHorns(int BlowLength)
{{
    digitalWrite(horn1, HIGH);
    int BlowLength = random( 0.1 , .05 );
    delay(BlowLength);               
    digitalWrite(horn1, LOW);    // turn the horn off by making the voltage LOW
}
{
    digitalWrite(horn2, HIGH);
    int BlowLength = random( 0.1 , .05 );
    delay(BlowLength);               
    digitalWrite(horn2, LOW);    // turn the horn off by making the voltage LOW
}{
    digitalWrite(horn3, HIGH);
    int BlowLength = random( 0.1 , .05 );
    delay(BlowLength);               
    digitalWrite(horn3, LOW);    // turn the horn off by making the voltage LOW
}{
    digitalWrite(horn4, HIGH);
    int BlowLength = random( 0.1 , .05 );
    delay(BlowLength);               
    digitalWrite(horn4, LOW);    // turn the horn off by making the voltage LOW
 }{
    digitalWrite(horn5, HIGH);
    int BlowLength = random( 0.1 , .05 );
    delay(BlowLength);               
    digitalWrite(horn5, LOW);    // turn the horn off by making the voltage LOW
}
}


void DoNothing()
{
  digitalWrite(horn1, LOW);
  digitalWrite(horn2, LOW);
  digitalWrite(horn3, LOW);
  digitalWrite(horn4, LOW);
  digitalWrite(horn5, LOW);
}


void loop() 
{
    buttonState = digitalRead(button);                                 // read the state of the pushbutton value
    if (buttonState = HIGH )                                          //ForePlay
      {                                                 
      BlowTheHorns;                                                       //Get Hornee
      }                                          
    //if (buttonState = LOW )                                           //not in the mood
      //{
      //DoNothing;                                                                 //Do Nothing
      //}                                                                
}
