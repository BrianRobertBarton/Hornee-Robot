const int button = 13;       
int buttonState = 0;  
const int horn1 = 2;   
const int horn2 = 4;
const int horn3 = 7;
const int horn4 = 8;
const int horn5 = 12;

void setup() {
  pinMode(horn1, OUTPUT);
  pinMode(horn2, OUTPUT);
  pinMode(horn3, OUTPUT);
  pinMode(horn4, OUTPUT);
  pinMode(horn5, OUTPUT);
  pinMode(button, INPUT);
}

void BlowAHorn(int theHorn, int BlowLength)
{
    digitalWrite(theHorn, HIGH);   
    int offset = random(   -BlowLength*0.8,   BlowLength*0.8  );
    printf("%d", offset);
    delay(BlowLength + offset);               
    digitalWrite(theHorn, LOW);   
    delay(300);
}

void loop() {
buttonState = digitalRead(button);
  int hornlist[] = {  horn4, horn2, horn4, horn3, horn5, horn5, horn2, horn3, horn2, horn5, horn4, horn3, horn5, horn2 };
  size_t sz = sizeof(hornlist)/sizeof(int);
  if (buttonState == HIGH ) 
  {
    for(int i=0; i < sz; i++)
    {
        BlowAHorn(hornlist[random(0,4)], 100);
    }
  }
}
