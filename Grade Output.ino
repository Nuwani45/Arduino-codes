int a = 0;    // variable to store user input
String input;

void setup() {
  Serial.begin(9600);
  Serial.println("Enter your marks (0 to 100):");
}

void loop() {

  // Check if user typed something
  if (Serial.available() > 0) {

    input = Serial.readStringUntil('\n');  // read one line
    a = input.toInt();                     // convert to number

    Serial.print("You entered: ");
    Serial.println(a);

    // ----- Grade Checking -----
    if (a >= 70) {
      Serial.println("You received distinction");
    }
    else if (a >= 40) {
      Serial.println("You received merit");
    }
    else {
      Serial.println("You received N/A");
    }

    Serial.println("------------------------");
    Serial.println("Enter another mark:");
  }
}
