// hi my name is bhupender and i am an electronic hobbyist 
// this is a simple code for arduino to make a trffic light system 
// define variables
int GREEN = 2; // pin 2 of ardion as GREEN
int YELLOW = 3; // pin 3 of ardion as YELLOW
int RED = 4; // pin $ of ardion as RED
int DELAY_GREEN = 15000;
int DELAY_YELLOW = 5000;
int DELAY_RED = 10000;


// In void setup we define our inputs/outputs
void setup()
{
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{
  green_light();
  delay(DELAY_GREEN);
  yellow_light();
  delay(DELAY_YELLOW);
  red_light();
  delay(DELAY_RED);
}

void green_light()
{
  digitalWrite(GREEN, HIGH); // green on 
  digitalWrite(YELLOW, LOW);  // yellow off
  digitalWrite(RED, LOW);  // red off
}

void yellow_light()
{
  digitalWrite(GREEN, LOW); // green off
  digitalWrite(YELLOW, HIGH);  // yellow on
  digitalWrite(RED, LOW); // red off
}

void red_light()
{ 
  digitalWrite(GREEN, LOW); // green off
  digitalWrite(YELLOW, LOW);// yellow off
  digitalWrite(RED, HIGH); // red on
}
