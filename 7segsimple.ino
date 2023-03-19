/* Count from 0 to 9 on 7-seg using simplest way possible */

//Set pins to letters of the 7-seg
const int a = 2; 
const int b = 3; 
const int c = 4; 
const int d = 5; 
const int e = 6; 
const int f = 7; 
const int g = 8; 

void setup() {

  //Set all as output
  pinMode(a, OUTPUT); 
  pinMode(b, OUTPUT); 
  pinMode(c, OUTPUT); 
  pinMode(d, OUTPUT); 
  pinMode(e, OUTPUT); 
  pinMode(f, OUTPUT); 
  pinMode(g, OUTPUT); 
}

void loop() {

  // display 0
  //HIGH turns on pins, LOW turns off pins
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, LOW); 
  delay(1000); //

  // display 1
  //HIGH turns on pins, LOW turns off pins
  digitalWrite(a, LOW); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, LOW); 
  delay(1000); //

  // display 2
  //HIGH turns on pins, LOW turns off pins
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, LOW); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH); 
  delay(1000);

  // display 3
  //HIGH turns on pins, LOW turns off pins
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, HIGH);
  delay(1000); 

  // display 4
  //HIGH turns on pins, LOW turns off pins
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH);
  delay(1000); 

  // display 5
  //HIGH turns on pins, LOW turns off pins
  digitalWrite(a, HIGH); 
  digitalWrite(b, LOW); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000); 

  // display 6
  //HIGH turns on pins, LOW turns off pins
  digitalWrite(a, HIGH); 
  digitalWrite(b, LOW); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000); 

  // display 7
  //HIGH turns on pins, LOW turns off pins
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, LOW); 
  delay(1000); 

  // display 8
  //HIGH turns on pins, LOW turns off pins
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH);
  delay(1000);

  // display 9
  //HIGH turns on pins, LOW turns off pins
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH); 
  delay(1000); 
}
