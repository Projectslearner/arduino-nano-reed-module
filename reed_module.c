/*
    Project name : Reed module
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-reed-module
*/

const int reedPin = 2; // Pin connected to the Reed switch
const int ledPin = 13; // Pin connected to an LED (optional)

void setup() {
  pinMode(reedPin, INPUT_PULLUP); // Set reed switch pin as input with internal pull-up resistor
  pinMode(ledPin, OUTPUT);        // Set LED pin as output
  Serial.begin(9600);             // Initialize serial communication
}

void loop() {
  int reedState = digitalRead(reedPin); // Read the state of the Reed switch

  // Check if the Reed switch is closed (magnet near)
  if (reedState == LOW) {
    digitalWrite(ledPin, HIGH); // Turn on LED
    Serial.println("Magnet detected"); // Print to serial monitor
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
    Serial.println("No magnet"); // Print to serial monitor
  }

  delay(500); // Delay to avoid spamming the serial monitor
}
