int GREEN = 3;
int YELLOW = 2;
int RED = 1;
const int LEDG = 10;
const int LEDR = 9;
int DELAY_GREEN = 5000;
int DELAY_YELLOW = 2000;
int DELAY_RED = 5000;
int DELAY_LEDG = 4000;
int DELAY_LEDR = 2000;
void setup()
{
pinMode(LEDR,OUTPUT);
pinMode(LEDG,OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(YELLOW, OUTPUT);
pinMode(RED, OUTPUT);
}

void loop()
{
digitalWrite(GREEN, HIGH);
digitalWrite(YELLOW, LOW);
digitalWrite(RED, LOW);
delay(DELAY_GREEN);

digitalWrite(GREEN, LOW);
digitalWrite(YELLOW, HIGH);
digitalWrite(RED, LOW);
delay(DELAY_YELLOW);


digitalWrite(GREEN, LOW);
digitalWrite(YELLOW, LOW);
digitalWrite(RED, HIGH);
delay(DELAY_RED);

if(RED==HIGH){
    digitalWrite(LEDR, LOW);
  digitalWrite(LEDG, HIGH);  
  delay(DELAY_LEDG);
    digitalWrite(LEDG, LOW);  
  digitalWrite(LEDR, HIGH);  
    delay(DELAY_LEDR);
  digitalWrite(LEDG, LOW);
  digitalWrite(LEDR, HIGH);

  }

}
