int userNumber = 0; // Variable to store user input

void setup() {
  // Start serial communication at 9600 baud
  Serial.begin(9600);
  // Print initial message
  Serial.println("Welcome! Please enter a number:");
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read the input as an integer
    userNumber = Serial.parseInt();
    
    // Print the value back to the Serial Monitor
    Serial.print("You entered: ");
    Serial.println(userNumber);
    
    // Prompt user again
    Serial.println("Enter another number:");
    
    // Small delay to avoid repeated reading
    delay(200);
  }
}
