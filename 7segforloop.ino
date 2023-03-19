/* Count from 0 to 9 on 7 seg using for loop for pinmode */

// Set pins to letters of the 7-seg
const int a = 2; 
const int b = 3;
const int c = 4; 
const int d = 5; 
const int e = 6;
const int f = 7; 
const int g = 8; 

int number[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1} // 9
};

void setup() {
  //Set all outputs using for loop
  for (int i = 2; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  //Go through 0-9 using for loop
  for (int i = 0; i <= 9; i++) {
    digitalWrite(a, number[i][0]);
    digitalWrite(b, number[i][1]);
    digitalWrite(c, number[i][2]);
    digitalWrite(d, number[i][3]);
    digitalWrite(e, number[i][4]);
    digitalWrite(f, number[i][5]);
    digitalWrite(g, number[i][6]);
    delay(1000);
  }
}
