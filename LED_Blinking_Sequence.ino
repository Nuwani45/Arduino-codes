int pinNo[5] = {2, 4, 6, 9, 8};  // pins in order
int count = sizeof(pinNo) / sizeof(pinNo[0]);

void setup() {
  // Set all bulb pins as OUTPUT
  for (int i = 0; i < count; i++) {
    pinMode(pinNo[i], OUTPUT);
  }
}

void loop() {
  // Turn bulbs ON in pattern… one by one
  for (int i = 0; i < count; i++) {
    digitalWrite(pinNo[i], HIGH); // turn on
    delay(500);                   // wait 0.5 sec
    digitalWrite(pinNo[i], LOW);  // turn off
    delay(300);// brief gap

  }
}
