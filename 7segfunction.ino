/* Count from 0 to 9 on 7 seg using function */

//Set the pins for the 7-segment display
const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6; 
const int f = 7; 
const int g = 8; 

//Set the numbers to be displayed
const int num0[7] = {1, 1, 1, 1, 1, 1, 0};
const int num1[7] = {0, 1, 1, 0, 0, 0, 0};
const int num2[7] = {1, 1, 0, 1, 1, 0, 1};
const int num3[7] = {1, 1, 1, 1, 0, 0, 1};
const int num4[7] = {0, 1, 1, 0, 0, 1, 1};
const int num5[7] = {1, 0, 1, 1, 0, 1, 1};
const int num6[7] = {1, 0, 1, 1, 1, 1, 1};
const int num7[7] = {1, 1, 1, 0, 0, 0, 0};
const int num8[7] = {1, 1, 1, 1, 1, 1, 1};
const int num9[7] = {1, 1, 1, 1, 0, 1, 1};

//Function to display a number on the 7-segment display
void displayNumber(const int* number) {
  digitalWrite(a, number[0]);
  digitalWrite(b, number[1]);
  digitalWrite(c, number[2]);
  digitalWrite(d, number[3]);
  digitalWrite(e, number[4]);
  digitalWrite(f, number[5]);
  digitalWrite(g, number[6]);
}

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
  //Display numbers 0 to 9 on the 7-segment display with a 1 second delay in between
  displayNumber(num0);
  delay(1000); 
  displayNumber(num1); 
  delay(1000); 
  displayNumber(num2); 
  delay(1000); 
  displayNumber(num3);
  delay(1000); 
  displayNumber(num4); 
  delay(1000); 
  displayNumber(num5); 
  delay(1000); 
  displayNumber(num6); 
  delay(1000); 
  displayNumber(num7); 
  delay(1000); 
  displayNumber(num8); 
  delay(1000); 
  displayNumber(num9); 
  delay(1000); 
}
