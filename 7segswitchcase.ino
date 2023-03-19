/* Count from 0 to 9 on 7 seg using switch case and funcitons */

int a = 2; 
int b = 3; 
int c = 4; 
int d = 5; 
int e = 6; 
int f = 7; 
int g = 8; 

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

//Function to display a number on the 7-segment display
void displayNumber(int number) {
  switch(number) {
    case 0:
    //HIGH turns on pins, LOW turns off pins
      digitalWrite(a, HIGH); 
      digitalWrite(b, HIGH); 
      digitalWrite(c, HIGH); 
      digitalWrite(d, HIGH); 
      digitalWrite(e, HIGH); 
      digitalWrite(f, HIGH); 
      digitalWrite(g, LOW); 
      break;
    case 1:
    //HIGH turns on pins, LOW turns off pins
      digitalWrite(a, LOW); 
      digitalWrite(b, HIGH); 
      digitalWrite(c, HIGH); 
      digitalWrite(d, LOW); 
      digitalWrite(e, LOW);
      digitalWrite(f, LOW); 
      digitalWrite(g, LOW); 
      break;
    case 2:
    //HIGH turns on pins, LOW turns off pins
      digitalWrite(a, HIGH); 
      digitalWrite(b, HIGH); 
      digitalWrite(c, LOW); 
      digitalWrite(d, HIGH); 
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW); 
      digitalWrite(g, HIGH);
      break;
    case 3:
    //HIGH turns on pins, LOW turns off pins
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH); 
      digitalWrite(c, HIGH); 
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW); 
      digitalWrite(f, LOW); 
      digitalWrite(g, HIGH); 
      break;
    case 4:
    //HIGH turns on pins, LOW turns off pins
      digitalWrite(a, LOW); 
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH); 
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;
    case 5:
    //HIGH turns on pins, LOW turns off pins
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH); 
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW); 
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH); 
      break;
    case 6:
    //HIGH turns on pins, LOW turns off pins
      digitalWrite(a, HIGH); 
      digitalWrite(b, LOW); 
      digitalWrite(c, HIGH); 
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH); 
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH); 
      break;
    case 7:
    //HIGH turns on pins, LOW turns off pins
      digitalWrite(a, HIGH); 
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW); 
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      break;
    case 8:
    //HIGH turns on pins, LOW turns off pins
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH); 
      break;
    case 9:
    //HIGH turns on pins, LOW turns off pins
      digitalWrite(a, HIGH); 
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;
  }
}
//Display digits 0-9 
void loop() {
  for (int i = 0; i < 10; i++) {
    displayNumber(i);
    delay(1000); 
  }
}