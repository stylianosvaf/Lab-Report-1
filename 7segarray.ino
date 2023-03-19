/* Count from 0 to 9 on 7 seg using array */

//Define pins for the 7 segment display
int segPins[7] = {2, 3, 4, 5, 6, 7, 8};

//Define each digit from 0-9
int digits[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, //0
  {0, 1, 1, 0, 0, 0, 0}, //1
  {1, 1, 0, 1, 1, 0, 1}, //2
  {1, 1, 1, 1, 0, 0, 1}, //3
  {0, 1, 1, 0, 0, 1, 1}, //4
  {1, 0, 1, 1, 0, 1, 1}, //5
  {1, 0, 1, 1, 1, 1, 1}, //6
  {1, 1, 1, 0, 0, 0, 0}, //7
  {1, 1, 1, 1, 1, 1, 1}, //8
  {1, 1, 1, 0, 0, 1, 1}  //9
};

void setup() {
  //Set all pins as outputs
  for (int i = 0; i < 7; i++) {
    pinMode(segPins[i], OUTPUT);
  }
}

void loop() {
  //Display digits 0-9
  for (int i = 0; i < 10; i++) {
    displayDigit(i);
    delay(1000); 
  }
}

void displayDigit(int digit) {
  //Turn off all pins
  for (int i = 0; i < 7; i++) {
    digitalWrite(segPins[i], LOW);
  }

  //Turn on pins based on the binary values in the array
  for (int i = 0; i < 7; i++) {
    if (digits[digit][i] == 1) {
      digitalWrite(segPins[i], HIGH);
    }
  }
}